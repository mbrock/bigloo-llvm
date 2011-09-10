/*===========================================================================*/
/*   (Ast/node.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/node.scm)*/
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

	typedef struct BgL_castzd2nullzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                     *BgL_castzd2nullzd2_bglt;

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


	static obj_t BGl_objectzd2ze3structzd2letzd2v4256z31zzast_nodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vrefz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_castz00_bglt BGl_castzd2nilzd2zzast_nodez00();
	static obj_t BGl_z52thezd2nodezd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl__makezd2makezd2boxz00zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__sequencezd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2externzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_z52thezd2setqzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2fail4218z00zzast_nodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_isaz00_bglt BGl_z52allocatezd2isaz80zzast_nodez00();
	static obj_t BGl__boxzd2setz12zf3z33zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzd2_bglt
		BGl_makezd2boxzd2refz00zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt BGl_letzd2funzd2nilz00zzast_nodez00();
	static obj_t BGl_nodezd2walkzd2jumpzd2exzd2it4234z00zzast_nodez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_fillzd2vallocz12zc0zzast_nodez00(BgL_vallocz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__atomzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_z52allocatezd2jumpzd2exzd2itz80zzast_nodez00();
	static obj_t BGl_z52thezd2appzd2lyzd2nilz80zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_nodez00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt
		BGl_z52allocatezd2pragmaz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_newz00_bglt
		BGl_fillzd2newz12zc0zzast_nodez00(BgL_newz00_bglt, obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2nodezf2effectz12z32zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__failzf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__newzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt BGl_setfieldzd2nilzd2zzast_nodez00();
	static obj_t BGl__z52allocatezd2externz80zzast_nodez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_closurez00_bglt BGl_closurezd2nilzd2zzast_nodez00();
	static obj_t BGl__fillzd2boxzd2refz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__boxzd2setz12zd2nilz12zzast_nodez00(obj_t);
	static obj_t BGl__makezd2varzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__nodezf2effectzd2nilz20zzast_nodez00(obj_t);
	static obj_t BGl__jumpzd2exzd2itzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_letzd2varzd2_bglt BGl_letzd2varzd2nilz00zzast_nodez00();
	BGL_EXPORTED_DECL BgL_atomz00_bglt
		BGl_fillzd2atomz12zc0zzast_nodez00(BgL_atomz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl__fillzd2appz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_makezd2makezd2boxz00zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		BgL_nodez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_vrefzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_letzd2varzd2zzast_nodez00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2cast4280ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_failz00_bglt
		BGl_fillzd2failz12zc0zzast_nodez00(BgL_failz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2isazd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_kwotez00zzast_nodez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2newz80zzast_nodez00(obj_t);
	static obj_t BGl__funcallzf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_nodezd2walkzd2default4193z00zzast_nodez00(BgL_nodez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_isaz00_bglt BGl_isazd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_externz00_bglt
		BGl_fillzd2externz12zc0zzast_nodez00(BgL_externz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2appzd2lyz00zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__vsetz12zd2nilzc0zzast_nodez00(obj_t);
	static obj_t BGl__z52allocatezd2makezd2boxz52zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzd2_bglt
		BGl_fillzd2boxzd2refz12z12zzast_nodez00(BgL_boxzd2refzd2_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt
		BGl_fillzd2pragmaz12zc0zzast_nodez00(BgL_pragmaz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2letzd2funzd2nilz80zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_vrefz00_bglt BGl_vrefzd2nilzd2zzast_nodez00();
	static obj_t BGl_z52thezd2valloczd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_setzd2exzd2itz00_bglt
		BGl_z52allocatezd2setzd2exzd2itz80zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2kwote4349ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__fillzd2setzd2exzd2itz12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DEF obj_t BGl_conditionalz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_selectzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_setqz00_bglt BGl_setqzd2nilzd2zzast_nodez00();
	static obj_t BGl_z52thezd2closurezd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl__castzd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_boxzd2refzd2zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_varz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_nodez00();
	static obj_t BGl__setzd2exzd2itzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nodezd2walkzd2zzast_nodez00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2selec4264ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__nodezf2effectzf3z01zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_newz00_bglt BGl_z52allocatezd2newz80zzast_nodez00();
	static obj_t BGl_z52thezd2letzd2varzd2nilz80zzast_nodez00 = BUNSPEC;
	static obj_t BGl__vrefzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2makezd2boxz52zzast_nodez00();
	static obj_t BGl__makezd2vrefzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__vsetz12zf3ze1zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2setfi4317ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_valloczf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2nodezf2effectzd2nilza0zzast_nodez00 = BUNSPEC;
	static obj_t BGl__letzd2funzd2nilz00zzast_nodez00(obj_t);
	static obj_t BGl__makezd2sequencezd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_kwotez00_bglt
		BGl_fillzd2kwotez12zc0zzast_nodez00(BgL_kwotez00_bglt, obj_t,
		BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_letzd2varzd2_bglt
		BGl_z52allocatezd2letzd2varz52zzast_nodez00();
	BGL_EXPORTED_DEF obj_t BGl_nodezf2effectzf2zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_makezd2boxzd2zzast_nodez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appzd2lyzd2_bglt
		BGl_z52allocatezd2appzd2lyz52zzast_nodez00();
	static obj_t BGl__makezd2nodezd2zzast_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2makezd2boxz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2walkzd2funcall4208z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2vref4302ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__closurezd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_vrefz00_bglt
		BGl_fillzd2vrefz12zc0zzast_nodez00(BgL_vrefz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl__z52allocatezd2vrefz80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_castzd2nullzf3z21zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2setq4276ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__varzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__fillzd2boxzd2setz12z12z00zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2failzd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl__letzd2varzd2nilz00zzast_nodez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_selectz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl_z52thezd2kwotezd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_vallocz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2nodez80zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2node4370ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL BgL_sequencez00_bglt
		BGl_makezd2sequencezd2zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzd2_bglt
		BGl_z52allocatezd2boxzd2refz52zzast_nodez00();
	BGL_EXPORTED_DECL bool_t BGl_externzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl__fillzd2castz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_setfieldzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2funca4333ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__vrefzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2pragmazd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2extern4210z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4238z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_pragmazf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4242z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4246z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2pragmaz80zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4250z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4254z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__nodezd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4258z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_closurez00_bglt
		BGl_makezd2closurezd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4262z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2setzd2exzd2itzd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_conditionalzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt
		BGl_makezd2vlengthzd2zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4266z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4270z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__setqzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4274z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4278z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4282z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2walkzd2appzd2ly4206zd2zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2sequencez80zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4286z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2appzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__conditionalzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4300z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4292z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4305z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2letzd2varz52zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4296z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2selectzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4309z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4314z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2getfi4321ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4319z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2newz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4323z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_setzd2exzd2itz00_bglt
		BGl_makezd2setzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_setqz00_bglt BGl_z52allocatezd2setqz80zzast_nodez00();
	static obj_t BGl_structzb2objectzd2ze3objec4327z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4331z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sequencezf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2app4341ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4335z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__jumpzd2exzd2itzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4339z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_setzd2exzd2itz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4343z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4347z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4351z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4355z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2walkzd2app4204z00zzast_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4359z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4363z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4368z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2conditionalz80zzast_nodez00(obj_t);
	static obj_t BGl__makezd2boxzd2nilz00zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2jumpzd2exzd2itzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4372z83zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt
		BGl_fillzd2setfieldz12zc0zzast_nodez00(BgL_setfieldz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_externz00_bglt BGl_externzd2nilzd2zzast_nodez00();
	static obj_t BGl__z52allocatezd2vsetz12z92zzast_nodez00(obj_t);
	static obj_t BGl__getfieldzd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nodezf3zf3zzast_nodez00(obj_t);
	static obj_t BGl__isazd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_sequencez00_bglt
		BGl_z52allocatezd2sequencez80zzast_nodez00();
	static obj_t BGl__fillzd2closurez12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_boxzd2refzf3z21zzast_nodez00(obj_t);
	static obj_t BGl__fillzd2kwotez12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_failz00_bglt BGl_failzd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_appzd2lyzd2_bglt BGl_appzd2lyzd2nilz00zzast_nodez00();
	static obj_t BGl__fillzd2vlengthz12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_externz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2boxzd2refz52zzast_nodez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sequencez00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_kwotez00_bglt BGl_z52allocatezd2kwotez80zzast_nodez00();
	BGL_EXPORTED_DECL bool_t BGl_vsetz12zf3ze1zzast_nodez00(obj_t);
	static obj_t BGl__z52allocatezd2nodezf2effectz72zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_varzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_sequencez00_bglt
		BGl_fillzd2sequencez12zc0zzast_nodez00(BgL_sequencez00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2condi4272ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_getfieldzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2newzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl__selectzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_isazf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_appz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_kwotez00_bglt BGl_kwotezd2nilzd2zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2seque4345ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2pragm4325ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_newz00_bglt BGl_newzd2nilzd2zzast_nodez00();
	static obj_t BGl__makezd2letzd2varz00zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2varz80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_z52allocatezd2castzd2nullz52zzast_nodez00();
	BGL_EXPORTED_DECL BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl_nodezd2walkzd2atom4196z00zzast_nodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_closurez00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_vlengthz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_makezd2letzd2funz00zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_closurez00_bglt
		BGl_fillzd2closurez12zc0zzast_nodez00(BgL_closurez00_bglt, obj_t,
		BgL_typez00_bglt, BgL_variablez00_bglt);
	static obj_t BGl_z52thezd2conditionalzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2boxzd2ref4224zd2zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__valloczf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__nodezd2walkzd2zzast_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2atomz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt
		BGl_fillzd2vlengthz12zc0zzast_nodez00(BgL_vlengthz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl_objectzd2ze3structzd2boxzd2r4240z31zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2fail4268ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__fillzd2selectz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__nodezf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2appzd2lyz52zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2sequencezd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2vallo4307ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__fillzd2failz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_selectz00_bglt BGl_makezd2selectzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt
		BGl_fillzd2getfieldz12zc0zzast_nodez00(BgL_getfieldz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_castz00_bglt BGl_z52allocatezd2castz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_vallocz00_bglt BGl_makezd2valloczd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt BGl_valloczd2nilzd2zzast_nodez00();
	static obj_t BGl__fillzd2letzd2varz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2boxzd2refz00zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt BGl_z52allocatezd2varz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_atomz00_bglt BGl_z52allocatezd2atomz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_failz00_bglt BGl_z52allocatezd2failz80zzast_nodez00();
	static obj_t BGl__fillzd2vallocz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_fillzd2nodez12zc0zzast_nodez00(BgL_nodez00_bglt, obj_t,
		BgL_typez00_bglt);
	static bool_t BGl_nodezd2walkza2z70zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_z52thezd2boxzd2setz12zd2nilz92zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_isaz00_bglt BGl_makezd2isazd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_nodezf2effectzf2_bglt
		BGl_nodezf2effectzd2nilz20zzast_nodez00();
	BGL_EXPORTED_DECL bool_t BGl_appzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2nodezf24365z11zzast_nodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vsetz12z12zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_setqzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl__setfieldzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__boxzd2refzf3z21zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_conditionalz00_bglt
		BGl_fillzd2conditionalz12zc0zzast_nodez00(BgL_conditionalz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt,
		BgL_nodez00_bglt);
	static obj_t BGl_methodzd2initzd2zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2makezd24244z31zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl__failzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__externzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_setqz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl__setzd2exzd2itzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__pragmazf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_closurez00_bglt
		BGl_z52allocatezd2closurez80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt
		BGl_z52allocatezd2vlengthz80zzast_nodez00();
	static obj_t BGl__setfieldzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_letzd2varzd2_bglt
		BGl_fillzd2letzd2varz12z12zzast_nodez00(BgL_letzd2varzd2_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl__makezd2getfieldzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2closu4353ze3zzast_nodez00(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__fillzd2letzd2funz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_letzd2funzd2zzast_nodez00 = BUNSPEC;
	static obj_t BGl__fillzd2castzd2nullz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funcallz00_bglt
		BGl_makezd2funcallzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appzd2lyzd2_bglt
		BGl_fillzd2appzd2lyz12z12zzast_nodez00(BgL_appzd2lyzd2_bglt, obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_castz00_bglt BGl_makezd2castzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__fillzd2externz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_conditionalz00_bglt
		BGl_z52allocatezd2conditionalz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_setzd2exzd2itz00_bglt
		BGl_fillzd2setzd2exzd2itz12zc0zzast_nodez00(BgL_setzd2exzd2itz00_bglt,
		obj_t, BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2select4220z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2pragmaz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funcallz00_bglt BGl_funcallzd2nilzd2zzast_nodez00();
	static obj_t BGl_nodezd2walkzd2setzd2exzd2it4232z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl__z52allocatezd2jumpzd2exzd2itz80zzast_nodez00(obj_t);
	static obj_t BGl__fillzd2vrefz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_failz00_bglt BGl_makezd2failzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__castzd2nullzf3z21zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_nodezd2walkzd2kwote4200z00zzast_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl__sequencezf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setzd2exzd2itz00_bglt
		BGl_setzd2exzd2itzd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_externz00_bglt BGl_makezd2externzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2boxzd2setz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_makezd2castzd2nullz00zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__setqzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sequencez00_bglt BGl_sequencezd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DEF obj_t BGl_castzd2nullzd2zzast_nodez00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2vsetz124298zf1zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2var4357ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__makezd2kwotezd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DEF obj_t BGl_pragmaz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2var4198z00zzast_nodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt BGl_pragmazd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt
		BGl_makezd2getfieldzd2zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl__fillzd2conditionalz12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodezf2effectzf2_bglt
		BGl_z52allocatezd2nodezf2effectz72zzast_nodez00();
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl_objectzd2ze3structzd2jumpzd24248z31zzast_nodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_fillzd2letzd2funz12z12zzast_nodez00(BgL_letzd2funzd2_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	static obj_t BGl__makezd2selectzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2valloczd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2isazd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setqz00_bglt
		BGl_fillzd2setqz12zc0zzast_nodez00(BgL_setqz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__z52allocatezd2closurez80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zc0_bglt
		BGl_boxzd2setz12zd2nilz12zzast_nodez00();
	static obj_t BGl_z52thezd2atomzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2vlengthz80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt
		BGl_makezd2vsetz12zc0zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt, BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL BgL_selectz00_bglt BGl_selectzd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_newz00_bglt BGl_makezd2newzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_conditionalz00_bglt
		BGl_makezd2conditionalzd2zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl_objectzd2ze3structzd2boxzd2s4236z31zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2appz80zzast_nodez00(obj_t);
	static obj_t BGl__newzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__z52allocatezd2getfieldz80zzast_nodez00(obj_t);
	static obj_t BGl__z52allocatezd2setzd2exzd2itz80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zc0_bglt
		BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__getfieldzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_castz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2conditiona4216z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_closurezf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_z52allocatezd2letzd2funz52zzast_nodez00();
	static obj_t BGl__kwotezd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_vlengthzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_nodezd2walkzd2sequence4202z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2funcallzd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_jumpzd2exzd2itz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl_z52thezd2castzd2nullzd2nilz80zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_atomz00zzast_nodez00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	BGL_EXPORTED_DEF obj_t BGl_failz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_funcallz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl__makezd2setqzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt BGl_vlengthzd2nilzd2zzast_nodez00();
	static obj_t BGl__fillzd2funcallz12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2walkzd2cast4212z00zzast_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2isa4289ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt
		BGl_fillzd2vsetz12z12zd2zzast_nodez00(BgL_vsetz12z12_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl__z52allocatezd2boxzd2setz12z40zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_nodezf2effectzf2_bglt
		BGl_makezd2nodezf2effectz20zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t);
	static obj_t BGl_nodezd2walkzd2letzd2fun4228zd2zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_nodez00();
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt
		BGl_z52allocatezd2getfieldz80zzast_nodez00();
	static obj_t BGl__externzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__kwotezf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_appzd2lyzf3z21zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_fillzd2jumpzd2exzd2itz12zc0zzast_nodez00(BgL_jumpzd2exzd2itz00_bglt,
		obj_t, BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_selectz00_bglt
		BGl_z52allocatezd2selectz80zzast_nodez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt BGl_z52allocatezd2appz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_z52allocatezd2vallocz80zzast_nodez00();
	static obj_t BGl__makezd2setzd2exzd2itzd2zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__z52allocatezd2setqz80zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2vsetz12zd2nilz40zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2boxzd2setz124226zc0zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_newzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2appzd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_getfieldz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_isaz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_fillzd2varz12zc0zzast_nodez00(BgL_varz00_bglt, obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl__appzd2lyzd2nilz00zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_conditionalz00_bglt
		BGl_conditionalzd2nilzd2zzast_nodez00();
	static obj_t BGl__makezd2closurezd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__varzf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__makezd2vlengthzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__conditionalzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_isaz00_bglt
		BGl_fillzd2isaz12zc0zzast_nodez00(BgL_isaz00_bglt, obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl__funcallzd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt BGl_appzd2nilzd2zzast_nodez00();
	static obj_t BGl__isazf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__fillzd2setfieldz12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2externzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nodezf2effectzf3z01zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zc0_bglt
		BGl_z52allocatezd2boxzd2setz12z40zzast_nodez00();
	static obj_t BGl_nodezd2walkzd2letzd2var4230zd2zzast_nodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_funcallz00_bglt
		BGl_fillzd2funcallz12zc0zzast_nodez00(BgL_funcallz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	static obj_t BGl__makezd2setfieldzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_makezd2boxzf3z21zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2exter4329ze3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_appzd2lyzd2zzast_nodez00 = BUNSPEC;
	static obj_t BGl_z52thezd2makezd2boxzd2nilz80zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_atomz00_bglt BGl_atomzd2nilzd2zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2letzd2f4260z31zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2letzd2funz52zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_letzd2varzf3z21zzast_nodez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_boxzd2setz12zc0zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt
		BGl_z52allocatezd2vsetz12z92zzast_nodez00();
	static obj_t BGl_z52thezd2vlengthzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_z52thezd2getfieldzd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_boxzd2setz12zf3z33zzast_nodez00(obj_t);
	static obj_t BGl__makezd2newzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzd2_bglt BGl_boxzd2refzd2nilz00zzast_nodez00();
	BGL_EXPORTED_DECL BgL_funcallz00_bglt
		BGl_z52allocatezd2funcallz80zzast_nodez00();
	static obj_t BGl__fillzd2sequencez12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_castzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl__closurezf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt BGl_makezd2pragmazd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__vlengthzf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2vleng4294ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__valloczd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt
		BGl_makezd2setfieldzd2zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl__makezd2castzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2walkzd2setq4214z00zzast_nodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_fillzd2makezd2boxz12z12zzast_nodez00(BgL_makezd2boxzd2_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_setzd2exzd2itzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_vrefz00_bglt BGl_z52allocatezd2vrefz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_externz00_bglt
		BGl_z52allocatezd2externz80zzast_nodez00();
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_fillzd2appz12zc0zzast_nodez00(BgL_appz00_bglt, obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__vlengthzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl__fillzd2nodez12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2atomzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2failzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__appzf3zf3zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_letzd2funzf3z21zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2appzd2l4337z31zzast_nodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zc0_bglt
		BGl_fillzd2boxzd2setz12z12z00zzast_nodez00(BgL_boxzd2setz12zc0_bglt, obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2vsetz12z12zd2zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2setfieldz80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_z52allocatezd2nodez80zzast_nodez00();
	static obj_t BGl__fillzd2getfieldz12zc0zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2castz80zzast_nodez00(obj_t);
	static obj_t BGl__makezd2letzd2funz00zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt BGl_vsetz12zd2nilzc0zzast_nodez00();
	BGL_EXPORTED_DEF obj_t BGl_newz00zzast_nodez00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2atom4361ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__makezd2conditionalzd2zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2boxzd2refzd2nilz80zzast_nodez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2atomz80zzast_nodez00(obj_t);
	static obj_t BGl__castzf3zf3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2failz80zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2castzd24284z31zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2funcallz80zzast_nodez00(obj_t);
	static obj_t BGl__castzd2nullzd2nilz00zzast_nodez00(obj_t);
	static obj_t BGl__nodezd2walkzd2default4193z00zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2castzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl__atomzd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_kwotezf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_makezd2boxzd2nilz00zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2setzd2e4252z31zzast_nodez00(obj_t,
		obj_t);
	static obj_t BGl__letzd2varzf3z21zzast_nodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt
		BGl_z52allocatezd2setfieldz80zzast_nodez00();
	static obj_t BGl__z52allocatezd2castzd2nullz52zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt BGl_getfieldzd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL bool_t BGl_jumpzd2exzd2itzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2setfieldzd2nilz52zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_castz00_bglt
		BGl_fillzd2castz12zc0zzast_nodez00(BgL_castz00_bglt, obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__makezd2nodezf2effectz20zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exzd2itzd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DEF obj_t BGl_setfieldz00zzast_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_variablez00_bglt);
	static obj_t BGl__boxzd2refzd2nilz00zzast_nodez00(obj_t);
	static obj_t BGl__fillzd2jumpzd2exzd2itz12zc0zzast_nodez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2selectz80zzast_nodez00(obj_t);
	static obj_t BGl__appzd2lyzf3z21zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2vallocz80zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_nodezf2effectzf2_bglt
		BGl_fillzd2nodezf2effectz12z32zzast_nodez00(BgL_nodezf2effectzf2_bglt,
		obj_t, BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_makezd2nodezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl__pragmazd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_atomzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_castzd2nullzd2nilz00zzast_nodez00();
	BGL_EXPORTED_DECL BgL_appzd2lyzd2_bglt
		BGl_makezd2appzd2lyz00zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__z52allocatezd2kwotez80zzast_nodez00(obj_t);
	static obj_t BGl__makezd2pragmazd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2isaz80zzast_nodez00(obj_t);
	extern BgL_variablez00_bglt BGl_variablezd2nilzd2zzast_varz00();
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_fillzd2castzd2nullz12z12zzast_nodez00(BgL_castzd2nullzd2_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_failzf3zf3zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL BgL_letzd2varzd2_bglt
		BGl_makezd2letzd2varz00zzast_nodez00(obj_t, BgL_typez00_bglt, obj_t, obj_t,
		obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl__appzd2nilzd2zzast_nodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_funcallzf3zf3zzast_nodez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2new4311ze3zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__fillzd2setqz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__letzd2funzf3z21zzast_nodez00(obj_t, obj_t);
	static obj_t BGl__fillzd2varz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2vsetz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2castzd2nullz00zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__selectzd2nilzd2zzast_nodez00(obj_t);
	static obj_t BGl_z52thezd2varzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl_nodezd2walkzd2makezd2box4222zd2zzast_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2funcallzd2zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_nodez00();
	static obj_t BGl__fillzd2appzd2lyz12z12zzast_nodez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2isaz12zc0zzast_nodez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt BGl_varzd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_selectz00_bglt
		BGl_fillzd2selectz12zc0zzast_nodez00(BgL_selectz00_bglt, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, obj_t, BgL_typez00_bglt);
	static obj_t BGl_z52thezd2vrefzd2nilz52zzast_nodez00 = BUNSPEC;
	static obj_t BGl__makezd2boxzf3z21zzast_nodez00(obj_t, obj_t);
	static obj_t __cnst[35];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2failzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2f5619z00,
		BGl__z52allocatezd2failz80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2castzd2nullz12zd2envzc0zzast_nodez00,
		BgL_bgl__fillza7d2castza7d2n5620z00,
		BGl__fillzd2castzd2nullz12z12zzast_nodez00, 0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getfieldzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__getfieldza7d2nilza75621z00, BGl__getfieldzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2kwotezd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2kwoteza7d25622z00, BGl__makezd2kwotezd2zzast_nodez00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2isaz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2isaza712za7c5623za7, BGl__fillzd2isaz12zc0zzast_nodez00,
		0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2valloczd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2vallocza7d5624z00, BGl__makezd2valloczd2zzast_nodez00, 0L,
		BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vsetz12zf3zd2envz33zzast_nodez00,
		BgL_bgl__vsetza712za7f3za7e1za7za75625za7, BGl__vsetz12zf3ze1zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczd2nilzd2envz00zzast_nodez00,
		BgL_bgl__vallocza7d2nilza7d25626z00, BGl__valloczd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2varzf3zd2envzf3zzast_nodez00,
		BgL_bgl__letza7d2varza7f3za7215627za7, BGl__letzd2varzf3z21zzast_nodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jumpzd2exzd2itzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__jumpza7d2exza7d2itza75628za7,
		BGl__jumpzd2exzd2itzd2nilzd2zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2setfieldzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2setfield5629za7, BGl__makezd2setfieldzd2zzast_nodez00, 0L,
		BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2atomz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2atomza712za75630za7, BGl__fillzd2atomz12zc0zzast_nodez00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setfieldzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__setfieldza7d2nilza75631z00, BGl__setfieldzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2letzd2funzd2envz80zzast_nodez00,
		BgL_bgl__za752allocateza7d2l5632z00,
		BGl__z52allocatezd2letzd2funz52zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2setzd2exzd2itzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2s5633z00,
		BGl__z52allocatezd2setzd2exzd2itz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closurezd2nilzd2envz00zzast_nodez00,
		BgL_bgl__closureza7d2nilza7d5634z00, BGl__closurezd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atomzf3zd2envz21zzast_nodez00,
		BgL_bgl__atomza7f3za7f3za7za7ast5635z00, BGl__atomzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2closurezd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2c5636z00,
		BGl__z52allocatezd2closurez80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2externz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2externza715637z00, BGl__fillzd2externz12zc0zzast_nodez00,
		0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2letzd2varzd2envz80zzast_nodez00,
		BgL_bgl__za752allocateza7d2l5638z00,
		BGl__z52allocatezd2letzd2varz52zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2nilzd2envz00zzast_nodez00,
		BgL_bgl__nodeza7d2nilza7d2za7za75639z00, BGl__nodezd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2newzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2n5640z00, BGl__z52allocatezd2newz80zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2vallocz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2vallocza715641z00, BGl__fillzd2vallocz12zc0zzast_nodez00,
		0L, BUNSPEC, 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2letzd2funzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2letza7d2fu5642z00, BGl__makezd2letzd2funz00zzast_nodez00,
		0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2letzd2varz12zd2envzc0zzast_nodez00,
		BgL_bgl__fillza7d2letza7d2va5643z00,
		BGl__fillzd2letzd2varz12z12zzast_nodez00, 0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conditionalzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__conditionalza7d2n5644za7, BGl__conditionalzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2pragmazd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2pragmaza7d5645z00, BGl__makezd2pragmazd2zzast_nodez00, 0L,
		BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2closurezd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2closureza75646z00, BGl__makezd2closurezd2zzast_nodez00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sequencezd2nilzd2envz00zzast_nodez00,
		BgL_bgl__sequenceza7d2nilza75647z00, BGl__sequencezd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2makezd2boxzd2envz80zzast_nodez00,
		BgL_bgl__za752allocateza7d2m5648z00,
		BGl__z52allocatezd2makezd2boxz52zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setqzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__setqza7d2nilza7d2za7za75649z00, BGl__setqzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2getfieldzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2g5650z00,
		BGl__z52allocatezd2getfieldz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2letzd2varzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2letza7d2va5651z00, BGl__makezd2letzd2varz00zzast_nodez00,
		0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2selectzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2selectza7d5652z00, BGl__makezd2selectzd2zzast_nodez00, 0L,
		BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_externzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__externza7d2nilza7d25653z00, BGl__externzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__varza7d2nilza7d2za7za7a5654z00, BGl__varzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atomzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__atomza7d2nilza7d2za7za75655z00, BGl__atomzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2jumpzd2exzd2itz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2jumpza7d2e5656z00,
		BGl__fillzd2jumpzd2exzd2itz12zc0zzast_nodez00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2appzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2appza7d2za7za75657z00, BGl__makezd2appzd2zzast_nodez00,
		0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2nodezf2effectz12zd2envze0zzast_nodez00,
		BgL_bgl__fillza7d2nodeza7f2e5658z00,
		BGl__fillzd2nodezf2effectz12z32zzast_nodez00, 0L, BUNSPEC, 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2walkzd2default4193zd2envzd2zzast_nodez00,
		BgL_bgl__nodeza7d2walkza7d2d5659z00,
		BGl__nodezd2walkzd2default4193z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varzf3zd2envz21zzast_nodez00,
		BgL_bgl__varza7f3za7f3za7za7ast_5660z00, BGl__varzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2atomzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2atomza7d2za75661za7, BGl__makezd2atomzd2zzast_nodez00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_boxzd2refzf3zd2envzf3zzast_nodez00,
		BgL_bgl__boxza7d2refza7f3za7215662za7, BGl__boxzd2refzf3z21zzast_nodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2makezd2boxz12zd2envzc0zzast_nodez00,
		BgL_bgl__fillza7d2makeza7d2b5663z00,
		BGl__fillzd2makezd2boxz12z12zzast_nodez00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2vsetz12zd2envz40zzast_nodez00,
		BgL_bgl__za752allocateza7d2v5664z00,
		BGl__z52allocatezd2vsetz12z92zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2appzd2lyz12zd2envzc0zzast_nodez00,
		BgL_bgl__fillza7d2appza7d2ly5665z00,
		BGl__fillzd2appzd2lyz12z12zzast_nodez00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2nodezf2effectzd2envza0zzast_nodez00,
		BgL_bgl__za752allocateza7d2n5666z00,
		BGl__z52allocatezd2nodezf2effectz72zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2setfieldzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2s5667z00,
		BGl__z52allocatezd2setfieldz80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2conditionalz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2conditio5668za7,
		BGl__fillzd2conditionalz12zc0zzast_nodez00, 0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazf3zd2envz21zzast_nodez00,
		BgL_bgl__isaza7f3za7f3za7za7ast_5669z00, BGl__isazf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vlengthzf3zd2envz21zzast_nodez00,
		BgL_bgl__vlengthza7f3za7f3za7za75670z00, BGl__vlengthzf3zf3zzast_nodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2jumpzd2exzd2itzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2j5671z00,
		BGl__z52allocatezd2jumpzd2exzd2itz80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2externzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2e5672z00,
		BGl__z52allocatezd2externz80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2atomzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2a5673z00,
		BGl__z52allocatezd2atomz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_appzd2lyzd2nilzd2envzd2zzast_nodez00,
		BgL_bgl__appza7d2lyza7d2nilza75674za7, BGl__appzd2lyzd2nilz00zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2boxzf3zd2envzf3zzast_nodez00,
		BgL_bgl__makeza7d2boxza7f3za725675za7, BGl__makezd2boxzf3z21zzast_nodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2appzd2lyzd2envz80zzast_nodez00,
		BgL_bgl__za752allocateza7d2a5676z00,
		BGl__z52allocatezd2appzd2lyz52zzast_nodez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2boxzd2refz12zd2envzc0zzast_nodez00,
		BgL_bgl__fillza7d2boxza7d2re5677z00,
		BGl__fillzd2boxzd2refz12z12zzast_nodez00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2pragmaz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2pragmaza715678z00, BGl__fillzd2pragmaz12zc0zzast_nodez00,
		0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funcallzf3zd2envz21zzast_nodez00,
		BgL_bgl__funcallza7f3za7f3za7za75679z00, BGl__funcallzf3zf3zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_externzf3zd2envz21zzast_nodez00,
		BgL_bgl__externza7f3za7f3za7za7a5680z00, BGl__externzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2getfieldz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2getfield5681za7, BGl__fillzd2getfieldz12zc0zzast_nodez00,
		0L, BUNSPEC, 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2castz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2castza712za75682za7, BGl__fillzd2castz12zc0zzast_nodez00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_appzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__appza7d2nilza7d2za7za7a5683z00, BGl__appzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2castzd2nullzd2envz80zzast_nodez00,
		BgL_bgl__za752allocateza7d2c5684z00,
		BGl__z52allocatezd2castzd2nullz52zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf3zd2envz21zzast_nodez00,
		BgL_bgl__vallocza7f3za7f3za7za7a5685z00, BGl__valloczf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_castzf3zd2envz21zzast_nodez00,
		BgL_bgl__castza7f3za7f3za7za7ast5686z00, BGl__castzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2varzd2nilzd2envzd2zzast_nodez00,
		BgL_bgl__letza7d2varza7d2nil5687z00, BGl__letzd2varzd2nilz00zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2vlengthz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2vlengthza75688z00, BGl__fillzd2vlengthz12zc0zzast_nodez00,
		0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2valloczd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2v5689z00,
		BGl__z52allocatezd2vallocz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2appzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2a5690z00, BGl__z52allocatezd2appz80zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2boxzd2nilzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2boxza7d2ni5691z00, BGl__makezd2boxzd2nilz00zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vsetz12zd2envz12zzast_nodez00,
		BgL_bgl__makeza7d2vsetza712za75692za7, BGl__makezd2vsetz12zc0zzast_nodez00,
		0L, BUNSPEC, 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2vrefz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2vrefza712za75693za7, BGl__fillzd2vrefz12zc0zzast_nodez00,
		0L, BUNSPEC, 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazd2nilzd2envz00zzast_nodez00,
		BgL_bgl__pragmaza7d2nilza7d25694z00, BGl__pragmazd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2sequencez12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2sequence5695za7, BGl__fillzd2sequencez12zc0zzast_nodez00,
		0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2varzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2varza7d2za7za75696z00, BGl__makezd2varzd2zzast_nodez00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5461z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2at5697z00,
		BGl_nodezd2walkzd2atom4196z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5462z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2va5698z00,
		BGl_nodezd2walkzd2var4198z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2exzd2itzf3zd2envz21zzast_nodez00,
		BgL_bgl__setza7d2exza7d2itza7f5699za7,
		BGl__setzd2exzd2itzf3zf3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5463z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2kw5700z00,
		BGl_nodezd2walkzd2kwote4200z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5464z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2se5701z00,
		BGl_nodezd2walkzd2sequence4202z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5465z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2ap5702z00,
		BGl_nodezd2walkzd2app4204z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5466z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2ap5703z00,
		BGl_nodezd2walkzd2appzd2ly4206zd2zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5467z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2fu5704z00,
		BGl_nodezd2walkzd2funcall4208z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5468z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2ex5705z00,
		BGl_nodezd2walkzd2extern4210z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5470z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2se5706z00,
		BGl_nodezd2walkzd2setq4214z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5469z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2ca5707z00,
		BGl_nodezd2walkzd2cast4212z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5471z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2co5708z00,
		BGl_nodezd2walkzd2conditiona4216z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2kwotez12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2kwoteza7125709z00, BGl__fillzd2kwotez12zc0zzast_nodez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5472z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2fa5710z00,
		BGl_nodezd2walkzd2fail4218z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5473z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2se5711z00,
		BGl_nodezd2walkzd2select4220z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5474z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2ma5712z00,
		BGl_nodezd2walkzd2makezd2box4222zd2zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf3zd2envz21zzast_nodez00,
		BgL_bgl__vrefza7f3za7f3za7za7ast5713z00, BGl__vrefzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5475z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2bo5714z00,
		BGl_nodezd2walkzd2boxzd2ref4224zd2zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getfieldzf3zd2envz21zzast_nodez00,
		BgL_bgl__getfieldza7f3za7f3za75715za7, BGl__getfieldzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5476z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2bo5716z00,
		BGl_nodezd2walkzd2boxzd2setz124226zc0zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5477z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2le5717z00,
		BGl_nodezd2walkzd2letzd2fun4228zd2zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5478z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2le5718z00,
		BGl_nodezd2walkzd2letzd2var4230zd2zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5480z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2ju5719z00,
		BGl_nodezd2walkzd2jumpzd2exzd2it4234z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5479z00zzast_nodez00,
		BgL_bgl_nodeza7d2walkza7d2se5720z00,
		BGl_nodezd2walkzd2setzd2exzd2it4232z00zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5481z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5721z00,
		BGl_objectzd2ze3structzd2boxzd2s4236z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5483z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75722z00,
		BGl_structzb2objectzd2ze3objec4238z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5485z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5723z00,
		BGl_objectzd2ze3structzd2boxzd2r4240z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5486z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75724z00,
		BGl_structzb2objectzd2ze3objec4242z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5487z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5725z00,
		BGl_objectzd2ze3structzd2makezd24244z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5488z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75726z00,
		BGl_structzb2objectzd2ze3objec4246z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5500z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75727z00,
		BGl_structzb2objectzd2ze3objec4270z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5490z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75728z00,
		BGl_structzb2objectzd2ze3objec4250z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5489z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5729z00,
		BGl_objectzd2ze3structzd2jumpzd24248z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5501z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5730z00,
		BGl_objectzd2ze3structzd2condi4272ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5491z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5731z00,
		BGl_objectzd2ze3structzd2setzd2e4252z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5502z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75732z00,
		BGl_structzb2objectzd2ze3objec4274z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5492z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75733z00,
		BGl_structzb2objectzd2ze3objec4254z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5503z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5734z00,
		BGl_objectzd2ze3structzd2setq4276ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5493z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5735z00,
		BGl_objectzd2ze3structzd2letzd2v4256z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5504z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75736z00,
		BGl_structzb2objectzd2ze3objec4278z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5494z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75737z00,
		BGl_structzb2objectzd2ze3objec4258z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5505z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5738z00,
		BGl_objectzd2ze3structzd2cast4280ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5495z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5739z00,
		BGl_objectzd2ze3structzd2letzd2f4260z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5506z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75740z00,
		BGl_structzb2objectzd2ze3objec4282z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5496z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75741z00,
		BGl_structzb2objectzd2ze3objec4262z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5507z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5742z00,
		BGl_objectzd2ze3structzd2castzd24284z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5497z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5743z00,
		BGl_objectzd2ze3structzd2selec4264ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5508z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75744z00,
		BGl_structzb2objectzd2ze3objec4286z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5498z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75745z00,
		BGl_structzb2objectzd2ze3objec4266z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5510z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75746z00,
		BGl_structzb2objectzd2ze3objec4292z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5509z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5747z00,
		BGl_objectzd2ze3structzd2isa4289ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5499z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5748z00,
		BGl_objectzd2ze3structzd2fail4268ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5511z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5749z00,
		BGl_objectzd2ze3structzd2vleng4294ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5512z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75750z00,
		BGl_structzb2objectzd2ze3objec4296z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5513z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5751z00,
		BGl_objectzd2ze3structzd2vsetz124298zf1zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5514z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75752z00,
		BGl_structzb2objectzd2ze3objec4300z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5515z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5753z00,
		BGl_objectzd2ze3structzd2vref4302ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5516z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75754z00,
		BGl_structzb2objectzd2ze3objec4305z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5517z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5755z00,
		BGl_objectzd2ze3structzd2vallo4307ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5518z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75756z00,
		BGl_structzb2objectzd2ze3objec4309z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5520z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75757z00,
		BGl_structzb2objectzd2ze3objec4314z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5519z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5758z00,
		BGl_objectzd2ze3structzd2new4311ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5521z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5759z00,
		BGl_objectzd2ze3structzd2setfi4317ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5522z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75760z00,
		BGl_structzb2objectzd2ze3objec4319z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5523z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5761z00,
		BGl_objectzd2ze3structzd2getfi4321ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5524z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75762z00,
		BGl_structzb2objectzd2ze3objec4323z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5525z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5763z00,
		BGl_objectzd2ze3structzd2pragm4325ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5526z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75764z00,
		BGl_structzb2objectzd2ze3objec4327z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5527z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5765z00,
		BGl_objectzd2ze3structzd2exter4329ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5528z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75766z00,
		BGl_structzb2objectzd2ze3objec4331z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5530z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75767z00,
		BGl_structzb2objectzd2ze3objec4335z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5529z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5768z00,
		BGl_objectzd2ze3structzd2funca4333ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5531z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5769z00,
		BGl_objectzd2ze3structzd2appzd2l4337z31zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5532z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75770z00,
		BGl_structzb2objectzd2ze3objec4339z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5533z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5771z00,
		BGl_objectzd2ze3structzd2app4341ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5534z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75772z00,
		BGl_structzb2objectzd2ze3objec4343z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5535z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5773z00,
		BGl_objectzd2ze3structzd2seque4345ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5536z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75774z00,
		BGl_structzb2objectzd2ze3objec4347z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5537z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5775z00,
		BGl_objectzd2ze3structzd2kwote4349ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5538z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75776z00,
		BGl_structzb2objectzd2ze3objec4351z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5540z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75777z00,
		BGl_structzb2objectzd2ze3objec4355z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5539z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5778z00,
		BGl_objectzd2ze3structzd2closu4353ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5541z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5779z00,
		BGl_objectzd2ze3structzd2var4357ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5542z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75780z00,
		BGl_structzb2objectzd2ze3objec4359z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2castzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2castza7d2za75781za7, BGl__makezd2castzd2zzast_nodez00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5543z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5782z00,
		BGl_objectzd2ze3structzd2atom4361ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5544z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75783z00,
		BGl_structzb2objectzd2ze3objec4363z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5545z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5784z00,
		BGl_objectzd2ze3structzd2nodezf24365z11zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5546z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75785z00,
		BGl_structzb2objectzd2ze3objec4368z83zzast_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2funcallz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2funcallza75786z00, BGl__fillzd2funcallz12zc0zzast_nodez00,
		0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5547z00zzast_nodez00,
		BgL_bgl_objectza7d2za7e3stru5787z00,
		BGl_objectzd2ze3structzd2node4370ze3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5548z00zzast_nodez00,
		BgL_bgl_structza7b2objectza75788z00,
		BGl_structzb2objectzd2ze3objec4372z83zzast_nodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2conditionalzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2c5789z00,
		BGl__z52allocatezd2conditionalz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2appz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2appza712za7c5790za7, BGl__fillzd2appz12zc0zzast_nodez00,
		0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2setzd2exzd2itzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2setza7d2ex5791z00,
		BGl__makezd2setzd2exzd2itzd2zzast_nodez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2failz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2failza712za75792za7, BGl__fillzd2failz12zc0zzast_nodez00,
		0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kwotezd2nilzd2envz00zzast_nodez00,
		BgL_bgl__kwoteza7d2nilza7d2za75793za7, BGl__kwotezd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string5458z00zzast_nodez00,
		BgL_bgl_string5458za700za7za7a5794za7, "", 0);
	      DEFINE_STRING(BGl_string5460z00zzast_nodez00,
		BgL_bgl_string5460za700za7za7a5795za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5459z00zzast_nodez00,
		BgL_bgl_string5459za700za7za7a5796za7, "node-walk", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sequencezf3zd2envz21zzast_nodez00,
		BgL_bgl__sequenceza7f3za7f3za75797za7, BGl__sequencezf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5482z00zzast_nodez00,
		BgL_bgl_string5482za700za7za7a5798za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5484z00zzast_nodez00,
		BgL_bgl_string5484za700za7za7a5799za7, "struct+object->object::object", 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_failzf3zd2envz21zzast_nodez00,
		BgL_bgl__failza7f3za7f3za7za7ast5800z00, BGl__failzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sequencezd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2sequence5801za7, BGl__makezd2sequencezd2zzast_nodez00, 0L,
		BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2setzd2exzd2itz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2setza7d2ex5802z00,
		BGl__fillzd2setzd2exzd2itz12zc0zzast_nodez00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jumpzd2exzd2itzf3zd2envz21zzast_nodez00,
		BgL_bgl__jumpza7d2exza7d2itza75803za7,
		BGl__jumpzd2exzd2itzf3zf3zzast_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2nodez12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2nodeza712za75804za7, BGl__fillzd2nodez12zc0zzast_nodez00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2funcallzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2f5805z00,
		BGl__z52allocatezd2funcallz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vsetz12zd2nilzd2envz12zzast_nodez00,
		BgL_bgl__vsetza712za7d2nilza7c5806za7, BGl__vsetz12zd2nilzc0zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2newz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2newza712za7c5807za7, BGl__fillzd2newz12zc0zzast_nodez00,
		0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2pragmazd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2p5808z00,
		BGl__z52allocatezd2pragmaz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string5550z00zzast_nodez00,
		BgL_bgl_string5550za700za7za7a5809za7,
		"node-walk-default4193 _ box-set! box-ref make-box jump-ex-it set-ex-it let-var let-fun select fail conditional setq cast cast-null isa vlength vset! vref valloc new setfield getfield pragma extern funcall app-ly app sequence kwote closure var atom node/effect node ",
		265);
	      DEFINE_STRING(BGl_string5549z00zzast_nodez00,
		BgL_bgl_string5549za700za7za7a5810za7, "ast_node", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_appzd2lyzf3zd2envzf3zzast_nodez00,
		BgL_bgl__appza7d2lyza7f3za721za75811z00, BGl__appzd2lyzf3z21zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2isazd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2isaza7d2za7za75812z00, BGl__makezd2isazd2zzast_nodez00,
		0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2castzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2c5813z00,
		BGl__z52allocatezd2castz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezf3zd2envz21zzast_nodez00,
		BgL_bgl__nodeza7f3za7f3za7za7ast5814z00, BGl__nodezf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2boxzd2setz12zd2envzc0zzast_nodez00,
		BgL_bgl__makeza7d2boxza7d2se5815z00,
		BGl__makezd2boxzd2setz12z12zzast_nodez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2funzf3zd2envzf3zzast_nodez00,
		BgL_bgl__letza7d2funza7f3za7215816za7, BGl__letzd2funzf3z21zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__vrefza7d2nilza7d2za7za75817z00, BGl__vrefzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2selectzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2s5818z00,
		BGl__z52allocatezd2selectz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vrefzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2vrefza7d2za75819za7, BGl__makezd2vrefzd2zzast_nodez00, 0L,
		BUNSPEC, 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2selectz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2selectza715820z00, BGl__fillzd2selectz12zc0zzast_nodez00,
		0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezf2effectzd2nilzd2envzf2zzast_nodez00,
		BgL_bgl__nodeza7f2effectza7d5821z00,
		BGl__nodezf2effectzd2nilz20zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nodezd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2nodeza7d2za75822za7, BGl__makezd2nodezd2zzast_nodez00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2setqz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2setqza712za75823za7, BGl__fillzd2setqz12zc0zzast_nodez00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2setqzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2setqza7d2za75824za7, BGl__makezd2setqzd2zzast_nodez00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2funcallzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2funcallza75825z00, BGl__makezd2funcallzd2zzast_nodez00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setqzf3zd2envz21zzast_nodez00,
		BgL_bgl__setqza7f3za7f3za7za7ast5826z00, BGl__setqzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2vsetz12z12zd2envz00zzast_nodez00,
		BgL_bgl__fillza7d2vsetza712za75827za7,
		BGl__fillzd2vsetz12z12zd2zzast_nodez00, 0L, BUNSPEC, 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_castzd2nullzd2nilzd2envzd2zzast_nodez00,
		BgL_bgl__castza7d2nullza7d2n5828z00, BGl__castzd2nullzd2nilz00zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezf2effectzf3zd2envzd3zzast_nodez00,
		BgL_bgl__nodeza7f2effectza7f5829z00, BGl__nodezf2effectzf3z01zzast_nodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2vlengthzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2v5830z00,
		BGl__z52allocatezd2vlengthz80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nodezf2effectzd2envzf2zzast_nodez00,
		BgL_bgl__makeza7d2nodeza7f2e5831z00,
		BGl__makezd2nodezf2effectz20zzast_nodez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf3zd2envz21zzast_nodez00,
		BgL_bgl__pragmaza7f3za7f3za7za7a5832z00, BGl__pragmazf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2exzd2itzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__setza7d2exza7d2itza7d5833za7,
		BGl__setzd2exzd2itzd2nilzd2zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2walkzd2envz00zzast_nodez00,
		BgL_bgl__nodeza7d2walkza7d2za75834za7, BGl__nodezd2walkzd2zzast_nodez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jumpzd2exzd2itzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2jumpza7d2e5835z00,
		BGl__makezd2jumpzd2exzd2itzd2zzast_nodez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2varzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2v5836z00, BGl__z52allocatezd2varz80zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2setfieldz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2setfield5837za7, BGl__fillzd2setfieldz12zc0zzast_nodez00,
		0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2vrefzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2v5838z00,
		BGl__z52allocatezd2vrefz80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2letzd2funz12zd2envzc0zzast_nodez00,
		BgL_bgl__fillza7d2letza7d2fu5839z00,
		BGl__fillzd2letzd2funz12z12zzast_nodez00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2nodezd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2n5840z00,
		BGl__z52allocatezd2nodez80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_castzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__castza7d2nilza7d2za7za75841z00, BGl__castzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2setqzd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2s5842z00,
		BGl__z52allocatezd2setqz80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_boxzd2refzd2nilzd2envzd2zzast_nodez00,
		BgL_bgl__boxza7d2refza7d2nil5843z00, BGl__boxzd2refzd2nilz00zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vlengthzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2vlengthza75844z00, BGl__makezd2vlengthzd2zzast_nodez00,
		0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conditionalzf3zd2envz21zzast_nodez00,
		BgL_bgl__conditionalza7f3za75845z00, BGl__conditionalzf3zf3zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vlengthzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__vlengthza7d2nilza7d5846z00, BGl__vlengthzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2boxzd2refzd2envz80zzast_nodez00,
		BgL_bgl__za752allocateza7d2b5847z00,
		BGl__z52allocatezd2boxzd2refz52zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__newza7d2nilza7d2za7za7a5848z00, BGl__newzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setfieldzf3zd2envz21zzast_nodez00,
		BgL_bgl__setfieldza7f3za7f3za75849za7, BGl__setfieldzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2kwotezd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2k5850z00,
		BGl__z52allocatezd2kwotez80zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_funcallzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__funcallza7d2nilza7d5851z00, BGl__funcallzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closurezf3zd2envz21zzast_nodez00,
		BgL_bgl__closureza7f3za7f3za7za75852z00, BGl__closurezf3zf3zzast_nodez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2boxzd2setz12z12zd2envzd2zzast_nodez00,
		BgL_bgl__fillza7d2boxza7d2se5853z00,
		BGl__fillzd2boxzd2setz12z12z00zzast_nodez00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2isazd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2i5854z00, BGl__z52allocatezd2isaz80zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kwotezf3zd2envz21zzast_nodez00,
		BgL_bgl__kwoteza7f3za7f3za7za7as5855z00, BGl__kwotezf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sequencezd2envz52zzast_nodez00,
		BgL_bgl__za752allocateza7d2s5856z00,
		BGl__z52allocatezd2sequencez80zzast_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_boxzd2setz12zd2nilzd2envzc0zzast_nodez00,
		BgL_bgl__boxza7d2setza712za7d25857za7,
		BGl__boxzd2setz12zd2nilz12zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_appzf3zd2envz21zzast_nodez00,
		BgL_bgl__appza7f3za7f3za7za7ast_5858z00, BGl__appzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2failzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2failza7d2za75859za7, BGl__makezd2failzd2zzast_nodez00, 0L,
		BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2boxzd2refzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2boxza7d2re5860z00, BGl__makezd2boxzd2refz00zzast_nodez00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_selectzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__selectza7d2nilza7d25861z00, BGl__selectzd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_castzd2nullzf3zd2envzf3zzast_nodez00,
		BgL_bgl__castza7d2nullza7f3za75862za7, BGl__castzd2nullzf3z21zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazd2nilzd2envz00zzast_nodez00,
		BgL_bgl__isaza7d2nilza7d2za7za7a5863z00, BGl__isazd2nilzd2zzast_nodez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2makezd2boxzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2makeza7d2b5864z00, BGl__makezd2makezd2boxz00zzast_nodez00,
		0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2boxzd2setz12zd2envz92zzast_nodez00,
		BgL_bgl__za752allocateza7d2b5865z00,
		BGl__z52allocatezd2boxzd2setz12z40zzast_nodez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2funzd2nilzd2envzd2zzast_nodez00,
		BgL_bgl__letza7d2funza7d2nil5866z00, BGl__letzd2funzd2nilz00zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2newzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2newza7d2za7za75867z00, BGl__makezd2newzd2zzast_nodez00,
		0L, BUNSPEC, 7);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2getfieldzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2getfield5868za7, BGl__makezd2getfieldzd2zzast_nodez00, 0L,
		BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2externzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2externza7d5869z00, BGl__makezd2externzd2zzast_nodez00, 0L,
		BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf3zd2envz21zzast_nodez00,
		BgL_bgl__newza7f3za7f3za7za7ast_5870z00, BGl__newzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2castzd2nullzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2castza7d2n5871z00,
		BGl__makezd2castzd2nullz00zzast_nodez00, 0L, BUNSPEC, 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_boxzd2setz12zf3zd2envze1zzast_nodez00,
		BgL_bgl__boxza7d2setza712za7f35872za7, BGl__boxzd2setz12zf3z33zzast_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_failzd2nilzd2envz00zzast_nodez00,
		BgL_bgl__failza7d2nilza7d2za7za75873z00, BGl__failzd2nilzd2zzast_nodez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2appzd2lyzd2envzd2zzast_nodez00,
		BgL_bgl__makeza7d2appza7d2ly5874z00, BGl__makezd2appzd2lyz00zzast_nodez00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2conditionalzd2envz00zzast_nodez00,
		BgL_bgl__makeza7d2conditio5875za7, BGl__makezd2conditionalzd2zzast_nodez00,
		0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2varz12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2varza712za7c5876za7, BGl__fillzd2varz12zc0zzast_nodez00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_selectzf3zd2envz21zzast_nodez00,
		BgL_bgl__selectza7f3za7f3za7za7a5877z00, BGl__selectzf3zf3zzast_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2closurez12zd2envz12zzast_nodez00,
		BgL_bgl__fillza7d2closureza75878z00, BGl__fillzd2closurez12zc0zzast_nodez00,
		0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long
		BgL_checksumz00_8538, char *BgL_fromz00_8539)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_nodez00))
				{
					BGl_requirezd2initializa7ationz75zzast_nodez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_nodez00();
					BGl_cnstzd2initzd2zzast_nodez00();
					BGl_importedzd2moduleszd2initz00zzast_nodez00();
					BGl_objectzd2initzd2zzast_nodez00();
					BGl_genericzd2initzd2zzast_nodez00();
					BGl_methodzd2initzd2zzast_nodez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_node");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_node");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			{	/* Ast/node.scm 14 */
				obj_t BgL_cportz00_7699;

				BgL_cportz00_7699 =
					bgl_open_input_string(BGl_string5550z00zzast_nodez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_7700;

					BgL_iz00_7700 = ((long) 34);
				BgL_loopz00_7701:
					if ((BgL_iz00_7700 == ((long) -1)))
						{	/* Ast/node.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/node.scm 14 */
							{	/* Ast/node.scm 14 */
								obj_t BgL_arg5552z00_7703;

								{	/* Ast/node.scm 14 */

									{	/* Ast/node.scm 14 */
										obj_t BgL_locationz00_7705;

										BgL_locationz00_7705 = BBOOL(((bool_t) 0));
										{	/* Ast/node.scm 14 */

											BgL_arg5552z00_7703 =
												BGl_readz00zz__readerz00(BgL_cportz00_7699,
												BgL_locationz00_7705);
										}
									}
								}
								{	/* Ast/node.scm 14 */
									int BgL_auxz00_8558;

									BgL_auxz00_8558 = (int) (BgL_iz00_7700);
									CNST_TABLE_SET(BgL_auxz00_8558, BgL_arg5552z00_7703);
							}}
							{	/* Ast/node.scm 14 */
								int BgL_auxz00_7706;

								BgL_auxz00_7706 = (int) ((BgL_iz00_7700 - ((long) 1)));
								{
									long BgL_iz00_8563;

									BgL_iz00_8563 = (long) (BgL_auxz00_7706);
									BgL_iz00_7700 = BgL_iz00_8563;
									goto BgL_loopz00_7701;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			return BUNSPEC;
		}
	}



/* node-walk* */
	bool_t BGl_nodezd2walkza2z70zzast_nodez00(obj_t BgL_nodeza2za2_45,
		obj_t BgL_procz00_46)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 419 */
			{
				obj_t BgL_l4158z00_1108;

				BgL_l4158z00_1108 = BgL_nodeza2za2_45;
			BgL_zc3anonymousza34373ze3z83_1109:
				if (PAIRP(BgL_l4158z00_1108))
					{	/* Ast/node.scm 420 */
						{	/* Ast/node.scm 420 */
							obj_t BgL_nodez00_1111;

							BgL_nodez00_1111 = CAR(BgL_l4158z00_1108);
							{	/* Ast/node.scm 420 */
								BgL_nodez00_bglt BgL_nodez00_3021;

								BgL_nodez00_3021 = (BgL_nodez00_bglt) (BgL_nodez00_1111);
								{	/* Ast/node.scm 420 */
									obj_t BgL_method4194z00_3023;

									{	/* Ast/node.scm 420 */
										BgL_objectz00_bglt BgL_objz00_3024;

										BgL_objz00_3024 = (BgL_objectz00_bglt) (BgL_nodez00_3021);
										{	/* Ast/node.scm 420 */
											long BgL_objzd2classzd2numz00_3025;

											BgL_objzd2classzd2numz00_3025 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3024);
											{	/* Ast/node.scm 420 */
												obj_t BgL_arg2643z00_3026;

												BgL_arg2643z00_3026 =
													PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
													(int) (((long) 1)));
												{	/* Ast/node.scm 420 */
													obj_t BgL_arrayz00_3028;

													int BgL_offsetz00_3029;

													BgL_arrayz00_3028 = BgL_arg2643z00_3026;
													BgL_offsetz00_3029 =
														(int) (BgL_objzd2classzd2numz00_3025);
													{	/* Ast/node.scm 420 */
														long BgL_offsetz00_3030;

														BgL_offsetz00_3030 =
															((long) (BgL_offsetz00_3029) - OBJECT_TYPE);
														{	/* Ast/node.scm 420 */
															long BgL_modz00_3031;

															{	/* Ast/node.scm 420 */
																int BgL_arg2645z00_3032;

																BgL_arg2645z00_3032 = (int) (((long) 16));
																{	/* Ast/node.scm 420 */
																	long BgL_auxz00_8577;

																	BgL_auxz00_8577 =
																		(long) (BgL_arg2645z00_3032);
																	BgL_modz00_3031 =
																		(BgL_offsetz00_3030 / BgL_auxz00_8577);
															}}
															{	/* Ast/node.scm 420 */
																long BgL_restz00_3033;

																{	/* Ast/node.scm 420 */
																	int BgL_arg2644z00_3034;

																	BgL_arg2644z00_3034 = (int) (((long) 16));
																	{	/* Ast/node.scm 420 */
																		long BgL_auxz00_8581;

																		BgL_auxz00_8581 =
																			(long) (BgL_arg2644z00_3034);
																		BgL_restz00_3033 =
																			(BgL_offsetz00_3030 % BgL_auxz00_8581);
																}}
																{	/* Ast/node.scm 420 */

																	BgL_method4194z00_3023 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3028,
																			(int) (BgL_modz00_3031)),
																		(int) (BgL_restz00_3033));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method4194z00_3023)
										(BgL_method4194z00_3023, (obj_t) (BgL_nodez00_3021),
										BgL_procz00_46, BEOA);
						}}}
						{
							obj_t BgL_l4158z00_8591;

							BgL_l4158z00_8591 = CDR(BgL_l4158z00_1108);
							BgL_l4158z00_1108 = BgL_l4158z00_8591;
							goto BgL_zc3anonymousza34373ze3z83_1109;
						}
					}
				else
					{	/* Ast/node.scm 420 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			{	/* Ast/node.scm 19 */
				obj_t BgL_arg4376z00_1114;

				obj_t BgL_arg4377z00_1115;

				obj_t BgL_arg4380z00_1118;

				BgL_arg4376z00_1114 = CNST_TABLE_REF(((long) 0));
				BgL_arg4377z00_1115 = BGl_objectz00zz__objectz00;
				{	/* Ast/node.scm 19 */
					obj_t BgL_v4160z00_1119;

					BgL_v4160z00_1119 = create_vector((int) (((long) 0)));
					BgL_arg4380z00_1118 = BgL_v4160z00_1119;
				}
				BGl_nodez00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4376z00_1114,
					BgL_arg4377z00_1115, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2nodezd2envz52zzast_nodez00,
					BGl_nodezd2nilzd2envz00zzast_nodez00,
					BGl_nodezf3zd2envz21zzast_nodez00, ((long) 305086792), BFALSE, BFALSE,
					BgL_arg4380z00_1118);
			}
			{	/* Ast/node.scm 35 */
				obj_t BgL_arg4381z00_1120;

				obj_t BgL_arg4382z00_1121;

				obj_t BgL_arg4385z00_1124;

				BgL_arg4381z00_1120 = CNST_TABLE_REF(((long) 1));
				BgL_arg4382z00_1121 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 35 */
					obj_t BgL_v4161z00_1125;

					BgL_v4161z00_1125 = create_vector((int) (((long) 0)));
					BgL_arg4385z00_1124 = BgL_v4161z00_1125;
				}
				BGl_nodezf2effectzf2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4381z00_1120,
					BgL_arg4382z00_1121, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2nodezf2effectzd2envza0zzast_nodez00,
					BGl_nodezf2effectzd2nilzd2envzf2zzast_nodez00,
					BGl_nodezf2effectzf3zd2envzd3zzast_nodez00, ((long) 449703318),
					BFALSE, BFALSE, BgL_arg4385z00_1124);
			}
			{	/* Ast/node.scm 44 */
				obj_t BgL_arg4386z00_1126;

				obj_t BgL_arg4387z00_1127;

				obj_t BgL_arg4390z00_1130;

				BgL_arg4386z00_1126 = CNST_TABLE_REF(((long) 2));
				BgL_arg4387z00_1127 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 44 */
					obj_t BgL_v4162z00_1131;

					BgL_v4162z00_1131 = create_vector((int) (((long) 0)));
					BgL_arg4390z00_1130 = BgL_v4162z00_1131;
				}
				BGl_atomz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4386z00_1126,
					BgL_arg4387z00_1127, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2atomzd2envz52zzast_nodez00,
					BGl_atomzd2nilzd2envz00zzast_nodez00,
					BGl_atomzf3zd2envz21zzast_nodez00, ((long) 10470279), BFALSE, BFALSE,
					BgL_arg4390z00_1130);
			}
			{	/* Ast/node.scm 49 */
				obj_t BgL_arg4391z00_1132;

				obj_t BgL_arg4392z00_1133;

				obj_t BgL_arg4395z00_1136;

				BgL_arg4391z00_1132 = CNST_TABLE_REF(((long) 3));
				BgL_arg4392z00_1133 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 49 */
					obj_t BgL_v4163z00_1137;

					BgL_v4163z00_1137 = create_vector((int) (((long) 0)));
					BgL_arg4395z00_1136 = BgL_v4163z00_1137;
				}
				BGl_varz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4391z00_1132,
					BgL_arg4392z00_1133, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2varzd2envz52zzast_nodez00,
					BGl_varzd2nilzd2envz00zzast_nodez00, BGl_varzf3zd2envz21zzast_nodez00,
					((long) 60455411), BFALSE, BFALSE, BgL_arg4395z00_1136);
			}
			{	/* Ast/node.scm 54 */
				obj_t BgL_arg4396z00_1138;

				obj_t BgL_arg4398z00_1139;

				obj_t BgL_arg4401z00_1142;

				BgL_arg4396z00_1138 = CNST_TABLE_REF(((long) 4));
				BgL_arg4398z00_1139 = BGl_varz00zzast_nodez00;
				{	/* Ast/node.scm 54 */
					obj_t BgL_v4164z00_1143;

					BgL_v4164z00_1143 = create_vector((int) (((long) 0)));
					BgL_arg4401z00_1142 = BgL_v4164z00_1143;
				}
				BGl_closurez00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4396z00_1138,
					BgL_arg4398z00_1139, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2closurezd2envz52zzast_nodez00,
					BGl_closurezd2nilzd2envz00zzast_nodez00,
					BGl_closurezf3zd2envz21zzast_nodez00, ((long) 59812662), BFALSE,
					BFALSE, BgL_arg4401z00_1142);
			}
			{	/* Ast/node.scm 57 */
				obj_t BgL_arg4402z00_1144;

				obj_t BgL_arg4403z00_1145;

				obj_t BgL_arg4406z00_1148;

				BgL_arg4402z00_1144 = CNST_TABLE_REF(((long) 5));
				BgL_arg4403z00_1145 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 57 */
					obj_t BgL_v4165z00_1149;

					BgL_v4165z00_1149 = create_vector((int) (((long) 0)));
					BgL_arg4406z00_1148 = BgL_v4165z00_1149;
				}
				BGl_kwotez00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4402z00_1144,
					BgL_arg4403z00_1145, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2kwotezd2envz52zzast_nodez00,
					BGl_kwotezd2nilzd2envz00zzast_nodez00,
					BGl_kwotezf3zd2envz21zzast_nodez00, ((long) 9620998), BFALSE, BFALSE,
					BgL_arg4406z00_1148);
			}
			{	/* Ast/node.scm 62 */
				obj_t BgL_arg4407z00_1150;

				obj_t BgL_arg4408z00_1151;

				obj_t BgL_arg4411z00_1154;

				BgL_arg4407z00_1150 = CNST_TABLE_REF(((long) 6));
				BgL_arg4408z00_1151 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 62 */
					obj_t BgL_v4166z00_1155;

					BgL_v4166z00_1155 = create_vector((int) (((long) 0)));
					BgL_arg4411z00_1154 = BgL_v4166z00_1155;
				}
				BGl_sequencez00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4407z00_1150,
					BgL_arg4408z00_1151, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sequencezd2envz52zzast_nodez00,
					BGl_sequencezd2nilzd2envz00zzast_nodez00,
					BGl_sequencezf3zd2envz21zzast_nodez00, ((long) 226490011), BFALSE,
					BFALSE, BgL_arg4411z00_1154);
			}
			{	/* Ast/node.scm 66 */
				obj_t BgL_arg4412z00_1156;

				obj_t BgL_arg4413z00_1157;

				obj_t BgL_arg4416z00_1160;

				BgL_arg4412z00_1156 = CNST_TABLE_REF(((long) 7));
				BgL_arg4413z00_1157 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 66 */
					obj_t BgL_v4167z00_1161;

					BgL_v4167z00_1161 = create_vector((int) (((long) 0)));
					BgL_arg4416z00_1160 = BgL_v4167z00_1161;
				}
				BGl_appz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4412z00_1156,
					BgL_arg4413z00_1157, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2appzd2envz52zzast_nodez00,
					BGl_appzd2nilzd2envz00zzast_nodez00, BGl_appzf3zd2envz21zzast_nodez00,
					((long) 20164483), BFALSE, BFALSE, BgL_arg4416z00_1160);
			}
			{	/* Ast/node.scm 73 */
				obj_t BgL_arg4417z00_1162;

				obj_t BgL_arg4418z00_1163;

				obj_t BgL_arg4421z00_1166;

				BgL_arg4417z00_1162 = CNST_TABLE_REF(((long) 8));
				BgL_arg4418z00_1163 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 73 */
					obj_t BgL_v4168z00_1167;

					BgL_v4168z00_1167 = create_vector((int) (((long) 0)));
					BgL_arg4421z00_1166 = BgL_v4168z00_1167;
				}
				BGl_appzd2lyzd2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4417z00_1162,
					BgL_arg4418z00_1163, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2appzd2lyzd2envz80zzast_nodez00,
					BGl_appzd2lyzd2nilzd2envzd2zzast_nodez00,
					BGl_appzd2lyzf3zd2envzf3zzast_nodez00, ((long) 374076325), BFALSE,
					BFALSE, BgL_arg4421z00_1166);
			}
			{	/* Ast/node.scm 80 */
				obj_t BgL_arg4422z00_1168;

				obj_t BgL_arg4423z00_1169;

				obj_t BgL_arg4426z00_1172;

				BgL_arg4422z00_1168 = CNST_TABLE_REF(((long) 9));
				BgL_arg4423z00_1169 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 80 */
					obj_t BgL_v4169z00_1173;

					BgL_v4169z00_1173 = create_vector((int) (((long) 0)));
					BgL_arg4426z00_1172 = BgL_v4169z00_1173;
				}
				BGl_funcallz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4422z00_1168,
					BgL_arg4423z00_1169, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2funcallzd2envz52zzast_nodez00,
					BGl_funcallzd2nilzd2envz00zzast_nodez00,
					BGl_funcallzf3zd2envz21zzast_nodez00, ((long) 116585982), BFALSE,
					BFALSE, BgL_arg4426z00_1172);
			}
			{	/* Ast/node.scm 90 */
				obj_t BgL_arg4427z00_1174;

				obj_t BgL_arg4428z00_1175;

				obj_t BgL_arg4431z00_1178;

				BgL_arg4427z00_1174 = CNST_TABLE_REF(((long) 10));
				BgL_arg4428z00_1175 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 90 */
					obj_t BgL_v4170z00_1179;

					BgL_v4170z00_1179 = create_vector((int) (((long) 0)));
					BgL_arg4431z00_1178 = BgL_v4170z00_1179;
				}
				BGl_externz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4427z00_1174,
					BgL_arg4428z00_1175, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2externzd2envz52zzast_nodez00,
					BGl_externzd2nilzd2envz00zzast_nodez00,
					BGl_externzf3zd2envz21zzast_nodez00, ((long) 303886963), BFALSE,
					BFALSE, BgL_arg4431z00_1178);
			}
			{	/* Ast/node.scm 97 */
				obj_t BgL_arg4432z00_1180;

				obj_t BgL_arg4433z00_1181;

				obj_t BgL_arg4437z00_1184;

				BgL_arg4432z00_1180 = CNST_TABLE_REF(((long) 11));
				BgL_arg4433z00_1181 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 97 */
					obj_t BgL_v4171z00_1185;

					BgL_v4171z00_1185 = create_vector((int) (((long) 0)));
					BgL_arg4437z00_1184 = BgL_v4171z00_1185;
				}
				BGl_pragmaz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4432z00_1180,
					BgL_arg4433z00_1181, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2pragmazd2envz52zzast_nodez00,
					BGl_pragmazd2nilzd2envz00zzast_nodez00,
					BGl_pragmazf3zd2envz21zzast_nodez00, ((long) 15268454), BFALSE,
					BFALSE, BgL_arg4437z00_1184);
			}
			{	/* Ast/node.scm 101 */
				obj_t BgL_arg4438z00_1186;

				obj_t BgL_arg4439z00_1187;

				obj_t BgL_arg4442z00_1190;

				BgL_arg4438z00_1186 = CNST_TABLE_REF(((long) 12));
				BgL_arg4439z00_1187 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 101 */
					obj_t BgL_v4172z00_1191;

					BgL_v4172z00_1191 = create_vector((int) (((long) 0)));
					BgL_arg4442z00_1190 = BgL_v4172z00_1191;
				}
				BGl_getfieldz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4438z00_1186,
					BgL_arg4439z00_1187, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2getfieldzd2envz52zzast_nodez00,
					BGl_getfieldzd2nilzd2envz00zzast_nodez00,
					BGl_getfieldzf3zd2envz21zzast_nodez00, ((long) 189970799), BFALSE,
					BFALSE, BgL_arg4442z00_1190);
			}
			{	/* Ast/node.scm 110 */
				obj_t BgL_arg4443z00_1192;

				obj_t BgL_arg4444z00_1193;

				obj_t BgL_arg4447z00_1196;

				BgL_arg4443z00_1192 = CNST_TABLE_REF(((long) 13));
				BgL_arg4444z00_1193 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 110 */
					obj_t BgL_v4173z00_1197;

					BgL_v4173z00_1197 = create_vector((int) (((long) 0)));
					BgL_arg4447z00_1196 = BgL_v4173z00_1197;
				}
				BGl_setfieldz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4443z00_1192,
					BgL_arg4444z00_1193, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2setfieldzd2envz52zzast_nodez00,
					BGl_setfieldzd2nilzd2envz00zzast_nodez00,
					BGl_setfieldzf3zd2envz21zzast_nodez00, ((long) 237405083), BFALSE,
					BFALSE, BgL_arg4447z00_1196);
			}
			{	/* Ast/node.scm 119 */
				obj_t BgL_arg4448z00_1198;

				obj_t BgL_arg4449z00_1199;

				obj_t BgL_arg4452z00_1202;

				BgL_arg4448z00_1198 = CNST_TABLE_REF(((long) 14));
				BgL_arg4449z00_1199 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 119 */
					obj_t BgL_v4174z00_1203;

					BgL_v4174z00_1203 = create_vector((int) (((long) 0)));
					BgL_arg4452z00_1202 = BgL_v4174z00_1203;
				}
				BGl_newz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4448z00_1198,
					BgL_arg4449z00_1199, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2newzd2envz52zzast_nodez00,
					BGl_newzd2nilzd2envz00zzast_nodez00, BGl_newzf3zd2envz21zzast_nodez00,
					((long) 44722862), BFALSE, BFALSE, BgL_arg4452z00_1202);
			}
			{	/* Ast/node.scm 123 */
				obj_t BgL_arg4453z00_1204;

				obj_t BgL_arg4454z00_1205;

				obj_t BgL_arg4457z00_1208;

				BgL_arg4453z00_1204 = CNST_TABLE_REF(((long) 15));
				BgL_arg4454z00_1205 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 123 */
					obj_t BgL_v4175z00_1209;

					BgL_v4175z00_1209 = create_vector((int) (((long) 0)));
					BgL_arg4457z00_1208 = BgL_v4175z00_1209;
				}
				BGl_vallocz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4453z00_1204,
					BgL_arg4454z00_1205, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2valloczd2envz52zzast_nodez00,
					BGl_valloczd2nilzd2envz00zzast_nodez00,
					BGl_valloczf3zd2envz21zzast_nodez00, ((long) 431237951), BFALSE,
					BFALSE, BgL_arg4457z00_1208);
			}
			{	/* Ast/node.scm 132 */
				obj_t BgL_arg4458z00_1210;

				obj_t BgL_arg4459z00_1211;

				obj_t BgL_arg4462z00_1214;

				BgL_arg4458z00_1210 = CNST_TABLE_REF(((long) 16));
				BgL_arg4459z00_1211 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 132 */
					obj_t BgL_v4176z00_1215;

					BgL_v4176z00_1215 = create_vector((int) (((long) 0)));
					BgL_arg4462z00_1214 = BgL_v4176z00_1215;
				}
				BGl_vrefz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4458z00_1210,
					BgL_arg4459z00_1211, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vrefzd2envz52zzast_nodez00,
					BGl_vrefzd2nilzd2envz00zzast_nodez00,
					BGl_vrefzf3zd2envz21zzast_nodez00, ((long) 324003320), BFALSE, BFALSE,
					BgL_arg4462z00_1214);
			}
			{	/* Ast/node.scm 145 */
				obj_t BgL_arg4463z00_1216;

				obj_t BgL_arg4464z00_1217;

				obj_t BgL_arg4467z00_1220;

				BgL_arg4463z00_1216 = CNST_TABLE_REF(((long) 17));
				BgL_arg4464z00_1217 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 145 */
					obj_t BgL_v4177z00_1221;

					BgL_v4177z00_1221 = create_vector((int) (((long) 0)));
					BgL_arg4467z00_1220 = BgL_v4177z00_1221;
				}
				BGl_vsetz12z12zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4463z00_1216,
					BgL_arg4464z00_1217, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vsetz12zd2envz40zzast_nodez00,
					BGl_vsetz12zd2nilzd2envz12zzast_nodez00,
					BGl_vsetz12zf3zd2envz33zzast_nodez00, ((long) 323200552), BFALSE,
					BFALSE, BgL_arg4467z00_1220);
			}
			{	/* Ast/node.scm 158 */
				obj_t BgL_arg4468z00_1222;

				obj_t BgL_arg4469z00_1223;

				obj_t BgL_arg4472z00_1226;

				BgL_arg4468z00_1222 = CNST_TABLE_REF(((long) 18));
				BgL_arg4469z00_1223 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 158 */
					obj_t BgL_v4178z00_1227;

					BgL_v4178z00_1227 = create_vector((int) (((long) 0)));
					BgL_arg4472z00_1226 = BgL_v4178z00_1227;
				}
				BGl_vlengthz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4468z00_1222,
					BgL_arg4469z00_1223, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2vlengthzd2envz52zzast_nodez00,
					BGl_vlengthzd2nilzd2envz00zzast_nodez00,
					BGl_vlengthzf3zd2envz21zzast_nodez00, ((long) 76523601), BFALSE,
					BFALSE, BgL_arg4472z00_1226);
			}
			{	/* Ast/node.scm 165 */
				obj_t BgL_arg4473z00_1228;

				obj_t BgL_arg4474z00_1229;

				obj_t BgL_arg4477z00_1232;

				BgL_arg4473z00_1228 = CNST_TABLE_REF(((long) 19));
				BgL_arg4474z00_1229 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 165 */
					obj_t BgL_v4179z00_1233;

					BgL_v4179z00_1233 = create_vector((int) (((long) 0)));
					BgL_arg4477z00_1232 = BgL_v4179z00_1233;
				}
				BGl_isaz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4473z00_1228,
					BgL_arg4474z00_1229, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2isazd2envz52zzast_nodez00,
					BGl_isazd2nilzd2envz00zzast_nodez00, BGl_isazf3zd2envz21zzast_nodez00,
					((long) 444770419), BFALSE, BFALSE, BgL_arg4477z00_1232);
			}
			{	/* Ast/node.scm 169 */
				obj_t BgL_arg4478z00_1234;

				obj_t BgL_arg4479z00_1235;

				obj_t BgL_arg4482z00_1238;

				BgL_arg4478z00_1234 = CNST_TABLE_REF(((long) 20));
				BgL_arg4479z00_1235 = BGl_externz00zzast_nodez00;
				{	/* Ast/node.scm 169 */
					obj_t BgL_v4180z00_1239;

					BgL_v4180z00_1239 = create_vector((int) (((long) 0)));
					BgL_arg4482z00_1238 = BgL_v4180z00_1239;
				}
				BGl_castzd2nullzd2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4478z00_1234,
					BgL_arg4479z00_1235, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2castzd2nullzd2envz80zzast_nodez00,
					BGl_castzd2nullzd2nilzd2envzd2zzast_nodez00,
					BGl_castzd2nullzf3zd2envzf3zzast_nodez00, ((long) 498957468), BFALSE,
					BFALSE, BgL_arg4482z00_1238);
			}
			{	/* Ast/node.scm 172 */
				obj_t BgL_arg4483z00_1240;

				obj_t BgL_arg4484z00_1241;

				obj_t BgL_arg4487z00_1244;

				BgL_arg4483z00_1240 = CNST_TABLE_REF(((long) 21));
				BgL_arg4484z00_1241 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 172 */
					obj_t BgL_v4181z00_1245;

					BgL_v4181z00_1245 = create_vector((int) (((long) 0)));
					BgL_arg4487z00_1244 = BgL_v4181z00_1245;
				}
				BGl_castz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4483z00_1240,
					BgL_arg4484z00_1241, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2castzd2envz52zzast_nodez00,
					BGl_castzd2nilzd2envz00zzast_nodez00,
					BGl_castzf3zd2envz21zzast_nodez00, ((long) 484509593), BFALSE, BFALSE,
					BgL_arg4487z00_1244);
			}
			{	/* Ast/node.scm 177 */
				obj_t BgL_arg4488z00_1246;

				obj_t BgL_arg4489z00_1247;

				obj_t BgL_arg4492z00_1250;

				BgL_arg4488z00_1246 = CNST_TABLE_REF(((long) 22));
				BgL_arg4489z00_1247 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 177 */
					obj_t BgL_v4182z00_1251;

					BgL_v4182z00_1251 = create_vector((int) (((long) 0)));
					BgL_arg4492z00_1250 = BgL_v4182z00_1251;
				}
				BGl_setqz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4488z00_1246,
					BgL_arg4489z00_1247, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2setqzd2envz52zzast_nodez00,
					BGl_setqzd2nilzd2envz00zzast_nodez00,
					BGl_setqzf3zd2envz21zzast_nodez00, ((long) 11815297), BFALSE, BFALSE,
					BgL_arg4492z00_1250);
			}
			{	/* Ast/node.scm 184 */
				obj_t BgL_arg4493z00_1252;

				obj_t BgL_arg4494z00_1253;

				obj_t BgL_arg4497z00_1256;

				BgL_arg4493z00_1252 = CNST_TABLE_REF(((long) 23));
				BgL_arg4494z00_1253 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 184 */
					obj_t BgL_v4183z00_1257;

					BgL_v4183z00_1257 = create_vector((int) (((long) 0)));
					BgL_arg4497z00_1256 = BgL_v4183z00_1257;
				}
				BGl_conditionalz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4493z00_1252,
					BgL_arg4494z00_1253, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2conditionalzd2envz52zzast_nodez00,
					BGl_conditionalzd2nilzd2envz00zzast_nodez00,
					BGl_conditionalzf3zd2envz21zzast_nodez00, ((long) 443728235), BFALSE,
					BFALSE, BgL_arg4497z00_1256);
			}
			{	/* Ast/node.scm 193 */
				obj_t BgL_arg4498z00_1258;

				obj_t BgL_arg4499z00_1259;

				obj_t BgL_arg4502z00_1262;

				BgL_arg4498z00_1258 = CNST_TABLE_REF(((long) 24));
				BgL_arg4499z00_1259 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 193 */
					obj_t BgL_v4184z00_1263;

					BgL_v4184z00_1263 = create_vector((int) (((long) 0)));
					BgL_arg4502z00_1262 = BgL_v4184z00_1263;
				}
				BGl_failz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4498z00_1258,
					BgL_arg4499z00_1259, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2failzd2envz52zzast_nodez00,
					BGl_failzd2nilzd2envz00zzast_nodez00,
					BGl_failzf3zd2envz21zzast_nodez00, ((long) 108275598), BFALSE, BFALSE,
					BgL_arg4502z00_1262);
			}
			{	/* Ast/node.scm 200 */
				obj_t BgL_arg4503z00_1264;

				obj_t BgL_arg4504z00_1265;

				obj_t BgL_arg4507z00_1268;

				BgL_arg4503z00_1264 = CNST_TABLE_REF(((long) 25));
				BgL_arg4504z00_1265 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 200 */
					obj_t BgL_v4185z00_1269;

					BgL_v4185z00_1269 = create_vector((int) (((long) 0)));
					BgL_arg4507z00_1268 = BgL_v4185z00_1269;
				}
				BGl_selectz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4503z00_1264,
					BgL_arg4504z00_1265, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2selectzd2envz52zzast_nodez00,
					BGl_selectzd2nilzd2envz00zzast_nodez00,
					BGl_selectzf3zd2envz21zzast_nodez00, ((long) 351618207), BFALSE,
					BFALSE, BgL_arg4507z00_1268);
			}
			{	/* Ast/node.scm 209 */
				obj_t BgL_arg4508z00_1270;

				obj_t BgL_arg4509z00_1271;

				obj_t BgL_arg4512z00_1274;

				BgL_arg4508z00_1270 = CNST_TABLE_REF(((long) 26));
				BgL_arg4509z00_1271 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 209 */
					obj_t BgL_v4186z00_1275;

					BgL_v4186z00_1275 = create_vector((int) (((long) 0)));
					BgL_arg4512z00_1274 = BgL_v4186z00_1275;
				}
				BGl_letzd2funzd2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4508z00_1270,
					BgL_arg4509z00_1271, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2letzd2funzd2envz80zzast_nodez00,
					BGl_letzd2funzd2nilzd2envzd2zzast_nodez00,
					BGl_letzd2funzf3zd2envzf3zzast_nodez00, ((long) 428798235), BFALSE,
					BFALSE, BgL_arg4512z00_1274);
			}
			{	/* Ast/node.scm 216 */
				obj_t BgL_arg4513z00_1276;

				obj_t BgL_arg4514z00_1277;

				obj_t BgL_arg4517z00_1280;

				BgL_arg4513z00_1276 = CNST_TABLE_REF(((long) 27));
				BgL_arg4514z00_1277 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 216 */
					obj_t BgL_v4187z00_1281;

					BgL_v4187z00_1281 = create_vector((int) (((long) 0)));
					BgL_arg4517z00_1280 = BgL_v4187z00_1281;
				}
				BGl_letzd2varzd2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4513z00_1276,
					BgL_arg4514z00_1277, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2letzd2varzd2envz80zzast_nodez00,
					BGl_letzd2varzd2nilzd2envzd2zzast_nodez00,
					BGl_letzd2varzf3zd2envzf3zzast_nodez00, ((long) 244128262), BFALSE,
					BFALSE, BgL_arg4517z00_1280);
			}
			{	/* Ast/node.scm 225 */
				obj_t BgL_arg4518z00_1282;

				obj_t BgL_arg4519z00_1283;

				obj_t BgL_arg4522z00_1286;

				BgL_arg4518z00_1282 = CNST_TABLE_REF(((long) 28));
				BgL_arg4519z00_1283 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 225 */
					obj_t BgL_v4188z00_1287;

					BgL_v4188z00_1287 = create_vector((int) (((long) 0)));
					BgL_arg4522z00_1286 = BgL_v4188z00_1287;
				}
				BGl_setzd2exzd2itz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4518z00_1282,
					BgL_arg4519z00_1283, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2setzd2exzd2itzd2envz52zzast_nodez00,
					BGl_setzd2exzd2itzd2nilzd2envz00zzast_nodez00,
					BGl_setzd2exzd2itzf3zd2envz21zzast_nodez00, ((long) 385524239),
					BFALSE, BFALSE, BgL_arg4522z00_1286);
			}
			{	/* Ast/node.scm 232 */
				obj_t BgL_arg4523z00_1288;

				obj_t BgL_arg4524z00_1289;

				obj_t BgL_arg4527z00_1292;

				BgL_arg4523z00_1288 = CNST_TABLE_REF(((long) 29));
				BgL_arg4524z00_1289 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 232 */
					obj_t BgL_v4189z00_1293;

					BgL_v4189z00_1293 = create_vector((int) (((long) 0)));
					BgL_arg4527z00_1292 = BgL_v4189z00_1293;
				}
				BGl_jumpzd2exzd2itz00zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4523z00_1288,
					BgL_arg4524z00_1289, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jumpzd2exzd2itzd2envz52zzast_nodez00,
					BGl_jumpzd2exzd2itzd2nilzd2envz00zzast_nodez00,
					BGl_jumpzd2exzd2itzf3zd2envz21zzast_nodez00, ((long) 156853316),
					BFALSE, BFALSE, BgL_arg4527z00_1292);
			}
			{	/* Ast/node.scm 239 */
				obj_t BgL_arg4528z00_1294;

				obj_t BgL_arg4529z00_1295;

				obj_t BgL_arg4532z00_1298;

				BgL_arg4528z00_1294 = CNST_TABLE_REF(((long) 30));
				BgL_arg4529z00_1295 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 239 */
					obj_t BgL_v4190z00_1299;

					BgL_v4190z00_1299 = create_vector((int) (((long) 0)));
					BgL_arg4532z00_1298 = BgL_v4190z00_1299;
				}
				BGl_makezd2boxzd2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4528z00_1294,
					BgL_arg4529z00_1295, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2makezd2boxzd2envz80zzast_nodez00,
					BGl_makezd2boxzd2nilzd2envzd2zzast_nodez00,
					BGl_makezd2boxzf3zd2envzf3zzast_nodez00, ((long) 117843933), BFALSE,
					BFALSE, BgL_arg4532z00_1298);
			}
			{	/* Ast/node.scm 243 */
				obj_t BgL_arg4533z00_1300;

				obj_t BgL_arg4534z00_1301;

				obj_t BgL_arg4537z00_1304;

				BgL_arg4533z00_1300 = CNST_TABLE_REF(((long) 31));
				BgL_arg4534z00_1301 = BGl_nodezf2effectzf2zzast_nodez00;
				{	/* Ast/node.scm 243 */
					obj_t BgL_v4191z00_1305;

					BgL_v4191z00_1305 = create_vector((int) (((long) 0)));
					BgL_arg4537z00_1304 = BgL_v4191z00_1305;
				}
				BGl_boxzd2refzd2zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4533z00_1300,
					BgL_arg4534z00_1301, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2boxzd2refzd2envz80zzast_nodez00,
					BGl_boxzd2refzd2nilzd2envzd2zzast_nodez00,
					BGl_boxzd2refzf3zd2envzf3zzast_nodez00, ((long) 111719683), BFALSE,
					BFALSE, BgL_arg4537z00_1304);
			}
			{	/* Ast/node.scm 247 */
				obj_t BgL_arg4538z00_1306;

				obj_t BgL_arg4539z00_1307;

				obj_t BgL_arg4542z00_1310;

				BgL_arg4538z00_1306 = CNST_TABLE_REF(((long) 32));
				BgL_arg4539z00_1307 = BGl_nodez00zzast_nodez00;
				{	/* Ast/node.scm 247 */
					obj_t BgL_v4192z00_1311;

					BgL_v4192z00_1311 = create_vector((int) (((long) 0)));
					BgL_arg4542z00_1310 = BgL_v4192z00_1311;
				}
				BGl_boxzd2setz12zc0zzast_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4538z00_1306,
					BgL_arg4539z00_1307, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2boxzd2setz12zd2envz92zzast_nodez00,
					BGl_boxzd2setz12zd2nilzd2envzc0zzast_nodez00,
					BGl_boxzd2setz12zf3zd2envze1zzast_nodez00, ((long) 525553547), BFALSE,
					BFALSE, BgL_arg4542z00_1310);
			}
			BGl_z52thezd2boxzd2setz12zd2nilz92zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2boxzd2refzd2nilz80zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2makezd2boxzd2nilz80zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2jumpzd2exzd2itzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2setzd2exzd2itzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2letzd2varzd2nilz80zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2letzd2funzd2nilz80zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2selectzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2failzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2conditionalzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2setqzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2castzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2castzd2nullzd2nilz80zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2isazd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2vlengthzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2vsetz12zd2nilz40zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2vrefzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2valloczd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2newzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2setfieldzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2getfieldzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2pragmazd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2externzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2funcallzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2appzd2lyzd2nilz80zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2appzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2sequencezd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2kwotezd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2closurezd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2varzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2atomzd2nilz52zzast_nodez00 = BUNSPEC;
			BGl_z52thezd2nodezf2effectzd2nilza0zzast_nodez00 = BUNSPEC;
			return (BGl_z52thezd2nodezd2nilz52zzast_nodez00 = BUNSPEC, BUNSPEC);
		}
	}



/* box-set!? */
	BGL_EXPORTED_DEF bool_t BGl_boxzd2setz12zf3z33zzast_nodez00(obj_t
		BgL_obj4144z00_47)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4144z00_47,
				BGl_boxzd2setz12zc0zzast_nodez00);
		}
	}



/* _box-set!? */
	obj_t BGl__boxzd2setz12zf3z33zzast_nodez00(obj_t BgL_envz00_6901,
		obj_t BgL_obj4144z00_6902)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4144z00_6902,
					BGl_boxzd2setz12zc0zzast_nodez00));
		}
	}



/* make-box-set! */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zc0_bglt
		BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t BgL_loc4108z00_51,
		BgL_typez00_bglt BgL_type4109z00_52, BgL_varz00_bglt BgL_var4110z00_53,
		BgL_nodez00_bglt BgL_value4111z00_54)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{	/* Ast/node.scm 247 */
				BgL_boxzd2setz12zc0_bglt BgL_new4112z00_3049;

				{	/* Ast/node.scm 247 */
					BgL_boxzd2setz12zc0_bglt BgL_res5271z00_3054;

					{	/* Ast/node.scm 247 */
						BgL_boxzd2setz12zc0_bglt BgL_new4124z00_3050;

						BgL_new4124z00_3050 =
							((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2setz12zc0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4124z00_3050),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2setz12zc0zzast_nodez00));
						{	/* Ast/node.scm 247 */
							BgL_objectz00_bglt BgL_auxz00_8732;

							BgL_auxz00_8732 = (BgL_objectz00_bglt) (BgL_new4124z00_3050);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8732, BFALSE);
						}
						BgL_res5271z00_3054 = BgL_new4124z00_3050;
					}
					BgL_new4112z00_3049 = BgL_res5271z00_3054;
				}
				{	/* Ast/node.scm 247 */
					BgL_boxzd2setz12zc0_bglt BgL_res5272z00_3064;

					{	/* Ast/node.scm 247 */
						BgL_boxzd2setz12zc0_bglt BgL_new4118z00_3055;

						BgL_new4118z00_3055 = BgL_new4112z00_3049;
						{	/* Ast/node.scm 247 */
							obj_t BgL_loc4114z00_3060;

							BgL_typez00_bglt BgL_type4115z00_3061;

							BgL_varz00_bglt BgL_var4116z00_3062;

							BgL_nodez00_bglt BgL_value4117z00_3063;

							BgL_loc4114z00_3060 = BgL_loc4108z00_51;
							BgL_type4115z00_3061 = BgL_type4109z00_52;
							BgL_var4116z00_3062 = BgL_var4110z00_53;
							BgL_value4117z00_3063 = BgL_value4111z00_54;
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3055))->
									BgL_locz00) = ((obj_t) BgL_loc4114z00_3060), BUNSPEC);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3055))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4115z00_3061), BUNSPEC);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3055))->
									BgL_varz00) =
								((BgL_varz00_bglt) BgL_var4116z00_3062), BUNSPEC);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3055))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value4117z00_3063), BUNSPEC);
							BgL_res5272z00_3064 = BgL_new4118z00_3055;
					}} BgL_res5272z00_3064;
				}
				return BgL_new4112z00_3049;
			}
		}
	}



/* _make-box-set! */
	obj_t BGl__makezd2boxzd2setz12z12zzast_nodez00(obj_t BgL_envz00_6903,
		obj_t BgL_loc4108z00_6904, obj_t BgL_type4109z00_6905,
		obj_t BgL_var4110z00_6906, obj_t BgL_value4111z00_6907)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			return
				(obj_t) (BGl_makezd2boxzd2setz12z12zzast_nodez00(BgL_loc4108z00_6904,
					(BgL_typez00_bglt) (BgL_type4109z00_6905),
					(BgL_varz00_bglt) (BgL_var4110z00_6906),
					(BgL_nodez00_bglt) (BgL_value4111z00_6907)));
		}
	}



/* fill-box-set!! */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zc0_bglt
		BGl_fillzd2boxzd2setz12z12z00zzast_nodez00(BgL_boxzd2setz12zc0_bglt
		BgL_new4118z00_55, obj_t BgL_loc4114z00_56,
		BgL_typez00_bglt BgL_type4115z00_57, BgL_varz00_bglt BgL_var4116z00_58,
		BgL_nodez00_bglt BgL_value4117z00_59)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{	/* Ast/node.scm 247 */
				obj_t BgL_loc4114z00_7708;

				BgL_typez00_bglt BgL_type4115z00_7709;

				BgL_varz00_bglt BgL_var4116z00_7710;

				BgL_nodez00_bglt BgL_value4117z00_7711;

				BgL_loc4114z00_7708 = BgL_loc4114z00_56;
				BgL_type4115z00_7709 = BgL_type4115z00_57;
				BgL_var4116z00_7710 = BgL_var4116z00_58;
				BgL_value4117z00_7711 = BgL_value4117z00_59;
				((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_55))->BgL_locz00) =
					((obj_t) BgL_loc4114z00_7708), BUNSPEC);
				((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_55))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4115z00_7709), BUNSPEC);
				((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_55))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_var4116z00_7710), BUNSPEC);
				((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_55))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_value4117z00_7711), BUNSPEC);
				return BgL_new4118z00_55;
			}
		}
	}



/* _fill-box-set!! */
	obj_t BGl__fillzd2boxzd2setz12z12z00zzast_nodez00(obj_t BgL_envz00_6908,
		obj_t BgL_new4118z00_6909, obj_t BgL_loc4114z00_6910,
		obj_t BgL_type4115z00_6911, obj_t BgL_var4116z00_6912,
		obj_t BgL_value4117z00_6913)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{	/* Ast/node.scm 247 */
				BgL_boxzd2setz12zc0_bglt BgL_auxz00_8748;

				{	/* Ast/node.scm 247 */
					BgL_boxzd2setz12zc0_bglt BgL_res5553z00_7721;

					{	/* Ast/node.scm 247 */
						BgL_boxzd2setz12zc0_bglt BgL_new4118z00_7712;

						BgL_typez00_bglt BgL_type4115z00_7714;

						BgL_varz00_bglt BgL_var4116z00_7715;

						BgL_nodez00_bglt BgL_value4117z00_7716;

						BgL_new4118z00_7712 =
							(BgL_boxzd2setz12zc0_bglt) (BgL_new4118z00_6909);
						BgL_type4115z00_7714 = (BgL_typez00_bglt) (BgL_type4115z00_6911);
						BgL_var4116z00_7715 = (BgL_varz00_bglt) (BgL_var4116z00_6912);
						BgL_value4117z00_7716 = (BgL_nodez00_bglt) (BgL_value4117z00_6913);
						{	/* Ast/node.scm 247 */
							obj_t BgL_loc4114z00_7717;

							BgL_typez00_bglt BgL_type4115z00_7718;

							BgL_varz00_bglt BgL_var4116z00_7719;

							BgL_nodez00_bglt BgL_value4117z00_7720;

							BgL_loc4114z00_7717 = BgL_loc4114z00_6910;
							BgL_type4115z00_7718 = BgL_type4115z00_7714;
							BgL_var4116z00_7719 = BgL_var4116z00_7715;
							BgL_value4117z00_7720 = BgL_value4117z00_7716;
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_7712))->
									BgL_locz00) = ((obj_t) BgL_loc4114z00_7717), BUNSPEC);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_7712))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4115z00_7718), BUNSPEC);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_7712))->
									BgL_varz00) =
								((BgL_varz00_bglt) BgL_var4116z00_7719), BUNSPEC);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_7712))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value4117z00_7720), BUNSPEC);
							BgL_res5553z00_7721 = BgL_new4118z00_7712;
						}
					}
					BgL_auxz00_8748 = BgL_res5553z00_7721;
				}
				return (obj_t) (BgL_auxz00_8748);
			}
		}
	}



/* %allocate-box-set! */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zc0_bglt
		BGl_z52allocatezd2boxzd2setz12z40zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{	/* Ast/node.scm 247 */
				BgL_boxzd2setz12zc0_bglt BgL_new4124z00_7722;

				BgL_new4124z00_7722 =
					((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2setz12zc0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4124z00_7722),
					BGl_classzd2numzd2zz__objectz00(BGl_boxzd2setz12zc0zzast_nodez00));
				{	/* Ast/node.scm 247 */
					BgL_objectz00_bglt BgL_auxz00_8762;

					BgL_auxz00_8762 = (BgL_objectz00_bglt) (BgL_new4124z00_7722);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8762, BFALSE);
				}
				return BgL_new4124z00_7722;
			}
		}
	}



/* _%allocate-box-set! */
	obj_t BGl__z52allocatezd2boxzd2setz12z40zzast_nodez00(obj_t BgL_envz00_6899)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{	/* Ast/node.scm 247 */
				BgL_boxzd2setz12zc0_bglt BgL_auxz00_8765;

				{	/* Ast/node.scm 247 */
					BgL_boxzd2setz12zc0_bglt BgL_res5554z00_7726;

					{	/* Ast/node.scm 247 */
						BgL_boxzd2setz12zc0_bglt BgL_new4124z00_7724;

						BgL_new4124z00_7724 =
							((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2setz12zc0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4124z00_7724),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2setz12zc0zzast_nodez00));
						{	/* Ast/node.scm 247 */
							BgL_objectz00_bglt BgL_auxz00_8770;

							BgL_auxz00_8770 = (BgL_objectz00_bglt) (BgL_new4124z00_7724);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8770, BFALSE);
						}
						BgL_res5554z00_7726 = BgL_new4124z00_7724;
					}
					BgL_auxz00_8765 = BgL_res5554z00_7726;
				}
				return (obj_t) (BgL_auxz00_8765);
			}
		}
	}



/* box-set!-nil */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zc0_bglt
		BGl_boxzd2setz12zd2nilz12zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			if ((BGl_z52thezd2boxzd2setz12zd2nilz92zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 247 */
					{	/* Ast/node.scm 247 */
						BgL_boxzd2setz12zc0_bglt BgL_res5273z00_3077;

						{	/* Ast/node.scm 247 */
							BgL_boxzd2setz12zc0_bglt BgL_new4124z00_3073;

							BgL_new4124z00_3073 =
								((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2setz12zc0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4124z00_3073),
								BGl_classzd2numzd2zz__objectz00
								(BGl_boxzd2setz12zc0zzast_nodez00));
							{	/* Ast/node.scm 247 */
								BgL_objectz00_bglt BgL_auxz00_8780;

								BgL_auxz00_8780 = (BgL_objectz00_bglt) (BgL_new4124z00_3073);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8780, BFALSE);
							}
							BgL_res5273z00_3077 = BgL_new4124z00_3073;
						}
						BGl_z52thezd2boxzd2setz12zd2nilz92zzast_nodez00 =
							(obj_t) (BgL_res5273z00_3077);
					}
					{	/* Ast/node.scm 247 */
						BgL_typez00_bglt BgL_arg4545z00_1320;

						BgL_varz00_bglt BgL_arg4546z00_1321;

						BgL_nodez00_bglt BgL_arg4547z00_1322;

						BgL_arg4545z00_1320 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4546z00_1321 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4547z00_1322 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 247 */
							BgL_boxzd2setz12zc0_bglt BgL_res5274z00_3087;

							{	/* Ast/node.scm 247 */
								BgL_boxzd2setz12zc0_bglt BgL_new4118z00_3078;

								BgL_new4118z00_3078 =
									(BgL_boxzd2setz12zc0_bglt)
									(BGl_z52thezd2boxzd2setz12zd2nilz92zzast_nodez00);
								{	/* Ast/node.scm 247 */
									obj_t BgL_loc4114z00_3083;

									BgL_typez00_bglt BgL_type4115z00_3084;

									BgL_varz00_bglt BgL_var4116z00_3085;

									BgL_nodez00_bglt BgL_value4117z00_3086;

									BgL_loc4114z00_3083 = BUNSPEC;
									BgL_type4115z00_3084 = BgL_arg4545z00_1320;
									BgL_var4116z00_3085 = BgL_arg4546z00_1321;
									BgL_value4117z00_3086 = BgL_arg4547z00_1322;
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3078))->
											BgL_locz00) = ((obj_t) BgL_loc4114z00_3083), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3078))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4115z00_3084), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3078))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var4116z00_3085), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new4118z00_3078))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value4117z00_3086), BUNSPEC);
									BgL_res5274z00_3087 = BgL_new4118z00_3078;
							}}
							(obj_t) (BgL_res5274z00_3087);
				}}}
			else
				{	/* Ast/node.scm 247 */
					BFALSE;
				}
			return
				(BgL_boxzd2setz12zc0_bglt)
				(BGl_z52thezd2boxzd2setz12zd2nilz92zzast_nodez00);
		}
	}



/* _box-set!-nil */
	obj_t BGl__boxzd2setz12zd2nilz12zzast_nodez00(obj_t BgL_envz00_6900)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			return (obj_t) (BGl_boxzd2setz12zd2nilz12zzast_nodez00());
		}
	}



/* box-ref? */
	BGL_EXPORTED_DEF bool_t BGl_boxzd2refzf3z21zzast_nodez00(obj_t
		BgL_obj4097z00_66)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4097z00_66,
				BGl_boxzd2refzd2zzast_nodez00);
		}
	}



/* _box-ref? */
	obj_t BGl__boxzd2refzf3z21zzast_nodez00(obj_t BgL_envz00_6897,
		obj_t BgL_obj4097z00_6898)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4097z00_6898,
					BGl_boxzd2refzd2zzast_nodez00));
		}
	}



/* make-box-ref */
	BGL_EXPORTED_DEF BgL_boxzd2refzd2_bglt
		BGl_makezd2boxzd2refz00zzast_nodez00(obj_t BgL_loc4055z00_70,
		BgL_typez00_bglt BgL_type4056z00_71, obj_t BgL_sidezd2effectzf34057z21_72,
		obj_t BgL_key4058z00_73, BgL_varz00_bglt BgL_var4059z00_74)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{	/* Ast/node.scm 243 */
				BgL_boxzd2refzd2_bglt BgL_new4060z00_3088;

				{	/* Ast/node.scm 243 */
					BgL_boxzd2refzd2_bglt BgL_res5275z00_3093;

					{	/* Ast/node.scm 243 */
						BgL_boxzd2refzd2_bglt BgL_new4074z00_3089;

						BgL_new4074z00_3089 =
							((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2refzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4074z00_3089),
							BGl_classzd2numzd2zz__objectz00(BGl_boxzd2refzd2zzast_nodez00));
						{	/* Ast/node.scm 243 */
							BgL_objectz00_bglt BgL_auxz00_8803;

							BgL_auxz00_8803 = (BgL_objectz00_bglt) (BgL_new4074z00_3089);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8803, BFALSE);
						}
						BgL_res5275z00_3093 = BgL_new4074z00_3089;
					}
					BgL_new4060z00_3088 = BgL_res5275z00_3093;
				}
				{	/* Ast/node.scm 243 */
					BgL_boxzd2refzd2_bglt BgL_res5276z00_3105;

					{	/* Ast/node.scm 243 */
						BgL_boxzd2refzd2_bglt BgL_new4067z00_3094;

						BgL_new4067z00_3094 = BgL_new4060z00_3088;
						{	/* Ast/node.scm 243 */
							obj_t BgL_loc4062z00_3100;

							BgL_typez00_bglt BgL_type4063z00_3101;

							obj_t BgL_sidezd2effectzf34064z21_3102;

							obj_t BgL_key4065z00_3103;

							BgL_varz00_bglt BgL_var4066z00_3104;

							BgL_loc4062z00_3100 = BgL_loc4055z00_70;
							BgL_type4063z00_3101 = BgL_type4056z00_71;
							BgL_sidezd2effectzf34064z21_3102 = BgL_sidezd2effectzf34057z21_72;
							BgL_key4065z00_3103 = BgL_key4058z00_73;
							BgL_var4066z00_3104 = BgL_var4059z00_74;
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3094))->
									BgL_locz00) = ((obj_t) BgL_loc4062z00_3100), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3094))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4063z00_3101), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3094))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf34064z21_3102), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3094))->
									BgL_keyz00) = ((obj_t) BgL_key4065z00_3103), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3094))->
									BgL_varz00) =
								((BgL_varz00_bglt) BgL_var4066z00_3104), BUNSPEC);
							BgL_res5276z00_3105 = BgL_new4067z00_3094;
					}} BgL_res5276z00_3105;
				}
				return BgL_new4060z00_3088;
			}
		}
	}



/* _make-box-ref */
	obj_t BGl__makezd2boxzd2refz00zzast_nodez00(obj_t BgL_envz00_6914,
		obj_t BgL_loc4055z00_6915, obj_t BgL_type4056z00_6916,
		obj_t BgL_sidezd2effectzf34057z21_6917, obj_t BgL_key4058z00_6918,
		obj_t BgL_var4059z00_6919)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			return
				(obj_t) (BGl_makezd2boxzd2refz00zzast_nodez00(BgL_loc4055z00_6915,
					(BgL_typez00_bglt) (BgL_type4056z00_6916),
					BgL_sidezd2effectzf34057z21_6917, BgL_key4058z00_6918,
					(BgL_varz00_bglt) (BgL_var4059z00_6919)));
		}
	}



/* fill-box-ref! */
	BGL_EXPORTED_DEF BgL_boxzd2refzd2_bglt
		BGl_fillzd2boxzd2refz12z12zzast_nodez00(BgL_boxzd2refzd2_bglt
		BgL_new4067z00_75, obj_t BgL_loc4062z00_76,
		BgL_typez00_bglt BgL_type4063z00_77, obj_t BgL_sidezd2effectzf34064z21_78,
		obj_t BgL_key4065z00_79, BgL_varz00_bglt BgL_var4066z00_80)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{	/* Ast/node.scm 243 */
				obj_t BgL_loc4062z00_7728;

				BgL_typez00_bglt BgL_type4063z00_7729;

				obj_t BgL_sidezd2effectzf34064z21_7730;

				obj_t BgL_key4065z00_7731;

				BgL_varz00_bglt BgL_var4066z00_7732;

				BgL_loc4062z00_7728 = BgL_loc4062z00_76;
				BgL_type4063z00_7729 = BgL_type4063z00_77;
				BgL_sidezd2effectzf34064z21_7730 = BgL_sidezd2effectzf34064z21_78;
				BgL_key4065z00_7731 = BgL_key4065z00_79;
				BgL_var4066z00_7732 = BgL_var4066z00_80;
				((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_75))->BgL_locz00) =
					((obj_t) BgL_loc4062z00_7728), BUNSPEC);
				((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_75))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4063z00_7729), BUNSPEC);
				((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_75))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf34064z21_7730), BUNSPEC);
				((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_75))->BgL_keyz00) =
					((obj_t) BgL_key4065z00_7731), BUNSPEC);
				((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_75))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_var4066z00_7732), BUNSPEC);
				return BgL_new4067z00_75;
			}
		}
	}



/* _fill-box-ref! */
	obj_t BGl__fillzd2boxzd2refz12z12zzast_nodez00(obj_t BgL_envz00_6920,
		obj_t BgL_new4067z00_6921, obj_t BgL_loc4062z00_6922,
		obj_t BgL_type4063z00_6923, obj_t BgL_sidezd2effectzf34064z21_6924,
		obj_t BgL_key4065z00_6925, obj_t BgL_var4066z00_6926)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{	/* Ast/node.scm 243 */
				BgL_boxzd2refzd2_bglt BgL_auxz00_8820;

				{	/* Ast/node.scm 243 */
					BgL_boxzd2refzd2_bglt BgL_res5555z00_7744;

					{	/* Ast/node.scm 243 */
						BgL_boxzd2refzd2_bglt BgL_new4067z00_7733;

						BgL_typez00_bglt BgL_type4063z00_7735;

						BgL_varz00_bglt BgL_var4066z00_7738;

						BgL_new4067z00_7733 = (BgL_boxzd2refzd2_bglt) (BgL_new4067z00_6921);
						BgL_type4063z00_7735 = (BgL_typez00_bglt) (BgL_type4063z00_6923);
						BgL_var4066z00_7738 = (BgL_varz00_bglt) (BgL_var4066z00_6926);
						{	/* Ast/node.scm 243 */
							obj_t BgL_loc4062z00_7739;

							BgL_typez00_bglt BgL_type4063z00_7740;

							obj_t BgL_sidezd2effectzf34064z21_7741;

							obj_t BgL_key4065z00_7742;

							BgL_varz00_bglt BgL_var4066z00_7743;

							BgL_loc4062z00_7739 = BgL_loc4062z00_6922;
							BgL_type4063z00_7740 = BgL_type4063z00_7735;
							BgL_sidezd2effectzf34064z21_7741 =
								BgL_sidezd2effectzf34064z21_6924;
							BgL_key4065z00_7742 = BgL_key4065z00_6925;
							BgL_var4066z00_7743 = BgL_var4066z00_7738;
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_7733))->
									BgL_locz00) = ((obj_t) BgL_loc4062z00_7739), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_7733))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4063z00_7740), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_7733))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf34064z21_7741), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_7733))->
									BgL_keyz00) = ((obj_t) BgL_key4065z00_7742), BUNSPEC);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_7733))->
									BgL_varz00) =
								((BgL_varz00_bglt) BgL_var4066z00_7743), BUNSPEC);
							BgL_res5555z00_7744 = BgL_new4067z00_7733;
						}
					}
					BgL_auxz00_8820 = BgL_res5555z00_7744;
				}
				return (obj_t) (BgL_auxz00_8820);
			}
		}
	}



/* %allocate-box-ref */
	BGL_EXPORTED_DEF BgL_boxzd2refzd2_bglt
		BGl_z52allocatezd2boxzd2refz52zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{	/* Ast/node.scm 243 */
				BgL_boxzd2refzd2_bglt BgL_new4074z00_7745;

				BgL_new4074z00_7745 =
					((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2refzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4074z00_7745),
					BGl_classzd2numzd2zz__objectz00(BGl_boxzd2refzd2zzast_nodez00));
				{	/* Ast/node.scm 243 */
					BgL_objectz00_bglt BgL_auxz00_8834;

					BgL_auxz00_8834 = (BgL_objectz00_bglt) (BgL_new4074z00_7745);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8834, BFALSE);
				}
				return BgL_new4074z00_7745;
			}
		}
	}



/* _%allocate-box-ref */
	obj_t BGl__z52allocatezd2boxzd2refz52zzast_nodez00(obj_t BgL_envz00_6895)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{	/* Ast/node.scm 243 */
				BgL_boxzd2refzd2_bglt BgL_auxz00_8837;

				{	/* Ast/node.scm 243 */
					BgL_boxzd2refzd2_bglt BgL_res5556z00_7749;

					{	/* Ast/node.scm 243 */
						BgL_boxzd2refzd2_bglt BgL_new4074z00_7747;

						BgL_new4074z00_7747 =
							((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2refzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4074z00_7747),
							BGl_classzd2numzd2zz__objectz00(BGl_boxzd2refzd2zzast_nodez00));
						{	/* Ast/node.scm 243 */
							BgL_objectz00_bglt BgL_auxz00_8842;

							BgL_auxz00_8842 = (BgL_objectz00_bglt) (BgL_new4074z00_7747);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8842, BFALSE);
						}
						BgL_res5556z00_7749 = BgL_new4074z00_7747;
					}
					BgL_auxz00_8837 = BgL_res5556z00_7749;
				}
				return (obj_t) (BgL_auxz00_8837);
			}
		}
	}



/* box-ref-nil */
	BGL_EXPORTED_DEF BgL_boxzd2refzd2_bglt BGl_boxzd2refzd2nilz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			if ((BGl_z52thezd2boxzd2refzd2nilz80zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 243 */
					{	/* Ast/node.scm 243 */
						BgL_boxzd2refzd2_bglt BgL_res5277z00_3119;

						{	/* Ast/node.scm 243 */
							BgL_boxzd2refzd2_bglt BgL_new4074z00_3115;

							BgL_new4074z00_3115 =
								((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2refzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4074z00_3115),
								BGl_classzd2numzd2zz__objectz00(BGl_boxzd2refzd2zzast_nodez00));
							{	/* Ast/node.scm 243 */
								BgL_objectz00_bglt BgL_auxz00_8852;

								BgL_auxz00_8852 = (BgL_objectz00_bglt) (BgL_new4074z00_3115);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8852, BFALSE);
							}
							BgL_res5277z00_3119 = BgL_new4074z00_3115;
						}
						BGl_z52thezd2boxzd2refzd2nilz80zzast_nodez00 =
							(obj_t) (BgL_res5277z00_3119);
					}
					{	/* Ast/node.scm 243 */
						BgL_typez00_bglt BgL_arg4550z00_1332;

						BgL_varz00_bglt BgL_arg4551z00_1333;

						BgL_arg4550z00_1332 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4551z00_1333 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 243 */
							BgL_boxzd2refzd2_bglt BgL_res5278z00_3131;

							{	/* Ast/node.scm 243 */
								BgL_boxzd2refzd2_bglt BgL_new4067z00_3120;

								BgL_new4067z00_3120 =
									(BgL_boxzd2refzd2_bglt)
									(BGl_z52thezd2boxzd2refzd2nilz80zzast_nodez00);
								{	/* Ast/node.scm 243 */
									obj_t BgL_loc4062z00_3126;

									BgL_typez00_bglt BgL_type4063z00_3127;

									obj_t BgL_sidezd2effectzf34064z21_3128;

									obj_t BgL_key4065z00_3129;

									BgL_varz00_bglt BgL_var4066z00_3130;

									BgL_loc4062z00_3126 = BUNSPEC;
									BgL_type4063z00_3127 = BgL_arg4550z00_1332;
									BgL_sidezd2effectzf34064z21_3128 = BUNSPEC;
									BgL_key4065z00_3129 = BUNSPEC;
									BgL_var4066z00_3130 = BgL_arg4551z00_1333;
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3120))->
											BgL_locz00) = ((obj_t) BgL_loc4062z00_3126), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3120))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4063z00_3127), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3120))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf34064z21_3128), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3120))->
											BgL_keyz00) = ((obj_t) BgL_key4065z00_3129), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new4067z00_3120))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var4066z00_3130), BUNSPEC);
									BgL_res5278z00_3131 = BgL_new4067z00_3120;
							}}
							(obj_t) (BgL_res5278z00_3131);
				}}}
			else
				{	/* Ast/node.scm 243 */
					BFALSE;
				}
			return
				(BgL_boxzd2refzd2_bglt) (BGl_z52thezd2boxzd2refzd2nilz80zzast_nodez00);
		}
	}



/* _box-ref-nil */
	obj_t BGl__boxzd2refzd2nilz00zzast_nodez00(obj_t BgL_envz00_6896)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			return (obj_t) (BGl_boxzd2refzd2nilz00zzast_nodez00());
		}
	}



/* make-box? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2boxzf3z21zzast_nodez00(obj_t
		BgL_obj4040z00_84)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4040z00_84,
				BGl_makezd2boxzd2zzast_nodez00);
		}
	}



/* _make-box? */
	obj_t BGl__makezd2boxzf3z21zzast_nodez00(obj_t BgL_envz00_6893,
		obj_t BgL_obj4040z00_6894)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4040z00_6894,
					BGl_makezd2boxzd2zzast_nodez00));
		}
	}



/* make-make-box */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt
		BGl_makezd2makezd2boxz00zzast_nodez00(obj_t BgL_loc3998z00_88,
		BgL_typez00_bglt BgL_type3999z00_89, obj_t BgL_sidezd2effectzf34000z21_90,
		obj_t BgL_key4001z00_91, BgL_nodez00_bglt BgL_value4002z00_92)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{	/* Ast/node.scm 239 */
				BgL_makezd2boxzd2_bglt BgL_new4003z00_3132;

				{	/* Ast/node.scm 239 */
					BgL_makezd2boxzd2_bglt BgL_res5279z00_3137;

					{	/* Ast/node.scm 239 */
						BgL_makezd2boxzd2_bglt BgL_new4017z00_3133;

						BgL_new4017z00_3133 =
							((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_makezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4017z00_3133),
							BGl_classzd2numzd2zz__objectz00(BGl_makezd2boxzd2zzast_nodez00));
						{	/* Ast/node.scm 239 */
							BgL_objectz00_bglt BgL_auxz00_8875;

							BgL_auxz00_8875 = (BgL_objectz00_bglt) (BgL_new4017z00_3133);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8875, BFALSE);
						}
						BgL_res5279z00_3137 = BgL_new4017z00_3133;
					}
					BgL_new4003z00_3132 = BgL_res5279z00_3137;
				}
				{	/* Ast/node.scm 239 */
					BgL_makezd2boxzd2_bglt BgL_res5280z00_3149;

					{	/* Ast/node.scm 239 */
						BgL_makezd2boxzd2_bglt BgL_new4010z00_3138;

						BgL_new4010z00_3138 = BgL_new4003z00_3132;
						{	/* Ast/node.scm 239 */
							obj_t BgL_loc4005z00_3144;

							BgL_typez00_bglt BgL_type4006z00_3145;

							obj_t BgL_sidezd2effectzf34007z21_3146;

							obj_t BgL_key4008z00_3147;

							BgL_nodez00_bglt BgL_value4009z00_3148;

							BgL_loc4005z00_3144 = BgL_loc3998z00_88;
							BgL_type4006z00_3145 = BgL_type3999z00_89;
							BgL_sidezd2effectzf34007z21_3146 = BgL_sidezd2effectzf34000z21_90;
							BgL_key4008z00_3147 = BgL_key4001z00_91;
							BgL_value4009z00_3148 = BgL_value4002z00_92;
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3138))->
									BgL_locz00) = ((obj_t) BgL_loc4005z00_3144), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3138))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4006z00_3145), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3138))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf34007z21_3146), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3138))->
									BgL_keyz00) = ((obj_t) BgL_key4008z00_3147), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3138))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value4009z00_3148), BUNSPEC);
							BgL_res5280z00_3149 = BgL_new4010z00_3138;
					}} BgL_res5280z00_3149;
				}
				return BgL_new4003z00_3132;
			}
		}
	}



/* _make-make-box */
	obj_t BGl__makezd2makezd2boxz00zzast_nodez00(obj_t BgL_envz00_6927,
		obj_t BgL_loc3998z00_6928, obj_t BgL_type3999z00_6929,
		obj_t BgL_sidezd2effectzf34000z21_6930, obj_t BgL_key4001z00_6931,
		obj_t BgL_value4002z00_6932)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			return
				(obj_t) (BGl_makezd2makezd2boxz00zzast_nodez00(BgL_loc3998z00_6928,
					(BgL_typez00_bglt) (BgL_type3999z00_6929),
					BgL_sidezd2effectzf34000z21_6930, BgL_key4001z00_6931,
					(BgL_nodez00_bglt) (BgL_value4002z00_6932)));
		}
	}



/* fill-make-box! */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt
		BGl_fillzd2makezd2boxz12z12zzast_nodez00(BgL_makezd2boxzd2_bglt
		BgL_new4010z00_93, obj_t BgL_loc4005z00_94,
		BgL_typez00_bglt BgL_type4006z00_95, obj_t BgL_sidezd2effectzf34007z21_96,
		obj_t BgL_key4008z00_97, BgL_nodez00_bglt BgL_value4009z00_98)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{	/* Ast/node.scm 239 */
				obj_t BgL_loc4005z00_7751;

				BgL_typez00_bglt BgL_type4006z00_7752;

				obj_t BgL_sidezd2effectzf34007z21_7753;

				obj_t BgL_key4008z00_7754;

				BgL_nodez00_bglt BgL_value4009z00_7755;

				BgL_loc4005z00_7751 = BgL_loc4005z00_94;
				BgL_type4006z00_7752 = BgL_type4006z00_95;
				BgL_sidezd2effectzf34007z21_7753 = BgL_sidezd2effectzf34007z21_96;
				BgL_key4008z00_7754 = BgL_key4008z00_97;
				BgL_value4009z00_7755 = BgL_value4009z00_98;
				((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_93))->BgL_locz00) =
					((obj_t) BgL_loc4005z00_7751), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_93))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type4006z00_7752), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_93))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf34007z21_7753), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_93))->BgL_keyz00) =
					((obj_t) BgL_key4008z00_7754), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_93))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_value4009z00_7755), BUNSPEC);
				return BgL_new4010z00_93;
			}
		}
	}



/* _fill-make-box! */
	obj_t BGl__fillzd2makezd2boxz12z12zzast_nodez00(obj_t BgL_envz00_6933,
		obj_t BgL_new4010z00_6934, obj_t BgL_loc4005z00_6935,
		obj_t BgL_type4006z00_6936, obj_t BgL_sidezd2effectzf34007z21_6937,
		obj_t BgL_key4008z00_6938, obj_t BgL_value4009z00_6939)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{	/* Ast/node.scm 239 */
				BgL_makezd2boxzd2_bglt BgL_auxz00_8892;

				{	/* Ast/node.scm 239 */
					BgL_makezd2boxzd2_bglt BgL_res5557z00_7767;

					{	/* Ast/node.scm 239 */
						BgL_makezd2boxzd2_bglt BgL_new4010z00_7756;

						BgL_typez00_bglt BgL_type4006z00_7758;

						BgL_nodez00_bglt BgL_value4009z00_7761;

						BgL_new4010z00_7756 =
							(BgL_makezd2boxzd2_bglt) (BgL_new4010z00_6934);
						BgL_type4006z00_7758 = (BgL_typez00_bglt) (BgL_type4006z00_6936);
						BgL_value4009z00_7761 = (BgL_nodez00_bglt) (BgL_value4009z00_6939);
						{	/* Ast/node.scm 239 */
							obj_t BgL_loc4005z00_7762;

							BgL_typez00_bglt BgL_type4006z00_7763;

							obj_t BgL_sidezd2effectzf34007z21_7764;

							obj_t BgL_key4008z00_7765;

							BgL_nodez00_bglt BgL_value4009z00_7766;

							BgL_loc4005z00_7762 = BgL_loc4005z00_6935;
							BgL_type4006z00_7763 = BgL_type4006z00_7758;
							BgL_sidezd2effectzf34007z21_7764 =
								BgL_sidezd2effectzf34007z21_6937;
							BgL_key4008z00_7765 = BgL_key4008z00_6938;
							BgL_value4009z00_7766 = BgL_value4009z00_7761;
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_7756))->
									BgL_locz00) = ((obj_t) BgL_loc4005z00_7762), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_7756))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type4006z00_7763), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_7756))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf34007z21_7764), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_7756))->
									BgL_keyz00) = ((obj_t) BgL_key4008z00_7765), BUNSPEC);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_7756))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value4009z00_7766), BUNSPEC);
							BgL_res5557z00_7767 = BgL_new4010z00_7756;
						}
					}
					BgL_auxz00_8892 = BgL_res5557z00_7767;
				}
				return (obj_t) (BgL_auxz00_8892);
			}
		}
	}



/* %allocate-make-box */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2makezd2boxz52zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{	/* Ast/node.scm 239 */
				BgL_makezd2boxzd2_bglt BgL_new4017z00_7768;

				BgL_new4017z00_7768 =
					((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4017z00_7768),
					BGl_classzd2numzd2zz__objectz00(BGl_makezd2boxzd2zzast_nodez00));
				{	/* Ast/node.scm 239 */
					BgL_objectz00_bglt BgL_auxz00_8906;

					BgL_auxz00_8906 = (BgL_objectz00_bglt) (BgL_new4017z00_7768);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8906, BFALSE);
				}
				return BgL_new4017z00_7768;
			}
		}
	}



/* _%allocate-make-box */
	obj_t BGl__z52allocatezd2makezd2boxz52zzast_nodez00(obj_t BgL_envz00_6891)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{	/* Ast/node.scm 239 */
				BgL_makezd2boxzd2_bglt BgL_auxz00_8909;

				{	/* Ast/node.scm 239 */
					BgL_makezd2boxzd2_bglt BgL_res5558z00_7772;

					{	/* Ast/node.scm 239 */
						BgL_makezd2boxzd2_bglt BgL_new4017z00_7770;

						BgL_new4017z00_7770 =
							((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_makezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4017z00_7770),
							BGl_classzd2numzd2zz__objectz00(BGl_makezd2boxzd2zzast_nodez00));
						{	/* Ast/node.scm 239 */
							BgL_objectz00_bglt BgL_auxz00_8914;

							BgL_auxz00_8914 = (BgL_objectz00_bglt) (BgL_new4017z00_7770);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8914, BFALSE);
						}
						BgL_res5558z00_7772 = BgL_new4017z00_7770;
					}
					BgL_auxz00_8909 = BgL_res5558z00_7772;
				}
				return (obj_t) (BgL_auxz00_8909);
			}
		}
	}



/* make-box-nil */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt BGl_makezd2boxzd2nilz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			if ((BGl_z52thezd2makezd2boxzd2nilz80zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 239 */
					{	/* Ast/node.scm 239 */
						BgL_makezd2boxzd2_bglt BgL_res5281z00_3163;

						{	/* Ast/node.scm 239 */
							BgL_makezd2boxzd2_bglt BgL_new4017z00_3159;

							BgL_new4017z00_3159 =
								((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4017z00_3159),
								BGl_classzd2numzd2zz__objectz00
								(BGl_makezd2boxzd2zzast_nodez00));
							{	/* Ast/node.scm 239 */
								BgL_objectz00_bglt BgL_auxz00_8924;

								BgL_auxz00_8924 = (BgL_objectz00_bglt) (BgL_new4017z00_3159);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8924, BFALSE);
							}
							BgL_res5281z00_3163 = BgL_new4017z00_3159;
						}
						BGl_z52thezd2makezd2boxzd2nilz80zzast_nodez00 =
							(obj_t) (BgL_res5281z00_3163);
					}
					{	/* Ast/node.scm 239 */
						BgL_typez00_bglt BgL_arg4554z00_1343;

						BgL_nodez00_bglt BgL_arg4555z00_1344;

						BgL_arg4554z00_1343 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4555z00_1344 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 239 */
							BgL_makezd2boxzd2_bglt BgL_res5282z00_3175;

							{	/* Ast/node.scm 239 */
								BgL_makezd2boxzd2_bglt BgL_new4010z00_3164;

								BgL_new4010z00_3164 =
									(BgL_makezd2boxzd2_bglt)
									(BGl_z52thezd2makezd2boxzd2nilz80zzast_nodez00);
								{	/* Ast/node.scm 239 */
									obj_t BgL_loc4005z00_3170;

									BgL_typez00_bglt BgL_type4006z00_3171;

									obj_t BgL_sidezd2effectzf34007z21_3172;

									obj_t BgL_key4008z00_3173;

									BgL_nodez00_bglt BgL_value4009z00_3174;

									BgL_loc4005z00_3170 = BUNSPEC;
									BgL_type4006z00_3171 = BgL_arg4554z00_1343;
									BgL_sidezd2effectzf34007z21_3172 = BUNSPEC;
									BgL_key4008z00_3173 = BUNSPEC;
									BgL_value4009z00_3174 = BgL_arg4555z00_1344;
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3164))->
											BgL_locz00) = ((obj_t) BgL_loc4005z00_3170), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3164))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type4006z00_3171), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3164))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf34007z21_3172), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3164))->
											BgL_keyz00) = ((obj_t) BgL_key4008z00_3173), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new4010z00_3164))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value4009z00_3174), BUNSPEC);
									BgL_res5282z00_3175 = BgL_new4010z00_3164;
							}}
							(obj_t) (BgL_res5282z00_3175);
				}}}
			else
				{	/* Ast/node.scm 239 */
					BFALSE;
				}
			return
				(BgL_makezd2boxzd2_bglt)
				(BGl_z52thezd2makezd2boxzd2nilz80zzast_nodez00);
		}
	}



/* _make-box-nil */
	obj_t BGl__makezd2boxzd2nilz00zzast_nodez00(obj_t BgL_envz00_6892)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			return (obj_t) (BGl_makezd2boxzd2nilz00zzast_nodez00());
		}
	}



/* jump-ex-it? */
	BGL_EXPORTED_DEF bool_t BGl_jumpzd2exzd2itzf3zf3zzast_nodez00(obj_t
		BgL_obj3984z00_102)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3984z00_102,
				BGl_jumpzd2exzd2itz00zzast_nodez00);
		}
	}



/* _jump-ex-it? */
	obj_t BGl__jumpzd2exzd2itzf3zf3zzast_nodez00(obj_t BgL_envz00_6889,
		obj_t BgL_obj3984z00_6890)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3984z00_6890,
					BGl_jumpzd2exzd2itz00zzast_nodez00));
		}
	}



/* make-jump-ex-it */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t BgL_loc3949z00_106,
		BgL_typez00_bglt BgL_type3950z00_107, BgL_nodez00_bglt BgL_exit3951z00_108,
		BgL_nodez00_bglt BgL_value3952z00_109)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{	/* Ast/node.scm 232 */
				BgL_jumpzd2exzd2itz00_bglt BgL_new3953z00_3176;

				{	/* Ast/node.scm 232 */
					BgL_jumpzd2exzd2itz00_bglt BgL_res5283z00_3181;

					{	/* Ast/node.scm 232 */
						BgL_jumpzd2exzd2itz00_bglt BgL_new3965z00_3177;

						BgL_new3965z00_3177 =
							((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jumpzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3965z00_3177),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jumpzd2exzd2itz00zzast_nodez00));
						{	/* Ast/node.scm 232 */
							BgL_objectz00_bglt BgL_auxz00_8947;

							BgL_auxz00_8947 = (BgL_objectz00_bglt) (BgL_new3965z00_3177);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8947, BFALSE);
						}
						BgL_res5283z00_3181 = BgL_new3965z00_3177;
					}
					BgL_new3953z00_3176 = BgL_res5283z00_3181;
				}
				{	/* Ast/node.scm 232 */
					BgL_jumpzd2exzd2itz00_bglt BgL_res5284z00_3191;

					{	/* Ast/node.scm 232 */
						BgL_jumpzd2exzd2itz00_bglt BgL_new3959z00_3182;

						BgL_new3959z00_3182 = BgL_new3953z00_3176;
						{	/* Ast/node.scm 232 */
							obj_t BgL_loc3955z00_3187;

							BgL_typez00_bglt BgL_type3956z00_3188;

							BgL_nodez00_bglt BgL_exit3957z00_3189;

							BgL_nodez00_bglt BgL_value3958z00_3190;

							BgL_loc3955z00_3187 = BgL_loc3949z00_106;
							BgL_type3956z00_3188 = BgL_type3950z00_107;
							BgL_exit3957z00_3189 = BgL_exit3951z00_108;
							BgL_value3958z00_3190 = BgL_value3952z00_109;
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3182))->
									BgL_locz00) = ((obj_t) BgL_loc3955z00_3187), BUNSPEC);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3182))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3956z00_3188), BUNSPEC);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3182))->
									BgL_exitz00) =
								((BgL_nodez00_bglt) BgL_exit3957z00_3189), BUNSPEC);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3182))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value3958z00_3190), BUNSPEC);
							BgL_res5284z00_3191 = BgL_new3959z00_3182;
					}} BgL_res5284z00_3191;
				}
				return BgL_new3953z00_3176;
			}
		}
	}



/* _make-jump-ex-it */
	obj_t BGl__makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t BgL_envz00_6940,
		obj_t BgL_loc3949z00_6941, obj_t BgL_type3950z00_6942,
		obj_t BgL_exit3951z00_6943, obj_t BgL_value3952z00_6944)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			return
				(obj_t) (BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(BgL_loc3949z00_6941,
					(BgL_typez00_bglt) (BgL_type3950z00_6942),
					(BgL_nodez00_bglt) (BgL_exit3951z00_6943),
					(BgL_nodez00_bglt) (BgL_value3952z00_6944)));
		}
	}



/* fill-jump-ex-it! */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_fillzd2jumpzd2exzd2itz12zc0zzast_nodez00(BgL_jumpzd2exzd2itz00_bglt
		BgL_new3959z00_110, obj_t BgL_loc3955z00_111,
		BgL_typez00_bglt BgL_type3956z00_112, BgL_nodez00_bglt BgL_exit3957z00_113,
		BgL_nodez00_bglt BgL_value3958z00_114)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{	/* Ast/node.scm 232 */
				obj_t BgL_loc3955z00_7774;

				BgL_typez00_bglt BgL_type3956z00_7775;

				BgL_nodez00_bglt BgL_exit3957z00_7776;

				BgL_nodez00_bglt BgL_value3958z00_7777;

				BgL_loc3955z00_7774 = BgL_loc3955z00_111;
				BgL_type3956z00_7775 = BgL_type3956z00_112;
				BgL_exit3957z00_7776 = BgL_exit3957z00_113;
				BgL_value3958z00_7777 = BgL_value3958z00_114;
				((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_110))->BgL_locz00) =
					((obj_t) BgL_loc3955z00_7774), BUNSPEC);
				((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_110))->
						BgL_typez00) = ((BgL_typez00_bglt) BgL_type3956z00_7775), BUNSPEC);
				((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_110))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_exit3957z00_7776), BUNSPEC);
				((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_110))->
						BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_value3958z00_7777), BUNSPEC);
				return BgL_new3959z00_110;
			}
		}
	}



/* _fill-jump-ex-it! */
	obj_t BGl__fillzd2jumpzd2exzd2itz12zc0zzast_nodez00(obj_t BgL_envz00_6945,
		obj_t BgL_new3959z00_6946, obj_t BgL_loc3955z00_6947,
		obj_t BgL_type3956z00_6948, obj_t BgL_exit3957z00_6949,
		obj_t BgL_value3958z00_6950)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{	/* Ast/node.scm 232 */
				BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_8963;

				{	/* Ast/node.scm 232 */
					BgL_jumpzd2exzd2itz00_bglt BgL_res5559z00_7787;

					{	/* Ast/node.scm 232 */
						BgL_jumpzd2exzd2itz00_bglt BgL_new3959z00_7778;

						BgL_typez00_bglt BgL_type3956z00_7780;

						BgL_nodez00_bglt BgL_exit3957z00_7781;

						BgL_nodez00_bglt BgL_value3958z00_7782;

						BgL_new3959z00_7778 =
							(BgL_jumpzd2exzd2itz00_bglt) (BgL_new3959z00_6946);
						BgL_type3956z00_7780 = (BgL_typez00_bglt) (BgL_type3956z00_6948);
						BgL_exit3957z00_7781 = (BgL_nodez00_bglt) (BgL_exit3957z00_6949);
						BgL_value3958z00_7782 = (BgL_nodez00_bglt) (BgL_value3958z00_6950);
						{	/* Ast/node.scm 232 */
							obj_t BgL_loc3955z00_7783;

							BgL_typez00_bglt BgL_type3956z00_7784;

							BgL_nodez00_bglt BgL_exit3957z00_7785;

							BgL_nodez00_bglt BgL_value3958z00_7786;

							BgL_loc3955z00_7783 = BgL_loc3955z00_6947;
							BgL_type3956z00_7784 = BgL_type3956z00_7780;
							BgL_exit3957z00_7785 = BgL_exit3957z00_7781;
							BgL_value3958z00_7786 = BgL_value3958z00_7782;
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_7778))->
									BgL_locz00) = ((obj_t) BgL_loc3955z00_7783), BUNSPEC);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_7778))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3956z00_7784), BUNSPEC);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_7778))->
									BgL_exitz00) =
								((BgL_nodez00_bglt) BgL_exit3957z00_7785), BUNSPEC);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_7778))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value3958z00_7786), BUNSPEC);
							BgL_res5559z00_7787 = BgL_new3959z00_7778;
						}
					}
					BgL_auxz00_8963 = BgL_res5559z00_7787;
				}
				return (obj_t) (BgL_auxz00_8963);
			}
		}
	}



/* %allocate-jump-ex-it */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_z52allocatezd2jumpzd2exzd2itz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{	/* Ast/node.scm 232 */
				BgL_jumpzd2exzd2itz00_bglt BgL_new3965z00_7788;

				BgL_new3965z00_7788 =
					((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_jumpzd2exzd2itz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3965z00_7788),
					BGl_classzd2numzd2zz__objectz00(BGl_jumpzd2exzd2itz00zzast_nodez00));
				{	/* Ast/node.scm 232 */
					BgL_objectz00_bglt BgL_auxz00_8977;

					BgL_auxz00_8977 = (BgL_objectz00_bglt) (BgL_new3965z00_7788);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8977, BFALSE);
				}
				return BgL_new3965z00_7788;
			}
		}
	}



/* _%allocate-jump-ex-it */
	obj_t BGl__z52allocatezd2jumpzd2exzd2itz80zzast_nodez00(obj_t BgL_envz00_6887)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{	/* Ast/node.scm 232 */
				BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_8980;

				{	/* Ast/node.scm 232 */
					BgL_jumpzd2exzd2itz00_bglt BgL_res5560z00_7792;

					{	/* Ast/node.scm 232 */
						BgL_jumpzd2exzd2itz00_bglt BgL_new3965z00_7790;

						BgL_new3965z00_7790 =
							((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jumpzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3965z00_7790),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jumpzd2exzd2itz00zzast_nodez00));
						{	/* Ast/node.scm 232 */
							BgL_objectz00_bglt BgL_auxz00_8985;

							BgL_auxz00_8985 = (BgL_objectz00_bglt) (BgL_new3965z00_7790);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8985, BFALSE);
						}
						BgL_res5560z00_7792 = BgL_new3965z00_7790;
					}
					BgL_auxz00_8980 = BgL_res5560z00_7792;
				}
				return (obj_t) (BgL_auxz00_8980);
			}
		}
	}



/* jump-ex-it-nil */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exzd2itzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			if ((BGl_z52thezd2jumpzd2exzd2itzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 232 */
					{	/* Ast/node.scm 232 */
						BgL_jumpzd2exzd2itz00_bglt BgL_res5285z00_3204;

						{	/* Ast/node.scm 232 */
							BgL_jumpzd2exzd2itz00_bglt BgL_new3965z00_3200;

							BgL_new3965z00_3200 =
								((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jumpzd2exzd2itz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3965z00_3200),
								BGl_classzd2numzd2zz__objectz00
								(BGl_jumpzd2exzd2itz00zzast_nodez00));
							{	/* Ast/node.scm 232 */
								BgL_objectz00_bglt BgL_auxz00_8995;

								BgL_auxz00_8995 = (BgL_objectz00_bglt) (BgL_new3965z00_3200);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8995, BFALSE);
							}
							BgL_res5285z00_3204 = BgL_new3965z00_3200;
						}
						BGl_z52thezd2jumpzd2exzd2itzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5285z00_3204);
					}
					{	/* Ast/node.scm 232 */
						BgL_typez00_bglt BgL_arg4558z00_1353;

						BgL_nodez00_bglt BgL_arg4559z00_1354;

						BgL_nodez00_bglt BgL_arg4560z00_1355;

						BgL_arg4558z00_1353 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4559z00_1354 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4560z00_1355 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 232 */
							BgL_jumpzd2exzd2itz00_bglt BgL_res5286z00_3214;

							{	/* Ast/node.scm 232 */
								BgL_jumpzd2exzd2itz00_bglt BgL_new3959z00_3205;

								BgL_new3959z00_3205 =
									(BgL_jumpzd2exzd2itz00_bglt)
									(BGl_z52thezd2jumpzd2exzd2itzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 232 */
									obj_t BgL_loc3955z00_3210;

									BgL_typez00_bglt BgL_type3956z00_3211;

									BgL_nodez00_bglt BgL_exit3957z00_3212;

									BgL_nodez00_bglt BgL_value3958z00_3213;

									BgL_loc3955z00_3210 = BUNSPEC;
									BgL_type3956z00_3211 = BgL_arg4558z00_1353;
									BgL_exit3957z00_3212 = BgL_arg4559z00_1354;
									BgL_value3958z00_3213 = BgL_arg4560z00_1355;
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3205))->
											BgL_locz00) = ((obj_t) BgL_loc3955z00_3210), BUNSPEC);
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3205))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3956z00_3211), BUNSPEC);
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3205))->
											BgL_exitz00) =
										((BgL_nodez00_bglt) BgL_exit3957z00_3212), BUNSPEC);
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3959z00_3205))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3958z00_3213), BUNSPEC);
									BgL_res5286z00_3214 = BgL_new3959z00_3205;
							}}
							(obj_t) (BgL_res5286z00_3214);
				}}}
			else
				{	/* Ast/node.scm 232 */
					BFALSE;
				}
			return
				(BgL_jumpzd2exzd2itz00_bglt)
				(BGl_z52thezd2jumpzd2exzd2itzd2nilz52zzast_nodez00);
		}
	}



/* _jump-ex-it-nil */
	obj_t BGl__jumpzd2exzd2itzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6888)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			return (obj_t) (BGl_jumpzd2exzd2itzd2nilzd2zzast_nodez00());
		}
	}



/* set-ex-it? */
	BGL_EXPORTED_DEF bool_t BGl_setzd2exzd2itzf3zf3zzast_nodez00(obj_t
		BgL_obj3938z00_121)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3938z00_121,
				BGl_setzd2exzd2itz00zzast_nodez00);
		}
	}



/* _set-ex-it? */
	obj_t BGl__setzd2exzd2itzf3zf3zzast_nodez00(obj_t BgL_envz00_6885,
		obj_t BgL_obj3938z00_6886)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3938z00_6886,
					BGl_setzd2exzd2itz00zzast_nodez00));
		}
	}



/* make-set-ex-it */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itz00_bglt
		BGl_makezd2setzd2exzd2itzd2zzast_nodez00(obj_t BgL_loc3903z00_125,
		BgL_typez00_bglt BgL_type3904z00_126, BgL_varz00_bglt BgL_var3905z00_127,
		BgL_nodez00_bglt BgL_body3906z00_128)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{	/* Ast/node.scm 225 */
				BgL_setzd2exzd2itz00_bglt BgL_new3907z00_3215;

				{	/* Ast/node.scm 225 */
					BgL_setzd2exzd2itz00_bglt BgL_res5287z00_3220;

					{	/* Ast/node.scm 225 */
						BgL_setzd2exzd2itz00_bglt BgL_new3919z00_3216;

						BgL_new3919z00_3216 =
							((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3919z00_3216),
							BGl_classzd2numzd2zz__objectz00
							(BGl_setzd2exzd2itz00zzast_nodez00));
						{	/* Ast/node.scm 225 */
							BgL_objectz00_bglt BgL_auxz00_9018;

							BgL_auxz00_9018 = (BgL_objectz00_bglt) (BgL_new3919z00_3216);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9018, BFALSE);
						}
						BgL_res5287z00_3220 = BgL_new3919z00_3216;
					}
					BgL_new3907z00_3215 = BgL_res5287z00_3220;
				}
				{	/* Ast/node.scm 225 */
					BgL_setzd2exzd2itz00_bglt BgL_res5288z00_3230;

					{	/* Ast/node.scm 225 */
						BgL_setzd2exzd2itz00_bglt BgL_new3913z00_3221;

						BgL_new3913z00_3221 = BgL_new3907z00_3215;
						{	/* Ast/node.scm 225 */
							obj_t BgL_loc3909z00_3226;

							BgL_typez00_bglt BgL_type3910z00_3227;

							BgL_varz00_bglt BgL_var3911z00_3228;

							BgL_nodez00_bglt BgL_body3912z00_3229;

							BgL_loc3909z00_3226 = BgL_loc3903z00_125;
							BgL_type3910z00_3227 = BgL_type3904z00_126;
							BgL_var3911z00_3228 = BgL_var3905z00_127;
							BgL_body3912z00_3229 = BgL_body3906z00_128;
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3221))->
									BgL_locz00) = ((obj_t) BgL_loc3909z00_3226), BUNSPEC);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3221))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3910z00_3227), BUNSPEC);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3221))->
									BgL_varz00) =
								((BgL_varz00_bglt) BgL_var3911z00_3228), BUNSPEC);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3221))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_body3912z00_3229), BUNSPEC);
							BgL_res5288z00_3230 = BgL_new3913z00_3221;
					}} BgL_res5288z00_3230;
				}
				return BgL_new3907z00_3215;
			}
		}
	}



/* _make-set-ex-it */
	obj_t BGl__makezd2setzd2exzd2itzd2zzast_nodez00(obj_t BgL_envz00_6951,
		obj_t BgL_loc3903z00_6952, obj_t BgL_type3904z00_6953,
		obj_t BgL_var3905z00_6954, obj_t BgL_body3906z00_6955)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			return
				(obj_t) (BGl_makezd2setzd2exzd2itzd2zzast_nodez00(BgL_loc3903z00_6952,
					(BgL_typez00_bglt) (BgL_type3904z00_6953),
					(BgL_varz00_bglt) (BgL_var3905z00_6954),
					(BgL_nodez00_bglt) (BgL_body3906z00_6955)));
		}
	}



/* fill-set-ex-it! */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itz00_bglt
		BGl_fillzd2setzd2exzd2itz12zc0zzast_nodez00(BgL_setzd2exzd2itz00_bglt
		BgL_new3913z00_129, obj_t BgL_loc3909z00_130,
		BgL_typez00_bglt BgL_type3910z00_131, BgL_varz00_bglt BgL_var3911z00_132,
		BgL_nodez00_bglt BgL_body3912z00_133)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{	/* Ast/node.scm 225 */
				obj_t BgL_loc3909z00_7794;

				BgL_typez00_bglt BgL_type3910z00_7795;

				BgL_varz00_bglt BgL_var3911z00_7796;

				BgL_nodez00_bglt BgL_body3912z00_7797;

				BgL_loc3909z00_7794 = BgL_loc3909z00_130;
				BgL_type3910z00_7795 = BgL_type3910z00_131;
				BgL_var3911z00_7796 = BgL_var3911z00_132;
				BgL_body3912z00_7797 = BgL_body3912z00_133;
				((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_129))->BgL_locz00) =
					((obj_t) BgL_loc3909z00_7794), BUNSPEC);
				((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_129))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3910z00_7795), BUNSPEC);
				((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_129))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_var3911z00_7796), BUNSPEC);
				((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_129))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_body3912z00_7797), BUNSPEC);
				return BgL_new3913z00_129;
			}
		}
	}



/* _fill-set-ex-it! */
	obj_t BGl__fillzd2setzd2exzd2itz12zc0zzast_nodez00(obj_t BgL_envz00_6956,
		obj_t BgL_new3913z00_6957, obj_t BgL_loc3909z00_6958,
		obj_t BgL_type3910z00_6959, obj_t BgL_var3911z00_6960,
		obj_t BgL_body3912z00_6961)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{	/* Ast/node.scm 225 */
				BgL_setzd2exzd2itz00_bglt BgL_auxz00_9034;

				{	/* Ast/node.scm 225 */
					BgL_setzd2exzd2itz00_bglt BgL_res5561z00_7807;

					{	/* Ast/node.scm 225 */
						BgL_setzd2exzd2itz00_bglt BgL_new3913z00_7798;

						BgL_typez00_bglt BgL_type3910z00_7800;

						BgL_varz00_bglt BgL_var3911z00_7801;

						BgL_nodez00_bglt BgL_body3912z00_7802;

						BgL_new3913z00_7798 =
							(BgL_setzd2exzd2itz00_bglt) (BgL_new3913z00_6957);
						BgL_type3910z00_7800 = (BgL_typez00_bglt) (BgL_type3910z00_6959);
						BgL_var3911z00_7801 = (BgL_varz00_bglt) (BgL_var3911z00_6960);
						BgL_body3912z00_7802 = (BgL_nodez00_bglt) (BgL_body3912z00_6961);
						{	/* Ast/node.scm 225 */
							obj_t BgL_loc3909z00_7803;

							BgL_typez00_bglt BgL_type3910z00_7804;

							BgL_varz00_bglt BgL_var3911z00_7805;

							BgL_nodez00_bglt BgL_body3912z00_7806;

							BgL_loc3909z00_7803 = BgL_loc3909z00_6958;
							BgL_type3910z00_7804 = BgL_type3910z00_7800;
							BgL_var3911z00_7805 = BgL_var3911z00_7801;
							BgL_body3912z00_7806 = BgL_body3912z00_7802;
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_7798))->
									BgL_locz00) = ((obj_t) BgL_loc3909z00_7803), BUNSPEC);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_7798))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3910z00_7804), BUNSPEC);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_7798))->
									BgL_varz00) =
								((BgL_varz00_bglt) BgL_var3911z00_7805), BUNSPEC);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_7798))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_body3912z00_7806), BUNSPEC);
							BgL_res5561z00_7807 = BgL_new3913z00_7798;
						}
					}
					BgL_auxz00_9034 = BgL_res5561z00_7807;
				}
				return (obj_t) (BgL_auxz00_9034);
			}
		}
	}



/* %allocate-set-ex-it */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itz00_bglt
		BGl_z52allocatezd2setzd2exzd2itz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{	/* Ast/node.scm 225 */
				BgL_setzd2exzd2itz00_bglt BgL_new3919z00_7808;

				BgL_new3919z00_7808 =
					((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setzd2exzd2itz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3919z00_7808),
					BGl_classzd2numzd2zz__objectz00(BGl_setzd2exzd2itz00zzast_nodez00));
				{	/* Ast/node.scm 225 */
					BgL_objectz00_bglt BgL_auxz00_9048;

					BgL_auxz00_9048 = (BgL_objectz00_bglt) (BgL_new3919z00_7808);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9048, BFALSE);
				}
				return BgL_new3919z00_7808;
			}
		}
	}



/* _%allocate-set-ex-it */
	obj_t BGl__z52allocatezd2setzd2exzd2itz80zzast_nodez00(obj_t BgL_envz00_6883)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{	/* Ast/node.scm 225 */
				BgL_setzd2exzd2itz00_bglt BgL_auxz00_9051;

				{	/* Ast/node.scm 225 */
					BgL_setzd2exzd2itz00_bglt BgL_res5562z00_7812;

					{	/* Ast/node.scm 225 */
						BgL_setzd2exzd2itz00_bglt BgL_new3919z00_7810;

						BgL_new3919z00_7810 =
							((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3919z00_7810),
							BGl_classzd2numzd2zz__objectz00
							(BGl_setzd2exzd2itz00zzast_nodez00));
						{	/* Ast/node.scm 225 */
							BgL_objectz00_bglt BgL_auxz00_9056;

							BgL_auxz00_9056 = (BgL_objectz00_bglt) (BgL_new3919z00_7810);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9056, BFALSE);
						}
						BgL_res5562z00_7812 = BgL_new3919z00_7810;
					}
					BgL_auxz00_9051 = BgL_res5562z00_7812;
				}
				return (obj_t) (BgL_auxz00_9051);
			}
		}
	}



/* set-ex-it-nil */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itz00_bglt
		BGl_setzd2exzd2itzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			if ((BGl_z52thezd2setzd2exzd2itzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 225 */
					{	/* Ast/node.scm 225 */
						BgL_setzd2exzd2itz00_bglt BgL_res5289z00_3243;

						{	/* Ast/node.scm 225 */
							BgL_setzd2exzd2itz00_bglt BgL_new3919z00_3239;

							BgL_new3919z00_3239 =
								((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setzd2exzd2itz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3919z00_3239),
								BGl_classzd2numzd2zz__objectz00
								(BGl_setzd2exzd2itz00zzast_nodez00));
							{	/* Ast/node.scm 225 */
								BgL_objectz00_bglt BgL_auxz00_9066;

								BgL_auxz00_9066 = (BgL_objectz00_bglt) (BgL_new3919z00_3239);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9066, BFALSE);
							}
							BgL_res5289z00_3243 = BgL_new3919z00_3239;
						}
						BGl_z52thezd2setzd2exzd2itzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5289z00_3243);
					}
					{	/* Ast/node.scm 225 */
						BgL_typez00_bglt BgL_arg4563z00_1364;

						BgL_varz00_bglt BgL_arg4564z00_1365;

						BgL_nodez00_bglt BgL_arg4565z00_1366;

						BgL_arg4563z00_1364 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4564z00_1365 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4565z00_1366 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 225 */
							BgL_setzd2exzd2itz00_bglt BgL_res5290z00_3253;

							{	/* Ast/node.scm 225 */
								BgL_setzd2exzd2itz00_bglt BgL_new3913z00_3244;

								BgL_new3913z00_3244 =
									(BgL_setzd2exzd2itz00_bglt)
									(BGl_z52thezd2setzd2exzd2itzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 225 */
									obj_t BgL_loc3909z00_3249;

									BgL_typez00_bglt BgL_type3910z00_3250;

									BgL_varz00_bglt BgL_var3911z00_3251;

									BgL_nodez00_bglt BgL_body3912z00_3252;

									BgL_loc3909z00_3249 = BUNSPEC;
									BgL_type3910z00_3250 = BgL_arg4563z00_1364;
									BgL_var3911z00_3251 = BgL_arg4564z00_1365;
									BgL_body3912z00_3252 = BgL_arg4565z00_1366;
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3244))->
											BgL_locz00) = ((obj_t) BgL_loc3909z00_3249), BUNSPEC);
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3244))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3910z00_3250), BUNSPEC);
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3244))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3911z00_3251), BUNSPEC);
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3913z00_3244))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_body3912z00_3252), BUNSPEC);
									BgL_res5290z00_3253 = BgL_new3913z00_3244;
							}}
							(obj_t) (BgL_res5290z00_3253);
				}}}
			else
				{	/* Ast/node.scm 225 */
					BFALSE;
				}
			return
				(BgL_setzd2exzd2itz00_bglt)
				(BGl_z52thezd2setzd2exzd2itzd2nilz52zzast_nodez00);
		}
	}



/* _set-ex-it-nil */
	obj_t BGl__setzd2exzd2itzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6884)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			return (obj_t) (BGl_setzd2exzd2itzd2nilzd2zzast_nodez00());
		}
	}



/* let-var? */
	BGL_EXPORTED_DEF bool_t BGl_letzd2varzf3z21zzast_nodez00(obj_t
		BgL_obj3892z00_140)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3892z00_140,
				BGl_letzd2varzd2zzast_nodez00);
		}
	}



/* _let-var? */
	obj_t BGl__letzd2varzf3z21zzast_nodez00(obj_t BgL_envz00_6881,
		obj_t BgL_obj3892z00_6882)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3892z00_6882,
					BGl_letzd2varzd2zzast_nodez00));
		}
	}



/* make-let-var */
	BGL_EXPORTED_DEF BgL_letzd2varzd2_bglt
		BGl_makezd2letzd2varz00zzast_nodez00(obj_t BgL_loc3836z00_144,
		BgL_typez00_bglt BgL_type3837z00_145, obj_t BgL_sidezd2effectzf33838z21_146,
		obj_t BgL_key3839z00_147, obj_t BgL_bindings3840z00_148,
		BgL_nodez00_bglt BgL_body3841z00_149, bool_t BgL_removablezf33842zf3_150)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{	/* Ast/node.scm 216 */
				BgL_letzd2varzd2_bglt BgL_new3843z00_3254;

				{	/* Ast/node.scm 216 */
					BgL_letzd2varzd2_bglt BgL_res5291z00_3259;

					{	/* Ast/node.scm 216 */
						BgL_letzd2varzd2_bglt BgL_new3861z00_3255;

						BgL_new3861z00_3255 =
							((BgL_letzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3861z00_3255),
							BGl_classzd2numzd2zz__objectz00(BGl_letzd2varzd2zzast_nodez00));
						{	/* Ast/node.scm 216 */
							BgL_objectz00_bglt BgL_auxz00_9089;

							BgL_auxz00_9089 = (BgL_objectz00_bglt) (BgL_new3861z00_3255);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9089, BFALSE);
						}
						BgL_res5291z00_3259 = BgL_new3861z00_3255;
					}
					BgL_new3843z00_3254 = BgL_res5291z00_3259;
				}
				{	/* Ast/node.scm 216 */
					BgL_letzd2varzd2_bglt BgL_res5292z00_3275;

					{	/* Ast/node.scm 216 */
						BgL_letzd2varzd2_bglt BgL_new3852z00_3260;

						BgL_new3852z00_3260 = BgL_new3843z00_3254;
						{	/* Ast/node.scm 216 */
							obj_t BgL_loc3845z00_3268;

							BgL_typez00_bglt BgL_type3846z00_3269;

							obj_t BgL_sidezd2effectzf33847z21_3270;

							obj_t BgL_key3848z00_3271;

							obj_t BgL_bindings3849z00_3272;

							BgL_nodez00_bglt BgL_body3850z00_3273;

							bool_t BgL_removablezf33851zf3_3274;

							BgL_loc3845z00_3268 = BgL_loc3836z00_144;
							BgL_type3846z00_3269 = BgL_type3837z00_145;
							BgL_sidezd2effectzf33847z21_3270 =
								BgL_sidezd2effectzf33838z21_146;
							BgL_key3848z00_3271 = BgL_key3839z00_147;
							BgL_bindings3849z00_3272 = BgL_bindings3840z00_148;
							BgL_body3850z00_3273 = BgL_body3841z00_149;
							BgL_removablezf33851zf3_3274 = BgL_removablezf33842zf3_150;
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_locz00) = ((obj_t) BgL_loc3845z00_3268), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3846z00_3269), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33847z21_3270), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_keyz00) = ((obj_t) BgL_key3848z00_3271), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_bindingsz00) =
								((obj_t) BgL_bindings3849z00_3272), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_body3850z00_3273), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3260))->
									BgL_removablezf3zf3) =
								((bool_t) BgL_removablezf33851zf3_3274), BUNSPEC);
							BgL_res5292z00_3275 = BgL_new3852z00_3260;
					}} BgL_res5292z00_3275;
				}
				return BgL_new3843z00_3254;
			}
		}
	}



/* _make-let-var */
	obj_t BGl__makezd2letzd2varz00zzast_nodez00(obj_t BgL_envz00_6962,
		obj_t BgL_loc3836z00_6963, obj_t BgL_type3837z00_6964,
		obj_t BgL_sidezd2effectzf33838z21_6965, obj_t BgL_key3839z00_6966,
		obj_t BgL_bindings3840z00_6967, obj_t BgL_body3841z00_6968,
		obj_t BgL_removablezf33842zf3_6969)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			return
				(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00(BgL_loc3836z00_6963,
					(BgL_typez00_bglt) (BgL_type3837z00_6964),
					BgL_sidezd2effectzf33838z21_6965, BgL_key3839z00_6966,
					BgL_bindings3840z00_6967, (BgL_nodez00_bglt) (BgL_body3841z00_6968),
					CBOOL(BgL_removablezf33842zf3_6969)));
		}
	}



/* fill-let-var! */
	BGL_EXPORTED_DEF BgL_letzd2varzd2_bglt
		BGl_fillzd2letzd2varz12z12zzast_nodez00(BgL_letzd2varzd2_bglt
		BgL_new3852z00_151, obj_t BgL_loc3845z00_152,
		BgL_typez00_bglt BgL_type3846z00_153, obj_t BgL_sidezd2effectzf33847z21_154,
		obj_t BgL_key3848z00_155, obj_t BgL_bindings3849z00_156,
		BgL_nodez00_bglt BgL_body3850z00_157, bool_t BgL_removablezf33851zf3_158)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{	/* Ast/node.scm 216 */
				obj_t BgL_loc3845z00_7814;

				BgL_typez00_bglt BgL_type3846z00_7815;

				obj_t BgL_sidezd2effectzf33847z21_7816;

				obj_t BgL_key3848z00_7817;

				obj_t BgL_bindings3849z00_7818;

				BgL_nodez00_bglt BgL_body3850z00_7819;

				bool_t BgL_removablezf33851zf3_7820;

				BgL_loc3845z00_7814 = BgL_loc3845z00_152;
				BgL_type3846z00_7815 = BgL_type3846z00_153;
				BgL_sidezd2effectzf33847z21_7816 = BgL_sidezd2effectzf33847z21_154;
				BgL_key3848z00_7817 = BgL_key3848z00_155;
				BgL_bindings3849z00_7818 = BgL_bindings3849z00_156;
				BgL_body3850z00_7819 = BgL_body3850z00_157;
				BgL_removablezf33851zf3_7820 = BgL_removablezf33851zf3_158;
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->BgL_locz00) =
					((obj_t) BgL_loc3845z00_7814), BUNSPEC);
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3846z00_7815), BUNSPEC);
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33847z21_7816), BUNSPEC);
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->BgL_keyz00) =
					((obj_t) BgL_key3848z00_7817), BUNSPEC);
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->BgL_bindingsz00) =
					((obj_t) BgL_bindings3849z00_7818), BUNSPEC);
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_body3850z00_7819), BUNSPEC);
				((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_151))->
						BgL_removablezf3zf3) =
					((bool_t) BgL_removablezf33851zf3_7820), BUNSPEC);
				return BgL_new3852z00_151;
			}
		}
	}



/* _fill-let-var! */
	obj_t BGl__fillzd2letzd2varz12z12zzast_nodez00(obj_t BgL_envz00_6970,
		obj_t BgL_new3852z00_6971, obj_t BgL_loc3845z00_6972,
		obj_t BgL_type3846z00_6973, obj_t BgL_sidezd2effectzf33847z21_6974,
		obj_t BgL_key3848z00_6975, obj_t BgL_bindings3849z00_6976,
		obj_t BgL_body3850z00_6977, obj_t BgL_removablezf33851zf3_6978)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{	/* Ast/node.scm 216 */
				BgL_letzd2varzd2_bglt BgL_auxz00_9111;

				{	/* Ast/node.scm 216 */
					BgL_letzd2varzd2_bglt BgL_res5563z00_7836;

					{	/* Ast/node.scm 216 */
						BgL_letzd2varzd2_bglt BgL_new3852z00_7821;

						BgL_typez00_bglt BgL_type3846z00_7823;

						BgL_nodez00_bglt BgL_body3850z00_7827;

						bool_t BgL_removablezf33851zf3_7828;

						BgL_new3852z00_7821 = (BgL_letzd2varzd2_bglt) (BgL_new3852z00_6971);
						BgL_type3846z00_7823 = (BgL_typez00_bglt) (BgL_type3846z00_6973);
						BgL_body3850z00_7827 = (BgL_nodez00_bglt) (BgL_body3850z00_6977);
						BgL_removablezf33851zf3_7828 = CBOOL(BgL_removablezf33851zf3_6978);
						{	/* Ast/node.scm 216 */
							obj_t BgL_loc3845z00_7829;

							BgL_typez00_bglt BgL_type3846z00_7830;

							obj_t BgL_sidezd2effectzf33847z21_7831;

							obj_t BgL_key3848z00_7832;

							obj_t BgL_bindings3849z00_7833;

							BgL_nodez00_bglt BgL_body3850z00_7834;

							bool_t BgL_removablezf33851zf3_7835;

							BgL_loc3845z00_7829 = BgL_loc3845z00_6972;
							BgL_type3846z00_7830 = BgL_type3846z00_7823;
							BgL_sidezd2effectzf33847z21_7831 =
								BgL_sidezd2effectzf33847z21_6974;
							BgL_key3848z00_7832 = BgL_key3848z00_6975;
							BgL_bindings3849z00_7833 = BgL_bindings3849z00_6976;
							BgL_body3850z00_7834 = BgL_body3850z00_7827;
							BgL_removablezf33851zf3_7835 = BgL_removablezf33851zf3_7828;
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_locz00) = ((obj_t) BgL_loc3845z00_7829), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3846z00_7830), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33847z21_7831), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_keyz00) = ((obj_t) BgL_key3848z00_7832), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_bindingsz00) =
								((obj_t) BgL_bindings3849z00_7833), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_body3850z00_7834), BUNSPEC);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_7821))->
									BgL_removablezf3zf3) =
								((bool_t) BgL_removablezf33851zf3_7835), BUNSPEC);
							BgL_res5563z00_7836 = BgL_new3852z00_7821;
						}
					}
					BgL_auxz00_9111 = BgL_res5563z00_7836;
				}
				return (obj_t) (BgL_auxz00_9111);
			}
		}
	}



/* %allocate-let-var */
	BGL_EXPORTED_DEF BgL_letzd2varzd2_bglt
		BGl_z52allocatezd2letzd2varz52zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{	/* Ast/node.scm 216 */
				BgL_letzd2varzd2_bglt BgL_new3861z00_7837;

				BgL_new3861z00_7837 =
					((BgL_letzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_letzd2varzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3861z00_7837),
					BGl_classzd2numzd2zz__objectz00(BGl_letzd2varzd2zzast_nodez00));
				{	/* Ast/node.scm 216 */
					BgL_objectz00_bglt BgL_auxz00_9128;

					BgL_auxz00_9128 = (BgL_objectz00_bglt) (BgL_new3861z00_7837);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9128, BFALSE);
				}
				return BgL_new3861z00_7837;
			}
		}
	}



/* _%allocate-let-var */
	obj_t BGl__z52allocatezd2letzd2varz52zzast_nodez00(obj_t BgL_envz00_6879)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{	/* Ast/node.scm 216 */
				BgL_letzd2varzd2_bglt BgL_auxz00_9131;

				{	/* Ast/node.scm 216 */
					BgL_letzd2varzd2_bglt BgL_res5564z00_7841;

					{	/* Ast/node.scm 216 */
						BgL_letzd2varzd2_bglt BgL_new3861z00_7839;

						BgL_new3861z00_7839 =
							((BgL_letzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3861z00_7839),
							BGl_classzd2numzd2zz__objectz00(BGl_letzd2varzd2zzast_nodez00));
						{	/* Ast/node.scm 216 */
							BgL_objectz00_bglt BgL_auxz00_9136;

							BgL_auxz00_9136 = (BgL_objectz00_bglt) (BgL_new3861z00_7839);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9136, BFALSE);
						}
						BgL_res5564z00_7841 = BgL_new3861z00_7839;
					}
					BgL_auxz00_9131 = BgL_res5564z00_7841;
				}
				return (obj_t) (BgL_auxz00_9131);
			}
		}
	}



/* let-var-nil */
	BGL_EXPORTED_DEF BgL_letzd2varzd2_bglt BGl_letzd2varzd2nilz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			if ((BGl_z52thezd2letzd2varzd2nilz80zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 216 */
					{	/* Ast/node.scm 216 */
						BgL_letzd2varzd2_bglt BgL_res5293z00_3291;

						{	/* Ast/node.scm 216 */
							BgL_letzd2varzd2_bglt BgL_new3861z00_3287;

							BgL_new3861z00_3287 =
								((BgL_letzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3861z00_3287),
								BGl_classzd2numzd2zz__objectz00(BGl_letzd2varzd2zzast_nodez00));
							{	/* Ast/node.scm 216 */
								BgL_objectz00_bglt BgL_auxz00_9146;

								BgL_auxz00_9146 = (BgL_objectz00_bglt) (BgL_new3861z00_3287);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9146, BFALSE);
							}
							BgL_res5293z00_3291 = BgL_new3861z00_3287;
						}
						BGl_z52thezd2letzd2varzd2nilz80zzast_nodez00 =
							(obj_t) (BgL_res5293z00_3291);
					}
					{	/* Ast/node.scm 216 */
						BgL_typez00_bglt BgL_arg4568z00_1378;

						BgL_nodez00_bglt BgL_arg4569z00_1379;

						BgL_arg4568z00_1378 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4569z00_1379 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 216 */
							BgL_letzd2varzd2_bglt BgL_res5294z00_3307;

							{	/* Ast/node.scm 216 */
								BgL_letzd2varzd2_bglt BgL_new3852z00_3292;

								BgL_new3852z00_3292 =
									(BgL_letzd2varzd2_bglt)
									(BGl_z52thezd2letzd2varzd2nilz80zzast_nodez00);
								{	/* Ast/node.scm 216 */
									obj_t BgL_loc3845z00_3300;

									BgL_typez00_bglt BgL_type3846z00_3301;

									obj_t BgL_sidezd2effectzf33847z21_3302;

									obj_t BgL_key3848z00_3303;

									obj_t BgL_bindings3849z00_3304;

									BgL_nodez00_bglt BgL_body3850z00_3305;

									bool_t BgL_removablezf33851zf3_3306;

									BgL_loc3845z00_3300 = BUNSPEC;
									BgL_type3846z00_3301 = BgL_arg4568z00_1378;
									BgL_sidezd2effectzf33847z21_3302 = BUNSPEC;
									BgL_key3848z00_3303 = BUNSPEC;
									BgL_bindings3849z00_3304 = BUNSPEC;
									BgL_body3850z00_3305 = BgL_arg4569z00_1379;
									BgL_removablezf33851zf3_3306 = ((bool_t) 0);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_locz00) = ((obj_t) BgL_loc3845z00_3300), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3846z00_3301), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33847z21_3302), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_keyz00) = ((obj_t) BgL_key3848z00_3303), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_bindingsz00) =
										((obj_t) BgL_bindings3849z00_3304), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_body3850z00_3305), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3852z00_3292))->
											BgL_removablezf3zf3) =
										((bool_t) BgL_removablezf33851zf3_3306), BUNSPEC);
									BgL_res5294z00_3307 = BgL_new3852z00_3292;
							}}
							(obj_t) (BgL_res5294z00_3307);
				}}}
			else
				{	/* Ast/node.scm 216 */
					BFALSE;
				}
			return
				(BgL_letzd2varzd2_bglt) (BGl_z52thezd2letzd2varzd2nilz80zzast_nodez00);
		}
	}



/* _let-var-nil */
	obj_t BGl__letzd2varzd2nilz00zzast_nodez00(obj_t BgL_envz00_6880)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			return (obj_t) (BGl_letzd2varzd2nilz00zzast_nodez00());
		}
	}



/* let-fun? */
	BGL_EXPORTED_DEF bool_t BGl_letzd2funzf3z21zzast_nodez00(obj_t
		BgL_obj3816z00_168)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3816z00_168,
				BGl_letzd2funzd2zzast_nodez00);
		}
	}



/* _let-fun? */
	obj_t BGl__letzd2funzf3z21zzast_nodez00(obj_t BgL_envz00_6877,
		obj_t BgL_obj3816z00_6878)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3816z00_6878,
					BGl_letzd2funzd2zzast_nodez00));
		}
	}



/* make-let-fun */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_makezd2letzd2funz00zzast_nodez00(obj_t BgL_loc3767z00_172,
		BgL_typez00_bglt BgL_type3768z00_173, obj_t BgL_sidezd2effectzf33769z21_174,
		obj_t BgL_key3770z00_175, obj_t BgL_locals3771z00_176,
		BgL_nodez00_bglt BgL_body3772z00_177)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{	/* Ast/node.scm 209 */
				BgL_letzd2funzd2_bglt BgL_new3773z00_3308;

				{	/* Ast/node.scm 209 */
					BgL_letzd2funzd2_bglt BgL_res5295z00_3313;

					{	/* Ast/node.scm 209 */
						BgL_letzd2funzd2_bglt BgL_new3789z00_3309;

						BgL_new3789z00_3309 =
							((BgL_letzd2funzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_letzd2funzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3789z00_3309),
							BGl_classzd2numzd2zz__objectz00(BGl_letzd2funzd2zzast_nodez00));
						{	/* Ast/node.scm 209 */
							BgL_objectz00_bglt BgL_auxz00_9171;

							BgL_auxz00_9171 = (BgL_objectz00_bglt) (BgL_new3789z00_3309);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9171, BFALSE);
						}
						BgL_res5295z00_3313 = BgL_new3789z00_3309;
					}
					BgL_new3773z00_3308 = BgL_res5295z00_3313;
				}
				{	/* Ast/node.scm 209 */
					BgL_letzd2funzd2_bglt BgL_res5296z00_3327;

					{	/* Ast/node.scm 209 */
						BgL_letzd2funzd2_bglt BgL_new3781z00_3314;

						BgL_new3781z00_3314 = BgL_new3773z00_3308;
						{	/* Ast/node.scm 209 */
							obj_t BgL_loc3775z00_3321;

							BgL_typez00_bglt BgL_type3776z00_3322;

							obj_t BgL_sidezd2effectzf33777z21_3323;

							obj_t BgL_key3778z00_3324;

							obj_t BgL_locals3779z00_3325;

							BgL_nodez00_bglt BgL_body3780z00_3326;

							BgL_loc3775z00_3321 = BgL_loc3767z00_172;
							BgL_type3776z00_3322 = BgL_type3768z00_173;
							BgL_sidezd2effectzf33777z21_3323 =
								BgL_sidezd2effectzf33769z21_174;
							BgL_key3778z00_3324 = BgL_key3770z00_175;
							BgL_locals3779z00_3325 = BgL_locals3771z00_176;
							BgL_body3780z00_3326 = BgL_body3772z00_177;
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3314))->
									BgL_locz00) = ((obj_t) BgL_loc3775z00_3321), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3314))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3776z00_3322), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3314))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33777z21_3323), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3314))->
									BgL_keyz00) = ((obj_t) BgL_key3778z00_3324), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3314))->
									BgL_localsz00) = ((obj_t) BgL_locals3779z00_3325), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3314))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_body3780z00_3326), BUNSPEC);
							BgL_res5296z00_3327 = BgL_new3781z00_3314;
					}} BgL_res5296z00_3327;
				}
				return BgL_new3773z00_3308;
			}
		}
	}



/* _make-let-fun */
	obj_t BGl__makezd2letzd2funz00zzast_nodez00(obj_t BgL_envz00_6979,
		obj_t BgL_loc3767z00_6980, obj_t BgL_type3768z00_6981,
		obj_t BgL_sidezd2effectzf33769z21_6982, obj_t BgL_key3770z00_6983,
		obj_t BgL_locals3771z00_6984, obj_t BgL_body3772z00_6985)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			return
				(obj_t) (BGl_makezd2letzd2funz00zzast_nodez00(BgL_loc3767z00_6980,
					(BgL_typez00_bglt) (BgL_type3768z00_6981),
					BgL_sidezd2effectzf33769z21_6982, BgL_key3770z00_6983,
					BgL_locals3771z00_6984, (BgL_nodez00_bglt) (BgL_body3772z00_6985)));
		}
	}



/* fill-let-fun! */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_fillzd2letzd2funz12z12zzast_nodez00(BgL_letzd2funzd2_bglt
		BgL_new3781z00_178, obj_t BgL_loc3775z00_179,
		BgL_typez00_bglt BgL_type3776z00_180, obj_t BgL_sidezd2effectzf33777z21_181,
		obj_t BgL_key3778z00_182, obj_t BgL_locals3779z00_183,
		BgL_nodez00_bglt BgL_body3780z00_184)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{	/* Ast/node.scm 209 */
				obj_t BgL_loc3775z00_7843;

				BgL_typez00_bglt BgL_type3776z00_7844;

				obj_t BgL_sidezd2effectzf33777z21_7845;

				obj_t BgL_key3778z00_7846;

				obj_t BgL_locals3779z00_7847;

				BgL_nodez00_bglt BgL_body3780z00_7848;

				BgL_loc3775z00_7843 = BgL_loc3775z00_179;
				BgL_type3776z00_7844 = BgL_type3776z00_180;
				BgL_sidezd2effectzf33777z21_7845 = BgL_sidezd2effectzf33777z21_181;
				BgL_key3778z00_7846 = BgL_key3778z00_182;
				BgL_locals3779z00_7847 = BgL_locals3779z00_183;
				BgL_body3780z00_7848 = BgL_body3780z00_184;
				((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_178))->BgL_locz00) =
					((obj_t) BgL_loc3775z00_7843), BUNSPEC);
				((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_178))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3776z00_7844), BUNSPEC);
				((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_178))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33777z21_7845), BUNSPEC);
				((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_178))->BgL_keyz00) =
					((obj_t) BgL_key3778z00_7846), BUNSPEC);
				((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_178))->BgL_localsz00) =
					((obj_t) BgL_locals3779z00_7847), BUNSPEC);
				((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_178))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_body3780z00_7848), BUNSPEC);
				return BgL_new3781z00_178;
			}
		}
	}



/* _fill-let-fun! */
	obj_t BGl__fillzd2letzd2funz12z12zzast_nodez00(obj_t BgL_envz00_6986,
		obj_t BgL_new3781z00_6987, obj_t BgL_loc3775z00_6988,
		obj_t BgL_type3776z00_6989, obj_t BgL_sidezd2effectzf33777z21_6990,
		obj_t BgL_key3778z00_6991, obj_t BgL_locals3779z00_6992,
		obj_t BgL_body3780z00_6993)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{	/* Ast/node.scm 209 */
				BgL_letzd2funzd2_bglt BgL_auxz00_9190;

				{	/* Ast/node.scm 209 */
					BgL_letzd2funzd2_bglt BgL_res5565z00_7862;

					{	/* Ast/node.scm 209 */
						BgL_letzd2funzd2_bglt BgL_new3781z00_7849;

						BgL_typez00_bglt BgL_type3776z00_7851;

						BgL_nodez00_bglt BgL_body3780z00_7855;

						BgL_new3781z00_7849 = (BgL_letzd2funzd2_bglt) (BgL_new3781z00_6987);
						BgL_type3776z00_7851 = (BgL_typez00_bglt) (BgL_type3776z00_6989);
						BgL_body3780z00_7855 = (BgL_nodez00_bglt) (BgL_body3780z00_6993);
						{	/* Ast/node.scm 209 */
							obj_t BgL_loc3775z00_7856;

							BgL_typez00_bglt BgL_type3776z00_7857;

							obj_t BgL_sidezd2effectzf33777z21_7858;

							obj_t BgL_key3778z00_7859;

							obj_t BgL_locals3779z00_7860;

							BgL_nodez00_bglt BgL_body3780z00_7861;

							BgL_loc3775z00_7856 = BgL_loc3775z00_6988;
							BgL_type3776z00_7857 = BgL_type3776z00_7851;
							BgL_sidezd2effectzf33777z21_7858 =
								BgL_sidezd2effectzf33777z21_6990;
							BgL_key3778z00_7859 = BgL_key3778z00_6991;
							BgL_locals3779z00_7860 = BgL_locals3779z00_6992;
							BgL_body3780z00_7861 = BgL_body3780z00_7855;
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_7849))->
									BgL_locz00) = ((obj_t) BgL_loc3775z00_7856), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_7849))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3776z00_7857), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_7849))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33777z21_7858), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_7849))->
									BgL_keyz00) = ((obj_t) BgL_key3778z00_7859), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_7849))->
									BgL_localsz00) = ((obj_t) BgL_locals3779z00_7860), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_7849))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_body3780z00_7861), BUNSPEC);
							BgL_res5565z00_7862 = BgL_new3781z00_7849;
						}
					}
					BgL_auxz00_9190 = BgL_res5565z00_7862;
				}
				return (obj_t) (BgL_auxz00_9190);
			}
		}
	}



/* %allocate-let-fun */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_z52allocatezd2letzd2funz52zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{	/* Ast/node.scm 209 */
				BgL_letzd2funzd2_bglt BgL_new3789z00_7863;

				BgL_new3789z00_7863 =
					((BgL_letzd2funzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_letzd2funzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3789z00_7863),
					BGl_classzd2numzd2zz__objectz00(BGl_letzd2funzd2zzast_nodez00));
				{	/* Ast/node.scm 209 */
					BgL_objectz00_bglt BgL_auxz00_9205;

					BgL_auxz00_9205 = (BgL_objectz00_bglt) (BgL_new3789z00_7863);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9205, BFALSE);
				}
				return BgL_new3789z00_7863;
			}
		}
	}



/* _%allocate-let-fun */
	obj_t BGl__z52allocatezd2letzd2funz52zzast_nodez00(obj_t BgL_envz00_6875)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{	/* Ast/node.scm 209 */
				BgL_letzd2funzd2_bglt BgL_auxz00_9208;

				{	/* Ast/node.scm 209 */
					BgL_letzd2funzd2_bglt BgL_res5566z00_7867;

					{	/* Ast/node.scm 209 */
						BgL_letzd2funzd2_bglt BgL_new3789z00_7865;

						BgL_new3789z00_7865 =
							((BgL_letzd2funzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_letzd2funzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3789z00_7865),
							BGl_classzd2numzd2zz__objectz00(BGl_letzd2funzd2zzast_nodez00));
						{	/* Ast/node.scm 209 */
							BgL_objectz00_bglt BgL_auxz00_9213;

							BgL_auxz00_9213 = (BgL_objectz00_bglt) (BgL_new3789z00_7865);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9213, BFALSE);
						}
						BgL_res5566z00_7867 = BgL_new3789z00_7865;
					}
					BgL_auxz00_9208 = BgL_res5566z00_7867;
				}
				return (obj_t) (BgL_auxz00_9208);
			}
		}
	}



/* let-fun-nil */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt BGl_letzd2funzd2nilz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			if ((BGl_z52thezd2letzd2funzd2nilz80zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 209 */
					{	/* Ast/node.scm 209 */
						BgL_letzd2funzd2_bglt BgL_res5297z00_3342;

						{	/* Ast/node.scm 209 */
							BgL_letzd2funzd2_bglt BgL_new3789z00_3338;

							BgL_new3789z00_3338 =
								((BgL_letzd2funzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_letzd2funzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3789z00_3338),
								BGl_classzd2numzd2zz__objectz00(BGl_letzd2funzd2zzast_nodez00));
							{	/* Ast/node.scm 209 */
								BgL_objectz00_bglt BgL_auxz00_9223;

								BgL_auxz00_9223 = (BgL_objectz00_bglt) (BgL_new3789z00_3338);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9223, BFALSE);
							}
							BgL_res5297z00_3342 = BgL_new3789z00_3338;
						}
						BGl_z52thezd2letzd2funzd2nilz80zzast_nodez00 =
							(obj_t) (BgL_res5297z00_3342);
					}
					{	/* Ast/node.scm 209 */
						BgL_typez00_bglt BgL_arg4572z00_1390;

						BgL_nodez00_bglt BgL_arg4573z00_1391;

						BgL_arg4572z00_1390 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4573z00_1391 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 209 */
							BgL_letzd2funzd2_bglt BgL_res5298z00_3356;

							{	/* Ast/node.scm 209 */
								BgL_letzd2funzd2_bglt BgL_new3781z00_3343;

								BgL_new3781z00_3343 =
									(BgL_letzd2funzd2_bglt)
									(BGl_z52thezd2letzd2funzd2nilz80zzast_nodez00);
								{	/* Ast/node.scm 209 */
									obj_t BgL_loc3775z00_3350;

									BgL_typez00_bglt BgL_type3776z00_3351;

									obj_t BgL_sidezd2effectzf33777z21_3352;

									obj_t BgL_key3778z00_3353;

									obj_t BgL_locals3779z00_3354;

									BgL_nodez00_bglt BgL_body3780z00_3355;

									BgL_loc3775z00_3350 = BUNSPEC;
									BgL_type3776z00_3351 = BgL_arg4572z00_1390;
									BgL_sidezd2effectzf33777z21_3352 = BUNSPEC;
									BgL_key3778z00_3353 = BUNSPEC;
									BgL_locals3779z00_3354 = BUNSPEC;
									BgL_body3780z00_3355 = BgL_arg4573z00_1391;
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3343))->
											BgL_locz00) = ((obj_t) BgL_loc3775z00_3350), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3343))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3776z00_3351), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3343))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33777z21_3352), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3343))->
											BgL_keyz00) = ((obj_t) BgL_key3778z00_3353), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3343))->
											BgL_localsz00) =
										((obj_t) BgL_locals3779z00_3354), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3781z00_3343))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_body3780z00_3355), BUNSPEC);
									BgL_res5298z00_3356 = BgL_new3781z00_3343;
							}}
							(obj_t) (BgL_res5298z00_3356);
				}}}
			else
				{	/* Ast/node.scm 209 */
					BFALSE;
				}
			return
				(BgL_letzd2funzd2_bglt) (BGl_z52thezd2letzd2funzd2nilz80zzast_nodez00);
		}
	}



/* _let-fun-nil */
	obj_t BGl__letzd2funzd2nilz00zzast_nodez00(obj_t BgL_envz00_6876)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			return (obj_t) (BGl_letzd2funzd2nilz00zzast_nodez00());
		}
	}



/* select? */
	BGL_EXPORTED_DEF bool_t BGl_selectzf3zf3zzast_nodez00(obj_t
		BgL_obj3750z00_191)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3750z00_191,
				BGl_selectz00zzast_nodez00);
		}
	}



/* _select? */
	obj_t BGl__selectzf3zf3zzast_nodez00(obj_t BgL_envz00_6873,
		obj_t BgL_obj3750z00_6874)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3750z00_6874,
					BGl_selectz00zzast_nodez00));
		}
	}



/* make-select */
	BGL_EXPORTED_DEF BgL_selectz00_bglt BGl_makezd2selectzd2zzast_nodez00(obj_t
		BgL_loc3694z00_195, BgL_typez00_bglt BgL_type3695z00_196,
		obj_t BgL_sidezd2effectzf33696z21_197, obj_t BgL_key3697z00_198,
		BgL_nodez00_bglt BgL_test3698z00_199, obj_t BgL_clauses3699z00_200,
		BgL_typez00_bglt BgL_itemzd2type3700zd2_201)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{	/* Ast/node.scm 200 */
				BgL_selectz00_bglt BgL_new3701z00_3357;

				{	/* Ast/node.scm 200 */
					BgL_selectz00_bglt BgL_res5299z00_3362;

					{	/* Ast/node.scm 200 */
						BgL_selectz00_bglt BgL_new3719z00_3358;

						BgL_new3719z00_3358 =
							((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_selectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3719z00_3358),
							BGl_classzd2numzd2zz__objectz00(BGl_selectz00zzast_nodez00));
						{	/* Ast/node.scm 200 */
							BgL_objectz00_bglt BgL_auxz00_9247;

							BgL_auxz00_9247 = (BgL_objectz00_bglt) (BgL_new3719z00_3358);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9247, BFALSE);
						}
						BgL_res5299z00_3362 = BgL_new3719z00_3358;
					}
					BgL_new3701z00_3357 = BgL_res5299z00_3362;
				}
				{	/* Ast/node.scm 200 */
					BgL_selectz00_bglt BgL_res5300z00_3378;

					{	/* Ast/node.scm 200 */
						BgL_selectz00_bglt BgL_new3710z00_3363;

						BgL_new3710z00_3363 = BgL_new3701z00_3357;
						{	/* Ast/node.scm 200 */
							obj_t BgL_loc3703z00_3371;

							BgL_typez00_bglt BgL_type3704z00_3372;

							obj_t BgL_sidezd2effectzf33705z21_3373;

							obj_t BgL_key3706z00_3374;

							BgL_nodez00_bglt BgL_test3707z00_3375;

							obj_t BgL_clauses3708z00_3376;

							BgL_typez00_bglt BgL_itemzd2type3709zd2_3377;

							BgL_loc3703z00_3371 = BgL_loc3694z00_195;
							BgL_type3704z00_3372 = BgL_type3695z00_196;
							BgL_sidezd2effectzf33705z21_3373 =
								BgL_sidezd2effectzf33696z21_197;
							BgL_key3706z00_3374 = BgL_key3697z00_198;
							BgL_test3707z00_3375 = BgL_test3698z00_199;
							BgL_clauses3708z00_3376 = BgL_clauses3699z00_200;
							BgL_itemzd2type3709zd2_3377 = BgL_itemzd2type3700zd2_201;
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->BgL_locz00) =
								((obj_t) BgL_loc3703z00_3371), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3704z00_3372), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33705z21_3373), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->BgL_keyz00) =
								((obj_t) BgL_key3706z00_3374), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_test3707z00_3375), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->
									BgL_clausesz00) = ((obj_t) BgL_clauses3708z00_3376), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3363))->
									BgL_itemzd2typezd2) =
								((BgL_typez00_bglt) BgL_itemzd2type3709zd2_3377), BUNSPEC);
							BgL_res5300z00_3378 = BgL_new3710z00_3363;
					}} BgL_res5300z00_3378;
				}
				return BgL_new3701z00_3357;
			}
		}
	}



/* _make-select */
	obj_t BGl__makezd2selectzd2zzast_nodez00(obj_t BgL_envz00_6994,
		obj_t BgL_loc3694z00_6995, obj_t BgL_type3695z00_6996,
		obj_t BgL_sidezd2effectzf33696z21_6997, obj_t BgL_key3697z00_6998,
		obj_t BgL_test3698z00_6999, obj_t BgL_clauses3699z00_7000,
		obj_t BgL_itemzd2type3700zd2_7001)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			return
				(obj_t) (BGl_makezd2selectzd2zzast_nodez00(BgL_loc3694z00_6995,
					(BgL_typez00_bglt) (BgL_type3695z00_6996),
					BgL_sidezd2effectzf33696z21_6997, BgL_key3697z00_6998,
					(BgL_nodez00_bglt) (BgL_test3698z00_6999), BgL_clauses3699z00_7000,
					(BgL_typez00_bglt) (BgL_itemzd2type3700zd2_7001)));
		}
	}



/* fill-select! */
	BGL_EXPORTED_DEF BgL_selectz00_bglt
		BGl_fillzd2selectz12zc0zzast_nodez00(BgL_selectz00_bglt BgL_new3710z00_202,
		obj_t BgL_loc3703z00_203, BgL_typez00_bglt BgL_type3704z00_204,
		obj_t BgL_sidezd2effectzf33705z21_205, obj_t BgL_key3706z00_206,
		BgL_nodez00_bglt BgL_test3707z00_207, obj_t BgL_clauses3708z00_208,
		BgL_typez00_bglt BgL_itemzd2type3709zd2_209)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{	/* Ast/node.scm 200 */
				obj_t BgL_loc3703z00_7869;

				BgL_typez00_bglt BgL_type3704z00_7870;

				obj_t BgL_sidezd2effectzf33705z21_7871;

				obj_t BgL_key3706z00_7872;

				BgL_nodez00_bglt BgL_test3707z00_7873;

				obj_t BgL_clauses3708z00_7874;

				BgL_typez00_bglt BgL_itemzd2type3709zd2_7875;

				BgL_loc3703z00_7869 = BgL_loc3703z00_203;
				BgL_type3704z00_7870 = BgL_type3704z00_204;
				BgL_sidezd2effectzf33705z21_7871 = BgL_sidezd2effectzf33705z21_205;
				BgL_key3706z00_7872 = BgL_key3706z00_206;
				BgL_test3707z00_7873 = BgL_test3707z00_207;
				BgL_clauses3708z00_7874 = BgL_clauses3708z00_208;
				BgL_itemzd2type3709zd2_7875 = BgL_itemzd2type3709zd2_209;
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->BgL_locz00) =
					((obj_t) BgL_loc3703z00_7869), BUNSPEC);
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3704z00_7870), BUNSPEC);
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33705z21_7871), BUNSPEC);
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->BgL_keyz00) =
					((obj_t) BgL_key3706z00_7872), BUNSPEC);
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_test3707z00_7873), BUNSPEC);
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->BgL_clausesz00) =
					((obj_t) BgL_clauses3708z00_7874), BUNSPEC);
				((((BgL_selectz00_bglt) CREF(BgL_new3710z00_202))->BgL_itemzd2typezd2) =
					((BgL_typez00_bglt) BgL_itemzd2type3709zd2_7875), BUNSPEC);
				return BgL_new3710z00_202;
			}
		}
	}



/* _fill-select! */
	obj_t BGl__fillzd2selectz12zc0zzast_nodez00(obj_t BgL_envz00_7002,
		obj_t BgL_new3710z00_7003, obj_t BgL_loc3703z00_7004,
		obj_t BgL_type3704z00_7005, obj_t BgL_sidezd2effectzf33705z21_7006,
		obj_t BgL_key3706z00_7007, obj_t BgL_test3707z00_7008,
		obj_t BgL_clauses3708z00_7009, obj_t BgL_itemzd2type3709zd2_7010)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{	/* Ast/node.scm 200 */
				BgL_selectz00_bglt BgL_auxz00_9269;

				{	/* Ast/node.scm 200 */
					BgL_selectz00_bglt BgL_res5567z00_7891;

					{	/* Ast/node.scm 200 */
						BgL_selectz00_bglt BgL_new3710z00_7876;

						BgL_typez00_bglt BgL_type3704z00_7878;

						BgL_nodez00_bglt BgL_test3707z00_7881;

						BgL_typez00_bglt BgL_itemzd2type3709zd2_7883;

						BgL_new3710z00_7876 = (BgL_selectz00_bglt) (BgL_new3710z00_7003);
						BgL_type3704z00_7878 = (BgL_typez00_bglt) (BgL_type3704z00_7005);
						BgL_test3707z00_7881 = (BgL_nodez00_bglt) (BgL_test3707z00_7008);
						BgL_itemzd2type3709zd2_7883 =
							(BgL_typez00_bglt) (BgL_itemzd2type3709zd2_7010);
						{	/* Ast/node.scm 200 */
							obj_t BgL_loc3703z00_7884;

							BgL_typez00_bglt BgL_type3704z00_7885;

							obj_t BgL_sidezd2effectzf33705z21_7886;

							obj_t BgL_key3706z00_7887;

							BgL_nodez00_bglt BgL_test3707z00_7888;

							obj_t BgL_clauses3708z00_7889;

							BgL_typez00_bglt BgL_itemzd2type3709zd2_7890;

							BgL_loc3703z00_7884 = BgL_loc3703z00_7004;
							BgL_type3704z00_7885 = BgL_type3704z00_7878;
							BgL_sidezd2effectzf33705z21_7886 =
								BgL_sidezd2effectzf33705z21_7006;
							BgL_key3706z00_7887 = BgL_key3706z00_7007;
							BgL_test3707z00_7888 = BgL_test3707z00_7881;
							BgL_clauses3708z00_7889 = BgL_clauses3708z00_7009;
							BgL_itemzd2type3709zd2_7890 = BgL_itemzd2type3709zd2_7883;
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->BgL_locz00) =
								((obj_t) BgL_loc3703z00_7884), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3704z00_7885), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33705z21_7886), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->BgL_keyz00) =
								((obj_t) BgL_key3706z00_7887), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_test3707z00_7888), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->
									BgL_clausesz00) = ((obj_t) BgL_clauses3708z00_7889), BUNSPEC);
							((((BgL_selectz00_bglt) CREF(BgL_new3710z00_7876))->
									BgL_itemzd2typezd2) =
								((BgL_typez00_bglt) BgL_itemzd2type3709zd2_7890), BUNSPEC);
							BgL_res5567z00_7891 = BgL_new3710z00_7876;
						}
					}
					BgL_auxz00_9269 = BgL_res5567z00_7891;
				}
				return (obj_t) (BgL_auxz00_9269);
			}
		}
	}



/* %allocate-select */
	BGL_EXPORTED_DEF BgL_selectz00_bglt BGl_z52allocatezd2selectz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{	/* Ast/node.scm 200 */
				BgL_selectz00_bglt BgL_new3719z00_7892;

				BgL_new3719z00_7892 =
					((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_selectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3719z00_7892),
					BGl_classzd2numzd2zz__objectz00(BGl_selectz00zzast_nodez00));
				{	/* Ast/node.scm 200 */
					BgL_objectz00_bglt BgL_auxz00_9286;

					BgL_auxz00_9286 = (BgL_objectz00_bglt) (BgL_new3719z00_7892);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9286, BFALSE);
				}
				return BgL_new3719z00_7892;
			}
		}
	}



/* _%allocate-select */
	obj_t BGl__z52allocatezd2selectz80zzast_nodez00(obj_t BgL_envz00_6871)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{	/* Ast/node.scm 200 */
				BgL_selectz00_bglt BgL_auxz00_9289;

				{	/* Ast/node.scm 200 */
					BgL_selectz00_bglt BgL_res5568z00_7896;

					{	/* Ast/node.scm 200 */
						BgL_selectz00_bglt BgL_new3719z00_7894;

						BgL_new3719z00_7894 =
							((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_selectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3719z00_7894),
							BGl_classzd2numzd2zz__objectz00(BGl_selectz00zzast_nodez00));
						{	/* Ast/node.scm 200 */
							BgL_objectz00_bglt BgL_auxz00_9294;

							BgL_auxz00_9294 = (BgL_objectz00_bglt) (BgL_new3719z00_7894);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9294, BFALSE);
						}
						BgL_res5568z00_7896 = BgL_new3719z00_7894;
					}
					BgL_auxz00_9289 = BgL_res5568z00_7896;
				}
				return (obj_t) (BgL_auxz00_9289);
			}
		}
	}



/* select-nil */
	BGL_EXPORTED_DEF BgL_selectz00_bglt BGl_selectzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			if ((BGl_z52thezd2selectzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 200 */
					{	/* Ast/node.scm 200 */
						BgL_selectz00_bglt BgL_res5301z00_3394;

						{	/* Ast/node.scm 200 */
							BgL_selectz00_bglt BgL_new3719z00_3390;

							BgL_new3719z00_3390 =
								((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_selectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3719z00_3390),
								BGl_classzd2numzd2zz__objectz00(BGl_selectz00zzast_nodez00));
							{	/* Ast/node.scm 200 */
								BgL_objectz00_bglt BgL_auxz00_9304;

								BgL_auxz00_9304 = (BgL_objectz00_bglt) (BgL_new3719z00_3390);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9304, BFALSE);
							}
							BgL_res5301z00_3394 = BgL_new3719z00_3390;
						}
						BGl_z52thezd2selectzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5301z00_3394);
					}
					{	/* Ast/node.scm 200 */
						BgL_typez00_bglt BgL_arg4577z00_1403;

						BgL_nodez00_bglt BgL_arg4578z00_1404;

						BgL_typez00_bglt BgL_arg4579z00_1405;

						BgL_arg4577z00_1403 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4578z00_1404 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4579z00_1405 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 200 */
							BgL_selectz00_bglt BgL_res5302z00_3410;

							{	/* Ast/node.scm 200 */
								BgL_selectz00_bglt BgL_new3710z00_3395;

								BgL_new3710z00_3395 =
									(BgL_selectz00_bglt)
									(BGl_z52thezd2selectzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 200 */
									obj_t BgL_loc3703z00_3403;

									BgL_typez00_bglt BgL_type3704z00_3404;

									obj_t BgL_sidezd2effectzf33705z21_3405;

									obj_t BgL_key3706z00_3406;

									BgL_nodez00_bglt BgL_test3707z00_3407;

									obj_t BgL_clauses3708z00_3408;

									BgL_typez00_bglt BgL_itemzd2type3709zd2_3409;

									BgL_loc3703z00_3403 = BUNSPEC;
									BgL_type3704z00_3404 = BgL_arg4577z00_1403;
									BgL_sidezd2effectzf33705z21_3405 = BUNSPEC;
									BgL_key3706z00_3406 = BUNSPEC;
									BgL_test3707z00_3407 = BgL_arg4578z00_1404;
									BgL_clauses3708z00_3408 = BUNSPEC;
									BgL_itemzd2type3709zd2_3409 = BgL_arg4579z00_1405;
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_locz00) = ((obj_t) BgL_loc3703z00_3403), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3704z00_3404), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33705z21_3405), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_keyz00) = ((obj_t) BgL_key3706z00_3406), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_testz00) =
										((BgL_nodez00_bglt) BgL_test3707z00_3407), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_clausesz00) =
										((obj_t) BgL_clauses3708z00_3408), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3710z00_3395))->
											BgL_itemzd2typezd2) =
										((BgL_typez00_bglt) BgL_itemzd2type3709zd2_3409), BUNSPEC);
									BgL_res5302z00_3410 = BgL_new3710z00_3395;
							}}
							(obj_t) (BgL_res5302z00_3410);
				}}}
			else
				{	/* Ast/node.scm 200 */
					BFALSE;
				}
			return (BgL_selectz00_bglt) (BGl_z52thezd2selectzd2nilz52zzast_nodez00);
		}
	}



/* _select-nil */
	obj_t BGl__selectzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6872)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			return (obj_t) (BGl_selectzd2nilzd2zzast_nodez00());
		}
	}



/* fail? */
	BGL_EXPORTED_DEF bool_t BGl_failzf3zf3zzast_nodez00(obj_t BgL_obj3678z00_215)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3678z00_215,
				BGl_failz00zzast_nodez00);
		}
	}



/* _fail? */
	obj_t BGl__failzf3zf3zzast_nodez00(obj_t BgL_envz00_6869,
		obj_t BgL_obj3678z00_6870)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3678z00_6870,
					BGl_failz00zzast_nodez00));
		}
	}



/* make-fail */
	BGL_EXPORTED_DEF BgL_failz00_bglt BGl_makezd2failzd2zzast_nodez00(obj_t
		BgL_loc3635z00_219, BgL_typez00_bglt BgL_type3636z00_220,
		BgL_nodez00_bglt BgL_proc3637z00_221, BgL_nodez00_bglt BgL_msg3638z00_222,
		BgL_nodez00_bglt BgL_obj3639z00_223)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{	/* Ast/node.scm 193 */
				BgL_failz00_bglt BgL_new3640z00_3411;

				{	/* Ast/node.scm 193 */
					BgL_failz00_bglt BgL_res5303z00_3416;

					{	/* Ast/node.scm 193 */
						BgL_failz00_bglt BgL_new3654z00_3412;

						BgL_new3654z00_3412 =
							((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_failz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3654z00_3412),
							BGl_classzd2numzd2zz__objectz00(BGl_failz00zzast_nodez00));
						{	/* Ast/node.scm 193 */
							BgL_objectz00_bglt BgL_auxz00_9330;

							BgL_auxz00_9330 = (BgL_objectz00_bglt) (BgL_new3654z00_3412);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9330, BFALSE);
						}
						BgL_res5303z00_3416 = BgL_new3654z00_3412;
					}
					BgL_new3640z00_3411 = BgL_res5303z00_3416;
				}
				{	/* Ast/node.scm 193 */
					BgL_failz00_bglt BgL_res5304z00_3428;

					{	/* Ast/node.scm 193 */
						BgL_failz00_bglt BgL_new3647z00_3417;

						BgL_new3647z00_3417 = BgL_new3640z00_3411;
						{	/* Ast/node.scm 193 */
							obj_t BgL_loc3642z00_3423;

							BgL_typez00_bglt BgL_type3643z00_3424;

							BgL_nodez00_bglt BgL_proc3644z00_3425;

							BgL_nodez00_bglt BgL_msg3645z00_3426;

							BgL_nodez00_bglt BgL_obj3646z00_3427;

							BgL_loc3642z00_3423 = BgL_loc3635z00_219;
							BgL_type3643z00_3424 = BgL_type3636z00_220;
							BgL_proc3644z00_3425 = BgL_proc3637z00_221;
							BgL_msg3645z00_3426 = BgL_msg3638z00_222;
							BgL_obj3646z00_3427 = BgL_obj3639z00_223;
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_3417))->BgL_locz00) =
								((obj_t) BgL_loc3642z00_3423), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_3417))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3643z00_3424), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_3417))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_proc3644z00_3425), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_3417))->BgL_msgz00) =
								((BgL_nodez00_bglt) BgL_msg3645z00_3426), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_3417))->BgL_objz00) =
								((BgL_nodez00_bglt) BgL_obj3646z00_3427), BUNSPEC);
							BgL_res5304z00_3428 = BgL_new3647z00_3417;
					}} BgL_res5304z00_3428;
				}
				return BgL_new3640z00_3411;
			}
		}
	}



/* _make-fail */
	obj_t BGl__makezd2failzd2zzast_nodez00(obj_t BgL_envz00_7011,
		obj_t BgL_loc3635z00_7012, obj_t BgL_type3636z00_7013,
		obj_t BgL_proc3637z00_7014, obj_t BgL_msg3638z00_7015,
		obj_t BgL_obj3639z00_7016)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			return
				(obj_t) (BGl_makezd2failzd2zzast_nodez00(BgL_loc3635z00_7012,
					(BgL_typez00_bglt) (BgL_type3636z00_7013),
					(BgL_nodez00_bglt) (BgL_proc3637z00_7014),
					(BgL_nodez00_bglt) (BgL_msg3638z00_7015),
					(BgL_nodez00_bglt) (BgL_obj3639z00_7016)));
		}
	}



/* fill-fail! */
	BGL_EXPORTED_DEF BgL_failz00_bglt
		BGl_fillzd2failz12zc0zzast_nodez00(BgL_failz00_bglt BgL_new3647z00_224,
		obj_t BgL_loc3642z00_225, BgL_typez00_bglt BgL_type3643z00_226,
		BgL_nodez00_bglt BgL_proc3644z00_227, BgL_nodez00_bglt BgL_msg3645z00_228,
		BgL_nodez00_bglt BgL_obj3646z00_229)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{	/* Ast/node.scm 193 */
				obj_t BgL_loc3642z00_7898;

				BgL_typez00_bglt BgL_type3643z00_7899;

				BgL_nodez00_bglt BgL_proc3644z00_7900;

				BgL_nodez00_bglt BgL_msg3645z00_7901;

				BgL_nodez00_bglt BgL_obj3646z00_7902;

				BgL_loc3642z00_7898 = BgL_loc3642z00_225;
				BgL_type3643z00_7899 = BgL_type3643z00_226;
				BgL_proc3644z00_7900 = BgL_proc3644z00_227;
				BgL_msg3645z00_7901 = BgL_msg3645z00_228;
				BgL_obj3646z00_7902 = BgL_obj3646z00_229;
				((((BgL_failz00_bglt) CREF(BgL_new3647z00_224))->BgL_locz00) =
					((obj_t) BgL_loc3642z00_7898), BUNSPEC);
				((((BgL_failz00_bglt) CREF(BgL_new3647z00_224))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3643z00_7899), BUNSPEC);
				((((BgL_failz00_bglt) CREF(BgL_new3647z00_224))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_proc3644z00_7900), BUNSPEC);
				((((BgL_failz00_bglt) CREF(BgL_new3647z00_224))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_msg3645z00_7901), BUNSPEC);
				((((BgL_failz00_bglt) CREF(BgL_new3647z00_224))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_obj3646z00_7902), BUNSPEC);
				return BgL_new3647z00_224;
			}
		}
	}



/* _fill-fail! */
	obj_t BGl__fillzd2failz12zc0zzast_nodez00(obj_t BgL_envz00_7017,
		obj_t BgL_new3647z00_7018, obj_t BgL_loc3642z00_7019,
		obj_t BgL_type3643z00_7020, obj_t BgL_proc3644z00_7021,
		obj_t BgL_msg3645z00_7022, obj_t BgL_obj3646z00_7023)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{	/* Ast/node.scm 193 */
				BgL_failz00_bglt BgL_auxz00_9349;

				{	/* Ast/node.scm 193 */
					BgL_failz00_bglt BgL_res5569z00_7914;

					{	/* Ast/node.scm 193 */
						BgL_failz00_bglt BgL_new3647z00_7903;

						BgL_typez00_bglt BgL_type3643z00_7905;

						BgL_nodez00_bglt BgL_proc3644z00_7906;

						BgL_nodez00_bglt BgL_msg3645z00_7907;

						BgL_nodez00_bglt BgL_obj3646z00_7908;

						BgL_new3647z00_7903 = (BgL_failz00_bglt) (BgL_new3647z00_7018);
						BgL_type3643z00_7905 = (BgL_typez00_bglt) (BgL_type3643z00_7020);
						BgL_proc3644z00_7906 = (BgL_nodez00_bglt) (BgL_proc3644z00_7021);
						BgL_msg3645z00_7907 = (BgL_nodez00_bglt) (BgL_msg3645z00_7022);
						BgL_obj3646z00_7908 = (BgL_nodez00_bglt) (BgL_obj3646z00_7023);
						{	/* Ast/node.scm 193 */
							obj_t BgL_loc3642z00_7909;

							BgL_typez00_bglt BgL_type3643z00_7910;

							BgL_nodez00_bglt BgL_proc3644z00_7911;

							BgL_nodez00_bglt BgL_msg3645z00_7912;

							BgL_nodez00_bglt BgL_obj3646z00_7913;

							BgL_loc3642z00_7909 = BgL_loc3642z00_7019;
							BgL_type3643z00_7910 = BgL_type3643z00_7905;
							BgL_proc3644z00_7911 = BgL_proc3644z00_7906;
							BgL_msg3645z00_7912 = BgL_msg3645z00_7907;
							BgL_obj3646z00_7913 = BgL_obj3646z00_7908;
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_7903))->BgL_locz00) =
								((obj_t) BgL_loc3642z00_7909), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_7903))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3643z00_7910), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_7903))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_proc3644z00_7911), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_7903))->BgL_msgz00) =
								((BgL_nodez00_bglt) BgL_msg3645z00_7912), BUNSPEC);
							((((BgL_failz00_bglt) CREF(BgL_new3647z00_7903))->BgL_objz00) =
								((BgL_nodez00_bglt) BgL_obj3646z00_7913), BUNSPEC);
							BgL_res5569z00_7914 = BgL_new3647z00_7903;
						}
					}
					BgL_auxz00_9349 = BgL_res5569z00_7914;
				}
				return (obj_t) (BgL_auxz00_9349);
			}
		}
	}



/* %allocate-fail */
	BGL_EXPORTED_DEF BgL_failz00_bglt BGl_z52allocatezd2failz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{	/* Ast/node.scm 193 */
				BgL_failz00_bglt BgL_new3654z00_7915;

				BgL_new3654z00_7915 =
					((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_failz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3654z00_7915),
					BGl_classzd2numzd2zz__objectz00(BGl_failz00zzast_nodez00));
				{	/* Ast/node.scm 193 */
					BgL_objectz00_bglt BgL_auxz00_9365;

					BgL_auxz00_9365 = (BgL_objectz00_bglt) (BgL_new3654z00_7915);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9365, BFALSE);
				}
				return BgL_new3654z00_7915;
			}
		}
	}



/* _%allocate-fail */
	obj_t BGl__z52allocatezd2failz80zzast_nodez00(obj_t BgL_envz00_6867)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{	/* Ast/node.scm 193 */
				BgL_failz00_bglt BgL_auxz00_9368;

				{	/* Ast/node.scm 193 */
					BgL_failz00_bglt BgL_res5570z00_7919;

					{	/* Ast/node.scm 193 */
						BgL_failz00_bglt BgL_new3654z00_7917;

						BgL_new3654z00_7917 =
							((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_failz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3654z00_7917),
							BGl_classzd2numzd2zz__objectz00(BGl_failz00zzast_nodez00));
						{	/* Ast/node.scm 193 */
							BgL_objectz00_bglt BgL_auxz00_9373;

							BgL_auxz00_9373 = (BgL_objectz00_bglt) (BgL_new3654z00_7917);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9373, BFALSE);
						}
						BgL_res5570z00_7919 = BgL_new3654z00_7917;
					}
					BgL_auxz00_9368 = BgL_res5570z00_7919;
				}
				return (obj_t) (BgL_auxz00_9368);
			}
		}
	}



/* fail-nil */
	BGL_EXPORTED_DEF BgL_failz00_bglt BGl_failzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			if ((BGl_z52thezd2failzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 193 */
					{	/* Ast/node.scm 193 */
						BgL_failz00_bglt BgL_res5305z00_3442;

						{	/* Ast/node.scm 193 */
							BgL_failz00_bglt BgL_new3654z00_3438;

							BgL_new3654z00_3438 =
								((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_failz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3654z00_3438),
								BGl_classzd2numzd2zz__objectz00(BGl_failz00zzast_nodez00));
							{	/* Ast/node.scm 193 */
								BgL_objectz00_bglt BgL_auxz00_9383;

								BgL_auxz00_9383 = (BgL_objectz00_bglt) (BgL_new3654z00_3438);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9383, BFALSE);
							}
							BgL_res5305z00_3442 = BgL_new3654z00_3438;
						}
						BGl_z52thezd2failzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5305z00_3442);
					}
					{	/* Ast/node.scm 193 */
						BgL_typez00_bglt BgL_arg4582z00_1415;

						BgL_nodez00_bglt BgL_arg4583z00_1416;

						BgL_nodez00_bglt BgL_arg4584z00_1417;

						BgL_nodez00_bglt BgL_arg4585z00_1418;

						BgL_arg4582z00_1415 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4583z00_1416 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4584z00_1417 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4585z00_1418 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 193 */
							BgL_failz00_bglt BgL_res5306z00_3454;

							{	/* Ast/node.scm 193 */
								BgL_failz00_bglt BgL_new3647z00_3443;

								BgL_new3647z00_3443 =
									(BgL_failz00_bglt) (BGl_z52thezd2failzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 193 */
									obj_t BgL_loc3642z00_3449;

									BgL_typez00_bglt BgL_type3643z00_3450;

									BgL_nodez00_bglt BgL_proc3644z00_3451;

									BgL_nodez00_bglt BgL_msg3645z00_3452;

									BgL_nodez00_bglt BgL_obj3646z00_3453;

									BgL_loc3642z00_3449 = BUNSPEC;
									BgL_type3643z00_3450 = BgL_arg4582z00_1415;
									BgL_proc3644z00_3451 = BgL_arg4583z00_1416;
									BgL_msg3645z00_3452 = BgL_arg4584z00_1417;
									BgL_obj3646z00_3453 = BgL_arg4585z00_1418;
									((((BgL_failz00_bglt) CREF(BgL_new3647z00_3443))->
											BgL_locz00) = ((obj_t) BgL_loc3642z00_3449), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new3647z00_3443))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3643z00_3450), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new3647z00_3443))->
											BgL_procz00) =
										((BgL_nodez00_bglt) BgL_proc3644z00_3451), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new3647z00_3443))->
											BgL_msgz00) =
										((BgL_nodez00_bglt) BgL_msg3645z00_3452), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new3647z00_3443))->
											BgL_objz00) =
										((BgL_nodez00_bglt) BgL_obj3646z00_3453), BUNSPEC);
									BgL_res5306z00_3454 = BgL_new3647z00_3443;
							}}
							(obj_t) (BgL_res5306z00_3454);
				}}}
			else
				{	/* Ast/node.scm 193 */
					BFALSE;
				}
			return (BgL_failz00_bglt) (BGl_z52thezd2failzd2nilz52zzast_nodez00);
		}
	}



/* _fail-nil */
	obj_t BGl__failzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6868)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			return (obj_t) (BGl_failzd2nilzd2zzast_nodez00());
		}
	}



/* conditional? */
	BGL_EXPORTED_DEF bool_t BGl_conditionalzf3zf3zzast_nodez00(obj_t
		BgL_obj3621z00_239)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3621z00_239,
				BGl_conditionalz00zzast_nodez00);
		}
	}



/* _conditional? */
	obj_t BGl__conditionalzf3zf3zzast_nodez00(obj_t BgL_envz00_6865,
		obj_t BgL_obj3621z00_6866)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3621z00_6866,
					BGl_conditionalz00zzast_nodez00));
		}
	}



/* make-conditional */
	BGL_EXPORTED_DEF BgL_conditionalz00_bglt
		BGl_makezd2conditionalzd2zzast_nodez00(obj_t BgL_loc3564z00_243,
		BgL_typez00_bglt BgL_type3565z00_244, obj_t BgL_sidezd2effectzf33566z21_245,
		obj_t BgL_key3567z00_246, BgL_nodez00_bglt BgL_test3568z00_247,
		BgL_nodez00_bglt BgL_true3569z00_248, BgL_nodez00_bglt BgL_false3570z00_249)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{	/* Ast/node.scm 184 */
				BgL_conditionalz00_bglt BgL_new3571z00_3455;

				{	/* Ast/node.scm 184 */
					BgL_conditionalz00_bglt BgL_res5307z00_3460;

					{	/* Ast/node.scm 184 */
						BgL_conditionalz00_bglt BgL_new3589z00_3456;

						BgL_new3589z00_3456 =
							((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_conditionalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3589z00_3456),
							BGl_classzd2numzd2zz__objectz00(BGl_conditionalz00zzast_nodez00));
						{	/* Ast/node.scm 184 */
							BgL_objectz00_bglt BgL_auxz00_9408;

							BgL_auxz00_9408 = (BgL_objectz00_bglt) (BgL_new3589z00_3456);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9408, BFALSE);
						}
						BgL_res5307z00_3460 = BgL_new3589z00_3456;
					}
					BgL_new3571z00_3455 = BgL_res5307z00_3460;
				}
				{	/* Ast/node.scm 184 */
					BgL_conditionalz00_bglt BgL_res5308z00_3476;

					{	/* Ast/node.scm 184 */
						BgL_conditionalz00_bglt BgL_new3580z00_3461;

						BgL_new3580z00_3461 = BgL_new3571z00_3455;
						{	/* Ast/node.scm 184 */
							obj_t BgL_loc3573z00_3469;

							BgL_typez00_bglt BgL_type3574z00_3470;

							obj_t BgL_sidezd2effectzf33575z21_3471;

							obj_t BgL_key3576z00_3472;

							BgL_nodez00_bglt BgL_test3577z00_3473;

							BgL_nodez00_bglt BgL_true3578z00_3474;

							BgL_nodez00_bglt BgL_false3579z00_3475;

							BgL_loc3573z00_3469 = BgL_loc3564z00_243;
							BgL_type3574z00_3470 = BgL_type3565z00_244;
							BgL_sidezd2effectzf33575z21_3471 =
								BgL_sidezd2effectzf33566z21_245;
							BgL_key3576z00_3472 = BgL_key3567z00_246;
							BgL_test3577z00_3473 = BgL_test3568z00_247;
							BgL_true3578z00_3474 = BgL_true3569z00_248;
							BgL_false3579z00_3475 = BgL_false3570z00_249;
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_locz00) = ((obj_t) BgL_loc3573z00_3469), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3574z00_3470), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33575z21_3471), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_keyz00) = ((obj_t) BgL_key3576z00_3472), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_testz00) =
								((BgL_nodez00_bglt) BgL_test3577z00_3473), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_truez00) =
								((BgL_nodez00_bglt) BgL_true3578z00_3474), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3461))->
									BgL_falsez00) =
								((BgL_nodez00_bglt) BgL_false3579z00_3475), BUNSPEC);
							BgL_res5308z00_3476 = BgL_new3580z00_3461;
					}} BgL_res5308z00_3476;
				}
				return BgL_new3571z00_3455;
			}
		}
	}



/* _make-conditional */
	obj_t BGl__makezd2conditionalzd2zzast_nodez00(obj_t BgL_envz00_7024,
		obj_t BgL_loc3564z00_7025, obj_t BgL_type3565z00_7026,
		obj_t BgL_sidezd2effectzf33566z21_7027, obj_t BgL_key3567z00_7028,
		obj_t BgL_test3568z00_7029, obj_t BgL_true3569z00_7030,
		obj_t BgL_false3570z00_7031)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			return
				(obj_t) (BGl_makezd2conditionalzd2zzast_nodez00(BgL_loc3564z00_7025,
					(BgL_typez00_bglt) (BgL_type3565z00_7026),
					BgL_sidezd2effectzf33566z21_7027, BgL_key3567z00_7028,
					(BgL_nodez00_bglt) (BgL_test3568z00_7029),
					(BgL_nodez00_bglt) (BgL_true3569z00_7030),
					(BgL_nodez00_bglt) (BgL_false3570z00_7031)));
		}
	}



/* fill-conditional! */
	BGL_EXPORTED_DEF BgL_conditionalz00_bglt
		BGl_fillzd2conditionalz12zc0zzast_nodez00(BgL_conditionalz00_bglt
		BgL_new3580z00_250, obj_t BgL_loc3573z00_251,
		BgL_typez00_bglt BgL_type3574z00_252, obj_t BgL_sidezd2effectzf33575z21_253,
		obj_t BgL_key3576z00_254, BgL_nodez00_bglt BgL_test3577z00_255,
		BgL_nodez00_bglt BgL_true3578z00_256, BgL_nodez00_bglt BgL_false3579z00_257)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{	/* Ast/node.scm 184 */
				obj_t BgL_loc3573z00_7921;

				BgL_typez00_bglt BgL_type3574z00_7922;

				obj_t BgL_sidezd2effectzf33575z21_7923;

				obj_t BgL_key3576z00_7924;

				BgL_nodez00_bglt BgL_test3577z00_7925;

				BgL_nodez00_bglt BgL_true3578z00_7926;

				BgL_nodez00_bglt BgL_false3579z00_7927;

				BgL_loc3573z00_7921 = BgL_loc3573z00_251;
				BgL_type3574z00_7922 = BgL_type3574z00_252;
				BgL_sidezd2effectzf33575z21_7923 = BgL_sidezd2effectzf33575z21_253;
				BgL_key3576z00_7924 = BgL_key3576z00_254;
				BgL_test3577z00_7925 = BgL_test3577z00_255;
				BgL_true3578z00_7926 = BgL_true3578z00_256;
				BgL_false3579z00_7927 = BgL_false3579z00_257;
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->BgL_locz00) =
					((obj_t) BgL_loc3573z00_7921), BUNSPEC);
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3574z00_7922), BUNSPEC);
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33575z21_7923), BUNSPEC);
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->BgL_keyz00) =
					((obj_t) BgL_key3576z00_7924), BUNSPEC);
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_test3577z00_7925), BUNSPEC);
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_true3578z00_7926), BUNSPEC);
				((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_250))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_false3579z00_7927), BUNSPEC);
				return BgL_new3580z00_250;
			}
		}
	}



/* _fill-conditional! */
	obj_t BGl__fillzd2conditionalz12zc0zzast_nodez00(obj_t BgL_envz00_7032,
		obj_t BgL_new3580z00_7033, obj_t BgL_loc3573z00_7034,
		obj_t BgL_type3574z00_7035, obj_t BgL_sidezd2effectzf33575z21_7036,
		obj_t BgL_key3576z00_7037, obj_t BgL_test3577z00_7038,
		obj_t BgL_true3578z00_7039, obj_t BgL_false3579z00_7040)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{	/* Ast/node.scm 184 */
				BgL_conditionalz00_bglt BgL_auxz00_9431;

				{	/* Ast/node.scm 184 */
					BgL_conditionalz00_bglt BgL_res5571z00_7943;

					{	/* Ast/node.scm 184 */
						BgL_conditionalz00_bglt BgL_new3580z00_7928;

						BgL_typez00_bglt BgL_type3574z00_7930;

						BgL_nodez00_bglt BgL_test3577z00_7933;

						BgL_nodez00_bglt BgL_true3578z00_7934;

						BgL_nodez00_bglt BgL_false3579z00_7935;

						BgL_new3580z00_7928 =
							(BgL_conditionalz00_bglt) (BgL_new3580z00_7033);
						BgL_type3574z00_7930 = (BgL_typez00_bglt) (BgL_type3574z00_7035);
						BgL_test3577z00_7933 = (BgL_nodez00_bglt) (BgL_test3577z00_7038);
						BgL_true3578z00_7934 = (BgL_nodez00_bglt) (BgL_true3578z00_7039);
						BgL_false3579z00_7935 = (BgL_nodez00_bglt) (BgL_false3579z00_7040);
						{	/* Ast/node.scm 184 */
							obj_t BgL_loc3573z00_7936;

							BgL_typez00_bglt BgL_type3574z00_7937;

							obj_t BgL_sidezd2effectzf33575z21_7938;

							obj_t BgL_key3576z00_7939;

							BgL_nodez00_bglt BgL_test3577z00_7940;

							BgL_nodez00_bglt BgL_true3578z00_7941;

							BgL_nodez00_bglt BgL_false3579z00_7942;

							BgL_loc3573z00_7936 = BgL_loc3573z00_7034;
							BgL_type3574z00_7937 = BgL_type3574z00_7930;
							BgL_sidezd2effectzf33575z21_7938 =
								BgL_sidezd2effectzf33575z21_7036;
							BgL_key3576z00_7939 = BgL_key3576z00_7037;
							BgL_test3577z00_7940 = BgL_test3577z00_7933;
							BgL_true3578z00_7941 = BgL_true3578z00_7934;
							BgL_false3579z00_7942 = BgL_false3579z00_7935;
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_locz00) = ((obj_t) BgL_loc3573z00_7936), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3574z00_7937), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33575z21_7938), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_keyz00) = ((obj_t) BgL_key3576z00_7939), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_testz00) =
								((BgL_nodez00_bglt) BgL_test3577z00_7940), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_truez00) =
								((BgL_nodez00_bglt) BgL_true3578z00_7941), BUNSPEC);
							((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_7928))->
									BgL_falsez00) =
								((BgL_nodez00_bglt) BgL_false3579z00_7942), BUNSPEC);
							BgL_res5571z00_7943 = BgL_new3580z00_7928;
						}
					}
					BgL_auxz00_9431 = BgL_res5571z00_7943;
				}
				return (obj_t) (BgL_auxz00_9431);
			}
		}
	}



/* %allocate-conditional */
	BGL_EXPORTED_DEF BgL_conditionalz00_bglt
		BGl_z52allocatezd2conditionalz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{	/* Ast/node.scm 184 */
				BgL_conditionalz00_bglt BgL_new3589z00_7944;

				BgL_new3589z00_7944 =
					((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_conditionalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3589z00_7944),
					BGl_classzd2numzd2zz__objectz00(BGl_conditionalz00zzast_nodez00));
				{	/* Ast/node.scm 184 */
					BgL_objectz00_bglt BgL_auxz00_9449;

					BgL_auxz00_9449 = (BgL_objectz00_bglt) (BgL_new3589z00_7944);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9449, BFALSE);
				}
				return BgL_new3589z00_7944;
			}
		}
	}



/* _%allocate-conditional */
	obj_t BGl__z52allocatezd2conditionalz80zzast_nodez00(obj_t BgL_envz00_6863)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{	/* Ast/node.scm 184 */
				BgL_conditionalz00_bglt BgL_auxz00_9452;

				{	/* Ast/node.scm 184 */
					BgL_conditionalz00_bglt BgL_res5572z00_7948;

					{	/* Ast/node.scm 184 */
						BgL_conditionalz00_bglt BgL_new3589z00_7946;

						BgL_new3589z00_7946 =
							((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_conditionalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3589z00_7946),
							BGl_classzd2numzd2zz__objectz00(BGl_conditionalz00zzast_nodez00));
						{	/* Ast/node.scm 184 */
							BgL_objectz00_bglt BgL_auxz00_9457;

							BgL_auxz00_9457 = (BgL_objectz00_bglt) (BgL_new3589z00_7946);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9457, BFALSE);
						}
						BgL_res5572z00_7948 = BgL_new3589z00_7946;
					}
					BgL_auxz00_9452 = BgL_res5572z00_7948;
				}
				return (obj_t) (BgL_auxz00_9452);
			}
		}
	}



/* conditional-nil */
	BGL_EXPORTED_DEF BgL_conditionalz00_bglt
		BGl_conditionalzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			if ((BGl_z52thezd2conditionalzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 184 */
					{	/* Ast/node.scm 184 */
						BgL_conditionalz00_bglt BgL_res5309z00_3492;

						{	/* Ast/node.scm 184 */
							BgL_conditionalz00_bglt BgL_new3589z00_3488;

							BgL_new3589z00_3488 =
								((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_conditionalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3589z00_3488),
								BGl_classzd2numzd2zz__objectz00
								(BGl_conditionalz00zzast_nodez00));
							{	/* Ast/node.scm 184 */
								BgL_objectz00_bglt BgL_auxz00_9467;

								BgL_auxz00_9467 = (BgL_objectz00_bglt) (BgL_new3589z00_3488);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9467, BFALSE);
							}
							BgL_res5309z00_3492 = BgL_new3589z00_3488;
						}
						BGl_z52thezd2conditionalzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5309z00_3492);
					}
					{	/* Ast/node.scm 184 */
						BgL_typez00_bglt BgL_arg4588z00_1430;

						BgL_nodez00_bglt BgL_arg4589z00_1431;

						BgL_nodez00_bglt BgL_arg4590z00_1432;

						BgL_nodez00_bglt BgL_arg4591z00_1433;

						BgL_arg4588z00_1430 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4589z00_1431 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4590z00_1432 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4591z00_1433 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 184 */
							BgL_conditionalz00_bglt BgL_res5310z00_3508;

							{	/* Ast/node.scm 184 */
								BgL_conditionalz00_bglt BgL_new3580z00_3493;

								BgL_new3580z00_3493 =
									(BgL_conditionalz00_bglt)
									(BGl_z52thezd2conditionalzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 184 */
									obj_t BgL_loc3573z00_3501;

									BgL_typez00_bglt BgL_type3574z00_3502;

									obj_t BgL_sidezd2effectzf33575z21_3503;

									obj_t BgL_key3576z00_3504;

									BgL_nodez00_bglt BgL_test3577z00_3505;

									BgL_nodez00_bglt BgL_true3578z00_3506;

									BgL_nodez00_bglt BgL_false3579z00_3507;

									BgL_loc3573z00_3501 = BUNSPEC;
									BgL_type3574z00_3502 = BgL_arg4588z00_1430;
									BgL_sidezd2effectzf33575z21_3503 = BUNSPEC;
									BgL_key3576z00_3504 = BUNSPEC;
									BgL_test3577z00_3505 = BgL_arg4589z00_1431;
									BgL_true3578z00_3506 = BgL_arg4590z00_1432;
									BgL_false3579z00_3507 = BgL_arg4591z00_1433;
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_locz00) = ((obj_t) BgL_loc3573z00_3501), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3574z00_3502), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33575z21_3503), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_keyz00) = ((obj_t) BgL_key3576z00_3504), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_testz00) =
										((BgL_nodez00_bglt) BgL_test3577z00_3505), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_truez00) =
										((BgL_nodez00_bglt) BgL_true3578z00_3506), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new3580z00_3493))->
											BgL_falsez00) =
										((BgL_nodez00_bglt) BgL_false3579z00_3507), BUNSPEC);
									BgL_res5310z00_3508 = BgL_new3580z00_3493;
							}}
							(obj_t) (BgL_res5310z00_3508);
				}}}
			else
				{	/* Ast/node.scm 184 */
					BFALSE;
				}
			return
				(BgL_conditionalz00_bglt)
				(BGl_z52thezd2conditionalzd2nilz52zzast_nodez00);
		}
	}



/* _conditional-nil */
	obj_t BGl__conditionalzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6864)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			return (obj_t) (BGl_conditionalzd2nilzd2zzast_nodez00());
		}
	}



/* setq? */
	BGL_EXPORTED_DEF bool_t BGl_setqzf3zf3zzast_nodez00(obj_t BgL_obj3543z00_267)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3543z00_267,
				BGl_setqz00zzast_nodez00);
		}
	}



/* _setq? */
	obj_t BGl__setqzf3zf3zzast_nodez00(obj_t BgL_envz00_6861,
		obj_t BgL_obj3543z00_6862)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3543z00_6862,
					BGl_setqz00zzast_nodez00));
		}
	}



/* make-setq */
	BGL_EXPORTED_DEF BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t
		BgL_loc3508z00_271, BgL_typez00_bglt BgL_type3509z00_272,
		BgL_varz00_bglt BgL_var3510z00_273, BgL_nodez00_bglt BgL_value3511z00_274)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{	/* Ast/node.scm 177 */
				BgL_setqz00_bglt BgL_new3512z00_3509;

				{	/* Ast/node.scm 177 */
					BgL_setqz00_bglt BgL_res5311z00_3514;

					{	/* Ast/node.scm 177 */
						BgL_setqz00_bglt BgL_new3524z00_3510;

						BgL_new3524z00_3510 =
							((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3524z00_3510),
							BGl_classzd2numzd2zz__objectz00(BGl_setqz00zzast_nodez00));
						{	/* Ast/node.scm 177 */
							BgL_objectz00_bglt BgL_auxz00_9494;

							BgL_auxz00_9494 = (BgL_objectz00_bglt) (BgL_new3524z00_3510);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9494, BFALSE);
						}
						BgL_res5311z00_3514 = BgL_new3524z00_3510;
					}
					BgL_new3512z00_3509 = BgL_res5311z00_3514;
				}
				{	/* Ast/node.scm 177 */
					BgL_setqz00_bglt BgL_res5312z00_3524;

					{	/* Ast/node.scm 177 */
						BgL_setqz00_bglt BgL_new3518z00_3515;

						BgL_new3518z00_3515 = BgL_new3512z00_3509;
						{	/* Ast/node.scm 177 */
							obj_t BgL_loc3514z00_3520;

							BgL_typez00_bglt BgL_type3515z00_3521;

							BgL_varz00_bglt BgL_var3516z00_3522;

							BgL_nodez00_bglt BgL_value3517z00_3523;

							BgL_loc3514z00_3520 = BgL_loc3508z00_271;
							BgL_type3515z00_3521 = BgL_type3509z00_272;
							BgL_var3516z00_3522 = BgL_var3510z00_273;
							BgL_value3517z00_3523 = BgL_value3511z00_274;
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3515))->BgL_locz00) =
								((obj_t) BgL_loc3514z00_3520), BUNSPEC);
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3515))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3515z00_3521), BUNSPEC);
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3515))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_var3516z00_3522), BUNSPEC);
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3515))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value3517z00_3523), BUNSPEC);
							BgL_res5312z00_3524 = BgL_new3518z00_3515;
					}} BgL_res5312z00_3524;
				}
				return BgL_new3512z00_3509;
			}
		}
	}



/* _make-setq */
	obj_t BGl__makezd2setqzd2zzast_nodez00(obj_t BgL_envz00_7041,
		obj_t BgL_loc3508z00_7042, obj_t BgL_type3509z00_7043,
		obj_t BgL_var3510z00_7044, obj_t BgL_value3511z00_7045)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			return
				(obj_t) (BGl_makezd2setqzd2zzast_nodez00(BgL_loc3508z00_7042,
					(BgL_typez00_bglt) (BgL_type3509z00_7043),
					(BgL_varz00_bglt) (BgL_var3510z00_7044),
					(BgL_nodez00_bglt) (BgL_value3511z00_7045)));
		}
	}



/* fill-setq! */
	BGL_EXPORTED_DEF BgL_setqz00_bglt
		BGl_fillzd2setqz12zc0zzast_nodez00(BgL_setqz00_bglt BgL_new3518z00_275,
		obj_t BgL_loc3514z00_276, BgL_typez00_bglt BgL_type3515z00_277,
		BgL_varz00_bglt BgL_var3516z00_278, BgL_nodez00_bglt BgL_value3517z00_279)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{	/* Ast/node.scm 177 */
				obj_t BgL_loc3514z00_7950;

				BgL_typez00_bglt BgL_type3515z00_7951;

				BgL_varz00_bglt BgL_var3516z00_7952;

				BgL_nodez00_bglt BgL_value3517z00_7953;

				BgL_loc3514z00_7950 = BgL_loc3514z00_276;
				BgL_type3515z00_7951 = BgL_type3515z00_277;
				BgL_var3516z00_7952 = BgL_var3516z00_278;
				BgL_value3517z00_7953 = BgL_value3517z00_279;
				((((BgL_setqz00_bglt) CREF(BgL_new3518z00_275))->BgL_locz00) =
					((obj_t) BgL_loc3514z00_7950), BUNSPEC);
				((((BgL_setqz00_bglt) CREF(BgL_new3518z00_275))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3515z00_7951), BUNSPEC);
				((((BgL_setqz00_bglt) CREF(BgL_new3518z00_275))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_var3516z00_7952), BUNSPEC);
				((((BgL_setqz00_bglt) CREF(BgL_new3518z00_275))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_value3517z00_7953), BUNSPEC);
				return BgL_new3518z00_275;
			}
		}
	}



/* _fill-setq! */
	obj_t BGl__fillzd2setqz12zc0zzast_nodez00(obj_t BgL_envz00_7046,
		obj_t BgL_new3518z00_7047, obj_t BgL_loc3514z00_7048,
		obj_t BgL_type3515z00_7049, obj_t BgL_var3516z00_7050,
		obj_t BgL_value3517z00_7051)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{	/* Ast/node.scm 177 */
				BgL_setqz00_bglt BgL_auxz00_9510;

				{	/* Ast/node.scm 177 */
					BgL_setqz00_bglt BgL_res5573z00_7963;

					{	/* Ast/node.scm 177 */
						BgL_setqz00_bglt BgL_new3518z00_7954;

						BgL_typez00_bglt BgL_type3515z00_7956;

						BgL_varz00_bglt BgL_var3516z00_7957;

						BgL_nodez00_bglt BgL_value3517z00_7958;

						BgL_new3518z00_7954 = (BgL_setqz00_bglt) (BgL_new3518z00_7047);
						BgL_type3515z00_7956 = (BgL_typez00_bglt) (BgL_type3515z00_7049);
						BgL_var3516z00_7957 = (BgL_varz00_bglt) (BgL_var3516z00_7050);
						BgL_value3517z00_7958 = (BgL_nodez00_bglt) (BgL_value3517z00_7051);
						{	/* Ast/node.scm 177 */
							obj_t BgL_loc3514z00_7959;

							BgL_typez00_bglt BgL_type3515z00_7960;

							BgL_varz00_bglt BgL_var3516z00_7961;

							BgL_nodez00_bglt BgL_value3517z00_7962;

							BgL_loc3514z00_7959 = BgL_loc3514z00_7048;
							BgL_type3515z00_7960 = BgL_type3515z00_7956;
							BgL_var3516z00_7961 = BgL_var3516z00_7957;
							BgL_value3517z00_7962 = BgL_value3517z00_7958;
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_7954))->BgL_locz00) =
								((obj_t) BgL_loc3514z00_7959), BUNSPEC);
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_7954))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3515z00_7960), BUNSPEC);
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_7954))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_var3516z00_7961), BUNSPEC);
							((((BgL_setqz00_bglt) CREF(BgL_new3518z00_7954))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_value3517z00_7962), BUNSPEC);
							BgL_res5573z00_7963 = BgL_new3518z00_7954;
						}
					}
					BgL_auxz00_9510 = BgL_res5573z00_7963;
				}
				return (obj_t) (BgL_auxz00_9510);
			}
		}
	}



/* %allocate-setq */
	BGL_EXPORTED_DEF BgL_setqz00_bglt BGl_z52allocatezd2setqz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{	/* Ast/node.scm 177 */
				BgL_setqz00_bglt BgL_new3524z00_7964;

				BgL_new3524z00_7964 =
					((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_setqz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3524z00_7964),
					BGl_classzd2numzd2zz__objectz00(BGl_setqz00zzast_nodez00));
				{	/* Ast/node.scm 177 */
					BgL_objectz00_bglt BgL_auxz00_9524;

					BgL_auxz00_9524 = (BgL_objectz00_bglt) (BgL_new3524z00_7964);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9524, BFALSE);
				}
				return BgL_new3524z00_7964;
			}
		}
	}



/* _%allocate-setq */
	obj_t BGl__z52allocatezd2setqz80zzast_nodez00(obj_t BgL_envz00_6859)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{	/* Ast/node.scm 177 */
				BgL_setqz00_bglt BgL_auxz00_9527;

				{	/* Ast/node.scm 177 */
					BgL_setqz00_bglt BgL_res5574z00_7968;

					{	/* Ast/node.scm 177 */
						BgL_setqz00_bglt BgL_new3524z00_7966;

						BgL_new3524z00_7966 =
							((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3524z00_7966),
							BGl_classzd2numzd2zz__objectz00(BGl_setqz00zzast_nodez00));
						{	/* Ast/node.scm 177 */
							BgL_objectz00_bglt BgL_auxz00_9532;

							BgL_auxz00_9532 = (BgL_objectz00_bglt) (BgL_new3524z00_7966);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9532, BFALSE);
						}
						BgL_res5574z00_7968 = BgL_new3524z00_7966;
					}
					BgL_auxz00_9527 = BgL_res5574z00_7968;
				}
				return (obj_t) (BgL_auxz00_9527);
			}
		}
	}



/* setq-nil */
	BGL_EXPORTED_DEF BgL_setqz00_bglt BGl_setqzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			if ((BGl_z52thezd2setqzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 177 */
					{	/* Ast/node.scm 177 */
						BgL_setqz00_bglt BgL_res5313z00_3537;

						{	/* Ast/node.scm 177 */
							BgL_setqz00_bglt BgL_new3524z00_3533;

							BgL_new3524z00_3533 =
								((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setqz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3524z00_3533),
								BGl_classzd2numzd2zz__objectz00(BGl_setqz00zzast_nodez00));
							{	/* Ast/node.scm 177 */
								BgL_objectz00_bglt BgL_auxz00_9542;

								BgL_auxz00_9542 = (BgL_objectz00_bglt) (BgL_new3524z00_3533);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9542, BFALSE);
							}
							BgL_res5313z00_3537 = BgL_new3524z00_3533;
						}
						BGl_z52thezd2setqzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5313z00_3537);
					}
					{	/* Ast/node.scm 177 */
						BgL_typez00_bglt BgL_arg4594z00_1442;

						BgL_varz00_bglt BgL_arg4595z00_1443;

						BgL_nodez00_bglt BgL_arg4596z00_1444;

						BgL_arg4594z00_1442 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4595z00_1443 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4596z00_1444 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 177 */
							BgL_setqz00_bglt BgL_res5314z00_3547;

							{	/* Ast/node.scm 177 */
								BgL_setqz00_bglt BgL_new3518z00_3538;

								BgL_new3518z00_3538 =
									(BgL_setqz00_bglt) (BGl_z52thezd2setqzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 177 */
									obj_t BgL_loc3514z00_3543;

									BgL_typez00_bglt BgL_type3515z00_3544;

									BgL_varz00_bglt BgL_var3516z00_3545;

									BgL_nodez00_bglt BgL_value3517z00_3546;

									BgL_loc3514z00_3543 = BUNSPEC;
									BgL_type3515z00_3544 = BgL_arg4594z00_1442;
									BgL_var3516z00_3545 = BgL_arg4595z00_1443;
									BgL_value3517z00_3546 = BgL_arg4596z00_1444;
									((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3538))->
											BgL_locz00) = ((obj_t) BgL_loc3514z00_3543), BUNSPEC);
									((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3538))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3515z00_3544), BUNSPEC);
									((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3538))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3516z00_3545), BUNSPEC);
									((((BgL_setqz00_bglt) CREF(BgL_new3518z00_3538))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3517z00_3546), BUNSPEC);
									BgL_res5314z00_3547 = BgL_new3518z00_3538;
							}}
							(obj_t) (BgL_res5314z00_3547);
				}}}
			else
				{	/* Ast/node.scm 177 */
					BFALSE;
				}
			return (BgL_setqz00_bglt) (BGl_z52thezd2setqzd2nilz52zzast_nodez00);
		}
	}



/* _setq-nil */
	obj_t BGl__setqzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6860)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			return (obj_t) (BGl_setqzd2nilzd2zzast_nodez00());
		}
	}



/* cast? */
	BGL_EXPORTED_DEF bool_t BGl_castzf3zf3zzast_nodez00(obj_t BgL_obj3497z00_286)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3497z00_286,
				BGl_castz00zzast_nodez00);
		}
	}



/* _cast? */
	obj_t BGl__castzf3zf3zzast_nodez00(obj_t BgL_envz00_6857,
		obj_t BgL_obj3497z00_6858)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3497z00_6858,
					BGl_castz00zzast_nodez00));
		}
	}



/* make-cast */
	BGL_EXPORTED_DEF BgL_castz00_bglt BGl_makezd2castzd2zzast_nodez00(obj_t
		BgL_loc3469z00_290, BgL_typez00_bglt BgL_type3470z00_291,
		BgL_nodez00_bglt BgL_arg3471z00_292)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{	/* Ast/node.scm 172 */
				BgL_castz00_bglt BgL_new3472z00_3548;

				{	/* Ast/node.scm 172 */
					BgL_castz00_bglt BgL_res5315z00_3553;

					{	/* Ast/node.scm 172 */
						BgL_castz00_bglt BgL_new3482z00_3549;

						BgL_new3482z00_3549 =
							((BgL_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_castz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3482z00_3549),
							BGl_classzd2numzd2zz__objectz00(BGl_castz00zzast_nodez00));
						{	/* Ast/node.scm 172 */
							BgL_objectz00_bglt BgL_auxz00_9565;

							BgL_auxz00_9565 = (BgL_objectz00_bglt) (BgL_new3482z00_3549);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9565, BFALSE);
						}
						BgL_res5315z00_3553 = BgL_new3482z00_3549;
					}
					BgL_new3472z00_3548 = BgL_res5315z00_3553;
				}
				{	/* Ast/node.scm 172 */
					BgL_castz00_bglt BgL_res5316z00_3561;

					{	/* Ast/node.scm 172 */
						BgL_castz00_bglt BgL_new3477z00_3554;

						BgL_new3477z00_3554 = BgL_new3472z00_3548;
						{	/* Ast/node.scm 172 */
							obj_t BgL_loc3474z00_3558;

							BgL_typez00_bglt BgL_type3475z00_3559;

							BgL_nodez00_bglt BgL_arg3476z00_3560;

							BgL_loc3474z00_3558 = BgL_loc3469z00_290;
							BgL_type3475z00_3559 = BgL_type3470z00_291;
							BgL_arg3476z00_3560 = BgL_arg3471z00_292;
							((((BgL_castz00_bglt) CREF(BgL_new3477z00_3554))->BgL_locz00) =
								((obj_t) BgL_loc3474z00_3558), BUNSPEC);
							((((BgL_castz00_bglt) CREF(BgL_new3477z00_3554))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3475z00_3559), BUNSPEC);
							((((BgL_castz00_bglt) CREF(BgL_new3477z00_3554))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_arg3476z00_3560), BUNSPEC);
							BgL_res5316z00_3561 = BgL_new3477z00_3554;
					}} BgL_res5316z00_3561;
				}
				return BgL_new3472z00_3548;
			}
		}
	}



/* _make-cast */
	obj_t BGl__makezd2castzd2zzast_nodez00(obj_t BgL_envz00_7052,
		obj_t BgL_loc3469z00_7053, obj_t BgL_type3470z00_7054,
		obj_t BgL_arg3471z00_7055)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			return
				(obj_t) (BGl_makezd2castzd2zzast_nodez00(BgL_loc3469z00_7053,
					(BgL_typez00_bglt) (BgL_type3470z00_7054),
					(BgL_nodez00_bglt) (BgL_arg3471z00_7055)));
		}
	}



/* fill-cast! */
	BGL_EXPORTED_DEF BgL_castz00_bglt
		BGl_fillzd2castz12zc0zzast_nodez00(BgL_castz00_bglt BgL_new3477z00_293,
		obj_t BgL_loc3474z00_294, BgL_typez00_bglt BgL_type3475z00_295,
		BgL_nodez00_bglt BgL_arg3476z00_296)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{	/* Ast/node.scm 172 */
				obj_t BgL_loc3474z00_7970;

				BgL_typez00_bglt BgL_type3475z00_7971;

				BgL_nodez00_bglt BgL_arg3476z00_7972;

				BgL_loc3474z00_7970 = BgL_loc3474z00_294;
				BgL_type3475z00_7971 = BgL_type3475z00_295;
				BgL_arg3476z00_7972 = BgL_arg3476z00_296;
				((((BgL_castz00_bglt) CREF(BgL_new3477z00_293))->BgL_locz00) =
					((obj_t) BgL_loc3474z00_7970), BUNSPEC);
				((((BgL_castz00_bglt) CREF(BgL_new3477z00_293))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3475z00_7971), BUNSPEC);
				((((BgL_castz00_bglt) CREF(BgL_new3477z00_293))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_arg3476z00_7972), BUNSPEC);
				return BgL_new3477z00_293;
			}
		}
	}



/* _fill-cast! */
	obj_t BGl__fillzd2castz12zc0zzast_nodez00(obj_t BgL_envz00_7056,
		obj_t BgL_new3477z00_7057, obj_t BgL_loc3474z00_7058,
		obj_t BgL_type3475z00_7059, obj_t BgL_arg3476z00_7060)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{	/* Ast/node.scm 172 */
				BgL_castz00_bglt BgL_auxz00_9578;

				{	/* Ast/node.scm 172 */
					BgL_castz00_bglt BgL_res5575z00_7980;

					{	/* Ast/node.scm 172 */
						BgL_castz00_bglt BgL_new3477z00_7973;

						BgL_typez00_bglt BgL_type3475z00_7975;

						BgL_nodez00_bglt BgL_arg3476z00_7976;

						BgL_new3477z00_7973 = (BgL_castz00_bglt) (BgL_new3477z00_7057);
						BgL_type3475z00_7975 = (BgL_typez00_bglt) (BgL_type3475z00_7059);
						BgL_arg3476z00_7976 = (BgL_nodez00_bglt) (BgL_arg3476z00_7060);
						{	/* Ast/node.scm 172 */
							obj_t BgL_loc3474z00_7977;

							BgL_typez00_bglt BgL_type3475z00_7978;

							BgL_nodez00_bglt BgL_arg3476z00_7979;

							BgL_loc3474z00_7977 = BgL_loc3474z00_7058;
							BgL_type3475z00_7978 = BgL_type3475z00_7975;
							BgL_arg3476z00_7979 = BgL_arg3476z00_7976;
							((((BgL_castz00_bglt) CREF(BgL_new3477z00_7973))->BgL_locz00) =
								((obj_t) BgL_loc3474z00_7977), BUNSPEC);
							((((BgL_castz00_bglt) CREF(BgL_new3477z00_7973))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3475z00_7978), BUNSPEC);
							((((BgL_castz00_bglt) CREF(BgL_new3477z00_7973))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_arg3476z00_7979), BUNSPEC);
							BgL_res5575z00_7980 = BgL_new3477z00_7973;
						}
					}
					BgL_auxz00_9578 = BgL_res5575z00_7980;
				}
				return (obj_t) (BgL_auxz00_9578);
			}
		}
	}



/* %allocate-cast */
	BGL_EXPORTED_DEF BgL_castz00_bglt BGl_z52allocatezd2castz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{	/* Ast/node.scm 172 */
				BgL_castz00_bglt BgL_new3482z00_7981;

				BgL_new3482z00_7981 =
					((BgL_castz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_castz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3482z00_7981),
					BGl_classzd2numzd2zz__objectz00(BGl_castz00zzast_nodez00));
				{	/* Ast/node.scm 172 */
					BgL_objectz00_bglt BgL_auxz00_9590;

					BgL_auxz00_9590 = (BgL_objectz00_bglt) (BgL_new3482z00_7981);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9590, BFALSE);
				}
				return BgL_new3482z00_7981;
			}
		}
	}



/* _%allocate-cast */
	obj_t BGl__z52allocatezd2castz80zzast_nodez00(obj_t BgL_envz00_6855)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{	/* Ast/node.scm 172 */
				BgL_castz00_bglt BgL_auxz00_9593;

				{	/* Ast/node.scm 172 */
					BgL_castz00_bglt BgL_res5576z00_7985;

					{	/* Ast/node.scm 172 */
						BgL_castz00_bglt BgL_new3482z00_7983;

						BgL_new3482z00_7983 =
							((BgL_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_castz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3482z00_7983),
							BGl_classzd2numzd2zz__objectz00(BGl_castz00zzast_nodez00));
						{	/* Ast/node.scm 172 */
							BgL_objectz00_bglt BgL_auxz00_9598;

							BgL_auxz00_9598 = (BgL_objectz00_bglt) (BgL_new3482z00_7983);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9598, BFALSE);
						}
						BgL_res5576z00_7985 = BgL_new3482z00_7983;
					}
					BgL_auxz00_9593 = BgL_res5576z00_7985;
				}
				return (obj_t) (BgL_auxz00_9593);
			}
		}
	}



/* cast-nil */
	BGL_EXPORTED_DEF BgL_castz00_bglt BGl_castzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			if ((BGl_z52thezd2castzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 172 */
					{	/* Ast/node.scm 172 */
						BgL_castz00_bglt BgL_res5317z00_3573;

						{	/* Ast/node.scm 172 */
							BgL_castz00_bglt BgL_new3482z00_3569;

							BgL_new3482z00_3569 =
								((BgL_castz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_castz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3482z00_3569),
								BGl_classzd2numzd2zz__objectz00(BGl_castz00zzast_nodez00));
							{	/* Ast/node.scm 172 */
								BgL_objectz00_bglt BgL_auxz00_9608;

								BgL_auxz00_9608 = (BgL_objectz00_bglt) (BgL_new3482z00_3569);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9608, BFALSE);
							}
							BgL_res5317z00_3573 = BgL_new3482z00_3569;
						}
						BGl_z52thezd2castzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5317z00_3573);
					}
					{	/* Ast/node.scm 172 */
						BgL_typez00_bglt BgL_arg4600z00_1452;

						BgL_nodez00_bglt BgL_arg4601z00_1453;

						BgL_arg4600z00_1452 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4601z00_1453 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 172 */
							BgL_castz00_bglt BgL_res5318z00_3581;

							{	/* Ast/node.scm 172 */
								BgL_castz00_bglt BgL_new3477z00_3574;

								BgL_new3477z00_3574 =
									(BgL_castz00_bglt) (BGl_z52thezd2castzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 172 */
									obj_t BgL_loc3474z00_3578;

									BgL_typez00_bglt BgL_type3475z00_3579;

									BgL_nodez00_bglt BgL_arg3476z00_3580;

									BgL_loc3474z00_3578 = BUNSPEC;
									BgL_type3475z00_3579 = BgL_arg4600z00_1452;
									BgL_arg3476z00_3580 = BgL_arg4601z00_1453;
									((((BgL_castz00_bglt) CREF(BgL_new3477z00_3574))->
											BgL_locz00) = ((obj_t) BgL_loc3474z00_3578), BUNSPEC);
									((((BgL_castz00_bglt) CREF(BgL_new3477z00_3574))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3475z00_3579), BUNSPEC);
									((((BgL_castz00_bglt) CREF(BgL_new3477z00_3574))->
											BgL_argz00) =
										((BgL_nodez00_bglt) BgL_arg3476z00_3580), BUNSPEC);
									BgL_res5318z00_3581 = BgL_new3477z00_3574;
							}}
							(obj_t) (BgL_res5318z00_3581);
				}}}
			else
				{	/* Ast/node.scm 172 */
					BFALSE;
				}
			return (BgL_castz00_bglt) (BGl_z52thezd2castzd2nilz52zzast_nodez00);
		}
	}



/* _cast-nil */
	obj_t BGl__castzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6856)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			return (obj_t) (BGl_castzd2nilzd2zzast_nodez00());
		}
	}



/* cast-null? */
	BGL_EXPORTED_DEF bool_t BGl_castzd2nullzf3z21zzast_nodez00(obj_t
		BgL_obj3461z00_300)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_300,
				BGl_castzd2nullzd2zzast_nodez00);
		}
	}



/* _cast-null? */
	obj_t BGl__castzd2nullzf3z21zzast_nodez00(obj_t BgL_envz00_6853,
		obj_t BgL_obj3461z00_6854)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3461z00_6854,
					BGl_castzd2nullzd2zzast_nodez00));
		}
	}



/* make-cast-null */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_makezd2castzd2nullz00zzast_nodez00(obj_t BgL_loc3412z00_304,
		BgL_typez00_bglt BgL_type3413z00_305, obj_t BgL_sidezd2effectzf33414z21_306,
		obj_t BgL_key3415z00_307, obj_t BgL_exprza23416za2_308,
		obj_t BgL_effect3417z00_309)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{	/* Ast/node.scm 169 */
				BgL_castzd2nullzd2_bglt BgL_new3418z00_3582;

				{	/* Ast/node.scm 169 */
					BgL_castzd2nullzd2_bglt BgL_res5319z00_3587;

					{	/* Ast/node.scm 169 */
						BgL_castzd2nullzd2_bglt BgL_new3434z00_3583;

						BgL_new3434z00_3583 =
							((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_castzd2nullzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3434z00_3583),
							BGl_classzd2numzd2zz__objectz00(BGl_castzd2nullzd2zzast_nodez00));
						{	/* Ast/node.scm 169 */
							BgL_objectz00_bglt BgL_auxz00_9629;

							BgL_auxz00_9629 = (BgL_objectz00_bglt) (BgL_new3434z00_3583);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9629, BFALSE);
						}
						BgL_res5319z00_3587 = BgL_new3434z00_3583;
					}
					BgL_new3418z00_3582 = BgL_res5319z00_3587;
				}
				{	/* Ast/node.scm 169 */
					BgL_castzd2nullzd2_bglt BgL_res5320z00_3601;

					{	/* Ast/node.scm 169 */
						BgL_castzd2nullzd2_bglt BgL_new3426z00_3588;

						BgL_new3426z00_3588 = BgL_new3418z00_3582;
						{	/* Ast/node.scm 169 */
							obj_t BgL_loc3420z00_3595;

							BgL_typez00_bglt BgL_type3421z00_3596;

							obj_t BgL_sidezd2effectzf33422z21_3597;

							obj_t BgL_key3423z00_3598;

							obj_t BgL_exprza23424za2_3599;

							obj_t BgL_effect3425z00_3600;

							BgL_loc3420z00_3595 = BgL_loc3412z00_304;
							BgL_type3421z00_3596 = BgL_type3413z00_305;
							BgL_sidezd2effectzf33422z21_3597 =
								BgL_sidezd2effectzf33414z21_306;
							BgL_key3423z00_3598 = BgL_key3415z00_307;
							BgL_exprza23424za2_3599 = BgL_exprza23416za2_308;
							BgL_effect3425z00_3600 = BgL_effect3417z00_309;
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3588))->
									BgL_locz00) = ((obj_t) BgL_loc3420z00_3595), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3588))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3421z00_3596), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3588))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33422z21_3597), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3588))->
									BgL_keyz00) = ((obj_t) BgL_key3423z00_3598), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3588))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23424za2_3599), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3588))->
									BgL_effectz00) = ((obj_t) BgL_effect3425z00_3600), BUNSPEC);
							BgL_res5320z00_3601 = BgL_new3426z00_3588;
					}} BgL_res5320z00_3601;
				}
				return BgL_new3418z00_3582;
			}
		}
	}



/* _make-cast-null */
	obj_t BGl__makezd2castzd2nullz00zzast_nodez00(obj_t BgL_envz00_7061,
		obj_t BgL_loc3412z00_7062, obj_t BgL_type3413z00_7063,
		obj_t BgL_sidezd2effectzf33414z21_7064, obj_t BgL_key3415z00_7065,
		obj_t BgL_exprza23416za2_7066, obj_t BgL_effect3417z00_7067)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			return
				(obj_t) (BGl_makezd2castzd2nullz00zzast_nodez00(BgL_loc3412z00_7062,
					(BgL_typez00_bglt) (BgL_type3413z00_7063),
					BgL_sidezd2effectzf33414z21_7064, BgL_key3415z00_7065,
					BgL_exprza23416za2_7066, BgL_effect3417z00_7067));
		}
	}



/* fill-cast-null! */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_fillzd2castzd2nullz12z12zzast_nodez00(BgL_castzd2nullzd2_bglt
		BgL_new3426z00_310, obj_t BgL_loc3420z00_311,
		BgL_typez00_bglt BgL_type3421z00_312, obj_t BgL_sidezd2effectzf33422z21_313,
		obj_t BgL_key3423z00_314, obj_t BgL_exprza23424za2_315,
		obj_t BgL_effect3425z00_316)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{	/* Ast/node.scm 169 */
				obj_t BgL_loc3420z00_7987;

				BgL_typez00_bglt BgL_type3421z00_7988;

				obj_t BgL_sidezd2effectzf33422z21_7989;

				obj_t BgL_key3423z00_7990;

				obj_t BgL_exprza23424za2_7991;

				obj_t BgL_effect3425z00_7992;

				BgL_loc3420z00_7987 = BgL_loc3420z00_311;
				BgL_type3421z00_7988 = BgL_type3421z00_312;
				BgL_sidezd2effectzf33422z21_7989 = BgL_sidezd2effectzf33422z21_313;
				BgL_key3423z00_7990 = BgL_key3423z00_314;
				BgL_exprza23424za2_7991 = BgL_exprza23424za2_315;
				BgL_effect3425z00_7992 = BgL_effect3425z00_316;
				((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_310))->BgL_locz00) =
					((obj_t) BgL_loc3420z00_7987), BUNSPEC);
				((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_310))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3421z00_7988), BUNSPEC);
				((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_310))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33422z21_7989), BUNSPEC);
				((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_310))->BgL_keyz00) =
					((obj_t) BgL_key3423z00_7990), BUNSPEC);
				((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_310))->
						BgL_exprza2za2) = ((obj_t) BgL_exprza23424za2_7991), BUNSPEC);
				((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_310))->BgL_effectz00) =
					((obj_t) BgL_effect3425z00_7992), BUNSPEC);
				return BgL_new3426z00_310;
			}
		}
	}



/* _fill-cast-null! */
	obj_t BGl__fillzd2castzd2nullz12z12zzast_nodez00(obj_t BgL_envz00_7068,
		obj_t BgL_new3426z00_7069, obj_t BgL_loc3420z00_7070,
		obj_t BgL_type3421z00_7071, obj_t BgL_sidezd2effectzf33422z21_7072,
		obj_t BgL_key3423z00_7073, obj_t BgL_exprza23424za2_7074,
		obj_t BgL_effect3425z00_7075)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{	/* Ast/node.scm 169 */
				BgL_castzd2nullzd2_bglt BgL_auxz00_9647;

				{	/* Ast/node.scm 169 */
					BgL_castzd2nullzd2_bglt BgL_res5577z00_8006;

					{	/* Ast/node.scm 169 */
						BgL_castzd2nullzd2_bglt BgL_new3426z00_7993;

						BgL_typez00_bglt BgL_type3421z00_7995;

						obj_t BgL_exprza23424za2_7998;

						BgL_new3426z00_7993 =
							(BgL_castzd2nullzd2_bglt) (BgL_new3426z00_7069);
						BgL_type3421z00_7995 = (BgL_typez00_bglt) (BgL_type3421z00_7071);
						BgL_exprza23424za2_7998 = BgL_exprza23424za2_7074;
						{	/* Ast/node.scm 169 */
							obj_t BgL_loc3420z00_8000;

							BgL_typez00_bglt BgL_type3421z00_8001;

							obj_t BgL_sidezd2effectzf33422z21_8002;

							obj_t BgL_key3423z00_8003;

							obj_t BgL_exprza23424za2_8004;

							obj_t BgL_effect3425z00_8005;

							BgL_loc3420z00_8000 = BgL_loc3420z00_7070;
							BgL_type3421z00_8001 = BgL_type3421z00_7995;
							BgL_sidezd2effectzf33422z21_8002 =
								BgL_sidezd2effectzf33422z21_7072;
							BgL_key3423z00_8003 = BgL_key3423z00_7073;
							BgL_exprza23424za2_8004 = BgL_exprza23424za2_7998;
							BgL_effect3425z00_8005 = BgL_effect3425z00_7075;
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_7993))->
									BgL_locz00) = ((obj_t) BgL_loc3420z00_8000), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_7993))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3421z00_8001), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_7993))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33422z21_8002), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_7993))->
									BgL_keyz00) = ((obj_t) BgL_key3423z00_8003), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_7993))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23424za2_8004), BUNSPEC);
							((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_7993))->
									BgL_effectz00) = ((obj_t) BgL_effect3425z00_8005), BUNSPEC);
							BgL_res5577z00_8006 = BgL_new3426z00_7993;
						}
					}
					BgL_auxz00_9647 = BgL_res5577z00_8006;
				}
				return (obj_t) (BgL_auxz00_9647);
			}
		}
	}



/* %allocate-cast-null */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_z52allocatezd2castzd2nullz52zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{	/* Ast/node.scm 169 */
				BgL_castzd2nullzd2_bglt BgL_new3434z00_8007;

				BgL_new3434z00_8007 =
					((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_castzd2nullzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3434z00_8007),
					BGl_classzd2numzd2zz__objectz00(BGl_castzd2nullzd2zzast_nodez00));
				{	/* Ast/node.scm 169 */
					BgL_objectz00_bglt BgL_auxz00_9661;

					BgL_auxz00_9661 = (BgL_objectz00_bglt) (BgL_new3434z00_8007);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9661, BFALSE);
				}
				return BgL_new3434z00_8007;
			}
		}
	}



/* _%allocate-cast-null */
	obj_t BGl__z52allocatezd2castzd2nullz52zzast_nodez00(obj_t BgL_envz00_6851)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{	/* Ast/node.scm 169 */
				BgL_castzd2nullzd2_bglt BgL_auxz00_9664;

				{	/* Ast/node.scm 169 */
					BgL_castzd2nullzd2_bglt BgL_res5578z00_8011;

					{	/* Ast/node.scm 169 */
						BgL_castzd2nullzd2_bglt BgL_new3434z00_8009;

						BgL_new3434z00_8009 =
							((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_castzd2nullzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3434z00_8009),
							BGl_classzd2numzd2zz__objectz00(BGl_castzd2nullzd2zzast_nodez00));
						{	/* Ast/node.scm 169 */
							BgL_objectz00_bglt BgL_auxz00_9669;

							BgL_auxz00_9669 = (BgL_objectz00_bglt) (BgL_new3434z00_8009);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9669, BFALSE);
						}
						BgL_res5578z00_8011 = BgL_new3434z00_8009;
					}
					BgL_auxz00_9664 = BgL_res5578z00_8011;
				}
				return (obj_t) (BgL_auxz00_9664);
			}
		}
	}



/* cast-null-nil */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_castzd2nullzd2nilz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			if ((BGl_z52thezd2castzd2nullzd2nilz80zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 169 */
					{	/* Ast/node.scm 169 */
						BgL_castzd2nullzd2_bglt BgL_res5321z00_3616;

						{	/* Ast/node.scm 169 */
							BgL_castzd2nullzd2_bglt BgL_new3434z00_3612;

							BgL_new3434z00_3612 =
								((BgL_castzd2nullzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_castzd2nullzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3434z00_3612),
								BGl_classzd2numzd2zz__objectz00
								(BGl_castzd2nullzd2zzast_nodez00));
							{	/* Ast/node.scm 169 */
								BgL_objectz00_bglt BgL_auxz00_9679;

								BgL_auxz00_9679 = (BgL_objectz00_bglt) (BgL_new3434z00_3612);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9679, BFALSE);
							}
							BgL_res5321z00_3616 = BgL_new3434z00_3612;
						}
						BGl_z52thezd2castzd2nullzd2nilz80zzast_nodez00 =
							(obj_t) (BgL_res5321z00_3616);
					}
					{	/* Ast/node.scm 169 */
						BgL_typez00_bglt BgL_arg4604z00_1464;

						BgL_arg4604z00_1464 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 169 */
							BgL_castzd2nullzd2_bglt BgL_res5322z00_3630;

							{	/* Ast/node.scm 169 */
								BgL_castzd2nullzd2_bglt BgL_new3426z00_3617;

								BgL_new3426z00_3617 =
									(BgL_castzd2nullzd2_bglt)
									(BGl_z52thezd2castzd2nullzd2nilz80zzast_nodez00);
								{	/* Ast/node.scm 169 */
									obj_t BgL_loc3420z00_3624;

									BgL_typez00_bglt BgL_type3421z00_3625;

									obj_t BgL_sidezd2effectzf33422z21_3626;

									obj_t BgL_key3423z00_3627;

									obj_t BgL_exprza23424za2_3628;

									obj_t BgL_effect3425z00_3629;

									BgL_loc3420z00_3624 = BUNSPEC;
									BgL_type3421z00_3625 = BgL_arg4604z00_1464;
									BgL_sidezd2effectzf33422z21_3626 = BUNSPEC;
									BgL_key3423z00_3627 = BUNSPEC;
									BgL_exprza23424za2_3628 = BNIL;
									BgL_effect3425z00_3629 = BUNSPEC;
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3617))->
											BgL_locz00) = ((obj_t) BgL_loc3420z00_3624), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3617))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3421z00_3625), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3617))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33422z21_3626), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3617))->
											BgL_keyz00) = ((obj_t) BgL_key3423z00_3627), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3617))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza23424za2_3628), BUNSPEC);
									((((BgL_castzd2nullzd2_bglt) CREF(BgL_new3426z00_3617))->
											BgL_effectz00) =
										((obj_t) BgL_effect3425z00_3629), BUNSPEC);
									BgL_res5322z00_3630 = BgL_new3426z00_3617;
							}}
							(obj_t) (BgL_res5322z00_3630);
				}}}
			else
				{	/* Ast/node.scm 169 */
					BFALSE;
				}
			return
				(BgL_castzd2nullzd2_bglt)
				(BGl_z52thezd2castzd2nullzd2nilz80zzast_nodez00);
		}
	}



/* _cast-null-nil */
	obj_t BGl__castzd2nullzd2nilz00zzast_nodez00(obj_t BgL_envz00_6852)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			return (obj_t) (BGl_castzd2nullzd2nilz00zzast_nodez00());
		}
	}



/* isa? */
	BGL_EXPORTED_DEF bool_t BGl_isazf3zf3zzast_nodez00(obj_t BgL_obj3394z00_317)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3394z00_317,
				BGl_isaz00zzast_nodez00);
		}
	}



/* _isa? */
	obj_t BGl__isazf3zf3zzast_nodez00(obj_t BgL_envz00_6849,
		obj_t BgL_obj3394z00_6850)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3394z00_6850,
					BGl_isaz00zzast_nodez00));
		}
	}



/* make-isa */
	BGL_EXPORTED_DEF BgL_isaz00_bglt BGl_makezd2isazd2zzast_nodez00(obj_t
		BgL_loc3337z00_321, BgL_typez00_bglt BgL_type3338z00_322,
		obj_t BgL_sidezd2effectzf33339z21_323, obj_t BgL_key3340z00_324,
		obj_t BgL_exprza23341za2_325, obj_t BgL_effect3342z00_326,
		BgL_typez00_bglt BgL_class3343z00_327)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{	/* Ast/node.scm 165 */
				BgL_isaz00_bglt BgL_new3344z00_3631;

				{	/* Ast/node.scm 165 */
					BgL_isaz00_bglt BgL_res5323z00_3636;

					{	/* Ast/node.scm 165 */
						BgL_isaz00_bglt BgL_new3362z00_3632;

						BgL_new3362z00_3632 =
							((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_isaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3362z00_3632),
							BGl_classzd2numzd2zz__objectz00(BGl_isaz00zzast_nodez00));
						{	/* Ast/node.scm 165 */
							BgL_objectz00_bglt BgL_auxz00_9702;

							BgL_auxz00_9702 = (BgL_objectz00_bglt) (BgL_new3362z00_3632);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9702, BFALSE);
						}
						BgL_res5323z00_3636 = BgL_new3362z00_3632;
					}
					BgL_new3344z00_3631 = BgL_res5323z00_3636;
				}
				{	/* Ast/node.scm 165 */
					BgL_isaz00_bglt BgL_res5324z00_3652;

					{	/* Ast/node.scm 165 */
						BgL_isaz00_bglt BgL_new3353z00_3637;

						BgL_new3353z00_3637 = BgL_new3344z00_3631;
						{	/* Ast/node.scm 165 */
							obj_t BgL_loc3346z00_3645;

							BgL_typez00_bglt BgL_type3347z00_3646;

							obj_t BgL_sidezd2effectzf33348z21_3647;

							obj_t BgL_key3349z00_3648;

							obj_t BgL_exprza23350za2_3649;

							obj_t BgL_effect3351z00_3650;

							BgL_typez00_bglt BgL_class3352z00_3651;

							BgL_loc3346z00_3645 = BgL_loc3337z00_321;
							BgL_type3347z00_3646 = BgL_type3338z00_322;
							BgL_sidezd2effectzf33348z21_3647 =
								BgL_sidezd2effectzf33339z21_323;
							BgL_key3349z00_3648 = BgL_key3340z00_324;
							BgL_exprza23350za2_3649 = BgL_exprza23341za2_325;
							BgL_effect3351z00_3650 = BgL_effect3342z00_326;
							BgL_class3352z00_3651 = BgL_class3343z00_327;
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->BgL_locz00) =
								((obj_t) BgL_loc3346z00_3645), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3347z00_3646), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33348z21_3647), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->BgL_keyz00) =
								((obj_t) BgL_key3349z00_3648), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->BgL_exprza2za2) =
								((obj_t) BgL_exprza23350za2_3649), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->BgL_effectz00) =
								((obj_t) BgL_effect3351z00_3650), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3637))->BgL_classz00) =
								((BgL_typez00_bglt) BgL_class3352z00_3651), BUNSPEC);
							BgL_res5324z00_3652 = BgL_new3353z00_3637;
					}} BgL_res5324z00_3652;
				}
				return BgL_new3344z00_3631;
			}
		}
	}



/* _make-isa */
	obj_t BGl__makezd2isazd2zzast_nodez00(obj_t BgL_envz00_7076,
		obj_t BgL_loc3337z00_7077, obj_t BgL_type3338z00_7078,
		obj_t BgL_sidezd2effectzf33339z21_7079, obj_t BgL_key3340z00_7080,
		obj_t BgL_exprza23341za2_7081, obj_t BgL_effect3342z00_7082,
		obj_t BgL_class3343z00_7083)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			return
				(obj_t) (BGl_makezd2isazd2zzast_nodez00(BgL_loc3337z00_7077,
					(BgL_typez00_bglt) (BgL_type3338z00_7078),
					BgL_sidezd2effectzf33339z21_7079, BgL_key3340z00_7080,
					BgL_exprza23341za2_7081, BgL_effect3342z00_7082,
					(BgL_typez00_bglt) (BgL_class3343z00_7083)));
		}
	}



/* fill-isa! */
	BGL_EXPORTED_DEF BgL_isaz00_bglt
		BGl_fillzd2isaz12zc0zzast_nodez00(BgL_isaz00_bglt BgL_new3353z00_328,
		obj_t BgL_loc3346z00_329, BgL_typez00_bglt BgL_type3347z00_330,
		obj_t BgL_sidezd2effectzf33348z21_331, obj_t BgL_key3349z00_332,
		obj_t BgL_exprza23350za2_333, obj_t BgL_effect3351z00_334,
		BgL_typez00_bglt BgL_class3352z00_335)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{	/* Ast/node.scm 165 */
				obj_t BgL_loc3346z00_8013;

				BgL_typez00_bglt BgL_type3347z00_8014;

				obj_t BgL_sidezd2effectzf33348z21_8015;

				obj_t BgL_key3349z00_8016;

				obj_t BgL_exprza23350za2_8017;

				obj_t BgL_effect3351z00_8018;

				BgL_typez00_bglt BgL_class3352z00_8019;

				BgL_loc3346z00_8013 = BgL_loc3346z00_329;
				BgL_type3347z00_8014 = BgL_type3347z00_330;
				BgL_sidezd2effectzf33348z21_8015 = BgL_sidezd2effectzf33348z21_331;
				BgL_key3349z00_8016 = BgL_key3349z00_332;
				BgL_exprza23350za2_8017 = BgL_exprza23350za2_333;
				BgL_effect3351z00_8018 = BgL_effect3351z00_334;
				BgL_class3352z00_8019 = BgL_class3352z00_335;
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->BgL_locz00) =
					((obj_t) BgL_loc3346z00_8013), BUNSPEC);
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3347z00_8014), BUNSPEC);
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33348z21_8015), BUNSPEC);
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->BgL_keyz00) =
					((obj_t) BgL_key3349z00_8016), BUNSPEC);
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->BgL_exprza2za2) =
					((obj_t) BgL_exprza23350za2_8017), BUNSPEC);
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->BgL_effectz00) =
					((obj_t) BgL_effect3351z00_8018), BUNSPEC);
				((((BgL_isaz00_bglt) CREF(BgL_new3353z00_328))->BgL_classz00) =
					((BgL_typez00_bglt) BgL_class3352z00_8019), BUNSPEC);
				return BgL_new3353z00_328;
			}
		}
	}



/* _fill-isa! */
	obj_t BGl__fillzd2isaz12zc0zzast_nodez00(obj_t BgL_envz00_7084,
		obj_t BgL_new3353z00_7085, obj_t BgL_loc3346z00_7086,
		obj_t BgL_type3347z00_7087, obj_t BgL_sidezd2effectzf33348z21_7088,
		obj_t BgL_key3349z00_7089, obj_t BgL_exprza23350za2_7090,
		obj_t BgL_effect3351z00_7091, obj_t BgL_class3352z00_7092)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{	/* Ast/node.scm 165 */
				BgL_isaz00_bglt BgL_auxz00_9723;

				{	/* Ast/node.scm 165 */
					BgL_isaz00_bglt BgL_res5579z00_8035;

					{	/* Ast/node.scm 165 */
						BgL_isaz00_bglt BgL_new3353z00_8020;

						BgL_typez00_bglt BgL_type3347z00_8022;

						obj_t BgL_exprza23350za2_8025;

						BgL_typez00_bglt BgL_class3352z00_8027;

						BgL_new3353z00_8020 = (BgL_isaz00_bglt) (BgL_new3353z00_7085);
						BgL_type3347z00_8022 = (BgL_typez00_bglt) (BgL_type3347z00_7087);
						BgL_exprza23350za2_8025 = BgL_exprza23350za2_7090;
						BgL_class3352z00_8027 = (BgL_typez00_bglt) (BgL_class3352z00_7092);
						{	/* Ast/node.scm 165 */
							obj_t BgL_loc3346z00_8028;

							BgL_typez00_bglt BgL_type3347z00_8029;

							obj_t BgL_sidezd2effectzf33348z21_8030;

							obj_t BgL_key3349z00_8031;

							obj_t BgL_exprza23350za2_8032;

							obj_t BgL_effect3351z00_8033;

							BgL_typez00_bglt BgL_class3352z00_8034;

							BgL_loc3346z00_8028 = BgL_loc3346z00_7086;
							BgL_type3347z00_8029 = BgL_type3347z00_8022;
							BgL_sidezd2effectzf33348z21_8030 =
								BgL_sidezd2effectzf33348z21_7088;
							BgL_key3349z00_8031 = BgL_key3349z00_7089;
							BgL_exprza23350za2_8032 = BgL_exprza23350za2_8025;
							BgL_effect3351z00_8033 = BgL_effect3351z00_7091;
							BgL_class3352z00_8034 = BgL_class3352z00_8027;
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->BgL_locz00) =
								((obj_t) BgL_loc3346z00_8028), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3347z00_8029), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33348z21_8030), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->BgL_keyz00) =
								((obj_t) BgL_key3349z00_8031), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->BgL_exprza2za2) =
								((obj_t) BgL_exprza23350za2_8032), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->BgL_effectz00) =
								((obj_t) BgL_effect3351z00_8033), BUNSPEC);
							((((BgL_isaz00_bglt) CREF(BgL_new3353z00_8020))->BgL_classz00) =
								((BgL_typez00_bglt) BgL_class3352z00_8034), BUNSPEC);
							BgL_res5579z00_8035 = BgL_new3353z00_8020;
						}
					}
					BgL_auxz00_9723 = BgL_res5579z00_8035;
				}
				return (obj_t) (BgL_auxz00_9723);
			}
		}
	}



/* %allocate-isa */
	BGL_EXPORTED_DEF BgL_isaz00_bglt BGl_z52allocatezd2isaz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{	/* Ast/node.scm 165 */
				BgL_isaz00_bglt BgL_new3362z00_8036;

				BgL_new3362z00_8036 =
					((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_isaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3362z00_8036),
					BGl_classzd2numzd2zz__objectz00(BGl_isaz00zzast_nodez00));
				{	/* Ast/node.scm 165 */
					BgL_objectz00_bglt BgL_auxz00_9739;

					BgL_auxz00_9739 = (BgL_objectz00_bglt) (BgL_new3362z00_8036);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9739, BFALSE);
				}
				return BgL_new3362z00_8036;
			}
		}
	}



/* _%allocate-isa */
	obj_t BGl__z52allocatezd2isaz80zzast_nodez00(obj_t BgL_envz00_6847)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{	/* Ast/node.scm 165 */
				BgL_isaz00_bglt BgL_auxz00_9742;

				{	/* Ast/node.scm 165 */
					BgL_isaz00_bglt BgL_res5580z00_8040;

					{	/* Ast/node.scm 165 */
						BgL_isaz00_bglt BgL_new3362z00_8038;

						BgL_new3362z00_8038 =
							((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_isaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3362z00_8038),
							BGl_classzd2numzd2zz__objectz00(BGl_isaz00zzast_nodez00));
						{	/* Ast/node.scm 165 */
							BgL_objectz00_bglt BgL_auxz00_9747;

							BgL_auxz00_9747 = (BgL_objectz00_bglt) (BgL_new3362z00_8038);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9747, BFALSE);
						}
						BgL_res5580z00_8040 = BgL_new3362z00_8038;
					}
					BgL_auxz00_9742 = BgL_res5580z00_8040;
				}
				return (obj_t) (BgL_auxz00_9742);
			}
		}
	}



/* isa-nil */
	BGL_EXPORTED_DEF BgL_isaz00_bglt BGl_isazd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			if ((BGl_z52thezd2isazd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 165 */
					{	/* Ast/node.scm 165 */
						BgL_isaz00_bglt BgL_res5325z00_3668;

						{	/* Ast/node.scm 165 */
							BgL_isaz00_bglt BgL_new3362z00_3664;

							BgL_new3362z00_3664 =
								((BgL_isaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_isaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3362z00_3664),
								BGl_classzd2numzd2zz__objectz00(BGl_isaz00zzast_nodez00));
							{	/* Ast/node.scm 165 */
								BgL_objectz00_bglt BgL_auxz00_9757;

								BgL_auxz00_9757 = (BgL_objectz00_bglt) (BgL_new3362z00_3664);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9757, BFALSE);
							}
							BgL_res5325z00_3668 = BgL_new3362z00_3664;
						}
						BGl_z52thezd2isazd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5325z00_3668);
					}
					{	/* Ast/node.scm 165 */
						BgL_typez00_bglt BgL_arg4608z00_1477;

						BgL_typez00_bglt BgL_arg4610z00_1479;

						BgL_arg4608z00_1477 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4610z00_1479 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 165 */
							BgL_isaz00_bglt BgL_res5326z00_3684;

							{	/* Ast/node.scm 165 */
								BgL_isaz00_bglt BgL_new3353z00_3669;

								BgL_new3353z00_3669 =
									(BgL_isaz00_bglt) (BGl_z52thezd2isazd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 165 */
									obj_t BgL_loc3346z00_3677;

									BgL_typez00_bglt BgL_type3347z00_3678;

									obj_t BgL_sidezd2effectzf33348z21_3679;

									obj_t BgL_key3349z00_3680;

									obj_t BgL_exprza23350za2_3681;

									obj_t BgL_effect3351z00_3682;

									BgL_typez00_bglt BgL_class3352z00_3683;

									BgL_loc3346z00_3677 = BUNSPEC;
									BgL_type3347z00_3678 = BgL_arg4608z00_1477;
									BgL_sidezd2effectzf33348z21_3679 = BUNSPEC;
									BgL_key3349z00_3680 = BUNSPEC;
									BgL_exprza23350za2_3681 = BNIL;
									BgL_effect3351z00_3682 = BUNSPEC;
									BgL_class3352z00_3683 = BgL_arg4610z00_1479;
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->BgL_locz00) =
										((obj_t) BgL_loc3346z00_3677), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3347z00_3678), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33348z21_3679), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->BgL_keyz00) =
										((obj_t) BgL_key3349z00_3680), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza23350za2_3681), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->
											BgL_effectz00) =
										((obj_t) BgL_effect3351z00_3682), BUNSPEC);
									((((BgL_isaz00_bglt) CREF(BgL_new3353z00_3669))->
											BgL_classz00) =
										((BgL_typez00_bglt) BgL_class3352z00_3683), BUNSPEC);
									BgL_res5326z00_3684 = BgL_new3353z00_3669;
							}}
							(obj_t) (BgL_res5326z00_3684);
				}}}
			else
				{	/* Ast/node.scm 165 */
					BFALSE;
				}
			return (BgL_isaz00_bglt) (BGl_z52thezd2isazd2nilz52zzast_nodez00);
		}
	}



/* _isa-nil */
	obj_t BGl__isazd2nilzd2zzast_nodez00(obj_t BgL_envz00_6848)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			return (obj_t) (BGl_isazd2nilzd2zzast_nodez00());
		}
	}



/* vlength? */
	BGL_EXPORTED_DEF bool_t BGl_vlengthzf3zf3zzast_nodez00(obj_t
		BgL_obj3317z00_337)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3317z00_337,
				BGl_vlengthz00zzast_nodez00);
		}
	}



/* _vlength? */
	obj_t BGl__vlengthzf3zf3zzast_nodez00(obj_t BgL_envz00_6845,
		obj_t BgL_obj3317z00_6846)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3317z00_6846,
					BGl_vlengthz00zzast_nodez00));
		}
	}



/* make-vlength */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt BGl_makezd2vlengthzd2zzast_nodez00(obj_t
		BgL_loc3254z00_341, BgL_typez00_bglt BgL_type3255z00_342,
		obj_t BgL_sidezd2effectzf33256z21_343, obj_t BgL_key3257z00_344,
		obj_t BgL_exprza23258za2_345, obj_t BgL_effect3259z00_346,
		obj_t BgL_czd2format3260zd2_347, BgL_typez00_bglt BgL_vtype3261z00_348)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{	/* Ast/node.scm 158 */
				BgL_vlengthz00_bglt BgL_new3262z00_3685;

				{	/* Ast/node.scm 158 */
					BgL_vlengthz00_bglt BgL_res5327z00_3690;

					{	/* Ast/node.scm 158 */
						BgL_vlengthz00_bglt BgL_new3282z00_3686;

						BgL_new3282z00_3686 =
							((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vlengthz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3282z00_3686),
							BGl_classzd2numzd2zz__objectz00(BGl_vlengthz00zzast_nodez00));
						{	/* Ast/node.scm 158 */
							BgL_objectz00_bglt BgL_auxz00_9782;

							BgL_auxz00_9782 = (BgL_objectz00_bglt) (BgL_new3282z00_3686);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9782, BFALSE);
						}
						BgL_res5327z00_3690 = BgL_new3282z00_3686;
					}
					BgL_new3262z00_3685 = BgL_res5327z00_3690;
				}
				{	/* Ast/node.scm 158 */
					BgL_vlengthz00_bglt BgL_res5328z00_3708;

					{	/* Ast/node.scm 158 */
						BgL_vlengthz00_bglt BgL_new3272z00_3691;

						BgL_new3272z00_3691 = BgL_new3262z00_3685;
						{	/* Ast/node.scm 158 */
							obj_t BgL_loc3264z00_3700;

							BgL_typez00_bglt BgL_type3265z00_3701;

							obj_t BgL_sidezd2effectzf33266z21_3702;

							obj_t BgL_key3267z00_3703;

							obj_t BgL_exprza23268za2_3704;

							obj_t BgL_effect3269z00_3705;

							obj_t BgL_czd2format3270zd2_3706;

							BgL_typez00_bglt BgL_vtype3271z00_3707;

							BgL_loc3264z00_3700 = BgL_loc3254z00_341;
							BgL_type3265z00_3701 = BgL_type3255z00_342;
							BgL_sidezd2effectzf33266z21_3702 =
								BgL_sidezd2effectzf33256z21_343;
							BgL_key3267z00_3703 = BgL_key3257z00_344;
							BgL_exprza23268za2_3704 = BgL_exprza23258za2_345;
							BgL_effect3269z00_3705 = BgL_effect3259z00_346;
							BgL_czd2format3270zd2_3706 = BgL_czd2format3260zd2_347;
							BgL_vtype3271z00_3707 = BgL_vtype3261z00_348;
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->BgL_locz00) =
								((obj_t) BgL_loc3264z00_3700), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3265z00_3701), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33266z21_3702), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->BgL_keyz00) =
								((obj_t) BgL_key3267z00_3703), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23268za2_3704), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->
									BgL_effectz00) = ((obj_t) BgL_effect3269z00_3705), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->
									BgL_czd2formatzd2) =
								((obj_t) BgL_czd2format3270zd2_3706), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3691))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3271z00_3707), BUNSPEC);
							BgL_res5328z00_3708 = BgL_new3272z00_3691;
					}} BgL_res5328z00_3708;
				}
				return BgL_new3262z00_3685;
			}
		}
	}



/* _make-vlength */
	obj_t BGl__makezd2vlengthzd2zzast_nodez00(obj_t BgL_envz00_7093,
		obj_t BgL_loc3254z00_7094, obj_t BgL_type3255z00_7095,
		obj_t BgL_sidezd2effectzf33256z21_7096, obj_t BgL_key3257z00_7097,
		obj_t BgL_exprza23258za2_7098, obj_t BgL_effect3259z00_7099,
		obj_t BgL_czd2format3260zd2_7100, obj_t BgL_vtype3261z00_7101)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			return
				(obj_t) (BGl_makezd2vlengthzd2zzast_nodez00(BgL_loc3254z00_7094,
					(BgL_typez00_bglt) (BgL_type3255z00_7095),
					BgL_sidezd2effectzf33256z21_7096, BgL_key3257z00_7097,
					BgL_exprza23258za2_7098, BgL_effect3259z00_7099,
					BgL_czd2format3260zd2_7100,
					(BgL_typez00_bglt) (BgL_vtype3261z00_7101)));
		}
	}



/* fill-vlength! */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt
		BGl_fillzd2vlengthz12zc0zzast_nodez00(BgL_vlengthz00_bglt
		BgL_new3272z00_349, obj_t BgL_loc3264z00_350,
		BgL_typez00_bglt BgL_type3265z00_351, obj_t BgL_sidezd2effectzf33266z21_352,
		obj_t BgL_key3267z00_353, obj_t BgL_exprza23268za2_354,
		obj_t BgL_effect3269z00_355, obj_t BgL_czd2format3270zd2_356,
		BgL_typez00_bglt BgL_vtype3271z00_357)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{	/* Ast/node.scm 158 */
				obj_t BgL_loc3264z00_8042;

				BgL_typez00_bglt BgL_type3265z00_8043;

				obj_t BgL_sidezd2effectzf33266z21_8044;

				obj_t BgL_key3267z00_8045;

				obj_t BgL_exprza23268za2_8046;

				obj_t BgL_effect3269z00_8047;

				obj_t BgL_czd2format3270zd2_8048;

				BgL_typez00_bglt BgL_vtype3271z00_8049;

				BgL_loc3264z00_8042 = BgL_loc3264z00_350;
				BgL_type3265z00_8043 = BgL_type3265z00_351;
				BgL_sidezd2effectzf33266z21_8044 = BgL_sidezd2effectzf33266z21_352;
				BgL_key3267z00_8045 = BgL_key3267z00_353;
				BgL_exprza23268za2_8046 = BgL_exprza23268za2_354;
				BgL_effect3269z00_8047 = BgL_effect3269z00_355;
				BgL_czd2format3270zd2_8048 = BgL_czd2format3270zd2_356;
				BgL_vtype3271z00_8049 = BgL_vtype3271z00_357;
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_locz00) =
					((obj_t) BgL_loc3264z00_8042), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3265z00_8043), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33266z21_8044), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_keyz00) =
					((obj_t) BgL_key3267z00_8045), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_exprza2za2) =
					((obj_t) BgL_exprza23268za2_8046), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_effectz00) =
					((obj_t) BgL_effect3269z00_8047), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format3270zd2_8048), BUNSPEC);
				((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_349))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype3271z00_8049), BUNSPEC);
				return BgL_new3272z00_349;
			}
		}
	}



/* _fill-vlength! */
	obj_t BGl__fillzd2vlengthz12zc0zzast_nodez00(obj_t BgL_envz00_7102,
		obj_t BgL_new3272z00_7103, obj_t BgL_loc3264z00_7104,
		obj_t BgL_type3265z00_7105, obj_t BgL_sidezd2effectzf33266z21_7106,
		obj_t BgL_key3267z00_7107, obj_t BgL_exprza23268za2_7108,
		obj_t BgL_effect3269z00_7109, obj_t BgL_czd2format3270zd2_7110,
		obj_t BgL_vtype3271z00_7111)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{	/* Ast/node.scm 158 */
				BgL_vlengthz00_bglt BgL_auxz00_9805;

				{	/* Ast/node.scm 158 */
					BgL_vlengthz00_bglt BgL_res5581z00_8067;

					{	/* Ast/node.scm 158 */
						BgL_vlengthz00_bglt BgL_new3272z00_8050;

						BgL_typez00_bglt BgL_type3265z00_8052;

						obj_t BgL_exprza23268za2_8055;

						obj_t BgL_czd2format3270zd2_8057;

						BgL_typez00_bglt BgL_vtype3271z00_8058;

						BgL_new3272z00_8050 = (BgL_vlengthz00_bglt) (BgL_new3272z00_7103);
						BgL_type3265z00_8052 = (BgL_typez00_bglt) (BgL_type3265z00_7105);
						BgL_exprza23268za2_8055 = BgL_exprza23268za2_7108;
						BgL_czd2format3270zd2_8057 = BgL_czd2format3270zd2_7110;
						BgL_vtype3271z00_8058 = (BgL_typez00_bglt) (BgL_vtype3271z00_7111);
						{	/* Ast/node.scm 158 */
							obj_t BgL_loc3264z00_8059;

							BgL_typez00_bglt BgL_type3265z00_8060;

							obj_t BgL_sidezd2effectzf33266z21_8061;

							obj_t BgL_key3267z00_8062;

							obj_t BgL_exprza23268za2_8063;

							obj_t BgL_effect3269z00_8064;

							obj_t BgL_czd2format3270zd2_8065;

							BgL_typez00_bglt BgL_vtype3271z00_8066;

							BgL_loc3264z00_8059 = BgL_loc3264z00_7104;
							BgL_type3265z00_8060 = BgL_type3265z00_8052;
							BgL_sidezd2effectzf33266z21_8061 =
								BgL_sidezd2effectzf33266z21_7106;
							BgL_key3267z00_8062 = BgL_key3267z00_7107;
							BgL_exprza23268za2_8063 = BgL_exprza23268za2_8055;
							BgL_effect3269z00_8064 = BgL_effect3269z00_7109;
							BgL_czd2format3270zd2_8065 = BgL_czd2format3270zd2_8057;
							BgL_vtype3271z00_8066 = BgL_vtype3271z00_8058;
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->BgL_locz00) =
								((obj_t) BgL_loc3264z00_8059), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3265z00_8060), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33266z21_8061), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->BgL_keyz00) =
								((obj_t) BgL_key3267z00_8062), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23268za2_8063), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->
									BgL_effectz00) = ((obj_t) BgL_effect3269z00_8064), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->
									BgL_czd2formatzd2) =
								((obj_t) BgL_czd2format3270zd2_8065), BUNSPEC);
							((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_8050))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3271z00_8066), BUNSPEC);
							BgL_res5581z00_8067 = BgL_new3272z00_8050;
						}
					}
					BgL_auxz00_9805 = BgL_res5581z00_8067;
				}
				return (obj_t) (BgL_auxz00_9805);
			}
		}
	}



/* %allocate-vlength */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt
		BGl_z52allocatezd2vlengthz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{	/* Ast/node.scm 158 */
				BgL_vlengthz00_bglt BgL_new3282z00_8068;

				BgL_new3282z00_8068 =
					((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vlengthz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3282z00_8068),
					BGl_classzd2numzd2zz__objectz00(BGl_vlengthz00zzast_nodez00));
				{	/* Ast/node.scm 158 */
					BgL_objectz00_bglt BgL_auxz00_9822;

					BgL_auxz00_9822 = (BgL_objectz00_bglt) (BgL_new3282z00_8068);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9822, BFALSE);
				}
				return BgL_new3282z00_8068;
			}
		}
	}



/* _%allocate-vlength */
	obj_t BGl__z52allocatezd2vlengthz80zzast_nodez00(obj_t BgL_envz00_6843)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{	/* Ast/node.scm 158 */
				BgL_vlengthz00_bglt BgL_auxz00_9825;

				{	/* Ast/node.scm 158 */
					BgL_vlengthz00_bglt BgL_res5582z00_8072;

					{	/* Ast/node.scm 158 */
						BgL_vlengthz00_bglt BgL_new3282z00_8070;

						BgL_new3282z00_8070 =
							((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vlengthz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3282z00_8070),
							BGl_classzd2numzd2zz__objectz00(BGl_vlengthz00zzast_nodez00));
						{	/* Ast/node.scm 158 */
							BgL_objectz00_bglt BgL_auxz00_9830;

							BgL_auxz00_9830 = (BgL_objectz00_bglt) (BgL_new3282z00_8070);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9830, BFALSE);
						}
						BgL_res5582z00_8072 = BgL_new3282z00_8070;
					}
					BgL_auxz00_9825 = BgL_res5582z00_8072;
				}
				return (obj_t) (BgL_auxz00_9825);
			}
		}
	}



/* vlength-nil */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt BGl_vlengthzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			if ((BGl_z52thezd2vlengthzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 158 */
					{	/* Ast/node.scm 158 */
						BgL_vlengthz00_bglt BgL_res5329z00_3725;

						{	/* Ast/node.scm 158 */
							BgL_vlengthz00_bglt BgL_new3282z00_3721;

							BgL_new3282z00_3721 =
								((BgL_vlengthz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vlengthz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3282z00_3721),
								BGl_classzd2numzd2zz__objectz00(BGl_vlengthz00zzast_nodez00));
							{	/* Ast/node.scm 158 */
								BgL_objectz00_bglt BgL_auxz00_9840;

								BgL_auxz00_9840 = (BgL_objectz00_bglt) (BgL_new3282z00_3721);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9840, BFALSE);
							}
							BgL_res5329z00_3725 = BgL_new3282z00_3721;
						}
						BGl_z52thezd2vlengthzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5329z00_3725);
					}
					{	/* Ast/node.scm 158 */
						BgL_typez00_bglt BgL_arg4613z00_1492;

						BgL_typez00_bglt BgL_arg4616z00_1495;

						BgL_arg4613z00_1492 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4616z00_1495 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 158 */
							BgL_vlengthz00_bglt BgL_res5330z00_3743;

							{	/* Ast/node.scm 158 */
								BgL_vlengthz00_bglt BgL_new3272z00_3726;

								BgL_new3272z00_3726 =
									(BgL_vlengthz00_bglt)
									(BGl_z52thezd2vlengthzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 158 */
									obj_t BgL_loc3264z00_3735;

									BgL_typez00_bglt BgL_type3265z00_3736;

									obj_t BgL_sidezd2effectzf33266z21_3737;

									obj_t BgL_key3267z00_3738;

									obj_t BgL_exprza23268za2_3739;

									obj_t BgL_effect3269z00_3740;

									obj_t BgL_czd2format3270zd2_3741;

									BgL_typez00_bglt BgL_vtype3271z00_3742;

									BgL_loc3264z00_3735 = BUNSPEC;
									BgL_type3265z00_3736 = BgL_arg4613z00_1492;
									BgL_sidezd2effectzf33266z21_3737 = BUNSPEC;
									BgL_key3267z00_3738 = BUNSPEC;
									BgL_exprza23268za2_3739 = BNIL;
									BgL_effect3269z00_3740 = BUNSPEC;
									BgL_czd2format3270zd2_3741 = BGl_string5458z00zzast_nodez00;
									BgL_vtype3271z00_3742 = BgL_arg4616z00_1495;
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_locz00) = ((obj_t) BgL_loc3264z00_3735), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3265z00_3736), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33266z21_3737), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_keyz00) = ((obj_t) BgL_key3267z00_3738), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza23268za2_3739), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_effectz00) =
										((obj_t) BgL_effect3269z00_3740), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_czd2formatzd2) =
										((obj_t) BgL_czd2format3270zd2_3741), BUNSPEC);
									((((BgL_vlengthz00_bglt) CREF(BgL_new3272z00_3726))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype3271z00_3742), BUNSPEC);
									BgL_res5330z00_3743 = BgL_new3272z00_3726;
							}}
							(obj_t) (BgL_res5330z00_3743);
				}}}
			else
				{	/* Ast/node.scm 158 */
					BFALSE;
				}
			return (BgL_vlengthz00_bglt) (BGl_z52thezd2vlengthzd2nilz52zzast_nodez00);
		}
	}



/* _vlength-nil */
	obj_t BGl__vlengthzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6844)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			return (obj_t) (BGl_vlengthzd2nilzd2zzast_nodez00());
		}
	}



/* vset!? */
	BGL_EXPORTED_DEF bool_t BGl_vsetz12zf3ze1zzast_nodez00(obj_t
		BgL_obj3235z00_360)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3235z00_360,
				BGl_vsetz12z12zzast_nodez00);
		}
	}



/* _vset!? */
	obj_t BGl__vsetz12zf3ze1zzast_nodez00(obj_t BgL_envz00_6841,
		obj_t BgL_obj3235z00_6842)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3235z00_6842,
					BGl_vsetz12z12zzast_nodez00));
		}
	}



/* make-vset! */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt BGl_makezd2vsetz12zc0zzast_nodez00(obj_t
		BgL_loc3151z00_364, BgL_typez00_bglt BgL_type3152z00_365,
		obj_t BgL_sidezd2effectzf33153z21_366, obj_t BgL_key3154z00_367,
		obj_t BgL_exprza23155za2_368, obj_t BgL_effect3156z00_369,
		obj_t BgL_czd2format3157zd2_370, BgL_typez00_bglt BgL_ftype3158z00_371,
		BgL_typez00_bglt BgL_otype3159z00_372,
		BgL_typez00_bglt BgL_vtype3160z00_373, bool_t BgL_unsafe3161z00_374)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{	/* Ast/node.scm 145 */
				BgL_vsetz12z12_bglt BgL_new3162z00_3744;

				{	/* Ast/node.scm 145 */
					BgL_vsetz12z12_bglt BgL_res5331z00_3749;

					{	/* Ast/node.scm 145 */
						BgL_vsetz12z12_bglt BgL_new3188z00_3745;

						BgL_new3188z00_3745 =
							((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vsetz12z12_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3188z00_3745),
							BGl_classzd2numzd2zz__objectz00(BGl_vsetz12z12zzast_nodez00));
						{	/* Ast/node.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_9866;

							BgL_auxz00_9866 = (BgL_objectz00_bglt) (BgL_new3188z00_3745);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9866, BFALSE);
						}
						BgL_res5331z00_3749 = BgL_new3188z00_3745;
					}
					BgL_new3162z00_3744 = BgL_res5331z00_3749;
				}
				{	/* Ast/node.scm 145 */
					BgL_vsetz12z12_bglt BgL_res5332z00_3773;

					{	/* Ast/node.scm 145 */
						BgL_vsetz12z12_bglt BgL_new3175z00_3750;

						BgL_new3175z00_3750 = BgL_new3162z00_3744;
						{	/* Ast/node.scm 145 */
							obj_t BgL_loc3164z00_3762;

							BgL_typez00_bglt BgL_type3165z00_3763;

							obj_t BgL_sidezd2effectzf33166z21_3764;

							obj_t BgL_key3167z00_3765;

							obj_t BgL_exprza23168za2_3766;

							obj_t BgL_effect3169z00_3767;

							obj_t BgL_czd2format3170zd2_3768;

							BgL_typez00_bglt BgL_ftype3171z00_3769;

							BgL_typez00_bglt BgL_otype3172z00_3770;

							BgL_typez00_bglt BgL_vtype3173z00_3771;

							bool_t BgL_unsafe3174z00_3772;

							BgL_loc3164z00_3762 = BgL_loc3151z00_364;
							BgL_type3165z00_3763 = BgL_type3152z00_365;
							BgL_sidezd2effectzf33166z21_3764 =
								BgL_sidezd2effectzf33153z21_366;
							BgL_key3167z00_3765 = BgL_key3154z00_367;
							BgL_exprza23168za2_3766 = BgL_exprza23155za2_368;
							BgL_effect3169z00_3767 = BgL_effect3156z00_369;
							BgL_czd2format3170zd2_3768 = BgL_czd2format3157zd2_370;
							BgL_ftype3171z00_3769 = BgL_ftype3158z00_371;
							BgL_otype3172z00_3770 = BgL_otype3159z00_372;
							BgL_vtype3173z00_3771 = BgL_vtype3160z00_373;
							BgL_unsafe3174z00_3772 = BgL_unsafe3161z00_374;
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->BgL_locz00) =
								((obj_t) BgL_loc3164z00_3762), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3165z00_3763), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33166z21_3764), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->BgL_keyz00) =
								((obj_t) BgL_key3167z00_3765), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23168za2_3766), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_effectz00) = ((obj_t) BgL_effect3169z00_3767), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_czd2formatzd2) =
								((obj_t) BgL_czd2format3170zd2_3768), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype3171z00_3769), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype3172z00_3770), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3173z00_3771), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3750))->
									BgL_unsafez00) = ((bool_t) BgL_unsafe3174z00_3772), BUNSPEC);
							BgL_res5332z00_3773 = BgL_new3175z00_3750;
					}} BgL_res5332z00_3773;
				}
				return BgL_new3162z00_3744;
			}
		}
	}



/* _make-vset! */
	obj_t BGl__makezd2vsetz12zc0zzast_nodez00(obj_t BgL_envz00_7112,
		obj_t BgL_loc3151z00_7113, obj_t BgL_type3152z00_7114,
		obj_t BgL_sidezd2effectzf33153z21_7115, obj_t BgL_key3154z00_7116,
		obj_t BgL_exprza23155za2_7117, obj_t BgL_effect3156z00_7118,
		obj_t BgL_czd2format3157zd2_7119, obj_t BgL_ftype3158z00_7120,
		obj_t BgL_otype3159z00_7121, obj_t BgL_vtype3160z00_7122,
		obj_t BgL_unsafe3161z00_7123)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			return
				(obj_t) (BGl_makezd2vsetz12zc0zzast_nodez00(BgL_loc3151z00_7113,
					(BgL_typez00_bglt) (BgL_type3152z00_7114),
					BgL_sidezd2effectzf33153z21_7115, BgL_key3154z00_7116,
					BgL_exprza23155za2_7117, BgL_effect3156z00_7118,
					BgL_czd2format3157zd2_7119,
					(BgL_typez00_bglt) (BgL_ftype3158z00_7120),
					(BgL_typez00_bglt) (BgL_otype3159z00_7121),
					(BgL_typez00_bglt) (BgL_vtype3160z00_7122),
					CBOOL(BgL_unsafe3161z00_7123)));
		}
	}



/* fill-vset!! */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt
		BGl_fillzd2vsetz12z12zd2zzast_nodez00(BgL_vsetz12z12_bglt
		BgL_new3175z00_375, obj_t BgL_loc3164z00_376,
		BgL_typez00_bglt BgL_type3165z00_377, obj_t BgL_sidezd2effectzf33166z21_378,
		obj_t BgL_key3167z00_379, obj_t BgL_exprza23168za2_380,
		obj_t BgL_effect3169z00_381, obj_t BgL_czd2format3170zd2_382,
		BgL_typez00_bglt BgL_ftype3171z00_383,
		BgL_typez00_bglt BgL_otype3172z00_384,
		BgL_typez00_bglt BgL_vtype3173z00_385, bool_t BgL_unsafe3174z00_386)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{	/* Ast/node.scm 145 */
				obj_t BgL_loc3164z00_8074;

				BgL_typez00_bglt BgL_type3165z00_8075;

				obj_t BgL_sidezd2effectzf33166z21_8076;

				obj_t BgL_key3167z00_8077;

				obj_t BgL_exprza23168za2_8078;

				obj_t BgL_effect3169z00_8079;

				obj_t BgL_czd2format3170zd2_8080;

				BgL_typez00_bglt BgL_ftype3171z00_8081;

				BgL_typez00_bglt BgL_otype3172z00_8082;

				BgL_typez00_bglt BgL_vtype3173z00_8083;

				bool_t BgL_unsafe3174z00_8084;

				BgL_loc3164z00_8074 = BgL_loc3164z00_376;
				BgL_type3165z00_8075 = BgL_type3165z00_377;
				BgL_sidezd2effectzf33166z21_8076 = BgL_sidezd2effectzf33166z21_378;
				BgL_key3167z00_8077 = BgL_key3167z00_379;
				BgL_exprza23168za2_8078 = BgL_exprza23168za2_380;
				BgL_effect3169z00_8079 = BgL_effect3169z00_381;
				BgL_czd2format3170zd2_8080 = BgL_czd2format3170zd2_382;
				BgL_ftype3171z00_8081 = BgL_ftype3171z00_383;
				BgL_otype3172z00_8082 = BgL_otype3172z00_384;
				BgL_vtype3173z00_8083 = BgL_vtype3173z00_385;
				BgL_unsafe3174z00_8084 = BgL_unsafe3174z00_386;
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_locz00) =
					((obj_t) BgL_loc3164z00_8074), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3165z00_8075), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33166z21_8076), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_keyz00) =
					((obj_t) BgL_key3167z00_8077), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_exprza2za2) =
					((obj_t) BgL_exprza23168za2_8078), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_effectz00) =
					((obj_t) BgL_effect3169z00_8079), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format3170zd2_8080), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype3171z00_8081), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype3172z00_8082), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype3173z00_8083), BUNSPEC);
				((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_375))->BgL_unsafez00) =
					((bool_t) BgL_unsafe3174z00_8084), BUNSPEC);
				return BgL_new3175z00_375;
			}
		}
	}



/* _fill-vset!! */
	obj_t BGl__fillzd2vsetz12z12zd2zzast_nodez00(obj_t BgL_envz00_7124,
		obj_t BgL_new3175z00_7125, obj_t BgL_loc3164z00_7126,
		obj_t BgL_type3165z00_7127, obj_t BgL_sidezd2effectzf33166z21_7128,
		obj_t BgL_key3167z00_7129, obj_t BgL_exprza23168za2_7130,
		obj_t BgL_effect3169z00_7131, obj_t BgL_czd2format3170zd2_7132,
		obj_t BgL_ftype3171z00_7133, obj_t BgL_otype3172z00_7134,
		obj_t BgL_vtype3173z00_7135, obj_t BgL_unsafe3174z00_7136)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{	/* Ast/node.scm 145 */
				BgL_vsetz12z12_bglt BgL_auxz00_9898;

				{	/* Ast/node.scm 145 */
					BgL_vsetz12z12_bglt BgL_res5583z00_8108;

					{	/* Ast/node.scm 145 */
						BgL_vsetz12z12_bglt BgL_new3175z00_8085;

						BgL_typez00_bglt BgL_type3165z00_8087;

						obj_t BgL_exprza23168za2_8090;

						obj_t BgL_czd2format3170zd2_8092;

						BgL_typez00_bglt BgL_ftype3171z00_8093;

						BgL_typez00_bglt BgL_otype3172z00_8094;

						BgL_typez00_bglt BgL_vtype3173z00_8095;

						bool_t BgL_unsafe3174z00_8096;

						BgL_new3175z00_8085 = (BgL_vsetz12z12_bglt) (BgL_new3175z00_7125);
						BgL_type3165z00_8087 = (BgL_typez00_bglt) (BgL_type3165z00_7127);
						BgL_exprza23168za2_8090 = BgL_exprza23168za2_7130;
						BgL_czd2format3170zd2_8092 = BgL_czd2format3170zd2_7132;
						BgL_ftype3171z00_8093 = (BgL_typez00_bglt) (BgL_ftype3171z00_7133);
						BgL_otype3172z00_8094 = (BgL_typez00_bglt) (BgL_otype3172z00_7134);
						BgL_vtype3173z00_8095 = (BgL_typez00_bglt) (BgL_vtype3173z00_7135);
						BgL_unsafe3174z00_8096 = CBOOL(BgL_unsafe3174z00_7136);
						{	/* Ast/node.scm 145 */
							obj_t BgL_loc3164z00_8097;

							BgL_typez00_bglt BgL_type3165z00_8098;

							obj_t BgL_sidezd2effectzf33166z21_8099;

							obj_t BgL_key3167z00_8100;

							obj_t BgL_exprza23168za2_8101;

							obj_t BgL_effect3169z00_8102;

							obj_t BgL_czd2format3170zd2_8103;

							BgL_typez00_bglt BgL_ftype3171z00_8104;

							BgL_typez00_bglt BgL_otype3172z00_8105;

							BgL_typez00_bglt BgL_vtype3173z00_8106;

							bool_t BgL_unsafe3174z00_8107;

							BgL_loc3164z00_8097 = BgL_loc3164z00_7126;
							BgL_type3165z00_8098 = BgL_type3165z00_8087;
							BgL_sidezd2effectzf33166z21_8099 =
								BgL_sidezd2effectzf33166z21_7128;
							BgL_key3167z00_8100 = BgL_key3167z00_7129;
							BgL_exprza23168za2_8101 = BgL_exprza23168za2_8090;
							BgL_effect3169z00_8102 = BgL_effect3169z00_7131;
							BgL_czd2format3170zd2_8103 = BgL_czd2format3170zd2_8092;
							BgL_ftype3171z00_8104 = BgL_ftype3171z00_8093;
							BgL_otype3172z00_8105 = BgL_otype3172z00_8094;
							BgL_vtype3173z00_8106 = BgL_vtype3173z00_8095;
							BgL_unsafe3174z00_8107 = BgL_unsafe3174z00_8096;
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->BgL_locz00) =
								((obj_t) BgL_loc3164z00_8097), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3165z00_8098), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33166z21_8099), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->BgL_keyz00) =
								((obj_t) BgL_key3167z00_8100), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23168za2_8101), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_effectz00) = ((obj_t) BgL_effect3169z00_8102), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_czd2formatzd2) =
								((obj_t) BgL_czd2format3170zd2_8103), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype3171z00_8104), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype3172z00_8105), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3173z00_8106), BUNSPEC);
							((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_8085))->
									BgL_unsafez00) = ((bool_t) BgL_unsafe3174z00_8107), BUNSPEC);
							BgL_res5583z00_8108 = BgL_new3175z00_8085;
						}
					}
					BgL_auxz00_9898 = BgL_res5583z00_8108;
				}
				return (obj_t) (BgL_auxz00_9898);
			}
		}
	}



/* %allocate-vset! */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt
		BGl_z52allocatezd2vsetz12z92zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{	/* Ast/node.scm 145 */
				BgL_vsetz12z12_bglt BgL_new3188z00_8109;

				BgL_new3188z00_8109 =
					((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vsetz12z12_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3188z00_8109),
					BGl_classzd2numzd2zz__objectz00(BGl_vsetz12z12zzast_nodez00));
				{	/* Ast/node.scm 145 */
					BgL_objectz00_bglt BgL_auxz00_9921;

					BgL_auxz00_9921 = (BgL_objectz00_bglt) (BgL_new3188z00_8109);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_9921, BFALSE);
				}
				return BgL_new3188z00_8109;
			}
		}
	}



/* _%allocate-vset! */
	obj_t BGl__z52allocatezd2vsetz12z92zzast_nodez00(obj_t BgL_envz00_6839)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{	/* Ast/node.scm 145 */
				BgL_vsetz12z12_bglt BgL_auxz00_9924;

				{	/* Ast/node.scm 145 */
					BgL_vsetz12z12_bglt BgL_res5584z00_8113;

					{	/* Ast/node.scm 145 */
						BgL_vsetz12z12_bglt BgL_new3188z00_8111;

						BgL_new3188z00_8111 =
							((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vsetz12z12_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3188z00_8111),
							BGl_classzd2numzd2zz__objectz00(BGl_vsetz12z12zzast_nodez00));
						{	/* Ast/node.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_9929;

							BgL_auxz00_9929 = (BgL_objectz00_bglt) (BgL_new3188z00_8111);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9929, BFALSE);
						}
						BgL_res5584z00_8113 = BgL_new3188z00_8111;
					}
					BgL_auxz00_9924 = BgL_res5584z00_8113;
				}
				return (obj_t) (BgL_auxz00_9924);
			}
		}
	}



/* vset!-nil */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt BGl_vsetz12zd2nilzc0zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			if ((BGl_z52thezd2vsetz12zd2nilz40zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 145 */
					{	/* Ast/node.scm 145 */
						BgL_vsetz12z12_bglt BgL_res5333z00_3793;

						{	/* Ast/node.scm 145 */
							BgL_vsetz12z12_bglt BgL_new3188z00_3789;

							BgL_new3188z00_3789 =
								((BgL_vsetz12z12_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vsetz12z12_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3188z00_3789),
								BGl_classzd2numzd2zz__objectz00(BGl_vsetz12z12zzast_nodez00));
							{	/* Ast/node.scm 145 */
								BgL_objectz00_bglt BgL_auxz00_9939;

								BgL_auxz00_9939 = (BgL_objectz00_bglt) (BgL_new3188z00_3789);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_9939, BFALSE);
							}
							BgL_res5333z00_3793 = BgL_new3188z00_3789;
						}
						BGl_z52thezd2vsetz12zd2nilz40zzast_nodez00 =
							(obj_t) (BgL_res5333z00_3793);
					}
					{	/* Ast/node.scm 145 */
						BgL_typez00_bglt BgL_arg4619z00_1511;

						BgL_typez00_bglt BgL_arg4622z00_1514;

						BgL_typez00_bglt BgL_arg4623z00_1515;

						BgL_typez00_bglt BgL_arg4624z00_1516;

						BgL_arg4619z00_1511 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4622z00_1514 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4623z00_1515 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4624z00_1516 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 145 */
							BgL_vsetz12z12_bglt BgL_res5334z00_3817;

							{	/* Ast/node.scm 145 */
								BgL_vsetz12z12_bglt BgL_new3175z00_3794;

								BgL_new3175z00_3794 =
									(BgL_vsetz12z12_bglt)
									(BGl_z52thezd2vsetz12zd2nilz40zzast_nodez00);
								{	/* Ast/node.scm 145 */
									obj_t BgL_loc3164z00_3806;

									BgL_typez00_bglt BgL_type3165z00_3807;

									obj_t BgL_sidezd2effectzf33166z21_3808;

									obj_t BgL_key3167z00_3809;

									obj_t BgL_exprza23168za2_3810;

									obj_t BgL_effect3169z00_3811;

									obj_t BgL_czd2format3170zd2_3812;

									BgL_typez00_bglt BgL_ftype3171z00_3813;

									BgL_typez00_bglt BgL_otype3172z00_3814;

									BgL_typez00_bglt BgL_vtype3173z00_3815;

									bool_t BgL_unsafe3174z00_3816;

									BgL_loc3164z00_3806 = BUNSPEC;
									BgL_type3165z00_3807 = BgL_arg4619z00_1511;
									BgL_sidezd2effectzf33166z21_3808 = BUNSPEC;
									BgL_key3167z00_3809 = BUNSPEC;
									BgL_exprza23168za2_3810 = BNIL;
									BgL_effect3169z00_3811 = BUNSPEC;
									BgL_czd2format3170zd2_3812 = BGl_string5458z00zzast_nodez00;
									BgL_ftype3171z00_3813 = BgL_arg4622z00_1514;
									BgL_otype3172z00_3814 = BgL_arg4623z00_1515;
									BgL_vtype3173z00_3815 = BgL_arg4624z00_1516;
									BgL_unsafe3174z00_3816 = ((bool_t) 0);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_locz00) = ((obj_t) BgL_loc3164z00_3806), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3165z00_3807), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33166z21_3808), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_keyz00) = ((obj_t) BgL_key3167z00_3809), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza23168za2_3810), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_effectz00) =
										((obj_t) BgL_effect3169z00_3811), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_czd2formatzd2) =
										((obj_t) BgL_czd2format3170zd2_3812), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype3171z00_3813), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype3172z00_3814), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype3173z00_3815), BUNSPEC);
									((((BgL_vsetz12z12_bglt) CREF(BgL_new3175z00_3794))->
											BgL_unsafez00) =
										((bool_t) BgL_unsafe3174z00_3816), BUNSPEC);
									BgL_res5334z00_3817 = BgL_new3175z00_3794;
							}}
							(obj_t) (BgL_res5334z00_3817);
				}}}
			else
				{	/* Ast/node.scm 145 */
					BFALSE;
				}
			return (BgL_vsetz12z12_bglt) (BGl_z52thezd2vsetz12zd2nilz40zzast_nodez00);
		}
	}



/* _vset!-nil */
	obj_t BGl__vsetz12zd2nilzc0zzast_nodez00(obj_t BgL_envz00_6840)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			return (obj_t) (BGl_vsetz12zd2nilzc0zzast_nodez00());
		}
	}



/* vref? */
	BGL_EXPORTED_DEF bool_t BGl_vrefzf3zf3zzast_nodez00(obj_t BgL_obj3127z00_394)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3127z00_394,
				BGl_vrefz00zzast_nodez00);
		}
	}



/* _vref? */
	obj_t BGl__vrefzf3zf3zzast_nodez00(obj_t BgL_envz00_6837,
		obj_t BgL_obj3127z00_6838)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3127z00_6838,
					BGl_vrefz00zzast_nodez00));
		}
	}



/* make-vref */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t
		BgL_loc3043z00_398, BgL_typez00_bglt BgL_type3044z00_399,
		obj_t BgL_sidezd2effectzf33045z21_400, obj_t BgL_key3046z00_401,
		obj_t BgL_exprza23047za2_402, obj_t BgL_effect3048z00_403,
		obj_t BgL_czd2format3049zd2_404, BgL_typez00_bglt BgL_ftype3050z00_405,
		BgL_typez00_bglt BgL_otype3051z00_406,
		BgL_typez00_bglt BgL_vtype3052z00_407, bool_t BgL_unsafe3053z00_408)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{	/* Ast/node.scm 132 */
				BgL_vrefz00_bglt BgL_new3054z00_3818;

				{	/* Ast/node.scm 132 */
					BgL_vrefz00_bglt BgL_res5335z00_3823;

					{	/* Ast/node.scm 132 */
						BgL_vrefz00_bglt BgL_new3080z00_3819;

						BgL_new3080z00_3819 =
							((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3080z00_3819),
							BGl_classzd2numzd2zz__objectz00(BGl_vrefz00zzast_nodez00));
						{	/* Ast/node.scm 132 */
							BgL_objectz00_bglt BgL_auxz00_9970;

							BgL_auxz00_9970 = (BgL_objectz00_bglt) (BgL_new3080z00_3819);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9970, BFALSE);
						}
						BgL_res5335z00_3823 = BgL_new3080z00_3819;
					}
					BgL_new3054z00_3818 = BgL_res5335z00_3823;
				}
				{	/* Ast/node.scm 132 */
					BgL_vrefz00_bglt BgL_res5336z00_3847;

					{	/* Ast/node.scm 132 */
						BgL_vrefz00_bglt BgL_new3067z00_3824;

						BgL_new3067z00_3824 = BgL_new3054z00_3818;
						{	/* Ast/node.scm 132 */
							obj_t BgL_loc3056z00_3836;

							BgL_typez00_bglt BgL_type3057z00_3837;

							obj_t BgL_sidezd2effectzf33058z21_3838;

							obj_t BgL_key3059z00_3839;

							obj_t BgL_exprza23060za2_3840;

							obj_t BgL_effect3061z00_3841;

							obj_t BgL_czd2format3062zd2_3842;

							BgL_typez00_bglt BgL_ftype3063z00_3843;

							BgL_typez00_bglt BgL_otype3064z00_3844;

							BgL_typez00_bglt BgL_vtype3065z00_3845;

							bool_t BgL_unsafe3066z00_3846;

							BgL_loc3056z00_3836 = BgL_loc3043z00_398;
							BgL_type3057z00_3837 = BgL_type3044z00_399;
							BgL_sidezd2effectzf33058z21_3838 =
								BgL_sidezd2effectzf33045z21_400;
							BgL_key3059z00_3839 = BgL_key3046z00_401;
							BgL_exprza23060za2_3840 = BgL_exprza23047za2_402;
							BgL_effect3061z00_3841 = BgL_effect3048z00_403;
							BgL_czd2format3062zd2_3842 = BgL_czd2format3049zd2_404;
							BgL_ftype3063z00_3843 = BgL_ftype3050z00_405;
							BgL_otype3064z00_3844 = BgL_otype3051z00_406;
							BgL_vtype3065z00_3845 = BgL_vtype3052z00_407;
							BgL_unsafe3066z00_3846 = BgL_unsafe3053z00_408;
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_locz00) =
								((obj_t) BgL_loc3056z00_3836), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3057z00_3837), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33058z21_3838), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_keyz00) =
								((obj_t) BgL_key3059z00_3839), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23060za2_3840), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_effectz00) =
								((obj_t) BgL_effect3061z00_3841), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->
									BgL_czd2formatzd2) =
								((obj_t) BgL_czd2format3062zd2_3842), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype3063z00_3843), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype3064z00_3844), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3065z00_3845), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3824))->BgL_unsafez00) =
								((bool_t) BgL_unsafe3066z00_3846), BUNSPEC);
							BgL_res5336z00_3847 = BgL_new3067z00_3824;
					}} BgL_res5336z00_3847;
				}
				return BgL_new3054z00_3818;
			}
		}
	}



/* _make-vref */
	obj_t BGl__makezd2vrefzd2zzast_nodez00(obj_t BgL_envz00_7137,
		obj_t BgL_loc3043z00_7138, obj_t BgL_type3044z00_7139,
		obj_t BgL_sidezd2effectzf33045z21_7140, obj_t BgL_key3046z00_7141,
		obj_t BgL_exprza23047za2_7142, obj_t BgL_effect3048z00_7143,
		obj_t BgL_czd2format3049zd2_7144, obj_t BgL_ftype3050z00_7145,
		obj_t BgL_otype3051z00_7146, obj_t BgL_vtype3052z00_7147,
		obj_t BgL_unsafe3053z00_7148)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			return
				(obj_t) (BGl_makezd2vrefzd2zzast_nodez00(BgL_loc3043z00_7138,
					(BgL_typez00_bglt) (BgL_type3044z00_7139),
					BgL_sidezd2effectzf33045z21_7140, BgL_key3046z00_7141,
					BgL_exprza23047za2_7142, BgL_effect3048z00_7143,
					BgL_czd2format3049zd2_7144,
					(BgL_typez00_bglt) (BgL_ftype3050z00_7145),
					(BgL_typez00_bglt) (BgL_otype3051z00_7146),
					(BgL_typez00_bglt) (BgL_vtype3052z00_7147),
					CBOOL(BgL_unsafe3053z00_7148)));
		}
	}



/* fill-vref! */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt
		BGl_fillzd2vrefz12zc0zzast_nodez00(BgL_vrefz00_bglt BgL_new3067z00_409,
		obj_t BgL_loc3056z00_410, BgL_typez00_bglt BgL_type3057z00_411,
		obj_t BgL_sidezd2effectzf33058z21_412, obj_t BgL_key3059z00_413,
		obj_t BgL_exprza23060za2_414, obj_t BgL_effect3061z00_415,
		obj_t BgL_czd2format3062zd2_416, BgL_typez00_bglt BgL_ftype3063z00_417,
		BgL_typez00_bglt BgL_otype3064z00_418,
		BgL_typez00_bglt BgL_vtype3065z00_419, bool_t BgL_unsafe3066z00_420)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{	/* Ast/node.scm 132 */
				obj_t BgL_loc3056z00_8115;

				BgL_typez00_bglt BgL_type3057z00_8116;

				obj_t BgL_sidezd2effectzf33058z21_8117;

				obj_t BgL_key3059z00_8118;

				obj_t BgL_exprza23060za2_8119;

				obj_t BgL_effect3061z00_8120;

				obj_t BgL_czd2format3062zd2_8121;

				BgL_typez00_bglt BgL_ftype3063z00_8122;

				BgL_typez00_bglt BgL_otype3064z00_8123;

				BgL_typez00_bglt BgL_vtype3065z00_8124;

				bool_t BgL_unsafe3066z00_8125;

				BgL_loc3056z00_8115 = BgL_loc3056z00_410;
				BgL_type3057z00_8116 = BgL_type3057z00_411;
				BgL_sidezd2effectzf33058z21_8117 = BgL_sidezd2effectzf33058z21_412;
				BgL_key3059z00_8118 = BgL_key3059z00_413;
				BgL_exprza23060za2_8119 = BgL_exprza23060za2_414;
				BgL_effect3061z00_8120 = BgL_effect3061z00_415;
				BgL_czd2format3062zd2_8121 = BgL_czd2format3062zd2_416;
				BgL_ftype3063z00_8122 = BgL_ftype3063z00_417;
				BgL_otype3064z00_8123 = BgL_otype3064z00_418;
				BgL_vtype3065z00_8124 = BgL_vtype3065z00_419;
				BgL_unsafe3066z00_8125 = BgL_unsafe3066z00_420;
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_locz00) =
					((obj_t) BgL_loc3056z00_8115), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3057z00_8116), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf33058z21_8117), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_keyz00) =
					((obj_t) BgL_key3059z00_8118), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_exprza2za2) =
					((obj_t) BgL_exprza23060za2_8119), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_effectz00) =
					((obj_t) BgL_effect3061z00_8120), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format3062zd2_8121), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype3063z00_8122), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype3064z00_8123), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype3065z00_8124), BUNSPEC);
				((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_409))->BgL_unsafez00) =
					((bool_t) BgL_unsafe3066z00_8125), BUNSPEC);
				return BgL_new3067z00_409;
			}
		}
	}



/* _fill-vref! */
	obj_t BGl__fillzd2vrefz12zc0zzast_nodez00(obj_t BgL_envz00_7149,
		obj_t BgL_new3067z00_7150, obj_t BgL_loc3056z00_7151,
		obj_t BgL_type3057z00_7152, obj_t BgL_sidezd2effectzf33058z21_7153,
		obj_t BgL_key3059z00_7154, obj_t BgL_exprza23060za2_7155,
		obj_t BgL_effect3061z00_7156, obj_t BgL_czd2format3062zd2_7157,
		obj_t BgL_ftype3063z00_7158, obj_t BgL_otype3064z00_7159,
		obj_t BgL_vtype3065z00_7160, obj_t BgL_unsafe3066z00_7161)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{	/* Ast/node.scm 132 */
				BgL_vrefz00_bglt BgL_auxz00_10002;

				{	/* Ast/node.scm 132 */
					BgL_vrefz00_bglt BgL_res5585z00_8149;

					{	/* Ast/node.scm 132 */
						BgL_vrefz00_bglt BgL_new3067z00_8126;

						BgL_typez00_bglt BgL_type3057z00_8128;

						obj_t BgL_exprza23060za2_8131;

						obj_t BgL_czd2format3062zd2_8133;

						BgL_typez00_bglt BgL_ftype3063z00_8134;

						BgL_typez00_bglt BgL_otype3064z00_8135;

						BgL_typez00_bglt BgL_vtype3065z00_8136;

						bool_t BgL_unsafe3066z00_8137;

						BgL_new3067z00_8126 = (BgL_vrefz00_bglt) (BgL_new3067z00_7150);
						BgL_type3057z00_8128 = (BgL_typez00_bglt) (BgL_type3057z00_7152);
						BgL_exprza23060za2_8131 = BgL_exprza23060za2_7155;
						BgL_czd2format3062zd2_8133 = BgL_czd2format3062zd2_7157;
						BgL_ftype3063z00_8134 = (BgL_typez00_bglt) (BgL_ftype3063z00_7158);
						BgL_otype3064z00_8135 = (BgL_typez00_bglt) (BgL_otype3064z00_7159);
						BgL_vtype3065z00_8136 = (BgL_typez00_bglt) (BgL_vtype3065z00_7160);
						BgL_unsafe3066z00_8137 = CBOOL(BgL_unsafe3066z00_7161);
						{	/* Ast/node.scm 132 */
							obj_t BgL_loc3056z00_8138;

							BgL_typez00_bglt BgL_type3057z00_8139;

							obj_t BgL_sidezd2effectzf33058z21_8140;

							obj_t BgL_key3059z00_8141;

							obj_t BgL_exprza23060za2_8142;

							obj_t BgL_effect3061z00_8143;

							obj_t BgL_czd2format3062zd2_8144;

							BgL_typez00_bglt BgL_ftype3063z00_8145;

							BgL_typez00_bglt BgL_otype3064z00_8146;

							BgL_typez00_bglt BgL_vtype3065z00_8147;

							bool_t BgL_unsafe3066z00_8148;

							BgL_loc3056z00_8138 = BgL_loc3056z00_7151;
							BgL_type3057z00_8139 = BgL_type3057z00_8128;
							BgL_sidezd2effectzf33058z21_8140 =
								BgL_sidezd2effectzf33058z21_7153;
							BgL_key3059z00_8141 = BgL_key3059z00_7154;
							BgL_exprza23060za2_8142 = BgL_exprza23060za2_8131;
							BgL_effect3061z00_8143 = BgL_effect3061z00_7156;
							BgL_czd2format3062zd2_8144 = BgL_czd2format3062zd2_8133;
							BgL_ftype3063z00_8145 = BgL_ftype3063z00_8134;
							BgL_otype3064z00_8146 = BgL_otype3064z00_8135;
							BgL_vtype3065z00_8147 = BgL_vtype3065z00_8136;
							BgL_unsafe3066z00_8148 = BgL_unsafe3066z00_8137;
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_locz00) =
								((obj_t) BgL_loc3056z00_8138), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3057z00_8139), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf33058z21_8140), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_keyz00) =
								((obj_t) BgL_key3059z00_8141), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza23060za2_8142), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_effectz00) =
								((obj_t) BgL_effect3061z00_8143), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->
									BgL_czd2formatzd2) =
								((obj_t) BgL_czd2format3062zd2_8144), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype3063z00_8145), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype3064z00_8146), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_vtypez00) =
								((BgL_typez00_bglt) BgL_vtype3065z00_8147), BUNSPEC);
							((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_8126))->BgL_unsafez00) =
								((bool_t) BgL_unsafe3066z00_8148), BUNSPEC);
							BgL_res5585z00_8149 = BgL_new3067z00_8126;
						}
					}
					BgL_auxz00_10002 = BgL_res5585z00_8149;
				}
				return (obj_t) (BgL_auxz00_10002);
			}
		}
	}



/* %allocate-vref */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt BGl_z52allocatezd2vrefz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{	/* Ast/node.scm 132 */
				BgL_vrefz00_bglt BgL_new3080z00_8150;

				BgL_new3080z00_8150 =
					((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_vrefz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3080z00_8150),
					BGl_classzd2numzd2zz__objectz00(BGl_vrefz00zzast_nodez00));
				{	/* Ast/node.scm 132 */
					BgL_objectz00_bglt BgL_auxz00_10025;

					BgL_auxz00_10025 = (BgL_objectz00_bglt) (BgL_new3080z00_8150);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10025, BFALSE);
				}
				return BgL_new3080z00_8150;
			}
		}
	}



/* _%allocate-vref */
	obj_t BGl__z52allocatezd2vrefz80zzast_nodez00(obj_t BgL_envz00_6835)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{	/* Ast/node.scm 132 */
				BgL_vrefz00_bglt BgL_auxz00_10028;

				{	/* Ast/node.scm 132 */
					BgL_vrefz00_bglt BgL_res5586z00_8154;

					{	/* Ast/node.scm 132 */
						BgL_vrefz00_bglt BgL_new3080z00_8152;

						BgL_new3080z00_8152 =
							((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vrefz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3080z00_8152),
							BGl_classzd2numzd2zz__objectz00(BGl_vrefz00zzast_nodez00));
						{	/* Ast/node.scm 132 */
							BgL_objectz00_bglt BgL_auxz00_10033;

							BgL_auxz00_10033 = (BgL_objectz00_bglt) (BgL_new3080z00_8152);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10033, BFALSE);
						}
						BgL_res5586z00_8154 = BgL_new3080z00_8152;
					}
					BgL_auxz00_10028 = BgL_res5586z00_8154;
				}
				return (obj_t) (BgL_auxz00_10028);
			}
		}
	}



/* vref-nil */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt BGl_vrefzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			if ((BGl_z52thezd2vrefzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 132 */
					{	/* Ast/node.scm 132 */
						BgL_vrefz00_bglt BgL_res5337z00_3867;

						{	/* Ast/node.scm 132 */
							BgL_vrefz00_bglt BgL_new3080z00_3863;

							BgL_new3080z00_3863 =
								((BgL_vrefz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vrefz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3080z00_3863),
								BGl_classzd2numzd2zz__objectz00(BGl_vrefz00zzast_nodez00));
							{	/* Ast/node.scm 132 */
								BgL_objectz00_bglt BgL_auxz00_10043;

								BgL_auxz00_10043 = (BgL_objectz00_bglt) (BgL_new3080z00_3863);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10043, BFALSE);
							}
							BgL_res5337z00_3867 = BgL_new3080z00_3863;
						}
						BGl_z52thezd2vrefzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5337z00_3867);
					}
					{	/* Ast/node.scm 132 */
						BgL_typez00_bglt BgL_arg4627z00_1532;

						BgL_typez00_bglt BgL_arg4630z00_1535;

						BgL_typez00_bglt BgL_arg4631z00_1536;

						BgL_typez00_bglt BgL_arg4632z00_1537;

						BgL_arg4627z00_1532 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4630z00_1535 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4631z00_1536 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4632z00_1537 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 132 */
							BgL_vrefz00_bglt BgL_res5338z00_3891;

							{	/* Ast/node.scm 132 */
								BgL_vrefz00_bglt BgL_new3067z00_3868;

								BgL_new3067z00_3868 =
									(BgL_vrefz00_bglt) (BGl_z52thezd2vrefzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 132 */
									obj_t BgL_loc3056z00_3880;

									BgL_typez00_bglt BgL_type3057z00_3881;

									obj_t BgL_sidezd2effectzf33058z21_3882;

									obj_t BgL_key3059z00_3883;

									obj_t BgL_exprza23060za2_3884;

									obj_t BgL_effect3061z00_3885;

									obj_t BgL_czd2format3062zd2_3886;

									BgL_typez00_bglt BgL_ftype3063z00_3887;

									BgL_typez00_bglt BgL_otype3064z00_3888;

									BgL_typez00_bglt BgL_vtype3065z00_3889;

									bool_t BgL_unsafe3066z00_3890;

									BgL_loc3056z00_3880 = BUNSPEC;
									BgL_type3057z00_3881 = BgL_arg4627z00_1532;
									BgL_sidezd2effectzf33058z21_3882 = BUNSPEC;
									BgL_key3059z00_3883 = BUNSPEC;
									BgL_exprza23060za2_3884 = BNIL;
									BgL_effect3061z00_3885 = BUNSPEC;
									BgL_czd2format3062zd2_3886 = BGl_string5458z00zzast_nodez00;
									BgL_ftype3063z00_3887 = BgL_arg4630z00_1535;
									BgL_otype3064z00_3888 = BgL_arg4631z00_1536;
									BgL_vtype3065z00_3889 = BgL_arg4632z00_1537;
									BgL_unsafe3066z00_3890 = ((bool_t) 0);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_locz00) = ((obj_t) BgL_loc3056z00_3880), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3057z00_3881), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33058z21_3882), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_keyz00) = ((obj_t) BgL_key3059z00_3883), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza23060za2_3884), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_effectz00) =
										((obj_t) BgL_effect3061z00_3885), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_czd2formatzd2) =
										((obj_t) BgL_czd2format3062zd2_3886), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype3063z00_3887), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype3064z00_3888), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_vtypez00) =
										((BgL_typez00_bglt) BgL_vtype3065z00_3889), BUNSPEC);
									((((BgL_vrefz00_bglt) CREF(BgL_new3067z00_3868))->
											BgL_unsafez00) =
										((bool_t) BgL_unsafe3066z00_3890), BUNSPEC);
									BgL_res5338z00_3891 = BgL_new3067z00_3868;
							}}
							(obj_t) (BgL_res5338z00_3891);
				}}}
			else
				{	/* Ast/node.scm 132 */
					BFALSE;
				}
			return (BgL_vrefz00_bglt) (BGl_z52thezd2vrefzd2nilz52zzast_nodez00);
		}
	}



/* _vref-nil */
	obj_t BGl__vrefzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6836)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			return (obj_t) (BGl_vrefzd2nilzd2zzast_nodez00());
		}
	}



/* valloc? */
	BGL_EXPORTED_DEF bool_t BGl_valloczf3zf3zzast_nodez00(obj_t
		BgL_obj3019z00_428)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3019z00_428,
				BGl_vallocz00zzast_nodez00);
		}
	}



/* _valloc? */
	obj_t BGl__valloczf3zf3zzast_nodez00(obj_t BgL_envz00_6833,
		obj_t BgL_obj3019z00_6834)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3019z00_6834,
					BGl_vallocz00zzast_nodez00));
		}
	}



/* make-valloc */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt BGl_makezd2valloczd2zzast_nodez00(obj_t
		BgL_loc2949z00_432, BgL_typez00_bglt BgL_type2950z00_433,
		obj_t BgL_sidezd2effectzf32951z21_434, obj_t BgL_key2952z00_435,
		obj_t BgL_exprza22953za2_436, obj_t BgL_effect2954z00_437,
		obj_t BgL_czd2heapzd2format2955z00_438,
		BgL_typez00_bglt BgL_ftype2956z00_439,
		BgL_typez00_bglt BgL_otype2957z00_440)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{	/* Ast/node.scm 123 */
				BgL_vallocz00_bglt BgL_new2958z00_3892;

				{	/* Ast/node.scm 123 */
					BgL_vallocz00_bglt BgL_res5339z00_3897;

					{	/* Ast/node.scm 123 */
						BgL_vallocz00_bglt BgL_new2980z00_3893;

						BgL_new2980z00_3893 =
							((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2980z00_3893),
							BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
						{	/* Ast/node.scm 123 */
							BgL_objectz00_bglt BgL_auxz00_10074;

							BgL_auxz00_10074 = (BgL_objectz00_bglt) (BgL_new2980z00_3893);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10074, BFALSE);
						}
						BgL_res5339z00_3897 = BgL_new2980z00_3893;
					}
					BgL_new2958z00_3892 = BgL_res5339z00_3897;
				}
				{	/* Ast/node.scm 123 */
					BgL_vallocz00_bglt BgL_res5340z00_3917;

					{	/* Ast/node.scm 123 */
						BgL_vallocz00_bglt BgL_new2969z00_3898;

						BgL_new2969z00_3898 = BgL_new2958z00_3892;
						{	/* Ast/node.scm 123 */
							obj_t BgL_loc2960z00_3908;

							BgL_typez00_bglt BgL_type2961z00_3909;

							obj_t BgL_sidezd2effectzf32962z21_3910;

							obj_t BgL_key2963z00_3911;

							obj_t BgL_exprza22964za2_3912;

							obj_t BgL_effect2965z00_3913;

							obj_t BgL_czd2heapzd2format2966z00_3914;

							BgL_typez00_bglt BgL_ftype2967z00_3915;

							BgL_typez00_bglt BgL_otype2968z00_3916;

							BgL_loc2960z00_3908 = BgL_loc2949z00_432;
							BgL_type2961z00_3909 = BgL_type2950z00_433;
							BgL_sidezd2effectzf32962z21_3910 =
								BgL_sidezd2effectzf32951z21_434;
							BgL_key2963z00_3911 = BgL_key2952z00_435;
							BgL_exprza22964za2_3912 = BgL_exprza22953za2_436;
							BgL_effect2965z00_3913 = BgL_effect2954z00_437;
							BgL_czd2heapzd2format2966z00_3914 =
								BgL_czd2heapzd2format2955z00_438;
							BgL_ftype2967z00_3915 = BgL_ftype2956z00_439;
							BgL_otype2968z00_3916 = BgL_otype2957z00_440;
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->BgL_locz00) =
								((obj_t) BgL_loc2960z00_3908), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2961z00_3909), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32962z21_3910), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->BgL_keyz00) =
								((obj_t) BgL_key2963z00_3911), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22964za2_3912), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->
									BgL_effectz00) = ((obj_t) BgL_effect2965z00_3913), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->
									BgL_czd2heapzd2formatz00) =
								((obj_t) BgL_czd2heapzd2format2966z00_3914), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype2967z00_3915), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3898))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype2968z00_3916), BUNSPEC);
							BgL_res5340z00_3917 = BgL_new2969z00_3898;
					}} BgL_res5340z00_3917;
				}
				return BgL_new2958z00_3892;
			}
		}
	}



/* _make-valloc */
	obj_t BGl__makezd2valloczd2zzast_nodez00(obj_t BgL_envz00_7162,
		obj_t BgL_loc2949z00_7163, obj_t BgL_type2950z00_7164,
		obj_t BgL_sidezd2effectzf32951z21_7165, obj_t BgL_key2952z00_7166,
		obj_t BgL_exprza22953za2_7167, obj_t BgL_effect2954z00_7168,
		obj_t BgL_czd2heapzd2format2955z00_7169, obj_t BgL_ftype2956z00_7170,
		obj_t BgL_otype2957z00_7171)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			return
				(obj_t) (BGl_makezd2valloczd2zzast_nodez00(BgL_loc2949z00_7163,
					(BgL_typez00_bglt) (BgL_type2950z00_7164),
					BgL_sidezd2effectzf32951z21_7165, BgL_key2952z00_7166,
					BgL_exprza22953za2_7167, BgL_effect2954z00_7168,
					BgL_czd2heapzd2format2955z00_7169,
					(BgL_typez00_bglt) (BgL_ftype2956z00_7170),
					(BgL_typez00_bglt) (BgL_otype2957z00_7171)));
		}
	}



/* fill-valloc! */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_fillzd2vallocz12zc0zzast_nodez00(BgL_vallocz00_bglt BgL_new2969z00_441,
		obj_t BgL_loc2960z00_442, BgL_typez00_bglt BgL_type2961z00_443,
		obj_t BgL_sidezd2effectzf32962z21_444, obj_t BgL_key2963z00_445,
		obj_t BgL_exprza22964za2_446, obj_t BgL_effect2965z00_447,
		obj_t BgL_czd2heapzd2format2966z00_448,
		BgL_typez00_bglt BgL_ftype2967z00_449,
		BgL_typez00_bglt BgL_otype2968z00_450)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{	/* Ast/node.scm 123 */
				obj_t BgL_loc2960z00_8156;

				BgL_typez00_bglt BgL_type2961z00_8157;

				obj_t BgL_sidezd2effectzf32962z21_8158;

				obj_t BgL_key2963z00_8159;

				obj_t BgL_exprza22964za2_8160;

				obj_t BgL_effect2965z00_8161;

				obj_t BgL_czd2heapzd2format2966z00_8162;

				BgL_typez00_bglt BgL_ftype2967z00_8163;

				BgL_typez00_bglt BgL_otype2968z00_8164;

				BgL_loc2960z00_8156 = BgL_loc2960z00_442;
				BgL_type2961z00_8157 = BgL_type2961z00_443;
				BgL_sidezd2effectzf32962z21_8158 = BgL_sidezd2effectzf32962z21_444;
				BgL_key2963z00_8159 = BgL_key2963z00_445;
				BgL_exprza22964za2_8160 = BgL_exprza22964za2_446;
				BgL_effect2965z00_8161 = BgL_effect2965z00_447;
				BgL_czd2heapzd2format2966z00_8162 = BgL_czd2heapzd2format2966z00_448;
				BgL_ftype2967z00_8163 = BgL_ftype2967z00_449;
				BgL_otype2968z00_8164 = BgL_otype2968z00_450;
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_locz00) =
					((obj_t) BgL_loc2960z00_8156), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2961z00_8157), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32962z21_8158), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_keyz00) =
					((obj_t) BgL_key2963z00_8159), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_exprza2za2) =
					((obj_t) BgL_exprza22964za2_8160), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_effectz00) =
					((obj_t) BgL_effect2965z00_8161), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->
						BgL_czd2heapzd2formatz00) =
					((obj_t) BgL_czd2heapzd2format2966z00_8162), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype2967z00_8163), BUNSPEC);
				((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_441))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype2968z00_8164), BUNSPEC);
				return BgL_new2969z00_441;
			}
		}
	}



/* _fill-valloc! */
	obj_t BGl__fillzd2vallocz12zc0zzast_nodez00(obj_t BgL_envz00_7172,
		obj_t BgL_new2969z00_7173, obj_t BgL_loc2960z00_7174,
		obj_t BgL_type2961z00_7175, obj_t BgL_sidezd2effectzf32962z21_7176,
		obj_t BgL_key2963z00_7177, obj_t BgL_exprza22964za2_7178,
		obj_t BgL_effect2965z00_7179, obj_t BgL_czd2heapzd2format2966z00_7180,
		obj_t BgL_ftype2967z00_7181, obj_t BgL_otype2968z00_7182)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{	/* Ast/node.scm 123 */
				BgL_vallocz00_bglt BgL_auxz00_10100;

				{	/* Ast/node.scm 123 */
					BgL_vallocz00_bglt BgL_res5587z00_8184;

					{	/* Ast/node.scm 123 */
						BgL_vallocz00_bglt BgL_new2969z00_8165;

						BgL_typez00_bglt BgL_type2961z00_8167;

						obj_t BgL_exprza22964za2_8170;

						obj_t BgL_czd2heapzd2format2966z00_8172;

						BgL_typez00_bglt BgL_ftype2967z00_8173;

						BgL_typez00_bglt BgL_otype2968z00_8174;

						BgL_new2969z00_8165 = (BgL_vallocz00_bglt) (BgL_new2969z00_7173);
						BgL_type2961z00_8167 = (BgL_typez00_bglt) (BgL_type2961z00_7175);
						BgL_exprza22964za2_8170 = BgL_exprza22964za2_7178;
						BgL_czd2heapzd2format2966z00_8172 =
							BgL_czd2heapzd2format2966z00_7180;
						BgL_ftype2967z00_8173 = (BgL_typez00_bglt) (BgL_ftype2967z00_7181);
						BgL_otype2968z00_8174 = (BgL_typez00_bglt) (BgL_otype2968z00_7182);
						{	/* Ast/node.scm 123 */
							obj_t BgL_loc2960z00_8175;

							BgL_typez00_bglt BgL_type2961z00_8176;

							obj_t BgL_sidezd2effectzf32962z21_8177;

							obj_t BgL_key2963z00_8178;

							obj_t BgL_exprza22964za2_8179;

							obj_t BgL_effect2965z00_8180;

							obj_t BgL_czd2heapzd2format2966z00_8181;

							BgL_typez00_bglt BgL_ftype2967z00_8182;

							BgL_typez00_bglt BgL_otype2968z00_8183;

							BgL_loc2960z00_8175 = BgL_loc2960z00_7174;
							BgL_type2961z00_8176 = BgL_type2961z00_8167;
							BgL_sidezd2effectzf32962z21_8177 =
								BgL_sidezd2effectzf32962z21_7176;
							BgL_key2963z00_8178 = BgL_key2963z00_7177;
							BgL_exprza22964za2_8179 = BgL_exprza22964za2_8170;
							BgL_effect2965z00_8180 = BgL_effect2965z00_7179;
							BgL_czd2heapzd2format2966z00_8181 =
								BgL_czd2heapzd2format2966z00_8172;
							BgL_ftype2967z00_8182 = BgL_ftype2967z00_8173;
							BgL_otype2968z00_8183 = BgL_otype2968z00_8174;
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->BgL_locz00) =
								((obj_t) BgL_loc2960z00_8175), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2961z00_8176), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32962z21_8177), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->BgL_keyz00) =
								((obj_t) BgL_key2963z00_8178), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22964za2_8179), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->
									BgL_effectz00) = ((obj_t) BgL_effect2965z00_8180), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->
									BgL_czd2heapzd2formatz00) =
								((obj_t) BgL_czd2heapzd2format2966z00_8181), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype2967z00_8182), BUNSPEC);
							((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_8165))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype2968z00_8183), BUNSPEC);
							BgL_res5587z00_8184 = BgL_new2969z00_8165;
						}
					}
					BgL_auxz00_10100 = BgL_res5587z00_8184;
				}
				return (obj_t) (BgL_auxz00_10100);
			}
		}
	}



/* %allocate-valloc */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt BGl_z52allocatezd2vallocz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{	/* Ast/node.scm 123 */
				BgL_vallocz00_bglt BgL_new2980z00_8185;

				BgL_new2980z00_8185 =
					((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_vallocz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2980z00_8185),
					BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
				{	/* Ast/node.scm 123 */
					BgL_objectz00_bglt BgL_auxz00_10119;

					BgL_auxz00_10119 = (BgL_objectz00_bglt) (BgL_new2980z00_8185);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10119, BFALSE);
				}
				return BgL_new2980z00_8185;
			}
		}
	}



/* _%allocate-valloc */
	obj_t BGl__z52allocatezd2vallocz80zzast_nodez00(obj_t BgL_envz00_6831)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{	/* Ast/node.scm 123 */
				BgL_vallocz00_bglt BgL_auxz00_10122;

				{	/* Ast/node.scm 123 */
					BgL_vallocz00_bglt BgL_res5588z00_8189;

					{	/* Ast/node.scm 123 */
						BgL_vallocz00_bglt BgL_new2980z00_8187;

						BgL_new2980z00_8187 =
							((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_vallocz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2980z00_8187),
							BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
						{	/* Ast/node.scm 123 */
							BgL_objectz00_bglt BgL_auxz00_10127;

							BgL_auxz00_10127 = (BgL_objectz00_bglt) (BgL_new2980z00_8187);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10127, BFALSE);
						}
						BgL_res5588z00_8189 = BgL_new2980z00_8187;
					}
					BgL_auxz00_10122 = BgL_res5588z00_8189;
				}
				return (obj_t) (BgL_auxz00_10122);
			}
		}
	}



/* valloc-nil */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt BGl_valloczd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			if ((BGl_z52thezd2valloczd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 123 */
					{	/* Ast/node.scm 123 */
						BgL_vallocz00_bglt BgL_res5341z00_3935;

						{	/* Ast/node.scm 123 */
							BgL_vallocz00_bglt BgL_new2980z00_3931;

							BgL_new2980z00_3931 =
								((BgL_vallocz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2980z00_3931),
								BGl_classzd2numzd2zz__objectz00(BGl_vallocz00zzast_nodez00));
							{	/* Ast/node.scm 123 */
								BgL_objectz00_bglt BgL_auxz00_10137;

								BgL_auxz00_10137 = (BgL_objectz00_bglt) (BgL_new2980z00_3931);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10137, BFALSE);
							}
							BgL_res5341z00_3935 = BgL_new2980z00_3931;
						}
						BGl_z52thezd2valloczd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5341z00_3935);
					}
					{	/* Ast/node.scm 123 */
						BgL_typez00_bglt BgL_arg4638z00_1551;

						BgL_typez00_bglt BgL_arg4641z00_1554;

						BgL_typez00_bglt BgL_arg4642z00_1555;

						BgL_arg4638z00_1551 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4641z00_1554 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4642z00_1555 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 123 */
							BgL_vallocz00_bglt BgL_res5342z00_3955;

							{	/* Ast/node.scm 123 */
								BgL_vallocz00_bglt BgL_new2969z00_3936;

								BgL_new2969z00_3936 =
									(BgL_vallocz00_bglt)
									(BGl_z52thezd2valloczd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 123 */
									obj_t BgL_loc2960z00_3946;

									BgL_typez00_bglt BgL_type2961z00_3947;

									obj_t BgL_sidezd2effectzf32962z21_3948;

									obj_t BgL_key2963z00_3949;

									obj_t BgL_exprza22964za2_3950;

									obj_t BgL_effect2965z00_3951;

									obj_t BgL_czd2heapzd2format2966z00_3952;

									BgL_typez00_bglt BgL_ftype2967z00_3953;

									BgL_typez00_bglt BgL_otype2968z00_3954;

									BgL_loc2960z00_3946 = BUNSPEC;
									BgL_type2961z00_3947 = BgL_arg4638z00_1551;
									BgL_sidezd2effectzf32962z21_3948 = BUNSPEC;
									BgL_key2963z00_3949 = BUNSPEC;
									BgL_exprza22964za2_3950 = BNIL;
									BgL_effect2965z00_3951 = BUNSPEC;
									BgL_czd2heapzd2format2966z00_3952 =
										BGl_string5458z00zzast_nodez00;
									BgL_ftype2967z00_3953 = BgL_arg4641z00_1554;
									BgL_otype2968z00_3954 = BgL_arg4642z00_1555;
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_locz00) = ((obj_t) BgL_loc2960z00_3946), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2961z00_3947), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32962z21_3948), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_keyz00) = ((obj_t) BgL_key2963z00_3949), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22964za2_3950), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_effectz00) =
										((obj_t) BgL_effect2965z00_3951), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_czd2heapzd2formatz00) =
										((obj_t) BgL_czd2heapzd2format2966z00_3952), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2967z00_3953), BUNSPEC);
									((((BgL_vallocz00_bglt) CREF(BgL_new2969z00_3936))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2968z00_3954), BUNSPEC);
									BgL_res5342z00_3955 = BgL_new2969z00_3936;
							}}
							(obj_t) (BgL_res5342z00_3955);
				}}}
			else
				{	/* Ast/node.scm 123 */
					BFALSE;
				}
			return (BgL_vallocz00_bglt) (BGl_z52thezd2valloczd2nilz52zzast_nodez00);
		}
	}



/* _valloc-nil */
	obj_t BGl__valloczd2nilzd2zzast_nodez00(obj_t BgL_envz00_6832)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			return (obj_t) (BGl_valloczd2nilzd2zzast_nodez00());
		}
	}



/* new? */
	BGL_EXPORTED_DEF bool_t BGl_newzf3zf3zzast_nodez00(obj_t BgL_obj2929z00_454)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2929z00_454,
				BGl_newz00zzast_nodez00);
		}
	}



/* _new? */
	obj_t BGl__newzf3zf3zzast_nodez00(obj_t BgL_envz00_6829,
		obj_t BgL_obj2929z00_6830)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2929z00_6830,
					BGl_newz00zzast_nodez00));
		}
	}



/* make-new */
	BGL_EXPORTED_DEF BgL_newz00_bglt BGl_makezd2newzd2zzast_nodez00(obj_t
		BgL_loc2873z00_458, BgL_typez00_bglt BgL_type2874z00_459,
		obj_t BgL_sidezd2effectzf32875z21_460, obj_t BgL_key2876z00_461,
		obj_t BgL_exprza22877za2_462, obj_t BgL_effect2878z00_463,
		obj_t BgL_argszd2type2879zd2_464)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{	/* Ast/node.scm 119 */
				BgL_newz00_bglt BgL_new2880z00_3956;

				{	/* Ast/node.scm 119 */
					BgL_newz00_bglt BgL_res5343z00_3961;

					{	/* Ast/node.scm 119 */
						BgL_newz00_bglt BgL_new2898z00_3957;

						BgL_new2898z00_3957 =
							((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_newz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2898z00_3957),
							BGl_classzd2numzd2zz__objectz00(BGl_newz00zzast_nodez00));
						{	/* Ast/node.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_10165;

							BgL_auxz00_10165 = (BgL_objectz00_bglt) (BgL_new2898z00_3957);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10165, BFALSE);
						}
						BgL_res5343z00_3961 = BgL_new2898z00_3957;
					}
					BgL_new2880z00_3956 = BgL_res5343z00_3961;
				}
				{	/* Ast/node.scm 119 */
					BgL_newz00_bglt BgL_res5344z00_3977;

					{	/* Ast/node.scm 119 */
						BgL_newz00_bglt BgL_new2889z00_3962;

						BgL_new2889z00_3962 = BgL_new2880z00_3956;
						{	/* Ast/node.scm 119 */
							obj_t BgL_loc2882z00_3970;

							BgL_typez00_bglt BgL_type2883z00_3971;

							obj_t BgL_sidezd2effectzf32884z21_3972;

							obj_t BgL_key2885z00_3973;

							obj_t BgL_exprza22886za2_3974;

							obj_t BgL_effect2887z00_3975;

							obj_t BgL_argszd2type2888zd2_3976;

							BgL_loc2882z00_3970 = BgL_loc2873z00_458;
							BgL_type2883z00_3971 = BgL_type2874z00_459;
							BgL_sidezd2effectzf32884z21_3972 =
								BgL_sidezd2effectzf32875z21_460;
							BgL_key2885z00_3973 = BgL_key2876z00_461;
							BgL_exprza22886za2_3974 = BgL_exprza22877za2_462;
							BgL_effect2887z00_3975 = BgL_effect2878z00_463;
							BgL_argszd2type2888zd2_3976 = BgL_argszd2type2879zd2_464;
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->BgL_locz00) =
								((obj_t) BgL_loc2882z00_3970), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2883z00_3971), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32884z21_3972), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->BgL_keyz00) =
								((obj_t) BgL_key2885z00_3973), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->BgL_exprza2za2) =
								((obj_t) BgL_exprza22886za2_3974), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->BgL_effectz00) =
								((obj_t) BgL_effect2887z00_3975), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_3962))->
									BgL_argszd2typezd2) =
								((obj_t) BgL_argszd2type2888zd2_3976), BUNSPEC);
							BgL_res5344z00_3977 = BgL_new2889z00_3962;
					}} BgL_res5344z00_3977;
				}
				return BgL_new2880z00_3956;
			}
		}
	}



/* _make-new */
	obj_t BGl__makezd2newzd2zzast_nodez00(obj_t BgL_envz00_7183,
		obj_t BgL_loc2873z00_7184, obj_t BgL_type2874z00_7185,
		obj_t BgL_sidezd2effectzf32875z21_7186, obj_t BgL_key2876z00_7187,
		obj_t BgL_exprza22877za2_7188, obj_t BgL_effect2878z00_7189,
		obj_t BgL_argszd2type2879zd2_7190)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			return
				(obj_t) (BGl_makezd2newzd2zzast_nodez00(BgL_loc2873z00_7184,
					(BgL_typez00_bglt) (BgL_type2874z00_7185),
					BgL_sidezd2effectzf32875z21_7186, BgL_key2876z00_7187,
					BgL_exprza22877za2_7188, BgL_effect2878z00_7189,
					BgL_argszd2type2879zd2_7190));
		}
	}



/* fill-new! */
	BGL_EXPORTED_DEF BgL_newz00_bglt
		BGl_fillzd2newz12zc0zzast_nodez00(BgL_newz00_bglt BgL_new2889z00_465,
		obj_t BgL_loc2882z00_466, BgL_typez00_bglt BgL_type2883z00_467,
		obj_t BgL_sidezd2effectzf32884z21_468, obj_t BgL_key2885z00_469,
		obj_t BgL_exprza22886za2_470, obj_t BgL_effect2887z00_471,
		obj_t BgL_argszd2type2888zd2_472)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{	/* Ast/node.scm 119 */
				obj_t BgL_loc2882z00_8191;

				BgL_typez00_bglt BgL_type2883z00_8192;

				obj_t BgL_sidezd2effectzf32884z21_8193;

				obj_t BgL_key2885z00_8194;

				obj_t BgL_exprza22886za2_8195;

				obj_t BgL_effect2887z00_8196;

				obj_t BgL_argszd2type2888zd2_8197;

				BgL_loc2882z00_8191 = BgL_loc2882z00_466;
				BgL_type2883z00_8192 = BgL_type2883z00_467;
				BgL_sidezd2effectzf32884z21_8193 = BgL_sidezd2effectzf32884z21_468;
				BgL_key2885z00_8194 = BgL_key2885z00_469;
				BgL_exprza22886za2_8195 = BgL_exprza22886za2_470;
				BgL_effect2887z00_8196 = BgL_effect2887z00_471;
				BgL_argszd2type2888zd2_8197 = BgL_argszd2type2888zd2_472;
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->BgL_locz00) =
					((obj_t) BgL_loc2882z00_8191), BUNSPEC);
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2883z00_8192), BUNSPEC);
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32884z21_8193), BUNSPEC);
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->BgL_keyz00) =
					((obj_t) BgL_key2885z00_8194), BUNSPEC);
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->BgL_exprza2za2) =
					((obj_t) BgL_exprza22886za2_8195), BUNSPEC);
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->BgL_effectz00) =
					((obj_t) BgL_effect2887z00_8196), BUNSPEC);
				((((BgL_newz00_bglt) CREF(BgL_new2889z00_465))->BgL_argszd2typezd2) =
					((obj_t) BgL_argszd2type2888zd2_8197), BUNSPEC);
				return BgL_new2889z00_465;
			}
		}
	}



/* _fill-new! */
	obj_t BGl__fillzd2newz12zc0zzast_nodez00(obj_t BgL_envz00_7191,
		obj_t BgL_new2889z00_7192, obj_t BgL_loc2882z00_7193,
		obj_t BgL_type2883z00_7194, obj_t BgL_sidezd2effectzf32884z21_7195,
		obj_t BgL_key2885z00_7196, obj_t BgL_exprza22886za2_7197,
		obj_t BgL_effect2887z00_7198, obj_t BgL_argszd2type2888zd2_7199)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{	/* Ast/node.scm 119 */
				BgL_newz00_bglt BgL_auxz00_10185;

				{	/* Ast/node.scm 119 */
					BgL_newz00_bglt BgL_res5589z00_8213;

					{	/* Ast/node.scm 119 */
						BgL_newz00_bglt BgL_new2889z00_8198;

						BgL_typez00_bglt BgL_type2883z00_8200;

						obj_t BgL_exprza22886za2_8203;

						obj_t BgL_argszd2type2888zd2_8205;

						BgL_new2889z00_8198 = (BgL_newz00_bglt) (BgL_new2889z00_7192);
						BgL_type2883z00_8200 = (BgL_typez00_bglt) (BgL_type2883z00_7194);
						BgL_exprza22886za2_8203 = BgL_exprza22886za2_7197;
						BgL_argszd2type2888zd2_8205 = BgL_argszd2type2888zd2_7199;
						{	/* Ast/node.scm 119 */
							obj_t BgL_loc2882z00_8206;

							BgL_typez00_bglt BgL_type2883z00_8207;

							obj_t BgL_sidezd2effectzf32884z21_8208;

							obj_t BgL_key2885z00_8209;

							obj_t BgL_exprza22886za2_8210;

							obj_t BgL_effect2887z00_8211;

							obj_t BgL_argszd2type2888zd2_8212;

							BgL_loc2882z00_8206 = BgL_loc2882z00_7193;
							BgL_type2883z00_8207 = BgL_type2883z00_8200;
							BgL_sidezd2effectzf32884z21_8208 =
								BgL_sidezd2effectzf32884z21_7195;
							BgL_key2885z00_8209 = BgL_key2885z00_7196;
							BgL_exprza22886za2_8210 = BgL_exprza22886za2_8203;
							BgL_effect2887z00_8211 = BgL_effect2887z00_7198;
							BgL_argszd2type2888zd2_8212 = BgL_argszd2type2888zd2_8205;
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->BgL_locz00) =
								((obj_t) BgL_loc2882z00_8206), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2883z00_8207), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32884z21_8208), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->BgL_keyz00) =
								((obj_t) BgL_key2885z00_8209), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->BgL_exprza2za2) =
								((obj_t) BgL_exprza22886za2_8210), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->BgL_effectz00) =
								((obj_t) BgL_effect2887z00_8211), BUNSPEC);
							((((BgL_newz00_bglt) CREF(BgL_new2889z00_8198))->
									BgL_argszd2typezd2) =
								((obj_t) BgL_argszd2type2888zd2_8212), BUNSPEC);
							BgL_res5589z00_8213 = BgL_new2889z00_8198;
						}
					}
					BgL_auxz00_10185 = BgL_res5589z00_8213;
				}
				return (obj_t) (BgL_auxz00_10185);
			}
		}
	}



/* %allocate-new */
	BGL_EXPORTED_DEF BgL_newz00_bglt BGl_z52allocatezd2newz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{	/* Ast/node.scm 119 */
				BgL_newz00_bglt BgL_new2898z00_8214;

				BgL_new2898z00_8214 =
					((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_newz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2898z00_8214),
					BGl_classzd2numzd2zz__objectz00(BGl_newz00zzast_nodez00));
				{	/* Ast/node.scm 119 */
					BgL_objectz00_bglt BgL_auxz00_10200;

					BgL_auxz00_10200 = (BgL_objectz00_bglt) (BgL_new2898z00_8214);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10200, BFALSE);
				}
				return BgL_new2898z00_8214;
			}
		}
	}



/* _%allocate-new */
	obj_t BGl__z52allocatezd2newz80zzast_nodez00(obj_t BgL_envz00_6827)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{	/* Ast/node.scm 119 */
				BgL_newz00_bglt BgL_auxz00_10203;

				{	/* Ast/node.scm 119 */
					BgL_newz00_bglt BgL_res5590z00_8218;

					{	/* Ast/node.scm 119 */
						BgL_newz00_bglt BgL_new2898z00_8216;

						BgL_new2898z00_8216 =
							((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_newz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2898z00_8216),
							BGl_classzd2numzd2zz__objectz00(BGl_newz00zzast_nodez00));
						{	/* Ast/node.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_10208;

							BgL_auxz00_10208 = (BgL_objectz00_bglt) (BgL_new2898z00_8216);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10208, BFALSE);
						}
						BgL_res5590z00_8218 = BgL_new2898z00_8216;
					}
					BgL_auxz00_10203 = BgL_res5590z00_8218;
				}
				return (obj_t) (BgL_auxz00_10203);
			}
		}
	}



/* new-nil */
	BGL_EXPORTED_DEF BgL_newz00_bglt BGl_newzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			if ((BGl_z52thezd2newzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 119 */
					{	/* Ast/node.scm 119 */
						BgL_newz00_bglt BgL_res5345z00_3993;

						{	/* Ast/node.scm 119 */
							BgL_newz00_bglt BgL_new2898z00_3989;

							BgL_new2898z00_3989 =
								((BgL_newz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_newz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2898z00_3989),
								BGl_classzd2numzd2zz__objectz00(BGl_newz00zzast_nodez00));
							{	/* Ast/node.scm 119 */
								BgL_objectz00_bglt BgL_auxz00_10218;

								BgL_auxz00_10218 = (BgL_objectz00_bglt) (BgL_new2898z00_3989);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10218, BFALSE);
							}
							BgL_res5345z00_3993 = BgL_new2898z00_3989;
						}
						BGl_z52thezd2newzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5345z00_3993);
					}
					{	/* Ast/node.scm 119 */
						BgL_typez00_bglt BgL_arg4645z00_1567;

						BgL_arg4645z00_1567 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 119 */
							BgL_newz00_bglt BgL_res5346z00_4009;

							{	/* Ast/node.scm 119 */
								BgL_newz00_bglt BgL_new2889z00_3994;

								BgL_new2889z00_3994 =
									(BgL_newz00_bglt) (BGl_z52thezd2newzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 119 */
									obj_t BgL_loc2882z00_4002;

									BgL_typez00_bglt BgL_type2883z00_4003;

									obj_t BgL_sidezd2effectzf32884z21_4004;

									obj_t BgL_key2885z00_4005;

									obj_t BgL_exprza22886za2_4006;

									obj_t BgL_effect2887z00_4007;

									obj_t BgL_argszd2type2888zd2_4008;

									BgL_loc2882z00_4002 = BUNSPEC;
									BgL_type2883z00_4003 = BgL_arg4645z00_1567;
									BgL_sidezd2effectzf32884z21_4004 = BUNSPEC;
									BgL_key2885z00_4005 = BUNSPEC;
									BgL_exprza22886za2_4006 = BNIL;
									BgL_effect2887z00_4007 = BUNSPEC;
									BgL_argszd2type2888zd2_4008 = BNIL;
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->BgL_locz00) =
										((obj_t) BgL_loc2882z00_4002), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2883z00_4003), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32884z21_4004), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->BgL_keyz00) =
										((obj_t) BgL_key2885z00_4005), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22886za2_4006), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->
											BgL_effectz00) =
										((obj_t) BgL_effect2887z00_4007), BUNSPEC);
									((((BgL_newz00_bglt) CREF(BgL_new2889z00_3994))->
											BgL_argszd2typezd2) =
										((obj_t) BgL_argszd2type2888zd2_4008), BUNSPEC);
									BgL_res5346z00_4009 = BgL_new2889z00_3994;
							}}
							(obj_t) (BgL_res5346z00_4009);
				}}}
			else
				{	/* Ast/node.scm 119 */
					BFALSE;
				}
			return (BgL_newz00_bglt) (BGl_z52thezd2newzd2nilz52zzast_nodez00);
		}
	}



/* _new-nil */
	obj_t BGl__newzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6828)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			return (obj_t) (BGl_newzd2nilzd2zzast_nodez00());
		}
	}



/* setfield? */
	BGL_EXPORTED_DEF bool_t BGl_setfieldzf3zf3zzast_nodez00(obj_t
		BgL_obj2853z00_476)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2853z00_476,
				BGl_setfieldz00zzast_nodez00);
		}
	}



/* _setfield? */
	obj_t BGl__setfieldzf3zf3zzast_nodez00(obj_t BgL_envz00_6825,
		obj_t BgL_obj2853z00_6826)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2853z00_6826,
					BGl_setfieldz00zzast_nodez00));
		}
	}



/* make-setfield */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt
		BGl_makezd2setfieldzd2zzast_nodez00(obj_t BgL_loc2783z00_480,
		BgL_typez00_bglt BgL_type2784z00_481, obj_t BgL_sidezd2effectzf32785z21_482,
		obj_t BgL_key2786z00_483, obj_t BgL_exprza22787za2_484,
		obj_t BgL_effect2788z00_485, obj_t BgL_fname2789z00_486,
		BgL_typez00_bglt BgL_ftype2790z00_487,
		BgL_typez00_bglt BgL_otype2791z00_488)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{	/* Ast/node.scm 110 */
				BgL_setfieldz00_bglt BgL_new2792z00_4010;

				{	/* Ast/node.scm 110 */
					BgL_setfieldz00_bglt BgL_res5347z00_4015;

					{	/* Ast/node.scm 110 */
						BgL_setfieldz00_bglt BgL_new2814z00_4011;

						BgL_new2814z00_4011 =
							((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2814z00_4011),
							BGl_classzd2numzd2zz__objectz00(BGl_setfieldz00zzast_nodez00));
						{	/* Ast/node.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_10242;

							BgL_auxz00_10242 = (BgL_objectz00_bglt) (BgL_new2814z00_4011);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10242, BFALSE);
						}
						BgL_res5347z00_4015 = BgL_new2814z00_4011;
					}
					BgL_new2792z00_4010 = BgL_res5347z00_4015;
				}
				{	/* Ast/node.scm 110 */
					BgL_setfieldz00_bglt BgL_res5348z00_4035;

					{	/* Ast/node.scm 110 */
						BgL_setfieldz00_bglt BgL_new2803z00_4016;

						BgL_new2803z00_4016 = BgL_new2792z00_4010;
						{	/* Ast/node.scm 110 */
							obj_t BgL_loc2794z00_4026;

							BgL_typez00_bglt BgL_type2795z00_4027;

							obj_t BgL_sidezd2effectzf32796z21_4028;

							obj_t BgL_key2797z00_4029;

							obj_t BgL_exprza22798za2_4030;

							obj_t BgL_effect2799z00_4031;

							obj_t BgL_fname2800z00_4032;

							BgL_typez00_bglt BgL_ftype2801z00_4033;

							BgL_typez00_bglt BgL_otype2802z00_4034;

							BgL_loc2794z00_4026 = BgL_loc2783z00_480;
							BgL_type2795z00_4027 = BgL_type2784z00_481;
							BgL_sidezd2effectzf32796z21_4028 =
								BgL_sidezd2effectzf32785z21_482;
							BgL_key2797z00_4029 = BgL_key2786z00_483;
							BgL_exprza22798za2_4030 = BgL_exprza22787za2_484;
							BgL_effect2799z00_4031 = BgL_effect2788z00_485;
							BgL_fname2800z00_4032 = BgL_fname2789z00_486;
							BgL_ftype2801z00_4033 = BgL_ftype2790z00_487;
							BgL_otype2802z00_4034 = BgL_otype2791z00_488;
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_locz00) = ((obj_t) BgL_loc2794z00_4026), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2795z00_4027), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32796z21_4028), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_keyz00) = ((obj_t) BgL_key2797z00_4029), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22798za2_4030), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_effectz00) = ((obj_t) BgL_effect2799z00_4031), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_fnamez00) = ((obj_t) BgL_fname2800z00_4032), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype2801z00_4033), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4016))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype2802z00_4034), BUNSPEC);
							BgL_res5348z00_4035 = BgL_new2803z00_4016;
					}} BgL_res5348z00_4035;
				}
				return BgL_new2792z00_4010;
			}
		}
	}



/* _make-setfield */
	obj_t BGl__makezd2setfieldzd2zzast_nodez00(obj_t BgL_envz00_7200,
		obj_t BgL_loc2783z00_7201, obj_t BgL_type2784z00_7202,
		obj_t BgL_sidezd2effectzf32785z21_7203, obj_t BgL_key2786z00_7204,
		obj_t BgL_exprza22787za2_7205, obj_t BgL_effect2788z00_7206,
		obj_t BgL_fname2789z00_7207, obj_t BgL_ftype2790z00_7208,
		obj_t BgL_otype2791z00_7209)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			return
				(obj_t) (BGl_makezd2setfieldzd2zzast_nodez00(BgL_loc2783z00_7201,
					(BgL_typez00_bglt) (BgL_type2784z00_7202),
					BgL_sidezd2effectzf32785z21_7203, BgL_key2786z00_7204,
					BgL_exprza22787za2_7205, BgL_effect2788z00_7206,
					BgL_fname2789z00_7207, (BgL_typez00_bglt) (BgL_ftype2790z00_7208),
					(BgL_typez00_bglt) (BgL_otype2791z00_7209)));
		}
	}



/* fill-setfield! */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt
		BGl_fillzd2setfieldz12zc0zzast_nodez00(BgL_setfieldz00_bglt
		BgL_new2803z00_489, obj_t BgL_loc2794z00_490,
		BgL_typez00_bglt BgL_type2795z00_491, obj_t BgL_sidezd2effectzf32796z21_492,
		obj_t BgL_key2797z00_493, obj_t BgL_exprza22798za2_494,
		obj_t BgL_effect2799z00_495, obj_t BgL_fname2800z00_496,
		BgL_typez00_bglt BgL_ftype2801z00_497,
		BgL_typez00_bglt BgL_otype2802z00_498)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{	/* Ast/node.scm 110 */
				obj_t BgL_loc2794z00_8220;

				BgL_typez00_bglt BgL_type2795z00_8221;

				obj_t BgL_sidezd2effectzf32796z21_8222;

				obj_t BgL_key2797z00_8223;

				obj_t BgL_exprza22798za2_8224;

				obj_t BgL_effect2799z00_8225;

				obj_t BgL_fname2800z00_8226;

				BgL_typez00_bglt BgL_ftype2801z00_8227;

				BgL_typez00_bglt BgL_otype2802z00_8228;

				BgL_loc2794z00_8220 = BgL_loc2794z00_490;
				BgL_type2795z00_8221 = BgL_type2795z00_491;
				BgL_sidezd2effectzf32796z21_8222 = BgL_sidezd2effectzf32796z21_492;
				BgL_key2797z00_8223 = BgL_key2797z00_493;
				BgL_exprza22798za2_8224 = BgL_exprza22798za2_494;
				BgL_effect2799z00_8225 = BgL_effect2799z00_495;
				BgL_fname2800z00_8226 = BgL_fname2800z00_496;
				BgL_ftype2801z00_8227 = BgL_ftype2801z00_497;
				BgL_otype2802z00_8228 = BgL_otype2802z00_498;
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_locz00) =
					((obj_t) BgL_loc2794z00_8220), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2795z00_8221), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32796z21_8222), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_keyz00) =
					((obj_t) BgL_key2797z00_8223), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_exprza2za2) =
					((obj_t) BgL_exprza22798za2_8224), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_effectz00) =
					((obj_t) BgL_effect2799z00_8225), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_fnamez00) =
					((obj_t) BgL_fname2800z00_8226), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype2801z00_8227), BUNSPEC);
				((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_489))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype2802z00_8228), BUNSPEC);
				return BgL_new2803z00_489;
			}
		}
	}



/* _fill-setfield! */
	obj_t BGl__fillzd2setfieldz12zc0zzast_nodez00(obj_t BgL_envz00_7210,
		obj_t BgL_new2803z00_7211, obj_t BgL_loc2794z00_7212,
		obj_t BgL_type2795z00_7213, obj_t BgL_sidezd2effectzf32796z21_7214,
		obj_t BgL_key2797z00_7215, obj_t BgL_exprza22798za2_7216,
		obj_t BgL_effect2799z00_7217, obj_t BgL_fname2800z00_7218,
		obj_t BgL_ftype2801z00_7219, obj_t BgL_otype2802z00_7220)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{	/* Ast/node.scm 110 */
				BgL_setfieldz00_bglt BgL_auxz00_10268;

				{	/* Ast/node.scm 110 */
					BgL_setfieldz00_bglt BgL_res5591z00_8248;

					{	/* Ast/node.scm 110 */
						BgL_setfieldz00_bglt BgL_new2803z00_8229;

						BgL_typez00_bglt BgL_type2795z00_8231;

						obj_t BgL_exprza22798za2_8234;

						obj_t BgL_fname2800z00_8236;

						BgL_typez00_bglt BgL_ftype2801z00_8237;

						BgL_typez00_bglt BgL_otype2802z00_8238;

						BgL_new2803z00_8229 = (BgL_setfieldz00_bglt) (BgL_new2803z00_7211);
						BgL_type2795z00_8231 = (BgL_typez00_bglt) (BgL_type2795z00_7213);
						BgL_exprza22798za2_8234 = BgL_exprza22798za2_7216;
						BgL_fname2800z00_8236 = BgL_fname2800z00_7218;
						BgL_ftype2801z00_8237 = (BgL_typez00_bglt) (BgL_ftype2801z00_7219);
						BgL_otype2802z00_8238 = (BgL_typez00_bglt) (BgL_otype2802z00_7220);
						{	/* Ast/node.scm 110 */
							obj_t BgL_loc2794z00_8239;

							BgL_typez00_bglt BgL_type2795z00_8240;

							obj_t BgL_sidezd2effectzf32796z21_8241;

							obj_t BgL_key2797z00_8242;

							obj_t BgL_exprza22798za2_8243;

							obj_t BgL_effect2799z00_8244;

							obj_t BgL_fname2800z00_8245;

							BgL_typez00_bglt BgL_ftype2801z00_8246;

							BgL_typez00_bglt BgL_otype2802z00_8247;

							BgL_loc2794z00_8239 = BgL_loc2794z00_7212;
							BgL_type2795z00_8240 = BgL_type2795z00_8231;
							BgL_sidezd2effectzf32796z21_8241 =
								BgL_sidezd2effectzf32796z21_7214;
							BgL_key2797z00_8242 = BgL_key2797z00_7215;
							BgL_exprza22798za2_8243 = BgL_exprza22798za2_8234;
							BgL_effect2799z00_8244 = BgL_effect2799z00_7217;
							BgL_fname2800z00_8245 = BgL_fname2800z00_8236;
							BgL_ftype2801z00_8246 = BgL_ftype2801z00_8237;
							BgL_otype2802z00_8247 = BgL_otype2802z00_8238;
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_locz00) = ((obj_t) BgL_loc2794z00_8239), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2795z00_8240), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32796z21_8241), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_keyz00) = ((obj_t) BgL_key2797z00_8242), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22798za2_8243), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_effectz00) = ((obj_t) BgL_effect2799z00_8244), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_fnamez00) = ((obj_t) BgL_fname2800z00_8245), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype2801z00_8246), BUNSPEC);
							((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_8229))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype2802z00_8247), BUNSPEC);
							BgL_res5591z00_8248 = BgL_new2803z00_8229;
						}
					}
					BgL_auxz00_10268 = BgL_res5591z00_8248;
				}
				return (obj_t) (BgL_auxz00_10268);
			}
		}
	}



/* %allocate-setfield */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt
		BGl_z52allocatezd2setfieldz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{	/* Ast/node.scm 110 */
				BgL_setfieldz00_bglt BgL_new2814z00_8249;

				BgL_new2814z00_8249 =
					((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setfieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2814z00_8249),
					BGl_classzd2numzd2zz__objectz00(BGl_setfieldz00zzast_nodez00));
				{	/* Ast/node.scm 110 */
					BgL_objectz00_bglt BgL_auxz00_10287;

					BgL_auxz00_10287 = (BgL_objectz00_bglt) (BgL_new2814z00_8249);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10287, BFALSE);
				}
				return BgL_new2814z00_8249;
			}
		}
	}



/* _%allocate-setfield */
	obj_t BGl__z52allocatezd2setfieldz80zzast_nodez00(obj_t BgL_envz00_6823)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{	/* Ast/node.scm 110 */
				BgL_setfieldz00_bglt BgL_auxz00_10290;

				{	/* Ast/node.scm 110 */
					BgL_setfieldz00_bglt BgL_res5592z00_8253;

					{	/* Ast/node.scm 110 */
						BgL_setfieldz00_bglt BgL_new2814z00_8251;

						BgL_new2814z00_8251 =
							((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2814z00_8251),
							BGl_classzd2numzd2zz__objectz00(BGl_setfieldz00zzast_nodez00));
						{	/* Ast/node.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_10295;

							BgL_auxz00_10295 = (BgL_objectz00_bglt) (BgL_new2814z00_8251);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10295, BFALSE);
						}
						BgL_res5592z00_8253 = BgL_new2814z00_8251;
					}
					BgL_auxz00_10290 = BgL_res5592z00_8253;
				}
				return (obj_t) (BgL_auxz00_10290);
			}
		}
	}



/* setfield-nil */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt BGl_setfieldzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			if ((BGl_z52thezd2setfieldzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 110 */
					{	/* Ast/node.scm 110 */
						BgL_setfieldz00_bglt BgL_res5349z00_4053;

						{	/* Ast/node.scm 110 */
							BgL_setfieldz00_bglt BgL_new2814z00_4049;

							BgL_new2814z00_4049 =
								((BgL_setfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setfieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2814z00_4049),
								BGl_classzd2numzd2zz__objectz00(BGl_setfieldz00zzast_nodez00));
							{	/* Ast/node.scm 110 */
								BgL_objectz00_bglt BgL_auxz00_10305;

								BgL_auxz00_10305 = (BgL_objectz00_bglt) (BgL_new2814z00_4049);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10305, BFALSE);
							}
							BgL_res5349z00_4053 = BgL_new2814z00_4049;
						}
						BGl_z52thezd2setfieldzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5349z00_4053);
					}
					{	/* Ast/node.scm 110 */
						BgL_typez00_bglt BgL_arg4651z00_1583;

						BgL_typez00_bglt BgL_arg4654z00_1586;

						BgL_typez00_bglt BgL_arg4655z00_1587;

						BgL_arg4651z00_1583 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4654z00_1586 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4655z00_1587 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 110 */
							BgL_setfieldz00_bglt BgL_res5350z00_4073;

							{	/* Ast/node.scm 110 */
								BgL_setfieldz00_bglt BgL_new2803z00_4054;

								BgL_new2803z00_4054 =
									(BgL_setfieldz00_bglt)
									(BGl_z52thezd2setfieldzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 110 */
									obj_t BgL_loc2794z00_4064;

									BgL_typez00_bglt BgL_type2795z00_4065;

									obj_t BgL_sidezd2effectzf32796z21_4066;

									obj_t BgL_key2797z00_4067;

									obj_t BgL_exprza22798za2_4068;

									obj_t BgL_effect2799z00_4069;

									obj_t BgL_fname2800z00_4070;

									BgL_typez00_bglt BgL_ftype2801z00_4071;

									BgL_typez00_bglt BgL_otype2802z00_4072;

									BgL_loc2794z00_4064 = BUNSPEC;
									BgL_type2795z00_4065 = BgL_arg4651z00_1583;
									BgL_sidezd2effectzf32796z21_4066 = BUNSPEC;
									BgL_key2797z00_4067 = BUNSPEC;
									BgL_exprza22798za2_4068 = BNIL;
									BgL_effect2799z00_4069 = BUNSPEC;
									BgL_fname2800z00_4070 = BGl_string5458z00zzast_nodez00;
									BgL_ftype2801z00_4071 = BgL_arg4654z00_1586;
									BgL_otype2802z00_4072 = BgL_arg4655z00_1587;
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_locz00) = ((obj_t) BgL_loc2794z00_4064), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2795z00_4065), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32796z21_4066), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_keyz00) = ((obj_t) BgL_key2797z00_4067), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22798za2_4068), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_effectz00) =
										((obj_t) BgL_effect2799z00_4069), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_fnamez00) = ((obj_t) BgL_fname2800z00_4070), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2801z00_4071), BUNSPEC);
									((((BgL_setfieldz00_bglt) CREF(BgL_new2803z00_4054))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2802z00_4072), BUNSPEC);
									BgL_res5350z00_4073 = BgL_new2803z00_4054;
							}}
							(obj_t) (BgL_res5350z00_4073);
				}}}
			else
				{	/* Ast/node.scm 110 */
					BFALSE;
				}
			return
				(BgL_setfieldz00_bglt) (BGl_z52thezd2setfieldzd2nilz52zzast_nodez00);
		}
	}



/* _setfield-nil */
	obj_t BGl__setfieldzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6824)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			return (obj_t) (BGl_setfieldzd2nilzd2zzast_nodez00());
		}
	}



/* getfield? */
	BGL_EXPORTED_DEF bool_t BGl_getfieldzf3zf3zzast_nodez00(obj_t
		BgL_obj2763z00_502)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2763z00_502,
				BGl_getfieldz00zzast_nodez00);
		}
	}



/* _getfield? */
	obj_t BGl__getfieldzf3zf3zzast_nodez00(obj_t BgL_envz00_6821,
		obj_t BgL_obj2763z00_6822)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2763z00_6822,
					BGl_getfieldz00zzast_nodez00));
		}
	}



/* make-getfield */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt
		BGl_makezd2getfieldzd2zzast_nodez00(obj_t BgL_loc2693z00_506,
		BgL_typez00_bglt BgL_type2694z00_507, obj_t BgL_sidezd2effectzf32695z21_508,
		obj_t BgL_key2696z00_509, obj_t BgL_exprza22697za2_510,
		obj_t BgL_effect2698z00_511, obj_t BgL_fname2699z00_512,
		BgL_typez00_bglt BgL_ftype2700z00_513,
		BgL_typez00_bglt BgL_otype2701z00_514)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{	/* Ast/node.scm 101 */
				BgL_getfieldz00_bglt BgL_new2702z00_4074;

				{	/* Ast/node.scm 101 */
					BgL_getfieldz00_bglt BgL_res5351z00_4079;

					{	/* Ast/node.scm 101 */
						BgL_getfieldz00_bglt BgL_new2724z00_4075;

						BgL_new2724z00_4075 =
							((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_getfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2724z00_4075),
							BGl_classzd2numzd2zz__objectz00(BGl_getfieldz00zzast_nodez00));
						{	/* Ast/node.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_10333;

							BgL_auxz00_10333 = (BgL_objectz00_bglt) (BgL_new2724z00_4075);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10333, BFALSE);
						}
						BgL_res5351z00_4079 = BgL_new2724z00_4075;
					}
					BgL_new2702z00_4074 = BgL_res5351z00_4079;
				}
				{	/* Ast/node.scm 101 */
					BgL_getfieldz00_bglt BgL_res5352z00_4099;

					{	/* Ast/node.scm 101 */
						BgL_getfieldz00_bglt BgL_new2713z00_4080;

						BgL_new2713z00_4080 = BgL_new2702z00_4074;
						{	/* Ast/node.scm 101 */
							obj_t BgL_loc2704z00_4090;

							BgL_typez00_bglt BgL_type2705z00_4091;

							obj_t BgL_sidezd2effectzf32706z21_4092;

							obj_t BgL_key2707z00_4093;

							obj_t BgL_exprza22708za2_4094;

							obj_t BgL_effect2709z00_4095;

							obj_t BgL_fname2710z00_4096;

							BgL_typez00_bglt BgL_ftype2711z00_4097;

							BgL_typez00_bglt BgL_otype2712z00_4098;

							BgL_loc2704z00_4090 = BgL_loc2693z00_506;
							BgL_type2705z00_4091 = BgL_type2694z00_507;
							BgL_sidezd2effectzf32706z21_4092 =
								BgL_sidezd2effectzf32695z21_508;
							BgL_key2707z00_4093 = BgL_key2696z00_509;
							BgL_exprza22708za2_4094 = BgL_exprza22697za2_510;
							BgL_effect2709z00_4095 = BgL_effect2698z00_511;
							BgL_fname2710z00_4096 = BgL_fname2699z00_512;
							BgL_ftype2711z00_4097 = BgL_ftype2700z00_513;
							BgL_otype2712z00_4098 = BgL_otype2701z00_514;
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_locz00) = ((obj_t) BgL_loc2704z00_4090), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2705z00_4091), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32706z21_4092), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_keyz00) = ((obj_t) BgL_key2707z00_4093), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22708za2_4094), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_effectz00) = ((obj_t) BgL_effect2709z00_4095), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_fnamez00) = ((obj_t) BgL_fname2710z00_4096), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype2711z00_4097), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4080))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype2712z00_4098), BUNSPEC);
							BgL_res5352z00_4099 = BgL_new2713z00_4080;
					}} BgL_res5352z00_4099;
				}
				return BgL_new2702z00_4074;
			}
		}
	}



/* _make-getfield */
	obj_t BGl__makezd2getfieldzd2zzast_nodez00(obj_t BgL_envz00_7221,
		obj_t BgL_loc2693z00_7222, obj_t BgL_type2694z00_7223,
		obj_t BgL_sidezd2effectzf32695z21_7224, obj_t BgL_key2696z00_7225,
		obj_t BgL_exprza22697za2_7226, obj_t BgL_effect2698z00_7227,
		obj_t BgL_fname2699z00_7228, obj_t BgL_ftype2700z00_7229,
		obj_t BgL_otype2701z00_7230)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			return
				(obj_t) (BGl_makezd2getfieldzd2zzast_nodez00(BgL_loc2693z00_7222,
					(BgL_typez00_bglt) (BgL_type2694z00_7223),
					BgL_sidezd2effectzf32695z21_7224, BgL_key2696z00_7225,
					BgL_exprza22697za2_7226, BgL_effect2698z00_7227,
					BgL_fname2699z00_7228, (BgL_typez00_bglt) (BgL_ftype2700z00_7229),
					(BgL_typez00_bglt) (BgL_otype2701z00_7230)));
		}
	}



/* fill-getfield! */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt
		BGl_fillzd2getfieldz12zc0zzast_nodez00(BgL_getfieldz00_bglt
		BgL_new2713z00_515, obj_t BgL_loc2704z00_516,
		BgL_typez00_bglt BgL_type2705z00_517, obj_t BgL_sidezd2effectzf32706z21_518,
		obj_t BgL_key2707z00_519, obj_t BgL_exprza22708za2_520,
		obj_t BgL_effect2709z00_521, obj_t BgL_fname2710z00_522,
		BgL_typez00_bglt BgL_ftype2711z00_523,
		BgL_typez00_bglt BgL_otype2712z00_524)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{	/* Ast/node.scm 101 */
				obj_t BgL_loc2704z00_8255;

				BgL_typez00_bglt BgL_type2705z00_8256;

				obj_t BgL_sidezd2effectzf32706z21_8257;

				obj_t BgL_key2707z00_8258;

				obj_t BgL_exprza22708za2_8259;

				obj_t BgL_effect2709z00_8260;

				obj_t BgL_fname2710z00_8261;

				BgL_typez00_bglt BgL_ftype2711z00_8262;

				BgL_typez00_bglt BgL_otype2712z00_8263;

				BgL_loc2704z00_8255 = BgL_loc2704z00_516;
				BgL_type2705z00_8256 = BgL_type2705z00_517;
				BgL_sidezd2effectzf32706z21_8257 = BgL_sidezd2effectzf32706z21_518;
				BgL_key2707z00_8258 = BgL_key2707z00_519;
				BgL_exprza22708za2_8259 = BgL_exprza22708za2_520;
				BgL_effect2709z00_8260 = BgL_effect2709z00_521;
				BgL_fname2710z00_8261 = BgL_fname2710z00_522;
				BgL_ftype2711z00_8262 = BgL_ftype2711z00_523;
				BgL_otype2712z00_8263 = BgL_otype2712z00_524;
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_locz00) =
					((obj_t) BgL_loc2704z00_8255), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2705z00_8256), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32706z21_8257), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_keyz00) =
					((obj_t) BgL_key2707z00_8258), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_exprza2za2) =
					((obj_t) BgL_exprza22708za2_8259), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_effectz00) =
					((obj_t) BgL_effect2709z00_8260), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_fnamez00) =
					((obj_t) BgL_fname2710z00_8261), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype2711z00_8262), BUNSPEC);
				((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_515))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype2712z00_8263), BUNSPEC);
				return BgL_new2713z00_515;
			}
		}
	}



/* _fill-getfield! */
	obj_t BGl__fillzd2getfieldz12zc0zzast_nodez00(obj_t BgL_envz00_7231,
		obj_t BgL_new2713z00_7232, obj_t BgL_loc2704z00_7233,
		obj_t BgL_type2705z00_7234, obj_t BgL_sidezd2effectzf32706z21_7235,
		obj_t BgL_key2707z00_7236, obj_t BgL_exprza22708za2_7237,
		obj_t BgL_effect2709z00_7238, obj_t BgL_fname2710z00_7239,
		obj_t BgL_ftype2711z00_7240, obj_t BgL_otype2712z00_7241)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{	/* Ast/node.scm 101 */
				BgL_getfieldz00_bglt BgL_auxz00_10359;

				{	/* Ast/node.scm 101 */
					BgL_getfieldz00_bglt BgL_res5593z00_8283;

					{	/* Ast/node.scm 101 */
						BgL_getfieldz00_bglt BgL_new2713z00_8264;

						BgL_typez00_bglt BgL_type2705z00_8266;

						obj_t BgL_exprza22708za2_8269;

						obj_t BgL_fname2710z00_8271;

						BgL_typez00_bglt BgL_ftype2711z00_8272;

						BgL_typez00_bglt BgL_otype2712z00_8273;

						BgL_new2713z00_8264 = (BgL_getfieldz00_bglt) (BgL_new2713z00_7232);
						BgL_type2705z00_8266 = (BgL_typez00_bglt) (BgL_type2705z00_7234);
						BgL_exprza22708za2_8269 = BgL_exprza22708za2_7237;
						BgL_fname2710z00_8271 = BgL_fname2710z00_7239;
						BgL_ftype2711z00_8272 = (BgL_typez00_bglt) (BgL_ftype2711z00_7240);
						BgL_otype2712z00_8273 = (BgL_typez00_bglt) (BgL_otype2712z00_7241);
						{	/* Ast/node.scm 101 */
							obj_t BgL_loc2704z00_8274;

							BgL_typez00_bglt BgL_type2705z00_8275;

							obj_t BgL_sidezd2effectzf32706z21_8276;

							obj_t BgL_key2707z00_8277;

							obj_t BgL_exprza22708za2_8278;

							obj_t BgL_effect2709z00_8279;

							obj_t BgL_fname2710z00_8280;

							BgL_typez00_bglt BgL_ftype2711z00_8281;

							BgL_typez00_bglt BgL_otype2712z00_8282;

							BgL_loc2704z00_8274 = BgL_loc2704z00_7233;
							BgL_type2705z00_8275 = BgL_type2705z00_8266;
							BgL_sidezd2effectzf32706z21_8276 =
								BgL_sidezd2effectzf32706z21_7235;
							BgL_key2707z00_8277 = BgL_key2707z00_7236;
							BgL_exprza22708za2_8278 = BgL_exprza22708za2_8269;
							BgL_effect2709z00_8279 = BgL_effect2709z00_7238;
							BgL_fname2710z00_8280 = BgL_fname2710z00_8271;
							BgL_ftype2711z00_8281 = BgL_ftype2711z00_8272;
							BgL_otype2712z00_8282 = BgL_otype2712z00_8273;
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_locz00) = ((obj_t) BgL_loc2704z00_8274), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2705z00_8275), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32706z21_8276), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_keyz00) = ((obj_t) BgL_key2707z00_8277), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22708za2_8278), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_effectz00) = ((obj_t) BgL_effect2709z00_8279), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_fnamez00) = ((obj_t) BgL_fname2710z00_8280), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) BgL_ftype2711z00_8281), BUNSPEC);
							((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_8264))->
									BgL_otypez00) =
								((BgL_typez00_bglt) BgL_otype2712z00_8282), BUNSPEC);
							BgL_res5593z00_8283 = BgL_new2713z00_8264;
						}
					}
					BgL_auxz00_10359 = BgL_res5593z00_8283;
				}
				return (obj_t) (BgL_auxz00_10359);
			}
		}
	}



/* %allocate-getfield */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt
		BGl_z52allocatezd2getfieldz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{	/* Ast/node.scm 101 */
				BgL_getfieldz00_bglt BgL_new2724z00_8284;

				BgL_new2724z00_8284 =
					((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_getfieldz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2724z00_8284),
					BGl_classzd2numzd2zz__objectz00(BGl_getfieldz00zzast_nodez00));
				{	/* Ast/node.scm 101 */
					BgL_objectz00_bglt BgL_auxz00_10378;

					BgL_auxz00_10378 = (BgL_objectz00_bglt) (BgL_new2724z00_8284);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10378, BFALSE);
				}
				return BgL_new2724z00_8284;
			}
		}
	}



/* _%allocate-getfield */
	obj_t BGl__z52allocatezd2getfieldz80zzast_nodez00(obj_t BgL_envz00_6819)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{	/* Ast/node.scm 101 */
				BgL_getfieldz00_bglt BgL_auxz00_10381;

				{	/* Ast/node.scm 101 */
					BgL_getfieldz00_bglt BgL_res5594z00_8288;

					{	/* Ast/node.scm 101 */
						BgL_getfieldz00_bglt BgL_new2724z00_8286;

						BgL_new2724z00_8286 =
							((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_getfieldz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2724z00_8286),
							BGl_classzd2numzd2zz__objectz00(BGl_getfieldz00zzast_nodez00));
						{	/* Ast/node.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_10386;

							BgL_auxz00_10386 = (BgL_objectz00_bglt) (BgL_new2724z00_8286);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10386, BFALSE);
						}
						BgL_res5594z00_8288 = BgL_new2724z00_8286;
					}
					BgL_auxz00_10381 = BgL_res5594z00_8288;
				}
				return (obj_t) (BgL_auxz00_10381);
			}
		}
	}



/* getfield-nil */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt BGl_getfieldzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			if ((BGl_z52thezd2getfieldzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 101 */
					{	/* Ast/node.scm 101 */
						BgL_getfieldz00_bglt BgL_res5353z00_4117;

						{	/* Ast/node.scm 101 */
							BgL_getfieldz00_bglt BgL_new2724z00_4113;

							BgL_new2724z00_4113 =
								((BgL_getfieldz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_getfieldz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2724z00_4113),
								BGl_classzd2numzd2zz__objectz00(BGl_getfieldz00zzast_nodez00));
							{	/* Ast/node.scm 101 */
								BgL_objectz00_bglt BgL_auxz00_10396;

								BgL_auxz00_10396 = (BgL_objectz00_bglt) (BgL_new2724z00_4113);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10396, BFALSE);
							}
							BgL_res5353z00_4117 = BgL_new2724z00_4113;
						}
						BGl_z52thezd2getfieldzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5353z00_4117);
					}
					{	/* Ast/node.scm 101 */
						BgL_typez00_bglt BgL_arg4658z00_1601;

						BgL_typez00_bglt BgL_arg4661z00_1604;

						BgL_typez00_bglt BgL_arg4662z00_1605;

						BgL_arg4658z00_1601 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4661z00_1604 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4662z00_1605 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 101 */
							BgL_getfieldz00_bglt BgL_res5354z00_4137;

							{	/* Ast/node.scm 101 */
								BgL_getfieldz00_bglt BgL_new2713z00_4118;

								BgL_new2713z00_4118 =
									(BgL_getfieldz00_bglt)
									(BGl_z52thezd2getfieldzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 101 */
									obj_t BgL_loc2704z00_4128;

									BgL_typez00_bglt BgL_type2705z00_4129;

									obj_t BgL_sidezd2effectzf32706z21_4130;

									obj_t BgL_key2707z00_4131;

									obj_t BgL_exprza22708za2_4132;

									obj_t BgL_effect2709z00_4133;

									obj_t BgL_fname2710z00_4134;

									BgL_typez00_bglt BgL_ftype2711z00_4135;

									BgL_typez00_bglt BgL_otype2712z00_4136;

									BgL_loc2704z00_4128 = BUNSPEC;
									BgL_type2705z00_4129 = BgL_arg4658z00_1601;
									BgL_sidezd2effectzf32706z21_4130 = BUNSPEC;
									BgL_key2707z00_4131 = BUNSPEC;
									BgL_exprza22708za2_4132 = BNIL;
									BgL_effect2709z00_4133 = BUNSPEC;
									BgL_fname2710z00_4134 = BGl_string5458z00zzast_nodez00;
									BgL_ftype2711z00_4135 = BgL_arg4661z00_1604;
									BgL_otype2712z00_4136 = BgL_arg4662z00_1605;
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_locz00) = ((obj_t) BgL_loc2704z00_4128), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2705z00_4129), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32706z21_4130), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_keyz00) = ((obj_t) BgL_key2707z00_4131), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22708za2_4132), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_effectz00) =
										((obj_t) BgL_effect2709z00_4133), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_fnamez00) = ((obj_t) BgL_fname2710z00_4134), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_ftypez00) =
										((BgL_typez00_bglt) BgL_ftype2711z00_4135), BUNSPEC);
									((((BgL_getfieldz00_bglt) CREF(BgL_new2713z00_4118))->
											BgL_otypez00) =
										((BgL_typez00_bglt) BgL_otype2712z00_4136), BUNSPEC);
									BgL_res5354z00_4137 = BgL_new2713z00_4118;
							}}
							(obj_t) (BgL_res5354z00_4137);
				}}}
			else
				{	/* Ast/node.scm 101 */
					BFALSE;
				}
			return
				(BgL_getfieldz00_bglt) (BGl_z52thezd2getfieldzd2nilz52zzast_nodez00);
		}
	}



/* _getfield-nil */
	obj_t BGl__getfieldzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6820)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			return (obj_t) (BGl_getfieldzd2nilzd2zzast_nodez00());
		}
	}



/* pragma? */
	BGL_EXPORTED_DEF bool_t BGl_pragmazf3zf3zzast_nodez00(obj_t
		BgL_obj2673z00_528)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2673z00_528,
				BGl_pragmaz00zzast_nodez00);
		}
	}



/* _pragma? */
	obj_t BGl__pragmazf3zf3zzast_nodez00(obj_t BgL_envz00_6817,
		obj_t BgL_obj2673z00_6818)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2673z00_6818,
					BGl_pragmaz00zzast_nodez00));
		}
	}



/* make-pragma */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt BGl_makezd2pragmazd2zzast_nodez00(obj_t
		BgL_loc2617z00_532, BgL_typez00_bglt BgL_type2618z00_533,
		obj_t BgL_sidezd2effectzf32619z21_534, obj_t BgL_key2620z00_535,
		obj_t BgL_exprza22621za2_536, obj_t BgL_effect2622z00_537,
		obj_t BgL_format2623z00_538)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{	/* Ast/node.scm 97 */
				BgL_pragmaz00_bglt BgL_new2624z00_4138;

				{	/* Ast/node.scm 97 */
					BgL_pragmaz00_bglt BgL_res5355z00_4143;

					{	/* Ast/node.scm 97 */
						BgL_pragmaz00_bglt BgL_new2642z00_4139;

						BgL_new2642z00_4139 =
							((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_pragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2642z00_4139),
							BGl_classzd2numzd2zz__objectz00(BGl_pragmaz00zzast_nodez00));
						{	/* Ast/node.scm 97 */
							BgL_objectz00_bglt BgL_auxz00_10424;

							BgL_auxz00_10424 = (BgL_objectz00_bglt) (BgL_new2642z00_4139);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10424, BFALSE);
						}
						BgL_res5355z00_4143 = BgL_new2642z00_4139;
					}
					BgL_new2624z00_4138 = BgL_res5355z00_4143;
				}
				{	/* Ast/node.scm 97 */
					BgL_pragmaz00_bglt BgL_res5356z00_4159;

					{	/* Ast/node.scm 97 */
						BgL_pragmaz00_bglt BgL_new2633z00_4144;

						BgL_new2633z00_4144 = BgL_new2624z00_4138;
						{	/* Ast/node.scm 97 */
							obj_t BgL_loc2626z00_4152;

							BgL_typez00_bglt BgL_type2627z00_4153;

							obj_t BgL_sidezd2effectzf32628z21_4154;

							obj_t BgL_key2629z00_4155;

							obj_t BgL_exprza22630za2_4156;

							obj_t BgL_effect2631z00_4157;

							obj_t BgL_format2632z00_4158;

							BgL_loc2626z00_4152 = BgL_loc2617z00_532;
							BgL_type2627z00_4153 = BgL_type2618z00_533;
							BgL_sidezd2effectzf32628z21_4154 =
								BgL_sidezd2effectzf32619z21_534;
							BgL_key2629z00_4155 = BgL_key2620z00_535;
							BgL_exprza22630za2_4156 = BgL_exprza22621za2_536;
							BgL_effect2631z00_4157 = BgL_effect2622z00_537;
							BgL_format2632z00_4158 = BgL_format2623z00_538;
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->BgL_locz00) =
								((obj_t) BgL_loc2626z00_4152), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2627z00_4153), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32628z21_4154), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->BgL_keyz00) =
								((obj_t) BgL_key2629z00_4155), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22630za2_4156), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->
									BgL_effectz00) = ((obj_t) BgL_effect2631z00_4157), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4144))->
									BgL_formatz00) = ((obj_t) BgL_format2632z00_4158), BUNSPEC);
							BgL_res5356z00_4159 = BgL_new2633z00_4144;
					}} BgL_res5356z00_4159;
				}
				return BgL_new2624z00_4138;
			}
		}
	}



/* _make-pragma */
	obj_t BGl__makezd2pragmazd2zzast_nodez00(obj_t BgL_envz00_7242,
		obj_t BgL_loc2617z00_7243, obj_t BgL_type2618z00_7244,
		obj_t BgL_sidezd2effectzf32619z21_7245, obj_t BgL_key2620z00_7246,
		obj_t BgL_exprza22621za2_7247, obj_t BgL_effect2622z00_7248,
		obj_t BgL_format2623z00_7249)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			return
				(obj_t) (BGl_makezd2pragmazd2zzast_nodez00(BgL_loc2617z00_7243,
					(BgL_typez00_bglt) (BgL_type2618z00_7244),
					BgL_sidezd2effectzf32619z21_7245, BgL_key2620z00_7246,
					BgL_exprza22621za2_7247, BgL_effect2622z00_7248,
					BgL_format2623z00_7249));
		}
	}



/* fill-pragma! */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt
		BGl_fillzd2pragmaz12zc0zzast_nodez00(BgL_pragmaz00_bglt BgL_new2633z00_539,
		obj_t BgL_loc2626z00_540, BgL_typez00_bglt BgL_type2627z00_541,
		obj_t BgL_sidezd2effectzf32628z21_542, obj_t BgL_key2629z00_543,
		obj_t BgL_exprza22630za2_544, obj_t BgL_effect2631z00_545,
		obj_t BgL_format2632z00_546)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{	/* Ast/node.scm 97 */
				obj_t BgL_loc2626z00_8290;

				BgL_typez00_bglt BgL_type2627z00_8291;

				obj_t BgL_sidezd2effectzf32628z21_8292;

				obj_t BgL_key2629z00_8293;

				obj_t BgL_exprza22630za2_8294;

				obj_t BgL_effect2631z00_8295;

				obj_t BgL_format2632z00_8296;

				BgL_loc2626z00_8290 = BgL_loc2626z00_540;
				BgL_type2627z00_8291 = BgL_type2627z00_541;
				BgL_sidezd2effectzf32628z21_8292 = BgL_sidezd2effectzf32628z21_542;
				BgL_key2629z00_8293 = BgL_key2629z00_543;
				BgL_exprza22630za2_8294 = BgL_exprza22630za2_544;
				BgL_effect2631z00_8295 = BgL_effect2631z00_545;
				BgL_format2632z00_8296 = BgL_format2632z00_546;
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->BgL_locz00) =
					((obj_t) BgL_loc2626z00_8290), BUNSPEC);
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2627z00_8291), BUNSPEC);
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32628z21_8292), BUNSPEC);
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->BgL_keyz00) =
					((obj_t) BgL_key2629z00_8293), BUNSPEC);
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->BgL_exprza2za2) =
					((obj_t) BgL_exprza22630za2_8294), BUNSPEC);
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->BgL_effectz00) =
					((obj_t) BgL_effect2631z00_8295), BUNSPEC);
				((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_539))->BgL_formatz00) =
					((obj_t) BgL_format2632z00_8296), BUNSPEC);
				return BgL_new2633z00_539;
			}
		}
	}



/* _fill-pragma! */
	obj_t BGl__fillzd2pragmaz12zc0zzast_nodez00(obj_t BgL_envz00_7250,
		obj_t BgL_new2633z00_7251, obj_t BgL_loc2626z00_7252,
		obj_t BgL_type2627z00_7253, obj_t BgL_sidezd2effectzf32628z21_7254,
		obj_t BgL_key2629z00_7255, obj_t BgL_exprza22630za2_7256,
		obj_t BgL_effect2631z00_7257, obj_t BgL_format2632z00_7258)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{	/* Ast/node.scm 97 */
				BgL_pragmaz00_bglt BgL_auxz00_10444;

				{	/* Ast/node.scm 97 */
					BgL_pragmaz00_bglt BgL_res5595z00_8312;

					{	/* Ast/node.scm 97 */
						BgL_pragmaz00_bglt BgL_new2633z00_8297;

						BgL_typez00_bglt BgL_type2627z00_8299;

						obj_t BgL_exprza22630za2_8302;

						obj_t BgL_format2632z00_8304;

						BgL_new2633z00_8297 = (BgL_pragmaz00_bglt) (BgL_new2633z00_7251);
						BgL_type2627z00_8299 = (BgL_typez00_bglt) (BgL_type2627z00_7253);
						BgL_exprza22630za2_8302 = BgL_exprza22630za2_7256;
						BgL_format2632z00_8304 = BgL_format2632z00_7258;
						{	/* Ast/node.scm 97 */
							obj_t BgL_loc2626z00_8305;

							BgL_typez00_bglt BgL_type2627z00_8306;

							obj_t BgL_sidezd2effectzf32628z21_8307;

							obj_t BgL_key2629z00_8308;

							obj_t BgL_exprza22630za2_8309;

							obj_t BgL_effect2631z00_8310;

							obj_t BgL_format2632z00_8311;

							BgL_loc2626z00_8305 = BgL_loc2626z00_7252;
							BgL_type2627z00_8306 = BgL_type2627z00_8299;
							BgL_sidezd2effectzf32628z21_8307 =
								BgL_sidezd2effectzf32628z21_7254;
							BgL_key2629z00_8308 = BgL_key2629z00_7255;
							BgL_exprza22630za2_8309 = BgL_exprza22630za2_8302;
							BgL_effect2631z00_8310 = BgL_effect2631z00_7257;
							BgL_format2632z00_8311 = BgL_format2632z00_8304;
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->BgL_locz00) =
								((obj_t) BgL_loc2626z00_8305), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2627z00_8306), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32628z21_8307), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->BgL_keyz00) =
								((obj_t) BgL_key2629z00_8308), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22630za2_8309), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->
									BgL_effectz00) = ((obj_t) BgL_effect2631z00_8310), BUNSPEC);
							((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_8297))->
									BgL_formatz00) = ((obj_t) BgL_format2632z00_8311), BUNSPEC);
							BgL_res5595z00_8312 = BgL_new2633z00_8297;
						}
					}
					BgL_auxz00_10444 = BgL_res5595z00_8312;
				}
				return (obj_t) (BgL_auxz00_10444);
			}
		}
	}



/* %allocate-pragma */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt BGl_z52allocatezd2pragmaz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{	/* Ast/node.scm 97 */
				BgL_pragmaz00_bglt BgL_new2642z00_8313;

				BgL_new2642z00_8313 =
					((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_pragmaz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2642z00_8313),
					BGl_classzd2numzd2zz__objectz00(BGl_pragmaz00zzast_nodez00));
				{	/* Ast/node.scm 97 */
					BgL_objectz00_bglt BgL_auxz00_10459;

					BgL_auxz00_10459 = (BgL_objectz00_bglt) (BgL_new2642z00_8313);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10459, BFALSE);
				}
				return BgL_new2642z00_8313;
			}
		}
	}



/* _%allocate-pragma */
	obj_t BGl__z52allocatezd2pragmaz80zzast_nodez00(obj_t BgL_envz00_6815)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{	/* Ast/node.scm 97 */
				BgL_pragmaz00_bglt BgL_auxz00_10462;

				{	/* Ast/node.scm 97 */
					BgL_pragmaz00_bglt BgL_res5596z00_8317;

					{	/* Ast/node.scm 97 */
						BgL_pragmaz00_bglt BgL_new2642z00_8315;

						BgL_new2642z00_8315 =
							((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_pragmaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2642z00_8315),
							BGl_classzd2numzd2zz__objectz00(BGl_pragmaz00zzast_nodez00));
						{	/* Ast/node.scm 97 */
							BgL_objectz00_bglt BgL_auxz00_10467;

							BgL_auxz00_10467 = (BgL_objectz00_bglt) (BgL_new2642z00_8315);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10467, BFALSE);
						}
						BgL_res5596z00_8317 = BgL_new2642z00_8315;
					}
					BgL_auxz00_10462 = BgL_res5596z00_8317;
				}
				return (obj_t) (BgL_auxz00_10462);
			}
		}
	}



/* pragma-nil */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt BGl_pragmazd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			if ((BGl_z52thezd2pragmazd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 97 */
					{	/* Ast/node.scm 97 */
						BgL_pragmaz00_bglt BgL_res5357z00_4175;

						{	/* Ast/node.scm 97 */
							BgL_pragmaz00_bglt BgL_new2642z00_4171;

							BgL_new2642z00_4171 =
								((BgL_pragmaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_pragmaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2642z00_4171),
								BGl_classzd2numzd2zz__objectz00(BGl_pragmaz00zzast_nodez00));
							{	/* Ast/node.scm 97 */
								BgL_objectz00_bglt BgL_auxz00_10477;

								BgL_auxz00_10477 = (BgL_objectz00_bglt) (BgL_new2642z00_4171);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10477, BFALSE);
							}
							BgL_res5357z00_4175 = BgL_new2642z00_4171;
						}
						BGl_z52thezd2pragmazd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5357z00_4175);
					}
					{	/* Ast/node.scm 97 */
						BgL_typez00_bglt BgL_arg4665z00_1617;

						BgL_arg4665z00_1617 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 97 */
							BgL_pragmaz00_bglt BgL_res5358z00_4191;

							{	/* Ast/node.scm 97 */
								BgL_pragmaz00_bglt BgL_new2633z00_4176;

								BgL_new2633z00_4176 =
									(BgL_pragmaz00_bglt)
									(BGl_z52thezd2pragmazd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 97 */
									obj_t BgL_loc2626z00_4184;

									BgL_typez00_bglt BgL_type2627z00_4185;

									obj_t BgL_sidezd2effectzf32628z21_4186;

									obj_t BgL_key2629z00_4187;

									obj_t BgL_exprza22630za2_4188;

									obj_t BgL_effect2631z00_4189;

									obj_t BgL_format2632z00_4190;

									BgL_loc2626z00_4184 = BUNSPEC;
									BgL_type2627z00_4185 = BgL_arg4665z00_1617;
									BgL_sidezd2effectzf32628z21_4186 = BUNSPEC;
									BgL_key2629z00_4187 = BUNSPEC;
									BgL_exprza22630za2_4188 = BNIL;
									BgL_effect2631z00_4189 = BUNSPEC;
									BgL_format2632z00_4190 = BGl_string5458z00zzast_nodez00;
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_locz00) = ((obj_t) BgL_loc2626z00_4184), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2627z00_4185), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32628z21_4186), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_keyz00) = ((obj_t) BgL_key2629z00_4187), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22630za2_4188), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_effectz00) =
										((obj_t) BgL_effect2631z00_4189), BUNSPEC);
									((((BgL_pragmaz00_bglt) CREF(BgL_new2633z00_4176))->
											BgL_formatz00) =
										((obj_t) BgL_format2632z00_4190), BUNSPEC);
									BgL_res5358z00_4191 = BgL_new2633z00_4176;
							}}
							(obj_t) (BgL_res5358z00_4191);
				}}}
			else
				{	/* Ast/node.scm 97 */
					BFALSE;
				}
			return (BgL_pragmaz00_bglt) (BGl_z52thezd2pragmazd2nilz52zzast_nodez00);
		}
	}



/* _pragma-nil */
	obj_t BGl__pragmazd2nilzd2zzast_nodez00(obj_t BgL_envz00_6816)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			return (obj_t) (BGl_pragmazd2nilzd2zzast_nodez00());
		}
	}



/* extern? */
	BGL_EXPORTED_DEF bool_t BGl_externzf3zf3zzast_nodez00(obj_t
		BgL_obj2599z00_548)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2599z00_548,
				BGl_externz00zzast_nodez00);
		}
	}



/* _extern? */
	obj_t BGl__externzf3zf3zzast_nodez00(obj_t BgL_envz00_6813,
		obj_t BgL_obj2599z00_6814)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2599z00_6814,
					BGl_externz00zzast_nodez00));
		}
	}



/* make-extern */
	BGL_EXPORTED_DEF BgL_externz00_bglt BGl_makezd2externzd2zzast_nodez00(obj_t
		BgL_loc2550z00_552, BgL_typez00_bglt BgL_type2551z00_553,
		obj_t BgL_sidezd2effectzf32552z21_554, obj_t BgL_key2553z00_555,
		obj_t BgL_exprza22554za2_556, obj_t BgL_effect2555z00_557)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{	/* Ast/node.scm 90 */
				BgL_externz00_bglt BgL_new2556z00_4192;

				{	/* Ast/node.scm 90 */
					BgL_externz00_bglt BgL_res5359z00_4197;

					{	/* Ast/node.scm 90 */
						BgL_externz00_bglt BgL_new2572z00_4193;

						BgL_new2572z00_4193 =
							((BgL_externz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_externz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2572z00_4193),
							BGl_classzd2numzd2zz__objectz00(BGl_externz00zzast_nodez00));
						{	/* Ast/node.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_10501;

							BgL_auxz00_10501 = (BgL_objectz00_bglt) (BgL_new2572z00_4193);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10501, BFALSE);
						}
						BgL_res5359z00_4197 = BgL_new2572z00_4193;
					}
					BgL_new2556z00_4192 = BgL_res5359z00_4197;
				}
				{	/* Ast/node.scm 90 */
					BgL_externz00_bglt BgL_res5360z00_4211;

					{	/* Ast/node.scm 90 */
						BgL_externz00_bglt BgL_new2564z00_4198;

						BgL_new2564z00_4198 = BgL_new2556z00_4192;
						{	/* Ast/node.scm 90 */
							obj_t BgL_loc2558z00_4205;

							BgL_typez00_bglt BgL_type2559z00_4206;

							obj_t BgL_sidezd2effectzf32560z21_4207;

							obj_t BgL_key2561z00_4208;

							obj_t BgL_exprza22562za2_4209;

							obj_t BgL_effect2563z00_4210;

							BgL_loc2558z00_4205 = BgL_loc2550z00_552;
							BgL_type2559z00_4206 = BgL_type2551z00_553;
							BgL_sidezd2effectzf32560z21_4207 =
								BgL_sidezd2effectzf32552z21_554;
							BgL_key2561z00_4208 = BgL_key2553z00_555;
							BgL_exprza22562za2_4209 = BgL_exprza22554za2_556;
							BgL_effect2563z00_4210 = BgL_effect2555z00_557;
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_4198))->BgL_locz00) =
								((obj_t) BgL_loc2558z00_4205), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_4198))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2559z00_4206), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_4198))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32560z21_4207), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_4198))->BgL_keyz00) =
								((obj_t) BgL_key2561z00_4208), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_4198))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22562za2_4209), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_4198))->
									BgL_effectz00) = ((obj_t) BgL_effect2563z00_4210), BUNSPEC);
							BgL_res5360z00_4211 = BgL_new2564z00_4198;
					}} BgL_res5360z00_4211;
				}
				return BgL_new2556z00_4192;
			}
		}
	}



/* _make-extern */
	obj_t BGl__makezd2externzd2zzast_nodez00(obj_t BgL_envz00_7259,
		obj_t BgL_loc2550z00_7260, obj_t BgL_type2551z00_7261,
		obj_t BgL_sidezd2effectzf32552z21_7262, obj_t BgL_key2553z00_7263,
		obj_t BgL_exprza22554za2_7264, obj_t BgL_effect2555z00_7265)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			return
				(obj_t) (BGl_makezd2externzd2zzast_nodez00(BgL_loc2550z00_7260,
					(BgL_typez00_bglt) (BgL_type2551z00_7261),
					BgL_sidezd2effectzf32552z21_7262, BgL_key2553z00_7263,
					BgL_exprza22554za2_7264, BgL_effect2555z00_7265));
		}
	}



/* fill-extern! */
	BGL_EXPORTED_DEF BgL_externz00_bglt
		BGl_fillzd2externz12zc0zzast_nodez00(BgL_externz00_bglt BgL_new2564z00_558,
		obj_t BgL_loc2558z00_559, BgL_typez00_bglt BgL_type2559z00_560,
		obj_t BgL_sidezd2effectzf32560z21_561, obj_t BgL_key2561z00_562,
		obj_t BgL_exprza22562za2_563, obj_t BgL_effect2563z00_564)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{	/* Ast/node.scm 90 */
				obj_t BgL_loc2558z00_8319;

				BgL_typez00_bglt BgL_type2559z00_8320;

				obj_t BgL_sidezd2effectzf32560z21_8321;

				obj_t BgL_key2561z00_8322;

				obj_t BgL_exprza22562za2_8323;

				obj_t BgL_effect2563z00_8324;

				BgL_loc2558z00_8319 = BgL_loc2558z00_559;
				BgL_type2559z00_8320 = BgL_type2559z00_560;
				BgL_sidezd2effectzf32560z21_8321 = BgL_sidezd2effectzf32560z21_561;
				BgL_key2561z00_8322 = BgL_key2561z00_562;
				BgL_exprza22562za2_8323 = BgL_exprza22562za2_563;
				BgL_effect2563z00_8324 = BgL_effect2563z00_564;
				((((BgL_externz00_bglt) CREF(BgL_new2564z00_558))->BgL_locz00) =
					((obj_t) BgL_loc2558z00_8319), BUNSPEC);
				((((BgL_externz00_bglt) CREF(BgL_new2564z00_558))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2559z00_8320), BUNSPEC);
				((((BgL_externz00_bglt) CREF(BgL_new2564z00_558))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32560z21_8321), BUNSPEC);
				((((BgL_externz00_bglt) CREF(BgL_new2564z00_558))->BgL_keyz00) =
					((obj_t) BgL_key2561z00_8322), BUNSPEC);
				((((BgL_externz00_bglt) CREF(BgL_new2564z00_558))->BgL_exprza2za2) =
					((obj_t) BgL_exprza22562za2_8323), BUNSPEC);
				((((BgL_externz00_bglt) CREF(BgL_new2564z00_558))->BgL_effectz00) =
					((obj_t) BgL_effect2563z00_8324), BUNSPEC);
				return BgL_new2564z00_558;
			}
		}
	}



/* _fill-extern! */
	obj_t BGl__fillzd2externz12zc0zzast_nodez00(obj_t BgL_envz00_7266,
		obj_t BgL_new2564z00_7267, obj_t BgL_loc2558z00_7268,
		obj_t BgL_type2559z00_7269, obj_t BgL_sidezd2effectzf32560z21_7270,
		obj_t BgL_key2561z00_7271, obj_t BgL_exprza22562za2_7272,
		obj_t BgL_effect2563z00_7273)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{	/* Ast/node.scm 90 */
				BgL_externz00_bglt BgL_auxz00_10519;

				{	/* Ast/node.scm 90 */
					BgL_externz00_bglt BgL_res5597z00_8338;

					{	/* Ast/node.scm 90 */
						BgL_externz00_bglt BgL_new2564z00_8325;

						BgL_typez00_bglt BgL_type2559z00_8327;

						obj_t BgL_exprza22562za2_8330;

						BgL_new2564z00_8325 = (BgL_externz00_bglt) (BgL_new2564z00_7267);
						BgL_type2559z00_8327 = (BgL_typez00_bglt) (BgL_type2559z00_7269);
						BgL_exprza22562za2_8330 = BgL_exprza22562za2_7272;
						{	/* Ast/node.scm 90 */
							obj_t BgL_loc2558z00_8332;

							BgL_typez00_bglt BgL_type2559z00_8333;

							obj_t BgL_sidezd2effectzf32560z21_8334;

							obj_t BgL_key2561z00_8335;

							obj_t BgL_exprza22562za2_8336;

							obj_t BgL_effect2563z00_8337;

							BgL_loc2558z00_8332 = BgL_loc2558z00_7268;
							BgL_type2559z00_8333 = BgL_type2559z00_8327;
							BgL_sidezd2effectzf32560z21_8334 =
								BgL_sidezd2effectzf32560z21_7270;
							BgL_key2561z00_8335 = BgL_key2561z00_7271;
							BgL_exprza22562za2_8336 = BgL_exprza22562za2_8330;
							BgL_effect2563z00_8337 = BgL_effect2563z00_7273;
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_8325))->BgL_locz00) =
								((obj_t) BgL_loc2558z00_8332), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_8325))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2559z00_8333), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_8325))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32560z21_8334), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_8325))->BgL_keyz00) =
								((obj_t) BgL_key2561z00_8335), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_8325))->
									BgL_exprza2za2) = ((obj_t) BgL_exprza22562za2_8336), BUNSPEC);
							((((BgL_externz00_bglt) CREF(BgL_new2564z00_8325))->
									BgL_effectz00) = ((obj_t) BgL_effect2563z00_8337), BUNSPEC);
							BgL_res5597z00_8338 = BgL_new2564z00_8325;
						}
					}
					BgL_auxz00_10519 = BgL_res5597z00_8338;
				}
				return (obj_t) (BgL_auxz00_10519);
			}
		}
	}



/* %allocate-extern */
	BGL_EXPORTED_DEF BgL_externz00_bglt BGl_z52allocatezd2externz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{	/* Ast/node.scm 90 */
				BgL_externz00_bglt BgL_new2572z00_8339;

				BgL_new2572z00_8339 =
					((BgL_externz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_externz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2572z00_8339),
					BGl_classzd2numzd2zz__objectz00(BGl_externz00zzast_nodez00));
				{	/* Ast/node.scm 90 */
					BgL_objectz00_bglt BgL_auxz00_10533;

					BgL_auxz00_10533 = (BgL_objectz00_bglt) (BgL_new2572z00_8339);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10533, BFALSE);
				}
				return BgL_new2572z00_8339;
			}
		}
	}



/* _%allocate-extern */
	obj_t BGl__z52allocatezd2externz80zzast_nodez00(obj_t BgL_envz00_6811)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{	/* Ast/node.scm 90 */
				BgL_externz00_bglt BgL_auxz00_10536;

				{	/* Ast/node.scm 90 */
					BgL_externz00_bglt BgL_res5598z00_8343;

					{	/* Ast/node.scm 90 */
						BgL_externz00_bglt BgL_new2572z00_8341;

						BgL_new2572z00_8341 =
							((BgL_externz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_externz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2572z00_8341),
							BGl_classzd2numzd2zz__objectz00(BGl_externz00zzast_nodez00));
						{	/* Ast/node.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_10541;

							BgL_auxz00_10541 = (BgL_objectz00_bglt) (BgL_new2572z00_8341);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10541, BFALSE);
						}
						BgL_res5598z00_8343 = BgL_new2572z00_8341;
					}
					BgL_auxz00_10536 = BgL_res5598z00_8343;
				}
				return (obj_t) (BgL_auxz00_10536);
			}
		}
	}



/* extern-nil */
	BGL_EXPORTED_DEF BgL_externz00_bglt BGl_externzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			if ((BGl_z52thezd2externzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 90 */
					{	/* Ast/node.scm 90 */
						BgL_externz00_bglt BgL_res5361z00_4226;

						{	/* Ast/node.scm 90 */
							BgL_externz00_bglt BgL_new2572z00_4222;

							BgL_new2572z00_4222 =
								((BgL_externz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_externz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2572z00_4222),
								BGl_classzd2numzd2zz__objectz00(BGl_externz00zzast_nodez00));
							{	/* Ast/node.scm 90 */
								BgL_objectz00_bglt BgL_auxz00_10551;

								BgL_auxz00_10551 = (BgL_objectz00_bglt) (BgL_new2572z00_4222);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10551, BFALSE);
							}
							BgL_res5361z00_4226 = BgL_new2572z00_4222;
						}
						BGl_z52thezd2externzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5361z00_4226);
					}
					{	/* Ast/node.scm 90 */
						BgL_typez00_bglt BgL_arg4670z00_1630;

						BgL_arg4670z00_1630 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 90 */
							BgL_externz00_bglt BgL_res5362z00_4240;

							{	/* Ast/node.scm 90 */
								BgL_externz00_bglt BgL_new2564z00_4227;

								BgL_new2564z00_4227 =
									(BgL_externz00_bglt)
									(BGl_z52thezd2externzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 90 */
									obj_t BgL_loc2558z00_4234;

									BgL_typez00_bglt BgL_type2559z00_4235;

									obj_t BgL_sidezd2effectzf32560z21_4236;

									obj_t BgL_key2561z00_4237;

									obj_t BgL_exprza22562za2_4238;

									obj_t BgL_effect2563z00_4239;

									BgL_loc2558z00_4234 = BUNSPEC;
									BgL_type2559z00_4235 = BgL_arg4670z00_1630;
									BgL_sidezd2effectzf32560z21_4236 = BUNSPEC;
									BgL_key2561z00_4237 = BUNSPEC;
									BgL_exprza22562za2_4238 = BNIL;
									BgL_effect2563z00_4239 = BUNSPEC;
									((((BgL_externz00_bglt) CREF(BgL_new2564z00_4227))->
											BgL_locz00) = ((obj_t) BgL_loc2558z00_4234), BUNSPEC);
									((((BgL_externz00_bglt) CREF(BgL_new2564z00_4227))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2559z00_4235), BUNSPEC);
									((((BgL_externz00_bglt) CREF(BgL_new2564z00_4227))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32560z21_4236), BUNSPEC);
									((((BgL_externz00_bglt) CREF(BgL_new2564z00_4227))->
											BgL_keyz00) = ((obj_t) BgL_key2561z00_4237), BUNSPEC);
									((((BgL_externz00_bglt) CREF(BgL_new2564z00_4227))->
											BgL_exprza2za2) =
										((obj_t) BgL_exprza22562za2_4238), BUNSPEC);
									((((BgL_externz00_bglt) CREF(BgL_new2564z00_4227))->
											BgL_effectz00) =
										((obj_t) BgL_effect2563z00_4239), BUNSPEC);
									BgL_res5362z00_4240 = BgL_new2564z00_4227;
							}}
							(obj_t) (BgL_res5362z00_4240);
				}}}
			else
				{	/* Ast/node.scm 90 */
					BFALSE;
				}
			return (BgL_externz00_bglt) (BGl_z52thezd2externzd2nilz52zzast_nodez00);
		}
	}



/* _extern-nil */
	obj_t BGl__externzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6812)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			return (obj_t) (BGl_externzd2nilzd2zzast_nodez00());
		}
	}



/* funcall? */
	BGL_EXPORTED_DEF bool_t BGl_funcallzf3zf3zzast_nodez00(obj_t
		BgL_obj2533z00_571)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2533z00_571,
				BGl_funcallz00zzast_nodez00);
		}
	}



/* _funcall? */
	obj_t BGl__funcallzf3zf3zzast_nodez00(obj_t BgL_envz00_6809,
		obj_t BgL_obj2533z00_6810)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2533z00_6810,
					BGl_funcallz00zzast_nodez00));
		}
	}



/* make-funcall */
	BGL_EXPORTED_DEF BgL_funcallz00_bglt BGl_makezd2funcallzd2zzast_nodez00(obj_t
		BgL_loc2491z00_575, BgL_typez00_bglt BgL_type2492z00_576,
		BgL_nodez00_bglt BgL_fun2493z00_577, obj_t BgL_args2494z00_578,
		obj_t BgL_strength2495z00_579)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{	/* Ast/node.scm 80 */
				BgL_funcallz00_bglt BgL_new2496z00_4241;

				{	/* Ast/node.scm 80 */
					BgL_funcallz00_bglt BgL_res5363z00_4246;

					{	/* Ast/node.scm 80 */
						BgL_funcallz00_bglt BgL_new2510z00_4242;

						BgL_new2510z00_4242 =
							((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funcallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2510z00_4242),
							BGl_classzd2numzd2zz__objectz00(BGl_funcallz00zzast_nodez00));
						{	/* Ast/node.scm 80 */
							BgL_objectz00_bglt BgL_auxz00_10574;

							BgL_auxz00_10574 = (BgL_objectz00_bglt) (BgL_new2510z00_4242);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10574, BFALSE);
						}
						BgL_res5363z00_4246 = BgL_new2510z00_4242;
					}
					BgL_new2496z00_4241 = BgL_res5363z00_4246;
				}
				{	/* Ast/node.scm 80 */
					BgL_funcallz00_bglt BgL_res5364z00_4258;

					{	/* Ast/node.scm 80 */
						BgL_funcallz00_bglt BgL_new2503z00_4247;

						BgL_new2503z00_4247 = BgL_new2496z00_4241;
						{	/* Ast/node.scm 80 */
							obj_t BgL_loc2498z00_4253;

							BgL_typez00_bglt BgL_type2499z00_4254;

							BgL_nodez00_bglt BgL_fun2500z00_4255;

							obj_t BgL_args2501z00_4256;

							obj_t BgL_strength2502z00_4257;

							BgL_loc2498z00_4253 = BgL_loc2491z00_575;
							BgL_type2499z00_4254 = BgL_type2492z00_576;
							BgL_fun2500z00_4255 = BgL_fun2493z00_577;
							BgL_args2501z00_4256 = BgL_args2494z00_578;
							BgL_strength2502z00_4257 = BgL_strength2495z00_579;
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4247))->BgL_locz00) =
								((obj_t) BgL_loc2498z00_4253), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4247))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2499z00_4254), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4247))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_fun2500z00_4255), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4247))->
									BgL_argsz00) = ((obj_t) BgL_args2501z00_4256), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4247))->
									BgL_strengthz00) =
								((obj_t) BgL_strength2502z00_4257), BUNSPEC);
							BgL_res5364z00_4258 = BgL_new2503z00_4247;
					}} BgL_res5364z00_4258;
				}
				return BgL_new2496z00_4241;
			}
		}
	}



/* _make-funcall */
	obj_t BGl__makezd2funcallzd2zzast_nodez00(obj_t BgL_envz00_7274,
		obj_t BgL_loc2491z00_7275, obj_t BgL_type2492z00_7276,
		obj_t BgL_fun2493z00_7277, obj_t BgL_args2494z00_7278,
		obj_t BgL_strength2495z00_7279)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			return
				(obj_t) (BGl_makezd2funcallzd2zzast_nodez00(BgL_loc2491z00_7275,
					(BgL_typez00_bglt) (BgL_type2492z00_7276),
					(BgL_nodez00_bglt) (BgL_fun2493z00_7277), BgL_args2494z00_7278,
					BgL_strength2495z00_7279));
		}
	}



/* fill-funcall! */
	BGL_EXPORTED_DEF BgL_funcallz00_bglt
		BGl_fillzd2funcallz12zc0zzast_nodez00(BgL_funcallz00_bglt
		BgL_new2503z00_580, obj_t BgL_loc2498z00_581,
		BgL_typez00_bglt BgL_type2499z00_582, BgL_nodez00_bglt BgL_fun2500z00_583,
		obj_t BgL_args2501z00_584, obj_t BgL_strength2502z00_585)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{	/* Ast/node.scm 80 */
				obj_t BgL_loc2498z00_8345;

				BgL_typez00_bglt BgL_type2499z00_8346;

				BgL_nodez00_bglt BgL_fun2500z00_8347;

				obj_t BgL_args2501z00_8348;

				obj_t BgL_strength2502z00_8349;

				BgL_loc2498z00_8345 = BgL_loc2498z00_581;
				BgL_type2499z00_8346 = BgL_type2499z00_582;
				BgL_fun2500z00_8347 = BgL_fun2500z00_583;
				BgL_args2501z00_8348 = BgL_args2501z00_584;
				BgL_strength2502z00_8349 = BgL_strength2502z00_585;
				((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_580))->BgL_locz00) =
					((obj_t) BgL_loc2498z00_8345), BUNSPEC);
				((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_580))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2499z00_8346), BUNSPEC);
				((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_580))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_fun2500z00_8347), BUNSPEC);
				((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_580))->BgL_argsz00) =
					((obj_t) BgL_args2501z00_8348), BUNSPEC);
				((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_580))->BgL_strengthz00) =
					((obj_t) BgL_strength2502z00_8349), BUNSPEC);
				return BgL_new2503z00_580;
			}
		}
	}



/* _fill-funcall! */
	obj_t BGl__fillzd2funcallz12zc0zzast_nodez00(obj_t BgL_envz00_7280,
		obj_t BgL_new2503z00_7281, obj_t BgL_loc2498z00_7282,
		obj_t BgL_type2499z00_7283, obj_t BgL_fun2500z00_7284,
		obj_t BgL_args2501z00_7285, obj_t BgL_strength2502z00_7286)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{	/* Ast/node.scm 80 */
				BgL_funcallz00_bglt BgL_auxz00_10591;

				{	/* Ast/node.scm 80 */
					BgL_funcallz00_bglt BgL_res5599z00_8361;

					{	/* Ast/node.scm 80 */
						BgL_funcallz00_bglt BgL_new2503z00_8350;

						BgL_typez00_bglt BgL_type2499z00_8352;

						BgL_nodez00_bglt BgL_fun2500z00_8353;

						obj_t BgL_strength2502z00_8355;

						BgL_new2503z00_8350 = (BgL_funcallz00_bglt) (BgL_new2503z00_7281);
						BgL_type2499z00_8352 = (BgL_typez00_bglt) (BgL_type2499z00_7283);
						BgL_fun2500z00_8353 = (BgL_nodez00_bglt) (BgL_fun2500z00_7284);
						BgL_strength2502z00_8355 = BgL_strength2502z00_7286;
						{	/* Ast/node.scm 80 */
							obj_t BgL_loc2498z00_8356;

							BgL_typez00_bglt BgL_type2499z00_8357;

							BgL_nodez00_bglt BgL_fun2500z00_8358;

							obj_t BgL_args2501z00_8359;

							obj_t BgL_strength2502z00_8360;

							BgL_loc2498z00_8356 = BgL_loc2498z00_7282;
							BgL_type2499z00_8357 = BgL_type2499z00_8352;
							BgL_fun2500z00_8358 = BgL_fun2500z00_8353;
							BgL_args2501z00_8359 = BgL_args2501z00_7285;
							BgL_strength2502z00_8360 = BgL_strength2502z00_8355;
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_8350))->BgL_locz00) =
								((obj_t) BgL_loc2498z00_8356), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_8350))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2499z00_8357), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_8350))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_fun2500z00_8358), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_8350))->
									BgL_argsz00) = ((obj_t) BgL_args2501z00_8359), BUNSPEC);
							((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_8350))->
									BgL_strengthz00) =
								((obj_t) BgL_strength2502z00_8360), BUNSPEC);
							BgL_res5599z00_8361 = BgL_new2503z00_8350;
						}
					}
					BgL_auxz00_10591 = BgL_res5599z00_8361;
				}
				return (obj_t) (BgL_auxz00_10591);
			}
		}
	}



/* %allocate-funcall */
	BGL_EXPORTED_DEF BgL_funcallz00_bglt
		BGl_z52allocatezd2funcallz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{	/* Ast/node.scm 80 */
				BgL_funcallz00_bglt BgL_new2510z00_8362;

				BgL_new2510z00_8362 =
					((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_funcallz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2510z00_8362),
					BGl_classzd2numzd2zz__objectz00(BGl_funcallz00zzast_nodez00));
				{	/* Ast/node.scm 80 */
					BgL_objectz00_bglt BgL_auxz00_10605;

					BgL_auxz00_10605 = (BgL_objectz00_bglt) (BgL_new2510z00_8362);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10605, BFALSE);
				}
				return BgL_new2510z00_8362;
			}
		}
	}



/* _%allocate-funcall */
	obj_t BGl__z52allocatezd2funcallz80zzast_nodez00(obj_t BgL_envz00_6807)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{	/* Ast/node.scm 80 */
				BgL_funcallz00_bglt BgL_auxz00_10608;

				{	/* Ast/node.scm 80 */
					BgL_funcallz00_bglt BgL_res5600z00_8366;

					{	/* Ast/node.scm 80 */
						BgL_funcallz00_bglt BgL_new2510z00_8364;

						BgL_new2510z00_8364 =
							((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funcallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2510z00_8364),
							BGl_classzd2numzd2zz__objectz00(BGl_funcallz00zzast_nodez00));
						{	/* Ast/node.scm 80 */
							BgL_objectz00_bglt BgL_auxz00_10613;

							BgL_auxz00_10613 = (BgL_objectz00_bglt) (BgL_new2510z00_8364);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10613, BFALSE);
						}
						BgL_res5600z00_8366 = BgL_new2510z00_8364;
					}
					BgL_auxz00_10608 = BgL_res5600z00_8366;
				}
				return (obj_t) (BgL_auxz00_10608);
			}
		}
	}



/* funcall-nil */
	BGL_EXPORTED_DEF BgL_funcallz00_bglt BGl_funcallzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			if ((BGl_z52thezd2funcallzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 80 */
					{	/* Ast/node.scm 80 */
						BgL_funcallz00_bglt BgL_res5365z00_4272;

						{	/* Ast/node.scm 80 */
							BgL_funcallz00_bglt BgL_new2510z00_4268;

							BgL_new2510z00_4268 =
								((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_funcallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2510z00_4268),
								BGl_classzd2numzd2zz__objectz00(BGl_funcallz00zzast_nodez00));
							{	/* Ast/node.scm 80 */
								BgL_objectz00_bglt BgL_auxz00_10623;

								BgL_auxz00_10623 = (BgL_objectz00_bglt) (BgL_new2510z00_4268);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10623, BFALSE);
							}
							BgL_res5365z00_4272 = BgL_new2510z00_4268;
						}
						BGl_z52thezd2funcallzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5365z00_4272);
					}
					{	/* Ast/node.scm 80 */
						BgL_typez00_bglt BgL_arg4674z00_1641;

						BgL_nodez00_bglt BgL_arg4675z00_1642;

						obj_t BgL_arg4676z00_1643;

						BgL_arg4674z00_1641 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4675z00_1642 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4676z00_1643 = CNST_TABLE_REF(((long) 33));
						{	/* Ast/node.scm 80 */
							BgL_funcallz00_bglt BgL_res5366z00_4284;

							{	/* Ast/node.scm 80 */
								BgL_funcallz00_bglt BgL_new2503z00_4273;

								BgL_new2503z00_4273 =
									(BgL_funcallz00_bglt)
									(BGl_z52thezd2funcallzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 80 */
									obj_t BgL_loc2498z00_4279;

									BgL_typez00_bglt BgL_type2499z00_4280;

									BgL_nodez00_bglt BgL_fun2500z00_4281;

									obj_t BgL_args2501z00_4282;

									obj_t BgL_strength2502z00_4283;

									BgL_loc2498z00_4279 = BUNSPEC;
									BgL_type2499z00_4280 = BgL_arg4674z00_1641;
									BgL_fun2500z00_4281 = BgL_arg4675z00_1642;
									BgL_args2501z00_4282 = BUNSPEC;
									BgL_strength2502z00_4283 = BgL_arg4676z00_1643;
									((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4273))->
											BgL_locz00) = ((obj_t) BgL_loc2498z00_4279), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4273))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2499z00_4280), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4273))->
											BgL_funz00) =
										((BgL_nodez00_bglt) BgL_fun2500z00_4281), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4273))->
											BgL_argsz00) = ((obj_t) BgL_args2501z00_4282), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2503z00_4273))->
											BgL_strengthz00) =
										((obj_t) BgL_strength2502z00_4283), BUNSPEC);
									BgL_res5366z00_4284 = BgL_new2503z00_4273;
							}}
							(obj_t) (BgL_res5366z00_4284);
				}}}
			else
				{	/* Ast/node.scm 80 */
					BFALSE;
				}
			return (BgL_funcallz00_bglt) (BGl_z52thezd2funcallzd2nilz52zzast_nodez00);
		}
	}



/* _funcall-nil */
	obj_t BGl__funcallzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6808)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			return (obj_t) (BGl_funcallzd2nilzd2zzast_nodez00());
		}
	}



/* app-ly? */
	BGL_EXPORTED_DEF bool_t BGl_appzd2lyzf3z21zzast_nodez00(obj_t
		BgL_obj2477z00_595)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2477z00_595,
				BGl_appzd2lyzd2zzast_nodez00);
		}
	}



/* _app-ly? */
	obj_t BGl__appzd2lyzf3z21zzast_nodez00(obj_t BgL_envz00_6805,
		obj_t BgL_obj2477z00_6806)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2477z00_6806,
					BGl_appzd2lyzd2zzast_nodez00));
		}
	}



/* make-app-ly */
	BGL_EXPORTED_DEF BgL_appzd2lyzd2_bglt
		BGl_makezd2appzd2lyz00zzast_nodez00(obj_t BgL_loc2436z00_599,
		BgL_typez00_bglt BgL_type2437z00_600, BgL_nodez00_bglt BgL_fun2438z00_601,
		BgL_nodez00_bglt BgL_arg2444z00_602)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{	/* Ast/node.scm 73 */
				BgL_appzd2lyzd2_bglt BgL_new2445z00_4285;

				{	/* Ast/node.scm 73 */
					BgL_appzd2lyzd2_bglt BgL_res5367z00_4290;

					{	/* Ast/node.scm 73 */
						BgL_appzd2lyzd2_bglt BgL_new2458z00_4286;

						BgL_new2458z00_4286 =
							((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appzd2lyzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2458z00_4286),
							BGl_classzd2numzd2zz__objectz00(BGl_appzd2lyzd2zzast_nodez00));
						{	/* Ast/node.scm 73 */
							BgL_objectz00_bglt BgL_auxz00_10647;

							BgL_auxz00_10647 = (BgL_objectz00_bglt) (BgL_new2458z00_4286);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10647, BFALSE);
						}
						BgL_res5367z00_4290 = BgL_new2458z00_4286;
					}
					BgL_new2445z00_4285 = BgL_res5367z00_4290;
				}
				{	/* Ast/node.scm 73 */
					BgL_appzd2lyzd2_bglt BgL_res5368z00_4300;

					{	/* Ast/node.scm 73 */
						BgL_appzd2lyzd2_bglt BgL_new2452z00_4291;

						BgL_new2452z00_4291 = BgL_new2445z00_4285;
						{	/* Ast/node.scm 73 */
							obj_t BgL_loc2447z00_4296;

							BgL_typez00_bglt BgL_type2448z00_4297;

							BgL_nodez00_bglt BgL_fun2449z00_4298;

							BgL_nodez00_bglt BgL_arg2451z00_4299;

							BgL_loc2447z00_4296 = BgL_loc2436z00_599;
							BgL_type2448z00_4297 = BgL_type2437z00_600;
							BgL_fun2449z00_4298 = BgL_fun2438z00_601;
							BgL_arg2451z00_4299 = BgL_arg2444z00_602;
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4291))->
									BgL_locz00) = ((obj_t) BgL_loc2447z00_4296), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4291))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2448z00_4297), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4291))->
									BgL_funz00) =
								((BgL_nodez00_bglt) BgL_fun2449z00_4298), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4291))->
									BgL_argz00) =
								((BgL_nodez00_bglt) BgL_arg2451z00_4299), BUNSPEC);
							BgL_res5368z00_4300 = BgL_new2452z00_4291;
					}} BgL_res5368z00_4300;
				}
				return BgL_new2445z00_4285;
			}
		}
	}



/* _make-app-ly */
	obj_t BGl__makezd2appzd2lyz00zzast_nodez00(obj_t BgL_envz00_7287,
		obj_t BgL_loc2436z00_7288, obj_t BgL_type2437z00_7289,
		obj_t BgL_fun2438z00_7290, obj_t BgL_arg2444z00_7291)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			return
				(obj_t) (BGl_makezd2appzd2lyz00zzast_nodez00(BgL_loc2436z00_7288,
					(BgL_typez00_bglt) (BgL_type2437z00_7289),
					(BgL_nodez00_bglt) (BgL_fun2438z00_7290),
					(BgL_nodez00_bglt) (BgL_arg2444z00_7291)));
		}
	}



/* fill-app-ly! */
	BGL_EXPORTED_DEF BgL_appzd2lyzd2_bglt
		BGl_fillzd2appzd2lyz12z12zzast_nodez00(BgL_appzd2lyzd2_bglt
		BgL_new2452z00_603, obj_t BgL_loc2447z00_604,
		BgL_typez00_bglt BgL_type2448z00_605, BgL_nodez00_bglt BgL_fun2449z00_606,
		BgL_nodez00_bglt BgL_arg2451z00_607)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{	/* Ast/node.scm 73 */
				obj_t BgL_loc2447z00_8368;

				BgL_typez00_bglt BgL_type2448z00_8369;

				BgL_nodez00_bglt BgL_fun2449z00_8370;

				BgL_nodez00_bglt BgL_arg2451z00_8371;

				BgL_loc2447z00_8368 = BgL_loc2447z00_604;
				BgL_type2448z00_8369 = BgL_type2448z00_605;
				BgL_fun2449z00_8370 = BgL_fun2449z00_606;
				BgL_arg2451z00_8371 = BgL_arg2451z00_607;
				((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_603))->BgL_locz00) =
					((obj_t) BgL_loc2447z00_8368), BUNSPEC);
				((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_603))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2448z00_8369), BUNSPEC);
				((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_603))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_fun2449z00_8370), BUNSPEC);
				((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_603))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_arg2451z00_8371), BUNSPEC);
				return BgL_new2452z00_603;
			}
		}
	}



/* _fill-app-ly! */
	obj_t BGl__fillzd2appzd2lyz12z12zzast_nodez00(obj_t BgL_envz00_7292,
		obj_t BgL_new2452z00_7293, obj_t BgL_loc2447z00_7294,
		obj_t BgL_type2448z00_7295, obj_t BgL_fun2449z00_7296,
		obj_t BgL_arg2451z00_7297)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{	/* Ast/node.scm 73 */
				BgL_appzd2lyzd2_bglt BgL_auxz00_10663;

				{	/* Ast/node.scm 73 */
					BgL_appzd2lyzd2_bglt BgL_res5601z00_8381;

					{	/* Ast/node.scm 73 */
						BgL_appzd2lyzd2_bglt BgL_new2452z00_8372;

						BgL_typez00_bglt BgL_type2448z00_8374;

						BgL_nodez00_bglt BgL_fun2449z00_8375;

						BgL_nodez00_bglt BgL_arg2451z00_8376;

						BgL_new2452z00_8372 = (BgL_appzd2lyzd2_bglt) (BgL_new2452z00_7293);
						BgL_type2448z00_8374 = (BgL_typez00_bglt) (BgL_type2448z00_7295);
						BgL_fun2449z00_8375 = (BgL_nodez00_bglt) (BgL_fun2449z00_7296);
						BgL_arg2451z00_8376 = (BgL_nodez00_bglt) (BgL_arg2451z00_7297);
						{	/* Ast/node.scm 73 */
							obj_t BgL_loc2447z00_8377;

							BgL_typez00_bglt BgL_type2448z00_8378;

							BgL_nodez00_bglt BgL_fun2449z00_8379;

							BgL_nodez00_bglt BgL_arg2451z00_8380;

							BgL_loc2447z00_8377 = BgL_loc2447z00_7294;
							BgL_type2448z00_8378 = BgL_type2448z00_8374;
							BgL_fun2449z00_8379 = BgL_fun2449z00_8375;
							BgL_arg2451z00_8380 = BgL_arg2451z00_8376;
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_8372))->
									BgL_locz00) = ((obj_t) BgL_loc2447z00_8377), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_8372))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2448z00_8378), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_8372))->
									BgL_funz00) =
								((BgL_nodez00_bglt) BgL_fun2449z00_8379), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_8372))->
									BgL_argz00) =
								((BgL_nodez00_bglt) BgL_arg2451z00_8380), BUNSPEC);
							BgL_res5601z00_8381 = BgL_new2452z00_8372;
						}
					}
					BgL_auxz00_10663 = BgL_res5601z00_8381;
				}
				return (obj_t) (BgL_auxz00_10663);
			}
		}
	}



/* %allocate-app-ly */
	BGL_EXPORTED_DEF BgL_appzd2lyzd2_bglt
		BGl_z52allocatezd2appzd2lyz52zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{	/* Ast/node.scm 73 */
				BgL_appzd2lyzd2_bglt BgL_new2458z00_8382;

				BgL_new2458z00_8382 =
					((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_appzd2lyzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2458z00_8382),
					BGl_classzd2numzd2zz__objectz00(BGl_appzd2lyzd2zzast_nodez00));
				{	/* Ast/node.scm 73 */
					BgL_objectz00_bglt BgL_auxz00_10677;

					BgL_auxz00_10677 = (BgL_objectz00_bglt) (BgL_new2458z00_8382);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10677, BFALSE);
				}
				return BgL_new2458z00_8382;
			}
		}
	}



/* _%allocate-app-ly */
	obj_t BGl__z52allocatezd2appzd2lyz52zzast_nodez00(obj_t BgL_envz00_6803)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{	/* Ast/node.scm 73 */
				BgL_appzd2lyzd2_bglt BgL_auxz00_10680;

				{	/* Ast/node.scm 73 */
					BgL_appzd2lyzd2_bglt BgL_res5602z00_8386;

					{	/* Ast/node.scm 73 */
						BgL_appzd2lyzd2_bglt BgL_new2458z00_8384;

						BgL_new2458z00_8384 =
							((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appzd2lyzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2458z00_8384),
							BGl_classzd2numzd2zz__objectz00(BGl_appzd2lyzd2zzast_nodez00));
						{	/* Ast/node.scm 73 */
							BgL_objectz00_bglt BgL_auxz00_10685;

							BgL_auxz00_10685 = (BgL_objectz00_bglt) (BgL_new2458z00_8384);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10685, BFALSE);
						}
						BgL_res5602z00_8386 = BgL_new2458z00_8384;
					}
					BgL_auxz00_10680 = BgL_res5602z00_8386;
				}
				return (obj_t) (BgL_auxz00_10680);
			}
		}
	}



/* app-ly-nil */
	BGL_EXPORTED_DEF BgL_appzd2lyzd2_bglt BGl_appzd2lyzd2nilz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			if ((BGl_z52thezd2appzd2lyzd2nilz80zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 73 */
					{	/* Ast/node.scm 73 */
						BgL_appzd2lyzd2_bglt BgL_res5369z00_4313;

						{	/* Ast/node.scm 73 */
							BgL_appzd2lyzd2_bglt BgL_new2458z00_4309;

							BgL_new2458z00_4309 =
								((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appzd2lyzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2458z00_4309),
								BGl_classzd2numzd2zz__objectz00(BGl_appzd2lyzd2zzast_nodez00));
							{	/* Ast/node.scm 73 */
								BgL_objectz00_bglt BgL_auxz00_10695;

								BgL_auxz00_10695 = (BgL_objectz00_bglt) (BgL_new2458z00_4309);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10695, BFALSE);
							}
							BgL_res5369z00_4313 = BgL_new2458z00_4309;
						}
						BGl_z52thezd2appzd2lyzd2nilz80zzast_nodez00 =
							(obj_t) (BgL_res5369z00_4313);
					}
					{	/* Ast/node.scm 73 */
						BgL_typez00_bglt BgL_arg4679z00_1652;

						BgL_nodez00_bglt BgL_arg4680z00_1653;

						BgL_nodez00_bglt BgL_arg4681z00_1654;

						BgL_arg4679z00_1652 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4680z00_1653 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4681z00_1654 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 73 */
							BgL_appzd2lyzd2_bglt BgL_res5370z00_4323;

							{	/* Ast/node.scm 73 */
								BgL_appzd2lyzd2_bglt BgL_new2452z00_4314;

								BgL_new2452z00_4314 =
									(BgL_appzd2lyzd2_bglt)
									(BGl_z52thezd2appzd2lyzd2nilz80zzast_nodez00);
								{	/* Ast/node.scm 73 */
									obj_t BgL_loc2447z00_4319;

									BgL_typez00_bglt BgL_type2448z00_4320;

									BgL_nodez00_bglt BgL_fun2449z00_4321;

									BgL_nodez00_bglt BgL_arg2451z00_4322;

									BgL_loc2447z00_4319 = BUNSPEC;
									BgL_type2448z00_4320 = BgL_arg4679z00_1652;
									BgL_fun2449z00_4321 = BgL_arg4680z00_1653;
									BgL_arg2451z00_4322 = BgL_arg4681z00_1654;
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4314))->
											BgL_locz00) = ((obj_t) BgL_loc2447z00_4319), BUNSPEC);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4314))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2448z00_4320), BUNSPEC);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4314))->
											BgL_funz00) =
										((BgL_nodez00_bglt) BgL_fun2449z00_4321), BUNSPEC);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2452z00_4314))->
											BgL_argz00) =
										((BgL_nodez00_bglt) BgL_arg2451z00_4322), BUNSPEC);
									BgL_res5370z00_4323 = BgL_new2452z00_4314;
							}}
							(obj_t) (BgL_res5370z00_4323);
				}}}
			else
				{	/* Ast/node.scm 73 */
					BFALSE;
				}
			return
				(BgL_appzd2lyzd2_bglt) (BGl_z52thezd2appzd2lyzd2nilz80zzast_nodez00);
		}
	}



/* _app-ly-nil */
	obj_t BGl__appzd2lyzd2nilz00zzast_nodez00(obj_t BgL_envz00_6804)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			return (obj_t) (BGl_appzd2lyzd2nilz00zzast_nodez00());
		}
	}



/* app? */
	BGL_EXPORTED_DEF bool_t BGl_appzf3zf3zzast_nodez00(obj_t BgL_obj2425z00_614)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2425z00_614,
				BGl_appz00zzast_nodez00);
		}
	}



/* _app? */
	obj_t BGl__appzf3zf3zzast_nodez00(obj_t BgL_envz00_6801,
		obj_t BgL_obj2425z00_6802)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2425z00_6802,
					BGl_appz00zzast_nodez00));
		}
	}



/* make-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t
		BgL_loc2376z00_618, BgL_typez00_bglt BgL_type2377z00_619,
		obj_t BgL_sidezd2effectzf32378z21_620, obj_t BgL_key2379z00_621,
		BgL_varz00_bglt BgL_fun2380z00_622, obj_t BgL_args2381z00_623)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{	/* Ast/node.scm 66 */
				BgL_appz00_bglt BgL_new2382z00_4324;

				{	/* Ast/node.scm 66 */
					BgL_appz00_bglt BgL_res5371z00_4329;

					{	/* Ast/node.scm 66 */
						BgL_appz00_bglt BgL_new2398z00_4325;

						BgL_new2398z00_4325 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2398z00_4325),
							BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
						{	/* Ast/node.scm 66 */
							BgL_objectz00_bglt BgL_auxz00_10718;

							BgL_auxz00_10718 = (BgL_objectz00_bglt) (BgL_new2398z00_4325);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10718, BFALSE);
						}
						BgL_res5371z00_4329 = BgL_new2398z00_4325;
					}
					BgL_new2382z00_4324 = BgL_res5371z00_4329;
				}
				{	/* Ast/node.scm 66 */
					BgL_appz00_bglt BgL_res5372z00_4343;

					{	/* Ast/node.scm 66 */
						BgL_appz00_bglt BgL_new2390z00_4330;

						BgL_new2390z00_4330 = BgL_new2382z00_4324;
						{	/* Ast/node.scm 66 */
							obj_t BgL_loc2384z00_4337;

							BgL_typez00_bglt BgL_type2385z00_4338;

							obj_t BgL_sidezd2effectzf32386z21_4339;

							obj_t BgL_key2387z00_4340;

							BgL_varz00_bglt BgL_fun2388z00_4341;

							obj_t BgL_args2389z00_4342;

							BgL_loc2384z00_4337 = BgL_loc2376z00_618;
							BgL_type2385z00_4338 = BgL_type2377z00_619;
							BgL_sidezd2effectzf32386z21_4339 =
								BgL_sidezd2effectzf32378z21_620;
							BgL_key2387z00_4340 = BgL_key2379z00_621;
							BgL_fun2388z00_4341 = BgL_fun2380z00_622;
							BgL_args2389z00_4342 = BgL_args2381z00_623;
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_4330))->BgL_locz00) =
								((obj_t) BgL_loc2384z00_4337), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_4330))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2385z00_4338), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_4330))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32386z21_4339), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_4330))->BgL_keyz00) =
								((obj_t) BgL_key2387z00_4340), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_4330))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_fun2388z00_4341), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_4330))->BgL_argsz00) =
								((obj_t) BgL_args2389z00_4342), BUNSPEC);
							BgL_res5372z00_4343 = BgL_new2390z00_4330;
					}} BgL_res5372z00_4343;
				}
				return BgL_new2382z00_4324;
			}
		}
	}



/* _make-app */
	obj_t BGl__makezd2appzd2zzast_nodez00(obj_t BgL_envz00_7298,
		obj_t BgL_loc2376z00_7299, obj_t BgL_type2377z00_7300,
		obj_t BgL_sidezd2effectzf32378z21_7301, obj_t BgL_key2379z00_7302,
		obj_t BgL_fun2380z00_7303, obj_t BgL_args2381z00_7304)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			return
				(obj_t) (BGl_makezd2appzd2zzast_nodez00(BgL_loc2376z00_7299,
					(BgL_typez00_bglt) (BgL_type2377z00_7300),
					BgL_sidezd2effectzf32378z21_7301, BgL_key2379z00_7302,
					(BgL_varz00_bglt) (BgL_fun2380z00_7303), BgL_args2381z00_7304));
		}
	}



/* fill-app! */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_fillzd2appz12zc0zzast_nodez00(BgL_appz00_bglt BgL_new2390z00_624,
		obj_t BgL_loc2384z00_625, BgL_typez00_bglt BgL_type2385z00_626,
		obj_t BgL_sidezd2effectzf32386z21_627, obj_t BgL_key2387z00_628,
		BgL_varz00_bglt BgL_fun2388z00_629, obj_t BgL_args2389z00_630)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{	/* Ast/node.scm 66 */
				obj_t BgL_loc2384z00_8388;

				BgL_typez00_bglt BgL_type2385z00_8389;

				obj_t BgL_sidezd2effectzf32386z21_8390;

				obj_t BgL_key2387z00_8391;

				BgL_varz00_bglt BgL_fun2388z00_8392;

				obj_t BgL_args2389z00_8393;

				BgL_loc2384z00_8388 = BgL_loc2384z00_625;
				BgL_type2385z00_8389 = BgL_type2385z00_626;
				BgL_sidezd2effectzf32386z21_8390 = BgL_sidezd2effectzf32386z21_627;
				BgL_key2387z00_8391 = BgL_key2387z00_628;
				BgL_fun2388z00_8392 = BgL_fun2388z00_629;
				BgL_args2389z00_8393 = BgL_args2389z00_630;
				((((BgL_appz00_bglt) CREF(BgL_new2390z00_624))->BgL_locz00) =
					((obj_t) BgL_loc2384z00_8388), BUNSPEC);
				((((BgL_appz00_bglt) CREF(BgL_new2390z00_624))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2385z00_8389), BUNSPEC);
				((((BgL_appz00_bglt) CREF(BgL_new2390z00_624))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32386z21_8390), BUNSPEC);
				((((BgL_appz00_bglt) CREF(BgL_new2390z00_624))->BgL_keyz00) =
					((obj_t) BgL_key2387z00_8391), BUNSPEC);
				((((BgL_appz00_bglt) CREF(BgL_new2390z00_624))->BgL_funz00) =
					((BgL_varz00_bglt) BgL_fun2388z00_8392), BUNSPEC);
				((((BgL_appz00_bglt) CREF(BgL_new2390z00_624))->BgL_argsz00) =
					((obj_t) BgL_args2389z00_8393), BUNSPEC);
				return BgL_new2390z00_624;
			}
		}
	}



/* _fill-app! */
	obj_t BGl__fillzd2appz12zc0zzast_nodez00(obj_t BgL_envz00_7305,
		obj_t BgL_new2390z00_7306, obj_t BgL_loc2384z00_7307,
		obj_t BgL_type2385z00_7308, obj_t BgL_sidezd2effectzf32386z21_7309,
		obj_t BgL_key2387z00_7310, obj_t BgL_fun2388z00_7311,
		obj_t BgL_args2389z00_7312)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{	/* Ast/node.scm 66 */
				BgL_appz00_bglt BgL_auxz00_10737;

				{	/* Ast/node.scm 66 */
					BgL_appz00_bglt BgL_res5603z00_8407;

					{	/* Ast/node.scm 66 */
						BgL_appz00_bglt BgL_new2390z00_8394;

						BgL_typez00_bglt BgL_type2385z00_8396;

						BgL_varz00_bglt BgL_fun2388z00_8399;

						BgL_new2390z00_8394 = (BgL_appz00_bglt) (BgL_new2390z00_7306);
						BgL_type2385z00_8396 = (BgL_typez00_bglt) (BgL_type2385z00_7308);
						BgL_fun2388z00_8399 = (BgL_varz00_bglt) (BgL_fun2388z00_7311);
						{	/* Ast/node.scm 66 */
							obj_t BgL_loc2384z00_8401;

							BgL_typez00_bglt BgL_type2385z00_8402;

							obj_t BgL_sidezd2effectzf32386z21_8403;

							obj_t BgL_key2387z00_8404;

							BgL_varz00_bglt BgL_fun2388z00_8405;

							obj_t BgL_args2389z00_8406;

							BgL_loc2384z00_8401 = BgL_loc2384z00_7307;
							BgL_type2385z00_8402 = BgL_type2385z00_8396;
							BgL_sidezd2effectzf32386z21_8403 =
								BgL_sidezd2effectzf32386z21_7309;
							BgL_key2387z00_8404 = BgL_key2387z00_7310;
							BgL_fun2388z00_8405 = BgL_fun2388z00_8399;
							BgL_args2389z00_8406 = BgL_args2389z00_7312;
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_8394))->BgL_locz00) =
								((obj_t) BgL_loc2384z00_8401), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_8394))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2385z00_8402), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_8394))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32386z21_8403), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_8394))->BgL_keyz00) =
								((obj_t) BgL_key2387z00_8404), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_8394))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_fun2388z00_8405), BUNSPEC);
							((((BgL_appz00_bglt) CREF(BgL_new2390z00_8394))->BgL_argsz00) =
								((obj_t) BgL_args2389z00_8406), BUNSPEC);
							BgL_res5603z00_8407 = BgL_new2390z00_8394;
						}
					}
					BgL_auxz00_10737 = BgL_res5603z00_8407;
				}
				return (obj_t) (BgL_auxz00_10737);
			}
		}
	}



/* %allocate-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_z52allocatezd2appz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{	/* Ast/node.scm 66 */
				BgL_appz00_bglt BgL_new2398z00_8408;

				BgL_new2398z00_8408 =
					((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_appz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2398z00_8408),
					BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
				{	/* Ast/node.scm 66 */
					BgL_objectz00_bglt BgL_auxz00_10752;

					BgL_auxz00_10752 = (BgL_objectz00_bglt) (BgL_new2398z00_8408);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10752, BFALSE);
				}
				return BgL_new2398z00_8408;
			}
		}
	}



/* _%allocate-app */
	obj_t BGl__z52allocatezd2appz80zzast_nodez00(obj_t BgL_envz00_6799)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{	/* Ast/node.scm 66 */
				BgL_appz00_bglt BgL_auxz00_10755;

				{	/* Ast/node.scm 66 */
					BgL_appz00_bglt BgL_res5604z00_8412;

					{	/* Ast/node.scm 66 */
						BgL_appz00_bglt BgL_new2398z00_8410;

						BgL_new2398z00_8410 =
							((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2398z00_8410),
							BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
						{	/* Ast/node.scm 66 */
							BgL_objectz00_bglt BgL_auxz00_10760;

							BgL_auxz00_10760 = (BgL_objectz00_bglt) (BgL_new2398z00_8410);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10760, BFALSE);
						}
						BgL_res5604z00_8412 = BgL_new2398z00_8410;
					}
					BgL_auxz00_10755 = BgL_res5604z00_8412;
				}
				return (obj_t) (BgL_auxz00_10755);
			}
		}
	}



/* app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_appzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			if ((BGl_z52thezd2appzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 66 */
					{	/* Ast/node.scm 66 */
						BgL_appz00_bglt BgL_res5373z00_4358;

						{	/* Ast/node.scm 66 */
							BgL_appz00_bglt BgL_new2398z00_4354;

							BgL_new2398z00_4354 =
								((BgL_appz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2398z00_4354),
								BGl_classzd2numzd2zz__objectz00(BGl_appz00zzast_nodez00));
							{	/* Ast/node.scm 66 */
								BgL_objectz00_bglt BgL_auxz00_10770;

								BgL_auxz00_10770 = (BgL_objectz00_bglt) (BgL_new2398z00_4354);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10770, BFALSE);
							}
							BgL_res5373z00_4358 = BgL_new2398z00_4354;
						}
						BGl_z52thezd2appzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5373z00_4358);
					}
					{	/* Ast/node.scm 66 */
						BgL_typez00_bglt BgL_arg4684z00_1665;

						BgL_varz00_bglt BgL_arg4685z00_1666;

						BgL_arg4684z00_1665 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4685z00_1666 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Ast/node.scm 66 */
							BgL_appz00_bglt BgL_res5374z00_4372;

							{	/* Ast/node.scm 66 */
								BgL_appz00_bglt BgL_new2390z00_4359;

								BgL_new2390z00_4359 =
									(BgL_appz00_bglt) (BGl_z52thezd2appzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 66 */
									obj_t BgL_loc2384z00_4366;

									BgL_typez00_bglt BgL_type2385z00_4367;

									obj_t BgL_sidezd2effectzf32386z21_4368;

									obj_t BgL_key2387z00_4369;

									BgL_varz00_bglt BgL_fun2388z00_4370;

									obj_t BgL_args2389z00_4371;

									BgL_loc2384z00_4366 = BUNSPEC;
									BgL_type2385z00_4367 = BgL_arg4684z00_1665;
									BgL_sidezd2effectzf32386z21_4368 = BUNSPEC;
									BgL_key2387z00_4369 = BUNSPEC;
									BgL_fun2388z00_4370 = BgL_arg4685z00_1666;
									BgL_args2389z00_4371 = BUNSPEC;
									((((BgL_appz00_bglt) CREF(BgL_new2390z00_4359))->BgL_locz00) =
										((obj_t) BgL_loc2384z00_4366), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2390z00_4359))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2385z00_4367), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2390z00_4359))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32386z21_4368), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2390z00_4359))->BgL_keyz00) =
										((obj_t) BgL_key2387z00_4369), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2390z00_4359))->BgL_funz00) =
										((BgL_varz00_bglt) BgL_fun2388z00_4370), BUNSPEC);
									((((BgL_appz00_bglt) CREF(BgL_new2390z00_4359))->
											BgL_argsz00) = ((obj_t) BgL_args2389z00_4371), BUNSPEC);
									BgL_res5374z00_4372 = BgL_new2390z00_4359;
							}}
							(obj_t) (BgL_res5374z00_4372);
				}}}
			else
				{	/* Ast/node.scm 66 */
					BFALSE;
				}
			return (BgL_appz00_bglt) (BGl_z52thezd2appzd2nilz52zzast_nodez00);
		}
	}



/* _app-nil */
	obj_t BGl__appzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6800)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			return (obj_t) (BGl_appzd2nilzd2zzast_nodez00());
		}
	}



/* sequence? */
	BGL_EXPORTED_DEF bool_t BGl_sequencezf3zf3zzast_nodez00(obj_t
		BgL_obj2359z00_637)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2359z00_637,
				BGl_sequencez00zzast_nodez00);
		}
	}



/* _sequence? */
	obj_t BGl__sequencezf3zf3zzast_nodez00(obj_t BgL_envz00_6797,
		obj_t BgL_obj2359z00_6798)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2359z00_6798,
					BGl_sequencez00zzast_nodez00));
		}
	}



/* make-sequence */
	BGL_EXPORTED_DEF BgL_sequencez00_bglt
		BGl_makezd2sequencezd2zzast_nodez00(obj_t BgL_loc2317z00_641,
		BgL_typez00_bglt BgL_type2318z00_642, obj_t BgL_sidezd2effectzf32319z21_643,
		obj_t BgL_key2320z00_644, obj_t BgL_nodes2321z00_645)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{	/* Ast/node.scm 62 */
				BgL_sequencez00_bglt BgL_new2322z00_4373;

				{	/* Ast/node.scm 62 */
					BgL_sequencez00_bglt BgL_res5375z00_4378;

					{	/* Ast/node.scm 62 */
						BgL_sequencez00_bglt BgL_new2336z00_4374;

						BgL_new2336z00_4374 =
							((BgL_sequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sequencez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2336z00_4374),
							BGl_classzd2numzd2zz__objectz00(BGl_sequencez00zzast_nodez00));
						{	/* Ast/node.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_10794;

							BgL_auxz00_10794 = (BgL_objectz00_bglt) (BgL_new2336z00_4374);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10794, BFALSE);
						}
						BgL_res5375z00_4378 = BgL_new2336z00_4374;
					}
					BgL_new2322z00_4373 = BgL_res5375z00_4378;
				}
				{	/* Ast/node.scm 62 */
					BgL_sequencez00_bglt BgL_res5376z00_4390;

					{	/* Ast/node.scm 62 */
						BgL_sequencez00_bglt BgL_new2329z00_4379;

						BgL_new2329z00_4379 = BgL_new2322z00_4373;
						{	/* Ast/node.scm 62 */
							obj_t BgL_loc2324z00_4385;

							BgL_typez00_bglt BgL_type2325z00_4386;

							obj_t BgL_sidezd2effectzf32326z21_4387;

							obj_t BgL_key2327z00_4388;

							obj_t BgL_nodes2328z00_4389;

							BgL_loc2324z00_4385 = BgL_loc2317z00_641;
							BgL_type2325z00_4386 = BgL_type2318z00_642;
							BgL_sidezd2effectzf32326z21_4387 =
								BgL_sidezd2effectzf32319z21_643;
							BgL_key2327z00_4388 = BgL_key2320z00_644;
							BgL_nodes2328z00_4389 = BgL_nodes2321z00_645;
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4379))->
									BgL_locz00) = ((obj_t) BgL_loc2324z00_4385), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4379))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2325z00_4386), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4379))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32326z21_4387), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4379))->
									BgL_keyz00) = ((obj_t) BgL_key2327z00_4388), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4379))->
									BgL_nodesz00) = ((obj_t) BgL_nodes2328z00_4389), BUNSPEC);
							BgL_res5376z00_4390 = BgL_new2329z00_4379;
					}} BgL_res5376z00_4390;
				}
				return BgL_new2322z00_4373;
			}
		}
	}



/* _make-sequence */
	obj_t BGl__makezd2sequencezd2zzast_nodez00(obj_t BgL_envz00_7313,
		obj_t BgL_loc2317z00_7314, obj_t BgL_type2318z00_7315,
		obj_t BgL_sidezd2effectzf32319z21_7316, obj_t BgL_key2320z00_7317,
		obj_t BgL_nodes2321z00_7318)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			return
				(obj_t) (BGl_makezd2sequencezd2zzast_nodez00(BgL_loc2317z00_7314,
					(BgL_typez00_bglt) (BgL_type2318z00_7315),
					BgL_sidezd2effectzf32319z21_7316, BgL_key2320z00_7317,
					BgL_nodes2321z00_7318));
		}
	}



/* fill-sequence! */
	BGL_EXPORTED_DEF BgL_sequencez00_bglt
		BGl_fillzd2sequencez12zc0zzast_nodez00(BgL_sequencez00_bglt
		BgL_new2329z00_646, obj_t BgL_loc2324z00_647,
		BgL_typez00_bglt BgL_type2325z00_648, obj_t BgL_sidezd2effectzf32326z21_649,
		obj_t BgL_key2327z00_650, obj_t BgL_nodes2328z00_651)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{	/* Ast/node.scm 62 */
				obj_t BgL_loc2324z00_8414;

				BgL_typez00_bglt BgL_type2325z00_8415;

				obj_t BgL_sidezd2effectzf32326z21_8416;

				obj_t BgL_key2327z00_8417;

				obj_t BgL_nodes2328z00_8418;

				BgL_loc2324z00_8414 = BgL_loc2324z00_647;
				BgL_type2325z00_8415 = BgL_type2325z00_648;
				BgL_sidezd2effectzf32326z21_8416 = BgL_sidezd2effectzf32326z21_649;
				BgL_key2327z00_8417 = BgL_key2327z00_650;
				BgL_nodes2328z00_8418 = BgL_nodes2328z00_651;
				((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_646))->BgL_locz00) =
					((obj_t) BgL_loc2324z00_8414), BUNSPEC);
				((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_646))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2325z00_8415), BUNSPEC);
				((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_646))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32326z21_8416), BUNSPEC);
				((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_646))->BgL_keyz00) =
					((obj_t) BgL_key2327z00_8417), BUNSPEC);
				((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_646))->BgL_nodesz00) =
					((obj_t) BgL_nodes2328z00_8418), BUNSPEC);
				return BgL_new2329z00_646;
			}
		}
	}



/* _fill-sequence! */
	obj_t BGl__fillzd2sequencez12zc0zzast_nodez00(obj_t BgL_envz00_7319,
		obj_t BgL_new2329z00_7320, obj_t BgL_loc2324z00_7321,
		obj_t BgL_type2325z00_7322, obj_t BgL_sidezd2effectzf32326z21_7323,
		obj_t BgL_key2327z00_7324, obj_t BgL_nodes2328z00_7325)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{	/* Ast/node.scm 62 */
				BgL_sequencez00_bglt BgL_auxz00_10810;

				{	/* Ast/node.scm 62 */
					BgL_sequencez00_bglt BgL_res5605z00_8430;

					{	/* Ast/node.scm 62 */
						BgL_sequencez00_bglt BgL_new2329z00_8419;

						BgL_typez00_bglt BgL_type2325z00_8421;

						BgL_new2329z00_8419 = (BgL_sequencez00_bglt) (BgL_new2329z00_7320);
						BgL_type2325z00_8421 = (BgL_typez00_bglt) (BgL_type2325z00_7322);
						{	/* Ast/node.scm 62 */
							obj_t BgL_loc2324z00_8425;

							BgL_typez00_bglt BgL_type2325z00_8426;

							obj_t BgL_sidezd2effectzf32326z21_8427;

							obj_t BgL_key2327z00_8428;

							obj_t BgL_nodes2328z00_8429;

							BgL_loc2324z00_8425 = BgL_loc2324z00_7321;
							BgL_type2325z00_8426 = BgL_type2325z00_8421;
							BgL_sidezd2effectzf32326z21_8427 =
								BgL_sidezd2effectzf32326z21_7323;
							BgL_key2327z00_8428 = BgL_key2327z00_7324;
							BgL_nodes2328z00_8429 = BgL_nodes2328z00_7325;
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_8419))->
									BgL_locz00) = ((obj_t) BgL_loc2324z00_8425), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_8419))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2325z00_8426), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_8419))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32326z21_8427), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_8419))->
									BgL_keyz00) = ((obj_t) BgL_key2327z00_8428), BUNSPEC);
							((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_8419))->
									BgL_nodesz00) = ((obj_t) BgL_nodes2328z00_8429), BUNSPEC);
							BgL_res5605z00_8430 = BgL_new2329z00_8419;
						}
					}
					BgL_auxz00_10810 = BgL_res5605z00_8430;
				}
				return (obj_t) (BgL_auxz00_10810);
			}
		}
	}



/* %allocate-sequence */
	BGL_EXPORTED_DEF BgL_sequencez00_bglt
		BGl_z52allocatezd2sequencez80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{	/* Ast/node.scm 62 */
				BgL_sequencez00_bglt BgL_new2336z00_8431;

				BgL_new2336z00_8431 =
					((BgL_sequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sequencez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2336z00_8431),
					BGl_classzd2numzd2zz__objectz00(BGl_sequencez00zzast_nodez00));
				{	/* Ast/node.scm 62 */
					BgL_objectz00_bglt BgL_auxz00_10823;

					BgL_auxz00_10823 = (BgL_objectz00_bglt) (BgL_new2336z00_8431);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10823, BFALSE);
				}
				return BgL_new2336z00_8431;
			}
		}
	}



/* _%allocate-sequence */
	obj_t BGl__z52allocatezd2sequencez80zzast_nodez00(obj_t BgL_envz00_6795)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{	/* Ast/node.scm 62 */
				BgL_sequencez00_bglt BgL_auxz00_10826;

				{	/* Ast/node.scm 62 */
					BgL_sequencez00_bglt BgL_res5606z00_8435;

					{	/* Ast/node.scm 62 */
						BgL_sequencez00_bglt BgL_new2336z00_8433;

						BgL_new2336z00_8433 =
							((BgL_sequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sequencez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2336z00_8433),
							BGl_classzd2numzd2zz__objectz00(BGl_sequencez00zzast_nodez00));
						{	/* Ast/node.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_10831;

							BgL_auxz00_10831 = (BgL_objectz00_bglt) (BgL_new2336z00_8433);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10831, BFALSE);
						}
						BgL_res5606z00_8435 = BgL_new2336z00_8433;
					}
					BgL_auxz00_10826 = BgL_res5606z00_8435;
				}
				return (obj_t) (BgL_auxz00_10826);
			}
		}
	}



/* sequence-nil */
	BGL_EXPORTED_DEF BgL_sequencez00_bglt BGl_sequencezd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			if ((BGl_z52thezd2sequencezd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 62 */
					{	/* Ast/node.scm 62 */
						BgL_sequencez00_bglt BgL_res5377z00_4404;

						{	/* Ast/node.scm 62 */
							BgL_sequencez00_bglt BgL_new2336z00_4400;

							BgL_new2336z00_4400 =
								((BgL_sequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sequencez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2336z00_4400),
								BGl_classzd2numzd2zz__objectz00(BGl_sequencez00zzast_nodez00));
							{	/* Ast/node.scm 62 */
								BgL_objectz00_bglt BgL_auxz00_10841;

								BgL_auxz00_10841 = (BgL_objectz00_bglt) (BgL_new2336z00_4400);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10841, BFALSE);
							}
							BgL_res5377z00_4404 = BgL_new2336z00_4400;
						}
						BGl_z52thezd2sequencezd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5377z00_4404);
					}
					{	/* Ast/node.scm 62 */
						BgL_typez00_bglt BgL_arg4688z00_1676;

						BgL_arg4688z00_1676 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 62 */
							BgL_sequencez00_bglt BgL_res5378z00_4416;

							{	/* Ast/node.scm 62 */
								BgL_sequencez00_bglt BgL_new2329z00_4405;

								BgL_new2329z00_4405 =
									(BgL_sequencez00_bglt)
									(BGl_z52thezd2sequencezd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 62 */
									obj_t BgL_loc2324z00_4411;

									BgL_typez00_bglt BgL_type2325z00_4412;

									obj_t BgL_sidezd2effectzf32326z21_4413;

									obj_t BgL_key2327z00_4414;

									obj_t BgL_nodes2328z00_4415;

									BgL_loc2324z00_4411 = BUNSPEC;
									BgL_type2325z00_4412 = BgL_arg4688z00_1676;
									BgL_sidezd2effectzf32326z21_4413 = BUNSPEC;
									BgL_key2327z00_4414 = BUNSPEC;
									BgL_nodes2328z00_4415 = BUNSPEC;
									((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4405))->
											BgL_locz00) = ((obj_t) BgL_loc2324z00_4411), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4405))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2325z00_4412), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4405))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32326z21_4413), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4405))->
											BgL_keyz00) = ((obj_t) BgL_key2327z00_4414), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2329z00_4405))->
											BgL_nodesz00) = ((obj_t) BgL_nodes2328z00_4415), BUNSPEC);
									BgL_res5378z00_4416 = BgL_new2329z00_4405;
							}}
							(obj_t) (BgL_res5378z00_4416);
				}}}
			else
				{	/* Ast/node.scm 62 */
					BFALSE;
				}
			return
				(BgL_sequencez00_bglt) (BGl_z52thezd2sequencezd2nilz52zzast_nodez00);
		}
	}



/* _sequence-nil */
	obj_t BGl__sequencezd2nilzd2zzast_nodez00(obj_t BgL_envz00_6796)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			return (obj_t) (BGl_sequencezd2nilzd2zzast_nodez00());
		}
	}



/* kwote? */
	BGL_EXPORTED_DEF bool_t BGl_kwotezf3zf3zzast_nodez00(obj_t BgL_obj2305z00_653)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2305z00_653,
				BGl_kwotez00zzast_nodez00);
		}
	}



/* _kwote? */
	obj_t BGl__kwotezf3zf3zzast_nodez00(obj_t BgL_envz00_6793,
		obj_t BgL_obj2305z00_6794)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2305z00_6794,
					BGl_kwotez00zzast_nodez00));
		}
	}



/* make-kwote */
	BGL_EXPORTED_DEF BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t
		BgL_loc2277z00_657, BgL_typez00_bglt BgL_type2278z00_658,
		obj_t BgL_value2279z00_659)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{	/* Ast/node.scm 57 */
				BgL_kwotez00_bglt BgL_new2280z00_4417;

				{	/* Ast/node.scm 57 */
					BgL_kwotez00_bglt BgL_res5379z00_4422;

					{	/* Ast/node.scm 57 */
						BgL_kwotez00_bglt BgL_new2290z00_4418;

						BgL_new2290z00_4418 =
							((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_kwotez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2290z00_4418),
							BGl_classzd2numzd2zz__objectz00(BGl_kwotez00zzast_nodez00));
						{	/* Ast/node.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_10863;

							BgL_auxz00_10863 = (BgL_objectz00_bglt) (BgL_new2290z00_4418);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10863, BFALSE);
						}
						BgL_res5379z00_4422 = BgL_new2290z00_4418;
					}
					BgL_new2280z00_4417 = BgL_res5379z00_4422;
				}
				{	/* Ast/node.scm 57 */
					BgL_kwotez00_bglt BgL_res5380z00_4430;

					{	/* Ast/node.scm 57 */
						BgL_kwotez00_bglt BgL_new2285z00_4423;

						BgL_new2285z00_4423 = BgL_new2280z00_4417;
						{	/* Ast/node.scm 57 */
							obj_t BgL_loc2282z00_4427;

							BgL_typez00_bglt BgL_type2283z00_4428;

							obj_t BgL_value2284z00_4429;

							BgL_loc2282z00_4427 = BgL_loc2277z00_657;
							BgL_type2283z00_4428 = BgL_type2278z00_658;
							BgL_value2284z00_4429 = BgL_value2279z00_659;
							((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_4423))->BgL_locz00) =
								((obj_t) BgL_loc2282z00_4427), BUNSPEC);
							((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_4423))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2283z00_4428), BUNSPEC);
							((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_4423))->BgL_valuez00) =
								((obj_t) BgL_value2284z00_4429), BUNSPEC);
							BgL_res5380z00_4430 = BgL_new2285z00_4423;
					}} BgL_res5380z00_4430;
				}
				return BgL_new2280z00_4417;
			}
		}
	}



/* _make-kwote */
	obj_t BGl__makezd2kwotezd2zzast_nodez00(obj_t BgL_envz00_7326,
		obj_t BgL_loc2277z00_7327, obj_t BgL_type2278z00_7328,
		obj_t BgL_value2279z00_7329)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			return
				(obj_t) (BGl_makezd2kwotezd2zzast_nodez00(BgL_loc2277z00_7327,
					(BgL_typez00_bglt) (BgL_type2278z00_7328), BgL_value2279z00_7329));
		}
	}



/* fill-kwote! */
	BGL_EXPORTED_DEF BgL_kwotez00_bglt
		BGl_fillzd2kwotez12zc0zzast_nodez00(BgL_kwotez00_bglt BgL_new2285z00_660,
		obj_t BgL_loc2282z00_661, BgL_typez00_bglt BgL_type2283z00_662,
		obj_t BgL_value2284z00_663)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{	/* Ast/node.scm 57 */
				obj_t BgL_loc2282z00_8437;

				BgL_typez00_bglt BgL_type2283z00_8438;

				obj_t BgL_value2284z00_8439;

				BgL_loc2282z00_8437 = BgL_loc2282z00_661;
				BgL_type2283z00_8438 = BgL_type2283z00_662;
				BgL_value2284z00_8439 = BgL_value2284z00_663;
				((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_660))->BgL_locz00) =
					((obj_t) BgL_loc2282z00_8437), BUNSPEC);
				((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_660))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2283z00_8438), BUNSPEC);
				((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_660))->BgL_valuez00) =
					((obj_t) BgL_value2284z00_8439), BUNSPEC);
				return BgL_new2285z00_660;
			}
		}
	}



/* _fill-kwote! */
	obj_t BGl__fillzd2kwotez12zc0zzast_nodez00(obj_t BgL_envz00_7330,
		obj_t BgL_new2285z00_7331, obj_t BgL_loc2282z00_7332,
		obj_t BgL_type2283z00_7333, obj_t BgL_value2284z00_7334)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{	/* Ast/node.scm 57 */
				BgL_kwotez00_bglt BgL_auxz00_10875;

				{	/* Ast/node.scm 57 */
					BgL_kwotez00_bglt BgL_res5607z00_8447;

					{	/* Ast/node.scm 57 */
						BgL_kwotez00_bglt BgL_new2285z00_8440;

						BgL_typez00_bglt BgL_type2283z00_8442;

						BgL_new2285z00_8440 = (BgL_kwotez00_bglt) (BgL_new2285z00_7331);
						BgL_type2283z00_8442 = (BgL_typez00_bglt) (BgL_type2283z00_7333);
						{	/* Ast/node.scm 57 */
							obj_t BgL_loc2282z00_8444;

							BgL_typez00_bglt BgL_type2283z00_8445;

							obj_t BgL_value2284z00_8446;

							BgL_loc2282z00_8444 = BgL_loc2282z00_7332;
							BgL_type2283z00_8445 = BgL_type2283z00_8442;
							BgL_value2284z00_8446 = BgL_value2284z00_7334;
							((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_8440))->BgL_locz00) =
								((obj_t) BgL_loc2282z00_8444), BUNSPEC);
							((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_8440))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2283z00_8445), BUNSPEC);
							((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_8440))->BgL_valuez00) =
								((obj_t) BgL_value2284z00_8446), BUNSPEC);
							BgL_res5607z00_8447 = BgL_new2285z00_8440;
						}
					}
					BgL_auxz00_10875 = BgL_res5607z00_8447;
				}
				return (obj_t) (BgL_auxz00_10875);
			}
		}
	}



/* %allocate-kwote */
	BGL_EXPORTED_DEF BgL_kwotez00_bglt BGl_z52allocatezd2kwotez80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{	/* Ast/node.scm 57 */
				BgL_kwotez00_bglt BgL_new2290z00_8448;

				BgL_new2290z00_8448 =
					((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_kwotez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2290z00_8448),
					BGl_classzd2numzd2zz__objectz00(BGl_kwotez00zzast_nodez00));
				{	/* Ast/node.scm 57 */
					BgL_objectz00_bglt BgL_auxz00_10886;

					BgL_auxz00_10886 = (BgL_objectz00_bglt) (BgL_new2290z00_8448);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10886, BFALSE);
				}
				return BgL_new2290z00_8448;
			}
		}
	}



/* _%allocate-kwote */
	obj_t BGl__z52allocatezd2kwotez80zzast_nodez00(obj_t BgL_envz00_6791)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{	/* Ast/node.scm 57 */
				BgL_kwotez00_bglt BgL_auxz00_10889;

				{	/* Ast/node.scm 57 */
					BgL_kwotez00_bglt BgL_res5608z00_8452;

					{	/* Ast/node.scm 57 */
						BgL_kwotez00_bglt BgL_new2290z00_8450;

						BgL_new2290z00_8450 =
							((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_kwotez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2290z00_8450),
							BGl_classzd2numzd2zz__objectz00(BGl_kwotez00zzast_nodez00));
						{	/* Ast/node.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_10894;

							BgL_auxz00_10894 = (BgL_objectz00_bglt) (BgL_new2290z00_8450);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10894, BFALSE);
						}
						BgL_res5608z00_8452 = BgL_new2290z00_8450;
					}
					BgL_auxz00_10889 = BgL_res5608z00_8452;
				}
				return (obj_t) (BgL_auxz00_10889);
			}
		}
	}



/* kwote-nil */
	BGL_EXPORTED_DEF BgL_kwotez00_bglt BGl_kwotezd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			if ((BGl_z52thezd2kwotezd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 57 */
					{	/* Ast/node.scm 57 */
						BgL_kwotez00_bglt BgL_res5381z00_4442;

						{	/* Ast/node.scm 57 */
							BgL_kwotez00_bglt BgL_new2290z00_4438;

							BgL_new2290z00_4438 =
								((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_kwotez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2290z00_4438),
								BGl_classzd2numzd2zz__objectz00(BGl_kwotez00zzast_nodez00));
							{	/* Ast/node.scm 57 */
								BgL_objectz00_bglt BgL_auxz00_10904;

								BgL_auxz00_10904 = (BgL_objectz00_bglt) (BgL_new2290z00_4438);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10904, BFALSE);
							}
							BgL_res5381z00_4442 = BgL_new2290z00_4438;
						}
						BGl_z52thezd2kwotezd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5381z00_4442);
					}
					{	/* Ast/node.scm 57 */
						BgL_typez00_bglt BgL_arg4691z00_1684;

						BgL_arg4691z00_1684 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 57 */
							BgL_kwotez00_bglt BgL_res5382z00_4450;

							{	/* Ast/node.scm 57 */
								BgL_kwotez00_bglt BgL_new2285z00_4443;

								BgL_new2285z00_4443 =
									(BgL_kwotez00_bglt)
									(BGl_z52thezd2kwotezd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 57 */
									obj_t BgL_loc2282z00_4447;

									BgL_typez00_bglt BgL_type2283z00_4448;

									obj_t BgL_value2284z00_4449;

									BgL_loc2282z00_4447 = BUNSPEC;
									BgL_type2283z00_4448 = BgL_arg4691z00_1684;
									BgL_value2284z00_4449 = BUNSPEC;
									((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_4443))->
											BgL_locz00) = ((obj_t) BgL_loc2282z00_4447), BUNSPEC);
									((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_4443))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2283z00_4448), BUNSPEC);
									((((BgL_kwotez00_bglt) CREF(BgL_new2285z00_4443))->
											BgL_valuez00) = ((obj_t) BgL_value2284z00_4449), BUNSPEC);
									BgL_res5382z00_4450 = BgL_new2285z00_4443;
							}}
							(obj_t) (BgL_res5382z00_4450);
				}}}
			else
				{	/* Ast/node.scm 57 */
					BFALSE;
				}
			return (BgL_kwotez00_bglt) (BGl_z52thezd2kwotezd2nilz52zzast_nodez00);
		}
	}



/* _kwote-nil */
	obj_t BGl__kwotezd2nilzd2zzast_nodez00(obj_t BgL_envz00_6792)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			return (obj_t) (BGl_kwotezd2nilzd2zzast_nodez00());
		}
	}



/* closure? */
	BGL_EXPORTED_DEF bool_t BGl_closurezf3zf3zzast_nodez00(obj_t
		BgL_obj2271z00_665)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2271z00_665,
				BGl_closurez00zzast_nodez00);
		}
	}



/* _closure? */
	obj_t BGl__closurezf3zf3zzast_nodez00(obj_t BgL_envz00_6789,
		obj_t BgL_obj2271z00_6790)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2271z00_6790,
					BGl_closurez00zzast_nodez00));
		}
	}



/* make-closure */
	BGL_EXPORTED_DEF BgL_closurez00_bglt BGl_makezd2closurezd2zzast_nodez00(obj_t
		BgL_loc2243z00_669, BgL_typez00_bglt BgL_type2244z00_670,
		BgL_variablez00_bglt BgL_variable2245z00_671)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{	/* Ast/node.scm 54 */
				BgL_closurez00_bglt BgL_new2246z00_4451;

				{	/* Ast/node.scm 54 */
					BgL_closurez00_bglt BgL_res5383z00_4456;

					{	/* Ast/node.scm 54 */
						BgL_closurez00_bglt BgL_new2256z00_4452;

						BgL_new2256z00_4452 =
							((BgL_closurez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_closurez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2256z00_4452),
							BGl_classzd2numzd2zz__objectz00(BGl_closurez00zzast_nodez00));
						{	/* Ast/node.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_10924;

							BgL_auxz00_10924 = (BgL_objectz00_bglt) (BgL_new2256z00_4452);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10924, BFALSE);
						}
						BgL_res5383z00_4456 = BgL_new2256z00_4452;
					}
					BgL_new2246z00_4451 = BgL_res5383z00_4456;
				}
				{	/* Ast/node.scm 54 */
					BgL_closurez00_bglt BgL_res5384z00_4464;

					{	/* Ast/node.scm 54 */
						BgL_closurez00_bglt BgL_new2251z00_4457;

						BgL_new2251z00_4457 = BgL_new2246z00_4451;
						{	/* Ast/node.scm 54 */
							obj_t BgL_loc2248z00_4461;

							BgL_typez00_bglt BgL_type2249z00_4462;

							BgL_variablez00_bglt BgL_variable2250z00_4463;

							BgL_loc2248z00_4461 = BgL_loc2243z00_669;
							BgL_type2249z00_4462 = BgL_type2244z00_670;
							BgL_variable2250z00_4463 = BgL_variable2245z00_671;
							((((BgL_closurez00_bglt) CREF(BgL_new2251z00_4457))->BgL_locz00) =
								((obj_t) BgL_loc2248z00_4461), BUNSPEC);
							((((BgL_closurez00_bglt) CREF(BgL_new2251z00_4457))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2249z00_4462), BUNSPEC);
							((((BgL_closurez00_bglt) CREF(BgL_new2251z00_4457))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) BgL_variable2250z00_4463), BUNSPEC);
							BgL_res5384z00_4464 = BgL_new2251z00_4457;
					}} BgL_res5384z00_4464;
				}
				return BgL_new2246z00_4451;
			}
		}
	}



/* _make-closure */
	obj_t BGl__makezd2closurezd2zzast_nodez00(obj_t BgL_envz00_7335,
		obj_t BgL_loc2243z00_7336, obj_t BgL_type2244z00_7337,
		obj_t BgL_variable2245z00_7338)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			return
				(obj_t) (BGl_makezd2closurezd2zzast_nodez00(BgL_loc2243z00_7336,
					(BgL_typez00_bglt) (BgL_type2244z00_7337),
					(BgL_variablez00_bglt) (BgL_variable2245z00_7338)));
		}
	}



/* fill-closure! */
	BGL_EXPORTED_DEF BgL_closurez00_bglt
		BGl_fillzd2closurez12zc0zzast_nodez00(BgL_closurez00_bglt
		BgL_new2251z00_672, obj_t BgL_loc2248z00_673,
		BgL_typez00_bglt BgL_type2249z00_674,
		BgL_variablez00_bglt BgL_variable2250z00_675)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{	/* Ast/node.scm 54 */
				obj_t BgL_loc2248z00_8454;

				BgL_typez00_bglt BgL_type2249z00_8455;

				BgL_variablez00_bglt BgL_variable2250z00_8456;

				BgL_loc2248z00_8454 = BgL_loc2248z00_673;
				BgL_type2249z00_8455 = BgL_type2249z00_674;
				BgL_variable2250z00_8456 = BgL_variable2250z00_675;
				((((BgL_closurez00_bglt) CREF(BgL_new2251z00_672))->BgL_locz00) =
					((obj_t) BgL_loc2248z00_8454), BUNSPEC);
				((((BgL_closurez00_bglt) CREF(BgL_new2251z00_672))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2249z00_8455), BUNSPEC);
				((((BgL_closurez00_bglt) CREF(BgL_new2251z00_672))->BgL_variablez00) =
					((BgL_variablez00_bglt) BgL_variable2250z00_8456), BUNSPEC);
				return BgL_new2251z00_672;
			}
		}
	}



/* _fill-closure! */
	obj_t BGl__fillzd2closurez12zc0zzast_nodez00(obj_t BgL_envz00_7339,
		obj_t BgL_new2251z00_7340, obj_t BgL_loc2248z00_7341,
		obj_t BgL_type2249z00_7342, obj_t BgL_variable2250z00_7343)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{	/* Ast/node.scm 54 */
				BgL_closurez00_bglt BgL_auxz00_10937;

				{	/* Ast/node.scm 54 */
					BgL_closurez00_bglt BgL_res5609z00_8464;

					{	/* Ast/node.scm 54 */
						BgL_closurez00_bglt BgL_new2251z00_8457;

						BgL_typez00_bglt BgL_type2249z00_8459;

						BgL_variablez00_bglt BgL_variable2250z00_8460;

						BgL_new2251z00_8457 = (BgL_closurez00_bglt) (BgL_new2251z00_7340);
						BgL_type2249z00_8459 = (BgL_typez00_bglt) (BgL_type2249z00_7342);
						BgL_variable2250z00_8460 =
							(BgL_variablez00_bglt) (BgL_variable2250z00_7343);
						{	/* Ast/node.scm 54 */
							obj_t BgL_loc2248z00_8461;

							BgL_typez00_bglt BgL_type2249z00_8462;

							BgL_variablez00_bglt BgL_variable2250z00_8463;

							BgL_loc2248z00_8461 = BgL_loc2248z00_7341;
							BgL_type2249z00_8462 = BgL_type2249z00_8459;
							BgL_variable2250z00_8463 = BgL_variable2250z00_8460;
							((((BgL_closurez00_bglt) CREF(BgL_new2251z00_8457))->BgL_locz00) =
								((obj_t) BgL_loc2248z00_8461), BUNSPEC);
							((((BgL_closurez00_bglt) CREF(BgL_new2251z00_8457))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2249z00_8462), BUNSPEC);
							((((BgL_closurez00_bglt) CREF(BgL_new2251z00_8457))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) BgL_variable2250z00_8463), BUNSPEC);
							BgL_res5609z00_8464 = BgL_new2251z00_8457;
						}
					}
					BgL_auxz00_10937 = BgL_res5609z00_8464;
				}
				return (obj_t) (BgL_auxz00_10937);
			}
		}
	}



/* %allocate-closure */
	BGL_EXPORTED_DEF BgL_closurez00_bglt
		BGl_z52allocatezd2closurez80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{	/* Ast/node.scm 54 */
				BgL_closurez00_bglt BgL_new2256z00_8465;

				BgL_new2256z00_8465 =
					((BgL_closurez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_closurez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2256z00_8465),
					BGl_classzd2numzd2zz__objectz00(BGl_closurez00zzast_nodez00));
				{	/* Ast/node.scm 54 */
					BgL_objectz00_bglt BgL_auxz00_10949;

					BgL_auxz00_10949 = (BgL_objectz00_bglt) (BgL_new2256z00_8465);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_10949, BFALSE);
				}
				return BgL_new2256z00_8465;
			}
		}
	}



/* _%allocate-closure */
	obj_t BGl__z52allocatezd2closurez80zzast_nodez00(obj_t BgL_envz00_6787)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{	/* Ast/node.scm 54 */
				BgL_closurez00_bglt BgL_auxz00_10952;

				{	/* Ast/node.scm 54 */
					BgL_closurez00_bglt BgL_res5610z00_8469;

					{	/* Ast/node.scm 54 */
						BgL_closurez00_bglt BgL_new2256z00_8467;

						BgL_new2256z00_8467 =
							((BgL_closurez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_closurez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2256z00_8467),
							BGl_classzd2numzd2zz__objectz00(BGl_closurez00zzast_nodez00));
						{	/* Ast/node.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_10957;

							BgL_auxz00_10957 = (BgL_objectz00_bglt) (BgL_new2256z00_8467);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10957, BFALSE);
						}
						BgL_res5610z00_8469 = BgL_new2256z00_8467;
					}
					BgL_auxz00_10952 = BgL_res5610z00_8469;
				}
				return (obj_t) (BgL_auxz00_10952);
			}
		}
	}



/* closure-nil */
	BGL_EXPORTED_DEF BgL_closurez00_bglt BGl_closurezd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			if ((BGl_z52thezd2closurezd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 54 */
					{	/* Ast/node.scm 54 */
						BgL_closurez00_bglt BgL_res5385z00_4476;

						{	/* Ast/node.scm 54 */
							BgL_closurez00_bglt BgL_new2256z00_4472;

							BgL_new2256z00_4472 =
								((BgL_closurez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_closurez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2256z00_4472),
								BGl_classzd2numzd2zz__objectz00(BGl_closurez00zzast_nodez00));
							{	/* Ast/node.scm 54 */
								BgL_objectz00_bglt BgL_auxz00_10967;

								BgL_auxz00_10967 = (BgL_objectz00_bglt) (BgL_new2256z00_4472);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_10967, BFALSE);
							}
							BgL_res5385z00_4476 = BgL_new2256z00_4472;
						}
						BGl_z52thezd2closurezd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5385z00_4476);
					}
					{	/* Ast/node.scm 54 */
						BgL_typez00_bglt BgL_arg4694z00_1692;

						BgL_variablez00_bglt BgL_arg4695z00_1693;

						BgL_arg4694z00_1692 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4695z00_1693 = BGl_variablezd2nilzd2zzast_varz00();
						{	/* Ast/node.scm 54 */
							BgL_closurez00_bglt BgL_res5386z00_4484;

							{	/* Ast/node.scm 54 */
								BgL_closurez00_bglt BgL_new2251z00_4477;

								BgL_new2251z00_4477 =
									(BgL_closurez00_bglt)
									(BGl_z52thezd2closurezd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 54 */
									obj_t BgL_loc2248z00_4481;

									BgL_typez00_bglt BgL_type2249z00_4482;

									BgL_variablez00_bglt BgL_variable2250z00_4483;

									BgL_loc2248z00_4481 = BUNSPEC;
									BgL_type2249z00_4482 = BgL_arg4694z00_1692;
									BgL_variable2250z00_4483 = BgL_arg4695z00_1693;
									((((BgL_closurez00_bglt) CREF(BgL_new2251z00_4477))->
											BgL_locz00) = ((obj_t) BgL_loc2248z00_4481), BUNSPEC);
									((((BgL_closurez00_bglt) CREF(BgL_new2251z00_4477))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2249z00_4482), BUNSPEC);
									((((BgL_closurez00_bglt) CREF(BgL_new2251z00_4477))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) BgL_variable2250z00_4483), BUNSPEC);
									BgL_res5386z00_4484 = BgL_new2251z00_4477;
							}}
							(obj_t) (BgL_res5386z00_4484);
				}}}
			else
				{	/* Ast/node.scm 54 */
					BFALSE;
				}
			return (BgL_closurez00_bglt) (BGl_z52thezd2closurezd2nilz52zzast_nodez00);
		}
	}



/* _closure-nil */
	obj_t BGl__closurezd2nilzd2zzast_nodez00(obj_t BgL_envz00_6788)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			return (obj_t) (BGl_closurezd2nilzd2zzast_nodez00());
		}
	}



/* var? */
	BGL_EXPORTED_DEF bool_t BGl_varzf3zf3zzast_nodez00(obj_t BgL_obj2235z00_676)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2235z00_676,
				BGl_varz00zzast_nodez00);
		}
	}



/* _var? */
	obj_t BGl__varzf3zf3zzast_nodez00(obj_t BgL_envz00_6785,
		obj_t BgL_obj2235z00_6786)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2235z00_6786,
					BGl_varz00zzast_nodez00));
		}
	}



/* make-var */
	BGL_EXPORTED_DEF BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t
		BgL_loc2207z00_680, BgL_typez00_bglt BgL_type2208z00_681,
		BgL_variablez00_bglt BgL_variable2209z00_682)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{	/* Ast/node.scm 49 */
				BgL_varz00_bglt BgL_new2210z00_4485;

				{	/* Ast/node.scm 49 */
					BgL_varz00_bglt BgL_res5387z00_4490;

					{	/* Ast/node.scm 49 */
						BgL_varz00_bglt BgL_new2220z00_4486;

						BgL_new2220z00_4486 =
							((BgL_varz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_varz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2220z00_4486),
							BGl_classzd2numzd2zz__objectz00(BGl_varz00zzast_nodez00));
						{	/* Ast/node.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_10988;

							BgL_auxz00_10988 = (BgL_objectz00_bglt) (BgL_new2220z00_4486);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_10988, BFALSE);
						}
						BgL_res5387z00_4490 = BgL_new2220z00_4486;
					}
					BgL_new2210z00_4485 = BgL_res5387z00_4490;
				}
				{	/* Ast/node.scm 49 */
					BgL_varz00_bglt BgL_res5388z00_4498;

					{	/* Ast/node.scm 49 */
						BgL_varz00_bglt BgL_new2215z00_4491;

						BgL_new2215z00_4491 = BgL_new2210z00_4485;
						{	/* Ast/node.scm 49 */
							obj_t BgL_loc2212z00_4495;

							BgL_typez00_bglt BgL_type2213z00_4496;

							BgL_variablez00_bglt BgL_variable2214z00_4497;

							BgL_loc2212z00_4495 = BgL_loc2207z00_680;
							BgL_type2213z00_4496 = BgL_type2208z00_681;
							BgL_variable2214z00_4497 = BgL_variable2209z00_682;
							((((BgL_varz00_bglt) CREF(BgL_new2215z00_4491))->BgL_locz00) =
								((obj_t) BgL_loc2212z00_4495), BUNSPEC);
							((((BgL_varz00_bglt) CREF(BgL_new2215z00_4491))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2213z00_4496), BUNSPEC);
							((((BgL_varz00_bglt) CREF(BgL_new2215z00_4491))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) BgL_variable2214z00_4497), BUNSPEC);
							BgL_res5388z00_4498 = BgL_new2215z00_4491;
					}} BgL_res5388z00_4498;
				}
				return BgL_new2210z00_4485;
			}
		}
	}



/* _make-var */
	obj_t BGl__makezd2varzd2zzast_nodez00(obj_t BgL_envz00_7344,
		obj_t BgL_loc2207z00_7345, obj_t BgL_type2208z00_7346,
		obj_t BgL_variable2209z00_7347)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			return
				(obj_t) (BGl_makezd2varzd2zzast_nodez00(BgL_loc2207z00_7345,
					(BgL_typez00_bglt) (BgL_type2208z00_7346),
					(BgL_variablez00_bglt) (BgL_variable2209z00_7347)));
		}
	}



/* fill-var! */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_fillzd2varz12zc0zzast_nodez00(BgL_varz00_bglt BgL_new2215z00_683,
		obj_t BgL_loc2212z00_684, BgL_typez00_bglt BgL_type2213z00_685,
		BgL_variablez00_bglt BgL_variable2214z00_686)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{	/* Ast/node.scm 49 */
				obj_t BgL_loc2212z00_8471;

				BgL_typez00_bglt BgL_type2213z00_8472;

				BgL_variablez00_bglt BgL_variable2214z00_8473;

				BgL_loc2212z00_8471 = BgL_loc2212z00_684;
				BgL_type2213z00_8472 = BgL_type2213z00_685;
				BgL_variable2214z00_8473 = BgL_variable2214z00_686;
				((((BgL_varz00_bglt) CREF(BgL_new2215z00_683))->BgL_locz00) =
					((obj_t) BgL_loc2212z00_8471), BUNSPEC);
				((((BgL_varz00_bglt) CREF(BgL_new2215z00_683))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2213z00_8472), BUNSPEC);
				((((BgL_varz00_bglt) CREF(BgL_new2215z00_683))->BgL_variablez00) =
					((BgL_variablez00_bglt) BgL_variable2214z00_8473), BUNSPEC);
				return BgL_new2215z00_683;
			}
		}
	}



/* _fill-var! */
	obj_t BGl__fillzd2varz12zc0zzast_nodez00(obj_t BgL_envz00_7348,
		obj_t BgL_new2215z00_7349, obj_t BgL_loc2212z00_7350,
		obj_t BgL_type2213z00_7351, obj_t BgL_variable2214z00_7352)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{	/* Ast/node.scm 49 */
				BgL_varz00_bglt BgL_auxz00_11001;

				{	/* Ast/node.scm 49 */
					BgL_varz00_bglt BgL_res5611z00_8481;

					{	/* Ast/node.scm 49 */
						BgL_varz00_bglt BgL_new2215z00_8474;

						BgL_typez00_bglt BgL_type2213z00_8476;

						BgL_variablez00_bglt BgL_variable2214z00_8477;

						BgL_new2215z00_8474 = (BgL_varz00_bglt) (BgL_new2215z00_7349);
						BgL_type2213z00_8476 = (BgL_typez00_bglt) (BgL_type2213z00_7351);
						BgL_variable2214z00_8477 =
							(BgL_variablez00_bglt) (BgL_variable2214z00_7352);
						{	/* Ast/node.scm 49 */
							obj_t BgL_loc2212z00_8478;

							BgL_typez00_bglt BgL_type2213z00_8479;

							BgL_variablez00_bglt BgL_variable2214z00_8480;

							BgL_loc2212z00_8478 = BgL_loc2212z00_7350;
							BgL_type2213z00_8479 = BgL_type2213z00_8476;
							BgL_variable2214z00_8480 = BgL_variable2214z00_8477;
							((((BgL_varz00_bglt) CREF(BgL_new2215z00_8474))->BgL_locz00) =
								((obj_t) BgL_loc2212z00_8478), BUNSPEC);
							((((BgL_varz00_bglt) CREF(BgL_new2215z00_8474))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2213z00_8479), BUNSPEC);
							((((BgL_varz00_bglt) CREF(BgL_new2215z00_8474))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) BgL_variable2214z00_8480), BUNSPEC);
							BgL_res5611z00_8481 = BgL_new2215z00_8474;
						}
					}
					BgL_auxz00_11001 = BgL_res5611z00_8481;
				}
				return (obj_t) (BgL_auxz00_11001);
			}
		}
	}



/* %allocate-var */
	BGL_EXPORTED_DEF BgL_varz00_bglt BGl_z52allocatezd2varz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{	/* Ast/node.scm 49 */
				BgL_varz00_bglt BgL_new2220z00_8482;

				BgL_new2220z00_8482 =
					((BgL_varz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_varz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2220z00_8482),
					BGl_classzd2numzd2zz__objectz00(BGl_varz00zzast_nodez00));
				{	/* Ast/node.scm 49 */
					BgL_objectz00_bglt BgL_auxz00_11013;

					BgL_auxz00_11013 = (BgL_objectz00_bglt) (BgL_new2220z00_8482);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11013, BFALSE);
				}
				return BgL_new2220z00_8482;
			}
		}
	}



/* _%allocate-var */
	obj_t BGl__z52allocatezd2varz80zzast_nodez00(obj_t BgL_envz00_6783)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{	/* Ast/node.scm 49 */
				BgL_varz00_bglt BgL_auxz00_11016;

				{	/* Ast/node.scm 49 */
					BgL_varz00_bglt BgL_res5612z00_8486;

					{	/* Ast/node.scm 49 */
						BgL_varz00_bglt BgL_new2220z00_8484;

						BgL_new2220z00_8484 =
							((BgL_varz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_varz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2220z00_8484),
							BGl_classzd2numzd2zz__objectz00(BGl_varz00zzast_nodez00));
						{	/* Ast/node.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_11021;

							BgL_auxz00_11021 = (BgL_objectz00_bglt) (BgL_new2220z00_8484);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11021, BFALSE);
						}
						BgL_res5612z00_8486 = BgL_new2220z00_8484;
					}
					BgL_auxz00_11016 = BgL_res5612z00_8486;
				}
				return (obj_t) (BgL_auxz00_11016);
			}
		}
	}



/* var-nil */
	BGL_EXPORTED_DEF BgL_varz00_bglt BGl_varzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			if ((BGl_z52thezd2varzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 49 */
					{	/* Ast/node.scm 49 */
						BgL_varz00_bglt BgL_res5389z00_4510;

						{	/* Ast/node.scm 49 */
							BgL_varz00_bglt BgL_new2220z00_4506;

							BgL_new2220z00_4506 =
								((BgL_varz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_varz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2220z00_4506),
								BGl_classzd2numzd2zz__objectz00(BGl_varz00zzast_nodez00));
							{	/* Ast/node.scm 49 */
								BgL_objectz00_bglt BgL_auxz00_11031;

								BgL_auxz00_11031 = (BgL_objectz00_bglt) (BgL_new2220z00_4506);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11031, BFALSE);
							}
							BgL_res5389z00_4510 = BgL_new2220z00_4506;
						}
						BGl_z52thezd2varzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5389z00_4510);
					}
					{	/* Ast/node.scm 49 */
						BgL_typez00_bglt BgL_arg4698z00_1701;

						BgL_variablez00_bglt BgL_arg4700z00_1702;

						BgL_arg4698z00_1701 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4700z00_1702 = BGl_variablezd2nilzd2zzast_varz00();
						{	/* Ast/node.scm 49 */
							BgL_varz00_bglt BgL_res5390z00_4518;

							{	/* Ast/node.scm 49 */
								BgL_varz00_bglt BgL_new2215z00_4511;

								BgL_new2215z00_4511 =
									(BgL_varz00_bglt) (BGl_z52thezd2varzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 49 */
									obj_t BgL_loc2212z00_4515;

									BgL_typez00_bglt BgL_type2213z00_4516;

									BgL_variablez00_bglt BgL_variable2214z00_4517;

									BgL_loc2212z00_4515 = BUNSPEC;
									BgL_type2213z00_4516 = BgL_arg4698z00_1701;
									BgL_variable2214z00_4517 = BgL_arg4700z00_1702;
									((((BgL_varz00_bglt) CREF(BgL_new2215z00_4511))->BgL_locz00) =
										((obj_t) BgL_loc2212z00_4515), BUNSPEC);
									((((BgL_varz00_bglt) CREF(BgL_new2215z00_4511))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2213z00_4516), BUNSPEC);
									((((BgL_varz00_bglt) CREF(BgL_new2215z00_4511))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) BgL_variable2214z00_4517), BUNSPEC);
									BgL_res5390z00_4518 = BgL_new2215z00_4511;
							}}
							(obj_t) (BgL_res5390z00_4518);
				}}}
			else
				{	/* Ast/node.scm 49 */
					BFALSE;
				}
			return (BgL_varz00_bglt) (BGl_z52thezd2varzd2nilz52zzast_nodez00);
		}
	}



/* _var-nil */
	obj_t BGl__varzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6784)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			return (obj_t) (BGl_varzd2nilzd2zzast_nodez00());
		}
	}



/* atom? */
	BGL_EXPORTED_DEF bool_t BGl_atomzf3zf3zzast_nodez00(obj_t BgL_obj2199z00_690)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2199z00_690,
				BGl_atomz00zzast_nodez00);
		}
	}



/* _atom? */
	obj_t BGl__atomzf3zf3zzast_nodez00(obj_t BgL_envz00_6781,
		obj_t BgL_obj2199z00_6782)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2199z00_6782,
					BGl_atomz00zzast_nodez00));
		}
	}



/* make-atom */
	BGL_EXPORTED_DEF BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t
		BgL_loc2171z00_694, BgL_typez00_bglt BgL_type2172z00_695,
		obj_t BgL_value2173z00_696)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{	/* Ast/node.scm 44 */
				BgL_atomz00_bglt BgL_new2174z00_4519;

				{	/* Ast/node.scm 44 */
					BgL_atomz00_bglt BgL_res5391z00_4524;

					{	/* Ast/node.scm 44 */
						BgL_atomz00_bglt BgL_new2184z00_4520;

						BgL_new2184z00_4520 =
							((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_atomz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2184z00_4520),
							BGl_classzd2numzd2zz__objectz00(BGl_atomz00zzast_nodez00));
						{	/* Ast/node.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_11052;

							BgL_auxz00_11052 = (BgL_objectz00_bglt) (BgL_new2184z00_4520);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11052, BFALSE);
						}
						BgL_res5391z00_4524 = BgL_new2184z00_4520;
					}
					BgL_new2174z00_4519 = BgL_res5391z00_4524;
				}
				{	/* Ast/node.scm 44 */
					BgL_atomz00_bglt BgL_res5392z00_4532;

					{	/* Ast/node.scm 44 */
						BgL_atomz00_bglt BgL_new2179z00_4525;

						BgL_new2179z00_4525 = BgL_new2174z00_4519;
						{	/* Ast/node.scm 44 */
							obj_t BgL_loc2176z00_4529;

							BgL_typez00_bglt BgL_type2177z00_4530;

							obj_t BgL_value2178z00_4531;

							BgL_loc2176z00_4529 = BgL_loc2171z00_694;
							BgL_type2177z00_4530 = BgL_type2172z00_695;
							BgL_value2178z00_4531 = BgL_value2173z00_696;
							((((BgL_atomz00_bglt) CREF(BgL_new2179z00_4525))->BgL_locz00) =
								((obj_t) BgL_loc2176z00_4529), BUNSPEC);
							((((BgL_atomz00_bglt) CREF(BgL_new2179z00_4525))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2177z00_4530), BUNSPEC);
							((((BgL_atomz00_bglt) CREF(BgL_new2179z00_4525))->BgL_valuez00) =
								((obj_t) BgL_value2178z00_4531), BUNSPEC);
							BgL_res5392z00_4532 = BgL_new2179z00_4525;
					}} BgL_res5392z00_4532;
				}
				return BgL_new2174z00_4519;
			}
		}
	}



/* _make-atom */
	obj_t BGl__makezd2atomzd2zzast_nodez00(obj_t BgL_envz00_7353,
		obj_t BgL_loc2171z00_7354, obj_t BgL_type2172z00_7355,
		obj_t BgL_value2173z00_7356)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			return
				(obj_t) (BGl_makezd2atomzd2zzast_nodez00(BgL_loc2171z00_7354,
					(BgL_typez00_bglt) (BgL_type2172z00_7355), BgL_value2173z00_7356));
		}
	}



/* fill-atom! */
	BGL_EXPORTED_DEF BgL_atomz00_bglt
		BGl_fillzd2atomz12zc0zzast_nodez00(BgL_atomz00_bglt BgL_new2179z00_697,
		obj_t BgL_loc2176z00_698, BgL_typez00_bglt BgL_type2177z00_699,
		obj_t BgL_value2178z00_700)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{	/* Ast/node.scm 44 */
				obj_t BgL_loc2176z00_8488;

				BgL_typez00_bglt BgL_type2177z00_8489;

				obj_t BgL_value2178z00_8490;

				BgL_loc2176z00_8488 = BgL_loc2176z00_698;
				BgL_type2177z00_8489 = BgL_type2177z00_699;
				BgL_value2178z00_8490 = BgL_value2178z00_700;
				((((BgL_atomz00_bglt) CREF(BgL_new2179z00_697))->BgL_locz00) =
					((obj_t) BgL_loc2176z00_8488), BUNSPEC);
				((((BgL_atomz00_bglt) CREF(BgL_new2179z00_697))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2177z00_8489), BUNSPEC);
				((((BgL_atomz00_bglt) CREF(BgL_new2179z00_697))->BgL_valuez00) =
					((obj_t) BgL_value2178z00_8490), BUNSPEC);
				return BgL_new2179z00_697;
			}
		}
	}



/* _fill-atom! */
	obj_t BGl__fillzd2atomz12zc0zzast_nodez00(obj_t BgL_envz00_7357,
		obj_t BgL_new2179z00_7358, obj_t BgL_loc2176z00_7359,
		obj_t BgL_type2177z00_7360, obj_t BgL_value2178z00_7361)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{	/* Ast/node.scm 44 */
				BgL_atomz00_bglt BgL_auxz00_11064;

				{	/* Ast/node.scm 44 */
					BgL_atomz00_bglt BgL_res5613z00_8498;

					{	/* Ast/node.scm 44 */
						BgL_atomz00_bglt BgL_new2179z00_8491;

						BgL_typez00_bglt BgL_type2177z00_8493;

						BgL_new2179z00_8491 = (BgL_atomz00_bglt) (BgL_new2179z00_7358);
						BgL_type2177z00_8493 = (BgL_typez00_bglt) (BgL_type2177z00_7360);
						{	/* Ast/node.scm 44 */
							obj_t BgL_loc2176z00_8495;

							BgL_typez00_bglt BgL_type2177z00_8496;

							obj_t BgL_value2178z00_8497;

							BgL_loc2176z00_8495 = BgL_loc2176z00_7359;
							BgL_type2177z00_8496 = BgL_type2177z00_8493;
							BgL_value2178z00_8497 = BgL_value2178z00_7361;
							((((BgL_atomz00_bglt) CREF(BgL_new2179z00_8491))->BgL_locz00) =
								((obj_t) BgL_loc2176z00_8495), BUNSPEC);
							((((BgL_atomz00_bglt) CREF(BgL_new2179z00_8491))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2177z00_8496), BUNSPEC);
							((((BgL_atomz00_bglt) CREF(BgL_new2179z00_8491))->BgL_valuez00) =
								((obj_t) BgL_value2178z00_8497), BUNSPEC);
							BgL_res5613z00_8498 = BgL_new2179z00_8491;
						}
					}
					BgL_auxz00_11064 = BgL_res5613z00_8498;
				}
				return (obj_t) (BgL_auxz00_11064);
			}
		}
	}



/* %allocate-atom */
	BGL_EXPORTED_DEF BgL_atomz00_bglt BGl_z52allocatezd2atomz80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{	/* Ast/node.scm 44 */
				BgL_atomz00_bglt BgL_new2184z00_8499;

				BgL_new2184z00_8499 =
					((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_atomz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2184z00_8499),
					BGl_classzd2numzd2zz__objectz00(BGl_atomz00zzast_nodez00));
				{	/* Ast/node.scm 44 */
					BgL_objectz00_bglt BgL_auxz00_11075;

					BgL_auxz00_11075 = (BgL_objectz00_bglt) (BgL_new2184z00_8499);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11075, BFALSE);
				}
				return BgL_new2184z00_8499;
			}
		}
	}



/* _%allocate-atom */
	obj_t BGl__z52allocatezd2atomz80zzast_nodez00(obj_t BgL_envz00_6779)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{	/* Ast/node.scm 44 */
				BgL_atomz00_bglt BgL_auxz00_11078;

				{	/* Ast/node.scm 44 */
					BgL_atomz00_bglt BgL_res5614z00_8503;

					{	/* Ast/node.scm 44 */
						BgL_atomz00_bglt BgL_new2184z00_8501;

						BgL_new2184z00_8501 =
							((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_atomz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2184z00_8501),
							BGl_classzd2numzd2zz__objectz00(BGl_atomz00zzast_nodez00));
						{	/* Ast/node.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_11083;

							BgL_auxz00_11083 = (BgL_objectz00_bglt) (BgL_new2184z00_8501);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11083, BFALSE);
						}
						BgL_res5614z00_8503 = BgL_new2184z00_8501;
					}
					BgL_auxz00_11078 = BgL_res5614z00_8503;
				}
				return (obj_t) (BgL_auxz00_11078);
			}
		}
	}



/* atom-nil */
	BGL_EXPORTED_DEF BgL_atomz00_bglt BGl_atomzd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			if ((BGl_z52thezd2atomzd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 44 */
					{	/* Ast/node.scm 44 */
						BgL_atomz00_bglt BgL_res5393z00_4544;

						{	/* Ast/node.scm 44 */
							BgL_atomz00_bglt BgL_new2184z00_4540;

							BgL_new2184z00_4540 =
								((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_atomz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2184z00_4540),
								BGl_classzd2numzd2zz__objectz00(BGl_atomz00zzast_nodez00));
							{	/* Ast/node.scm 44 */
								BgL_objectz00_bglt BgL_auxz00_11093;

								BgL_auxz00_11093 = (BgL_objectz00_bglt) (BgL_new2184z00_4540);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11093, BFALSE);
							}
							BgL_res5393z00_4544 = BgL_new2184z00_4540;
						}
						BGl_z52thezd2atomzd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5393z00_4544);
					}
					{	/* Ast/node.scm 44 */
						BgL_typez00_bglt BgL_arg4703z00_1710;

						BgL_arg4703z00_1710 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 44 */
							BgL_atomz00_bglt BgL_res5394z00_4552;

							{	/* Ast/node.scm 44 */
								BgL_atomz00_bglt BgL_new2179z00_4545;

								BgL_new2179z00_4545 =
									(BgL_atomz00_bglt) (BGl_z52thezd2atomzd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 44 */
									obj_t BgL_loc2176z00_4549;

									BgL_typez00_bglt BgL_type2177z00_4550;

									obj_t BgL_value2178z00_4551;

									BgL_loc2176z00_4549 = BUNSPEC;
									BgL_type2177z00_4550 = BgL_arg4703z00_1710;
									BgL_value2178z00_4551 = BUNSPEC;
									((((BgL_atomz00_bglt) CREF(BgL_new2179z00_4545))->
											BgL_locz00) = ((obj_t) BgL_loc2176z00_4549), BUNSPEC);
									((((BgL_atomz00_bglt) CREF(BgL_new2179z00_4545))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2177z00_4550), BUNSPEC);
									((((BgL_atomz00_bglt) CREF(BgL_new2179z00_4545))->
											BgL_valuez00) = ((obj_t) BgL_value2178z00_4551), BUNSPEC);
									BgL_res5394z00_4552 = BgL_new2179z00_4545;
							}}
							(obj_t) (BgL_res5394z00_4552);
				}}}
			else
				{	/* Ast/node.scm 44 */
					BFALSE;
				}
			return (BgL_atomz00_bglt) (BGl_z52thezd2atomzd2nilz52zzast_nodez00);
		}
	}



/* _atom-nil */
	obj_t BGl__atomzd2nilzd2zzast_nodez00(obj_t BgL_envz00_6780)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			return (obj_t) (BGl_atomzd2nilzd2zzast_nodez00());
		}
	}



/* node/effect? */
	BGL_EXPORTED_DEF bool_t BGl_nodezf2effectzf3z01zzast_nodez00(obj_t
		BgL_obj2163z00_704)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2163z00_704,
				BGl_nodezf2effectzf2zzast_nodez00);
		}
	}



/* _node/effect? */
	obj_t BGl__nodezf2effectzf3z01zzast_nodez00(obj_t BgL_envz00_6777,
		obj_t BgL_obj2163z00_6778)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2163z00_6778,
					BGl_nodezf2effectzf2zzast_nodez00));
		}
	}



/* make-node/effect */
	BGL_EXPORTED_DEF BgL_nodezf2effectzf2_bglt
		BGl_makezd2nodezf2effectz20zzast_nodez00(obj_t BgL_loc2127z00_708,
		BgL_typez00_bglt BgL_type2128z00_709, obj_t BgL_sidezd2effectzf32129z21_710,
		obj_t BgL_key2130z00_711)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{	/* Ast/node.scm 35 */
				BgL_nodezf2effectzf2_bglt BgL_new2131z00_4553;

				{	/* Ast/node.scm 35 */
					BgL_nodezf2effectzf2_bglt BgL_res5395z00_4558;

					{	/* Ast/node.scm 35 */
						BgL_nodezf2effectzf2_bglt BgL_new2143z00_4554;

						BgL_new2143z00_4554 =
							((BgL_nodezf2effectzf2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nodezf2effectzf2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2143z00_4554),
							BGl_classzd2numzd2zz__objectz00
							(BGl_nodezf2effectzf2zzast_nodez00));
						{	/* Ast/node.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_11113;

							BgL_auxz00_11113 = (BgL_objectz00_bglt) (BgL_new2143z00_4554);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11113, BFALSE);
						}
						BgL_res5395z00_4558 = BgL_new2143z00_4554;
					}
					BgL_new2131z00_4553 = BgL_res5395z00_4558;
				}
				{	/* Ast/node.scm 35 */
					BgL_nodezf2effectzf2_bglt BgL_res5396z00_4568;

					{	/* Ast/node.scm 35 */
						BgL_nodezf2effectzf2_bglt BgL_new2137z00_4559;

						BgL_new2137z00_4559 = BgL_new2131z00_4553;
						{	/* Ast/node.scm 35 */
							obj_t BgL_loc2133z00_4564;

							BgL_typez00_bglt BgL_type2134z00_4565;

							obj_t BgL_sidezd2effectzf32135z21_4566;

							obj_t BgL_key2136z00_4567;

							BgL_loc2133z00_4564 = BgL_loc2127z00_708;
							BgL_type2134z00_4565 = BgL_type2128z00_709;
							BgL_sidezd2effectzf32135z21_4566 =
								BgL_sidezd2effectzf32129z21_710;
							BgL_key2136z00_4567 = BgL_key2130z00_711;
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4559))->
									BgL_locz00) = ((obj_t) BgL_loc2133z00_4564), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4559))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2134z00_4565), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4559))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32135z21_4566), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4559))->
									BgL_keyz00) = ((obj_t) BgL_key2136z00_4567), BUNSPEC);
							BgL_res5396z00_4568 = BgL_new2137z00_4559;
					}} BgL_res5396z00_4568;
				}
				return BgL_new2131z00_4553;
			}
		}
	}



/* _make-node/effect */
	obj_t BGl__makezd2nodezf2effectz20zzast_nodez00(obj_t BgL_envz00_7362,
		obj_t BgL_loc2127z00_7363, obj_t BgL_type2128z00_7364,
		obj_t BgL_sidezd2effectzf32129z21_7365, obj_t BgL_key2130z00_7366)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			return
				(obj_t) (BGl_makezd2nodezf2effectz20zzast_nodez00(BgL_loc2127z00_7363,
					(BgL_typez00_bglt) (BgL_type2128z00_7364),
					BgL_sidezd2effectzf32129z21_7365, BgL_key2130z00_7366));
		}
	}



/* fill-node/effect! */
	BGL_EXPORTED_DEF BgL_nodezf2effectzf2_bglt
		BGl_fillzd2nodezf2effectz12z32zzast_nodez00(BgL_nodezf2effectzf2_bglt
		BgL_new2137z00_712, obj_t BgL_loc2133z00_713,
		BgL_typez00_bglt BgL_type2134z00_714, obj_t BgL_sidezd2effectzf32135z21_715,
		obj_t BgL_key2136z00_716)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{	/* Ast/node.scm 35 */
				obj_t BgL_loc2133z00_8505;

				BgL_typez00_bglt BgL_type2134z00_8506;

				obj_t BgL_sidezd2effectzf32135z21_8507;

				obj_t BgL_key2136z00_8508;

				BgL_loc2133z00_8505 = BgL_loc2133z00_713;
				BgL_type2134z00_8506 = BgL_type2134z00_714;
				BgL_sidezd2effectzf32135z21_8507 = BgL_sidezd2effectzf32135z21_715;
				BgL_key2136z00_8508 = BgL_key2136z00_716;
				((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_712))->BgL_locz00) =
					((obj_t) BgL_loc2133z00_8505), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_712))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2134z00_8506), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_712))->
						BgL_sidezd2effectzf3z21) =
					((obj_t) BgL_sidezd2effectzf32135z21_8507), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_712))->BgL_keyz00) =
					((obj_t) BgL_key2136z00_8508), BUNSPEC);
				return BgL_new2137z00_712;
			}
		}
	}



/* _fill-node/effect! */
	obj_t BGl__fillzd2nodezf2effectz12z32zzast_nodez00(obj_t BgL_envz00_7367,
		obj_t BgL_new2137z00_7368, obj_t BgL_loc2133z00_7369,
		obj_t BgL_type2134z00_7370, obj_t BgL_sidezd2effectzf32135z21_7371,
		obj_t BgL_key2136z00_7372)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{	/* Ast/node.scm 35 */
				BgL_nodezf2effectzf2_bglt BgL_auxz00_11127;

				{	/* Ast/node.scm 35 */
					BgL_nodezf2effectzf2_bglt BgL_res5615z00_8518;

					{	/* Ast/node.scm 35 */
						BgL_nodezf2effectzf2_bglt BgL_new2137z00_8509;

						BgL_typez00_bglt BgL_type2134z00_8511;

						BgL_new2137z00_8509 =
							(BgL_nodezf2effectzf2_bglt) (BgL_new2137z00_7368);
						BgL_type2134z00_8511 = (BgL_typez00_bglt) (BgL_type2134z00_7370);
						{	/* Ast/node.scm 35 */
							obj_t BgL_loc2133z00_8514;

							BgL_typez00_bglt BgL_type2134z00_8515;

							obj_t BgL_sidezd2effectzf32135z21_8516;

							obj_t BgL_key2136z00_8517;

							BgL_loc2133z00_8514 = BgL_loc2133z00_7369;
							BgL_type2134z00_8515 = BgL_type2134z00_8511;
							BgL_sidezd2effectzf32135z21_8516 =
								BgL_sidezd2effectzf32135z21_7371;
							BgL_key2136z00_8517 = BgL_key2136z00_7372;
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_8509))->
									BgL_locz00) = ((obj_t) BgL_loc2133z00_8514), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_8509))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2134z00_8515), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_8509))->
									BgL_sidezd2effectzf3z21) =
								((obj_t) BgL_sidezd2effectzf32135z21_8516), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_8509))->
									BgL_keyz00) = ((obj_t) BgL_key2136z00_8517), BUNSPEC);
							BgL_res5615z00_8518 = BgL_new2137z00_8509;
						}
					}
					BgL_auxz00_11127 = BgL_res5615z00_8518;
				}
				return (obj_t) (BgL_auxz00_11127);
			}
		}
	}



/* %allocate-node/effect */
	BGL_EXPORTED_DEF BgL_nodezf2effectzf2_bglt
		BGl_z52allocatezd2nodezf2effectz72zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{	/* Ast/node.scm 35 */
				BgL_nodezf2effectzf2_bglt BgL_new2143z00_8519;

				BgL_new2143z00_8519 =
					((BgL_nodezf2effectzf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_nodezf2effectzf2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2143z00_8519),
					BGl_classzd2numzd2zz__objectz00(BGl_nodezf2effectzf2zzast_nodez00));
				{	/* Ast/node.scm 35 */
					BgL_objectz00_bglt BgL_auxz00_11139;

					BgL_auxz00_11139 = (BgL_objectz00_bglt) (BgL_new2143z00_8519);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11139, BFALSE);
				}
				return BgL_new2143z00_8519;
			}
		}
	}



/* _%allocate-node/effect */
	obj_t BGl__z52allocatezd2nodezf2effectz72zzast_nodez00(obj_t BgL_envz00_6775)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{	/* Ast/node.scm 35 */
				BgL_nodezf2effectzf2_bglt BgL_auxz00_11142;

				{	/* Ast/node.scm 35 */
					BgL_nodezf2effectzf2_bglt BgL_res5616z00_8523;

					{	/* Ast/node.scm 35 */
						BgL_nodezf2effectzf2_bglt BgL_new2143z00_8521;

						BgL_new2143z00_8521 =
							((BgL_nodezf2effectzf2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nodezf2effectzf2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2143z00_8521),
							BGl_classzd2numzd2zz__objectz00
							(BGl_nodezf2effectzf2zzast_nodez00));
						{	/* Ast/node.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_11147;

							BgL_auxz00_11147 = (BgL_objectz00_bglt) (BgL_new2143z00_8521);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11147, BFALSE);
						}
						BgL_res5616z00_8523 = BgL_new2143z00_8521;
					}
					BgL_auxz00_11142 = BgL_res5616z00_8523;
				}
				return (obj_t) (BgL_auxz00_11142);
			}
		}
	}



/* node/effect-nil */
	BGL_EXPORTED_DEF BgL_nodezf2effectzf2_bglt
		BGl_nodezf2effectzd2nilz20zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			if ((BGl_z52thezd2nodezf2effectzd2nilza0zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 35 */
					{	/* Ast/node.scm 35 */
						BgL_nodezf2effectzf2_bglt BgL_res5397z00_4581;

						{	/* Ast/node.scm 35 */
							BgL_nodezf2effectzf2_bglt BgL_new2143z00_4577;

							BgL_new2143z00_4577 =
								((BgL_nodezf2effectzf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_nodezf2effectzf2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2143z00_4577),
								BGl_classzd2numzd2zz__objectz00
								(BGl_nodezf2effectzf2zzast_nodez00));
							{	/* Ast/node.scm 35 */
								BgL_objectz00_bglt BgL_auxz00_11157;

								BgL_auxz00_11157 = (BgL_objectz00_bglt) (BgL_new2143z00_4577);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11157, BFALSE);
							}
							BgL_res5397z00_4581 = BgL_new2143z00_4577;
						}
						BGl_z52thezd2nodezf2effectzd2nilza0zzast_nodez00 =
							(obj_t) (BgL_res5397z00_4581);
					}
					{	/* Ast/node.scm 35 */
						BgL_typez00_bglt BgL_arg4706z00_1719;

						BgL_arg4706z00_1719 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 35 */
							BgL_nodezf2effectzf2_bglt BgL_res5398z00_4591;

							{	/* Ast/node.scm 35 */
								BgL_nodezf2effectzf2_bglt BgL_new2137z00_4582;

								BgL_new2137z00_4582 =
									(BgL_nodezf2effectzf2_bglt)
									(BGl_z52thezd2nodezf2effectzd2nilza0zzast_nodez00);
								{	/* Ast/node.scm 35 */
									obj_t BgL_loc2133z00_4587;

									BgL_typez00_bglt BgL_type2134z00_4588;

									obj_t BgL_sidezd2effectzf32135z21_4589;

									obj_t BgL_key2136z00_4590;

									BgL_loc2133z00_4587 = BUNSPEC;
									BgL_type2134z00_4588 = BgL_arg4706z00_1719;
									BgL_sidezd2effectzf32135z21_4589 = BUNSPEC;
									BgL_key2136z00_4590 = BUNSPEC;
									((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4582))->
											BgL_locz00) = ((obj_t) BgL_loc2133z00_4587), BUNSPEC);
									((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4582))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2134z00_4588), BUNSPEC);
									((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4582))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32135z21_4589), BUNSPEC);
									((((BgL_nodezf2effectzf2_bglt) CREF(BgL_new2137z00_4582))->
											BgL_keyz00) = ((obj_t) BgL_key2136z00_4590), BUNSPEC);
									BgL_res5398z00_4591 = BgL_new2137z00_4582;
							}}
							(obj_t) (BgL_res5398z00_4591);
				}}}
			else
				{	/* Ast/node.scm 35 */
					BFALSE;
				}
			return
				(BgL_nodezf2effectzf2_bglt)
				(BGl_z52thezd2nodezf2effectzd2nilza0zzast_nodez00);
		}
	}



/* _node/effect-nil */
	obj_t BGl__nodezf2effectzd2nilz20zzast_nodez00(obj_t BgL_envz00_6776)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			return (obj_t) (BGl_nodezf2effectzd2nilz20zzast_nodez00());
		}
	}



/* node? */
	BGL_EXPORTED_DEF bool_t BGl_nodezf3zf3zzast_nodez00(obj_t BgL_obj2116z00_723)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2116z00_723,
				BGl_nodez00zzast_nodez00);
		}
	}



/* _node? */
	obj_t BGl__nodezf3zf3zzast_nodez00(obj_t BgL_envz00_6773,
		obj_t BgL_obj2116z00_6774)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2116z00_6774,
					BGl_nodez00zzast_nodez00));
		}
	}



/* make-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_makezd2nodezd2zzast_nodez00(obj_t
		BgL_loc2095z00_727, BgL_typez00_bglt BgL_type2096z00_728)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{	/* Ast/node.scm 19 */
				BgL_nodez00_bglt BgL_new2097z00_4592;

				{	/* Ast/node.scm 19 */
					BgL_nodez00_bglt BgL_res5399z00_4597;

					{	/* Ast/node.scm 19 */
						BgL_nodez00_bglt BgL_new2105z00_4593;

						BgL_new2105z00_4593 =
							((BgL_nodez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nodez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2105z00_4593),
							BGl_classzd2numzd2zz__objectz00(BGl_nodez00zzast_nodez00));
						{	/* Ast/node.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_11178;

							BgL_auxz00_11178 = (BgL_objectz00_bglt) (BgL_new2105z00_4593);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11178, BFALSE);
						}
						BgL_res5399z00_4597 = BgL_new2105z00_4593;
					}
					BgL_new2097z00_4592 = BgL_res5399z00_4597;
				}
				{	/* Ast/node.scm 19 */
					BgL_nodez00_bglt BgL_res5400z00_4603;

					{	/* Ast/node.scm 19 */
						BgL_nodez00_bglt BgL_new2101z00_4598;

						BgL_new2101z00_4598 = BgL_new2097z00_4592;
						{	/* Ast/node.scm 19 */
							obj_t BgL_loc2099z00_4601;

							BgL_typez00_bglt BgL_type2100z00_4602;

							BgL_loc2099z00_4601 = BgL_loc2095z00_727;
							BgL_type2100z00_4602 = BgL_type2096z00_728;
							((((BgL_nodez00_bglt) CREF(BgL_new2101z00_4598))->BgL_locz00) =
								((obj_t) BgL_loc2099z00_4601), BUNSPEC);
							((((BgL_nodez00_bglt) CREF(BgL_new2101z00_4598))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2100z00_4602), BUNSPEC);
							BgL_res5400z00_4603 = BgL_new2101z00_4598;
					}} BgL_res5400z00_4603;
				}
				return BgL_new2097z00_4592;
			}
		}
	}



/* _make-node */
	obj_t BGl__makezd2nodezd2zzast_nodez00(obj_t BgL_envz00_7373,
		obj_t BgL_loc2095z00_7374, obj_t BgL_type2096z00_7375)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			return
				(obj_t) (BGl_makezd2nodezd2zzast_nodez00(BgL_loc2095z00_7374,
					(BgL_typez00_bglt) (BgL_type2096z00_7375)));
		}
	}



/* fill-node! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_fillzd2nodez12zc0zzast_nodez00(BgL_nodez00_bglt BgL_new2101z00_729,
		obj_t BgL_loc2099z00_730, BgL_typez00_bglt BgL_type2100z00_731)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{	/* Ast/node.scm 19 */
				obj_t BgL_loc2099z00_8525;

				BgL_typez00_bglt BgL_type2100z00_8526;

				BgL_loc2099z00_8525 = BgL_loc2099z00_730;
				BgL_type2100z00_8526 = BgL_type2100z00_731;
				((((BgL_nodez00_bglt) CREF(BgL_new2101z00_729))->BgL_locz00) =
					((obj_t) BgL_loc2099z00_8525), BUNSPEC);
				((((BgL_nodez00_bglt) CREF(BgL_new2101z00_729))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type2100z00_8526), BUNSPEC);
				return BgL_new2101z00_729;
			}
		}
	}



/* _fill-node! */
	obj_t BGl__fillzd2nodez12zc0zzast_nodez00(obj_t BgL_envz00_7376,
		obj_t BgL_new2101z00_7377, obj_t BgL_loc2099z00_7378,
		obj_t BgL_type2100z00_7379)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{	/* Ast/node.scm 19 */
				BgL_nodez00_bglt BgL_auxz00_11188;

				{	/* Ast/node.scm 19 */
					BgL_nodez00_bglt BgL_res5617z00_8532;

					{	/* Ast/node.scm 19 */
						BgL_nodez00_bglt BgL_new2101z00_8527;

						BgL_typez00_bglt BgL_type2100z00_8529;

						BgL_new2101z00_8527 = (BgL_nodez00_bglt) (BgL_new2101z00_7377);
						BgL_type2100z00_8529 = (BgL_typez00_bglt) (BgL_type2100z00_7379);
						{	/* Ast/node.scm 19 */
							obj_t BgL_loc2099z00_8530;

							BgL_typez00_bglt BgL_type2100z00_8531;

							BgL_loc2099z00_8530 = BgL_loc2099z00_7378;
							BgL_type2100z00_8531 = BgL_type2100z00_8529;
							((((BgL_nodez00_bglt) CREF(BgL_new2101z00_8527))->BgL_locz00) =
								((obj_t) BgL_loc2099z00_8530), BUNSPEC);
							((((BgL_nodez00_bglt) CREF(BgL_new2101z00_8527))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type2100z00_8531), BUNSPEC);
							BgL_res5617z00_8532 = BgL_new2101z00_8527;
						}
					}
					BgL_auxz00_11188 = BgL_res5617z00_8532;
				}
				return (obj_t) (BgL_auxz00_11188);
			}
		}
	}



/* %allocate-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_z52allocatezd2nodez80zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{	/* Ast/node.scm 19 */
				BgL_nodez00_bglt BgL_new2105z00_8533;

				BgL_new2105z00_8533 =
					((BgL_nodez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_nodez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2105z00_8533),
					BGl_classzd2numzd2zz__objectz00(BGl_nodez00zzast_nodez00));
				{	/* Ast/node.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_11198;

					BgL_auxz00_11198 = (BgL_objectz00_bglt) (BgL_new2105z00_8533);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_11198, BFALSE);
				}
				return BgL_new2105z00_8533;
			}
		}
	}



/* _%allocate-node */
	obj_t BGl__z52allocatezd2nodez80zzast_nodez00(obj_t BgL_envz00_6771)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{	/* Ast/node.scm 19 */
				BgL_nodez00_bglt BgL_auxz00_11201;

				{	/* Ast/node.scm 19 */
					BgL_nodez00_bglt BgL_res5618z00_8537;

					{	/* Ast/node.scm 19 */
						BgL_nodez00_bglt BgL_new2105z00_8535;

						BgL_new2105z00_8535 =
							((BgL_nodez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_nodez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2105z00_8535),
							BGl_classzd2numzd2zz__objectz00(BGl_nodez00zzast_nodez00));
						{	/* Ast/node.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_11206;

							BgL_auxz00_11206 = (BgL_objectz00_bglt) (BgL_new2105z00_8535);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11206, BFALSE);
						}
						BgL_res5618z00_8537 = BgL_new2105z00_8535;
					}
					BgL_auxz00_11201 = BgL_res5618z00_8537;
				}
				return (obj_t) (BgL_auxz00_11201);
			}
		}
	}



/* node-nil */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			if ((BGl_z52thezd2nodezd2nilz52zzast_nodez00 == BUNSPEC))
				{	/* Ast/node.scm 19 */
					{	/* Ast/node.scm 19 */
						BgL_nodez00_bglt BgL_res5401z00_4614;

						{	/* Ast/node.scm 19 */
							BgL_nodez00_bglt BgL_new2105z00_4610;

							BgL_new2105z00_4610 =
								((BgL_nodez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_nodez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2105z00_4610),
								BGl_classzd2numzd2zz__objectz00(BGl_nodez00zzast_nodez00));
							{	/* Ast/node.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_11216;

								BgL_auxz00_11216 = (BgL_objectz00_bglt) (BgL_new2105z00_4610);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_11216, BFALSE);
							}
							BgL_res5401z00_4614 = BgL_new2105z00_4610;
						}
						BGl_z52thezd2nodezd2nilz52zzast_nodez00 =
							(obj_t) (BgL_res5401z00_4614);
					}
					{	/* Ast/node.scm 19 */
						BgL_typez00_bglt BgL_arg4710z00_1726;

						BgL_arg4710z00_1726 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Ast/node.scm 19 */
							BgL_nodez00_bglt BgL_res5402z00_4620;

							{	/* Ast/node.scm 19 */
								BgL_nodez00_bglt BgL_new2101z00_4615;

								BgL_new2101z00_4615 =
									(BgL_nodez00_bglt) (BGl_z52thezd2nodezd2nilz52zzast_nodez00);
								{	/* Ast/node.scm 19 */
									obj_t BgL_loc2099z00_4618;

									BgL_typez00_bglt BgL_type2100z00_4619;

									BgL_loc2099z00_4618 = BUNSPEC;
									BgL_type2100z00_4619 = BgL_arg4710z00_1726;
									((((BgL_nodez00_bglt) CREF(BgL_new2101z00_4615))->
											BgL_locz00) = ((obj_t) BgL_loc2099z00_4618), BUNSPEC);
									((((BgL_nodez00_bglt) CREF(BgL_new2101z00_4615))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2100z00_4619), BUNSPEC);
									BgL_res5402z00_4620 = BgL_new2101z00_4615;
							}}
							(obj_t) (BgL_res5402z00_4620);
				}}}
			else
				{	/* Ast/node.scm 19 */
					BFALSE;
				}
			return (BgL_nodez00_bglt) (BGl_z52thezd2nodezd2nilz52zzast_nodez00);
		}
	}



/* _node-nil */
	obj_t BGl__nodezd2nilzd2zzast_nodez00(obj_t BgL_envz00_6772)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			return (obj_t) (BGl_nodezd2nilzd2zzast_nodez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00,
				BGl_nodezd2walkzd2default4193zd2envzd2zzast_nodez00,
				BGl_nodez00zzast_nodez00, BGl_string5459z00zzast_nodez00);
		}
	}



/* node-walk */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2walkzd2zzast_nodez00(BgL_nodez00_bglt
		BgL_nodez00_1, obj_t BgL_procz00_2)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 256 */
			{	/* Ast/node.scm 256 */
				obj_t BgL_method4194z00_4621;

				{	/* Ast/node.scm 256 */
					BgL_objectz00_bglt BgL_objz00_4622;

					BgL_objz00_4622 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Ast/node.scm 256 */
						long BgL_objzd2classzd2numz00_4623;

						BgL_objzd2classzd2numz00_4623 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_4622);
						{	/* Ast/node.scm 256 */
							obj_t BgL_arg2643z00_4624;

							BgL_arg2643z00_4624 =
								PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
								(int) (((long) 1)));
							{	/* Ast/node.scm 256 */
								obj_t BgL_arrayz00_4626;

								int BgL_offsetz00_4627;

								BgL_arrayz00_4626 = BgL_arg2643z00_4624;
								BgL_offsetz00_4627 = (int) (BgL_objzd2classzd2numz00_4623);
								{	/* Ast/node.scm 256 */
									long BgL_offsetz00_4628;

									BgL_offsetz00_4628 =
										((long) (BgL_offsetz00_4627) - OBJECT_TYPE);
									{	/* Ast/node.scm 256 */
										long BgL_modz00_4629;

										{	/* Ast/node.scm 256 */
											int BgL_arg2645z00_4630;

											BgL_arg2645z00_4630 = (int) (((long) 16));
											{	/* Ast/node.scm 256 */
												long BgL_auxz00_11237;

												BgL_auxz00_11237 = (long) (BgL_arg2645z00_4630);
												BgL_modz00_4629 =
													(BgL_offsetz00_4628 / BgL_auxz00_11237);
										}}
										{	/* Ast/node.scm 256 */
											long BgL_restz00_4631;

											{	/* Ast/node.scm 256 */
												int BgL_arg2644z00_4632;

												BgL_arg2644z00_4632 = (int) (((long) 16));
												{	/* Ast/node.scm 256 */
													long BgL_auxz00_11241;

													BgL_auxz00_11241 = (long) (BgL_arg2644z00_4632);
													BgL_restz00_4631 =
														(BgL_offsetz00_4628 % BgL_auxz00_11241);
											}}
											{	/* Ast/node.scm 256 */

												BgL_method4194z00_4621 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_4626,
														(int) (BgL_modz00_4629)), (int) (BgL_restz00_4631));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4194z00_4621) (BgL_method4194z00_4621,
					(obj_t) (BgL_nodez00_1), BgL_procz00_2, BEOA);
			}
		}
	}



/* _node-walk */
	obj_t BGl__nodezd2walkzd2zzast_nodez00(obj_t BgL_envz00_6768,
		obj_t BgL_nodez00_6769, obj_t BgL_procz00_6770)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 256 */
			return
				BGl_nodezd2walkzd2zzast_nodez00(
				(BgL_nodez00_bglt) (BgL_nodez00_6769), BgL_procz00_6770);
		}
	}



/* node-walk-default4193 */
	obj_t BGl_nodezd2walkzd2default4193z00zzast_nodez00(BgL_nodez00_bglt
		BgL_nodez00_3, obj_t BgL_procz00_4)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 34)),
				BGl_string5460z00zzast_nodez00, (obj_t) (BgL_nodez00_3));
		}
	}



/* _node-walk-default4193 */
	obj_t BGl__nodezd2walkzd2default4193z00zzast_nodez00(obj_t BgL_envz00_7380,
		obj_t BgL_nodez00_7381, obj_t BgL_procz00_7382)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			return
				BGl_nodezd2walkzd2default4193z00zzast_nodez00(
				(BgL_nodez00_bglt) (BgL_nodez00_7381), BgL_procz00_7382);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_atomz00zzast_nodez00,
				BGl_proc5461z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_varz00zzast_nodez00,
				BGl_proc5462z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_kwotez00zzast_nodez00,
				BGl_proc5463z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_sequencez00zzast_nodez00,
				BGl_proc5464z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_appz00zzast_nodez00,
				BGl_proc5465z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc5466z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_funcallz00zzast_nodez00,
				BGl_proc5467z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_externz00zzast_nodez00,
				BGl_proc5468z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_castz00zzast_nodez00,
				BGl_proc5469z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_setqz00zzast_nodez00,
				BGl_proc5470z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_conditionalz00zzast_nodez00,
				BGl_proc5471z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_failz00zzast_nodez00,
				BGl_proc5472z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_selectz00zzast_nodez00,
				BGl_proc5473z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc5474z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc5475z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5476z00zzast_nodez00,
				BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc5477z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc5478z00zzast_nodez00, BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5479z00zzast_nodez00,
				BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2walkzd2envz00zzast_nodez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5480z00zzast_nodez00,
				BGl_string5459z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5481z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5483z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5485z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5486z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5487z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5488z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5489z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5490z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5491z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5492z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5493z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5494z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5495z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5496z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_selectz00zzast_nodez00, BGl_proc5497z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_selectz00zzast_nodez00, BGl_proc5498z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_failz00zzast_nodez00,
				BGl_proc5499z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_failz00zzast_nodez00, BGl_proc5500z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5501z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5502z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_setqz00zzast_nodez00,
				BGl_proc5503z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_setqz00zzast_nodez00, BGl_proc5504z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_castz00zzast_nodez00,
				BGl_proc5505z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_castz00zzast_nodez00, BGl_proc5506z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc5507z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc5508z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_isaz00zzast_nodez00,
				BGl_proc5509z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_isaz00zzast_nodez00, BGl_proc5510z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vlengthz00zzast_nodez00, BGl_proc5511z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vlengthz00zzast_nodez00, BGl_proc5512z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc5513z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc5514z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_vrefz00zzast_nodez00,
				BGl_proc5515z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vrefz00zzast_nodez00, BGl_proc5516z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_vallocz00zzast_nodez00, BGl_proc5517z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_vallocz00zzast_nodez00, BGl_proc5518z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_newz00zzast_nodez00,
				BGl_proc5519z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_newz00zzast_nodez00, BGl_proc5520z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_setfieldz00zzast_nodez00, BGl_proc5521z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_setfieldz00zzast_nodez00, BGl_proc5522z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_getfieldz00zzast_nodez00, BGl_proc5523z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_getfieldz00zzast_nodez00, BGl_proc5524z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_pragmaz00zzast_nodez00, BGl_proc5525z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_pragmaz00zzast_nodez00, BGl_proc5526z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_externz00zzast_nodez00, BGl_proc5527z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_externz00zzast_nodez00, BGl_proc5528z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc5529z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc5530z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc5531z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc5532z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_appz00zzast_nodez00,
				BGl_proc5533z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_appz00zzast_nodez00, BGl_proc5534z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sequencez00zzast_nodez00, BGl_proc5535z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sequencez00zzast_nodez00, BGl_proc5536z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_kwotez00zzast_nodez00, BGl_proc5537z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_kwotez00zzast_nodez00, BGl_proc5538z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_closurez00zzast_nodez00, BGl_proc5539z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_closurez00zzast_nodez00, BGl_proc5540z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_varz00zzast_nodez00,
				BGl_proc5541z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_varz00zzast_nodez00, BGl_proc5542z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_atomz00zzast_nodez00,
				BGl_proc5543z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_atomz00zzast_nodez00, BGl_proc5544z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_nodezf2effectzf2zzast_nodez00, BGl_proc5545z00zzast_nodez00,
				BGl_string5482z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_nodezf2effectzf2zzast_nodez00, BGl_proc5546z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_nodez00zzast_nodez00,
				BGl_proc5547z00zzast_nodez00, BGl_string5482z00zzast_nodez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_nodez00zzast_nodez00, BGl_proc5548z00zzast_nodez00,
				BGl_string5484z00zzast_nodez00);
		}
	}



/* struct+object->objec4372 */
	obj_t BGl_structzb2objectzd2ze3objec4372z83zzast_nodez00(obj_t
		BgL_envz00_7469, obj_t BgL_oz00_7470, obj_t BgL_sz00_7471)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{
				BgL_nodez00_bglt BgL_oz00_3010;

				obj_t BgL_sz00_3011;

				{	/* Ast/node.scm 19 */
					BgL_nodez00_bglt BgL_auxz00_11344;

					BgL_oz00_3010 = (BgL_nodez00_bglt) (BgL_oz00_7470);
					BgL_sz00_3011 = BgL_sz00_7471;
					{	/* Ast/node.scm 19 */
						obj_t BgL_arg5267z00_3014;

						BgL_arg5267z00_3014 = STRUCT_REF(BgL_sz00_3011, (int) (((long) 0)));
						{	/* Ast/node.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_11347;

							BgL_auxz00_11347 = (BgL_objectz00_bglt) (BgL_oz00_3010);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11347, BgL_arg5267z00_3014);
					}}
					{
						obj_t BgL_auxz00_11350;

						BgL_auxz00_11350 = STRUCT_REF(BgL_sz00_3011, (int) (((long) 1)));
						((((BgL_nodez00_bglt) CREF(BgL_oz00_3010))->BgL_locz00) =
							((obj_t) BgL_auxz00_11350), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11354;

						BgL_auxz00_11354 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_3011,
								(int) (((long) 2))));
						((((BgL_nodez00_bglt) CREF(BgL_oz00_3010))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11354), BUNSPEC);
					}
					BgL_auxz00_11344 = BgL_oz00_3010;
					return (obj_t) (BgL_auxz00_11344);
				}
			}
		}
	}



/* object->struct-node4370 */
	obj_t BGl_objectzd2ze3structzd2node4370ze3zzast_nodez00(obj_t BgL_envz00_7472,
		obj_t BgL_obj2106z00_7473)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 19 */
			{
				BgL_nodez00_bglt BgL_obj2106z00_3000;

				BgL_obj2106z00_3000 = (BgL_nodez00_bglt) (BgL_obj2106z00_7473);
				{	/* Ast/node.scm 19 */
					obj_t BgL_res2107z00_3003;

					{	/* Ast/node.scm 19 */
						obj_t BgL_keyz00_6748;

						BgL_keyz00_6748 = CNST_TABLE_REF(((long) 0));
						BgL_res2107z00_3003 =
							make_struct(BgL_keyz00_6748, (int) (((long) 3)), BUNSPEC);
					}
					{	/* Ast/node.scm 19 */
						int BgL_auxz00_11364;

						BgL_auxz00_11364 = (int) (((long) 0));
						STRUCT_SET(BgL_res2107z00_3003, BgL_auxz00_11364, BFALSE);
					}
					{	/* Ast/node.scm 19 */
						obj_t BgL_arg5263z00_3005;

						BgL_arg5263z00_3005 =
							(((BgL_nodez00_bglt) CREF(BgL_obj2106z00_3000))->BgL_locz00);
						{	/* Ast/node.scm 19 */
							int BgL_auxz00_11368;

							BgL_auxz00_11368 = (int) (((long) 1));
							STRUCT_SET(BgL_res2107z00_3003, BgL_auxz00_11368,
								BgL_arg5263z00_3005);
					}}
					{	/* Ast/node.scm 19 */
						BgL_typez00_bglt BgL_arg5265z00_3007;

						BgL_arg5265z00_3007 =
							(((BgL_nodez00_bglt) CREF(BgL_obj2106z00_3000))->BgL_typez00);
						{	/* Ast/node.scm 19 */
							obj_t BgL_auxz00_11374;

							int BgL_auxz00_11372;

							BgL_auxz00_11374 = (obj_t) (BgL_arg5265z00_3007);
							BgL_auxz00_11372 = (int) (((long) 2));
							STRUCT_SET(BgL_res2107z00_3003, BgL_auxz00_11372,
								BgL_auxz00_11374);
					}}
					return BgL_res2107z00_3003;
				}
			}
		}
	}



/* struct+object->objec4368 */
	obj_t BGl_structzb2objectzd2ze3objec4368z83zzast_nodez00(obj_t
		BgL_envz00_7474, obj_t BgL_oz00_7475, obj_t BgL_sz00_7476)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{
				BgL_nodezf2effectzf2_bglt BgL_oz00_2989;

				obj_t BgL_sz00_2990;

				{	/* Ast/node.scm 35 */
					BgL_nodezf2effectzf2_bglt BgL_auxz00_11378;

					BgL_oz00_2989 = (BgL_nodezf2effectzf2_bglt) (BgL_oz00_7475);
					BgL_sz00_2990 = BgL_sz00_7476;
					{	/* Ast/node.scm 35 */
						obj_t BgL_arg5260z00_2993;

						BgL_arg5260z00_2993 = STRUCT_REF(BgL_sz00_2990, (int) (((long) 0)));
						{	/* Ast/node.scm 35 */
							BgL_objectz00_bglt BgL_auxz00_11381;

							BgL_auxz00_11381 = (BgL_objectz00_bglt) (BgL_oz00_2989);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11381, BgL_arg5260z00_2993);
					}}
					{
						obj_t BgL_auxz00_11384;

						BgL_auxz00_11384 = STRUCT_REF(BgL_sz00_2990, (int) (((long) 1)));
						((((BgL_nodezf2effectzf2_bglt) CREF(BgL_oz00_2989))->BgL_locz00) =
							((obj_t) BgL_auxz00_11384), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11388;

						BgL_auxz00_11388 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2990,
								(int) (((long) 2))));
						((((BgL_nodezf2effectzf2_bglt) CREF(BgL_oz00_2989))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11388), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11393;

						BgL_auxz00_11393 = STRUCT_REF(BgL_sz00_2990, (int) (((long) 3)));
						((((BgL_nodezf2effectzf2_bglt) CREF(BgL_oz00_2989))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_11393), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11397;

						BgL_auxz00_11397 = STRUCT_REF(BgL_sz00_2990, (int) (((long) 4)));
						((((BgL_nodezf2effectzf2_bglt) CREF(BgL_oz00_2989))->BgL_keyz00) =
							((obj_t) BgL_auxz00_11397), BUNSPEC);
					}
					BgL_auxz00_11378 = BgL_oz00_2989;
					return (obj_t) (BgL_auxz00_11378);
				}
			}
		}
	}



/* object->struct-node/4365 */
	obj_t BGl_objectzd2ze3structzd2nodezf24365z11zzast_nodez00(obj_t
		BgL_envz00_7477, obj_t BgL_obj2144z00_7478)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 35 */
			{
				BgL_nodezf2effectzf2_bglt BgL_obj2144z00_2975;

				BgL_obj2144z00_2975 = (BgL_nodezf2effectzf2_bglt) (BgL_obj2144z00_7478);
				{	/* Ast/node.scm 35 */
					obj_t BgL_res2145z00_2978;

					{	/* Ast/node.scm 35 */
						obj_t BgL_keyz00_6716;

						BgL_keyz00_6716 = CNST_TABLE_REF(((long) 1));
						BgL_res2145z00_2978 =
							make_struct(BgL_keyz00_6716, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Ast/node.scm 35 */
						int BgL_auxz00_11406;

						BgL_auxz00_11406 = (int) (((long) 0));
						STRUCT_SET(BgL_res2145z00_2978, BgL_auxz00_11406, BFALSE);
					}
					{	/* Ast/node.scm 35 */
						obj_t BgL_arg5252z00_2980;

						{
							BgL_nodez00_bglt BgL_auxz00_11409;

							BgL_auxz00_11409 = (BgL_nodez00_bglt) (BgL_obj2144z00_2975);
							BgL_arg5252z00_2980 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11409))->BgL_locz00);
						}
						{	/* Ast/node.scm 35 */
							int BgL_auxz00_11412;

							BgL_auxz00_11412 = (int) (((long) 1));
							STRUCT_SET(BgL_res2145z00_2978, BgL_auxz00_11412,
								BgL_arg5252z00_2980);
					}}
					{	/* Ast/node.scm 35 */
						BgL_typez00_bglt BgL_arg5254z00_2982;

						{
							BgL_nodez00_bglt BgL_auxz00_11415;

							BgL_auxz00_11415 = (BgL_nodez00_bglt) (BgL_obj2144z00_2975);
							BgL_arg5254z00_2982 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11415))->BgL_typez00);
						}
						{	/* Ast/node.scm 35 */
							obj_t BgL_auxz00_11420;

							int BgL_auxz00_11418;

							BgL_auxz00_11420 = (obj_t) (BgL_arg5254z00_2982);
							BgL_auxz00_11418 = (int) (((long) 2));
							STRUCT_SET(BgL_res2145z00_2978, BgL_auxz00_11418,
								BgL_auxz00_11420);
					}}
					{	/* Ast/node.scm 35 */
						obj_t BgL_arg5256z00_2984;

						BgL_arg5256z00_2984 =
							(((BgL_nodezf2effectzf2_bglt) CREF(BgL_obj2144z00_2975))->
							BgL_sidezd2effectzf3z21);
						{	/* Ast/node.scm 35 */
							int BgL_auxz00_11424;

							BgL_auxz00_11424 = (int) (((long) 3));
							STRUCT_SET(BgL_res2145z00_2978, BgL_auxz00_11424,
								BgL_arg5256z00_2984);
					}}
					{	/* Ast/node.scm 35 */
						obj_t BgL_arg5258z00_2986;

						BgL_arg5258z00_2986 =
							(((BgL_nodezf2effectzf2_bglt) CREF(BgL_obj2144z00_2975))->
							BgL_keyz00);
						{	/* Ast/node.scm 35 */
							int BgL_auxz00_11428;

							BgL_auxz00_11428 = (int) (((long) 4));
							STRUCT_SET(BgL_res2145z00_2978, BgL_auxz00_11428,
								BgL_arg5258z00_2986);
					}}
					return BgL_res2145z00_2978;
				}
			}
		}
	}



/* struct+object->objec4363 */
	obj_t BGl_structzb2objectzd2ze3objec4363z83zzast_nodez00(obj_t
		BgL_envz00_7479, obj_t BgL_oz00_7480, obj_t BgL_sz00_7481)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{
				BgL_atomz00_bglt BgL_oz00_2965;

				obj_t BgL_sz00_2966;

				{	/* Ast/node.scm 44 */
					BgL_atomz00_bglt BgL_auxz00_11432;

					BgL_oz00_2965 = (BgL_atomz00_bglt) (BgL_oz00_7480);
					BgL_sz00_2966 = BgL_sz00_7481;
					{	/* Ast/node.scm 44 */
						obj_t BgL_arg5249z00_2969;

						BgL_arg5249z00_2969 = STRUCT_REF(BgL_sz00_2966, (int) (((long) 0)));
						{	/* Ast/node.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_11435;

							BgL_auxz00_11435 = (BgL_objectz00_bglt) (BgL_oz00_2965);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11435, BgL_arg5249z00_2969);
					}}
					{
						obj_t BgL_auxz00_11438;

						BgL_auxz00_11438 = STRUCT_REF(BgL_sz00_2966, (int) (((long) 1)));
						((((BgL_atomz00_bglt) CREF(BgL_oz00_2965))->BgL_locz00) =
							((obj_t) BgL_auxz00_11438), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11442;

						BgL_auxz00_11442 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2966,
								(int) (((long) 2))));
						((((BgL_atomz00_bglt) CREF(BgL_oz00_2965))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11442), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11447;

						BgL_auxz00_11447 = STRUCT_REF(BgL_sz00_2966, (int) (((long) 3)));
						((((BgL_atomz00_bglt) CREF(BgL_oz00_2965))->BgL_valuez00) =
							((obj_t) BgL_auxz00_11447), BUNSPEC);
					}
					BgL_auxz00_11432 = BgL_oz00_2965;
					return (obj_t) (BgL_auxz00_11432);
				}
			}
		}
	}



/* object->struct-atom4361 */
	obj_t BGl_objectzd2ze3structzd2atom4361ze3zzast_nodez00(obj_t BgL_envz00_7482,
		obj_t BgL_obj2185z00_7483)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 44 */
			{
				BgL_atomz00_bglt BgL_obj2185z00_2953;

				BgL_obj2185z00_2953 = (BgL_atomz00_bglt) (BgL_obj2185z00_7483);
				{	/* Ast/node.scm 44 */
					obj_t BgL_res2186z00_2956;

					{	/* Ast/node.scm 44 */
						obj_t BgL_keyz00_6690;

						BgL_keyz00_6690 = CNST_TABLE_REF(((long) 2));
						BgL_res2186z00_2956 =
							make_struct(BgL_keyz00_6690, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Ast/node.scm 44 */
						int BgL_auxz00_11456;

						BgL_auxz00_11456 = (int) (((long) 0));
						STRUCT_SET(BgL_res2186z00_2956, BgL_auxz00_11456, BFALSE);
					}
					{	/* Ast/node.scm 44 */
						obj_t BgL_arg5243z00_2958;

						{
							BgL_nodez00_bglt BgL_auxz00_11459;

							BgL_auxz00_11459 = (BgL_nodez00_bglt) (BgL_obj2185z00_2953);
							BgL_arg5243z00_2958 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11459))->BgL_locz00);
						}
						{	/* Ast/node.scm 44 */
							int BgL_auxz00_11462;

							BgL_auxz00_11462 = (int) (((long) 1));
							STRUCT_SET(BgL_res2186z00_2956, BgL_auxz00_11462,
								BgL_arg5243z00_2958);
					}}
					{	/* Ast/node.scm 44 */
						BgL_typez00_bglt BgL_arg5245z00_2960;

						{
							BgL_nodez00_bglt BgL_auxz00_11465;

							BgL_auxz00_11465 = (BgL_nodez00_bglt) (BgL_obj2185z00_2953);
							BgL_arg5245z00_2960 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11465))->BgL_typez00);
						}
						{	/* Ast/node.scm 44 */
							obj_t BgL_auxz00_11470;

							int BgL_auxz00_11468;

							BgL_auxz00_11470 = (obj_t) (BgL_arg5245z00_2960);
							BgL_auxz00_11468 = (int) (((long) 2));
							STRUCT_SET(BgL_res2186z00_2956, BgL_auxz00_11468,
								BgL_auxz00_11470);
					}}
					{	/* Ast/node.scm 44 */
						obj_t BgL_arg5247z00_2962;

						BgL_arg5247z00_2962 =
							(((BgL_atomz00_bglt) CREF(BgL_obj2185z00_2953))->BgL_valuez00);
						{	/* Ast/node.scm 44 */
							int BgL_auxz00_11474;

							BgL_auxz00_11474 = (int) (((long) 3));
							STRUCT_SET(BgL_res2186z00_2956, BgL_auxz00_11474,
								BgL_arg5247z00_2962);
					}}
					return BgL_res2186z00_2956;
				}
			}
		}
	}



/* struct+object->objec4359 */
	obj_t BGl_structzb2objectzd2ze3objec4359z83zzast_nodez00(obj_t
		BgL_envz00_7484, obj_t BgL_oz00_7485, obj_t BgL_sz00_7486)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{
				BgL_varz00_bglt BgL_oz00_2943;

				obj_t BgL_sz00_2944;

				{	/* Ast/node.scm 49 */
					BgL_varz00_bglt BgL_auxz00_11478;

					BgL_oz00_2943 = (BgL_varz00_bglt) (BgL_oz00_7485);
					BgL_sz00_2944 = BgL_sz00_7486;
					{	/* Ast/node.scm 49 */
						obj_t BgL_arg5240z00_2947;

						BgL_arg5240z00_2947 = STRUCT_REF(BgL_sz00_2944, (int) (((long) 0)));
						{	/* Ast/node.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_11481;

							BgL_auxz00_11481 = (BgL_objectz00_bglt) (BgL_oz00_2943);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11481, BgL_arg5240z00_2947);
					}}
					{
						obj_t BgL_auxz00_11484;

						BgL_auxz00_11484 = STRUCT_REF(BgL_sz00_2944, (int) (((long) 1)));
						((((BgL_varz00_bglt) CREF(BgL_oz00_2943))->BgL_locz00) =
							((obj_t) BgL_auxz00_11484), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11488;

						BgL_auxz00_11488 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2944,
								(int) (((long) 2))));
						((((BgL_varz00_bglt) CREF(BgL_oz00_2943))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11488), BUNSPEC);
					}
					{
						BgL_variablez00_bglt BgL_auxz00_11493;

						BgL_auxz00_11493 =
							(BgL_variablez00_bglt) (STRUCT_REF(BgL_sz00_2944,
								(int) (((long) 3))));
						((((BgL_varz00_bglt) CREF(BgL_oz00_2943))->BgL_variablez00) =
							((BgL_variablez00_bglt) BgL_auxz00_11493), BUNSPEC);
					}
					BgL_auxz00_11478 = BgL_oz00_2943;
					return (obj_t) (BgL_auxz00_11478);
				}
			}
		}
	}



/* object->struct-var4357 */
	obj_t BGl_objectzd2ze3structzd2var4357ze3zzast_nodez00(obj_t BgL_envz00_7487,
		obj_t BgL_obj2221z00_7488)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 49 */
			{
				BgL_varz00_bglt BgL_obj2221z00_2931;

				BgL_obj2221z00_2931 = (BgL_varz00_bglt) (BgL_obj2221z00_7488);
				{	/* Ast/node.scm 49 */
					obj_t BgL_res2222z00_2934;

					{	/* Ast/node.scm 49 */
						obj_t BgL_keyz00_6664;

						BgL_keyz00_6664 = CNST_TABLE_REF(((long) 3));
						BgL_res2222z00_2934 =
							make_struct(BgL_keyz00_6664, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Ast/node.scm 49 */
						int BgL_auxz00_11503;

						BgL_auxz00_11503 = (int) (((long) 0));
						STRUCT_SET(BgL_res2222z00_2934, BgL_auxz00_11503, BFALSE);
					}
					{	/* Ast/node.scm 49 */
						obj_t BgL_arg5234z00_2936;

						{
							BgL_nodez00_bglt BgL_auxz00_11506;

							BgL_auxz00_11506 = (BgL_nodez00_bglt) (BgL_obj2221z00_2931);
							BgL_arg5234z00_2936 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11506))->BgL_locz00);
						}
						{	/* Ast/node.scm 49 */
							int BgL_auxz00_11509;

							BgL_auxz00_11509 = (int) (((long) 1));
							STRUCT_SET(BgL_res2222z00_2934, BgL_auxz00_11509,
								BgL_arg5234z00_2936);
					}}
					{	/* Ast/node.scm 49 */
						BgL_typez00_bglt BgL_arg5236z00_2938;

						{
							BgL_nodez00_bglt BgL_auxz00_11512;

							BgL_auxz00_11512 = (BgL_nodez00_bglt) (BgL_obj2221z00_2931);
							BgL_arg5236z00_2938 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11512))->BgL_typez00);
						}
						{	/* Ast/node.scm 49 */
							obj_t BgL_auxz00_11517;

							int BgL_auxz00_11515;

							BgL_auxz00_11517 = (obj_t) (BgL_arg5236z00_2938);
							BgL_auxz00_11515 = (int) (((long) 2));
							STRUCT_SET(BgL_res2222z00_2934, BgL_auxz00_11515,
								BgL_auxz00_11517);
					}}
					{	/* Ast/node.scm 49 */
						BgL_variablez00_bglt BgL_arg5238z00_2940;

						BgL_arg5238z00_2940 =
							(((BgL_varz00_bglt) CREF(BgL_obj2221z00_2931))->BgL_variablez00);
						{	/* Ast/node.scm 49 */
							obj_t BgL_auxz00_11523;

							int BgL_auxz00_11521;

							BgL_auxz00_11523 = (obj_t) (BgL_arg5238z00_2940);
							BgL_auxz00_11521 = (int) (((long) 3));
							STRUCT_SET(BgL_res2222z00_2934, BgL_auxz00_11521,
								BgL_auxz00_11523);
					}}
					return BgL_res2222z00_2934;
				}
			}
		}
	}



/* struct+object->objec4355 */
	obj_t BGl_structzb2objectzd2ze3objec4355z83zzast_nodez00(obj_t
		BgL_envz00_7489, obj_t BgL_oz00_7490, obj_t BgL_sz00_7491)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{
				BgL_closurez00_bglt BgL_oz00_2921;

				obj_t BgL_sz00_2922;

				{	/* Ast/node.scm 54 */
					BgL_closurez00_bglt BgL_auxz00_11527;

					BgL_oz00_2921 = (BgL_closurez00_bglt) (BgL_oz00_7490);
					BgL_sz00_2922 = BgL_sz00_7491;
					{	/* Ast/node.scm 54 */
						obj_t BgL_arg5231z00_2925;

						BgL_arg5231z00_2925 = STRUCT_REF(BgL_sz00_2922, (int) (((long) 0)));
						{	/* Ast/node.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_11530;

							BgL_auxz00_11530 = (BgL_objectz00_bglt) (BgL_oz00_2921);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11530, BgL_arg5231z00_2925);
					}}
					{
						obj_t BgL_auxz00_11533;

						BgL_auxz00_11533 = STRUCT_REF(BgL_sz00_2922, (int) (((long) 1)));
						((((BgL_closurez00_bglt) CREF(BgL_oz00_2921))->BgL_locz00) =
							((obj_t) BgL_auxz00_11533), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11537;

						BgL_auxz00_11537 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2922,
								(int) (((long) 2))));
						((((BgL_closurez00_bglt) CREF(BgL_oz00_2921))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11537), BUNSPEC);
					}
					{
						BgL_variablez00_bglt BgL_auxz00_11542;

						BgL_auxz00_11542 =
							(BgL_variablez00_bglt) (STRUCT_REF(BgL_sz00_2922,
								(int) (((long) 3))));
						((((BgL_closurez00_bglt) CREF(BgL_oz00_2921))->BgL_variablez00) =
							((BgL_variablez00_bglt) BgL_auxz00_11542), BUNSPEC);
					}
					BgL_auxz00_11527 = BgL_oz00_2921;
					return (obj_t) (BgL_auxz00_11527);
				}
			}
		}
	}



/* object->struct-closu4353 */
	obj_t BGl_objectzd2ze3structzd2closu4353ze3zzast_nodez00(obj_t
		BgL_envz00_7492, obj_t BgL_obj2257z00_7493)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 54 */
			{
				BgL_closurez00_bglt BgL_obj2257z00_2909;

				BgL_obj2257z00_2909 = (BgL_closurez00_bglt) (BgL_obj2257z00_7493);
				{	/* Ast/node.scm 54 */
					obj_t BgL_res2258z00_2912;

					{	/* Ast/node.scm 54 */
						obj_t BgL_keyz00_6638;

						BgL_keyz00_6638 = CNST_TABLE_REF(((long) 4));
						BgL_res2258z00_2912 =
							make_struct(BgL_keyz00_6638, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Ast/node.scm 54 */
						int BgL_auxz00_11552;

						BgL_auxz00_11552 = (int) (((long) 0));
						STRUCT_SET(BgL_res2258z00_2912, BgL_auxz00_11552, BFALSE);
					}
					{	/* Ast/node.scm 54 */
						obj_t BgL_arg5225z00_2914;

						{
							BgL_nodez00_bglt BgL_auxz00_11555;

							BgL_auxz00_11555 = (BgL_nodez00_bglt) (BgL_obj2257z00_2909);
							BgL_arg5225z00_2914 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11555))->BgL_locz00);
						}
						{	/* Ast/node.scm 54 */
							int BgL_auxz00_11558;

							BgL_auxz00_11558 = (int) (((long) 1));
							STRUCT_SET(BgL_res2258z00_2912, BgL_auxz00_11558,
								BgL_arg5225z00_2914);
					}}
					{	/* Ast/node.scm 54 */
						BgL_typez00_bglt BgL_arg5227z00_2916;

						{
							BgL_nodez00_bglt BgL_auxz00_11561;

							BgL_auxz00_11561 = (BgL_nodez00_bglt) (BgL_obj2257z00_2909);
							BgL_arg5227z00_2916 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11561))->BgL_typez00);
						}
						{	/* Ast/node.scm 54 */
							obj_t BgL_auxz00_11566;

							int BgL_auxz00_11564;

							BgL_auxz00_11566 = (obj_t) (BgL_arg5227z00_2916);
							BgL_auxz00_11564 = (int) (((long) 2));
							STRUCT_SET(BgL_res2258z00_2912, BgL_auxz00_11564,
								BgL_auxz00_11566);
					}}
					{	/* Ast/node.scm 54 */
						BgL_variablez00_bglt BgL_arg5229z00_2918;

						{
							BgL_varz00_bglt BgL_auxz00_11569;

							BgL_auxz00_11569 = (BgL_varz00_bglt) (BgL_obj2257z00_2909);
							BgL_arg5229z00_2918 =
								(((BgL_varz00_bglt) CREF(BgL_auxz00_11569))->BgL_variablez00);
						}
						{	/* Ast/node.scm 54 */
							obj_t BgL_auxz00_11574;

							int BgL_auxz00_11572;

							BgL_auxz00_11574 = (obj_t) (BgL_arg5229z00_2918);
							BgL_auxz00_11572 = (int) (((long) 3));
							STRUCT_SET(BgL_res2258z00_2912, BgL_auxz00_11572,
								BgL_auxz00_11574);
					}}
					return BgL_res2258z00_2912;
				}
			}
		}
	}



/* struct+object->objec4351 */
	obj_t BGl_structzb2objectzd2ze3objec4351z83zzast_nodez00(obj_t
		BgL_envz00_7494, obj_t BgL_oz00_7495, obj_t BgL_sz00_7496)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{
				BgL_kwotez00_bglt BgL_oz00_2899;

				obj_t BgL_sz00_2900;

				{	/* Ast/node.scm 57 */
					BgL_kwotez00_bglt BgL_auxz00_11578;

					BgL_oz00_2899 = (BgL_kwotez00_bglt) (BgL_oz00_7495);
					BgL_sz00_2900 = BgL_sz00_7496;
					{	/* Ast/node.scm 57 */
						obj_t BgL_arg5222z00_2903;

						BgL_arg5222z00_2903 = STRUCT_REF(BgL_sz00_2900, (int) (((long) 0)));
						{	/* Ast/node.scm 57 */
							BgL_objectz00_bglt BgL_auxz00_11581;

							BgL_auxz00_11581 = (BgL_objectz00_bglt) (BgL_oz00_2899);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11581, BgL_arg5222z00_2903);
					}}
					{
						obj_t BgL_auxz00_11584;

						BgL_auxz00_11584 = STRUCT_REF(BgL_sz00_2900, (int) (((long) 1)));
						((((BgL_kwotez00_bglt) CREF(BgL_oz00_2899))->BgL_locz00) =
							((obj_t) BgL_auxz00_11584), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11588;

						BgL_auxz00_11588 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2900,
								(int) (((long) 2))));
						((((BgL_kwotez00_bglt) CREF(BgL_oz00_2899))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11588), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11593;

						BgL_auxz00_11593 = STRUCT_REF(BgL_sz00_2900, (int) (((long) 3)));
						((((BgL_kwotez00_bglt) CREF(BgL_oz00_2899))->BgL_valuez00) =
							((obj_t) BgL_auxz00_11593), BUNSPEC);
					}
					BgL_auxz00_11578 = BgL_oz00_2899;
					return (obj_t) (BgL_auxz00_11578);
				}
			}
		}
	}



/* object->struct-kwote4349 */
	obj_t BGl_objectzd2ze3structzd2kwote4349ze3zzast_nodez00(obj_t
		BgL_envz00_7497, obj_t BgL_obj2291z00_7498)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 57 */
			{
				BgL_kwotez00_bglt BgL_obj2291z00_2887;

				BgL_obj2291z00_2887 = (BgL_kwotez00_bglt) (BgL_obj2291z00_7498);
				{	/* Ast/node.scm 57 */
					obj_t BgL_res2292z00_2890;

					{	/* Ast/node.scm 57 */
						obj_t BgL_keyz00_6612;

						BgL_keyz00_6612 = CNST_TABLE_REF(((long) 5));
						BgL_res2292z00_2890 =
							make_struct(BgL_keyz00_6612, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Ast/node.scm 57 */
						int BgL_auxz00_11602;

						BgL_auxz00_11602 = (int) (((long) 0));
						STRUCT_SET(BgL_res2292z00_2890, BgL_auxz00_11602, BFALSE);
					}
					{	/* Ast/node.scm 57 */
						obj_t BgL_arg5216z00_2892;

						{
							BgL_nodez00_bglt BgL_auxz00_11605;

							BgL_auxz00_11605 = (BgL_nodez00_bglt) (BgL_obj2291z00_2887);
							BgL_arg5216z00_2892 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11605))->BgL_locz00);
						}
						{	/* Ast/node.scm 57 */
							int BgL_auxz00_11608;

							BgL_auxz00_11608 = (int) (((long) 1));
							STRUCT_SET(BgL_res2292z00_2890, BgL_auxz00_11608,
								BgL_arg5216z00_2892);
					}}
					{	/* Ast/node.scm 57 */
						BgL_typez00_bglt BgL_arg5218z00_2894;

						{
							BgL_nodez00_bglt BgL_auxz00_11611;

							BgL_auxz00_11611 = (BgL_nodez00_bglt) (BgL_obj2291z00_2887);
							BgL_arg5218z00_2894 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11611))->BgL_typez00);
						}
						{	/* Ast/node.scm 57 */
							obj_t BgL_auxz00_11616;

							int BgL_auxz00_11614;

							BgL_auxz00_11616 = (obj_t) (BgL_arg5218z00_2894);
							BgL_auxz00_11614 = (int) (((long) 2));
							STRUCT_SET(BgL_res2292z00_2890, BgL_auxz00_11614,
								BgL_auxz00_11616);
					}}
					{	/* Ast/node.scm 57 */
						obj_t BgL_arg5220z00_2896;

						BgL_arg5220z00_2896 =
							(((BgL_kwotez00_bglt) CREF(BgL_obj2291z00_2887))->BgL_valuez00);
						{	/* Ast/node.scm 57 */
							int BgL_auxz00_11620;

							BgL_auxz00_11620 = (int) (((long) 3));
							STRUCT_SET(BgL_res2292z00_2890, BgL_auxz00_11620,
								BgL_arg5220z00_2896);
					}}
					return BgL_res2292z00_2890;
				}
			}
		}
	}



/* struct+object->objec4347 */
	obj_t BGl_structzb2objectzd2ze3objec4347z83zzast_nodez00(obj_t
		BgL_envz00_7499, obj_t BgL_oz00_7500, obj_t BgL_sz00_7501)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{
				BgL_sequencez00_bglt BgL_oz00_2875;

				obj_t BgL_sz00_2876;

				{	/* Ast/node.scm 62 */
					BgL_sequencez00_bglt BgL_auxz00_11624;

					BgL_oz00_2875 = (BgL_sequencez00_bglt) (BgL_oz00_7500);
					BgL_sz00_2876 = BgL_sz00_7501;
					{	/* Ast/node.scm 62 */
						obj_t BgL_arg5213z00_2879;

						BgL_arg5213z00_2879 = STRUCT_REF(BgL_sz00_2876, (int) (((long) 0)));
						{	/* Ast/node.scm 62 */
							BgL_objectz00_bglt BgL_auxz00_11627;

							BgL_auxz00_11627 = (BgL_objectz00_bglt) (BgL_oz00_2875);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11627, BgL_arg5213z00_2879);
					}}
					{
						obj_t BgL_auxz00_11630;

						BgL_auxz00_11630 = STRUCT_REF(BgL_sz00_2876, (int) (((long) 1)));
						((((BgL_sequencez00_bglt) CREF(BgL_oz00_2875))->BgL_locz00) =
							((obj_t) BgL_auxz00_11630), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11634;

						BgL_auxz00_11634 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2876,
								(int) (((long) 2))));
						((((BgL_sequencez00_bglt) CREF(BgL_oz00_2875))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11634), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11639;

						BgL_auxz00_11639 = STRUCT_REF(BgL_sz00_2876, (int) (((long) 3)));
						((((BgL_sequencez00_bglt) CREF(BgL_oz00_2875))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_11639), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11643;

						BgL_auxz00_11643 = STRUCT_REF(BgL_sz00_2876, (int) (((long) 4)));
						((((BgL_sequencez00_bglt) CREF(BgL_oz00_2875))->BgL_keyz00) =
							((obj_t) BgL_auxz00_11643), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11647;

						BgL_auxz00_11647 = STRUCT_REF(BgL_sz00_2876, (int) (((long) 5)));
						((((BgL_sequencez00_bglt) CREF(BgL_oz00_2875))->BgL_nodesz00) =
							((obj_t) BgL_auxz00_11647), BUNSPEC);
					}
					BgL_auxz00_11624 = BgL_oz00_2875;
					return (obj_t) (BgL_auxz00_11624);
				}
			}
		}
	}



/* object->struct-seque4345 */
	obj_t BGl_objectzd2ze3structzd2seque4345ze3zzast_nodez00(obj_t
		BgL_envz00_7502, obj_t BgL_obj2337z00_7503)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 62 */
			{
				BgL_sequencez00_bglt BgL_obj2337z00_2859;

				BgL_obj2337z00_2859 = (BgL_sequencez00_bglt) (BgL_obj2337z00_7503);
				{	/* Ast/node.scm 62 */
					obj_t BgL_res2338z00_2862;

					{	/* Ast/node.scm 62 */
						obj_t BgL_keyz00_6574;

						BgL_keyz00_6574 = CNST_TABLE_REF(((long) 6));
						BgL_res2338z00_2862 =
							make_struct(BgL_keyz00_6574, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Ast/node.scm 62 */
						int BgL_auxz00_11656;

						BgL_auxz00_11656 = (int) (((long) 0));
						STRUCT_SET(BgL_res2338z00_2862, BgL_auxz00_11656, BFALSE);
					}
					{	/* Ast/node.scm 62 */
						obj_t BgL_arg5203z00_2864;

						{
							BgL_nodez00_bglt BgL_auxz00_11659;

							BgL_auxz00_11659 = (BgL_nodez00_bglt) (BgL_obj2337z00_2859);
							BgL_arg5203z00_2864 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11659))->BgL_locz00);
						}
						{	/* Ast/node.scm 62 */
							int BgL_auxz00_11662;

							BgL_auxz00_11662 = (int) (((long) 1));
							STRUCT_SET(BgL_res2338z00_2862, BgL_auxz00_11662,
								BgL_arg5203z00_2864);
					}}
					{	/* Ast/node.scm 62 */
						BgL_typez00_bglt BgL_arg5205z00_2866;

						{
							BgL_nodez00_bglt BgL_auxz00_11665;

							BgL_auxz00_11665 = (BgL_nodez00_bglt) (BgL_obj2337z00_2859);
							BgL_arg5205z00_2866 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11665))->BgL_typez00);
						}
						{	/* Ast/node.scm 62 */
							obj_t BgL_auxz00_11670;

							int BgL_auxz00_11668;

							BgL_auxz00_11670 = (obj_t) (BgL_arg5205z00_2866);
							BgL_auxz00_11668 = (int) (((long) 2));
							STRUCT_SET(BgL_res2338z00_2862, BgL_auxz00_11668,
								BgL_auxz00_11670);
					}}
					{	/* Ast/node.scm 62 */
						obj_t BgL_arg5207z00_2868;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_11673;

							BgL_auxz00_11673 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2337z00_2859);
							BgL_arg5207z00_2868 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_11673))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 62 */
							int BgL_auxz00_11676;

							BgL_auxz00_11676 = (int) (((long) 3));
							STRUCT_SET(BgL_res2338z00_2862, BgL_auxz00_11676,
								BgL_arg5207z00_2868);
					}}
					{	/* Ast/node.scm 62 */
						obj_t BgL_arg5209z00_2870;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_11679;

							BgL_auxz00_11679 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2337z00_2859);
							BgL_arg5209z00_2870 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_11679))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 62 */
							int BgL_auxz00_11682;

							BgL_auxz00_11682 = (int) (((long) 4));
							STRUCT_SET(BgL_res2338z00_2862, BgL_auxz00_11682,
								BgL_arg5209z00_2870);
					}}
					{	/* Ast/node.scm 62 */
						obj_t BgL_arg5211z00_2872;

						BgL_arg5211z00_2872 =
							(((BgL_sequencez00_bglt) CREF(BgL_obj2337z00_2859))->
							BgL_nodesz00);
						{	/* Ast/node.scm 62 */
							int BgL_auxz00_11686;

							BgL_auxz00_11686 = (int) (((long) 5));
							STRUCT_SET(BgL_res2338z00_2862, BgL_auxz00_11686,
								BgL_arg5211z00_2872);
					}}
					return BgL_res2338z00_2862;
				}
			}
		}
	}



/* struct+object->objec4343 */
	obj_t BGl_structzb2objectzd2ze3objec4343z83zzast_nodez00(obj_t
		BgL_envz00_7504, obj_t BgL_oz00_7505, obj_t BgL_sz00_7506)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{
				BgL_appz00_bglt BgL_oz00_2846;

				obj_t BgL_sz00_2847;

				{	/* Ast/node.scm 66 */
					BgL_appz00_bglt BgL_auxz00_11690;

					BgL_oz00_2846 = (BgL_appz00_bglt) (BgL_oz00_7505);
					BgL_sz00_2847 = BgL_sz00_7506;
					{	/* Ast/node.scm 66 */
						obj_t BgL_arg5200z00_2850;

						BgL_arg5200z00_2850 = STRUCT_REF(BgL_sz00_2847, (int) (((long) 0)));
						{	/* Ast/node.scm 66 */
							BgL_objectz00_bglt BgL_auxz00_11693;

							BgL_auxz00_11693 = (BgL_objectz00_bglt) (BgL_oz00_2846);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11693, BgL_arg5200z00_2850);
					}}
					{
						obj_t BgL_auxz00_11696;

						BgL_auxz00_11696 = STRUCT_REF(BgL_sz00_2847, (int) (((long) 1)));
						((((BgL_appz00_bglt) CREF(BgL_oz00_2846))->BgL_locz00) =
							((obj_t) BgL_auxz00_11696), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11700;

						BgL_auxz00_11700 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2847,
								(int) (((long) 2))));
						((((BgL_appz00_bglt) CREF(BgL_oz00_2846))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11700), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11705;

						BgL_auxz00_11705 = STRUCT_REF(BgL_sz00_2847, (int) (((long) 3)));
						((((BgL_appz00_bglt) CREF(BgL_oz00_2846))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_11705), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11709;

						BgL_auxz00_11709 = STRUCT_REF(BgL_sz00_2847, (int) (((long) 4)));
						((((BgL_appz00_bglt) CREF(BgL_oz00_2846))->BgL_keyz00) =
							((obj_t) BgL_auxz00_11709), BUNSPEC);
					}
					{
						BgL_varz00_bglt BgL_auxz00_11713;

						BgL_auxz00_11713 =
							(BgL_varz00_bglt) (STRUCT_REF(BgL_sz00_2847, (int) (((long) 5))));
						((((BgL_appz00_bglt) CREF(BgL_oz00_2846))->BgL_funz00) =
							((BgL_varz00_bglt) BgL_auxz00_11713), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11718;

						BgL_auxz00_11718 = STRUCT_REF(BgL_sz00_2847, (int) (((long) 6)));
						((((BgL_appz00_bglt) CREF(BgL_oz00_2846))->BgL_argsz00) =
							((obj_t) BgL_auxz00_11718), BUNSPEC);
					}
					BgL_auxz00_11690 = BgL_oz00_2846;
					return (obj_t) (BgL_auxz00_11690);
				}
			}
		}
	}



/* object->struct-app4341 */
	obj_t BGl_objectzd2ze3structzd2app4341ze3zzast_nodez00(obj_t BgL_envz00_7507,
		obj_t BgL_obj2399z00_7508)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 66 */
			{
				BgL_appz00_bglt BgL_obj2399z00_2828;

				BgL_obj2399z00_2828 = (BgL_appz00_bglt) (BgL_obj2399z00_7508);
				{	/* Ast/node.scm 66 */
					obj_t BgL_res2400z00_2831;

					{	/* Ast/node.scm 66 */
						obj_t BgL_keyz00_6530;

						BgL_keyz00_6530 = CNST_TABLE_REF(((long) 7));
						BgL_res2400z00_2831 =
							make_struct(BgL_keyz00_6530, (int) (((long) 7)), BUNSPEC);
					}
					{	/* Ast/node.scm 66 */
						int BgL_auxz00_11727;

						BgL_auxz00_11727 = (int) (((long) 0));
						STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11727, BFALSE);
					}
					{	/* Ast/node.scm 66 */
						obj_t BgL_arg5188z00_2833;

						{
							BgL_nodez00_bglt BgL_auxz00_11730;

							BgL_auxz00_11730 = (BgL_nodez00_bglt) (BgL_obj2399z00_2828);
							BgL_arg5188z00_2833 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11730))->BgL_locz00);
						}
						{	/* Ast/node.scm 66 */
							int BgL_auxz00_11733;

							BgL_auxz00_11733 = (int) (((long) 1));
							STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11733,
								BgL_arg5188z00_2833);
					}}
					{	/* Ast/node.scm 66 */
						BgL_typez00_bglt BgL_arg5190z00_2835;

						{
							BgL_nodez00_bglt BgL_auxz00_11736;

							BgL_auxz00_11736 = (BgL_nodez00_bglt) (BgL_obj2399z00_2828);
							BgL_arg5190z00_2835 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11736))->BgL_typez00);
						}
						{	/* Ast/node.scm 66 */
							obj_t BgL_auxz00_11741;

							int BgL_auxz00_11739;

							BgL_auxz00_11741 = (obj_t) (BgL_arg5190z00_2835);
							BgL_auxz00_11739 = (int) (((long) 2));
							STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11739,
								BgL_auxz00_11741);
					}}
					{	/* Ast/node.scm 66 */
						obj_t BgL_arg5192z00_2837;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_11744;

							BgL_auxz00_11744 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2399z00_2828);
							BgL_arg5192z00_2837 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_11744))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 66 */
							int BgL_auxz00_11747;

							BgL_auxz00_11747 = (int) (((long) 3));
							STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11747,
								BgL_arg5192z00_2837);
					}}
					{	/* Ast/node.scm 66 */
						obj_t BgL_arg5194z00_2839;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_11750;

							BgL_auxz00_11750 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2399z00_2828);
							BgL_arg5194z00_2839 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_11750))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 66 */
							int BgL_auxz00_11753;

							BgL_auxz00_11753 = (int) (((long) 4));
							STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11753,
								BgL_arg5194z00_2839);
					}}
					{	/* Ast/node.scm 66 */
						BgL_varz00_bglt BgL_arg5196z00_2841;

						BgL_arg5196z00_2841 =
							(((BgL_appz00_bglt) CREF(BgL_obj2399z00_2828))->BgL_funz00);
						{	/* Ast/node.scm 66 */
							obj_t BgL_auxz00_11759;

							int BgL_auxz00_11757;

							BgL_auxz00_11759 = (obj_t) (BgL_arg5196z00_2841);
							BgL_auxz00_11757 = (int) (((long) 5));
							STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11757,
								BgL_auxz00_11759);
					}}
					{	/* Ast/node.scm 66 */
						obj_t BgL_arg5198z00_2843;

						BgL_arg5198z00_2843 =
							(((BgL_appz00_bglt) CREF(BgL_obj2399z00_2828))->BgL_argsz00);
						{	/* Ast/node.scm 66 */
							int BgL_auxz00_11763;

							BgL_auxz00_11763 = (int) (((long) 6));
							STRUCT_SET(BgL_res2400z00_2831, BgL_auxz00_11763,
								BgL_arg5198z00_2843);
					}}
					return BgL_res2400z00_2831;
				}
			}
		}
	}



/* struct+object->objec4339 */
	obj_t BGl_structzb2objectzd2ze3objec4339z83zzast_nodez00(obj_t
		BgL_envz00_7509, obj_t BgL_oz00_7510, obj_t BgL_sz00_7511)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{
				BgL_appzd2lyzd2_bglt BgL_oz00_2817;

				obj_t BgL_sz00_2818;

				{	/* Ast/node.scm 73 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_11767;

					BgL_oz00_2817 = (BgL_appzd2lyzd2_bglt) (BgL_oz00_7510);
					BgL_sz00_2818 = BgL_sz00_7511;
					{	/* Ast/node.scm 73 */
						obj_t BgL_arg5185z00_2821;

						BgL_arg5185z00_2821 = STRUCT_REF(BgL_sz00_2818, (int) (((long) 0)));
						{	/* Ast/node.scm 73 */
							BgL_objectz00_bglt BgL_auxz00_11770;

							BgL_auxz00_11770 = (BgL_objectz00_bglt) (BgL_oz00_2817);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11770, BgL_arg5185z00_2821);
					}}
					{
						obj_t BgL_auxz00_11773;

						BgL_auxz00_11773 = STRUCT_REF(BgL_sz00_2818, (int) (((long) 1)));
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_oz00_2817))->BgL_locz00) =
							((obj_t) BgL_auxz00_11773), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11777;

						BgL_auxz00_11777 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2818,
								(int) (((long) 2))));
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_oz00_2817))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11777), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_11782;

						BgL_auxz00_11782 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2818,
								(int) (((long) 3))));
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_oz00_2817))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_auxz00_11782), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_11787;

						BgL_auxz00_11787 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2818,
								(int) (((long) 4))));
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_oz00_2817))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_auxz00_11787), BUNSPEC);
					}
					BgL_auxz00_11767 = BgL_oz00_2817;
					return (obj_t) (BgL_auxz00_11767);
				}
			}
		}
	}



/* object->struct-app-l4337 */
	obj_t BGl_objectzd2ze3structzd2appzd2l4337z31zzast_nodez00(obj_t
		BgL_envz00_7512, obj_t BgL_obj2459z00_7513)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 73 */
			{
				BgL_appzd2lyzd2_bglt BgL_obj2459z00_2803;

				BgL_obj2459z00_2803 = (BgL_appzd2lyzd2_bglt) (BgL_obj2459z00_7513);
				{	/* Ast/node.scm 73 */
					obj_t BgL_res2460z00_2806;

					{	/* Ast/node.scm 73 */
						obj_t BgL_keyz00_6498;

						BgL_keyz00_6498 = CNST_TABLE_REF(((long) 8));
						BgL_res2460z00_2806 =
							make_struct(BgL_keyz00_6498, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Ast/node.scm 73 */
						int BgL_auxz00_11797;

						BgL_auxz00_11797 = (int) (((long) 0));
						STRUCT_SET(BgL_res2460z00_2806, BgL_auxz00_11797, BFALSE);
					}
					{	/* Ast/node.scm 73 */
						obj_t BgL_arg5177z00_2808;

						{
							BgL_nodez00_bglt BgL_auxz00_11800;

							BgL_auxz00_11800 = (BgL_nodez00_bglt) (BgL_obj2459z00_2803);
							BgL_arg5177z00_2808 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11800))->BgL_locz00);
						}
						{	/* Ast/node.scm 73 */
							int BgL_auxz00_11803;

							BgL_auxz00_11803 = (int) (((long) 1));
							STRUCT_SET(BgL_res2460z00_2806, BgL_auxz00_11803,
								BgL_arg5177z00_2808);
					}}
					{	/* Ast/node.scm 73 */
						BgL_typez00_bglt BgL_arg5179z00_2810;

						{
							BgL_nodez00_bglt BgL_auxz00_11806;

							BgL_auxz00_11806 = (BgL_nodez00_bglt) (BgL_obj2459z00_2803);
							BgL_arg5179z00_2810 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11806))->BgL_typez00);
						}
						{	/* Ast/node.scm 73 */
							obj_t BgL_auxz00_11811;

							int BgL_auxz00_11809;

							BgL_auxz00_11811 = (obj_t) (BgL_arg5179z00_2810);
							BgL_auxz00_11809 = (int) (((long) 2));
							STRUCT_SET(BgL_res2460z00_2806, BgL_auxz00_11809,
								BgL_auxz00_11811);
					}}
					{	/* Ast/node.scm 73 */
						BgL_nodez00_bglt BgL_arg5181z00_2812;

						BgL_arg5181z00_2812 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_obj2459z00_2803))->BgL_funz00);
						{	/* Ast/node.scm 73 */
							obj_t BgL_auxz00_11817;

							int BgL_auxz00_11815;

							BgL_auxz00_11817 = (obj_t) (BgL_arg5181z00_2812);
							BgL_auxz00_11815 = (int) (((long) 3));
							STRUCT_SET(BgL_res2460z00_2806, BgL_auxz00_11815,
								BgL_auxz00_11817);
					}}
					{	/* Ast/node.scm 73 */
						BgL_nodez00_bglt BgL_arg5183z00_2814;

						BgL_arg5183z00_2814 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_obj2459z00_2803))->BgL_argz00);
						{	/* Ast/node.scm 73 */
							obj_t BgL_auxz00_11823;

							int BgL_auxz00_11821;

							BgL_auxz00_11823 = (obj_t) (BgL_arg5183z00_2814);
							BgL_auxz00_11821 = (int) (((long) 4));
							STRUCT_SET(BgL_res2460z00_2806, BgL_auxz00_11821,
								BgL_auxz00_11823);
					}}
					return BgL_res2460z00_2806;
				}
			}
		}
	}



/* struct+object->objec4335 */
	obj_t BGl_structzb2objectzd2ze3objec4335z83zzast_nodez00(obj_t
		BgL_envz00_7514, obj_t BgL_oz00_7515, obj_t BgL_sz00_7516)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{
				BgL_funcallz00_bglt BgL_oz00_2791;

				obj_t BgL_sz00_2792;

				{	/* Ast/node.scm 80 */
					BgL_funcallz00_bglt BgL_auxz00_11827;

					BgL_oz00_2791 = (BgL_funcallz00_bglt) (BgL_oz00_7515);
					BgL_sz00_2792 = BgL_sz00_7516;
					{	/* Ast/node.scm 80 */
						obj_t BgL_arg5174z00_2795;

						BgL_arg5174z00_2795 = STRUCT_REF(BgL_sz00_2792, (int) (((long) 0)));
						{	/* Ast/node.scm 80 */
							BgL_objectz00_bglt BgL_auxz00_11830;

							BgL_auxz00_11830 = (BgL_objectz00_bglt) (BgL_oz00_2791);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11830, BgL_arg5174z00_2795);
					}}
					{
						obj_t BgL_auxz00_11833;

						BgL_auxz00_11833 = STRUCT_REF(BgL_sz00_2792, (int) (((long) 1)));
						((((BgL_funcallz00_bglt) CREF(BgL_oz00_2791))->BgL_locz00) =
							((obj_t) BgL_auxz00_11833), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11837;

						BgL_auxz00_11837 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2792,
								(int) (((long) 2))));
						((((BgL_funcallz00_bglt) CREF(BgL_oz00_2791))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11837), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_11842;

						BgL_auxz00_11842 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2792,
								(int) (((long) 3))));
						((((BgL_funcallz00_bglt) CREF(BgL_oz00_2791))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_auxz00_11842), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11847;

						BgL_auxz00_11847 = STRUCT_REF(BgL_sz00_2792, (int) (((long) 4)));
						((((BgL_funcallz00_bglt) CREF(BgL_oz00_2791))->BgL_argsz00) =
							((obj_t) BgL_auxz00_11847), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11851;

						BgL_auxz00_11851 = STRUCT_REF(BgL_sz00_2792, (int) (((long) 5)));
						((((BgL_funcallz00_bglt) CREF(BgL_oz00_2791))->BgL_strengthz00) =
							((obj_t) BgL_auxz00_11851), BUNSPEC);
					}
					BgL_auxz00_11827 = BgL_oz00_2791;
					return (obj_t) (BgL_auxz00_11827);
				}
			}
		}
	}



/* object->struct-funca4333 */
	obj_t BGl_objectzd2ze3structzd2funca4333ze3zzast_nodez00(obj_t
		BgL_envz00_7517, obj_t BgL_obj2511z00_7518)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 80 */
			{
				BgL_funcallz00_bglt BgL_obj2511z00_2775;

				BgL_obj2511z00_2775 = (BgL_funcallz00_bglt) (BgL_obj2511z00_7518);
				{	/* Ast/node.scm 80 */
					obj_t BgL_res2512z00_2778;

					{	/* Ast/node.scm 80 */
						obj_t BgL_keyz00_6460;

						BgL_keyz00_6460 = CNST_TABLE_REF(((long) 9));
						BgL_res2512z00_2778 =
							make_struct(BgL_keyz00_6460, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Ast/node.scm 80 */
						int BgL_auxz00_11860;

						BgL_auxz00_11860 = (int) (((long) 0));
						STRUCT_SET(BgL_res2512z00_2778, BgL_auxz00_11860, BFALSE);
					}
					{	/* Ast/node.scm 80 */
						obj_t BgL_arg5164z00_2780;

						{
							BgL_nodez00_bglt BgL_auxz00_11863;

							BgL_auxz00_11863 = (BgL_nodez00_bglt) (BgL_obj2511z00_2775);
							BgL_arg5164z00_2780 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11863))->BgL_locz00);
						}
						{	/* Ast/node.scm 80 */
							int BgL_auxz00_11866;

							BgL_auxz00_11866 = (int) (((long) 1));
							STRUCT_SET(BgL_res2512z00_2778, BgL_auxz00_11866,
								BgL_arg5164z00_2780);
					}}
					{	/* Ast/node.scm 80 */
						BgL_typez00_bglt BgL_arg5166z00_2782;

						{
							BgL_nodez00_bglt BgL_auxz00_11869;

							BgL_auxz00_11869 = (BgL_nodez00_bglt) (BgL_obj2511z00_2775);
							BgL_arg5166z00_2782 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11869))->BgL_typez00);
						}
						{	/* Ast/node.scm 80 */
							obj_t BgL_auxz00_11874;

							int BgL_auxz00_11872;

							BgL_auxz00_11874 = (obj_t) (BgL_arg5166z00_2782);
							BgL_auxz00_11872 = (int) (((long) 2));
							STRUCT_SET(BgL_res2512z00_2778, BgL_auxz00_11872,
								BgL_auxz00_11874);
					}}
					{	/* Ast/node.scm 80 */
						BgL_nodez00_bglt BgL_arg5168z00_2784;

						BgL_arg5168z00_2784 =
							(((BgL_funcallz00_bglt) CREF(BgL_obj2511z00_2775))->BgL_funz00);
						{	/* Ast/node.scm 80 */
							obj_t BgL_auxz00_11880;

							int BgL_auxz00_11878;

							BgL_auxz00_11880 = (obj_t) (BgL_arg5168z00_2784);
							BgL_auxz00_11878 = (int) (((long) 3));
							STRUCT_SET(BgL_res2512z00_2778, BgL_auxz00_11878,
								BgL_auxz00_11880);
					}}
					{	/* Ast/node.scm 80 */
						obj_t BgL_arg5170z00_2786;

						BgL_arg5170z00_2786 =
							(((BgL_funcallz00_bglt) CREF(BgL_obj2511z00_2775))->BgL_argsz00);
						{	/* Ast/node.scm 80 */
							int BgL_auxz00_11884;

							BgL_auxz00_11884 = (int) (((long) 4));
							STRUCT_SET(BgL_res2512z00_2778, BgL_auxz00_11884,
								BgL_arg5170z00_2786);
					}}
					{	/* Ast/node.scm 80 */
						obj_t BgL_arg5172z00_2788;

						BgL_arg5172z00_2788 =
							(((BgL_funcallz00_bglt) CREF(BgL_obj2511z00_2775))->
							BgL_strengthz00);
						{	/* Ast/node.scm 80 */
							int BgL_auxz00_11888;

							BgL_auxz00_11888 = (int) (((long) 5));
							STRUCT_SET(BgL_res2512z00_2778, BgL_auxz00_11888,
								BgL_arg5172z00_2788);
					}}
					return BgL_res2512z00_2778;
				}
			}
		}
	}



/* struct+object->objec4331 */
	obj_t BGl_structzb2objectzd2ze3objec4331z83zzast_nodez00(obj_t
		BgL_envz00_7519, obj_t BgL_oz00_7520, obj_t BgL_sz00_7521)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{
				BgL_externz00_bglt BgL_oz00_2762;

				obj_t BgL_sz00_2763;

				{	/* Ast/node.scm 90 */
					BgL_externz00_bglt BgL_auxz00_11892;

					BgL_oz00_2762 = (BgL_externz00_bglt) (BgL_oz00_7520);
					BgL_sz00_2763 = BgL_sz00_7521;
					{	/* Ast/node.scm 90 */
						obj_t BgL_arg5161z00_2766;

						BgL_arg5161z00_2766 = STRUCT_REF(BgL_sz00_2763, (int) (((long) 0)));
						{	/* Ast/node.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_11895;

							BgL_auxz00_11895 = (BgL_objectz00_bglt) (BgL_oz00_2762);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11895, BgL_arg5161z00_2766);
					}}
					{
						obj_t BgL_auxz00_11898;

						BgL_auxz00_11898 = STRUCT_REF(BgL_sz00_2763, (int) (((long) 1)));
						((((BgL_externz00_bglt) CREF(BgL_oz00_2762))->BgL_locz00) =
							((obj_t) BgL_auxz00_11898), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11902;

						BgL_auxz00_11902 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2763,
								(int) (((long) 2))));
						((((BgL_externz00_bglt) CREF(BgL_oz00_2762))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11902), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11907;

						BgL_auxz00_11907 = STRUCT_REF(BgL_sz00_2763, (int) (((long) 3)));
						((((BgL_externz00_bglt) CREF(BgL_oz00_2762))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_11907), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11911;

						BgL_auxz00_11911 = STRUCT_REF(BgL_sz00_2763, (int) (((long) 4)));
						((((BgL_externz00_bglt) CREF(BgL_oz00_2762))->BgL_keyz00) =
							((obj_t) BgL_auxz00_11911), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11915;

						BgL_auxz00_11915 = STRUCT_REF(BgL_sz00_2763, (int) (((long) 5)));
						((((BgL_externz00_bglt) CREF(BgL_oz00_2762))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_11915), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11919;

						BgL_auxz00_11919 = STRUCT_REF(BgL_sz00_2763, (int) (((long) 6)));
						((((BgL_externz00_bglt) CREF(BgL_oz00_2762))->BgL_effectz00) =
							((obj_t) BgL_auxz00_11919), BUNSPEC);
					}
					BgL_auxz00_11892 = BgL_oz00_2762;
					return (obj_t) (BgL_auxz00_11892);
				}
			}
		}
	}



/* object->struct-exter4329 */
	obj_t BGl_objectzd2ze3structzd2exter4329ze3zzast_nodez00(obj_t
		BgL_envz00_7522, obj_t BgL_obj2573z00_7523)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 90 */
			{
				BgL_externz00_bglt BgL_obj2573z00_2744;

				BgL_obj2573z00_2744 = (BgL_externz00_bglt) (BgL_obj2573z00_7523);
				{	/* Ast/node.scm 90 */
					obj_t BgL_res2574z00_2747;

					{	/* Ast/node.scm 90 */
						obj_t BgL_keyz00_6416;

						BgL_keyz00_6416 = CNST_TABLE_REF(((long) 10));
						BgL_res2574z00_2747 =
							make_struct(BgL_keyz00_6416, (int) (((long) 7)), BUNSPEC);
					}
					{	/* Ast/node.scm 90 */
						int BgL_auxz00_11928;

						BgL_auxz00_11928 = (int) (((long) 0));
						STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11928, BFALSE);
					}
					{	/* Ast/node.scm 90 */
						obj_t BgL_arg5149z00_2749;

						{
							BgL_nodez00_bglt BgL_auxz00_11931;

							BgL_auxz00_11931 = (BgL_nodez00_bglt) (BgL_obj2573z00_2744);
							BgL_arg5149z00_2749 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11931))->BgL_locz00);
						}
						{	/* Ast/node.scm 90 */
							int BgL_auxz00_11934;

							BgL_auxz00_11934 = (int) (((long) 1));
							STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11934,
								BgL_arg5149z00_2749);
					}}
					{	/* Ast/node.scm 90 */
						BgL_typez00_bglt BgL_arg5151z00_2751;

						{
							BgL_nodez00_bglt BgL_auxz00_11937;

							BgL_auxz00_11937 = (BgL_nodez00_bglt) (BgL_obj2573z00_2744);
							BgL_arg5151z00_2751 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_11937))->BgL_typez00);
						}
						{	/* Ast/node.scm 90 */
							obj_t BgL_auxz00_11942;

							int BgL_auxz00_11940;

							BgL_auxz00_11942 = (obj_t) (BgL_arg5151z00_2751);
							BgL_auxz00_11940 = (int) (((long) 2));
							STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11940,
								BgL_auxz00_11942);
					}}
					{	/* Ast/node.scm 90 */
						obj_t BgL_arg5153z00_2753;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_11945;

							BgL_auxz00_11945 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2573z00_2744);
							BgL_arg5153z00_2753 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_11945))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 90 */
							int BgL_auxz00_11948;

							BgL_auxz00_11948 = (int) (((long) 3));
							STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11948,
								BgL_arg5153z00_2753);
					}}
					{	/* Ast/node.scm 90 */
						obj_t BgL_arg5155z00_2755;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_11951;

							BgL_auxz00_11951 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2573z00_2744);
							BgL_arg5155z00_2755 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_11951))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 90 */
							int BgL_auxz00_11954;

							BgL_auxz00_11954 = (int) (((long) 4));
							STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11954,
								BgL_arg5155z00_2755);
					}}
					{	/* Ast/node.scm 90 */
						obj_t BgL_arg5157z00_2757;

						BgL_arg5157z00_2757 =
							(((BgL_externz00_bglt) CREF(BgL_obj2573z00_2744))->
							BgL_exprza2za2);
						{	/* Ast/node.scm 90 */
							int BgL_auxz00_11958;

							BgL_auxz00_11958 = (int) (((long) 5));
							STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11958,
								BgL_arg5157z00_2757);
					}}
					{	/* Ast/node.scm 90 */
						obj_t BgL_arg5159z00_2759;

						BgL_arg5159z00_2759 =
							(((BgL_externz00_bglt) CREF(BgL_obj2573z00_2744))->BgL_effectz00);
						{	/* Ast/node.scm 90 */
							int BgL_auxz00_11962;

							BgL_auxz00_11962 = (int) (((long) 6));
							STRUCT_SET(BgL_res2574z00_2747, BgL_auxz00_11962,
								BgL_arg5159z00_2759);
					}}
					return BgL_res2574z00_2747;
				}
			}
		}
	}



/* struct+object->objec4327 */
	obj_t BGl_structzb2objectzd2ze3objec4327z83zzast_nodez00(obj_t
		BgL_envz00_7524, obj_t BgL_oz00_7525, obj_t BgL_sz00_7526)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{
				BgL_pragmaz00_bglt BgL_oz00_2730;

				obj_t BgL_sz00_2731;

				{	/* Ast/node.scm 97 */
					BgL_pragmaz00_bglt BgL_auxz00_11966;

					BgL_oz00_2730 = (BgL_pragmaz00_bglt) (BgL_oz00_7525);
					BgL_sz00_2731 = BgL_sz00_7526;
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5146z00_2734;

						BgL_arg5146z00_2734 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 0)));
						{	/* Ast/node.scm 97 */
							BgL_objectz00_bglt BgL_auxz00_11969;

							BgL_auxz00_11969 = (BgL_objectz00_bglt) (BgL_oz00_2730);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_11969, BgL_arg5146z00_2734);
					}}
					{
						obj_t BgL_auxz00_11972;

						BgL_auxz00_11972 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 1)));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->BgL_locz00) =
							((obj_t) BgL_auxz00_11972), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_11976;

						BgL_auxz00_11976 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2731,
								(int) (((long) 2))));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_11976), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11981;

						BgL_auxz00_11981 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 3)));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_11981), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11985;

						BgL_auxz00_11985 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 4)));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->BgL_keyz00) =
							((obj_t) BgL_auxz00_11985), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11989;

						BgL_auxz00_11989 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 5)));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_11989), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11993;

						BgL_auxz00_11993 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 6)));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->BgL_effectz00) =
							((obj_t) BgL_auxz00_11993), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_11997;

						BgL_auxz00_11997 = STRUCT_REF(BgL_sz00_2731, (int) (((long) 7)));
						((((BgL_pragmaz00_bglt) CREF(BgL_oz00_2730))->BgL_formatz00) =
							((obj_t) BgL_auxz00_11997), BUNSPEC);
					}
					BgL_auxz00_11966 = BgL_oz00_2730;
					return (obj_t) (BgL_auxz00_11966);
				}
			}
		}
	}



/* object->struct-pragm4325 */
	obj_t BGl_objectzd2ze3structzd2pragm4325ze3zzast_nodez00(obj_t
		BgL_envz00_7527, obj_t BgL_obj2643z00_7528)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 97 */
			{
				BgL_pragmaz00_bglt BgL_obj2643z00_2710;

				BgL_obj2643z00_2710 = (BgL_pragmaz00_bglt) (BgL_obj2643z00_7528);
				{	/* Ast/node.scm 97 */
					obj_t BgL_res2644z00_2713;

					{	/* Ast/node.scm 97 */
						obj_t BgL_keyz00_6366;

						BgL_keyz00_6366 = CNST_TABLE_REF(((long) 11));
						BgL_res2644z00_2713 =
							make_struct(BgL_keyz00_6366, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/node.scm 97 */
						int BgL_auxz00_12006;

						BgL_auxz00_12006 = (int) (((long) 0));
						STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12006, BFALSE);
					}
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5132z00_2715;

						{
							BgL_nodez00_bglt BgL_auxz00_12009;

							BgL_auxz00_12009 = (BgL_nodez00_bglt) (BgL_obj2643z00_2710);
							BgL_arg5132z00_2715 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12009))->BgL_locz00);
						}
						{	/* Ast/node.scm 97 */
							int BgL_auxz00_12012;

							BgL_auxz00_12012 = (int) (((long) 1));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12012,
								BgL_arg5132z00_2715);
					}}
					{	/* Ast/node.scm 97 */
						BgL_typez00_bglt BgL_arg5134z00_2717;

						{
							BgL_nodez00_bglt BgL_auxz00_12015;

							BgL_auxz00_12015 = (BgL_nodez00_bglt) (BgL_obj2643z00_2710);
							BgL_arg5134z00_2717 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12015))->BgL_typez00);
						}
						{	/* Ast/node.scm 97 */
							obj_t BgL_auxz00_12020;

							int BgL_auxz00_12018;

							BgL_auxz00_12020 = (obj_t) (BgL_arg5134z00_2717);
							BgL_auxz00_12018 = (int) (((long) 2));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12018,
								BgL_auxz00_12020);
					}}
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5136z00_2719;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12023;

							BgL_auxz00_12023 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2643z00_2710);
							BgL_arg5136z00_2719 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12023))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 97 */
							int BgL_auxz00_12026;

							BgL_auxz00_12026 = (int) (((long) 3));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12026,
								BgL_arg5136z00_2719);
					}}
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5138z00_2721;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12029;

							BgL_auxz00_12029 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2643z00_2710);
							BgL_arg5138z00_2721 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12029))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 97 */
							int BgL_auxz00_12032;

							BgL_auxz00_12032 = (int) (((long) 4));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12032,
								BgL_arg5138z00_2721);
					}}
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5140z00_2723;

						{
							BgL_externz00_bglt BgL_auxz00_12035;

							BgL_auxz00_12035 = (BgL_externz00_bglt) (BgL_obj2643z00_2710);
							BgL_arg5140z00_2723 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12035))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 97 */
							int BgL_auxz00_12038;

							BgL_auxz00_12038 = (int) (((long) 5));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12038,
								BgL_arg5140z00_2723);
					}}
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5142z00_2725;

						{
							BgL_externz00_bglt BgL_auxz00_12041;

							BgL_auxz00_12041 = (BgL_externz00_bglt) (BgL_obj2643z00_2710);
							BgL_arg5142z00_2725 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12041))->BgL_effectz00);
						}
						{	/* Ast/node.scm 97 */
							int BgL_auxz00_12044;

							BgL_auxz00_12044 = (int) (((long) 6));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12044,
								BgL_arg5142z00_2725);
					}}
					{	/* Ast/node.scm 97 */
						obj_t BgL_arg5144z00_2727;

						BgL_arg5144z00_2727 =
							(((BgL_pragmaz00_bglt) CREF(BgL_obj2643z00_2710))->BgL_formatz00);
						{	/* Ast/node.scm 97 */
							int BgL_auxz00_12048;

							BgL_auxz00_12048 = (int) (((long) 7));
							STRUCT_SET(BgL_res2644z00_2713, BgL_auxz00_12048,
								BgL_arg5144z00_2727);
					}}
					return BgL_res2644z00_2713;
				}
			}
		}
	}



/* struct+object->objec4323 */
	obj_t BGl_structzb2objectzd2ze3objec4323z83zzast_nodez00(obj_t
		BgL_envz00_7529, obj_t BgL_oz00_7530, obj_t BgL_sz00_7531)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{
				BgL_getfieldz00_bglt BgL_oz00_2694;

				obj_t BgL_sz00_2695;

				{	/* Ast/node.scm 101 */
					BgL_getfieldz00_bglt BgL_auxz00_12052;

					BgL_oz00_2694 = (BgL_getfieldz00_bglt) (BgL_oz00_7530);
					BgL_sz00_2695 = BgL_sz00_7531;
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5129z00_2698;

						BgL_arg5129z00_2698 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 0)));
						{	/* Ast/node.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_12055;

							BgL_auxz00_12055 = (BgL_objectz00_bglt) (BgL_oz00_2694);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12055, BgL_arg5129z00_2698);
					}}
					{
						obj_t BgL_auxz00_12058;

						BgL_auxz00_12058 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 1)));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_locz00) =
							((obj_t) BgL_auxz00_12058), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12062;

						BgL_auxz00_12062 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2695,
								(int) (((long) 2))));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12062), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12067;

						BgL_auxz00_12067 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 3)));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12067), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12071;

						BgL_auxz00_12071 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 4)));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12071), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12075;

						BgL_auxz00_12075 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 5)));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12075), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12079;

						BgL_auxz00_12079 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 6)));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12079), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12083;

						BgL_auxz00_12083 = STRUCT_REF(BgL_sz00_2695, (int) (((long) 7)));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_12083), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12087;

						BgL_auxz00_12087 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2695,
								(int) (((long) 8))));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_ftypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12087), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12092;

						BgL_auxz00_12092 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2695,
								(int) (((long) 9))));
						((((BgL_getfieldz00_bglt) CREF(BgL_oz00_2694))->BgL_otypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12092), BUNSPEC);
					}
					BgL_auxz00_12052 = BgL_oz00_2694;
					return (obj_t) (BgL_auxz00_12052);
				}
			}
		}
	}



/* object->struct-getfi4321 */
	obj_t BGl_objectzd2ze3structzd2getfi4321ze3zzast_nodez00(obj_t
		BgL_envz00_7532, obj_t BgL_obj2725z00_7533)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 101 */
			{
				BgL_getfieldz00_bglt BgL_obj2725z00_2670;

				BgL_obj2725z00_2670 = (BgL_getfieldz00_bglt) (BgL_obj2725z00_7533);
				{	/* Ast/node.scm 101 */
					obj_t BgL_res2726z00_2673;

					{	/* Ast/node.scm 101 */
						obj_t BgL_keyz00_6304;

						BgL_keyz00_6304 = CNST_TABLE_REF(((long) 12));
						BgL_res2726z00_2673 =
							make_struct(BgL_keyz00_6304, (int) (((long) 10)), BUNSPEC);
					}
					{	/* Ast/node.scm 101 */
						int BgL_auxz00_12102;

						BgL_auxz00_12102 = (int) (((long) 0));
						STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12102, BFALSE);
					}
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5111z00_2675;

						{
							BgL_nodez00_bglt BgL_auxz00_12105;

							BgL_auxz00_12105 = (BgL_nodez00_bglt) (BgL_obj2725z00_2670);
							BgL_arg5111z00_2675 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12105))->BgL_locz00);
						}
						{	/* Ast/node.scm 101 */
							int BgL_auxz00_12108;

							BgL_auxz00_12108 = (int) (((long) 1));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12108,
								BgL_arg5111z00_2675);
					}}
					{	/* Ast/node.scm 101 */
						BgL_typez00_bglt BgL_arg5113z00_2677;

						{
							BgL_nodez00_bglt BgL_auxz00_12111;

							BgL_auxz00_12111 = (BgL_nodez00_bglt) (BgL_obj2725z00_2670);
							BgL_arg5113z00_2677 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12111))->BgL_typez00);
						}
						{	/* Ast/node.scm 101 */
							obj_t BgL_auxz00_12116;

							int BgL_auxz00_12114;

							BgL_auxz00_12116 = (obj_t) (BgL_arg5113z00_2677);
							BgL_auxz00_12114 = (int) (((long) 2));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12114,
								BgL_auxz00_12116);
					}}
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5115z00_2679;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12119;

							BgL_auxz00_12119 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2725z00_2670);
							BgL_arg5115z00_2679 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12119))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 101 */
							int BgL_auxz00_12122;

							BgL_auxz00_12122 = (int) (((long) 3));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12122,
								BgL_arg5115z00_2679);
					}}
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5117z00_2681;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12125;

							BgL_auxz00_12125 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2725z00_2670);
							BgL_arg5117z00_2681 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12125))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 101 */
							int BgL_auxz00_12128;

							BgL_auxz00_12128 = (int) (((long) 4));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12128,
								BgL_arg5117z00_2681);
					}}
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5119z00_2683;

						{
							BgL_externz00_bglt BgL_auxz00_12131;

							BgL_auxz00_12131 = (BgL_externz00_bglt) (BgL_obj2725z00_2670);
							BgL_arg5119z00_2683 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12131))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 101 */
							int BgL_auxz00_12134;

							BgL_auxz00_12134 = (int) (((long) 5));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12134,
								BgL_arg5119z00_2683);
					}}
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5121z00_2685;

						{
							BgL_externz00_bglt BgL_auxz00_12137;

							BgL_auxz00_12137 = (BgL_externz00_bglt) (BgL_obj2725z00_2670);
							BgL_arg5121z00_2685 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12137))->BgL_effectz00);
						}
						{	/* Ast/node.scm 101 */
							int BgL_auxz00_12140;

							BgL_auxz00_12140 = (int) (((long) 6));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12140,
								BgL_arg5121z00_2685);
					}}
					{	/* Ast/node.scm 101 */
						obj_t BgL_arg5123z00_2687;

						BgL_arg5123z00_2687 =
							(((BgL_getfieldz00_bglt) CREF(BgL_obj2725z00_2670))->
							BgL_fnamez00);
						{	/* Ast/node.scm 101 */
							int BgL_auxz00_12144;

							BgL_auxz00_12144 = (int) (((long) 7));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12144,
								BgL_arg5123z00_2687);
					}}
					{	/* Ast/node.scm 101 */
						BgL_typez00_bglt BgL_arg5125z00_2689;

						BgL_arg5125z00_2689 =
							(((BgL_getfieldz00_bglt) CREF(BgL_obj2725z00_2670))->
							BgL_ftypez00);
						{	/* Ast/node.scm 101 */
							obj_t BgL_auxz00_12150;

							int BgL_auxz00_12148;

							BgL_auxz00_12150 = (obj_t) (BgL_arg5125z00_2689);
							BgL_auxz00_12148 = (int) (((long) 8));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12148,
								BgL_auxz00_12150);
					}}
					{	/* Ast/node.scm 101 */
						BgL_typez00_bglt BgL_arg5127z00_2691;

						BgL_arg5127z00_2691 =
							(((BgL_getfieldz00_bglt) CREF(BgL_obj2725z00_2670))->
							BgL_otypez00);
						{	/* Ast/node.scm 101 */
							obj_t BgL_auxz00_12156;

							int BgL_auxz00_12154;

							BgL_auxz00_12156 = (obj_t) (BgL_arg5127z00_2691);
							BgL_auxz00_12154 = (int) (((long) 9));
							STRUCT_SET(BgL_res2726z00_2673, BgL_auxz00_12154,
								BgL_auxz00_12156);
					}}
					return BgL_res2726z00_2673;
				}
			}
		}
	}



/* struct+object->objec4319 */
	obj_t BGl_structzb2objectzd2ze3objec4319z83zzast_nodez00(obj_t
		BgL_envz00_7534, obj_t BgL_oz00_7535, obj_t BgL_sz00_7536)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{
				BgL_setfieldz00_bglt BgL_oz00_2654;

				obj_t BgL_sz00_2655;

				{	/* Ast/node.scm 110 */
					BgL_setfieldz00_bglt BgL_auxz00_12160;

					BgL_oz00_2654 = (BgL_setfieldz00_bglt) (BgL_oz00_7535);
					BgL_sz00_2655 = BgL_sz00_7536;
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5108z00_2658;

						BgL_arg5108z00_2658 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 0)));
						{	/* Ast/node.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_12163;

							BgL_auxz00_12163 = (BgL_objectz00_bglt) (BgL_oz00_2654);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12163, BgL_arg5108z00_2658);
					}}
					{
						obj_t BgL_auxz00_12166;

						BgL_auxz00_12166 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 1)));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_locz00) =
							((obj_t) BgL_auxz00_12166), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12170;

						BgL_auxz00_12170 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2655,
								(int) (((long) 2))));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12170), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12175;

						BgL_auxz00_12175 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 3)));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12175), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12179;

						BgL_auxz00_12179 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 4)));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12179), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12183;

						BgL_auxz00_12183 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 5)));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12183), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12187;

						BgL_auxz00_12187 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 6)));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12187), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12191;

						BgL_auxz00_12191 = STRUCT_REF(BgL_sz00_2655, (int) (((long) 7)));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_fnamez00) =
							((obj_t) BgL_auxz00_12191), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12195;

						BgL_auxz00_12195 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2655,
								(int) (((long) 8))));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_ftypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12195), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12200;

						BgL_auxz00_12200 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2655,
								(int) (((long) 9))));
						((((BgL_setfieldz00_bglt) CREF(BgL_oz00_2654))->BgL_otypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12200), BUNSPEC);
					}
					BgL_auxz00_12160 = BgL_oz00_2654;
					return (obj_t) (BgL_auxz00_12160);
				}
			}
		}
	}



/* object->struct-setfi4317 */
	obj_t BGl_objectzd2ze3structzd2setfi4317ze3zzast_nodez00(obj_t
		BgL_envz00_7537, obj_t BgL_obj2815z00_7538)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 110 */
			{
				BgL_setfieldz00_bglt BgL_obj2815z00_2630;

				BgL_obj2815z00_2630 = (BgL_setfieldz00_bglt) (BgL_obj2815z00_7538);
				{	/* Ast/node.scm 110 */
					obj_t BgL_res2816z00_2633;

					{	/* Ast/node.scm 110 */
						obj_t BgL_keyz00_6242;

						BgL_keyz00_6242 = CNST_TABLE_REF(((long) 13));
						BgL_res2816z00_2633 =
							make_struct(BgL_keyz00_6242, (int) (((long) 10)), BUNSPEC);
					}
					{	/* Ast/node.scm 110 */
						int BgL_auxz00_12210;

						BgL_auxz00_12210 = (int) (((long) 0));
						STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12210, BFALSE);
					}
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5090z00_2635;

						{
							BgL_nodez00_bglt BgL_auxz00_12213;

							BgL_auxz00_12213 = (BgL_nodez00_bglt) (BgL_obj2815z00_2630);
							BgL_arg5090z00_2635 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12213))->BgL_locz00);
						}
						{	/* Ast/node.scm 110 */
							int BgL_auxz00_12216;

							BgL_auxz00_12216 = (int) (((long) 1));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12216,
								BgL_arg5090z00_2635);
					}}
					{	/* Ast/node.scm 110 */
						BgL_typez00_bglt BgL_arg5092z00_2637;

						{
							BgL_nodez00_bglt BgL_auxz00_12219;

							BgL_auxz00_12219 = (BgL_nodez00_bglt) (BgL_obj2815z00_2630);
							BgL_arg5092z00_2637 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12219))->BgL_typez00);
						}
						{	/* Ast/node.scm 110 */
							obj_t BgL_auxz00_12224;

							int BgL_auxz00_12222;

							BgL_auxz00_12224 = (obj_t) (BgL_arg5092z00_2637);
							BgL_auxz00_12222 = (int) (((long) 2));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12222,
								BgL_auxz00_12224);
					}}
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5094z00_2639;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12227;

							BgL_auxz00_12227 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2815z00_2630);
							BgL_arg5094z00_2639 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12227))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 110 */
							int BgL_auxz00_12230;

							BgL_auxz00_12230 = (int) (((long) 3));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12230,
								BgL_arg5094z00_2639);
					}}
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5096z00_2641;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12233;

							BgL_auxz00_12233 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2815z00_2630);
							BgL_arg5096z00_2641 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12233))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 110 */
							int BgL_auxz00_12236;

							BgL_auxz00_12236 = (int) (((long) 4));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12236,
								BgL_arg5096z00_2641);
					}}
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5098z00_2643;

						{
							BgL_externz00_bglt BgL_auxz00_12239;

							BgL_auxz00_12239 = (BgL_externz00_bglt) (BgL_obj2815z00_2630);
							BgL_arg5098z00_2643 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12239))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 110 */
							int BgL_auxz00_12242;

							BgL_auxz00_12242 = (int) (((long) 5));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12242,
								BgL_arg5098z00_2643);
					}}
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5100z00_2645;

						{
							BgL_externz00_bglt BgL_auxz00_12245;

							BgL_auxz00_12245 = (BgL_externz00_bglt) (BgL_obj2815z00_2630);
							BgL_arg5100z00_2645 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12245))->BgL_effectz00);
						}
						{	/* Ast/node.scm 110 */
							int BgL_auxz00_12248;

							BgL_auxz00_12248 = (int) (((long) 6));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12248,
								BgL_arg5100z00_2645);
					}}
					{	/* Ast/node.scm 110 */
						obj_t BgL_arg5102z00_2647;

						BgL_arg5102z00_2647 =
							(((BgL_setfieldz00_bglt) CREF(BgL_obj2815z00_2630))->
							BgL_fnamez00);
						{	/* Ast/node.scm 110 */
							int BgL_auxz00_12252;

							BgL_auxz00_12252 = (int) (((long) 7));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12252,
								BgL_arg5102z00_2647);
					}}
					{	/* Ast/node.scm 110 */
						BgL_typez00_bglt BgL_arg5104z00_2649;

						BgL_arg5104z00_2649 =
							(((BgL_setfieldz00_bglt) CREF(BgL_obj2815z00_2630))->
							BgL_ftypez00);
						{	/* Ast/node.scm 110 */
							obj_t BgL_auxz00_12258;

							int BgL_auxz00_12256;

							BgL_auxz00_12258 = (obj_t) (BgL_arg5104z00_2649);
							BgL_auxz00_12256 = (int) (((long) 8));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12256,
								BgL_auxz00_12258);
					}}
					{	/* Ast/node.scm 110 */
						BgL_typez00_bglt BgL_arg5106z00_2651;

						BgL_arg5106z00_2651 =
							(((BgL_setfieldz00_bglt) CREF(BgL_obj2815z00_2630))->
							BgL_otypez00);
						{	/* Ast/node.scm 110 */
							obj_t BgL_auxz00_12264;

							int BgL_auxz00_12262;

							BgL_auxz00_12264 = (obj_t) (BgL_arg5106z00_2651);
							BgL_auxz00_12262 = (int) (((long) 9));
							STRUCT_SET(BgL_res2816z00_2633, BgL_auxz00_12262,
								BgL_auxz00_12264);
					}}
					return BgL_res2816z00_2633;
				}
			}
		}
	}



/* struct+object->objec4314 */
	obj_t BGl_structzb2objectzd2ze3objec4314z83zzast_nodez00(obj_t
		BgL_envz00_7539, obj_t BgL_oz00_7540, obj_t BgL_sz00_7541)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{
				BgL_newz00_bglt BgL_oz00_2616;

				obj_t BgL_sz00_2617;

				{	/* Ast/node.scm 119 */
					BgL_newz00_bglt BgL_auxz00_12268;

					BgL_oz00_2616 = (BgL_newz00_bglt) (BgL_oz00_7540);
					BgL_sz00_2617 = BgL_sz00_7541;
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5087z00_2620;

						BgL_arg5087z00_2620 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 0)));
						{	/* Ast/node.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_12271;

							BgL_auxz00_12271 = (BgL_objectz00_bglt) (BgL_oz00_2616);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12271, BgL_arg5087z00_2620);
					}}
					{
						obj_t BgL_auxz00_12274;

						BgL_auxz00_12274 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 1)));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->BgL_locz00) =
							((obj_t) BgL_auxz00_12274), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12278;

						BgL_auxz00_12278 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2617,
								(int) (((long) 2))));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12278), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12283;

						BgL_auxz00_12283 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 3)));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12283), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12287;

						BgL_auxz00_12287 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 4)));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12287), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12291;

						BgL_auxz00_12291 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 5)));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12291), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12295;

						BgL_auxz00_12295 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 6)));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12295), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12299;

						BgL_auxz00_12299 = STRUCT_REF(BgL_sz00_2617, (int) (((long) 7)));
						((((BgL_newz00_bglt) CREF(BgL_oz00_2616))->BgL_argszd2typezd2) =
							((obj_t) BgL_auxz00_12299), BUNSPEC);
					}
					BgL_auxz00_12268 = BgL_oz00_2616;
					return (obj_t) (BgL_auxz00_12268);
				}
			}
		}
	}



/* object->struct-new4311 */
	obj_t BGl_objectzd2ze3structzd2new4311ze3zzast_nodez00(obj_t BgL_envz00_7542,
		obj_t BgL_obj2899z00_7543)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 119 */
			{
				BgL_newz00_bglt BgL_obj2899z00_2596;

				BgL_obj2899z00_2596 = (BgL_newz00_bglt) (BgL_obj2899z00_7543);
				{	/* Ast/node.scm 119 */
					obj_t BgL_res2900z00_2599;

					{	/* Ast/node.scm 119 */
						obj_t BgL_keyz00_6192;

						BgL_keyz00_6192 = CNST_TABLE_REF(((long) 14));
						BgL_res2900z00_2599 =
							make_struct(BgL_keyz00_6192, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/node.scm 119 */
						int BgL_auxz00_12308;

						BgL_auxz00_12308 = (int) (((long) 0));
						STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12308, BFALSE);
					}
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5073z00_2601;

						{
							BgL_nodez00_bglt BgL_auxz00_12311;

							BgL_auxz00_12311 = (BgL_nodez00_bglt) (BgL_obj2899z00_2596);
							BgL_arg5073z00_2601 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12311))->BgL_locz00);
						}
						{	/* Ast/node.scm 119 */
							int BgL_auxz00_12314;

							BgL_auxz00_12314 = (int) (((long) 1));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12314,
								BgL_arg5073z00_2601);
					}}
					{	/* Ast/node.scm 119 */
						BgL_typez00_bglt BgL_arg5075z00_2603;

						{
							BgL_nodez00_bglt BgL_auxz00_12317;

							BgL_auxz00_12317 = (BgL_nodez00_bglt) (BgL_obj2899z00_2596);
							BgL_arg5075z00_2603 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12317))->BgL_typez00);
						}
						{	/* Ast/node.scm 119 */
							obj_t BgL_auxz00_12322;

							int BgL_auxz00_12320;

							BgL_auxz00_12322 = (obj_t) (BgL_arg5075z00_2603);
							BgL_auxz00_12320 = (int) (((long) 2));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12320,
								BgL_auxz00_12322);
					}}
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5077z00_2605;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12325;

							BgL_auxz00_12325 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2899z00_2596);
							BgL_arg5077z00_2605 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12325))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 119 */
							int BgL_auxz00_12328;

							BgL_auxz00_12328 = (int) (((long) 3));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12328,
								BgL_arg5077z00_2605);
					}}
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5079z00_2607;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12331;

							BgL_auxz00_12331 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2899z00_2596);
							BgL_arg5079z00_2607 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12331))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 119 */
							int BgL_auxz00_12334;

							BgL_auxz00_12334 = (int) (((long) 4));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12334,
								BgL_arg5079z00_2607);
					}}
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5081z00_2609;

						{
							BgL_externz00_bglt BgL_auxz00_12337;

							BgL_auxz00_12337 = (BgL_externz00_bglt) (BgL_obj2899z00_2596);
							BgL_arg5081z00_2609 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12337))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 119 */
							int BgL_auxz00_12340;

							BgL_auxz00_12340 = (int) (((long) 5));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12340,
								BgL_arg5081z00_2609);
					}}
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5083z00_2611;

						{
							BgL_externz00_bglt BgL_auxz00_12343;

							BgL_auxz00_12343 = (BgL_externz00_bglt) (BgL_obj2899z00_2596);
							BgL_arg5083z00_2611 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12343))->BgL_effectz00);
						}
						{	/* Ast/node.scm 119 */
							int BgL_auxz00_12346;

							BgL_auxz00_12346 = (int) (((long) 6));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12346,
								BgL_arg5083z00_2611);
					}}
					{	/* Ast/node.scm 119 */
						obj_t BgL_arg5085z00_2613;

						BgL_arg5085z00_2613 =
							(((BgL_newz00_bglt) CREF(BgL_obj2899z00_2596))->
							BgL_argszd2typezd2);
						{	/* Ast/node.scm 119 */
							int BgL_auxz00_12350;

							BgL_auxz00_12350 = (int) (((long) 7));
							STRUCT_SET(BgL_res2900z00_2599, BgL_auxz00_12350,
								BgL_arg5085z00_2613);
					}}
					return BgL_res2900z00_2599;
				}
			}
		}
	}



/* struct+object->objec4309 */
	obj_t BGl_structzb2objectzd2ze3objec4309z83zzast_nodez00(obj_t
		BgL_envz00_7544, obj_t BgL_oz00_7545, obj_t BgL_sz00_7546)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{
				BgL_vallocz00_bglt BgL_oz00_2580;

				obj_t BgL_sz00_2581;

				{	/* Ast/node.scm 123 */
					BgL_vallocz00_bglt BgL_auxz00_12354;

					BgL_oz00_2580 = (BgL_vallocz00_bglt) (BgL_oz00_7545);
					BgL_sz00_2581 = BgL_sz00_7546;
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5070z00_2584;

						BgL_arg5070z00_2584 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 0)));
						{	/* Ast/node.scm 123 */
							BgL_objectz00_bglt BgL_auxz00_12357;

							BgL_auxz00_12357 = (BgL_objectz00_bglt) (BgL_oz00_2580);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12357, BgL_arg5070z00_2584);
					}}
					{
						obj_t BgL_auxz00_12360;

						BgL_auxz00_12360 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 1)));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_locz00) =
							((obj_t) BgL_auxz00_12360), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12364;

						BgL_auxz00_12364 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2581,
								(int) (((long) 2))));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12364), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12369;

						BgL_auxz00_12369 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 3)));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12369), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12373;

						BgL_auxz00_12373 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 4)));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12373), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12377;

						BgL_auxz00_12377 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 5)));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12377), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12381;

						BgL_auxz00_12381 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 6)));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12381), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12385;

						BgL_auxz00_12385 = STRUCT_REF(BgL_sz00_2581, (int) (((long) 7)));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->
								BgL_czd2heapzd2formatz00) =
							((obj_t) BgL_auxz00_12385), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12389;

						BgL_auxz00_12389 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2581,
								(int) (((long) 8))));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_ftypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12389), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12394;

						BgL_auxz00_12394 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2581,
								(int) (((long) 9))));
						((((BgL_vallocz00_bglt) CREF(BgL_oz00_2580))->BgL_otypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12394), BUNSPEC);
					}
					BgL_auxz00_12354 = BgL_oz00_2580;
					return (obj_t) (BgL_auxz00_12354);
				}
			}
		}
	}



/* object->struct-vallo4307 */
	obj_t BGl_objectzd2ze3structzd2vallo4307ze3zzast_nodez00(obj_t
		BgL_envz00_7547, obj_t BgL_obj2981z00_7548)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 123 */
			{
				BgL_vallocz00_bglt BgL_obj2981z00_2556;

				BgL_obj2981z00_2556 = (BgL_vallocz00_bglt) (BgL_obj2981z00_7548);
				{	/* Ast/node.scm 123 */
					obj_t BgL_res2982z00_2559;

					{	/* Ast/node.scm 123 */
						obj_t BgL_keyz00_6130;

						BgL_keyz00_6130 = CNST_TABLE_REF(((long) 15));
						BgL_res2982z00_2559 =
							make_struct(BgL_keyz00_6130, (int) (((long) 10)), BUNSPEC);
					}
					{	/* Ast/node.scm 123 */
						int BgL_auxz00_12404;

						BgL_auxz00_12404 = (int) (((long) 0));
						STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12404, BFALSE);
					}
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5052z00_2561;

						{
							BgL_nodez00_bglt BgL_auxz00_12407;

							BgL_auxz00_12407 = (BgL_nodez00_bglt) (BgL_obj2981z00_2556);
							BgL_arg5052z00_2561 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12407))->BgL_locz00);
						}
						{	/* Ast/node.scm 123 */
							int BgL_auxz00_12410;

							BgL_auxz00_12410 = (int) (((long) 1));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12410,
								BgL_arg5052z00_2561);
					}}
					{	/* Ast/node.scm 123 */
						BgL_typez00_bglt BgL_arg5054z00_2563;

						{
							BgL_nodez00_bglt BgL_auxz00_12413;

							BgL_auxz00_12413 = (BgL_nodez00_bglt) (BgL_obj2981z00_2556);
							BgL_arg5054z00_2563 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12413))->BgL_typez00);
						}
						{	/* Ast/node.scm 123 */
							obj_t BgL_auxz00_12418;

							int BgL_auxz00_12416;

							BgL_auxz00_12418 = (obj_t) (BgL_arg5054z00_2563);
							BgL_auxz00_12416 = (int) (((long) 2));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12416,
								BgL_auxz00_12418);
					}}
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5056z00_2565;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12421;

							BgL_auxz00_12421 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2981z00_2556);
							BgL_arg5056z00_2565 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12421))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 123 */
							int BgL_auxz00_12424;

							BgL_auxz00_12424 = (int) (((long) 3));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12424,
								BgL_arg5056z00_2565);
					}}
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5058z00_2567;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12427;

							BgL_auxz00_12427 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj2981z00_2556);
							BgL_arg5058z00_2567 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12427))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 123 */
							int BgL_auxz00_12430;

							BgL_auxz00_12430 = (int) (((long) 4));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12430,
								BgL_arg5058z00_2567);
					}}
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5060z00_2569;

						{
							BgL_externz00_bglt BgL_auxz00_12433;

							BgL_auxz00_12433 = (BgL_externz00_bglt) (BgL_obj2981z00_2556);
							BgL_arg5060z00_2569 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12433))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 123 */
							int BgL_auxz00_12436;

							BgL_auxz00_12436 = (int) (((long) 5));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12436,
								BgL_arg5060z00_2569);
					}}
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5062z00_2571;

						{
							BgL_externz00_bglt BgL_auxz00_12439;

							BgL_auxz00_12439 = (BgL_externz00_bglt) (BgL_obj2981z00_2556);
							BgL_arg5062z00_2571 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12439))->BgL_effectz00);
						}
						{	/* Ast/node.scm 123 */
							int BgL_auxz00_12442;

							BgL_auxz00_12442 = (int) (((long) 6));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12442,
								BgL_arg5062z00_2571);
					}}
					{	/* Ast/node.scm 123 */
						obj_t BgL_arg5064z00_2573;

						BgL_arg5064z00_2573 =
							(((BgL_vallocz00_bglt) CREF(BgL_obj2981z00_2556))->
							BgL_czd2heapzd2formatz00);
						{	/* Ast/node.scm 123 */
							int BgL_auxz00_12446;

							BgL_auxz00_12446 = (int) (((long) 7));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12446,
								BgL_arg5064z00_2573);
					}}
					{	/* Ast/node.scm 123 */
						BgL_typez00_bglt BgL_arg5066z00_2575;

						BgL_arg5066z00_2575 =
							(((BgL_vallocz00_bglt) CREF(BgL_obj2981z00_2556))->BgL_ftypez00);
						{	/* Ast/node.scm 123 */
							obj_t BgL_auxz00_12452;

							int BgL_auxz00_12450;

							BgL_auxz00_12452 = (obj_t) (BgL_arg5066z00_2575);
							BgL_auxz00_12450 = (int) (((long) 8));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12450,
								BgL_auxz00_12452);
					}}
					{	/* Ast/node.scm 123 */
						BgL_typez00_bglt BgL_arg5068z00_2577;

						BgL_arg5068z00_2577 =
							(((BgL_vallocz00_bglt) CREF(BgL_obj2981z00_2556))->BgL_otypez00);
						{	/* Ast/node.scm 123 */
							obj_t BgL_auxz00_12458;

							int BgL_auxz00_12456;

							BgL_auxz00_12458 = (obj_t) (BgL_arg5068z00_2577);
							BgL_auxz00_12456 = (int) (((long) 9));
							STRUCT_SET(BgL_res2982z00_2559, BgL_auxz00_12456,
								BgL_auxz00_12458);
					}}
					return BgL_res2982z00_2559;
				}
			}
		}
	}



/* struct+object->objec4305 */
	obj_t BGl_structzb2objectzd2ze3objec4305z83zzast_nodez00(obj_t
		BgL_envz00_7549, obj_t BgL_oz00_7550, obj_t BgL_sz00_7551)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{
				BgL_vrefz00_bglt BgL_oz00_2538;

				obj_t BgL_sz00_2539;

				{	/* Ast/node.scm 132 */
					BgL_vrefz00_bglt BgL_auxz00_12462;

					BgL_oz00_2538 = (BgL_vrefz00_bglt) (BgL_oz00_7550);
					BgL_sz00_2539 = BgL_sz00_7551;
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5049z00_2542;

						BgL_arg5049z00_2542 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 0)));
						{	/* Ast/node.scm 132 */
							BgL_objectz00_bglt BgL_auxz00_12465;

							BgL_auxz00_12465 = (BgL_objectz00_bglt) (BgL_oz00_2538);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12465, BgL_arg5049z00_2542);
					}}
					{
						obj_t BgL_auxz00_12468;

						BgL_auxz00_12468 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 1)));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_locz00) =
							((obj_t) BgL_auxz00_12468), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12472;

						BgL_auxz00_12472 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2539,
								(int) (((long) 2))));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12472), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12477;

						BgL_auxz00_12477 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 3)));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12477), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12481;

						BgL_auxz00_12481 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 4)));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12481), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12485;

						BgL_auxz00_12485 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 5)));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12485), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12489;

						BgL_auxz00_12489 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 6)));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12489), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12493;

						BgL_auxz00_12493 = STRUCT_REF(BgL_sz00_2539, (int) (((long) 7)));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_czd2formatzd2) =
							((obj_t) BgL_auxz00_12493), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12497;

						BgL_auxz00_12497 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2539,
								(int) (((long) 8))));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_ftypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12497), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12502;

						BgL_auxz00_12502 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2539,
								(int) (((long) 9))));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_otypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12502), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12507;

						BgL_auxz00_12507 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2539,
								(int) (((long) 10))));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_vtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12507), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_12512;

						BgL_auxz00_12512 =
							CBOOL(STRUCT_REF(BgL_sz00_2539, (int) (((long) 11))));
						((((BgL_vrefz00_bglt) CREF(BgL_oz00_2538))->BgL_unsafez00) =
							((bool_t) BgL_auxz00_12512), BUNSPEC);
					}
					BgL_auxz00_12462 = BgL_oz00_2538;
					return (obj_t) (BgL_auxz00_12462);
				}
			}
		}
	}



/* object->struct-vref4302 */
	obj_t BGl_objectzd2ze3structzd2vref4302ze3zzast_nodez00(obj_t BgL_envz00_7552,
		obj_t BgL_obj3081z00_7553)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 132 */
			{
				BgL_vrefz00_bglt BgL_obj3081z00_2510;

				BgL_obj3081z00_2510 = (BgL_vrefz00_bglt) (BgL_obj3081z00_7553);
				{	/* Ast/node.scm 132 */
					obj_t BgL_res3082z00_2513;

					{	/* Ast/node.scm 132 */
						obj_t BgL_keyz00_6056;

						BgL_keyz00_6056 = CNST_TABLE_REF(((long) 16));
						BgL_res3082z00_2513 =
							make_struct(BgL_keyz00_6056, (int) (((long) 12)), BUNSPEC);
					}
					{	/* Ast/node.scm 132 */
						int BgL_auxz00_12522;

						BgL_auxz00_12522 = (int) (((long) 0));
						STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12522, BFALSE);
					}
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5027z00_2515;

						{
							BgL_nodez00_bglt BgL_auxz00_12525;

							BgL_auxz00_12525 = (BgL_nodez00_bglt) (BgL_obj3081z00_2510);
							BgL_arg5027z00_2515 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12525))->BgL_locz00);
						}
						{	/* Ast/node.scm 132 */
							int BgL_auxz00_12528;

							BgL_auxz00_12528 = (int) (((long) 1));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12528,
								BgL_arg5027z00_2515);
					}}
					{	/* Ast/node.scm 132 */
						BgL_typez00_bglt BgL_arg5029z00_2517;

						{
							BgL_nodez00_bglt BgL_auxz00_12531;

							BgL_auxz00_12531 = (BgL_nodez00_bglt) (BgL_obj3081z00_2510);
							BgL_arg5029z00_2517 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12531))->BgL_typez00);
						}
						{	/* Ast/node.scm 132 */
							obj_t BgL_auxz00_12536;

							int BgL_auxz00_12534;

							BgL_auxz00_12536 = (obj_t) (BgL_arg5029z00_2517);
							BgL_auxz00_12534 = (int) (((long) 2));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12534,
								BgL_auxz00_12536);
					}}
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5031z00_2519;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12539;

							BgL_auxz00_12539 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3081z00_2510);
							BgL_arg5031z00_2519 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12539))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 132 */
							int BgL_auxz00_12542;

							BgL_auxz00_12542 = (int) (((long) 3));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12542,
								BgL_arg5031z00_2519);
					}}
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5033z00_2521;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12545;

							BgL_auxz00_12545 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3081z00_2510);
							BgL_arg5033z00_2521 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12545))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 132 */
							int BgL_auxz00_12548;

							BgL_auxz00_12548 = (int) (((long) 4));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12548,
								BgL_arg5033z00_2521);
					}}
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5035z00_2523;

						{
							BgL_externz00_bglt BgL_auxz00_12551;

							BgL_auxz00_12551 = (BgL_externz00_bglt) (BgL_obj3081z00_2510);
							BgL_arg5035z00_2523 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12551))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 132 */
							int BgL_auxz00_12554;

							BgL_auxz00_12554 = (int) (((long) 5));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12554,
								BgL_arg5035z00_2523);
					}}
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5037z00_2525;

						{
							BgL_externz00_bglt BgL_auxz00_12557;

							BgL_auxz00_12557 = (BgL_externz00_bglt) (BgL_obj3081z00_2510);
							BgL_arg5037z00_2525 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12557))->BgL_effectz00);
						}
						{	/* Ast/node.scm 132 */
							int BgL_auxz00_12560;

							BgL_auxz00_12560 = (int) (((long) 6));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12560,
								BgL_arg5037z00_2525);
					}}
					{	/* Ast/node.scm 132 */
						obj_t BgL_arg5039z00_2527;

						BgL_arg5039z00_2527 =
							(((BgL_vrefz00_bglt) CREF(BgL_obj3081z00_2510))->
							BgL_czd2formatzd2);
						{	/* Ast/node.scm 132 */
							int BgL_auxz00_12564;

							BgL_auxz00_12564 = (int) (((long) 7));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12564,
								BgL_arg5039z00_2527);
					}}
					{	/* Ast/node.scm 132 */
						BgL_typez00_bglt BgL_arg5041z00_2529;

						BgL_arg5041z00_2529 =
							(((BgL_vrefz00_bglt) CREF(BgL_obj3081z00_2510))->BgL_ftypez00);
						{	/* Ast/node.scm 132 */
							obj_t BgL_auxz00_12570;

							int BgL_auxz00_12568;

							BgL_auxz00_12570 = (obj_t) (BgL_arg5041z00_2529);
							BgL_auxz00_12568 = (int) (((long) 8));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12568,
								BgL_auxz00_12570);
					}}
					{	/* Ast/node.scm 132 */
						BgL_typez00_bglt BgL_arg5043z00_2531;

						BgL_arg5043z00_2531 =
							(((BgL_vrefz00_bglt) CREF(BgL_obj3081z00_2510))->BgL_otypez00);
						{	/* Ast/node.scm 132 */
							obj_t BgL_auxz00_12576;

							int BgL_auxz00_12574;

							BgL_auxz00_12576 = (obj_t) (BgL_arg5043z00_2531);
							BgL_auxz00_12574 = (int) (((long) 9));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12574,
								BgL_auxz00_12576);
					}}
					{	/* Ast/node.scm 132 */
						BgL_typez00_bglt BgL_arg5045z00_2533;

						BgL_arg5045z00_2533 =
							(((BgL_vrefz00_bglt) CREF(BgL_obj3081z00_2510))->BgL_vtypez00);
						{	/* Ast/node.scm 132 */
							obj_t BgL_auxz00_12582;

							int BgL_auxz00_12580;

							BgL_auxz00_12582 = (obj_t) (BgL_arg5045z00_2533);
							BgL_auxz00_12580 = (int) (((long) 10));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12580,
								BgL_auxz00_12582);
					}}
					{	/* Ast/node.scm 132 */
						bool_t BgL_arg5047z00_2535;

						BgL_arg5047z00_2535 =
							(((BgL_vrefz00_bglt) CREF(BgL_obj3081z00_2510))->BgL_unsafez00);
						{	/* Ast/node.scm 132 */
							obj_t BgL_auxz00_12588;

							int BgL_auxz00_12586;

							BgL_auxz00_12588 = BBOOL(BgL_arg5047z00_2535);
							BgL_auxz00_12586 = (int) (((long) 11));
							STRUCT_SET(BgL_res3082z00_2513, BgL_auxz00_12586,
								BgL_auxz00_12588);
					}}
					return BgL_res3082z00_2513;
				}
			}
		}
	}



/* struct+object->objec4300 */
	obj_t BGl_structzb2objectzd2ze3objec4300z83zzast_nodez00(obj_t
		BgL_envz00_7554, obj_t BgL_oz00_7555, obj_t BgL_sz00_7556)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{
				BgL_vsetz12z12_bglt BgL_oz00_2492;

				obj_t BgL_sz00_2493;

				{	/* Ast/node.scm 145 */
					BgL_vsetz12z12_bglt BgL_auxz00_12592;

					BgL_oz00_2492 = (BgL_vsetz12z12_bglt) (BgL_oz00_7555);
					BgL_sz00_2493 = BgL_sz00_7556;
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5024z00_2496;

						BgL_arg5024z00_2496 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 0)));
						{	/* Ast/node.scm 145 */
							BgL_objectz00_bglt BgL_auxz00_12595;

							BgL_auxz00_12595 = (BgL_objectz00_bglt) (BgL_oz00_2492);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12595, BgL_arg5024z00_2496);
					}}
					{
						obj_t BgL_auxz00_12598;

						BgL_auxz00_12598 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 1)));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_locz00) =
							((obj_t) BgL_auxz00_12598), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12602;

						BgL_auxz00_12602 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2493,
								(int) (((long) 2))));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12602), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12607;

						BgL_auxz00_12607 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 3)));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12607), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12611;

						BgL_auxz00_12611 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 4)));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12611), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12615;

						BgL_auxz00_12615 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 5)));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12615), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12619;

						BgL_auxz00_12619 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 6)));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12619), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12623;

						BgL_auxz00_12623 = STRUCT_REF(BgL_sz00_2493, (int) (((long) 7)));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_czd2formatzd2) =
							((obj_t) BgL_auxz00_12623), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12627;

						BgL_auxz00_12627 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2493,
								(int) (((long) 8))));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_ftypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12627), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12632;

						BgL_auxz00_12632 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2493,
								(int) (((long) 9))));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_otypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12632), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12637;

						BgL_auxz00_12637 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2493,
								(int) (((long) 10))));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_vtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12637), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_12642;

						BgL_auxz00_12642 =
							CBOOL(STRUCT_REF(BgL_sz00_2493, (int) (((long) 11))));
						((((BgL_vsetz12z12_bglt) CREF(BgL_oz00_2492))->BgL_unsafez00) =
							((bool_t) BgL_auxz00_12642), BUNSPEC);
					}
					BgL_auxz00_12592 = BgL_oz00_2492;
					return (obj_t) (BgL_auxz00_12592);
				}
			}
		}
	}



/* object->struct-vset!4298 */
	obj_t BGl_objectzd2ze3structzd2vsetz124298zf1zzast_nodez00(obj_t
		BgL_envz00_7557, obj_t BgL_obj3189z00_7558)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 145 */
			{
				BgL_vsetz12z12_bglt BgL_obj3189z00_2464;

				BgL_obj3189z00_2464 = (BgL_vsetz12z12_bglt) (BgL_obj3189z00_7558);
				{	/* Ast/node.scm 145 */
					obj_t BgL_res3190z00_2467;

					{	/* Ast/node.scm 145 */
						obj_t BgL_keyz00_5982;

						BgL_keyz00_5982 = CNST_TABLE_REF(((long) 17));
						BgL_res3190z00_2467 =
							make_struct(BgL_keyz00_5982, (int) (((long) 12)), BUNSPEC);
					}
					{	/* Ast/node.scm 145 */
						int BgL_auxz00_12652;

						BgL_auxz00_12652 = (int) (((long) 0));
						STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12652, BFALSE);
					}
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5002z00_2469;

						{
							BgL_nodez00_bglt BgL_auxz00_12655;

							BgL_auxz00_12655 = (BgL_nodez00_bglt) (BgL_obj3189z00_2464);
							BgL_arg5002z00_2469 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12655))->BgL_locz00);
						}
						{	/* Ast/node.scm 145 */
							int BgL_auxz00_12658;

							BgL_auxz00_12658 = (int) (((long) 1));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12658,
								BgL_arg5002z00_2469);
					}}
					{	/* Ast/node.scm 145 */
						BgL_typez00_bglt BgL_arg5004z00_2471;

						{
							BgL_nodez00_bglt BgL_auxz00_12661;

							BgL_auxz00_12661 = (BgL_nodez00_bglt) (BgL_obj3189z00_2464);
							BgL_arg5004z00_2471 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12661))->BgL_typez00);
						}
						{	/* Ast/node.scm 145 */
							obj_t BgL_auxz00_12666;

							int BgL_auxz00_12664;

							BgL_auxz00_12666 = (obj_t) (BgL_arg5004z00_2471);
							BgL_auxz00_12664 = (int) (((long) 2));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12664,
								BgL_auxz00_12666);
					}}
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5006z00_2473;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12669;

							BgL_auxz00_12669 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3189z00_2464);
							BgL_arg5006z00_2473 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12669))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 145 */
							int BgL_auxz00_12672;

							BgL_auxz00_12672 = (int) (((long) 3));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12672,
								BgL_arg5006z00_2473);
					}}
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5008z00_2475;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12675;

							BgL_auxz00_12675 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3189z00_2464);
							BgL_arg5008z00_2475 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12675))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 145 */
							int BgL_auxz00_12678;

							BgL_auxz00_12678 = (int) (((long) 4));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12678,
								BgL_arg5008z00_2475);
					}}
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5010z00_2477;

						{
							BgL_externz00_bglt BgL_auxz00_12681;

							BgL_auxz00_12681 = (BgL_externz00_bglt) (BgL_obj3189z00_2464);
							BgL_arg5010z00_2477 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12681))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 145 */
							int BgL_auxz00_12684;

							BgL_auxz00_12684 = (int) (((long) 5));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12684,
								BgL_arg5010z00_2477);
					}}
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5012z00_2479;

						{
							BgL_externz00_bglt BgL_auxz00_12687;

							BgL_auxz00_12687 = (BgL_externz00_bglt) (BgL_obj3189z00_2464);
							BgL_arg5012z00_2479 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12687))->BgL_effectz00);
						}
						{	/* Ast/node.scm 145 */
							int BgL_auxz00_12690;

							BgL_auxz00_12690 = (int) (((long) 6));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12690,
								BgL_arg5012z00_2479);
					}}
					{	/* Ast/node.scm 145 */
						obj_t BgL_arg5014z00_2481;

						BgL_arg5014z00_2481 =
							(((BgL_vsetz12z12_bglt) CREF(BgL_obj3189z00_2464))->
							BgL_czd2formatzd2);
						{	/* Ast/node.scm 145 */
							int BgL_auxz00_12694;

							BgL_auxz00_12694 = (int) (((long) 7));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12694,
								BgL_arg5014z00_2481);
					}}
					{	/* Ast/node.scm 145 */
						BgL_typez00_bglt BgL_arg5016z00_2483;

						BgL_arg5016z00_2483 =
							(((BgL_vsetz12z12_bglt) CREF(BgL_obj3189z00_2464))->BgL_ftypez00);
						{	/* Ast/node.scm 145 */
							obj_t BgL_auxz00_12700;

							int BgL_auxz00_12698;

							BgL_auxz00_12700 = (obj_t) (BgL_arg5016z00_2483);
							BgL_auxz00_12698 = (int) (((long) 8));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12698,
								BgL_auxz00_12700);
					}}
					{	/* Ast/node.scm 145 */
						BgL_typez00_bglt BgL_arg5018z00_2485;

						BgL_arg5018z00_2485 =
							(((BgL_vsetz12z12_bglt) CREF(BgL_obj3189z00_2464))->BgL_otypez00);
						{	/* Ast/node.scm 145 */
							obj_t BgL_auxz00_12706;

							int BgL_auxz00_12704;

							BgL_auxz00_12706 = (obj_t) (BgL_arg5018z00_2485);
							BgL_auxz00_12704 = (int) (((long) 9));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12704,
								BgL_auxz00_12706);
					}}
					{	/* Ast/node.scm 145 */
						BgL_typez00_bglt BgL_arg5020z00_2487;

						BgL_arg5020z00_2487 =
							(((BgL_vsetz12z12_bglt) CREF(BgL_obj3189z00_2464))->BgL_vtypez00);
						{	/* Ast/node.scm 145 */
							obj_t BgL_auxz00_12712;

							int BgL_auxz00_12710;

							BgL_auxz00_12712 = (obj_t) (BgL_arg5020z00_2487);
							BgL_auxz00_12710 = (int) (((long) 10));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12710,
								BgL_auxz00_12712);
					}}
					{	/* Ast/node.scm 145 */
						bool_t BgL_arg5022z00_2489;

						BgL_arg5022z00_2489 =
							(((BgL_vsetz12z12_bglt) CREF(BgL_obj3189z00_2464))->
							BgL_unsafez00);
						{	/* Ast/node.scm 145 */
							obj_t BgL_auxz00_12718;

							int BgL_auxz00_12716;

							BgL_auxz00_12718 = BBOOL(BgL_arg5022z00_2489);
							BgL_auxz00_12716 = (int) (((long) 11));
							STRUCT_SET(BgL_res3190z00_2467, BgL_auxz00_12716,
								BgL_auxz00_12718);
					}}
					return BgL_res3190z00_2467;
				}
			}
		}
	}



/* struct+object->objec4296 */
	obj_t BGl_structzb2objectzd2ze3objec4296z83zzast_nodez00(obj_t
		BgL_envz00_7559, obj_t BgL_oz00_7560, obj_t BgL_sz00_7561)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{
				BgL_vlengthz00_bglt BgL_oz00_2449;

				obj_t BgL_sz00_2450;

				{	/* Ast/node.scm 158 */
					BgL_vlengthz00_bglt BgL_auxz00_12722;

					BgL_oz00_2449 = (BgL_vlengthz00_bglt) (BgL_oz00_7560);
					BgL_sz00_2450 = BgL_sz00_7561;
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4999z00_2453;

						BgL_arg4999z00_2453 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 0)));
						{	/* Ast/node.scm 158 */
							BgL_objectz00_bglt BgL_auxz00_12725;

							BgL_auxz00_12725 = (BgL_objectz00_bglt) (BgL_oz00_2449);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12725, BgL_arg4999z00_2453);
					}}
					{
						obj_t BgL_auxz00_12728;

						BgL_auxz00_12728 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 1)));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_locz00) =
							((obj_t) BgL_auxz00_12728), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12732;

						BgL_auxz00_12732 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2450,
								(int) (((long) 2))));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12732), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12737;

						BgL_auxz00_12737 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 3)));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12737), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12741;

						BgL_auxz00_12741 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 4)));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12741), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12745;

						BgL_auxz00_12745 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 5)));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12745), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12749;

						BgL_auxz00_12749 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 6)));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12749), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12753;

						BgL_auxz00_12753 = STRUCT_REF(BgL_sz00_2450, (int) (((long) 7)));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_czd2formatzd2) =
							((obj_t) BgL_auxz00_12753), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12757;

						BgL_auxz00_12757 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2450,
								(int) (((long) 8))));
						((((BgL_vlengthz00_bglt) CREF(BgL_oz00_2449))->BgL_vtypez00) =
							((BgL_typez00_bglt) BgL_auxz00_12757), BUNSPEC);
					}
					BgL_auxz00_12722 = BgL_oz00_2449;
					return (obj_t) (BgL_auxz00_12722);
				}
			}
		}
	}



/* object->struct-vleng4294 */
	obj_t BGl_objectzd2ze3structzd2vleng4294ze3zzast_nodez00(obj_t
		BgL_envz00_7562, obj_t BgL_obj3283z00_7563)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 158 */
			{
				BgL_vlengthz00_bglt BgL_obj3283z00_2427;

				BgL_obj3283z00_2427 = (BgL_vlengthz00_bglt) (BgL_obj3283z00_7563);
				{	/* Ast/node.scm 158 */
					obj_t BgL_res3284z00_2430;

					{	/* Ast/node.scm 158 */
						obj_t BgL_keyz00_5926;

						BgL_keyz00_5926 = CNST_TABLE_REF(((long) 18));
						BgL_res3284z00_2430 =
							make_struct(BgL_keyz00_5926, (int) (((long) 9)), BUNSPEC);
					}
					{	/* Ast/node.scm 158 */
						int BgL_auxz00_12767;

						BgL_auxz00_12767 = (int) (((long) 0));
						STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12767, BFALSE);
					}
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4982z00_2432;

						{
							BgL_nodez00_bglt BgL_auxz00_12770;

							BgL_auxz00_12770 = (BgL_nodez00_bglt) (BgL_obj3283z00_2427);
							BgL_arg4982z00_2432 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12770))->BgL_locz00);
						}
						{	/* Ast/node.scm 158 */
							int BgL_auxz00_12773;

							BgL_auxz00_12773 = (int) (((long) 1));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12773,
								BgL_arg4982z00_2432);
					}}
					{	/* Ast/node.scm 158 */
						BgL_typez00_bglt BgL_arg4984z00_2434;

						{
							BgL_nodez00_bglt BgL_auxz00_12776;

							BgL_auxz00_12776 = (BgL_nodez00_bglt) (BgL_obj3283z00_2427);
							BgL_arg4984z00_2434 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12776))->BgL_typez00);
						}
						{	/* Ast/node.scm 158 */
							obj_t BgL_auxz00_12781;

							int BgL_auxz00_12779;

							BgL_auxz00_12781 = (obj_t) (BgL_arg4984z00_2434);
							BgL_auxz00_12779 = (int) (((long) 2));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12779,
								BgL_auxz00_12781);
					}}
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4986z00_2436;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12784;

							BgL_auxz00_12784 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3283z00_2427);
							BgL_arg4986z00_2436 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12784))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 158 */
							int BgL_auxz00_12787;

							BgL_auxz00_12787 = (int) (((long) 3));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12787,
								BgL_arg4986z00_2436);
					}}
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4988z00_2438;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12790;

							BgL_auxz00_12790 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3283z00_2427);
							BgL_arg4988z00_2438 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12790))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 158 */
							int BgL_auxz00_12793;

							BgL_auxz00_12793 = (int) (((long) 4));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12793,
								BgL_arg4988z00_2438);
					}}
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4990z00_2440;

						{
							BgL_externz00_bglt BgL_auxz00_12796;

							BgL_auxz00_12796 = (BgL_externz00_bglt) (BgL_obj3283z00_2427);
							BgL_arg4990z00_2440 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12796))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 158 */
							int BgL_auxz00_12799;

							BgL_auxz00_12799 = (int) (((long) 5));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12799,
								BgL_arg4990z00_2440);
					}}
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4993z00_2442;

						{
							BgL_externz00_bglt BgL_auxz00_12802;

							BgL_auxz00_12802 = (BgL_externz00_bglt) (BgL_obj3283z00_2427);
							BgL_arg4993z00_2442 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12802))->BgL_effectz00);
						}
						{	/* Ast/node.scm 158 */
							int BgL_auxz00_12805;

							BgL_auxz00_12805 = (int) (((long) 6));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12805,
								BgL_arg4993z00_2442);
					}}
					{	/* Ast/node.scm 158 */
						obj_t BgL_arg4995z00_2444;

						BgL_arg4995z00_2444 =
							(((BgL_vlengthz00_bglt) CREF(BgL_obj3283z00_2427))->
							BgL_czd2formatzd2);
						{	/* Ast/node.scm 158 */
							int BgL_auxz00_12809;

							BgL_auxz00_12809 = (int) (((long) 7));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12809,
								BgL_arg4995z00_2444);
					}}
					{	/* Ast/node.scm 158 */
						BgL_typez00_bglt BgL_arg4997z00_2446;

						BgL_arg4997z00_2446 =
							(((BgL_vlengthz00_bglt) CREF(BgL_obj3283z00_2427))->BgL_vtypez00);
						{	/* Ast/node.scm 158 */
							obj_t BgL_auxz00_12815;

							int BgL_auxz00_12813;

							BgL_auxz00_12815 = (obj_t) (BgL_arg4997z00_2446);
							BgL_auxz00_12813 = (int) (((long) 8));
							STRUCT_SET(BgL_res3284z00_2430, BgL_auxz00_12813,
								BgL_auxz00_12815);
					}}
					return BgL_res3284z00_2430;
				}
			}
		}
	}



/* struct+object->objec4292 */
	obj_t BGl_structzb2objectzd2ze3objec4292z83zzast_nodez00(obj_t
		BgL_envz00_7564, obj_t BgL_oz00_7565, obj_t BgL_sz00_7566)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{
				BgL_isaz00_bglt BgL_oz00_2413;

				obj_t BgL_sz00_2414;

				{	/* Ast/node.scm 165 */
					BgL_isaz00_bglt BgL_auxz00_12819;

					BgL_oz00_2413 = (BgL_isaz00_bglt) (BgL_oz00_7565);
					BgL_sz00_2414 = BgL_sz00_7566;
					{	/* Ast/node.scm 165 */
						obj_t BgL_arg4979z00_2417;

						BgL_arg4979z00_2417 = STRUCT_REF(BgL_sz00_2414, (int) (((long) 0)));
						{	/* Ast/node.scm 165 */
							BgL_objectz00_bglt BgL_auxz00_12822;

							BgL_auxz00_12822 = (BgL_objectz00_bglt) (BgL_oz00_2413);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12822, BgL_arg4979z00_2417);
					}}
					{
						obj_t BgL_auxz00_12825;

						BgL_auxz00_12825 = STRUCT_REF(BgL_sz00_2414, (int) (((long) 1)));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->BgL_locz00) =
							((obj_t) BgL_auxz00_12825), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12829;

						BgL_auxz00_12829 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2414,
								(int) (((long) 2))));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12829), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12834;

						BgL_auxz00_12834 = STRUCT_REF(BgL_sz00_2414, (int) (((long) 3)));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12834), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12838;

						BgL_auxz00_12838 = STRUCT_REF(BgL_sz00_2414, (int) (((long) 4)));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12838), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12842;

						BgL_auxz00_12842 = STRUCT_REF(BgL_sz00_2414, (int) (((long) 5)));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12842), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12846;

						BgL_auxz00_12846 = STRUCT_REF(BgL_sz00_2414, (int) (((long) 6)));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12846), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12850;

						BgL_auxz00_12850 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2414,
								(int) (((long) 7))));
						((((BgL_isaz00_bglt) CREF(BgL_oz00_2413))->BgL_classz00) =
							((BgL_typez00_bglt) BgL_auxz00_12850), BUNSPEC);
					}
					BgL_auxz00_12819 = BgL_oz00_2413;
					return (obj_t) (BgL_auxz00_12819);
				}
			}
		}
	}



/* object->struct-isa4289 */
	obj_t BGl_objectzd2ze3structzd2isa4289ze3zzast_nodez00(obj_t BgL_envz00_7567,
		obj_t BgL_obj3363z00_7568)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 165 */
			{
				BgL_isaz00_bglt BgL_obj3363z00_2393;

				BgL_obj3363z00_2393 = (BgL_isaz00_bglt) (BgL_obj3363z00_7568);
				{	/* Ast/node.scm 165 */
					obj_t BgL_res3364z00_2396;

					{	/* Ast/node.scm 165 */
						obj_t BgL_keyz00_5876;

						BgL_keyz00_5876 = CNST_TABLE_REF(((long) 19));
						BgL_res3364z00_2396 =
							make_struct(BgL_keyz00_5876, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/node.scm 165 */
						int BgL_auxz00_12860;

						BgL_auxz00_12860 = (int) (((long) 0));
						STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12860, BFALSE);
					}
					{	/* Ast/node.scm 165 */
						obj_t BgL_arg4964z00_2398;

						{
							BgL_nodez00_bglt BgL_auxz00_12863;

							BgL_auxz00_12863 = (BgL_nodez00_bglt) (BgL_obj3363z00_2393);
							BgL_arg4964z00_2398 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12863))->BgL_locz00);
						}
						{	/* Ast/node.scm 165 */
							int BgL_auxz00_12866;

							BgL_auxz00_12866 = (int) (((long) 1));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12866,
								BgL_arg4964z00_2398);
					}}
					{	/* Ast/node.scm 165 */
						BgL_typez00_bglt BgL_arg4966z00_2400;

						{
							BgL_nodez00_bglt BgL_auxz00_12869;

							BgL_auxz00_12869 = (BgL_nodez00_bglt) (BgL_obj3363z00_2393);
							BgL_arg4966z00_2400 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12869))->BgL_typez00);
						}
						{	/* Ast/node.scm 165 */
							obj_t BgL_auxz00_12874;

							int BgL_auxz00_12872;

							BgL_auxz00_12874 = (obj_t) (BgL_arg4966z00_2400);
							BgL_auxz00_12872 = (int) (((long) 2));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12872,
								BgL_auxz00_12874);
					}}
					{	/* Ast/node.scm 165 */
						obj_t BgL_arg4968z00_2402;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12877;

							BgL_auxz00_12877 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3363z00_2393);
							BgL_arg4968z00_2402 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12877))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 165 */
							int BgL_auxz00_12880;

							BgL_auxz00_12880 = (int) (((long) 3));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12880,
								BgL_arg4968z00_2402);
					}}
					{	/* Ast/node.scm 165 */
						obj_t BgL_arg4970z00_2404;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12883;

							BgL_auxz00_12883 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3363z00_2393);
							BgL_arg4970z00_2404 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12883))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 165 */
							int BgL_auxz00_12886;

							BgL_auxz00_12886 = (int) (((long) 4));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12886,
								BgL_arg4970z00_2404);
					}}
					{	/* Ast/node.scm 165 */
						obj_t BgL_arg4972z00_2406;

						{
							BgL_externz00_bglt BgL_auxz00_12889;

							BgL_auxz00_12889 = (BgL_externz00_bglt) (BgL_obj3363z00_2393);
							BgL_arg4972z00_2406 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12889))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 165 */
							int BgL_auxz00_12892;

							BgL_auxz00_12892 = (int) (((long) 5));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12892,
								BgL_arg4972z00_2406);
					}}
					{	/* Ast/node.scm 165 */
						obj_t BgL_arg4974z00_2408;

						{
							BgL_externz00_bglt BgL_auxz00_12895;

							BgL_auxz00_12895 = (BgL_externz00_bglt) (BgL_obj3363z00_2393);
							BgL_arg4974z00_2408 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12895))->BgL_effectz00);
						}
						{	/* Ast/node.scm 165 */
							int BgL_auxz00_12898;

							BgL_auxz00_12898 = (int) (((long) 6));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12898,
								BgL_arg4974z00_2408);
					}}
					{	/* Ast/node.scm 165 */
						BgL_typez00_bglt BgL_arg4977z00_2410;

						BgL_arg4977z00_2410 =
							(((BgL_isaz00_bglt) CREF(BgL_obj3363z00_2393))->BgL_classz00);
						{	/* Ast/node.scm 165 */
							obj_t BgL_auxz00_12904;

							int BgL_auxz00_12902;

							BgL_auxz00_12904 = (obj_t) (BgL_arg4977z00_2410);
							BgL_auxz00_12902 = (int) (((long) 7));
							STRUCT_SET(BgL_res3364z00_2396, BgL_auxz00_12902,
								BgL_auxz00_12904);
					}}
					return BgL_res3364z00_2396;
				}
			}
		}
	}



/* struct+object->objec4286 */
	obj_t BGl_structzb2objectzd2ze3objec4286z83zzast_nodez00(obj_t
		BgL_envz00_7569, obj_t BgL_oz00_7570, obj_t BgL_sz00_7571)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{
				BgL_castzd2nullzd2_bglt BgL_oz00_2380;

				obj_t BgL_sz00_2381;

				{	/* Ast/node.scm 169 */
					BgL_castzd2nullzd2_bglt BgL_auxz00_12908;

					BgL_oz00_2380 = (BgL_castzd2nullzd2_bglt) (BgL_oz00_7570);
					BgL_sz00_2381 = BgL_sz00_7571;
					{	/* Ast/node.scm 169 */
						obj_t BgL_arg4961z00_2384;

						BgL_arg4961z00_2384 = STRUCT_REF(BgL_sz00_2381, (int) (((long) 0)));
						{	/* Ast/node.scm 169 */
							BgL_objectz00_bglt BgL_auxz00_12911;

							BgL_auxz00_12911 = (BgL_objectz00_bglt) (BgL_oz00_2380);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12911, BgL_arg4961z00_2384);
					}}
					{
						obj_t BgL_auxz00_12914;

						BgL_auxz00_12914 = STRUCT_REF(BgL_sz00_2381, (int) (((long) 1)));
						((((BgL_castzd2nullzd2_bglt) CREF(BgL_oz00_2380))->BgL_locz00) =
							((obj_t) BgL_auxz00_12914), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12918;

						BgL_auxz00_12918 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2381,
								(int) (((long) 2))));
						((((BgL_castzd2nullzd2_bglt) CREF(BgL_oz00_2380))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12918), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12923;

						BgL_auxz00_12923 = STRUCT_REF(BgL_sz00_2381, (int) (((long) 3)));
						((((BgL_castzd2nullzd2_bglt) CREF(BgL_oz00_2380))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_12923), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12927;

						BgL_auxz00_12927 = STRUCT_REF(BgL_sz00_2381, (int) (((long) 4)));
						((((BgL_castzd2nullzd2_bglt) CREF(BgL_oz00_2380))->BgL_keyz00) =
							((obj_t) BgL_auxz00_12927), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12931;

						BgL_auxz00_12931 = STRUCT_REF(BgL_sz00_2381, (int) (((long) 5)));
						((((BgL_castzd2nullzd2_bglt) CREF(BgL_oz00_2380))->BgL_exprza2za2) =
							((obj_t) BgL_auxz00_12931), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_12935;

						BgL_auxz00_12935 = STRUCT_REF(BgL_sz00_2381, (int) (((long) 6)));
						((((BgL_castzd2nullzd2_bglt) CREF(BgL_oz00_2380))->BgL_effectz00) =
							((obj_t) BgL_auxz00_12935), BUNSPEC);
					}
					BgL_auxz00_12908 = BgL_oz00_2380;
					return (obj_t) (BgL_auxz00_12908);
				}
			}
		}
	}



/* object->struct-cast-4284 */
	obj_t BGl_objectzd2ze3structzd2castzd24284z31zzast_nodez00(obj_t
		BgL_envz00_7572, obj_t BgL_obj3435z00_7573)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 169 */
			{
				BgL_castzd2nullzd2_bglt BgL_obj3435z00_2362;

				BgL_obj3435z00_2362 = (BgL_castzd2nullzd2_bglt) (BgL_obj3435z00_7573);
				{	/* Ast/node.scm 169 */
					obj_t BgL_res3436z00_2365;

					{	/* Ast/node.scm 169 */
						obj_t BgL_keyz00_5832;

						BgL_keyz00_5832 = CNST_TABLE_REF(((long) 20));
						BgL_res3436z00_2365 =
							make_struct(BgL_keyz00_5832, (int) (((long) 7)), BUNSPEC);
					}
					{	/* Ast/node.scm 169 */
						int BgL_auxz00_12944;

						BgL_auxz00_12944 = (int) (((long) 0));
						STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12944, BFALSE);
					}
					{	/* Ast/node.scm 169 */
						obj_t BgL_arg4949z00_2367;

						{
							BgL_nodez00_bglt BgL_auxz00_12947;

							BgL_auxz00_12947 = (BgL_nodez00_bglt) (BgL_obj3435z00_2362);
							BgL_arg4949z00_2367 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12947))->BgL_locz00);
						}
						{	/* Ast/node.scm 169 */
							int BgL_auxz00_12950;

							BgL_auxz00_12950 = (int) (((long) 1));
							STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12950,
								BgL_arg4949z00_2367);
					}}
					{	/* Ast/node.scm 169 */
						BgL_typez00_bglt BgL_arg4951z00_2369;

						{
							BgL_nodez00_bglt BgL_auxz00_12953;

							BgL_auxz00_12953 = (BgL_nodez00_bglt) (BgL_obj3435z00_2362);
							BgL_arg4951z00_2369 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_12953))->BgL_typez00);
						}
						{	/* Ast/node.scm 169 */
							obj_t BgL_auxz00_12958;

							int BgL_auxz00_12956;

							BgL_auxz00_12958 = (obj_t) (BgL_arg4951z00_2369);
							BgL_auxz00_12956 = (int) (((long) 2));
							STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12956,
								BgL_auxz00_12958);
					}}
					{	/* Ast/node.scm 169 */
						obj_t BgL_arg4953z00_2371;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12961;

							BgL_auxz00_12961 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3435z00_2362);
							BgL_arg4953z00_2371 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12961))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 169 */
							int BgL_auxz00_12964;

							BgL_auxz00_12964 = (int) (((long) 3));
							STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12964,
								BgL_arg4953z00_2371);
					}}
					{	/* Ast/node.scm 169 */
						obj_t BgL_arg4955z00_2373;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_12967;

							BgL_auxz00_12967 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3435z00_2362);
							BgL_arg4955z00_2373 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_12967))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 169 */
							int BgL_auxz00_12970;

							BgL_auxz00_12970 = (int) (((long) 4));
							STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12970,
								BgL_arg4955z00_2373);
					}}
					{	/* Ast/node.scm 169 */
						obj_t BgL_arg4957z00_2375;

						{
							BgL_externz00_bglt BgL_auxz00_12973;

							BgL_auxz00_12973 = (BgL_externz00_bglt) (BgL_obj3435z00_2362);
							BgL_arg4957z00_2375 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12973))->BgL_exprza2za2);
						}
						{	/* Ast/node.scm 169 */
							int BgL_auxz00_12976;

							BgL_auxz00_12976 = (int) (((long) 5));
							STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12976,
								BgL_arg4957z00_2375);
					}}
					{	/* Ast/node.scm 169 */
						obj_t BgL_arg4959z00_2377;

						{
							BgL_externz00_bglt BgL_auxz00_12979;

							BgL_auxz00_12979 = (BgL_externz00_bglt) (BgL_obj3435z00_2362);
							BgL_arg4959z00_2377 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_12979))->BgL_effectz00);
						}
						{	/* Ast/node.scm 169 */
							int BgL_auxz00_12982;

							BgL_auxz00_12982 = (int) (((long) 6));
							STRUCT_SET(BgL_res3436z00_2365, BgL_auxz00_12982,
								BgL_arg4959z00_2377);
					}}
					return BgL_res3436z00_2365;
				}
			}
		}
	}



/* struct+object->objec4282 */
	obj_t BGl_structzb2objectzd2ze3objec4282z83zzast_nodez00(obj_t
		BgL_envz00_7574, obj_t BgL_oz00_7575, obj_t BgL_sz00_7576)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{
				BgL_castz00_bglt BgL_oz00_2352;

				obj_t BgL_sz00_2353;

				{	/* Ast/node.scm 172 */
					BgL_castz00_bglt BgL_auxz00_12986;

					BgL_oz00_2352 = (BgL_castz00_bglt) (BgL_oz00_7575);
					BgL_sz00_2353 = BgL_sz00_7576;
					{	/* Ast/node.scm 172 */
						obj_t BgL_arg4946z00_2356;

						BgL_arg4946z00_2356 = STRUCT_REF(BgL_sz00_2353, (int) (((long) 0)));
						{	/* Ast/node.scm 172 */
							BgL_objectz00_bglt BgL_auxz00_12989;

							BgL_auxz00_12989 = (BgL_objectz00_bglt) (BgL_oz00_2352);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_12989, BgL_arg4946z00_2356);
					}}
					{
						obj_t BgL_auxz00_12992;

						BgL_auxz00_12992 = STRUCT_REF(BgL_sz00_2353, (int) (((long) 1)));
						((((BgL_castz00_bglt) CREF(BgL_oz00_2352))->BgL_locz00) =
							((obj_t) BgL_auxz00_12992), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_12996;

						BgL_auxz00_12996 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2353,
								(int) (((long) 2))));
						((((BgL_castz00_bglt) CREF(BgL_oz00_2352))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_12996), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13001;

						BgL_auxz00_13001 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2353,
								(int) (((long) 3))));
						((((BgL_castz00_bglt) CREF(BgL_oz00_2352))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13001), BUNSPEC);
					}
					BgL_auxz00_12986 = BgL_oz00_2352;
					return (obj_t) (BgL_auxz00_12986);
				}
			}
		}
	}



/* object->struct-cast4280 */
	obj_t BGl_objectzd2ze3structzd2cast4280ze3zzast_nodez00(obj_t BgL_envz00_7577,
		obj_t BgL_obj3483z00_7578)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 172 */
			{
				BgL_castz00_bglt BgL_obj3483z00_2340;

				BgL_obj3483z00_2340 = (BgL_castz00_bglt) (BgL_obj3483z00_7578);
				{	/* Ast/node.scm 172 */
					obj_t BgL_res3484z00_2343;

					{	/* Ast/node.scm 172 */
						obj_t BgL_keyz00_5806;

						BgL_keyz00_5806 = CNST_TABLE_REF(((long) 21));
						BgL_res3484z00_2343 =
							make_struct(BgL_keyz00_5806, (int) (((long) 4)), BUNSPEC);
					}
					{	/* Ast/node.scm 172 */
						int BgL_auxz00_13011;

						BgL_auxz00_13011 = (int) (((long) 0));
						STRUCT_SET(BgL_res3484z00_2343, BgL_auxz00_13011, BFALSE);
					}
					{	/* Ast/node.scm 172 */
						obj_t BgL_arg4940z00_2345;

						{
							BgL_nodez00_bglt BgL_auxz00_13014;

							BgL_auxz00_13014 = (BgL_nodez00_bglt) (BgL_obj3483z00_2340);
							BgL_arg4940z00_2345 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13014))->BgL_locz00);
						}
						{	/* Ast/node.scm 172 */
							int BgL_auxz00_13017;

							BgL_auxz00_13017 = (int) (((long) 1));
							STRUCT_SET(BgL_res3484z00_2343, BgL_auxz00_13017,
								BgL_arg4940z00_2345);
					}}
					{	/* Ast/node.scm 172 */
						BgL_typez00_bglt BgL_arg4942z00_2347;

						{
							BgL_nodez00_bglt BgL_auxz00_13020;

							BgL_auxz00_13020 = (BgL_nodez00_bglt) (BgL_obj3483z00_2340);
							BgL_arg4942z00_2347 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13020))->BgL_typez00);
						}
						{	/* Ast/node.scm 172 */
							obj_t BgL_auxz00_13025;

							int BgL_auxz00_13023;

							BgL_auxz00_13025 = (obj_t) (BgL_arg4942z00_2347);
							BgL_auxz00_13023 = (int) (((long) 2));
							STRUCT_SET(BgL_res3484z00_2343, BgL_auxz00_13023,
								BgL_auxz00_13025);
					}}
					{	/* Ast/node.scm 172 */
						BgL_nodez00_bglt BgL_arg4944z00_2349;

						BgL_arg4944z00_2349 =
							(((BgL_castz00_bglt) CREF(BgL_obj3483z00_2340))->BgL_argz00);
						{	/* Ast/node.scm 172 */
							obj_t BgL_auxz00_13031;

							int BgL_auxz00_13029;

							BgL_auxz00_13031 = (obj_t) (BgL_arg4944z00_2349);
							BgL_auxz00_13029 = (int) (((long) 3));
							STRUCT_SET(BgL_res3484z00_2343, BgL_auxz00_13029,
								BgL_auxz00_13031);
					}}
					return BgL_res3484z00_2343;
				}
			}
		}
	}



/* struct+object->objec4278 */
	obj_t BGl_structzb2objectzd2ze3objec4278z83zzast_nodez00(obj_t
		BgL_envz00_7579, obj_t BgL_oz00_7580, obj_t BgL_sz00_7581)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{
				BgL_setqz00_bglt BgL_oz00_2329;

				obj_t BgL_sz00_2330;

				{	/* Ast/node.scm 177 */
					BgL_setqz00_bglt BgL_auxz00_13035;

					BgL_oz00_2329 = (BgL_setqz00_bglt) (BgL_oz00_7580);
					BgL_sz00_2330 = BgL_sz00_7581;
					{	/* Ast/node.scm 177 */
						obj_t BgL_arg4937z00_2333;

						BgL_arg4937z00_2333 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 0)));
						{	/* Ast/node.scm 177 */
							BgL_objectz00_bglt BgL_auxz00_13038;

							BgL_auxz00_13038 = (BgL_objectz00_bglt) (BgL_oz00_2329);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13038, BgL_arg4937z00_2333);
					}}
					{
						obj_t BgL_auxz00_13041;

						BgL_auxz00_13041 = STRUCT_REF(BgL_sz00_2330, (int) (((long) 1)));
						((((BgL_setqz00_bglt) CREF(BgL_oz00_2329))->BgL_locz00) =
							((obj_t) BgL_auxz00_13041), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13045;

						BgL_auxz00_13045 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2330,
								(int) (((long) 2))));
						((((BgL_setqz00_bglt) CREF(BgL_oz00_2329))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13045), BUNSPEC);
					}
					{
						BgL_varz00_bglt BgL_auxz00_13050;

						BgL_auxz00_13050 =
							(BgL_varz00_bglt) (STRUCT_REF(BgL_sz00_2330, (int) (((long) 3))));
						((((BgL_setqz00_bglt) CREF(BgL_oz00_2329))->BgL_varz00) =
							((BgL_varz00_bglt) BgL_auxz00_13050), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13055;

						BgL_auxz00_13055 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2330,
								(int) (((long) 4))));
						((((BgL_setqz00_bglt) CREF(BgL_oz00_2329))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_auxz00_13055), BUNSPEC);
					}
					BgL_auxz00_13035 = BgL_oz00_2329;
					return (obj_t) (BgL_auxz00_13035);
				}
			}
		}
	}



/* object->struct-setq4276 */
	obj_t BGl_objectzd2ze3structzd2setq4276ze3zzast_nodez00(obj_t BgL_envz00_7582,
		obj_t BgL_obj3525z00_7583)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 177 */
			{
				BgL_setqz00_bglt BgL_obj3525z00_2315;

				BgL_obj3525z00_2315 = (BgL_setqz00_bglt) (BgL_obj3525z00_7583);
				{	/* Ast/node.scm 177 */
					obj_t BgL_res3526z00_2318;

					{	/* Ast/node.scm 177 */
						obj_t BgL_keyz00_5774;

						BgL_keyz00_5774 = CNST_TABLE_REF(((long) 22));
						BgL_res3526z00_2318 =
							make_struct(BgL_keyz00_5774, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Ast/node.scm 177 */
						int BgL_auxz00_13065;

						BgL_auxz00_13065 = (int) (((long) 0));
						STRUCT_SET(BgL_res3526z00_2318, BgL_auxz00_13065, BFALSE);
					}
					{	/* Ast/node.scm 177 */
						obj_t BgL_arg4926z00_2320;

						{
							BgL_nodez00_bglt BgL_auxz00_13068;

							BgL_auxz00_13068 = (BgL_nodez00_bglt) (BgL_obj3525z00_2315);
							BgL_arg4926z00_2320 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13068))->BgL_locz00);
						}
						{	/* Ast/node.scm 177 */
							int BgL_auxz00_13071;

							BgL_auxz00_13071 = (int) (((long) 1));
							STRUCT_SET(BgL_res3526z00_2318, BgL_auxz00_13071,
								BgL_arg4926z00_2320);
					}}
					{	/* Ast/node.scm 177 */
						BgL_typez00_bglt BgL_arg4928z00_2322;

						{
							BgL_nodez00_bglt BgL_auxz00_13074;

							BgL_auxz00_13074 = (BgL_nodez00_bglt) (BgL_obj3525z00_2315);
							BgL_arg4928z00_2322 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13074))->BgL_typez00);
						}
						{	/* Ast/node.scm 177 */
							obj_t BgL_auxz00_13079;

							int BgL_auxz00_13077;

							BgL_auxz00_13079 = (obj_t) (BgL_arg4928z00_2322);
							BgL_auxz00_13077 = (int) (((long) 2));
							STRUCT_SET(BgL_res3526z00_2318, BgL_auxz00_13077,
								BgL_auxz00_13079);
					}}
					{	/* Ast/node.scm 177 */
						BgL_varz00_bglt BgL_arg4930z00_2324;

						BgL_arg4930z00_2324 =
							(((BgL_setqz00_bglt) CREF(BgL_obj3525z00_2315))->BgL_varz00);
						{	/* Ast/node.scm 177 */
							obj_t BgL_auxz00_13085;

							int BgL_auxz00_13083;

							BgL_auxz00_13085 = (obj_t) (BgL_arg4930z00_2324);
							BgL_auxz00_13083 = (int) (((long) 3));
							STRUCT_SET(BgL_res3526z00_2318, BgL_auxz00_13083,
								BgL_auxz00_13085);
					}}
					{	/* Ast/node.scm 177 */
						BgL_nodez00_bglt BgL_arg4932z00_2326;

						BgL_arg4932z00_2326 =
							(((BgL_setqz00_bglt) CREF(BgL_obj3525z00_2315))->BgL_valuez00);
						{	/* Ast/node.scm 177 */
							obj_t BgL_auxz00_13091;

							int BgL_auxz00_13089;

							BgL_auxz00_13091 = (obj_t) (BgL_arg4932z00_2326);
							BgL_auxz00_13089 = (int) (((long) 4));
							STRUCT_SET(BgL_res3526z00_2318, BgL_auxz00_13089,
								BgL_auxz00_13091);
					}}
					return BgL_res3526z00_2318;
				}
			}
		}
	}



/* struct+object->objec4274 */
	obj_t BGl_structzb2objectzd2ze3objec4274z83zzast_nodez00(obj_t
		BgL_envz00_7584, obj_t BgL_oz00_7585, obj_t BgL_sz00_7586)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{
				BgL_conditionalz00_bglt BgL_oz00_2301;

				obj_t BgL_sz00_2302;

				{	/* Ast/node.scm 184 */
					BgL_conditionalz00_bglt BgL_auxz00_13095;

					BgL_oz00_2301 = (BgL_conditionalz00_bglt) (BgL_oz00_7585);
					BgL_sz00_2302 = BgL_sz00_7586;
					{	/* Ast/node.scm 184 */
						obj_t BgL_arg4923z00_2305;

						BgL_arg4923z00_2305 = STRUCT_REF(BgL_sz00_2302, (int) (((long) 0)));
						{	/* Ast/node.scm 184 */
							BgL_objectz00_bglt BgL_auxz00_13098;

							BgL_auxz00_13098 = (BgL_objectz00_bglt) (BgL_oz00_2301);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13098, BgL_arg4923z00_2305);
					}}
					{
						obj_t BgL_auxz00_13101;

						BgL_auxz00_13101 = STRUCT_REF(BgL_sz00_2302, (int) (((long) 1)));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->BgL_locz00) =
							((obj_t) BgL_auxz00_13101), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13105;

						BgL_auxz00_13105 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2302,
								(int) (((long) 2))));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13105), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13110;

						BgL_auxz00_13110 = STRUCT_REF(BgL_sz00_2302, (int) (((long) 3)));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_13110), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13114;

						BgL_auxz00_13114 = STRUCT_REF(BgL_sz00_2302, (int) (((long) 4)));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->BgL_keyz00) =
							((obj_t) BgL_auxz00_13114), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13118;

						BgL_auxz00_13118 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2302,
								(int) (((long) 5))));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13118), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13123;

						BgL_auxz00_13123 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2302,
								(int) (((long) 6))));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_auxz00_13123), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13128;

						BgL_auxz00_13128 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2302,
								(int) (((long) 7))));
						((((BgL_conditionalz00_bglt) CREF(BgL_oz00_2301))->BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_auxz00_13128), BUNSPEC);
					}
					BgL_auxz00_13095 = BgL_oz00_2301;
					return (obj_t) (BgL_auxz00_13095);
				}
			}
		}
	}



/* object->struct-condi4272 */
	obj_t BGl_objectzd2ze3structzd2condi4272ze3zzast_nodez00(obj_t
		BgL_envz00_7587, obj_t BgL_obj3591z00_7588)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 184 */
			{
				BgL_conditionalz00_bglt BgL_obj3591z00_2281;

				BgL_obj3591z00_2281 = (BgL_conditionalz00_bglt) (BgL_obj3591z00_7588);
				{	/* Ast/node.scm 184 */
					obj_t BgL_res3592z00_2284;

					{	/* Ast/node.scm 184 */
						obj_t BgL_keyz00_5724;

						BgL_keyz00_5724 = CNST_TABLE_REF(((long) 23));
						BgL_res3592z00_2284 =
							make_struct(BgL_keyz00_5724, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/node.scm 184 */
						int BgL_auxz00_13138;

						BgL_auxz00_13138 = (int) (((long) 0));
						STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13138, BFALSE);
					}
					{	/* Ast/node.scm 184 */
						obj_t BgL_arg4909z00_2286;

						{
							BgL_nodez00_bglt BgL_auxz00_13141;

							BgL_auxz00_13141 = (BgL_nodez00_bglt) (BgL_obj3591z00_2281);
							BgL_arg4909z00_2286 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13141))->BgL_locz00);
						}
						{	/* Ast/node.scm 184 */
							int BgL_auxz00_13144;

							BgL_auxz00_13144 = (int) (((long) 1));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13144,
								BgL_arg4909z00_2286);
					}}
					{	/* Ast/node.scm 184 */
						BgL_typez00_bglt BgL_arg4911z00_2288;

						{
							BgL_nodez00_bglt BgL_auxz00_13147;

							BgL_auxz00_13147 = (BgL_nodez00_bglt) (BgL_obj3591z00_2281);
							BgL_arg4911z00_2288 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13147))->BgL_typez00);
						}
						{	/* Ast/node.scm 184 */
							obj_t BgL_auxz00_13152;

							int BgL_auxz00_13150;

							BgL_auxz00_13152 = (obj_t) (BgL_arg4911z00_2288);
							BgL_auxz00_13150 = (int) (((long) 2));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13150,
								BgL_auxz00_13152);
					}}
					{	/* Ast/node.scm 184 */
						obj_t BgL_arg4913z00_2290;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13155;

							BgL_auxz00_13155 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3591z00_2281);
							BgL_arg4913z00_2290 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13155))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 184 */
							int BgL_auxz00_13158;

							BgL_auxz00_13158 = (int) (((long) 3));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13158,
								BgL_arg4913z00_2290);
					}}
					{	/* Ast/node.scm 184 */
						obj_t BgL_arg4915z00_2292;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13161;

							BgL_auxz00_13161 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3591z00_2281);
							BgL_arg4915z00_2292 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13161))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 184 */
							int BgL_auxz00_13164;

							BgL_auxz00_13164 = (int) (((long) 4));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13164,
								BgL_arg4915z00_2292);
					}}
					{	/* Ast/node.scm 184 */
						BgL_nodez00_bglt BgL_arg4917z00_2294;

						BgL_arg4917z00_2294 =
							(((BgL_conditionalz00_bglt) CREF(BgL_obj3591z00_2281))->
							BgL_testz00);
						{	/* Ast/node.scm 184 */
							obj_t BgL_auxz00_13170;

							int BgL_auxz00_13168;

							BgL_auxz00_13170 = (obj_t) (BgL_arg4917z00_2294);
							BgL_auxz00_13168 = (int) (((long) 5));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13168,
								BgL_auxz00_13170);
					}}
					{	/* Ast/node.scm 184 */
						BgL_nodez00_bglt BgL_arg4919z00_2296;

						BgL_arg4919z00_2296 =
							(((BgL_conditionalz00_bglt) CREF(BgL_obj3591z00_2281))->
							BgL_truez00);
						{	/* Ast/node.scm 184 */
							obj_t BgL_auxz00_13176;

							int BgL_auxz00_13174;

							BgL_auxz00_13176 = (obj_t) (BgL_arg4919z00_2296);
							BgL_auxz00_13174 = (int) (((long) 6));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13174,
								BgL_auxz00_13176);
					}}
					{	/* Ast/node.scm 184 */
						BgL_nodez00_bglt BgL_arg4921z00_2298;

						BgL_arg4921z00_2298 =
							(((BgL_conditionalz00_bglt) CREF(BgL_obj3591z00_2281))->
							BgL_falsez00);
						{	/* Ast/node.scm 184 */
							obj_t BgL_auxz00_13182;

							int BgL_auxz00_13180;

							BgL_auxz00_13182 = (obj_t) (BgL_arg4921z00_2298);
							BgL_auxz00_13180 = (int) (((long) 7));
							STRUCT_SET(BgL_res3592z00_2284, BgL_auxz00_13180,
								BgL_auxz00_13182);
					}}
					return BgL_res3592z00_2284;
				}
			}
		}
	}



/* struct+object->objec4270 */
	obj_t BGl_structzb2objectzd2ze3objec4270z83zzast_nodez00(obj_t
		BgL_envz00_7589, obj_t BgL_oz00_7590, obj_t BgL_sz00_7591)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{
				BgL_failz00_bglt BgL_oz00_2269;

				obj_t BgL_sz00_2270;

				{	/* Ast/node.scm 193 */
					BgL_failz00_bglt BgL_auxz00_13186;

					BgL_oz00_2269 = (BgL_failz00_bglt) (BgL_oz00_7590);
					BgL_sz00_2270 = BgL_sz00_7591;
					{	/* Ast/node.scm 193 */
						obj_t BgL_arg4906z00_2273;

						BgL_arg4906z00_2273 = STRUCT_REF(BgL_sz00_2270, (int) (((long) 0)));
						{	/* Ast/node.scm 193 */
							BgL_objectz00_bglt BgL_auxz00_13189;

							BgL_auxz00_13189 = (BgL_objectz00_bglt) (BgL_oz00_2269);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13189, BgL_arg4906z00_2273);
					}}
					{
						obj_t BgL_auxz00_13192;

						BgL_auxz00_13192 = STRUCT_REF(BgL_sz00_2270, (int) (((long) 1)));
						((((BgL_failz00_bglt) CREF(BgL_oz00_2269))->BgL_locz00) =
							((obj_t) BgL_auxz00_13192), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13196;

						BgL_auxz00_13196 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2270,
								(int) (((long) 2))));
						((((BgL_failz00_bglt) CREF(BgL_oz00_2269))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13196), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13201;

						BgL_auxz00_13201 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2270,
								(int) (((long) 3))));
						((((BgL_failz00_bglt) CREF(BgL_oz00_2269))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13201), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13206;

						BgL_auxz00_13206 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2270,
								(int) (((long) 4))));
						((((BgL_failz00_bglt) CREF(BgL_oz00_2269))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13206), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13211;

						BgL_auxz00_13211 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2270,
								(int) (((long) 5))));
						((((BgL_failz00_bglt) CREF(BgL_oz00_2269))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13211), BUNSPEC);
					}
					BgL_auxz00_13186 = BgL_oz00_2269;
					return (obj_t) (BgL_auxz00_13186);
				}
			}
		}
	}



/* object->struct-fail4268 */
	obj_t BGl_objectzd2ze3structzd2fail4268ze3zzast_nodez00(obj_t BgL_envz00_7592,
		obj_t BgL_obj3655z00_7593)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 193 */
			{
				BgL_failz00_bglt BgL_obj3655z00_2253;

				BgL_obj3655z00_2253 = (BgL_failz00_bglt) (BgL_obj3655z00_7593);
				{	/* Ast/node.scm 193 */
					obj_t BgL_res3656z00_2256;

					{	/* Ast/node.scm 193 */
						obj_t BgL_keyz00_5686;

						BgL_keyz00_5686 = CNST_TABLE_REF(((long) 24));
						BgL_res3656z00_2256 =
							make_struct(BgL_keyz00_5686, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Ast/node.scm 193 */
						int BgL_auxz00_13221;

						BgL_auxz00_13221 = (int) (((long) 0));
						STRUCT_SET(BgL_res3656z00_2256, BgL_auxz00_13221, BFALSE);
					}
					{	/* Ast/node.scm 193 */
						obj_t BgL_arg4896z00_2258;

						{
							BgL_nodez00_bglt BgL_auxz00_13224;

							BgL_auxz00_13224 = (BgL_nodez00_bglt) (BgL_obj3655z00_2253);
							BgL_arg4896z00_2258 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13224))->BgL_locz00);
						}
						{	/* Ast/node.scm 193 */
							int BgL_auxz00_13227;

							BgL_auxz00_13227 = (int) (((long) 1));
							STRUCT_SET(BgL_res3656z00_2256, BgL_auxz00_13227,
								BgL_arg4896z00_2258);
					}}
					{	/* Ast/node.scm 193 */
						BgL_typez00_bglt BgL_arg4898z00_2260;

						{
							BgL_nodez00_bglt BgL_auxz00_13230;

							BgL_auxz00_13230 = (BgL_nodez00_bglt) (BgL_obj3655z00_2253);
							BgL_arg4898z00_2260 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13230))->BgL_typez00);
						}
						{	/* Ast/node.scm 193 */
							obj_t BgL_auxz00_13235;

							int BgL_auxz00_13233;

							BgL_auxz00_13235 = (obj_t) (BgL_arg4898z00_2260);
							BgL_auxz00_13233 = (int) (((long) 2));
							STRUCT_SET(BgL_res3656z00_2256, BgL_auxz00_13233,
								BgL_auxz00_13235);
					}}
					{	/* Ast/node.scm 193 */
						BgL_nodez00_bglt BgL_arg4900z00_2262;

						BgL_arg4900z00_2262 =
							(((BgL_failz00_bglt) CREF(BgL_obj3655z00_2253))->BgL_procz00);
						{	/* Ast/node.scm 193 */
							obj_t BgL_auxz00_13241;

							int BgL_auxz00_13239;

							BgL_auxz00_13241 = (obj_t) (BgL_arg4900z00_2262);
							BgL_auxz00_13239 = (int) (((long) 3));
							STRUCT_SET(BgL_res3656z00_2256, BgL_auxz00_13239,
								BgL_auxz00_13241);
					}}
					{	/* Ast/node.scm 193 */
						BgL_nodez00_bglt BgL_arg4902z00_2264;

						BgL_arg4902z00_2264 =
							(((BgL_failz00_bglt) CREF(BgL_obj3655z00_2253))->BgL_msgz00);
						{	/* Ast/node.scm 193 */
							obj_t BgL_auxz00_13247;

							int BgL_auxz00_13245;

							BgL_auxz00_13247 = (obj_t) (BgL_arg4902z00_2264);
							BgL_auxz00_13245 = (int) (((long) 4));
							STRUCT_SET(BgL_res3656z00_2256, BgL_auxz00_13245,
								BgL_auxz00_13247);
					}}
					{	/* Ast/node.scm 193 */
						BgL_nodez00_bglt BgL_arg4904z00_2266;

						BgL_arg4904z00_2266 =
							(((BgL_failz00_bglt) CREF(BgL_obj3655z00_2253))->BgL_objz00);
						{	/* Ast/node.scm 193 */
							obj_t BgL_auxz00_13253;

							int BgL_auxz00_13251;

							BgL_auxz00_13253 = (obj_t) (BgL_arg4904z00_2266);
							BgL_auxz00_13251 = (int) (((long) 5));
							STRUCT_SET(BgL_res3656z00_2256, BgL_auxz00_13251,
								BgL_auxz00_13253);
					}}
					return BgL_res3656z00_2256;
				}
			}
		}
	}



/* struct+object->objec4266 */
	obj_t BGl_structzb2objectzd2ze3objec4266z83zzast_nodez00(obj_t
		BgL_envz00_7594, obj_t BgL_oz00_7595, obj_t BgL_sz00_7596)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{
				BgL_selectz00_bglt BgL_oz00_2239;

				obj_t BgL_sz00_2240;

				{	/* Ast/node.scm 200 */
					BgL_selectz00_bglt BgL_auxz00_13257;

					BgL_oz00_2239 = (BgL_selectz00_bglt) (BgL_oz00_7595);
					BgL_sz00_2240 = BgL_sz00_7596;
					{	/* Ast/node.scm 200 */
						obj_t BgL_arg4893z00_2243;

						BgL_arg4893z00_2243 = STRUCT_REF(BgL_sz00_2240, (int) (((long) 0)));
						{	/* Ast/node.scm 200 */
							BgL_objectz00_bglt BgL_auxz00_13260;

							BgL_auxz00_13260 = (BgL_objectz00_bglt) (BgL_oz00_2239);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13260, BgL_arg4893z00_2243);
					}}
					{
						obj_t BgL_auxz00_13263;

						BgL_auxz00_13263 = STRUCT_REF(BgL_sz00_2240, (int) (((long) 1)));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->BgL_locz00) =
							((obj_t) BgL_auxz00_13263), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13267;

						BgL_auxz00_13267 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2240,
								(int) (((long) 2))));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13267), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13272;

						BgL_auxz00_13272 = STRUCT_REF(BgL_sz00_2240, (int) (((long) 3)));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_13272), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13276;

						BgL_auxz00_13276 = STRUCT_REF(BgL_sz00_2240, (int) (((long) 4)));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->BgL_keyz00) =
							((obj_t) BgL_auxz00_13276), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13280;

						BgL_auxz00_13280 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2240,
								(int) (((long) 5))));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13280), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13285;

						BgL_auxz00_13285 = STRUCT_REF(BgL_sz00_2240, (int) (((long) 6)));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->BgL_clausesz00) =
							((obj_t) BgL_auxz00_13285), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13289;

						BgL_auxz00_13289 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2240,
								(int) (((long) 7))));
						((((BgL_selectz00_bglt) CREF(BgL_oz00_2239))->BgL_itemzd2typezd2) =
							((BgL_typez00_bglt) BgL_auxz00_13289), BUNSPEC);
					}
					BgL_auxz00_13257 = BgL_oz00_2239;
					return (obj_t) (BgL_auxz00_13257);
				}
			}
		}
	}



/* object->struct-selec4264 */
	obj_t BGl_objectzd2ze3structzd2selec4264ze3zzast_nodez00(obj_t
		BgL_envz00_7597, obj_t BgL_obj3720z00_7598)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 200 */
			{
				BgL_selectz00_bglt BgL_obj3720z00_2219;

				BgL_obj3720z00_2219 = (BgL_selectz00_bglt) (BgL_obj3720z00_7598);
				{	/* Ast/node.scm 200 */
					obj_t BgL_res3721z00_2222;

					{	/* Ast/node.scm 200 */
						obj_t BgL_keyz00_5636;

						BgL_keyz00_5636 = CNST_TABLE_REF(((long) 25));
						BgL_res3721z00_2222 =
							make_struct(BgL_keyz00_5636, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/node.scm 200 */
						int BgL_auxz00_13299;

						BgL_auxz00_13299 = (int) (((long) 0));
						STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13299, BFALSE);
					}
					{	/* Ast/node.scm 200 */
						obj_t BgL_arg4879z00_2224;

						{
							BgL_nodez00_bglt BgL_auxz00_13302;

							BgL_auxz00_13302 = (BgL_nodez00_bglt) (BgL_obj3720z00_2219);
							BgL_arg4879z00_2224 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13302))->BgL_locz00);
						}
						{	/* Ast/node.scm 200 */
							int BgL_auxz00_13305;

							BgL_auxz00_13305 = (int) (((long) 1));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13305,
								BgL_arg4879z00_2224);
					}}
					{	/* Ast/node.scm 200 */
						BgL_typez00_bglt BgL_arg4881z00_2226;

						{
							BgL_nodez00_bglt BgL_auxz00_13308;

							BgL_auxz00_13308 = (BgL_nodez00_bglt) (BgL_obj3720z00_2219);
							BgL_arg4881z00_2226 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13308))->BgL_typez00);
						}
						{	/* Ast/node.scm 200 */
							obj_t BgL_auxz00_13313;

							int BgL_auxz00_13311;

							BgL_auxz00_13313 = (obj_t) (BgL_arg4881z00_2226);
							BgL_auxz00_13311 = (int) (((long) 2));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13311,
								BgL_auxz00_13313);
					}}
					{	/* Ast/node.scm 200 */
						obj_t BgL_arg4883z00_2228;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13316;

							BgL_auxz00_13316 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3720z00_2219);
							BgL_arg4883z00_2228 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13316))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 200 */
							int BgL_auxz00_13319;

							BgL_auxz00_13319 = (int) (((long) 3));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13319,
								BgL_arg4883z00_2228);
					}}
					{	/* Ast/node.scm 200 */
						obj_t BgL_arg4885z00_2230;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13322;

							BgL_auxz00_13322 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3720z00_2219);
							BgL_arg4885z00_2230 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13322))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 200 */
							int BgL_auxz00_13325;

							BgL_auxz00_13325 = (int) (((long) 4));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13325,
								BgL_arg4885z00_2230);
					}}
					{	/* Ast/node.scm 200 */
						BgL_nodez00_bglt BgL_arg4887z00_2232;

						BgL_arg4887z00_2232 =
							(((BgL_selectz00_bglt) CREF(BgL_obj3720z00_2219))->BgL_testz00);
						{	/* Ast/node.scm 200 */
							obj_t BgL_auxz00_13331;

							int BgL_auxz00_13329;

							BgL_auxz00_13331 = (obj_t) (BgL_arg4887z00_2232);
							BgL_auxz00_13329 = (int) (((long) 5));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13329,
								BgL_auxz00_13331);
					}}
					{	/* Ast/node.scm 200 */
						obj_t BgL_arg4889z00_2234;

						BgL_arg4889z00_2234 =
							(((BgL_selectz00_bglt) CREF(BgL_obj3720z00_2219))->
							BgL_clausesz00);
						{	/* Ast/node.scm 200 */
							int BgL_auxz00_13335;

							BgL_auxz00_13335 = (int) (((long) 6));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13335,
								BgL_arg4889z00_2234);
					}}
					{	/* Ast/node.scm 200 */
						BgL_typez00_bglt BgL_arg4891z00_2236;

						BgL_arg4891z00_2236 =
							(((BgL_selectz00_bglt) CREF(BgL_obj3720z00_2219))->
							BgL_itemzd2typezd2);
						{	/* Ast/node.scm 200 */
							obj_t BgL_auxz00_13341;

							int BgL_auxz00_13339;

							BgL_auxz00_13341 = (obj_t) (BgL_arg4891z00_2236);
							BgL_auxz00_13339 = (int) (((long) 7));
							STRUCT_SET(BgL_res3721z00_2222, BgL_auxz00_13339,
								BgL_auxz00_13341);
					}}
					return BgL_res3721z00_2222;
				}
			}
		}
	}



/* struct+object->objec4262 */
	obj_t BGl_structzb2objectzd2ze3objec4262z83zzast_nodez00(obj_t
		BgL_envz00_7599, obj_t BgL_oz00_7600, obj_t BgL_sz00_7601)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{
				BgL_letzd2funzd2_bglt BgL_oz00_2206;

				obj_t BgL_sz00_2207;

				{	/* Ast/node.scm 209 */
					BgL_letzd2funzd2_bglt BgL_auxz00_13345;

					BgL_oz00_2206 = (BgL_letzd2funzd2_bglt) (BgL_oz00_7600);
					BgL_sz00_2207 = BgL_sz00_7601;
					{	/* Ast/node.scm 209 */
						obj_t BgL_arg4876z00_2210;

						BgL_arg4876z00_2210 = STRUCT_REF(BgL_sz00_2207, (int) (((long) 0)));
						{	/* Ast/node.scm 209 */
							BgL_objectz00_bglt BgL_auxz00_13348;

							BgL_auxz00_13348 = (BgL_objectz00_bglt) (BgL_oz00_2206);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13348, BgL_arg4876z00_2210);
					}}
					{
						obj_t BgL_auxz00_13351;

						BgL_auxz00_13351 = STRUCT_REF(BgL_sz00_2207, (int) (((long) 1)));
						((((BgL_letzd2funzd2_bglt) CREF(BgL_oz00_2206))->BgL_locz00) =
							((obj_t) BgL_auxz00_13351), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13355;

						BgL_auxz00_13355 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2207,
								(int) (((long) 2))));
						((((BgL_letzd2funzd2_bglt) CREF(BgL_oz00_2206))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13355), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13360;

						BgL_auxz00_13360 = STRUCT_REF(BgL_sz00_2207, (int) (((long) 3)));
						((((BgL_letzd2funzd2_bglt) CREF(BgL_oz00_2206))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_13360), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13364;

						BgL_auxz00_13364 = STRUCT_REF(BgL_sz00_2207, (int) (((long) 4)));
						((((BgL_letzd2funzd2_bglt) CREF(BgL_oz00_2206))->BgL_keyz00) =
							((obj_t) BgL_auxz00_13364), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13368;

						BgL_auxz00_13368 = STRUCT_REF(BgL_sz00_2207, (int) (((long) 5)));
						((((BgL_letzd2funzd2_bglt) CREF(BgL_oz00_2206))->BgL_localsz00) =
							((obj_t) BgL_auxz00_13368), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13372;

						BgL_auxz00_13372 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2207,
								(int) (((long) 6))));
						((((BgL_letzd2funzd2_bglt) CREF(BgL_oz00_2206))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13372), BUNSPEC);
					}
					BgL_auxz00_13345 = BgL_oz00_2206;
					return (obj_t) (BgL_auxz00_13345);
				}
			}
		}
	}



/* object->struct-let-f4260 */
	obj_t BGl_objectzd2ze3structzd2letzd2f4260z31zzast_nodez00(obj_t
		BgL_envz00_7602, obj_t BgL_obj3790z00_7603)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 209 */
			{
				BgL_letzd2funzd2_bglt BgL_obj3790z00_2188;

				BgL_obj3790z00_2188 = (BgL_letzd2funzd2_bglt) (BgL_obj3790z00_7603);
				{	/* Ast/node.scm 209 */
					obj_t BgL_res3791z00_2191;

					{	/* Ast/node.scm 209 */
						obj_t BgL_keyz00_5592;

						BgL_keyz00_5592 = CNST_TABLE_REF(((long) 26));
						BgL_res3791z00_2191 =
							make_struct(BgL_keyz00_5592, (int) (((long) 7)), BUNSPEC);
					}
					{	/* Ast/node.scm 209 */
						int BgL_auxz00_13382;

						BgL_auxz00_13382 = (int) (((long) 0));
						STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13382, BFALSE);
					}
					{	/* Ast/node.scm 209 */
						obj_t BgL_arg4864z00_2193;

						{
							BgL_nodez00_bglt BgL_auxz00_13385;

							BgL_auxz00_13385 = (BgL_nodez00_bglt) (BgL_obj3790z00_2188);
							BgL_arg4864z00_2193 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13385))->BgL_locz00);
						}
						{	/* Ast/node.scm 209 */
							int BgL_auxz00_13388;

							BgL_auxz00_13388 = (int) (((long) 1));
							STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13388,
								BgL_arg4864z00_2193);
					}}
					{	/* Ast/node.scm 209 */
						BgL_typez00_bglt BgL_arg4866z00_2195;

						{
							BgL_nodez00_bglt BgL_auxz00_13391;

							BgL_auxz00_13391 = (BgL_nodez00_bglt) (BgL_obj3790z00_2188);
							BgL_arg4866z00_2195 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13391))->BgL_typez00);
						}
						{	/* Ast/node.scm 209 */
							obj_t BgL_auxz00_13396;

							int BgL_auxz00_13394;

							BgL_auxz00_13396 = (obj_t) (BgL_arg4866z00_2195);
							BgL_auxz00_13394 = (int) (((long) 2));
							STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13394,
								BgL_auxz00_13396);
					}}
					{	/* Ast/node.scm 209 */
						obj_t BgL_arg4868z00_2197;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13399;

							BgL_auxz00_13399 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3790z00_2188);
							BgL_arg4868z00_2197 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13399))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 209 */
							int BgL_auxz00_13402;

							BgL_auxz00_13402 = (int) (((long) 3));
							STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13402,
								BgL_arg4868z00_2197);
					}}
					{	/* Ast/node.scm 209 */
						obj_t BgL_arg4870z00_2199;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13405;

							BgL_auxz00_13405 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3790z00_2188);
							BgL_arg4870z00_2199 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13405))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 209 */
							int BgL_auxz00_13408;

							BgL_auxz00_13408 = (int) (((long) 4));
							STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13408,
								BgL_arg4870z00_2199);
					}}
					{	/* Ast/node.scm 209 */
						obj_t BgL_arg4872z00_2201;

						BgL_arg4872z00_2201 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_obj3790z00_2188))->
							BgL_localsz00);
						{	/* Ast/node.scm 209 */
							int BgL_auxz00_13412;

							BgL_auxz00_13412 = (int) (((long) 5));
							STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13412,
								BgL_arg4872z00_2201);
					}}
					{	/* Ast/node.scm 209 */
						BgL_nodez00_bglt BgL_arg4874z00_2203;

						BgL_arg4874z00_2203 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_obj3790z00_2188))->
							BgL_bodyz00);
						{	/* Ast/node.scm 209 */
							obj_t BgL_auxz00_13418;

							int BgL_auxz00_13416;

							BgL_auxz00_13418 = (obj_t) (BgL_arg4874z00_2203);
							BgL_auxz00_13416 = (int) (((long) 6));
							STRUCT_SET(BgL_res3791z00_2191, BgL_auxz00_13416,
								BgL_auxz00_13418);
					}}
					return BgL_res3791z00_2191;
				}
			}
		}
	}



/* struct+object->objec4258 */
	obj_t BGl_structzb2objectzd2ze3objec4258z83zzast_nodez00(obj_t
		BgL_envz00_7604, obj_t BgL_oz00_7605, obj_t BgL_sz00_7606)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{
				BgL_letzd2varzd2_bglt BgL_oz00_2174;

				obj_t BgL_sz00_2175;

				{	/* Ast/node.scm 216 */
					BgL_letzd2varzd2_bglt BgL_auxz00_13422;

					BgL_oz00_2174 = (BgL_letzd2varzd2_bglt) (BgL_oz00_7605);
					BgL_sz00_2175 = BgL_sz00_7606;
					{	/* Ast/node.scm 216 */
						obj_t BgL_arg4861z00_2178;

						BgL_arg4861z00_2178 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 0)));
						{	/* Ast/node.scm 216 */
							BgL_objectz00_bglt BgL_auxz00_13425;

							BgL_auxz00_13425 = (BgL_objectz00_bglt) (BgL_oz00_2174);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13425, BgL_arg4861z00_2178);
					}}
					{
						obj_t BgL_auxz00_13428;

						BgL_auxz00_13428 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 1)));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->BgL_locz00) =
							((obj_t) BgL_auxz00_13428), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13432;

						BgL_auxz00_13432 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2175,
								(int) (((long) 2))));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13432), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13437;

						BgL_auxz00_13437 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 3)));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_13437), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13441;

						BgL_auxz00_13441 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 4)));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->BgL_keyz00) =
							((obj_t) BgL_auxz00_13441), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13445;

						BgL_auxz00_13445 = STRUCT_REF(BgL_sz00_2175, (int) (((long) 5)));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->BgL_bindingsz00) =
							((obj_t) BgL_auxz00_13445), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13449;

						BgL_auxz00_13449 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2175,
								(int) (((long) 6))));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13449), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_13454;

						BgL_auxz00_13454 =
							CBOOL(STRUCT_REF(BgL_sz00_2175, (int) (((long) 7))));
						((((BgL_letzd2varzd2_bglt) CREF(BgL_oz00_2174))->
								BgL_removablezf3zf3) = ((bool_t) BgL_auxz00_13454), BUNSPEC);
					}
					BgL_auxz00_13422 = BgL_oz00_2174;
					return (obj_t) (BgL_auxz00_13422);
				}
			}
		}
	}



/* object->struct-let-v4256 */
	obj_t BGl_objectzd2ze3structzd2letzd2v4256z31zzast_nodez00(obj_t
		BgL_envz00_7607, obj_t BgL_obj3862z00_7608)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 216 */
			{
				BgL_letzd2varzd2_bglt BgL_obj3862z00_2154;

				BgL_obj3862z00_2154 = (BgL_letzd2varzd2_bglt) (BgL_obj3862z00_7608);
				{	/* Ast/node.scm 216 */
					obj_t BgL_res3863z00_2157;

					{	/* Ast/node.scm 216 */
						obj_t BgL_keyz00_5542;

						BgL_keyz00_5542 = CNST_TABLE_REF(((long) 27));
						BgL_res3863z00_2157 =
							make_struct(BgL_keyz00_5542, (int) (((long) 8)), BUNSPEC);
					}
					{	/* Ast/node.scm 216 */
						int BgL_auxz00_13464;

						BgL_auxz00_13464 = (int) (((long) 0));
						STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13464, BFALSE);
					}
					{	/* Ast/node.scm 216 */
						obj_t BgL_arg4847z00_2159;

						{
							BgL_nodez00_bglt BgL_auxz00_13467;

							BgL_auxz00_13467 = (BgL_nodez00_bglt) (BgL_obj3862z00_2154);
							BgL_arg4847z00_2159 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13467))->BgL_locz00);
						}
						{	/* Ast/node.scm 216 */
							int BgL_auxz00_13470;

							BgL_auxz00_13470 = (int) (((long) 1));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13470,
								BgL_arg4847z00_2159);
					}}
					{	/* Ast/node.scm 216 */
						BgL_typez00_bglt BgL_arg4849z00_2161;

						{
							BgL_nodez00_bglt BgL_auxz00_13473;

							BgL_auxz00_13473 = (BgL_nodez00_bglt) (BgL_obj3862z00_2154);
							BgL_arg4849z00_2161 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13473))->BgL_typez00);
						}
						{	/* Ast/node.scm 216 */
							obj_t BgL_auxz00_13478;

							int BgL_auxz00_13476;

							BgL_auxz00_13478 = (obj_t) (BgL_arg4849z00_2161);
							BgL_auxz00_13476 = (int) (((long) 2));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13476,
								BgL_auxz00_13478);
					}}
					{	/* Ast/node.scm 216 */
						obj_t BgL_arg4851z00_2163;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13481;

							BgL_auxz00_13481 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3862z00_2154);
							BgL_arg4851z00_2163 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13481))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 216 */
							int BgL_auxz00_13484;

							BgL_auxz00_13484 = (int) (((long) 3));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13484,
								BgL_arg4851z00_2163);
					}}
					{	/* Ast/node.scm 216 */
						obj_t BgL_arg4853z00_2165;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13487;

							BgL_auxz00_13487 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj3862z00_2154);
							BgL_arg4853z00_2165 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13487))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 216 */
							int BgL_auxz00_13490;

							BgL_auxz00_13490 = (int) (((long) 4));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13490,
								BgL_arg4853z00_2165);
					}}
					{	/* Ast/node.scm 216 */
						obj_t BgL_arg4855z00_2167;

						BgL_arg4855z00_2167 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_obj3862z00_2154))->
							BgL_bindingsz00);
						{	/* Ast/node.scm 216 */
							int BgL_auxz00_13494;

							BgL_auxz00_13494 = (int) (((long) 5));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13494,
								BgL_arg4855z00_2167);
					}}
					{	/* Ast/node.scm 216 */
						BgL_nodez00_bglt BgL_arg4857z00_2169;

						BgL_arg4857z00_2169 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_obj3862z00_2154))->
							BgL_bodyz00);
						{	/* Ast/node.scm 216 */
							obj_t BgL_auxz00_13500;

							int BgL_auxz00_13498;

							BgL_auxz00_13500 = (obj_t) (BgL_arg4857z00_2169);
							BgL_auxz00_13498 = (int) (((long) 6));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13498,
								BgL_auxz00_13500);
					}}
					{	/* Ast/node.scm 216 */
						bool_t BgL_arg4859z00_2171;

						BgL_arg4859z00_2171 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_obj3862z00_2154))->
							BgL_removablezf3zf3);
						{	/* Ast/node.scm 216 */
							obj_t BgL_auxz00_13506;

							int BgL_auxz00_13504;

							BgL_auxz00_13506 = BBOOL(BgL_arg4859z00_2171);
							BgL_auxz00_13504 = (int) (((long) 7));
							STRUCT_SET(BgL_res3863z00_2157, BgL_auxz00_13504,
								BgL_auxz00_13506);
					}}
					return BgL_res3863z00_2157;
				}
			}
		}
	}



/* struct+object->objec4254 */
	obj_t BGl_structzb2objectzd2ze3objec4254z83zzast_nodez00(obj_t
		BgL_envz00_7609, obj_t BgL_oz00_7610, obj_t BgL_sz00_7611)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_oz00_2143;

				obj_t BgL_sz00_2144;

				{	/* Ast/node.scm 225 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_13510;

					BgL_oz00_2143 = (BgL_setzd2exzd2itz00_bglt) (BgL_oz00_7610);
					BgL_sz00_2144 = BgL_sz00_7611;
					{	/* Ast/node.scm 225 */
						obj_t BgL_arg4844z00_2147;

						BgL_arg4844z00_2147 = STRUCT_REF(BgL_sz00_2144, (int) (((long) 0)));
						{	/* Ast/node.scm 225 */
							BgL_objectz00_bglt BgL_auxz00_13513;

							BgL_auxz00_13513 = (BgL_objectz00_bglt) (BgL_oz00_2143);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13513, BgL_arg4844z00_2147);
					}}
					{
						obj_t BgL_auxz00_13516;

						BgL_auxz00_13516 = STRUCT_REF(BgL_sz00_2144, (int) (((long) 1)));
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_oz00_2143))->BgL_locz00) =
							((obj_t) BgL_auxz00_13516), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13520;

						BgL_auxz00_13520 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2144,
								(int) (((long) 2))));
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_oz00_2143))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13520), BUNSPEC);
					}
					{
						BgL_varz00_bglt BgL_auxz00_13525;

						BgL_auxz00_13525 =
							(BgL_varz00_bglt) (STRUCT_REF(BgL_sz00_2144, (int) (((long) 3))));
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_oz00_2143))->BgL_varz00) =
							((BgL_varz00_bglt) BgL_auxz00_13525), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13530;

						BgL_auxz00_13530 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2144,
								(int) (((long) 4))));
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_oz00_2143))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13530), BUNSPEC);
					}
					BgL_auxz00_13510 = BgL_oz00_2143;
					return (obj_t) (BgL_auxz00_13510);
				}
			}
		}
	}



/* object->struct-set-e4252 */
	obj_t BGl_objectzd2ze3structzd2setzd2e4252z31zzast_nodez00(obj_t
		BgL_envz00_7612, obj_t BgL_obj3920z00_7613)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 225 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_obj3920z00_2129;

				BgL_obj3920z00_2129 = (BgL_setzd2exzd2itz00_bglt) (BgL_obj3920z00_7613);
				{	/* Ast/node.scm 225 */
					obj_t BgL_res3921z00_2132;

					{	/* Ast/node.scm 225 */
						obj_t BgL_keyz00_5510;

						BgL_keyz00_5510 = CNST_TABLE_REF(((long) 28));
						BgL_res3921z00_2132 =
							make_struct(BgL_keyz00_5510, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Ast/node.scm 225 */
						int BgL_auxz00_13540;

						BgL_auxz00_13540 = (int) (((long) 0));
						STRUCT_SET(BgL_res3921z00_2132, BgL_auxz00_13540, BFALSE);
					}
					{	/* Ast/node.scm 225 */
						obj_t BgL_arg4836z00_2134;

						{
							BgL_nodez00_bglt BgL_auxz00_13543;

							BgL_auxz00_13543 = (BgL_nodez00_bglt) (BgL_obj3920z00_2129);
							BgL_arg4836z00_2134 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13543))->BgL_locz00);
						}
						{	/* Ast/node.scm 225 */
							int BgL_auxz00_13546;

							BgL_auxz00_13546 = (int) (((long) 1));
							STRUCT_SET(BgL_res3921z00_2132, BgL_auxz00_13546,
								BgL_arg4836z00_2134);
					}}
					{	/* Ast/node.scm 225 */
						BgL_typez00_bglt BgL_arg4838z00_2136;

						{
							BgL_nodez00_bglt BgL_auxz00_13549;

							BgL_auxz00_13549 = (BgL_nodez00_bglt) (BgL_obj3920z00_2129);
							BgL_arg4838z00_2136 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13549))->BgL_typez00);
						}
						{	/* Ast/node.scm 225 */
							obj_t BgL_auxz00_13554;

							int BgL_auxz00_13552;

							BgL_auxz00_13554 = (obj_t) (BgL_arg4838z00_2136);
							BgL_auxz00_13552 = (int) (((long) 2));
							STRUCT_SET(BgL_res3921z00_2132, BgL_auxz00_13552,
								BgL_auxz00_13554);
					}}
					{	/* Ast/node.scm 225 */
						BgL_varz00_bglt BgL_arg4840z00_2138;

						BgL_arg4840z00_2138 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_obj3920z00_2129))->
							BgL_varz00);
						{	/* Ast/node.scm 225 */
							obj_t BgL_auxz00_13560;

							int BgL_auxz00_13558;

							BgL_auxz00_13560 = (obj_t) (BgL_arg4840z00_2138);
							BgL_auxz00_13558 = (int) (((long) 3));
							STRUCT_SET(BgL_res3921z00_2132, BgL_auxz00_13558,
								BgL_auxz00_13560);
					}}
					{	/* Ast/node.scm 225 */
						BgL_nodez00_bglt BgL_arg4842z00_2140;

						BgL_arg4842z00_2140 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_obj3920z00_2129))->
							BgL_bodyz00);
						{	/* Ast/node.scm 225 */
							obj_t BgL_auxz00_13566;

							int BgL_auxz00_13564;

							BgL_auxz00_13566 = (obj_t) (BgL_arg4842z00_2140);
							BgL_auxz00_13564 = (int) (((long) 4));
							STRUCT_SET(BgL_res3921z00_2132, BgL_auxz00_13564,
								BgL_auxz00_13566);
					}}
					return BgL_res3921z00_2132;
				}
			}
		}
	}



/* struct+object->objec4250 */
	obj_t BGl_structzb2objectzd2ze3objec4250z83zzast_nodez00(obj_t
		BgL_envz00_7614, obj_t BgL_oz00_7615, obj_t BgL_sz00_7616)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_oz00_2118;

				obj_t BgL_sz00_2119;

				{	/* Ast/node.scm 232 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_13570;

					BgL_oz00_2118 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_oz00_7615);
					BgL_sz00_2119 = BgL_sz00_7616;
					{	/* Ast/node.scm 232 */
						obj_t BgL_arg4833z00_2122;

						BgL_arg4833z00_2122 = STRUCT_REF(BgL_sz00_2119, (int) (((long) 0)));
						{	/* Ast/node.scm 232 */
							BgL_objectz00_bglt BgL_auxz00_13573;

							BgL_auxz00_13573 = (BgL_objectz00_bglt) (BgL_oz00_2118);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13573, BgL_arg4833z00_2122);
					}}
					{
						obj_t BgL_auxz00_13576;

						BgL_auxz00_13576 = STRUCT_REF(BgL_sz00_2119, (int) (((long) 1)));
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_oz00_2118))->BgL_locz00) =
							((obj_t) BgL_auxz00_13576), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13580;

						BgL_auxz00_13580 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2119,
								(int) (((long) 2))));
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_oz00_2118))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13580), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13585;

						BgL_auxz00_13585 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2119,
								(int) (((long) 3))));
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_oz00_2118))->BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_auxz00_13585), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13590;

						BgL_auxz00_13590 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2119,
								(int) (((long) 4))));
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_oz00_2118))->
								BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_13590), BUNSPEC);
					}
					BgL_auxz00_13570 = BgL_oz00_2118;
					return (obj_t) (BgL_auxz00_13570);
				}
			}
		}
	}



/* object->struct-jump-4248 */
	obj_t BGl_objectzd2ze3structzd2jumpzd24248z31zzast_nodez00(obj_t
		BgL_envz00_7617, obj_t BgL_obj3966z00_7618)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 232 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_obj3966z00_2104;

				BgL_obj3966z00_2104 =
					(BgL_jumpzd2exzd2itz00_bglt) (BgL_obj3966z00_7618);
				{	/* Ast/node.scm 232 */
					obj_t BgL_res3967z00_2107;

					{	/* Ast/node.scm 232 */
						obj_t BgL_keyz00_5478;

						BgL_keyz00_5478 = CNST_TABLE_REF(((long) 29));
						BgL_res3967z00_2107 =
							make_struct(BgL_keyz00_5478, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Ast/node.scm 232 */
						int BgL_auxz00_13600;

						BgL_auxz00_13600 = (int) (((long) 0));
						STRUCT_SET(BgL_res3967z00_2107, BgL_auxz00_13600, BFALSE);
					}
					{	/* Ast/node.scm 232 */
						obj_t BgL_arg4825z00_2109;

						{
							BgL_nodez00_bglt BgL_auxz00_13603;

							BgL_auxz00_13603 = (BgL_nodez00_bglt) (BgL_obj3966z00_2104);
							BgL_arg4825z00_2109 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13603))->BgL_locz00);
						}
						{	/* Ast/node.scm 232 */
							int BgL_auxz00_13606;

							BgL_auxz00_13606 = (int) (((long) 1));
							STRUCT_SET(BgL_res3967z00_2107, BgL_auxz00_13606,
								BgL_arg4825z00_2109);
					}}
					{	/* Ast/node.scm 232 */
						BgL_typez00_bglt BgL_arg4827z00_2111;

						{
							BgL_nodez00_bglt BgL_auxz00_13609;

							BgL_auxz00_13609 = (BgL_nodez00_bglt) (BgL_obj3966z00_2104);
							BgL_arg4827z00_2111 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13609))->BgL_typez00);
						}
						{	/* Ast/node.scm 232 */
							obj_t BgL_auxz00_13614;

							int BgL_auxz00_13612;

							BgL_auxz00_13614 = (obj_t) (BgL_arg4827z00_2111);
							BgL_auxz00_13612 = (int) (((long) 2));
							STRUCT_SET(BgL_res3967z00_2107, BgL_auxz00_13612,
								BgL_auxz00_13614);
					}}
					{	/* Ast/node.scm 232 */
						BgL_nodez00_bglt BgL_arg4829z00_2113;

						BgL_arg4829z00_2113 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_obj3966z00_2104))->
							BgL_exitz00);
						{	/* Ast/node.scm 232 */
							obj_t BgL_auxz00_13620;

							int BgL_auxz00_13618;

							BgL_auxz00_13620 = (obj_t) (BgL_arg4829z00_2113);
							BgL_auxz00_13618 = (int) (((long) 3));
							STRUCT_SET(BgL_res3967z00_2107, BgL_auxz00_13618,
								BgL_auxz00_13620);
					}}
					{	/* Ast/node.scm 232 */
						BgL_nodez00_bglt BgL_arg4831z00_2115;

						BgL_arg4831z00_2115 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_obj3966z00_2104))->
							BgL_valuez00);
						{	/* Ast/node.scm 232 */
							obj_t BgL_auxz00_13626;

							int BgL_auxz00_13624;

							BgL_auxz00_13626 = (obj_t) (BgL_arg4831z00_2115);
							BgL_auxz00_13624 = (int) (((long) 4));
							STRUCT_SET(BgL_res3967z00_2107, BgL_auxz00_13624,
								BgL_auxz00_13626);
					}}
					return BgL_res3967z00_2107;
				}
			}
		}
	}



/* struct+object->objec4246 */
	obj_t BGl_structzb2objectzd2ze3objec4246z83zzast_nodez00(obj_t
		BgL_envz00_7619, obj_t BgL_oz00_7620, obj_t BgL_sz00_7621)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{
				BgL_makezd2boxzd2_bglt BgL_oz00_2092;

				obj_t BgL_sz00_2093;

				{	/* Ast/node.scm 239 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_13630;

					BgL_oz00_2092 = (BgL_makezd2boxzd2_bglt) (BgL_oz00_7620);
					BgL_sz00_2093 = BgL_sz00_7621;
					{	/* Ast/node.scm 239 */
						obj_t BgL_arg4822z00_2096;

						BgL_arg4822z00_2096 = STRUCT_REF(BgL_sz00_2093, (int) (((long) 0)));
						{	/* Ast/node.scm 239 */
							BgL_objectz00_bglt BgL_auxz00_13633;

							BgL_auxz00_13633 = (BgL_objectz00_bglt) (BgL_oz00_2092);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13633, BgL_arg4822z00_2096);
					}}
					{
						obj_t BgL_auxz00_13636;

						BgL_auxz00_13636 = STRUCT_REF(BgL_sz00_2093, (int) (((long) 1)));
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_oz00_2092))->BgL_locz00) =
							((obj_t) BgL_auxz00_13636), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13640;

						BgL_auxz00_13640 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2093,
								(int) (((long) 2))));
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_oz00_2092))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13640), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13645;

						BgL_auxz00_13645 = STRUCT_REF(BgL_sz00_2093, (int) (((long) 3)));
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_oz00_2092))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_13645), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13649;

						BgL_auxz00_13649 = STRUCT_REF(BgL_sz00_2093, (int) (((long) 4)));
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_oz00_2092))->BgL_keyz00) =
							((obj_t) BgL_auxz00_13649), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13653;

						BgL_auxz00_13653 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2093,
								(int) (((long) 5))));
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_oz00_2092))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_auxz00_13653), BUNSPEC);
					}
					BgL_auxz00_13630 = BgL_oz00_2092;
					return (obj_t) (BgL_auxz00_13630);
				}
			}
		}
	}



/* object->struct-make-4244 */
	obj_t BGl_objectzd2ze3structzd2makezd24244z31zzast_nodez00(obj_t
		BgL_envz00_7622, obj_t BgL_obj4018z00_7623)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 239 */
			{
				BgL_makezd2boxzd2_bglt BgL_obj4018z00_2076;

				BgL_obj4018z00_2076 = (BgL_makezd2boxzd2_bglt) (BgL_obj4018z00_7623);
				{	/* Ast/node.scm 239 */
					obj_t BgL_res4019z00_2079;

					{	/* Ast/node.scm 239 */
						obj_t BgL_keyz00_5440;

						BgL_keyz00_5440 = CNST_TABLE_REF(((long) 30));
						BgL_res4019z00_2079 =
							make_struct(BgL_keyz00_5440, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Ast/node.scm 239 */
						int BgL_auxz00_13663;

						BgL_auxz00_13663 = (int) (((long) 0));
						STRUCT_SET(BgL_res4019z00_2079, BgL_auxz00_13663, BFALSE);
					}
					{	/* Ast/node.scm 239 */
						obj_t BgL_arg4811z00_2081;

						{
							BgL_nodez00_bglt BgL_auxz00_13666;

							BgL_auxz00_13666 = (BgL_nodez00_bglt) (BgL_obj4018z00_2076);
							BgL_arg4811z00_2081 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13666))->BgL_locz00);
						}
						{	/* Ast/node.scm 239 */
							int BgL_auxz00_13669;

							BgL_auxz00_13669 = (int) (((long) 1));
							STRUCT_SET(BgL_res4019z00_2079, BgL_auxz00_13669,
								BgL_arg4811z00_2081);
					}}
					{	/* Ast/node.scm 239 */
						BgL_typez00_bglt BgL_arg4813z00_2083;

						{
							BgL_nodez00_bglt BgL_auxz00_13672;

							BgL_auxz00_13672 = (BgL_nodez00_bglt) (BgL_obj4018z00_2076);
							BgL_arg4813z00_2083 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13672))->BgL_typez00);
						}
						{	/* Ast/node.scm 239 */
							obj_t BgL_auxz00_13677;

							int BgL_auxz00_13675;

							BgL_auxz00_13677 = (obj_t) (BgL_arg4813z00_2083);
							BgL_auxz00_13675 = (int) (((long) 2));
							STRUCT_SET(BgL_res4019z00_2079, BgL_auxz00_13675,
								BgL_auxz00_13677);
					}}
					{	/* Ast/node.scm 239 */
						obj_t BgL_arg4815z00_2085;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13680;

							BgL_auxz00_13680 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj4018z00_2076);
							BgL_arg4815z00_2085 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13680))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 239 */
							int BgL_auxz00_13683;

							BgL_auxz00_13683 = (int) (((long) 3));
							STRUCT_SET(BgL_res4019z00_2079, BgL_auxz00_13683,
								BgL_arg4815z00_2085);
					}}
					{	/* Ast/node.scm 239 */
						obj_t BgL_arg4817z00_2087;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13686;

							BgL_auxz00_13686 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj4018z00_2076);
							BgL_arg4817z00_2087 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13686))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 239 */
							int BgL_auxz00_13689;

							BgL_auxz00_13689 = (int) (((long) 4));
							STRUCT_SET(BgL_res4019z00_2079, BgL_auxz00_13689,
								BgL_arg4817z00_2087);
					}}
					{	/* Ast/node.scm 239 */
						BgL_nodez00_bglt BgL_arg4820z00_2089;

						BgL_arg4820z00_2089 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_obj4018z00_2076))->
							BgL_valuez00);
						{	/* Ast/node.scm 239 */
							obj_t BgL_auxz00_13695;

							int BgL_auxz00_13693;

							BgL_auxz00_13695 = (obj_t) (BgL_arg4820z00_2089);
							BgL_auxz00_13693 = (int) (((long) 5));
							STRUCT_SET(BgL_res4019z00_2079, BgL_auxz00_13693,
								BgL_auxz00_13695);
					}}
					return BgL_res4019z00_2079;
				}
			}
		}
	}



/* struct+object->objec4242 */
	obj_t BGl_structzb2objectzd2ze3objec4242z83zzast_nodez00(obj_t
		BgL_envz00_7624, obj_t BgL_oz00_7625, obj_t BgL_sz00_7626)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{
				BgL_boxzd2refzd2_bglt BgL_oz00_2064;

				obj_t BgL_sz00_2065;

				{	/* Ast/node.scm 243 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_13699;

					BgL_oz00_2064 = (BgL_boxzd2refzd2_bglt) (BgL_oz00_7625);
					BgL_sz00_2065 = BgL_sz00_7626;
					{	/* Ast/node.scm 243 */
						obj_t BgL_arg4808z00_2068;

						BgL_arg4808z00_2068 = STRUCT_REF(BgL_sz00_2065, (int) (((long) 0)));
						{	/* Ast/node.scm 243 */
							BgL_objectz00_bglt BgL_auxz00_13702;

							BgL_auxz00_13702 = (BgL_objectz00_bglt) (BgL_oz00_2064);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13702, BgL_arg4808z00_2068);
					}}
					{
						obj_t BgL_auxz00_13705;

						BgL_auxz00_13705 = STRUCT_REF(BgL_sz00_2065, (int) (((long) 1)));
						((((BgL_boxzd2refzd2_bglt) CREF(BgL_oz00_2064))->BgL_locz00) =
							((obj_t) BgL_auxz00_13705), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13709;

						BgL_auxz00_13709 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2065,
								(int) (((long) 2))));
						((((BgL_boxzd2refzd2_bglt) CREF(BgL_oz00_2064))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13709), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13714;

						BgL_auxz00_13714 = STRUCT_REF(BgL_sz00_2065, (int) (((long) 3)));
						((((BgL_boxzd2refzd2_bglt) CREF(BgL_oz00_2064))->
								BgL_sidezd2effectzf3z21) = ((obj_t) BgL_auxz00_13714), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_13718;

						BgL_auxz00_13718 = STRUCT_REF(BgL_sz00_2065, (int) (((long) 4)));
						((((BgL_boxzd2refzd2_bglt) CREF(BgL_oz00_2064))->BgL_keyz00) =
							((obj_t) BgL_auxz00_13718), BUNSPEC);
					}
					{
						BgL_varz00_bglt BgL_auxz00_13722;

						BgL_auxz00_13722 =
							(BgL_varz00_bglt) (STRUCT_REF(BgL_sz00_2065, (int) (((long) 5))));
						((((BgL_boxzd2refzd2_bglt) CREF(BgL_oz00_2064))->BgL_varz00) =
							((BgL_varz00_bglt) BgL_auxz00_13722), BUNSPEC);
					}
					BgL_auxz00_13699 = BgL_oz00_2064;
					return (obj_t) (BgL_auxz00_13699);
				}
			}
		}
	}



/* object->struct-box-r4240 */
	obj_t BGl_objectzd2ze3structzd2boxzd2r4240z31zzast_nodez00(obj_t
		BgL_envz00_7627, obj_t BgL_obj4075z00_7628)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 243 */
			{
				BgL_boxzd2refzd2_bglt BgL_obj4075z00_2048;

				BgL_obj4075z00_2048 = (BgL_boxzd2refzd2_bglt) (BgL_obj4075z00_7628);
				{	/* Ast/node.scm 243 */
					obj_t BgL_res4076z00_2051;

					{	/* Ast/node.scm 243 */
						obj_t BgL_keyz00_5402;

						BgL_keyz00_5402 = CNST_TABLE_REF(((long) 31));
						BgL_res4076z00_2051 =
							make_struct(BgL_keyz00_5402, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Ast/node.scm 243 */
						int BgL_auxz00_13732;

						BgL_auxz00_13732 = (int) (((long) 0));
						STRUCT_SET(BgL_res4076z00_2051, BgL_auxz00_13732, BFALSE);
					}
					{	/* Ast/node.scm 243 */
						obj_t BgL_arg4797z00_2053;

						{
							BgL_nodez00_bglt BgL_auxz00_13735;

							BgL_auxz00_13735 = (BgL_nodez00_bglt) (BgL_obj4075z00_2048);
							BgL_arg4797z00_2053 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13735))->BgL_locz00);
						}
						{	/* Ast/node.scm 243 */
							int BgL_auxz00_13738;

							BgL_auxz00_13738 = (int) (((long) 1));
							STRUCT_SET(BgL_res4076z00_2051, BgL_auxz00_13738,
								BgL_arg4797z00_2053);
					}}
					{	/* Ast/node.scm 243 */
						BgL_typez00_bglt BgL_arg4799z00_2055;

						{
							BgL_nodez00_bglt BgL_auxz00_13741;

							BgL_auxz00_13741 = (BgL_nodez00_bglt) (BgL_obj4075z00_2048);
							BgL_arg4799z00_2055 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13741))->BgL_typez00);
						}
						{	/* Ast/node.scm 243 */
							obj_t BgL_auxz00_13746;

							int BgL_auxz00_13744;

							BgL_auxz00_13746 = (obj_t) (BgL_arg4799z00_2055);
							BgL_auxz00_13744 = (int) (((long) 2));
							STRUCT_SET(BgL_res4076z00_2051, BgL_auxz00_13744,
								BgL_auxz00_13746);
					}}
					{	/* Ast/node.scm 243 */
						obj_t BgL_arg4801z00_2057;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13749;

							BgL_auxz00_13749 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj4075z00_2048);
							BgL_arg4801z00_2057 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13749))->
								BgL_sidezd2effectzf3z21);
						}
						{	/* Ast/node.scm 243 */
							int BgL_auxz00_13752;

							BgL_auxz00_13752 = (int) (((long) 3));
							STRUCT_SET(BgL_res4076z00_2051, BgL_auxz00_13752,
								BgL_arg4801z00_2057);
					}}
					{	/* Ast/node.scm 243 */
						obj_t BgL_arg4804z00_2059;

						{
							BgL_nodezf2effectzf2_bglt BgL_auxz00_13755;

							BgL_auxz00_13755 =
								(BgL_nodezf2effectzf2_bglt) (BgL_obj4075z00_2048);
							BgL_arg4804z00_2059 =
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_13755))->
								BgL_keyz00);
						}
						{	/* Ast/node.scm 243 */
							int BgL_auxz00_13758;

							BgL_auxz00_13758 = (int) (((long) 4));
							STRUCT_SET(BgL_res4076z00_2051, BgL_auxz00_13758,
								BgL_arg4804z00_2059);
					}}
					{	/* Ast/node.scm 243 */
						BgL_varz00_bglt BgL_arg4806z00_2061;

						BgL_arg4806z00_2061 =
							(((BgL_boxzd2refzd2_bglt) CREF(BgL_obj4075z00_2048))->BgL_varz00);
						{	/* Ast/node.scm 243 */
							obj_t BgL_auxz00_13764;

							int BgL_auxz00_13762;

							BgL_auxz00_13764 = (obj_t) (BgL_arg4806z00_2061);
							BgL_auxz00_13762 = (int) (((long) 5));
							STRUCT_SET(BgL_res4076z00_2051, BgL_auxz00_13762,
								BgL_auxz00_13764);
					}}
					return BgL_res4076z00_2051;
				}
			}
		}
	}



/* struct+object->objec4238 */
	obj_t BGl_structzb2objectzd2ze3objec4238z83zzast_nodez00(obj_t
		BgL_envz00_7629, obj_t BgL_oz00_7630, obj_t BgL_sz00_7631)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_oz00_2037;

				obj_t BgL_sz00_2038;

				{	/* Ast/node.scm 247 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_13768;

					BgL_oz00_2037 = (BgL_boxzd2setz12zc0_bglt) (BgL_oz00_7630);
					BgL_sz00_2038 = BgL_sz00_7631;
					{	/* Ast/node.scm 247 */
						obj_t BgL_arg4794z00_2041;

						BgL_arg4794z00_2041 = STRUCT_REF(BgL_sz00_2038, (int) (((long) 0)));
						{	/* Ast/node.scm 247 */
							BgL_objectz00_bglt BgL_auxz00_13771;

							BgL_auxz00_13771 = (BgL_objectz00_bglt) (BgL_oz00_2037);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_13771, BgL_arg4794z00_2041);
					}}
					{
						obj_t BgL_auxz00_13774;

						BgL_auxz00_13774 = STRUCT_REF(BgL_sz00_2038, (int) (((long) 1)));
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_oz00_2037))->BgL_locz00) =
							((obj_t) BgL_auxz00_13774), BUNSPEC);
					}
					{
						BgL_typez00_bglt BgL_auxz00_13778;

						BgL_auxz00_13778 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2038,
								(int) (((long) 2))));
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_oz00_2037))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_13778), BUNSPEC);
					}
					{
						BgL_varz00_bglt BgL_auxz00_13783;

						BgL_auxz00_13783 =
							(BgL_varz00_bglt) (STRUCT_REF(BgL_sz00_2038, (int) (((long) 3))));
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_oz00_2037))->BgL_varz00) =
							((BgL_varz00_bglt) BgL_auxz00_13783), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_13788;

						BgL_auxz00_13788 =
							(BgL_nodez00_bglt) (STRUCT_REF(BgL_sz00_2038,
								(int) (((long) 4))));
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_oz00_2037))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_auxz00_13788), BUNSPEC);
					}
					BgL_auxz00_13768 = BgL_oz00_2037;
					return (obj_t) (BgL_auxz00_13768);
				}
			}
		}
	}



/* object->struct-box-s4236 */
	obj_t BGl_objectzd2ze3structzd2boxzd2s4236z31zzast_nodez00(obj_t
		BgL_envz00_7632, obj_t BgL_obj4125z00_7633)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 247 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_obj4125z00_2023;

				BgL_obj4125z00_2023 = (BgL_boxzd2setz12zc0_bglt) (BgL_obj4125z00_7633);
				{	/* Ast/node.scm 247 */
					obj_t BgL_res4126z00_2026;

					{	/* Ast/node.scm 247 */
						obj_t BgL_keyz00_5370;

						BgL_keyz00_5370 = CNST_TABLE_REF(((long) 32));
						BgL_res4126z00_2026 =
							make_struct(BgL_keyz00_5370, (int) (((long) 5)), BUNSPEC);
					}
					{	/* Ast/node.scm 247 */
						int BgL_auxz00_13798;

						BgL_auxz00_13798 = (int) (((long) 0));
						STRUCT_SET(BgL_res4126z00_2026, BgL_auxz00_13798, BFALSE);
					}
					{	/* Ast/node.scm 247 */
						obj_t BgL_arg4786z00_2028;

						{
							BgL_nodez00_bglt BgL_auxz00_13801;

							BgL_auxz00_13801 = (BgL_nodez00_bglt) (BgL_obj4125z00_2023);
							BgL_arg4786z00_2028 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13801))->BgL_locz00);
						}
						{	/* Ast/node.scm 247 */
							int BgL_auxz00_13804;

							BgL_auxz00_13804 = (int) (((long) 1));
							STRUCT_SET(BgL_res4126z00_2026, BgL_auxz00_13804,
								BgL_arg4786z00_2028);
					}}
					{	/* Ast/node.scm 247 */
						BgL_typez00_bglt BgL_arg4788z00_2030;

						{
							BgL_nodez00_bglt BgL_auxz00_13807;

							BgL_auxz00_13807 = (BgL_nodez00_bglt) (BgL_obj4125z00_2023);
							BgL_arg4788z00_2030 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_13807))->BgL_typez00);
						}
						{	/* Ast/node.scm 247 */
							obj_t BgL_auxz00_13812;

							int BgL_auxz00_13810;

							BgL_auxz00_13812 = (obj_t) (BgL_arg4788z00_2030);
							BgL_auxz00_13810 = (int) (((long) 2));
							STRUCT_SET(BgL_res4126z00_2026, BgL_auxz00_13810,
								BgL_auxz00_13812);
					}}
					{	/* Ast/node.scm 247 */
						BgL_varz00_bglt BgL_arg4790z00_2032;

						BgL_arg4790z00_2032 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_obj4125z00_2023))->
							BgL_varz00);
						{	/* Ast/node.scm 247 */
							obj_t BgL_auxz00_13818;

							int BgL_auxz00_13816;

							BgL_auxz00_13818 = (obj_t) (BgL_arg4790z00_2032);
							BgL_auxz00_13816 = (int) (((long) 3));
							STRUCT_SET(BgL_res4126z00_2026, BgL_auxz00_13816,
								BgL_auxz00_13818);
					}}
					{	/* Ast/node.scm 247 */
						BgL_nodez00_bglt BgL_arg4792z00_2034;

						BgL_arg4792z00_2034 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_obj4125z00_2023))->
							BgL_valuez00);
						{	/* Ast/node.scm 247 */
							obj_t BgL_auxz00_13824;

							int BgL_auxz00_13822;

							BgL_auxz00_13824 = (obj_t) (BgL_arg4792z00_2034);
							BgL_auxz00_13822 = (int) (((long) 4));
							STRUCT_SET(BgL_res4126z00_2026, BgL_auxz00_13822,
								BgL_auxz00_13824);
					}}
					return BgL_res4126z00_2026;
				}
			}
		}
	}



/* node-walk-jump-ex-it4234 */
	obj_t BGl_nodezd2walkzd2jumpzd2exzd2it4234z00zzast_nodez00(obj_t
		BgL_envz00_7634, obj_t BgL_nodez00_7635, obj_t BgL_procz00_7636)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 411 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2015;

				obj_t BgL_procz00_2016;

				BgL_nodez00_2015 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_7635);
				BgL_procz00_2016 = BgL_procz00_7636;
				{	/* Ast/node.scm 412 */
					BgL_nodez00_bglt BgL_arg4782z00_2019;

					BgL_arg4782z00_2019 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2015))->
						BgL_exitz00);
					{	/* Ast/node.scm 412 */
						obj_t BgL_method4194z00_5317;

						{	/* Ast/node.scm 412 */
							BgL_objectz00_bglt BgL_objz00_5318;

							BgL_objz00_5318 = (BgL_objectz00_bglt) (BgL_arg4782z00_2019);
							{	/* Ast/node.scm 412 */
								long BgL_objzd2classzd2numz00_5319;

								BgL_objzd2classzd2numz00_5319 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5318);
								{	/* Ast/node.scm 412 */
									obj_t BgL_arg2643z00_5320;

									BgL_arg2643z00_5320 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 412 */
										obj_t BgL_arrayz00_5322;

										int BgL_offsetz00_5323;

										BgL_arrayz00_5322 = BgL_arg2643z00_5320;
										BgL_offsetz00_5323 = (int) (BgL_objzd2classzd2numz00_5319);
										{	/* Ast/node.scm 412 */
											long BgL_offsetz00_5324;

											BgL_offsetz00_5324 =
												((long) (BgL_offsetz00_5323) - OBJECT_TYPE);
											{	/* Ast/node.scm 412 */
												long BgL_modz00_5325;

												{	/* Ast/node.scm 412 */
													int BgL_arg2645z00_5326;

													BgL_arg2645z00_5326 = (int) (((long) 16));
													{	/* Ast/node.scm 412 */
														long BgL_auxz00_13837;

														BgL_auxz00_13837 = (long) (BgL_arg2645z00_5326);
														BgL_modz00_5325 =
															(BgL_offsetz00_5324 / BgL_auxz00_13837);
												}}
												{	/* Ast/node.scm 412 */
													long BgL_restz00_5327;

													{	/* Ast/node.scm 412 */
														int BgL_arg2644z00_5328;

														BgL_arg2644z00_5328 = (int) (((long) 16));
														{	/* Ast/node.scm 412 */
															long BgL_auxz00_13841;

															BgL_auxz00_13841 = (long) (BgL_arg2644z00_5328);
															BgL_restz00_5327 =
																(BgL_offsetz00_5324 % BgL_auxz00_13841);
													}}
													{	/* Ast/node.scm 412 */

														BgL_method4194z00_5317 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5322,
																(int) (BgL_modz00_5325)),
															(int) (BgL_restz00_5327));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5317) (BgL_method4194z00_5317,
							(obj_t) (BgL_arg4782z00_2019), BgL_procz00_2016, BEOA);
				}}
				{	/* Ast/node.scm 413 */
					BgL_nodez00_bglt BgL_arg4783z00_2020;

					BgL_arg4783z00_2020 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2015))->
						BgL_valuez00);
					{	/* Ast/node.scm 413 */
						obj_t BgL_method4194z00_5345;

						{	/* Ast/node.scm 413 */
							BgL_objectz00_bglt BgL_objz00_5346;

							BgL_objz00_5346 = (BgL_objectz00_bglt) (BgL_arg4783z00_2020);
							{	/* Ast/node.scm 413 */
								long BgL_objzd2classzd2numz00_5347;

								BgL_objzd2classzd2numz00_5347 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5346);
								{	/* Ast/node.scm 413 */
									obj_t BgL_arg2643z00_5348;

									BgL_arg2643z00_5348 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 413 */
										obj_t BgL_arrayz00_5350;

										int BgL_offsetz00_5351;

										BgL_arrayz00_5350 = BgL_arg2643z00_5348;
										BgL_offsetz00_5351 = (int) (BgL_objzd2classzd2numz00_5347);
										{	/* Ast/node.scm 413 */
											long BgL_offsetz00_5352;

											BgL_offsetz00_5352 =
												((long) (BgL_offsetz00_5351) - OBJECT_TYPE);
											{	/* Ast/node.scm 413 */
												long BgL_modz00_5353;

												{	/* Ast/node.scm 413 */
													int BgL_arg2645z00_5354;

													BgL_arg2645z00_5354 = (int) (((long) 16));
													{	/* Ast/node.scm 413 */
														long BgL_auxz00_13860;

														BgL_auxz00_13860 = (long) (BgL_arg2645z00_5354);
														BgL_modz00_5353 =
															(BgL_offsetz00_5352 / BgL_auxz00_13860);
												}}
												{	/* Ast/node.scm 413 */
													long BgL_restz00_5355;

													{	/* Ast/node.scm 413 */
														int BgL_arg2644z00_5356;

														BgL_arg2644z00_5356 = (int) (((long) 16));
														{	/* Ast/node.scm 413 */
															long BgL_auxz00_13864;

															BgL_auxz00_13864 = (long) (BgL_arg2644z00_5356);
															BgL_restz00_5355 =
																(BgL_offsetz00_5352 % BgL_auxz00_13864);
													}}
													{	/* Ast/node.scm 413 */

														BgL_method4194z00_5345 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5350,
																(int) (BgL_modz00_5353)),
															(int) (BgL_restz00_5355));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5345) (BgL_method4194z00_5345,
							(obj_t) (BgL_arg4783z00_2020), BgL_procz00_2016, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_2016) (BgL_procz00_2016,
					(obj_t) (BgL_nodez00_2015), BEOA);
			}
		}
	}



/* node-walk-set-ex-it4232 */
	obj_t BGl_nodezd2walkzd2setzd2exzd2it4232z00zzast_nodez00(obj_t
		BgL_envz00_7637, obj_t BgL_nodez00_7638, obj_t BgL_procz00_7639)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 404 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2008;

				obj_t BgL_procz00_2009;

				BgL_nodez00_2008 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_7638);
				BgL_procz00_2009 = BgL_procz00_7639;
				{	/* Ast/node.scm 405 */
					BgL_nodez00_bglt BgL_arg4780z00_5285;

					BgL_arg4780z00_5285 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2008))->BgL_bodyz00);
					{	/* Ast/node.scm 405 */
						obj_t BgL_method4194z00_5289;

						{	/* Ast/node.scm 405 */
							BgL_objectz00_bglt BgL_objz00_5290;

							BgL_objz00_5290 = (BgL_objectz00_bglt) (BgL_arg4780z00_5285);
							{	/* Ast/node.scm 405 */
								long BgL_objzd2classzd2numz00_5291;

								BgL_objzd2classzd2numz00_5291 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5290);
								{	/* Ast/node.scm 405 */
									obj_t BgL_arg2643z00_5292;

									BgL_arg2643z00_5292 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 405 */
										obj_t BgL_arrayz00_5294;

										int BgL_offsetz00_5295;

										BgL_arrayz00_5294 = BgL_arg2643z00_5292;
										BgL_offsetz00_5295 = (int) (BgL_objzd2classzd2numz00_5291);
										{	/* Ast/node.scm 405 */
											long BgL_offsetz00_5296;

											BgL_offsetz00_5296 =
												((long) (BgL_offsetz00_5295) - OBJECT_TYPE);
											{	/* Ast/node.scm 405 */
												long BgL_modz00_5297;

												{	/* Ast/node.scm 405 */
													int BgL_arg2645z00_5298;

													BgL_arg2645z00_5298 = (int) (((long) 16));
													{	/* Ast/node.scm 405 */
														long BgL_auxz00_13887;

														BgL_auxz00_13887 = (long) (BgL_arg2645z00_5298);
														BgL_modz00_5297 =
															(BgL_offsetz00_5296 / BgL_auxz00_13887);
												}}
												{	/* Ast/node.scm 405 */
													long BgL_restz00_5299;

													{	/* Ast/node.scm 405 */
														int BgL_arg2644z00_5300;

														BgL_arg2644z00_5300 = (int) (((long) 16));
														{	/* Ast/node.scm 405 */
															long BgL_auxz00_13891;

															BgL_auxz00_13891 = (long) (BgL_arg2644z00_5300);
															BgL_restz00_5299 =
																(BgL_offsetz00_5296 % BgL_auxz00_13891);
													}}
													{	/* Ast/node.scm 405 */

														BgL_method4194z00_5289 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5294,
																(int) (BgL_modz00_5297)),
															(int) (BgL_restz00_5299));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5289) (BgL_method4194z00_5289,
							(obj_t) (BgL_arg4780z00_5285), BgL_procz00_2009, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_2009) (BgL_procz00_2009,
					(obj_t) (BgL_nodez00_2008), BEOA);
			}
		}
	}



/* node-walk-let-var4230 */
	obj_t BGl_nodezd2walkzd2letzd2var4230zd2zzast_nodez00(obj_t BgL_envz00_7640,
		obj_t BgL_nodez00_7641, obj_t BgL_procz00_7642)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 393 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1991;

				obj_t BgL_procz00_1992;

				BgL_nodez00_1991 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_7641);
				BgL_procz00_1992 = BgL_procz00_7642;
				{	/* Ast/node.scm 395 */
					BgL_nodez00_bglt BgL_arg4773z00_1996;

					BgL_arg4773z00_1996 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1991))->BgL_bodyz00);
					{	/* Ast/node.scm 395 */
						obj_t BgL_method4194z00_5228;

						{	/* Ast/node.scm 395 */
							BgL_objectz00_bglt BgL_objz00_5229;

							BgL_objz00_5229 = (BgL_objectz00_bglt) (BgL_arg4773z00_1996);
							{	/* Ast/node.scm 395 */
								long BgL_objzd2classzd2numz00_5230;

								BgL_objzd2classzd2numz00_5230 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5229);
								{	/* Ast/node.scm 395 */
									obj_t BgL_arg2643z00_5231;

									BgL_arg2643z00_5231 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 395 */
										obj_t BgL_arrayz00_5233;

										int BgL_offsetz00_5234;

										BgL_arrayz00_5233 = BgL_arg2643z00_5231;
										BgL_offsetz00_5234 = (int) (BgL_objzd2classzd2numz00_5230);
										{	/* Ast/node.scm 395 */
											long BgL_offsetz00_5235;

											BgL_offsetz00_5235 =
												((long) (BgL_offsetz00_5234) - OBJECT_TYPE);
											{	/* Ast/node.scm 395 */
												long BgL_modz00_5236;

												{	/* Ast/node.scm 395 */
													int BgL_arg2645z00_5237;

													BgL_arg2645z00_5237 = (int) (((long) 16));
													{	/* Ast/node.scm 395 */
														long BgL_auxz00_13914;

														BgL_auxz00_13914 = (long) (BgL_arg2645z00_5237);
														BgL_modz00_5236 =
															(BgL_offsetz00_5235 / BgL_auxz00_13914);
												}}
												{	/* Ast/node.scm 395 */
													long BgL_restz00_5238;

													{	/* Ast/node.scm 395 */
														int BgL_arg2644z00_5239;

														BgL_arg2644z00_5239 = (int) (((long) 16));
														{	/* Ast/node.scm 395 */
															long BgL_auxz00_13918;

															BgL_auxz00_13918 = (long) (BgL_arg2644z00_5239);
															BgL_restz00_5238 =
																(BgL_offsetz00_5235 % BgL_auxz00_13918);
													}}
													{	/* Ast/node.scm 395 */

														BgL_method4194z00_5228 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5233,
																(int) (BgL_modz00_5236)),
															(int) (BgL_restz00_5238));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5228) (BgL_method4194z00_5228,
							(obj_t) (BgL_arg4773z00_1996), BgL_procz00_1992, BEOA);
				}}
				{	/* Ast/node.scm 396 */
					obj_t BgL_g4157z00_1997;

					BgL_g4157z00_1997 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1991))->BgL_bindingsz00);
					{
						obj_t BgL_l4155z00_1999;

						BgL_l4155z00_1999 = BgL_g4157z00_1997;
					BgL_zc3anonymousza34774ze3z83_2000:
						if (PAIRP(BgL_l4155z00_1999))
							{	/* Ast/node.scm 396 */
								{	/* Ast/node.scm 397 */
									obj_t BgL_bindingz00_2002;

									BgL_bindingz00_2002 = CAR(BgL_l4155z00_1999);
									{	/* Ast/node.scm 397 */
										obj_t BgL_arg4776z00_2003;

										BgL_arg4776z00_2003 = CDR(BgL_bindingz00_2002);
										{	/* Ast/node.scm 397 */
											BgL_nodez00_bglt BgL_nodez00_5257;

											BgL_nodez00_5257 =
												(BgL_nodez00_bglt) (BgL_arg4776z00_2003);
											{	/* Ast/node.scm 397 */
												obj_t BgL_method4194z00_5259;

												{	/* Ast/node.scm 397 */
													BgL_objectz00_bglt BgL_objz00_5260;

													BgL_objz00_5260 =
														(BgL_objectz00_bglt) (BgL_nodez00_5257);
													{	/* Ast/node.scm 397 */
														long BgL_objzd2classzd2numz00_5261;

														BgL_objzd2classzd2numz00_5261 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_5260);
														{	/* Ast/node.scm 397 */
															obj_t BgL_arg2643z00_5262;

															BgL_arg2643z00_5262 =
																PROCEDURE_REF
																(BGl_nodezd2walkzd2envz00zzast_nodez00,
																(int) (((long) 1)));
															{	/* Ast/node.scm 397 */
																obj_t BgL_arrayz00_5264;

																int BgL_offsetz00_5265;

																BgL_arrayz00_5264 = BgL_arg2643z00_5262;
																BgL_offsetz00_5265 =
																	(int) (BgL_objzd2classzd2numz00_5261);
																{	/* Ast/node.scm 397 */
																	long BgL_offsetz00_5266;

																	BgL_offsetz00_5266 =
																		((long) (BgL_offsetz00_5265) - OBJECT_TYPE);
																	{	/* Ast/node.scm 397 */
																		long BgL_modz00_5267;

																		{	/* Ast/node.scm 397 */
																			int BgL_arg2645z00_5268;

																			BgL_arg2645z00_5268 = (int) (((long) 16));
																			{	/* Ast/node.scm 397 */
																				long BgL_auxz00_13942;

																				BgL_auxz00_13942 =
																					(long) (BgL_arg2645z00_5268);
																				BgL_modz00_5267 =
																					(BgL_offsetz00_5266 /
																					BgL_auxz00_13942);
																		}}
																		{	/* Ast/node.scm 397 */
																			long BgL_restz00_5269;

																			{	/* Ast/node.scm 397 */
																				int BgL_arg2644z00_5270;

																				BgL_arg2644z00_5270 =
																					(int) (((long) 16));
																				{	/* Ast/node.scm 397 */
																					long BgL_auxz00_13946;

																					BgL_auxz00_13946 =
																						(long) (BgL_arg2644z00_5270);
																					BgL_restz00_5269 =
																						(BgL_offsetz00_5266 %
																						BgL_auxz00_13946);
																			}}
																			{	/* Ast/node.scm 397 */

																				BgL_method4194z00_5259 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_5264,
																						(int) (BgL_modz00_5267)),
																					(int) (BgL_restz00_5269));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method4194z00_5259)
													(BgL_method4194z00_5259, (obj_t) (BgL_nodez00_5257),
													BgL_procz00_1992, BEOA);
								}}}}
								{
									obj_t BgL_l4155z00_13956;

									BgL_l4155z00_13956 = CDR(BgL_l4155z00_1999);
									BgL_l4155z00_1999 = BgL_l4155z00_13956;
									goto BgL_zc3anonymousza34774ze3z83_2000;
								}
							}
						else
							{	/* Ast/node.scm 396 */
								((bool_t) 1);
							}
					}
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1992) (BgL_procz00_1992,
					(obj_t) (BgL_nodez00_1991), BEOA);
			}
		}
	}



/* node-walk-let-fun4228 */
	obj_t BGl_nodezd2walkzd2letzd2fun4228zd2zzast_nodez00(obj_t BgL_envz00_7643,
		obj_t BgL_nodez00_7644, obj_t BgL_procz00_7645)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 381 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1973;

				obj_t BgL_procz00_1974;

				BgL_nodez00_1973 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_7644);
				BgL_procz00_1974 = BgL_procz00_7645;
				{	/* Ast/node.scm 383 */
					BgL_nodez00_bglt BgL_arg4767z00_1978;

					BgL_arg4767z00_1978 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1973))->BgL_bodyz00);
					{	/* Ast/node.scm 383 */
						obj_t BgL_method4194z00_5167;

						{	/* Ast/node.scm 383 */
							BgL_objectz00_bglt BgL_objz00_5168;

							BgL_objz00_5168 = (BgL_objectz00_bglt) (BgL_arg4767z00_1978);
							{	/* Ast/node.scm 383 */
								long BgL_objzd2classzd2numz00_5169;

								BgL_objzd2classzd2numz00_5169 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5168);
								{	/* Ast/node.scm 383 */
									obj_t BgL_arg2643z00_5170;

									BgL_arg2643z00_5170 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 383 */
										obj_t BgL_arrayz00_5172;

										int BgL_offsetz00_5173;

										BgL_arrayz00_5172 = BgL_arg2643z00_5170;
										BgL_offsetz00_5173 = (int) (BgL_objzd2classzd2numz00_5169);
										{	/* Ast/node.scm 383 */
											long BgL_offsetz00_5174;

											BgL_offsetz00_5174 =
												((long) (BgL_offsetz00_5173) - OBJECT_TYPE);
											{	/* Ast/node.scm 383 */
												long BgL_modz00_5175;

												{	/* Ast/node.scm 383 */
													int BgL_arg2645z00_5176;

													BgL_arg2645z00_5176 = (int) (((long) 16));
													{	/* Ast/node.scm 383 */
														long BgL_auxz00_13971;

														BgL_auxz00_13971 = (long) (BgL_arg2645z00_5176);
														BgL_modz00_5175 =
															(BgL_offsetz00_5174 / BgL_auxz00_13971);
												}}
												{	/* Ast/node.scm 383 */
													long BgL_restz00_5177;

													{	/* Ast/node.scm 383 */
														int BgL_arg2644z00_5178;

														BgL_arg2644z00_5178 = (int) (((long) 16));
														{	/* Ast/node.scm 383 */
															long BgL_auxz00_13975;

															BgL_auxz00_13975 = (long) (BgL_arg2644z00_5178);
															BgL_restz00_5177 =
																(BgL_offsetz00_5174 % BgL_auxz00_13975);
													}}
													{	/* Ast/node.scm 383 */

														BgL_method4194z00_5167 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5172,
																(int) (BgL_modz00_5175)),
															(int) (BgL_restz00_5177));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5167) (BgL_method4194z00_5167,
							(obj_t) (BgL_arg4767z00_1978), BgL_procz00_1974, BEOA);
				}}
				{	/* Ast/node.scm 384 */
					obj_t BgL_g4154z00_1979;

					BgL_g4154z00_1979 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1973))->BgL_localsz00);
					{
						obj_t BgL_l4152z00_1981;

						BgL_l4152z00_1981 = BgL_g4154z00_1979;
					BgL_zc3anonymousza34768ze3z83_1982:
						if (PAIRP(BgL_l4152z00_1981))
							{	/* Ast/node.scm 384 */
								{	/* Ast/node.scm 385 */
									obj_t BgL_localz00_1984;

									BgL_localz00_1984 = CAR(BgL_l4152z00_1981);
									{	/* Ast/node.scm 385 */
										BgL_valuez00_bglt BgL_sfunz00_1985;

										{
											BgL_variablez00_bglt BgL_auxz00_13989;

											BgL_auxz00_13989 =
												(BgL_variablez00_bglt) (BgL_localz00_1984);
											BgL_sfunz00_1985 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_13989))->
												BgL_valuez00);
										}
										{	/* Ast/node.scm 386 */
											obj_t BgL_arg4770z00_1986;

											{
												BgL_sfunz00_bglt BgL_auxz00_13992;

												BgL_auxz00_13992 =
													(BgL_sfunz00_bglt) (BgL_sfunz00_1985);
												BgL_arg4770z00_1986 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_13992))->
													BgL_bodyz00);
											}
											{	/* Ast/node.scm 386 */
												BgL_nodez00_bglt BgL_nodez00_5197;

												BgL_nodez00_5197 =
													(BgL_nodez00_bglt) (BgL_arg4770z00_1986);
												{	/* Ast/node.scm 386 */
													obj_t BgL_method4194z00_5199;

													{	/* Ast/node.scm 386 */
														BgL_objectz00_bglt BgL_objz00_5200;

														BgL_objz00_5200 =
															(BgL_objectz00_bglt) (BgL_nodez00_5197);
														{	/* Ast/node.scm 386 */
															long BgL_objzd2classzd2numz00_5201;

															BgL_objzd2classzd2numz00_5201 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_5200);
															{	/* Ast/node.scm 386 */
																obj_t BgL_arg2643z00_5202;

																BgL_arg2643z00_5202 =
																	PROCEDURE_REF
																	(BGl_nodezd2walkzd2envz00zzast_nodez00,
																	(int) (((long) 1)));
																{	/* Ast/node.scm 386 */
																	obj_t BgL_arrayz00_5204;

																	int BgL_offsetz00_5205;

																	BgL_arrayz00_5204 = BgL_arg2643z00_5202;
																	BgL_offsetz00_5205 =
																		(int) (BgL_objzd2classzd2numz00_5201);
																	{	/* Ast/node.scm 386 */
																		long BgL_offsetz00_5206;

																		BgL_offsetz00_5206 =
																			(
																			(long) (BgL_offsetz00_5205) -
																			OBJECT_TYPE);
																		{	/* Ast/node.scm 386 */
																			long BgL_modz00_5207;

																			{	/* Ast/node.scm 386 */
																				int BgL_arg2645z00_5208;

																				BgL_arg2645z00_5208 =
																					(int) (((long) 16));
																				{	/* Ast/node.scm 386 */
																					long BgL_auxz00_14004;

																					BgL_auxz00_14004 =
																						(long) (BgL_arg2645z00_5208);
																					BgL_modz00_5207 =
																						(BgL_offsetz00_5206 /
																						BgL_auxz00_14004);
																			}}
																			{	/* Ast/node.scm 386 */
																				long BgL_restz00_5209;

																				{	/* Ast/node.scm 386 */
																					int BgL_arg2644z00_5210;

																					BgL_arg2644z00_5210 =
																						(int) (((long) 16));
																					{	/* Ast/node.scm 386 */
																						long BgL_auxz00_14008;

																						BgL_auxz00_14008 =
																							(long) (BgL_arg2644z00_5210);
																						BgL_restz00_5209 =
																							(BgL_offsetz00_5206 %
																							BgL_auxz00_14008);
																				}}
																				{	/* Ast/node.scm 386 */

																					BgL_method4194z00_5199 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_5204,
																							(int) (BgL_modz00_5207)),
																						(int) (BgL_restz00_5209));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method4194z00_5199)
														(BgL_method4194z00_5199, (obj_t) (BgL_nodez00_5197),
														BgL_procz00_1974, BEOA);
								}}}}}
								{
									obj_t BgL_l4152z00_14018;

									BgL_l4152z00_14018 = CDR(BgL_l4152z00_1981);
									BgL_l4152z00_1981 = BgL_l4152z00_14018;
									goto BgL_zc3anonymousza34768ze3z83_1982;
								}
							}
						else
							{	/* Ast/node.scm 384 */
								((bool_t) 1);
							}
					}
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1974) (BgL_procz00_1974,
					(obj_t) (BgL_nodez00_1973), BEOA);
			}
		}
	}



/* node-walk-box-set!4226 */
	obj_t BGl_nodezd2walkzd2boxzd2setz124226zc0zzast_nodez00(obj_t
		BgL_envz00_7646, obj_t BgL_nodez00_7647, obj_t BgL_procz00_7648)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 373 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1965;

				obj_t BgL_procz00_1966;

				BgL_nodez00_1965 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_7647);
				BgL_procz00_1966 = BgL_procz00_7648;
				{	/* Ast/node.scm 374 */
					BgL_varz00_bglt BgL_arg4764z00_1969;

					BgL_arg4764z00_1969 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1965))->BgL_varz00);
					{	/* Ast/node.scm 374 */
						BgL_nodez00_bglt BgL_nodez00_5109;

						BgL_nodez00_5109 = (BgL_nodez00_bglt) (BgL_arg4764z00_1969);
						{	/* Ast/node.scm 374 */
							obj_t BgL_method4194z00_5111;

							{	/* Ast/node.scm 374 */
								BgL_objectz00_bglt BgL_objz00_5112;

								BgL_objz00_5112 = (BgL_objectz00_bglt) (BgL_nodez00_5109);
								{	/* Ast/node.scm 374 */
									long BgL_objzd2classzd2numz00_5113;

									BgL_objzd2classzd2numz00_5113 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_5112);
									{	/* Ast/node.scm 374 */
										obj_t BgL_arg2643z00_5114;

										BgL_arg2643z00_5114 =
											PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
											(int) (((long) 1)));
										{	/* Ast/node.scm 374 */
											obj_t BgL_arrayz00_5116;

											int BgL_offsetz00_5117;

											BgL_arrayz00_5116 = BgL_arg2643z00_5114;
											BgL_offsetz00_5117 =
												(int) (BgL_objzd2classzd2numz00_5113);
											{	/* Ast/node.scm 374 */
												long BgL_offsetz00_5118;

												BgL_offsetz00_5118 =
													((long) (BgL_offsetz00_5117) - OBJECT_TYPE);
												{	/* Ast/node.scm 374 */
													long BgL_modz00_5119;

													{	/* Ast/node.scm 374 */
														int BgL_arg2645z00_5120;

														BgL_arg2645z00_5120 = (int) (((long) 16));
														{	/* Ast/node.scm 374 */
															long BgL_auxz00_14034;

															BgL_auxz00_14034 = (long) (BgL_arg2645z00_5120);
															BgL_modz00_5119 =
																(BgL_offsetz00_5118 / BgL_auxz00_14034);
													}}
													{	/* Ast/node.scm 374 */
														long BgL_restz00_5121;

														{	/* Ast/node.scm 374 */
															int BgL_arg2644z00_5122;

															BgL_arg2644z00_5122 = (int) (((long) 16));
															{	/* Ast/node.scm 374 */
																long BgL_auxz00_14038;

																BgL_auxz00_14038 = (long) (BgL_arg2644z00_5122);
																BgL_restz00_5121 =
																	(BgL_offsetz00_5118 % BgL_auxz00_14038);
														}}
														{	/* Ast/node.scm 374 */

															BgL_method4194z00_5111 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_5116,
																	(int) (BgL_modz00_5119)),
																(int) (BgL_restz00_5121));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method4194z00_5111) (BgL_method4194z00_5111,
								(obj_t) (BgL_nodez00_5109), BgL_procz00_1966, BEOA);
				}}}
				{	/* Ast/node.scm 375 */
					BgL_nodez00_bglt BgL_arg4765z00_1970;

					BgL_arg4765z00_1970 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1965))->BgL_valuez00);
					{	/* Ast/node.scm 375 */
						obj_t BgL_method4194z00_5139;

						{	/* Ast/node.scm 375 */
							BgL_objectz00_bglt BgL_objz00_5140;

							BgL_objz00_5140 = (BgL_objectz00_bglt) (BgL_arg4765z00_1970);
							{	/* Ast/node.scm 375 */
								long BgL_objzd2classzd2numz00_5141;

								BgL_objzd2classzd2numz00_5141 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5140);
								{	/* Ast/node.scm 375 */
									obj_t BgL_arg2643z00_5142;

									BgL_arg2643z00_5142 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 375 */
										obj_t BgL_arrayz00_5144;

										int BgL_offsetz00_5145;

										BgL_arrayz00_5144 = BgL_arg2643z00_5142;
										BgL_offsetz00_5145 = (int) (BgL_objzd2classzd2numz00_5141);
										{	/* Ast/node.scm 375 */
											long BgL_offsetz00_5146;

											BgL_offsetz00_5146 =
												((long) (BgL_offsetz00_5145) - OBJECT_TYPE);
											{	/* Ast/node.scm 375 */
												long BgL_modz00_5147;

												{	/* Ast/node.scm 375 */
													int BgL_arg2645z00_5148;

													BgL_arg2645z00_5148 = (int) (((long) 16));
													{	/* Ast/node.scm 375 */
														long BgL_auxz00_14057;

														BgL_auxz00_14057 = (long) (BgL_arg2645z00_5148);
														BgL_modz00_5147 =
															(BgL_offsetz00_5146 / BgL_auxz00_14057);
												}}
												{	/* Ast/node.scm 375 */
													long BgL_restz00_5149;

													{	/* Ast/node.scm 375 */
														int BgL_arg2644z00_5150;

														BgL_arg2644z00_5150 = (int) (((long) 16));
														{	/* Ast/node.scm 375 */
															long BgL_auxz00_14061;

															BgL_auxz00_14061 = (long) (BgL_arg2644z00_5150);
															BgL_restz00_5149 =
																(BgL_offsetz00_5146 % BgL_auxz00_14061);
													}}
													{	/* Ast/node.scm 375 */

														BgL_method4194z00_5139 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5144,
																(int) (BgL_modz00_5147)),
															(int) (BgL_restz00_5149));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5139) (BgL_method4194z00_5139,
							(obj_t) (BgL_arg4765z00_1970), BgL_procz00_1966, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1966) (BgL_procz00_1966,
					(obj_t) (BgL_nodez00_1965), BEOA);
			}
		}
	}



/* node-walk-box-ref4224 */
	obj_t BGl_nodezd2walkzd2boxzd2ref4224zd2zzast_nodez00(obj_t BgL_envz00_7649,
		obj_t BgL_nodez00_7650, obj_t BgL_procz00_7651)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 366 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1958;

				obj_t BgL_procz00_1959;

				BgL_nodez00_1958 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_7650);
				BgL_procz00_1959 = BgL_procz00_7651;
				{	/* Ast/node.scm 367 */
					BgL_varz00_bglt BgL_arg4762z00_5079;

					BgL_arg4762z00_5079 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1958))->BgL_varz00);
					{	/* Ast/node.scm 367 */
						BgL_nodez00_bglt BgL_nodez00_5081;

						BgL_nodez00_5081 = (BgL_nodez00_bglt) (BgL_arg4762z00_5079);
						{	/* Ast/node.scm 367 */
							obj_t BgL_method4194z00_5083;

							{	/* Ast/node.scm 367 */
								BgL_objectz00_bglt BgL_objz00_5084;

								BgL_objz00_5084 = (BgL_objectz00_bglt) (BgL_nodez00_5081);
								{	/* Ast/node.scm 367 */
									long BgL_objzd2classzd2numz00_5085;

									BgL_objzd2classzd2numz00_5085 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_5084);
									{	/* Ast/node.scm 367 */
										obj_t BgL_arg2643z00_5086;

										BgL_arg2643z00_5086 =
											PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
											(int) (((long) 1)));
										{	/* Ast/node.scm 367 */
											obj_t BgL_arrayz00_5088;

											int BgL_offsetz00_5089;

											BgL_arrayz00_5088 = BgL_arg2643z00_5086;
											BgL_offsetz00_5089 =
												(int) (BgL_objzd2classzd2numz00_5085);
											{	/* Ast/node.scm 367 */
												long BgL_offsetz00_5090;

												BgL_offsetz00_5090 =
													((long) (BgL_offsetz00_5089) - OBJECT_TYPE);
												{	/* Ast/node.scm 367 */
													long BgL_modz00_5091;

													{	/* Ast/node.scm 367 */
														int BgL_arg2645z00_5092;

														BgL_arg2645z00_5092 = (int) (((long) 16));
														{	/* Ast/node.scm 367 */
															long BgL_auxz00_14085;

															BgL_auxz00_14085 = (long) (BgL_arg2645z00_5092);
															BgL_modz00_5091 =
																(BgL_offsetz00_5090 / BgL_auxz00_14085);
													}}
													{	/* Ast/node.scm 367 */
														long BgL_restz00_5093;

														{	/* Ast/node.scm 367 */
															int BgL_arg2644z00_5094;

															BgL_arg2644z00_5094 = (int) (((long) 16));
															{	/* Ast/node.scm 367 */
																long BgL_auxz00_14089;

																BgL_auxz00_14089 = (long) (BgL_arg2644z00_5094);
																BgL_restz00_5093 =
																	(BgL_offsetz00_5090 % BgL_auxz00_14089);
														}}
														{	/* Ast/node.scm 367 */

															BgL_method4194z00_5083 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_5088,
																	(int) (BgL_modz00_5091)),
																(int) (BgL_restz00_5093));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method4194z00_5083) (BgL_method4194z00_5083,
								(obj_t) (BgL_nodez00_5081), BgL_procz00_1959, BEOA);
				}}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1959) (BgL_procz00_1959,
					(obj_t) (BgL_nodez00_1958), BEOA);
			}
		}
	}



/* node-walk-make-box4222 */
	obj_t BGl_nodezd2walkzd2makezd2box4222zd2zzast_nodez00(obj_t BgL_envz00_7652,
		obj_t BgL_nodez00_7653, obj_t BgL_procz00_7654)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 359 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1951;

				obj_t BgL_procz00_1952;

				BgL_nodez00_1951 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_7653);
				BgL_procz00_1952 = BgL_procz00_7654;
				{	/* Ast/node.scm 360 */
					BgL_nodez00_bglt BgL_arg4760z00_5050;

					BgL_arg4760z00_5050 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1951))->BgL_valuez00);
					{	/* Ast/node.scm 360 */
						obj_t BgL_method4194z00_5054;

						{	/* Ast/node.scm 360 */
							BgL_objectz00_bglt BgL_objz00_5055;

							BgL_objz00_5055 = (BgL_objectz00_bglt) (BgL_arg4760z00_5050);
							{	/* Ast/node.scm 360 */
								long BgL_objzd2classzd2numz00_5056;

								BgL_objzd2classzd2numz00_5056 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_5055);
								{	/* Ast/node.scm 360 */
									obj_t BgL_arg2643z00_5057;

									BgL_arg2643z00_5057 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 360 */
										obj_t BgL_arrayz00_5059;

										int BgL_offsetz00_5060;

										BgL_arrayz00_5059 = BgL_arg2643z00_5057;
										BgL_offsetz00_5060 = (int) (BgL_objzd2classzd2numz00_5056);
										{	/* Ast/node.scm 360 */
											long BgL_offsetz00_5061;

											BgL_offsetz00_5061 =
												((long) (BgL_offsetz00_5060) - OBJECT_TYPE);
											{	/* Ast/node.scm 360 */
												long BgL_modz00_5062;

												{	/* Ast/node.scm 360 */
													int BgL_arg2645z00_5063;

													BgL_arg2645z00_5063 = (int) (((long) 16));
													{	/* Ast/node.scm 360 */
														long BgL_auxz00_14112;

														BgL_auxz00_14112 = (long) (BgL_arg2645z00_5063);
														BgL_modz00_5062 =
															(BgL_offsetz00_5061 / BgL_auxz00_14112);
												}}
												{	/* Ast/node.scm 360 */
													long BgL_restz00_5064;

													{	/* Ast/node.scm 360 */
														int BgL_arg2644z00_5065;

														BgL_arg2644z00_5065 = (int) (((long) 16));
														{	/* Ast/node.scm 360 */
															long BgL_auxz00_14116;

															BgL_auxz00_14116 = (long) (BgL_arg2644z00_5065);
															BgL_restz00_5064 =
																(BgL_offsetz00_5061 % BgL_auxz00_14116);
													}}
													{	/* Ast/node.scm 360 */

														BgL_method4194z00_5054 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_5059,
																(int) (BgL_modz00_5062)),
															(int) (BgL_restz00_5064));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_5054) (BgL_method4194z00_5054,
							(obj_t) (BgL_arg4760z00_5050), BgL_procz00_1952, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1952) (BgL_procz00_1952,
					(obj_t) (BgL_nodez00_1951), BEOA);
			}
		}
	}



/* node-walk-select4220 */
	obj_t BGl_nodezd2walkzd2select4220z00zzast_nodez00(obj_t BgL_envz00_7655,
		obj_t BgL_nodez00_7656, obj_t BgL_procz00_7657)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 349 */
			{
				BgL_selectz00_bglt BgL_nodez00_1935;

				obj_t BgL_procz00_1936;

				BgL_nodez00_1935 = (BgL_selectz00_bglt) (BgL_nodez00_7656);
				BgL_procz00_1936 = BgL_procz00_7657;
				{	/* Ast/node.scm 350 */
					BgL_nodez00_bglt BgL_arg4753z00_1939;

					BgL_arg4753z00_1939 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1935))->BgL_testz00);
					{	/* Ast/node.scm 350 */
						obj_t BgL_method4194z00_4993;

						{	/* Ast/node.scm 350 */
							BgL_objectz00_bglt BgL_objz00_4994;

							BgL_objz00_4994 = (BgL_objectz00_bglt) (BgL_arg4753z00_1939);
							{	/* Ast/node.scm 350 */
								long BgL_objzd2classzd2numz00_4995;

								BgL_objzd2classzd2numz00_4995 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4994);
								{	/* Ast/node.scm 350 */
									obj_t BgL_arg2643z00_4996;

									BgL_arg2643z00_4996 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 350 */
										obj_t BgL_arrayz00_4998;

										int BgL_offsetz00_4999;

										BgL_arrayz00_4998 = BgL_arg2643z00_4996;
										BgL_offsetz00_4999 = (int) (BgL_objzd2classzd2numz00_4995);
										{	/* Ast/node.scm 350 */
											long BgL_offsetz00_5000;

											BgL_offsetz00_5000 =
												((long) (BgL_offsetz00_4999) - OBJECT_TYPE);
											{	/* Ast/node.scm 350 */
												long BgL_modz00_5001;

												{	/* Ast/node.scm 350 */
													int BgL_arg2645z00_5002;

													BgL_arg2645z00_5002 = (int) (((long) 16));
													{	/* Ast/node.scm 350 */
														long BgL_auxz00_14139;

														BgL_auxz00_14139 = (long) (BgL_arg2645z00_5002);
														BgL_modz00_5001 =
															(BgL_offsetz00_5000 / BgL_auxz00_14139);
												}}
												{	/* Ast/node.scm 350 */
													long BgL_restz00_5003;

													{	/* Ast/node.scm 350 */
														int BgL_arg2644z00_5004;

														BgL_arg2644z00_5004 = (int) (((long) 16));
														{	/* Ast/node.scm 350 */
															long BgL_auxz00_14143;

															BgL_auxz00_14143 = (long) (BgL_arg2644z00_5004);
															BgL_restz00_5003 =
																(BgL_offsetz00_5000 % BgL_auxz00_14143);
													}}
													{	/* Ast/node.scm 350 */

														BgL_method4194z00_4993 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4998,
																(int) (BgL_modz00_5001)),
															(int) (BgL_restz00_5003));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4993) (BgL_method4194z00_4993,
							(obj_t) (BgL_arg4753z00_1939), BgL_procz00_1936, BEOA);
				}}
				{	/* Ast/node.scm 351 */
					obj_t BgL_g4151z00_1940;

					BgL_g4151z00_1940 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1935))->BgL_clausesz00);
					{
						obj_t BgL_l4149z00_1942;

						BgL_l4149z00_1942 = BgL_g4151z00_1940;
					BgL_zc3anonymousza34754ze3z83_1943:
						if (PAIRP(BgL_l4149z00_1942))
							{	/* Ast/node.scm 353 */
								{	/* Ast/node.scm 352 */
									obj_t BgL_clausez00_1945;

									BgL_clausez00_1945 = CAR(BgL_l4149z00_1942);
									{	/* Ast/node.scm 352 */
										obj_t BgL_arg4756z00_1946;

										BgL_arg4756z00_1946 = CDR(BgL_clausez00_1945);
										{	/* Ast/node.scm 352 */
											BgL_nodez00_bglt BgL_nodez00_5022;

											BgL_nodez00_5022 =
												(BgL_nodez00_bglt) (BgL_arg4756z00_1946);
											{	/* Ast/node.scm 352 */
												obj_t BgL_method4194z00_5024;

												{	/* Ast/node.scm 352 */
													BgL_objectz00_bglt BgL_objz00_5025;

													BgL_objz00_5025 =
														(BgL_objectz00_bglt) (BgL_nodez00_5022);
													{	/* Ast/node.scm 352 */
														long BgL_objzd2classzd2numz00_5026;

														BgL_objzd2classzd2numz00_5026 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_5025);
														{	/* Ast/node.scm 352 */
															obj_t BgL_arg2643z00_5027;

															BgL_arg2643z00_5027 =
																PROCEDURE_REF
																(BGl_nodezd2walkzd2envz00zzast_nodez00,
																(int) (((long) 1)));
															{	/* Ast/node.scm 352 */
																obj_t BgL_arrayz00_5029;

																int BgL_offsetz00_5030;

																BgL_arrayz00_5029 = BgL_arg2643z00_5027;
																BgL_offsetz00_5030 =
																	(int) (BgL_objzd2classzd2numz00_5026);
																{	/* Ast/node.scm 352 */
																	long BgL_offsetz00_5031;

																	BgL_offsetz00_5031 =
																		((long) (BgL_offsetz00_5030) - OBJECT_TYPE);
																	{	/* Ast/node.scm 352 */
																		long BgL_modz00_5032;

																		{	/* Ast/node.scm 352 */
																			int BgL_arg2645z00_5033;

																			BgL_arg2645z00_5033 = (int) (((long) 16));
																			{	/* Ast/node.scm 352 */
																				long BgL_auxz00_14167;

																				BgL_auxz00_14167 =
																					(long) (BgL_arg2645z00_5033);
																				BgL_modz00_5032 =
																					(BgL_offsetz00_5031 /
																					BgL_auxz00_14167);
																		}}
																		{	/* Ast/node.scm 352 */
																			long BgL_restz00_5034;

																			{	/* Ast/node.scm 352 */
																				int BgL_arg2644z00_5035;

																				BgL_arg2644z00_5035 =
																					(int) (((long) 16));
																				{	/* Ast/node.scm 352 */
																					long BgL_auxz00_14171;

																					BgL_auxz00_14171 =
																						(long) (BgL_arg2644z00_5035);
																					BgL_restz00_5034 =
																						(BgL_offsetz00_5031 %
																						BgL_auxz00_14171);
																			}}
																			{	/* Ast/node.scm 352 */

																				BgL_method4194z00_5024 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_5029,
																						(int) (BgL_modz00_5032)),
																					(int) (BgL_restz00_5034));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method4194z00_5024)
													(BgL_method4194z00_5024, (obj_t) (BgL_nodez00_5022),
													BgL_procz00_1936, BEOA);
								}}}}
								{
									obj_t BgL_l4149z00_14181;

									BgL_l4149z00_14181 = CDR(BgL_l4149z00_1942);
									BgL_l4149z00_1942 = BgL_l4149z00_14181;
									goto BgL_zc3anonymousza34754ze3z83_1943;
								}
							}
						else
							{	/* Ast/node.scm 353 */
								((bool_t) 1);
							}
					}
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1936) (BgL_procz00_1936,
					(obj_t) (BgL_nodez00_1935), BEOA);
			}
		}
	}



/* node-walk-fail4218 */
	obj_t BGl_nodezd2walkzd2fail4218z00zzast_nodez00(obj_t BgL_envz00_7658,
		obj_t BgL_nodez00_7659, obj_t BgL_procz00_7660)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 340 */
			{
				BgL_failz00_bglt BgL_nodez00_1926;

				obj_t BgL_procz00_1927;

				BgL_nodez00_1926 = (BgL_failz00_bglt) (BgL_nodez00_7659);
				BgL_procz00_1927 = BgL_procz00_7660;
				{	/* Ast/node.scm 341 */
					BgL_nodez00_bglt BgL_arg4749z00_1930;

					BgL_arg4749z00_1930 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1926))->BgL_procz00);
					{	/* Ast/node.scm 341 */
						obj_t BgL_method4194z00_4909;

						{	/* Ast/node.scm 341 */
							BgL_objectz00_bglt BgL_objz00_4910;

							BgL_objz00_4910 = (BgL_objectz00_bglt) (BgL_arg4749z00_1930);
							{	/* Ast/node.scm 341 */
								long BgL_objzd2classzd2numz00_4911;

								BgL_objzd2classzd2numz00_4911 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4910);
								{	/* Ast/node.scm 341 */
									obj_t BgL_arg2643z00_4912;

									BgL_arg2643z00_4912 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 341 */
										obj_t BgL_arrayz00_4914;

										int BgL_offsetz00_4915;

										BgL_arrayz00_4914 = BgL_arg2643z00_4912;
										BgL_offsetz00_4915 = (int) (BgL_objzd2classzd2numz00_4911);
										{	/* Ast/node.scm 341 */
											long BgL_offsetz00_4916;

											BgL_offsetz00_4916 =
												((long) (BgL_offsetz00_4915) - OBJECT_TYPE);
											{	/* Ast/node.scm 341 */
												long BgL_modz00_4917;

												{	/* Ast/node.scm 341 */
													int BgL_arg2645z00_4918;

													BgL_arg2645z00_4918 = (int) (((long) 16));
													{	/* Ast/node.scm 341 */
														long BgL_auxz00_14196;

														BgL_auxz00_14196 = (long) (BgL_arg2645z00_4918);
														BgL_modz00_4917 =
															(BgL_offsetz00_4916 / BgL_auxz00_14196);
												}}
												{	/* Ast/node.scm 341 */
													long BgL_restz00_4919;

													{	/* Ast/node.scm 341 */
														int BgL_arg2644z00_4920;

														BgL_arg2644z00_4920 = (int) (((long) 16));
														{	/* Ast/node.scm 341 */
															long BgL_auxz00_14200;

															BgL_auxz00_14200 = (long) (BgL_arg2644z00_4920);
															BgL_restz00_4919 =
																(BgL_offsetz00_4916 % BgL_auxz00_14200);
													}}
													{	/* Ast/node.scm 341 */

														BgL_method4194z00_4909 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4914,
																(int) (BgL_modz00_4917)),
															(int) (BgL_restz00_4919));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4909) (BgL_method4194z00_4909,
							(obj_t) (BgL_arg4749z00_1930), BgL_procz00_1927, BEOA);
				}}
				{	/* Ast/node.scm 342 */
					BgL_nodez00_bglt BgL_arg4750z00_1931;

					BgL_arg4750z00_1931 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1926))->BgL_msgz00);
					{	/* Ast/node.scm 342 */
						obj_t BgL_method4194z00_4937;

						{	/* Ast/node.scm 342 */
							BgL_objectz00_bglt BgL_objz00_4938;

							BgL_objz00_4938 = (BgL_objectz00_bglt) (BgL_arg4750z00_1931);
							{	/* Ast/node.scm 342 */
								long BgL_objzd2classzd2numz00_4939;

								BgL_objzd2classzd2numz00_4939 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4938);
								{	/* Ast/node.scm 342 */
									obj_t BgL_arg2643z00_4940;

									BgL_arg2643z00_4940 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 342 */
										obj_t BgL_arrayz00_4942;

										int BgL_offsetz00_4943;

										BgL_arrayz00_4942 = BgL_arg2643z00_4940;
										BgL_offsetz00_4943 = (int) (BgL_objzd2classzd2numz00_4939);
										{	/* Ast/node.scm 342 */
											long BgL_offsetz00_4944;

											BgL_offsetz00_4944 =
												((long) (BgL_offsetz00_4943) - OBJECT_TYPE);
											{	/* Ast/node.scm 342 */
												long BgL_modz00_4945;

												{	/* Ast/node.scm 342 */
													int BgL_arg2645z00_4946;

													BgL_arg2645z00_4946 = (int) (((long) 16));
													{	/* Ast/node.scm 342 */
														long BgL_auxz00_14219;

														BgL_auxz00_14219 = (long) (BgL_arg2645z00_4946);
														BgL_modz00_4945 =
															(BgL_offsetz00_4944 / BgL_auxz00_14219);
												}}
												{	/* Ast/node.scm 342 */
													long BgL_restz00_4947;

													{	/* Ast/node.scm 342 */
														int BgL_arg2644z00_4948;

														BgL_arg2644z00_4948 = (int) (((long) 16));
														{	/* Ast/node.scm 342 */
															long BgL_auxz00_14223;

															BgL_auxz00_14223 = (long) (BgL_arg2644z00_4948);
															BgL_restz00_4947 =
																(BgL_offsetz00_4944 % BgL_auxz00_14223);
													}}
													{	/* Ast/node.scm 342 */

														BgL_method4194z00_4937 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4942,
																(int) (BgL_modz00_4945)),
															(int) (BgL_restz00_4947));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4937) (BgL_method4194z00_4937,
							(obj_t) (BgL_arg4750z00_1931), BgL_procz00_1927, BEOA);
				}}
				{	/* Ast/node.scm 343 */
					BgL_nodez00_bglt BgL_arg4751z00_1932;

					BgL_arg4751z00_1932 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1926))->BgL_objz00);
					{	/* Ast/node.scm 343 */
						obj_t BgL_method4194z00_4965;

						{	/* Ast/node.scm 343 */
							BgL_objectz00_bglt BgL_objz00_4966;

							BgL_objz00_4966 = (BgL_objectz00_bglt) (BgL_arg4751z00_1932);
							{	/* Ast/node.scm 343 */
								long BgL_objzd2classzd2numz00_4967;

								BgL_objzd2classzd2numz00_4967 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4966);
								{	/* Ast/node.scm 343 */
									obj_t BgL_arg2643z00_4968;

									BgL_arg2643z00_4968 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 343 */
										obj_t BgL_arrayz00_4970;

										int BgL_offsetz00_4971;

										BgL_arrayz00_4970 = BgL_arg2643z00_4968;
										BgL_offsetz00_4971 = (int) (BgL_objzd2classzd2numz00_4967);
										{	/* Ast/node.scm 343 */
											long BgL_offsetz00_4972;

											BgL_offsetz00_4972 =
												((long) (BgL_offsetz00_4971) - OBJECT_TYPE);
											{	/* Ast/node.scm 343 */
												long BgL_modz00_4973;

												{	/* Ast/node.scm 343 */
													int BgL_arg2645z00_4974;

													BgL_arg2645z00_4974 = (int) (((long) 16));
													{	/* Ast/node.scm 343 */
														long BgL_auxz00_14242;

														BgL_auxz00_14242 = (long) (BgL_arg2645z00_4974);
														BgL_modz00_4973 =
															(BgL_offsetz00_4972 / BgL_auxz00_14242);
												}}
												{	/* Ast/node.scm 343 */
													long BgL_restz00_4975;

													{	/* Ast/node.scm 343 */
														int BgL_arg2644z00_4976;

														BgL_arg2644z00_4976 = (int) (((long) 16));
														{	/* Ast/node.scm 343 */
															long BgL_auxz00_14246;

															BgL_auxz00_14246 = (long) (BgL_arg2644z00_4976);
															BgL_restz00_4975 =
																(BgL_offsetz00_4972 % BgL_auxz00_14246);
													}}
													{	/* Ast/node.scm 343 */

														BgL_method4194z00_4965 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4970,
																(int) (BgL_modz00_4973)),
															(int) (BgL_restz00_4975));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4965) (BgL_method4194z00_4965,
							(obj_t) (BgL_arg4751z00_1932), BgL_procz00_1927, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1927) (BgL_procz00_1927,
					(obj_t) (BgL_nodez00_1926), BEOA);
			}
		}
	}



/* node-walk-conditiona4216 */
	obj_t BGl_nodezd2walkzd2conditiona4216z00zzast_nodez00(obj_t BgL_envz00_7661,
		obj_t BgL_nodez00_7662, obj_t BgL_procz00_7663)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 331 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1917;

				obj_t BgL_procz00_1918;

				BgL_nodez00_1917 = (BgL_conditionalz00_bglt) (BgL_nodez00_7662);
				BgL_procz00_1918 = BgL_procz00_7663;
				{	/* Ast/node.scm 332 */
					BgL_nodez00_bglt BgL_arg4745z00_1921;

					BgL_arg4745z00_1921 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1917))->BgL_testz00);
					{	/* Ast/node.scm 332 */
						obj_t BgL_method4194z00_4825;

						{	/* Ast/node.scm 332 */
							BgL_objectz00_bglt BgL_objz00_4826;

							BgL_objz00_4826 = (BgL_objectz00_bglt) (BgL_arg4745z00_1921);
							{	/* Ast/node.scm 332 */
								long BgL_objzd2classzd2numz00_4827;

								BgL_objzd2classzd2numz00_4827 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4826);
								{	/* Ast/node.scm 332 */
									obj_t BgL_arg2643z00_4828;

									BgL_arg2643z00_4828 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 332 */
										obj_t BgL_arrayz00_4830;

										int BgL_offsetz00_4831;

										BgL_arrayz00_4830 = BgL_arg2643z00_4828;
										BgL_offsetz00_4831 = (int) (BgL_objzd2classzd2numz00_4827);
										{	/* Ast/node.scm 332 */
											long BgL_offsetz00_4832;

											BgL_offsetz00_4832 =
												((long) (BgL_offsetz00_4831) - OBJECT_TYPE);
											{	/* Ast/node.scm 332 */
												long BgL_modz00_4833;

												{	/* Ast/node.scm 332 */
													int BgL_arg2645z00_4834;

													BgL_arg2645z00_4834 = (int) (((long) 16));
													{	/* Ast/node.scm 332 */
														long BgL_auxz00_14269;

														BgL_auxz00_14269 = (long) (BgL_arg2645z00_4834);
														BgL_modz00_4833 =
															(BgL_offsetz00_4832 / BgL_auxz00_14269);
												}}
												{	/* Ast/node.scm 332 */
													long BgL_restz00_4835;

													{	/* Ast/node.scm 332 */
														int BgL_arg2644z00_4836;

														BgL_arg2644z00_4836 = (int) (((long) 16));
														{	/* Ast/node.scm 332 */
															long BgL_auxz00_14273;

															BgL_auxz00_14273 = (long) (BgL_arg2644z00_4836);
															BgL_restz00_4835 =
																(BgL_offsetz00_4832 % BgL_auxz00_14273);
													}}
													{	/* Ast/node.scm 332 */

														BgL_method4194z00_4825 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4830,
																(int) (BgL_modz00_4833)),
															(int) (BgL_restz00_4835));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4825) (BgL_method4194z00_4825,
							(obj_t) (BgL_arg4745z00_1921), BgL_procz00_1918, BEOA);
				}}
				{	/* Ast/node.scm 333 */
					BgL_nodez00_bglt BgL_arg4746z00_1922;

					BgL_arg4746z00_1922 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1917))->BgL_truez00);
					{	/* Ast/node.scm 333 */
						obj_t BgL_method4194z00_4853;

						{	/* Ast/node.scm 333 */
							BgL_objectz00_bglt BgL_objz00_4854;

							BgL_objz00_4854 = (BgL_objectz00_bglt) (BgL_arg4746z00_1922);
							{	/* Ast/node.scm 333 */
								long BgL_objzd2classzd2numz00_4855;

								BgL_objzd2classzd2numz00_4855 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4854);
								{	/* Ast/node.scm 333 */
									obj_t BgL_arg2643z00_4856;

									BgL_arg2643z00_4856 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 333 */
										obj_t BgL_arrayz00_4858;

										int BgL_offsetz00_4859;

										BgL_arrayz00_4858 = BgL_arg2643z00_4856;
										BgL_offsetz00_4859 = (int) (BgL_objzd2classzd2numz00_4855);
										{	/* Ast/node.scm 333 */
											long BgL_offsetz00_4860;

											BgL_offsetz00_4860 =
												((long) (BgL_offsetz00_4859) - OBJECT_TYPE);
											{	/* Ast/node.scm 333 */
												long BgL_modz00_4861;

												{	/* Ast/node.scm 333 */
													int BgL_arg2645z00_4862;

													BgL_arg2645z00_4862 = (int) (((long) 16));
													{	/* Ast/node.scm 333 */
														long BgL_auxz00_14292;

														BgL_auxz00_14292 = (long) (BgL_arg2645z00_4862);
														BgL_modz00_4861 =
															(BgL_offsetz00_4860 / BgL_auxz00_14292);
												}}
												{	/* Ast/node.scm 333 */
													long BgL_restz00_4863;

													{	/* Ast/node.scm 333 */
														int BgL_arg2644z00_4864;

														BgL_arg2644z00_4864 = (int) (((long) 16));
														{	/* Ast/node.scm 333 */
															long BgL_auxz00_14296;

															BgL_auxz00_14296 = (long) (BgL_arg2644z00_4864);
															BgL_restz00_4863 =
																(BgL_offsetz00_4860 % BgL_auxz00_14296);
													}}
													{	/* Ast/node.scm 333 */

														BgL_method4194z00_4853 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4858,
																(int) (BgL_modz00_4861)),
															(int) (BgL_restz00_4863));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4853) (BgL_method4194z00_4853,
							(obj_t) (BgL_arg4746z00_1922), BgL_procz00_1918, BEOA);
				}}
				{	/* Ast/node.scm 334 */
					BgL_nodez00_bglt BgL_arg4747z00_1923;

					BgL_arg4747z00_1923 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1917))->BgL_falsez00);
					{	/* Ast/node.scm 334 */
						obj_t BgL_method4194z00_4881;

						{	/* Ast/node.scm 334 */
							BgL_objectz00_bglt BgL_objz00_4882;

							BgL_objz00_4882 = (BgL_objectz00_bglt) (BgL_arg4747z00_1923);
							{	/* Ast/node.scm 334 */
								long BgL_objzd2classzd2numz00_4883;

								BgL_objzd2classzd2numz00_4883 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4882);
								{	/* Ast/node.scm 334 */
									obj_t BgL_arg2643z00_4884;

									BgL_arg2643z00_4884 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 334 */
										obj_t BgL_arrayz00_4886;

										int BgL_offsetz00_4887;

										BgL_arrayz00_4886 = BgL_arg2643z00_4884;
										BgL_offsetz00_4887 = (int) (BgL_objzd2classzd2numz00_4883);
										{	/* Ast/node.scm 334 */
											long BgL_offsetz00_4888;

											BgL_offsetz00_4888 =
												((long) (BgL_offsetz00_4887) - OBJECT_TYPE);
											{	/* Ast/node.scm 334 */
												long BgL_modz00_4889;

												{	/* Ast/node.scm 334 */
													int BgL_arg2645z00_4890;

													BgL_arg2645z00_4890 = (int) (((long) 16));
													{	/* Ast/node.scm 334 */
														long BgL_auxz00_14315;

														BgL_auxz00_14315 = (long) (BgL_arg2645z00_4890);
														BgL_modz00_4889 =
															(BgL_offsetz00_4888 / BgL_auxz00_14315);
												}}
												{	/* Ast/node.scm 334 */
													long BgL_restz00_4891;

													{	/* Ast/node.scm 334 */
														int BgL_arg2644z00_4892;

														BgL_arg2644z00_4892 = (int) (((long) 16));
														{	/* Ast/node.scm 334 */
															long BgL_auxz00_14319;

															BgL_auxz00_14319 = (long) (BgL_arg2644z00_4892);
															BgL_restz00_4891 =
																(BgL_offsetz00_4888 % BgL_auxz00_14319);
													}}
													{	/* Ast/node.scm 334 */

														BgL_method4194z00_4881 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4886,
																(int) (BgL_modz00_4889)),
															(int) (BgL_restz00_4891));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4881) (BgL_method4194z00_4881,
							(obj_t) (BgL_arg4747z00_1923), BgL_procz00_1918, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1918) (BgL_procz00_1918,
					(obj_t) (BgL_nodez00_1917), BEOA);
			}
		}
	}



/* node-walk-setq4214 */
	obj_t BGl_nodezd2walkzd2setq4214z00zzast_nodez00(obj_t BgL_envz00_7664,
		obj_t BgL_nodez00_7665, obj_t BgL_procz00_7666)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 324 */
			{
				BgL_setqz00_bglt BgL_nodez00_1910;

				obj_t BgL_procz00_1911;

				BgL_nodez00_1910 = (BgL_setqz00_bglt) (BgL_nodez00_7665);
				BgL_procz00_1911 = BgL_procz00_7666;
				{	/* Ast/node.scm 325 */
					BgL_nodez00_bglt BgL_arg4743z00_4793;

					BgL_arg4743z00_4793 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1910))->BgL_valuez00);
					{	/* Ast/node.scm 325 */
						obj_t BgL_method4194z00_4797;

						{	/* Ast/node.scm 325 */
							BgL_objectz00_bglt BgL_objz00_4798;

							BgL_objz00_4798 = (BgL_objectz00_bglt) (BgL_arg4743z00_4793);
							{	/* Ast/node.scm 325 */
								long BgL_objzd2classzd2numz00_4799;

								BgL_objzd2classzd2numz00_4799 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4798);
								{	/* Ast/node.scm 325 */
									obj_t BgL_arg2643z00_4800;

									BgL_arg2643z00_4800 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 325 */
										obj_t BgL_arrayz00_4802;

										int BgL_offsetz00_4803;

										BgL_arrayz00_4802 = BgL_arg2643z00_4800;
										BgL_offsetz00_4803 = (int) (BgL_objzd2classzd2numz00_4799);
										{	/* Ast/node.scm 325 */
											long BgL_offsetz00_4804;

											BgL_offsetz00_4804 =
												((long) (BgL_offsetz00_4803) - OBJECT_TYPE);
											{	/* Ast/node.scm 325 */
												long BgL_modz00_4805;

												{	/* Ast/node.scm 325 */
													int BgL_arg2645z00_4806;

													BgL_arg2645z00_4806 = (int) (((long) 16));
													{	/* Ast/node.scm 325 */
														long BgL_auxz00_14342;

														BgL_auxz00_14342 = (long) (BgL_arg2645z00_4806);
														BgL_modz00_4805 =
															(BgL_offsetz00_4804 / BgL_auxz00_14342);
												}}
												{	/* Ast/node.scm 325 */
													long BgL_restz00_4807;

													{	/* Ast/node.scm 325 */
														int BgL_arg2644z00_4808;

														BgL_arg2644z00_4808 = (int) (((long) 16));
														{	/* Ast/node.scm 325 */
															long BgL_auxz00_14346;

															BgL_auxz00_14346 = (long) (BgL_arg2644z00_4808);
															BgL_restz00_4807 =
																(BgL_offsetz00_4804 % BgL_auxz00_14346);
													}}
													{	/* Ast/node.scm 325 */

														BgL_method4194z00_4797 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4802,
																(int) (BgL_modz00_4805)),
															(int) (BgL_restz00_4807));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4797) (BgL_method4194z00_4797,
							(obj_t) (BgL_arg4743z00_4793), BgL_procz00_1911, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1911) (BgL_procz00_1911,
					(obj_t) (BgL_nodez00_1910), BEOA);
			}
		}
	}



/* node-walk-cast4212 */
	obj_t BGl_nodezd2walkzd2cast4212z00zzast_nodez00(obj_t BgL_envz00_7667,
		obj_t BgL_nodez00_7668, obj_t BgL_procz00_7669)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 317 */
			{
				BgL_castz00_bglt BgL_nodez00_1903;

				obj_t BgL_procz00_1904;

				BgL_nodez00_1903 = (BgL_castz00_bglt) (BgL_nodez00_7668);
				BgL_procz00_1904 = BgL_procz00_7669;
				{	/* Ast/node.scm 318 */
					BgL_nodez00_bglt BgL_arg4741z00_4764;

					BgL_arg4741z00_4764 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1903))->BgL_argz00);
					{	/* Ast/node.scm 318 */
						obj_t BgL_method4194z00_4768;

						{	/* Ast/node.scm 318 */
							BgL_objectz00_bglt BgL_objz00_4769;

							BgL_objz00_4769 = (BgL_objectz00_bglt) (BgL_arg4741z00_4764);
							{	/* Ast/node.scm 318 */
								long BgL_objzd2classzd2numz00_4770;

								BgL_objzd2classzd2numz00_4770 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4769);
								{	/* Ast/node.scm 318 */
									obj_t BgL_arg2643z00_4771;

									BgL_arg2643z00_4771 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 318 */
										obj_t BgL_arrayz00_4773;

										int BgL_offsetz00_4774;

										BgL_arrayz00_4773 = BgL_arg2643z00_4771;
										BgL_offsetz00_4774 = (int) (BgL_objzd2classzd2numz00_4770);
										{	/* Ast/node.scm 318 */
											long BgL_offsetz00_4775;

											BgL_offsetz00_4775 =
												((long) (BgL_offsetz00_4774) - OBJECT_TYPE);
											{	/* Ast/node.scm 318 */
												long BgL_modz00_4776;

												{	/* Ast/node.scm 318 */
													int BgL_arg2645z00_4777;

													BgL_arg2645z00_4777 = (int) (((long) 16));
													{	/* Ast/node.scm 318 */
														long BgL_auxz00_14369;

														BgL_auxz00_14369 = (long) (BgL_arg2645z00_4777);
														BgL_modz00_4776 =
															(BgL_offsetz00_4775 / BgL_auxz00_14369);
												}}
												{	/* Ast/node.scm 318 */
													long BgL_restz00_4778;

													{	/* Ast/node.scm 318 */
														int BgL_arg2644z00_4779;

														BgL_arg2644z00_4779 = (int) (((long) 16));
														{	/* Ast/node.scm 318 */
															long BgL_auxz00_14373;

															BgL_auxz00_14373 = (long) (BgL_arg2644z00_4779);
															BgL_restz00_4778 =
																(BgL_offsetz00_4775 % BgL_auxz00_14373);
													}}
													{	/* Ast/node.scm 318 */

														BgL_method4194z00_4768 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4773,
																(int) (BgL_modz00_4776)),
															(int) (BgL_restz00_4778));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4768) (BgL_method4194z00_4768,
							(obj_t) (BgL_arg4741z00_4764), BgL_procz00_1904, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1904) (BgL_procz00_1904,
					(obj_t) (BgL_nodez00_1903), BEOA);
			}
		}
	}



/* node-walk-extern4210 */
	obj_t BGl_nodezd2walkzd2extern4210z00zzast_nodez00(obj_t BgL_envz00_7670,
		obj_t BgL_nodez00_7671, obj_t BgL_procz00_7672)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 310 */
			{
				BgL_externz00_bglt BgL_nodez00_1896;

				obj_t BgL_procz00_1897;

				BgL_nodez00_1896 = (BgL_externz00_bglt) (BgL_nodez00_7671);
				BgL_procz00_1897 = BgL_procz00_7672;
				{	/* Ast/node.scm 311 */
					obj_t BgL_arg4739z00_4762;

					BgL_arg4739z00_4762 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1896))->BgL_exprza2za2);
					BGl_nodezd2walkza2z70zzast_nodez00(BgL_arg4739z00_4762,
						BgL_procz00_1897);
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1897) (BgL_procz00_1897,
					(obj_t) (BgL_nodez00_1896), BEOA);
			}
		}
	}



/* node-walk-funcall4208 */
	obj_t BGl_nodezd2walkzd2funcall4208z00zzast_nodez00(obj_t BgL_envz00_7673,
		obj_t BgL_nodez00_7674, obj_t BgL_procz00_7675)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 302 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1888;

				obj_t BgL_procz00_1889;

				BgL_nodez00_1888 = (BgL_funcallz00_bglt) (BgL_nodez00_7674);
				BgL_procz00_1889 = BgL_procz00_7675;
				{	/* Ast/node.scm 303 */
					BgL_nodez00_bglt BgL_arg4735z00_1892;

					BgL_arg4735z00_1892 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1888))->BgL_funz00);
					{	/* Ast/node.scm 303 */
						obj_t BgL_method4194z00_4736;

						{	/* Ast/node.scm 303 */
							BgL_objectz00_bglt BgL_objz00_4737;

							BgL_objz00_4737 = (BgL_objectz00_bglt) (BgL_arg4735z00_1892);
							{	/* Ast/node.scm 303 */
								long BgL_objzd2classzd2numz00_4738;

								BgL_objzd2classzd2numz00_4738 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4737);
								{	/* Ast/node.scm 303 */
									obj_t BgL_arg2643z00_4739;

									BgL_arg2643z00_4739 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 303 */
										obj_t BgL_arrayz00_4741;

										int BgL_offsetz00_4742;

										BgL_arrayz00_4741 = BgL_arg2643z00_4739;
										BgL_offsetz00_4742 = (int) (BgL_objzd2classzd2numz00_4738);
										{	/* Ast/node.scm 303 */
											long BgL_offsetz00_4743;

											BgL_offsetz00_4743 =
												((long) (BgL_offsetz00_4742) - OBJECT_TYPE);
											{	/* Ast/node.scm 303 */
												long BgL_modz00_4744;

												{	/* Ast/node.scm 303 */
													int BgL_arg2645z00_4745;

													BgL_arg2645z00_4745 = (int) (((long) 16));
													{	/* Ast/node.scm 303 */
														long BgL_auxz00_14402;

														BgL_auxz00_14402 = (long) (BgL_arg2645z00_4745);
														BgL_modz00_4744 =
															(BgL_offsetz00_4743 / BgL_auxz00_14402);
												}}
												{	/* Ast/node.scm 303 */
													long BgL_restz00_4746;

													{	/* Ast/node.scm 303 */
														int BgL_arg2644z00_4747;

														BgL_arg2644z00_4747 = (int) (((long) 16));
														{	/* Ast/node.scm 303 */
															long BgL_auxz00_14406;

															BgL_auxz00_14406 = (long) (BgL_arg2644z00_4747);
															BgL_restz00_4746 =
																(BgL_offsetz00_4743 % BgL_auxz00_14406);
													}}
													{	/* Ast/node.scm 303 */

														BgL_method4194z00_4736 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4741,
																(int) (BgL_modz00_4744)),
															(int) (BgL_restz00_4746));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4736) (BgL_method4194z00_4736,
							(obj_t) (BgL_arg4735z00_1892), BgL_procz00_1889, BEOA);
				}}
				{	/* Ast/node.scm 304 */
					obj_t BgL_arg4736z00_1893;

					BgL_arg4736z00_1893 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1888))->BgL_argsz00);
					BGl_nodezd2walkza2z70zzast_nodez00(BgL_arg4736z00_1893,
						BgL_procz00_1889);
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1889) (BgL_procz00_1889,
					(obj_t) (BgL_nodez00_1888), BEOA);
			}
		}
	}



/* node-walk-app-ly4206 */
	obj_t BGl_nodezd2walkzd2appzd2ly4206zd2zzast_nodez00(obj_t BgL_envz00_7676,
		obj_t BgL_nodez00_7677, obj_t BgL_procz00_7678)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 294 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1880;

				obj_t BgL_procz00_1881;

				BgL_nodez00_1880 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_7677);
				BgL_procz00_1881 = BgL_procz00_7678;
				{	/* Ast/node.scm 295 */
					BgL_nodez00_bglt BgL_arg4732z00_1884;

					BgL_arg4732z00_1884 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1880))->BgL_funz00);
					{	/* Ast/node.scm 295 */
						obj_t BgL_method4194z00_4680;

						{	/* Ast/node.scm 295 */
							BgL_objectz00_bglt BgL_objz00_4681;

							BgL_objz00_4681 = (BgL_objectz00_bglt) (BgL_arg4732z00_1884);
							{	/* Ast/node.scm 295 */
								long BgL_objzd2classzd2numz00_4682;

								BgL_objzd2classzd2numz00_4682 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4681);
								{	/* Ast/node.scm 295 */
									obj_t BgL_arg2643z00_4683;

									BgL_arg2643z00_4683 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 295 */
										obj_t BgL_arrayz00_4685;

										int BgL_offsetz00_4686;

										BgL_arrayz00_4685 = BgL_arg2643z00_4683;
										BgL_offsetz00_4686 = (int) (BgL_objzd2classzd2numz00_4682);
										{	/* Ast/node.scm 295 */
											long BgL_offsetz00_4687;

											BgL_offsetz00_4687 =
												((long) (BgL_offsetz00_4686) - OBJECT_TYPE);
											{	/* Ast/node.scm 295 */
												long BgL_modz00_4688;

												{	/* Ast/node.scm 295 */
													int BgL_arg2645z00_4689;

													BgL_arg2645z00_4689 = (int) (((long) 16));
													{	/* Ast/node.scm 295 */
														long BgL_auxz00_14431;

														BgL_auxz00_14431 = (long) (BgL_arg2645z00_4689);
														BgL_modz00_4688 =
															(BgL_offsetz00_4687 / BgL_auxz00_14431);
												}}
												{	/* Ast/node.scm 295 */
													long BgL_restz00_4690;

													{	/* Ast/node.scm 295 */
														int BgL_arg2644z00_4691;

														BgL_arg2644z00_4691 = (int) (((long) 16));
														{	/* Ast/node.scm 295 */
															long BgL_auxz00_14435;

															BgL_auxz00_14435 = (long) (BgL_arg2644z00_4691);
															BgL_restz00_4690 =
																(BgL_offsetz00_4687 % BgL_auxz00_14435);
													}}
													{	/* Ast/node.scm 295 */

														BgL_method4194z00_4680 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4685,
																(int) (BgL_modz00_4688)),
															(int) (BgL_restz00_4690));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4680) (BgL_method4194z00_4680,
							(obj_t) (BgL_arg4732z00_1884), BgL_procz00_1881, BEOA);
				}}
				{	/* Ast/node.scm 296 */
					BgL_nodez00_bglt BgL_arg4733z00_1885;

					BgL_arg4733z00_1885 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1880))->BgL_argz00);
					{	/* Ast/node.scm 296 */
						obj_t BgL_method4194z00_4708;

						{	/* Ast/node.scm 296 */
							BgL_objectz00_bglt BgL_objz00_4709;

							BgL_objz00_4709 = (BgL_objectz00_bglt) (BgL_arg4733z00_1885);
							{	/* Ast/node.scm 296 */
								long BgL_objzd2classzd2numz00_4710;

								BgL_objzd2classzd2numz00_4710 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_4709);
								{	/* Ast/node.scm 296 */
									obj_t BgL_arg2643z00_4711;

									BgL_arg2643z00_4711 =
										PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
										(int) (((long) 1)));
									{	/* Ast/node.scm 296 */
										obj_t BgL_arrayz00_4713;

										int BgL_offsetz00_4714;

										BgL_arrayz00_4713 = BgL_arg2643z00_4711;
										BgL_offsetz00_4714 = (int) (BgL_objzd2classzd2numz00_4710);
										{	/* Ast/node.scm 296 */
											long BgL_offsetz00_4715;

											BgL_offsetz00_4715 =
												((long) (BgL_offsetz00_4714) - OBJECT_TYPE);
											{	/* Ast/node.scm 296 */
												long BgL_modz00_4716;

												{	/* Ast/node.scm 296 */
													int BgL_arg2645z00_4717;

													BgL_arg2645z00_4717 = (int) (((long) 16));
													{	/* Ast/node.scm 296 */
														long BgL_auxz00_14454;

														BgL_auxz00_14454 = (long) (BgL_arg2645z00_4717);
														BgL_modz00_4716 =
															(BgL_offsetz00_4715 / BgL_auxz00_14454);
												}}
												{	/* Ast/node.scm 296 */
													long BgL_restz00_4718;

													{	/* Ast/node.scm 296 */
														int BgL_arg2644z00_4719;

														BgL_arg2644z00_4719 = (int) (((long) 16));
														{	/* Ast/node.scm 296 */
															long BgL_auxz00_14458;

															BgL_auxz00_14458 = (long) (BgL_arg2644z00_4719);
															BgL_restz00_4718 =
																(BgL_offsetz00_4715 % BgL_auxz00_14458);
													}}
													{	/* Ast/node.scm 296 */

														BgL_method4194z00_4708 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_4713,
																(int) (BgL_modz00_4716)),
															(int) (BgL_restz00_4718));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method4194z00_4708) (BgL_method4194z00_4708,
							(obj_t) (BgL_arg4733z00_1885), BgL_procz00_1881, BEOA);
				}}
				return
					PROCEDURE_ENTRY(BgL_procz00_1881) (BgL_procz00_1881,
					(obj_t) (BgL_nodez00_1880), BEOA);
			}
		}
	}



/* node-walk-app4204 */
	obj_t BGl_nodezd2walkzd2app4204z00zzast_nodez00(obj_t BgL_envz00_7679,
		obj_t BgL_nodez00_7680, obj_t BgL_procz00_7681)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 286 */
			{
				BgL_appz00_bglt BgL_nodez00_1872;

				obj_t BgL_procz00_1873;

				BgL_nodez00_1872 = (BgL_appz00_bglt) (BgL_nodez00_7680);
				BgL_procz00_1873 = BgL_procz00_7681;
				{	/* Ast/node.scm 287 */
					BgL_varz00_bglt BgL_arg4729z00_1876;

					BgL_arg4729z00_1876 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1872))->BgL_funz00);
					{	/* Ast/node.scm 287 */
						BgL_nodez00_bglt BgL_nodez00_4649;

						BgL_nodez00_4649 = (BgL_nodez00_bglt) (BgL_arg4729z00_1876);
						{	/* Ast/node.scm 287 */
							obj_t BgL_method4194z00_4651;

							{	/* Ast/node.scm 287 */
								BgL_objectz00_bglt BgL_objz00_4652;

								BgL_objz00_4652 = (BgL_objectz00_bglt) (BgL_nodez00_4649);
								{	/* Ast/node.scm 287 */
									long BgL_objzd2classzd2numz00_4653;

									BgL_objzd2classzd2numz00_4653 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_4652);
									{	/* Ast/node.scm 287 */
										obj_t BgL_arg2643z00_4654;

										BgL_arg2643z00_4654 =
											PROCEDURE_REF(BGl_nodezd2walkzd2envz00zzast_nodez00,
											(int) (((long) 1)));
										{	/* Ast/node.scm 287 */
											obj_t BgL_arrayz00_4656;

											int BgL_offsetz00_4657;

											BgL_arrayz00_4656 = BgL_arg2643z00_4654;
											BgL_offsetz00_4657 =
												(int) (BgL_objzd2classzd2numz00_4653);
											{	/* Ast/node.scm 287 */
												long BgL_offsetz00_4658;

												BgL_offsetz00_4658 =
													((long) (BgL_offsetz00_4657) - OBJECT_TYPE);
												{	/* Ast/node.scm 287 */
													long BgL_modz00_4659;

													{	/* Ast/node.scm 287 */
														int BgL_arg2645z00_4660;

														BgL_arg2645z00_4660 = (int) (((long) 16));
														{	/* Ast/node.scm 287 */
															long BgL_auxz00_14482;

															BgL_auxz00_14482 = (long) (BgL_arg2645z00_4660);
															BgL_modz00_4659 =
																(BgL_offsetz00_4658 / BgL_auxz00_14482);
													}}
													{	/* Ast/node.scm 287 */
														long BgL_restz00_4661;

														{	/* Ast/node.scm 287 */
															int BgL_arg2644z00_4662;

															BgL_arg2644z00_4662 = (int) (((long) 16));
															{	/* Ast/node.scm 287 */
																long BgL_auxz00_14486;

																BgL_auxz00_14486 = (long) (BgL_arg2644z00_4662);
																BgL_restz00_4661 =
																	(BgL_offsetz00_4658 % BgL_auxz00_14486);
														}}
														{	/* Ast/node.scm 287 */

															BgL_method4194z00_4651 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_4656,
																	(int) (BgL_modz00_4659)),
																(int) (BgL_restz00_4661));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method4194z00_4651) (BgL_method4194z00_4651,
								(obj_t) (BgL_nodez00_4649), BgL_procz00_1873, BEOA);
				}}}
				{	/* Ast/node.scm 288 */
					obj_t BgL_arg4730z00_1877;

					BgL_arg4730z00_1877 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1872))->BgL_argsz00);
					BGl_nodezd2walkza2z70zzast_nodez00(BgL_arg4730z00_1877,
						BgL_procz00_1873);
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1873) (BgL_procz00_1873,
					(obj_t) (BgL_nodez00_1872), BEOA);
			}
		}
	}



/* node-walk-sequence4202 */
	obj_t BGl_nodezd2walkzd2sequence4202z00zzast_nodez00(obj_t BgL_envz00_7682,
		obj_t BgL_nodez00_7683, obj_t BgL_procz00_7684)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 279 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1865;

				obj_t BgL_procz00_1866;

				BgL_nodez00_1865 = (BgL_sequencez00_bglt) (BgL_nodez00_7683);
				BgL_procz00_1866 = BgL_procz00_7684;
				{	/* Ast/node.scm 280 */
					obj_t BgL_arg4727z00_4646;

					BgL_arg4727z00_4646 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1865))->BgL_nodesz00);
					BGl_nodezd2walkza2z70zzast_nodez00(BgL_arg4727z00_4646,
						BgL_procz00_1866);
				}
				return
					PROCEDURE_ENTRY(BgL_procz00_1866) (BgL_procz00_1866,
					(obj_t) (BgL_nodez00_1865), BEOA);
			}
		}
	}



/* node-walk-kwote4200 */
	obj_t BGl_nodezd2walkzd2kwote4200z00zzast_nodez00(obj_t BgL_envz00_7685,
		obj_t BgL_nodez00_7686, obj_t BgL_procz00_7687)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 273 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1859;

				obj_t BgL_procz00_1860;

				BgL_nodez00_1859 = (BgL_kwotez00_bglt) (BgL_nodez00_7686);
				BgL_procz00_1860 = BgL_procz00_7687;
				return
					PROCEDURE_ENTRY(BgL_procz00_1860) (BgL_procz00_1860,
					(obj_t) (BgL_nodez00_1859), BEOA);
			}
		}
	}



/* node-walk-var4198 */
	obj_t BGl_nodezd2walkzd2var4198z00zzast_nodez00(obj_t BgL_envz00_7688,
		obj_t BgL_nodez00_7689, obj_t BgL_procz00_7690)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 267 */
			{
				BgL_varz00_bglt BgL_nodez00_1853;

				obj_t BgL_procz00_1854;

				BgL_nodez00_1853 = (BgL_varz00_bglt) (BgL_nodez00_7689);
				BgL_procz00_1854 = BgL_procz00_7690;
				return
					PROCEDURE_ENTRY(BgL_procz00_1854) (BgL_procz00_1854,
					(obj_t) (BgL_nodez00_1853), BEOA);
			}
		}
	}



/* node-walk-atom4196 */
	obj_t BGl_nodezd2walkzd2atom4196z00zzast_nodez00(obj_t BgL_envz00_7691,
		obj_t BgL_nodez00_7692, obj_t BgL_procz00_7693)
	{
		AN_OBJECT;
		{	/* Ast/node.scm 261 */
			{
				BgL_atomz00_bglt BgL_nodez00_1847;

				obj_t BgL_procz00_1848;

				BgL_nodez00_1847 = (BgL_atomz00_bglt) (BgL_nodez00_7692);
				BgL_procz00_1848 = BgL_procz00_7693;
				return
					PROCEDURE_ENTRY(BgL_procz00_1848) (BgL_procz00_1848,
					(obj_t) (BgL_nodez00_1847), BEOA);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_nodez00()
	{
		AN_OBJECT;
		{	/* Ast/node.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5549z00zzast_nodez00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5549z00zzast_nodez00));
		}
	}

#ifdef __cplusplus
}
#endif
