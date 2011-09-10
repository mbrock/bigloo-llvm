/*===========================================================================*/
/*   (Cfa/tvector.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/tvector.scm)*/
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

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

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_kwotezf2nodezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                      *BgL_kwotezf2nodezf2_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_vrefzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                      *BgL_vrefzf2cinfozf2_bglt;

	typedef struct BgL_vsetz12zf2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vsetz12zf2cinfoze0_bglt;

	typedef struct BgL_vlengthzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vlengthzf2cinfozf2_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static bool_t BGl_patchzd2treez12zc0zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_patchz12zd2atom5419zc0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2kwotezf2node5423z32zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2jumpzd2exzd2it5453zc0zzcfa_tvectorz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_patchza2z12zb0zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	static obj_t
		BGl_getzd2vectorzd2itemzd2type5410zd2zzcfa_tvectorz00(BgL_nodez00_bglt);
	static obj_t BGl_getzd2vectorzd2itemzd2type5413zd2zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_getzd2vectorzd2itemzd2type5415zd2zzcfa_tvectorz00(obj_t,
		obj_t);
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	static obj_t BGl__getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_patchz12zd2app5461zc0zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_patchz12zd2letzd2fun5447z12zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_tvectorz00();
	static obj_t BGl__addzd2makezd2vectorz12z12zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2closure5427zc0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl__unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00(obj_t);
	static obj_t BGl_patchz12zd2setzd2exzd2it5451zc0zzcfa_tvectorz00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_patchz12zd2letzd2var5449z12zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_patchz12zd2makezd2vectorzd2a5465zc0zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl__patchzd2vectorzd2setz12z12zzcfa_tvectorz00(obj_t);
	extern BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_patchzd2funz12zc0zzcfa_tvectorz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_tvectorz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_vsetz12zf2Cinfoze0zzcfa_info3z00;
	static obj_t BGl_patchz12zd2cast5437zc0zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
	static obj_t BGl_patchz12zd2vsetz12zf2Cinfo5471z20zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2sequence5429zc0zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static bool_t BGl_showzd2tvectorzd2zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_inlinezd2setupz12zc0zzinline_walkz00(obj_t);
	static obj_t BGl_patchz12zd2var5425zc0zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_patchz12zd2boxzd2setz125457z00zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_vrefzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__getzd2vectorzd2itemzd2type5410zd2zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2setq5439zc0zzcfa_tvectorz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	extern BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt, long, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl__patchz12z12zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_tvectorz00();
	static obj_t BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00 = BUNSPEC;
	static obj_t BGl_patchz12zd2extern5435zc0zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
	static obj_t BGl__patchz12zd2default5416zc0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2appzd2ly5431z12zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2vrefzf2Cinfo5469z32zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2conditional5441zc0zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_tvectorz00 = BUNSPEC;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_patchz12zd2default5416zc0zzcfa_tvectorz00(BgL_nodez00_bglt);
	static obj_t BGl__tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_tvectorz00();
	extern obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_declarezd2tvectorszd2zzcfa_tvectorz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_patchz12zd2fail5443zc0zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_patchz12zd2makezd2box5455z12zzcfa_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00();
	static obj_t BGl_patchz12z12zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_patchz12zd2funcall5433zc0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_tvectorz00();
	static obj_t BGl_getzd2tvectorszd2zzcfa_tvectorz00();
	extern obj_t BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t, obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t
		BGl_patchzd2vectorzd2ze3listz12zf1zzcfa_tvectorz00(BgL_appz00_bglt);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_patchz12zd2kwote5421zc0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12zd2valloczf2Cinfozb25467z80zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2select5445zc0zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_patchz12zd2vlength5463zc0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00();
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl__vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_patchz12zd2boxzd2ref5459z12zzcfa_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern obj_t BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_tvectorz00();
	static obj_t __cnst[23];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2optimiza7ationzf3zd2envz54zzcfa_tvectorz00,
		BgL_bgl__tvectorza7d2optim6073za7,
		BGl__tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_patchz12zd2default5416zd2envz12zzcfa_tvectorz00,
		BgL_bgl__patchza712za7d2defa6074z00,
		BGl__patchz12zd2default5416zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unpatchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl__unpatchza7d2vecto6075za7,
		BGl__unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
		BgL_bgl__getza7d2vectorza7d26076z00,
		BGl__getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2vectorzd2itemzd2type5410zd2envz00zzcfa_tvectorz00,
		BgL_bgl__getza7d2vectorza7d26077z00,
		BGl__getzd2vectorzd2itemzd2type5410zd2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2makezd2vectorz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl__addza7d2makeza7d2ve6078z00,
		BGl__addzd2makezd2vectorz12z12zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2ze3tvectorz12zd2envzf1zzcfa_tvectorz00,
		BgL_bgl__vectorza7d2za7e3tve6079z00,
		BGl__vectorzd2ze3tvectorz12z23zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6040z00zzcfa_tvectorz00,
		BgL_bgl_getza7d2vectorza7d2i6080z00,
		BGl_getzd2vectorzd2itemzd2type5415zd2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6039z00zzcfa_tvectorz00,
		BgL_bgl_getza7d2vectorza7d2i6081z00,
		BGl_getzd2vectorzd2itemzd2type5413zd2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6041z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2atom56082z00,
		BGl_patchz12zd2atom5419zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6042z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2kwote6083z00,
		BGl_patchz12zd2kwote5421zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6043z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2kwote6084z00,
		BGl_patchz12zd2kwotezf2node5423z32zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6044z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2var546085z00,
		BGl_patchz12zd2var5425zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6045z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2closu6086z00,
		BGl_patchz12zd2closure5427zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6046z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2seque6087z00,
		BGl_patchz12zd2sequence5429zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6047z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2appza7d6088za7,
		BGl_patchz12zd2appzd2ly5431z12zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6048z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2funca6089z00,
		BGl_patchz12zd2funcall5433zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6050z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2cast56090z00,
		BGl_patchz12zd2cast5437zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6049z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2exter6091z00,
		BGl_patchz12zd2extern5435zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6051z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2setq56092z00,
		BGl_patchz12zd2setq5439zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6052z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2condi6093z00,
		BGl_patchz12zd2conditional5441zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6053z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2fail56094z00,
		BGl_patchz12zd2fail5443zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6054z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2selec6095z00,
		BGl_patchz12zd2select5445zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6055z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2letza7d6096za7,
		BGl_patchz12zd2letzd2fun5447z12zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6056z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2letza7d6097za7,
		BGl_patchz12zd2letzd2var5449z12zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6057z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2setza7d6098za7,
		BGl_patchz12zd2setzd2exzd2it5451zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6058z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2jumpza76099za7,
		BGl_patchz12zd2jumpzd2exzd2it5453zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6060z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2boxza7d6100za7,
		BGl_patchz12zd2boxzd2setz125457z00zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6059z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2makeza76101za7,
		BGl_patchz12zd2makezd2box5455z12zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6061z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2boxza7d6102za7,
		BGl_patchz12zd2boxzd2ref5459z12zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6062z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2app546103z00,
		BGl_patchz12zd2app5461zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6063z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2vleng6104z00,
		BGl_patchz12zd2vlength5463zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6064z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2makeza76105za7,
		BGl_patchz12zd2makezd2vectorzd2a5465zc0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6065z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2vallo6106z00,
		BGl_patchz12zd2valloczf2Cinfozb25467z80zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6066z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2vrefza76107za7,
		BGl_patchz12zd2vrefzf2Cinfo5469z32zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc6067z00zzcfa_tvectorz00,
		BgL_bgl_patchza712za7d2vsetza76108za7,
		BGl_patchz12zd2vsetz12zf2Cinfo5471z20zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string6033z00zzcfa_tvectorz00,
		BgL_bgl_string6033za700za7za7c6109za7, "   . Vector -> Tvector", 22);
	      DEFINE_STRING(BGl_string6034z00zzcfa_tvectorz00,
		BgL_bgl_string6034za700za7za7c6110za7, " -> vector of ", 14);
	      DEFINE_STRING(BGl_string6035z00zzcfa_tvectorz00,
		BgL_bgl_string6035za700za7za7c6111za7, "        vector of ", 18);
	      DEFINE_STRING(BGl_string6036z00zzcfa_tvectorz00,
		BgL_bgl_string6036za700za7za7c6112za7, "get-vector-item-type", 20);
	      DEFINE_STRING(BGl_string6037z00zzcfa_tvectorz00,
		BgL_bgl_string6037za700za7za7c6113za7, "patch!", 6);
	      DEFINE_STRING(BGl_string6038z00zzcfa_tvectorz00,
		BgL_bgl_string6038za700za7za7c6114za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string6068z00zzcfa_tvectorz00,
		BgL_bgl_string6068za700za7za7c6115za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string6070z00zzcfa_tvectorz00,
		BgL_bgl_string6070za700za7za7c6116za7,
		"a-tvector __r4_vectors_6_8 vector->list -length make- allocate- -ref -set! patch!-default5416 get-vector-item-type5410 value ->list done no-remove unit cfa tv-of- all (vector-set! c-vector-set! vector-set-ur!) vector? $vector? c-vector? (vector-set! vector-set-ur! c-vector-set! $vector-set! $vector-set-ur!) ",
		309);
	      DEFINE_STRING(BGl_string6069z00zzcfa_tvectorz00,
		BgL_bgl_string6069za700za7za7c6117za7, "cfa_tvector", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl__patchza7d2vectorza76118z00,
		BGl__patchzd2vectorzd2setz12z12zzcfa_tvectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_GENERIC(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl__patchza712za712za7za7cf6119z00, BGl__patchz12z12zzcfa_tvectorz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long
		BgL_checksumz00_3795, char *BgL_fromz00_3796)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_tvectorz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_tvectorz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_tvectorz00();
					BGl_cnstzd2initzd2zzcfa_tvectorz00();
					BGl_importedzd2moduleszd2initz00zzcfa_tvectorz00();
					BGl_genericzd2initzd2zzcfa_tvectorz00();
					BGl_methodzd2initzd2zzcfa_tvectorz00();
					BGl_toplevelzd2initzd2zzcfa_tvectorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_tvector");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			{	/* Cfa/tvector.scm 15 */
				obj_t BgL_cportz00_3784;

				BgL_cportz00_3784 =
					bgl_open_input_string(BGl_string6070z00zzcfa_tvectorz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3785;

					BgL_iz00_3785 = ((long) 22);
				BgL_loopz00_3786:
					if ((BgL_iz00_3785 == ((long) -1)))
						{	/* Cfa/tvector.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/tvector.scm 15 */
							{	/* Cfa/tvector.scm 15 */
								obj_t BgL_arg6072z00_3788;

								{	/* Cfa/tvector.scm 15 */

									{	/* Cfa/tvector.scm 15 */
										obj_t BgL_locationz00_3790;

										BgL_locationz00_3790 = BBOOL(((bool_t) 0));
										{	/* Cfa/tvector.scm 15 */

											BgL_arg6072z00_3788 =
												BGl_readz00zz__readerz00(BgL_cportz00_3784,
												BgL_locationz00_3790);
										}
									}
								}
								{	/* Cfa/tvector.scm 15 */
									int BgL_auxz00_3817;

									BgL_auxz00_3817 = (int) (BgL_iz00_3785);
									CNST_TABLE_SET(BgL_auxz00_3817, BgL_arg6072z00_3788);
							}}
							{	/* Cfa/tvector.scm 15 */
								int BgL_auxz00_3791;

								BgL_auxz00_3791 = (int) ((BgL_iz00_3785 - ((long) 1)));
								{
									long BgL_iz00_3822;

									BgL_iz00_3822 = (long) (BgL_auxz00_3791);
									BgL_iz00_3785 = BgL_iz00_3822;
									goto BgL_loopz00_3786;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00 = BNIL;
			return BUNSPEC;
		}
	}



/* tvector-optimization? */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 59 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 3)))
				{	/* Cfa/tvector.scm 60 */
					if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
						{	/* Cfa/tvector.scm 60 */
							return BFALSE;
						}
					else
						{	/* Cfa/tvector.scm 60 */
							return BTRUE;
						}
				}
			else
				{	/* Cfa/tvector.scm 60 */
					return BFALSE;
				}
		}
	}



/* _tvector-optimization? */
	obj_t BGl__tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00(obj_t
		BgL_envz00_3680)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 59 */
			return BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00();
		}
	}



/* patch-vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 68 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 69 */
					{	/* Cfa/tvector.scm 71 */
						obj_t BgL_g5391z00_1230;

						BgL_g5391z00_1230 = CNST_TABLE_REF(((long) 0));
						{
							obj_t BgL_l5389z00_1232;

							BgL_l5389z00_1232 = BgL_g5391z00_1230;
						BgL_zc3anonymousza35491ze3z83_1233:
							if (PAIRP(BgL_l5389z00_1232))
								{	/* Cfa/tvector.scm 82 */
									{	/* Cfa/tvector.scm 72 */
										obj_t BgL_setz00_1235;

										BgL_setz00_1235 = CAR(BgL_l5389z00_1232);
										{	/* Cfa/tvector.scm 72 */
											obj_t BgL_gz00_1236;

											BgL_gz00_1236 =
												BGl_findzd2globalzd2zzast_envz00(BgL_setz00_1235, BNIL);
											if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1236,
													BGl_globalz00zzast_varz00))
												{	/* Cfa/tvector.scm 74 */
													BgL_valuez00_bglt BgL_funz00_1238;

													{
														BgL_variablez00_bglt BgL_auxz00_3840;

														BgL_auxz00_3840 =
															(BgL_variablez00_bglt) (
															(BgL_globalz00_bglt) (BgL_gz00_1236));
														BgL_funz00_1238 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3840))->
															BgL_valuez00);
													}
													{	/* Cfa/tvector.scm 76 */
														bool_t BgL_testz00_3844;

														{	/* Cfa/tvector.scm 76 */
															obj_t BgL_obj2088z00_2442;

															BgL_obj2088z00_2442 = (obj_t) (BgL_funz00_1238);
															BgL_testz00_3844 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2088z00_2442, BGl_cfunz00zzast_varz00);
														}
														if (BgL_testz00_3844)
															{	/* Cfa/tvector.scm 77 */
																obj_t BgL_arg5495z00_1240;

																BgL_typez00_bglt BgL_arg5496z00_1241;

																{	/* Cfa/tvector.scm 77 */
																	obj_t BgL_pairz00_2444;

																	{
																		BgL_cfunz00_bglt BgL_auxz00_3847;

																		BgL_auxz00_3847 =
																			(BgL_cfunz00_bglt) (BgL_funz00_1238);
																		BgL_pairz00_2444 =
																			(((BgL_cfunz00_bglt)
																				CREF(BgL_auxz00_3847))->
																			BgL_argszd2typezd2);
																	}
																	BgL_arg5495z00_1240 =
																		CDR(CDR(BgL_pairz00_2444));
																}
																BgL_arg5496z00_1241 =
																	BGl_getzd2defaultzd2typez00zztype_cachez00();
																{	/* Cfa/tvector.scm 77 */
																	obj_t BgL_auxz00_3853;

																	BgL_auxz00_3853 =
																		(obj_t) (BgL_arg5496z00_1241);
																	SET_CAR(BgL_arg5495z00_1240, BgL_auxz00_3853);
																}
															}
														else
															{	/* Cfa/tvector.scm 79 */
																bool_t BgL_testz00_3856;

																{	/* Cfa/tvector.scm 79 */
																	obj_t BgL_obj2024z00_2450;

																	BgL_obj2024z00_2450 =
																		(obj_t) (BgL_funz00_1238);
																	BgL_testz00_3856 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2024z00_2450,
																		BGl_sfunz00zzast_varz00);
																}
																if (BgL_testz00_3856)
																	{	/* Cfa/tvector.scm 80 */
																		obj_t BgL_arg5499z00_1244;

																		BgL_typez00_bglt BgL_arg5500z00_1245;

																		{	/* Cfa/tvector.scm 80 */
																			obj_t BgL_pairz00_2452;

																			{
																				BgL_sfunz00_bglt BgL_auxz00_3859;

																				BgL_auxz00_3859 =
																					(BgL_sfunz00_bglt) (BgL_funz00_1238);
																				BgL_pairz00_2452 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_3859))->
																					BgL_argsz00);
																			}
																			BgL_arg5499z00_1244 =
																				CAR(CDR(CDR(BgL_pairz00_2452)));
																		}
																		BgL_arg5500z00_1245 =
																			BGl_getzd2defaultzd2typez00zztype_cachez00
																			();
																		{
																			BgL_variablez00_bglt BgL_auxz00_3866;

																			BgL_auxz00_3866 =
																				(BgL_variablez00_bglt)
																				(BgL_arg5499z00_1244);
																			((((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_3866))->
																					BgL_typez00) =
																				((BgL_typez00_bglt)
																					BgL_arg5500z00_1245), BUNSPEC);
																		}
																	}
																else
																	{	/* Cfa/tvector.scm 79 */
																		BFALSE;
																	}
															}
													}
												}
											else
												{	/* Cfa/tvector.scm 73 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l5389z00_3869;

										BgL_l5389z00_3869 = CDR(BgL_l5389z00_1232);
										BgL_l5389z00_1232 = BgL_l5389z00_3869;
										goto BgL_zc3anonymousza35491ze3z83_1233;
									}
								}
							else
								{	/* Cfa/tvector.scm 82 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/tvector.scm 84 */
						obj_t BgL_gz00_1250;

						BgL_gz00_1250 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
							BNIL);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1250,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 86 */
								BgL_valuez00_bglt BgL_fz00_1252;

								{
									BgL_variablez00_bglt BgL_auxz00_3875;

									BgL_auxz00_3875 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gz00_1250));
									BgL_fz00_1252 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3875))->
										BgL_valuez00);
								}
								{	/* Cfa/tvector.scm 87 */
									obj_t BgL_arg5505z00_1253;

									BgL_typez00_bglt BgL_arg5506z00_1254;

									{
										BgL_cfunz00_bglt BgL_auxz00_3879;

										BgL_auxz00_3879 = (BgL_cfunz00_bglt) (BgL_fz00_1252);
										BgL_arg5505z00_1253 =
											(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3879))->
											BgL_argszd2typezd2);
									}
									BgL_arg5506z00_1254 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									{	/* Cfa/tvector.scm 87 */
										obj_t BgL_auxz00_3883;

										BgL_auxz00_3883 = (obj_t) (BgL_arg5506z00_1254);
										SET_CAR(BgL_arg5505z00_1253, BgL_auxz00_3883);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 85 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 88 */
						obj_t BgL_gz00_1256;

						BgL_gz00_1256 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
							BNIL);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1256,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 90 */
								BgL_valuez00_bglt BgL_fz00_1258;

								{
									BgL_variablez00_bglt BgL_auxz00_3890;

									BgL_auxz00_3890 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gz00_1256));
									BgL_fz00_1258 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3890))->
										BgL_valuez00);
								}
								{	/* Cfa/tvector.scm 91 */
									obj_t BgL_arg5509z00_1259;

									BgL_typez00_bglt BgL_arg5510z00_1260;

									{
										BgL_cfunz00_bglt BgL_auxz00_3894;

										BgL_auxz00_3894 = (BgL_cfunz00_bglt) (BgL_fz00_1258);
										BgL_arg5509z00_1259 =
											(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3894))->
											BgL_argszd2typezd2);
									}
									BgL_arg5510z00_1260 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									{	/* Cfa/tvector.scm 91 */
										obj_t BgL_auxz00_3898;

										BgL_auxz00_3898 = (obj_t) (BgL_arg5510z00_1260);
										SET_CAR(BgL_arg5509z00_1259, BgL_auxz00_3898);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 89 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 92 */
						obj_t BgL_gz00_1262;

						BgL_gz00_1262 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
							BNIL);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1262,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 94 */
								BgL_valuez00_bglt BgL_fz00_1264;

								{
									BgL_variablez00_bglt BgL_auxz00_3905;

									BgL_auxz00_3905 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gz00_1262));
									BgL_fz00_1264 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3905))->
										BgL_valuez00);
								}
								{	/* Cfa/tvector.scm 95 */
									obj_t BgL_arg5513z00_1265;

									BgL_typez00_bglt BgL_arg5514z00_1266;

									{	/* Cfa/tvector.scm 95 */
										obj_t BgL_pairz00_2474;

										{
											BgL_sfunz00_bglt BgL_auxz00_3909;

											BgL_auxz00_3909 = (BgL_sfunz00_bglt) (BgL_fz00_1264);
											BgL_pairz00_2474 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3909))->
												BgL_argsz00);
										}
										BgL_arg5513z00_1265 = CAR(BgL_pairz00_2474);
									}
									BgL_arg5514z00_1266 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									{
										BgL_variablez00_bglt BgL_auxz00_3914;

										BgL_auxz00_3914 =
											(BgL_variablez00_bglt) (BgL_arg5513z00_1265);
										return
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_3914))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_arg5514z00_1266), BUNSPEC);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 93 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Cfa/tvector.scm 69 */
					return BFALSE;
				}
		}
	}



/* _patch-vector-set! */
	obj_t BGl__patchzd2vectorzd2setz12z12zzcfa_tvectorz00(obj_t BgL_envz00_3681)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 68 */
			return BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
		}
	}



/* unpatch-vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 104 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 105 */
					{	/* Cfa/tvector.scm 107 */
						obj_t BgL_g5394z00_1270;

						BgL_g5394z00_1270 = CNST_TABLE_REF(((long) 4));
						{
							obj_t BgL_l5392z00_1272;

							BgL_l5392z00_1272 = BgL_g5394z00_1270;
						BgL_zc3anonymousza35518ze3z83_1273:
							if (PAIRP(BgL_l5392z00_1272))
								{	/* Cfa/tvector.scm 118 */
									{	/* Cfa/tvector.scm 108 */
										obj_t BgL_setz00_1275;

										BgL_setz00_1275 = CAR(BgL_l5392z00_1272);
										{	/* Cfa/tvector.scm 108 */
											obj_t BgL_gz00_1276;

											BgL_gz00_1276 =
												BGl_findzd2globalzd2zzast_envz00(BgL_setz00_1275, BNIL);
											if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1276,
													BGl_globalz00zzast_varz00))
												{	/* Cfa/tvector.scm 110 */
													BgL_valuez00_bglt BgL_funz00_1278;

													{
														BgL_variablez00_bglt BgL_auxz00_3928;

														BgL_auxz00_3928 =
															(BgL_variablez00_bglt) (
															(BgL_globalz00_bglt) (BgL_gz00_1276));
														BgL_funz00_1278 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3928))->
															BgL_valuez00);
													}
													{	/* Cfa/tvector.scm 112 */
														bool_t BgL_testz00_3932;

														{	/* Cfa/tvector.scm 112 */
															obj_t BgL_obj2088z00_2481;

															BgL_obj2088z00_2481 = (obj_t) (BgL_funz00_1278);
															BgL_testz00_3932 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2088z00_2481, BGl_cfunz00zzast_varz00);
														}
														if (BgL_testz00_3932)
															{	/* Cfa/tvector.scm 113 */
																obj_t BgL_arg5522z00_1280;

																{	/* Cfa/tvector.scm 113 */
																	obj_t BgL_pairz00_2483;

																	{
																		BgL_cfunz00_bglt BgL_auxz00_3935;

																		BgL_auxz00_3935 =
																			(BgL_cfunz00_bglt) (BgL_funz00_1278);
																		BgL_pairz00_2483 =
																			(((BgL_cfunz00_bglt)
																				CREF(BgL_auxz00_3935))->
																			BgL_argszd2typezd2);
																	}
																	BgL_arg5522z00_1280 =
																		CDR(CDR(BgL_pairz00_2483));
																}
																SET_CAR(BgL_arg5522z00_1280,
																	BGl_za2objza2z00zztype_cachez00);
															}
														else
															{	/* Cfa/tvector.scm 115 */
																bool_t BgL_testz00_3941;

																{	/* Cfa/tvector.scm 115 */
																	obj_t BgL_obj2024z00_2489;

																	BgL_obj2024z00_2489 =
																		(obj_t) (BgL_funz00_1278);
																	BgL_testz00_3941 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2024z00_2489,
																		BGl_sfunz00zzast_varz00);
																}
																if (BgL_testz00_3941)
																	{	/* Cfa/tvector.scm 116 */
																		obj_t BgL_arg5525z00_1283;

																		{	/* Cfa/tvector.scm 116 */
																			obj_t BgL_pairz00_2491;

																			{
																				BgL_sfunz00_bglt BgL_auxz00_3944;

																				BgL_auxz00_3944 =
																					(BgL_sfunz00_bglt) (BgL_funz00_1278);
																				BgL_pairz00_2491 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_3944))->
																					BgL_argsz00);
																			}
																			BgL_arg5525z00_1283 =
																				CAR(CDR(CDR(BgL_pairz00_2491)));
																		}
																		{
																			BgL_typez00_bglt BgL_auxz00_3952;

																			BgL_variablez00_bglt BgL_auxz00_3950;

																			BgL_auxz00_3952 =
																				(BgL_typez00_bglt)
																				(BGl_za2objza2z00zztype_cachez00);
																			BgL_auxz00_3950 =
																				(BgL_variablez00_bglt)
																				(BgL_arg5525z00_1283);
																			((((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_3950))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_auxz00_3952),
																				BUNSPEC);
																		}
																	}
																else
																	{	/* Cfa/tvector.scm 115 */
																		BFALSE;
																	}
															}
													}
												}
											else
												{	/* Cfa/tvector.scm 109 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l5392z00_3955;

										BgL_l5392z00_3955 = CDR(BgL_l5392z00_1272);
										BgL_l5392z00_1272 = BgL_l5392z00_3955;
										goto BgL_zc3anonymousza35518ze3z83_1273;
									}
								}
							else
								{	/* Cfa/tvector.scm 118 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/tvector.scm 119 */
						obj_t BgL_gz00_1288;

						BgL_gz00_1288 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
							BNIL);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1288,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 121 */
								BgL_valuez00_bglt BgL_fz00_1290;

								{
									BgL_variablez00_bglt BgL_auxz00_3961;

									BgL_auxz00_3961 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gz00_1288));
									BgL_fz00_1290 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3961))->
										BgL_valuez00);
								}
								{	/* Cfa/tvector.scm 122 */
									obj_t BgL_arg5530z00_1291;

									{
										BgL_cfunz00_bglt BgL_auxz00_3965;

										BgL_auxz00_3965 = (BgL_cfunz00_bglt) (BgL_fz00_1290);
										BgL_arg5530z00_1291 =
											(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3965))->
											BgL_argszd2typezd2);
									}
									SET_CAR(BgL_arg5530z00_1291, BGl_za2objza2z00zztype_cachez00);
								}
							}
						else
							{	/* Cfa/tvector.scm 120 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 123 */
						obj_t BgL_gz00_1293;

						BgL_gz00_1293 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
							BNIL);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1293,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 125 */
								BgL_valuez00_bglt BgL_fz00_1295;

								{
									BgL_variablez00_bglt BgL_auxz00_3973;

									BgL_auxz00_3973 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gz00_1293));
									BgL_fz00_1295 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3973))->
										BgL_valuez00);
								}
								{	/* Cfa/tvector.scm 126 */
									obj_t BgL_arg5533z00_1296;

									{
										BgL_cfunz00_bglt BgL_auxz00_3977;

										BgL_auxz00_3977 = (BgL_cfunz00_bglt) (BgL_fz00_1295);
										BgL_arg5533z00_1296 =
											(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3977))->
											BgL_argszd2typezd2);
									}
									SET_CAR(BgL_arg5533z00_1296, BGl_za2objza2z00zztype_cachez00);
								}
							}
						else
							{	/* Cfa/tvector.scm 124 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 127 */
						obj_t BgL_gz00_1298;

						BgL_gz00_1298 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
							BNIL);
						if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1298,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 129 */
								BgL_valuez00_bglt BgL_fz00_1300;

								{
									BgL_variablez00_bglt BgL_auxz00_3985;

									BgL_auxz00_3985 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gz00_1298));
									BgL_fz00_1300 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3985))->
										BgL_valuez00);
								}
								{	/* Cfa/tvector.scm 130 */
									obj_t BgL_arg5536z00_1301;

									{	/* Cfa/tvector.scm 130 */
										obj_t BgL_pairz00_2513;

										{
											BgL_sfunz00_bglt BgL_auxz00_3989;

											BgL_auxz00_3989 = (BgL_sfunz00_bglt) (BgL_fz00_1300);
											BgL_pairz00_2513 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3989))->
												BgL_argsz00);
										}
										BgL_arg5536z00_1301 = CAR(BgL_pairz00_2513);
									}
									{
										BgL_typez00_bglt BgL_auxz00_3995;

										BgL_variablez00_bglt BgL_auxz00_3993;

										BgL_auxz00_3995 =
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
										BgL_auxz00_3993 =
											(BgL_variablez00_bglt) (BgL_arg5536z00_1301);
										return
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_3993))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_3995), BUNSPEC);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 128 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Cfa/tvector.scm 105 */
					return BUNSPEC;
				}
		}
	}



/* _unpatch-vector-set! */
	obj_t BGl__unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00(obj_t BgL_envz00_3682)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 104 */
			return BGl_unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00();
		}
	}



/* vector->tvector! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t
		BgL_globalsz00_33)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 136 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 137 */
					BGl_inlinezd2setupz12zc0zzinline_walkz00(CNST_TABLE_REF(((long) 5)));
					{	/* Cfa/tvector.scm 146 */
						obj_t BgL_tvectorsz00_1305;

						BgL_tvectorsz00_1305 = BGl_getzd2tvectorszd2zzcfa_tvectorz00();
						BGl_showzd2tvectorzd2zzcfa_tvectorz00(BgL_tvectorsz00_1305);
						if (PAIRP(BgL_tvectorsz00_1305))
							{	/* Cfa/tvector.scm 150 */
								obj_t BgL_addzd2treezd2_1307;

								BgL_addzd2treezd2_1307 =
									BGl_declarezd2tvectorszd2zzcfa_tvectorz00
									(BgL_tvectorsz00_1305);
								BGl_patchzd2treez12zc0zzcfa_tvectorz00(BgL_globalsz00_33);
								return BgL_addzd2treezd2_1307;
							}
						else
							{	/* Cfa/tvector.scm 149 */
								BGl_patchzd2treez12zc0zzcfa_tvectorz00(BgL_globalsz00_33);
								return BNIL;
							}
					}
				}
			else
				{	/* Cfa/tvector.scm 137 */
					return BNIL;
				}
		}
	}



/* _vector->tvector! */
	obj_t BGl__vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t BgL_envz00_3683,
		obj_t BgL_globalsz00_3684)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 136 */
			return BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(BgL_globalsz00_3684);
		}
	}



/* add-make-vector! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(BgL_nodez00_bglt
		BgL_nodez00_34)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 168 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 169 */
					return (BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00 =
						MAKE_PAIR(
							(obj_t) (BgL_nodez00_34),
							BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00), BUNSPEC);
				}
			else
				{	/* Cfa/tvector.scm 169 */
					return BFALSE;
				}
		}
	}



/* _add-make-vector! */
	obj_t BGl__addzd2makezd2vectorz12z12zzcfa_tvectorz00(obj_t BgL_envz00_3685,
		obj_t BgL_nodez00_3686)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 168 */
			return
				BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3686));
		}
	}



/* get-tvectors */
	obj_t BGl_getzd2tvectorszd2zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 178 */
			{
				obj_t BgL_appsz00_1311;

				obj_t BgL_tvectorsz00_1312;

				BgL_appsz00_1311 = BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00;
				BgL_tvectorsz00_1312 = BNIL;
			BgL_zc3anonymousza35542ze3z83_1313:
				if (NULLP(BgL_appsz00_1311))
					{	/* Cfa/tvector.scm 181 */
						return BgL_tvectorsz00_1312;
					}
				else
					{	/* Cfa/tvector.scm 183 */
						obj_t BgL_appz00_1315;

						BgL_appz00_1315 = CAR(BgL_appsz00_1311);
						{	/* Cfa/tvector.scm 183 */
							BgL_typez00_bglt BgL_typez00_1316;

							{	/* Cfa/tvector.scm 184 */
								BgL_typez00_bglt BgL_res5950z00_2545;

								{	/* Cfa/tvector.scm 184 */
									BgL_nodez00_bglt BgL_nodez00_2519;

									BgL_nodez00_2519 = (BgL_nodez00_bglt) (BgL_appz00_1315);
									{	/* Cfa/tvector.scm 184 */
										obj_t BgL_method5411z00_2520;

										{	/* Cfa/tvector.scm 184 */
											BgL_objectz00_bglt BgL_objz00_2521;

											BgL_objz00_2521 = (BgL_objectz00_bglt) (BgL_nodez00_2519);
											{	/* Cfa/tvector.scm 184 */
												long BgL_objzd2classzd2numz00_2522;

												BgL_objzd2classzd2numz00_2522 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2521);
												{	/* Cfa/tvector.scm 184 */
													obj_t BgL_arg2643z00_2523;

													BgL_arg2643z00_2523 =
														PROCEDURE_REF
														(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
														(int) (((long) 1)));
													{	/* Cfa/tvector.scm 184 */
														obj_t BgL_arrayz00_2525;

														int BgL_offsetz00_2526;

														BgL_arrayz00_2525 = BgL_arg2643z00_2523;
														BgL_offsetz00_2526 =
															(int) (BgL_objzd2classzd2numz00_2522);
														{	/* Cfa/tvector.scm 184 */
															long BgL_offsetz00_2527;

															BgL_offsetz00_2527 =
																((long) (BgL_offsetz00_2526) - OBJECT_TYPE);
															{	/* Cfa/tvector.scm 184 */
																long BgL_modz00_2528;

																{	/* Cfa/tvector.scm 184 */
																	int BgL_arg2645z00_2529;

																	BgL_arg2645z00_2529 = (int) (((long) 16));
																	{	/* Cfa/tvector.scm 184 */
																		long BgL_auxz00_4031;

																		BgL_auxz00_4031 =
																			(long) (BgL_arg2645z00_2529);
																		BgL_modz00_2528 =
																			(BgL_offsetz00_2527 / BgL_auxz00_4031);
																}}
																{	/* Cfa/tvector.scm 184 */
																	long BgL_restz00_2530;

																	{	/* Cfa/tvector.scm 184 */
																		int BgL_arg2644z00_2531;

																		BgL_arg2644z00_2531 = (int) (((long) 16));
																		{	/* Cfa/tvector.scm 184 */
																			long BgL_auxz00_4035;

																			BgL_auxz00_4035 =
																				(long) (BgL_arg2644z00_2531);
																			BgL_restz00_2530 =
																				(BgL_offsetz00_2527 % BgL_auxz00_4035);
																	}}
																	{	/* Cfa/tvector.scm 184 */

																		BgL_method5411z00_2520 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2525,
																				(int) (BgL_modz00_2528)),
																			(int) (BgL_restz00_2530));
										}}}}}}}}
										BgL_res5950z00_2545 =
											(BgL_typez00_bglt) (PROCEDURE_ENTRY
											(BgL_method5411z00_2520) (BgL_method5411z00_2520,
												(obj_t) (BgL_nodez00_2519), BEOA));
								}}
								BgL_typez00_1316 = BgL_res5950z00_2545;
							}
							{	/* Cfa/tvector.scm 184 */

								{	/* Cfa/tvector.scm 188 */
									bool_t BgL_testz00_4046;

									if (
										((obj_t) (BgL_typez00_1316) ==
											BGl_za2_za2z00zztype_cachez00))
										{	/* Cfa/tvector.scm 188 */
											BgL_testz00_4046 = ((bool_t) 0);
										}
									else
										{	/* Cfa/tvector.scm 188 */
											if (BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_1316,
													(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00)))
												{	/* Cfa/tvector.scm 189 */
													BgL_testz00_4046 = ((bool_t) 0);
												}
											else
												{	/* Cfa/tvector.scm 189 */
													BgL_testz00_4046 = ((bool_t) 1);
												}
										}
									if (BgL_testz00_4046)
										{	/* Cfa/tvector.scm 190 */
											obj_t BgL_arg5545z00_1318;

											obj_t BgL_arg5546z00_1319;

											BgL_arg5545z00_1318 = CDR(BgL_appsz00_1311);
											BgL_arg5546z00_1319 =
												MAKE_PAIR(BgL_appz00_1315, BgL_tvectorsz00_1312);
											{
												obj_t BgL_tvectorsz00_4056;

												obj_t BgL_appsz00_4055;

												BgL_appsz00_4055 = BgL_arg5545z00_1318;
												BgL_tvectorsz00_4056 = BgL_arg5546z00_1319;
												BgL_tvectorsz00_1312 = BgL_tvectorsz00_4056;
												BgL_appsz00_1311 = BgL_appsz00_4055;
												goto BgL_zc3anonymousza35542ze3z83_1313;
											}
										}
									else
										{
											obj_t BgL_appsz00_4057;

											BgL_appsz00_4057 = CDR(BgL_appsz00_1311);
											BgL_appsz00_1311 = BgL_appsz00_4057;
											goto BgL_zc3anonymousza35542ze3z83_1313;
										}
								}
							}
						}
					}
			}
		}
	}



/* show-tvector */
	bool_t BGl_showzd2tvectorzd2zzcfa_tvectorz00(obj_t BgL_tvectorz00_39)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 219 */
			{	/* Cfa/tvector.scm 220 */
				obj_t BgL_list5550z00_1324;

				{	/* Cfa/tvector.scm 220 */
					obj_t BgL_arg5552z00_1326;

					BgL_arg5552z00_1326 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
					BgL_list5550z00_1324 =
						MAKE_PAIR(BGl_string6033z00zzcfa_tvectorz00, BgL_arg5552z00_1326);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list5550z00_1324);
			}
			{
				obj_t BgL_l5395z00_1328;

				BgL_l5395z00_1328 = BgL_tvectorz00_39;
			BgL_zc3anonymousza35553ze3z83_1329:
				if (PAIRP(BgL_l5395z00_1328))
					{	/* Cfa/tvector.scm 221 */
						{	/* Cfa/tvector.scm 222 */
							obj_t BgL_appz00_1331;

							BgL_appz00_1331 = CAR(BgL_l5395z00_1328);
							{	/* Cfa/tvector.scm 222 */
								obj_t BgL_arg5557z00_1334;

								obj_t BgL_arg5559z00_1336;

								BgL_arg5557z00_1334 =
									BGl_shapez00zztools_shapez00(BGl_za2objza2z00zztype_cachez00);
								{	/* Cfa/tvector.scm 225 */
									BgL_typez00_bglt BgL_arg5565z00_1342;

									{	/* Cfa/tvector.scm 225 */
										BgL_typez00_bglt BgL_res5953z00_2576;

										{	/* Cfa/tvector.scm 225 */
											BgL_nodez00_bglt BgL_nodez00_2550;

											BgL_nodez00_2550 = (BgL_nodez00_bglt) (BgL_appz00_1331);
											{	/* Cfa/tvector.scm 225 */
												obj_t BgL_method5411z00_2551;

												{	/* Cfa/tvector.scm 225 */
													BgL_objectz00_bglt BgL_objz00_2552;

													BgL_objz00_2552 =
														(BgL_objectz00_bglt) (BgL_nodez00_2550);
													{	/* Cfa/tvector.scm 225 */
														long BgL_objzd2classzd2numz00_2553;

														BgL_objzd2classzd2numz00_2553 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2552);
														{	/* Cfa/tvector.scm 225 */
															obj_t BgL_arg2643z00_2554;

															BgL_arg2643z00_2554 =
																PROCEDURE_REF
																(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
																(int) (((long) 1)));
															{	/* Cfa/tvector.scm 225 */
																obj_t BgL_arrayz00_2556;

																int BgL_offsetz00_2557;

																BgL_arrayz00_2556 = BgL_arg2643z00_2554;
																BgL_offsetz00_2557 =
																	(int) (BgL_objzd2classzd2numz00_2553);
																{	/* Cfa/tvector.scm 225 */
																	long BgL_offsetz00_2558;

																	BgL_offsetz00_2558 =
																		((long) (BgL_offsetz00_2557) - OBJECT_TYPE);
																	{	/* Cfa/tvector.scm 225 */
																		long BgL_modz00_2559;

																		{	/* Cfa/tvector.scm 225 */
																			int BgL_arg2645z00_2560;

																			BgL_arg2645z00_2560 = (int) (((long) 16));
																			{	/* Cfa/tvector.scm 225 */
																				long BgL_auxz00_4077;

																				BgL_auxz00_4077 =
																					(long) (BgL_arg2645z00_2560);
																				BgL_modz00_2559 =
																					(BgL_offsetz00_2558 /
																					BgL_auxz00_4077);
																		}}
																		{	/* Cfa/tvector.scm 225 */
																			long BgL_restz00_2561;

																			{	/* Cfa/tvector.scm 225 */
																				int BgL_arg2644z00_2562;

																				BgL_arg2644z00_2562 =
																					(int) (((long) 16));
																				{	/* Cfa/tvector.scm 225 */
																					long BgL_auxz00_4081;

																					BgL_auxz00_4081 =
																						(long) (BgL_arg2644z00_2562);
																					BgL_restz00_2561 =
																						(BgL_offsetz00_2558 %
																						BgL_auxz00_4081);
																			}}
																			{	/* Cfa/tvector.scm 225 */

																				BgL_method5411z00_2551 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2556,
																						(int) (BgL_modz00_2559)),
																					(int) (BgL_restz00_2561));
												}}}}}}}}
												BgL_res5953z00_2576 =
													(BgL_typez00_bglt) (PROCEDURE_ENTRY
													(BgL_method5411z00_2551) (BgL_method5411z00_2551,
														(obj_t) (BgL_nodez00_2550), BEOA));
										}}
										BgL_arg5565z00_1342 = BgL_res5953z00_2576;
									}
									BgL_arg5559z00_1336 =
										BGl_shapez00zztools_shapez00((obj_t) (BgL_arg5565z00_1342));
								}
								{	/* Cfa/tvector.scm 222 */
									obj_t BgL_list5560z00_1337;

									{	/* Cfa/tvector.scm 222 */
										obj_t BgL_arg5561z00_1338;

										{	/* Cfa/tvector.scm 222 */
											obj_t BgL_arg5562z00_1339;

											{	/* Cfa/tvector.scm 222 */
												obj_t BgL_arg5563z00_1340;

												{	/* Cfa/tvector.scm 222 */
													obj_t BgL_arg5564z00_1341;

													BgL_arg5564z00_1341 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
													BgL_arg5563z00_1340 =
														MAKE_PAIR(BgL_arg5559z00_1336, BgL_arg5564z00_1341);
												}
												BgL_arg5562z00_1339 =
													MAKE_PAIR(BGl_string6034z00zzcfa_tvectorz00,
													BgL_arg5563z00_1340);
											}
											BgL_arg5561z00_1338 =
												MAKE_PAIR(BgL_arg5557z00_1334, BgL_arg5562z00_1339);
										}
										BgL_list5560z00_1337 =
											MAKE_PAIR(BGl_string6035z00zzcfa_tvectorz00,
											BgL_arg5561z00_1338);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list5560z00_1337);
						}}}
						{
							obj_t BgL_l5395z00_4102;

							BgL_l5395z00_4102 = CDR(BgL_l5395z00_1328);
							BgL_l5395z00_1328 = BgL_l5395z00_4102;
							goto BgL_zc3anonymousza35553ze3z83_1329;
						}
					}
				else
					{	/* Cfa/tvector.scm 221 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* declare-tvectors */
	obj_t BGl_declarezd2tvectorszd2zzcfa_tvectorz00(obj_t BgL_tvectorz00_40)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 232 */
			{
				obj_t BgL_l5397z00_1346;

				BgL_l5397z00_1346 = BgL_tvectorz00_40;
			BgL_zc3anonymousza35567ze3z83_1347:
				if (PAIRP(BgL_l5397z00_1346))
					{	/* Cfa/tvector.scm 234 */
						{	/* Cfa/tvector.scm 235 */
							obj_t BgL_appz00_1349;

							BgL_appz00_1349 = CAR(BgL_l5397z00_1346);
							{	/* Cfa/tvector.scm 235 */
								BgL_typez00_bglt BgL_typez00_1350;

								{	/* Cfa/tvector.scm 235 */
									BgL_typez00_bglt BgL_res5956z00_2606;

									{	/* Cfa/tvector.scm 235 */
										BgL_nodez00_bglt BgL_nodez00_2580;

										BgL_nodez00_2580 = (BgL_nodez00_bglt) (BgL_appz00_1349);
										{	/* Cfa/tvector.scm 235 */
											obj_t BgL_method5411z00_2581;

											{	/* Cfa/tvector.scm 235 */
												BgL_objectz00_bglt BgL_objz00_2582;

												BgL_objz00_2582 =
													(BgL_objectz00_bglt) (BgL_nodez00_2580);
												{	/* Cfa/tvector.scm 235 */
													long BgL_objzd2classzd2numz00_2583;

													BgL_objzd2classzd2numz00_2583 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2582);
													{	/* Cfa/tvector.scm 235 */
														obj_t BgL_arg2643z00_2584;

														BgL_arg2643z00_2584 =
															PROCEDURE_REF
															(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
															(int) (((long) 1)));
														{	/* Cfa/tvector.scm 235 */
															obj_t BgL_arrayz00_2586;

															int BgL_offsetz00_2587;

															BgL_arrayz00_2586 = BgL_arg2643z00_2584;
															BgL_offsetz00_2587 =
																(int) (BgL_objzd2classzd2numz00_2583);
															{	/* Cfa/tvector.scm 235 */
																long BgL_offsetz00_2588;

																BgL_offsetz00_2588 =
																	((long) (BgL_offsetz00_2587) - OBJECT_TYPE);
																{	/* Cfa/tvector.scm 235 */
																	long BgL_modz00_2589;

																	{	/* Cfa/tvector.scm 235 */
																		int BgL_arg2645z00_2590;

																		BgL_arg2645z00_2590 = (int) (((long) 16));
																		{	/* Cfa/tvector.scm 235 */
																			long BgL_auxz00_4116;

																			BgL_auxz00_4116 =
																				(long) (BgL_arg2645z00_2590);
																			BgL_modz00_2589 =
																				(BgL_offsetz00_2588 / BgL_auxz00_4116);
																	}}
																	{	/* Cfa/tvector.scm 235 */
																		long BgL_restz00_2591;

																		{	/* Cfa/tvector.scm 235 */
																			int BgL_arg2644z00_2592;

																			BgL_arg2644z00_2592 = (int) (((long) 16));
																			{	/* Cfa/tvector.scm 235 */
																				long BgL_auxz00_4120;

																				BgL_auxz00_4120 =
																					(long) (BgL_arg2644z00_2592);
																				BgL_restz00_2591 =
																					(BgL_offsetz00_2588 %
																					BgL_auxz00_4120);
																		}}
																		{	/* Cfa/tvector.scm 235 */

																			BgL_method5411z00_2581 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2586,
																					(int) (BgL_modz00_2589)),
																				(int) (BgL_restz00_2591));
											}}}}}}}}
											BgL_res5956z00_2606 =
												(BgL_typez00_bglt) (PROCEDURE_ENTRY
												(BgL_method5411z00_2581) (BgL_method5411z00_2581,
													(obj_t) (BgL_nodez00_2580), BEOA));
									}}
									BgL_typez00_1350 = BgL_res5956z00_2606;
								}
								{	/* Cfa/tvector.scm 237 */
									bool_t BgL_testz00_4131;

									{	/* Cfa/tvector.scm 237 */
										obj_t BgL_arg5579z00_1363;

										BgL_arg5579z00_1363 =
											(((BgL_typez00_bglt) CREF(BgL_typez00_1350))->
											BgL_tvectorz00);
										BgL_testz00_4131 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg5579z00_1363,
											BGl_typez00zztype_typez00);
									}
									if (BgL_testz00_4131)
										{	/* Cfa/tvector.scm 237 */
											BFALSE;
										}
									else
										{	/* Cfa/tvector.scm 238 */
											obj_t BgL_tvzd2idzd2_1353;

											{	/* Cfa/tvector.scm 238 */
												obj_t BgL_arg5573z00_1357;

												{	/* Cfa/tvector.scm 238 */
													obj_t BgL_arg5574z00_1358;

													obj_t BgL_arg5575z00_1359;

													{	/* Cfa/tvector.scm 238 */
														obj_t BgL_res5957z00_2611;

														{	/* Cfa/tvector.scm 238 */
															obj_t BgL_symbolz00_2609;

															BgL_symbolz00_2609 = CNST_TABLE_REF(((long) 6));
															{	/* Cfa/tvector.scm 238 */
																obj_t BgL_arg2063z00_2610;

																BgL_arg2063z00_2610 =
																	SYMBOL_TO_STRING(BgL_symbolz00_2609);
																BgL_res5957z00_2611 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2610);
														}}
														BgL_arg5574z00_1358 = BgL_res5957z00_2611;
													}
													{	/* Cfa/tvector.scm 238 */
														obj_t BgL_arg5578z00_1362;

														BgL_arg5578z00_1362 =
															(((BgL_typez00_bglt) CREF(BgL_typez00_1350))->
															BgL_idz00);
														{	/* Cfa/tvector.scm 238 */
															obj_t BgL_res5958z00_2615;

															{	/* Cfa/tvector.scm 238 */
																obj_t BgL_arg2063z00_2614;

																BgL_arg2063z00_2614 =
																	SYMBOL_TO_STRING(BgL_arg5578z00_1362);
																BgL_res5958z00_2615 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2614);
															}
															BgL_arg5575z00_1359 = BgL_res5958z00_2615;
													}}
													{	/* Cfa/tvector.scm 238 */
														obj_t BgL_list5576z00_1360;

														{	/* Cfa/tvector.scm 238 */
															obj_t BgL_arg5577z00_1361;

															BgL_arg5577z00_1361 =
																MAKE_PAIR(BgL_arg5575z00_1359, BNIL);
															BgL_list5576z00_1360 =
																MAKE_PAIR(BgL_arg5574z00_1358,
																BgL_arg5577z00_1361);
														}
														BgL_arg5573z00_1357 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list5576z00_1360);
												}}
												BgL_tvzd2idzd2_1353 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg5573z00_1357));
											}
											{	/* Cfa/tvector.scm 240 */
												obj_t BgL_arg5570z00_1354;

												{	/* Cfa/tvector.scm 240 */
													obj_t BgL_arg5571z00_1355;

													obj_t BgL_arg5572z00_1356;

													BgL_arg5571z00_1355 =
														(((BgL_typez00_bglt) CREF(BgL_typez00_1350))->
														BgL_idz00);
													BgL_arg5572z00_1356 = CNST_TABLE_REF(((long) 7));
													BgL_arg5570z00_1354 =
														BGl_modulezd2tvectorzd2clausez00zzmodule_typez00
														(BgL_tvzd2idzd2_1353, BgL_arg5571z00_1355,
														BgL_arg5572z00_1356);
												}
												((((BgL_typez00_bglt) CREF(BgL_typez00_1350))->
														BgL_tvectorz00) =
													((obj_t) BgL_arg5570z00_1354), BUNSPEC);
						}}}}}
						{
							obj_t BgL_l5397z00_4149;

							BgL_l5397z00_4149 = CDR(BgL_l5397z00_1346);
							BgL_l5397z00_1346 = BgL_l5397z00_4149;
							goto BgL_zc3anonymousza35567ze3z83_1347;
						}
					}
				else
					{	/* Cfa/tvector.scm 234 */
						((bool_t) 1);
					}
			}
			{	/* Cfa/tvector.scm 243 */
				BgL_typez00_bglt BgL_oldzd2defaultzd2typez00_1366;

				BgL_oldzd2defaultzd2typez00_1366 =
					BGl_getzd2defaultzd2typez00zztype_cachez00();
				BGl_setzd2defaultzd2typez12z12zztype_cachez00(
					(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
				{	/* Cfa/tvector.scm 245 */
					obj_t BgL_tvectorzd2unitzd2_1367;

					BgL_tvectorzd2unitzd2_1367 =
						BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
					BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
					{	/* Cfa/tvector.scm 247 */
						obj_t BgL_resz00_1368;

						{	/* Cfa/tvector.scm 247 */
							bool_t BgL_testz00_4156;

							if (STRUCTP(BgL_tvectorzd2unitzd2_1367))
								{	/* Cfa/tvector.scm 247 */
									BgL_testz00_4156 =
										(STRUCT_KEY(BgL_tvectorzd2unitzd2_1367) ==
										CNST_TABLE_REF(((long) 8)));
								}
							else
								{	/* Cfa/tvector.scm 247 */
									BgL_testz00_4156 = ((bool_t) 0);
								}
							if (BgL_testz00_4156)
								{	/* Cfa/tvector.scm 248 */
									obj_t BgL_astz00_1370;

									{	/* Cfa/tvector.scm 248 */
										obj_t BgL_arg5582z00_1371;

										{	/* Cfa/tvector.scm 248 */
											obj_t BgL_list5583z00_1372;

											BgL_list5583z00_1372 =
												MAKE_PAIR(BgL_tvectorzd2unitzd2_1367, BNIL);
											BgL_arg5582z00_1371 = BgL_list5583z00_1372;
										}
										BgL_astz00_1370 =
											BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00
											(BgL_arg5582z00_1371);
									}
									BgL_resz00_1368 =
										BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7
										(BgL_astz00_1370, CNST_TABLE_REF(((long) 9)));
								}
							else
								{	/* Cfa/tvector.scm 247 */
									BgL_resz00_1368 = BNIL;
								}
						}
						BGl_setzd2defaultzd2typez12z12zztype_cachez00
							(BgL_oldzd2defaultzd2typez00_1366);
						return BgL_resz00_1368;
					}
				}
			}
		}
	}



/* patch-tree! */
	bool_t BGl_patchzd2treez12zc0zzcfa_tvectorz00(obj_t BgL_globalsz00_41)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 261 */
			{
				obj_t BgL_l5399z00_1374;

				BgL_l5399z00_1374 = BgL_globalsz00_41;
			BgL_zc3anonymousza35584ze3z83_1375:
				if (PAIRP(BgL_l5399z00_1374))
					{	/* Cfa/tvector.scm 262 */
						BGl_patchzd2funz12zc0zzcfa_tvectorz00(CAR(BgL_l5399z00_1374));
						{
							obj_t BgL_l5399z00_4171;

							BgL_l5399z00_4171 = CDR(BgL_l5399z00_1374);
							BgL_l5399z00_1374 = BgL_l5399z00_4171;
							goto BgL_zc3anonymousza35584ze3z83_1375;
						}
					}
				else
					{	/* Cfa/tvector.scm 262 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* patch-fun! */
	obj_t BGl_patchzd2funz12zc0zzcfa_tvectorz00(obj_t BgL_variablez00_42)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 267 */
			{	/* Cfa/tvector.scm 268 */
				BgL_valuez00_bglt BgL_funz00_1380;

				{
					BgL_variablez00_bglt BgL_auxz00_4173;

					BgL_auxz00_4173 = (BgL_variablez00_bglt) (BgL_variablez00_42);
					BgL_funz00_1380 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_4173))->BgL_valuez00);
				}
				{	/* Cfa/tvector.scm 271 */
					obj_t BgL_arg5588z00_1381;

					{	/* Cfa/tvector.scm 271 */
						obj_t BgL_arg5589z00_1382;

						{
							BgL_sfunz00_bglt BgL_auxz00_4176;

							BgL_auxz00_4176 = (BgL_sfunz00_bglt) (BgL_funz00_1380);
							BgL_arg5589z00_1382 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_4176))->BgL_bodyz00);
						}
						{	/* Cfa/tvector.scm 271 */
							BgL_nodez00_bglt BgL_nodez00_2635;

							BgL_nodez00_2635 = (BgL_nodez00_bglt) (BgL_arg5589z00_1382);
							{	/* Cfa/tvector.scm 271 */
								obj_t BgL_method5417z00_2636;

								{	/* Cfa/tvector.scm 271 */
									BgL_objectz00_bglt BgL_objz00_2637;

									BgL_objz00_2637 = (BgL_objectz00_bglt) (BgL_nodez00_2635);
									{	/* Cfa/tvector.scm 271 */
										long BgL_objzd2classzd2numz00_2638;

										BgL_objzd2classzd2numz00_2638 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2637);
										{	/* Cfa/tvector.scm 271 */
											obj_t BgL_arg2643z00_2639;

											BgL_arg2643z00_2639 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 271 */
												obj_t BgL_arrayz00_2641;

												int BgL_offsetz00_2642;

												BgL_arrayz00_2641 = BgL_arg2643z00_2639;
												BgL_offsetz00_2642 =
													(int) (BgL_objzd2classzd2numz00_2638);
												{	/* Cfa/tvector.scm 271 */
													long BgL_offsetz00_2643;

													BgL_offsetz00_2643 =
														((long) (BgL_offsetz00_2642) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 271 */
														long BgL_modz00_2644;

														{	/* Cfa/tvector.scm 271 */
															int BgL_arg2645z00_2645;

															BgL_arg2645z00_2645 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 271 */
																long BgL_auxz00_4188;

																BgL_auxz00_4188 = (long) (BgL_arg2645z00_2645);
																BgL_modz00_2644 =
																	(BgL_offsetz00_2643 / BgL_auxz00_4188);
														}}
														{	/* Cfa/tvector.scm 271 */
															long BgL_restz00_2646;

															{	/* Cfa/tvector.scm 271 */
																int BgL_arg2644z00_2647;

																BgL_arg2644z00_2647 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 271 */
																	long BgL_auxz00_4192;

																	BgL_auxz00_4192 =
																		(long) (BgL_arg2644z00_2647);
																	BgL_restz00_2646 =
																		(BgL_offsetz00_2643 % BgL_auxz00_4192);
															}}
															{	/* Cfa/tvector.scm 271 */

																BgL_method5417z00_2636 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2641,
																		(int) (BgL_modz00_2644)),
																	(int) (BgL_restz00_2646));
								}}}}}}}}
								BgL_arg5588z00_1381 =
									PROCEDURE_ENTRY(BgL_method5417z00_2636)
									(BgL_method5417z00_2636, (obj_t) (BgL_nodez00_2635), BEOA);
					}}}
					{
						BgL_sfunz00_bglt BgL_auxz00_4202;

						BgL_auxz00_4202 = (BgL_sfunz00_bglt) (BgL_funz00_1380);
						return
							((((BgL_sfunz00_bglt) CREF(BgL_auxz00_4202))->BgL_bodyz00) =
							((obj_t) BgL_arg5588z00_1381), BUNSPEC);
					}
				}
			}
		}
	}



/* patch*! */
	obj_t BGl_patchza2z12zb0zzcfa_tvectorz00(obj_t BgL_nodeza2za2_66)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 466 */
			{
				obj_t BgL_nodeza2za2_1384;

				BgL_nodeza2za2_1384 = BgL_nodeza2za2_66;
			BgL_zc3anonymousza35590ze3z83_1385:
				if (NULLP(BgL_nodeza2za2_1384))
					{	/* Cfa/tvector.scm 468 */
						return CNST_TABLE_REF(((long) 10));
					}
				else
					{	/* Cfa/tvector.scm 468 */
						{	/* Cfa/tvector.scm 471 */
							obj_t BgL_arg5592z00_1387;

							{	/* Cfa/tvector.scm 471 */
								obj_t BgL_arg5593z00_1388;

								BgL_arg5593z00_1388 = CAR(BgL_nodeza2za2_1384);
								{	/* Cfa/tvector.scm 471 */
									BgL_nodez00_bglt BgL_nodez00_2665;

									BgL_nodez00_2665 = (BgL_nodez00_bglt) (BgL_arg5593z00_1388);
									{	/* Cfa/tvector.scm 471 */
										obj_t BgL_method5417z00_2666;

										{	/* Cfa/tvector.scm 471 */
											BgL_objectz00_bglt BgL_objz00_2667;

											BgL_objz00_2667 = (BgL_objectz00_bglt) (BgL_nodez00_2665);
											{	/* Cfa/tvector.scm 471 */
												long BgL_objzd2classzd2numz00_2668;

												BgL_objzd2classzd2numz00_2668 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2667);
												{	/* Cfa/tvector.scm 471 */
													obj_t BgL_arg2643z00_2669;

													BgL_arg2643z00_2669 =
														PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
														(int) (((long) 1)));
													{	/* Cfa/tvector.scm 471 */
														obj_t BgL_arrayz00_2671;

														int BgL_offsetz00_2672;

														BgL_arrayz00_2671 = BgL_arg2643z00_2669;
														BgL_offsetz00_2672 =
															(int) (BgL_objzd2classzd2numz00_2668);
														{	/* Cfa/tvector.scm 471 */
															long BgL_offsetz00_2673;

															BgL_offsetz00_2673 =
																((long) (BgL_offsetz00_2672) - OBJECT_TYPE);
															{	/* Cfa/tvector.scm 471 */
																long BgL_modz00_2674;

																{	/* Cfa/tvector.scm 471 */
																	int BgL_arg2645z00_2675;

																	BgL_arg2645z00_2675 = (int) (((long) 16));
																	{	/* Cfa/tvector.scm 471 */
																		long BgL_auxz00_4218;

																		BgL_auxz00_4218 =
																			(long) (BgL_arg2645z00_2675);
																		BgL_modz00_2674 =
																			(BgL_offsetz00_2673 / BgL_auxz00_4218);
																}}
																{	/* Cfa/tvector.scm 471 */
																	long BgL_restz00_2676;

																	{	/* Cfa/tvector.scm 471 */
																		int BgL_arg2644z00_2677;

																		BgL_arg2644z00_2677 = (int) (((long) 16));
																		{	/* Cfa/tvector.scm 471 */
																			long BgL_auxz00_4222;

																			BgL_auxz00_4222 =
																				(long) (BgL_arg2644z00_2677);
																			BgL_restz00_2676 =
																				(BgL_offsetz00_2673 % BgL_auxz00_4222);
																	}}
																	{	/* Cfa/tvector.scm 471 */

																		BgL_method5417z00_2666 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2671,
																				(int) (BgL_modz00_2674)),
																			(int) (BgL_restz00_2676));
										}}}}}}}}
										BgL_arg5592z00_1387 =
											PROCEDURE_ENTRY(BgL_method5417z00_2666)
											(BgL_method5417z00_2666, (obj_t) (BgL_nodez00_2665),
											BEOA);
							}}}
							SET_CAR(BgL_nodeza2za2_1384, BgL_arg5592z00_1387);
						}
						{
							obj_t BgL_nodeza2za2_4233;

							BgL_nodeza2za2_4233 = CDR(BgL_nodeza2za2_1384);
							BgL_nodeza2za2_1384 = BgL_nodeza2za2_4233;
							goto BgL_zc3anonymousza35590ze3z83_1385;
						}
					}
			}
		}
	}



/* patch-vector?! */
	obj_t BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00(BgL_appz00_bglt
		BgL_nodez00_69)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 518 */
			{	/* Cfa/tvector.scm 520 */
				obj_t BgL_arg5595z00_1392;

				BgL_arg5595z00_1392 =
					(((BgL_appz00_bglt) CREF(BgL_nodez00_69))->BgL_argsz00);
				BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5595z00_1392);
			}
			{	/* Cfa/tvector.scm 521 */
				BgL_approxz00_bglt BgL_approxz00_1393;

				{	/* Cfa/tvector.scm 521 */
					obj_t BgL_arg5598z00_1397;

					{	/* Cfa/tvector.scm 521 */
						obj_t BgL_pairz00_2696;

						BgL_pairz00_2696 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_69))->BgL_argsz00);
						BgL_arg5598z00_1397 = CAR(BgL_pairz00_2696);
					}
					BgL_approxz00_1393 =
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg5598z00_1397));
				}
				{	/* Cfa/tvector.scm 521 */
					BgL_typez00_bglt BgL_typez00_1394;

					BgL_typez00_1394 =
						(((BgL_approxz00_bglt) CREF(BgL_approxz00_1393))->BgL_typez00);
					{	/* Cfa/tvector.scm 522 */

						if (
							((obj_t) (BgL_typez00_1394) ==
								BGl_za2vectorza2z00zztype_cachez00))
							{	/* Cfa/tvector.scm 525 */
								obj_t BgL_arg5597z00_1396;

								{
									BgL_nodez00_bglt BgL_auxz00_4245;

									BgL_auxz00_4245 = (BgL_nodez00_bglt) (BgL_nodez00_69);
									BgL_arg5597z00_1396 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4245))->BgL_locz00);
								}
								return
									(obj_t) (BGl_makezd2atomzd2zzast_nodez00(BgL_arg5597z00_1396,
										(BgL_typez00_bglt) (BGl_za2boolza2z00zztype_cachez00),
										BTRUE));
							}
						else
							{	/* Cfa/tvector.scm 523 */
								return (obj_t) (BgL_nodez00_69);
							}
					}
				}
			}
		}
	}



/* patch-vector->list! */
	obj_t BGl_patchzd2vectorzd2ze3listz12zf1zzcfa_tvectorz00(BgL_appz00_bglt
		BgL_nodez00_70)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 533 */
			{	/* Cfa/tvector.scm 535 */
				obj_t BgL_arg5600z00_1400;

				BgL_arg5600z00_1400 =
					(((BgL_appz00_bglt) CREF(BgL_nodez00_70))->BgL_argsz00);
				BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5600z00_1400);
			}
			{	/* Cfa/tvector.scm 536 */
				BgL_approxz00_bglt BgL_approxz00_1401;

				{	/* Cfa/tvector.scm 536 */
					obj_t BgL_arg5616z00_1420;

					{	/* Cfa/tvector.scm 536 */
						obj_t BgL_pairz00_2701;

						BgL_pairz00_2701 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_70))->BgL_argsz00);
						BgL_arg5616z00_1420 = CAR(BgL_pairz00_2701);
					}
					BgL_approxz00_1401 =
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg5616z00_1420));
				}
				{	/* Cfa/tvector.scm 536 */
					obj_t BgL_tvz00_1402;

					BgL_tvz00_1402 =
						BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_1401);
					{	/* Cfa/tvector.scm 537 */

						if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_1402,
								BGl_tvecz00zztvector_tvectorz00))
							{	/* Cfa/tvector.scm 539 */
								obj_t BgL_tvzd2ze3listz31_1404;

								{	/* Cfa/tvector.scm 539 */
									obj_t BgL_arg5610z00_1414;

									{	/* Cfa/tvector.scm 539 */
										obj_t BgL_arg5611z00_1415;

										obj_t BgL_arg5612z00_1416;

										{	/* Cfa/tvector.scm 539 */
											obj_t BgL_arg5615z00_1419;

											{
												BgL_typez00_bglt BgL_auxz00_4261;

												BgL_auxz00_4261 =
													(BgL_typez00_bglt) (
													(BgL_tvecz00_bglt) (BgL_tvz00_1402));
												BgL_arg5615z00_1419 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_4261))->
													BgL_idz00);
											}
											{	/* Cfa/tvector.scm 539 */
												obj_t BgL_res5965z00_2706;

												{	/* Cfa/tvector.scm 539 */
													obj_t BgL_arg2063z00_2705;

													BgL_arg2063z00_2705 =
														SYMBOL_TO_STRING(BgL_arg5615z00_1419);
													BgL_res5965z00_2706 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_2705);
												}
												BgL_arg5611z00_1415 = BgL_res5965z00_2706;
											}
										}
										{	/* Cfa/tvector.scm 539 */
											obj_t BgL_res5966z00_2709;

											{	/* Cfa/tvector.scm 539 */
												obj_t BgL_symbolz00_2707;

												BgL_symbolz00_2707 = CNST_TABLE_REF(((long) 11));
												{	/* Cfa/tvector.scm 539 */
													obj_t BgL_arg2063z00_2708;

													BgL_arg2063z00_2708 =
														SYMBOL_TO_STRING(BgL_symbolz00_2707);
													BgL_res5966z00_2709 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_2708);
											}}
											BgL_arg5612z00_1416 = BgL_res5966z00_2709;
										}
										{	/* Cfa/tvector.scm 539 */
											obj_t BgL_list5613z00_1417;

											{	/* Cfa/tvector.scm 539 */
												obj_t BgL_arg5614z00_1418;

												BgL_arg5614z00_1418 =
													MAKE_PAIR(BgL_arg5612z00_1416, BNIL);
												BgL_list5613z00_1417 =
													MAKE_PAIR(BgL_arg5611z00_1415, BgL_arg5614z00_1418);
											}
											BgL_arg5610z00_1414 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list5613z00_1417);
									}}
									BgL_tvzd2ze3listz31_1404 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg5610z00_1414));
								}
								{	/* Cfa/tvector.scm 539 */
									BgL_nodez00_bglt BgL_newzd2nodezd2_1405;

									{	/* Cfa/tvector.scm 540 */
										obj_t BgL_arg5603z00_1407;

										obj_t BgL_arg5605z00_1409;

										obj_t BgL_arg5606z00_1410;

										{	/* Cfa/tvector.scm 540 */
											obj_t BgL_arg5607z00_1411;

											BgL_arg5607z00_1411 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(
												(((BgL_appz00_bglt) CREF(BgL_nodez00_70))->BgL_argsz00),
												BNIL);
											BgL_arg5603z00_1407 =
												MAKE_PAIR(BgL_tvzd2ze3listz31_1404,
												BgL_arg5607z00_1411);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_4278;

											BgL_auxz00_4278 = (BgL_nodez00_bglt) (BgL_nodez00_70);
											BgL_arg5605z00_1409 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4278))->
												BgL_locz00);
										}
										BgL_arg5606z00_1410 = CNST_TABLE_REF(((long) 12));
										BgL_newzd2nodezd2_1405 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg5603z00_1407,
											BNIL, BgL_arg5605z00_1409, BgL_arg5606z00_1410);
									}
									{	/* Cfa/tvector.scm 540 */

										{	/* Cfa/tvector.scm 544 */
											BgL_typez00_bglt BgL_arg5602z00_1406;

											{
												BgL_nodez00_bglt BgL_auxz00_4283;

												BgL_auxz00_4283 = (BgL_nodez00_bglt) (BgL_nodez00_70);
												BgL_arg5602z00_1406 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4283))->
													BgL_typez00);
											}
											((((BgL_nodez00_bglt) CREF(BgL_newzd2nodezd2_1405))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg5602z00_1406), BUNSPEC);
										}
										return (obj_t) (BgL_newzd2nodezd2_1405);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 538 */
								return (obj_t) (BgL_nodez00_70);
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
				BGl_getzd2vectorzd2itemzd2type5410zd2envz00zzcfa_tvectorz00,
				BGl_nodez00zzast_nodez00, BGl_string6036z00zzcfa_tvectorz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_patchz12zd2default5416zd2envz12zzcfa_tvectorz00,
				BGl_nodez00zzast_nodez00, BGl_string6037z00zzcfa_tvectorz00);
		}
	}



/* get-vector-item-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(BgL_nodez00_bglt
		BgL_nodez00_35)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 196 */
			{	/* Cfa/tvector.scm 196 */
				obj_t BgL_method5411z00_2716;

				{	/* Cfa/tvector.scm 196 */
					BgL_objectz00_bglt BgL_objz00_2717;

					BgL_objz00_2717 = (BgL_objectz00_bglt) (BgL_nodez00_35);
					{	/* Cfa/tvector.scm 196 */
						long BgL_objzd2classzd2numz00_2718;

						BgL_objzd2classzd2numz00_2718 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2717);
						{	/* Cfa/tvector.scm 196 */
							obj_t BgL_arg2643z00_2719;

							BgL_arg2643z00_2719 =
								PROCEDURE_REF
								(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
								(int) (((long) 1)));
							{	/* Cfa/tvector.scm 196 */
								obj_t BgL_arrayz00_2721;

								int BgL_offsetz00_2722;

								BgL_arrayz00_2721 = BgL_arg2643z00_2719;
								BgL_offsetz00_2722 = (int) (BgL_objzd2classzd2numz00_2718);
								{	/* Cfa/tvector.scm 196 */
									long BgL_offsetz00_2723;

									BgL_offsetz00_2723 =
										((long) (BgL_offsetz00_2722) - OBJECT_TYPE);
									{	/* Cfa/tvector.scm 196 */
										long BgL_modz00_2724;

										{	/* Cfa/tvector.scm 196 */
											int BgL_arg2645z00_2725;

											BgL_arg2645z00_2725 = (int) (((long) 16));
											{	/* Cfa/tvector.scm 196 */
												long BgL_auxz00_4299;

												BgL_auxz00_4299 = (long) (BgL_arg2645z00_2725);
												BgL_modz00_2724 =
													(BgL_offsetz00_2723 / BgL_auxz00_4299);
										}}
										{	/* Cfa/tvector.scm 196 */
											long BgL_restz00_2726;

											{	/* Cfa/tvector.scm 196 */
												int BgL_arg2644z00_2727;

												BgL_arg2644z00_2727 = (int) (((long) 16));
												{	/* Cfa/tvector.scm 196 */
													long BgL_auxz00_4303;

													BgL_auxz00_4303 = (long) (BgL_arg2644z00_2727);
													BgL_restz00_2726 =
														(BgL_offsetz00_2723 % BgL_auxz00_4303);
											}}
											{	/* Cfa/tvector.scm 196 */

												BgL_method5411z00_2716 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2721,
														(int) (BgL_modz00_2724)), (int) (BgL_restz00_2726));
				}}}}}}}}
				return
					(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method5411z00_2716)
					(BgL_method5411z00_2716, (obj_t) (BgL_nodez00_35), BEOA));
			}
		}
	}



/* _get-vector-item-type */
	obj_t BGl__getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(obj_t
		BgL_envz00_3687, obj_t BgL_nodez00_3688)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 196 */
			return
				(obj_t) (BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3688)));
		}
	}



/* get-vector-item-type5410 */
	obj_t BGl_getzd2vectorzd2itemzd2type5410zd2zzcfa_tvectorz00(BgL_nodez00_bglt
		BgL_nodez00_36)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 13)),
				BGl_string6038z00zzcfa_tvectorz00, (obj_t) (BgL_nodez00_36));
		}
	}



/* _get-vector-item-type5410 */
	obj_t BGl__getzd2vectorzd2itemzd2type5410zd2zzcfa_tvectorz00(obj_t
		BgL_envz00_3691, obj_t BgL_nodez00_3692)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			return
				BGl_getzd2vectorzd2itemzd2type5410zd2zzcfa_tvectorz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3692));
		}
	}



/* patch! */
	obj_t BGl_patchz12z12zzcfa_tvectorz00(BgL_nodez00_bglt BgL_nodez00_43)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 276 */
			{	/* Cfa/tvector.scm 276 */
				obj_t BgL_method5417z00_2741;

				{	/* Cfa/tvector.scm 276 */
					BgL_objectz00_bglt BgL_objz00_2742;

					BgL_objz00_2742 = (BgL_objectz00_bglt) (BgL_nodez00_43);
					{	/* Cfa/tvector.scm 276 */
						long BgL_objzd2classzd2numz00_2743;

						BgL_objzd2classzd2numz00_2743 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2742);
						{	/* Cfa/tvector.scm 276 */
							obj_t BgL_arg2643z00_2744;

							BgL_arg2643z00_2744 =
								PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
								(int) (((long) 1)));
							{	/* Cfa/tvector.scm 276 */
								obj_t BgL_arrayz00_2746;

								int BgL_offsetz00_2747;

								BgL_arrayz00_2746 = BgL_arg2643z00_2744;
								BgL_offsetz00_2747 = (int) (BgL_objzd2classzd2numz00_2743);
								{	/* Cfa/tvector.scm 276 */
									long BgL_offsetz00_2748;

									BgL_offsetz00_2748 =
										((long) (BgL_offsetz00_2747) - OBJECT_TYPE);
									{	/* Cfa/tvector.scm 276 */
										long BgL_modz00_2749;

										{	/* Cfa/tvector.scm 276 */
											int BgL_arg2645z00_2750;

											BgL_arg2645z00_2750 = (int) (((long) 16));
											{	/* Cfa/tvector.scm 276 */
												long BgL_auxz00_4330;

												BgL_auxz00_4330 = (long) (BgL_arg2645z00_2750);
												BgL_modz00_2749 =
													(BgL_offsetz00_2748 / BgL_auxz00_4330);
										}}
										{	/* Cfa/tvector.scm 276 */
											long BgL_restz00_2751;

											{	/* Cfa/tvector.scm 276 */
												int BgL_arg2644z00_2752;

												BgL_arg2644z00_2752 = (int) (((long) 16));
												{	/* Cfa/tvector.scm 276 */
													long BgL_auxz00_4334;

													BgL_auxz00_4334 = (long) (BgL_arg2644z00_2752);
													BgL_restz00_2751 =
														(BgL_offsetz00_2748 % BgL_auxz00_4334);
											}}
											{	/* Cfa/tvector.scm 276 */

												BgL_method5417z00_2741 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2746,
														(int) (BgL_modz00_2749)), (int) (BgL_restz00_2751));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5417z00_2741) (BgL_method5417z00_2741,
					(obj_t) (BgL_nodez00_43), BEOA);
			}
		}
	}



/* _patch! */
	obj_t BGl__patchz12z12zzcfa_tvectorz00(obj_t BgL_envz00_3689,
		obj_t BgL_nodez00_3690)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 276 */
			return
				BGl_patchz12z12zzcfa_tvectorz00((BgL_nodez00_bglt) (BgL_nodez00_3690));
		}
	}



/* patch!-default5416 */
	obj_t BGl_patchz12zd2default5416zc0zzcfa_tvectorz00(BgL_nodez00_bglt
		BgL_nodez00_44)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 14)),
				BGl_string6038z00zzcfa_tvectorz00, (obj_t) (BgL_nodez00_44));
		}
	}



/* _patch!-default5416 */
	obj_t BGl__patchz12zd2default5416zc0zzcfa_tvectorz00(obj_t BgL_envz00_3693,
		obj_t BgL_nodez00_3694)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			return
				BGl_patchz12zd2default5416zc0zzcfa_tvectorz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3694));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc6039z00zzcfa_tvectorz00, BGl_string6036z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc6040z00zzcfa_tvectorz00, BGl_string6036z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_atomz00zzast_nodez00,
				BGl_proc6041z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_kwotez00zzast_nodez00,
				BGl_proc6042z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_kwotezf2nodezf2zzcfa_infoz00, BGl_proc6043z00zzcfa_tvectorz00,
				BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_varz00zzast_nodez00,
				BGl_proc6044z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_closurez00zzast_nodez00,
				BGl_proc6045z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_sequencez00zzast_nodez00,
				BGl_proc6046z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc6047z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_funcallz00zzast_nodez00,
				BGl_proc6048z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_externz00zzast_nodez00,
				BGl_proc6049z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_castz00zzast_nodez00,
				BGl_proc6050z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_setqz00zzast_nodez00,
				BGl_proc6051z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc6052z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_failz00zzast_nodez00,
				BGl_proc6053z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_selectz00zzast_nodez00,
				BGl_proc6054z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc6055z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc6056z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc6057z00zzcfa_tvectorz00,
				BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc6058z00zzcfa_tvectorz00,
				BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc6059z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc6060z00zzcfa_tvectorz00,
				BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc6061z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_appz00zzast_nodez00,
				BGl_proc6062z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc6063z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc6064z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc6065z00zzcfa_tvectorz00, BGl_string6037z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_vrefzf2Cinfozf2zzcfa_info3z00, BGl_proc6066z00zzcfa_tvectorz00,
				BGl_string6037z00zzcfa_tvectorz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00, BGl_proc6067z00zzcfa_tvectorz00,
				BGl_string6037z00zzcfa_tvectorz00);
		}
	}



/* patch!-vset!/Cinfo5471 */
	obj_t BGl_patchz12zd2vsetz12zf2Cinfo5471z20zzcfa_tvectorz00(obj_t
		BgL_envz00_3724, obj_t BgL_nodez00_3725)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 604 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_nodez00_2382;

				BgL_nodez00_2382 = (BgL_vsetz12zf2cinfoze0_bglt) (BgL_nodez00_3725);
				{	/* Cfa/tvector.scm 606 */
					obj_t BgL_arg5925z00_2386;

					{
						BgL_externz00_bglt BgL_auxz00_4380;

						BgL_auxz00_4380 = (BgL_externz00_bglt) (BgL_nodez00_2382);
						BgL_arg5925z00_2386 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4380))->BgL_exprza2za2);
					}
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5925z00_2386);
				}
				{	/* Cfa/tvector.scm 607 */
					BgL_approxz00_bglt BgL_veczd2approxzd2_2387;

					{	/* Cfa/tvector.scm 607 */
						obj_t BgL_arg5942z00_2407;

						{	/* Cfa/tvector.scm 607 */
							obj_t BgL_pairz00_3667;

							{
								BgL_externz00_bglt BgL_auxz00_4384;

								BgL_auxz00_4384 = (BgL_externz00_bglt) (BgL_nodez00_2382);
								BgL_pairz00_3667 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4384))->
									BgL_exprza2za2);
							}
							BgL_arg5942z00_2407 = CAR(BgL_pairz00_3667);
						}
						BgL_veczd2approxzd2_2387 =
							BGl_cfaz12z12zzcfa_cfaz00(
							(BgL_nodez00_bglt) (BgL_arg5942z00_2407));
					}
					{	/* Cfa/tvector.scm 607 */
						obj_t BgL_tvz00_2388;

						BgL_tvz00_2388 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_veczd2approxzd2_2387);
						{	/* Cfa/tvector.scm 608 */

							{	/* Cfa/tvector.scm 609 */
								bool_t BgL_testz00_4391;

								{	/* Cfa/tvector.scm 609 */
									bool_t BgL_testz00_4392;

									{
										obj_t BgL_auxz00_4393;

										{	/* Cfa/tvector.scm 609 */
											BgL_objectz00_bglt BgL_auxz00_4394;

											BgL_auxz00_4394 = (BgL_objectz00_bglt) (BgL_nodez00_2382);
											BgL_auxz00_4393 = BGL_OBJECT_WIDENING(BgL_auxz00_4394);
										}
										BgL_testz00_4392 =
											(((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_auxz00_4393))->
											BgL_tvectorzf3zf3);
									}
									if (BgL_testz00_4392)
										{	/* Cfa/tvector.scm 609 */
											BgL_testz00_4391 = ((bool_t) 1);
										}
									else
										{	/* Cfa/tvector.scm 609 */
											if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_2388,
													BGl_tvecz00zztvector_tvectorz00))
												{	/* Cfa/tvector.scm 609 */
													BgL_testz00_4391 = ((bool_t) 0);
												}
											else
												{	/* Cfa/tvector.scm 609 */
													BgL_testz00_4391 = ((bool_t) 1);
												}
										}
								}
								if (BgL_testz00_4391)
									{	/* Cfa/tvector.scm 609 */
										return (obj_t) (BgL_nodez00_2382);
									}
								else
									{	/* Cfa/tvector.scm 611 */
										obj_t BgL_tvzd2setz12zc0_2390;

										{	/* Cfa/tvector.scm 611 */
											obj_t BgL_arg5934z00_2399;

											{	/* Cfa/tvector.scm 611 */
												obj_t BgL_arg5935z00_2400;

												obj_t BgL_arg5936z00_2401;

												{	/* Cfa/tvector.scm 611 */
													obj_t BgL_arg5939z00_2404;

													{
														BgL_typez00_bglt BgL_auxz00_4401;

														BgL_auxz00_4401 =
															(BgL_typez00_bglt) (BgL_tvz00_2388);
														BgL_arg5939z00_2404 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_4401))->
															BgL_idz00);
													}
													{	/* Cfa/tvector.scm 611 */
														obj_t BgL_res6031z00_3673;

														{	/* Cfa/tvector.scm 611 */
															obj_t BgL_arg2063z00_3672;

															BgL_arg2063z00_3672 =
																SYMBOL_TO_STRING(BgL_arg5939z00_2404);
															BgL_res6031z00_3673 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_3672);
														}
														BgL_arg5935z00_2400 = BgL_res6031z00_3673;
													}
												}
												{	/* Cfa/tvector.scm 611 */
													obj_t BgL_res6032z00_3676;

													{	/* Cfa/tvector.scm 611 */
														obj_t BgL_symbolz00_3674;

														BgL_symbolz00_3674 = CNST_TABLE_REF(((long) 15));
														{	/* Cfa/tvector.scm 611 */
															obj_t BgL_arg2063z00_3675;

															BgL_arg2063z00_3675 =
																SYMBOL_TO_STRING(BgL_symbolz00_3674);
															BgL_res6032z00_3676 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_3675);
													}}
													BgL_arg5936z00_2401 = BgL_res6032z00_3676;
												}
												{	/* Cfa/tvector.scm 611 */
													obj_t BgL_list5937z00_2402;

													{	/* Cfa/tvector.scm 611 */
														obj_t BgL_arg5938z00_2403;

														BgL_arg5938z00_2403 =
															MAKE_PAIR(BgL_arg5936z00_2401, BNIL);
														BgL_list5937z00_2402 =
															MAKE_PAIR(BgL_arg5935z00_2400,
															BgL_arg5938z00_2403);
													}
													BgL_arg5934z00_2399 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list5937z00_2402);
											}}
											BgL_tvzd2setz12zc0_2390 =
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg5934z00_2399));
										}
										{	/* Cfa/tvector.scm 611 */
											BgL_nodez00_bglt BgL_newzd2nodezd2_2391;

											{	/* Cfa/tvector.scm 612 */
												obj_t BgL_arg5927z00_2392;

												obj_t BgL_arg5929z00_2394;

												obj_t BgL_arg5930z00_2395;

												{	/* Cfa/tvector.scm 612 */
													obj_t BgL_arg5931z00_2396;

													{	/* Cfa/tvector.scm 612 */
														obj_t BgL_auxz00_4414;

														{
															BgL_externz00_bglt BgL_auxz00_4415;

															BgL_auxz00_4415 =
																(BgL_externz00_bglt) (BgL_nodez00_2382);
															BgL_auxz00_4414 =
																(((BgL_externz00_bglt) CREF(BgL_auxz00_4415))->
																BgL_exprza2za2);
														}
														BgL_arg5931z00_2396 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_auxz00_4414, BNIL);
													}
													BgL_arg5927z00_2392 =
														MAKE_PAIR(BgL_tvzd2setz12zc0_2390,
														BgL_arg5931z00_2396);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_4420;

													BgL_auxz00_4420 =
														(BgL_nodez00_bglt) (BgL_nodez00_2382);
													BgL_arg5929z00_2394 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4420))->
														BgL_locz00);
												}
												BgL_arg5930z00_2395 = CNST_TABLE_REF(((long) 12));
												BgL_newzd2nodezd2_2391 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg5927z00_2392, BNIL, BgL_arg5929z00_2394,
													BgL_arg5930z00_2395);
											}
											{	/* Cfa/tvector.scm 612 */

												return
													(obj_t) (BGl_inlinezd2nodezd2zzinline_inlinez00
													(BgL_newzd2nodezd2_2391, ((long) 1), BNIL));
		}}}}}}}}}
	}



/* patch!-vref/Cinfo5469 */
	obj_t BGl_patchz12zd2vrefzf2Cinfo5469z32zzcfa_tvectorz00(obj_t
		BgL_envz00_3726, obj_t BgL_nodez00_3727)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 586 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_nodez00_2353;

				BgL_nodez00_2353 = (BgL_vrefzf2cinfozf2_bglt) (BgL_nodez00_3727);
				{	/* Cfa/tvector.scm 588 */
					obj_t BgL_arg5905z00_2357;

					{
						BgL_externz00_bglt BgL_auxz00_4428;

						BgL_auxz00_4428 = (BgL_externz00_bglt) (BgL_nodez00_2353);
						BgL_arg5905z00_2357 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4428))->BgL_exprza2za2);
					}
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5905z00_2357);
				}
				{	/* Cfa/tvector.scm 589 */
					BgL_approxz00_bglt BgL_veczd2approxzd2_2358;

					{	/* Cfa/tvector.scm 589 */
						obj_t BgL_arg5922z00_2378;

						{	/* Cfa/tvector.scm 589 */
							obj_t BgL_pairz00_3650;

							{
								BgL_externz00_bglt BgL_auxz00_4432;

								BgL_auxz00_4432 = (BgL_externz00_bglt) (BgL_nodez00_2353);
								BgL_pairz00_3650 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4432))->
									BgL_exprza2za2);
							}
							BgL_arg5922z00_2378 = CAR(BgL_pairz00_3650);
						}
						BgL_veczd2approxzd2_2358 =
							BGl_cfaz12z12zzcfa_cfaz00(
							(BgL_nodez00_bglt) (BgL_arg5922z00_2378));
					}
					{	/* Cfa/tvector.scm 589 */
						obj_t BgL_tvz00_2359;

						BgL_tvz00_2359 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_veczd2approxzd2_2358);
						{	/* Cfa/tvector.scm 590 */

							{	/* Cfa/tvector.scm 591 */
								bool_t BgL_testz00_4439;

								{	/* Cfa/tvector.scm 591 */
									bool_t BgL_testz00_4440;

									{
										obj_t BgL_auxz00_4441;

										{	/* Cfa/tvector.scm 591 */
											BgL_objectz00_bglt BgL_auxz00_4442;

											BgL_auxz00_4442 = (BgL_objectz00_bglt) (BgL_nodez00_2353);
											BgL_auxz00_4441 = BGL_OBJECT_WIDENING(BgL_auxz00_4442);
										}
										BgL_testz00_4440 =
											(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_4441))->
											BgL_tvectorzf3zf3);
									}
									if (BgL_testz00_4440)
										{	/* Cfa/tvector.scm 591 */
											BgL_testz00_4439 = ((bool_t) 1);
										}
									else
										{	/* Cfa/tvector.scm 591 */
											if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_2359,
													BGl_tvecz00zztvector_tvectorz00))
												{	/* Cfa/tvector.scm 591 */
													BgL_testz00_4439 = ((bool_t) 0);
												}
											else
												{	/* Cfa/tvector.scm 591 */
													BgL_testz00_4439 = ((bool_t) 1);
												}
										}
								}
								if (BgL_testz00_4439)
									{	/* Cfa/tvector.scm 591 */
										return (obj_t) (BgL_nodez00_2353);
									}
								else
									{	/* Cfa/tvector.scm 593 */
										obj_t BgL_tvzd2refzd2_2361;

										{	/* Cfa/tvector.scm 593 */
											obj_t BgL_arg5914z00_2370;

											{	/* Cfa/tvector.scm 593 */
												obj_t BgL_arg5915z00_2371;

												obj_t BgL_arg5916z00_2372;

												{	/* Cfa/tvector.scm 593 */
													obj_t BgL_arg5919z00_2375;

													{
														BgL_typez00_bglt BgL_auxz00_4449;

														BgL_auxz00_4449 =
															(BgL_typez00_bglt) (BgL_tvz00_2359);
														BgL_arg5919z00_2375 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_4449))->
															BgL_idz00);
													}
													{	/* Cfa/tvector.scm 593 */
														obj_t BgL_res6029z00_3656;

														{	/* Cfa/tvector.scm 593 */
															obj_t BgL_arg2063z00_3655;

															BgL_arg2063z00_3655 =
																SYMBOL_TO_STRING(BgL_arg5919z00_2375);
															BgL_res6029z00_3656 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_3655);
														}
														BgL_arg5915z00_2371 = BgL_res6029z00_3656;
													}
												}
												{	/* Cfa/tvector.scm 593 */
													obj_t BgL_res6030z00_3659;

													{	/* Cfa/tvector.scm 593 */
														obj_t BgL_symbolz00_3657;

														BgL_symbolz00_3657 = CNST_TABLE_REF(((long) 16));
														{	/* Cfa/tvector.scm 593 */
															obj_t BgL_arg2063z00_3658;

															BgL_arg2063z00_3658 =
																SYMBOL_TO_STRING(BgL_symbolz00_3657);
															BgL_res6030z00_3659 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_3658);
													}}
													BgL_arg5916z00_2372 = BgL_res6030z00_3659;
												}
												{	/* Cfa/tvector.scm 593 */
													obj_t BgL_list5917z00_2373;

													{	/* Cfa/tvector.scm 593 */
														obj_t BgL_arg5918z00_2374;

														BgL_arg5918z00_2374 =
															MAKE_PAIR(BgL_arg5916z00_2372, BNIL);
														BgL_list5917z00_2373 =
															MAKE_PAIR(BgL_arg5915z00_2371,
															BgL_arg5918z00_2374);
													}
													BgL_arg5914z00_2370 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list5917z00_2373);
											}}
											BgL_tvzd2refzd2_2361 =
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg5914z00_2370));
										}
										{	/* Cfa/tvector.scm 593 */
											BgL_nodez00_bglt BgL_newzd2nodezd2_2362;

											{	/* Cfa/tvector.scm 594 */
												obj_t BgL_arg5907z00_2363;

												obj_t BgL_arg5909z00_2365;

												obj_t BgL_arg5910z00_2366;

												{	/* Cfa/tvector.scm 594 */
													obj_t BgL_arg5911z00_2367;

													{	/* Cfa/tvector.scm 594 */
														obj_t BgL_auxz00_4462;

														{
															BgL_externz00_bglt BgL_auxz00_4463;

															BgL_auxz00_4463 =
																(BgL_externz00_bglt) (BgL_nodez00_2353);
															BgL_auxz00_4462 =
																(((BgL_externz00_bglt) CREF(BgL_auxz00_4463))->
																BgL_exprza2za2);
														}
														BgL_arg5911z00_2367 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_auxz00_4462, BNIL);
													}
													BgL_arg5907z00_2363 =
														MAKE_PAIR(BgL_tvzd2refzd2_2361,
														BgL_arg5911z00_2367);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_4468;

													BgL_auxz00_4468 =
														(BgL_nodez00_bglt) (BgL_nodez00_2353);
													BgL_arg5909z00_2365 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4468))->
														BgL_locz00);
												}
												BgL_arg5910z00_2366 = CNST_TABLE_REF(((long) 12));
												BgL_newzd2nodezd2_2362 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg5907z00_2363, BNIL, BgL_arg5909z00_2365,
													BgL_arg5910z00_2366);
											}
											{	/* Cfa/tvector.scm 594 */

												{
													BgL_typez00_bglt BgL_auxz00_4473;

													BgL_auxz00_4473 = (BgL_typez00_bglt) (BgL_tvz00_2359);
													((((BgL_nodez00_bglt) CREF(BgL_newzd2nodezd2_2362))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_4473), BUNSPEC);
												}
												return
													(obj_t) (BGl_inlinezd2nodezd2zzinline_inlinez00
													(BgL_newzd2nodezd2_2362, ((long) 1), BNIL));
		}}}}}}}}}
	}



/* patch!-valloc/Cinfo+5467 */
	obj_t BGl_patchz12zd2valloczf2Cinfozb25467z80zzcfa_tvectorz00(obj_t
		BgL_envz00_3728, obj_t BgL_nodez00_3729)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 569 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_nodez00_2327;

				BgL_nodez00_2327 =
					(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_nodez00_3729);
				{	/* Cfa/tvector.scm 571 */
					obj_t BgL_arg5888z00_2331;

					{
						BgL_externz00_bglt BgL_auxz00_4479;

						BgL_auxz00_4479 = (BgL_externz00_bglt) (BgL_nodez00_2327);
						BgL_arg5888z00_2331 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4479))->BgL_exprza2za2);
					}
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5888z00_2331);
				}
				{	/* Cfa/tvector.scm 572 */
					BgL_typez00_bglt BgL_typez00_2332;

					{	/* Cfa/tvector.scm 572 */
						BgL_approxz00_bglt BgL_obj3318z00_3635;

						{
							obj_t BgL_auxz00_4483;

							{	/* Cfa/tvector.scm 572 */
								BgL_objectz00_bglt BgL_auxz00_4484;

								BgL_auxz00_4484 = (BgL_objectz00_bglt) (BgL_nodez00_2327);
								BgL_auxz00_4483 = BGL_OBJECT_WIDENING(BgL_auxz00_4484);
							}
							BgL_obj3318z00_3635 =
								(((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_auxz00_4483))->
								BgL_valuezd2approxzd2);
						}
						BgL_typez00_2332 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3318z00_3635))->BgL_typez00);
					}
					{	/* Cfa/tvector.scm 572 */
						obj_t BgL_tvz00_2333;

						BgL_tvz00_2333 =
							(((BgL_typez00_bglt) CREF(BgL_typez00_2332))->BgL_tvectorz00);
						{	/* Cfa/tvector.scm 573 */

							if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_2333,
									BGl_typez00zztype_typez00))
								{	/* Cfa/tvector.scm 575 */
									obj_t BgL_createzd2tvzd2_2335;

									{	/* Cfa/tvector.scm 575 */
										obj_t BgL_arg5897z00_2344;

										{	/* Cfa/tvector.scm 575 */
											obj_t BgL_arg5898z00_2345;

											obj_t BgL_arg5899z00_2346;

											{	/* Cfa/tvector.scm 575 */
												obj_t BgL_res6027z00_3640;

												{	/* Cfa/tvector.scm 575 */
													obj_t BgL_symbolz00_3638;

													BgL_symbolz00_3638 = CNST_TABLE_REF(((long) 17));
													{	/* Cfa/tvector.scm 575 */
														obj_t BgL_arg2063z00_3639;

														BgL_arg2063z00_3639 =
															SYMBOL_TO_STRING(BgL_symbolz00_3638);
														BgL_res6027z00_3640 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_3639);
												}}
												BgL_arg5898z00_2345 = BgL_res6027z00_3640;
											}
											{	/* Cfa/tvector.scm 575 */
												obj_t BgL_arg5902z00_2349;

												{
													BgL_typez00_bglt BgL_auxz00_4495;

													BgL_auxz00_4495 = (BgL_typez00_bglt) (BgL_tvz00_2333);
													BgL_arg5902z00_2349 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_4495))->
														BgL_idz00);
												}
												{	/* Cfa/tvector.scm 575 */
													obj_t BgL_res6028z00_3644;

													{	/* Cfa/tvector.scm 575 */
														obj_t BgL_arg2063z00_3643;

														BgL_arg2063z00_3643 =
															SYMBOL_TO_STRING(BgL_arg5902z00_2349);
														BgL_res6028z00_3644 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_3643);
													}
													BgL_arg5899z00_2346 = BgL_res6028z00_3644;
											}}
											{	/* Cfa/tvector.scm 575 */
												obj_t BgL_list5900z00_2347;

												{	/* Cfa/tvector.scm 575 */
													obj_t BgL_arg5901z00_2348;

													BgL_arg5901z00_2348 =
														MAKE_PAIR(BgL_arg5899z00_2346, BNIL);
													BgL_list5900z00_2347 =
														MAKE_PAIR(BgL_arg5898z00_2345, BgL_arg5901z00_2348);
												}
												BgL_arg5897z00_2344 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list5900z00_2347);
										}}
										BgL_createzd2tvzd2_2335 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg5897z00_2344));
									}
									{	/* Cfa/tvector.scm 575 */
										BgL_nodez00_bglt BgL_newzd2nodezd2_2336;

										{	/* Cfa/tvector.scm 576 */
											obj_t BgL_arg5890z00_2337;

											obj_t BgL_arg5892z00_2339;

											obj_t BgL_arg5893z00_2340;

											{	/* Cfa/tvector.scm 576 */
												obj_t BgL_arg5894z00_2341;

												{	/* Cfa/tvector.scm 576 */
													obj_t BgL_auxz00_4505;

													{
														BgL_externz00_bglt BgL_auxz00_4506;

														BgL_auxz00_4506 =
															(BgL_externz00_bglt) (BgL_nodez00_2327);
														BgL_auxz00_4505 =
															(((BgL_externz00_bglt) CREF(BgL_auxz00_4506))->
															BgL_exprza2za2);
													}
													BgL_arg5894z00_2341 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_4505, BNIL);
												}
												BgL_arg5890z00_2337 =
													MAKE_PAIR(BgL_createzd2tvzd2_2335,
													BgL_arg5894z00_2341);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_4511;

												BgL_auxz00_4511 = (BgL_nodez00_bglt) (BgL_nodez00_2327);
												BgL_arg5892z00_2339 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4511))->
													BgL_locz00);
											}
											BgL_arg5893z00_2340 = CNST_TABLE_REF(((long) 12));
											BgL_newzd2nodezd2_2336 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg5890z00_2337,
												BNIL, BgL_arg5892z00_2339, BgL_arg5893z00_2340);
										}
										{	/* Cfa/tvector.scm 576 */

											return
												(obj_t) (BGl_inlinezd2nodezd2zzinline_inlinez00
												(BgL_newzd2nodezd2_2336, ((long) 1), BNIL));
								}}}
							else
								{	/* Cfa/tvector.scm 574 */
									return (obj_t) (BgL_nodez00_2327);
								}
						}
					}
				}
			}
		}
	}



/* patch!-make-vector-a5465 */
	obj_t BGl_patchz12zd2makezd2vectorzd2a5465zc0zzcfa_tvectorz00(obj_t
		BgL_envz00_3730, obj_t BgL_nodez00_3731)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 551 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_nodez00_2301;

				BgL_nodez00_2301 = (BgL_makezd2vectorzd2appz00_bglt) (BgL_nodez00_3731);
				{	/* Cfa/tvector.scm 553 */
					obj_t BgL_arg5871z00_2305;

					{
						BgL_appz00_bglt BgL_auxz00_4520;

						BgL_auxz00_4520 = (BgL_appz00_bglt) (BgL_nodez00_2301);
						BgL_arg5871z00_2305 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_4520))->BgL_argsz00);
					}
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5871z00_2305);
				}
				{	/* Cfa/tvector.scm 554 */
					BgL_typez00_bglt BgL_typez00_2306;

					{	/* Cfa/tvector.scm 554 */
						BgL_approxz00_bglt BgL_obj3318z00_3618;

						{
							obj_t BgL_auxz00_4524;

							{	/* Cfa/tvector.scm 554 */
								BgL_objectz00_bglt BgL_auxz00_4525;

								BgL_auxz00_4525 = (BgL_objectz00_bglt) (BgL_nodez00_2301);
								BgL_auxz00_4524 = BGL_OBJECT_WIDENING(BgL_auxz00_4525);
							}
							BgL_obj3318z00_3618 =
								(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_4524))->
								BgL_valuezd2approxzd2);
						}
						BgL_typez00_2306 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3318z00_3618))->BgL_typez00);
					}
					{	/* Cfa/tvector.scm 554 */
						obj_t BgL_tvz00_2307;

						BgL_tvz00_2307 =
							(((BgL_typez00_bglt) CREF(BgL_typez00_2306))->BgL_tvectorz00);
						{	/* Cfa/tvector.scm 555 */

							if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_2307,
									BGl_typez00zztype_typez00))
								{	/* Cfa/tvector.scm 557 */
									obj_t BgL_makezd2tvzd2_2309;

									{	/* Cfa/tvector.scm 557 */
										obj_t BgL_arg5880z00_2318;

										{	/* Cfa/tvector.scm 557 */
											obj_t BgL_arg5881z00_2319;

											obj_t BgL_arg5882z00_2320;

											{	/* Cfa/tvector.scm 557 */
												obj_t BgL_res6025z00_3623;

												{	/* Cfa/tvector.scm 557 */
													obj_t BgL_symbolz00_3621;

													BgL_symbolz00_3621 = CNST_TABLE_REF(((long) 18));
													{	/* Cfa/tvector.scm 557 */
														obj_t BgL_arg2063z00_3622;

														BgL_arg2063z00_3622 =
															SYMBOL_TO_STRING(BgL_symbolz00_3621);
														BgL_res6025z00_3623 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_3622);
												}}
												BgL_arg5881z00_2319 = BgL_res6025z00_3623;
											}
											{	/* Cfa/tvector.scm 557 */
												obj_t BgL_arg5885z00_2323;

												{
													BgL_typez00_bglt BgL_auxz00_4536;

													BgL_auxz00_4536 = (BgL_typez00_bglt) (BgL_tvz00_2307);
													BgL_arg5885z00_2323 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_4536))->
														BgL_idz00);
												}
												{	/* Cfa/tvector.scm 557 */
													obj_t BgL_res6026z00_3627;

													{	/* Cfa/tvector.scm 557 */
														obj_t BgL_arg2063z00_3626;

														BgL_arg2063z00_3626 =
															SYMBOL_TO_STRING(BgL_arg5885z00_2323);
														BgL_res6026z00_3627 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_3626);
													}
													BgL_arg5882z00_2320 = BgL_res6026z00_3627;
											}}
											{	/* Cfa/tvector.scm 557 */
												obj_t BgL_list5883z00_2321;

												{	/* Cfa/tvector.scm 557 */
													obj_t BgL_arg5884z00_2322;

													BgL_arg5884z00_2322 =
														MAKE_PAIR(BgL_arg5882z00_2320, BNIL);
													BgL_list5883z00_2321 =
														MAKE_PAIR(BgL_arg5881z00_2319, BgL_arg5884z00_2322);
												}
												BgL_arg5880z00_2318 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list5883z00_2321);
										}}
										BgL_makezd2tvzd2_2309 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg5880z00_2318));
									}
									{	/* Cfa/tvector.scm 557 */
										BgL_nodez00_bglt BgL_newzd2nodezd2_2310;

										{	/* Cfa/tvector.scm 558 */
											obj_t BgL_arg5873z00_2311;

											obj_t BgL_arg5875z00_2313;

											obj_t BgL_arg5876z00_2314;

											{	/* Cfa/tvector.scm 558 */
												obj_t BgL_arg5877z00_2315;

												{	/* Cfa/tvector.scm 558 */
													obj_t BgL_auxz00_4546;

													{
														BgL_appz00_bglt BgL_auxz00_4547;

														BgL_auxz00_4547 =
															(BgL_appz00_bglt) (BgL_nodez00_2301);
														BgL_auxz00_4546 =
															(((BgL_appz00_bglt) CREF(BgL_auxz00_4547))->
															BgL_argsz00);
													}
													BgL_arg5877z00_2315 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_4546, BNIL);
												}
												BgL_arg5873z00_2311 =
													MAKE_PAIR(BgL_makezd2tvzd2_2309, BgL_arg5877z00_2315);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_4552;

												BgL_auxz00_4552 = (BgL_nodez00_bglt) (BgL_nodez00_2301);
												BgL_arg5875z00_2313 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4552))->
													BgL_locz00);
											}
											BgL_arg5876z00_2314 = CNST_TABLE_REF(((long) 12));
											BgL_newzd2nodezd2_2310 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg5873z00_2311,
												BNIL, BgL_arg5875z00_2313, BgL_arg5876z00_2314);
										}
										{	/* Cfa/tvector.scm 558 */

											{
												BgL_typez00_bglt BgL_auxz00_4557;

												BgL_auxz00_4557 = (BgL_typez00_bglt) (BgL_tvz00_2307);
												((((BgL_nodez00_bglt) CREF(BgL_newzd2nodezd2_2310))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_4557), BUNSPEC);
											}
											return
												(obj_t) (BGl_inlinezd2nodezd2zzinline_inlinez00
												(BgL_newzd2nodezd2_2310, ((long) 1), BNIL));
								}}}
							else
								{	/* Cfa/tvector.scm 556 */
									return (obj_t) (BgL_nodez00_2301);
								}
						}
					}
				}
			}
		}
	}



/* patch!-vlength5463 */
	obj_t BGl_patchz12zd2vlength5463zc0zzcfa_tvectorz00(obj_t BgL_envz00_3732,
		obj_t BgL_nodez00_3733)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 500 */
			{
				BgL_vlengthz00_bglt BgL_nodez00_2270;

				BgL_nodez00_2270 = (BgL_vlengthz00_bglt) (BgL_nodez00_3733);
				{	/* Cfa/tvector.scm 502 */
					obj_t BgL_arg5849z00_2274;

					{
						BgL_externz00_bglt BgL_auxz00_4564;

						BgL_auxz00_4564 = (BgL_externz00_bglt) (BgL_nodez00_2270);
						BgL_arg5849z00_2274 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4564))->BgL_exprza2za2);
					}
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5849z00_2274);
				}
				{	/* Cfa/tvector.scm 503 */
					BgL_approxz00_bglt BgL_approxz00_2275;

					{	/* Cfa/tvector.scm 503 */
						obj_t BgL_arg5868z00_2297;

						{	/* Cfa/tvector.scm 503 */
							obj_t BgL_pairz00_3600;

							{
								BgL_externz00_bglt BgL_auxz00_4568;

								BgL_auxz00_4568 = (BgL_externz00_bglt) (BgL_nodez00_2270);
								BgL_pairz00_3600 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4568))->
									BgL_exprza2za2);
							}
							BgL_arg5868z00_2297 = CAR(BgL_pairz00_3600);
						}
						BgL_approxz00_2275 =
							BGl_cfaz12z12zzcfa_cfaz00(
							(BgL_nodez00_bglt) (BgL_arg5868z00_2297));
					}
					{	/* Cfa/tvector.scm 503 */
						obj_t BgL_tvz00_2276;

						BgL_tvz00_2276 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_2275);
						{	/* Cfa/tvector.scm 504 */

							{	/* Cfa/tvector.scm 505 */
								bool_t BgL_testz00_4575;

								if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_2276,
										BGl_tvecz00zztvector_tvectorz00))
									{	/* Cfa/tvector.scm 505 */
										bool_t BgL_testz00_4578;

										{	/* Cfa/tvector.scm 505 */
											BgL_vlengthzf2cinfozf2_bglt BgL_obj5083z00_3602;

											BgL_obj5083z00_3602 =
												(BgL_vlengthzf2cinfozf2_bglt) (BgL_nodez00_2270);
											{
												obj_t BgL_auxz00_4580;

												{	/* Cfa/tvector.scm 505 */
													BgL_objectz00_bglt BgL_auxz00_4581;

													BgL_auxz00_4581 =
														(BgL_objectz00_bglt) (BgL_obj5083z00_3602);
													BgL_auxz00_4580 =
														BGL_OBJECT_WIDENING(BgL_auxz00_4581);
												}
												BgL_testz00_4578 =
													(((BgL_vlengthzf2cinfozf2_bglt)
														CREF(BgL_auxz00_4580))->BgL_tvectorzf3zf3);
											}
										}
										if (BgL_testz00_4578)
											{	/* Cfa/tvector.scm 505 */
												BgL_testz00_4575 = ((bool_t) 0);
											}
										else
											{	/* Cfa/tvector.scm 505 */
												BgL_testz00_4575 = ((bool_t) 1);
											}
									}
								else
									{	/* Cfa/tvector.scm 505 */
										BgL_testz00_4575 = ((bool_t) 0);
									}
								if (BgL_testz00_4575)
									{	/* Cfa/tvector.scm 506 */
										obj_t BgL_lengthzd2tvzd2_2278;

										{	/* Cfa/tvector.scm 506 */
											obj_t BgL_arg5860z00_2289;

											{	/* Cfa/tvector.scm 506 */
												obj_t BgL_arg5861z00_2290;

												obj_t BgL_arg5862z00_2291;

												{	/* Cfa/tvector.scm 506 */
													obj_t BgL_arg5865z00_2294;

													{
														BgL_typez00_bglt BgL_auxz00_4585;

														BgL_auxz00_4585 =
															(BgL_typez00_bglt) (
															(BgL_tvecz00_bglt) (BgL_tvz00_2276));
														BgL_arg5865z00_2294 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_4585))->
															BgL_idz00);
													}
													{	/* Cfa/tvector.scm 506 */
														obj_t BgL_res6023z00_3606;

														{	/* Cfa/tvector.scm 506 */
															obj_t BgL_arg2063z00_3605;

															BgL_arg2063z00_3605 =
																SYMBOL_TO_STRING(BgL_arg5865z00_2294);
															BgL_res6023z00_3606 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_3605);
														}
														BgL_arg5861z00_2290 = BgL_res6023z00_3606;
													}
												}
												{	/* Cfa/tvector.scm 506 */
													obj_t BgL_res6024z00_3609;

													{	/* Cfa/tvector.scm 506 */
														obj_t BgL_symbolz00_3607;

														BgL_symbolz00_3607 = CNST_TABLE_REF(((long) 19));
														{	/* Cfa/tvector.scm 506 */
															obj_t BgL_arg2063z00_3608;

															BgL_arg2063z00_3608 =
																SYMBOL_TO_STRING(BgL_symbolz00_3607);
															BgL_res6024z00_3609 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_3608);
													}}
													BgL_arg5862z00_2291 = BgL_res6024z00_3609;
												}
												{	/* Cfa/tvector.scm 506 */
													obj_t BgL_list5863z00_2292;

													{	/* Cfa/tvector.scm 506 */
														obj_t BgL_arg5864z00_2293;

														BgL_arg5864z00_2293 =
															MAKE_PAIR(BgL_arg5862z00_2291, BNIL);
														BgL_list5863z00_2292 =
															MAKE_PAIR(BgL_arg5861z00_2290,
															BgL_arg5864z00_2293);
													}
													BgL_arg5860z00_2289 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list5863z00_2292);
											}}
											BgL_lengthzd2tvzd2_2278 =
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg5860z00_2289));
										}
										{	/* Cfa/tvector.scm 506 */
											BgL_nodez00_bglt BgL_newzd2nodezd2_2279;

											{	/* Cfa/tvector.scm 507 */
												obj_t BgL_arg5851z00_2280;

												obj_t BgL_arg5853z00_2282;

												obj_t BgL_arg5854z00_2283;

												{	/* Cfa/tvector.scm 507 */
													obj_t BgL_arg5855z00_2284;

													{	/* Cfa/tvector.scm 507 */
														obj_t BgL_arg5856z00_2285;

														{	/* Cfa/tvector.scm 507 */
															obj_t BgL_pairz00_3612;

															{
																BgL_externz00_bglt BgL_auxz00_4599;

																BgL_auxz00_4599 =
																	(BgL_externz00_bglt) (BgL_nodez00_2270);
																BgL_pairz00_3612 =
																	(((BgL_externz00_bglt)
																		CREF(BgL_auxz00_4599))->BgL_exprza2za2);
															}
															BgL_arg5856z00_2285 = CAR(BgL_pairz00_3612);
														}
														{	/* Cfa/tvector.scm 507 */
															obj_t BgL_list5858z00_2287;

															BgL_list5858z00_2287 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg5855z00_2284 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg5856z00_2285, BgL_list5858z00_2287);
													}}
													BgL_arg5851z00_2280 =
														MAKE_PAIR(BgL_lengthzd2tvzd2_2278,
														BgL_arg5855z00_2284);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_4606;

													BgL_auxz00_4606 =
														(BgL_nodez00_bglt) (BgL_nodez00_2270);
													BgL_arg5853z00_2282 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4606))->
														BgL_locz00);
												}
												BgL_arg5854z00_2283 = CNST_TABLE_REF(((long) 12));
												BgL_newzd2nodezd2_2279 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg5851z00_2280, BNIL, BgL_arg5853z00_2282,
													BgL_arg5854z00_2283);
											}
											{	/* Cfa/tvector.scm 507 */

												{
													BgL_typez00_bglt BgL_auxz00_4611;

													BgL_auxz00_4611 =
														(BgL_typez00_bglt)
														(BGl_za2intza2z00zztype_cachez00);
													((((BgL_nodez00_bglt) CREF(BgL_newzd2nodezd2_2279))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_4611), BUNSPEC);
												}
												return
													(obj_t) (BGl_inlinezd2nodezd2zzinline_inlinez00
													(BgL_newzd2nodezd2_2279, ((long) 1), BNIL));
									}}}
								else
									{	/* Cfa/tvector.scm 505 */
										return (obj_t) (BgL_nodez00_2270);
									}
							}
						}
					}
				}
			}
		}
	}



/* patch!-app5461 */
	obj_t BGl_patchz12zd2app5461zc0zzcfa_tvectorz00(obj_t BgL_envz00_3734,
		obj_t BgL_nodez00_3735)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 477 */
			{
				BgL_appz00_bglt BgL_nodez00_2247;

				BgL_nodez00_2247 = (BgL_appz00_bglt) (BgL_nodez00_3735);
				{	/* Cfa/tvector.scm 479 */
					obj_t BgL_arg5833z00_2251;

					BgL_arg5833z00_2251 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_2247))->BgL_argsz00);
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5833z00_2251);
				}
				{	/* Cfa/tvector.scm 480 */
					obj_t BgL_arg5834z00_2252;

					{	/* Cfa/tvector.scm 480 */
						BgL_varz00_bglt BgL_arg5835z00_2253;

						BgL_arg5835z00_2253 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_2247))->BgL_funz00);
						{	/* Cfa/tvector.scm 480 */
							BgL_nodez00_bglt BgL_nodez00_3558;

							BgL_nodez00_3558 = (BgL_nodez00_bglt) (BgL_arg5835z00_2253);
							{	/* Cfa/tvector.scm 480 */
								obj_t BgL_method5417z00_3559;

								{	/* Cfa/tvector.scm 480 */
									BgL_objectz00_bglt BgL_objz00_3560;

									BgL_objz00_3560 = (BgL_objectz00_bglt) (BgL_nodez00_3558);
									{	/* Cfa/tvector.scm 480 */
										long BgL_objzd2classzd2numz00_3561;

										BgL_objzd2classzd2numz00_3561 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3560);
										{	/* Cfa/tvector.scm 480 */
											obj_t BgL_arg2643z00_3562;

											BgL_arg2643z00_3562 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 480 */
												obj_t BgL_arrayz00_3564;

												int BgL_offsetz00_3565;

												BgL_arrayz00_3564 = BgL_arg2643z00_3562;
												BgL_offsetz00_3565 =
													(int) (BgL_objzd2classzd2numz00_3561);
												{	/* Cfa/tvector.scm 480 */
													long BgL_offsetz00_3566;

													BgL_offsetz00_3566 =
														((long) (BgL_offsetz00_3565) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 480 */
														long BgL_modz00_3567;

														{	/* Cfa/tvector.scm 480 */
															int BgL_arg2645z00_3568;

															BgL_arg2645z00_3568 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 480 */
																long BgL_auxz00_4630;

																BgL_auxz00_4630 = (long) (BgL_arg2645z00_3568);
																BgL_modz00_3567 =
																	(BgL_offsetz00_3566 / BgL_auxz00_4630);
														}}
														{	/* Cfa/tvector.scm 480 */
															long BgL_restz00_3569;

															{	/* Cfa/tvector.scm 480 */
																int BgL_arg2644z00_3570;

																BgL_arg2644z00_3570 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 480 */
																	long BgL_auxz00_4634;

																	BgL_auxz00_4634 =
																		(long) (BgL_arg2644z00_3570);
																	BgL_restz00_3569 =
																		(BgL_offsetz00_3566 % BgL_auxz00_4634);
															}}
															{	/* Cfa/tvector.scm 480 */

																BgL_method5417z00_3559 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3564,
																		(int) (BgL_modz00_3567)),
																	(int) (BgL_restz00_3569));
								}}}}}}}}
								BgL_arg5834z00_2252 =
									PROCEDURE_ENTRY(BgL_method5417z00_3559)
									(BgL_method5417z00_3559, (obj_t) (BgL_nodez00_3558), BEOA);
					}}}
					{
						BgL_varz00_bglt BgL_auxz00_4644;

						BgL_auxz00_4644 = (BgL_varz00_bglt) (BgL_arg5834z00_2252);
						((((BgL_appz00_bglt) CREF(BgL_nodez00_2247))->BgL_funz00) =
							((BgL_varz00_bglt) BgL_auxz00_4644), BUNSPEC);
				}}
				{	/* Cfa/tvector.scm 481 */
					BgL_variablez00_bglt BgL_vz00_2254;

					{	/* Cfa/tvector.scm 481 */
						BgL_varz00_bglt BgL_obj2224z00_3587;

						BgL_obj2224z00_3587 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_2247))->BgL_funz00);
						BgL_vz00_2254 =
							(((BgL_varz00_bglt) CREF(BgL_obj2224z00_3587))->BgL_variablez00);
					}
					{	/* Cfa/tvector.scm 482 */
						bool_t BgL_testz00_4649;

						{	/* Cfa/tvector.scm 482 */
							obj_t BgL_obj1821z00_3588;

							BgL_obj1821z00_3588 = (obj_t) (BgL_vz00_2254);
							BgL_testz00_4649 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1821z00_3588,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_4649)
							{	/* Cfa/tvector.scm 483 */
								bool_t BgL_testz00_4652;

								{	/* Cfa/tvector.scm 483 */
									BgL_valuez00_bglt BgL_arg5846z00_2266;

									BgL_arg5846z00_2266 =
										(((BgL_variablez00_bglt) CREF(BgL_vz00_2254))->
										BgL_valuez00);
									{	/* Cfa/tvector.scm 483 */
										obj_t BgL_obj2088z00_3590;

										BgL_obj2088z00_3590 = (obj_t) (BgL_arg5846z00_2266);
										BgL_testz00_4652 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2088z00_3590,
											BGl_cfunz00zzast_varz00);
									}
								}
								if (BgL_testz00_4652)
									{	/* Cfa/tvector.scm 484 */
										obj_t BgL_casezd2valuezd2_2257;

										BgL_casezd2valuezd2_2257 =
											(((BgL_variablez00_bglt) CREF(BgL_vz00_2254))->BgL_idz00);
										if (
											(BgL_casezd2valuezd2_2257 == CNST_TABLE_REF(((long) 1))))
											{	/* Cfa/tvector.scm 484 */
												return
													BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00
													(BgL_nodez00_2247);
											}
										else
											{	/* Cfa/tvector.scm 484 */
												if (
													(BgL_casezd2valuezd2_2257 ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Cfa/tvector.scm 484 */
														return
															BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00
															(BgL_nodez00_2247);
													}
												else
													{	/* Cfa/tvector.scm 484 */
														return (obj_t) (BgL_nodez00_2247);
													}
											}
									}
								else
									{	/* Cfa/tvector.scm 491 */
										bool_t BgL_testz00_4666;

										if (
											((((BgL_variablez00_bglt) CREF(BgL_vz00_2254))->
													BgL_idz00) == CNST_TABLE_REF(((long) 20))))
											{	/* Cfa/tvector.scm 492 */
												obj_t BgL_auxz00_4671;

												{
													BgL_globalz00_bglt BgL_auxz00_4672;

													BgL_auxz00_4672 =
														(BgL_globalz00_bglt) (BgL_vz00_2254);
													BgL_auxz00_4671 =
														(((BgL_globalz00_bglt) CREF(BgL_auxz00_4672))->
														BgL_modulez00);
												}
												BgL_testz00_4666 =
													(BgL_auxz00_4671 == CNST_TABLE_REF(((long) 21)));
											}
										else
											{	/* Cfa/tvector.scm 491 */
												BgL_testz00_4666 = ((bool_t) 0);
											}
										if (BgL_testz00_4666)
											{	/* Cfa/tvector.scm 491 */
												return
													BGl_patchzd2vectorzd2ze3listz12zf1zzcfa_tvectorz00
													(BgL_nodez00_2247);
											}
										else
											{	/* Cfa/tvector.scm 491 */
												return (obj_t) (BgL_nodez00_2247);
											}
									}
							}
						else
							{	/* Cfa/tvector.scm 482 */
								return (obj_t) (BgL_nodez00_2247);
							}
					}
				}
			}
		}
	}



/* patch!-box-ref5459 */
	obj_t BGl_patchz12zd2boxzd2ref5459z12zzcfa_tvectorz00(obj_t BgL_envz00_3736,
		obj_t BgL_nodez00_3737)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 458 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_2239;

				{	/* Cfa/tvector.scm 459 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_4681;

					BgL_nodez00_2239 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3737);
					{	/* Cfa/tvector.scm 460 */
						obj_t BgL_arg5830z00_2243;

						{	/* Cfa/tvector.scm 460 */
							BgL_varz00_bglt BgL_arg5831z00_2244;

							BgL_arg5831z00_2244 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2239))->BgL_varz00);
							{	/* Cfa/tvector.scm 460 */
								BgL_nodez00_bglt BgL_nodez00_3528;

								BgL_nodez00_3528 = (BgL_nodez00_bglt) (BgL_arg5831z00_2244);
								{	/* Cfa/tvector.scm 460 */
									obj_t BgL_method5417z00_3529;

									{	/* Cfa/tvector.scm 460 */
										BgL_objectz00_bglt BgL_objz00_3530;

										BgL_objz00_3530 = (BgL_objectz00_bglt) (BgL_nodez00_3528);
										{	/* Cfa/tvector.scm 460 */
											long BgL_objzd2classzd2numz00_3531;

											BgL_objzd2classzd2numz00_3531 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3530);
											{	/* Cfa/tvector.scm 460 */
												obj_t BgL_arg2643z00_3532;

												BgL_arg2643z00_3532 =
													PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
													(int) (((long) 1)));
												{	/* Cfa/tvector.scm 460 */
													obj_t BgL_arrayz00_3534;

													int BgL_offsetz00_3535;

													BgL_arrayz00_3534 = BgL_arg2643z00_3532;
													BgL_offsetz00_3535 =
														(int) (BgL_objzd2classzd2numz00_3531);
													{	/* Cfa/tvector.scm 460 */
														long BgL_offsetz00_3536;

														BgL_offsetz00_3536 =
															((long) (BgL_offsetz00_3535) - OBJECT_TYPE);
														{	/* Cfa/tvector.scm 460 */
															long BgL_modz00_3537;

															{	/* Cfa/tvector.scm 460 */
																int BgL_arg2645z00_3538;

																BgL_arg2645z00_3538 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 460 */
																	long BgL_auxz00_4692;

																	BgL_auxz00_4692 =
																		(long) (BgL_arg2645z00_3538);
																	BgL_modz00_3537 =
																		(BgL_offsetz00_3536 / BgL_auxz00_4692);
															}}
															{	/* Cfa/tvector.scm 460 */
																long BgL_restz00_3539;

																{	/* Cfa/tvector.scm 460 */
																	int BgL_arg2644z00_3540;

																	BgL_arg2644z00_3540 = (int) (((long) 16));
																	{	/* Cfa/tvector.scm 460 */
																		long BgL_auxz00_4696;

																		BgL_auxz00_4696 =
																			(long) (BgL_arg2644z00_3540);
																		BgL_restz00_3539 =
																			(BgL_offsetz00_3536 % BgL_auxz00_4696);
																}}
																{	/* Cfa/tvector.scm 460 */

																	BgL_method5417z00_3529 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3534,
																			(int) (BgL_modz00_3537)),
																		(int) (BgL_restz00_3539));
									}}}}}}}}
									BgL_arg5830z00_2243 =
										PROCEDURE_ENTRY(BgL_method5417z00_3529)
										(BgL_method5417z00_3529, (obj_t) (BgL_nodez00_3528), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_4706;

							BgL_auxz00_4706 = (BgL_varz00_bglt) (BgL_arg5830z00_2243);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2239))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_4706), BUNSPEC);
					}}
					BgL_auxz00_4681 = BgL_nodez00_2239;
					return (obj_t) (BgL_auxz00_4681);
				}
			}
		}
	}



/* patch!-box-set!5457 */
	obj_t BGl_patchz12zd2boxzd2setz125457z00zzcfa_tvectorz00(obj_t
		BgL_envz00_3738, obj_t BgL_nodez00_3739)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 449 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_2229;

				{	/* Cfa/tvector.scm 450 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_4711;

					BgL_nodez00_2229 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3739);
					{	/* Cfa/tvector.scm 451 */
						obj_t BgL_arg5825z00_2233;

						{	/* Cfa/tvector.scm 451 */
							BgL_varz00_bglt BgL_arg5826z00_2234;

							BgL_arg5826z00_2234 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2229))->
								BgL_varz00);
							{	/* Cfa/tvector.scm 451 */
								BgL_nodez00_bglt BgL_nodez00_3470;

								BgL_nodez00_3470 = (BgL_nodez00_bglt) (BgL_arg5826z00_2234);
								{	/* Cfa/tvector.scm 451 */
									obj_t BgL_method5417z00_3471;

									{	/* Cfa/tvector.scm 451 */
										BgL_objectz00_bglt BgL_objz00_3472;

										BgL_objz00_3472 = (BgL_objectz00_bglt) (BgL_nodez00_3470);
										{	/* Cfa/tvector.scm 451 */
											long BgL_objzd2classzd2numz00_3473;

											BgL_objzd2classzd2numz00_3473 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3472);
											{	/* Cfa/tvector.scm 451 */
												obj_t BgL_arg2643z00_3474;

												BgL_arg2643z00_3474 =
													PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
													(int) (((long) 1)));
												{	/* Cfa/tvector.scm 451 */
													obj_t BgL_arrayz00_3476;

													int BgL_offsetz00_3477;

													BgL_arrayz00_3476 = BgL_arg2643z00_3474;
													BgL_offsetz00_3477 =
														(int) (BgL_objzd2classzd2numz00_3473);
													{	/* Cfa/tvector.scm 451 */
														long BgL_offsetz00_3478;

														BgL_offsetz00_3478 =
															((long) (BgL_offsetz00_3477) - OBJECT_TYPE);
														{	/* Cfa/tvector.scm 451 */
															long BgL_modz00_3479;

															{	/* Cfa/tvector.scm 451 */
																int BgL_arg2645z00_3480;

																BgL_arg2645z00_3480 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 451 */
																	long BgL_auxz00_4722;

																	BgL_auxz00_4722 =
																		(long) (BgL_arg2645z00_3480);
																	BgL_modz00_3479 =
																		(BgL_offsetz00_3478 / BgL_auxz00_4722);
															}}
															{	/* Cfa/tvector.scm 451 */
																long BgL_restz00_3481;

																{	/* Cfa/tvector.scm 451 */
																	int BgL_arg2644z00_3482;

																	BgL_arg2644z00_3482 = (int) (((long) 16));
																	{	/* Cfa/tvector.scm 451 */
																		long BgL_auxz00_4726;

																		BgL_auxz00_4726 =
																			(long) (BgL_arg2644z00_3482);
																		BgL_restz00_3481 =
																			(BgL_offsetz00_3478 % BgL_auxz00_4726);
																}}
																{	/* Cfa/tvector.scm 451 */

																	BgL_method5417z00_3471 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3476,
																			(int) (BgL_modz00_3479)),
																		(int) (BgL_restz00_3481));
									}}}}}}}}
									BgL_arg5825z00_2233 =
										PROCEDURE_ENTRY(BgL_method5417z00_3471)
										(BgL_method5417z00_3471, (obj_t) (BgL_nodez00_3470), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_4736;

							BgL_auxz00_4736 = (BgL_varz00_bglt) (BgL_arg5825z00_2233);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2229))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_4736), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 452 */
						obj_t BgL_arg5827z00_2235;

						{	/* Cfa/tvector.scm 452 */
							BgL_nodez00_bglt BgL_arg5828z00_2236;

							BgL_arg5828z00_2236 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2229))->
								BgL_valuez00);
							{	/* Cfa/tvector.scm 452 */
								obj_t BgL_method5417z00_3500;

								{	/* Cfa/tvector.scm 452 */
									BgL_objectz00_bglt BgL_objz00_3501;

									BgL_objz00_3501 = (BgL_objectz00_bglt) (BgL_arg5828z00_2236);
									{	/* Cfa/tvector.scm 452 */
										long BgL_objzd2classzd2numz00_3502;

										BgL_objzd2classzd2numz00_3502 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3501);
										{	/* Cfa/tvector.scm 452 */
											obj_t BgL_arg2643z00_3503;

											BgL_arg2643z00_3503 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 452 */
												obj_t BgL_arrayz00_3505;

												int BgL_offsetz00_3506;

												BgL_arrayz00_3505 = BgL_arg2643z00_3503;
												BgL_offsetz00_3506 =
													(int) (BgL_objzd2classzd2numz00_3502);
												{	/* Cfa/tvector.scm 452 */
													long BgL_offsetz00_3507;

													BgL_offsetz00_3507 =
														((long) (BgL_offsetz00_3506) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 452 */
														long BgL_modz00_3508;

														{	/* Cfa/tvector.scm 452 */
															int BgL_arg2645z00_3509;

															BgL_arg2645z00_3509 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 452 */
																long BgL_auxz00_4748;

																BgL_auxz00_4748 = (long) (BgL_arg2645z00_3509);
																BgL_modz00_3508 =
																	(BgL_offsetz00_3507 / BgL_auxz00_4748);
														}}
														{	/* Cfa/tvector.scm 452 */
															long BgL_restz00_3510;

															{	/* Cfa/tvector.scm 452 */
																int BgL_arg2644z00_3511;

																BgL_arg2644z00_3511 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 452 */
																	long BgL_auxz00_4752;

																	BgL_auxz00_4752 =
																		(long) (BgL_arg2644z00_3511);
																	BgL_restz00_3510 =
																		(BgL_offsetz00_3507 % BgL_auxz00_4752);
															}}
															{	/* Cfa/tvector.scm 452 */

																BgL_method5417z00_3500 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3505,
																		(int) (BgL_modz00_3508)),
																	(int) (BgL_restz00_3510));
								}}}}}}}}
								BgL_arg5827z00_2235 =
									PROCEDURE_ENTRY(BgL_method5417z00_3500)
									(BgL_method5417z00_3500, (obj_t) (BgL_arg5828z00_2236), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4762;

							BgL_auxz00_4762 = (BgL_nodez00_bglt) (BgL_arg5827z00_2235);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2229))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_4762), BUNSPEC);
					}}
					BgL_auxz00_4711 = BgL_nodez00_2229;
					return (obj_t) (BgL_auxz00_4711);
				}
			}
		}
	}



/* patch!-make-box5455 */
	obj_t BGl_patchz12zd2makezd2box5455z12zzcfa_tvectorz00(obj_t BgL_envz00_3740,
		obj_t BgL_nodez00_3741)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 441 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_2221;

				{	/* Cfa/tvector.scm 442 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_4767;

					BgL_nodez00_2221 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3741);
					{	/* Cfa/tvector.scm 443 */
						obj_t BgL_arg5822z00_2225;

						{	/* Cfa/tvector.scm 443 */
							BgL_nodez00_bglt BgL_arg5823z00_2226;

							BgL_arg5823z00_2226 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2221))->
								BgL_valuez00);
							{	/* Cfa/tvector.scm 443 */
								obj_t BgL_method5417z00_3442;

								{	/* Cfa/tvector.scm 443 */
									BgL_objectz00_bglt BgL_objz00_3443;

									BgL_objz00_3443 = (BgL_objectz00_bglt) (BgL_arg5823z00_2226);
									{	/* Cfa/tvector.scm 443 */
										long BgL_objzd2classzd2numz00_3444;

										BgL_objzd2classzd2numz00_3444 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3443);
										{	/* Cfa/tvector.scm 443 */
											obj_t BgL_arg2643z00_3445;

											BgL_arg2643z00_3445 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 443 */
												obj_t BgL_arrayz00_3447;

												int BgL_offsetz00_3448;

												BgL_arrayz00_3447 = BgL_arg2643z00_3445;
												BgL_offsetz00_3448 =
													(int) (BgL_objzd2classzd2numz00_3444);
												{	/* Cfa/tvector.scm 443 */
													long BgL_offsetz00_3449;

													BgL_offsetz00_3449 =
														((long) (BgL_offsetz00_3448) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 443 */
														long BgL_modz00_3450;

														{	/* Cfa/tvector.scm 443 */
															int BgL_arg2645z00_3451;

															BgL_arg2645z00_3451 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 443 */
																long BgL_auxz00_4777;

																BgL_auxz00_4777 = (long) (BgL_arg2645z00_3451);
																BgL_modz00_3450 =
																	(BgL_offsetz00_3449 / BgL_auxz00_4777);
														}}
														{	/* Cfa/tvector.scm 443 */
															long BgL_restz00_3452;

															{	/* Cfa/tvector.scm 443 */
																int BgL_arg2644z00_3453;

																BgL_arg2644z00_3453 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 443 */
																	long BgL_auxz00_4781;

																	BgL_auxz00_4781 =
																		(long) (BgL_arg2644z00_3453);
																	BgL_restz00_3452 =
																		(BgL_offsetz00_3449 % BgL_auxz00_4781);
															}}
															{	/* Cfa/tvector.scm 443 */

																BgL_method5417z00_3442 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3447,
																		(int) (BgL_modz00_3450)),
																	(int) (BgL_restz00_3452));
								}}}}}}}}
								BgL_arg5822z00_2225 =
									PROCEDURE_ENTRY(BgL_method5417z00_3442)
									(BgL_method5417z00_3442, (obj_t) (BgL_arg5823z00_2226), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4791;

							BgL_auxz00_4791 = (BgL_nodez00_bglt) (BgL_arg5822z00_2225);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2221))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_4791), BUNSPEC);
					}}
					BgL_auxz00_4767 = BgL_nodez00_2221;
					return (obj_t) (BgL_auxz00_4767);
				}
			}
		}
	}



/* patch!-jump-ex-it5453 */
	obj_t BGl_patchz12zd2jumpzd2exzd2it5453zc0zzcfa_tvectorz00(obj_t
		BgL_envz00_3742, obj_t BgL_nodez00_3743)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 432 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2211;

				{	/* Cfa/tvector.scm 433 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_4796;

					BgL_nodez00_2211 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3743);
					{	/* Cfa/tvector.scm 434 */
						obj_t BgL_arg5817z00_2215;

						{	/* Cfa/tvector.scm 434 */
							BgL_nodez00_bglt BgL_arg5818z00_2216;

							BgL_arg5818z00_2216 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2211))->
								BgL_exitz00);
							{	/* Cfa/tvector.scm 434 */
								obj_t BgL_method5417z00_3384;

								{	/* Cfa/tvector.scm 434 */
									BgL_objectz00_bglt BgL_objz00_3385;

									BgL_objz00_3385 = (BgL_objectz00_bglt) (BgL_arg5818z00_2216);
									{	/* Cfa/tvector.scm 434 */
										long BgL_objzd2classzd2numz00_3386;

										BgL_objzd2classzd2numz00_3386 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3385);
										{	/* Cfa/tvector.scm 434 */
											obj_t BgL_arg2643z00_3387;

											BgL_arg2643z00_3387 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 434 */
												obj_t BgL_arrayz00_3389;

												int BgL_offsetz00_3390;

												BgL_arrayz00_3389 = BgL_arg2643z00_3387;
												BgL_offsetz00_3390 =
													(int) (BgL_objzd2classzd2numz00_3386);
												{	/* Cfa/tvector.scm 434 */
													long BgL_offsetz00_3391;

													BgL_offsetz00_3391 =
														((long) (BgL_offsetz00_3390) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 434 */
														long BgL_modz00_3392;

														{	/* Cfa/tvector.scm 434 */
															int BgL_arg2645z00_3393;

															BgL_arg2645z00_3393 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 434 */
																long BgL_auxz00_4806;

																BgL_auxz00_4806 = (long) (BgL_arg2645z00_3393);
																BgL_modz00_3392 =
																	(BgL_offsetz00_3391 / BgL_auxz00_4806);
														}}
														{	/* Cfa/tvector.scm 434 */
															long BgL_restz00_3394;

															{	/* Cfa/tvector.scm 434 */
																int BgL_arg2644z00_3395;

																BgL_arg2644z00_3395 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 434 */
																	long BgL_auxz00_4810;

																	BgL_auxz00_4810 =
																		(long) (BgL_arg2644z00_3395);
																	BgL_restz00_3394 =
																		(BgL_offsetz00_3391 % BgL_auxz00_4810);
															}}
															{	/* Cfa/tvector.scm 434 */

																BgL_method5417z00_3384 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3389,
																		(int) (BgL_modz00_3392)),
																	(int) (BgL_restz00_3394));
								}}}}}}}}
								BgL_arg5817z00_2215 =
									PROCEDURE_ENTRY(BgL_method5417z00_3384)
									(BgL_method5417z00_3384, (obj_t) (BgL_arg5818z00_2216), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4820;

							BgL_auxz00_4820 = (BgL_nodez00_bglt) (BgL_arg5817z00_2215);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2211))->
									BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_4820), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 435 */
						obj_t BgL_arg5819z00_2217;

						{	/* Cfa/tvector.scm 435 */
							BgL_nodez00_bglt BgL_arg5820z00_2218;

							BgL_arg5820z00_2218 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2211))->
								BgL_valuez00);
							{	/* Cfa/tvector.scm 435 */
								obj_t BgL_method5417z00_3413;

								{	/* Cfa/tvector.scm 435 */
									BgL_objectz00_bglt BgL_objz00_3414;

									BgL_objz00_3414 = (BgL_objectz00_bglt) (BgL_arg5820z00_2218);
									{	/* Cfa/tvector.scm 435 */
										long BgL_objzd2classzd2numz00_3415;

										BgL_objzd2classzd2numz00_3415 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3414);
										{	/* Cfa/tvector.scm 435 */
											obj_t BgL_arg2643z00_3416;

											BgL_arg2643z00_3416 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 435 */
												obj_t BgL_arrayz00_3418;

												int BgL_offsetz00_3419;

												BgL_arrayz00_3418 = BgL_arg2643z00_3416;
												BgL_offsetz00_3419 =
													(int) (BgL_objzd2classzd2numz00_3415);
												{	/* Cfa/tvector.scm 435 */
													long BgL_offsetz00_3420;

													BgL_offsetz00_3420 =
														((long) (BgL_offsetz00_3419) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 435 */
														long BgL_modz00_3421;

														{	/* Cfa/tvector.scm 435 */
															int BgL_arg2645z00_3422;

															BgL_arg2645z00_3422 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 435 */
																long BgL_auxz00_4832;

																BgL_auxz00_4832 = (long) (BgL_arg2645z00_3422);
																BgL_modz00_3421 =
																	(BgL_offsetz00_3420 / BgL_auxz00_4832);
														}}
														{	/* Cfa/tvector.scm 435 */
															long BgL_restz00_3423;

															{	/* Cfa/tvector.scm 435 */
																int BgL_arg2644z00_3424;

																BgL_arg2644z00_3424 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 435 */
																	long BgL_auxz00_4836;

																	BgL_auxz00_4836 =
																		(long) (BgL_arg2644z00_3424);
																	BgL_restz00_3423 =
																		(BgL_offsetz00_3420 % BgL_auxz00_4836);
															}}
															{	/* Cfa/tvector.scm 435 */

																BgL_method5417z00_3413 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3418,
																		(int) (BgL_modz00_3421)),
																	(int) (BgL_restz00_3423));
								}}}}}}}}
								BgL_arg5819z00_2217 =
									PROCEDURE_ENTRY(BgL_method5417z00_3413)
									(BgL_method5417z00_3413, (obj_t) (BgL_arg5820z00_2218), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4846;

							BgL_auxz00_4846 = (BgL_nodez00_bglt) (BgL_arg5819z00_2217);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2211))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_4846), BUNSPEC);
					}}
					BgL_auxz00_4796 = BgL_nodez00_2211;
					return (obj_t) (BgL_auxz00_4796);
				}
			}
		}
	}



/* patch!-set-ex-it5451 */
	obj_t BGl_patchz12zd2setzd2exzd2it5451zc0zzcfa_tvectorz00(obj_t
		BgL_envz00_3744, obj_t BgL_nodez00_3745)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 423 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2202;

				{	/* Cfa/tvector.scm 424 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_4851;

					BgL_nodez00_2202 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3745);
					{	/* Cfa/tvector.scm 425 */
						obj_t BgL_arg5813z00_2206;

						{	/* Cfa/tvector.scm 425 */
							BgL_nodez00_bglt BgL_arg5814z00_2207;

							BgL_arg5814z00_2207 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2202))->
								BgL_bodyz00);
							{	/* Cfa/tvector.scm 425 */
								obj_t BgL_method5417z00_3328;

								{	/* Cfa/tvector.scm 425 */
									BgL_objectz00_bglt BgL_objz00_3329;

									BgL_objz00_3329 = (BgL_objectz00_bglt) (BgL_arg5814z00_2207);
									{	/* Cfa/tvector.scm 425 */
										long BgL_objzd2classzd2numz00_3330;

										BgL_objzd2classzd2numz00_3330 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3329);
										{	/* Cfa/tvector.scm 425 */
											obj_t BgL_arg2643z00_3331;

											BgL_arg2643z00_3331 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 425 */
												obj_t BgL_arrayz00_3333;

												int BgL_offsetz00_3334;

												BgL_arrayz00_3333 = BgL_arg2643z00_3331;
												BgL_offsetz00_3334 =
													(int) (BgL_objzd2classzd2numz00_3330);
												{	/* Cfa/tvector.scm 425 */
													long BgL_offsetz00_3335;

													BgL_offsetz00_3335 =
														((long) (BgL_offsetz00_3334) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 425 */
														long BgL_modz00_3336;

														{	/* Cfa/tvector.scm 425 */
															int BgL_arg2645z00_3337;

															BgL_arg2645z00_3337 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 425 */
																long BgL_auxz00_4861;

																BgL_auxz00_4861 = (long) (BgL_arg2645z00_3337);
																BgL_modz00_3336 =
																	(BgL_offsetz00_3335 / BgL_auxz00_4861);
														}}
														{	/* Cfa/tvector.scm 425 */
															long BgL_restz00_3338;

															{	/* Cfa/tvector.scm 425 */
																int BgL_arg2644z00_3339;

																BgL_arg2644z00_3339 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 425 */
																	long BgL_auxz00_4865;

																	BgL_auxz00_4865 =
																		(long) (BgL_arg2644z00_3339);
																	BgL_restz00_3338 =
																		(BgL_offsetz00_3335 % BgL_auxz00_4865);
															}}
															{	/* Cfa/tvector.scm 425 */

																BgL_method5417z00_3328 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3333,
																		(int) (BgL_modz00_3336)),
																	(int) (BgL_restz00_3338));
								}}}}}}}}
								BgL_arg5813z00_2206 =
									PROCEDURE_ENTRY(BgL_method5417z00_3328)
									(BgL_method5417z00_3328, (obj_t) (BgL_arg5814z00_2207), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4875;

							BgL_auxz00_4875 = (BgL_nodez00_bglt) (BgL_arg5813z00_2206);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2202))->
									BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_4875), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 426 */
						BgL_varz00_bglt BgL_arg5815z00_2208;

						BgL_arg5815z00_2208 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2202))->
							BgL_varz00);
						{	/* Cfa/tvector.scm 426 */
							BgL_nodez00_bglt BgL_nodez00_3356;

							BgL_nodez00_3356 = (BgL_nodez00_bglt) (BgL_arg5815z00_2208);
							{	/* Cfa/tvector.scm 426 */
								obj_t BgL_method5417z00_3357;

								{	/* Cfa/tvector.scm 426 */
									BgL_objectz00_bglt BgL_objz00_3358;

									BgL_objz00_3358 = (BgL_objectz00_bglt) (BgL_nodez00_3356);
									{	/* Cfa/tvector.scm 426 */
										long BgL_objzd2classzd2numz00_3359;

										BgL_objzd2classzd2numz00_3359 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3358);
										{	/* Cfa/tvector.scm 426 */
											obj_t BgL_arg2643z00_3360;

											BgL_arg2643z00_3360 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 426 */
												obj_t BgL_arrayz00_3362;

												int BgL_offsetz00_3363;

												BgL_arrayz00_3362 = BgL_arg2643z00_3360;
												BgL_offsetz00_3363 =
													(int) (BgL_objzd2classzd2numz00_3359);
												{	/* Cfa/tvector.scm 426 */
													long BgL_offsetz00_3364;

													BgL_offsetz00_3364 =
														((long) (BgL_offsetz00_3363) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 426 */
														long BgL_modz00_3365;

														{	/* Cfa/tvector.scm 426 */
															int BgL_arg2645z00_3366;

															BgL_arg2645z00_3366 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 426 */
																long BgL_auxz00_4888;

																BgL_auxz00_4888 = (long) (BgL_arg2645z00_3366);
																BgL_modz00_3365 =
																	(BgL_offsetz00_3364 / BgL_auxz00_4888);
														}}
														{	/* Cfa/tvector.scm 426 */
															long BgL_restz00_3367;

															{	/* Cfa/tvector.scm 426 */
																int BgL_arg2644z00_3368;

																BgL_arg2644z00_3368 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 426 */
																	long BgL_auxz00_4892;

																	BgL_auxz00_4892 =
																		(long) (BgL_arg2644z00_3368);
																	BgL_restz00_3367 =
																		(BgL_offsetz00_3364 % BgL_auxz00_4892);
															}}
															{	/* Cfa/tvector.scm 426 */

																BgL_method5417z00_3357 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3362,
																		(int) (BgL_modz00_3365)),
																	(int) (BgL_restz00_3367));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5417z00_3357) (BgL_method5417z00_3357,
									(obj_t) (BgL_nodez00_3356), BEOA);
					}}}
					BgL_auxz00_4851 = BgL_nodez00_2202;
					return (obj_t) (BgL_auxz00_4851);
				}
			}
		}
	}



/* patch!-let-var5449 */
	obj_t BGl_patchz12zd2letzd2var5449z12zzcfa_tvectorz00(obj_t BgL_envz00_3746,
		obj_t BgL_nodez00_3747)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 411 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_2184;

				{	/* Cfa/tvector.scm 412 */
					BgL_letzd2varzd2_bglt BgL_auxz00_4904;

					BgL_nodez00_2184 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3747);
					{	/* Cfa/tvector.scm 413 */
						obj_t BgL_g5409z00_2188;

						BgL_g5409z00_2188 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2184))->
							BgL_bindingsz00);
						{
							obj_t BgL_l5407z00_2190;

							BgL_l5407z00_2190 = BgL_g5409z00_2188;
						BgL_zc3anonymousza35806ze3z83_2191:
							if (PAIRP(BgL_l5407z00_2190))
								{	/* Cfa/tvector.scm 413 */
									{	/* Cfa/tvector.scm 414 */
										obj_t BgL_bindingz00_2193;

										BgL_bindingz00_2193 = CAR(BgL_l5407z00_2190);
										{	/* Cfa/tvector.scm 414 */
											obj_t BgL_valz00_2194;

											BgL_valz00_2194 = CDR(BgL_bindingz00_2193);
											{	/* Cfa/tvector.scm 415 */
												obj_t BgL_arg5808z00_2195;

												{	/* Cfa/tvector.scm 415 */
													BgL_nodez00_bglt BgL_nodez00_3268;

													BgL_nodez00_3268 =
														(BgL_nodez00_bglt) (BgL_valz00_2194);
													{	/* Cfa/tvector.scm 415 */
														obj_t BgL_method5417z00_3269;

														{	/* Cfa/tvector.scm 415 */
															BgL_objectz00_bglt BgL_objz00_3270;

															BgL_objz00_3270 =
																(BgL_objectz00_bglt) (BgL_nodez00_3268);
															{	/* Cfa/tvector.scm 415 */
																long BgL_objzd2classzd2numz00_3271;

																BgL_objzd2classzd2numz00_3271 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_3270);
																{	/* Cfa/tvector.scm 415 */
																	obj_t BgL_arg2643z00_3272;

																	BgL_arg2643z00_3272 =
																		PROCEDURE_REF
																		(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
																		(int) (((long) 1)));
																	{	/* Cfa/tvector.scm 415 */
																		obj_t BgL_arrayz00_3274;

																		int BgL_offsetz00_3275;

																		BgL_arrayz00_3274 = BgL_arg2643z00_3272;
																		BgL_offsetz00_3275 =
																			(int) (BgL_objzd2classzd2numz00_3271);
																		{	/* Cfa/tvector.scm 415 */
																			long BgL_offsetz00_3276;

																			BgL_offsetz00_3276 =
																				(
																				(long) (BgL_offsetz00_3275) -
																				OBJECT_TYPE);
																			{	/* Cfa/tvector.scm 415 */
																				long BgL_modz00_3277;

																				{	/* Cfa/tvector.scm 415 */
																					int BgL_arg2645z00_3278;

																					BgL_arg2645z00_3278 =
																						(int) (((long) 16));
																					{	/* Cfa/tvector.scm 415 */
																						long BgL_auxz00_4919;

																						BgL_auxz00_4919 =
																							(long) (BgL_arg2645z00_3278);
																						BgL_modz00_3277 =
																							(BgL_offsetz00_3276 /
																							BgL_auxz00_4919);
																				}}
																				{	/* Cfa/tvector.scm 415 */
																					long BgL_restz00_3279;

																					{	/* Cfa/tvector.scm 415 */
																						int BgL_arg2644z00_3280;

																						BgL_arg2644z00_3280 =
																							(int) (((long) 16));
																						{	/* Cfa/tvector.scm 415 */
																							long BgL_auxz00_4923;

																							BgL_auxz00_4923 =
																								(long) (BgL_arg2644z00_3280);
																							BgL_restz00_3279 =
																								(BgL_offsetz00_3276 %
																								BgL_auxz00_4923);
																					}}
																					{	/* Cfa/tvector.scm 415 */

																						BgL_method5417z00_3269 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_3274,
																								(int) (BgL_modz00_3277)),
																							(int) (BgL_restz00_3279));
														}}}}}}}}
														BgL_arg5808z00_2195 =
															PROCEDURE_ENTRY(BgL_method5417z00_3269)
															(BgL_method5417z00_3269,
															(obj_t) (BgL_nodez00_3268), BEOA);
												}}
												SET_CDR(BgL_bindingz00_2193, BgL_arg5808z00_2195);
									}}}
									{
										obj_t BgL_l5407z00_4934;

										BgL_l5407z00_4934 = CDR(BgL_l5407z00_2190);
										BgL_l5407z00_2190 = BgL_l5407z00_4934;
										goto BgL_zc3anonymousza35806ze3z83_2191;
									}
								}
							else
								{	/* Cfa/tvector.scm 413 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/tvector.scm 417 */
						obj_t BgL_arg5810z00_2198;

						{	/* Cfa/tvector.scm 417 */
							BgL_nodez00_bglt BgL_arg5811z00_2199;

							BgL_arg5811z00_2199 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2184))->BgL_bodyz00);
							{	/* Cfa/tvector.scm 417 */
								obj_t BgL_method5417z00_3299;

								{	/* Cfa/tvector.scm 417 */
									BgL_objectz00_bglt BgL_objz00_3300;

									BgL_objz00_3300 = (BgL_objectz00_bglt) (BgL_arg5811z00_2199);
									{	/* Cfa/tvector.scm 417 */
										long BgL_objzd2classzd2numz00_3301;

										BgL_objzd2classzd2numz00_3301 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3300);
										{	/* Cfa/tvector.scm 417 */
											obj_t BgL_arg2643z00_3302;

											BgL_arg2643z00_3302 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 417 */
												obj_t BgL_arrayz00_3304;

												int BgL_offsetz00_3305;

												BgL_arrayz00_3304 = BgL_arg2643z00_3302;
												BgL_offsetz00_3305 =
													(int) (BgL_objzd2classzd2numz00_3301);
												{	/* Cfa/tvector.scm 417 */
													long BgL_offsetz00_3306;

													BgL_offsetz00_3306 =
														((long) (BgL_offsetz00_3305) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 417 */
														long BgL_modz00_3307;

														{	/* Cfa/tvector.scm 417 */
															int BgL_arg2645z00_3308;

															BgL_arg2645z00_3308 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 417 */
																long BgL_auxz00_4945;

																BgL_auxz00_4945 = (long) (BgL_arg2645z00_3308);
																BgL_modz00_3307 =
																	(BgL_offsetz00_3306 / BgL_auxz00_4945);
														}}
														{	/* Cfa/tvector.scm 417 */
															long BgL_restz00_3309;

															{	/* Cfa/tvector.scm 417 */
																int BgL_arg2644z00_3310;

																BgL_arg2644z00_3310 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 417 */
																	long BgL_auxz00_4949;

																	BgL_auxz00_4949 =
																		(long) (BgL_arg2644z00_3310);
																	BgL_restz00_3309 =
																		(BgL_offsetz00_3306 % BgL_auxz00_4949);
															}}
															{	/* Cfa/tvector.scm 417 */

																BgL_method5417z00_3299 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3304,
																		(int) (BgL_modz00_3307)),
																	(int) (BgL_restz00_3309));
								}}}}}}}}
								BgL_arg5810z00_2198 =
									PROCEDURE_ENTRY(BgL_method5417z00_3299)
									(BgL_method5417z00_3299, (obj_t) (BgL_arg5811z00_2199), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4959;

							BgL_auxz00_4959 = (BgL_nodez00_bglt) (BgL_arg5810z00_2198);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2184))->BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4959), BUNSPEC);
					}}
					BgL_auxz00_4904 = BgL_nodez00_2184;
					return (obj_t) (BgL_auxz00_4904);
				}
			}
		}
	}



/* patch!-let-fun5447 */
	obj_t BGl_patchz12zd2letzd2fun5447z12zzcfa_tvectorz00(obj_t BgL_envz00_3748,
		obj_t BgL_nodez00_3749)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 402 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_2168;

				{	/* Cfa/tvector.scm 403 */
					BgL_letzd2funzd2_bglt BgL_auxz00_4964;

					BgL_nodez00_2168 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3749);
					{	/* Cfa/tvector.scm 404 */
						obj_t BgL_g5406z00_2172;

						BgL_g5406z00_2172 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2168))->BgL_localsz00);
						{
							obj_t BgL_l5404z00_2174;

							BgL_l5404z00_2174 = BgL_g5406z00_2172;
						BgL_zc3anonymousza35799ze3z83_2175:
							if (PAIRP(BgL_l5404z00_2174))
								{	/* Cfa/tvector.scm 404 */
									BGl_patchzd2funz12zc0zzcfa_tvectorz00(CAR(BgL_l5404z00_2174));
									{
										obj_t BgL_l5404z00_4970;

										BgL_l5404z00_4970 = CDR(BgL_l5404z00_2174);
										BgL_l5404z00_2174 = BgL_l5404z00_4970;
										goto BgL_zc3anonymousza35799ze3z83_2175;
									}
								}
							else
								{	/* Cfa/tvector.scm 404 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/tvector.scm 405 */
						obj_t BgL_arg5803z00_2180;

						{	/* Cfa/tvector.scm 405 */
							BgL_nodez00_bglt BgL_arg5804z00_2181;

							BgL_arg5804z00_2181 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2168))->BgL_bodyz00);
							{	/* Cfa/tvector.scm 405 */
								obj_t BgL_method5417z00_3237;

								{	/* Cfa/tvector.scm 405 */
									BgL_objectz00_bglt BgL_objz00_3238;

									BgL_objz00_3238 = (BgL_objectz00_bglt) (BgL_arg5804z00_2181);
									{	/* Cfa/tvector.scm 405 */
										long BgL_objzd2classzd2numz00_3239;

										BgL_objzd2classzd2numz00_3239 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3238);
										{	/* Cfa/tvector.scm 405 */
											obj_t BgL_arg2643z00_3240;

											BgL_arg2643z00_3240 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 405 */
												obj_t BgL_arrayz00_3242;

												int BgL_offsetz00_3243;

												BgL_arrayz00_3242 = BgL_arg2643z00_3240;
												BgL_offsetz00_3243 =
													(int) (BgL_objzd2classzd2numz00_3239);
												{	/* Cfa/tvector.scm 405 */
													long BgL_offsetz00_3244;

													BgL_offsetz00_3244 =
														((long) (BgL_offsetz00_3243) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 405 */
														long BgL_modz00_3245;

														{	/* Cfa/tvector.scm 405 */
															int BgL_arg2645z00_3246;

															BgL_arg2645z00_3246 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 405 */
																long BgL_auxz00_4981;

																BgL_auxz00_4981 = (long) (BgL_arg2645z00_3246);
																BgL_modz00_3245 =
																	(BgL_offsetz00_3244 / BgL_auxz00_4981);
														}}
														{	/* Cfa/tvector.scm 405 */
															long BgL_restz00_3247;

															{	/* Cfa/tvector.scm 405 */
																int BgL_arg2644z00_3248;

																BgL_arg2644z00_3248 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 405 */
																	long BgL_auxz00_4985;

																	BgL_auxz00_4985 =
																		(long) (BgL_arg2644z00_3248);
																	BgL_restz00_3247 =
																		(BgL_offsetz00_3244 % BgL_auxz00_4985);
															}}
															{	/* Cfa/tvector.scm 405 */

																BgL_method5417z00_3237 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3242,
																		(int) (BgL_modz00_3245)),
																	(int) (BgL_restz00_3247));
								}}}}}}}}
								BgL_arg5803z00_2180 =
									PROCEDURE_ENTRY(BgL_method5417z00_3237)
									(BgL_method5417z00_3237, (obj_t) (BgL_arg5804z00_2181), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4995;

							BgL_auxz00_4995 = (BgL_nodez00_bglt) (BgL_arg5803z00_2180);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2168))->BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4995), BUNSPEC);
					}}
					BgL_auxz00_4964 = BgL_nodez00_2168;
					return (obj_t) (BgL_auxz00_4964);
				}
			}
		}
	}



/* patch!-select5445 */
	obj_t BGl_patchz12zd2select5445zc0zzcfa_tvectorz00(obj_t BgL_envz00_3750,
		obj_t BgL_nodez00_3751)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 391 */
			{
				BgL_selectz00_bglt BgL_nodez00_2150;

				{	/* Cfa/tvector.scm 392 */
					BgL_selectz00_bglt BgL_auxz00_5000;

					BgL_nodez00_2150 = (BgL_selectz00_bglt) (BgL_nodez00_3751);
					{	/* Cfa/tvector.scm 393 */
						obj_t BgL_arg5791z00_2154;

						{	/* Cfa/tvector.scm 393 */
							BgL_nodez00_bglt BgL_arg5792z00_2155;

							BgL_arg5792z00_2155 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_2150))->BgL_testz00);
							{	/* Cfa/tvector.scm 393 */
								obj_t BgL_method5417z00_3171;

								{	/* Cfa/tvector.scm 393 */
									BgL_objectz00_bglt BgL_objz00_3172;

									BgL_objz00_3172 = (BgL_objectz00_bglt) (BgL_arg5792z00_2155);
									{	/* Cfa/tvector.scm 393 */
										long BgL_objzd2classzd2numz00_3173;

										BgL_objzd2classzd2numz00_3173 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3172);
										{	/* Cfa/tvector.scm 393 */
											obj_t BgL_arg2643z00_3174;

											BgL_arg2643z00_3174 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 393 */
												obj_t BgL_arrayz00_3176;

												int BgL_offsetz00_3177;

												BgL_arrayz00_3176 = BgL_arg2643z00_3174;
												BgL_offsetz00_3177 =
													(int) (BgL_objzd2classzd2numz00_3173);
												{	/* Cfa/tvector.scm 393 */
													long BgL_offsetz00_3178;

													BgL_offsetz00_3178 =
														((long) (BgL_offsetz00_3177) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 393 */
														long BgL_modz00_3179;

														{	/* Cfa/tvector.scm 393 */
															int BgL_arg2645z00_3180;

															BgL_arg2645z00_3180 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 393 */
																long BgL_auxz00_5010;

																BgL_auxz00_5010 = (long) (BgL_arg2645z00_3180);
																BgL_modz00_3179 =
																	(BgL_offsetz00_3178 / BgL_auxz00_5010);
														}}
														{	/* Cfa/tvector.scm 393 */
															long BgL_restz00_3181;

															{	/* Cfa/tvector.scm 393 */
																int BgL_arg2644z00_3182;

																BgL_arg2644z00_3182 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 393 */
																	long BgL_auxz00_5014;

																	BgL_auxz00_5014 =
																		(long) (BgL_arg2644z00_3182);
																	BgL_restz00_3181 =
																		(BgL_offsetz00_3178 % BgL_auxz00_5014);
															}}
															{	/* Cfa/tvector.scm 393 */

																BgL_method5417z00_3171 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3176,
																		(int) (BgL_modz00_3179)),
																	(int) (BgL_restz00_3181));
								}}}}}}}}
								BgL_arg5791z00_2154 =
									PROCEDURE_ENTRY(BgL_method5417z00_3171)
									(BgL_method5417z00_3171, (obj_t) (BgL_arg5792z00_2155), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5024;

							BgL_auxz00_5024 = (BgL_nodez00_bglt) (BgL_arg5791z00_2154);
							((((BgL_selectz00_bglt) CREF(BgL_nodez00_2150))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5024), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 394 */
						obj_t BgL_g5403z00_2156;

						BgL_g5403z00_2156 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_2150))->BgL_clausesz00);
						{
							obj_t BgL_l5401z00_2158;

							BgL_l5401z00_2158 = BgL_g5403z00_2156;
						BgL_zc3anonymousza35793ze3z83_2159:
							if (PAIRP(BgL_l5401z00_2158))
								{	/* Cfa/tvector.scm 394 */
									{	/* Cfa/tvector.scm 395 */
										obj_t BgL_clausez00_2161;

										BgL_clausez00_2161 = CAR(BgL_l5401z00_2158);
										{	/* Cfa/tvector.scm 395 */
											obj_t BgL_arg5795z00_2162;

											{	/* Cfa/tvector.scm 395 */
												obj_t BgL_arg5796z00_2163;

												BgL_arg5796z00_2163 = CDR(BgL_clausez00_2161);
												{	/* Cfa/tvector.scm 395 */
													BgL_nodez00_bglt BgL_nodez00_3202;

													BgL_nodez00_3202 =
														(BgL_nodez00_bglt) (BgL_arg5796z00_2163);
													{	/* Cfa/tvector.scm 395 */
														obj_t BgL_method5417z00_3203;

														{	/* Cfa/tvector.scm 395 */
															BgL_objectz00_bglt BgL_objz00_3204;

															BgL_objz00_3204 =
																(BgL_objectz00_bglt) (BgL_nodez00_3202);
															{	/* Cfa/tvector.scm 395 */
																long BgL_objzd2classzd2numz00_3205;

																BgL_objzd2classzd2numz00_3205 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_3204);
																{	/* Cfa/tvector.scm 395 */
																	obj_t BgL_arg2643z00_3206;

																	BgL_arg2643z00_3206 =
																		PROCEDURE_REF
																		(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
																		(int) (((long) 1)));
																	{	/* Cfa/tvector.scm 395 */
																		obj_t BgL_arrayz00_3208;

																		int BgL_offsetz00_3209;

																		BgL_arrayz00_3208 = BgL_arg2643z00_3206;
																		BgL_offsetz00_3209 =
																			(int) (BgL_objzd2classzd2numz00_3205);
																		{	/* Cfa/tvector.scm 395 */
																			long BgL_offsetz00_3210;

																			BgL_offsetz00_3210 =
																				(
																				(long) (BgL_offsetz00_3209) -
																				OBJECT_TYPE);
																			{	/* Cfa/tvector.scm 395 */
																				long BgL_modz00_3211;

																				{	/* Cfa/tvector.scm 395 */
																					int BgL_arg2645z00_3212;

																					BgL_arg2645z00_3212 =
																						(int) (((long) 16));
																					{	/* Cfa/tvector.scm 395 */
																						long BgL_auxz00_5041;

																						BgL_auxz00_5041 =
																							(long) (BgL_arg2645z00_3212);
																						BgL_modz00_3211 =
																							(BgL_offsetz00_3210 /
																							BgL_auxz00_5041);
																				}}
																				{	/* Cfa/tvector.scm 395 */
																					long BgL_restz00_3213;

																					{	/* Cfa/tvector.scm 395 */
																						int BgL_arg2644z00_3214;

																						BgL_arg2644z00_3214 =
																							(int) (((long) 16));
																						{	/* Cfa/tvector.scm 395 */
																							long BgL_auxz00_5045;

																							BgL_auxz00_5045 =
																								(long) (BgL_arg2644z00_3214);
																							BgL_restz00_3213 =
																								(BgL_offsetz00_3210 %
																								BgL_auxz00_5045);
																					}}
																					{	/* Cfa/tvector.scm 395 */

																						BgL_method5417z00_3203 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_3208,
																								(int) (BgL_modz00_3211)),
																							(int) (BgL_restz00_3213));
														}}}}}}}}
														BgL_arg5795z00_2162 =
															PROCEDURE_ENTRY(BgL_method5417z00_3203)
															(BgL_method5417z00_3203,
															(obj_t) (BgL_nodez00_3202), BEOA);
											}}}
											SET_CDR(BgL_clausez00_2161, BgL_arg5795z00_2162);
									}}
									{
										obj_t BgL_l5401z00_5056;

										BgL_l5401z00_5056 = CDR(BgL_l5401z00_2158);
										BgL_l5401z00_2158 = BgL_l5401z00_5056;
										goto BgL_zc3anonymousza35793ze3z83_2159;
									}
								}
							else
								{	/* Cfa/tvector.scm 394 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_5000 = BgL_nodez00_2150;
					return (obj_t) (BgL_auxz00_5000);
				}
			}
		}
	}



/* patch!-fail5443 */
	obj_t BGl_patchz12zd2fail5443zc0zzcfa_tvectorz00(obj_t BgL_envz00_3752,
		obj_t BgL_nodez00_3753)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 381 */
			{
				BgL_failz00_bglt BgL_nodez00_2138;

				{	/* Cfa/tvector.scm 382 */
					BgL_failz00_bglt BgL_auxz00_5060;

					BgL_nodez00_2138 = (BgL_failz00_bglt) (BgL_nodez00_3753);
					{	/* Cfa/tvector.scm 383 */
						obj_t BgL_arg5784z00_2142;

						{	/* Cfa/tvector.scm 383 */
							BgL_nodez00_bglt BgL_arg5785z00_2143;

							BgL_arg5785z00_2143 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_2138))->BgL_procz00);
							{	/* Cfa/tvector.scm 383 */
								obj_t BgL_method5417z00_3084;

								{	/* Cfa/tvector.scm 383 */
									BgL_objectz00_bglt BgL_objz00_3085;

									BgL_objz00_3085 = (BgL_objectz00_bglt) (BgL_arg5785z00_2143);
									{	/* Cfa/tvector.scm 383 */
										long BgL_objzd2classzd2numz00_3086;

										BgL_objzd2classzd2numz00_3086 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3085);
										{	/* Cfa/tvector.scm 383 */
											obj_t BgL_arg2643z00_3087;

											BgL_arg2643z00_3087 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 383 */
												obj_t BgL_arrayz00_3089;

												int BgL_offsetz00_3090;

												BgL_arrayz00_3089 = BgL_arg2643z00_3087;
												BgL_offsetz00_3090 =
													(int) (BgL_objzd2classzd2numz00_3086);
												{	/* Cfa/tvector.scm 383 */
													long BgL_offsetz00_3091;

													BgL_offsetz00_3091 =
														((long) (BgL_offsetz00_3090) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 383 */
														long BgL_modz00_3092;

														{	/* Cfa/tvector.scm 383 */
															int BgL_arg2645z00_3093;

															BgL_arg2645z00_3093 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 383 */
																long BgL_auxz00_5070;

																BgL_auxz00_5070 = (long) (BgL_arg2645z00_3093);
																BgL_modz00_3092 =
																	(BgL_offsetz00_3091 / BgL_auxz00_5070);
														}}
														{	/* Cfa/tvector.scm 383 */
															long BgL_restz00_3094;

															{	/* Cfa/tvector.scm 383 */
																int BgL_arg2644z00_3095;

																BgL_arg2644z00_3095 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 383 */
																	long BgL_auxz00_5074;

																	BgL_auxz00_5074 =
																		(long) (BgL_arg2644z00_3095);
																	BgL_restz00_3094 =
																		(BgL_offsetz00_3091 % BgL_auxz00_5074);
															}}
															{	/* Cfa/tvector.scm 383 */

																BgL_method5417z00_3084 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3089,
																		(int) (BgL_modz00_3092)),
																	(int) (BgL_restz00_3094));
								}}}}}}}}
								BgL_arg5784z00_2142 =
									PROCEDURE_ENTRY(BgL_method5417z00_3084)
									(BgL_method5417z00_3084, (obj_t) (BgL_arg5785z00_2143), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5084;

							BgL_auxz00_5084 = (BgL_nodez00_bglt) (BgL_arg5784z00_2142);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_2138))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5084), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 384 */
						obj_t BgL_arg5786z00_2144;

						{	/* Cfa/tvector.scm 384 */
							BgL_nodez00_bglt BgL_arg5787z00_2145;

							BgL_arg5787z00_2145 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_2138))->BgL_msgz00);
							{	/* Cfa/tvector.scm 384 */
								obj_t BgL_method5417z00_3113;

								{	/* Cfa/tvector.scm 384 */
									BgL_objectz00_bglt BgL_objz00_3114;

									BgL_objz00_3114 = (BgL_objectz00_bglt) (BgL_arg5787z00_2145);
									{	/* Cfa/tvector.scm 384 */
										long BgL_objzd2classzd2numz00_3115;

										BgL_objzd2classzd2numz00_3115 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3114);
										{	/* Cfa/tvector.scm 384 */
											obj_t BgL_arg2643z00_3116;

											BgL_arg2643z00_3116 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 384 */
												obj_t BgL_arrayz00_3118;

												int BgL_offsetz00_3119;

												BgL_arrayz00_3118 = BgL_arg2643z00_3116;
												BgL_offsetz00_3119 =
													(int) (BgL_objzd2classzd2numz00_3115);
												{	/* Cfa/tvector.scm 384 */
													long BgL_offsetz00_3120;

													BgL_offsetz00_3120 =
														((long) (BgL_offsetz00_3119) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 384 */
														long BgL_modz00_3121;

														{	/* Cfa/tvector.scm 384 */
															int BgL_arg2645z00_3122;

															BgL_arg2645z00_3122 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 384 */
																long BgL_auxz00_5096;

																BgL_auxz00_5096 = (long) (BgL_arg2645z00_3122);
																BgL_modz00_3121 =
																	(BgL_offsetz00_3120 / BgL_auxz00_5096);
														}}
														{	/* Cfa/tvector.scm 384 */
															long BgL_restz00_3123;

															{	/* Cfa/tvector.scm 384 */
																int BgL_arg2644z00_3124;

																BgL_arg2644z00_3124 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 384 */
																	long BgL_auxz00_5100;

																	BgL_auxz00_5100 =
																		(long) (BgL_arg2644z00_3124);
																	BgL_restz00_3123 =
																		(BgL_offsetz00_3120 % BgL_auxz00_5100);
															}}
															{	/* Cfa/tvector.scm 384 */

																BgL_method5417z00_3113 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3118,
																		(int) (BgL_modz00_3121)),
																	(int) (BgL_restz00_3123));
								}}}}}}}}
								BgL_arg5786z00_2144 =
									PROCEDURE_ENTRY(BgL_method5417z00_3113)
									(BgL_method5417z00_3113, (obj_t) (BgL_arg5787z00_2145), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5110;

							BgL_auxz00_5110 = (BgL_nodez00_bglt) (BgL_arg5786z00_2144);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_2138))->BgL_msgz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5110), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 385 */
						obj_t BgL_arg5788z00_2146;

						{	/* Cfa/tvector.scm 385 */
							BgL_nodez00_bglt BgL_arg5789z00_2147;

							BgL_arg5789z00_2147 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_2138))->BgL_objz00);
							{	/* Cfa/tvector.scm 385 */
								obj_t BgL_method5417z00_3142;

								{	/* Cfa/tvector.scm 385 */
									BgL_objectz00_bglt BgL_objz00_3143;

									BgL_objz00_3143 = (BgL_objectz00_bglt) (BgL_arg5789z00_2147);
									{	/* Cfa/tvector.scm 385 */
										long BgL_objzd2classzd2numz00_3144;

										BgL_objzd2classzd2numz00_3144 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3143);
										{	/* Cfa/tvector.scm 385 */
											obj_t BgL_arg2643z00_3145;

											BgL_arg2643z00_3145 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 385 */
												obj_t BgL_arrayz00_3147;

												int BgL_offsetz00_3148;

												BgL_arrayz00_3147 = BgL_arg2643z00_3145;
												BgL_offsetz00_3148 =
													(int) (BgL_objzd2classzd2numz00_3144);
												{	/* Cfa/tvector.scm 385 */
													long BgL_offsetz00_3149;

													BgL_offsetz00_3149 =
														((long) (BgL_offsetz00_3148) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 385 */
														long BgL_modz00_3150;

														{	/* Cfa/tvector.scm 385 */
															int BgL_arg2645z00_3151;

															BgL_arg2645z00_3151 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 385 */
																long BgL_auxz00_5122;

																BgL_auxz00_5122 = (long) (BgL_arg2645z00_3151);
																BgL_modz00_3150 =
																	(BgL_offsetz00_3149 / BgL_auxz00_5122);
														}}
														{	/* Cfa/tvector.scm 385 */
															long BgL_restz00_3152;

															{	/* Cfa/tvector.scm 385 */
																int BgL_arg2644z00_3153;

																BgL_arg2644z00_3153 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 385 */
																	long BgL_auxz00_5126;

																	BgL_auxz00_5126 =
																		(long) (BgL_arg2644z00_3153);
																	BgL_restz00_3152 =
																		(BgL_offsetz00_3149 % BgL_auxz00_5126);
															}}
															{	/* Cfa/tvector.scm 385 */

																BgL_method5417z00_3142 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3147,
																		(int) (BgL_modz00_3150)),
																	(int) (BgL_restz00_3152));
								}}}}}}}}
								BgL_arg5788z00_2146 =
									PROCEDURE_ENTRY(BgL_method5417z00_3142)
									(BgL_method5417z00_3142, (obj_t) (BgL_arg5789z00_2147), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5136;

							BgL_auxz00_5136 = (BgL_nodez00_bglt) (BgL_arg5788z00_2146);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_2138))->BgL_objz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5136), BUNSPEC);
					}}
					BgL_auxz00_5060 = BgL_nodez00_2138;
					return (obj_t) (BgL_auxz00_5060);
				}
			}
		}
	}



/* patch!-conditional5441 */
	obj_t BGl_patchz12zd2conditional5441zc0zzcfa_tvectorz00(obj_t BgL_envz00_3754,
		obj_t BgL_nodez00_3755)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 371 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_2126;

				{	/* Cfa/tvector.scm 372 */
					BgL_conditionalz00_bglt BgL_auxz00_5141;

					BgL_nodez00_2126 = (BgL_conditionalz00_bglt) (BgL_nodez00_3755);
					{	/* Cfa/tvector.scm 373 */
						obj_t BgL_arg5777z00_2130;

						{	/* Cfa/tvector.scm 373 */
							BgL_nodez00_bglt BgL_arg5778z00_2131;

							BgL_arg5778z00_2131 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2126))->
								BgL_testz00);
							{	/* Cfa/tvector.scm 373 */
								obj_t BgL_method5417z00_2997;

								{	/* Cfa/tvector.scm 373 */
									BgL_objectz00_bglt BgL_objz00_2998;

									BgL_objz00_2998 = (BgL_objectz00_bglt) (BgL_arg5778z00_2131);
									{	/* Cfa/tvector.scm 373 */
										long BgL_objzd2classzd2numz00_2999;

										BgL_objzd2classzd2numz00_2999 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2998);
										{	/* Cfa/tvector.scm 373 */
											obj_t BgL_arg2643z00_3000;

											BgL_arg2643z00_3000 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 373 */
												obj_t BgL_arrayz00_3002;

												int BgL_offsetz00_3003;

												BgL_arrayz00_3002 = BgL_arg2643z00_3000;
												BgL_offsetz00_3003 =
													(int) (BgL_objzd2classzd2numz00_2999);
												{	/* Cfa/tvector.scm 373 */
													long BgL_offsetz00_3004;

													BgL_offsetz00_3004 =
														((long) (BgL_offsetz00_3003) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 373 */
														long BgL_modz00_3005;

														{	/* Cfa/tvector.scm 373 */
															int BgL_arg2645z00_3006;

															BgL_arg2645z00_3006 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 373 */
																long BgL_auxz00_5151;

																BgL_auxz00_5151 = (long) (BgL_arg2645z00_3006);
																BgL_modz00_3005 =
																	(BgL_offsetz00_3004 / BgL_auxz00_5151);
														}}
														{	/* Cfa/tvector.scm 373 */
															long BgL_restz00_3007;

															{	/* Cfa/tvector.scm 373 */
																int BgL_arg2644z00_3008;

																BgL_arg2644z00_3008 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 373 */
																	long BgL_auxz00_5155;

																	BgL_auxz00_5155 =
																		(long) (BgL_arg2644z00_3008);
																	BgL_restz00_3007 =
																		(BgL_offsetz00_3004 % BgL_auxz00_5155);
															}}
															{	/* Cfa/tvector.scm 373 */

																BgL_method5417z00_2997 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3002,
																		(int) (BgL_modz00_3005)),
																	(int) (BgL_restz00_3007));
								}}}}}}}}
								BgL_arg5777z00_2130 =
									PROCEDURE_ENTRY(BgL_method5417z00_2997)
									(BgL_method5417z00_2997, (obj_t) (BgL_arg5778z00_2131), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5165;

							BgL_auxz00_5165 = (BgL_nodez00_bglt) (BgL_arg5777z00_2130);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2126))->
									BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_5165), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 374 */
						obj_t BgL_arg5779z00_2132;

						{	/* Cfa/tvector.scm 374 */
							BgL_nodez00_bglt BgL_arg5780z00_2133;

							BgL_arg5780z00_2133 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2126))->
								BgL_truez00);
							{	/* Cfa/tvector.scm 374 */
								obj_t BgL_method5417z00_3026;

								{	/* Cfa/tvector.scm 374 */
									BgL_objectz00_bglt BgL_objz00_3027;

									BgL_objz00_3027 = (BgL_objectz00_bglt) (BgL_arg5780z00_2133);
									{	/* Cfa/tvector.scm 374 */
										long BgL_objzd2classzd2numz00_3028;

										BgL_objzd2classzd2numz00_3028 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3027);
										{	/* Cfa/tvector.scm 374 */
											obj_t BgL_arg2643z00_3029;

											BgL_arg2643z00_3029 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 374 */
												obj_t BgL_arrayz00_3031;

												int BgL_offsetz00_3032;

												BgL_arrayz00_3031 = BgL_arg2643z00_3029;
												BgL_offsetz00_3032 =
													(int) (BgL_objzd2classzd2numz00_3028);
												{	/* Cfa/tvector.scm 374 */
													long BgL_offsetz00_3033;

													BgL_offsetz00_3033 =
														((long) (BgL_offsetz00_3032) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 374 */
														long BgL_modz00_3034;

														{	/* Cfa/tvector.scm 374 */
															int BgL_arg2645z00_3035;

															BgL_arg2645z00_3035 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 374 */
																long BgL_auxz00_5177;

																BgL_auxz00_5177 = (long) (BgL_arg2645z00_3035);
																BgL_modz00_3034 =
																	(BgL_offsetz00_3033 / BgL_auxz00_5177);
														}}
														{	/* Cfa/tvector.scm 374 */
															long BgL_restz00_3036;

															{	/* Cfa/tvector.scm 374 */
																int BgL_arg2644z00_3037;

																BgL_arg2644z00_3037 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 374 */
																	long BgL_auxz00_5181;

																	BgL_auxz00_5181 =
																		(long) (BgL_arg2644z00_3037);
																	BgL_restz00_3036 =
																		(BgL_offsetz00_3033 % BgL_auxz00_5181);
															}}
															{	/* Cfa/tvector.scm 374 */

																BgL_method5417z00_3026 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3031,
																		(int) (BgL_modz00_3034)),
																	(int) (BgL_restz00_3036));
								}}}}}}}}
								BgL_arg5779z00_2132 =
									PROCEDURE_ENTRY(BgL_method5417z00_3026)
									(BgL_method5417z00_3026, (obj_t) (BgL_arg5780z00_2133), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5191;

							BgL_auxz00_5191 = (BgL_nodez00_bglt) (BgL_arg5779z00_2132);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2126))->
									BgL_truez00) = ((BgL_nodez00_bglt) BgL_auxz00_5191), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 375 */
						obj_t BgL_arg5781z00_2134;

						{	/* Cfa/tvector.scm 375 */
							BgL_nodez00_bglt BgL_arg5782z00_2135;

							BgL_arg5782z00_2135 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2126))->
								BgL_falsez00);
							{	/* Cfa/tvector.scm 375 */
								obj_t BgL_method5417z00_3055;

								{	/* Cfa/tvector.scm 375 */
									BgL_objectz00_bglt BgL_objz00_3056;

									BgL_objz00_3056 = (BgL_objectz00_bglt) (BgL_arg5782z00_2135);
									{	/* Cfa/tvector.scm 375 */
										long BgL_objzd2classzd2numz00_3057;

										BgL_objzd2classzd2numz00_3057 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3056);
										{	/* Cfa/tvector.scm 375 */
											obj_t BgL_arg2643z00_3058;

											BgL_arg2643z00_3058 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 375 */
												obj_t BgL_arrayz00_3060;

												int BgL_offsetz00_3061;

												BgL_arrayz00_3060 = BgL_arg2643z00_3058;
												BgL_offsetz00_3061 =
													(int) (BgL_objzd2classzd2numz00_3057);
												{	/* Cfa/tvector.scm 375 */
													long BgL_offsetz00_3062;

													BgL_offsetz00_3062 =
														((long) (BgL_offsetz00_3061) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 375 */
														long BgL_modz00_3063;

														{	/* Cfa/tvector.scm 375 */
															int BgL_arg2645z00_3064;

															BgL_arg2645z00_3064 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 375 */
																long BgL_auxz00_5203;

																BgL_auxz00_5203 = (long) (BgL_arg2645z00_3064);
																BgL_modz00_3063 =
																	(BgL_offsetz00_3062 / BgL_auxz00_5203);
														}}
														{	/* Cfa/tvector.scm 375 */
															long BgL_restz00_3065;

															{	/* Cfa/tvector.scm 375 */
																int BgL_arg2644z00_3066;

																BgL_arg2644z00_3066 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 375 */
																	long BgL_auxz00_5207;

																	BgL_auxz00_5207 =
																		(long) (BgL_arg2644z00_3066);
																	BgL_restz00_3065 =
																		(BgL_offsetz00_3062 % BgL_auxz00_5207);
															}}
															{	/* Cfa/tvector.scm 375 */

																BgL_method5417z00_3055 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3060,
																		(int) (BgL_modz00_3063)),
																	(int) (BgL_restz00_3065));
								}}}}}}}}
								BgL_arg5781z00_2134 =
									PROCEDURE_ENTRY(BgL_method5417z00_3055)
									(BgL_method5417z00_3055, (obj_t) (BgL_arg5782z00_2135), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5217;

							BgL_auxz00_5217 = (BgL_nodez00_bglt) (BgL_arg5781z00_2134);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2126))->
									BgL_falsez00) =
								((BgL_nodez00_bglt) BgL_auxz00_5217), BUNSPEC);
					}}
					BgL_auxz00_5141 = BgL_nodez00_2126;
					return (obj_t) (BgL_auxz00_5141);
				}
			}
		}
	}



/* patch!-setq5439 */
	obj_t BGl_patchz12zd2setq5439zc0zzcfa_tvectorz00(obj_t BgL_envz00_3756,
		obj_t BgL_nodez00_3757)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 362 */
			{
				BgL_setqz00_bglt BgL_nodez00_2116;

				{	/* Cfa/tvector.scm 363 */
					BgL_setqz00_bglt BgL_auxz00_5222;

					BgL_nodez00_2116 = (BgL_setqz00_bglt) (BgL_nodez00_3757);
					{	/* Cfa/tvector.scm 364 */
						obj_t BgL_arg5772z00_2120;

						{	/* Cfa/tvector.scm 364 */
							BgL_nodez00_bglt BgL_arg5773z00_2121;

							BgL_arg5773z00_2121 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_2116))->BgL_valuez00);
							{	/* Cfa/tvector.scm 364 */
								obj_t BgL_method5417z00_2939;

								{	/* Cfa/tvector.scm 364 */
									BgL_objectz00_bglt BgL_objz00_2940;

									BgL_objz00_2940 = (BgL_objectz00_bglt) (BgL_arg5773z00_2121);
									{	/* Cfa/tvector.scm 364 */
										long BgL_objzd2classzd2numz00_2941;

										BgL_objzd2classzd2numz00_2941 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2940);
										{	/* Cfa/tvector.scm 364 */
											obj_t BgL_arg2643z00_2942;

											BgL_arg2643z00_2942 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 364 */
												obj_t BgL_arrayz00_2944;

												int BgL_offsetz00_2945;

												BgL_arrayz00_2944 = BgL_arg2643z00_2942;
												BgL_offsetz00_2945 =
													(int) (BgL_objzd2classzd2numz00_2941);
												{	/* Cfa/tvector.scm 364 */
													long BgL_offsetz00_2946;

													BgL_offsetz00_2946 =
														((long) (BgL_offsetz00_2945) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 364 */
														long BgL_modz00_2947;

														{	/* Cfa/tvector.scm 364 */
															int BgL_arg2645z00_2948;

															BgL_arg2645z00_2948 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 364 */
																long BgL_auxz00_5232;

																BgL_auxz00_5232 = (long) (BgL_arg2645z00_2948);
																BgL_modz00_2947 =
																	(BgL_offsetz00_2946 / BgL_auxz00_5232);
														}}
														{	/* Cfa/tvector.scm 364 */
															long BgL_restz00_2949;

															{	/* Cfa/tvector.scm 364 */
																int BgL_arg2644z00_2950;

																BgL_arg2644z00_2950 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 364 */
																	long BgL_auxz00_5236;

																	BgL_auxz00_5236 =
																		(long) (BgL_arg2644z00_2950);
																	BgL_restz00_2949 =
																		(BgL_offsetz00_2946 % BgL_auxz00_5236);
															}}
															{	/* Cfa/tvector.scm 364 */

																BgL_method5417z00_2939 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2944,
																		(int) (BgL_modz00_2947)),
																	(int) (BgL_restz00_2949));
								}}}}}}}}
								BgL_arg5772z00_2120 =
									PROCEDURE_ENTRY(BgL_method5417z00_2939)
									(BgL_method5417z00_2939, (obj_t) (BgL_arg5773z00_2121), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5246;

							BgL_auxz00_5246 = (BgL_nodez00_bglt) (BgL_arg5772z00_2120);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_2116))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_5246), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 365 */
						obj_t BgL_arg5774z00_2122;

						{	/* Cfa/tvector.scm 365 */
							BgL_varz00_bglt BgL_arg5775z00_2123;

							BgL_arg5775z00_2123 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_2116))->BgL_varz00);
							{	/* Cfa/tvector.scm 365 */
								BgL_nodez00_bglt BgL_nodez00_2967;

								BgL_nodez00_2967 = (BgL_nodez00_bglt) (BgL_arg5775z00_2123);
								{	/* Cfa/tvector.scm 365 */
									obj_t BgL_method5417z00_2968;

									{	/* Cfa/tvector.scm 365 */
										BgL_objectz00_bglt BgL_objz00_2969;

										BgL_objz00_2969 = (BgL_objectz00_bglt) (BgL_nodez00_2967);
										{	/* Cfa/tvector.scm 365 */
											long BgL_objzd2classzd2numz00_2970;

											BgL_objzd2classzd2numz00_2970 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2969);
											{	/* Cfa/tvector.scm 365 */
												obj_t BgL_arg2643z00_2971;

												BgL_arg2643z00_2971 =
													PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
													(int) (((long) 1)));
												{	/* Cfa/tvector.scm 365 */
													obj_t BgL_arrayz00_2973;

													int BgL_offsetz00_2974;

													BgL_arrayz00_2973 = BgL_arg2643z00_2971;
													BgL_offsetz00_2974 =
														(int) (BgL_objzd2classzd2numz00_2970);
													{	/* Cfa/tvector.scm 365 */
														long BgL_offsetz00_2975;

														BgL_offsetz00_2975 =
															((long) (BgL_offsetz00_2974) - OBJECT_TYPE);
														{	/* Cfa/tvector.scm 365 */
															long BgL_modz00_2976;

															{	/* Cfa/tvector.scm 365 */
																int BgL_arg2645z00_2977;

																BgL_arg2645z00_2977 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 365 */
																	long BgL_auxz00_5259;

																	BgL_auxz00_5259 =
																		(long) (BgL_arg2645z00_2977);
																	BgL_modz00_2976 =
																		(BgL_offsetz00_2975 / BgL_auxz00_5259);
															}}
															{	/* Cfa/tvector.scm 365 */
																long BgL_restz00_2978;

																{	/* Cfa/tvector.scm 365 */
																	int BgL_arg2644z00_2979;

																	BgL_arg2644z00_2979 = (int) (((long) 16));
																	{	/* Cfa/tvector.scm 365 */
																		long BgL_auxz00_5263;

																		BgL_auxz00_5263 =
																			(long) (BgL_arg2644z00_2979);
																		BgL_restz00_2978 =
																			(BgL_offsetz00_2975 % BgL_auxz00_5263);
																}}
																{	/* Cfa/tvector.scm 365 */

																	BgL_method5417z00_2968 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2973,
																			(int) (BgL_modz00_2976)),
																		(int) (BgL_restz00_2978));
									}}}}}}}}
									BgL_arg5774z00_2122 =
										PROCEDURE_ENTRY(BgL_method5417z00_2968)
										(BgL_method5417z00_2968, (obj_t) (BgL_nodez00_2967), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_5273;

							BgL_auxz00_5273 = (BgL_varz00_bglt) (BgL_arg5774z00_2122);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_2116))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_5273), BUNSPEC);
					}}
					BgL_auxz00_5222 = BgL_nodez00_2116;
					return (obj_t) (BgL_auxz00_5222);
				}
			}
		}
	}



/* patch!-cast5437 */
	obj_t BGl_patchz12zd2cast5437zc0zzcfa_tvectorz00(obj_t BgL_envz00_3758,
		obj_t BgL_nodez00_3759)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 354 */
			{
				BgL_castz00_bglt BgL_nodez00_2109;

				{	/* Cfa/tvector.scm 355 */
					BgL_castz00_bglt BgL_auxz00_5278;

					BgL_nodez00_2109 = (BgL_castz00_bglt) (BgL_nodez00_3759);
					{	/* Cfa/tvector.scm 355 */
						BgL_nodez00_bglt BgL_arg5770z00_2909;

						BgL_arg5770z00_2909 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_2109))->BgL_argz00);
						{	/* Cfa/tvector.scm 355 */
							obj_t BgL_method5417z00_2912;

							{	/* Cfa/tvector.scm 355 */
								BgL_objectz00_bglt BgL_objz00_2913;

								BgL_objz00_2913 = (BgL_objectz00_bglt) (BgL_arg5770z00_2909);
								{	/* Cfa/tvector.scm 355 */
									long BgL_objzd2classzd2numz00_2914;

									BgL_objzd2classzd2numz00_2914 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2913);
									{	/* Cfa/tvector.scm 355 */
										obj_t BgL_arg2643z00_2915;

										BgL_arg2643z00_2915 =
											PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
											(int) (((long) 1)));
										{	/* Cfa/tvector.scm 355 */
											obj_t BgL_arrayz00_2917;

											int BgL_offsetz00_2918;

											BgL_arrayz00_2917 = BgL_arg2643z00_2915;
											BgL_offsetz00_2918 =
												(int) (BgL_objzd2classzd2numz00_2914);
											{	/* Cfa/tvector.scm 355 */
												long BgL_offsetz00_2919;

												BgL_offsetz00_2919 =
													((long) (BgL_offsetz00_2918) - OBJECT_TYPE);
												{	/* Cfa/tvector.scm 355 */
													long BgL_modz00_2920;

													{	/* Cfa/tvector.scm 355 */
														int BgL_arg2645z00_2921;

														BgL_arg2645z00_2921 = (int) (((long) 16));
														{	/* Cfa/tvector.scm 355 */
															long BgL_auxz00_5288;

															BgL_auxz00_5288 = (long) (BgL_arg2645z00_2921);
															BgL_modz00_2920 =
																(BgL_offsetz00_2919 / BgL_auxz00_5288);
													}}
													{	/* Cfa/tvector.scm 355 */
														long BgL_restz00_2922;

														{	/* Cfa/tvector.scm 355 */
															int BgL_arg2644z00_2923;

															BgL_arg2644z00_2923 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 355 */
																long BgL_auxz00_5292;

																BgL_auxz00_5292 = (long) (BgL_arg2644z00_2923);
																BgL_restz00_2922 =
																	(BgL_offsetz00_2919 % BgL_auxz00_5292);
														}}
														{	/* Cfa/tvector.scm 355 */

															BgL_method5417z00_2912 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2917,
																	(int) (BgL_modz00_2920)),
																(int) (BgL_restz00_2922));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5417z00_2912) (BgL_method5417z00_2912,
								(obj_t) (BgL_arg5770z00_2909), BEOA);
					}}
					BgL_auxz00_5278 = BgL_nodez00_2109;
					return (obj_t) (BgL_auxz00_5278);
				}
			}
		}
	}



/* patch!-extern5435 */
	obj_t BGl_patchz12zd2extern5435zc0zzcfa_tvectorz00(obj_t BgL_envz00_3760,
		obj_t BgL_nodez00_3761)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 346 */
			{
				BgL_externz00_bglt BgL_nodez00_2102;

				{	/* Cfa/tvector.scm 347 */
					BgL_externz00_bglt BgL_auxz00_5304;

					BgL_nodez00_2102 = (BgL_externz00_bglt) (BgL_nodez00_3761);
					{	/* Cfa/tvector.scm 347 */
						obj_t BgL_arg5768z00_2906;

						BgL_arg5768z00_2906 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_2102))->BgL_exprza2za2);
						BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5768z00_2906);
					}
					BgL_auxz00_5304 = BgL_nodez00_2102;
					return (obj_t) (BgL_auxz00_5304);
				}
			}
		}
	}



/* patch!-funcall5433 */
	obj_t BGl_patchz12zd2funcall5433zc0zzcfa_tvectorz00(obj_t BgL_envz00_3762,
		obj_t BgL_nodez00_3763)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 337 */
			{
				BgL_funcallz00_bglt BgL_nodez00_2093;

				{	/* Cfa/tvector.scm 338 */
					BgL_funcallz00_bglt BgL_auxz00_5309;

					BgL_nodez00_2093 = (BgL_funcallz00_bglt) (BgL_nodez00_3763);
					{	/* Cfa/tvector.scm 339 */
						obj_t BgL_arg5764z00_2097;

						{	/* Cfa/tvector.scm 339 */
							BgL_nodez00_bglt BgL_arg5765z00_2098;

							BgL_arg5765z00_2098 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_2093))->BgL_funz00);
							{	/* Cfa/tvector.scm 339 */
								obj_t BgL_method5417z00_2877;

								{	/* Cfa/tvector.scm 339 */
									BgL_objectz00_bglt BgL_objz00_2878;

									BgL_objz00_2878 = (BgL_objectz00_bglt) (BgL_arg5765z00_2098);
									{	/* Cfa/tvector.scm 339 */
										long BgL_objzd2classzd2numz00_2879;

										BgL_objzd2classzd2numz00_2879 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2878);
										{	/* Cfa/tvector.scm 339 */
											obj_t BgL_arg2643z00_2880;

											BgL_arg2643z00_2880 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 339 */
												obj_t BgL_arrayz00_2882;

												int BgL_offsetz00_2883;

												BgL_arrayz00_2882 = BgL_arg2643z00_2880;
												BgL_offsetz00_2883 =
													(int) (BgL_objzd2classzd2numz00_2879);
												{	/* Cfa/tvector.scm 339 */
													long BgL_offsetz00_2884;

													BgL_offsetz00_2884 =
														((long) (BgL_offsetz00_2883) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 339 */
														long BgL_modz00_2885;

														{	/* Cfa/tvector.scm 339 */
															int BgL_arg2645z00_2886;

															BgL_arg2645z00_2886 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 339 */
																long BgL_auxz00_5319;

																BgL_auxz00_5319 = (long) (BgL_arg2645z00_2886);
																BgL_modz00_2885 =
																	(BgL_offsetz00_2884 / BgL_auxz00_5319);
														}}
														{	/* Cfa/tvector.scm 339 */
															long BgL_restz00_2887;

															{	/* Cfa/tvector.scm 339 */
																int BgL_arg2644z00_2888;

																BgL_arg2644z00_2888 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 339 */
																	long BgL_auxz00_5323;

																	BgL_auxz00_5323 =
																		(long) (BgL_arg2644z00_2888);
																	BgL_restz00_2887 =
																		(BgL_offsetz00_2884 % BgL_auxz00_5323);
															}}
															{	/* Cfa/tvector.scm 339 */

																BgL_method5417z00_2877 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2882,
																		(int) (BgL_modz00_2885)),
																	(int) (BgL_restz00_2887));
								}}}}}}}}
								BgL_arg5764z00_2097 =
									PROCEDURE_ENTRY(BgL_method5417z00_2877)
									(BgL_method5417z00_2877, (obj_t) (BgL_arg5765z00_2098), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5333;

							BgL_auxz00_5333 = (BgL_nodez00_bglt) (BgL_arg5764z00_2097);
							((((BgL_funcallz00_bglt) CREF(BgL_nodez00_2093))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5333), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 340 */
						obj_t BgL_arg5766z00_2099;

						BgL_arg5766z00_2099 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_2093))->BgL_argsz00);
						BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5766z00_2099);
					}
					BgL_auxz00_5309 = BgL_nodez00_2093;
					return (obj_t) (BgL_auxz00_5309);
				}
			}
		}
	}



/* patch!-app-ly5431 */
	obj_t BGl_patchz12zd2appzd2ly5431z12zzcfa_tvectorz00(obj_t BgL_envz00_3764,
		obj_t BgL_nodez00_3765)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 328 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_2083;

				{	/* Cfa/tvector.scm 329 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_5340;

					BgL_nodez00_2083 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3765);
					{	/* Cfa/tvector.scm 330 */
						obj_t BgL_arg5759z00_2087;

						{	/* Cfa/tvector.scm 330 */
							BgL_nodez00_bglt BgL_arg5760z00_2088;

							BgL_arg5760z00_2088 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2083))->BgL_funz00);
							{	/* Cfa/tvector.scm 330 */
								obj_t BgL_method5417z00_2819;

								{	/* Cfa/tvector.scm 330 */
									BgL_objectz00_bglt BgL_objz00_2820;

									BgL_objz00_2820 = (BgL_objectz00_bglt) (BgL_arg5760z00_2088);
									{	/* Cfa/tvector.scm 330 */
										long BgL_objzd2classzd2numz00_2821;

										BgL_objzd2classzd2numz00_2821 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2820);
										{	/* Cfa/tvector.scm 330 */
											obj_t BgL_arg2643z00_2822;

											BgL_arg2643z00_2822 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 330 */
												obj_t BgL_arrayz00_2824;

												int BgL_offsetz00_2825;

												BgL_arrayz00_2824 = BgL_arg2643z00_2822;
												BgL_offsetz00_2825 =
													(int) (BgL_objzd2classzd2numz00_2821);
												{	/* Cfa/tvector.scm 330 */
													long BgL_offsetz00_2826;

													BgL_offsetz00_2826 =
														((long) (BgL_offsetz00_2825) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 330 */
														long BgL_modz00_2827;

														{	/* Cfa/tvector.scm 330 */
															int BgL_arg2645z00_2828;

															BgL_arg2645z00_2828 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 330 */
																long BgL_auxz00_5350;

																BgL_auxz00_5350 = (long) (BgL_arg2645z00_2828);
																BgL_modz00_2827 =
																	(BgL_offsetz00_2826 / BgL_auxz00_5350);
														}}
														{	/* Cfa/tvector.scm 330 */
															long BgL_restz00_2829;

															{	/* Cfa/tvector.scm 330 */
																int BgL_arg2644z00_2830;

																BgL_arg2644z00_2830 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 330 */
																	long BgL_auxz00_5354;

																	BgL_auxz00_5354 =
																		(long) (BgL_arg2644z00_2830);
																	BgL_restz00_2829 =
																		(BgL_offsetz00_2826 % BgL_auxz00_5354);
															}}
															{	/* Cfa/tvector.scm 330 */

																BgL_method5417z00_2819 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2824,
																		(int) (BgL_modz00_2827)),
																	(int) (BgL_restz00_2829));
								}}}}}}}}
								BgL_arg5759z00_2087 =
									PROCEDURE_ENTRY(BgL_method5417z00_2819)
									(BgL_method5417z00_2819, (obj_t) (BgL_arg5760z00_2088), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5364;

							BgL_auxz00_5364 = (BgL_nodez00_bglt) (BgL_arg5759z00_2087);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2083))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5364), BUNSPEC);
					}}
					{	/* Cfa/tvector.scm 331 */
						obj_t BgL_arg5761z00_2089;

						{	/* Cfa/tvector.scm 331 */
							BgL_nodez00_bglt BgL_arg5762z00_2090;

							BgL_arg5762z00_2090 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2083))->BgL_argz00);
							{	/* Cfa/tvector.scm 331 */
								obj_t BgL_method5417z00_2848;

								{	/* Cfa/tvector.scm 331 */
									BgL_objectz00_bglt BgL_objz00_2849;

									BgL_objz00_2849 = (BgL_objectz00_bglt) (BgL_arg5762z00_2090);
									{	/* Cfa/tvector.scm 331 */
										long BgL_objzd2classzd2numz00_2850;

										BgL_objzd2classzd2numz00_2850 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2849);
										{	/* Cfa/tvector.scm 331 */
											obj_t BgL_arg2643z00_2851;

											BgL_arg2643z00_2851 =
												PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
												(int) (((long) 1)));
											{	/* Cfa/tvector.scm 331 */
												obj_t BgL_arrayz00_2853;

												int BgL_offsetz00_2854;

												BgL_arrayz00_2853 = BgL_arg2643z00_2851;
												BgL_offsetz00_2854 =
													(int) (BgL_objzd2classzd2numz00_2850);
												{	/* Cfa/tvector.scm 331 */
													long BgL_offsetz00_2855;

													BgL_offsetz00_2855 =
														((long) (BgL_offsetz00_2854) - OBJECT_TYPE);
													{	/* Cfa/tvector.scm 331 */
														long BgL_modz00_2856;

														{	/* Cfa/tvector.scm 331 */
															int BgL_arg2645z00_2857;

															BgL_arg2645z00_2857 = (int) (((long) 16));
															{	/* Cfa/tvector.scm 331 */
																long BgL_auxz00_5376;

																BgL_auxz00_5376 = (long) (BgL_arg2645z00_2857);
																BgL_modz00_2856 =
																	(BgL_offsetz00_2855 / BgL_auxz00_5376);
														}}
														{	/* Cfa/tvector.scm 331 */
															long BgL_restz00_2858;

															{	/* Cfa/tvector.scm 331 */
																int BgL_arg2644z00_2859;

																BgL_arg2644z00_2859 = (int) (((long) 16));
																{	/* Cfa/tvector.scm 331 */
																	long BgL_auxz00_5380;

																	BgL_auxz00_5380 =
																		(long) (BgL_arg2644z00_2859);
																	BgL_restz00_2858 =
																		(BgL_offsetz00_2855 % BgL_auxz00_5380);
															}}
															{	/* Cfa/tvector.scm 331 */

																BgL_method5417z00_2848 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2853,
																		(int) (BgL_modz00_2856)),
																	(int) (BgL_restz00_2858));
								}}}}}}}}
								BgL_arg5761z00_2089 =
									PROCEDURE_ENTRY(BgL_method5417z00_2848)
									(BgL_method5417z00_2848, (obj_t) (BgL_arg5762z00_2090), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_5390;

							BgL_auxz00_5390 = (BgL_nodez00_bglt) (BgL_arg5761z00_2089);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2083))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_auxz00_5390), BUNSPEC);
					}}
					BgL_auxz00_5340 = BgL_nodez00_2083;
					return (obj_t) (BgL_auxz00_5340);
				}
			}
		}
	}



/* patch!-sequence5429 */
	obj_t BGl_patchz12zd2sequence5429zc0zzcfa_tvectorz00(obj_t BgL_envz00_3766,
		obj_t BgL_nodez00_3767)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 320 */
			{
				BgL_sequencez00_bglt BgL_nodez00_2076;

				{	/* Cfa/tvector.scm 321 */
					BgL_sequencez00_bglt BgL_auxz00_5395;

					BgL_nodez00_2076 = (BgL_sequencez00_bglt) (BgL_nodez00_3767);
					{	/* Cfa/tvector.scm 321 */
						obj_t BgL_arg5757z00_2815;

						BgL_arg5757z00_2815 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_2076))->BgL_nodesz00);
						BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg5757z00_2815);
					}
					BgL_auxz00_5395 = BgL_nodez00_2076;
					return (obj_t) (BgL_auxz00_5395);
				}
			}
		}
	}



/* patch!-closure5427 */
	obj_t BGl_patchz12zd2closure5427zc0zzcfa_tvectorz00(obj_t BgL_envz00_3768,
		obj_t BgL_nodez00_3769)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 314 */
			{
				BgL_closurez00_bglt BgL_nodez00_2068;

				BgL_nodez00_2068 = (BgL_closurez00_bglt) (BgL_nodez00_3769);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string6037z00zzcfa_tvectorz00, BGl_string6068z00zzcfa_tvectorz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_2068)));
			}
		}
	}



/* patch!-var5425 */
	obj_t BGl_patchz12zd2var5425zc0zzcfa_tvectorz00(obj_t BgL_envz00_3770,
		obj_t BgL_nodez00_3771)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 308 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_3771));
		}
	}



/* patch!-kwote/node5423 */
	obj_t BGl_patchz12zd2kwotezf2node5423z32zzcfa_tvectorz00(obj_t
		BgL_envz00_3772, obj_t BgL_knodez00_3773)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 293 */
			{
				BgL_kwotezf2nodezf2_bglt BgL_knodez00_2031;

				{	/* Cfa/tvector.scm 294 */
					BgL_kwotez00_bglt BgL_auxz00_5406;

					BgL_knodez00_2031 = (BgL_kwotezf2nodezf2_bglt) (BgL_knodez00_3773);
					{	/* Cfa/tvector.scm 295 */
						BgL_approxz00_bglt BgL_approxz00_2035;

						{	/* Cfa/tvector.scm 295 */
							BgL_nodez00_bglt BgL_arg5750z00_2060;

							{
								obj_t BgL_auxz00_5407;

								{	/* Cfa/tvector.scm 295 */
									BgL_objectz00_bglt BgL_auxz00_5408;

									BgL_auxz00_5408 = (BgL_objectz00_bglt) (BgL_knodez00_2031);
									BgL_auxz00_5407 = BGL_OBJECT_WIDENING(BgL_auxz00_5408);
								}
								BgL_arg5750z00_2060 =
									(((BgL_kwotezf2nodezf2_bglt) CREF(BgL_auxz00_5407))->
									BgL_nodez00);
							}
							BgL_approxz00_2035 =
								BGl_cfaz12z12zzcfa_cfaz00(BgL_arg5750z00_2060);
						}
						{	/* Cfa/tvector.scm 295 */
							obj_t BgL_tvz00_2036;

							BgL_tvz00_2036 =
								BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_2035);
							{	/* Cfa/tvector.scm 296 */

								if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_2036,
										BGl_tvecz00zztvector_tvectorz00))
									{	/* Cfa/tvector.scm 298 */
										BgL_kwotezf2nodezf2_bglt BgL_knodez00_2038;

										{	/* Cfa/tvector.scm 298 */
											long BgL_arg5742z00_2050;

											{	/* Cfa/tvector.scm 298 */
												obj_t BgL_arg5743z00_2051;

												{	/* Cfa/tvector.scm 298 */
													obj_t BgL_arg5744z00_2052;

													{	/* Cfa/tvector.scm 298 */
														BgL_objectz00_bglt BgL_objectz00_2774;

														BgL_objectz00_2774 =
															(BgL_objectz00_bglt) (BgL_knodez00_2031);
														{	/* Cfa/tvector.scm 298 */
															long BgL_arg2646z00_2775;

															{	/* Cfa/tvector.scm 298 */
																long BgL_arg2647z00_2776;

																BgL_arg2647z00_2776 =
																	BGL_OBJECT_CLASS_NUM(BgL_objectz00_2774);
																BgL_arg2646z00_2775 =
																	(BgL_arg2647z00_2776 - OBJECT_TYPE);
															}
															BgL_arg5744z00_2052 =
																VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
																(int) (BgL_arg2646z00_2775));
													}}
													BgL_arg5743z00_2051 =
														BGl_classzd2superzd2zz__objectz00
														(BgL_arg5744z00_2052);
												}
												BgL_arg5742z00_2050 =
													BGl_classzd2numzd2zz__objectz00(BgL_arg5743z00_2051);
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_knodez00_2031),
												BgL_arg5742z00_2050);
										}
										{	/* Cfa/tvector.scm 298 */
											BgL_objectz00_bglt BgL_auxz00_5425;

											BgL_auxz00_5425 =
												(BgL_objectz00_bglt) (BgL_knodez00_2031);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5425, BFALSE);
										}
										BgL_knodez00_2038 = BgL_knodez00_2031;
										{	/* Cfa/tvector.scm 298 */
											BgL_kwotez00_bglt BgL_nz00_2039;

											{	/* Cfa/tvector.scm 299 */
												BgL_kwotez00_bglt BgL_duplicated5335z00_2043;

												BgL_duplicated5335z00_2043 =
													(BgL_kwotez00_bglt) (BgL_knodez00_2038);
												{	/* Cfa/tvector.scm 299 */
													BgL_kwotez00_bglt BgL_new5336z00_2044;

													{	/* Cfa/tvector.scm 299 */
														obj_t BgL_arg5738z00_2045;

														BgL_typez00_bglt BgL_arg5739z00_2046;

														obj_t BgL_arg5740z00_2047;

														{
															BgL_nodez00_bglt BgL_auxz00_5429;

															BgL_auxz00_5429 =
																(BgL_nodez00_bglt) (BgL_duplicated5335z00_2043);
															BgL_arg5738z00_2045 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_5429))->
																BgL_locz00);
														}
														{
															BgL_nodez00_bglt BgL_auxz00_5432;

															BgL_auxz00_5432 =
																(BgL_nodez00_bglt) (BgL_duplicated5335z00_2043);
															BgL_arg5739z00_2046 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_5432))->
																BgL_typez00);
														}
														{	/* Cfa/tvector.scm 299 */
															obj_t BgL_arg5741z00_2048;

															{
																BgL_kwotez00_bglt BgL_auxz00_5435;

																BgL_auxz00_5435 =
																	(BgL_kwotez00_bglt) (BgL_knodez00_2031);
																BgL_arg5741z00_2048 =
																	(((BgL_kwotez00_bglt) CREF(BgL_auxz00_5435))->
																	BgL_valuez00);
															}
															{	/* Cfa/tvector.scm 299 */
																BgL_tvecz00_bglt BgL_typez00_2787;

																BgL_typez00_2787 =
																	(BgL_tvecz00_bglt) (BgL_tvz00_2036);
																{	/* Cfa/tvector.scm 299 */
																	obj_t BgL_newz00_2789;

																	BgL_newz00_2789 =
																		create_struct(CNST_TABLE_REF(((long) 22)),
																		(int) (((long) 2)));
																	{	/* Cfa/tvector.scm 299 */
																		int BgL_auxz00_5442;

																		BgL_auxz00_5442 = (int) (((long) 1));
																		STRUCT_SET(BgL_newz00_2789, BgL_auxz00_5442,
																			BgL_arg5741z00_2048);
																	}
																	{	/* Cfa/tvector.scm 299 */
																		obj_t BgL_auxz00_5447;

																		int BgL_auxz00_5445;

																		BgL_auxz00_5447 =
																			(obj_t) (BgL_typez00_2787);
																		BgL_auxz00_5445 = (int) (((long) 0));
																		STRUCT_SET(BgL_newz00_2789, BgL_auxz00_5445,
																			BgL_auxz00_5447);
																	}
																	BgL_arg5740z00_2047 = BgL_newz00_2789;
														}}}
														BgL_new5336z00_2044 =
															BGl_makezd2kwotezd2zzast_nodez00
															(BgL_arg5738z00_2045, BgL_arg5739z00_2046,
															BgL_arg5740z00_2047);
													}
													{	/* Cfa/tvector.scm 299 */

														BgL_nz00_2039 = BgL_new5336z00_2044;
											}}}
											{	/* Cfa/tvector.scm 299 */

												{	/* Cfa/tvector.scm 300 */
													BgL_kwotez00_bglt BgL_obj5337z00_2040;

													BgL_obj5337z00_2040 =
														((BgL_kwotez00_bglt) BgL_nz00_2039);
													{	/* Cfa/tvector.scm 300 */
														obj_t BgL_auxz00_5454;

														BgL_objectz00_bglt BgL_auxz00_5452;

														BgL_auxz00_5454 =
															BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00
															(BgL_approxz00_2035);
														BgL_auxz00_5452 =
															(BgL_objectz00_bglt) (BgL_obj5337z00_2040);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_5452,
															BgL_auxz00_5454);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj5337z00_2040),
														BGl_classzd2numzd2zz__objectz00
														(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
													BgL_auxz00_5406 = BgL_obj5337z00_2040;
									}}}}
								else
									{	/* Cfa/tvector.scm 302 */
										BgL_kwotez00_bglt BgL_obj5338z00_2053;

										{
											BgL_kwotez00_bglt BgL_auxz00_5460;

											{	/* Cfa/tvector.scm 302 */
												long BgL_arg5747z00_2057;

												{	/* Cfa/tvector.scm 302 */
													obj_t BgL_arg5748z00_2058;

													{	/* Cfa/tvector.scm 302 */
														obj_t BgL_arg5749z00_2059;

														{	/* Cfa/tvector.scm 302 */
															BgL_objectz00_bglt BgL_objectz00_2802;

															BgL_objectz00_2802 =
																(BgL_objectz00_bglt) (BgL_knodez00_2031);
															{	/* Cfa/tvector.scm 302 */
																long BgL_arg2646z00_2803;

																{	/* Cfa/tvector.scm 302 */
																	long BgL_arg2647z00_2804;

																	BgL_arg2647z00_2804 =
																		BGL_OBJECT_CLASS_NUM(BgL_objectz00_2802);
																	BgL_arg2646z00_2803 =
																		(BgL_arg2647z00_2804 - OBJECT_TYPE);
																}
																BgL_arg5749z00_2059 =
																	VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
																	(int) (BgL_arg2646z00_2803));
														}}
														BgL_arg5748z00_2058 =
															BGl_classzd2superzd2zz__objectz00
															(BgL_arg5749z00_2059);
													}
													BgL_arg5747z00_2057 =
														BGl_classzd2numzd2zz__objectz00
														(BgL_arg5748z00_2058);
												}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_knodez00_2031),
													BgL_arg5747z00_2057);
											}
											{	/* Cfa/tvector.scm 302 */
												BgL_objectz00_bglt BgL_auxz00_5470;

												BgL_auxz00_5470 =
													(BgL_objectz00_bglt) (BgL_knodez00_2031);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_5470, BFALSE);
											}
											BgL_auxz00_5460 = (BgL_kwotez00_bglt) (BgL_knodez00_2031);
											BgL_obj5338z00_2053 =
												((BgL_kwotez00_bglt) BgL_auxz00_5460);
										}
										{	/* Cfa/tvector.scm 302 */
											obj_t BgL_auxz00_5477;

											BgL_objectz00_bglt BgL_auxz00_5475;

											BgL_auxz00_5477 =
												BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00
												(BgL_approxz00_2035);
											BgL_auxz00_5475 =
												(BgL_objectz00_bglt) (BgL_obj5338z00_2053);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5475, BgL_auxz00_5477);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj5338z00_2053),
											BGl_classzd2numzd2zz__objectz00
											(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
										BgL_auxz00_5406 = BgL_obj5338z00_2053;
					}}}}
					return (obj_t) (BgL_auxz00_5406);
				}
			}
		}
	}



/* patch!-kwote5421 */
	obj_t BGl_patchz12zd2kwote5421zc0zzcfa_tvectorz00(obj_t BgL_envz00_3774,
		obj_t BgL_nodez00_3775)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 287 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_3775));
		}
	}



/* patch!-atom5419 */
	obj_t BGl_patchz12zd2atom5419zc0zzcfa_tvectorz00(obj_t BgL_envz00_3776,
		obj_t BgL_nodez00_3777)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 281 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_3777));
		}
	}



/* get-vector-item-type5415 */
	obj_t BGl_getzd2vectorzd2itemzd2type5415zd2zzcfa_tvectorz00(obj_t
		BgL_envz00_3778, obj_t BgL_nodez00_3779)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 210 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_nodez00_2013;

				BgL_nodez00_2013 =
					(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_nodez00_3779);
				{	/* Cfa/tvector.scm 212 */
					bool_t BgL_testz00_5489;

					{
						obj_t BgL_auxz00_5490;

						{	/* Cfa/tvector.scm 212 */
							BgL_objectz00_bglt BgL_auxz00_5491;

							BgL_auxz00_5491 = (BgL_objectz00_bglt) (BgL_nodez00_2013);
							BgL_auxz00_5490 = BGL_OBJECT_WIDENING(BgL_auxz00_5491);
						}
						BgL_testz00_5489 =
							(((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_auxz00_5490))->
							BgL_seenzf3zf3);
					}
					if (BgL_testz00_5489)
						{	/* Cfa/tvector.scm 214 */
							BgL_approxz00_bglt BgL_obj3318z00_2771;

							{
								obj_t BgL_auxz00_5495;

								{	/* Cfa/tvector.scm 214 */
									BgL_objectz00_bglt BgL_auxz00_5496;

									BgL_auxz00_5496 = (BgL_objectz00_bglt) (BgL_nodez00_2013);
									BgL_auxz00_5495 = BGL_OBJECT_WIDENING(BgL_auxz00_5496);
								}
								BgL_obj3318z00_2771 =
									(((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_auxz00_5495))->BgL_valuezd2approxzd2);
							}
							return
								(obj_t) (
								(((BgL_approxz00_bglt) CREF(BgL_obj3318z00_2771))->
									BgL_typez00));
						}
					else
						{	/* Cfa/tvector.scm 212 */
							return BGl_za2vectorza2z00zztype_cachez00;
						}
				}
			}
		}
	}



/* get-vector-item-type5413 */
	obj_t BGl_getzd2vectorzd2itemzd2type5413zd2zzcfa_tvectorz00(obj_t
		BgL_envz00_3780, obj_t BgL_appz00_3781)
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 201 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_appz00_2005;

				BgL_appz00_2005 = (BgL_makezd2vectorzd2appz00_bglt) (BgL_appz00_3781);
				{	/* Cfa/tvector.scm 203 */
					bool_t BgL_testz00_5503;

					{
						obj_t BgL_auxz00_5504;

						{	/* Cfa/tvector.scm 203 */
							BgL_objectz00_bglt BgL_auxz00_5505;

							BgL_auxz00_5505 = (BgL_objectz00_bglt) (BgL_appz00_2005);
							BgL_auxz00_5504 = BGL_OBJECT_WIDENING(BgL_auxz00_5505);
						}
						BgL_testz00_5503 =
							(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_5504))->
							BgL_seenzf3zf3);
					}
					if (BgL_testz00_5503)
						{	/* Cfa/tvector.scm 205 */
							BgL_approxz00_bglt BgL_obj3318z00_2768;

							{
								obj_t BgL_auxz00_5509;

								{	/* Cfa/tvector.scm 205 */
									BgL_objectz00_bglt BgL_auxz00_5510;

									BgL_auxz00_5510 = (BgL_objectz00_bglt) (BgL_appz00_2005);
									BgL_auxz00_5509 = BGL_OBJECT_WIDENING(BgL_auxz00_5510);
								}
								BgL_obj3318z00_2768 =
									(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_5509))->
									BgL_valuezd2approxzd2);
							}
							return
								(obj_t) (
								(((BgL_approxz00_bglt) CREF(BgL_obj3318z00_2768))->
									BgL_typez00));
						}
					else
						{	/* Cfa/tvector.scm 203 */
							return BGl_za2vectorza2z00zztype_cachez00;
						}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_tvectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzmodule_typez00(((long) 450116231),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(((long) 284127067),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 474371048),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_typez00(((long) 179272146),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(((long) 318753882),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 175384950),
				BSTRING_TO_STRING(BGl_string6069z00zzcfa_tvectorz00));
		}
	}

#ifdef __cplusplus
}
#endif
