/*===========================================================================*/
/*   (Ast/dump.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/dump.scm)*/
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


	static obj_t
		BGl_nodezd2ze3sexpzd2default3369ze3zzast_dumpz00(BgL_nodez00_bglt);
	extern obj_t BGl_vrefz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2kwote3379ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_nodezd2ze3sexpz31zzast_dumpz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2ze3sexpzd2sequence3381ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2castzd2null3407z31zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2funcall3387ze3zzast_dumpz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2appzd2ly3385z31zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2boxzd2setz123433z23zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_dumpz00();
	static obj_t BGl_nodezd2ze3sexpzd2fail3417ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_nodezd2ze3sexpzd2vlength3397ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2valloc3403ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_dumpz00();
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2app3383ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2jumpzd2exzd2i3427ze3zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2boxzd2ref3431z31zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2pragma3389ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2select3419ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2makezd2box3429z31zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2getfield3391ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl__nodezd2ze3sexpz31zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2condition3415ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_dumpz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2atom3373ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2vsetz123401zf1zzast_dumpz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_dumpz00 = BUNSPEC;
	static obj_t BGl_nodezd2ze3sexpzd2setfield3393ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2var3375ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzast_dumpz00();
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2letzd2fun3421z31zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2closure3377ze3zzast_dumpz00(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2letzd2var3423z31zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_dumpz00();
	static obj_t BGl_nodezd2ze3sexpzd2isa3405ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_isaz00zzast_nodez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2setzd2exzd2it3425ze3zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_nodezd2ze3sexpzd2cast3409ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3sexpzd2vref3399ze3zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_locationzd2shapezd2zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3sexpzd2setq3412ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_dumpz00();
	static obj_t BGl_nodezd2ze3sexpzd2new3395ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl__nodezd2ze3sexpzd2default3369ze3zzast_dumpz00(obj_t, obj_t);
	static obj_t __cnst[38];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4200z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4229za7,
		BGl_nodezd2ze3sexpzd2funcall3387ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4201z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4230za7,
		BGl_nodezd2ze3sexpzd2pragma3389ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4202z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4231za7,
		BGl_nodezd2ze3sexpzd2getfield3391ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4203z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4232za7,
		BGl_nodezd2ze3sexpzd2setfield3393ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4193z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4233za7,
		BGl_nodezd2ze3sexpzd2atom3373ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4204z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4234za7,
		BGl_nodezd2ze3sexpzd2new3395ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4194z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4235za7,
		BGl_nodezd2ze3sexpzd2var3375ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4205z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4236za7,
		BGl_nodezd2ze3sexpzd2vlength3397ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4195z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4237za7,
		BGl_nodezd2ze3sexpzd2closure3377ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4206z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4238za7,
		BGl_nodezd2ze3sexpzd2vref3399ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4196z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4239za7,
		BGl_nodezd2ze3sexpzd2kwote3379ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4207z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4240za7,
		BGl_nodezd2ze3sexpzd2vsetz123401zf1zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4197z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4241za7,
		BGl_nodezd2ze3sexpzd2sequence3381ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4208z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4242za7,
		BGl_nodezd2ze3sexpzd2valloc3403ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4198z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4243za7,
		BGl_nodezd2ze3sexpzd2app3383ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4210z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4244za7,
		BGl_nodezd2ze3sexpzd2castzd2null3407z31zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4209z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4245za7,
		BGl_nodezd2ze3sexpzd2isa3405ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4199z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4246za7,
		BGl_nodezd2ze3sexpzd2appzd2ly3385z31zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4211z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4247za7,
		BGl_nodezd2ze3sexpzd2cast3409ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4212z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4248za7,
		BGl_nodezd2ze3sexpzd2setq3412ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4213z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4249za7,
		BGl_nodezd2ze3sexpzd2condition3415ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4214z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4250za7,
		BGl_nodezd2ze3sexpzd2fail3417ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4215z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4251za7,
		BGl_nodezd2ze3sexpzd2select3419ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4216z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4252za7,
		BGl_nodezd2ze3sexpzd2letzd2fun3421z31zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4217z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4253za7,
		BGl_nodezd2ze3sexpzd2letzd2var3423z31zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4218z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4254za7,
		BGl_nodezd2ze3sexpzd2setzd2exzd2it3425ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4220z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4255za7,
		BGl_nodezd2ze3sexpzd2makezd2box3429z31zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4219z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4256za7,
		BGl_nodezd2ze3sexpzd2jumpzd2exzd2i3427ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4221z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4257za7,
		BGl_nodezd2ze3sexpzd2boxzd2ref3431z31zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4222z00zzast_dumpz00,
		BgL_bgl_nodeza7d2za7e3sexpza7d4258za7,
		BGl_nodezd2ze3sexpzd2boxzd2setz123433z23zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4191z00zzast_dumpz00,
		BgL_bgl_string4191za700za7za7a4259za7, "node->sexp", 10);
	      DEFINE_STRING(BGl_string4192z00zzast_dumpz00,
		BgL_bgl_string4192za700za7za7a4260za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4223z00zzast_dumpz00,
		BgL_bgl_string4223za700za7za7a4261za7, "]", 1);
	      DEFINE_STRING(BGl_string4224z00zzast_dumpz00,
		BgL_bgl_string4224za700za7za7a4262za7, "[::", 3);
	      DEFINE_STRING(BGl_string4225z00zzast_dumpz00,
		BgL_bgl_string4225za700za7za7a4263za7, "ast_dump", 8);
	      DEFINE_STRING(BGl_string4226z00zzast_dumpz00,
		BgL_bgl_string4226za700za7za7a4264za7,
		"(quote ()) function quote a-tvector begin :side-effect apply funcall funcall-el elight funcall-l light free-pragma pragma getfield setfield new vlength vref vref-ur vset! vset-ur! vnew isa? |cast-null::| cast set! if failure case labels let set-exit jump-exit make-box box-ref box-set! node->sexp-default3369 ",
		309);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2ze3sexpzd2default3369zd2envz31zzast_dumpz00,
		BgL_bgl__nodeza7d2za7e3sexpza74265za7,
		BGl__nodezd2ze3sexpzd2default3369ze3zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
		BgL_bgl__nodeza7d2za7e3sexpza74266za7, BGl__nodezd2ze3sexpz31zzast_dumpz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long
		BgL_checksumz00_4136, char *BgL_fromz00_4137)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_dumpz00))
				{
					BGl_requirezd2initializa7ationz75zzast_dumpz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_dumpz00();
					BGl_cnstzd2initzd2zzast_dumpz00();
					BGl_importedzd2moduleszd2initz00zzast_dumpz00();
					BGl_genericzd2initzd2zzast_dumpz00();
					BGl_methodzd2initzd2zzast_dumpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_dumpz00()
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_dump");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_dumpz00()
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			{	/* Ast/dump.scm 14 */
				obj_t BgL_cportz00_4128;

				BgL_cportz00_4128 =
					bgl_open_input_string(BGl_string4226z00zzast_dumpz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4129;

					BgL_iz00_4129 = ((long) 37);
				BgL_loopz00_4130:
					if ((BgL_iz00_4129 == ((long) -1)))
						{	/* Ast/dump.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/dump.scm 14 */
							{	/* Ast/dump.scm 14 */
								obj_t BgL_arg4228z00_4132;

								{	/* Ast/dump.scm 14 */

									{	/* Ast/dump.scm 14 */
										obj_t BgL_locationz00_4134;

										BgL_locationz00_4134 = BBOOL(((bool_t) 0));
										{	/* Ast/dump.scm 14 */

											BgL_arg4228z00_4132 =
												BGl_readz00zz__readerz00(BgL_cportz00_4128,
												BgL_locationz00_4134);
										}
									}
								}
								{	/* Ast/dump.scm 14 */
									int BgL_auxz00_4157;

									BgL_auxz00_4157 = (int) (BgL_iz00_4129);
									CNST_TABLE_SET(BgL_auxz00_4157, BgL_arg4228z00_4132);
							}}
							{	/* Ast/dump.scm 14 */
								int BgL_auxz00_4135;

								BgL_auxz00_4135 = (int) ((BgL_iz00_4129 - ((long) 1)));
								{
									long BgL_iz00_4162;

									BgL_iz00_4162 = (long) (BgL_auxz00_4135);
									BgL_iz00_4129 = BgL_iz00_4162;
									goto BgL_loopz00_4130;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_dumpz00()
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_dumpz00()
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_nodezd2ze3sexpzd2default3369zd2envz31zzast_dumpz00,
				BGl_nodez00zzast_nodez00, BGl_string4191z00zzast_dumpz00);
		}
	}



/* node->sexp */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2ze3sexpz31zzast_dumpz00(BgL_nodez00_bglt
		BgL_nodez00_12)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 36 */
			{	/* Ast/dump.scm 36 */
				obj_t BgL_method3371z00_2076;

				{	/* Ast/dump.scm 36 */
					BgL_objectz00_bglt BgL_objz00_2077;

					BgL_objz00_2077 = (BgL_objectz00_bglt) (BgL_nodez00_12);
					{	/* Ast/dump.scm 36 */
						long BgL_objzd2classzd2numz00_2078;

						BgL_objzd2classzd2numz00_2078 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2077);
						{	/* Ast/dump.scm 36 */
							obj_t BgL_arg2643z00_2079;

							BgL_arg2643z00_2079 =
								PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
								(int) (((long) 1)));
							{	/* Ast/dump.scm 36 */
								obj_t BgL_arrayz00_2081;

								int BgL_offsetz00_2082;

								BgL_arrayz00_2081 = BgL_arg2643z00_2079;
								BgL_offsetz00_2082 = (int) (BgL_objzd2classzd2numz00_2078);
								{	/* Ast/dump.scm 36 */
									long BgL_offsetz00_2083;

									BgL_offsetz00_2083 =
										((long) (BgL_offsetz00_2082) - OBJECT_TYPE);
									{	/* Ast/dump.scm 36 */
										long BgL_modz00_2084;

										{	/* Ast/dump.scm 36 */
											int BgL_arg2645z00_2085;

											BgL_arg2645z00_2085 = (int) (((long) 16));
											{	/* Ast/dump.scm 36 */
												long BgL_auxz00_4173;

												BgL_auxz00_4173 = (long) (BgL_arg2645z00_2085);
												BgL_modz00_2084 =
													(BgL_offsetz00_2083 / BgL_auxz00_4173);
										}}
										{	/* Ast/dump.scm 36 */
											long BgL_restz00_2086;

											{	/* Ast/dump.scm 36 */
												int BgL_arg2644z00_2087;

												BgL_arg2644z00_2087 = (int) (((long) 16));
												{	/* Ast/dump.scm 36 */
													long BgL_auxz00_4177;

													BgL_auxz00_4177 = (long) (BgL_arg2644z00_2087);
													BgL_restz00_2086 =
														(BgL_offsetz00_2083 % BgL_auxz00_4177);
											}}
											{	/* Ast/dump.scm 36 */

												BgL_method3371z00_2076 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2081,
														(int) (BgL_modz00_2084)), (int) (BgL_restz00_2086));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3371z00_2076) (BgL_method3371z00_2076,
					(obj_t) (BgL_nodez00_12), BEOA);
			}
		}
	}



/* _node->sexp */
	obj_t BGl__nodezd2ze3sexpz31zzast_dumpz00(obj_t BgL_envz00_4033,
		obj_t BgL_nodez00_4034)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 36 */
			return
				BGl_nodezd2ze3sexpz31zzast_dumpz00(
				(BgL_nodez00_bglt) (BgL_nodez00_4034));
		}
	}



/* node->sexp-default3369 */
	obj_t BGl_nodezd2ze3sexpzd2default3369ze3zzast_dumpz00(BgL_nodez00_bglt
		BgL_nodez00_13)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string4192z00zzast_dumpz00, (obj_t) (BgL_nodez00_13));
		}
	}



/* _node->sexp-default3369 */
	obj_t BGl__nodezd2ze3sexpzd2default3369ze3zzast_dumpz00(obj_t BgL_envz00_4035,
		obj_t BgL_nodez00_4036)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			return
				BGl_nodezd2ze3sexpzd2default3369ze3zzast_dumpz00(
				(BgL_nodez00_bglt) (BgL_nodez00_4036));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_dumpz00()
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_atomz00zzast_nodez00,
				BGl_proc4193z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_varz00zzast_nodez00,
				BGl_proc4194z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_closurez00zzast_nodez00,
				BGl_proc4195z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_kwotez00zzast_nodez00,
				BGl_proc4196z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_sequencez00zzast_nodez00,
				BGl_proc4197z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_appz00zzast_nodez00,
				BGl_proc4198z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4199z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4200z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc4201z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_getfieldz00zzast_nodez00,
				BGl_proc4202z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_setfieldz00zzast_nodez00,
				BGl_proc4203z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_newz00zzast_nodez00,
				BGl_proc4204z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc4205z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vrefz00zzast_nodez00,
				BGl_proc4206z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc4207z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vallocz00zzast_nodez00,
				BGl_proc4208z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_isaz00zzast_nodez00,
				BGl_proc4209z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc4210z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_castz00zzast_nodez00,
				BGl_proc4211z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_setqz00zzast_nodez00,
				BGl_proc4212z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4213z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_failz00zzast_nodez00,
				BGl_proc4214z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_selectz00zzast_nodez00,
				BGl_proc4215z00zzast_dumpz00, BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4216z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4217z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4218z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4219z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4220z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4221z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4222z00zzast_dumpz00,
				BGl_string4191z00zzast_dumpz00);
		}
	}



/* node->sexp-box-set!3433 */
	obj_t BGl_nodezd2ze3sexpzd2boxzd2setz123433z23zzast_dumpz00(obj_t
		BgL_envz00_4067, obj_t BgL_nodez00_4068)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 353 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_2034;

				BgL_nodez00_2034 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_4068);
				{	/* Ast/dump.scm 355 */
					obj_t BgL_arg4058z00_2037;

					obj_t BgL_arg4059z00_2038;

					BgL_arg4058z00_2037 = CNST_TABLE_REF(((long) 1));
					{	/* Ast/dump.scm 355 */
						obj_t BgL_arg4060z00_2039;

						obj_t BgL_arg4061z00_2040;

						{	/* Ast/dump.scm 355 */
							BgL_varz00_bglt BgL_arg4065z00_2044;

							BgL_arg4065z00_2044 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2034))->
								BgL_varz00);
							{	/* Ast/dump.scm 355 */
								BgL_nodez00_bglt BgL_nodez00_3980;

								BgL_nodez00_3980 = (BgL_nodez00_bglt) (BgL_arg4065z00_2044);
								{	/* Ast/dump.scm 355 */
									obj_t BgL_method3371z00_3981;

									{	/* Ast/dump.scm 355 */
										BgL_objectz00_bglt BgL_objz00_3982;

										BgL_objz00_3982 = (BgL_objectz00_bglt) (BgL_nodez00_3980);
										{	/* Ast/dump.scm 355 */
											long BgL_objzd2classzd2numz00_3983;

											BgL_objzd2classzd2numz00_3983 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3982);
											{	/* Ast/dump.scm 355 */
												obj_t BgL_arg2643z00_3984;

												BgL_arg2643z00_3984 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 355 */
													obj_t BgL_arrayz00_3986;

													int BgL_offsetz00_3987;

													BgL_arrayz00_3986 = BgL_arg2643z00_3984;
													BgL_offsetz00_3987 =
														(int) (BgL_objzd2classzd2numz00_3983);
													{	/* Ast/dump.scm 355 */
														long BgL_offsetz00_3988;

														BgL_offsetz00_3988 =
															((long) (BgL_offsetz00_3987) - OBJECT_TYPE);
														{	/* Ast/dump.scm 355 */
															long BgL_modz00_3989;

															{	/* Ast/dump.scm 355 */
																int BgL_arg2645z00_3990;

																BgL_arg2645z00_3990 = (int) (((long) 16));
																{	/* Ast/dump.scm 355 */
																	long BgL_auxz00_4235;

																	BgL_auxz00_4235 =
																		(long) (BgL_arg2645z00_3990);
																	BgL_modz00_3989 =
																		(BgL_offsetz00_3988 / BgL_auxz00_4235);
															}}
															{	/* Ast/dump.scm 355 */
																long BgL_restz00_3991;

																{	/* Ast/dump.scm 355 */
																	int BgL_arg2644z00_3992;

																	BgL_arg2644z00_3992 = (int) (((long) 16));
																	{	/* Ast/dump.scm 355 */
																		long BgL_auxz00_4239;

																		BgL_auxz00_4239 =
																			(long) (BgL_arg2644z00_3992);
																		BgL_restz00_3991 =
																			(BgL_offsetz00_3988 % BgL_auxz00_4239);
																}}
																{	/* Ast/dump.scm 355 */

																	BgL_method3371z00_3981 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3986,
																			(int) (BgL_modz00_3989)),
																		(int) (BgL_restz00_3991));
									}}}}}}}}
									BgL_arg4060z00_2039 =
										PROCEDURE_ENTRY(BgL_method3371z00_3981)
										(BgL_method3371z00_3981, (obj_t) (BgL_nodez00_3980), BEOA);
						}}}
						{	/* Ast/dump.scm 356 */
							BgL_nodez00_bglt BgL_arg4066z00_2045;

							BgL_arg4066z00_2045 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2034))->
								BgL_valuez00);
							{	/* Ast/dump.scm 356 */
								obj_t BgL_method3371z00_4008;

								{	/* Ast/dump.scm 356 */
									BgL_objectz00_bglt BgL_objz00_4009;

									BgL_objz00_4009 = (BgL_objectz00_bglt) (BgL_arg4066z00_2045);
									{	/* Ast/dump.scm 356 */
										long BgL_objzd2classzd2numz00_4010;

										BgL_objzd2classzd2numz00_4010 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4009);
										{	/* Ast/dump.scm 356 */
											obj_t BgL_arg2643z00_4011;

											BgL_arg2643z00_4011 =
												PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
												(int) (((long) 1)));
											{	/* Ast/dump.scm 356 */
												obj_t BgL_arrayz00_4013;

												int BgL_offsetz00_4014;

												BgL_arrayz00_4013 = BgL_arg2643z00_4011;
												BgL_offsetz00_4014 =
													(int) (BgL_objzd2classzd2numz00_4010);
												{	/* Ast/dump.scm 356 */
													long BgL_offsetz00_4015;

													BgL_offsetz00_4015 =
														((long) (BgL_offsetz00_4014) - OBJECT_TYPE);
													{	/* Ast/dump.scm 356 */
														long BgL_modz00_4016;

														{	/* Ast/dump.scm 356 */
															int BgL_arg2645z00_4017;

															BgL_arg2645z00_4017 = (int) (((long) 16));
															{	/* Ast/dump.scm 356 */
																long BgL_auxz00_4258;

																BgL_auxz00_4258 = (long) (BgL_arg2645z00_4017);
																BgL_modz00_4016 =
																	(BgL_offsetz00_4015 / BgL_auxz00_4258);
														}}
														{	/* Ast/dump.scm 356 */
															long BgL_restz00_4018;

															{	/* Ast/dump.scm 356 */
																int BgL_arg2644z00_4019;

																BgL_arg2644z00_4019 = (int) (((long) 16));
																{	/* Ast/dump.scm 356 */
																	long BgL_auxz00_4262;

																	BgL_auxz00_4262 =
																		(long) (BgL_arg2644z00_4019);
																	BgL_restz00_4018 =
																		(BgL_offsetz00_4015 % BgL_auxz00_4262);
															}}
															{	/* Ast/dump.scm 356 */

																BgL_method3371z00_4008 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4013,
																		(int) (BgL_modz00_4016)),
																	(int) (BgL_restz00_4018));
								}}}}}}}}
								BgL_arg4061z00_2040 =
									PROCEDURE_ENTRY(BgL_method3371z00_4008)
									(BgL_method3371z00_4008, (obj_t) (BgL_arg4066z00_2045), BEOA);
						}}
						{	/* Ast/dump.scm 355 */
							obj_t BgL_list4063z00_2042;

							{	/* Ast/dump.scm 355 */
								obj_t BgL_arg4064z00_2043;

								BgL_arg4064z00_2043 = MAKE_PAIR(BNIL, BNIL);
								BgL_list4063z00_2042 =
									MAKE_PAIR(BgL_arg4061z00_2040, BgL_arg4064z00_2043);
							}
							BgL_arg4059z00_2038 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4060z00_2039,
								BgL_list4063z00_2042);
					}}
					return MAKE_PAIR(BgL_arg4058z00_2037, BgL_arg4059z00_2038);
				}
			}
		}
	}



/* node->sexp-box-ref3431 */
	obj_t BGl_nodezd2ze3sexpzd2boxzd2ref3431z31zzast_dumpz00(obj_t
		BgL_envz00_4069, obj_t BgL_nodez00_4070)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 346 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_2023;

				BgL_nodez00_2023 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_4070);
				{	/* Ast/dump.scm 348 */
					obj_t BgL_arg4051z00_2026;

					obj_t BgL_arg4052z00_2027;

					BgL_arg4051z00_2026 = CNST_TABLE_REF(((long) 2));
					{	/* Ast/dump.scm 348 */
						obj_t BgL_arg4053z00_2028;

						{	/* Ast/dump.scm 348 */
							BgL_varz00_bglt BgL_arg4056z00_2031;

							BgL_arg4056z00_2031 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2023))->BgL_varz00);
							{	/* Ast/dump.scm 348 */
								BgL_nodez00_bglt BgL_nodez00_3952;

								BgL_nodez00_3952 = (BgL_nodez00_bglt) (BgL_arg4056z00_2031);
								{	/* Ast/dump.scm 348 */
									obj_t BgL_method3371z00_3953;

									{	/* Ast/dump.scm 348 */
										BgL_objectz00_bglt BgL_objz00_3954;

										BgL_objz00_3954 = (BgL_objectz00_bglt) (BgL_nodez00_3952);
										{	/* Ast/dump.scm 348 */
											long BgL_objzd2classzd2numz00_3955;

											BgL_objzd2classzd2numz00_3955 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3954);
											{	/* Ast/dump.scm 348 */
												obj_t BgL_arg2643z00_3956;

												BgL_arg2643z00_3956 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 348 */
													obj_t BgL_arrayz00_3958;

													int BgL_offsetz00_3959;

													BgL_arrayz00_3958 = BgL_arg2643z00_3956;
													BgL_offsetz00_3959 =
														(int) (BgL_objzd2classzd2numz00_3955);
													{	/* Ast/dump.scm 348 */
														long BgL_offsetz00_3960;

														BgL_offsetz00_3960 =
															((long) (BgL_offsetz00_3959) - OBJECT_TYPE);
														{	/* Ast/dump.scm 348 */
															long BgL_modz00_3961;

															{	/* Ast/dump.scm 348 */
																int BgL_arg2645z00_3962;

																BgL_arg2645z00_3962 = (int) (((long) 16));
																{	/* Ast/dump.scm 348 */
																	long BgL_auxz00_4288;

																	BgL_auxz00_4288 =
																		(long) (BgL_arg2645z00_3962);
																	BgL_modz00_3961 =
																		(BgL_offsetz00_3960 / BgL_auxz00_4288);
															}}
															{	/* Ast/dump.scm 348 */
																long BgL_restz00_3963;

																{	/* Ast/dump.scm 348 */
																	int BgL_arg2644z00_3964;

																	BgL_arg2644z00_3964 = (int) (((long) 16));
																	{	/* Ast/dump.scm 348 */
																		long BgL_auxz00_4292;

																		BgL_auxz00_4292 =
																			(long) (BgL_arg2644z00_3964);
																		BgL_restz00_3963 =
																			(BgL_offsetz00_3960 % BgL_auxz00_4292);
																}}
																{	/* Ast/dump.scm 348 */

																	BgL_method3371z00_3953 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3958,
																			(int) (BgL_modz00_3961)),
																		(int) (BgL_restz00_3963));
									}}}}}}}}
									BgL_arg4053z00_2028 =
										PROCEDURE_ENTRY(BgL_method3371z00_3953)
										(BgL_method3371z00_3953, (obj_t) (BgL_nodez00_3952), BEOA);
						}}}
						{	/* Ast/dump.scm 348 */
							obj_t BgL_list4055z00_2030;

							BgL_list4055z00_2030 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg4052z00_2027 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4053z00_2028,
								BgL_list4055z00_2030);
					}}
					return MAKE_PAIR(BgL_arg4051z00_2026, BgL_arg4052z00_2027);
				}
			}
		}
	}



/* node->sexp-make-box3429 */
	obj_t BGl_nodezd2ze3sexpzd2makezd2box3429z31zzast_dumpz00(obj_t
		BgL_envz00_4071, obj_t BgL_nodez00_4072)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 339 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_2012;

				BgL_nodez00_2012 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_4072);
				{	/* Ast/dump.scm 341 */
					obj_t BgL_arg4044z00_2015;

					obj_t BgL_arg4045z00_2016;

					BgL_arg4044z00_2015 = CNST_TABLE_REF(((long) 3));
					{	/* Ast/dump.scm 341 */
						obj_t BgL_arg4046z00_2017;

						{	/* Ast/dump.scm 341 */
							BgL_nodez00_bglt BgL_arg4049z00_2020;

							BgL_arg4049z00_2020 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2012))->
								BgL_valuez00);
							{	/* Ast/dump.scm 341 */
								obj_t BgL_method3371z00_3925;

								{	/* Ast/dump.scm 341 */
									BgL_objectz00_bglt BgL_objz00_3926;

									BgL_objz00_3926 = (BgL_objectz00_bglt) (BgL_arg4049z00_2020);
									{	/* Ast/dump.scm 341 */
										long BgL_objzd2classzd2numz00_3927;

										BgL_objzd2classzd2numz00_3927 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3926);
										{	/* Ast/dump.scm 341 */
											obj_t BgL_arg2643z00_3928;

											BgL_arg2643z00_3928 =
												PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
												(int) (((long) 1)));
											{	/* Ast/dump.scm 341 */
												obj_t BgL_arrayz00_3930;

												int BgL_offsetz00_3931;

												BgL_arrayz00_3930 = BgL_arg2643z00_3928;
												BgL_offsetz00_3931 =
													(int) (BgL_objzd2classzd2numz00_3927);
												{	/* Ast/dump.scm 341 */
													long BgL_offsetz00_3932;

													BgL_offsetz00_3932 =
														((long) (BgL_offsetz00_3931) - OBJECT_TYPE);
													{	/* Ast/dump.scm 341 */
														long BgL_modz00_3933;

														{	/* Ast/dump.scm 341 */
															int BgL_arg2645z00_3934;

															BgL_arg2645z00_3934 = (int) (((long) 16));
															{	/* Ast/dump.scm 341 */
																long BgL_auxz00_4316;

																BgL_auxz00_4316 = (long) (BgL_arg2645z00_3934);
																BgL_modz00_3933 =
																	(BgL_offsetz00_3932 / BgL_auxz00_4316);
														}}
														{	/* Ast/dump.scm 341 */
															long BgL_restz00_3935;

															{	/* Ast/dump.scm 341 */
																int BgL_arg2644z00_3936;

																BgL_arg2644z00_3936 = (int) (((long) 16));
																{	/* Ast/dump.scm 341 */
																	long BgL_auxz00_4320;

																	BgL_auxz00_4320 =
																		(long) (BgL_arg2644z00_3936);
																	BgL_restz00_3935 =
																		(BgL_offsetz00_3932 % BgL_auxz00_4320);
															}}
															{	/* Ast/dump.scm 341 */

																BgL_method3371z00_3925 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3930,
																		(int) (BgL_modz00_3933)),
																	(int) (BgL_restz00_3935));
								}}}}}}}}
								BgL_arg4046z00_2017 =
									PROCEDURE_ENTRY(BgL_method3371z00_3925)
									(BgL_method3371z00_3925, (obj_t) (BgL_arg4049z00_2020), BEOA);
						}}
						{	/* Ast/dump.scm 341 */
							obj_t BgL_list4048z00_2019;

							BgL_list4048z00_2019 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg4045z00_2016 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4046z00_2017,
								BgL_list4048z00_2019);
					}}
					return MAKE_PAIR(BgL_arg4044z00_2015, BgL_arg4045z00_2016);
				}
			}
		}
	}



/* node->sexp-jump-ex-i3427 */
	obj_t BGl_nodezd2ze3sexpzd2jumpzd2exzd2i3427ze3zzast_dumpz00(obj_t
		BgL_envz00_4073, obj_t BgL_nodez00_4074)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 331 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1998;

				BgL_nodez00_1998 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_4074);
				{	/* Ast/dump.scm 333 */
					obj_t BgL_arg4034z00_2001;

					obj_t BgL_arg4035z00_2002;

					BgL_arg4034z00_2001 = CNST_TABLE_REF(((long) 4));
					{	/* Ast/dump.scm 333 */
						obj_t BgL_arg4036z00_2003;

						obj_t BgL_arg4037z00_2004;

						{	/* Ast/dump.scm 333 */
							BgL_nodez00_bglt BgL_arg4041z00_2008;

							BgL_arg4041z00_2008 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1998))->
								BgL_exitz00);
							{	/* Ast/dump.scm 333 */
								obj_t BgL_method3371z00_3870;

								{	/* Ast/dump.scm 333 */
									BgL_objectz00_bglt BgL_objz00_3871;

									BgL_objz00_3871 = (BgL_objectz00_bglt) (BgL_arg4041z00_2008);
									{	/* Ast/dump.scm 333 */
										long BgL_objzd2classzd2numz00_3872;

										BgL_objzd2classzd2numz00_3872 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3871);
										{	/* Ast/dump.scm 333 */
											obj_t BgL_arg2643z00_3873;

											BgL_arg2643z00_3873 =
												PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
												(int) (((long) 1)));
											{	/* Ast/dump.scm 333 */
												obj_t BgL_arrayz00_3875;

												int BgL_offsetz00_3876;

												BgL_arrayz00_3875 = BgL_arg2643z00_3873;
												BgL_offsetz00_3876 =
													(int) (BgL_objzd2classzd2numz00_3872);
												{	/* Ast/dump.scm 333 */
													long BgL_offsetz00_3877;

													BgL_offsetz00_3877 =
														((long) (BgL_offsetz00_3876) - OBJECT_TYPE);
													{	/* Ast/dump.scm 333 */
														long BgL_modz00_3878;

														{	/* Ast/dump.scm 333 */
															int BgL_arg2645z00_3879;

															BgL_arg2645z00_3879 = (int) (((long) 16));
															{	/* Ast/dump.scm 333 */
																long BgL_auxz00_4344;

																BgL_auxz00_4344 = (long) (BgL_arg2645z00_3879);
																BgL_modz00_3878 =
																	(BgL_offsetz00_3877 / BgL_auxz00_4344);
														}}
														{	/* Ast/dump.scm 333 */
															long BgL_restz00_3880;

															{	/* Ast/dump.scm 333 */
																int BgL_arg2644z00_3881;

																BgL_arg2644z00_3881 = (int) (((long) 16));
																{	/* Ast/dump.scm 333 */
																	long BgL_auxz00_4348;

																	BgL_auxz00_4348 =
																		(long) (BgL_arg2644z00_3881);
																	BgL_restz00_3880 =
																		(BgL_offsetz00_3877 % BgL_auxz00_4348);
															}}
															{	/* Ast/dump.scm 333 */

																BgL_method3371z00_3870 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3875,
																		(int) (BgL_modz00_3878)),
																	(int) (BgL_restz00_3880));
								}}}}}}}}
								BgL_arg4036z00_2003 =
									PROCEDURE_ENTRY(BgL_method3371z00_3870)
									(BgL_method3371z00_3870, (obj_t) (BgL_arg4041z00_2008), BEOA);
						}}
						{	/* Ast/dump.scm 334 */
							BgL_nodez00_bglt BgL_arg4042z00_2009;

							BgL_arg4042z00_2009 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1998))->
								BgL_valuez00);
							{	/* Ast/dump.scm 334 */
								obj_t BgL_method3371z00_3897;

								{	/* Ast/dump.scm 334 */
									BgL_objectz00_bglt BgL_objz00_3898;

									BgL_objz00_3898 = (BgL_objectz00_bglt) (BgL_arg4042z00_2009);
									{	/* Ast/dump.scm 334 */
										long BgL_objzd2classzd2numz00_3899;

										BgL_objzd2classzd2numz00_3899 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3898);
										{	/* Ast/dump.scm 334 */
											obj_t BgL_arg2643z00_3900;

											BgL_arg2643z00_3900 =
												PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
												(int) (((long) 1)));
											{	/* Ast/dump.scm 334 */
												obj_t BgL_arrayz00_3902;

												int BgL_offsetz00_3903;

												BgL_arrayz00_3902 = BgL_arg2643z00_3900;
												BgL_offsetz00_3903 =
													(int) (BgL_objzd2classzd2numz00_3899);
												{	/* Ast/dump.scm 334 */
													long BgL_offsetz00_3904;

													BgL_offsetz00_3904 =
														((long) (BgL_offsetz00_3903) - OBJECT_TYPE);
													{	/* Ast/dump.scm 334 */
														long BgL_modz00_3905;

														{	/* Ast/dump.scm 334 */
															int BgL_arg2645z00_3906;

															BgL_arg2645z00_3906 = (int) (((long) 16));
															{	/* Ast/dump.scm 334 */
																long BgL_auxz00_4367;

																BgL_auxz00_4367 = (long) (BgL_arg2645z00_3906);
																BgL_modz00_3905 =
																	(BgL_offsetz00_3904 / BgL_auxz00_4367);
														}}
														{	/* Ast/dump.scm 334 */
															long BgL_restz00_3907;

															{	/* Ast/dump.scm 334 */
																int BgL_arg2644z00_3908;

																BgL_arg2644z00_3908 = (int) (((long) 16));
																{	/* Ast/dump.scm 334 */
																	long BgL_auxz00_4371;

																	BgL_auxz00_4371 =
																		(long) (BgL_arg2644z00_3908);
																	BgL_restz00_3907 =
																		(BgL_offsetz00_3904 % BgL_auxz00_4371);
															}}
															{	/* Ast/dump.scm 334 */

																BgL_method3371z00_3897 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3902,
																		(int) (BgL_modz00_3905)),
																	(int) (BgL_restz00_3907));
								}}}}}}}}
								BgL_arg4037z00_2004 =
									PROCEDURE_ENTRY(BgL_method3371z00_3897)
									(BgL_method3371z00_3897, (obj_t) (BgL_arg4042z00_2009), BEOA);
						}}
						{	/* Ast/dump.scm 333 */
							obj_t BgL_list4039z00_2006;

							{	/* Ast/dump.scm 333 */
								obj_t BgL_arg4040z00_2007;

								BgL_arg4040z00_2007 = MAKE_PAIR(BNIL, BNIL);
								BgL_list4039z00_2006 =
									MAKE_PAIR(BgL_arg4037z00_2004, BgL_arg4040z00_2007);
							}
							BgL_arg4035z00_2002 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4036z00_2003,
								BgL_list4039z00_2006);
					}}
					return MAKE_PAIR(BgL_arg4034z00_2001, BgL_arg4035z00_2002);
				}
			}
		}
	}



/* node->sexp-set-ex-it3425 */
	obj_t BGl_nodezd2ze3sexpzd2setzd2exzd2it3425ze3zzast_dumpz00(obj_t
		BgL_envz00_4075, obj_t BgL_nodez00_4076)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 323 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1984;

				BgL_nodez00_1984 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_4076);
				{	/* Ast/dump.scm 325 */
					obj_t BgL_arg4024z00_1987;

					obj_t BgL_arg4025z00_1988;

					BgL_arg4024z00_1987 = CNST_TABLE_REF(((long) 5));
					{	/* Ast/dump.scm 325 */
						obj_t BgL_arg4026z00_1989;

						obj_t BgL_arg4027z00_1990;

						{	/* Ast/dump.scm 325 */
							BgL_varz00_bglt BgL_arg4031z00_1994;

							BgL_arg4031z00_1994 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1984))->
								BgL_varz00);
							{	/* Ast/dump.scm 325 */
								BgL_nodez00_bglt BgL_nodez00_3814;

								BgL_nodez00_3814 = (BgL_nodez00_bglt) (BgL_arg4031z00_1994);
								{	/* Ast/dump.scm 325 */
									obj_t BgL_method3371z00_3815;

									{	/* Ast/dump.scm 325 */
										BgL_objectz00_bglt BgL_objz00_3816;

										BgL_objz00_3816 = (BgL_objectz00_bglt) (BgL_nodez00_3814);
										{	/* Ast/dump.scm 325 */
											long BgL_objzd2classzd2numz00_3817;

											BgL_objzd2classzd2numz00_3817 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3816);
											{	/* Ast/dump.scm 325 */
												obj_t BgL_arg2643z00_3818;

												BgL_arg2643z00_3818 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 325 */
													obj_t BgL_arrayz00_3820;

													int BgL_offsetz00_3821;

													BgL_arrayz00_3820 = BgL_arg2643z00_3818;
													BgL_offsetz00_3821 =
														(int) (BgL_objzd2classzd2numz00_3817);
													{	/* Ast/dump.scm 325 */
														long BgL_offsetz00_3822;

														BgL_offsetz00_3822 =
															((long) (BgL_offsetz00_3821) - OBJECT_TYPE);
														{	/* Ast/dump.scm 325 */
															long BgL_modz00_3823;

															{	/* Ast/dump.scm 325 */
																int BgL_arg2645z00_3824;

																BgL_arg2645z00_3824 = (int) (((long) 16));
																{	/* Ast/dump.scm 325 */
																	long BgL_auxz00_4397;

																	BgL_auxz00_4397 =
																		(long) (BgL_arg2645z00_3824);
																	BgL_modz00_3823 =
																		(BgL_offsetz00_3822 / BgL_auxz00_4397);
															}}
															{	/* Ast/dump.scm 325 */
																long BgL_restz00_3825;

																{	/* Ast/dump.scm 325 */
																	int BgL_arg2644z00_3826;

																	BgL_arg2644z00_3826 = (int) (((long) 16));
																	{	/* Ast/dump.scm 325 */
																		long BgL_auxz00_4401;

																		BgL_auxz00_4401 =
																			(long) (BgL_arg2644z00_3826);
																		BgL_restz00_3825 =
																			(BgL_offsetz00_3822 % BgL_auxz00_4401);
																}}
																{	/* Ast/dump.scm 325 */

																	BgL_method3371z00_3815 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3820,
																			(int) (BgL_modz00_3823)),
																		(int) (BgL_restz00_3825));
									}}}}}}}}
									BgL_arg4026z00_1989 =
										PROCEDURE_ENTRY(BgL_method3371z00_3815)
										(BgL_method3371z00_3815, (obj_t) (BgL_nodez00_3814), BEOA);
						}}}
						{	/* Ast/dump.scm 326 */
							BgL_nodez00_bglt BgL_arg4032z00_1995;

							BgL_arg4032z00_1995 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1984))->
								BgL_bodyz00);
							{	/* Ast/dump.scm 326 */
								obj_t BgL_method3371z00_3842;

								{	/* Ast/dump.scm 326 */
									BgL_objectz00_bglt BgL_objz00_3843;

									BgL_objz00_3843 = (BgL_objectz00_bglt) (BgL_arg4032z00_1995);
									{	/* Ast/dump.scm 326 */
										long BgL_objzd2classzd2numz00_3844;

										BgL_objzd2classzd2numz00_3844 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3843);
										{	/* Ast/dump.scm 326 */
											obj_t BgL_arg2643z00_3845;

											BgL_arg2643z00_3845 =
												PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
												(int) (((long) 1)));
											{	/* Ast/dump.scm 326 */
												obj_t BgL_arrayz00_3847;

												int BgL_offsetz00_3848;

												BgL_arrayz00_3847 = BgL_arg2643z00_3845;
												BgL_offsetz00_3848 =
													(int) (BgL_objzd2classzd2numz00_3844);
												{	/* Ast/dump.scm 326 */
													long BgL_offsetz00_3849;

													BgL_offsetz00_3849 =
														((long) (BgL_offsetz00_3848) - OBJECT_TYPE);
													{	/* Ast/dump.scm 326 */
														long BgL_modz00_3850;

														{	/* Ast/dump.scm 326 */
															int BgL_arg2645z00_3851;

															BgL_arg2645z00_3851 = (int) (((long) 16));
															{	/* Ast/dump.scm 326 */
																long BgL_auxz00_4420;

																BgL_auxz00_4420 = (long) (BgL_arg2645z00_3851);
																BgL_modz00_3850 =
																	(BgL_offsetz00_3849 / BgL_auxz00_4420);
														}}
														{	/* Ast/dump.scm 326 */
															long BgL_restz00_3852;

															{	/* Ast/dump.scm 326 */
																int BgL_arg2644z00_3853;

																BgL_arg2644z00_3853 = (int) (((long) 16));
																{	/* Ast/dump.scm 326 */
																	long BgL_auxz00_4424;

																	BgL_auxz00_4424 =
																		(long) (BgL_arg2644z00_3853);
																	BgL_restz00_3852 =
																		(BgL_offsetz00_3849 % BgL_auxz00_4424);
															}}
															{	/* Ast/dump.scm 326 */

																BgL_method3371z00_3842 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3847,
																		(int) (BgL_modz00_3850)),
																	(int) (BgL_restz00_3852));
								}}}}}}}}
								BgL_arg4027z00_1990 =
									PROCEDURE_ENTRY(BgL_method3371z00_3842)
									(BgL_method3371z00_3842, (obj_t) (BgL_arg4032z00_1995), BEOA);
						}}
						{	/* Ast/dump.scm 325 */
							obj_t BgL_list4029z00_1992;

							{	/* Ast/dump.scm 325 */
								obj_t BgL_arg4030z00_1993;

								BgL_arg4030z00_1993 = MAKE_PAIR(BNIL, BNIL);
								BgL_list4029z00_1992 =
									MAKE_PAIR(BgL_arg4027z00_1990, BgL_arg4030z00_1993);
							}
							BgL_arg4025z00_1988 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4026z00_1989,
								BgL_list4029z00_1992);
					}}
					return MAKE_PAIR(BgL_arg4024z00_1987, BgL_arg4025z00_1988);
				}
			}
		}
	}



/* node->sexp-let-var3423 */
	obj_t BGl_nodezd2ze3sexpzd2letzd2var3423z31zzast_dumpz00(obj_t
		BgL_envz00_4077, obj_t BgL_nodez00_4078)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 312 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1948;

				BgL_nodez00_1948 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_4078);
				{	/* Ast/dump.scm 314 */
					obj_t BgL_arg4000z00_1951;

					obj_t BgL_arg4001z00_1952;

					{
						BgL_nodez00_bglt BgL_auxz00_4439;

						BgL_auxz00_4439 = (BgL_nodez00_bglt) (BgL_nodez00_1948);
						BgL_arg4000z00_1951 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_4439))->BgL_locz00);
					}
					{	/* Ast/dump.scm 315 */
						obj_t BgL_arg4002z00_1953;

						obj_t BgL_arg4003z00_1954;

						BgL_arg4002z00_1953 = CNST_TABLE_REF(((long) 6));
						{	/* Ast/dump.scm 315 */
							obj_t BgL_arg4004z00_1955;

							obj_t BgL_arg4005z00_1956;

							{	/* Ast/dump.scm 315 */
								obj_t BgL_l3364z00_1960;

								BgL_l3364z00_1960 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1948))->
									BgL_bindingsz00);
								if (NULLP(BgL_l3364z00_1960))
									{	/* Ast/dump.scm 315 */
										BgL_arg4004z00_1955 = BNIL;
									}
								else
									{	/* Ast/dump.scm 315 */
										obj_t BgL_head3366z00_1962;

										BgL_head3366z00_1962 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l3364z00_1964;

											obj_t BgL_tail3367z00_1965;

											BgL_l3364z00_1964 = BgL_l3364z00_1960;
											BgL_tail3367z00_1965 = BgL_head3366z00_1962;
										BgL_zc3anonymousza34010ze3z83_1966:
											if (NULLP(BgL_l3364z00_1964))
												{	/* Ast/dump.scm 315 */
													BgL_arg4004z00_1955 = CDR(BgL_head3366z00_1962);
												}
											else
												{	/* Ast/dump.scm 315 */
													obj_t BgL_newtail3368z00_1968;

													{	/* Ast/dump.scm 315 */
														obj_t BgL_arg4013z00_1970;

														{	/* Ast/dump.scm 315 */
															obj_t BgL_bz00_1972;

															BgL_bz00_1972 = CAR(BgL_l3364z00_1964);
															{	/* Ast/dump.scm 316 */
																obj_t BgL_arg4015z00_1973;

																obj_t BgL_arg4016z00_1974;

																BgL_arg4015z00_1973 =
																	BGl_shapez00zztools_shapez00(CAR
																	(BgL_bz00_1972));
																{	/* Ast/dump.scm 316 */
																	obj_t BgL_arg4018z00_1976;

																	{	/* Ast/dump.scm 316 */
																		obj_t BgL_arg4021z00_1979;

																		BgL_arg4021z00_1979 = CDR(BgL_bz00_1972);
																		{	/* Ast/dump.scm 316 */
																			BgL_nodez00_bglt BgL_nodez00_3754;

																			BgL_nodez00_3754 =
																				(BgL_nodez00_bglt)
																				(BgL_arg4021z00_1979);
																			{	/* Ast/dump.scm 316 */
																				obj_t BgL_method3371z00_3755;

																				{	/* Ast/dump.scm 316 */
																					BgL_objectz00_bglt BgL_objz00_3756;

																					BgL_objz00_3756 =
																						(BgL_objectz00_bglt)
																						(BgL_nodez00_3754);
																					{	/* Ast/dump.scm 316 */
																						long BgL_objzd2classzd2numz00_3757;

																						BgL_objzd2classzd2numz00_3757 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3756);
																						{	/* Ast/dump.scm 316 */
																							obj_t BgL_arg2643z00_3758;

																							BgL_arg2643z00_3758 =
																								PROCEDURE_REF
																								(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																								(int) (((long) 1)));
																							{	/* Ast/dump.scm 316 */
																								obj_t BgL_arrayz00_3760;

																								int BgL_offsetz00_3761;

																								BgL_arrayz00_3760 =
																									BgL_arg2643z00_3758;
																								BgL_offsetz00_3761 =
																									(int)
																									(BgL_objzd2classzd2numz00_3757);
																								{	/* Ast/dump.scm 316 */
																									long BgL_offsetz00_3762;

																									BgL_offsetz00_3762 =
																										(
																										(long) (BgL_offsetz00_3761)
																										- OBJECT_TYPE);
																									{	/* Ast/dump.scm 316 */
																										long BgL_modz00_3763;

																										{	/* Ast/dump.scm 316 */
																											int BgL_arg2645z00_3764;

																											BgL_arg2645z00_3764 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 316 */
																												long BgL_auxz00_4463;

																												BgL_auxz00_4463 =
																													(long)
																													(BgL_arg2645z00_3764);
																												BgL_modz00_3763 =
																													(BgL_offsetz00_3762 /
																													BgL_auxz00_4463);
																										}}
																										{	/* Ast/dump.scm 316 */
																											long BgL_restz00_3765;

																											{	/* Ast/dump.scm 316 */
																												int BgL_arg2644z00_3766;

																												BgL_arg2644z00_3766 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 316 */
																													long BgL_auxz00_4467;

																													BgL_auxz00_4467 =
																														(long)
																														(BgL_arg2644z00_3766);
																													BgL_restz00_3765 =
																														(BgL_offsetz00_3762
																														% BgL_auxz00_4467);
																											}}
																											{	/* Ast/dump.scm 316 */

																												BgL_method3371z00_3755 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3760,
																														(int)
																														(BgL_modz00_3763)),
																													(int)
																													(BgL_restz00_3765));
																				}}}}}}}}
																				BgL_arg4018z00_1976 =
																					PROCEDURE_ENTRY
																					(BgL_method3371z00_3755)
																					(BgL_method3371z00_3755,
																					(obj_t) (BgL_nodez00_3754), BEOA);
																	}}}
																	{	/* Ast/dump.scm 316 */
																		obj_t BgL_list4020z00_1978;

																		BgL_list4020z00_1978 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4016z00_1974 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4018z00_1976,
																			BgL_list4020z00_1978);
																}}
																BgL_arg4013z00_1970 =
																	MAKE_PAIR(BgL_arg4015z00_1973,
																	BgL_arg4016z00_1974);
														}}
														BgL_newtail3368z00_1968 =
															MAKE_PAIR(BgL_arg4013z00_1970, BNIL);
													}
													SET_CDR(BgL_tail3367z00_1965,
														BgL_newtail3368z00_1968);
													{
														obj_t BgL_tail3367z00_4484;

														obj_t BgL_l3364z00_4482;

														BgL_l3364z00_4482 = CDR(BgL_l3364z00_1964);
														BgL_tail3367z00_4484 = BgL_newtail3368z00_1968;
														BgL_tail3367z00_1965 = BgL_tail3367z00_4484;
														BgL_l3364z00_1964 = BgL_l3364z00_4482;
														goto BgL_zc3anonymousza34010ze3z83_1966;
													}
												}
										}
									}
							}
							{	/* Ast/dump.scm 318 */
								BgL_nodez00_bglt BgL_arg4022z00_1981;

								BgL_arg4022z00_1981 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1948))->
									BgL_bodyz00);
								{	/* Ast/dump.scm 318 */
									obj_t BgL_method3371z00_3787;

									{	/* Ast/dump.scm 318 */
										BgL_objectz00_bglt BgL_objz00_3788;

										BgL_objz00_3788 =
											(BgL_objectz00_bglt) (BgL_arg4022z00_1981);
										{	/* Ast/dump.scm 318 */
											long BgL_objzd2classzd2numz00_3789;

											BgL_objzd2classzd2numz00_3789 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3788);
											{	/* Ast/dump.scm 318 */
												obj_t BgL_arg2643z00_3790;

												BgL_arg2643z00_3790 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 318 */
													obj_t BgL_arrayz00_3792;

													int BgL_offsetz00_3793;

													BgL_arrayz00_3792 = BgL_arg2643z00_3790;
													BgL_offsetz00_3793 =
														(int) (BgL_objzd2classzd2numz00_3789);
													{	/* Ast/dump.scm 318 */
														long BgL_offsetz00_3794;

														BgL_offsetz00_3794 =
															((long) (BgL_offsetz00_3793) - OBJECT_TYPE);
														{	/* Ast/dump.scm 318 */
															long BgL_modz00_3795;

															{	/* Ast/dump.scm 318 */
																int BgL_arg2645z00_3796;

																BgL_arg2645z00_3796 = (int) (((long) 16));
																{	/* Ast/dump.scm 318 */
																	long BgL_auxz00_4494;

																	BgL_auxz00_4494 =
																		(long) (BgL_arg2645z00_3796);
																	BgL_modz00_3795 =
																		(BgL_offsetz00_3794 / BgL_auxz00_4494);
															}}
															{	/* Ast/dump.scm 318 */
																long BgL_restz00_3797;

																{	/* Ast/dump.scm 318 */
																	int BgL_arg2644z00_3798;

																	BgL_arg2644z00_3798 = (int) (((long) 16));
																	{	/* Ast/dump.scm 318 */
																		long BgL_auxz00_4498;

																		BgL_auxz00_4498 =
																			(long) (BgL_arg2644z00_3798);
																		BgL_restz00_3797 =
																			(BgL_offsetz00_3794 % BgL_auxz00_4498);
																}}
																{	/* Ast/dump.scm 318 */

																	BgL_method3371z00_3787 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3792,
																			(int) (BgL_modz00_3795)),
																		(int) (BgL_restz00_3797));
									}}}}}}}}
									BgL_arg4005z00_1956 =
										PROCEDURE_ENTRY(BgL_method3371z00_3787)
										(BgL_method3371z00_3787, (obj_t) (BgL_arg4022z00_1981),
										BEOA);
							}}
							{	/* Ast/dump.scm 315 */
								obj_t BgL_list4007z00_1958;

								{	/* Ast/dump.scm 315 */
									obj_t BgL_arg4008z00_1959;

									BgL_arg4008z00_1959 = MAKE_PAIR(BNIL, BNIL);
									BgL_list4007z00_1958 =
										MAKE_PAIR(BgL_arg4005z00_1956, BgL_arg4008z00_1959);
								}
								BgL_arg4003z00_1954 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4004z00_1955, BgL_list4007z00_1958);
						}}
						BgL_arg4001z00_1952 =
							MAKE_PAIR(BgL_arg4002z00_1953, BgL_arg4003z00_1954);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg4000z00_1951,
						BgL_arg4001z00_1952);
				}
			}
		}
	}



/* node->sexp-let-fun3421 */
	obj_t BGl_nodezd2ze3sexpzd2letzd2fun3421z31zzast_dumpz00(obj_t
		BgL_envz00_4079, obj_t BgL_nodez00_4080)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 295 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1888;

				BgL_nodez00_1888 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_4080);
				{	/* Ast/dump.scm 297 */
					obj_t BgL_arg3960z00_1891;

					obj_t BgL_arg3961z00_1892;

					{
						BgL_nodez00_bglt BgL_auxz00_4514;

						BgL_auxz00_4514 = (BgL_nodez00_bglt) (BgL_nodez00_1888);
						BgL_arg3960z00_1891 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_4514))->BgL_locz00);
					}
					{	/* Ast/dump.scm 298 */
						obj_t BgL_arg3962z00_1893;

						obj_t BgL_arg3963z00_1894;

						BgL_arg3962z00_1893 = CNST_TABLE_REF(((long) 7));
						{	/* Ast/dump.scm 298 */
							obj_t BgL_arg3964z00_1895;

							obj_t BgL_arg3965z00_1896;

							{	/* Ast/dump.scm 298 */
								obj_t BgL_l3359z00_1900;

								BgL_l3359z00_1900 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1888))->
									BgL_localsz00);
								if (NULLP(BgL_l3359z00_1900))
									{	/* Ast/dump.scm 298 */
										BgL_arg3964z00_1895 = BNIL;
									}
								else
									{	/* Ast/dump.scm 298 */
										obj_t BgL_head3361z00_1902;

										BgL_head3361z00_1902 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l3359z00_1904;

											obj_t BgL_tail3362z00_1905;

											BgL_l3359z00_1904 = BgL_l3359z00_1900;
											BgL_tail3362z00_1905 = BgL_head3361z00_1902;
										BgL_zc3anonymousza33970ze3z83_1906:
											if (NULLP(BgL_l3359z00_1904))
												{	/* Ast/dump.scm 298 */
													BgL_arg3964z00_1895 = CDR(BgL_head3361z00_1902);
												}
											else
												{	/* Ast/dump.scm 298 */
													obj_t BgL_newtail3363z00_1908;

													{	/* Ast/dump.scm 298 */
														obj_t BgL_arg3973z00_1910;

														{	/* Ast/dump.scm 298 */
															obj_t BgL_funz00_1912;

															BgL_funz00_1912 = CAR(BgL_l3359z00_1904);
															{	/* Ast/dump.scm 299 */
																obj_t BgL_arg3975z00_1913;

																obj_t BgL_arg3976z00_1914;

																BgL_arg3975z00_1913 =
																	BGl_shapez00zztools_shapez00(BgL_funz00_1912);
																{	/* Ast/dump.scm 301 */
																	obj_t BgL_arg3977z00_1915;

																	obj_t BgL_arg3978z00_1916;

																	{	/* Ast/dump.scm 301 */
																		obj_t BgL_arg3982z00_1920;

																		long BgL_arg3983z00_1921;

																		{	/* Ast/dump.scm 301 */
																			obj_t BgL_l3353z00_1922;

																			{	/* Ast/dump.scm 302 */
																				BgL_sfunz00_bglt BgL_obj1880z00_3668;

																				{	/* Ast/dump.scm 302 */
																					BgL_variablez00_bglt
																						BgL_obj1611z00_3667;
																					BgL_obj1611z00_3667 =
																						(BgL_variablez00_bglt)
																						(BgL_funz00_1912);
																					BgL_obj1880z00_3668 =
																						(BgL_sfunz00_bglt) (((
																								(BgL_variablez00_bglt)
																								CREF(BgL_obj1611z00_3667))->
																							BgL_valuez00));
																				}
																				BgL_l3353z00_1922 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_obj1880z00_3668))->
																					BgL_argsz00);
																			}
																			if (NULLP(BgL_l3353z00_1922))
																				{	/* Ast/dump.scm 301 */
																					BgL_arg3982z00_1920 = BNIL;
																				}
																			else
																				{	/* Ast/dump.scm 301 */
																					obj_t BgL_head3355z00_1924;

																					BgL_head3355z00_1924 =
																						MAKE_PAIR
																						(BGl_shapez00zztools_shapez00(CAR
																							(BgL_l3353z00_1922)), BNIL);
																					{	/* Ast/dump.scm 301 */
																						obj_t BgL_g3358z00_1925;

																						BgL_g3358z00_1925 =
																							CDR(BgL_l3353z00_1922);
																						{
																							obj_t BgL_l3353z00_1927;

																							obj_t BgL_tail3356z00_1928;

																							BgL_l3353z00_1927 =
																								BgL_g3358z00_1925;
																							BgL_tail3356z00_1928 =
																								BgL_head3355z00_1924;
																						BgL_zc3anonymousza33985ze3z83_1929:
																							if (NULLP(BgL_l3353z00_1927))
																								{	/* Ast/dump.scm 301 */
																									BgL_arg3982z00_1920 =
																										BgL_head3355z00_1924;
																								}
																							else
																								{	/* Ast/dump.scm 301 */
																									obj_t BgL_newtail3357z00_1931;

																									BgL_newtail3357z00_1931 =
																										MAKE_PAIR
																										(BGl_shapez00zztools_shapez00
																										(CAR(BgL_l3353z00_1927)),
																										BNIL);
																									SET_CDR(BgL_tail3356z00_1928,
																										BgL_newtail3357z00_1931);
																									{
																										obj_t BgL_tail3356z00_4545;

																										obj_t BgL_l3353z00_4543;

																										BgL_l3353z00_4543 =
																											CDR(BgL_l3353z00_1927);
																										BgL_tail3356z00_4545 =
																											BgL_newtail3357z00_1931;
																										BgL_tail3356z00_1928 =
																											BgL_tail3356z00_4545;
																										BgL_l3353z00_1927 =
																											BgL_l3353z00_4543;
																										goto
																											BgL_zc3anonymousza33985ze3z83_1929;
																									}
																								}
																						}
																					}
																				}
																		}
																		{	/* Ast/dump.scm 303 */
																			BgL_funz00_bglt BgL_obj1813z00_3682;

																			{	/* Ast/dump.scm 303 */
																				BgL_variablez00_bglt
																					BgL_obj1611z00_3681;
																				BgL_obj1611z00_3681 =
																					(BgL_variablez00_bglt)
																					(BgL_funz00_1912);
																				BgL_obj1813z00_3682 =
																					(BgL_funz00_bglt) (((
																							(BgL_variablez00_bglt)
																							CREF(BgL_obj1611z00_3681))->
																						BgL_valuez00));
																			}
																			BgL_arg3983z00_1921 =
																				(((BgL_funz00_bglt)
																					CREF(BgL_obj1813z00_3682))->
																				BgL_arityz00);
																		}
																		BgL_arg3977z00_1915 =
																			BGl_argszd2listzd2ze3argsza2z41zztools_argsz00
																			(BgL_arg3982z00_1920,
																			BINT(BgL_arg3983z00_1921));
																	}
																	{	/* Ast/dump.scm 305 */
																		obj_t BgL_arg3996z00_1942;

																		{	/* Ast/dump.scm 305 */
																			BgL_sfunz00_bglt BgL_obj1884z00_3684;

																			{	/* Ast/dump.scm 305 */
																				BgL_variablez00_bglt
																					BgL_obj1611z00_3683;
																				BgL_obj1611z00_3683 =
																					(BgL_variablez00_bglt)
																					(BgL_funz00_1912);
																				BgL_obj1884z00_3684 =
																					(BgL_sfunz00_bglt) (((
																							(BgL_variablez00_bglt)
																							CREF(BgL_obj1611z00_3683))->
																						BgL_valuez00));
																			}
																			BgL_arg3996z00_1942 =
																				(((BgL_sfunz00_bglt)
																					CREF(BgL_obj1884z00_3684))->
																				BgL_bodyz00);
																		}
																		{	/* Ast/dump.scm 304 */
																			BgL_nodez00_bglt BgL_nodez00_3685;

																			BgL_nodez00_3685 =
																				(BgL_nodez00_bglt)
																				(BgL_arg3996z00_1942);
																			{	/* Ast/dump.scm 304 */
																				obj_t BgL_method3371z00_3686;

																				{	/* Ast/dump.scm 304 */
																					BgL_objectz00_bglt BgL_objz00_3687;

																					BgL_objz00_3687 =
																						(BgL_objectz00_bglt)
																						(BgL_nodez00_3685);
																					{	/* Ast/dump.scm 304 */
																						long BgL_objzd2classzd2numz00_3688;

																						BgL_objzd2classzd2numz00_3688 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3687);
																						{	/* Ast/dump.scm 304 */
																							obj_t BgL_arg2643z00_3689;

																							BgL_arg2643z00_3689 =
																								PROCEDURE_REF
																								(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																								(int) (((long) 1)));
																							{	/* Ast/dump.scm 304 */
																								obj_t BgL_arrayz00_3691;

																								int BgL_offsetz00_3692;

																								BgL_arrayz00_3691 =
																									BgL_arg2643z00_3689;
																								BgL_offsetz00_3692 =
																									(int)
																									(BgL_objzd2classzd2numz00_3688);
																								{	/* Ast/dump.scm 304 */
																									long BgL_offsetz00_3693;

																									BgL_offsetz00_3693 =
																										(
																										(long) (BgL_offsetz00_3692)
																										- OBJECT_TYPE);
																									{	/* Ast/dump.scm 304 */
																										long BgL_modz00_3694;

																										{	/* Ast/dump.scm 304 */
																											int BgL_arg2645z00_3695;

																											BgL_arg2645z00_3695 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 304 */
																												long BgL_auxz00_4565;

																												BgL_auxz00_4565 =
																													(long)
																													(BgL_arg2645z00_3695);
																												BgL_modz00_3694 =
																													(BgL_offsetz00_3693 /
																													BgL_auxz00_4565);
																										}}
																										{	/* Ast/dump.scm 304 */
																											long BgL_restz00_3696;

																											{	/* Ast/dump.scm 304 */
																												int BgL_arg2644z00_3697;

																												BgL_arg2644z00_3697 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 304 */
																													long BgL_auxz00_4569;

																													BgL_auxz00_4569 =
																														(long)
																														(BgL_arg2644z00_3697);
																													BgL_restz00_3696 =
																														(BgL_offsetz00_3693
																														% BgL_auxz00_4569);
																											}}
																											{	/* Ast/dump.scm 304 */

																												BgL_method3371z00_3686 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3691,
																														(int)
																														(BgL_modz00_3694)),
																													(int)
																													(BgL_restz00_3696));
																				}}}}}}}}
																				BgL_arg3978z00_1916 =
																					PROCEDURE_ENTRY
																					(BgL_method3371z00_3686)
																					(BgL_method3371z00_3686,
																					(obj_t) (BgL_nodez00_3685), BEOA);
																	}}}
																	{	/* Ast/dump.scm 299 */
																		obj_t BgL_list3980z00_1918;

																		{	/* Ast/dump.scm 299 */
																			obj_t BgL_arg3981z00_1919;

																			BgL_arg3981z00_1919 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3980z00_1918 =
																				MAKE_PAIR(BgL_arg3978z00_1916,
																				BgL_arg3981z00_1919);
																		}
																		BgL_arg3976z00_1914 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3977z00_1915,
																			BgL_list3980z00_1918);
																}}
																BgL_arg3973z00_1910 =
																	MAKE_PAIR(BgL_arg3975z00_1913,
																	BgL_arg3976z00_1914);
														}}
														BgL_newtail3363z00_1908 =
															MAKE_PAIR(BgL_arg3973z00_1910, BNIL);
													}
													SET_CDR(BgL_tail3362z00_1905,
														BgL_newtail3363z00_1908);
													{
														obj_t BgL_tail3362z00_4587;

														obj_t BgL_l3359z00_4585;

														BgL_l3359z00_4585 = CDR(BgL_l3359z00_1904);
														BgL_tail3362z00_4587 = BgL_newtail3363z00_1908;
														BgL_tail3362z00_1905 = BgL_tail3362z00_4587;
														BgL_l3359z00_1904 = BgL_l3359z00_4585;
														goto BgL_zc3anonymousza33970ze3z83_1906;
													}
												}
										}
									}
							}
							{	/* Ast/dump.scm 307 */
								BgL_nodez00_bglt BgL_arg3998z00_1945;

								BgL_arg3998z00_1945 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1888))->
									BgL_bodyz00);
								{	/* Ast/dump.scm 307 */
									obj_t BgL_method3371z00_3718;

									{	/* Ast/dump.scm 307 */
										BgL_objectz00_bglt BgL_objz00_3719;

										BgL_objz00_3719 =
											(BgL_objectz00_bglt) (BgL_arg3998z00_1945);
										{	/* Ast/dump.scm 307 */
											long BgL_objzd2classzd2numz00_3720;

											BgL_objzd2classzd2numz00_3720 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3719);
											{	/* Ast/dump.scm 307 */
												obj_t BgL_arg2643z00_3721;

												BgL_arg2643z00_3721 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 307 */
													obj_t BgL_arrayz00_3723;

													int BgL_offsetz00_3724;

													BgL_arrayz00_3723 = BgL_arg2643z00_3721;
													BgL_offsetz00_3724 =
														(int) (BgL_objzd2classzd2numz00_3720);
													{	/* Ast/dump.scm 307 */
														long BgL_offsetz00_3725;

														BgL_offsetz00_3725 =
															((long) (BgL_offsetz00_3724) - OBJECT_TYPE);
														{	/* Ast/dump.scm 307 */
															long BgL_modz00_3726;

															{	/* Ast/dump.scm 307 */
																int BgL_arg2645z00_3727;

																BgL_arg2645z00_3727 = (int) (((long) 16));
																{	/* Ast/dump.scm 307 */
																	long BgL_auxz00_4597;

																	BgL_auxz00_4597 =
																		(long) (BgL_arg2645z00_3727);
																	BgL_modz00_3726 =
																		(BgL_offsetz00_3725 / BgL_auxz00_4597);
															}}
															{	/* Ast/dump.scm 307 */
																long BgL_restz00_3728;

																{	/* Ast/dump.scm 307 */
																	int BgL_arg2644z00_3729;

																	BgL_arg2644z00_3729 = (int) (((long) 16));
																	{	/* Ast/dump.scm 307 */
																		long BgL_auxz00_4601;

																		BgL_auxz00_4601 =
																			(long) (BgL_arg2644z00_3729);
																		BgL_restz00_3728 =
																			(BgL_offsetz00_3725 % BgL_auxz00_4601);
																}}
																{	/* Ast/dump.scm 307 */

																	BgL_method3371z00_3718 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3723,
																			(int) (BgL_modz00_3726)),
																		(int) (BgL_restz00_3728));
									}}}}}}}}
									BgL_arg3965z00_1896 =
										PROCEDURE_ENTRY(BgL_method3371z00_3718)
										(BgL_method3371z00_3718, (obj_t) (BgL_arg3998z00_1945),
										BEOA);
							}}
							{	/* Ast/dump.scm 298 */
								obj_t BgL_list3967z00_1898;

								{	/* Ast/dump.scm 298 */
									obj_t BgL_arg3968z00_1899;

									BgL_arg3968z00_1899 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3967z00_1898 =
										MAKE_PAIR(BgL_arg3965z00_1896, BgL_arg3968z00_1899);
								}
								BgL_arg3963z00_1894 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3964z00_1895, BgL_list3967z00_1898);
						}}
						BgL_arg3961z00_1892 =
							MAKE_PAIR(BgL_arg3962z00_1893, BgL_arg3963z00_1894);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3960z00_1891,
						BgL_arg3961z00_1892);
				}
			}
		}
	}



/* node->sexp-select3419 */
	obj_t BGl_nodezd2ze3sexpzd2select3419ze3zzast_dumpz00(obj_t BgL_envz00_4081,
		obj_t BgL_nodez00_4082)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 284 */
			{
				BgL_selectz00_bglt BgL_nodez00_1853;

				BgL_nodez00_1853 = (BgL_selectz00_bglt) (BgL_nodez00_4082);
				{	/* Ast/dump.scm 286 */
					obj_t BgL_arg3936z00_1856;

					obj_t BgL_arg3937z00_1857;

					{
						BgL_nodez00_bglt BgL_auxz00_4617;

						BgL_auxz00_4617 = (BgL_nodez00_bglt) (BgL_nodez00_1853);
						BgL_arg3936z00_1856 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_4617))->BgL_locz00);
					}
					{	/* Ast/dump.scm 287 */
						obj_t BgL_arg3938z00_1858;

						obj_t BgL_arg3939z00_1859;

						BgL_arg3938z00_1858 = CNST_TABLE_REF(((long) 8));
						{	/* Ast/dump.scm 287 */
							obj_t BgL_arg3940z00_1860;

							obj_t BgL_arg3941z00_1861;

							{	/* Ast/dump.scm 287 */
								BgL_nodez00_bglt BgL_arg3943z00_1863;

								BgL_arg3943z00_1863 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1853))->BgL_testz00);
								{	/* Ast/dump.scm 287 */
									obj_t BgL_method3371z00_3593;

									{	/* Ast/dump.scm 287 */
										BgL_objectz00_bglt BgL_objz00_3594;

										BgL_objz00_3594 =
											(BgL_objectz00_bglt) (BgL_arg3943z00_1863);
										{	/* Ast/dump.scm 287 */
											long BgL_objzd2classzd2numz00_3595;

											BgL_objzd2classzd2numz00_3595 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3594);
											{	/* Ast/dump.scm 287 */
												obj_t BgL_arg2643z00_3596;

												BgL_arg2643z00_3596 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 287 */
													obj_t BgL_arrayz00_3598;

													int BgL_offsetz00_3599;

													BgL_arrayz00_3598 = BgL_arg2643z00_3596;
													BgL_offsetz00_3599 =
														(int) (BgL_objzd2classzd2numz00_3595);
													{	/* Ast/dump.scm 287 */
														long BgL_offsetz00_3600;

														BgL_offsetz00_3600 =
															((long) (BgL_offsetz00_3599) - OBJECT_TYPE);
														{	/* Ast/dump.scm 287 */
															long BgL_modz00_3601;

															{	/* Ast/dump.scm 287 */
																int BgL_arg2645z00_3602;

																BgL_arg2645z00_3602 = (int) (((long) 16));
																{	/* Ast/dump.scm 287 */
																	long BgL_auxz00_4630;

																	BgL_auxz00_4630 =
																		(long) (BgL_arg2645z00_3602);
																	BgL_modz00_3601 =
																		(BgL_offsetz00_3600 / BgL_auxz00_4630);
															}}
															{	/* Ast/dump.scm 287 */
																long BgL_restz00_3603;

																{	/* Ast/dump.scm 287 */
																	int BgL_arg2644z00_3604;

																	BgL_arg2644z00_3604 = (int) (((long) 16));
																	{	/* Ast/dump.scm 287 */
																		long BgL_auxz00_4634;

																		BgL_auxz00_4634 =
																			(long) (BgL_arg2644z00_3604);
																		BgL_restz00_3603 =
																			(BgL_offsetz00_3600 % BgL_auxz00_4634);
																}}
																{	/* Ast/dump.scm 287 */

																	BgL_method3371z00_3593 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3598,
																			(int) (BgL_modz00_3601)),
																		(int) (BgL_restz00_3603));
									}}}}}}}}
									BgL_arg3940z00_1860 =
										PROCEDURE_ENTRY(BgL_method3371z00_3593)
										(BgL_method3371z00_3593, (obj_t) (BgL_arg3943z00_1863),
										BEOA);
							}}
							{	/* Ast/dump.scm 288 */
								obj_t BgL_arg3944z00_1864;

								{	/* Ast/dump.scm 288 */
									obj_t BgL_l3348z00_1866;

									BgL_l3348z00_1866 =
										(((BgL_selectz00_bglt) CREF(BgL_nodez00_1853))->
										BgL_clausesz00);
									if (NULLP(BgL_l3348z00_1866))
										{	/* Ast/dump.scm 288 */
											BgL_arg3944z00_1864 = BNIL;
										}
									else
										{	/* Ast/dump.scm 288 */
											obj_t BgL_head3350z00_1868;

											BgL_head3350z00_1868 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l3348z00_1870;

												obj_t BgL_tail3351z00_1871;

												BgL_l3348z00_1870 = BgL_l3348z00_1866;
												BgL_tail3351z00_1871 = BgL_head3350z00_1868;
											BgL_zc3anonymousza33947ze3z83_1872:
												if (NULLP(BgL_l3348z00_1870))
													{	/* Ast/dump.scm 288 */
														BgL_arg3944z00_1864 = CDR(BgL_head3350z00_1868);
													}
												else
													{	/* Ast/dump.scm 288 */
														obj_t BgL_newtail3352z00_1874;

														{	/* Ast/dump.scm 288 */
															obj_t BgL_arg3950z00_1876;

															{	/* Ast/dump.scm 288 */
																obj_t BgL_clausez00_1878;

																BgL_clausez00_1878 = CAR(BgL_l3348z00_1870);
																{	/* Ast/dump.scm 289 */
																	obj_t BgL_arg3953z00_1879;

																	obj_t BgL_arg3954z00_1880;

																	BgL_arg3953z00_1879 = CAR(BgL_clausez00_1878);
																	{	/* Ast/dump.scm 289 */
																		obj_t BgL_arg3955z00_1881;

																		{	/* Ast/dump.scm 289 */
																			obj_t BgL_arg3958z00_1884;

																			BgL_arg3958z00_1884 =
																				CDR(BgL_clausez00_1878);
																			{	/* Ast/dump.scm 289 */
																				BgL_nodez00_bglt BgL_nodez00_3627;

																				BgL_nodez00_3627 =
																					(BgL_nodez00_bglt)
																					(BgL_arg3958z00_1884);
																				{	/* Ast/dump.scm 289 */
																					obj_t BgL_method3371z00_3628;

																					{	/* Ast/dump.scm 289 */
																						BgL_objectz00_bglt BgL_objz00_3629;

																						BgL_objz00_3629 =
																							(BgL_objectz00_bglt)
																							(BgL_nodez00_3627);
																						{	/* Ast/dump.scm 289 */
																							long
																								BgL_objzd2classzd2numz00_3630;
																							BgL_objzd2classzd2numz00_3630 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_3629);
																							{	/* Ast/dump.scm 289 */
																								obj_t BgL_arg2643z00_3631;

																								BgL_arg2643z00_3631 =
																									PROCEDURE_REF
																									(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																									(int) (((long) 1)));
																								{	/* Ast/dump.scm 289 */
																									obj_t BgL_arrayz00_3633;

																									int BgL_offsetz00_3634;

																									BgL_arrayz00_3633 =
																										BgL_arg2643z00_3631;
																									BgL_offsetz00_3634 =
																										(int)
																										(BgL_objzd2classzd2numz00_3630);
																									{	/* Ast/dump.scm 289 */
																										long BgL_offsetz00_3635;

																										BgL_offsetz00_3635 =
																											(
																											(long)
																											(BgL_offsetz00_3634) -
																											OBJECT_TYPE);
																										{	/* Ast/dump.scm 289 */
																											long BgL_modz00_3636;

																											{	/* Ast/dump.scm 289 */
																												int BgL_arg2645z00_3637;

																												BgL_arg2645z00_3637 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 289 */
																													long BgL_auxz00_4663;

																													BgL_auxz00_4663 =
																														(long)
																														(BgL_arg2645z00_3637);
																													BgL_modz00_3636 =
																														(BgL_offsetz00_3635
																														/ BgL_auxz00_4663);
																											}}
																											{	/* Ast/dump.scm 289 */
																												long BgL_restz00_3638;

																												{	/* Ast/dump.scm 289 */
																													int
																														BgL_arg2644z00_3639;
																													BgL_arg2644z00_3639 =
																														(int) (((long) 16));
																													{	/* Ast/dump.scm 289 */
																														long
																															BgL_auxz00_4667;
																														BgL_auxz00_4667 =
																															(long)
																															(BgL_arg2644z00_3639);
																														BgL_restz00_3638 =
																															(BgL_offsetz00_3635
																															%
																															BgL_auxz00_4667);
																												}}
																												{	/* Ast/dump.scm 289 */

																													BgL_method3371z00_3628
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_3633,
																															(int)
																															(BgL_modz00_3636)),
																														(int)
																														(BgL_restz00_3638));
																					}}}}}}}}
																					BgL_arg3955z00_1881 =
																						PROCEDURE_ENTRY
																						(BgL_method3371z00_3628)
																						(BgL_method3371z00_3628,
																						(obj_t) (BgL_nodez00_3627), BEOA);
																		}}}
																		{	/* Ast/dump.scm 289 */
																			obj_t BgL_list3957z00_1883;

																			BgL_list3957z00_1883 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3954z00_1880 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3955z00_1881,
																				BgL_list3957z00_1883);
																	}}
																	BgL_arg3950z00_1876 =
																		MAKE_PAIR(BgL_arg3953z00_1879,
																		BgL_arg3954z00_1880);
															}}
															BgL_newtail3352z00_1874 =
																MAKE_PAIR(BgL_arg3950z00_1876, BNIL);
														}
														SET_CDR(BgL_tail3351z00_1871,
															BgL_newtail3352z00_1874);
														{
															obj_t BgL_tail3351z00_4684;

															obj_t BgL_l3348z00_4682;

															BgL_l3348z00_4682 = CDR(BgL_l3348z00_1870);
															BgL_tail3351z00_4684 = BgL_newtail3352z00_1874;
															BgL_tail3351z00_1871 = BgL_tail3351z00_4684;
															BgL_l3348z00_1870 = BgL_l3348z00_4682;
															goto BgL_zc3anonymousza33947ze3z83_1872;
														}
													}
											}
										}
								}
								BgL_arg3941z00_1861 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3944z00_1864, BNIL);
							}
							{	/* Ast/dump.scm 287 */
								obj_t BgL_list3942z00_1862;

								BgL_list3942z00_1862 = MAKE_PAIR(BgL_arg3941z00_1861, BNIL);
								BgL_arg3939z00_1859 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3940z00_1860, BgL_list3942z00_1862);
							}
						}
						BgL_arg3937z00_1857 =
							MAKE_PAIR(BgL_arg3938z00_1858, BgL_arg3939z00_1859);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3936z00_1856,
						BgL_arg3937z00_1857);
				}
			}
		}
	}



/* node->sexp-fail3417 */
	obj_t BGl_nodezd2ze3sexpzd2fail3417ze3zzast_dumpz00(obj_t BgL_envz00_4083,
		obj_t BgL_nodez00_4084)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 274 */
			{
				BgL_failz00_bglt BgL_nodez00_1834;

				BgL_nodez00_1834 = (BgL_failz00_bglt) (BgL_nodez00_4084);
				{	/* Ast/dump.scm 276 */
					obj_t BgL_arg3920z00_1837;

					obj_t BgL_arg3922z00_1838;

					{
						BgL_nodez00_bglt BgL_auxz00_4691;

						BgL_auxz00_4691 = (BgL_nodez00_bglt) (BgL_nodez00_1834);
						BgL_arg3920z00_1837 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_4691))->BgL_locz00);
					}
					{	/* Ast/dump.scm 277 */
						obj_t BgL_arg3923z00_1839;

						obj_t BgL_arg3924z00_1840;

						BgL_arg3923z00_1839 = CNST_TABLE_REF(((long) 9));
						{	/* Ast/dump.scm 277 */
							obj_t BgL_arg3925z00_1841;

							obj_t BgL_arg3926z00_1842;

							obj_t BgL_arg3927z00_1843;

							{	/* Ast/dump.scm 277 */
								BgL_nodez00_bglt BgL_arg3932z00_1848;

								BgL_arg3932z00_1848 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1834))->BgL_procz00);
								{	/* Ast/dump.scm 277 */
									obj_t BgL_method3371z00_3510;

									{	/* Ast/dump.scm 277 */
										BgL_objectz00_bglt BgL_objz00_3511;

										BgL_objz00_3511 =
											(BgL_objectz00_bglt) (BgL_arg3932z00_1848);
										{	/* Ast/dump.scm 277 */
											long BgL_objzd2classzd2numz00_3512;

											BgL_objzd2classzd2numz00_3512 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3511);
											{	/* Ast/dump.scm 277 */
												obj_t BgL_arg2643z00_3513;

												BgL_arg2643z00_3513 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 277 */
													obj_t BgL_arrayz00_3515;

													int BgL_offsetz00_3516;

													BgL_arrayz00_3515 = BgL_arg2643z00_3513;
													BgL_offsetz00_3516 =
														(int) (BgL_objzd2classzd2numz00_3512);
													{	/* Ast/dump.scm 277 */
														long BgL_offsetz00_3517;

														BgL_offsetz00_3517 =
															((long) (BgL_offsetz00_3516) - OBJECT_TYPE);
														{	/* Ast/dump.scm 277 */
															long BgL_modz00_3518;

															{	/* Ast/dump.scm 277 */
																int BgL_arg2645z00_3519;

																BgL_arg2645z00_3519 = (int) (((long) 16));
																{	/* Ast/dump.scm 277 */
																	long BgL_auxz00_4704;

																	BgL_auxz00_4704 =
																		(long) (BgL_arg2645z00_3519);
																	BgL_modz00_3518 =
																		(BgL_offsetz00_3517 / BgL_auxz00_4704);
															}}
															{	/* Ast/dump.scm 277 */
																long BgL_restz00_3520;

																{	/* Ast/dump.scm 277 */
																	int BgL_arg2644z00_3521;

																	BgL_arg2644z00_3521 = (int) (((long) 16));
																	{	/* Ast/dump.scm 277 */
																		long BgL_auxz00_4708;

																		BgL_auxz00_4708 =
																			(long) (BgL_arg2644z00_3521);
																		BgL_restz00_3520 =
																			(BgL_offsetz00_3517 % BgL_auxz00_4708);
																}}
																{	/* Ast/dump.scm 277 */

																	BgL_method3371z00_3510 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3515,
																			(int) (BgL_modz00_3518)),
																		(int) (BgL_restz00_3520));
									}}}}}}}}
									BgL_arg3925z00_1841 =
										PROCEDURE_ENTRY(BgL_method3371z00_3510)
										(BgL_method3371z00_3510, (obj_t) (BgL_arg3932z00_1848),
										BEOA);
							}}
							{	/* Ast/dump.scm 278 */
								BgL_nodez00_bglt BgL_arg3933z00_1849;

								BgL_arg3933z00_1849 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1834))->BgL_msgz00);
								{	/* Ast/dump.scm 278 */
									obj_t BgL_method3371z00_3537;

									{	/* Ast/dump.scm 278 */
										BgL_objectz00_bglt BgL_objz00_3538;

										BgL_objz00_3538 =
											(BgL_objectz00_bglt) (BgL_arg3933z00_1849);
										{	/* Ast/dump.scm 278 */
											long BgL_objzd2classzd2numz00_3539;

											BgL_objzd2classzd2numz00_3539 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3538);
											{	/* Ast/dump.scm 278 */
												obj_t BgL_arg2643z00_3540;

												BgL_arg2643z00_3540 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 278 */
													obj_t BgL_arrayz00_3542;

													int BgL_offsetz00_3543;

													BgL_arrayz00_3542 = BgL_arg2643z00_3540;
													BgL_offsetz00_3543 =
														(int) (BgL_objzd2classzd2numz00_3539);
													{	/* Ast/dump.scm 278 */
														long BgL_offsetz00_3544;

														BgL_offsetz00_3544 =
															((long) (BgL_offsetz00_3543) - OBJECT_TYPE);
														{	/* Ast/dump.scm 278 */
															long BgL_modz00_3545;

															{	/* Ast/dump.scm 278 */
																int BgL_arg2645z00_3546;

																BgL_arg2645z00_3546 = (int) (((long) 16));
																{	/* Ast/dump.scm 278 */
																	long BgL_auxz00_4727;

																	BgL_auxz00_4727 =
																		(long) (BgL_arg2645z00_3546);
																	BgL_modz00_3545 =
																		(BgL_offsetz00_3544 / BgL_auxz00_4727);
															}}
															{	/* Ast/dump.scm 278 */
																long BgL_restz00_3547;

																{	/* Ast/dump.scm 278 */
																	int BgL_arg2644z00_3548;

																	BgL_arg2644z00_3548 = (int) (((long) 16));
																	{	/* Ast/dump.scm 278 */
																		long BgL_auxz00_4731;

																		BgL_auxz00_4731 =
																			(long) (BgL_arg2644z00_3548);
																		BgL_restz00_3547 =
																			(BgL_offsetz00_3544 % BgL_auxz00_4731);
																}}
																{	/* Ast/dump.scm 278 */

																	BgL_method3371z00_3537 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3542,
																			(int) (BgL_modz00_3545)),
																		(int) (BgL_restz00_3547));
									}}}}}}}}
									BgL_arg3926z00_1842 =
										PROCEDURE_ENTRY(BgL_method3371z00_3537)
										(BgL_method3371z00_3537, (obj_t) (BgL_arg3933z00_1849),
										BEOA);
							}}
							{	/* Ast/dump.scm 279 */
								BgL_nodez00_bglt BgL_arg3934z00_1850;

								BgL_arg3934z00_1850 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1834))->BgL_objz00);
								{	/* Ast/dump.scm 279 */
									obj_t BgL_method3371z00_3564;

									{	/* Ast/dump.scm 279 */
										BgL_objectz00_bglt BgL_objz00_3565;

										BgL_objz00_3565 =
											(BgL_objectz00_bglt) (BgL_arg3934z00_1850);
										{	/* Ast/dump.scm 279 */
											long BgL_objzd2classzd2numz00_3566;

											BgL_objzd2classzd2numz00_3566 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3565);
											{	/* Ast/dump.scm 279 */
												obj_t BgL_arg2643z00_3567;

												BgL_arg2643z00_3567 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 279 */
													obj_t BgL_arrayz00_3569;

													int BgL_offsetz00_3570;

													BgL_arrayz00_3569 = BgL_arg2643z00_3567;
													BgL_offsetz00_3570 =
														(int) (BgL_objzd2classzd2numz00_3566);
													{	/* Ast/dump.scm 279 */
														long BgL_offsetz00_3571;

														BgL_offsetz00_3571 =
															((long) (BgL_offsetz00_3570) - OBJECT_TYPE);
														{	/* Ast/dump.scm 279 */
															long BgL_modz00_3572;

															{	/* Ast/dump.scm 279 */
																int BgL_arg2645z00_3573;

																BgL_arg2645z00_3573 = (int) (((long) 16));
																{	/* Ast/dump.scm 279 */
																	long BgL_auxz00_4750;

																	BgL_auxz00_4750 =
																		(long) (BgL_arg2645z00_3573);
																	BgL_modz00_3572 =
																		(BgL_offsetz00_3571 / BgL_auxz00_4750);
															}}
															{	/* Ast/dump.scm 279 */
																long BgL_restz00_3574;

																{	/* Ast/dump.scm 279 */
																	int BgL_arg2644z00_3575;

																	BgL_arg2644z00_3575 = (int) (((long) 16));
																	{	/* Ast/dump.scm 279 */
																		long BgL_auxz00_4754;

																		BgL_auxz00_4754 =
																			(long) (BgL_arg2644z00_3575);
																		BgL_restz00_3574 =
																			(BgL_offsetz00_3571 % BgL_auxz00_4754);
																}}
																{	/* Ast/dump.scm 279 */

																	BgL_method3371z00_3564 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3569,
																			(int) (BgL_modz00_3572)),
																		(int) (BgL_restz00_3574));
									}}}}}}}}
									BgL_arg3927z00_1843 =
										PROCEDURE_ENTRY(BgL_method3371z00_3564)
										(BgL_method3371z00_3564, (obj_t) (BgL_arg3934z00_1850),
										BEOA);
							}}
							{	/* Ast/dump.scm 277 */
								obj_t BgL_list3929z00_1845;

								{	/* Ast/dump.scm 277 */
									obj_t BgL_arg3930z00_1846;

									{	/* Ast/dump.scm 277 */
										obj_t BgL_arg3931z00_1847;

										BgL_arg3931z00_1847 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3930z00_1846 =
											MAKE_PAIR(BgL_arg3927z00_1843, BgL_arg3931z00_1847);
									}
									BgL_list3929z00_1845 =
										MAKE_PAIR(BgL_arg3926z00_1842, BgL_arg3930z00_1846);
								}
								BgL_arg3924z00_1840 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3925z00_1841, BgL_list3929z00_1845);
						}}
						BgL_arg3922z00_1838 =
							MAKE_PAIR(BgL_arg3923z00_1839, BgL_arg3924z00_1840);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3920z00_1837,
						BgL_arg3922z00_1838);
				}
			}
		}
	}



/* node->sexp-condition3415 */
	obj_t BGl_nodezd2ze3sexpzd2condition3415ze3zzast_dumpz00(obj_t
		BgL_envz00_4085, obj_t BgL_nodez00_4086)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 264 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1815;

				BgL_nodez00_1815 = (BgL_conditionalz00_bglt) (BgL_nodez00_4086);
				{	/* Ast/dump.scm 266 */
					obj_t BgL_arg3904z00_1818;

					obj_t BgL_arg3905z00_1819;

					{
						BgL_nodez00_bglt BgL_auxz00_4771;

						BgL_auxz00_4771 = (BgL_nodez00_bglt) (BgL_nodez00_1815);
						BgL_arg3904z00_1818 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_4771))->BgL_locz00);
					}
					{	/* Ast/dump.scm 267 */
						obj_t BgL_arg3906z00_1820;

						obj_t BgL_arg3908z00_1821;

						BgL_arg3906z00_1820 = CNST_TABLE_REF(((long) 10));
						{	/* Ast/dump.scm 267 */
							obj_t BgL_arg3909z00_1822;

							obj_t BgL_arg3910z00_1823;

							obj_t BgL_arg3911z00_1824;

							{	/* Ast/dump.scm 267 */
								BgL_nodez00_bglt BgL_arg3916z00_1829;

								BgL_arg3916z00_1829 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1815))->
									BgL_testz00);
								{	/* Ast/dump.scm 267 */
									obj_t BgL_method3371z00_3427;

									{	/* Ast/dump.scm 267 */
										BgL_objectz00_bglt BgL_objz00_3428;

										BgL_objz00_3428 =
											(BgL_objectz00_bglt) (BgL_arg3916z00_1829);
										{	/* Ast/dump.scm 267 */
											long BgL_objzd2classzd2numz00_3429;

											BgL_objzd2classzd2numz00_3429 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3428);
											{	/* Ast/dump.scm 267 */
												obj_t BgL_arg2643z00_3430;

												BgL_arg2643z00_3430 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 267 */
													obj_t BgL_arrayz00_3432;

													int BgL_offsetz00_3433;

													BgL_arrayz00_3432 = BgL_arg2643z00_3430;
													BgL_offsetz00_3433 =
														(int) (BgL_objzd2classzd2numz00_3429);
													{	/* Ast/dump.scm 267 */
														long BgL_offsetz00_3434;

														BgL_offsetz00_3434 =
															((long) (BgL_offsetz00_3433) - OBJECT_TYPE);
														{	/* Ast/dump.scm 267 */
															long BgL_modz00_3435;

															{	/* Ast/dump.scm 267 */
																int BgL_arg2645z00_3436;

																BgL_arg2645z00_3436 = (int) (((long) 16));
																{	/* Ast/dump.scm 267 */
																	long BgL_auxz00_4784;

																	BgL_auxz00_4784 =
																		(long) (BgL_arg2645z00_3436);
																	BgL_modz00_3435 =
																		(BgL_offsetz00_3434 / BgL_auxz00_4784);
															}}
															{	/* Ast/dump.scm 267 */
																long BgL_restz00_3437;

																{	/* Ast/dump.scm 267 */
																	int BgL_arg2644z00_3438;

																	BgL_arg2644z00_3438 = (int) (((long) 16));
																	{	/* Ast/dump.scm 267 */
																		long BgL_auxz00_4788;

																		BgL_auxz00_4788 =
																			(long) (BgL_arg2644z00_3438);
																		BgL_restz00_3437 =
																			(BgL_offsetz00_3434 % BgL_auxz00_4788);
																}}
																{	/* Ast/dump.scm 267 */

																	BgL_method3371z00_3427 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3432,
																			(int) (BgL_modz00_3435)),
																		(int) (BgL_restz00_3437));
									}}}}}}}}
									BgL_arg3909z00_1822 =
										PROCEDURE_ENTRY(BgL_method3371z00_3427)
										(BgL_method3371z00_3427, (obj_t) (BgL_arg3916z00_1829),
										BEOA);
							}}
							{	/* Ast/dump.scm 268 */
								BgL_nodez00_bglt BgL_arg3917z00_1830;

								BgL_arg3917z00_1830 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1815))->
									BgL_truez00);
								{	/* Ast/dump.scm 268 */
									obj_t BgL_method3371z00_3454;

									{	/* Ast/dump.scm 268 */
										BgL_objectz00_bglt BgL_objz00_3455;

										BgL_objz00_3455 =
											(BgL_objectz00_bglt) (BgL_arg3917z00_1830);
										{	/* Ast/dump.scm 268 */
											long BgL_objzd2classzd2numz00_3456;

											BgL_objzd2classzd2numz00_3456 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3455);
											{	/* Ast/dump.scm 268 */
												obj_t BgL_arg2643z00_3457;

												BgL_arg2643z00_3457 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 268 */
													obj_t BgL_arrayz00_3459;

													int BgL_offsetz00_3460;

													BgL_arrayz00_3459 = BgL_arg2643z00_3457;
													BgL_offsetz00_3460 =
														(int) (BgL_objzd2classzd2numz00_3456);
													{	/* Ast/dump.scm 268 */
														long BgL_offsetz00_3461;

														BgL_offsetz00_3461 =
															((long) (BgL_offsetz00_3460) - OBJECT_TYPE);
														{	/* Ast/dump.scm 268 */
															long BgL_modz00_3462;

															{	/* Ast/dump.scm 268 */
																int BgL_arg2645z00_3463;

																BgL_arg2645z00_3463 = (int) (((long) 16));
																{	/* Ast/dump.scm 268 */
																	long BgL_auxz00_4807;

																	BgL_auxz00_4807 =
																		(long) (BgL_arg2645z00_3463);
																	BgL_modz00_3462 =
																		(BgL_offsetz00_3461 / BgL_auxz00_4807);
															}}
															{	/* Ast/dump.scm 268 */
																long BgL_restz00_3464;

																{	/* Ast/dump.scm 268 */
																	int BgL_arg2644z00_3465;

																	BgL_arg2644z00_3465 = (int) (((long) 16));
																	{	/* Ast/dump.scm 268 */
																		long BgL_auxz00_4811;

																		BgL_auxz00_4811 =
																			(long) (BgL_arg2644z00_3465);
																		BgL_restz00_3464 =
																			(BgL_offsetz00_3461 % BgL_auxz00_4811);
																}}
																{	/* Ast/dump.scm 268 */

																	BgL_method3371z00_3454 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3459,
																			(int) (BgL_modz00_3462)),
																		(int) (BgL_restz00_3464));
									}}}}}}}}
									BgL_arg3910z00_1823 =
										PROCEDURE_ENTRY(BgL_method3371z00_3454)
										(BgL_method3371z00_3454, (obj_t) (BgL_arg3917z00_1830),
										BEOA);
							}}
							{	/* Ast/dump.scm 269 */
								BgL_nodez00_bglt BgL_arg3918z00_1831;

								BgL_arg3918z00_1831 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1815))->
									BgL_falsez00);
								{	/* Ast/dump.scm 269 */
									obj_t BgL_method3371z00_3481;

									{	/* Ast/dump.scm 269 */
										BgL_objectz00_bglt BgL_objz00_3482;

										BgL_objz00_3482 =
											(BgL_objectz00_bglt) (BgL_arg3918z00_1831);
										{	/* Ast/dump.scm 269 */
											long BgL_objzd2classzd2numz00_3483;

											BgL_objzd2classzd2numz00_3483 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3482);
											{	/* Ast/dump.scm 269 */
												obj_t BgL_arg2643z00_3484;

												BgL_arg2643z00_3484 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 269 */
													obj_t BgL_arrayz00_3486;

													int BgL_offsetz00_3487;

													BgL_arrayz00_3486 = BgL_arg2643z00_3484;
													BgL_offsetz00_3487 =
														(int) (BgL_objzd2classzd2numz00_3483);
													{	/* Ast/dump.scm 269 */
														long BgL_offsetz00_3488;

														BgL_offsetz00_3488 =
															((long) (BgL_offsetz00_3487) - OBJECT_TYPE);
														{	/* Ast/dump.scm 269 */
															long BgL_modz00_3489;

															{	/* Ast/dump.scm 269 */
																int BgL_arg2645z00_3490;

																BgL_arg2645z00_3490 = (int) (((long) 16));
																{	/* Ast/dump.scm 269 */
																	long BgL_auxz00_4830;

																	BgL_auxz00_4830 =
																		(long) (BgL_arg2645z00_3490);
																	BgL_modz00_3489 =
																		(BgL_offsetz00_3488 / BgL_auxz00_4830);
															}}
															{	/* Ast/dump.scm 269 */
																long BgL_restz00_3491;

																{	/* Ast/dump.scm 269 */
																	int BgL_arg2644z00_3492;

																	BgL_arg2644z00_3492 = (int) (((long) 16));
																	{	/* Ast/dump.scm 269 */
																		long BgL_auxz00_4834;

																		BgL_auxz00_4834 =
																			(long) (BgL_arg2644z00_3492);
																		BgL_restz00_3491 =
																			(BgL_offsetz00_3488 % BgL_auxz00_4834);
																}}
																{	/* Ast/dump.scm 269 */

																	BgL_method3371z00_3481 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3486,
																			(int) (BgL_modz00_3489)),
																		(int) (BgL_restz00_3491));
									}}}}}}}}
									BgL_arg3911z00_1824 =
										PROCEDURE_ENTRY(BgL_method3371z00_3481)
										(BgL_method3371z00_3481, (obj_t) (BgL_arg3918z00_1831),
										BEOA);
							}}
							{	/* Ast/dump.scm 267 */
								obj_t BgL_list3913z00_1826;

								{	/* Ast/dump.scm 267 */
									obj_t BgL_arg3914z00_1827;

									{	/* Ast/dump.scm 267 */
										obj_t BgL_arg3915z00_1828;

										BgL_arg3915z00_1828 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3914z00_1827 =
											MAKE_PAIR(BgL_arg3911z00_1824, BgL_arg3915z00_1828);
									}
									BgL_list3913z00_1826 =
										MAKE_PAIR(BgL_arg3910z00_1823, BgL_arg3914z00_1827);
								}
								BgL_arg3908z00_1821 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3909z00_1822, BgL_list3913z00_1826);
						}}
						BgL_arg3905z00_1819 =
							MAKE_PAIR(BgL_arg3906z00_1820, BgL_arg3908z00_1821);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3904z00_1818,
						BgL_arg3905z00_1819);
				}
			}
		}
	}



/* node->sexp-setq3412 */
	obj_t BGl_nodezd2ze3sexpzd2setq3412ze3zzast_dumpz00(obj_t BgL_envz00_4087,
		obj_t BgL_nodez00_4088)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 255 */
			{
				BgL_setqz00_bglt BgL_nodez00_1799;

				BgL_nodez00_1799 = (BgL_setqz00_bglt) (BgL_nodez00_4088);
				{	/* Ast/dump.scm 257 */
					obj_t BgL_arg3892z00_1802;

					obj_t BgL_arg3893z00_1803;

					{
						BgL_nodez00_bglt BgL_auxz00_4851;

						BgL_auxz00_4851 = (BgL_nodez00_bglt) (BgL_nodez00_1799);
						BgL_arg3892z00_1802 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_4851))->BgL_locz00);
					}
					{	/* Ast/dump.scm 258 */
						obj_t BgL_arg3894z00_1804;

						obj_t BgL_arg3895z00_1805;

						BgL_arg3894z00_1804 = CNST_TABLE_REF(((long) 11));
						{	/* Ast/dump.scm 258 */
							obj_t BgL_arg3896z00_1806;

							obj_t BgL_arg3897z00_1807;

							{	/* Ast/dump.scm 258 */
								BgL_varz00_bglt BgL_arg3901z00_1811;

								BgL_arg3901z00_1811 =
									(((BgL_setqz00_bglt) CREF(BgL_nodez00_1799))->BgL_varz00);
								{	/* Ast/dump.scm 258 */
									BgL_nodez00_bglt BgL_nodez00_3370;

									BgL_nodez00_3370 = (BgL_nodez00_bglt) (BgL_arg3901z00_1811);
									{	/* Ast/dump.scm 258 */
										obj_t BgL_method3371z00_3371;

										{	/* Ast/dump.scm 258 */
											BgL_objectz00_bglt BgL_objz00_3372;

											BgL_objz00_3372 = (BgL_objectz00_bglt) (BgL_nodez00_3370);
											{	/* Ast/dump.scm 258 */
												long BgL_objzd2classzd2numz00_3373;

												BgL_objzd2classzd2numz00_3373 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3372);
												{	/* Ast/dump.scm 258 */
													obj_t BgL_arg2643z00_3374;

													BgL_arg2643z00_3374 =
														PROCEDURE_REF
														(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
														(int) (((long) 1)));
													{	/* Ast/dump.scm 258 */
														obj_t BgL_arrayz00_3376;

														int BgL_offsetz00_3377;

														BgL_arrayz00_3376 = BgL_arg2643z00_3374;
														BgL_offsetz00_3377 =
															(int) (BgL_objzd2classzd2numz00_3373);
														{	/* Ast/dump.scm 258 */
															long BgL_offsetz00_3378;

															BgL_offsetz00_3378 =
																((long) (BgL_offsetz00_3377) - OBJECT_TYPE);
															{	/* Ast/dump.scm 258 */
																long BgL_modz00_3379;

																{	/* Ast/dump.scm 258 */
																	int BgL_arg2645z00_3380;

																	BgL_arg2645z00_3380 = (int) (((long) 16));
																	{	/* Ast/dump.scm 258 */
																		long BgL_auxz00_4865;

																		BgL_auxz00_4865 =
																			(long) (BgL_arg2645z00_3380);
																		BgL_modz00_3379 =
																			(BgL_offsetz00_3378 / BgL_auxz00_4865);
																}}
																{	/* Ast/dump.scm 258 */
																	long BgL_restz00_3381;

																	{	/* Ast/dump.scm 258 */
																		int BgL_arg2644z00_3382;

																		BgL_arg2644z00_3382 = (int) (((long) 16));
																		{	/* Ast/dump.scm 258 */
																			long BgL_auxz00_4869;

																			BgL_auxz00_4869 =
																				(long) (BgL_arg2644z00_3382);
																			BgL_restz00_3381 =
																				(BgL_offsetz00_3378 % BgL_auxz00_4869);
																	}}
																	{	/* Ast/dump.scm 258 */

																		BgL_method3371z00_3371 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3376,
																				(int) (BgL_modz00_3379)),
																			(int) (BgL_restz00_3381));
										}}}}}}}}
										BgL_arg3896z00_1806 =
											PROCEDURE_ENTRY(BgL_method3371z00_3371)
											(BgL_method3371z00_3371, (obj_t) (BgL_nodez00_3370),
											BEOA);
							}}}
							{	/* Ast/dump.scm 259 */
								BgL_nodez00_bglt BgL_arg3902z00_1812;

								BgL_arg3902z00_1812 =
									(((BgL_setqz00_bglt) CREF(BgL_nodez00_1799))->BgL_valuez00);
								{	/* Ast/dump.scm 259 */
									obj_t BgL_method3371z00_3398;

									{	/* Ast/dump.scm 259 */
										BgL_objectz00_bglt BgL_objz00_3399;

										BgL_objz00_3399 =
											(BgL_objectz00_bglt) (BgL_arg3902z00_1812);
										{	/* Ast/dump.scm 259 */
											long BgL_objzd2classzd2numz00_3400;

											BgL_objzd2classzd2numz00_3400 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3399);
											{	/* Ast/dump.scm 259 */
												obj_t BgL_arg2643z00_3401;

												BgL_arg2643z00_3401 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 259 */
													obj_t BgL_arrayz00_3403;

													int BgL_offsetz00_3404;

													BgL_arrayz00_3403 = BgL_arg2643z00_3401;
													BgL_offsetz00_3404 =
														(int) (BgL_objzd2classzd2numz00_3400);
													{	/* Ast/dump.scm 259 */
														long BgL_offsetz00_3405;

														BgL_offsetz00_3405 =
															((long) (BgL_offsetz00_3404) - OBJECT_TYPE);
														{	/* Ast/dump.scm 259 */
															long BgL_modz00_3406;

															{	/* Ast/dump.scm 259 */
																int BgL_arg2645z00_3407;

																BgL_arg2645z00_3407 = (int) (((long) 16));
																{	/* Ast/dump.scm 259 */
																	long BgL_auxz00_4888;

																	BgL_auxz00_4888 =
																		(long) (BgL_arg2645z00_3407);
																	BgL_modz00_3406 =
																		(BgL_offsetz00_3405 / BgL_auxz00_4888);
															}}
															{	/* Ast/dump.scm 259 */
																long BgL_restz00_3408;

																{	/* Ast/dump.scm 259 */
																	int BgL_arg2644z00_3409;

																	BgL_arg2644z00_3409 = (int) (((long) 16));
																	{	/* Ast/dump.scm 259 */
																		long BgL_auxz00_4892;

																		BgL_auxz00_4892 =
																			(long) (BgL_arg2644z00_3409);
																		BgL_restz00_3408 =
																			(BgL_offsetz00_3405 % BgL_auxz00_4892);
																}}
																{	/* Ast/dump.scm 259 */

																	BgL_method3371z00_3398 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3403,
																			(int) (BgL_modz00_3406)),
																		(int) (BgL_restz00_3408));
									}}}}}}}}
									BgL_arg3897z00_1807 =
										PROCEDURE_ENTRY(BgL_method3371z00_3398)
										(BgL_method3371z00_3398, (obj_t) (BgL_arg3902z00_1812),
										BEOA);
							}}
							{	/* Ast/dump.scm 258 */
								obj_t BgL_list3899z00_1809;

								{	/* Ast/dump.scm 258 */
									obj_t BgL_arg3900z00_1810;

									BgL_arg3900z00_1810 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3899z00_1809 =
										MAKE_PAIR(BgL_arg3897z00_1807, BgL_arg3900z00_1810);
								}
								BgL_arg3895z00_1805 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3896z00_1806, BgL_list3899z00_1809);
						}}
						BgL_arg3893z00_1803 =
							MAKE_PAIR(BgL_arg3894z00_1804, BgL_arg3895z00_1805);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3892z00_1802,
						BgL_arg3893z00_1803);
				}
			}
		}
	}



/* node->sexp-cast3409 */
	obj_t BGl_nodezd2ze3sexpzd2cast3409ze3zzast_dumpz00(obj_t BgL_envz00_4089,
		obj_t BgL_nodez00_4090)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 247 */
			{
				BgL_castz00_bglt BgL_nodez00_1784;

				BgL_nodez00_1784 = (BgL_castz00_bglt) (BgL_nodez00_4090);
				{	/* Ast/dump.scm 250 */
					obj_t BgL_arg3882z00_1788;

					obj_t BgL_arg3883z00_1789;

					{	/* Ast/dump.scm 250 */
						obj_t BgL_arg3884z00_1790;

						obj_t BgL_arg3885z00_1791;

						BgL_arg3884z00_1790 = CNST_TABLE_REF(((long) 12));
						{	/* Ast/dump.scm 250 */
							BgL_typez00_bglt BgL_obj1508z00_3339;

							{
								BgL_nodez00_bglt BgL_auxz00_4909;

								BgL_auxz00_4909 = (BgL_nodez00_bglt) (BgL_nodez00_1784);
								BgL_obj1508z00_3339 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4909))->BgL_typez00);
							}
							BgL_arg3885z00_1791 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_3339))->BgL_idz00);
						}
						BgL_arg3882z00_1788 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg3884z00_1790,
							BgL_arg3885z00_1791);
					}
					{	/* Ast/dump.scm 250 */
						obj_t BgL_arg3887z00_1793;

						{	/* Ast/dump.scm 250 */
							BgL_nodez00_bglt BgL_arg3890z00_1796;

							BgL_arg3890z00_1796 =
								(((BgL_castz00_bglt) CREF(BgL_nodez00_1784))->BgL_argz00);
							{	/* Ast/dump.scm 250 */
								obj_t BgL_method3371z00_3342;

								{	/* Ast/dump.scm 250 */
									BgL_objectz00_bglt BgL_objz00_3343;

									BgL_objz00_3343 = (BgL_objectz00_bglt) (BgL_arg3890z00_1796);
									{	/* Ast/dump.scm 250 */
										long BgL_objzd2classzd2numz00_3344;

										BgL_objzd2classzd2numz00_3344 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3343);
										{	/* Ast/dump.scm 250 */
											obj_t BgL_arg2643z00_3345;

											BgL_arg2643z00_3345 =
												PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
												(int) (((long) 1)));
											{	/* Ast/dump.scm 250 */
												obj_t BgL_arrayz00_3347;

												int BgL_offsetz00_3348;

												BgL_arrayz00_3347 = BgL_arg2643z00_3345;
												BgL_offsetz00_3348 =
													(int) (BgL_objzd2classzd2numz00_3344);
												{	/* Ast/dump.scm 250 */
													long BgL_offsetz00_3349;

													BgL_offsetz00_3349 =
														((long) (BgL_offsetz00_3348) - OBJECT_TYPE);
													{	/* Ast/dump.scm 250 */
														long BgL_modz00_3350;

														{	/* Ast/dump.scm 250 */
															int BgL_arg2645z00_3351;

															BgL_arg2645z00_3351 = (int) (((long) 16));
															{	/* Ast/dump.scm 250 */
																long BgL_auxz00_4923;

																BgL_auxz00_4923 = (long) (BgL_arg2645z00_3351);
																BgL_modz00_3350 =
																	(BgL_offsetz00_3349 / BgL_auxz00_4923);
														}}
														{	/* Ast/dump.scm 250 */
															long BgL_restz00_3352;

															{	/* Ast/dump.scm 250 */
																int BgL_arg2644z00_3353;

																BgL_arg2644z00_3353 = (int) (((long) 16));
																{	/* Ast/dump.scm 250 */
																	long BgL_auxz00_4927;

																	BgL_auxz00_4927 =
																		(long) (BgL_arg2644z00_3353);
																	BgL_restz00_3352 =
																		(BgL_offsetz00_3349 % BgL_auxz00_4927);
															}}
															{	/* Ast/dump.scm 250 */

																BgL_method3371z00_3342 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3347,
																		(int) (BgL_modz00_3350)),
																	(int) (BgL_restz00_3352));
								}}}}}}}}
								BgL_arg3887z00_1793 =
									PROCEDURE_ENTRY(BgL_method3371z00_3342)
									(BgL_method3371z00_3342, (obj_t) (BgL_arg3890z00_1796), BEOA);
						}}
						{	/* Ast/dump.scm 250 */
							obj_t BgL_list3889z00_1795;

							BgL_list3889z00_1795 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3883z00_1789 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3887z00_1793,
								BgL_list3889z00_1795);
					}}
					return MAKE_PAIR(BgL_arg3882z00_1788, BgL_arg3883z00_1789);
				}
			}
		}
	}



/* node->sexp-cast-null3407 */
	obj_t BGl_nodezd2ze3sexpzd2castzd2null3407z31zzast_dumpz00(obj_t
		BgL_envz00_4091, obj_t BgL_nodez00_4092)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 239 */
			{
				BgL_castzd2nullzd2_bglt BgL_nodez00_1772;

				BgL_nodez00_1772 = (BgL_castzd2nullzd2_bglt) (BgL_nodez00_4092);
				{	/* Ast/dump.scm 242 */
					obj_t BgL_arg3875z00_1776;

					obj_t BgL_arg3876z00_1777;

					BgL_arg3875z00_1776 = CNST_TABLE_REF(((long) 13));
					{	/* Ast/dump.scm 242 */
						obj_t BgL_arg3877z00_1778;

						{	/* Ast/dump.scm 242 */
							BgL_typez00_bglt BgL_obj1508z00_3336;

							{
								BgL_nodez00_bglt BgL_auxz00_4942;

								BgL_auxz00_4942 = (BgL_nodez00_bglt) (BgL_nodez00_1772);
								BgL_obj1508z00_3336 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4942))->BgL_typez00);
							}
							BgL_arg3877z00_1778 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_3336))->BgL_idz00);
						}
						{	/* Ast/dump.scm 242 */
							obj_t BgL_list3879z00_1780;

							BgL_list3879z00_1780 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3876z00_1777 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3877z00_1778,
								BgL_list3879z00_1780);
					}}
					return MAKE_PAIR(BgL_arg3875z00_1776, BgL_arg3876z00_1777);
				}
			}
		}
	}



/* node->sexp-isa3405 */
	obj_t BGl_nodezd2ze3sexpzd2isa3405ze3zzast_dumpz00(obj_t BgL_envz00_4093,
		obj_t BgL_nodez00_4094)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 231 */
			{
				BgL_isaz00_bglt BgL_nodez00_1756;

				BgL_nodez00_1756 = (BgL_isaz00_bglt) (BgL_nodez00_4094);
				{	/* Ast/dump.scm 234 */
					obj_t BgL_arg3864z00_1760;

					obj_t BgL_arg3865z00_1761;

					BgL_arg3864z00_1760 = CNST_TABLE_REF(((long) 14));
					{	/* Ast/dump.scm 234 */
						obj_t BgL_arg3866z00_1762;

						obj_t BgL_arg3867z00_1763;

						{	/* Ast/dump.scm 234 */
							BgL_typez00_bglt BgL_obj1508z00_3305;

							BgL_obj1508z00_3305 =
								(((BgL_isaz00_bglt) CREF(BgL_nodez00_1756))->BgL_classz00);
							BgL_arg3866z00_1762 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_3305))->BgL_idz00);
						}
						{	/* Ast/dump.scm 234 */
							obj_t BgL_arg3872z00_1768;

							{	/* Ast/dump.scm 234 */
								obj_t BgL_pairz00_3307;

								{
									BgL_externz00_bglt BgL_auxz00_4953;

									BgL_auxz00_4953 = (BgL_externz00_bglt) (BgL_nodez00_1756);
									BgL_pairz00_3307 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4953))->
										BgL_exprza2za2);
								}
								BgL_arg3872z00_1768 = CAR(BgL_pairz00_3307);
							}
							{	/* Ast/dump.scm 234 */
								BgL_nodez00_bglt BgL_nodez00_3308;

								BgL_nodez00_3308 = (BgL_nodez00_bglt) (BgL_arg3872z00_1768);
								{	/* Ast/dump.scm 234 */
									obj_t BgL_method3371z00_3309;

									{	/* Ast/dump.scm 234 */
										BgL_objectz00_bglt BgL_objz00_3310;

										BgL_objz00_3310 = (BgL_objectz00_bglt) (BgL_nodez00_3308);
										{	/* Ast/dump.scm 234 */
											long BgL_objzd2classzd2numz00_3311;

											BgL_objzd2classzd2numz00_3311 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3310);
											{	/* Ast/dump.scm 234 */
												obj_t BgL_arg2643z00_3312;

												BgL_arg2643z00_3312 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 234 */
													obj_t BgL_arrayz00_3314;

													int BgL_offsetz00_3315;

													BgL_arrayz00_3314 = BgL_arg2643z00_3312;
													BgL_offsetz00_3315 =
														(int) (BgL_objzd2classzd2numz00_3311);
													{	/* Ast/dump.scm 234 */
														long BgL_offsetz00_3316;

														BgL_offsetz00_3316 =
															((long) (BgL_offsetz00_3315) - OBJECT_TYPE);
														{	/* Ast/dump.scm 234 */
															long BgL_modz00_3317;

															{	/* Ast/dump.scm 234 */
																int BgL_arg2645z00_3318;

																BgL_arg2645z00_3318 = (int) (((long) 16));
																{	/* Ast/dump.scm 234 */
																	long BgL_auxz00_4966;

																	BgL_auxz00_4966 =
																		(long) (BgL_arg2645z00_3318);
																	BgL_modz00_3317 =
																		(BgL_offsetz00_3316 / BgL_auxz00_4966);
															}}
															{	/* Ast/dump.scm 234 */
																long BgL_restz00_3319;

																{	/* Ast/dump.scm 234 */
																	int BgL_arg2644z00_3320;

																	BgL_arg2644z00_3320 = (int) (((long) 16));
																	{	/* Ast/dump.scm 234 */
																		long BgL_auxz00_4970;

																		BgL_auxz00_4970 =
																			(long) (BgL_arg2644z00_3320);
																		BgL_restz00_3319 =
																			(BgL_offsetz00_3316 % BgL_auxz00_4970);
																}}
																{	/* Ast/dump.scm 234 */

																	BgL_method3371z00_3309 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3314,
																			(int) (BgL_modz00_3317)),
																		(int) (BgL_restz00_3319));
									}}}}}}}}
									BgL_arg3867z00_1763 =
										PROCEDURE_ENTRY(BgL_method3371z00_3309)
										(BgL_method3371z00_3309, (obj_t) (BgL_nodez00_3308), BEOA);
						}}}
						{	/* Ast/dump.scm 234 */
							obj_t BgL_list3869z00_1765;

							{	/* Ast/dump.scm 234 */
								obj_t BgL_arg3870z00_1766;

								BgL_arg3870z00_1766 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3869z00_1765 =
									MAKE_PAIR(BgL_arg3867z00_1763, BgL_arg3870z00_1766);
							}
							BgL_arg3865z00_1761 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3866z00_1762,
								BgL_list3869z00_1765);
					}}
					return MAKE_PAIR(BgL_arg3864z00_1760, BgL_arg3865z00_1761);
				}
			}
		}
	}



/* node->sexp-valloc3403 */
	obj_t BGl_nodezd2ze3sexpzd2valloc3403ze3zzast_dumpz00(obj_t BgL_envz00_4095,
		obj_t BgL_nodez00_4096)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 223 */
			{
				BgL_vallocz00_bglt BgL_nodez00_1728;

				BgL_nodez00_1728 = (BgL_vallocz00_bglt) (BgL_nodez00_4096);
				{	/* Ast/dump.scm 226 */
					obj_t BgL_arg3849z00_1732;

					obj_t BgL_arg3850z00_1733;

					BgL_arg3849z00_1732 = CNST_TABLE_REF(((long) 15));
					{	/* Ast/dump.scm 226 */
						obj_t BgL_arg3851z00_1734;

						{	/* Ast/dump.scm 226 */
							obj_t BgL_l3342z00_1736;

							{
								BgL_externz00_bglt BgL_auxz00_4986;

								BgL_auxz00_4986 = (BgL_externz00_bglt) (BgL_nodez00_1728);
								BgL_l3342z00_1736 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4986))->
									BgL_exprza2za2);
							}
							if (NULLP(BgL_l3342z00_1736))
								{	/* Ast/dump.scm 226 */
									BgL_arg3851z00_1734 = BNIL;
								}
							else
								{	/* Ast/dump.scm 226 */
									obj_t BgL_head3344z00_1738;

									{	/* Ast/dump.scm 226 */
										obj_t BgL_arg3860z00_1751;

										{	/* Ast/dump.scm 226 */
											obj_t BgL_arg3862z00_1753;

											BgL_arg3862z00_1753 = CAR(BgL_l3342z00_1736);
											{	/* Ast/dump.scm 226 */
												BgL_nodez00_bglt BgL_nodez00_3241;

												BgL_nodez00_3241 =
													(BgL_nodez00_bglt) (BgL_arg3862z00_1753);
												{	/* Ast/dump.scm 226 */
													obj_t BgL_method3371z00_3242;

													{	/* Ast/dump.scm 226 */
														BgL_objectz00_bglt BgL_objz00_3243;

														BgL_objz00_3243 =
															(BgL_objectz00_bglt) (BgL_nodez00_3241);
														{	/* Ast/dump.scm 226 */
															long BgL_objzd2classzd2numz00_3244;

															BgL_objzd2classzd2numz00_3244 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3243);
															{	/* Ast/dump.scm 226 */
																obj_t BgL_arg2643z00_3245;

																BgL_arg2643z00_3245 =
																	PROCEDURE_REF
																	(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																	(int) (((long) 1)));
																{	/* Ast/dump.scm 226 */
																	obj_t BgL_arrayz00_3247;

																	int BgL_offsetz00_3248;

																	BgL_arrayz00_3247 = BgL_arg2643z00_3245;
																	BgL_offsetz00_3248 =
																		(int) (BgL_objzd2classzd2numz00_3244);
																	{	/* Ast/dump.scm 226 */
																		long BgL_offsetz00_3249;

																		BgL_offsetz00_3249 =
																			(
																			(long) (BgL_offsetz00_3248) -
																			OBJECT_TYPE);
																		{	/* Ast/dump.scm 226 */
																			long BgL_modz00_3250;

																			{	/* Ast/dump.scm 226 */
																				int BgL_arg2645z00_3251;

																				BgL_arg2645z00_3251 =
																					(int) (((long) 16));
																				{	/* Ast/dump.scm 226 */
																					long BgL_auxz00_5001;

																					BgL_auxz00_5001 =
																						(long) (BgL_arg2645z00_3251);
																					BgL_modz00_3250 =
																						(BgL_offsetz00_3249 /
																						BgL_auxz00_5001);
																			}}
																			{	/* Ast/dump.scm 226 */
																				long BgL_restz00_3252;

																				{	/* Ast/dump.scm 226 */
																					int BgL_arg2644z00_3253;

																					BgL_arg2644z00_3253 =
																						(int) (((long) 16));
																					{	/* Ast/dump.scm 226 */
																						long BgL_auxz00_5005;

																						BgL_auxz00_5005 =
																							(long) (BgL_arg2644z00_3253);
																						BgL_restz00_3252 =
																							(BgL_offsetz00_3249 %
																							BgL_auxz00_5005);
																				}}
																				{	/* Ast/dump.scm 226 */

																					BgL_method3371z00_3242 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3247,
																							(int) (BgL_modz00_3250)),
																						(int) (BgL_restz00_3252));
													}}}}}}}}
													BgL_arg3860z00_1751 =
														PROCEDURE_ENTRY(BgL_method3371z00_3242)
														(BgL_method3371z00_3242, (obj_t) (BgL_nodez00_3241),
														BEOA);
										}}}
										BgL_head3344z00_1738 = MAKE_PAIR(BgL_arg3860z00_1751, BNIL);
									}
									{	/* Ast/dump.scm 226 */
										obj_t BgL_g3347z00_1739;

										BgL_g3347z00_1739 = CDR(BgL_l3342z00_1736);
										{
											obj_t BgL_l3342z00_1741;

											obj_t BgL_tail3345z00_1742;

											BgL_l3342z00_1741 = BgL_g3347z00_1739;
											BgL_tail3345z00_1742 = BgL_head3344z00_1738;
										BgL_zc3anonymousza33854ze3z83_1743:
											if (NULLP(BgL_l3342z00_1741))
												{	/* Ast/dump.scm 226 */
													BgL_arg3851z00_1734 = BgL_head3344z00_1738;
												}
											else
												{	/* Ast/dump.scm 226 */
													obj_t BgL_newtail3346z00_1745;

													{	/* Ast/dump.scm 226 */
														obj_t BgL_arg3857z00_1747;

														{	/* Ast/dump.scm 226 */
															obj_t BgL_arg3859z00_1749;

															BgL_arg3859z00_1749 = CAR(BgL_l3342z00_1741);
															{	/* Ast/dump.scm 226 */
																BgL_nodez00_bglt BgL_nodez00_3272;

																BgL_nodez00_3272 =
																	(BgL_nodez00_bglt) (BgL_arg3859z00_1749);
																{	/* Ast/dump.scm 226 */
																	obj_t BgL_method3371z00_3273;

																	{	/* Ast/dump.scm 226 */
																		BgL_objectz00_bglt BgL_objz00_3274;

																		BgL_objz00_3274 =
																			(BgL_objectz00_bglt) (BgL_nodez00_3272);
																		{	/* Ast/dump.scm 226 */
																			long BgL_objzd2classzd2numz00_3275;

																			BgL_objzd2classzd2numz00_3275 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_3274);
																			{	/* Ast/dump.scm 226 */
																				obj_t BgL_arg2643z00_3276;

																				BgL_arg2643z00_3276 =
																					PROCEDURE_REF
																					(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																					(int) (((long) 1)));
																				{	/* Ast/dump.scm 226 */
																					obj_t BgL_arrayz00_3278;

																					int BgL_offsetz00_3279;

																					BgL_arrayz00_3278 =
																						BgL_arg2643z00_3276;
																					BgL_offsetz00_3279 =
																						(int)
																						(BgL_objzd2classzd2numz00_3275);
																					{	/* Ast/dump.scm 226 */
																						long BgL_offsetz00_3280;

																						BgL_offsetz00_3280 =
																							(
																							(long) (BgL_offsetz00_3279) -
																							OBJECT_TYPE);
																						{	/* Ast/dump.scm 226 */
																							long BgL_modz00_3281;

																							{	/* Ast/dump.scm 226 */
																								int BgL_arg2645z00_3282;

																								BgL_arg2645z00_3282 =
																									(int) (((long) 16));
																								{	/* Ast/dump.scm 226 */
																									long BgL_auxz00_5029;

																									BgL_auxz00_5029 =
																										(long)
																										(BgL_arg2645z00_3282);
																									BgL_modz00_3281 =
																										(BgL_offsetz00_3280 /
																										BgL_auxz00_5029);
																							}}
																							{	/* Ast/dump.scm 226 */
																								long BgL_restz00_3283;

																								{	/* Ast/dump.scm 226 */
																									int BgL_arg2644z00_3284;

																									BgL_arg2644z00_3284 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 226 */
																										long BgL_auxz00_5033;

																										BgL_auxz00_5033 =
																											(long)
																											(BgL_arg2644z00_3284);
																										BgL_restz00_3283 =
																											(BgL_offsetz00_3280 %
																											BgL_auxz00_5033);
																								}}
																								{	/* Ast/dump.scm 226 */

																									BgL_method3371z00_3273 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_3278,
																											(int) (BgL_modz00_3281)),
																										(int) (BgL_restz00_3283));
																	}}}}}}}}
																	BgL_arg3857z00_1747 =
																		PROCEDURE_ENTRY(BgL_method3371z00_3273)
																		(BgL_method3371z00_3273,
																		(obj_t) (BgL_nodez00_3272), BEOA);
														}}}
														BgL_newtail3346z00_1745 =
															MAKE_PAIR(BgL_arg3857z00_1747, BNIL);
													}
													SET_CDR(BgL_tail3345z00_1742,
														BgL_newtail3346z00_1745);
													{
														obj_t BgL_tail3345z00_5047;

														obj_t BgL_l3342z00_5045;

														BgL_l3342z00_5045 = CDR(BgL_l3342z00_1741);
														BgL_tail3345z00_5047 = BgL_newtail3346z00_1745;
														BgL_tail3345z00_1742 = BgL_tail3345z00_5047;
														BgL_l3342z00_1741 = BgL_l3342z00_5045;
														goto BgL_zc3anonymousza33854ze3z83_1743;
													}
												}
										}
									}
								}
						}
						BgL_arg3850z00_1733 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg3851z00_1734, BNIL);
					}
					return MAKE_PAIR(BgL_arg3849z00_1732, BgL_arg3850z00_1733);
				}
			}
		}
	}



/* node->sexp-vset!3401 */
	obj_t BGl_nodezd2ze3sexpzd2vsetz123401zf1zzast_dumpz00(obj_t BgL_envz00_4097,
		obj_t BgL_nodez00_4098)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 211 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1668;

				BgL_nodez00_1668 = (BgL_vsetz12z12_bglt) (BgL_nodez00_4098);
				{	/* Ast/dump.scm 214 */
					obj_t BgL_idz00_1672;

					if ((((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1668))->BgL_unsafez00))
						{	/* Ast/dump.scm 214 */
							BgL_idz00_1672 = CNST_TABLE_REF(((long) 16));
						}
					else
						{	/* Ast/dump.scm 214 */
							BgL_idz00_1672 = CNST_TABLE_REF(((long) 17));
						}
					if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
						{	/* Ast/dump.scm 216 */
							obj_t BgL_arg3812z00_1673;

							{	/* Ast/dump.scm 216 */
								obj_t BgL_arg3813z00_1674;

								obj_t BgL_arg3814z00_1675;

								{	/* Ast/dump.scm 216 */
									obj_t BgL_v3329z00_1677;

									BgL_v3329z00_1677 = create_vector((int) (((long) 2)));
									{	/* Ast/dump.scm 216 */
										obj_t BgL_arg3817z00_1679;

										{	/* Ast/dump.scm 216 */
											BgL_typez00_bglt BgL_arg3818z00_1680;

											BgL_arg3818z00_1680 =
												(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1668))->
												BgL_ftypez00);
											BgL_arg3817z00_1679 =
												BGl_shapez00zztools_shapez00((obj_t)
												(BgL_arg3818z00_1680));
										}
										VECTOR_SET(BgL_v3329z00_1677,
											(int) (((long) 1)), BgL_arg3817z00_1679);
									}
									{	/* Ast/dump.scm 216 */
										obj_t BgL_arg3820z00_1682;

										{	/* Ast/dump.scm 216 */
											BgL_typez00_bglt BgL_arg3821z00_1683;

											BgL_arg3821z00_1683 =
												BGl_getzd2typezd2zztype_typeofz00(
												(BgL_nodez00_bglt) (BgL_nodez00_1668));
											BgL_arg3820z00_1682 =
												BGl_shapez00zztools_shapez00(
												(obj_t) (BgL_arg3821z00_1683));
										}
										VECTOR_SET(BgL_v3329z00_1677,
											(int) (((long) 0)), BgL_arg3820z00_1682);
									}
									BgL_arg3813z00_1674 = BgL_v3329z00_1677;
								}
								{	/* Ast/dump.scm 217 */
									obj_t BgL_arg3822z00_1684;

									{	/* Ast/dump.scm 217 */
										obj_t BgL_l3330z00_1686;

										{
											BgL_externz00_bglt BgL_auxz00_5070;

											BgL_auxz00_5070 = (BgL_externz00_bglt) (BgL_nodez00_1668);
											BgL_l3330z00_1686 =
												(((BgL_externz00_bglt) CREF(BgL_auxz00_5070))->
												BgL_exprza2za2);
										}
										if (NULLP(BgL_l3330z00_1686))
											{	/* Ast/dump.scm 217 */
												BgL_arg3822z00_1684 = BNIL;
											}
										else
											{	/* Ast/dump.scm 217 */
												obj_t BgL_head3332z00_1688;

												{	/* Ast/dump.scm 217 */
													obj_t BgL_arg3831z00_1701;

													{	/* Ast/dump.scm 217 */
														obj_t BgL_arg3833z00_1703;

														BgL_arg3833z00_1703 = CAR(BgL_l3330z00_1686);
														{	/* Ast/dump.scm 217 */
															BgL_nodez00_bglt BgL_nodez00_3110;

															BgL_nodez00_3110 =
																(BgL_nodez00_bglt) (BgL_arg3833z00_1703);
															{	/* Ast/dump.scm 217 */
																obj_t BgL_method3371z00_3111;

																{	/* Ast/dump.scm 217 */
																	BgL_objectz00_bglt BgL_objz00_3112;

																	BgL_objz00_3112 =
																		(BgL_objectz00_bglt) (BgL_nodez00_3110);
																	{	/* Ast/dump.scm 217 */
																		long BgL_objzd2classzd2numz00_3113;

																		BgL_objzd2classzd2numz00_3113 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_3112);
																		{	/* Ast/dump.scm 217 */
																			obj_t BgL_arg2643z00_3114;

																			BgL_arg2643z00_3114 =
																				PROCEDURE_REF
																				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																				(int) (((long) 1)));
																			{	/* Ast/dump.scm 217 */
																				obj_t BgL_arrayz00_3116;

																				int BgL_offsetz00_3117;

																				BgL_arrayz00_3116 = BgL_arg2643z00_3114;
																				BgL_offsetz00_3117 =
																					(int) (BgL_objzd2classzd2numz00_3113);
																				{	/* Ast/dump.scm 217 */
																					long BgL_offsetz00_3118;

																					BgL_offsetz00_3118 =
																						(
																						(long) (BgL_offsetz00_3117) -
																						OBJECT_TYPE);
																					{	/* Ast/dump.scm 217 */
																						long BgL_modz00_3119;

																						{	/* Ast/dump.scm 217 */
																							int BgL_arg2645z00_3120;

																							BgL_arg2645z00_3120 =
																								(int) (((long) 16));
																							{	/* Ast/dump.scm 217 */
																								long BgL_auxz00_5085;

																								BgL_auxz00_5085 =
																									(long) (BgL_arg2645z00_3120);
																								BgL_modz00_3119 =
																									(BgL_offsetz00_3118 /
																									BgL_auxz00_5085);
																						}}
																						{	/* Ast/dump.scm 217 */
																							long BgL_restz00_3121;

																							{	/* Ast/dump.scm 217 */
																								int BgL_arg2644z00_3122;

																								BgL_arg2644z00_3122 =
																									(int) (((long) 16));
																								{	/* Ast/dump.scm 217 */
																									long BgL_auxz00_5089;

																									BgL_auxz00_5089 =
																										(long)
																										(BgL_arg2644z00_3122);
																									BgL_restz00_3121 =
																										(BgL_offsetz00_3118 %
																										BgL_auxz00_5089);
																							}}
																							{	/* Ast/dump.scm 217 */

																								BgL_method3371z00_3111 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_3116,
																										(int) (BgL_modz00_3119)),
																									(int) (BgL_restz00_3121));
																}}}}}}}}
																BgL_arg3831z00_1701 =
																	PROCEDURE_ENTRY(BgL_method3371z00_3111)
																	(BgL_method3371z00_3111,
																	(obj_t) (BgL_nodez00_3110), BEOA);
													}}}
													BgL_head3332z00_1688 =
														MAKE_PAIR(BgL_arg3831z00_1701, BNIL);
												}
												{	/* Ast/dump.scm 217 */
													obj_t BgL_g3335z00_1689;

													BgL_g3335z00_1689 = CDR(BgL_l3330z00_1686);
													{
														obj_t BgL_l3330z00_1691;

														obj_t BgL_tail3333z00_1692;

														BgL_l3330z00_1691 = BgL_g3335z00_1689;
														BgL_tail3333z00_1692 = BgL_head3332z00_1688;
													BgL_zc3anonymousza33825ze3z83_1693:
														if (NULLP(BgL_l3330z00_1691))
															{	/* Ast/dump.scm 217 */
																BgL_arg3822z00_1684 = BgL_head3332z00_1688;
															}
														else
															{	/* Ast/dump.scm 217 */
																obj_t BgL_newtail3334z00_1695;

																{	/* Ast/dump.scm 217 */
																	obj_t BgL_arg3828z00_1697;

																	{	/* Ast/dump.scm 217 */
																		obj_t BgL_arg3830z00_1699;

																		BgL_arg3830z00_1699 =
																			CAR(BgL_l3330z00_1691);
																		{	/* Ast/dump.scm 217 */
																			BgL_nodez00_bglt BgL_nodez00_3141;

																			BgL_nodez00_3141 =
																				(BgL_nodez00_bglt)
																				(BgL_arg3830z00_1699);
																			{	/* Ast/dump.scm 217 */
																				obj_t BgL_method3371z00_3142;

																				{	/* Ast/dump.scm 217 */
																					BgL_objectz00_bglt BgL_objz00_3143;

																					BgL_objz00_3143 =
																						(BgL_objectz00_bglt)
																						(BgL_nodez00_3141);
																					{	/* Ast/dump.scm 217 */
																						long BgL_objzd2classzd2numz00_3144;

																						BgL_objzd2classzd2numz00_3144 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3143);
																						{	/* Ast/dump.scm 217 */
																							obj_t BgL_arg2643z00_3145;

																							BgL_arg2643z00_3145 =
																								PROCEDURE_REF
																								(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																								(int) (((long) 1)));
																							{	/* Ast/dump.scm 217 */
																								obj_t BgL_arrayz00_3147;

																								int BgL_offsetz00_3148;

																								BgL_arrayz00_3147 =
																									BgL_arg2643z00_3145;
																								BgL_offsetz00_3148 =
																									(int)
																									(BgL_objzd2classzd2numz00_3144);
																								{	/* Ast/dump.scm 217 */
																									long BgL_offsetz00_3149;

																									BgL_offsetz00_3149 =
																										(
																										(long) (BgL_offsetz00_3148)
																										- OBJECT_TYPE);
																									{	/* Ast/dump.scm 217 */
																										long BgL_modz00_3150;

																										{	/* Ast/dump.scm 217 */
																											int BgL_arg2645z00_3151;

																											BgL_arg2645z00_3151 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 217 */
																												long BgL_auxz00_5113;

																												BgL_auxz00_5113 =
																													(long)
																													(BgL_arg2645z00_3151);
																												BgL_modz00_3150 =
																													(BgL_offsetz00_3149 /
																													BgL_auxz00_5113);
																										}}
																										{	/* Ast/dump.scm 217 */
																											long BgL_restz00_3152;

																											{	/* Ast/dump.scm 217 */
																												int BgL_arg2644z00_3153;

																												BgL_arg2644z00_3153 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 217 */
																													long BgL_auxz00_5117;

																													BgL_auxz00_5117 =
																														(long)
																														(BgL_arg2644z00_3153);
																													BgL_restz00_3152 =
																														(BgL_offsetz00_3149
																														% BgL_auxz00_5117);
																											}}
																											{	/* Ast/dump.scm 217 */

																												BgL_method3371z00_3142 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3147,
																														(int)
																														(BgL_modz00_3150)),
																													(int)
																													(BgL_restz00_3152));
																				}}}}}}}}
																				BgL_arg3828z00_1697 =
																					PROCEDURE_ENTRY
																					(BgL_method3371z00_3142)
																					(BgL_method3371z00_3142,
																					(obj_t) (BgL_nodez00_3141), BEOA);
																	}}}
																	BgL_newtail3334z00_1695 =
																		MAKE_PAIR(BgL_arg3828z00_1697, BNIL);
																}
																SET_CDR(BgL_tail3333z00_1692,
																	BgL_newtail3334z00_1695);
																{
																	obj_t BgL_tail3333z00_5131;

																	obj_t BgL_l3330z00_5129;

																	BgL_l3330z00_5129 = CDR(BgL_l3330z00_1691);
																	BgL_tail3333z00_5131 =
																		BgL_newtail3334z00_1695;
																	BgL_tail3333z00_1692 = BgL_tail3333z00_5131;
																	BgL_l3330z00_1691 = BgL_l3330z00_5129;
																	goto BgL_zc3anonymousza33825ze3z83_1693;
																}
															}
													}
												}
											}
									}
									BgL_arg3814z00_1675 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3822z00_1684, BNIL);
								}
								{	/* Ast/dump.scm 216 */
									obj_t BgL_list3815z00_1676;

									BgL_list3815z00_1676 = MAKE_PAIR(BgL_arg3814z00_1675, BNIL);
									BgL_arg3812z00_1673 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3813z00_1674, BgL_list3815z00_1676);
								}
							}
							return MAKE_PAIR(BgL_idz00_1672, BgL_arg3812z00_1673);
						}
					else
						{	/* Ast/dump.scm 218 */
							obj_t BgL_arg3834z00_1704;

							{	/* Ast/dump.scm 218 */
								obj_t BgL_arg3835z00_1705;

								{	/* Ast/dump.scm 218 */
									obj_t BgL_l3336z00_1707;

									{
										BgL_externz00_bglt BgL_auxz00_5136;

										BgL_auxz00_5136 = (BgL_externz00_bglt) (BgL_nodez00_1668);
										BgL_l3336z00_1707 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_5136))->
											BgL_exprza2za2);
									}
									if (NULLP(BgL_l3336z00_1707))
										{	/* Ast/dump.scm 218 */
											BgL_arg3835z00_1705 = BNIL;
										}
									else
										{	/* Ast/dump.scm 218 */
											obj_t BgL_head3338z00_1709;

											{	/* Ast/dump.scm 218 */
												obj_t BgL_arg3844z00_1722;

												{	/* Ast/dump.scm 218 */
													obj_t BgL_arg3846z00_1724;

													BgL_arg3846z00_1724 = CAR(BgL_l3336z00_1707);
													{	/* Ast/dump.scm 218 */
														BgL_nodez00_bglt BgL_nodez00_3175;

														BgL_nodez00_3175 =
															(BgL_nodez00_bglt) (BgL_arg3846z00_1724);
														{	/* Ast/dump.scm 218 */
															obj_t BgL_method3371z00_3176;

															{	/* Ast/dump.scm 218 */
																BgL_objectz00_bglt BgL_objz00_3177;

																BgL_objz00_3177 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3175);
																{	/* Ast/dump.scm 218 */
																	long BgL_objzd2classzd2numz00_3178;

																	BgL_objzd2classzd2numz00_3178 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3177);
																	{	/* Ast/dump.scm 218 */
																		obj_t BgL_arg2643z00_3179;

																		BgL_arg2643z00_3179 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																			(int) (((long) 1)));
																		{	/* Ast/dump.scm 218 */
																			obj_t BgL_arrayz00_3181;

																			int BgL_offsetz00_3182;

																			BgL_arrayz00_3181 = BgL_arg2643z00_3179;
																			BgL_offsetz00_3182 =
																				(int) (BgL_objzd2classzd2numz00_3178);
																			{	/* Ast/dump.scm 218 */
																				long BgL_offsetz00_3183;

																				BgL_offsetz00_3183 =
																					(
																					(long) (BgL_offsetz00_3182) -
																					OBJECT_TYPE);
																				{	/* Ast/dump.scm 218 */
																					long BgL_modz00_3184;

																					{	/* Ast/dump.scm 218 */
																						int BgL_arg2645z00_3185;

																						BgL_arg2645z00_3185 =
																							(int) (((long) 16));
																						{	/* Ast/dump.scm 218 */
																							long BgL_auxz00_5151;

																							BgL_auxz00_5151 =
																								(long) (BgL_arg2645z00_3185);
																							BgL_modz00_3184 =
																								(BgL_offsetz00_3183 /
																								BgL_auxz00_5151);
																					}}
																					{	/* Ast/dump.scm 218 */
																						long BgL_restz00_3186;

																						{	/* Ast/dump.scm 218 */
																							int BgL_arg2644z00_3187;

																							BgL_arg2644z00_3187 =
																								(int) (((long) 16));
																							{	/* Ast/dump.scm 218 */
																								long BgL_auxz00_5155;

																								BgL_auxz00_5155 =
																									(long) (BgL_arg2644z00_3187);
																								BgL_restz00_3186 =
																									(BgL_offsetz00_3183 %
																									BgL_auxz00_5155);
																						}}
																						{	/* Ast/dump.scm 218 */

																							BgL_method3371z00_3176 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3181,
																									(int) (BgL_modz00_3184)),
																								(int) (BgL_restz00_3186));
															}}}}}}}}
															BgL_arg3844z00_1722 =
																PROCEDURE_ENTRY(BgL_method3371z00_3176)
																(BgL_method3371z00_3176,
																(obj_t) (BgL_nodez00_3175), BEOA);
												}}}
												BgL_head3338z00_1709 =
													MAKE_PAIR(BgL_arg3844z00_1722, BNIL);
											}
											{	/* Ast/dump.scm 218 */
												obj_t BgL_g3341z00_1710;

												BgL_g3341z00_1710 = CDR(BgL_l3336z00_1707);
												{
													obj_t BgL_l3336z00_1712;

													obj_t BgL_tail3339z00_1713;

													BgL_l3336z00_1712 = BgL_g3341z00_1710;
													BgL_tail3339z00_1713 = BgL_head3338z00_1709;
												BgL_zc3anonymousza33838ze3z83_1714:
													if (NULLP(BgL_l3336z00_1712))
														{	/* Ast/dump.scm 218 */
															BgL_arg3835z00_1705 = BgL_head3338z00_1709;
														}
													else
														{	/* Ast/dump.scm 218 */
															obj_t BgL_newtail3340z00_1716;

															{	/* Ast/dump.scm 218 */
																obj_t BgL_arg3841z00_1718;

																{	/* Ast/dump.scm 218 */
																	obj_t BgL_arg3843z00_1720;

																	BgL_arg3843z00_1720 = CAR(BgL_l3336z00_1712);
																	{	/* Ast/dump.scm 218 */
																		BgL_nodez00_bglt BgL_nodez00_3206;

																		BgL_nodez00_3206 =
																			(BgL_nodez00_bglt) (BgL_arg3843z00_1720);
																		{	/* Ast/dump.scm 218 */
																			obj_t BgL_method3371z00_3207;

																			{	/* Ast/dump.scm 218 */
																				BgL_objectz00_bglt BgL_objz00_3208;

																				BgL_objz00_3208 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_3206);
																				{	/* Ast/dump.scm 218 */
																					long BgL_objzd2classzd2numz00_3209;

																					BgL_objzd2classzd2numz00_3209 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_3208);
																					{	/* Ast/dump.scm 218 */
																						obj_t BgL_arg2643z00_3210;

																						BgL_arg2643z00_3210 =
																							PROCEDURE_REF
																							(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																							(int) (((long) 1)));
																						{	/* Ast/dump.scm 218 */
																							obj_t BgL_arrayz00_3212;

																							int BgL_offsetz00_3213;

																							BgL_arrayz00_3212 =
																								BgL_arg2643z00_3210;
																							BgL_offsetz00_3213 =
																								(int)
																								(BgL_objzd2classzd2numz00_3209);
																							{	/* Ast/dump.scm 218 */
																								long BgL_offsetz00_3214;

																								BgL_offsetz00_3214 =
																									(
																									(long) (BgL_offsetz00_3213) -
																									OBJECT_TYPE);
																								{	/* Ast/dump.scm 218 */
																									long BgL_modz00_3215;

																									{	/* Ast/dump.scm 218 */
																										int BgL_arg2645z00_3216;

																										BgL_arg2645z00_3216 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 218 */
																											long BgL_auxz00_5179;

																											BgL_auxz00_5179 =
																												(long)
																												(BgL_arg2645z00_3216);
																											BgL_modz00_3215 =
																												(BgL_offsetz00_3214 /
																												BgL_auxz00_5179);
																									}}
																									{	/* Ast/dump.scm 218 */
																										long BgL_restz00_3217;

																										{	/* Ast/dump.scm 218 */
																											int BgL_arg2644z00_3218;

																											BgL_arg2644z00_3218 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 218 */
																												long BgL_auxz00_5183;

																												BgL_auxz00_5183 =
																													(long)
																													(BgL_arg2644z00_3218);
																												BgL_restz00_3217 =
																													(BgL_offsetz00_3214 %
																													BgL_auxz00_5183);
																										}}
																										{	/* Ast/dump.scm 218 */

																											BgL_method3371z00_3207 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_3212,
																													(int)
																													(BgL_modz00_3215)),
																												(int)
																												(BgL_restz00_3217));
																			}}}}}}}}
																			BgL_arg3841z00_1718 =
																				PROCEDURE_ENTRY(BgL_method3371z00_3207)
																				(BgL_method3371z00_3207,
																				(obj_t) (BgL_nodez00_3206), BEOA);
																}}}
																BgL_newtail3340z00_1716 =
																	MAKE_PAIR(BgL_arg3841z00_1718, BNIL);
															}
															SET_CDR(BgL_tail3339z00_1713,
																BgL_newtail3340z00_1716);
															{
																obj_t BgL_tail3339z00_5197;

																obj_t BgL_l3336z00_5195;

																BgL_l3336z00_5195 = CDR(BgL_l3336z00_1712);
																BgL_tail3339z00_5197 = BgL_newtail3340z00_1716;
																BgL_tail3339z00_1713 = BgL_tail3339z00_5197;
																BgL_l3336z00_1712 = BgL_l3336z00_5195;
																goto BgL_zc3anonymousza33838ze3z83_1714;
															}
														}
												}
											}
										}
								}
								BgL_arg3834z00_1704 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3835z00_1705, BNIL);
							}
							return MAKE_PAIR(BgL_idz00_1672, BgL_arg3834z00_1704);
						}
				}
			}
		}
	}



/* node->sexp-vref3399 */
	obj_t BGl_nodezd2ze3sexpzd2vref3399ze3zzast_dumpz00(obj_t BgL_envz00_4099,
		obj_t BgL_nodez00_4100)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 199 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1608;

				BgL_nodez00_1608 = (BgL_vrefz00_bglt) (BgL_nodez00_4100);
				{	/* Ast/dump.scm 202 */
					obj_t BgL_idz00_1612;

					if ((((BgL_vrefz00_bglt) CREF(BgL_nodez00_1608))->BgL_unsafez00))
						{	/* Ast/dump.scm 202 */
							BgL_idz00_1612 = CNST_TABLE_REF(((long) 18));
						}
					else
						{	/* Ast/dump.scm 202 */
							BgL_idz00_1612 = CNST_TABLE_REF(((long) 19));
						}
					if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
						{	/* Ast/dump.scm 204 */
							obj_t BgL_arg3774z00_1613;

							{	/* Ast/dump.scm 204 */
								obj_t BgL_arg3775z00_1614;

								obj_t BgL_arg3776z00_1615;

								{	/* Ast/dump.scm 204 */
									obj_t BgL_v3316z00_1617;

									BgL_v3316z00_1617 = create_vector((int) (((long) 2)));
									{	/* Ast/dump.scm 204 */
										obj_t BgL_arg3779z00_1619;

										{	/* Ast/dump.scm 204 */
											BgL_typez00_bglt BgL_arg3780z00_1620;

											BgL_arg3780z00_1620 =
												(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1608))->
												BgL_ftypez00);
											BgL_arg3779z00_1619 =
												BGl_shapez00zztools_shapez00((obj_t)
												(BgL_arg3780z00_1620));
										}
										VECTOR_SET(BgL_v3316z00_1617,
											(int) (((long) 1)), BgL_arg3779z00_1619);
									}
									{	/* Ast/dump.scm 204 */
										obj_t BgL_arg3782z00_1622;

										{	/* Ast/dump.scm 204 */
											BgL_typez00_bglt BgL_arg3783z00_1623;

											BgL_arg3783z00_1623 =
												BGl_getzd2typezd2zztype_typeofz00(
												(BgL_nodez00_bglt) (BgL_nodez00_1608));
											BgL_arg3782z00_1622 =
												BGl_shapez00zztools_shapez00(
												(obj_t) (BgL_arg3783z00_1623));
										}
										VECTOR_SET(BgL_v3316z00_1617,
											(int) (((long) 0)), BgL_arg3782z00_1622);
									}
									BgL_arg3775z00_1614 = BgL_v3316z00_1617;
								}
								{	/* Ast/dump.scm 205 */
									obj_t BgL_arg3784z00_1624;

									{	/* Ast/dump.scm 205 */
										obj_t BgL_l3317z00_1626;

										{
											BgL_externz00_bglt BgL_auxz00_5220;

											BgL_auxz00_5220 = (BgL_externz00_bglt) (BgL_nodez00_1608);
											BgL_l3317z00_1626 =
												(((BgL_externz00_bglt) CREF(BgL_auxz00_5220))->
												BgL_exprza2za2);
										}
										if (NULLP(BgL_l3317z00_1626))
											{	/* Ast/dump.scm 205 */
												BgL_arg3784z00_1624 = BNIL;
											}
										else
											{	/* Ast/dump.scm 205 */
												obj_t BgL_head3319z00_1628;

												{	/* Ast/dump.scm 205 */
													obj_t BgL_arg3793z00_1641;

													{	/* Ast/dump.scm 205 */
														obj_t BgL_arg3795z00_1643;

														BgL_arg3795z00_1643 = CAR(BgL_l3317z00_1626);
														{	/* Ast/dump.scm 205 */
															BgL_nodez00_bglt BgL_nodez00_2971;

															BgL_nodez00_2971 =
																(BgL_nodez00_bglt) (BgL_arg3795z00_1643);
															{	/* Ast/dump.scm 205 */
																obj_t BgL_method3371z00_2972;

																{	/* Ast/dump.scm 205 */
																	BgL_objectz00_bglt BgL_objz00_2973;

																	BgL_objz00_2973 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2971);
																	{	/* Ast/dump.scm 205 */
																		long BgL_objzd2classzd2numz00_2974;

																		BgL_objzd2classzd2numz00_2974 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2973);
																		{	/* Ast/dump.scm 205 */
																			obj_t BgL_arg2643z00_2975;

																			BgL_arg2643z00_2975 =
																				PROCEDURE_REF
																				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																				(int) (((long) 1)));
																			{	/* Ast/dump.scm 205 */
																				obj_t BgL_arrayz00_2977;

																				int BgL_offsetz00_2978;

																				BgL_arrayz00_2977 = BgL_arg2643z00_2975;
																				BgL_offsetz00_2978 =
																					(int) (BgL_objzd2classzd2numz00_2974);
																				{	/* Ast/dump.scm 205 */
																					long BgL_offsetz00_2979;

																					BgL_offsetz00_2979 =
																						(
																						(long) (BgL_offsetz00_2978) -
																						OBJECT_TYPE);
																					{	/* Ast/dump.scm 205 */
																						long BgL_modz00_2980;

																						{	/* Ast/dump.scm 205 */
																							int BgL_arg2645z00_2981;

																							BgL_arg2645z00_2981 =
																								(int) (((long) 16));
																							{	/* Ast/dump.scm 205 */
																								long BgL_auxz00_5235;

																								BgL_auxz00_5235 =
																									(long) (BgL_arg2645z00_2981);
																								BgL_modz00_2980 =
																									(BgL_offsetz00_2979 /
																									BgL_auxz00_5235);
																						}}
																						{	/* Ast/dump.scm 205 */
																							long BgL_restz00_2982;

																							{	/* Ast/dump.scm 205 */
																								int BgL_arg2644z00_2983;

																								BgL_arg2644z00_2983 =
																									(int) (((long) 16));
																								{	/* Ast/dump.scm 205 */
																									long BgL_auxz00_5239;

																									BgL_auxz00_5239 =
																										(long)
																										(BgL_arg2644z00_2983);
																									BgL_restz00_2982 =
																										(BgL_offsetz00_2979 %
																										BgL_auxz00_5239);
																							}}
																							{	/* Ast/dump.scm 205 */

																								BgL_method3371z00_2972 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2977,
																										(int) (BgL_modz00_2980)),
																									(int) (BgL_restz00_2982));
																}}}}}}}}
																BgL_arg3793z00_1641 =
																	PROCEDURE_ENTRY(BgL_method3371z00_2972)
																	(BgL_method3371z00_2972,
																	(obj_t) (BgL_nodez00_2971), BEOA);
													}}}
													BgL_head3319z00_1628 =
														MAKE_PAIR(BgL_arg3793z00_1641, BNIL);
												}
												{	/* Ast/dump.scm 205 */
													obj_t BgL_g3322z00_1629;

													BgL_g3322z00_1629 = CDR(BgL_l3317z00_1626);
													{
														obj_t BgL_l3317z00_1631;

														obj_t BgL_tail3320z00_1632;

														BgL_l3317z00_1631 = BgL_g3322z00_1629;
														BgL_tail3320z00_1632 = BgL_head3319z00_1628;
													BgL_zc3anonymousza33787ze3z83_1633:
														if (NULLP(BgL_l3317z00_1631))
															{	/* Ast/dump.scm 205 */
																BgL_arg3784z00_1624 = BgL_head3319z00_1628;
															}
														else
															{	/* Ast/dump.scm 205 */
																obj_t BgL_newtail3321z00_1635;

																{	/* Ast/dump.scm 205 */
																	obj_t BgL_arg3790z00_1637;

																	{	/* Ast/dump.scm 205 */
																		obj_t BgL_arg3792z00_1639;

																		BgL_arg3792z00_1639 =
																			CAR(BgL_l3317z00_1631);
																		{	/* Ast/dump.scm 205 */
																			BgL_nodez00_bglt BgL_nodez00_3002;

																			BgL_nodez00_3002 =
																				(BgL_nodez00_bglt)
																				(BgL_arg3792z00_1639);
																			{	/* Ast/dump.scm 205 */
																				obj_t BgL_method3371z00_3003;

																				{	/* Ast/dump.scm 205 */
																					BgL_objectz00_bglt BgL_objz00_3004;

																					BgL_objz00_3004 =
																						(BgL_objectz00_bglt)
																						(BgL_nodez00_3002);
																					{	/* Ast/dump.scm 205 */
																						long BgL_objzd2classzd2numz00_3005;

																						BgL_objzd2classzd2numz00_3005 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3004);
																						{	/* Ast/dump.scm 205 */
																							obj_t BgL_arg2643z00_3006;

																							BgL_arg2643z00_3006 =
																								PROCEDURE_REF
																								(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																								(int) (((long) 1)));
																							{	/* Ast/dump.scm 205 */
																								obj_t BgL_arrayz00_3008;

																								int BgL_offsetz00_3009;

																								BgL_arrayz00_3008 =
																									BgL_arg2643z00_3006;
																								BgL_offsetz00_3009 =
																									(int)
																									(BgL_objzd2classzd2numz00_3005);
																								{	/* Ast/dump.scm 205 */
																									long BgL_offsetz00_3010;

																									BgL_offsetz00_3010 =
																										(
																										(long) (BgL_offsetz00_3009)
																										- OBJECT_TYPE);
																									{	/* Ast/dump.scm 205 */
																										long BgL_modz00_3011;

																										{	/* Ast/dump.scm 205 */
																											int BgL_arg2645z00_3012;

																											BgL_arg2645z00_3012 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 205 */
																												long BgL_auxz00_5263;

																												BgL_auxz00_5263 =
																													(long)
																													(BgL_arg2645z00_3012);
																												BgL_modz00_3011 =
																													(BgL_offsetz00_3010 /
																													BgL_auxz00_5263);
																										}}
																										{	/* Ast/dump.scm 205 */
																											long BgL_restz00_3013;

																											{	/* Ast/dump.scm 205 */
																												int BgL_arg2644z00_3014;

																												BgL_arg2644z00_3014 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 205 */
																													long BgL_auxz00_5267;

																													BgL_auxz00_5267 =
																														(long)
																														(BgL_arg2644z00_3014);
																													BgL_restz00_3013 =
																														(BgL_offsetz00_3010
																														% BgL_auxz00_5267);
																											}}
																											{	/* Ast/dump.scm 205 */

																												BgL_method3371z00_3003 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3008,
																														(int)
																														(BgL_modz00_3011)),
																													(int)
																													(BgL_restz00_3013));
																				}}}}}}}}
																				BgL_arg3790z00_1637 =
																					PROCEDURE_ENTRY
																					(BgL_method3371z00_3003)
																					(BgL_method3371z00_3003,
																					(obj_t) (BgL_nodez00_3002), BEOA);
																	}}}
																	BgL_newtail3321z00_1635 =
																		MAKE_PAIR(BgL_arg3790z00_1637, BNIL);
																}
																SET_CDR(BgL_tail3320z00_1632,
																	BgL_newtail3321z00_1635);
																{
																	obj_t BgL_tail3320z00_5281;

																	obj_t BgL_l3317z00_5279;

																	BgL_l3317z00_5279 = CDR(BgL_l3317z00_1631);
																	BgL_tail3320z00_5281 =
																		BgL_newtail3321z00_1635;
																	BgL_tail3320z00_1632 = BgL_tail3320z00_5281;
																	BgL_l3317z00_1631 = BgL_l3317z00_5279;
																	goto BgL_zc3anonymousza33787ze3z83_1633;
																}
															}
													}
												}
											}
									}
									BgL_arg3776z00_1615 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3784z00_1624, BNIL);
								}
								{	/* Ast/dump.scm 204 */
									obj_t BgL_list3777z00_1616;

									BgL_list3777z00_1616 = MAKE_PAIR(BgL_arg3776z00_1615, BNIL);
									BgL_arg3774z00_1613 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3775z00_1614, BgL_list3777z00_1616);
								}
							}
							return MAKE_PAIR(BgL_idz00_1612, BgL_arg3774z00_1613);
						}
					else
						{	/* Ast/dump.scm 206 */
							obj_t BgL_arg3796z00_1644;

							{	/* Ast/dump.scm 206 */
								obj_t BgL_arg3797z00_1645;

								{	/* Ast/dump.scm 206 */
									obj_t BgL_l3323z00_1647;

									{
										BgL_externz00_bglt BgL_auxz00_5286;

										BgL_auxz00_5286 = (BgL_externz00_bglt) (BgL_nodez00_1608);
										BgL_l3323z00_1647 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_5286))->
											BgL_exprza2za2);
									}
									if (NULLP(BgL_l3323z00_1647))
										{	/* Ast/dump.scm 206 */
											BgL_arg3797z00_1645 = BNIL;
										}
									else
										{	/* Ast/dump.scm 206 */
											obj_t BgL_head3325z00_1649;

											{	/* Ast/dump.scm 206 */
												obj_t BgL_arg3807z00_1662;

												{	/* Ast/dump.scm 206 */
													obj_t BgL_arg3809z00_1664;

													BgL_arg3809z00_1664 = CAR(BgL_l3323z00_1647);
													{	/* Ast/dump.scm 206 */
														BgL_nodez00_bglt BgL_nodez00_3036;

														BgL_nodez00_3036 =
															(BgL_nodez00_bglt) (BgL_arg3809z00_1664);
														{	/* Ast/dump.scm 206 */
															obj_t BgL_method3371z00_3037;

															{	/* Ast/dump.scm 206 */
																BgL_objectz00_bglt BgL_objz00_3038;

																BgL_objz00_3038 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3036);
																{	/* Ast/dump.scm 206 */
																	long BgL_objzd2classzd2numz00_3039;

																	BgL_objzd2classzd2numz00_3039 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3038);
																	{	/* Ast/dump.scm 206 */
																		obj_t BgL_arg2643z00_3040;

																		BgL_arg2643z00_3040 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																			(int) (((long) 1)));
																		{	/* Ast/dump.scm 206 */
																			obj_t BgL_arrayz00_3042;

																			int BgL_offsetz00_3043;

																			BgL_arrayz00_3042 = BgL_arg2643z00_3040;
																			BgL_offsetz00_3043 =
																				(int) (BgL_objzd2classzd2numz00_3039);
																			{	/* Ast/dump.scm 206 */
																				long BgL_offsetz00_3044;

																				BgL_offsetz00_3044 =
																					(
																					(long) (BgL_offsetz00_3043) -
																					OBJECT_TYPE);
																				{	/* Ast/dump.scm 206 */
																					long BgL_modz00_3045;

																					{	/* Ast/dump.scm 206 */
																						int BgL_arg2645z00_3046;

																						BgL_arg2645z00_3046 =
																							(int) (((long) 16));
																						{	/* Ast/dump.scm 206 */
																							long BgL_auxz00_5301;

																							BgL_auxz00_5301 =
																								(long) (BgL_arg2645z00_3046);
																							BgL_modz00_3045 =
																								(BgL_offsetz00_3044 /
																								BgL_auxz00_5301);
																					}}
																					{	/* Ast/dump.scm 206 */
																						long BgL_restz00_3047;

																						{	/* Ast/dump.scm 206 */
																							int BgL_arg2644z00_3048;

																							BgL_arg2644z00_3048 =
																								(int) (((long) 16));
																							{	/* Ast/dump.scm 206 */
																								long BgL_auxz00_5305;

																								BgL_auxz00_5305 =
																									(long) (BgL_arg2644z00_3048);
																								BgL_restz00_3047 =
																									(BgL_offsetz00_3044 %
																									BgL_auxz00_5305);
																						}}
																						{	/* Ast/dump.scm 206 */

																							BgL_method3371z00_3037 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3042,
																									(int) (BgL_modz00_3045)),
																								(int) (BgL_restz00_3047));
															}}}}}}}}
															BgL_arg3807z00_1662 =
																PROCEDURE_ENTRY(BgL_method3371z00_3037)
																(BgL_method3371z00_3037,
																(obj_t) (BgL_nodez00_3036), BEOA);
												}}}
												BgL_head3325z00_1649 =
													MAKE_PAIR(BgL_arg3807z00_1662, BNIL);
											}
											{	/* Ast/dump.scm 206 */
												obj_t BgL_g3328z00_1650;

												BgL_g3328z00_1650 = CDR(BgL_l3323z00_1647);
												{
													obj_t BgL_l3323z00_1652;

													obj_t BgL_tail3326z00_1653;

													BgL_l3323z00_1652 = BgL_g3328z00_1650;
													BgL_tail3326z00_1653 = BgL_head3325z00_1649;
												BgL_zc3anonymousza33800ze3z83_1654:
													if (NULLP(BgL_l3323z00_1652))
														{	/* Ast/dump.scm 206 */
															BgL_arg3797z00_1645 = BgL_head3325z00_1649;
														}
													else
														{	/* Ast/dump.scm 206 */
															obj_t BgL_newtail3327z00_1656;

															{	/* Ast/dump.scm 206 */
																obj_t BgL_arg3804z00_1658;

																{	/* Ast/dump.scm 206 */
																	obj_t BgL_arg3806z00_1660;

																	BgL_arg3806z00_1660 = CAR(BgL_l3323z00_1652);
																	{	/* Ast/dump.scm 206 */
																		BgL_nodez00_bglt BgL_nodez00_3067;

																		BgL_nodez00_3067 =
																			(BgL_nodez00_bglt) (BgL_arg3806z00_1660);
																		{	/* Ast/dump.scm 206 */
																			obj_t BgL_method3371z00_3068;

																			{	/* Ast/dump.scm 206 */
																				BgL_objectz00_bglt BgL_objz00_3069;

																				BgL_objz00_3069 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_3067);
																				{	/* Ast/dump.scm 206 */
																					long BgL_objzd2classzd2numz00_3070;

																					BgL_objzd2classzd2numz00_3070 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_3069);
																					{	/* Ast/dump.scm 206 */
																						obj_t BgL_arg2643z00_3071;

																						BgL_arg2643z00_3071 =
																							PROCEDURE_REF
																							(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																							(int) (((long) 1)));
																						{	/* Ast/dump.scm 206 */
																							obj_t BgL_arrayz00_3073;

																							int BgL_offsetz00_3074;

																							BgL_arrayz00_3073 =
																								BgL_arg2643z00_3071;
																							BgL_offsetz00_3074 =
																								(int)
																								(BgL_objzd2classzd2numz00_3070);
																							{	/* Ast/dump.scm 206 */
																								long BgL_offsetz00_3075;

																								BgL_offsetz00_3075 =
																									(
																									(long) (BgL_offsetz00_3074) -
																									OBJECT_TYPE);
																								{	/* Ast/dump.scm 206 */
																									long BgL_modz00_3076;

																									{	/* Ast/dump.scm 206 */
																										int BgL_arg2645z00_3077;

																										BgL_arg2645z00_3077 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 206 */
																											long BgL_auxz00_5329;

																											BgL_auxz00_5329 =
																												(long)
																												(BgL_arg2645z00_3077);
																											BgL_modz00_3076 =
																												(BgL_offsetz00_3075 /
																												BgL_auxz00_5329);
																									}}
																									{	/* Ast/dump.scm 206 */
																										long BgL_restz00_3078;

																										{	/* Ast/dump.scm 206 */
																											int BgL_arg2644z00_3079;

																											BgL_arg2644z00_3079 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 206 */
																												long BgL_auxz00_5333;

																												BgL_auxz00_5333 =
																													(long)
																													(BgL_arg2644z00_3079);
																												BgL_restz00_3078 =
																													(BgL_offsetz00_3075 %
																													BgL_auxz00_5333);
																										}}
																										{	/* Ast/dump.scm 206 */

																											BgL_method3371z00_3068 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_3073,
																													(int)
																													(BgL_modz00_3076)),
																												(int)
																												(BgL_restz00_3078));
																			}}}}}}}}
																			BgL_arg3804z00_1658 =
																				PROCEDURE_ENTRY(BgL_method3371z00_3068)
																				(BgL_method3371z00_3068,
																				(obj_t) (BgL_nodez00_3067), BEOA);
																}}}
																BgL_newtail3327z00_1656 =
																	MAKE_PAIR(BgL_arg3804z00_1658, BNIL);
															}
															SET_CDR(BgL_tail3326z00_1653,
																BgL_newtail3327z00_1656);
															{
																obj_t BgL_tail3326z00_5347;

																obj_t BgL_l3323z00_5345;

																BgL_l3323z00_5345 = CDR(BgL_l3323z00_1652);
																BgL_tail3326z00_5347 = BgL_newtail3327z00_1656;
																BgL_tail3326z00_1653 = BgL_tail3326z00_5347;
																BgL_l3323z00_1652 = BgL_l3323z00_5345;
																goto BgL_zc3anonymousza33800ze3z83_1654;
															}
														}
												}
											}
										}
								}
								BgL_arg3796z00_1644 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3797z00_1645, BNIL);
							}
							return MAKE_PAIR(BgL_idz00_1612, BgL_arg3796z00_1644);
						}
				}
			}
		}
	}



/* node->sexp-vlength3397 */
	obj_t BGl_nodezd2ze3sexpzd2vlength3397ze3zzast_dumpz00(obj_t BgL_envz00_4101,
		obj_t BgL_nodez00_4102)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 191 */
			{
				BgL_vlengthz00_bglt BgL_nodez00_1595;

				BgL_nodez00_1595 = (BgL_vlengthz00_bglt) (BgL_nodez00_4102);
				{	/* Ast/dump.scm 194 */
					obj_t BgL_arg3766z00_1599;

					obj_t BgL_arg3767z00_1600;

					BgL_arg3766z00_1599 = CNST_TABLE_REF(((long) 20));
					{	/* Ast/dump.scm 194 */
						obj_t BgL_arg3768z00_1601;

						{	/* Ast/dump.scm 194 */
							obj_t BgL_arg3771z00_1604;

							{	/* Ast/dump.scm 194 */
								obj_t BgL_pairz00_2932;

								{
									BgL_externz00_bglt BgL_auxz00_5352;

									BgL_auxz00_5352 = (BgL_externz00_bglt) (BgL_nodez00_1595);
									BgL_pairz00_2932 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5352))->
										BgL_exprza2za2);
								}
								BgL_arg3771z00_1604 = CAR(BgL_pairz00_2932);
							}
							{	/* Ast/dump.scm 194 */
								BgL_nodez00_bglt BgL_nodez00_2933;

								BgL_nodez00_2933 = (BgL_nodez00_bglt) (BgL_arg3771z00_1604);
								{	/* Ast/dump.scm 194 */
									obj_t BgL_method3371z00_2934;

									{	/* Ast/dump.scm 194 */
										BgL_objectz00_bglt BgL_objz00_2935;

										BgL_objz00_2935 = (BgL_objectz00_bglt) (BgL_nodez00_2933);
										{	/* Ast/dump.scm 194 */
											long BgL_objzd2classzd2numz00_2936;

											BgL_objzd2classzd2numz00_2936 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2935);
											{	/* Ast/dump.scm 194 */
												obj_t BgL_arg2643z00_2937;

												BgL_arg2643z00_2937 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 194 */
													obj_t BgL_arrayz00_2939;

													int BgL_offsetz00_2940;

													BgL_arrayz00_2939 = BgL_arg2643z00_2937;
													BgL_offsetz00_2940 =
														(int) (BgL_objzd2classzd2numz00_2936);
													{	/* Ast/dump.scm 194 */
														long BgL_offsetz00_2941;

														BgL_offsetz00_2941 =
															((long) (BgL_offsetz00_2940) - OBJECT_TYPE);
														{	/* Ast/dump.scm 194 */
															long BgL_modz00_2942;

															{	/* Ast/dump.scm 194 */
																int BgL_arg2645z00_2943;

																BgL_arg2645z00_2943 = (int) (((long) 16));
																{	/* Ast/dump.scm 194 */
																	long BgL_auxz00_5365;

																	BgL_auxz00_5365 =
																		(long) (BgL_arg2645z00_2943);
																	BgL_modz00_2942 =
																		(BgL_offsetz00_2941 / BgL_auxz00_5365);
															}}
															{	/* Ast/dump.scm 194 */
																long BgL_restz00_2944;

																{	/* Ast/dump.scm 194 */
																	int BgL_arg2644z00_2945;

																	BgL_arg2644z00_2945 = (int) (((long) 16));
																	{	/* Ast/dump.scm 194 */
																		long BgL_auxz00_5369;

																		BgL_auxz00_5369 =
																			(long) (BgL_arg2644z00_2945);
																		BgL_restz00_2944 =
																			(BgL_offsetz00_2941 % BgL_auxz00_5369);
																}}
																{	/* Ast/dump.scm 194 */

																	BgL_method3371z00_2934 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2939,
																			(int) (BgL_modz00_2942)),
																		(int) (BgL_restz00_2944));
									}}}}}}}}
									BgL_arg3768z00_1601 =
										PROCEDURE_ENTRY(BgL_method3371z00_2934)
										(BgL_method3371z00_2934, (obj_t) (BgL_nodez00_2933), BEOA);
						}}}
						{	/* Ast/dump.scm 194 */
							obj_t BgL_list3770z00_1603;

							BgL_list3770z00_1603 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg3767z00_1600 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3768z00_1601,
								BgL_list3770z00_1603);
					}}
					return MAKE_PAIR(BgL_arg3766z00_1599, BgL_arg3767z00_1600);
				}
			}
		}
	}



/* node->sexp-new3395 */
	obj_t BGl_nodezd2ze3sexpzd2new3395ze3zzast_dumpz00(obj_t BgL_envz00_4103,
		obj_t BgL_nodez00_4104)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 183 */
			{
				BgL_newz00_bglt BgL_nodez00_1563;

				BgL_nodez00_1563 = (BgL_newz00_bglt) (BgL_nodez00_4104);
				{	/* Ast/dump.scm 186 */
					obj_t BgL_arg3747z00_1567;

					obj_t BgL_arg3748z00_1568;

					BgL_arg3747z00_1567 = CNST_TABLE_REF(((long) 21));
					{	/* Ast/dump.scm 186 */
						obj_t BgL_arg3749z00_1569;

						obj_t BgL_arg3750z00_1570;

						{	/* Ast/dump.scm 186 */
							BgL_typez00_bglt BgL_obj1508z00_2864;

							{
								BgL_nodez00_bglt BgL_auxz00_5384;

								BgL_auxz00_5384 = (BgL_nodez00_bglt) (BgL_nodez00_1563);
								BgL_obj1508z00_2864 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5384))->BgL_typez00);
							}
							BgL_arg3749z00_1569 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2864))->BgL_idz00);
						}
						{	/* Ast/dump.scm 186 */
							obj_t BgL_arg3753z00_1573;

							{	/* Ast/dump.scm 186 */
								obj_t BgL_l3310z00_1575;

								{
									BgL_externz00_bglt BgL_auxz00_5388;

									BgL_auxz00_5388 = (BgL_externz00_bglt) (BgL_nodez00_1563);
									BgL_l3310z00_1575 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5388))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3310z00_1575))
									{	/* Ast/dump.scm 186 */
										BgL_arg3753z00_1573 = BNIL;
									}
								else
									{	/* Ast/dump.scm 186 */
										obj_t BgL_head3312z00_1577;

										{	/* Ast/dump.scm 186 */
											obj_t BgL_arg3762z00_1590;

											{	/* Ast/dump.scm 186 */
												obj_t BgL_arg3764z00_1592;

												BgL_arg3764z00_1592 = CAR(BgL_l3310z00_1575);
												{	/* Ast/dump.scm 186 */
													BgL_nodez00_bglt BgL_nodez00_2868;

													BgL_nodez00_2868 =
														(BgL_nodez00_bglt) (BgL_arg3764z00_1592);
													{	/* Ast/dump.scm 186 */
														obj_t BgL_method3371z00_2869;

														{	/* Ast/dump.scm 186 */
															BgL_objectz00_bglt BgL_objz00_2870;

															BgL_objz00_2870 =
																(BgL_objectz00_bglt) (BgL_nodez00_2868);
															{	/* Ast/dump.scm 186 */
																long BgL_objzd2classzd2numz00_2871;

																BgL_objzd2classzd2numz00_2871 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2870);
																{	/* Ast/dump.scm 186 */
																	obj_t BgL_arg2643z00_2872;

																	BgL_arg2643z00_2872 =
																		PROCEDURE_REF
																		(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																		(int) (((long) 1)));
																	{	/* Ast/dump.scm 186 */
																		obj_t BgL_arrayz00_2874;

																		int BgL_offsetz00_2875;

																		BgL_arrayz00_2874 = BgL_arg2643z00_2872;
																		BgL_offsetz00_2875 =
																			(int) (BgL_objzd2classzd2numz00_2871);
																		{	/* Ast/dump.scm 186 */
																			long BgL_offsetz00_2876;

																			BgL_offsetz00_2876 =
																				(
																				(long) (BgL_offsetz00_2875) -
																				OBJECT_TYPE);
																			{	/* Ast/dump.scm 186 */
																				long BgL_modz00_2877;

																				{	/* Ast/dump.scm 186 */
																					int BgL_arg2645z00_2878;

																					BgL_arg2645z00_2878 =
																						(int) (((long) 16));
																					{	/* Ast/dump.scm 186 */
																						long BgL_auxz00_5403;

																						BgL_auxz00_5403 =
																							(long) (BgL_arg2645z00_2878);
																						BgL_modz00_2877 =
																							(BgL_offsetz00_2876 /
																							BgL_auxz00_5403);
																				}}
																				{	/* Ast/dump.scm 186 */
																					long BgL_restz00_2879;

																					{	/* Ast/dump.scm 186 */
																						int BgL_arg2644z00_2880;

																						BgL_arg2644z00_2880 =
																							(int) (((long) 16));
																						{	/* Ast/dump.scm 186 */
																							long BgL_auxz00_5407;

																							BgL_auxz00_5407 =
																								(long) (BgL_arg2644z00_2880);
																							BgL_restz00_2879 =
																								(BgL_offsetz00_2876 %
																								BgL_auxz00_5407);
																					}}
																					{	/* Ast/dump.scm 186 */

																						BgL_method3371z00_2869 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2874,
																								(int) (BgL_modz00_2877)),
																							(int) (BgL_restz00_2879));
														}}}}}}}}
														BgL_arg3762z00_1590 =
															PROCEDURE_ENTRY(BgL_method3371z00_2869)
															(BgL_method3371z00_2869,
															(obj_t) (BgL_nodez00_2868), BEOA);
											}}}
											BgL_head3312z00_1577 =
												MAKE_PAIR(BgL_arg3762z00_1590, BNIL);
										}
										{	/* Ast/dump.scm 186 */
											obj_t BgL_g3315z00_1578;

											BgL_g3315z00_1578 = CDR(BgL_l3310z00_1575);
											{
												obj_t BgL_l3310z00_1580;

												obj_t BgL_tail3313z00_1581;

												BgL_l3310z00_1580 = BgL_g3315z00_1578;
												BgL_tail3313z00_1581 = BgL_head3312z00_1577;
											BgL_zc3anonymousza33756ze3z83_1582:
												if (NULLP(BgL_l3310z00_1580))
													{	/* Ast/dump.scm 186 */
														BgL_arg3753z00_1573 = BgL_head3312z00_1577;
													}
												else
													{	/* Ast/dump.scm 186 */
														obj_t BgL_newtail3314z00_1584;

														{	/* Ast/dump.scm 186 */
															obj_t BgL_arg3759z00_1586;

															{	/* Ast/dump.scm 186 */
																obj_t BgL_arg3761z00_1588;

																BgL_arg3761z00_1588 = CAR(BgL_l3310z00_1580);
																{	/* Ast/dump.scm 186 */
																	BgL_nodez00_bglt BgL_nodez00_2899;

																	BgL_nodez00_2899 =
																		(BgL_nodez00_bglt) (BgL_arg3761z00_1588);
																	{	/* Ast/dump.scm 186 */
																		obj_t BgL_method3371z00_2900;

																		{	/* Ast/dump.scm 186 */
																			BgL_objectz00_bglt BgL_objz00_2901;

																			BgL_objz00_2901 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2899);
																			{	/* Ast/dump.scm 186 */
																				long BgL_objzd2classzd2numz00_2902;

																				BgL_objzd2classzd2numz00_2902 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2901);
																				{	/* Ast/dump.scm 186 */
																					obj_t BgL_arg2643z00_2903;

																					BgL_arg2643z00_2903 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																						(int) (((long) 1)));
																					{	/* Ast/dump.scm 186 */
																						obj_t BgL_arrayz00_2905;

																						int BgL_offsetz00_2906;

																						BgL_arrayz00_2905 =
																							BgL_arg2643z00_2903;
																						BgL_offsetz00_2906 =
																							(int)
																							(BgL_objzd2classzd2numz00_2902);
																						{	/* Ast/dump.scm 186 */
																							long BgL_offsetz00_2907;

																							BgL_offsetz00_2907 =
																								(
																								(long) (BgL_offsetz00_2906) -
																								OBJECT_TYPE);
																							{	/* Ast/dump.scm 186 */
																								long BgL_modz00_2908;

																								{	/* Ast/dump.scm 186 */
																									int BgL_arg2645z00_2909;

																									BgL_arg2645z00_2909 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 186 */
																										long BgL_auxz00_5431;

																										BgL_auxz00_5431 =
																											(long)
																											(BgL_arg2645z00_2909);
																										BgL_modz00_2908 =
																											(BgL_offsetz00_2907 /
																											BgL_auxz00_5431);
																								}}
																								{	/* Ast/dump.scm 186 */
																									long BgL_restz00_2910;

																									{	/* Ast/dump.scm 186 */
																										int BgL_arg2644z00_2911;

																										BgL_arg2644z00_2911 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 186 */
																											long BgL_auxz00_5435;

																											BgL_auxz00_5435 =
																												(long)
																												(BgL_arg2644z00_2911);
																											BgL_restz00_2910 =
																												(BgL_offsetz00_2907 %
																												BgL_auxz00_5435);
																									}}
																									{	/* Ast/dump.scm 186 */

																										BgL_method3371z00_2900 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2905,
																												(int)
																												(BgL_modz00_2908)),
																											(int) (BgL_restz00_2910));
																		}}}}}}}}
																		BgL_arg3759z00_1586 =
																			PROCEDURE_ENTRY(BgL_method3371z00_2900)
																			(BgL_method3371z00_2900,
																			(obj_t) (BgL_nodez00_2899), BEOA);
															}}}
															BgL_newtail3314z00_1584 =
																MAKE_PAIR(BgL_arg3759z00_1586, BNIL);
														}
														SET_CDR(BgL_tail3313z00_1581,
															BgL_newtail3314z00_1584);
														{
															obj_t BgL_tail3313z00_5449;

															obj_t BgL_l3310z00_5447;

															BgL_l3310z00_5447 = CDR(BgL_l3310z00_1580);
															BgL_tail3313z00_5449 = BgL_newtail3314z00_1584;
															BgL_tail3313z00_1581 = BgL_tail3313z00_5449;
															BgL_l3310z00_1580 = BgL_l3310z00_5447;
															goto BgL_zc3anonymousza33756ze3z83_1582;
														}
													}
											}
										}
									}
							}
							BgL_arg3750z00_1570 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg3753z00_1573, BNIL);
						}
						{	/* Ast/dump.scm 186 */
							obj_t BgL_list3751z00_1571;

							BgL_list3751z00_1571 = MAKE_PAIR(BgL_arg3750z00_1570, BNIL);
							BgL_arg3748z00_1568 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3749z00_1569,
								BgL_list3751z00_1571);
						}
					}
					return MAKE_PAIR(BgL_arg3747z00_1567, BgL_arg3748z00_1568);
				}
			}
		}
	}



/* node->sexp-setfield3393 */
	obj_t BGl_nodezd2ze3sexpzd2setfield3393ze3zzast_dumpz00(obj_t BgL_envz00_4105,
		obj_t BgL_nodez00_4106)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 174 */
			{
				BgL_setfieldz00_bglt BgL_nodez00_1523;

				BgL_nodez00_1523 = (BgL_setfieldz00_bglt) (BgL_nodez00_4106);
				{	/* Ast/dump.scm 177 */
					obj_t BgL_arg3718z00_1527;

					obj_t BgL_arg3719z00_1528;

					BgL_arg3718z00_1527 = CNST_TABLE_REF(((long) 22));
					{	/* Ast/dump.scm 177 */
						obj_t BgL_arg3720z00_1529;

						obj_t BgL_arg3721z00_1530;

						obj_t BgL_arg3722z00_1531;

						{	/* Ast/dump.scm 177 */
							obj_t BgL_arg3725z00_1534;

							obj_t BgL_arg3726z00_1535;

							BgL_arg3725z00_1534 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1523))->BgL_fnamez00);
							{	/* Ast/dump.scm 177 */
								obj_t BgL_arg3727z00_1536;

								{	/* Ast/dump.scm 177 */
									BgL_typez00_bglt BgL_obj1508z00_2794;

									BgL_obj1508z00_2794 =
										(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1523))->
										BgL_ftypez00);
									BgL_arg3727z00_1536 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2794))->BgL_idz00);
								}
								{	/* Ast/dump.scm 177 */
									obj_t BgL_list3729z00_1538;

									BgL_list3729z00_1538 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3726z00_1535 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3727z00_1536, BgL_list3729z00_1538);
							}}
							BgL_arg3720z00_1529 =
								MAKE_PAIR(BgL_arg3725z00_1534, BgL_arg3726z00_1535);
						}
						{	/* Ast/dump.scm 178 */
							BgL_typez00_bglt BgL_obj1508z00_2796;

							BgL_obj1508z00_2796 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1523))->BgL_otypez00);
							BgL_arg3721z00_1530 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2796))->BgL_idz00);
						}
						{	/* Ast/dump.scm 178 */
							obj_t BgL_arg3732z00_1541;

							{	/* Ast/dump.scm 178 */
								obj_t BgL_l3304z00_1543;

								{
									BgL_externz00_bglt BgL_auxz00_5464;

									BgL_auxz00_5464 = (BgL_externz00_bglt) (BgL_nodez00_1523);
									BgL_l3304z00_1543 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5464))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3304z00_1543))
									{	/* Ast/dump.scm 178 */
										BgL_arg3732z00_1541 = BNIL;
									}
								else
									{	/* Ast/dump.scm 178 */
										obj_t BgL_head3306z00_1545;

										{	/* Ast/dump.scm 178 */
											obj_t BgL_arg3741z00_1558;

											{	/* Ast/dump.scm 178 */
												obj_t BgL_arg3745z00_1560;

												BgL_arg3745z00_1560 = CAR(BgL_l3304z00_1543);
												{	/* Ast/dump.scm 178 */
													BgL_nodez00_bglt BgL_nodez00_2800;

													BgL_nodez00_2800 =
														(BgL_nodez00_bglt) (BgL_arg3745z00_1560);
													{	/* Ast/dump.scm 178 */
														obj_t BgL_method3371z00_2801;

														{	/* Ast/dump.scm 178 */
															BgL_objectz00_bglt BgL_objz00_2802;

															BgL_objz00_2802 =
																(BgL_objectz00_bglt) (BgL_nodez00_2800);
															{	/* Ast/dump.scm 178 */
																long BgL_objzd2classzd2numz00_2803;

																BgL_objzd2classzd2numz00_2803 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2802);
																{	/* Ast/dump.scm 178 */
																	obj_t BgL_arg2643z00_2804;

																	BgL_arg2643z00_2804 =
																		PROCEDURE_REF
																		(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																		(int) (((long) 1)));
																	{	/* Ast/dump.scm 178 */
																		obj_t BgL_arrayz00_2806;

																		int BgL_offsetz00_2807;

																		BgL_arrayz00_2806 = BgL_arg2643z00_2804;
																		BgL_offsetz00_2807 =
																			(int) (BgL_objzd2classzd2numz00_2803);
																		{	/* Ast/dump.scm 178 */
																			long BgL_offsetz00_2808;

																			BgL_offsetz00_2808 =
																				(
																				(long) (BgL_offsetz00_2807) -
																				OBJECT_TYPE);
																			{	/* Ast/dump.scm 178 */
																				long BgL_modz00_2809;

																				{	/* Ast/dump.scm 178 */
																					int BgL_arg2645z00_2810;

																					BgL_arg2645z00_2810 =
																						(int) (((long) 16));
																					{	/* Ast/dump.scm 178 */
																						long BgL_auxz00_5479;

																						BgL_auxz00_5479 =
																							(long) (BgL_arg2645z00_2810);
																						BgL_modz00_2809 =
																							(BgL_offsetz00_2808 /
																							BgL_auxz00_5479);
																				}}
																				{	/* Ast/dump.scm 178 */
																					long BgL_restz00_2811;

																					{	/* Ast/dump.scm 178 */
																						int BgL_arg2644z00_2812;

																						BgL_arg2644z00_2812 =
																							(int) (((long) 16));
																						{	/* Ast/dump.scm 178 */
																							long BgL_auxz00_5483;

																							BgL_auxz00_5483 =
																								(long) (BgL_arg2644z00_2812);
																							BgL_restz00_2811 =
																								(BgL_offsetz00_2808 %
																								BgL_auxz00_5483);
																					}}
																					{	/* Ast/dump.scm 178 */

																						BgL_method3371z00_2801 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2806,
																								(int) (BgL_modz00_2809)),
																							(int) (BgL_restz00_2811));
														}}}}}}}}
														BgL_arg3741z00_1558 =
															PROCEDURE_ENTRY(BgL_method3371z00_2801)
															(BgL_method3371z00_2801,
															(obj_t) (BgL_nodez00_2800), BEOA);
											}}}
											BgL_head3306z00_1545 =
												MAKE_PAIR(BgL_arg3741z00_1558, BNIL);
										}
										{	/* Ast/dump.scm 178 */
											obj_t BgL_g3309z00_1546;

											BgL_g3309z00_1546 = CDR(BgL_l3304z00_1543);
											{
												obj_t BgL_l3304z00_1548;

												obj_t BgL_tail3307z00_1549;

												BgL_l3304z00_1548 = BgL_g3309z00_1546;
												BgL_tail3307z00_1549 = BgL_head3306z00_1545;
											BgL_zc3anonymousza33735ze3z83_1550:
												if (NULLP(BgL_l3304z00_1548))
													{	/* Ast/dump.scm 178 */
														BgL_arg3732z00_1541 = BgL_head3306z00_1545;
													}
												else
													{	/* Ast/dump.scm 178 */
														obj_t BgL_newtail3308z00_1552;

														{	/* Ast/dump.scm 178 */
															obj_t BgL_arg3738z00_1554;

															{	/* Ast/dump.scm 178 */
																obj_t BgL_arg3740z00_1556;

																BgL_arg3740z00_1556 = CAR(BgL_l3304z00_1548);
																{	/* Ast/dump.scm 178 */
																	BgL_nodez00_bglt BgL_nodez00_2831;

																	BgL_nodez00_2831 =
																		(BgL_nodez00_bglt) (BgL_arg3740z00_1556);
																	{	/* Ast/dump.scm 178 */
																		obj_t BgL_method3371z00_2832;

																		{	/* Ast/dump.scm 178 */
																			BgL_objectz00_bglt BgL_objz00_2833;

																			BgL_objz00_2833 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2831);
																			{	/* Ast/dump.scm 178 */
																				long BgL_objzd2classzd2numz00_2834;

																				BgL_objzd2classzd2numz00_2834 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2833);
																				{	/* Ast/dump.scm 178 */
																					obj_t BgL_arg2643z00_2835;

																					BgL_arg2643z00_2835 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																						(int) (((long) 1)));
																					{	/* Ast/dump.scm 178 */
																						obj_t BgL_arrayz00_2837;

																						int BgL_offsetz00_2838;

																						BgL_arrayz00_2837 =
																							BgL_arg2643z00_2835;
																						BgL_offsetz00_2838 =
																							(int)
																							(BgL_objzd2classzd2numz00_2834);
																						{	/* Ast/dump.scm 178 */
																							long BgL_offsetz00_2839;

																							BgL_offsetz00_2839 =
																								(
																								(long) (BgL_offsetz00_2838) -
																								OBJECT_TYPE);
																							{	/* Ast/dump.scm 178 */
																								long BgL_modz00_2840;

																								{	/* Ast/dump.scm 178 */
																									int BgL_arg2645z00_2841;

																									BgL_arg2645z00_2841 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 178 */
																										long BgL_auxz00_5507;

																										BgL_auxz00_5507 =
																											(long)
																											(BgL_arg2645z00_2841);
																										BgL_modz00_2840 =
																											(BgL_offsetz00_2839 /
																											BgL_auxz00_5507);
																								}}
																								{	/* Ast/dump.scm 178 */
																									long BgL_restz00_2842;

																									{	/* Ast/dump.scm 178 */
																										int BgL_arg2644z00_2843;

																										BgL_arg2644z00_2843 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 178 */
																											long BgL_auxz00_5511;

																											BgL_auxz00_5511 =
																												(long)
																												(BgL_arg2644z00_2843);
																											BgL_restz00_2842 =
																												(BgL_offsetz00_2839 %
																												BgL_auxz00_5511);
																									}}
																									{	/* Ast/dump.scm 178 */

																										BgL_method3371z00_2832 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2837,
																												(int)
																												(BgL_modz00_2840)),
																											(int) (BgL_restz00_2842));
																		}}}}}}}}
																		BgL_arg3738z00_1554 =
																			PROCEDURE_ENTRY(BgL_method3371z00_2832)
																			(BgL_method3371z00_2832,
																			(obj_t) (BgL_nodez00_2831), BEOA);
															}}}
															BgL_newtail3308z00_1552 =
																MAKE_PAIR(BgL_arg3738z00_1554, BNIL);
														}
														SET_CDR(BgL_tail3307z00_1549,
															BgL_newtail3308z00_1552);
														{
															obj_t BgL_tail3307z00_5525;

															obj_t BgL_l3304z00_5523;

															BgL_l3304z00_5523 = CDR(BgL_l3304z00_1548);
															BgL_tail3307z00_5525 = BgL_newtail3308z00_1552;
															BgL_tail3307z00_1549 = BgL_tail3307z00_5525;
															BgL_l3304z00_1548 = BgL_l3304z00_5523;
															goto BgL_zc3anonymousza33735ze3z83_1550;
														}
													}
											}
										}
									}
							}
							BgL_arg3722z00_1531 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg3732z00_1541, BNIL);
						}
						{	/* Ast/dump.scm 177 */
							obj_t BgL_list3723z00_1532;

							{	/* Ast/dump.scm 177 */
								obj_t BgL_arg3724z00_1533;

								BgL_arg3724z00_1533 = MAKE_PAIR(BgL_arg3722z00_1531, BNIL);
								BgL_list3723z00_1532 =
									MAKE_PAIR(BgL_arg3721z00_1530, BgL_arg3724z00_1533);
							}
							BgL_arg3719z00_1528 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3720z00_1529,
								BgL_list3723z00_1532);
						}
					}
					return MAKE_PAIR(BgL_arg3718z00_1527, BgL_arg3719z00_1528);
				}
			}
		}
	}



/* node->sexp-getfield3391 */
	obj_t BGl_nodezd2ze3sexpzd2getfield3391ze3zzast_dumpz00(obj_t BgL_envz00_4107,
		obj_t BgL_nodez00_4108)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 165 */
			{
				BgL_getfieldz00_bglt BgL_nodez00_1499;

				BgL_nodez00_1499 = (BgL_getfieldz00_bglt) (BgL_nodez00_4108);
				{	/* Ast/dump.scm 168 */
					obj_t BgL_arg3699z00_1503;

					obj_t BgL_arg3700z00_1504;

					BgL_arg3699z00_1503 = CNST_TABLE_REF(((long) 23));
					{	/* Ast/dump.scm 168 */
						obj_t BgL_arg3701z00_1505;

						obj_t BgL_arg3702z00_1506;

						obj_t BgL_arg3703z00_1507;

						{	/* Ast/dump.scm 168 */
							obj_t BgL_arg3708z00_1512;

							obj_t BgL_arg3709z00_1513;

							BgL_arg3708z00_1512 =
								(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1499))->BgL_fnamez00);
							{	/* Ast/dump.scm 168 */
								obj_t BgL_arg3710z00_1514;

								{	/* Ast/dump.scm 168 */
									BgL_typez00_bglt BgL_obj1508z00_2760;

									BgL_obj1508z00_2760 =
										(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1499))->
										BgL_ftypez00);
									BgL_arg3710z00_1514 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2760))->BgL_idz00);
								}
								{	/* Ast/dump.scm 168 */
									obj_t BgL_list3712z00_1516;

									BgL_list3712z00_1516 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3709z00_1513 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3710z00_1514, BgL_list3712z00_1516);
							}}
							BgL_arg3701z00_1505 =
								MAKE_PAIR(BgL_arg3708z00_1512, BgL_arg3709z00_1513);
						}
						{	/* Ast/dump.scm 169 */
							BgL_typez00_bglt BgL_obj1508z00_2762;

							BgL_obj1508z00_2762 =
								(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1499))->BgL_otypez00);
							BgL_arg3702z00_1506 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2762))->BgL_idz00);
						}
						{	/* Ast/dump.scm 169 */
							obj_t BgL_arg3715z00_1519;

							{	/* Ast/dump.scm 169 */
								obj_t BgL_pairz00_2764;

								{
									BgL_externz00_bglt BgL_auxz00_5541;

									BgL_auxz00_5541 = (BgL_externz00_bglt) (BgL_nodez00_1499);
									BgL_pairz00_2764 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5541))->
										BgL_exprza2za2);
								}
								BgL_arg3715z00_1519 = CAR(BgL_pairz00_2764);
							}
							{	/* Ast/dump.scm 169 */
								BgL_nodez00_bglt BgL_nodez00_2765;

								BgL_nodez00_2765 = (BgL_nodez00_bglt) (BgL_arg3715z00_1519);
								{	/* Ast/dump.scm 169 */
									obj_t BgL_method3371z00_2766;

									{	/* Ast/dump.scm 169 */
										BgL_objectz00_bglt BgL_objz00_2767;

										BgL_objz00_2767 = (BgL_objectz00_bglt) (BgL_nodez00_2765);
										{	/* Ast/dump.scm 169 */
											long BgL_objzd2classzd2numz00_2768;

											BgL_objzd2classzd2numz00_2768 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2767);
											{	/* Ast/dump.scm 169 */
												obj_t BgL_arg2643z00_2769;

												BgL_arg2643z00_2769 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 169 */
													obj_t BgL_arrayz00_2771;

													int BgL_offsetz00_2772;

													BgL_arrayz00_2771 = BgL_arg2643z00_2769;
													BgL_offsetz00_2772 =
														(int) (BgL_objzd2classzd2numz00_2768);
													{	/* Ast/dump.scm 169 */
														long BgL_offsetz00_2773;

														BgL_offsetz00_2773 =
															((long) (BgL_offsetz00_2772) - OBJECT_TYPE);
														{	/* Ast/dump.scm 169 */
															long BgL_modz00_2774;

															{	/* Ast/dump.scm 169 */
																int BgL_arg2645z00_2775;

																BgL_arg2645z00_2775 = (int) (((long) 16));
																{	/* Ast/dump.scm 169 */
																	long BgL_auxz00_5554;

																	BgL_auxz00_5554 =
																		(long) (BgL_arg2645z00_2775);
																	BgL_modz00_2774 =
																		(BgL_offsetz00_2773 / BgL_auxz00_5554);
															}}
															{	/* Ast/dump.scm 169 */
																long BgL_restz00_2776;

																{	/* Ast/dump.scm 169 */
																	int BgL_arg2644z00_2777;

																	BgL_arg2644z00_2777 = (int) (((long) 16));
																	{	/* Ast/dump.scm 169 */
																		long BgL_auxz00_5558;

																		BgL_auxz00_5558 =
																			(long) (BgL_arg2644z00_2777);
																		BgL_restz00_2776 =
																			(BgL_offsetz00_2773 % BgL_auxz00_5558);
																}}
																{	/* Ast/dump.scm 169 */

																	BgL_method3371z00_2766 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2771,
																			(int) (BgL_modz00_2774)),
																		(int) (BgL_restz00_2776));
									}}}}}}}}
									BgL_arg3703z00_1507 =
										PROCEDURE_ENTRY(BgL_method3371z00_2766)
										(BgL_method3371z00_2766, (obj_t) (BgL_nodez00_2765), BEOA);
						}}}
						{	/* Ast/dump.scm 168 */
							obj_t BgL_list3705z00_1509;

							{	/* Ast/dump.scm 168 */
								obj_t BgL_arg3706z00_1510;

								{	/* Ast/dump.scm 168 */
									obj_t BgL_arg3707z00_1511;

									BgL_arg3707z00_1511 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg3706z00_1510 =
										MAKE_PAIR(BgL_arg3703z00_1507, BgL_arg3707z00_1511);
								}
								BgL_list3705z00_1509 =
									MAKE_PAIR(BgL_arg3702z00_1506, BgL_arg3706z00_1510);
							}
							BgL_arg3700z00_1504 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3701z00_1505,
								BgL_list3705z00_1509);
					}}
					return MAKE_PAIR(BgL_arg3699z00_1503, BgL_arg3700z00_1504);
				}
			}
		}
	}



/* node->sexp-pragma3389 */
	obj_t BGl_nodezd2ze3sexpzd2pragma3389ze3zzast_dumpz00(obj_t BgL_envz00_4109,
		obj_t BgL_nodez00_4110)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 150 */
			{
				BgL_pragmaz00_bglt BgL_nodez00_1463;

				BgL_nodez00_1463 = (BgL_pragmaz00_bglt) (BgL_nodez00_4110);
				{	/* Ast/dump.scm 152 */
					obj_t BgL_arg3675z00_1466;

					obj_t BgL_arg3677z00_1467;

					{
						BgL_nodez00_bglt BgL_auxz00_5574;

						BgL_auxz00_5574 = (BgL_nodez00_bglt) (BgL_nodez00_1463);
						BgL_arg3675z00_1466 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_5574))->BgL_locz00);
					}
					{	/* Ast/dump.scm 153 */
						obj_t BgL_pz00_1468;

						{	/* Ast/dump.scm 153 */
							bool_t BgL_testz00_5577;

							{	/* Ast/dump.scm 153 */
								BgL_nodezf2effectzf2_bglt BgL_obj2109z00_2689;

								BgL_obj2109z00_2689 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1463);
								BgL_testz00_5577 =
									CBOOL(
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_obj2109z00_2689))->
										BgL_sidezd2effectzf3z21));
							}
							if (BgL_testz00_5577)
								{	/* Ast/dump.scm 153 */
									BgL_pz00_1468 = CNST_TABLE_REF(((long) 24));
								}
							else
								{	/* Ast/dump.scm 153 */
									BgL_pz00_1468 = CNST_TABLE_REF(((long) 25));
						}}
						{	/* Ast/dump.scm 156 */
							obj_t BgL_arg3678z00_1469;

							obj_t BgL_arg3679z00_1470;

							if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 157 */
									obj_t BgL_arg3680z00_1471;

									{
										BgL_typez00_bglt BgL_auxz00_5585;

										BgL_auxz00_5585 =
											BGl_getzd2typezd2zztype_typeofz00(
											(BgL_nodez00_bglt) (BgL_nodez00_1463));
										BgL_arg3680z00_1471 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_5585))->BgL_idz00);
									}
									BgL_arg3678z00_1469 =
										BGl_makezd2typedzd2identz00zzast_identz00(BgL_pz00_1468,
										BgL_arg3680z00_1471);
								}
							else
								{	/* Ast/dump.scm 156 */
									BgL_arg3678z00_1469 = BgL_pz00_1468;
								}
							{	/* Ast/dump.scm 159 */
								obj_t BgL_arg3682z00_1473;

								obj_t BgL_arg3683z00_1474;

								BgL_arg3682z00_1473 =
									(((BgL_pragmaz00_bglt) CREF(BgL_nodez00_1463))->
									BgL_formatz00);
								{	/* Ast/dump.scm 160 */
									obj_t BgL_arg3685z00_1476;

									{	/* Ast/dump.scm 160 */
										obj_t BgL_l3298z00_1478;

										{
											BgL_externz00_bglt BgL_auxz00_5591;

											BgL_auxz00_5591 = (BgL_externz00_bglt) (BgL_nodez00_1463);
											BgL_l3298z00_1478 =
												(((BgL_externz00_bglt) CREF(BgL_auxz00_5591))->
												BgL_exprza2za2);
										}
										if (NULLP(BgL_l3298z00_1478))
											{	/* Ast/dump.scm 160 */
												BgL_arg3685z00_1476 = BNIL;
											}
										else
											{	/* Ast/dump.scm 160 */
												obj_t BgL_head3300z00_1480;

												{	/* Ast/dump.scm 160 */
													obj_t BgL_arg3694z00_1493;

													{	/* Ast/dump.scm 160 */
														obj_t BgL_arg3696z00_1495;

														BgL_arg3696z00_1495 = CAR(BgL_l3298z00_1478);
														{	/* Ast/dump.scm 160 */
															BgL_nodez00_bglt BgL_nodez00_2695;

															BgL_nodez00_2695 =
																(BgL_nodez00_bglt) (BgL_arg3696z00_1495);
															{	/* Ast/dump.scm 160 */
																obj_t BgL_method3371z00_2696;

																{	/* Ast/dump.scm 160 */
																	BgL_objectz00_bglt BgL_objz00_2697;

																	BgL_objz00_2697 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2695);
																	{	/* Ast/dump.scm 160 */
																		long BgL_objzd2classzd2numz00_2698;

																		BgL_objzd2classzd2numz00_2698 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2697);
																		{	/* Ast/dump.scm 160 */
																			obj_t BgL_arg2643z00_2699;

																			BgL_arg2643z00_2699 =
																				PROCEDURE_REF
																				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																				(int) (((long) 1)));
																			{	/* Ast/dump.scm 160 */
																				obj_t BgL_arrayz00_2701;

																				int BgL_offsetz00_2702;

																				BgL_arrayz00_2701 = BgL_arg2643z00_2699;
																				BgL_offsetz00_2702 =
																					(int) (BgL_objzd2classzd2numz00_2698);
																				{	/* Ast/dump.scm 160 */
																					long BgL_offsetz00_2703;

																					BgL_offsetz00_2703 =
																						(
																						(long) (BgL_offsetz00_2702) -
																						OBJECT_TYPE);
																					{	/* Ast/dump.scm 160 */
																						long BgL_modz00_2704;

																						{	/* Ast/dump.scm 160 */
																							int BgL_arg2645z00_2705;

																							BgL_arg2645z00_2705 =
																								(int) (((long) 16));
																							{	/* Ast/dump.scm 160 */
																								long BgL_auxz00_5606;

																								BgL_auxz00_5606 =
																									(long) (BgL_arg2645z00_2705);
																								BgL_modz00_2704 =
																									(BgL_offsetz00_2703 /
																									BgL_auxz00_5606);
																						}}
																						{	/* Ast/dump.scm 160 */
																							long BgL_restz00_2706;

																							{	/* Ast/dump.scm 160 */
																								int BgL_arg2644z00_2707;

																								BgL_arg2644z00_2707 =
																									(int) (((long) 16));
																								{	/* Ast/dump.scm 160 */
																									long BgL_auxz00_5610;

																									BgL_auxz00_5610 =
																										(long)
																										(BgL_arg2644z00_2707);
																									BgL_restz00_2706 =
																										(BgL_offsetz00_2703 %
																										BgL_auxz00_5610);
																							}}
																							{	/* Ast/dump.scm 160 */

																								BgL_method3371z00_2696 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2701,
																										(int) (BgL_modz00_2704)),
																									(int) (BgL_restz00_2706));
																}}}}}}}}
																BgL_arg3694z00_1493 =
																	PROCEDURE_ENTRY(BgL_method3371z00_2696)
																	(BgL_method3371z00_2696,
																	(obj_t) (BgL_nodez00_2695), BEOA);
													}}}
													BgL_head3300z00_1480 =
														MAKE_PAIR(BgL_arg3694z00_1493, BNIL);
												}
												{	/* Ast/dump.scm 160 */
													obj_t BgL_g3303z00_1481;

													BgL_g3303z00_1481 = CDR(BgL_l3298z00_1478);
													{
														obj_t BgL_l3298z00_1483;

														obj_t BgL_tail3301z00_1484;

														BgL_l3298z00_1483 = BgL_g3303z00_1481;
														BgL_tail3301z00_1484 = BgL_head3300z00_1480;
													BgL_zc3anonymousza33688ze3z83_1485:
														if (NULLP(BgL_l3298z00_1483))
															{	/* Ast/dump.scm 160 */
																BgL_arg3685z00_1476 = BgL_head3300z00_1480;
															}
														else
															{	/* Ast/dump.scm 160 */
																obj_t BgL_newtail3302z00_1487;

																{	/* Ast/dump.scm 160 */
																	obj_t BgL_arg3691z00_1489;

																	{	/* Ast/dump.scm 160 */
																		obj_t BgL_arg3693z00_1491;

																		BgL_arg3693z00_1491 =
																			CAR(BgL_l3298z00_1483);
																		{	/* Ast/dump.scm 160 */
																			BgL_nodez00_bglt BgL_nodez00_2726;

																			BgL_nodez00_2726 =
																				(BgL_nodez00_bglt)
																				(BgL_arg3693z00_1491);
																			{	/* Ast/dump.scm 160 */
																				obj_t BgL_method3371z00_2727;

																				{	/* Ast/dump.scm 160 */
																					BgL_objectz00_bglt BgL_objz00_2728;

																					BgL_objz00_2728 =
																						(BgL_objectz00_bglt)
																						(BgL_nodez00_2726);
																					{	/* Ast/dump.scm 160 */
																						long BgL_objzd2classzd2numz00_2729;

																						BgL_objzd2classzd2numz00_2729 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_2728);
																						{	/* Ast/dump.scm 160 */
																							obj_t BgL_arg2643z00_2730;

																							BgL_arg2643z00_2730 =
																								PROCEDURE_REF
																								(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																								(int) (((long) 1)));
																							{	/* Ast/dump.scm 160 */
																								obj_t BgL_arrayz00_2732;

																								int BgL_offsetz00_2733;

																								BgL_arrayz00_2732 =
																									BgL_arg2643z00_2730;
																								BgL_offsetz00_2733 =
																									(int)
																									(BgL_objzd2classzd2numz00_2729);
																								{	/* Ast/dump.scm 160 */
																									long BgL_offsetz00_2734;

																									BgL_offsetz00_2734 =
																										(
																										(long) (BgL_offsetz00_2733)
																										- OBJECT_TYPE);
																									{	/* Ast/dump.scm 160 */
																										long BgL_modz00_2735;

																										{	/* Ast/dump.scm 160 */
																											int BgL_arg2645z00_2736;

																											BgL_arg2645z00_2736 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 160 */
																												long BgL_auxz00_5634;

																												BgL_auxz00_5634 =
																													(long)
																													(BgL_arg2645z00_2736);
																												BgL_modz00_2735 =
																													(BgL_offsetz00_2734 /
																													BgL_auxz00_5634);
																										}}
																										{	/* Ast/dump.scm 160 */
																											long BgL_restz00_2737;

																											{	/* Ast/dump.scm 160 */
																												int BgL_arg2644z00_2738;

																												BgL_arg2644z00_2738 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 160 */
																													long BgL_auxz00_5638;

																													BgL_auxz00_5638 =
																														(long)
																														(BgL_arg2644z00_2738);
																													BgL_restz00_2737 =
																														(BgL_offsetz00_2734
																														% BgL_auxz00_5638);
																											}}
																											{	/* Ast/dump.scm 160 */

																												BgL_method3371z00_2727 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_2732,
																														(int)
																														(BgL_modz00_2735)),
																													(int)
																													(BgL_restz00_2737));
																				}}}}}}}}
																				BgL_arg3691z00_1489 =
																					PROCEDURE_ENTRY
																					(BgL_method3371z00_2727)
																					(BgL_method3371z00_2727,
																					(obj_t) (BgL_nodez00_2726), BEOA);
																	}}}
																	BgL_newtail3302z00_1487 =
																		MAKE_PAIR(BgL_arg3691z00_1489, BNIL);
																}
																SET_CDR(BgL_tail3301z00_1484,
																	BgL_newtail3302z00_1487);
																{
																	obj_t BgL_tail3301z00_5652;

																	obj_t BgL_l3298z00_5650;

																	BgL_l3298z00_5650 = CDR(BgL_l3298z00_1483);
																	BgL_tail3301z00_5652 =
																		BgL_newtail3302z00_1487;
																	BgL_tail3301z00_1484 = BgL_tail3301z00_5652;
																	BgL_l3298z00_1483 = BgL_l3298z00_5650;
																	goto BgL_zc3anonymousza33688ze3z83_1485;
																}
															}
													}
												}
											}
									}
									BgL_arg3683z00_1474 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3685z00_1476, BNIL);
								}
								{	/* Ast/dump.scm 156 */
									obj_t BgL_list3684z00_1475;

									BgL_list3684z00_1475 = MAKE_PAIR(BgL_arg3683z00_1474, BNIL);
									BgL_arg3679z00_1470 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3682z00_1473, BgL_list3684z00_1475);
								}
							}
							BgL_arg3677z00_1467 =
								MAKE_PAIR(BgL_arg3678z00_1469, BgL_arg3679z00_1470);
						}
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3675z00_1466,
						BgL_arg3677z00_1467);
				}
			}
		}
	}



/* node->sexp-funcall3387 */
	obj_t BGl_nodezd2ze3sexpzd2funcall3387ze3zzast_dumpz00(obj_t BgL_envz00_4111,
		obj_t BgL_nodez00_4112)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 134 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1427;

				BgL_nodez00_1427 = (BgL_funcallz00_bglt) (BgL_nodez00_4112);
				{	/* Ast/dump.scm 136 */
					obj_t BgL_arg3651z00_1430;

					obj_t BgL_arg3652z00_1431;

					{
						BgL_nodez00_bglt BgL_auxz00_5659;

						BgL_auxz00_5659 = (BgL_nodez00_bglt) (BgL_nodez00_1427);
						BgL_arg3651z00_1430 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_5659))->BgL_locz00);
					}
					{	/* Ast/dump.scm 137 */
						obj_t BgL_arg3653z00_1432;

						obj_t BgL_arg3654z00_1433;

						{	/* Ast/dump.scm 137 */
							obj_t BgL_casezd2valuezd2_1434;

							BgL_casezd2valuezd2_1434 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1427))->
								BgL_strengthz00);
							if ((BgL_casezd2valuezd2_1434 == CNST_TABLE_REF(((long) 26))))
								{	/* Ast/dump.scm 137 */
									BgL_arg3653z00_1432 = CNST_TABLE_REF(((long) 27));
								}
							else
								{	/* Ast/dump.scm 137 */
									if ((BgL_casezd2valuezd2_1434 == CNST_TABLE_REF(((long) 28))))
										{	/* Ast/dump.scm 137 */
											BgL_arg3653z00_1432 = CNST_TABLE_REF(((long) 29));
										}
									else
										{	/* Ast/dump.scm 137 */
											BgL_arg3653z00_1432 = CNST_TABLE_REF(((long) 30));
						}}}
						{	/* Ast/dump.scm 144 */
							obj_t BgL_arg3657z00_1437;

							obj_t BgL_arg3658z00_1438;

							{	/* Ast/dump.scm 144 */
								BgL_nodez00_bglt BgL_arg3660z00_1440;

								BgL_arg3660z00_1440 =
									(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1427))->BgL_funz00);
								{	/* Ast/dump.scm 144 */
									obj_t BgL_method3371z00_2597;

									{	/* Ast/dump.scm 144 */
										BgL_objectz00_bglt BgL_objz00_2598;

										BgL_objz00_2598 =
											(BgL_objectz00_bglt) (BgL_arg3660z00_1440);
										{	/* Ast/dump.scm 144 */
											long BgL_objzd2classzd2numz00_2599;

											BgL_objzd2classzd2numz00_2599 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2598);
											{	/* Ast/dump.scm 144 */
												obj_t BgL_arg2643z00_2600;

												BgL_arg2643z00_2600 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 144 */
													obj_t BgL_arrayz00_2602;

													int BgL_offsetz00_2603;

													BgL_arrayz00_2602 = BgL_arg2643z00_2600;
													BgL_offsetz00_2603 =
														(int) (BgL_objzd2classzd2numz00_2599);
													{	/* Ast/dump.scm 144 */
														long BgL_offsetz00_2604;

														BgL_offsetz00_2604 =
															((long) (BgL_offsetz00_2603) - OBJECT_TYPE);
														{	/* Ast/dump.scm 144 */
															long BgL_modz00_2605;

															{	/* Ast/dump.scm 144 */
																int BgL_arg2645z00_2606;

																BgL_arg2645z00_2606 = (int) (((long) 16));
																{	/* Ast/dump.scm 144 */
																	long BgL_auxz00_5681;

																	BgL_auxz00_5681 =
																		(long) (BgL_arg2645z00_2606);
																	BgL_modz00_2605 =
																		(BgL_offsetz00_2604 / BgL_auxz00_5681);
															}}
															{	/* Ast/dump.scm 144 */
																long BgL_restz00_2607;

																{	/* Ast/dump.scm 144 */
																	int BgL_arg2644z00_2608;

																	BgL_arg2644z00_2608 = (int) (((long) 16));
																	{	/* Ast/dump.scm 144 */
																		long BgL_auxz00_5685;

																		BgL_auxz00_5685 =
																			(long) (BgL_arg2644z00_2608);
																		BgL_restz00_2607 =
																			(BgL_offsetz00_2604 % BgL_auxz00_5685);
																}}
																{	/* Ast/dump.scm 144 */

																	BgL_method3371z00_2597 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2602,
																			(int) (BgL_modz00_2605)),
																		(int) (BgL_restz00_2607));
									}}}}}}}}
									BgL_arg3657z00_1437 =
										PROCEDURE_ENTRY(BgL_method3371z00_2597)
										(BgL_method3371z00_2597, (obj_t) (BgL_arg3660z00_1440),
										BEOA);
							}}
							{	/* Ast/dump.scm 145 */
								obj_t BgL_arg3661z00_1441;

								{	/* Ast/dump.scm 145 */
									obj_t BgL_l3292z00_1443;

									BgL_l3292z00_1443 =
										(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1427))->
										BgL_argsz00);
									if (NULLP(BgL_l3292z00_1443))
										{	/* Ast/dump.scm 145 */
											BgL_arg3661z00_1441 = BNIL;
										}
									else
										{	/* Ast/dump.scm 145 */
											obj_t BgL_head3294z00_1445;

											{	/* Ast/dump.scm 145 */
												obj_t BgL_arg3671z00_1458;

												{	/* Ast/dump.scm 145 */
													obj_t BgL_arg3673z00_1460;

													BgL_arg3673z00_1460 = CAR(BgL_l3292z00_1443);
													{	/* Ast/dump.scm 145 */
														BgL_nodez00_bglt BgL_nodez00_2625;

														BgL_nodez00_2625 =
															(BgL_nodez00_bglt) (BgL_arg3673z00_1460);
														{	/* Ast/dump.scm 145 */
															obj_t BgL_method3371z00_2626;

															{	/* Ast/dump.scm 145 */
																BgL_objectz00_bglt BgL_objz00_2627;

																BgL_objz00_2627 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2625);
																{	/* Ast/dump.scm 145 */
																	long BgL_objzd2classzd2numz00_2628;

																	BgL_objzd2classzd2numz00_2628 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2627);
																	{	/* Ast/dump.scm 145 */
																		obj_t BgL_arg2643z00_2629;

																		BgL_arg2643z00_2629 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																			(int) (((long) 1)));
																		{	/* Ast/dump.scm 145 */
																			obj_t BgL_arrayz00_2631;

																			int BgL_offsetz00_2632;

																			BgL_arrayz00_2631 = BgL_arg2643z00_2629;
																			BgL_offsetz00_2632 =
																				(int) (BgL_objzd2classzd2numz00_2628);
																			{	/* Ast/dump.scm 145 */
																				long BgL_offsetz00_2633;

																				BgL_offsetz00_2633 =
																					(
																					(long) (BgL_offsetz00_2632) -
																					OBJECT_TYPE);
																				{	/* Ast/dump.scm 145 */
																					long BgL_modz00_2634;

																					{	/* Ast/dump.scm 145 */
																						int BgL_arg2645z00_2635;

																						BgL_arg2645z00_2635 =
																							(int) (((long) 16));
																						{	/* Ast/dump.scm 145 */
																							long BgL_auxz00_5708;

																							BgL_auxz00_5708 =
																								(long) (BgL_arg2645z00_2635);
																							BgL_modz00_2634 =
																								(BgL_offsetz00_2633 /
																								BgL_auxz00_5708);
																					}}
																					{	/* Ast/dump.scm 145 */
																						long BgL_restz00_2636;

																						{	/* Ast/dump.scm 145 */
																							int BgL_arg2644z00_2637;

																							BgL_arg2644z00_2637 =
																								(int) (((long) 16));
																							{	/* Ast/dump.scm 145 */
																								long BgL_auxz00_5712;

																								BgL_auxz00_5712 =
																									(long) (BgL_arg2644z00_2637);
																								BgL_restz00_2636 =
																									(BgL_offsetz00_2633 %
																									BgL_auxz00_5712);
																						}}
																						{	/* Ast/dump.scm 145 */

																							BgL_method3371z00_2626 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2631,
																									(int) (BgL_modz00_2634)),
																								(int) (BgL_restz00_2636));
															}}}}}}}}
															BgL_arg3671z00_1458 =
																PROCEDURE_ENTRY(BgL_method3371z00_2626)
																(BgL_method3371z00_2626,
																(obj_t) (BgL_nodez00_2625), BEOA);
												}}}
												BgL_head3294z00_1445 =
													MAKE_PAIR(BgL_arg3671z00_1458, BNIL);
											}
											{	/* Ast/dump.scm 145 */
												obj_t BgL_g3297z00_1446;

												BgL_g3297z00_1446 = CDR(BgL_l3292z00_1443);
												{
													obj_t BgL_l3292z00_1448;

													obj_t BgL_tail3295z00_1449;

													BgL_l3292z00_1448 = BgL_g3297z00_1446;
													BgL_tail3295z00_1449 = BgL_head3294z00_1445;
												BgL_zc3anonymousza33664ze3z83_1450:
													if (NULLP(BgL_l3292z00_1448))
														{	/* Ast/dump.scm 145 */
															BgL_arg3661z00_1441 = BgL_head3294z00_1445;
														}
													else
														{	/* Ast/dump.scm 145 */
															obj_t BgL_newtail3296z00_1452;

															{	/* Ast/dump.scm 145 */
																obj_t BgL_arg3667z00_1454;

																{	/* Ast/dump.scm 145 */
																	obj_t BgL_arg3670z00_1456;

																	BgL_arg3670z00_1456 = CAR(BgL_l3292z00_1448);
																	{	/* Ast/dump.scm 145 */
																		BgL_nodez00_bglt BgL_nodez00_2656;

																		BgL_nodez00_2656 =
																			(BgL_nodez00_bglt) (BgL_arg3670z00_1456);
																		{	/* Ast/dump.scm 145 */
																			obj_t BgL_method3371z00_2657;

																			{	/* Ast/dump.scm 145 */
																				BgL_objectz00_bglt BgL_objz00_2658;

																				BgL_objz00_2658 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2656);
																				{	/* Ast/dump.scm 145 */
																					long BgL_objzd2classzd2numz00_2659;

																					BgL_objzd2classzd2numz00_2659 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2658);
																					{	/* Ast/dump.scm 145 */
																						obj_t BgL_arg2643z00_2660;

																						BgL_arg2643z00_2660 =
																							PROCEDURE_REF
																							(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																							(int) (((long) 1)));
																						{	/* Ast/dump.scm 145 */
																							obj_t BgL_arrayz00_2662;

																							int BgL_offsetz00_2663;

																							BgL_arrayz00_2662 =
																								BgL_arg2643z00_2660;
																							BgL_offsetz00_2663 =
																								(int)
																								(BgL_objzd2classzd2numz00_2659);
																							{	/* Ast/dump.scm 145 */
																								long BgL_offsetz00_2664;

																								BgL_offsetz00_2664 =
																									(
																									(long) (BgL_offsetz00_2663) -
																									OBJECT_TYPE);
																								{	/* Ast/dump.scm 145 */
																									long BgL_modz00_2665;

																									{	/* Ast/dump.scm 145 */
																										int BgL_arg2645z00_2666;

																										BgL_arg2645z00_2666 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 145 */
																											long BgL_auxz00_5736;

																											BgL_auxz00_5736 =
																												(long)
																												(BgL_arg2645z00_2666);
																											BgL_modz00_2665 =
																												(BgL_offsetz00_2664 /
																												BgL_auxz00_5736);
																									}}
																									{	/* Ast/dump.scm 145 */
																										long BgL_restz00_2667;

																										{	/* Ast/dump.scm 145 */
																											int BgL_arg2644z00_2668;

																											BgL_arg2644z00_2668 =
																												(int) (((long) 16));
																											{	/* Ast/dump.scm 145 */
																												long BgL_auxz00_5740;

																												BgL_auxz00_5740 =
																													(long)
																													(BgL_arg2644z00_2668);
																												BgL_restz00_2667 =
																													(BgL_offsetz00_2664 %
																													BgL_auxz00_5740);
																										}}
																										{	/* Ast/dump.scm 145 */

																											BgL_method3371z00_2657 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2662,
																													(int)
																													(BgL_modz00_2665)),
																												(int)
																												(BgL_restz00_2667));
																			}}}}}}}}
																			BgL_arg3667z00_1454 =
																				PROCEDURE_ENTRY(BgL_method3371z00_2657)
																				(BgL_method3371z00_2657,
																				(obj_t) (BgL_nodez00_2656), BEOA);
																}}}
																BgL_newtail3296z00_1452 =
																	MAKE_PAIR(BgL_arg3667z00_1454, BNIL);
															}
															SET_CDR(BgL_tail3295z00_1449,
																BgL_newtail3296z00_1452);
															{
																obj_t BgL_tail3295z00_5754;

																obj_t BgL_l3292z00_5752;

																BgL_l3292z00_5752 = CDR(BgL_l3292z00_1448);
																BgL_tail3295z00_5754 = BgL_newtail3296z00_1452;
																BgL_tail3295z00_1449 = BgL_tail3295z00_5754;
																BgL_l3292z00_1448 = BgL_l3292z00_5752;
																goto BgL_zc3anonymousza33664ze3z83_1450;
															}
														}
												}
											}
										}
								}
								BgL_arg3658z00_1438 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3661z00_1441, BNIL);
							}
							{	/* Ast/dump.scm 137 */
								obj_t BgL_list3659z00_1439;

								BgL_list3659z00_1439 = MAKE_PAIR(BgL_arg3658z00_1438, BNIL);
								BgL_arg3654z00_1433 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3657z00_1437, BgL_list3659z00_1439);
							}
						}
						BgL_arg3652z00_1431 =
							MAKE_PAIR(BgL_arg3653z00_1432, BgL_arg3654z00_1433);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3651z00_1430,
						BgL_arg3652z00_1431);
				}
			}
		}
	}



/* node->sexp-app-ly3385 */
	obj_t BGl_nodezd2ze3sexpzd2appzd2ly3385z31zzast_dumpz00(obj_t BgL_envz00_4113,
		obj_t BgL_nodez00_4114)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 125 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1411;

				BgL_nodez00_1411 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_4114);
				{	/* Ast/dump.scm 127 */
					obj_t BgL_arg3639z00_1414;

					obj_t BgL_arg3640z00_1415;

					{
						BgL_nodez00_bglt BgL_auxz00_5761;

						BgL_auxz00_5761 = (BgL_nodez00_bglt) (BgL_nodez00_1411);
						BgL_arg3639z00_1414 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_5761))->BgL_locz00);
					}
					{	/* Ast/dump.scm 128 */
						obj_t BgL_arg3641z00_1416;

						obj_t BgL_arg3642z00_1417;

						BgL_arg3641z00_1416 = CNST_TABLE_REF(((long) 31));
						{	/* Ast/dump.scm 128 */
							obj_t BgL_arg3643z00_1418;

							obj_t BgL_arg3644z00_1419;

							{	/* Ast/dump.scm 128 */
								BgL_nodez00_bglt BgL_arg3648z00_1423;

								BgL_arg3648z00_1423 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1411))->BgL_funz00);
								{	/* Ast/dump.scm 128 */
									obj_t BgL_method3371z00_2536;

									{	/* Ast/dump.scm 128 */
										BgL_objectz00_bglt BgL_objz00_2537;

										BgL_objz00_2537 =
											(BgL_objectz00_bglt) (BgL_arg3648z00_1423);
										{	/* Ast/dump.scm 128 */
											long BgL_objzd2classzd2numz00_2538;

											BgL_objzd2classzd2numz00_2538 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2537);
											{	/* Ast/dump.scm 128 */
												obj_t BgL_arg2643z00_2539;

												BgL_arg2643z00_2539 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 128 */
													obj_t BgL_arrayz00_2541;

													int BgL_offsetz00_2542;

													BgL_arrayz00_2541 = BgL_arg2643z00_2539;
													BgL_offsetz00_2542 =
														(int) (BgL_objzd2classzd2numz00_2538);
													{	/* Ast/dump.scm 128 */
														long BgL_offsetz00_2543;

														BgL_offsetz00_2543 =
															((long) (BgL_offsetz00_2542) - OBJECT_TYPE);
														{	/* Ast/dump.scm 128 */
															long BgL_modz00_2544;

															{	/* Ast/dump.scm 128 */
																int BgL_arg2645z00_2545;

																BgL_arg2645z00_2545 = (int) (((long) 16));
																{	/* Ast/dump.scm 128 */
																	long BgL_auxz00_5774;

																	BgL_auxz00_5774 =
																		(long) (BgL_arg2645z00_2545);
																	BgL_modz00_2544 =
																		(BgL_offsetz00_2543 / BgL_auxz00_5774);
															}}
															{	/* Ast/dump.scm 128 */
																long BgL_restz00_2546;

																{	/* Ast/dump.scm 128 */
																	int BgL_arg2644z00_2547;

																	BgL_arg2644z00_2547 = (int) (((long) 16));
																	{	/* Ast/dump.scm 128 */
																		long BgL_auxz00_5778;

																		BgL_auxz00_5778 =
																			(long) (BgL_arg2644z00_2547);
																		BgL_restz00_2546 =
																			(BgL_offsetz00_2543 % BgL_auxz00_5778);
																}}
																{	/* Ast/dump.scm 128 */

																	BgL_method3371z00_2536 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2541,
																			(int) (BgL_modz00_2544)),
																		(int) (BgL_restz00_2546));
									}}}}}}}}
									BgL_arg3643z00_1418 =
										PROCEDURE_ENTRY(BgL_method3371z00_2536)
										(BgL_method3371z00_2536, (obj_t) (BgL_arg3648z00_1423),
										BEOA);
							}}
							{	/* Ast/dump.scm 129 */
								BgL_nodez00_bglt BgL_arg3649z00_1424;

								BgL_arg3649z00_1424 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1411))->BgL_argz00);
								{	/* Ast/dump.scm 129 */
									obj_t BgL_method3371z00_2563;

									{	/* Ast/dump.scm 129 */
										BgL_objectz00_bglt BgL_objz00_2564;

										BgL_objz00_2564 =
											(BgL_objectz00_bglt) (BgL_arg3649z00_1424);
										{	/* Ast/dump.scm 129 */
											long BgL_objzd2classzd2numz00_2565;

											BgL_objzd2classzd2numz00_2565 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2564);
											{	/* Ast/dump.scm 129 */
												obj_t BgL_arg2643z00_2566;

												BgL_arg2643z00_2566 =
													PROCEDURE_REF
													(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
													(int) (((long) 1)));
												{	/* Ast/dump.scm 129 */
													obj_t BgL_arrayz00_2568;

													int BgL_offsetz00_2569;

													BgL_arrayz00_2568 = BgL_arg2643z00_2566;
													BgL_offsetz00_2569 =
														(int) (BgL_objzd2classzd2numz00_2565);
													{	/* Ast/dump.scm 129 */
														long BgL_offsetz00_2570;

														BgL_offsetz00_2570 =
															((long) (BgL_offsetz00_2569) - OBJECT_TYPE);
														{	/* Ast/dump.scm 129 */
															long BgL_modz00_2571;

															{	/* Ast/dump.scm 129 */
																int BgL_arg2645z00_2572;

																BgL_arg2645z00_2572 = (int) (((long) 16));
																{	/* Ast/dump.scm 129 */
																	long BgL_auxz00_5797;

																	BgL_auxz00_5797 =
																		(long) (BgL_arg2645z00_2572);
																	BgL_modz00_2571 =
																		(BgL_offsetz00_2570 / BgL_auxz00_5797);
															}}
															{	/* Ast/dump.scm 129 */
																long BgL_restz00_2573;

																{	/* Ast/dump.scm 129 */
																	int BgL_arg2644z00_2574;

																	BgL_arg2644z00_2574 = (int) (((long) 16));
																	{	/* Ast/dump.scm 129 */
																		long BgL_auxz00_5801;

																		BgL_auxz00_5801 =
																			(long) (BgL_arg2644z00_2574);
																		BgL_restz00_2573 =
																			(BgL_offsetz00_2570 % BgL_auxz00_5801);
																}}
																{	/* Ast/dump.scm 129 */

																	BgL_method3371z00_2563 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2568,
																			(int) (BgL_modz00_2571)),
																		(int) (BgL_restz00_2573));
									}}}}}}}}
									BgL_arg3644z00_1419 =
										PROCEDURE_ENTRY(BgL_method3371z00_2563)
										(BgL_method3371z00_2563, (obj_t) (BgL_arg3649z00_1424),
										BEOA);
							}}
							{	/* Ast/dump.scm 128 */
								obj_t BgL_list3646z00_1421;

								{	/* Ast/dump.scm 128 */
									obj_t BgL_arg3647z00_1422;

									BgL_arg3647z00_1422 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3646z00_1421 =
										MAKE_PAIR(BgL_arg3644z00_1419, BgL_arg3647z00_1422);
								}
								BgL_arg3642z00_1417 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3643z00_1418, BgL_list3646z00_1421);
						}}
						BgL_arg3640z00_1415 =
							MAKE_PAIR(BgL_arg3641z00_1416, BgL_arg3642z00_1417);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3639z00_1414,
						BgL_arg3640z00_1415);
				}
			}
		}
	}



/* node->sexp-app3383 */
	obj_t BGl_nodezd2ze3sexpzd2app3383ze3zzast_dumpz00(obj_t BgL_envz00_4115,
		obj_t BgL_nodez00_4116)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 100 */
			{
				BgL_appz00_bglt BgL_nodez00_1311;

				BgL_nodez00_1311 = (BgL_appz00_bglt) (BgL_nodez00_4116);
				{	/* Ast/dump.scm 102 */
					obj_t BgL_arg3569z00_1314;

					obj_t BgL_arg3570z00_1315;

					{
						BgL_nodez00_bglt BgL_auxz00_5817;

						BgL_auxz00_5817 = (BgL_nodez00_bglt) (BgL_nodez00_1311);
						BgL_arg3569z00_1314 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_5817))->BgL_locz00);
					}
					if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
						{	/* Ast/dump.scm 105 */
							obj_t BgL_arg3571z00_1316;

							obj_t BgL_arg3572z00_1317;

							{	/* Ast/dump.scm 105 */
								BgL_varz00_bglt BgL_arg3573z00_1318;

								BgL_arg3573z00_1318 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->BgL_funz00);
								{	/* Ast/dump.scm 105 */
									BgL_nodez00_bglt BgL_nodez00_2234;

									BgL_nodez00_2234 = (BgL_nodez00_bglt) (BgL_arg3573z00_1318);
									{	/* Ast/dump.scm 105 */
										obj_t BgL_method3371z00_2235;

										{	/* Ast/dump.scm 105 */
											BgL_objectz00_bglt BgL_objz00_2236;

											BgL_objz00_2236 = (BgL_objectz00_bglt) (BgL_nodez00_2234);
											{	/* Ast/dump.scm 105 */
												long BgL_objzd2classzd2numz00_2237;

												BgL_objzd2classzd2numz00_2237 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2236);
												{	/* Ast/dump.scm 105 */
													obj_t BgL_arg2643z00_2238;

													BgL_arg2643z00_2238 =
														PROCEDURE_REF
														(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
														(int) (((long) 1)));
													{	/* Ast/dump.scm 105 */
														obj_t BgL_arrayz00_2240;

														int BgL_offsetz00_2241;

														BgL_arrayz00_2240 = BgL_arg2643z00_2238;
														BgL_offsetz00_2241 =
															(int) (BgL_objzd2classzd2numz00_2237);
														{	/* Ast/dump.scm 105 */
															long BgL_offsetz00_2242;

															BgL_offsetz00_2242 =
																((long) (BgL_offsetz00_2241) - OBJECT_TYPE);
															{	/* Ast/dump.scm 105 */
																long BgL_modz00_2243;

																{	/* Ast/dump.scm 105 */
																	int BgL_arg2645z00_2244;

																	BgL_arg2645z00_2244 = (int) (((long) 16));
																	{	/* Ast/dump.scm 105 */
																		long BgL_auxz00_5832;

																		BgL_auxz00_5832 =
																			(long) (BgL_arg2645z00_2244);
																		BgL_modz00_2243 =
																			(BgL_offsetz00_2242 / BgL_auxz00_5832);
																}}
																{	/* Ast/dump.scm 105 */
																	long BgL_restz00_2245;

																	{	/* Ast/dump.scm 105 */
																		int BgL_arg2644z00_2246;

																		BgL_arg2644z00_2246 = (int) (((long) 16));
																		{	/* Ast/dump.scm 105 */
																			long BgL_auxz00_5836;

																			BgL_auxz00_5836 =
																				(long) (BgL_arg2644z00_2246);
																			BgL_restz00_2245 =
																				(BgL_offsetz00_2242 % BgL_auxz00_5836);
																	}}
																	{	/* Ast/dump.scm 105 */

																		BgL_method3371z00_2235 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2240,
																				(int) (BgL_modz00_2243)),
																			(int) (BgL_restz00_2245));
										}}}}}}}}
										BgL_arg3571z00_1316 =
											PROCEDURE_ENTRY(BgL_method3371z00_2235)
											(BgL_method3371z00_2235, (obj_t) (BgL_nodez00_2234),
											BEOA);
							}}}
							{	/* Ast/dump.scm 106 */
								obj_t BgL_arg3574z00_1319;

								obj_t BgL_arg3575z00_1320;

								if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
									{	/* Ast/dump.scm 108 */
										obj_t BgL_arg3576z00_1321;

										{	/* Ast/dump.scm 108 */
											obj_t BgL_v3271z00_1323;

											BgL_v3271z00_1323 = create_vector((int) (((long) 2)));
											{	/* Ast/dump.scm 108 */
												bool_t BgL_arg3579z00_1325;

												BgL_arg3579z00_1325 =
													BGl_sidezd2effectzf3z21zzeffect_effectz00(
													(BgL_nodez00_bglt) (BgL_nodez00_1311));
												VECTOR_SET(BgL_v3271z00_1323,
													(int) (((long) 1)), BBOOL(BgL_arg3579z00_1325));
											}
											{	/* Ast/dump.scm 108 */
												int BgL_kz00_2264;

												obj_t BgL_objz00_2265;

												BgL_kz00_2264 = (int) (((long) 0));
												BgL_objz00_2265 = CNST_TABLE_REF(((long) 32));
												VECTOR_SET(BgL_v3271z00_1323, BgL_kz00_2264,
													BgL_objz00_2265);
											}
											BgL_arg3576z00_1321 = BgL_v3271z00_1323;
										}
										{	/* Ast/dump.scm 107 */
											obj_t BgL_list3577z00_1322;

											BgL_list3577z00_1322 =
												MAKE_PAIR(BgL_arg3576z00_1321, BNIL);
											BgL_arg3574z00_1319 = BgL_list3577z00_1322;
									}}
								else
									{	/* Ast/dump.scm 106 */
										BgL_arg3574z00_1319 = BNIL;
									}
								{	/* Ast/dump.scm 110 */
									obj_t BgL_arg3580z00_1326;

									obj_t BgL_arg3581z00_1327;

									{	/* Ast/dump.scm 110 */
										obj_t BgL_v3272z00_1328;

										BgL_v3272z00_1328 = create_vector((int) (((long) 2)));
										{	/* Ast/dump.scm 110 */
											obj_t BgL_arg3583z00_1330;

											{	/* Ast/dump.scm 112 */
												BgL_typez00_bglt BgL_arg3584z00_1331;

												{	/* Ast/dump.scm 112 */
													BgL_variablez00_bglt BgL_arg3585z00_1332;

													{	/* Ast/dump.scm 112 */
														BgL_varz00_bglt BgL_obj2155z00_2269;

														BgL_obj2155z00_2269 =
															(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->
															BgL_funz00);
														BgL_arg3585z00_1332 =
															(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2269))->
															BgL_variablez00);
													}
													BgL_arg3584z00_1331 =
														(((BgL_variablez00_bglt)
															CREF(BgL_arg3585z00_1332))->BgL_typez00);
												}
												BgL_arg3583z00_1330 =
													BGl_shapez00zztools_shapez00(
													(obj_t) (BgL_arg3584z00_1331));
											}
											VECTOR_SET(BgL_v3272z00_1328,
												(int) (((long) 1)), BgL_arg3583z00_1330);
										}
										{	/* Ast/dump.scm 110 */
											obj_t BgL_arg3588z00_1335;

											{	/* Ast/dump.scm 110 */
												BgL_typez00_bglt BgL_arg3589z00_1336;

												BgL_arg3589z00_1336 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_nodez00_1311));
												BgL_arg3588z00_1335 =
													BGl_shapez00zztools_shapez00(
													(obj_t) (BgL_arg3589z00_1336));
											}
											VECTOR_SET(BgL_v3272z00_1328,
												(int) (((long) 0)), BgL_arg3588z00_1335);
										}
										BgL_arg3580z00_1326 = BgL_v3272z00_1328;
									}
									{	/* Ast/dump.scm 113 */
										obj_t BgL_arg3590z00_1337;

										{	/* Ast/dump.scm 113 */
											obj_t BgL_l3273z00_1339;

											BgL_l3273z00_1339 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->
												BgL_argsz00);
											if (NULLP(BgL_l3273z00_1339))
												{	/* Ast/dump.scm 113 */
													BgL_arg3590z00_1337 = BNIL;
												}
											else
												{	/* Ast/dump.scm 113 */
													obj_t BgL_head3275z00_1341;

													{	/* Ast/dump.scm 113 */
														obj_t BgL_arg3599z00_1354;

														{	/* Ast/dump.scm 113 */
															obj_t BgL_arg3601z00_1356;

															BgL_arg3601z00_1356 = CAR(BgL_l3273z00_1339);
															{	/* Ast/dump.scm 113 */
																BgL_nodez00_bglt BgL_nodez00_2280;

																BgL_nodez00_2280 =
																	(BgL_nodez00_bglt) (BgL_arg3601z00_1356);
																{	/* Ast/dump.scm 113 */
																	obj_t BgL_method3371z00_2281;

																	{	/* Ast/dump.scm 113 */
																		BgL_objectz00_bglt BgL_objz00_2282;

																		BgL_objz00_2282 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2280);
																		{	/* Ast/dump.scm 113 */
																			long BgL_objzd2classzd2numz00_2283;

																			BgL_objzd2classzd2numz00_2283 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2282);
																			{	/* Ast/dump.scm 113 */
																				obj_t BgL_arg2643z00_2284;

																				BgL_arg2643z00_2284 =
																					PROCEDURE_REF
																					(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																					(int) (((long) 1)));
																				{	/* Ast/dump.scm 113 */
																					obj_t BgL_arrayz00_2286;

																					int BgL_offsetz00_2287;

																					BgL_arrayz00_2286 =
																						BgL_arg2643z00_2284;
																					BgL_offsetz00_2287 =
																						(int)
																						(BgL_objzd2classzd2numz00_2283);
																					{	/* Ast/dump.scm 113 */
																						long BgL_offsetz00_2288;

																						BgL_offsetz00_2288 =
																							(
																							(long) (BgL_offsetz00_2287) -
																							OBJECT_TYPE);
																						{	/* Ast/dump.scm 113 */
																							long BgL_modz00_2289;

																							{	/* Ast/dump.scm 113 */
																								int BgL_arg2645z00_2290;

																								BgL_arg2645z00_2290 =
																									(int) (((long) 16));
																								{	/* Ast/dump.scm 113 */
																									long BgL_auxz00_5887;

																									BgL_auxz00_5887 =
																										(long)
																										(BgL_arg2645z00_2290);
																									BgL_modz00_2289 =
																										(BgL_offsetz00_2288 /
																										BgL_auxz00_5887);
																							}}
																							{	/* Ast/dump.scm 113 */
																								long BgL_restz00_2291;

																								{	/* Ast/dump.scm 113 */
																									int BgL_arg2644z00_2292;

																									BgL_arg2644z00_2292 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 113 */
																										long BgL_auxz00_5891;

																										BgL_auxz00_5891 =
																											(long)
																											(BgL_arg2644z00_2292);
																										BgL_restz00_2291 =
																											(BgL_offsetz00_2288 %
																											BgL_auxz00_5891);
																								}}
																								{	/* Ast/dump.scm 113 */

																									BgL_method3371z00_2281 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2286,
																											(int) (BgL_modz00_2289)),
																										(int) (BgL_restz00_2291));
																	}}}}}}}}
																	BgL_arg3599z00_1354 =
																		PROCEDURE_ENTRY(BgL_method3371z00_2281)
																		(BgL_method3371z00_2281,
																		(obj_t) (BgL_nodez00_2280), BEOA);
														}}}
														BgL_head3275z00_1341 =
															MAKE_PAIR(BgL_arg3599z00_1354, BNIL);
													}
													{	/* Ast/dump.scm 113 */
														obj_t BgL_g3278z00_1342;

														BgL_g3278z00_1342 = CDR(BgL_l3273z00_1339);
														{
															obj_t BgL_l3273z00_1344;

															obj_t BgL_tail3276z00_1345;

															BgL_l3273z00_1344 = BgL_g3278z00_1342;
															BgL_tail3276z00_1345 = BgL_head3275z00_1341;
														BgL_zc3anonymousza33593ze3z83_1346:
															if (NULLP(BgL_l3273z00_1344))
																{	/* Ast/dump.scm 113 */
																	BgL_arg3590z00_1337 = BgL_head3275z00_1341;
																}
															else
																{	/* Ast/dump.scm 113 */
																	obj_t BgL_newtail3277z00_1348;

																	{	/* Ast/dump.scm 113 */
																		obj_t BgL_arg3596z00_1350;

																		{	/* Ast/dump.scm 113 */
																			obj_t BgL_arg3598z00_1352;

																			BgL_arg3598z00_1352 =
																				CAR(BgL_l3273z00_1344);
																			{	/* Ast/dump.scm 113 */
																				BgL_nodez00_bglt BgL_nodez00_2311;

																				BgL_nodez00_2311 =
																					(BgL_nodez00_bglt)
																					(BgL_arg3598z00_1352);
																				{	/* Ast/dump.scm 113 */
																					obj_t BgL_method3371z00_2312;

																					{	/* Ast/dump.scm 113 */
																						BgL_objectz00_bglt BgL_objz00_2313;

																						BgL_objz00_2313 =
																							(BgL_objectz00_bglt)
																							(BgL_nodez00_2311);
																						{	/* Ast/dump.scm 113 */
																							long
																								BgL_objzd2classzd2numz00_2314;
																							BgL_objzd2classzd2numz00_2314 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_2313);
																							{	/* Ast/dump.scm 113 */
																								obj_t BgL_arg2643z00_2315;

																								BgL_arg2643z00_2315 =
																									PROCEDURE_REF
																									(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																									(int) (((long) 1)));
																								{	/* Ast/dump.scm 113 */
																									obj_t BgL_arrayz00_2317;

																									int BgL_offsetz00_2318;

																									BgL_arrayz00_2317 =
																										BgL_arg2643z00_2315;
																									BgL_offsetz00_2318 =
																										(int)
																										(BgL_objzd2classzd2numz00_2314);
																									{	/* Ast/dump.scm 113 */
																										long BgL_offsetz00_2319;

																										BgL_offsetz00_2319 =
																											(
																											(long)
																											(BgL_offsetz00_2318) -
																											OBJECT_TYPE);
																										{	/* Ast/dump.scm 113 */
																											long BgL_modz00_2320;

																											{	/* Ast/dump.scm 113 */
																												int BgL_arg2645z00_2321;

																												BgL_arg2645z00_2321 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 113 */
																													long BgL_auxz00_5915;

																													BgL_auxz00_5915 =
																														(long)
																														(BgL_arg2645z00_2321);
																													BgL_modz00_2320 =
																														(BgL_offsetz00_2319
																														/ BgL_auxz00_5915);
																											}}
																											{	/* Ast/dump.scm 113 */
																												long BgL_restz00_2322;

																												{	/* Ast/dump.scm 113 */
																													int
																														BgL_arg2644z00_2323;
																													BgL_arg2644z00_2323 =
																														(int) (((long) 16));
																													{	/* Ast/dump.scm 113 */
																														long
																															BgL_auxz00_5919;
																														BgL_auxz00_5919 =
																															(long)
																															(BgL_arg2644z00_2323);
																														BgL_restz00_2322 =
																															(BgL_offsetz00_2319
																															%
																															BgL_auxz00_5919);
																												}}
																												{	/* Ast/dump.scm 113 */

																													BgL_method3371z00_2312
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_2317,
																															(int)
																															(BgL_modz00_2320)),
																														(int)
																														(BgL_restz00_2322));
																					}}}}}}}}
																					BgL_arg3596z00_1350 =
																						PROCEDURE_ENTRY
																						(BgL_method3371z00_2312)
																						(BgL_method3371z00_2312,
																						(obj_t) (BgL_nodez00_2311), BEOA);
																		}}}
																		BgL_newtail3277z00_1348 =
																			MAKE_PAIR(BgL_arg3596z00_1350, BNIL);
																	}
																	SET_CDR(BgL_tail3276z00_1345,
																		BgL_newtail3277z00_1348);
																	{
																		obj_t BgL_tail3276z00_5933;

																		obj_t BgL_l3273z00_5931;

																		BgL_l3273z00_5931 = CDR(BgL_l3273z00_1344);
																		BgL_tail3276z00_5933 =
																			BgL_newtail3277z00_1348;
																		BgL_tail3276z00_1345 = BgL_tail3276z00_5933;
																		BgL_l3273z00_1344 = BgL_l3273z00_5931;
																		goto BgL_zc3anonymousza33593ze3z83_1346;
																	}
																}
														}
													}
												}
										}
										BgL_arg3581z00_1327 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3590z00_1337, BNIL);
									}
									BgL_arg3575z00_1320 =
										MAKE_PAIR(BgL_arg3580z00_1326, BgL_arg3581z00_1327);
								}
								BgL_arg3572z00_1317 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3574z00_1319, BgL_arg3575z00_1320);
							}
							BgL_arg3570z00_1315 =
								MAKE_PAIR(BgL_arg3571z00_1316, BgL_arg3572z00_1317);
						}
					else
						{	/* Ast/dump.scm 104 */
							if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 115 */
									obj_t BgL_arg3602z00_1357;

									obj_t BgL_arg3603z00_1358;

									{	/* Ast/dump.scm 115 */
										BgL_varz00_bglt BgL_arg3604z00_1359;

										BgL_arg3604z00_1359 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->BgL_funz00);
										{	/* Ast/dump.scm 115 */
											BgL_nodez00_bglt BgL_nodez00_2343;

											BgL_nodez00_2343 =
												(BgL_nodez00_bglt) (BgL_arg3604z00_1359);
											{	/* Ast/dump.scm 115 */
												obj_t BgL_method3371z00_2344;

												{	/* Ast/dump.scm 115 */
													BgL_objectz00_bglt BgL_objz00_2345;

													BgL_objz00_2345 =
														(BgL_objectz00_bglt) (BgL_nodez00_2343);
													{	/* Ast/dump.scm 115 */
														long BgL_objzd2classzd2numz00_2346;

														BgL_objzd2classzd2numz00_2346 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2345);
														{	/* Ast/dump.scm 115 */
															obj_t BgL_arg2643z00_2347;

															BgL_arg2643z00_2347 =
																PROCEDURE_REF
																(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																(int) (((long) 1)));
															{	/* Ast/dump.scm 115 */
																obj_t BgL_arrayz00_2349;

																int BgL_offsetz00_2350;

																BgL_arrayz00_2349 = BgL_arg2643z00_2347;
																BgL_offsetz00_2350 =
																	(int) (BgL_objzd2classzd2numz00_2346);
																{	/* Ast/dump.scm 115 */
																	long BgL_offsetz00_2351;

																	BgL_offsetz00_2351 =
																		((long) (BgL_offsetz00_2350) - OBJECT_TYPE);
																	{	/* Ast/dump.scm 115 */
																		long BgL_modz00_2352;

																		{	/* Ast/dump.scm 115 */
																			int BgL_arg2645z00_2353;

																			BgL_arg2645z00_2353 = (int) (((long) 16));
																			{	/* Ast/dump.scm 115 */
																				long BgL_auxz00_5950;

																				BgL_auxz00_5950 =
																					(long) (BgL_arg2645z00_2353);
																				BgL_modz00_2352 =
																					(BgL_offsetz00_2351 /
																					BgL_auxz00_5950);
																		}}
																		{	/* Ast/dump.scm 115 */
																			long BgL_restz00_2354;

																			{	/* Ast/dump.scm 115 */
																				int BgL_arg2644z00_2355;

																				BgL_arg2644z00_2355 =
																					(int) (((long) 16));
																				{	/* Ast/dump.scm 115 */
																					long BgL_auxz00_5954;

																					BgL_auxz00_5954 =
																						(long) (BgL_arg2644z00_2355);
																					BgL_restz00_2354 =
																						(BgL_offsetz00_2351 %
																						BgL_auxz00_5954);
																			}}
																			{	/* Ast/dump.scm 115 */

																				BgL_method3371z00_2344 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2349,
																						(int) (BgL_modz00_2352)),
																					(int) (BgL_restz00_2354));
												}}}}}}}}
												BgL_arg3602z00_1357 =
													PROCEDURE_ENTRY(BgL_method3371z00_2344)
													(BgL_method3371z00_2344, (obj_t) (BgL_nodez00_2343),
													BEOA);
									}}}
									{	/* Ast/dump.scm 116 */
										obj_t BgL_arg3605z00_1360;

										obj_t BgL_arg3606z00_1361;

										{	/* Ast/dump.scm 116 */
											obj_t BgL_v3279z00_1363;

											BgL_v3279z00_1363 = create_vector((int) (((long) 2)));
											{	/* Ast/dump.scm 116 */
												bool_t BgL_arg3609z00_1365;

												BgL_arg3609z00_1365 =
													BGl_sidezd2effectzf3z21zzeffect_effectz00(
													(BgL_nodez00_bglt) (BgL_nodez00_1311));
												VECTOR_SET(BgL_v3279z00_1363,
													(int) (((long) 1)), BBOOL(BgL_arg3609z00_1365));
											}
											{	/* Ast/dump.scm 116 */
												int BgL_kz00_2373;

												obj_t BgL_objz00_2374;

												BgL_kz00_2373 = (int) (((long) 0));
												BgL_objz00_2374 = CNST_TABLE_REF(((long) 32));
												VECTOR_SET(BgL_v3279z00_1363, BgL_kz00_2373,
													BgL_objz00_2374);
											}
											BgL_arg3605z00_1360 = BgL_v3279z00_1363;
										}
										{	/* Ast/dump.scm 117 */
											obj_t BgL_arg3610z00_1366;

											{	/* Ast/dump.scm 117 */
												obj_t BgL_l3280z00_1368;

												BgL_l3280z00_1368 =
													(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->
													BgL_argsz00);
												if (NULLP(BgL_l3280z00_1368))
													{	/* Ast/dump.scm 117 */
														BgL_arg3610z00_1366 = BNIL;
													}
												else
													{	/* Ast/dump.scm 117 */
														obj_t BgL_head3282z00_1370;

														{	/* Ast/dump.scm 117 */
															obj_t BgL_arg3620z00_1383;

															{	/* Ast/dump.scm 117 */
																obj_t BgL_arg3622z00_1385;

																BgL_arg3622z00_1385 = CAR(BgL_l3280z00_1368);
																{	/* Ast/dump.scm 117 */
																	BgL_nodez00_bglt BgL_nodez00_2378;

																	BgL_nodez00_2378 =
																		(BgL_nodez00_bglt) (BgL_arg3622z00_1385);
																	{	/* Ast/dump.scm 117 */
																		obj_t BgL_method3371z00_2379;

																		{	/* Ast/dump.scm 117 */
																			BgL_objectz00_bglt BgL_objz00_2380;

																			BgL_objz00_2380 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2378);
																			{	/* Ast/dump.scm 117 */
																				long BgL_objzd2classzd2numz00_2381;

																				BgL_objzd2classzd2numz00_2381 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2380);
																				{	/* Ast/dump.scm 117 */
																					obj_t BgL_arg2643z00_2382;

																					BgL_arg2643z00_2382 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																						(int) (((long) 1)));
																					{	/* Ast/dump.scm 117 */
																						obj_t BgL_arrayz00_2384;

																						int BgL_offsetz00_2385;

																						BgL_arrayz00_2384 =
																							BgL_arg2643z00_2382;
																						BgL_offsetz00_2385 =
																							(int)
																							(BgL_objzd2classzd2numz00_2381);
																						{	/* Ast/dump.scm 117 */
																							long BgL_offsetz00_2386;

																							BgL_offsetz00_2386 =
																								(
																								(long) (BgL_offsetz00_2385) -
																								OBJECT_TYPE);
																							{	/* Ast/dump.scm 117 */
																								long BgL_modz00_2387;

																								{	/* Ast/dump.scm 117 */
																									int BgL_arg2645z00_2388;

																									BgL_arg2645z00_2388 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 117 */
																										long BgL_auxz00_5987;

																										BgL_auxz00_5987 =
																											(long)
																											(BgL_arg2645z00_2388);
																										BgL_modz00_2387 =
																											(BgL_offsetz00_2386 /
																											BgL_auxz00_5987);
																								}}
																								{	/* Ast/dump.scm 117 */
																									long BgL_restz00_2389;

																									{	/* Ast/dump.scm 117 */
																										int BgL_arg2644z00_2390;

																										BgL_arg2644z00_2390 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 117 */
																											long BgL_auxz00_5991;

																											BgL_auxz00_5991 =
																												(long)
																												(BgL_arg2644z00_2390);
																											BgL_restz00_2389 =
																												(BgL_offsetz00_2386 %
																												BgL_auxz00_5991);
																									}}
																									{	/* Ast/dump.scm 117 */

																										BgL_method3371z00_2379 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2384,
																												(int)
																												(BgL_modz00_2387)),
																											(int) (BgL_restz00_2389));
																		}}}}}}}}
																		BgL_arg3620z00_1383 =
																			PROCEDURE_ENTRY(BgL_method3371z00_2379)
																			(BgL_method3371z00_2379,
																			(obj_t) (BgL_nodez00_2378), BEOA);
															}}}
															BgL_head3282z00_1370 =
																MAKE_PAIR(BgL_arg3620z00_1383, BNIL);
														}
														{	/* Ast/dump.scm 117 */
															obj_t BgL_g3285z00_1371;

															BgL_g3285z00_1371 = CDR(BgL_l3280z00_1368);
															{
																obj_t BgL_l3280z00_1373;

																obj_t BgL_tail3283z00_1374;

																BgL_l3280z00_1373 = BgL_g3285z00_1371;
																BgL_tail3283z00_1374 = BgL_head3282z00_1370;
															BgL_zc3anonymousza33614ze3z83_1375:
																if (NULLP(BgL_l3280z00_1373))
																	{	/* Ast/dump.scm 117 */
																		BgL_arg3610z00_1366 = BgL_head3282z00_1370;
																	}
																else
																	{	/* Ast/dump.scm 117 */
																		obj_t BgL_newtail3284z00_1377;

																		{	/* Ast/dump.scm 117 */
																			obj_t BgL_arg3617z00_1379;

																			{	/* Ast/dump.scm 117 */
																				obj_t BgL_arg3619z00_1381;

																				BgL_arg3619z00_1381 =
																					CAR(BgL_l3280z00_1373);
																				{	/* Ast/dump.scm 117 */
																					BgL_nodez00_bglt BgL_nodez00_2409;

																					BgL_nodez00_2409 =
																						(BgL_nodez00_bglt)
																						(BgL_arg3619z00_1381);
																					{	/* Ast/dump.scm 117 */
																						obj_t BgL_method3371z00_2410;

																						{	/* Ast/dump.scm 117 */
																							BgL_objectz00_bglt
																								BgL_objz00_2411;
																							BgL_objz00_2411 =
																								(BgL_objectz00_bglt)
																								(BgL_nodez00_2409);
																							{	/* Ast/dump.scm 117 */
																								long
																									BgL_objzd2classzd2numz00_2412;
																								BgL_objzd2classzd2numz00_2412 =
																									BGL_OBJECT_CLASS_NUM
																									(BgL_objz00_2411);
																								{	/* Ast/dump.scm 117 */
																									obj_t BgL_arg2643z00_2413;

																									BgL_arg2643z00_2413 =
																										PROCEDURE_REF
																										(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																										(int) (((long) 1)));
																									{	/* Ast/dump.scm 117 */
																										obj_t BgL_arrayz00_2415;

																										int BgL_offsetz00_2416;

																										BgL_arrayz00_2415 =
																											BgL_arg2643z00_2413;
																										BgL_offsetz00_2416 =
																											(int)
																											(BgL_objzd2classzd2numz00_2412);
																										{	/* Ast/dump.scm 117 */
																											long BgL_offsetz00_2417;

																											BgL_offsetz00_2417 =
																												(
																												(long)
																												(BgL_offsetz00_2416) -
																												OBJECT_TYPE);
																											{	/* Ast/dump.scm 117 */
																												long BgL_modz00_2418;

																												{	/* Ast/dump.scm 117 */
																													int
																														BgL_arg2645z00_2419;
																													BgL_arg2645z00_2419 =
																														(int) (((long) 16));
																													{	/* Ast/dump.scm 117 */
																														long
																															BgL_auxz00_6015;
																														BgL_auxz00_6015 =
																															(long)
																															(BgL_arg2645z00_2419);
																														BgL_modz00_2418 =
																															(BgL_offsetz00_2417
																															/
																															BgL_auxz00_6015);
																												}}
																												{	/* Ast/dump.scm 117 */
																													long BgL_restz00_2420;

																													{	/* Ast/dump.scm 117 */
																														int
																															BgL_arg2644z00_2421;
																														BgL_arg2644z00_2421
																															=
																															(int) (((long)
																																16));
																														{	/* Ast/dump.scm 117 */
																															long
																																BgL_auxz00_6019;
																															BgL_auxz00_6019 =
																																(long)
																																(BgL_arg2644z00_2421);
																															BgL_restz00_2420 =
																																(BgL_offsetz00_2417
																																%
																																BgL_auxz00_6019);
																													}}
																													{	/* Ast/dump.scm 117 */

																														BgL_method3371z00_2410
																															=
																															VECTOR_REF
																															(VECTOR_REF
																															(BgL_arrayz00_2415,
																																(int)
																																(BgL_modz00_2418)),
																															(int)
																															(BgL_restz00_2420));
																						}}}}}}}}
																						BgL_arg3617z00_1379 =
																							PROCEDURE_ENTRY
																							(BgL_method3371z00_2410)
																							(BgL_method3371z00_2410,
																							(obj_t) (BgL_nodez00_2409), BEOA);
																			}}}
																			BgL_newtail3284z00_1377 =
																				MAKE_PAIR(BgL_arg3617z00_1379, BNIL);
																		}
																		SET_CDR(BgL_tail3283z00_1374,
																			BgL_newtail3284z00_1377);
																		{
																			obj_t BgL_tail3283z00_6033;

																			obj_t BgL_l3280z00_6031;

																			BgL_l3280z00_6031 =
																				CDR(BgL_l3280z00_1373);
																			BgL_tail3283z00_6033 =
																				BgL_newtail3284z00_1377;
																			BgL_tail3283z00_1374 =
																				BgL_tail3283z00_6033;
																			BgL_l3280z00_1373 = BgL_l3280z00_6031;
																			goto BgL_zc3anonymousza33614ze3z83_1375;
																		}
																	}
															}
														}
													}
											}
											BgL_arg3606z00_1361 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3610z00_1366, BNIL);
										}
										{	/* Ast/dump.scm 115 */
											obj_t BgL_list3607z00_1362;

											BgL_list3607z00_1362 =
												MAKE_PAIR(BgL_arg3606z00_1361, BNIL);
											BgL_arg3603z00_1358 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3605z00_1360, BgL_list3607z00_1362);
										}
									}
									BgL_arg3570z00_1315 =
										MAKE_PAIR(BgL_arg3602z00_1357, BgL_arg3603z00_1358);
								}
							else
								{	/* Ast/dump.scm 119 */
									obj_t BgL_arg3623z00_1386;

									obj_t BgL_arg3624z00_1387;

									{	/* Ast/dump.scm 119 */
										BgL_varz00_bglt BgL_arg3625z00_1388;

										BgL_arg3625z00_1388 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->BgL_funz00);
										{	/* Ast/dump.scm 119 */
											BgL_nodez00_bglt BgL_nodez00_2441;

											BgL_nodez00_2441 =
												(BgL_nodez00_bglt) (BgL_arg3625z00_1388);
											{	/* Ast/dump.scm 119 */
												obj_t BgL_method3371z00_2442;

												{	/* Ast/dump.scm 119 */
													BgL_objectz00_bglt BgL_objz00_2443;

													BgL_objz00_2443 =
														(BgL_objectz00_bglt) (BgL_nodez00_2441);
													{	/* Ast/dump.scm 119 */
														long BgL_objzd2classzd2numz00_2444;

														BgL_objzd2classzd2numz00_2444 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2443);
														{	/* Ast/dump.scm 119 */
															obj_t BgL_arg2643z00_2445;

															BgL_arg2643z00_2445 =
																PROCEDURE_REF
																(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																(int) (((long) 1)));
															{	/* Ast/dump.scm 119 */
																obj_t BgL_arrayz00_2447;

																int BgL_offsetz00_2448;

																BgL_arrayz00_2447 = BgL_arg2643z00_2445;
																BgL_offsetz00_2448 =
																	(int) (BgL_objzd2classzd2numz00_2444);
																{	/* Ast/dump.scm 119 */
																	long BgL_offsetz00_2449;

																	BgL_offsetz00_2449 =
																		((long) (BgL_offsetz00_2448) - OBJECT_TYPE);
																	{	/* Ast/dump.scm 119 */
																		long BgL_modz00_2450;

																		{	/* Ast/dump.scm 119 */
																			int BgL_arg2645z00_2451;

																			BgL_arg2645z00_2451 = (int) (((long) 16));
																			{	/* Ast/dump.scm 119 */
																				long BgL_auxz00_6048;

																				BgL_auxz00_6048 =
																					(long) (BgL_arg2645z00_2451);
																				BgL_modz00_2450 =
																					(BgL_offsetz00_2449 /
																					BgL_auxz00_6048);
																		}}
																		{	/* Ast/dump.scm 119 */
																			long BgL_restz00_2452;

																			{	/* Ast/dump.scm 119 */
																				int BgL_arg2644z00_2453;

																				BgL_arg2644z00_2453 =
																					(int) (((long) 16));
																				{	/* Ast/dump.scm 119 */
																					long BgL_auxz00_6052;

																					BgL_auxz00_6052 =
																						(long) (BgL_arg2644z00_2453);
																					BgL_restz00_2452 =
																						(BgL_offsetz00_2449 %
																						BgL_auxz00_6052);
																			}}
																			{	/* Ast/dump.scm 119 */

																				BgL_method3371z00_2442 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2447,
																						(int) (BgL_modz00_2450)),
																					(int) (BgL_restz00_2452));
												}}}}}}}}
												BgL_arg3623z00_1386 =
													PROCEDURE_ENTRY(BgL_method3371z00_2442)
													(BgL_method3371z00_2442, (obj_t) (BgL_nodez00_2441),
													BEOA);
									}}}
									{	/* Ast/dump.scm 120 */
										obj_t BgL_arg3626z00_1389;

										{	/* Ast/dump.scm 120 */
											obj_t BgL_l3286z00_1391;

											BgL_l3286z00_1391 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1311))->
												BgL_argsz00);
											if (NULLP(BgL_l3286z00_1391))
												{	/* Ast/dump.scm 120 */
													BgL_arg3626z00_1389 = BNIL;
												}
											else
												{	/* Ast/dump.scm 120 */
													obj_t BgL_head3288z00_1393;

													{	/* Ast/dump.scm 120 */
														obj_t BgL_arg3635z00_1406;

														{	/* Ast/dump.scm 120 */
															obj_t BgL_arg3637z00_1408;

															BgL_arg3637z00_1408 = CAR(BgL_l3286z00_1391);
															{	/* Ast/dump.scm 120 */
																BgL_nodez00_bglt BgL_nodez00_2470;

																BgL_nodez00_2470 =
																	(BgL_nodez00_bglt) (BgL_arg3637z00_1408);
																{	/* Ast/dump.scm 120 */
																	obj_t BgL_method3371z00_2471;

																	{	/* Ast/dump.scm 120 */
																		BgL_objectz00_bglt BgL_objz00_2472;

																		BgL_objz00_2472 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2470);
																		{	/* Ast/dump.scm 120 */
																			long BgL_objzd2classzd2numz00_2473;

																			BgL_objzd2classzd2numz00_2473 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2472);
																			{	/* Ast/dump.scm 120 */
																				obj_t BgL_arg2643z00_2474;

																				BgL_arg2643z00_2474 =
																					PROCEDURE_REF
																					(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																					(int) (((long) 1)));
																				{	/* Ast/dump.scm 120 */
																					obj_t BgL_arrayz00_2476;

																					int BgL_offsetz00_2477;

																					BgL_arrayz00_2476 =
																						BgL_arg2643z00_2474;
																					BgL_offsetz00_2477 =
																						(int)
																						(BgL_objzd2classzd2numz00_2473);
																					{	/* Ast/dump.scm 120 */
																						long BgL_offsetz00_2478;

																						BgL_offsetz00_2478 =
																							(
																							(long) (BgL_offsetz00_2477) -
																							OBJECT_TYPE);
																						{	/* Ast/dump.scm 120 */
																							long BgL_modz00_2479;

																							{	/* Ast/dump.scm 120 */
																								int BgL_arg2645z00_2480;

																								BgL_arg2645z00_2480 =
																									(int) (((long) 16));
																								{	/* Ast/dump.scm 120 */
																									long BgL_auxz00_6075;

																									BgL_auxz00_6075 =
																										(long)
																										(BgL_arg2645z00_2480);
																									BgL_modz00_2479 =
																										(BgL_offsetz00_2478 /
																										BgL_auxz00_6075);
																							}}
																							{	/* Ast/dump.scm 120 */
																								long BgL_restz00_2481;

																								{	/* Ast/dump.scm 120 */
																									int BgL_arg2644z00_2482;

																									BgL_arg2644z00_2482 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 120 */
																										long BgL_auxz00_6079;

																										BgL_auxz00_6079 =
																											(long)
																											(BgL_arg2644z00_2482);
																										BgL_restz00_2481 =
																											(BgL_offsetz00_2478 %
																											BgL_auxz00_6079);
																								}}
																								{	/* Ast/dump.scm 120 */

																									BgL_method3371z00_2471 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2476,
																											(int) (BgL_modz00_2479)),
																										(int) (BgL_restz00_2481));
																	}}}}}}}}
																	BgL_arg3635z00_1406 =
																		PROCEDURE_ENTRY(BgL_method3371z00_2471)
																		(BgL_method3371z00_2471,
																		(obj_t) (BgL_nodez00_2470), BEOA);
														}}}
														BgL_head3288z00_1393 =
															MAKE_PAIR(BgL_arg3635z00_1406, BNIL);
													}
													{	/* Ast/dump.scm 120 */
														obj_t BgL_g3291z00_1394;

														BgL_g3291z00_1394 = CDR(BgL_l3286z00_1391);
														{
															obj_t BgL_l3286z00_1396;

															obj_t BgL_tail3289z00_1397;

															BgL_l3286z00_1396 = BgL_g3291z00_1394;
															BgL_tail3289z00_1397 = BgL_head3288z00_1393;
														BgL_zc3anonymousza33629ze3z83_1398:
															if (NULLP(BgL_l3286z00_1396))
																{	/* Ast/dump.scm 120 */
																	BgL_arg3626z00_1389 = BgL_head3288z00_1393;
																}
															else
																{	/* Ast/dump.scm 120 */
																	obj_t BgL_newtail3290z00_1400;

																	{	/* Ast/dump.scm 120 */
																		obj_t BgL_arg3632z00_1402;

																		{	/* Ast/dump.scm 120 */
																			obj_t BgL_arg3634z00_1404;

																			BgL_arg3634z00_1404 =
																				CAR(BgL_l3286z00_1396);
																			{	/* Ast/dump.scm 120 */
																				BgL_nodez00_bglt BgL_nodez00_2501;

																				BgL_nodez00_2501 =
																					(BgL_nodez00_bglt)
																					(BgL_arg3634z00_1404);
																				{	/* Ast/dump.scm 120 */
																					obj_t BgL_method3371z00_2502;

																					{	/* Ast/dump.scm 120 */
																						BgL_objectz00_bglt BgL_objz00_2503;

																						BgL_objz00_2503 =
																							(BgL_objectz00_bglt)
																							(BgL_nodez00_2501);
																						{	/* Ast/dump.scm 120 */
																							long
																								BgL_objzd2classzd2numz00_2504;
																							BgL_objzd2classzd2numz00_2504 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_2503);
																							{	/* Ast/dump.scm 120 */
																								obj_t BgL_arg2643z00_2505;

																								BgL_arg2643z00_2505 =
																									PROCEDURE_REF
																									(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																									(int) (((long) 1)));
																								{	/* Ast/dump.scm 120 */
																									obj_t BgL_arrayz00_2507;

																									int BgL_offsetz00_2508;

																									BgL_arrayz00_2507 =
																										BgL_arg2643z00_2505;
																									BgL_offsetz00_2508 =
																										(int)
																										(BgL_objzd2classzd2numz00_2504);
																									{	/* Ast/dump.scm 120 */
																										long BgL_offsetz00_2509;

																										BgL_offsetz00_2509 =
																											(
																											(long)
																											(BgL_offsetz00_2508) -
																											OBJECT_TYPE);
																										{	/* Ast/dump.scm 120 */
																											long BgL_modz00_2510;

																											{	/* Ast/dump.scm 120 */
																												int BgL_arg2645z00_2511;

																												BgL_arg2645z00_2511 =
																													(int) (((long) 16));
																												{	/* Ast/dump.scm 120 */
																													long BgL_auxz00_6103;

																													BgL_auxz00_6103 =
																														(long)
																														(BgL_arg2645z00_2511);
																													BgL_modz00_2510 =
																														(BgL_offsetz00_2509
																														/ BgL_auxz00_6103);
																											}}
																											{	/* Ast/dump.scm 120 */
																												long BgL_restz00_2512;

																												{	/* Ast/dump.scm 120 */
																													int
																														BgL_arg2644z00_2513;
																													BgL_arg2644z00_2513 =
																														(int) (((long) 16));
																													{	/* Ast/dump.scm 120 */
																														long
																															BgL_auxz00_6107;
																														BgL_auxz00_6107 =
																															(long)
																															(BgL_arg2644z00_2513);
																														BgL_restz00_2512 =
																															(BgL_offsetz00_2509
																															%
																															BgL_auxz00_6107);
																												}}
																												{	/* Ast/dump.scm 120 */

																													BgL_method3371z00_2502
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_2507,
																															(int)
																															(BgL_modz00_2510)),
																														(int)
																														(BgL_restz00_2512));
																					}}}}}}}}
																					BgL_arg3632z00_1402 =
																						PROCEDURE_ENTRY
																						(BgL_method3371z00_2502)
																						(BgL_method3371z00_2502,
																						(obj_t) (BgL_nodez00_2501), BEOA);
																		}}}
																		BgL_newtail3290z00_1400 =
																			MAKE_PAIR(BgL_arg3632z00_1402, BNIL);
																	}
																	SET_CDR(BgL_tail3289z00_1397,
																		BgL_newtail3290z00_1400);
																	{
																		obj_t BgL_tail3289z00_6121;

																		obj_t BgL_l3286z00_6119;

																		BgL_l3286z00_6119 = CDR(BgL_l3286z00_1396);
																		BgL_tail3289z00_6121 =
																			BgL_newtail3290z00_1400;
																		BgL_tail3289z00_1397 = BgL_tail3289z00_6121;
																		BgL_l3286z00_1396 = BgL_l3286z00_6119;
																		goto BgL_zc3anonymousza33629ze3z83_1398;
																	}
																}
														}
													}
												}
										}
										BgL_arg3624z00_1387 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3626z00_1389, BNIL);
									}
									BgL_arg3570z00_1315 =
										MAKE_PAIR(BgL_arg3623z00_1386, BgL_arg3624z00_1387);
								}
						}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3569z00_1314,
						BgL_arg3570z00_1315);
				}
			}
		}
	}



/* node->sexp-sequence3381 */
	obj_t BGl_nodezd2ze3sexpzd2sequence3381ze3zzast_dumpz00(obj_t BgL_envz00_4117,
		obj_t BgL_nodez00_4118)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 91 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1282;

				BgL_nodez00_1282 = (BgL_sequencez00_bglt) (BgL_nodez00_4118);
				{	/* Ast/dump.scm 93 */
					obj_t BgL_arg3552z00_1285;

					obj_t BgL_arg3553z00_1286;

					{
						BgL_nodez00_bglt BgL_auxz00_6126;

						BgL_auxz00_6126 = (BgL_nodez00_bglt) (BgL_nodez00_1282);
						BgL_arg3552z00_1285 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_6126))->BgL_locz00);
					}
					{	/* Ast/dump.scm 94 */
						obj_t BgL_arg3554z00_1287;

						obj_t BgL_arg3555z00_1288;

						BgL_arg3554z00_1287 = CNST_TABLE_REF(((long) 33));
						{	/* Ast/dump.scm 95 */
							obj_t BgL_arg3556z00_1289;

							{	/* Ast/dump.scm 95 */
								obj_t BgL_l3265z00_1291;

								BgL_l3265z00_1291 =
									(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1282))->
									BgL_nodesz00);
								if (NULLP(BgL_l3265z00_1291))
									{	/* Ast/dump.scm 95 */
										BgL_arg3556z00_1289 = BNIL;
									}
								else
									{	/* Ast/dump.scm 95 */
										obj_t BgL_head3267z00_1293;

										{	/* Ast/dump.scm 95 */
											obj_t BgL_arg3565z00_1306;

											{	/* Ast/dump.scm 95 */
												obj_t BgL_arg3567z00_1308;

												BgL_arg3567z00_1308 = CAR(BgL_l3265z00_1291);
												{	/* Ast/dump.scm 95 */
													BgL_nodez00_bglt BgL_nodez00_2169;

													BgL_nodez00_2169 =
														(BgL_nodez00_bglt) (BgL_arg3567z00_1308);
													{	/* Ast/dump.scm 95 */
														obj_t BgL_method3371z00_2170;

														{	/* Ast/dump.scm 95 */
															BgL_objectz00_bglt BgL_objz00_2171;

															BgL_objz00_2171 =
																(BgL_objectz00_bglt) (BgL_nodez00_2169);
															{	/* Ast/dump.scm 95 */
																long BgL_objzd2classzd2numz00_2172;

																BgL_objzd2classzd2numz00_2172 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2171);
																{	/* Ast/dump.scm 95 */
																	obj_t BgL_arg2643z00_2173;

																	BgL_arg2643z00_2173 =
																		PROCEDURE_REF
																		(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																		(int) (((long) 1)));
																	{	/* Ast/dump.scm 95 */
																		obj_t BgL_arrayz00_2175;

																		int BgL_offsetz00_2176;

																		BgL_arrayz00_2175 = BgL_arg2643z00_2173;
																		BgL_offsetz00_2176 =
																			(int) (BgL_objzd2classzd2numz00_2172);
																		{	/* Ast/dump.scm 95 */
																			long BgL_offsetz00_2177;

																			BgL_offsetz00_2177 =
																				(
																				(long) (BgL_offsetz00_2176) -
																				OBJECT_TYPE);
																			{	/* Ast/dump.scm 95 */
																				long BgL_modz00_2178;

																				{	/* Ast/dump.scm 95 */
																					int BgL_arg2645z00_2179;

																					BgL_arg2645z00_2179 =
																						(int) (((long) 16));
																					{	/* Ast/dump.scm 95 */
																						long BgL_auxz00_6143;

																						BgL_auxz00_6143 =
																							(long) (BgL_arg2645z00_2179);
																						BgL_modz00_2178 =
																							(BgL_offsetz00_2177 /
																							BgL_auxz00_6143);
																				}}
																				{	/* Ast/dump.scm 95 */
																					long BgL_restz00_2180;

																					{	/* Ast/dump.scm 95 */
																						int BgL_arg2644z00_2181;

																						BgL_arg2644z00_2181 =
																							(int) (((long) 16));
																						{	/* Ast/dump.scm 95 */
																							long BgL_auxz00_6147;

																							BgL_auxz00_6147 =
																								(long) (BgL_arg2644z00_2181);
																							BgL_restz00_2180 =
																								(BgL_offsetz00_2177 %
																								BgL_auxz00_6147);
																					}}
																					{	/* Ast/dump.scm 95 */

																						BgL_method3371z00_2170 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2175,
																								(int) (BgL_modz00_2178)),
																							(int) (BgL_restz00_2180));
														}}}}}}}}
														BgL_arg3565z00_1306 =
															PROCEDURE_ENTRY(BgL_method3371z00_2170)
															(BgL_method3371z00_2170,
															(obj_t) (BgL_nodez00_2169), BEOA);
											}}}
											BgL_head3267z00_1293 =
												MAKE_PAIR(BgL_arg3565z00_1306, BNIL);
										}
										{	/* Ast/dump.scm 95 */
											obj_t BgL_g3270z00_1294;

											BgL_g3270z00_1294 = CDR(BgL_l3265z00_1291);
											{
												obj_t BgL_l3265z00_1296;

												obj_t BgL_tail3268z00_1297;

												BgL_l3265z00_1296 = BgL_g3270z00_1294;
												BgL_tail3268z00_1297 = BgL_head3267z00_1293;
											BgL_zc3anonymousza33559ze3z83_1298:
												if (NULLP(BgL_l3265z00_1296))
													{	/* Ast/dump.scm 95 */
														BgL_arg3556z00_1289 = BgL_head3267z00_1293;
													}
												else
													{	/* Ast/dump.scm 95 */
														obj_t BgL_newtail3269z00_1300;

														{	/* Ast/dump.scm 95 */
															obj_t BgL_arg3562z00_1302;

															{	/* Ast/dump.scm 95 */
																obj_t BgL_arg3564z00_1304;

																BgL_arg3564z00_1304 = CAR(BgL_l3265z00_1296);
																{	/* Ast/dump.scm 95 */
																	BgL_nodez00_bglt BgL_nodez00_2200;

																	BgL_nodez00_2200 =
																		(BgL_nodez00_bglt) (BgL_arg3564z00_1304);
																	{	/* Ast/dump.scm 95 */
																		obj_t BgL_method3371z00_2201;

																		{	/* Ast/dump.scm 95 */
																			BgL_objectz00_bglt BgL_objz00_2202;

																			BgL_objz00_2202 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2200);
																			{	/* Ast/dump.scm 95 */
																				long BgL_objzd2classzd2numz00_2203;

																				BgL_objzd2classzd2numz00_2203 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2202);
																				{	/* Ast/dump.scm 95 */
																					obj_t BgL_arg2643z00_2204;

																					BgL_arg2643z00_2204 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
																						(int) (((long) 1)));
																					{	/* Ast/dump.scm 95 */
																						obj_t BgL_arrayz00_2206;

																						int BgL_offsetz00_2207;

																						BgL_arrayz00_2206 =
																							BgL_arg2643z00_2204;
																						BgL_offsetz00_2207 =
																							(int)
																							(BgL_objzd2classzd2numz00_2203);
																						{	/* Ast/dump.scm 95 */
																							long BgL_offsetz00_2208;

																							BgL_offsetz00_2208 =
																								(
																								(long) (BgL_offsetz00_2207) -
																								OBJECT_TYPE);
																							{	/* Ast/dump.scm 95 */
																								long BgL_modz00_2209;

																								{	/* Ast/dump.scm 95 */
																									int BgL_arg2645z00_2210;

																									BgL_arg2645z00_2210 =
																										(int) (((long) 16));
																									{	/* Ast/dump.scm 95 */
																										long BgL_auxz00_6171;

																										BgL_auxz00_6171 =
																											(long)
																											(BgL_arg2645z00_2210);
																										BgL_modz00_2209 =
																											(BgL_offsetz00_2208 /
																											BgL_auxz00_6171);
																								}}
																								{	/* Ast/dump.scm 95 */
																									long BgL_restz00_2211;

																									{	/* Ast/dump.scm 95 */
																										int BgL_arg2644z00_2212;

																										BgL_arg2644z00_2212 =
																											(int) (((long) 16));
																										{	/* Ast/dump.scm 95 */
																											long BgL_auxz00_6175;

																											BgL_auxz00_6175 =
																												(long)
																												(BgL_arg2644z00_2212);
																											BgL_restz00_2211 =
																												(BgL_offsetz00_2208 %
																												BgL_auxz00_6175);
																									}}
																									{	/* Ast/dump.scm 95 */

																										BgL_method3371z00_2201 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2206,
																												(int)
																												(BgL_modz00_2209)),
																											(int) (BgL_restz00_2211));
																		}}}}}}}}
																		BgL_arg3562z00_1302 =
																			PROCEDURE_ENTRY(BgL_method3371z00_2201)
																			(BgL_method3371z00_2201,
																			(obj_t) (BgL_nodez00_2200), BEOA);
															}}}
															BgL_newtail3269z00_1300 =
																MAKE_PAIR(BgL_arg3562z00_1302, BNIL);
														}
														SET_CDR(BgL_tail3268z00_1297,
															BgL_newtail3269z00_1300);
														{
															obj_t BgL_tail3268z00_6189;

															obj_t BgL_l3265z00_6187;

															BgL_l3265z00_6187 = CDR(BgL_l3265z00_1296);
															BgL_tail3268z00_6189 = BgL_newtail3269z00_1300;
															BgL_tail3268z00_1297 = BgL_tail3268z00_6189;
															BgL_l3265z00_1296 = BgL_l3265z00_6187;
															goto BgL_zc3anonymousza33559ze3z83_1298;
														}
													}
											}
										}
									}
							}
							BgL_arg3555z00_1288 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg3556z00_1289, BNIL);
						}
						BgL_arg3553z00_1286 =
							MAKE_PAIR(BgL_arg3554z00_1287, BgL_arg3555z00_1288);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3552z00_1285,
						BgL_arg3553z00_1286);
				}
			}
		}
	}



/* node->sexp-kwote3379 */
	obj_t BGl_nodezd2ze3sexpzd2kwote3379ze3zzast_dumpz00(obj_t BgL_envz00_4119,
		obj_t BgL_nodez00_4120)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 79 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1262;

				BgL_nodez00_1262 = (BgL_kwotez00_bglt) (BgL_nodez00_4120);
				{	/* Ast/dump.scm 81 */
					obj_t BgL_arg3537z00_1265;

					obj_t BgL_arg3538z00_1266;

					{
						BgL_nodez00_bglt BgL_auxz00_6194;

						BgL_auxz00_6194 = (BgL_nodez00_bglt) (BgL_nodez00_1262);
						BgL_arg3537z00_1265 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_6194))->BgL_locz00);
					}
					{	/* Ast/dump.scm 82 */
						obj_t BgL_valuez00_1267;

						BgL_valuez00_1267 =
							(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1262))->BgL_valuez00);
						{	/* Ast/dump.scm 83 */
							bool_t BgL_testz00_6198;

							if (STRUCTP(BgL_valuez00_1267))
								{	/* Ast/dump.scm 83 */
									BgL_testz00_6198 =
										(STRUCT_KEY(BgL_valuez00_1267) ==
										CNST_TABLE_REF(((long) 34)));
								}
							else
								{	/* Ast/dump.scm 83 */
									BgL_testz00_6198 = ((bool_t) 0);
								}
							if (BgL_testz00_6198)
								{	/* Ast/dump.scm 84 */
									obj_t BgL_arg3540z00_1269;

									obj_t BgL_arg3541z00_1270;

									BgL_arg3540z00_1269 = CNST_TABLE_REF(((long) 35));
									{	/* Ast/dump.scm 84 */
										obj_t BgL_arg3542z00_1271;

										{	/* Ast/dump.scm 84 */
											obj_t BgL_arg3545z00_1274;

											obj_t BgL_arg3546z00_1275;

											BgL_arg3545z00_1274 =
												BGl_shapez00zztools_shapez00(STRUCT_REF
												(BgL_valuez00_1267, (int) (((long) 0))));
											BgL_arg3546z00_1275 =
												STRUCT_REF(BgL_valuez00_1267, (int) (((long) 1)));
											{	/* Ast/dump.scm 84 */
												obj_t BgL_newz00_2153;

												BgL_newz00_2153 =
													create_struct(CNST_TABLE_REF(((long) 34)),
													(int) (((long) 2)));
												{	/* Ast/dump.scm 84 */
													int BgL_auxz00_6213;

													BgL_auxz00_6213 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2153, BgL_auxz00_6213,
														BgL_arg3546z00_1275);
												}
												{	/* Ast/dump.scm 84 */
													int BgL_auxz00_6216;

													BgL_auxz00_6216 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2153, BgL_auxz00_6216,
														BgL_arg3545z00_1274);
												}
												BgL_arg3542z00_1271 = BgL_newz00_2153;
										}}
										{	/* Ast/dump.scm 84 */
											obj_t BgL_list3544z00_1273;

											BgL_list3544z00_1273 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg3541z00_1270 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3542z00_1271, BgL_list3544z00_1273);
									}}
									BgL_arg3538z00_1266 =
										MAKE_PAIR(BgL_arg3540z00_1269, BgL_arg3541z00_1270);
								}
							else
								{	/* Ast/dump.scm 86 */
									obj_t BgL_arg3548z00_1277;

									obj_t BgL_arg3549z00_1278;

									BgL_arg3548z00_1277 = CNST_TABLE_REF(((long) 35));
									{	/* Ast/dump.scm 86 */
										obj_t BgL_list3550z00_1279;

										BgL_list3550z00_1279 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg3549z00_1278 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_valuez00_1267, BgL_list3550z00_1279);
									}
									BgL_arg3538z00_1266 =
										MAKE_PAIR(BgL_arg3548z00_1277, BgL_arg3549z00_1278);
					}}}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3537z00_1265,
						BgL_arg3538z00_1266);
				}
			}
		}
	}



/* node->sexp-closure3377 */
	obj_t BGl_nodezd2ze3sexpzd2closure3377ze3zzast_dumpz00(obj_t BgL_envz00_4121,
		obj_t BgL_nodez00_4122)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 71 */
			{
				BgL_closurez00_bglt BgL_nodez00_1249;

				BgL_nodez00_1249 = (BgL_closurez00_bglt) (BgL_nodez00_4122);
				{	/* Ast/dump.scm 73 */
					obj_t BgL_arg3528z00_1252;

					obj_t BgL_arg3529z00_1253;

					{
						BgL_nodez00_bglt BgL_auxz00_6228;

						BgL_auxz00_6228 = (BgL_nodez00_bglt) (BgL_nodez00_1249);
						BgL_arg3528z00_1252 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_6228))->BgL_locz00);
					}
					{	/* Ast/dump.scm 74 */
						obj_t BgL_arg3530z00_1254;

						obj_t BgL_arg3531z00_1255;

						BgL_arg3530z00_1254 = CNST_TABLE_REF(((long) 36));
						{	/* Ast/dump.scm 74 */
							obj_t BgL_arg3532z00_1256;

							{	/* Ast/dump.scm 74 */
								BgL_variablez00_bglt BgL_arg3535z00_1259;

								{
									BgL_varz00_bglt BgL_auxz00_6232;

									BgL_auxz00_6232 = (BgL_varz00_bglt) (BgL_nodez00_1249);
									BgL_arg3535z00_1259 =
										(((BgL_varz00_bglt) CREF(BgL_auxz00_6232))->
										BgL_variablez00);
								}
								BgL_arg3532z00_1256 =
									BGl_shapez00zztools_shapez00((obj_t) (BgL_arg3535z00_1259));
							}
							{	/* Ast/dump.scm 74 */
								obj_t BgL_list3534z00_1258;

								BgL_list3534z00_1258 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg3531z00_1255 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg3532z00_1256, BgL_list3534z00_1258);
						}}
						BgL_arg3529z00_1253 =
							MAKE_PAIR(BgL_arg3530z00_1254, BgL_arg3531z00_1255);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3528z00_1252,
						BgL_arg3529z00_1253);
				}
			}
		}
	}



/* node->sexp-var3375 */
	obj_t BGl_nodezd2ze3sexpzd2var3375ze3zzast_dumpz00(obj_t BgL_envz00_4123,
		obj_t BgL_nodez00_4124)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 55 */
			{
				BgL_varz00_bglt BgL_nodez00_1221;

				BgL_nodez00_1221 = (BgL_varz00_bglt) (BgL_nodez00_4124);
				{	/* Ast/dump.scm 58 */
					obj_t BgL_vshapez00_1225;

					{	/* Ast/dump.scm 58 */
						BgL_variablez00_bglt BgL_arg3526z00_1246;

						BgL_arg3526z00_1246 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1221))->BgL_variablez00);
						BgL_vshapez00_1225 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_arg3526z00_1246));
					}
					{	/* Ast/dump.scm 58 */
						obj_t BgL_tvshapez00_1226;

						{	/* Ast/dump.scm 59 */
							bool_t BgL_testz00_6245;

							if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 60 */
									bool_t BgL_testz00_6248;

									{	/* Ast/dump.scm 60 */
										BgL_valuez00_bglt BgL_arg3524z00_1244;

										{	/* Ast/dump.scm 60 */
											BgL_variablez00_bglt BgL_obj1611z00_2121;

											BgL_obj1611z00_2121 =
												(((BgL_varz00_bglt) CREF(BgL_nodez00_1221))->
												BgL_variablez00);
											BgL_arg3524z00_1244 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2121))->
												BgL_valuez00);
										}
										{	/* Ast/dump.scm 60 */
											obj_t BgL_obj1955z00_2122;

											BgL_obj1955z00_2122 = (obj_t) (BgL_arg3524z00_1244);
											BgL_testz00_6248 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2122,
												BGl_sfunz00zzast_varz00);
										}
									}
									if (BgL_testz00_6248)
										{	/* Ast/dump.scm 60 */
											BgL_testz00_6245 = ((bool_t) 0);
										}
									else
										{	/* Ast/dump.scm 61 */
											bool_t BgL_testz00_6253;

											{	/* Ast/dump.scm 61 */
												obj_t BgL_auxz00_6260;

												obj_t BgL_auxz00_6254;

												{	/* Ast/dump.scm 61 */
													BgL_typez00_bglt BgL_auxz00_6261;

													{	/* Ast/dump.scm 61 */
														BgL_variablez00_bglt BgL_obj1608z00_2125;

														BgL_obj1608z00_2125 =
															(((BgL_varz00_bglt) CREF(BgL_nodez00_1221))->
															BgL_variablez00);
														BgL_auxz00_6261 =
															(((BgL_variablez00_bglt)
																CREF(BgL_obj1608z00_2125))->BgL_typez00);
													}
													BgL_auxz00_6260 = (obj_t) (BgL_auxz00_6261);
												}
												{	/* Ast/dump.scm 61 */
													BgL_typez00_bglt BgL_auxz00_6255;

													{
														BgL_nodez00_bglt BgL_auxz00_6256;

														BgL_auxz00_6256 =
															(BgL_nodez00_bglt) (BgL_nodez00_1221);
														BgL_auxz00_6255 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_6256))->
															BgL_typez00);
													}
													BgL_auxz00_6254 = (obj_t) (BgL_auxz00_6255);
												}
												BgL_testz00_6253 = (BgL_auxz00_6254 == BgL_auxz00_6260);
											}
											if (BgL_testz00_6253)
												{	/* Ast/dump.scm 61 */
													BgL_testz00_6245 = ((bool_t) 0);
												}
											else
												{	/* Ast/dump.scm 61 */
													BgL_testz00_6245 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Ast/dump.scm 59 */
									BgL_testz00_6245 = ((bool_t) 0);
								}
							if (BgL_testz00_6245)
								{	/* Ast/dump.scm 63 */
									obj_t BgL_arg3508z00_1229;

									{	/* Ast/dump.scm 63 */
										obj_t BgL_arg3509z00_1230;

										obj_t BgL_arg3511z00_1232;

										{	/* Ast/dump.scm 63 */
											obj_t BgL_res4072z00_2128;

											{	/* Ast/dump.scm 63 */
												obj_t BgL_symbolz00_2126;

												BgL_symbolz00_2126 = BgL_vshapez00_1225;
												{	/* Ast/dump.scm 63 */
													obj_t BgL_arg2063z00_2127;

													BgL_arg2063z00_2127 =
														SYMBOL_TO_STRING(BgL_symbolz00_2126);
													BgL_res4072z00_2128 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_2127);
												}
											}
											BgL_arg3509z00_1230 = BgL_res4072z00_2128;
										}
										{	/* Ast/dump.scm 64 */
											BgL_typez00_bglt BgL_arg3518z00_1238;

											{
												BgL_nodez00_bglt BgL_auxz00_6268;

												BgL_auxz00_6268 = (BgL_nodez00_bglt) (BgL_nodez00_1221);
												BgL_arg3518z00_1238 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_6268))->
													BgL_typez00);
											}
											BgL_arg3511z00_1232 =
												BGl_shapez00zztools_shapez00(
												(obj_t) (BgL_arg3518z00_1238));
										}
										{	/* Ast/dump.scm 63 */
											obj_t BgL_list3513z00_1234;

											{	/* Ast/dump.scm 63 */
												obj_t BgL_arg3514z00_1235;

												{	/* Ast/dump.scm 63 */
													obj_t BgL_arg3515z00_1236;

													{	/* Ast/dump.scm 63 */
														obj_t BgL_arg3517z00_1237;

														BgL_arg3517z00_1237 =
															MAKE_PAIR(BGl_string4223z00zzast_dumpz00, BNIL);
														BgL_arg3515z00_1236 =
															MAKE_PAIR(BgL_arg3511z00_1232,
															BgL_arg3517z00_1237);
													}
													BgL_arg3514z00_1235 =
														MAKE_PAIR(BGl_string4224z00zzast_dumpz00,
														BgL_arg3515z00_1236);
												}
												BgL_list3513z00_1234 =
													MAKE_PAIR(BgL_arg3509z00_1230, BgL_arg3514z00_1235);
											}
											BgL_arg3508z00_1229 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3513z00_1234);
										}
									}
									BgL_tvshapez00_1226 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg3508z00_1229));
								}
							else
								{	/* Ast/dump.scm 59 */
									BgL_tvshapez00_1226 = BgL_vshapez00_1225;
								}
						}
						{	/* Ast/dump.scm 59 */

							{	/* Ast/dump.scm 66 */
								obj_t BgL_arg3506z00_1227;

								{
									BgL_nodez00_bglt BgL_auxz00_6280;

									BgL_auxz00_6280 = (BgL_nodez00_bglt) (BgL_nodez00_1221);
									BgL_arg3506z00_1227 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_6280))->BgL_locz00);
								}
								return
									BGl_locationzd2shapezd2zztools_locationz00
									(BgL_arg3506z00_1227, BgL_tvshapez00_1226);
							}
						}
					}
				}
			}
		}
	}



/* node->sexp-atom3373 */
	obj_t BGl_nodezd2ze3sexpzd2atom3373ze3zzast_dumpz00(obj_t BgL_envz00_4125,
		obj_t BgL_nodez00_4126)
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 41 */
			{
				BgL_atomz00_bglt BgL_nodez00_1201;

				BgL_nodez00_1201 = (BgL_atomz00_bglt) (BgL_nodez00_4126);
				if (NULLP((((BgL_atomz00_bglt) CREF(BgL_nodez00_1201))->BgL_valuez00)))
					{	/* Ast/dump.scm 44 */
						obj_t BgL_arg3492z00_1205;

						obj_t BgL_arg3493z00_1206;

						{
							BgL_nodez00_bglt BgL_auxz00_6288;

							BgL_auxz00_6288 = (BgL_nodez00_bglt) (BgL_nodez00_1201);
							BgL_arg3492z00_1205 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_6288))->BgL_locz00);
						}
						BgL_arg3493z00_1206 = CNST_TABLE_REF(((long) 37));
						return
							BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3492z00_1205,
							BgL_arg3493z00_1206);
					}
				else
					{	/* Ast/dump.scm 45 */
						obj_t BgL_arg3494z00_1207;

						obj_t BgL_arg3495z00_1208;

						{
							BgL_nodez00_bglt BgL_auxz00_6293;

							BgL_auxz00_6293 = (BgL_nodez00_bglt) (BgL_nodez00_1201);
							BgL_arg3494z00_1207 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_6293))->BgL_locz00);
						}
						if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 47 */
								obj_t BgL_v3264z00_1209;

								BgL_v3264z00_1209 = create_vector((int) (((long) 3)));
								{	/* Ast/dump.scm 47 */
									obj_t BgL_arg3497z00_1211;

									{	/* Ast/dump.scm 49 */
										BgL_typez00_bglt BgL_arg3498z00_1212;

										{
											BgL_nodez00_bglt BgL_auxz00_6300;

											BgL_auxz00_6300 = (BgL_nodez00_bglt) (BgL_nodez00_1201);
											BgL_arg3498z00_1212 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_6300))->
												BgL_typez00);
										}
										BgL_arg3497z00_1211 =
											BGl_shapez00zztools_shapez00(
											(obj_t) (BgL_arg3498z00_1212));
									}
									VECTOR_SET(BgL_v3264z00_1209,
										(int) (((long) 2)), BgL_arg3497z00_1211);
								}
								{	/* Ast/dump.scm 47 */
									obj_t BgL_arg3500z00_1214;

									{	/* Ast/dump.scm 48 */
										BgL_typez00_bglt BgL_arg3501z00_1215;

										BgL_arg3501z00_1215 =
											BGl_getzd2typezd2zztype_typeofz00(
											(BgL_nodez00_bglt) (BgL_nodez00_1201));
										BgL_arg3500z00_1214 =
											BGl_shapez00zztools_shapez00(
											(obj_t) (BgL_arg3501z00_1215));
									}
									VECTOR_SET(BgL_v3264z00_1209,
										(int) (((long) 1)), BgL_arg3500z00_1214);
								}
								{	/* Ast/dump.scm 47 */
									obj_t BgL_arg3503z00_1217;

									BgL_arg3503z00_1217 =
										(((BgL_atomz00_bglt) CREF(BgL_nodez00_1201))->BgL_valuez00);
									VECTOR_SET(BgL_v3264z00_1209,
										(int) (((long) 0)), BgL_arg3503z00_1217);
								}
								BgL_arg3495z00_1208 = BgL_v3264z00_1209;
							}
						else
							{	/* Ast/dump.scm 46 */
								BgL_arg3495z00_1208 =
									(((BgL_atomz00_bglt) CREF(BgL_nodez00_1201))->BgL_valuez00);
							}
						return
							BGl_locationzd2shapezd2zztools_locationz00(BgL_arg3494z00_1207,
							BgL_arg3495z00_1208);
					}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_dumpz00()
	{
		AN_OBJECT;
		{	/* Ast/dump.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string4225z00zzast_dumpz00));
		}
	}

#ifdef __cplusplus
}
#endif
