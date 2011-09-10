/*===========================================================================*/
/*   (Coerce/coerce.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/coerce.scm)*/
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
	static obj_t BGl_coercez12zd2boxzd2setz123641z00zzcoerce_coercez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercez12zd2default3587zc0zzcoerce_coercez00(BgL_nodez00_bglt, obj_t,
		BgL_typez00_bglt, bool_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_coercez12zd2new3606zc0zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_coercez12zd2kwote3592zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2cast3618zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcoerce_coercez00();
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_coercez12zd2vref3611zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static obj_t BGl_coercez12zd2setq3621zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_coercez00();
	static obj_t BGl_coercez12zd2jumpzd2exzd2it3635zc0zzcoerce_coercez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2vlength3615zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2getfield3602zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2makezd2box3637z12zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_EXPORTED_DECL obj_t
		BGl_coercezd2functionz12zc0zzcoerce_coercez00(BgL_variablez00_bglt, bool_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_coercez12zd2boxzd2ref3639z12zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
	static obj_t BGl_coercez12zd2setfield3604zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2fail3625zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzcoerce_coercez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_coercez00 = BUNSPEC;
	static obj_t BGl_coercez12zd2vsetz123613zd2zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__coercez12zd2default3587zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_coercez00();
	static obj_t BGl__coercezd2functionz12zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	extern bool_t BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_thezd2coercedzd2functionz00zzcoerce_coercez00 = BUNSPEC;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	extern bool_t BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_coercez12zd2extern3600zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2letzd2fun3629z12zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	static obj_t BGl_coercez12zd2closure3596zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2var3594zc0zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_coercez00();
	static obj_t BGl_coercez12zd2letzd2var3631z12zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt, obj_t,
		BgL_typez00_bglt, bool_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_coercez12zd2conditional3623zc0zzcoerce_coercez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2valloc3608zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_coercez12zd2atom3590zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	extern obj_t BGl_za2unsafezd2evalza2zd2zzengine_paramz00;
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern obj_t BGl_za2exitza2z00zztype_cachez00;
	static obj_t BGl_coercez12zd2select3627zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__coercez12z12zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_coercez12zd2setzd2exzd2it3633zc0zzcoerce_coercez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_coercez12zd2sequence3598zc0zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_coercez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4054z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2atom4084z00,
		BGl_coercez12zd2atom3590zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4055z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2kwot4085z00,
		BGl_coercez12zd2kwote3592zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4056z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2var34086z00,
		BGl_coercez12zd2var3594zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4057z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2clos4087z00,
		BGl_coercez12zd2closure3596zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4058z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2sequ4088z00,
		BGl_coercez12zd2sequence3598zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4060z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2getf4089z00,
		BGl_coercez12zd2getfield3602zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4059z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2exte4090z00,
		BGl_coercez12zd2extern3600zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4061z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2setf4091z00,
		BGl_coercez12zd2setfield3604zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4062z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2new34092z00,
		BGl_coercez12zd2new3606zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4063z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2vall4093z00,
		BGl_coercez12zd2valloc3608zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4064z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2vref4094z00,
		BGl_coercez12zd2vref3611zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4065z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2vset4095z00,
		BGl_coercez12zd2vsetz123613zd2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4066z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2vlen4096z00,
		BGl_coercez12zd2vlength3615zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4067z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2cast4097z00,
		BGl_coercez12zd2cast3618zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4068z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2setq4098z00,
		BGl_coercez12zd2setq3621zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4070z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2fail4099z00,
		BGl_coercez12zd2fail3625zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4069z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2cond4100z00,
		BGl_coercez12zd2conditional3623zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4071z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2sele4101z00,
		BGl_coercez12zd2select3627zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4072z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2letza74102za7,
		BGl_coercez12zd2letzd2fun3629z12zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4073z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2letza74103za7,
		BGl_coercez12zd2letzd2var3631z12zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4074z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2setza74104za7,
		BGl_coercez12zd2setzd2exzd2it3633zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4075z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2jump4105z00,
		BGl_coercez12zd2jumpzd2exzd2it3635zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4076z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2make4106z00,
		BGl_coercez12zd2makezd2box3637z12zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4077z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2boxza74107za7,
		BGl_coercez12zd2boxzd2ref3639z12zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4078z00zzcoerce_coercez00,
		BgL_bgl_coerceza712za7d2boxza74108za7,
		BGl_coercez12zd2boxzd2setz123641z00zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4052z00zzcoerce_coercez00,
		BgL_bgl_string4052za700za7za7c4109za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string4053z00zzcoerce_coercez00,
		BgL_bgl_string4053za700za7za7c4110za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4080z00zzcoerce_coercez00,
		BgL_bgl_string4080za700za7za7c4111za7, "coerce_coerce", 13);
	      DEFINE_STRING(BGl_string4079z00zzcoerce_coercez00,
		BgL_bgl_string4079za700za7za7c4112za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string4081z00zzcoerce_coercez00,
		BgL_bgl_string4081za700za7za7c4113za7, "false true coerce!-default3587 ",
		31);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_coercez12zd2envzc0zzcoerce_coercez00,
		BgL_bgl__coerceza712za712za7za7c4114z00,
		BGl__coercez12z12zzcoerce_coercez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_coercezd2functionz12zd2envz12zzcoerce_coercez00,
		BgL_bgl__coerceza7d2functi4115za7,
		BGl__coercezd2functionz12zc0zzcoerce_coercez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_coercez12zd2default3587zd2envz12zzcoerce_coercez00,
		BgL_bgl__coerceza712za7d2def4116z00,
		BGl__coercez12zd2default3587zc0zzcoerce_coercez00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long
		BgL_checksumz00_3430, char *BgL_fromz00_3431)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_coercez00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_coercez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_coercez00();
					BGl_cnstzd2initzd2zzcoerce_coercez00();
					BGl_importedzd2moduleszd2initz00zzcoerce_coercez00();
					BGl_genericzd2initzd2zzcoerce_coercez00();
					BGl_methodzd2initzd2zzcoerce_coercez00();
					BGl_toplevelzd2initzd2zzcoerce_coercez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_coercez00()
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"coerce_coerce");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_coercez00()
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			{	/* Coerce/coerce.scm 15 */
				obj_t BgL_cportz00_3422;

				BgL_cportz00_3422 =
					bgl_open_input_string(BGl_string4081z00zzcoerce_coercez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3423;

					BgL_iz00_3423 = ((long) 2);
				BgL_loopz00_3424:
					if ((BgL_iz00_3423 == ((long) -1)))
						{	/* Coerce/coerce.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/coerce.scm 15 */
							{	/* Coerce/coerce.scm 15 */
								obj_t BgL_arg4083z00_3426;

								{	/* Coerce/coerce.scm 15 */

									{	/* Coerce/coerce.scm 15 */
										obj_t BgL_locationz00_3428;

										BgL_locationz00_3428 = BBOOL(((bool_t) 0));
										{	/* Coerce/coerce.scm 15 */

											BgL_arg4083z00_3426 =
												BGl_readz00zz__readerz00(BgL_cportz00_3422,
												BgL_locationz00_3428);
										}
									}
								}
								{	/* Coerce/coerce.scm 15 */
									int BgL_auxz00_3450;

									BgL_auxz00_3450 = (int) (BgL_iz00_3423);
									CNST_TABLE_SET(BgL_auxz00_3450, BgL_arg4083z00_3426);
							}}
							{	/* Coerce/coerce.scm 15 */
								int BgL_auxz00_3429;

								BgL_auxz00_3429 = (int) ((BgL_iz00_3423 - ((long) 1)));
								{
									long BgL_iz00_3455;

									BgL_iz00_3455 = (long) (BgL_auxz00_3429);
									BgL_iz00_3423 = BgL_iz00_3455;
									goto BgL_loopz00_3424;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_coercez00()
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			BGl_thezd2coercedzd2functionz00zzcoerce_coercez00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* coerce-function! */
	BGL_EXPORTED_DEF obj_t
		BGl_coercezd2functionz12zc0zzcoerce_coercez00(BgL_variablez00_bglt
		BgL_variablez00_1, bool_t BgL_typezd2safezd2_2)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 45 */
			{	/* Coerce/coerce.scm 47 */
				obj_t BgL_arg3642z00_933;

				BgL_arg3642z00_933 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_1))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3642z00_933);
			}
			{	/* Coerce/coerce.scm 48 */
				BgL_valuez00_bglt BgL_funz00_934;

				BgL_funz00_934 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_1))->BgL_valuez00);
				{	/* Coerce/coerce.scm 48 */
					obj_t BgL_bodyz00_935;

					{
						BgL_sfunz00_bglt BgL_auxz00_3460;

						BgL_auxz00_3460 = (BgL_sfunz00_bglt) (BgL_funz00_934);
						BgL_bodyz00_935 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3460))->BgL_bodyz00);
					}
					{	/* Coerce/coerce.scm 49 */
						BgL_typez00_bglt BgL_tresz00_936;

						BgL_tresz00_936 =
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_1))->BgL_typez00);
						{	/* Coerce/coerce.scm 50 */
							obj_t BgL_cloz00_937;

							{
								BgL_sfunz00_bglt BgL_auxz00_3464;

								BgL_auxz00_3464 = (BgL_sfunz00_bglt) (BgL_funz00_934);
								BgL_cloz00_937 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3464))->
									BgL_thezd2closurezd2globalz00);
							}
							{	/* Coerce/coerce.scm 51 */
								bool_t BgL_typezd2safetyzd2enforcedz00_938;

								{	/* Coerce/coerce.scm 52 */
									bool_t BgL_testz00_3467;

									if (CBOOL(BGl_za2unsafezd2evalza2zd2zzengine_paramz00))
										{	/* Coerce/coerce.scm 52 */
											BgL_testz00_3467 = ((bool_t) 0);
										}
									else
										{	/* Coerce/coerce.scm 52 */
											BgL_testz00_3467 = ((bool_t) 1);
										}
									if (BgL_testz00_3467)
										{	/* Coerce/coerce.scm 53 */
											bool_t BgL_testz00_3470;

											{	/* Coerce/coerce.scm 53 */
												obj_t BgL_obj2014z00_1844;

												BgL_obj2014z00_1844 = (obj_t) (BgL_variablez00_1);
												BgL_testz00_3470 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2014z00_1844,
													BGl_globalz00zzast_varz00);
											}
											if (BgL_testz00_3470)
												{	/* Coerce/coerce.scm 53 */
													if (BGl_iszd2azf3z21zz__objectz00(BgL_cloz00_937,
															BGl_globalz00zzast_varz00))
														{	/* Coerce/coerce.scm 55 */
															bool_t BgL_testz00_3475;

															{
																BgL_globalz00_bglt BgL_auxz00_3476;

																BgL_auxz00_3476 =
																	(BgL_globalz00_bglt) (BgL_cloz00_937);
																BgL_testz00_3475 =
																	(((BgL_globalz00_bglt)
																		CREF(BgL_auxz00_3476))->
																	BgL_evaluablezf3zf3);
															}
															if (BgL_testz00_3475)
																{
																	BgL_globalz00_bglt BgL_auxz00_3479;

																	BgL_auxz00_3479 =
																		(BgL_globalz00_bglt) (BgL_cloz00_937);
																	BgL_typezd2safetyzd2enforcedz00_938 =
																		(((BgL_globalz00_bglt)
																			CREF(BgL_auxz00_3479))->BgL_userzf3zf3);
																}
															else
																{	/* Coerce/coerce.scm 55 */
																	BgL_typezd2safetyzd2enforcedz00_938 =
																		((bool_t) 0);
																}
														}
													else
														{	/* Coerce/coerce.scm 54 */
															BgL_typezd2safetyzd2enforcedz00_938 =
																((bool_t) 0);
														}
												}
											else
												{	/* Coerce/coerce.scm 53 */
													BgL_typezd2safetyzd2enforcedz00_938 = ((bool_t) 0);
												}
										}
									else
										{	/* Coerce/coerce.scm 52 */
											BgL_typezd2safetyzd2enforcedz00_938 = ((bool_t) 0);
										}
								}
								{	/* Coerce/coerce.scm 52 */
									bool_t BgL_typezd2safezd2_939;

									if (BgL_typezd2safezd2_2)
										{	/* Coerce/coerce.scm 57 */
											BgL_typezd2safezd2_939 = BgL_typezd2safezd2_2;
										}
									else
										{	/* Coerce/coerce.scm 57 */
											BgL_typezd2safezd2_939 =
												BgL_typezd2safetyzd2enforcedz00_938;
										}
									{	/* Coerce/coerce.scm 57 */

										{	/* Coerce/coerce.scm 58 */
											bool_t BgL_testz00_3483;

											{	/* Coerce/coerce.scm 58 */
												obj_t BgL_obj2014z00_1848;

												BgL_obj2014z00_1848 = (obj_t) (BgL_variablez00_1);
												BgL_testz00_3483 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2014z00_1848,
													BGl_globalz00zzast_varz00);
											}
											if (BgL_testz00_3483)
												{	/* Coerce/coerce.scm 58 */
													BNIL;
												}
											else
												{	/* Coerce/coerce.scm 58 */
													BNIL;
												}
										}
										BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(((long) 3),
											BgL_variablez00_1);
										BGl_thezd2coercedzd2functionz00zzcoerce_coercez00 =
											(obj_t) (BgL_variablez00_1);
										{	/* Coerce/coerce.scm 68 */
											BgL_nodez00_bglt BgL_arg3644z00_941;

											{	/* Coerce/coerce.scm 68 */
												BgL_nodez00_bglt BgL_res3941z00_1878;

												{	/* Coerce/coerce.scm 68 */
													BgL_nodez00_bglt BgL_nodez00_1849;

													obj_t BgL_callerz00_1850;

													BgL_nodez00_1849 =
														(BgL_nodez00_bglt) (BgL_bodyz00_935);
													BgL_callerz00_1850 = (obj_t) (BgL_variablez00_1);
													{	/* Coerce/coerce.scm 68 */
														obj_t BgL_method3588z00_1853;

														{	/* Coerce/coerce.scm 68 */
															BgL_objectz00_bglt BgL_objz00_1854;

															BgL_objz00_1854 =
																(BgL_objectz00_bglt) (BgL_nodez00_1849);
															{	/* Coerce/coerce.scm 68 */
																long BgL_objzd2classzd2numz00_1855;

																BgL_objzd2classzd2numz00_1855 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1854);
																{	/* Coerce/coerce.scm 68 */
																	obj_t BgL_arg2643z00_1856;

																	BgL_arg2643z00_1856 =
																		PROCEDURE_REF
																		(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																		(int) (((long) 1)));
																	{	/* Coerce/coerce.scm 68 */
																		obj_t BgL_arrayz00_1858;

																		int BgL_offsetz00_1859;

																		BgL_arrayz00_1858 = BgL_arg2643z00_1856;
																		BgL_offsetz00_1859 =
																			(int) (BgL_objzd2classzd2numz00_1855);
																		{	/* Coerce/coerce.scm 68 */
																			long BgL_offsetz00_1860;

																			BgL_offsetz00_1860 =
																				(
																				(long) (BgL_offsetz00_1859) -
																				OBJECT_TYPE);
																			{	/* Coerce/coerce.scm 68 */
																				long BgL_modz00_1861;

																				{	/* Coerce/coerce.scm 68 */
																					int BgL_arg2645z00_1862;

																					BgL_arg2645z00_1862 =
																						(int) (((long) 16));
																					{	/* Coerce/coerce.scm 68 */
																						long BgL_auxz00_3498;

																						BgL_auxz00_3498 =
																							(long) (BgL_arg2645z00_1862);
																						BgL_modz00_1861 =
																							(BgL_offsetz00_1860 /
																							BgL_auxz00_3498);
																				}}
																				{	/* Coerce/coerce.scm 68 */
																					long BgL_restz00_1863;

																					{	/* Coerce/coerce.scm 68 */
																						int BgL_arg2644z00_1864;

																						BgL_arg2644z00_1864 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 68 */
																							long BgL_auxz00_3502;

																							BgL_auxz00_3502 =
																								(long) (BgL_arg2644z00_1864);
																							BgL_restz00_1863 =
																								(BgL_offsetz00_1860 %
																								BgL_auxz00_3502);
																					}}
																					{	/* Coerce/coerce.scm 68 */

																						BgL_method3588z00_1853 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1858,
																								(int) (BgL_modz00_1861)),
																							(int) (BgL_restz00_1863));
														}}}}}}}}
														BgL_res3941z00_1878 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3588z00_1853) (BgL_method3588z00_1853,
																(obj_t) (BgL_nodez00_1849), BgL_callerz00_1850,
																(obj_t) (BgL_tresz00_936),
																BBOOL(BgL_typezd2safezd2_939), BEOA));
												}}
												BgL_arg3644z00_941 = BgL_res3941z00_1878;
											}
											{
												obj_t BgL_auxz00_3517;

												BgL_sfunz00_bglt BgL_auxz00_3515;

												BgL_auxz00_3517 = (obj_t) (BgL_arg3644z00_941);
												BgL_auxz00_3515 = (BgL_sfunz00_bglt) (BgL_funz00_934);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3515))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_3517), BUNSPEC);
										}}
										return BGl_leavezd2functionzd2zztools_errorz00();
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* _coerce-function! */
	obj_t BGl__coercezd2functionz12zc0zzcoerce_coercez00(obj_t BgL_envz00_3259,
		obj_t BgL_variablez00_3260, obj_t BgL_typezd2safezd2_3261)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 45 */
			return
				BGl_coercezd2functionz12zc0zzcoerce_coercez00(
				(BgL_variablez00_bglt) (BgL_variablez00_3260),
				CBOOL(BgL_typezd2safezd2_3261));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_coercez00()
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_coercez12zd2default3587zd2envz12zzcoerce_coercez00,
				BGl_nodez00zzast_nodez00, BGl_string4052z00zzcoerce_coercez00);
		}
	}



/* coerce! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt BgL_nodez00_3,
		obj_t BgL_callerz00_4, BgL_typez00_bglt BgL_toz00_5, bool_t BgL_safez00_6)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 74 */
			{	/* Coerce/coerce.scm 74 */
				obj_t BgL_method3588z00_1881;

				{	/* Coerce/coerce.scm 74 */
					BgL_objectz00_bglt BgL_objz00_1882;

					BgL_objz00_1882 = (BgL_objectz00_bglt) (BgL_nodez00_3);
					{	/* Coerce/coerce.scm 74 */
						long BgL_objzd2classzd2numz00_1883;

						BgL_objzd2classzd2numz00_1883 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1882);
						{	/* Coerce/coerce.scm 74 */
							obj_t BgL_arg2643z00_1884;

							BgL_arg2643z00_1884 =
								PROCEDURE_REF(BGl_coercez12zd2envzc0zzcoerce_coercez00,
								(int) (((long) 1)));
							{	/* Coerce/coerce.scm 74 */
								obj_t BgL_arrayz00_1886;

								int BgL_offsetz00_1887;

								BgL_arrayz00_1886 = BgL_arg2643z00_1884;
								BgL_offsetz00_1887 = (int) (BgL_objzd2classzd2numz00_1883);
								{	/* Coerce/coerce.scm 74 */
									long BgL_offsetz00_1888;

									BgL_offsetz00_1888 =
										((long) (BgL_offsetz00_1887) - OBJECT_TYPE);
									{	/* Coerce/coerce.scm 74 */
										long BgL_modz00_1889;

										{	/* Coerce/coerce.scm 74 */
											int BgL_arg2645z00_1890;

											BgL_arg2645z00_1890 = (int) (((long) 16));
											{	/* Coerce/coerce.scm 74 */
												long BgL_auxz00_3533;

												BgL_auxz00_3533 = (long) (BgL_arg2645z00_1890);
												BgL_modz00_1889 =
													(BgL_offsetz00_1888 / BgL_auxz00_3533);
										}}
										{	/* Coerce/coerce.scm 74 */
											long BgL_restz00_1891;

											{	/* Coerce/coerce.scm 74 */
												int BgL_arg2644z00_1892;

												BgL_arg2644z00_1892 = (int) (((long) 16));
												{	/* Coerce/coerce.scm 74 */
													long BgL_auxz00_3537;

													BgL_auxz00_3537 = (long) (BgL_arg2644z00_1892);
													BgL_restz00_1891 =
														(BgL_offsetz00_1888 % BgL_auxz00_3537);
											}}
											{	/* Coerce/coerce.scm 74 */

												BgL_method3588z00_1881 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1886,
														(int) (BgL_modz00_1889)), (int) (BgL_restz00_1891));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3588z00_1881)
					(BgL_method3588z00_1881, (obj_t) (BgL_nodez00_3), BgL_callerz00_4,
						(obj_t) (BgL_toz00_5), BBOOL(BgL_safez00_6), BEOA));
			}
		}
	}



/* _coerce! */
	obj_t BGl__coercez12z12zzcoerce_coercez00(obj_t BgL_envz00_3262,
		obj_t BgL_nodez00_3263, obj_t BgL_callerz00_3264, obj_t BgL_toz00_3265,
		obj_t BgL_safez00_3266)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 74 */
			return
				(obj_t) (BGl_coercez12z12zzcoerce_coercez00(
					(BgL_nodez00_bglt) (BgL_nodez00_3263), BgL_callerz00_3264,
					(BgL_typez00_bglt) (BgL_toz00_3265), CBOOL(BgL_safez00_3266)));
		}
	}



/* coerce!-default3587 */
	BgL_nodez00_bglt
		BGl_coercez12zd2default3587zc0zzcoerce_coercez00(BgL_nodez00_bglt
		BgL_nodez00_7, obj_t BgL_callerz00_8, BgL_typez00_bglt BgL_toz00_9,
		bool_t BgL_safez00_10)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
					BGl_string4053z00zzcoerce_coercez00, (obj_t) (BgL_nodez00_7)));
		}
	}



/* _coerce!-default3587 */
	obj_t BGl__coercez12zd2default3587zc0zzcoerce_coercez00(obj_t BgL_envz00_3267,
		obj_t BgL_nodez00_3268, obj_t BgL_callerz00_3269, obj_t BgL_toz00_3270,
		obj_t BgL_safez00_3271)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			return
				(obj_t) (BGl_coercez12zd2default3587zc0zzcoerce_coercez00(
					(BgL_nodez00_bglt) (BgL_nodez00_3268), BgL_callerz00_3269,
					(BgL_typez00_bglt) (BgL_toz00_3270), CBOOL(BgL_safez00_3271)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_coercez00()
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_atomz00zzast_nodez00,
				BGl_proc4054z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_kwotez00zzast_nodez00,
				BGl_proc4055z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_varz00zzast_nodez00,
				BGl_proc4056z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_closurez00zzast_nodez00,
				BGl_proc4057z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_sequencez00zzast_nodez00,
				BGl_proc4058z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_externz00zzast_nodez00,
				BGl_proc4059z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_getfieldz00zzast_nodez00,
				BGl_proc4060z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_setfieldz00zzast_nodez00,
				BGl_proc4061z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_newz00zzast_nodez00,
				BGl_proc4062z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vallocz00zzast_nodez00,
				BGl_proc4063z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vrefz00zzast_nodez00,
				BGl_proc4064z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc4065z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vlengthz00zzast_nodez00,
				BGl_proc4066z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_castz00zzast_nodez00,
				BGl_proc4067z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_setqz00zzast_nodez00,
				BGl_proc4068z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4069z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_failz00zzast_nodez00,
				BGl_proc4070z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_selectz00zzast_nodez00,
				BGl_proc4071z00zzcoerce_coercez00, BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4072z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4073z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4074z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4075z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4076z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4077z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4078z00zzcoerce_coercez00,
				BGl_string4052z00zzcoerce_coercez00);
		}
	}



/* coerce!-box-set!3641 */
	obj_t BGl_coercez12zd2boxzd2setz123641z00zzcoerce_coercez00(obj_t
		BgL_envz00_3297, obj_t BgL_nodez00_3298, obj_t BgL_callerz00_3299,
		obj_t BgL_toz00_3300, obj_t BgL_safez00_3301)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 454 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1826;

				obj_t BgL_callerz00_1827;

				obj_t BgL_toz00_1828;

				obj_t BgL_safez00_1829;

				{	/* Coerce/coerce.scm 455 */
					BgL_nodez00_bglt BgL_auxz00_3589;

					BgL_nodez00_1826 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3298);
					BgL_callerz00_1827 = BgL_callerz00_3299;
					BgL_toz00_1828 = BgL_toz00_3300;
					BgL_safez00_1829 = BgL_safez00_3301;
					{	/* Coerce/coerce.scm 456 */
						BgL_variablez00_bglt BgL_arg3934z00_1833;

						{	/* Coerce/coerce.scm 456 */
							BgL_varz00_bglt BgL_obj2417z00_3223;

							BgL_obj2417z00_3223 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1826))->
								BgL_varz00);
							BgL_arg3934z00_1833 =
								(((BgL_varz00_bglt) CREF(BgL_obj2417z00_3223))->
								BgL_variablez00);
						}
						{
							BgL_typez00_bglt BgL_auxz00_3592;

							BgL_auxz00_3592 =
								(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
							((((BgL_variablez00_bglt) CREF(BgL_arg3934z00_1833))->
									BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3592), BUNSPEC);
						}
					}
					{	/* Coerce/coerce.scm 457 */
						BgL_nodez00_bglt BgL_arg3936z00_1835;

						{	/* Coerce/coerce.scm 457 */
							BgL_nodez00_bglt BgL_arg3937z00_1836;

							BgL_arg3937z00_1836 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1826))->
								BgL_valuez00);
							{	/* Coerce/coerce.scm 457 */
								BgL_nodez00_bglt BgL_res4051z00_3256;

								{	/* Coerce/coerce.scm 457 */
									BgL_typez00_bglt BgL_toz00_3229;

									bool_t BgL_safez00_3230;

									BgL_toz00_3229 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_3230 = CBOOL(BgL_safez00_1829);
									{	/* Coerce/coerce.scm 457 */
										obj_t BgL_method3588z00_3231;

										{	/* Coerce/coerce.scm 457 */
											BgL_objectz00_bglt BgL_objz00_3232;

											BgL_objz00_3232 =
												(BgL_objectz00_bglt) (BgL_arg3937z00_1836);
											{	/* Coerce/coerce.scm 457 */
												long BgL_objzd2classzd2numz00_3233;

												BgL_objzd2classzd2numz00_3233 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3232);
												{	/* Coerce/coerce.scm 457 */
													obj_t BgL_arg2643z00_3234;

													BgL_arg2643z00_3234 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 457 */
														obj_t BgL_arrayz00_3236;

														int BgL_offsetz00_3237;

														BgL_arrayz00_3236 = BgL_arg2643z00_3234;
														BgL_offsetz00_3237 =
															(int) (BgL_objzd2classzd2numz00_3233);
														{	/* Coerce/coerce.scm 457 */
															long BgL_offsetz00_3238;

															BgL_offsetz00_3238 =
																((long) (BgL_offsetz00_3237) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 457 */
																long BgL_modz00_3239;

																{	/* Coerce/coerce.scm 457 */
																	int BgL_arg2645z00_3240;

																	BgL_arg2645z00_3240 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 457 */
																		long BgL_auxz00_3606;

																		BgL_auxz00_3606 =
																			(long) (BgL_arg2645z00_3240);
																		BgL_modz00_3239 =
																			(BgL_offsetz00_3238 / BgL_auxz00_3606);
																}}
																{	/* Coerce/coerce.scm 457 */
																	long BgL_restz00_3241;

																	{	/* Coerce/coerce.scm 457 */
																		int BgL_arg2644z00_3242;

																		BgL_arg2644z00_3242 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 457 */
																			long BgL_auxz00_3610;

																			BgL_auxz00_3610 =
																				(long) (BgL_arg2644z00_3242);
																			BgL_restz00_3241 =
																				(BgL_offsetz00_3238 % BgL_auxz00_3610);
																	}}
																	{	/* Coerce/coerce.scm 457 */

																		BgL_method3588z00_3231 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3236,
																				(int) (BgL_modz00_3239)),
																			(int) (BgL_restz00_3241));
										}}}}}}}}
										BgL_res4051z00_3256 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3231) (BgL_method3588z00_3231,
												(obj_t) (BgL_arg3937z00_1836), BgL_callerz00_1827,
												(obj_t) (BgL_toz00_3229), BBOOL(BgL_safez00_3230),
												BEOA));
								}}
								BgL_arg3936z00_1835 = BgL_res4051z00_3256;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1826))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3936z00_1835), BUNSPEC);
					}
					BgL_auxz00_3589 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1826),
						(BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00),
						(BgL_typez00_bglt) (BgL_toz00_1828), CBOOL(BgL_safez00_1829));
					return (obj_t) (BgL_auxz00_3589);
				}
			}
		}
	}



/* coerce!-box-ref3639 */
	obj_t BGl_coercez12zd2boxzd2ref3639z12zzcoerce_coercez00(obj_t
		BgL_envz00_3302, obj_t BgL_nodez00_3303, obj_t BgL_callerz00_3304,
		obj_t BgL_toz00_3305, obj_t BgL_safez00_3306)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 447 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1817;

				obj_t BgL_callerz00_1818;

				obj_t BgL_toz00_1819;

				obj_t BgL_safez00_1820;

				{	/* Coerce/coerce.scm 449 */
					BgL_nodez00_bglt BgL_auxz00_3631;

					BgL_nodez00_1817 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3303);
					BgL_callerz00_1818 = BgL_callerz00_3304;
					BgL_toz00_1819 = BgL_toz00_3305;
					BgL_safez00_1820 = BgL_safez00_3306;
					BgL_auxz00_3631 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1817),
						(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
						(BgL_typez00_bglt) (BgL_toz00_1819), CBOOL(BgL_safez00_1820));
					return (obj_t) (BgL_auxz00_3631);
				}
			}
		}
	}



/* coerce!-make-box3637 */
	obj_t BGl_coercez12zd2makezd2box3637z12zzcoerce_coercez00(obj_t
		BgL_envz00_3307, obj_t BgL_nodez00_3308, obj_t BgL_callerz00_3309,
		obj_t BgL_toz00_3310, obj_t BgL_safez00_3311)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 439 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1806;

				obj_t BgL_callerz00_1807;

				obj_t BgL_toz00_1808;

				obj_t BgL_safez00_1809;

				{	/* Coerce/coerce.scm 440 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3639;

					BgL_nodez00_1806 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3308);
					BgL_callerz00_1807 = BgL_callerz00_3309;
					BgL_toz00_1808 = BgL_toz00_3310;
					BgL_safez00_1809 = BgL_safez00_3311;
					{	/* Coerce/coerce.scm 440 */
						BgL_nodez00_bglt BgL_arg3930z00_3187;

						{	/* Coerce/coerce.scm 440 */
							BgL_nodez00_bglt BgL_arg3931z00_3188;

							BgL_arg3931z00_3188 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1806))->
								BgL_valuez00);
							{	/* Coerce/coerce.scm 440 */
								BgL_nodez00_bglt BgL_res4048z00_3219;

								{	/* Coerce/coerce.scm 440 */
									BgL_typez00_bglt BgL_toz00_3192;

									bool_t BgL_safez00_3193;

									BgL_toz00_3192 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_3193 = CBOOL(BgL_safez00_1809);
									{	/* Coerce/coerce.scm 440 */
										obj_t BgL_method3588z00_3194;

										{	/* Coerce/coerce.scm 440 */
											BgL_objectz00_bglt BgL_objz00_3195;

											BgL_objz00_3195 =
												(BgL_objectz00_bglt) (BgL_arg3931z00_3188);
											{	/* Coerce/coerce.scm 440 */
												long BgL_objzd2classzd2numz00_3196;

												BgL_objzd2classzd2numz00_3196 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3195);
												{	/* Coerce/coerce.scm 440 */
													obj_t BgL_arg2643z00_3197;

													BgL_arg2643z00_3197 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 440 */
														obj_t BgL_arrayz00_3199;

														int BgL_offsetz00_3200;

														BgL_arrayz00_3199 = BgL_arg2643z00_3197;
														BgL_offsetz00_3200 =
															(int) (BgL_objzd2classzd2numz00_3196);
														{	/* Coerce/coerce.scm 440 */
															long BgL_offsetz00_3201;

															BgL_offsetz00_3201 =
																((long) (BgL_offsetz00_3200) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 440 */
																long BgL_modz00_3202;

																{	/* Coerce/coerce.scm 440 */
																	int BgL_arg2645z00_3203;

																	BgL_arg2645z00_3203 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 440 */
																		long BgL_auxz00_3651;

																		BgL_auxz00_3651 =
																			(long) (BgL_arg2645z00_3203);
																		BgL_modz00_3202 =
																			(BgL_offsetz00_3201 / BgL_auxz00_3651);
																}}
																{	/* Coerce/coerce.scm 440 */
																	long BgL_restz00_3204;

																	{	/* Coerce/coerce.scm 440 */
																		int BgL_arg2644z00_3205;

																		BgL_arg2644z00_3205 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 440 */
																			long BgL_auxz00_3655;

																			BgL_auxz00_3655 =
																				(long) (BgL_arg2644z00_3205);
																			BgL_restz00_3204 =
																				(BgL_offsetz00_3201 % BgL_auxz00_3655);
																	}}
																	{	/* Coerce/coerce.scm 440 */

																		BgL_method3588z00_3194 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3199,
																				(int) (BgL_modz00_3202)),
																			(int) (BgL_restz00_3204));
										}}}}}}}}
										BgL_res4048z00_3219 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3194) (BgL_method3588z00_3194,
												(obj_t) (BgL_arg3931z00_3188), BgL_callerz00_1807,
												(obj_t) (BgL_toz00_3192), BBOOL(BgL_safez00_3193),
												BEOA));
								}}
								BgL_arg3930z00_3187 = BgL_res4048z00_3219;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1806))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3930z00_3187), BUNSPEC);
					}
					BgL_auxz00_3639 = BgL_nodez00_1806;
					return (obj_t) (BgL_auxz00_3639);
				}
			}
		}
	}



/* coerce!-jump-ex-it3635 */
	obj_t BGl_coercez12zd2jumpzd2exzd2it3635zc0zzcoerce_coercez00(obj_t
		BgL_envz00_3312, obj_t BgL_nodez00_3313, obj_t BgL_callerz00_3314,
		obj_t BgL_toz00_3315, obj_t BgL_safez00_3316)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 430 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1793;

				obj_t BgL_callerz00_1794;

				obj_t BgL_toz00_1795;

				obj_t BgL_safez00_1796;

				{	/* Coerce/coerce.scm 431 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3671;

					BgL_nodez00_1793 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3313);
					BgL_callerz00_1794 = BgL_callerz00_3314;
					BgL_toz00_1795 = BgL_toz00_3315;
					BgL_safez00_1796 = BgL_safez00_3316;
					{	/* Coerce/coerce.scm 432 */
						BgL_nodez00_bglt BgL_arg3925z00_1800;

						{	/* Coerce/coerce.scm 432 */
							BgL_nodez00_bglt BgL_arg3926z00_1801;

							BgL_arg3926z00_1801 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1793))->
								BgL_exitz00);
							{	/* Coerce/coerce.scm 432 */
								BgL_nodez00_bglt BgL_res4042z00_3150;

								{	/* Coerce/coerce.scm 432 */
									BgL_typez00_bglt BgL_toz00_3123;

									bool_t BgL_safez00_3124;

									BgL_toz00_3123 =
										(BgL_typez00_bglt) (BGl_za2exitza2z00zztype_cachez00);
									BgL_safez00_3124 = CBOOL(BgL_safez00_1796);
									{	/* Coerce/coerce.scm 432 */
										obj_t BgL_method3588z00_3125;

										{	/* Coerce/coerce.scm 432 */
											BgL_objectz00_bglt BgL_objz00_3126;

											BgL_objz00_3126 =
												(BgL_objectz00_bglt) (BgL_arg3926z00_1801);
											{	/* Coerce/coerce.scm 432 */
												long BgL_objzd2classzd2numz00_3127;

												BgL_objzd2classzd2numz00_3127 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3126);
												{	/* Coerce/coerce.scm 432 */
													obj_t BgL_arg2643z00_3128;

													BgL_arg2643z00_3128 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 432 */
														obj_t BgL_arrayz00_3130;

														int BgL_offsetz00_3131;

														BgL_arrayz00_3130 = BgL_arg2643z00_3128;
														BgL_offsetz00_3131 =
															(int) (BgL_objzd2classzd2numz00_3127);
														{	/* Coerce/coerce.scm 432 */
															long BgL_offsetz00_3132;

															BgL_offsetz00_3132 =
																((long) (BgL_offsetz00_3131) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 432 */
																long BgL_modz00_3133;

																{	/* Coerce/coerce.scm 432 */
																	int BgL_arg2645z00_3134;

																	BgL_arg2645z00_3134 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 432 */
																		long BgL_auxz00_3683;

																		BgL_auxz00_3683 =
																			(long) (BgL_arg2645z00_3134);
																		BgL_modz00_3133 =
																			(BgL_offsetz00_3132 / BgL_auxz00_3683);
																}}
																{	/* Coerce/coerce.scm 432 */
																	long BgL_restz00_3135;

																	{	/* Coerce/coerce.scm 432 */
																		int BgL_arg2644z00_3136;

																		BgL_arg2644z00_3136 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 432 */
																			long BgL_auxz00_3687;

																			BgL_auxz00_3687 =
																				(long) (BgL_arg2644z00_3136);
																			BgL_restz00_3135 =
																				(BgL_offsetz00_3132 % BgL_auxz00_3687);
																	}}
																	{	/* Coerce/coerce.scm 432 */

																		BgL_method3588z00_3125 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3130,
																				(int) (BgL_modz00_3133)),
																			(int) (BgL_restz00_3135));
										}}}}}}}}
										BgL_res4042z00_3150 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3125) (BgL_method3588z00_3125,
												(obj_t) (BgL_arg3926z00_1801), BgL_callerz00_1794,
												(obj_t) (BgL_toz00_3123), BBOOL(BgL_safez00_3124),
												BEOA));
								}}
								BgL_arg3925z00_1800 = BgL_res4042z00_3150;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1793))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3925z00_1800), BUNSPEC);
					}
					{	/* Coerce/coerce.scm 433 */
						BgL_nodez00_bglt BgL_arg3927z00_1802;

						{	/* Coerce/coerce.scm 433 */
							BgL_nodez00_bglt BgL_arg3928z00_1803;

							BgL_arg3928z00_1803 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1793))->
								BgL_valuez00);
							{	/* Coerce/coerce.scm 433 */
								BgL_nodez00_bglt BgL_res4045z00_3183;

								{	/* Coerce/coerce.scm 433 */
									BgL_typez00_bglt BgL_toz00_3156;

									bool_t BgL_safez00_3157;

									BgL_toz00_3156 = (BgL_typez00_bglt) (BgL_toz00_1795);
									BgL_safez00_3157 = CBOOL(BgL_safez00_1796);
									{	/* Coerce/coerce.scm 433 */
										obj_t BgL_method3588z00_3158;

										{	/* Coerce/coerce.scm 433 */
											BgL_objectz00_bglt BgL_objz00_3159;

											BgL_objz00_3159 =
												(BgL_objectz00_bglt) (BgL_arg3928z00_1803);
											{	/* Coerce/coerce.scm 433 */
												long BgL_objzd2classzd2numz00_3160;

												BgL_objzd2classzd2numz00_3160 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3159);
												{	/* Coerce/coerce.scm 433 */
													obj_t BgL_arg2643z00_3161;

													BgL_arg2643z00_3161 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 433 */
														obj_t BgL_arrayz00_3163;

														int BgL_offsetz00_3164;

														BgL_arrayz00_3163 = BgL_arg2643z00_3161;
														BgL_offsetz00_3164 =
															(int) (BgL_objzd2classzd2numz00_3160);
														{	/* Coerce/coerce.scm 433 */
															long BgL_offsetz00_3165;

															BgL_offsetz00_3165 =
																((long) (BgL_offsetz00_3164) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 433 */
																long BgL_modz00_3166;

																{	/* Coerce/coerce.scm 433 */
																	int BgL_arg2645z00_3167;

																	BgL_arg2645z00_3167 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 433 */
																		long BgL_auxz00_3712;

																		BgL_auxz00_3712 =
																			(long) (BgL_arg2645z00_3167);
																		BgL_modz00_3166 =
																			(BgL_offsetz00_3165 / BgL_auxz00_3712);
																}}
																{	/* Coerce/coerce.scm 433 */
																	long BgL_restz00_3168;

																	{	/* Coerce/coerce.scm 433 */
																		int BgL_arg2644z00_3169;

																		BgL_arg2644z00_3169 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 433 */
																			long BgL_auxz00_3716;

																			BgL_auxz00_3716 =
																				(long) (BgL_arg2644z00_3169);
																			BgL_restz00_3168 =
																				(BgL_offsetz00_3165 % BgL_auxz00_3716);
																	}}
																	{	/* Coerce/coerce.scm 433 */

																		BgL_method3588z00_3158 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3163,
																				(int) (BgL_modz00_3166)),
																			(int) (BgL_restz00_3168));
										}}}}}}}}
										BgL_res4045z00_3183 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3158) (BgL_method3588z00_3158,
												(obj_t) (BgL_arg3928z00_1803), BgL_callerz00_1794,
												(obj_t) (BgL_toz00_3156), BBOOL(BgL_safez00_3157),
												BEOA));
								}}
								BgL_arg3927z00_1802 = BgL_res4045z00_3183;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1793))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3927z00_1802), BUNSPEC);
					}
					BgL_auxz00_3671 = BgL_nodez00_1793;
					return (obj_t) (BgL_auxz00_3671);
				}
			}
		}
	}



/* coerce!-set-ex-it3633 */
	obj_t BGl_coercez12zd2setzd2exzd2it3633zc0zzcoerce_coercez00(obj_t
		BgL_envz00_3317, obj_t BgL_nodez00_3318, obj_t BgL_callerz00_3319,
		obj_t BgL_toz00_3320, obj_t BgL_safez00_3321)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 420 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1777;

				obj_t BgL_callerz00_1778;

				obj_t BgL_toz00_1779;

				obj_t BgL_safez00_1780;

				{	/* Coerce/coerce.scm 421 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3732;

					BgL_nodez00_1777 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3318);
					BgL_callerz00_1778 = BgL_callerz00_3319;
					BgL_toz00_1779 = BgL_toz00_3320;
					BgL_safez00_1780 = BgL_safez00_3321;
					{	/* Coerce/coerce.scm 422 */
						BgL_nodez00_bglt BgL_arg3916z00_1784;

						{	/* Coerce/coerce.scm 422 */
							BgL_varz00_bglt BgL_arg3917z00_1785;

							BgL_arg3917z00_1785 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1777))->
								BgL_varz00);
							{	/* Coerce/coerce.scm 422 */
								BgL_nodez00_bglt BgL_res4036z00_3082;

								{	/* Coerce/coerce.scm 422 */
									BgL_nodez00_bglt BgL_nodez00_3053;

									BgL_typez00_bglt BgL_toz00_3055;

									bool_t BgL_safez00_3056;

									BgL_nodez00_3053 = (BgL_nodez00_bglt) (BgL_arg3917z00_1785);
									BgL_toz00_3055 =
										(BgL_typez00_bglt) (BGl_za2exitza2z00zztype_cachez00);
									BgL_safez00_3056 = CBOOL(BgL_safez00_1780);
									{	/* Coerce/coerce.scm 422 */
										obj_t BgL_method3588z00_3057;

										{	/* Coerce/coerce.scm 422 */
											BgL_objectz00_bglt BgL_objz00_3058;

											BgL_objz00_3058 = (BgL_objectz00_bglt) (BgL_nodez00_3053);
											{	/* Coerce/coerce.scm 422 */
												long BgL_objzd2classzd2numz00_3059;

												BgL_objzd2classzd2numz00_3059 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3058);
												{	/* Coerce/coerce.scm 422 */
													obj_t BgL_arg2643z00_3060;

													BgL_arg2643z00_3060 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 422 */
														obj_t BgL_arrayz00_3062;

														int BgL_offsetz00_3063;

														BgL_arrayz00_3062 = BgL_arg2643z00_3060;
														BgL_offsetz00_3063 =
															(int) (BgL_objzd2classzd2numz00_3059);
														{	/* Coerce/coerce.scm 422 */
															long BgL_offsetz00_3064;

															BgL_offsetz00_3064 =
																((long) (BgL_offsetz00_3063) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 422 */
																long BgL_modz00_3065;

																{	/* Coerce/coerce.scm 422 */
																	int BgL_arg2645z00_3066;

																	BgL_arg2645z00_3066 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 422 */
																		long BgL_auxz00_3745;

																		BgL_auxz00_3745 =
																			(long) (BgL_arg2645z00_3066);
																		BgL_modz00_3065 =
																			(BgL_offsetz00_3064 / BgL_auxz00_3745);
																}}
																{	/* Coerce/coerce.scm 422 */
																	long BgL_restz00_3067;

																	{	/* Coerce/coerce.scm 422 */
																		int BgL_arg2644z00_3068;

																		BgL_arg2644z00_3068 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 422 */
																			long BgL_auxz00_3749;

																			BgL_auxz00_3749 =
																				(long) (BgL_arg2644z00_3068);
																			BgL_restz00_3067 =
																				(BgL_offsetz00_3064 % BgL_auxz00_3749);
																	}}
																	{	/* Coerce/coerce.scm 422 */

																		BgL_method3588z00_3057 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3062,
																				(int) (BgL_modz00_3065)),
																			(int) (BgL_restz00_3067));
										}}}}}}}}
										BgL_res4036z00_3082 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3057) (BgL_method3588z00_3057,
												(obj_t) (BgL_nodez00_3053), BgL_callerz00_1778,
												(obj_t) (BgL_toz00_3055), BBOOL(BgL_safez00_3056),
												BEOA));
								}}
								BgL_arg3916z00_1784 = BgL_res4036z00_3082;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3762;

							BgL_auxz00_3762 = (BgL_varz00_bglt) (BgL_arg3916z00_1784);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1777))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3762), BUNSPEC);
					}}
					{	/* Coerce/coerce.scm 423 */
						BgL_variablez00_bglt BgL_arg3919z00_1787;

						{	/* Coerce/coerce.scm 423 */
							BgL_varz00_bglt BgL_obj2417z00_3086;

							BgL_obj2417z00_3086 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1777))->
								BgL_varz00);
							BgL_arg3919z00_1787 =
								(((BgL_varz00_bglt) CREF(BgL_obj2417z00_3086))->
								BgL_variablez00);
						}
						BGl_pvariablezd2protozd2zzcoerce_pprotoz00(((long) 3),
							BgL_arg3919z00_1787);
					}
					{	/* Coerce/coerce.scm 424 */
						BgL_nodez00_bglt BgL_arg3922z00_1789;

						{	/* Coerce/coerce.scm 424 */
							BgL_nodez00_bglt BgL_arg3923z00_1790;

							BgL_arg3923z00_1790 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1777))->
								BgL_bodyz00);
							{	/* Coerce/coerce.scm 424 */
								BgL_nodez00_bglt BgL_res4039z00_3117;

								{	/* Coerce/coerce.scm 424 */
									BgL_typez00_bglt BgL_toz00_3090;

									bool_t BgL_safez00_3091;

									BgL_toz00_3090 = (BgL_typez00_bglt) (BgL_toz00_1779);
									BgL_safez00_3091 = CBOOL(BgL_safez00_1780);
									{	/* Coerce/coerce.scm 424 */
										obj_t BgL_method3588z00_3092;

										{	/* Coerce/coerce.scm 424 */
											BgL_objectz00_bglt BgL_objz00_3093;

											BgL_objz00_3093 =
												(BgL_objectz00_bglt) (BgL_arg3923z00_1790);
											{	/* Coerce/coerce.scm 424 */
												long BgL_objzd2classzd2numz00_3094;

												BgL_objzd2classzd2numz00_3094 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3093);
												{	/* Coerce/coerce.scm 424 */
													obj_t BgL_arg2643z00_3095;

													BgL_arg2643z00_3095 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 424 */
														obj_t BgL_arrayz00_3097;

														int BgL_offsetz00_3098;

														BgL_arrayz00_3097 = BgL_arg2643z00_3095;
														BgL_offsetz00_3098 =
															(int) (BgL_objzd2classzd2numz00_3094);
														{	/* Coerce/coerce.scm 424 */
															long BgL_offsetz00_3099;

															BgL_offsetz00_3099 =
																((long) (BgL_offsetz00_3098) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 424 */
																long BgL_modz00_3100;

																{	/* Coerce/coerce.scm 424 */
																	int BgL_arg2645z00_3101;

																	BgL_arg2645z00_3101 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 424 */
																		long BgL_auxz00_3779;

																		BgL_auxz00_3779 =
																			(long) (BgL_arg2645z00_3101);
																		BgL_modz00_3100 =
																			(BgL_offsetz00_3099 / BgL_auxz00_3779);
																}}
																{	/* Coerce/coerce.scm 424 */
																	long BgL_restz00_3102;

																	{	/* Coerce/coerce.scm 424 */
																		int BgL_arg2644z00_3103;

																		BgL_arg2644z00_3103 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 424 */
																			long BgL_auxz00_3783;

																			BgL_auxz00_3783 =
																				(long) (BgL_arg2644z00_3103);
																			BgL_restz00_3102 =
																				(BgL_offsetz00_3099 % BgL_auxz00_3783);
																	}}
																	{	/* Coerce/coerce.scm 424 */

																		BgL_method3588z00_3092 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3097,
																				(int) (BgL_modz00_3100)),
																			(int) (BgL_restz00_3102));
										}}}}}}}}
										BgL_res4039z00_3117 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3092) (BgL_method3588z00_3092,
												(obj_t) (BgL_arg3923z00_1790), BgL_callerz00_1778,
												(obj_t) (BgL_toz00_3090), BBOOL(BgL_safez00_3091),
												BEOA));
								}}
								BgL_arg3922z00_1789 = BgL_res4039z00_3117;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1777))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3922z00_1789), BUNSPEC);
					}
					BgL_auxz00_3732 = BgL_nodez00_1777;
					return (obj_t) (BgL_auxz00_3732);
				}
			}
		}
	}



/* coerce!-let-var3631 */
	obj_t BGl_coercez12zd2letzd2var3631z12zzcoerce_coercez00(obj_t
		BgL_envz00_3322, obj_t BgL_nodez00_3323, obj_t BgL_callerz00_3324,
		obj_t BgL_toz00_3325, obj_t BgL_safez00_3326)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 401 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1752;

				obj_t BgL_callerz00_1753;

				obj_t BgL_toz00_1754;

				obj_t BgL_safez00_1755;

				{	/* Tools/trace.sch 53 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3799;

					BgL_nodez00_1752 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3323);
					BgL_callerz00_1753 = BgL_callerz00_3324;
					BgL_toz00_1754 = BgL_toz00_3325;
					BgL_safez00_1755 = BgL_safez00_3326;
					BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
					{	/* Coerce/coerce.scm 406 */
						obj_t BgL_g3586z00_1759;

						BgL_g3586z00_1759 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1752))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3584z00_1761;

							BgL_l3584z00_1761 = BgL_g3586z00_1759;
						BgL_zc3anonymousza33903ze3z83_1762:
							if (PAIRP(BgL_l3584z00_1761))
								{	/* Coerce/coerce.scm 406 */
									{	/* Coerce/coerce.scm 411 */
										obj_t BgL_bindingz00_1764;

										BgL_bindingz00_1764 = CAR(BgL_l3584z00_1761);
										{	/* Coerce/coerce.scm 407 */
											obj_t BgL_arg3906z00_1766;

											BgL_arg3906z00_1766 = CAR(BgL_bindingz00_1764);
											BGl_pvariablezd2protozd2zzcoerce_pprotoz00(((long) 3),
												(BgL_variablez00_bglt) (BgL_arg3906z00_1766));
										}
										{	/* Coerce/coerce.scm 408 */
											BgL_nodez00_bglt BgL_arg3908z00_1767;

											{	/* Coerce/coerce.scm 408 */
												obj_t BgL_arg3909z00_1768;

												BgL_typez00_bglt BgL_arg3910z00_1769;

												BgL_arg3909z00_1768 = CDR(BgL_bindingz00_1764);
												{	/* Coerce/coerce.scm 410 */
													BgL_variablez00_bglt BgL_obj1870z00_2985;

													{	/* Coerce/coerce.scm 410 */
														obj_t BgL_pairz00_2984;

														BgL_pairz00_2984 = BgL_bindingz00_1764;
														BgL_obj1870z00_2985 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_2984));
													}
													BgL_arg3910z00_1769 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1870z00_2985))->BgL_typez00);
												}
												{	/* Coerce/coerce.scm 408 */
													BgL_nodez00_bglt BgL_res4030z00_3015;

													{	/* Coerce/coerce.scm 408 */
														BgL_nodez00_bglt BgL_nodez00_2986;

														bool_t BgL_safez00_2989;

														BgL_nodez00_2986 =
															(BgL_nodez00_bglt) (BgL_arg3909z00_1768);
														BgL_safez00_2989 = CBOOL(BgL_safez00_1755);
														{	/* Coerce/coerce.scm 408 */
															obj_t BgL_method3588z00_2990;

															{	/* Coerce/coerce.scm 408 */
																BgL_objectz00_bglt BgL_objz00_2991;

																BgL_objz00_2991 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2986);
																{	/* Coerce/coerce.scm 408 */
																	long BgL_objzd2classzd2numz00_2992;

																	BgL_objzd2classzd2numz00_2992 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2991);
																	{	/* Coerce/coerce.scm 408 */
																		obj_t BgL_arg2643z00_2993;

																		BgL_arg2643z00_2993 =
																			PROCEDURE_REF
																			(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																			(int) (((long) 1)));
																		{	/* Coerce/coerce.scm 408 */
																			obj_t BgL_arrayz00_2995;

																			int BgL_offsetz00_2996;

																			BgL_arrayz00_2995 = BgL_arg2643z00_2993;
																			BgL_offsetz00_2996 =
																				(int) (BgL_objzd2classzd2numz00_2992);
																			{	/* Coerce/coerce.scm 408 */
																				long BgL_offsetz00_2997;

																				BgL_offsetz00_2997 =
																					(
																					(long) (BgL_offsetz00_2996) -
																					OBJECT_TYPE);
																				{	/* Coerce/coerce.scm 408 */
																					long BgL_modz00_2998;

																					{	/* Coerce/coerce.scm 408 */
																						int BgL_arg2645z00_2999;

																						BgL_arg2645z00_2999 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 408 */
																							long BgL_auxz00_3822;

																							BgL_auxz00_3822 =
																								(long) (BgL_arg2645z00_2999);
																							BgL_modz00_2998 =
																								(BgL_offsetz00_2997 /
																								BgL_auxz00_3822);
																					}}
																					{	/* Coerce/coerce.scm 408 */
																						long BgL_restz00_3000;

																						{	/* Coerce/coerce.scm 408 */
																							int BgL_arg2644z00_3001;

																							BgL_arg2644z00_3001 =
																								(int) (((long) 16));
																							{	/* Coerce/coerce.scm 408 */
																								long BgL_auxz00_3826;

																								BgL_auxz00_3826 =
																									(long) (BgL_arg2644z00_3001);
																								BgL_restz00_3000 =
																									(BgL_offsetz00_2997 %
																									BgL_auxz00_3826);
																						}}
																						{	/* Coerce/coerce.scm 408 */

																							BgL_method3588z00_2990 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2995,
																									(int) (BgL_modz00_2998)),
																								(int) (BgL_restz00_3000));
															}}}}}}}}
															BgL_res4030z00_3015 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3588z00_2990)
																(BgL_method3588z00_2990,
																	(obj_t) (BgL_nodez00_2986),
																	BgL_callerz00_1753,
																	(obj_t) (BgL_arg3910z00_1769),
																	BBOOL(BgL_safez00_2989), BEOA));
													}}
													BgL_arg3908z00_1767 = BgL_res4030z00_3015;
											}}
											{	/* Coerce/coerce.scm 408 */
												obj_t BgL_auxz00_3839;

												BgL_auxz00_3839 = (obj_t) (BgL_arg3908z00_1767);
												SET_CDR(BgL_bindingz00_1764, BgL_auxz00_3839);
									}}}
									{
										obj_t BgL_l3584z00_3842;

										BgL_l3584z00_3842 = CDR(BgL_l3584z00_1761);
										BgL_l3584z00_1761 = BgL_l3584z00_3842;
										goto BgL_zc3anonymousza33903ze3z83_1762;
									}
								}
							else
								{	/* Coerce/coerce.scm 406 */
									((bool_t) 1);
								}
						}
					}
					{	/* Coerce/coerce.scm 413 */
						BgL_nodez00_bglt BgL_arg3913z00_1773;

						{	/* Coerce/coerce.scm 413 */
							BgL_nodez00_bglt BgL_arg3914z00_1774;

							BgL_arg3914z00_1774 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1752))->BgL_bodyz00);
							{	/* Coerce/coerce.scm 413 */
								BgL_nodez00_bglt BgL_res4033z00_3049;

								{	/* Coerce/coerce.scm 413 */
									BgL_typez00_bglt BgL_toz00_3022;

									bool_t BgL_safez00_3023;

									BgL_toz00_3022 = (BgL_typez00_bglt) (BgL_toz00_1754);
									BgL_safez00_3023 = CBOOL(BgL_safez00_1755);
									{	/* Coerce/coerce.scm 413 */
										obj_t BgL_method3588z00_3024;

										{	/* Coerce/coerce.scm 413 */
											BgL_objectz00_bglt BgL_objz00_3025;

											BgL_objz00_3025 =
												(BgL_objectz00_bglt) (BgL_arg3914z00_1774);
											{	/* Coerce/coerce.scm 413 */
												long BgL_objzd2classzd2numz00_3026;

												BgL_objzd2classzd2numz00_3026 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3025);
												{	/* Coerce/coerce.scm 413 */
													obj_t BgL_arg2643z00_3027;

													BgL_arg2643z00_3027 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 413 */
														obj_t BgL_arrayz00_3029;

														int BgL_offsetz00_3030;

														BgL_arrayz00_3029 = BgL_arg2643z00_3027;
														BgL_offsetz00_3030 =
															(int) (BgL_objzd2classzd2numz00_3026);
														{	/* Coerce/coerce.scm 413 */
															long BgL_offsetz00_3031;

															BgL_offsetz00_3031 =
																((long) (BgL_offsetz00_3030) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 413 */
																long BgL_modz00_3032;

																{	/* Coerce/coerce.scm 413 */
																	int BgL_arg2645z00_3033;

																	BgL_arg2645z00_3033 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 413 */
																		long BgL_auxz00_3855;

																		BgL_auxz00_3855 =
																			(long) (BgL_arg2645z00_3033);
																		BgL_modz00_3032 =
																			(BgL_offsetz00_3031 / BgL_auxz00_3855);
																}}
																{	/* Coerce/coerce.scm 413 */
																	long BgL_restz00_3034;

																	{	/* Coerce/coerce.scm 413 */
																		int BgL_arg2644z00_3035;

																		BgL_arg2644z00_3035 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 413 */
																			long BgL_auxz00_3859;

																			BgL_auxz00_3859 =
																				(long) (BgL_arg2644z00_3035);
																			BgL_restz00_3034 =
																				(BgL_offsetz00_3031 % BgL_auxz00_3859);
																	}}
																	{	/* Coerce/coerce.scm 413 */

																		BgL_method3588z00_3024 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3029,
																				(int) (BgL_modz00_3032)),
																			(int) (BgL_restz00_3034));
										}}}}}}}}
										BgL_res4033z00_3049 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_3024) (BgL_method3588z00_3024,
												(obj_t) (BgL_arg3914z00_1774), BgL_callerz00_1753,
												(obj_t) (BgL_toz00_3022), BBOOL(BgL_safez00_3023),
												BEOA));
								}}
								BgL_arg3913z00_1773 = BgL_res4033z00_3049;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1752))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3913z00_1773), BUNSPEC);
					}
					BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
					BgL_auxz00_3799 = BgL_nodez00_1752;
					return (obj_t) (BgL_auxz00_3799);
				}
			}
		}
	}



/* coerce!-let-fun3629 */
	obj_t BGl_coercez12zd2letzd2fun3629z12zzcoerce_coercez00(obj_t
		BgL_envz00_3327, obj_t BgL_nodez00_3328, obj_t BgL_callerz00_3329,
		obj_t BgL_toz00_3330, obj_t BgL_safez00_3331)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 390 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1732;

				obj_t BgL_callerz00_1733;

				obj_t BgL_toz00_1734;

				obj_t BgL_safez00_1735;

				{	/* Coerce/coerce.scm 391 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3876;

					BgL_nodez00_1732 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3328);
					BgL_callerz00_1733 = BgL_callerz00_3329;
					BgL_toz00_1734 = BgL_toz00_3330;
					BgL_safez00_1735 = BgL_safez00_3331;
					BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
					{	/* Coerce/coerce.scm 393 */
						obj_t BgL_g3583z00_1739;

						BgL_g3583z00_1739 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1732))->BgL_localsz00);
						{
							obj_t BgL_l3581z00_1741;

							BgL_l3581z00_1741 = BgL_g3583z00_1739;
						BgL_zc3anonymousza33896ze3z83_1742:
							if (PAIRP(BgL_l3581z00_1741))
								{	/* Coerce/coerce.scm 393 */
									{	/* Coerce/coerce.scm 393 */
										obj_t BgL_fz00_1744;

										BgL_fz00_1744 = CAR(BgL_l3581z00_1741);
										{	/* Coerce/coerce.scm 393 */
											bool_t BgL_arg3898z00_1745;

											if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
												{	/* Coerce/coerce.scm 393 */
													BgL_arg3898z00_1745 = ((bool_t) 0);
												}
											else
												{	/* Coerce/coerce.scm 393 */
													BgL_arg3898z00_1745 = ((bool_t) 1);
												}
											BGl_coercezd2functionz12zc0zzcoerce_coercez00(
												(BgL_variablez00_bglt) (BgL_fz00_1744),
												BgL_arg3898z00_1745);
										}
									}
									{
										obj_t BgL_l3581z00_3886;

										BgL_l3581z00_3886 = CDR(BgL_l3581z00_1741);
										BgL_l3581z00_1741 = BgL_l3581z00_3886;
										goto BgL_zc3anonymousza33896ze3z83_1742;
									}
								}
							else
								{	/* Coerce/coerce.scm 393 */
									((bool_t) 1);
								}
						}
					}
					{	/* Coerce/coerce.scm 394 */
						BgL_nodez00_bglt BgL_arg3900z00_1748;

						{	/* Coerce/coerce.scm 394 */
							BgL_nodez00_bglt BgL_arg3901z00_1749;

							BgL_arg3901z00_1749 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1732))->BgL_bodyz00);
							{	/* Coerce/coerce.scm 394 */
								BgL_nodez00_bglt BgL_res4027z00_2976;

								{	/* Coerce/coerce.scm 394 */
									BgL_typez00_bglt BgL_toz00_2949;

									bool_t BgL_safez00_2950;

									BgL_toz00_2949 = (BgL_typez00_bglt) (BgL_toz00_1734);
									BgL_safez00_2950 = CBOOL(BgL_safez00_1735);
									{	/* Coerce/coerce.scm 394 */
										obj_t BgL_method3588z00_2951;

										{	/* Coerce/coerce.scm 394 */
											BgL_objectz00_bglt BgL_objz00_2952;

											BgL_objz00_2952 =
												(BgL_objectz00_bglt) (BgL_arg3901z00_1749);
											{	/* Coerce/coerce.scm 394 */
												long BgL_objzd2classzd2numz00_2953;

												BgL_objzd2classzd2numz00_2953 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2952);
												{	/* Coerce/coerce.scm 394 */
													obj_t BgL_arg2643z00_2954;

													BgL_arg2643z00_2954 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 394 */
														obj_t BgL_arrayz00_2956;

														int BgL_offsetz00_2957;

														BgL_arrayz00_2956 = BgL_arg2643z00_2954;
														BgL_offsetz00_2957 =
															(int) (BgL_objzd2classzd2numz00_2953);
														{	/* Coerce/coerce.scm 394 */
															long BgL_offsetz00_2958;

															BgL_offsetz00_2958 =
																((long) (BgL_offsetz00_2957) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 394 */
																long BgL_modz00_2959;

																{	/* Coerce/coerce.scm 394 */
																	int BgL_arg2645z00_2960;

																	BgL_arg2645z00_2960 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 394 */
																		long BgL_auxz00_3899;

																		BgL_auxz00_3899 =
																			(long) (BgL_arg2645z00_2960);
																		BgL_modz00_2959 =
																			(BgL_offsetz00_2958 / BgL_auxz00_3899);
																}}
																{	/* Coerce/coerce.scm 394 */
																	long BgL_restz00_2961;

																	{	/* Coerce/coerce.scm 394 */
																		int BgL_arg2644z00_2962;

																		BgL_arg2644z00_2962 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 394 */
																			long BgL_auxz00_3903;

																			BgL_auxz00_3903 =
																				(long) (BgL_arg2644z00_2962);
																			BgL_restz00_2961 =
																				(BgL_offsetz00_2958 % BgL_auxz00_3903);
																	}}
																	{	/* Coerce/coerce.scm 394 */

																		BgL_method3588z00_2951 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2956,
																				(int) (BgL_modz00_2959)),
																			(int) (BgL_restz00_2961));
										}}}}}}}}
										BgL_res4027z00_2976 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2951) (BgL_method3588z00_2951,
												(obj_t) (BgL_arg3901z00_1749), BgL_callerz00_1733,
												(obj_t) (BgL_toz00_2949), BBOOL(BgL_safez00_2950),
												BEOA));
								}}
								BgL_arg3900z00_1748 = BgL_res4027z00_2976;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1732))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3900z00_1748), BUNSPEC);
					}
					BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
					BgL_auxz00_3876 = BgL_nodez00_1732;
					return (obj_t) (BgL_auxz00_3876);
				}
			}
		}
	}



/* coerce!-select3627 */
	obj_t BGl_coercez12zd2select3627zc0zzcoerce_coercez00(obj_t BgL_envz00_3332,
		obj_t BgL_nodez00_3333, obj_t BgL_callerz00_3334, obj_t BgL_toz00_3335,
		obj_t BgL_safez00_3336)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 359 */
			{
				BgL_selectz00_bglt BgL_nodez00_1703;

				obj_t BgL_callerz00_1704;

				obj_t BgL_toz00_1705;

				obj_t BgL_safez00_1706;

				BgL_nodez00_1703 = (BgL_selectz00_bglt) (BgL_nodez00_3333);
				BgL_callerz00_1704 = BgL_callerz00_3334;
				BgL_toz00_1705 = BgL_toz00_3335;
				BgL_safez00_1706 = BgL_safez00_3336;
				{
					BgL_typez00_bglt BgL_auxz00_3922;

					BgL_nodez00_bglt BgL_auxz00_3920;

					BgL_auxz00_3922 = (BgL_typez00_bglt) (BgL_toz00_1705);
					BgL_auxz00_3920 = (BgL_nodez00_bglt) (BgL_nodez00_1703);
					((((BgL_nodez00_bglt) CREF(BgL_auxz00_3920))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_3922), BUNSPEC);
				}
				{	/* Coerce/coerce.scm 362 */
					obj_t BgL_clausesz00_1710;

					BgL_typez00_bglt BgL_testzd2typezd2_1711;

					BgL_typez00_bglt BgL_testzd2nodezd2typez00_1712;

					BgL_clausesz00_1710 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1703))->BgL_clausesz00);
					BgL_testzd2typezd2_1711 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1703))->BgL_itemzd2typezd2);
					{	/* Coerce/coerce.scm 364 */
						BgL_nodez00_bglt BgL_arg3894z00_1729;

						BgL_arg3894z00_1729 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1703))->BgL_testz00);
						BgL_testzd2nodezd2typez00_1712 =
							BGl_getzd2typezd2zztype_typeofz00(BgL_arg3894z00_1729);
					}
					if (BGl_coercerzd2existszf3z21zztype_coercionz00
						(BgL_testzd2nodezd2typez00_1712, BgL_testzd2typezd2_1711))
						{	/* Coerce/coerce.scm 372 */
							{	/* Coerce/coerce.scm 378 */
								BgL_nodez00_bglt BgL_arg3883z00_1714;

								{	/* Coerce/coerce.scm 378 */
									BgL_nodez00_bglt BgL_arg3884z00_1715;

									BgL_arg3884z00_1715 =
										(((BgL_selectz00_bglt) CREF(BgL_nodez00_1703))->
										BgL_testz00);
									{	/* Coerce/coerce.scm 378 */
										BgL_nodez00_bglt BgL_res4018z00_2870;

										{	/* Coerce/coerce.scm 378 */
											bool_t BgL_safez00_2844;

											BgL_safez00_2844 = CBOOL(BgL_safez00_1706);
											{	/* Coerce/coerce.scm 378 */
												obj_t BgL_method3588z00_2845;

												{	/* Coerce/coerce.scm 378 */
													BgL_objectz00_bglt BgL_objz00_2846;

													BgL_objz00_2846 =
														(BgL_objectz00_bglt) (BgL_arg3884z00_1715);
													{	/* Coerce/coerce.scm 378 */
														long BgL_objzd2classzd2numz00_2847;

														BgL_objzd2classzd2numz00_2847 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2846);
														{	/* Coerce/coerce.scm 378 */
															obj_t BgL_arg2643z00_2848;

															BgL_arg2643z00_2848 =
																PROCEDURE_REF
																(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																(int) (((long) 1)));
															{	/* Coerce/coerce.scm 378 */
																obj_t BgL_arrayz00_2850;

																int BgL_offsetz00_2851;

																BgL_arrayz00_2850 = BgL_arg2643z00_2848;
																BgL_offsetz00_2851 =
																	(int) (BgL_objzd2classzd2numz00_2847);
																{	/* Coerce/coerce.scm 378 */
																	long BgL_offsetz00_2852;

																	BgL_offsetz00_2852 =
																		((long) (BgL_offsetz00_2851) - OBJECT_TYPE);
																	{	/* Coerce/coerce.scm 378 */
																		long BgL_modz00_2853;

																		{	/* Coerce/coerce.scm 378 */
																			int BgL_arg2645z00_2854;

																			BgL_arg2645z00_2854 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 378 */
																				long BgL_auxz00_3941;

																				BgL_auxz00_3941 =
																					(long) (BgL_arg2645z00_2854);
																				BgL_modz00_2853 =
																					(BgL_offsetz00_2852 /
																					BgL_auxz00_3941);
																		}}
																		{	/* Coerce/coerce.scm 378 */
																			long BgL_restz00_2855;

																			{	/* Coerce/coerce.scm 378 */
																				int BgL_arg2644z00_2856;

																				BgL_arg2644z00_2856 =
																					(int) (((long) 16));
																				{	/* Coerce/coerce.scm 378 */
																					long BgL_auxz00_3945;

																					BgL_auxz00_3945 =
																						(long) (BgL_arg2644z00_2856);
																					BgL_restz00_2855 =
																						(BgL_offsetz00_2852 %
																						BgL_auxz00_3945);
																			}}
																			{	/* Coerce/coerce.scm 378 */

																				BgL_method3588z00_2845 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2850,
																						(int) (BgL_modz00_2853)),
																					(int) (BgL_restz00_2855));
												}}}}}}}}
												BgL_res4018z00_2870 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3588z00_2845) (BgL_method3588z00_2845,
														(obj_t) (BgL_arg3884z00_1715), BgL_callerz00_1704,
														(obj_t) (BgL_testzd2typezd2_1711),
														BBOOL(BgL_safez00_2844), BEOA));
										}}
										BgL_arg3883z00_1714 = BgL_res4018z00_2870;
								}}
								((((BgL_selectz00_bglt) CREF(BgL_nodez00_1703))->BgL_testz00) =
									((BgL_nodez00_bglt) BgL_arg3883z00_1714), BUNSPEC);
							}
							{
								obj_t BgL_l3579z00_1717;

								BgL_l3579z00_1717 = BgL_clausesz00_1710;
							BgL_zc3anonymousza33885ze3z83_1718:
								if (PAIRP(BgL_l3579z00_1717))
									{	/* Coerce/coerce.scm 379 */
										{	/* Coerce/coerce.scm 380 */
											obj_t BgL_clausez00_1720;

											BgL_clausez00_1720 = CAR(BgL_l3579z00_1717);
											{	/* Coerce/coerce.scm 380 */
												BgL_nodez00_bglt BgL_arg3887z00_1721;

												{	/* Coerce/coerce.scm 380 */
													obj_t BgL_arg3888z00_1722;

													BgL_arg3888z00_1722 = CDR(BgL_clausez00_1720);
													{	/* Coerce/coerce.scm 380 */
														BgL_nodez00_bglt BgL_res4021z00_2905;

														{	/* Coerce/coerce.scm 380 */
															BgL_nodez00_bglt BgL_nodez00_2876;

															BgL_typez00_bglt BgL_toz00_2878;

															bool_t BgL_safez00_2879;

															BgL_nodez00_2876 =
																(BgL_nodez00_bglt) (BgL_arg3888z00_1722);
															BgL_toz00_2878 =
																(BgL_typez00_bglt) (BgL_toz00_1705);
															BgL_safez00_2879 = CBOOL(BgL_safez00_1706);
															{	/* Coerce/coerce.scm 380 */
																obj_t BgL_method3588z00_2880;

																{	/* Coerce/coerce.scm 380 */
																	BgL_objectz00_bglt BgL_objz00_2881;

																	BgL_objz00_2881 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2876);
																	{	/* Coerce/coerce.scm 380 */
																		long BgL_objzd2classzd2numz00_2882;

																		BgL_objzd2classzd2numz00_2882 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2881);
																		{	/* Coerce/coerce.scm 380 */
																			obj_t BgL_arg2643z00_2883;

																			BgL_arg2643z00_2883 =
																				PROCEDURE_REF
																				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																				(int) (((long) 1)));
																			{	/* Coerce/coerce.scm 380 */
																				obj_t BgL_arrayz00_2885;

																				int BgL_offsetz00_2886;

																				BgL_arrayz00_2885 = BgL_arg2643z00_2883;
																				BgL_offsetz00_2886 =
																					(int) (BgL_objzd2classzd2numz00_2882);
																				{	/* Coerce/coerce.scm 380 */
																					long BgL_offsetz00_2887;

																					BgL_offsetz00_2887 =
																						(
																						(long) (BgL_offsetz00_2886) -
																						OBJECT_TYPE);
																					{	/* Coerce/coerce.scm 380 */
																						long BgL_modz00_2888;

																						{	/* Coerce/coerce.scm 380 */
																							int BgL_arg2645z00_2889;

																							BgL_arg2645z00_2889 =
																								(int) (((long) 16));
																							{	/* Coerce/coerce.scm 380 */
																								long BgL_auxz00_3974;

																								BgL_auxz00_3974 =
																									(long) (BgL_arg2645z00_2889);
																								BgL_modz00_2888 =
																									(BgL_offsetz00_2887 /
																									BgL_auxz00_3974);
																						}}
																						{	/* Coerce/coerce.scm 380 */
																							long BgL_restz00_2890;

																							{	/* Coerce/coerce.scm 380 */
																								int BgL_arg2644z00_2891;

																								BgL_arg2644z00_2891 =
																									(int) (((long) 16));
																								{	/* Coerce/coerce.scm 380 */
																									long BgL_auxz00_3978;

																									BgL_auxz00_3978 =
																										(long)
																										(BgL_arg2644z00_2891);
																									BgL_restz00_2890 =
																										(BgL_offsetz00_2887 %
																										BgL_auxz00_3978);
																							}}
																							{	/* Coerce/coerce.scm 380 */

																								BgL_method3588z00_2880 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2885,
																										(int) (BgL_modz00_2888)),
																									(int) (BgL_restz00_2890));
																}}}}}}}}
																BgL_res4021z00_2905 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3588z00_2880)
																	(BgL_method3588z00_2880,
																		(obj_t) (BgL_nodez00_2876),
																		BgL_callerz00_1704,
																		(obj_t) (BgL_toz00_2878),
																		BBOOL(BgL_safez00_2879), BEOA));
														}}
														BgL_arg3887z00_1721 = BgL_res4021z00_2905;
												}}
												{	/* Coerce/coerce.scm 380 */
													obj_t BgL_auxz00_3991;

													BgL_auxz00_3991 = (obj_t) (BgL_arg3887z00_1721);
													SET_CDR(BgL_clausez00_1720, BgL_auxz00_3991);
										}}}
										{
											obj_t BgL_l3579z00_3994;

											BgL_l3579z00_3994 = CDR(BgL_l3579z00_1717);
											BgL_l3579z00_1717 = BgL_l3579z00_3994;
											goto BgL_zc3anonymousza33885ze3z83_1718;
										}
									}
								else
									{	/* Coerce/coerce.scm 379 */
										((bool_t) 1);
									}
							}
							return (obj_t) (BgL_nodez00_1703);
						}
					else
						{	/* Coerce/coerce.scm 373 */
							obj_t BgL_arg3890z00_1725;

							{	/* Coerce/coerce.scm 373 */
								obj_t BgL_arg3891z00_1726;

								obj_t BgL_arg3892z00_1727;

								BgL_nodez00_bglt BgL_arg3893z00_1728;

								{
									BgL_nodez00_bglt BgL_auxz00_3997;

									BgL_auxz00_3997 = (BgL_nodez00_bglt) (BgL_nodez00_1703);
									BgL_arg3891z00_1726 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_3997))->BgL_locz00);
								}
								BgL_arg3892z00_1727 =
									(((BgL_typez00_bglt) CREF(BgL_testzd2typezd2_1711))->
									BgL_idz00);
								BgL_arg3893z00_1728 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1703))->BgL_testz00);
								BgL_arg3890z00_1725 =
									BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
									(BgL_arg3891z00_1726, BgL_arg3892z00_1727,
									(obj_t) (BgL_arg3893z00_1728));
							}
							{	/* Coerce/coerce.scm 373 */
								BgL_nodez00_bglt BgL_res4024z00_2941;

								{	/* Coerce/coerce.scm 373 */
									BgL_nodez00_bglt BgL_nodez00_2912;

									BgL_typez00_bglt BgL_toz00_2914;

									bool_t BgL_safez00_2915;

									BgL_nodez00_2912 = (BgL_nodez00_bglt) (BgL_arg3890z00_1725);
									BgL_toz00_2914 = (BgL_typez00_bglt) (BgL_toz00_1705);
									BgL_safez00_2915 = CBOOL(BgL_safez00_1706);
									{	/* Coerce/coerce.scm 373 */
										obj_t BgL_method3588z00_2916;

										{	/* Coerce/coerce.scm 373 */
											BgL_objectz00_bglt BgL_objz00_2917;

											BgL_objz00_2917 = (BgL_objectz00_bglt) (BgL_nodez00_2912);
											{	/* Coerce/coerce.scm 373 */
												long BgL_objzd2classzd2numz00_2918;

												BgL_objzd2classzd2numz00_2918 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2917);
												{	/* Coerce/coerce.scm 373 */
													obj_t BgL_arg2643z00_2919;

													BgL_arg2643z00_2919 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 373 */
														obj_t BgL_arrayz00_2921;

														int BgL_offsetz00_2922;

														BgL_arrayz00_2921 = BgL_arg2643z00_2919;
														BgL_offsetz00_2922 =
															(int) (BgL_objzd2classzd2numz00_2918);
														{	/* Coerce/coerce.scm 373 */
															long BgL_offsetz00_2923;

															BgL_offsetz00_2923 =
																((long) (BgL_offsetz00_2922) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 373 */
																long BgL_modz00_2924;

																{	/* Coerce/coerce.scm 373 */
																	int BgL_arg2645z00_2925;

																	BgL_arg2645z00_2925 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 373 */
																		long BgL_auxz00_4015;

																		BgL_auxz00_4015 =
																			(long) (BgL_arg2645z00_2925);
																		BgL_modz00_2924 =
																			(BgL_offsetz00_2923 / BgL_auxz00_4015);
																}}
																{	/* Coerce/coerce.scm 373 */
																	long BgL_restz00_2926;

																	{	/* Coerce/coerce.scm 373 */
																		int BgL_arg2644z00_2927;

																		BgL_arg2644z00_2927 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 373 */
																			long BgL_auxz00_4019;

																			BgL_auxz00_4019 =
																				(long) (BgL_arg2644z00_2927);
																			BgL_restz00_2926 =
																				(BgL_offsetz00_2923 % BgL_auxz00_4019);
																	}}
																	{	/* Coerce/coerce.scm 373 */

																		BgL_method3588z00_2916 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2921,
																				(int) (BgL_modz00_2924)),
																			(int) (BgL_restz00_2926));
										}}}}}}}}
										BgL_res4024z00_2941 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2916) (BgL_method3588z00_2916,
												(obj_t) (BgL_nodez00_2912), BgL_callerz00_1704,
												(obj_t) (BgL_toz00_2914), BBOOL(BgL_safez00_2915),
												BEOA));
								}}
								return (obj_t) (BgL_res4024z00_2941);
							}
						}
				}
			}
		}
	}



/* coerce!-fail3625 */
	obj_t BGl_coercez12zd2fail3625zc0zzcoerce_coercez00(obj_t BgL_envz00_3337,
		obj_t BgL_nodez00_3338, obj_t BgL_callerz00_3339, obj_t BgL_toz00_3340,
		obj_t BgL_safez00_3341)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 349 */
			{
				BgL_failz00_bglt BgL_nodez00_1688;

				obj_t BgL_callerz00_1689;

				obj_t BgL_toz00_1690;

				obj_t BgL_safez00_1691;

				{	/* Coerce/coerce.scm 350 */
					BgL_nodez00_bglt BgL_auxz00_4034;

					BgL_nodez00_1688 = (BgL_failz00_bglt) (BgL_nodez00_3338);
					BgL_callerz00_1689 = BgL_callerz00_3339;
					BgL_toz00_1690 = BgL_toz00_3340;
					BgL_safez00_1691 = BgL_safez00_3341;
					{	/* Coerce/coerce.scm 351 */
						BgL_nodez00_bglt BgL_arg3875z00_1695;

						{	/* Coerce/coerce.scm 351 */
							BgL_nodez00_bglt BgL_arg3876z00_1696;

							BgL_arg3876z00_1696 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1688))->BgL_procz00);
							{	/* Coerce/coerce.scm 351 */
								BgL_nodez00_bglt BgL_res4009z00_2766;

								{	/* Coerce/coerce.scm 351 */
									BgL_typez00_bglt BgL_toz00_2739;

									bool_t BgL_safez00_2740;

									BgL_toz00_2739 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_2740 = CBOOL(BgL_safez00_1691);
									{	/* Coerce/coerce.scm 351 */
										obj_t BgL_method3588z00_2741;

										{	/* Coerce/coerce.scm 351 */
											BgL_objectz00_bglt BgL_objz00_2742;

											BgL_objz00_2742 =
												(BgL_objectz00_bglt) (BgL_arg3876z00_1696);
											{	/* Coerce/coerce.scm 351 */
												long BgL_objzd2classzd2numz00_2743;

												BgL_objzd2classzd2numz00_2743 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2742);
												{	/* Coerce/coerce.scm 351 */
													obj_t BgL_arg2643z00_2744;

													BgL_arg2643z00_2744 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 351 */
														obj_t BgL_arrayz00_2746;

														int BgL_offsetz00_2747;

														BgL_arrayz00_2746 = BgL_arg2643z00_2744;
														BgL_offsetz00_2747 =
															(int) (BgL_objzd2classzd2numz00_2743);
														{	/* Coerce/coerce.scm 351 */
															long BgL_offsetz00_2748;

															BgL_offsetz00_2748 =
																((long) (BgL_offsetz00_2747) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 351 */
																long BgL_modz00_2749;

																{	/* Coerce/coerce.scm 351 */
																	int BgL_arg2645z00_2750;

																	BgL_arg2645z00_2750 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 351 */
																		long BgL_auxz00_4046;

																		BgL_auxz00_4046 =
																			(long) (BgL_arg2645z00_2750);
																		BgL_modz00_2749 =
																			(BgL_offsetz00_2748 / BgL_auxz00_4046);
																}}
																{	/* Coerce/coerce.scm 351 */
																	long BgL_restz00_2751;

																	{	/* Coerce/coerce.scm 351 */
																		int BgL_arg2644z00_2752;

																		BgL_arg2644z00_2752 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 351 */
																			long BgL_auxz00_4050;

																			BgL_auxz00_4050 =
																				(long) (BgL_arg2644z00_2752);
																			BgL_restz00_2751 =
																				(BgL_offsetz00_2748 % BgL_auxz00_4050);
																	}}
																	{	/* Coerce/coerce.scm 351 */

																		BgL_method3588z00_2741 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2746,
																				(int) (BgL_modz00_2749)),
																			(int) (BgL_restz00_2751));
										}}}}}}}}
										BgL_res4009z00_2766 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2741) (BgL_method3588z00_2741,
												(obj_t) (BgL_arg3876z00_1696), BgL_callerz00_1689,
												(obj_t) (BgL_toz00_2739), BBOOL(BgL_safez00_2740),
												BEOA));
								}}
								BgL_arg3875z00_1695 = BgL_res4009z00_2766;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1688))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3875z00_1695), BUNSPEC);
					}
					{	/* Coerce/coerce.scm 352 */
						BgL_nodez00_bglt BgL_arg3877z00_1697;

						{	/* Coerce/coerce.scm 352 */
							BgL_nodez00_bglt BgL_arg3878z00_1698;

							BgL_arg3878z00_1698 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1688))->BgL_msgz00);
							{	/* Coerce/coerce.scm 352 */
								BgL_nodez00_bglt BgL_res4012z00_2799;

								{	/* Coerce/coerce.scm 352 */
									BgL_typez00_bglt BgL_toz00_2772;

									bool_t BgL_safez00_2773;

									BgL_toz00_2772 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_2773 = CBOOL(BgL_safez00_1691);
									{	/* Coerce/coerce.scm 352 */
										obj_t BgL_method3588z00_2774;

										{	/* Coerce/coerce.scm 352 */
											BgL_objectz00_bglt BgL_objz00_2775;

											BgL_objz00_2775 =
												(BgL_objectz00_bglt) (BgL_arg3878z00_1698);
											{	/* Coerce/coerce.scm 352 */
												long BgL_objzd2classzd2numz00_2776;

												BgL_objzd2classzd2numz00_2776 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2775);
												{	/* Coerce/coerce.scm 352 */
													obj_t BgL_arg2643z00_2777;

													BgL_arg2643z00_2777 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 352 */
														obj_t BgL_arrayz00_2779;

														int BgL_offsetz00_2780;

														BgL_arrayz00_2779 = BgL_arg2643z00_2777;
														BgL_offsetz00_2780 =
															(int) (BgL_objzd2classzd2numz00_2776);
														{	/* Coerce/coerce.scm 352 */
															long BgL_offsetz00_2781;

															BgL_offsetz00_2781 =
																((long) (BgL_offsetz00_2780) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 352 */
																long BgL_modz00_2782;

																{	/* Coerce/coerce.scm 352 */
																	int BgL_arg2645z00_2783;

																	BgL_arg2645z00_2783 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 352 */
																		long BgL_auxz00_4075;

																		BgL_auxz00_4075 =
																			(long) (BgL_arg2645z00_2783);
																		BgL_modz00_2782 =
																			(BgL_offsetz00_2781 / BgL_auxz00_4075);
																}}
																{	/* Coerce/coerce.scm 352 */
																	long BgL_restz00_2784;

																	{	/* Coerce/coerce.scm 352 */
																		int BgL_arg2644z00_2785;

																		BgL_arg2644z00_2785 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 352 */
																			long BgL_auxz00_4079;

																			BgL_auxz00_4079 =
																				(long) (BgL_arg2644z00_2785);
																			BgL_restz00_2784 =
																				(BgL_offsetz00_2781 % BgL_auxz00_4079);
																	}}
																	{	/* Coerce/coerce.scm 352 */

																		BgL_method3588z00_2774 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2779,
																				(int) (BgL_modz00_2782)),
																			(int) (BgL_restz00_2784));
										}}}}}}}}
										BgL_res4012z00_2799 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2774) (BgL_method3588z00_2774,
												(obj_t) (BgL_arg3878z00_1698), BgL_callerz00_1689,
												(obj_t) (BgL_toz00_2772), BBOOL(BgL_safez00_2773),
												BEOA));
								}}
								BgL_arg3877z00_1697 = BgL_res4012z00_2799;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1688))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3877z00_1697), BUNSPEC);
					}
					{	/* Coerce/coerce.scm 353 */
						BgL_nodez00_bglt BgL_arg3879z00_1699;

						{	/* Coerce/coerce.scm 353 */
							BgL_nodez00_bglt BgL_arg3880z00_1700;

							BgL_arg3880z00_1700 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1688))->BgL_objz00);
							{	/* Coerce/coerce.scm 353 */
								BgL_nodez00_bglt BgL_res4015z00_2832;

								{	/* Coerce/coerce.scm 353 */
									BgL_typez00_bglt BgL_toz00_2805;

									bool_t BgL_safez00_2806;

									BgL_toz00_2805 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_2806 = CBOOL(BgL_safez00_1691);
									{	/* Coerce/coerce.scm 353 */
										obj_t BgL_method3588z00_2807;

										{	/* Coerce/coerce.scm 353 */
											BgL_objectz00_bglt BgL_objz00_2808;

											BgL_objz00_2808 =
												(BgL_objectz00_bglt) (BgL_arg3880z00_1700);
											{	/* Coerce/coerce.scm 353 */
												long BgL_objzd2classzd2numz00_2809;

												BgL_objzd2classzd2numz00_2809 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2808);
												{	/* Coerce/coerce.scm 353 */
													obj_t BgL_arg2643z00_2810;

													BgL_arg2643z00_2810 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 353 */
														obj_t BgL_arrayz00_2812;

														int BgL_offsetz00_2813;

														BgL_arrayz00_2812 = BgL_arg2643z00_2810;
														BgL_offsetz00_2813 =
															(int) (BgL_objzd2classzd2numz00_2809);
														{	/* Coerce/coerce.scm 353 */
															long BgL_offsetz00_2814;

															BgL_offsetz00_2814 =
																((long) (BgL_offsetz00_2813) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 353 */
																long BgL_modz00_2815;

																{	/* Coerce/coerce.scm 353 */
																	int BgL_arg2645z00_2816;

																	BgL_arg2645z00_2816 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 353 */
																		long BgL_auxz00_4104;

																		BgL_auxz00_4104 =
																			(long) (BgL_arg2645z00_2816);
																		BgL_modz00_2815 =
																			(BgL_offsetz00_2814 / BgL_auxz00_4104);
																}}
																{	/* Coerce/coerce.scm 353 */
																	long BgL_restz00_2817;

																	{	/* Coerce/coerce.scm 353 */
																		int BgL_arg2644z00_2818;

																		BgL_arg2644z00_2818 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 353 */
																			long BgL_auxz00_4108;

																			BgL_auxz00_4108 =
																				(long) (BgL_arg2644z00_2818);
																			BgL_restz00_2817 =
																				(BgL_offsetz00_2814 % BgL_auxz00_4108);
																	}}
																	{	/* Coerce/coerce.scm 353 */

																		BgL_method3588z00_2807 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2812,
																				(int) (BgL_modz00_2815)),
																			(int) (BgL_restz00_2817));
										}}}}}}}}
										BgL_res4015z00_2832 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2807) (BgL_method3588z00_2807,
												(obj_t) (BgL_arg3880z00_1700), BgL_callerz00_1689,
												(obj_t) (BgL_toz00_2805), BBOOL(BgL_safez00_2806),
												BEOA));
								}}
								BgL_arg3879z00_1699 = BgL_res4015z00_2832;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1688))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3879z00_1699), BUNSPEC);
					}
					BgL_auxz00_4034 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1688),
						(BgL_typez00_bglt) (BGl_za2magicza2z00zztype_cachez00),
						(BgL_typez00_bglt) (BgL_toz00_1690), CBOOL(BgL_safez00_1691));
					return (obj_t) (BgL_auxz00_4034);
				}
			}
		}
	}



/* coerce!-conditional3623 */
	obj_t BGl_coercez12zd2conditional3623zc0zzcoerce_coercez00(obj_t
		BgL_envz00_3342, obj_t BgL_nodez00_3343, obj_t BgL_callerz00_3344,
		obj_t BgL_toz00_3345, obj_t BgL_safez00_3346)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 269 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1593;

				obj_t BgL_callerz00_1594;

				obj_t BgL_toz00_1595;

				obj_t BgL_safez00_1596;

				BgL_nodez00_1593 = (BgL_conditionalz00_bglt) (BgL_nodez00_3343);
				BgL_callerz00_1594 = BgL_callerz00_3344;
				BgL_toz00_1595 = BgL_toz00_3345;
				BgL_safez00_1596 = BgL_safez00_3346;
				{
					BgL_appz00_bglt BgL_nodez00_1615;

					BgL_letzd2varzd2_bglt BgL_nodez00_1638;

					BgL_nodez00_bglt BgL_nodez00_1679;

					{	/* Coerce/coerce.scm 334 */
						BgL_nodez00_bglt BgL_arg3820z00_1603;

						{	/* Coerce/coerce.scm 334 */
							BgL_nodez00_bglt BgL_arg3821z00_1604;

							BgL_arg3821z00_1604 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
								BgL_testz00);
							{	/* Coerce/coerce.scm 334 */
								BgL_nodez00_bglt BgL_res3994z00_2550;

								{	/* Coerce/coerce.scm 334 */
									BgL_typez00_bglt BgL_toz00_2523;

									bool_t BgL_safez00_2524;

									BgL_toz00_2523 =
										(BgL_typez00_bglt) (BGl_za2boolza2z00zztype_cachez00);
									BgL_safez00_2524 = CBOOL(BgL_safez00_1596);
									{	/* Coerce/coerce.scm 334 */
										obj_t BgL_method3588z00_2525;

										{	/* Coerce/coerce.scm 334 */
											BgL_objectz00_bglt BgL_objz00_2526;

											BgL_objz00_2526 =
												(BgL_objectz00_bglt) (BgL_arg3821z00_1604);
											{	/* Coerce/coerce.scm 334 */
												long BgL_objzd2classzd2numz00_2527;

												BgL_objzd2classzd2numz00_2527 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2526);
												{	/* Coerce/coerce.scm 334 */
													obj_t BgL_arg2643z00_2528;

													BgL_arg2643z00_2528 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 334 */
														obj_t BgL_arrayz00_2530;

														int BgL_offsetz00_2531;

														BgL_arrayz00_2530 = BgL_arg2643z00_2528;
														BgL_offsetz00_2531 =
															(int) (BgL_objzd2classzd2numz00_2527);
														{	/* Coerce/coerce.scm 334 */
															long BgL_offsetz00_2532;

															BgL_offsetz00_2532 =
																((long) (BgL_offsetz00_2531) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 334 */
																long BgL_modz00_2533;

																{	/* Coerce/coerce.scm 334 */
																	int BgL_arg2645z00_2534;

																	BgL_arg2645z00_2534 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 334 */
																		long BgL_auxz00_4140;

																		BgL_auxz00_4140 =
																			(long) (BgL_arg2645z00_2534);
																		BgL_modz00_2533 =
																			(BgL_offsetz00_2532 / BgL_auxz00_4140);
																}}
																{	/* Coerce/coerce.scm 334 */
																	long BgL_restz00_2535;

																	{	/* Coerce/coerce.scm 334 */
																		int BgL_arg2644z00_2536;

																		BgL_arg2644z00_2536 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 334 */
																			long BgL_auxz00_4144;

																			BgL_auxz00_4144 =
																				(long) (BgL_arg2644z00_2536);
																			BgL_restz00_2535 =
																				(BgL_offsetz00_2532 % BgL_auxz00_4144);
																	}}
																	{	/* Coerce/coerce.scm 334 */

																		BgL_method3588z00_2525 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2530,
																				(int) (BgL_modz00_2533)),
																			(int) (BgL_restz00_2535));
										}}}}}}}}
										BgL_res3994z00_2550 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2525) (BgL_method3588z00_2525,
												(obj_t) (BgL_arg3821z00_1604), BgL_callerz00_1594,
												(obj_t) (BgL_toz00_2523), BBOOL(BgL_safez00_2524),
												BEOA));
								}}
								BgL_arg3820z00_1603 = BgL_res3994z00_2550;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3820z00_1603), BUNSPEC);
					}
					{	/* Coerce/coerce.scm 335 */
						obj_t BgL_casezd2valuezd2_1605;

						{	/* Coerce/coerce.scm 335 */
							BgL_nodez00_bglt BgL_arg3830z00_1614;

							BgL_arg3830z00_1614 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
								BgL_testz00);
							BgL_nodez00_1679 = BgL_arg3830z00_1614;
							{	/* Coerce/coerce.scm 327 */
								bool_t BgL_testz00_4159;

								{	/* Coerce/coerce.scm 327 */
									obj_t BgL_obj2538z00_2734;

									BgL_obj2538z00_2734 = (obj_t) (BgL_nodez00_1679);
									BgL_testz00_4159 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2538z00_2734,
										BGl_appz00zzast_nodez00);
								}
								if (BgL_testz00_4159)
									{	/* Coerce/coerce.scm 327 */
										BgL_nodez00_1615 = (BgL_appz00_bglt) (BgL_nodez00_1679);
										{	/* Coerce/coerce.scm 272 */
											bool_t BgL_testz00_4162;

											{	/* Coerce/coerce.scm 272 */
												obj_t BgL_auxz00_4163;

												BgL_auxz00_4163 =
													(((BgL_appz00_bglt) CREF(BgL_nodez00_1615))->
													BgL_argsz00);
												BgL_testz00_4162 = PAIRP(BgL_auxz00_4163);
											}
											if (BgL_testz00_4162)
												{	/* Coerce/coerce.scm 273 */
													bool_t BgL_testz00_4166;

													{	/* Coerce/coerce.scm 273 */
														obj_t BgL_auxz00_4167;

														{	/* Coerce/coerce.scm 273 */
															obj_t BgL_pairz00_2691;

															BgL_pairz00_2691 =
																(((BgL_appz00_bglt) CREF(BgL_nodez00_1615))->
																BgL_argsz00);
															BgL_auxz00_4167 = CDR(BgL_pairz00_2691);
														}
														BgL_testz00_4166 = NULLP(BgL_auxz00_4167);
													}
													if (BgL_testz00_4166)
														{	/* Coerce/coerce.scm 274 */
															bool_t BgL_testz00_4171;

															{	/* Coerce/coerce.scm 274 */
																bool_t BgL_testz00_4172;

																{	/* Coerce/coerce.scm 274 */
																	obj_t BgL_arg3840z00_1633;

																	{	/* Coerce/coerce.scm 274 */
																		obj_t BgL_pairz00_2694;

																		BgL_pairz00_2694 =
																			(((BgL_appz00_bglt)
																				CREF(BgL_nodez00_1615))->BgL_argsz00);
																		BgL_arg3840z00_1633 = CAR(BgL_pairz00_2694);
																	}
																	BgL_testz00_4172 =
																		BGl_sidezd2effectzf3z21zzeffect_effectz00(
																		(BgL_nodez00_bglt) (BgL_arg3840z00_1633));
																}
																if (BgL_testz00_4172)
																	{	/* Coerce/coerce.scm 274 */
																		BgL_testz00_4171 = ((bool_t) 0);
																	}
																else
																	{	/* Coerce/coerce.scm 274 */
																		BgL_testz00_4171 = ((bool_t) 1);
																	}
															}
															if (BgL_testz00_4171)
																{	/* Coerce/coerce.scm 275 */
																	BgL_varz00_bglt BgL_funz00_1621;

																	BgL_funz00_1621 =
																		(((BgL_appz00_bglt)
																			CREF(BgL_nodez00_1615))->BgL_funz00);
																	{	/* Coerce/coerce.scm 275 */
																		BgL_valuez00_bglt BgL_valz00_1622;

																		{	/* Coerce/coerce.scm 276 */
																			BgL_variablez00_bglt BgL_obj1873z00_2697;

																			BgL_obj1873z00_2697 =
																				(((BgL_varz00_bglt)
																					CREF(BgL_funz00_1621))->
																				BgL_variablez00);
																			BgL_valz00_1622 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_obj1873z00_2697))->
																				BgL_valuez00);
																		}
																		{	/* Coerce/coerce.scm 276 */
																			obj_t BgL_typecz00_1623;

																			{
																				BgL_funz00_bglt BgL_auxz00_4180;

																				BgL_auxz00_4180 =
																					(BgL_funz00_bglt) (BgL_valz00_1622);
																				BgL_typecz00_1623 =
																					(((BgL_funz00_bglt)
																						CREF(BgL_auxz00_4180))->
																					BgL_predicatezd2ofzd2);
																			}
																			{	/* Coerce/coerce.scm 277 */
																				BgL_typez00_bglt BgL_typevz00_1624;

																				{	/* Coerce/coerce.scm 278 */
																					obj_t BgL_arg3836z00_1629;

																					{	/* Coerce/coerce.scm 278 */
																						obj_t BgL_pairz00_2700;

																						BgL_pairz00_2700 =
																							(((BgL_appz00_bglt)
																								CREF(BgL_nodez00_1615))->
																							BgL_argsz00);
																						BgL_arg3836z00_1629 =
																							CAR(BgL_pairz00_2700);
																					}
																					BgL_typevz00_1624 =
																						BGl_getzd2typezd2zztype_typeofz00(
																						(BgL_nodez00_bglt)
																						(BgL_arg3836z00_1629));
																				}
																				{	/* Coerce/coerce.scm 278 */

																					if (BGl_iszd2azf3z21zz__objectz00
																						(BgL_typecz00_1623,
																							BGl_typez00zztype_typez00))
																						{	/* Coerce/coerce.scm 280 */
																							if (
																								((obj_t) (BgL_typevz00_1624) ==
																									BGl_za2objza2z00zztype_cachez00))
																								{	/* Coerce/coerce.scm 283 */
																									BgL_casezd2valuezd2_1605 =
																										BFALSE;
																								}
																							else
																								{	/* Coerce/coerce.scm 283 */
																									if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00((BgL_typez00_bglt) (BgL_typecz00_1623), BgL_typevz00_1624))
																										{	/* Coerce/coerce.scm 286 */
																											BgL_casezd2valuezd2_1605 =
																												CNST_TABLE_REF(((long)
																													1));
																										}
																									else
																										{	/* Coerce/coerce.scm 286 */
																											if (BGl_typezd2disjointzf3z21zztype_miscz00((BgL_typez00_bglt) (BgL_typecz00_1623), BgL_typevz00_1624))
																												{	/* Coerce/coerce.scm 288 */
																													BgL_casezd2valuezd2_1605
																														=
																														CNST_TABLE_REF((
																															(long) 2));
																												}
																											else
																												{	/* Coerce/coerce.scm 288 */
																													BgL_casezd2valuezd2_1605
																														= BFALSE;
																												}
																										}
																								}
																						}
																					else
																						{	/* Coerce/coerce.scm 280 */
																							BgL_casezd2valuezd2_1605 = BFALSE;
																						}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Coerce/coerce.scm 274 */
																	BgL_casezd2valuezd2_1605 = BFALSE;
																}
														}
													else
														{	/* Coerce/coerce.scm 273 */
															BgL_casezd2valuezd2_1605 = BFALSE;
														}
												}
											else
												{	/* Coerce/coerce.scm 272 */
													BgL_casezd2valuezd2_1605 = BFALSE;
												}
										}
									}
								else
									{	/* Coerce/coerce.scm 329 */
										bool_t BgL_testz00_4201;

										{	/* Coerce/coerce.scm 329 */
											obj_t BgL_obj3366z00_2735;

											BgL_obj3366z00_2735 = (obj_t) (BgL_nodez00_1679);
											BgL_testz00_4201 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3366z00_2735,
												BGl_letzd2varzd2zzast_nodez00);
										}
										if (BgL_testz00_4201)
											{	/* Coerce/coerce.scm 329 */
												BgL_nodez00_1638 =
													(BgL_letzd2varzd2_bglt) (BgL_nodez00_1679);
												{	/* Coerce/coerce.scm 294 */
													bool_t BgL_testz00_4204;

													{	/* Coerce/coerce.scm 294 */
														obj_t BgL_auxz00_4205;

														BgL_auxz00_4205 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodez00_1638))->BgL_bindingsz00);
														BgL_testz00_4204 = PAIRP(BgL_auxz00_4205);
													}
													if (BgL_testz00_4204)
														{	/* Coerce/coerce.scm 295 */
															bool_t BgL_testz00_4208;

															{	/* Coerce/coerce.scm 295 */
																obj_t BgL_auxz00_4209;

																{	/* Coerce/coerce.scm 295 */
																	obj_t BgL_pairz00_2705;

																	BgL_pairz00_2705 =
																		(((BgL_letzd2varzd2_bglt)
																			CREF(BgL_nodez00_1638))->BgL_bindingsz00);
																	BgL_auxz00_4209 = CDR(BgL_pairz00_2705);
																}
																BgL_testz00_4208 = NULLP(BgL_auxz00_4209);
															}
															if (BgL_testz00_4208)
																{	/* Coerce/coerce.scm 296 */
																	bool_t BgL_testz00_4213;

																	{	/* Coerce/coerce.scm 296 */
																		BgL_nodez00_bglt BgL_arg3867z00_1675;

																		BgL_arg3867z00_1675 =
																			(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodez00_1638))->BgL_bodyz00);
																		{	/* Coerce/coerce.scm 296 */
																			obj_t BgL_obj2538z00_2708;

																			BgL_obj2538z00_2708 =
																				(obj_t) (BgL_arg3867z00_1675);
																			BgL_testz00_4213 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj2538z00_2708,
																				BGl_appz00zzast_nodez00);
																		}
																	}
																	if (BgL_testz00_4213)
																		{	/* Coerce/coerce.scm 297 */
																			BgL_varz00_bglt BgL_funz00_1644;

																			{	/* Coerce/coerce.scm 297 */
																				BgL_appz00_bglt BgL_obj2511z00_2710;

																				BgL_obj2511z00_2710 =
																					(BgL_appz00_bglt) (
																					(((BgL_letzd2varzd2_bglt)
																							CREF(BgL_nodez00_1638))->
																						BgL_bodyz00));
																				BgL_funz00_1644 =
																					(((BgL_appz00_bglt)
																						CREF(BgL_obj2511z00_2710))->
																					BgL_funz00);
																			}
																			{	/* Coerce/coerce.scm 297 */
																				obj_t BgL_varz00_1645;

																				{	/* Coerce/coerce.scm 298 */
																					obj_t BgL_argsz00_1666;

																					{	/* Coerce/coerce.scm 298 */
																						BgL_appz00_bglt BgL_obj2514z00_2712;

																						BgL_obj2514z00_2712 =
																							(BgL_appz00_bglt) (
																							(((BgL_letzd2varzd2_bglt)
																									CREF(BgL_nodez00_1638))->
																								BgL_bodyz00));
																						BgL_argsz00_1666 =
																							(((BgL_appz00_bglt)
																								CREF(BgL_obj2514z00_2712))->
																							BgL_argsz00);
																					}
																					if (PAIRP(BgL_argsz00_1666))
																						{	/* Coerce/coerce.scm 299 */
																							if (NULLP(CDR(BgL_argsz00_1666)))
																								{	/* Coerce/coerce.scm 301 */
																									bool_t BgL_testz00_4228;

																									{	/* Coerce/coerce.scm 301 */
																										obj_t BgL_arg3863z00_1671;

																										BgL_arg3863z00_1671 =
																											CAR(BgL_argsz00_1666);
																										BgL_testz00_4228 =
																											BGl_iszd2azf3z21zz__objectz00
																											(BgL_arg3863z00_1671,
																											BGl_varz00zzast_nodez00);
																									}
																									if (BgL_testz00_4228)
																										{	/* Coerce/coerce.scm 302 */
																											BgL_varz00_bglt
																												BgL_obj2417z00_2719;
																											BgL_obj2417z00_2719 =
																												(BgL_varz00_bglt) (CAR
																												(BgL_argsz00_1666));
																											BgL_varz00_1645 =
																												(obj_t) (((
																														(BgL_varz00_bglt)
																														CREF
																														(BgL_obj2417z00_2719))->
																													BgL_variablez00));
																										}
																									else
																										{	/* Coerce/coerce.scm 301 */
																											BgL_varz00_1645 = BFALSE;
																										}
																								}
																							else
																								{	/* Coerce/coerce.scm 300 */
																									BgL_varz00_1645 = BFALSE;
																								}
																						}
																					else
																						{	/* Coerce/coerce.scm 299 */
																							BgL_varz00_1645 = BFALSE;
																						}
																				}
																				{	/* Coerce/coerce.scm 298 */
																					BgL_valuez00_bglt BgL_valz00_1646;

																					{	/* Coerce/coerce.scm 303 */
																						BgL_variablez00_bglt
																							BgL_obj1873z00_2721;
																						BgL_obj1873z00_2721 =
																							(((BgL_varz00_bglt)
																								CREF(BgL_funz00_1644))->
																							BgL_variablez00);
																						BgL_valz00_1646 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_obj1873z00_2721))->
																							BgL_valuez00);
																					}
																					{	/* Coerce/coerce.scm 303 */
																						obj_t BgL_typecz00_1647;

																						{
																							BgL_funz00_bglt BgL_auxz00_4237;

																							BgL_auxz00_4237 =
																								(BgL_funz00_bglt)
																								(BgL_valz00_1646);
																							BgL_typecz00_1647 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_4237))->
																								BgL_predicatezd2ofzd2);
																						}
																						{	/* Coerce/coerce.scm 304 */
																							BgL_typez00_bglt
																								BgL_typepz00_1648;
																							{	/* Coerce/coerce.scm 305 */
																								BgL_variablez00_bglt
																									BgL_obj1870z00_2726;
																								{	/* Coerce/coerce.scm 305 */
																									obj_t BgL_auxz00_4240;

																									{	/* Coerce/coerce.scm 305 */
																										obj_t BgL_pairz00_2725;

																										{	/* Coerce/coerce.scm 305 */
																											obj_t BgL_pairz00_2724;

																											BgL_pairz00_2724 =
																												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1638))->BgL_bindingsz00);
																											BgL_pairz00_2725 =
																												CAR(BgL_pairz00_2724);
																										}
																										BgL_auxz00_4240 =
																											CAR(BgL_pairz00_2725);
																									}
																									BgL_obj1870z00_2726 =
																										(BgL_variablez00_bglt)
																										(BgL_auxz00_4240);
																								}
																								BgL_typepz00_1648 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_obj1870z00_2726))->
																									BgL_typez00);
																							}
																							{	/* Coerce/coerce.scm 305 */
																								BgL_typez00_bglt
																									BgL_typevz00_1649;
																								if (((obj_t) (BgL_typepz00_1648)
																										==
																										BGl_za2objza2z00zztype_cachez00))
																									{	/* Coerce/coerce.scm 307 */
																										obj_t BgL_arg3855z00_1659;

																										{	/* Coerce/coerce.scm 307 */
																											obj_t BgL_pairz00_2729;

																											{	/* Coerce/coerce.scm 307 */
																												obj_t BgL_pairz00_2728;

																												BgL_pairz00_2728 =
																													(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1638))->BgL_bindingsz00);
																												BgL_pairz00_2729 =
																													CAR(BgL_pairz00_2728);
																											}
																											BgL_arg3855z00_1659 =
																												CDR(BgL_pairz00_2729);
																										}
																										BgL_typevz00_1649 =
																											BGl_getzd2typezd2zztype_typeofz00
																											((BgL_nodez00_bglt)
																											(BgL_arg3855z00_1659));
																									}
																								else
																									{	/* Coerce/coerce.scm 306 */
																										BgL_typevz00_1649 =
																											BgL_typepz00_1648;
																									}
																								{	/* Coerce/coerce.scm 306 */

																									if (BGl_iszd2azf3z21zz__objectz00(BgL_typecz00_1647, BGl_typez00zztype_typez00))
																										{	/* Coerce/coerce.scm 313 */
																											bool_t BgL_testz00_4256;

																											{	/* Coerce/coerce.scm 313 */
																												obj_t BgL_auxz00_4257;

																												{	/* Coerce/coerce.scm 313 */
																													obj_t
																														BgL_pairz00_2733;
																													{	/* Coerce/coerce.scm 313 */
																														obj_t
																															BgL_pairz00_2732;
																														BgL_pairz00_2732 =
																															(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1638))->BgL_bindingsz00);
																														BgL_pairz00_2733 =
																															CAR
																															(BgL_pairz00_2732);
																													}
																													BgL_auxz00_4257 =
																														CAR
																														(BgL_pairz00_2733);
																												}
																												BgL_testz00_4256 =
																													(BgL_varz00_1645 ==
																													BgL_auxz00_4257);
																											}
																											if (BgL_testz00_4256)
																												{	/* Coerce/coerce.scm 313 */
																													if (
																														((obj_t)
																															(BgL_typevz00_1649)
																															==
																															BGl_za2objza2z00zztype_cachez00))
																														{	/* Coerce/coerce.scm 316 */
																															BgL_casezd2valuezd2_1605
																																= BFALSE;
																														}
																													else
																														{	/* Coerce/coerce.scm 316 */
																															if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00((BgL_typez00_bglt) (BgL_typecz00_1647), BgL_typevz00_1649))
																																{	/* Coerce/coerce.scm 319 */
																																	BgL_casezd2valuezd2_1605
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			1));
																																}
																															else
																																{	/* Coerce/coerce.scm 319 */
																																	if (BGl_typezd2disjointzf3z21zztype_miscz00((BgL_typez00_bglt) (BgL_typecz00_1647), BgL_typevz00_1649))
																																		{	/* Coerce/coerce.scm 321 */
																																			BgL_casezd2valuezd2_1605
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					2));
																																		}
																																	else
																																		{	/* Coerce/coerce.scm 321 */
																																			BgL_casezd2valuezd2_1605
																																				=
																																				BFALSE;
																																		}
																																}
																														}
																												}
																											else
																												{	/* Coerce/coerce.scm 313 */
																													BgL_casezd2valuezd2_1605
																														= BFALSE;
																												}
																										}
																									else
																										{	/* Coerce/coerce.scm 310 */
																											BgL_casezd2valuezd2_1605 =
																												BFALSE;
																										}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	else
																		{	/* Coerce/coerce.scm 296 */
																			BgL_casezd2valuezd2_1605 = BFALSE;
																		}
																}
															else
																{	/* Coerce/coerce.scm 295 */
																	BgL_casezd2valuezd2_1605 = BFALSE;
																}
														}
													else
														{	/* Coerce/coerce.scm 294 */
															BgL_casezd2valuezd2_1605 = BFALSE;
														}
												}
											}
										else
											{	/* Coerce/coerce.scm 329 */
												BgL_casezd2valuezd2_1605 = BFALSE;
											}
									}
							}
						}
						if ((BgL_casezd2valuezd2_1605 == CNST_TABLE_REF(((long) 1))))
							{	/* Coerce/coerce.scm 337 */
								BgL_nodez00_bglt BgL_arg3823z00_1607;

								BgL_arg3823z00_1607 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
									BgL_truez00);
								{	/* Coerce/coerce.scm 337 */
									BgL_nodez00_bglt BgL_res3997z00_2586;

									{	/* Coerce/coerce.scm 337 */
										BgL_typez00_bglt BgL_toz00_2559;

										bool_t BgL_safez00_2560;

										BgL_toz00_2559 = (BgL_typez00_bglt) (BgL_toz00_1595);
										BgL_safez00_2560 = CBOOL(BgL_safez00_1596);
										{	/* Coerce/coerce.scm 337 */
											obj_t BgL_method3588z00_2561;

											{	/* Coerce/coerce.scm 337 */
												BgL_objectz00_bglt BgL_objz00_2562;

												BgL_objz00_2562 =
													(BgL_objectz00_bglt) (BgL_arg3823z00_1607);
												{	/* Coerce/coerce.scm 337 */
													long BgL_objzd2classzd2numz00_2563;

													BgL_objzd2classzd2numz00_2563 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2562);
													{	/* Coerce/coerce.scm 337 */
														obj_t BgL_arg2643z00_2564;

														BgL_arg2643z00_2564 =
															PROCEDURE_REF
															(BGl_coercez12zd2envzc0zzcoerce_coercez00,
															(int) (((long) 1)));
														{	/* Coerce/coerce.scm 337 */
															obj_t BgL_arrayz00_2566;

															int BgL_offsetz00_2567;

															BgL_arrayz00_2566 = BgL_arg2643z00_2564;
															BgL_offsetz00_2567 =
																(int) (BgL_objzd2classzd2numz00_2563);
															{	/* Coerce/coerce.scm 337 */
																long BgL_offsetz00_2568;

																BgL_offsetz00_2568 =
																	((long) (BgL_offsetz00_2567) - OBJECT_TYPE);
																{	/* Coerce/coerce.scm 337 */
																	long BgL_modz00_2569;

																	{	/* Coerce/coerce.scm 337 */
																		int BgL_arg2645z00_2570;

																		BgL_arg2645z00_2570 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 337 */
																			long BgL_auxz00_4288;

																			BgL_auxz00_4288 =
																				(long) (BgL_arg2645z00_2570);
																			BgL_modz00_2569 =
																				(BgL_offsetz00_2568 / BgL_auxz00_4288);
																	}}
																	{	/* Coerce/coerce.scm 337 */
																		long BgL_restz00_2571;

																		{	/* Coerce/coerce.scm 337 */
																			int BgL_arg2644z00_2572;

																			BgL_arg2644z00_2572 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 337 */
																				long BgL_auxz00_4292;

																				BgL_auxz00_4292 =
																					(long) (BgL_arg2644z00_2572);
																				BgL_restz00_2571 =
																					(BgL_offsetz00_2568 %
																					BgL_auxz00_4292);
																		}}
																		{	/* Coerce/coerce.scm 337 */

																			BgL_method3588z00_2561 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2566,
																					(int) (BgL_modz00_2569)),
																				(int) (BgL_restz00_2571));
											}}}}}}}}
											BgL_res3997z00_2586 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3588z00_2561) (BgL_method3588z00_2561,
													(obj_t) (BgL_arg3823z00_1607), BgL_callerz00_1594,
													(obj_t) (BgL_toz00_2559), BBOOL(BgL_safez00_2560),
													BEOA));
									}}
									return (obj_t) (BgL_res3997z00_2586);
								}
							}
						else
							{	/* Coerce/coerce.scm 335 */
								if ((BgL_casezd2valuezd2_1605 == CNST_TABLE_REF(((long) 2))))
									{	/* Coerce/coerce.scm 339 */
										BgL_nodez00_bglt BgL_arg3825z00_1609;

										BgL_arg3825z00_1609 =
											(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
											BgL_falsez00);
										{	/* Coerce/coerce.scm 339 */
											BgL_nodez00_bglt BgL_res4000z00_2619;

											{	/* Coerce/coerce.scm 339 */
												BgL_typez00_bglt BgL_toz00_2592;

												bool_t BgL_safez00_2593;

												BgL_toz00_2592 = (BgL_typez00_bglt) (BgL_toz00_1595);
												BgL_safez00_2593 = CBOOL(BgL_safez00_1596);
												{	/* Coerce/coerce.scm 339 */
													obj_t BgL_method3588z00_2594;

													{	/* Coerce/coerce.scm 339 */
														BgL_objectz00_bglt BgL_objz00_2595;

														BgL_objz00_2595 =
															(BgL_objectz00_bglt) (BgL_arg3825z00_1609);
														{	/* Coerce/coerce.scm 339 */
															long BgL_objzd2classzd2numz00_2596;

															BgL_objzd2classzd2numz00_2596 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2595);
															{	/* Coerce/coerce.scm 339 */
																obj_t BgL_arg2643z00_2597;

																BgL_arg2643z00_2597 =
																	PROCEDURE_REF
																	(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																	(int) (((long) 1)));
																{	/* Coerce/coerce.scm 339 */
																	obj_t BgL_arrayz00_2599;

																	int BgL_offsetz00_2600;

																	BgL_arrayz00_2599 = BgL_arg2643z00_2597;
																	BgL_offsetz00_2600 =
																		(int) (BgL_objzd2classzd2numz00_2596);
																	{	/* Coerce/coerce.scm 339 */
																		long BgL_offsetz00_2601;

																		BgL_offsetz00_2601 =
																			(
																			(long) (BgL_offsetz00_2600) -
																			OBJECT_TYPE);
																		{	/* Coerce/coerce.scm 339 */
																			long BgL_modz00_2602;

																			{	/* Coerce/coerce.scm 339 */
																				int BgL_arg2645z00_2603;

																				BgL_arg2645z00_2603 =
																					(int) (((long) 16));
																				{	/* Coerce/coerce.scm 339 */
																					long BgL_auxz00_4320;

																					BgL_auxz00_4320 =
																						(long) (BgL_arg2645z00_2603);
																					BgL_modz00_2602 =
																						(BgL_offsetz00_2601 /
																						BgL_auxz00_4320);
																			}}
																			{	/* Coerce/coerce.scm 339 */
																				long BgL_restz00_2604;

																				{	/* Coerce/coerce.scm 339 */
																					int BgL_arg2644z00_2605;

																					BgL_arg2644z00_2605 =
																						(int) (((long) 16));
																					{	/* Coerce/coerce.scm 339 */
																						long BgL_auxz00_4324;

																						BgL_auxz00_4324 =
																							(long) (BgL_arg2644z00_2605);
																						BgL_restz00_2604 =
																							(BgL_offsetz00_2601 %
																							BgL_auxz00_4324);
																				}}
																				{	/* Coerce/coerce.scm 339 */

																					BgL_method3588z00_2594 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2599,
																							(int) (BgL_modz00_2602)),
																						(int) (BgL_restz00_2604));
													}}}}}}}}
													BgL_res4000z00_2619 =
														(BgL_nodez00_bglt) (PROCEDURE_ENTRY
														(BgL_method3588z00_2594) (BgL_method3588z00_2594,
															(obj_t) (BgL_arg3825z00_1609), BgL_callerz00_1594,
															(obj_t) (BgL_toz00_2592), BBOOL(BgL_safez00_2593),
															BEOA));
											}}
											return (obj_t) (BgL_res4000z00_2619);
										}
									}
								else
									{	/* Coerce/coerce.scm 335 */
										{	/* Coerce/coerce.scm 341 */
											BgL_nodez00_bglt BgL_arg3826z00_1610;

											{	/* Coerce/coerce.scm 341 */
												BgL_nodez00_bglt BgL_arg3827z00_1611;

												BgL_arg3827z00_1611 =
													(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
													BgL_truez00);
												{	/* Coerce/coerce.scm 341 */
													BgL_nodez00_bglt BgL_res4003z00_2650;

													{	/* Coerce/coerce.scm 341 */
														BgL_typez00_bglt BgL_toz00_2623;

														bool_t BgL_safez00_2624;

														BgL_toz00_2623 =
															(BgL_typez00_bglt) (BgL_toz00_1595);
														BgL_safez00_2624 = CBOOL(BgL_safez00_1596);
														{	/* Coerce/coerce.scm 341 */
															obj_t BgL_method3588z00_2625;

															{	/* Coerce/coerce.scm 341 */
																BgL_objectz00_bglt BgL_objz00_2626;

																BgL_objz00_2626 =
																	(BgL_objectz00_bglt) (BgL_arg3827z00_1611);
																{	/* Coerce/coerce.scm 341 */
																	long BgL_objzd2classzd2numz00_2627;

																	BgL_objzd2classzd2numz00_2627 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2626);
																	{	/* Coerce/coerce.scm 341 */
																		obj_t BgL_arg2643z00_2628;

																		BgL_arg2643z00_2628 =
																			PROCEDURE_REF
																			(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																			(int) (((long) 1)));
																		{	/* Coerce/coerce.scm 341 */
																			obj_t BgL_arrayz00_2630;

																			int BgL_offsetz00_2631;

																			BgL_arrayz00_2630 = BgL_arg2643z00_2628;
																			BgL_offsetz00_2631 =
																				(int) (BgL_objzd2classzd2numz00_2627);
																			{	/* Coerce/coerce.scm 341 */
																				long BgL_offsetz00_2632;

																				BgL_offsetz00_2632 =
																					(
																					(long) (BgL_offsetz00_2631) -
																					OBJECT_TYPE);
																				{	/* Coerce/coerce.scm 341 */
																					long BgL_modz00_2633;

																					{	/* Coerce/coerce.scm 341 */
																						int BgL_arg2645z00_2634;

																						BgL_arg2645z00_2634 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 341 */
																							long BgL_auxz00_4349;

																							BgL_auxz00_4349 =
																								(long) (BgL_arg2645z00_2634);
																							BgL_modz00_2633 =
																								(BgL_offsetz00_2632 /
																								BgL_auxz00_4349);
																					}}
																					{	/* Coerce/coerce.scm 341 */
																						long BgL_restz00_2635;

																						{	/* Coerce/coerce.scm 341 */
																							int BgL_arg2644z00_2636;

																							BgL_arg2644z00_2636 =
																								(int) (((long) 16));
																							{	/* Coerce/coerce.scm 341 */
																								long BgL_auxz00_4353;

																								BgL_auxz00_4353 =
																									(long) (BgL_arg2644z00_2636);
																								BgL_restz00_2635 =
																									(BgL_offsetz00_2632 %
																									BgL_auxz00_4353);
																						}}
																						{	/* Coerce/coerce.scm 341 */

																							BgL_method3588z00_2625 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2630,
																									(int) (BgL_modz00_2633)),
																								(int) (BgL_restz00_2635));
															}}}}}}}}
															BgL_res4003z00_2650 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3588z00_2625)
																(BgL_method3588z00_2625,
																	(obj_t) (BgL_arg3827z00_1611),
																	BgL_callerz00_1594, (obj_t) (BgL_toz00_2623),
																	BBOOL(BgL_safez00_2624), BEOA));
													}}
													BgL_arg3826z00_1610 = BgL_res4003z00_2650;
											}}
											((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
													BgL_truez00) =
												((BgL_nodez00_bglt) BgL_arg3826z00_1610), BUNSPEC);
										}
										{	/* Coerce/coerce.scm 342 */
											BgL_nodez00_bglt BgL_arg3828z00_1612;

											{	/* Coerce/coerce.scm 342 */
												BgL_nodez00_bglt BgL_arg3829z00_1613;

												BgL_arg3829z00_1613 =
													(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
													BgL_falsez00);
												{	/* Coerce/coerce.scm 342 */
													BgL_nodez00_bglt BgL_res4006z00_2683;

													{	/* Coerce/coerce.scm 342 */
														BgL_typez00_bglt BgL_toz00_2656;

														bool_t BgL_safez00_2657;

														BgL_toz00_2656 =
															(BgL_typez00_bglt) (BgL_toz00_1595);
														BgL_safez00_2657 = CBOOL(BgL_safez00_1596);
														{	/* Coerce/coerce.scm 342 */
															obj_t BgL_method3588z00_2658;

															{	/* Coerce/coerce.scm 342 */
																BgL_objectz00_bglt BgL_objz00_2659;

																BgL_objz00_2659 =
																	(BgL_objectz00_bglt) (BgL_arg3829z00_1613);
																{	/* Coerce/coerce.scm 342 */
																	long BgL_objzd2classzd2numz00_2660;

																	BgL_objzd2classzd2numz00_2660 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2659);
																	{	/* Coerce/coerce.scm 342 */
																		obj_t BgL_arg2643z00_2661;

																		BgL_arg2643z00_2661 =
																			PROCEDURE_REF
																			(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																			(int) (((long) 1)));
																		{	/* Coerce/coerce.scm 342 */
																			obj_t BgL_arrayz00_2663;

																			int BgL_offsetz00_2664;

																			BgL_arrayz00_2663 = BgL_arg2643z00_2661;
																			BgL_offsetz00_2664 =
																				(int) (BgL_objzd2classzd2numz00_2660);
																			{	/* Coerce/coerce.scm 342 */
																				long BgL_offsetz00_2665;

																				BgL_offsetz00_2665 =
																					(
																					(long) (BgL_offsetz00_2664) -
																					OBJECT_TYPE);
																				{	/* Coerce/coerce.scm 342 */
																					long BgL_modz00_2666;

																					{	/* Coerce/coerce.scm 342 */
																						int BgL_arg2645z00_2667;

																						BgL_arg2645z00_2667 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 342 */
																							long BgL_auxz00_4378;

																							BgL_auxz00_4378 =
																								(long) (BgL_arg2645z00_2667);
																							BgL_modz00_2666 =
																								(BgL_offsetz00_2665 /
																								BgL_auxz00_4378);
																					}}
																					{	/* Coerce/coerce.scm 342 */
																						long BgL_restz00_2668;

																						{	/* Coerce/coerce.scm 342 */
																							int BgL_arg2644z00_2669;

																							BgL_arg2644z00_2669 =
																								(int) (((long) 16));
																							{	/* Coerce/coerce.scm 342 */
																								long BgL_auxz00_4382;

																								BgL_auxz00_4382 =
																									(long) (BgL_arg2644z00_2669);
																								BgL_restz00_2668 =
																									(BgL_offsetz00_2665 %
																									BgL_auxz00_4382);
																						}}
																						{	/* Coerce/coerce.scm 342 */

																							BgL_method3588z00_2658 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2663,
																									(int) (BgL_modz00_2666)),
																								(int) (BgL_restz00_2668));
															}}}}}}}}
															BgL_res4006z00_2683 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3588z00_2658)
																(BgL_method3588z00_2658,
																	(obj_t) (BgL_arg3829z00_1613),
																	BgL_callerz00_1594, (obj_t) (BgL_toz00_2656),
																	BBOOL(BgL_safez00_2657), BEOA));
													}}
													BgL_arg3828z00_1612 = BgL_res4006z00_2683;
											}}
											((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1593))->
													BgL_falsez00) =
												((BgL_nodez00_bglt) BgL_arg3828z00_1612), BUNSPEC);
										}
										{
											BgL_typez00_bglt BgL_auxz00_4398;

											BgL_nodez00_bglt BgL_auxz00_4396;

											BgL_auxz00_4398 = (BgL_typez00_bglt) (BgL_toz00_1595);
											BgL_auxz00_4396 = (BgL_nodez00_bglt) (BgL_nodez00_1593);
											((((BgL_nodez00_bglt) CREF(BgL_auxz00_4396))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_4398), BUNSPEC);
										}
										return (obj_t) (BgL_nodez00_1593);
									}
							}
					}
				}
			}
		}
	}



/* coerce!-setq3621 */
	obj_t BGl_coercez12zd2setq3621zc0zzcoerce_coercez00(obj_t BgL_envz00_3347,
		obj_t BgL_nodez00_3348, obj_t BgL_callerz00_3349, obj_t BgL_toz00_3350,
		obj_t BgL_safez00_3351)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 245 */
			{
				BgL_setqz00_bglt BgL_nodez00_1579;

				obj_t BgL_callerz00_1580;

				obj_t BgL_toz00_1581;

				obj_t BgL_safez00_1582;

				{	/* Coerce/coerce.scm 246 */
					BgL_nodez00_bglt BgL_auxz00_4403;

					BgL_nodez00_1579 = (BgL_setqz00_bglt) (BgL_nodez00_3348);
					BgL_callerz00_1580 = BgL_callerz00_3349;
					BgL_toz00_1581 = BgL_toz00_3350;
					BgL_safez00_1582 = BgL_safez00_3351;
					{	/* Coerce/coerce.scm 247 */
						BgL_nodez00_bglt BgL_arg3814z00_1586;

						{	/* Coerce/coerce.scm 247 */
							BgL_nodez00_bglt BgL_arg3815z00_1587;

							BgL_typez00_bglt BgL_arg3816z00_1588;

							BgL_arg3815z00_1587 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1579))->BgL_valuez00);
							{	/* Coerce/coerce.scm 249 */
								BgL_variablez00_bglt BgL_arg3817z00_1589;

								{	/* Coerce/coerce.scm 249 */
									BgL_varz00_bglt BgL_obj2417z00_2486;

									BgL_obj2417z00_2486 =
										(((BgL_setqz00_bglt) CREF(BgL_nodez00_1579))->BgL_varz00);
									BgL_arg3817z00_1589 =
										(((BgL_varz00_bglt) CREF(BgL_obj2417z00_2486))->
										BgL_variablez00);
								}
								BgL_arg3816z00_1588 =
									(((BgL_variablez00_bglt) CREF(BgL_arg3817z00_1589))->
									BgL_typez00);
							}
							{	/* Coerce/coerce.scm 247 */
								BgL_nodez00_bglt BgL_res3991z00_2517;

								{	/* Coerce/coerce.scm 247 */
									bool_t BgL_safez00_2491;

									BgL_safez00_2491 = CBOOL(BgL_safez00_1582);
									{	/* Coerce/coerce.scm 247 */
										obj_t BgL_method3588z00_2492;

										{	/* Coerce/coerce.scm 247 */
											BgL_objectz00_bglt BgL_objz00_2493;

											BgL_objz00_2493 =
												(BgL_objectz00_bglt) (BgL_arg3815z00_1587);
											{	/* Coerce/coerce.scm 247 */
												long BgL_objzd2classzd2numz00_2494;

												BgL_objzd2classzd2numz00_2494 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2493);
												{	/* Coerce/coerce.scm 247 */
													obj_t BgL_arg2643z00_2495;

													BgL_arg2643z00_2495 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 247 */
														obj_t BgL_arrayz00_2497;

														int BgL_offsetz00_2498;

														BgL_arrayz00_2497 = BgL_arg2643z00_2495;
														BgL_offsetz00_2498 =
															(int) (BgL_objzd2classzd2numz00_2494);
														{	/* Coerce/coerce.scm 247 */
															long BgL_offsetz00_2499;

															BgL_offsetz00_2499 =
																((long) (BgL_offsetz00_2498) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 247 */
																long BgL_modz00_2500;

																{	/* Coerce/coerce.scm 247 */
																	int BgL_arg2645z00_2501;

																	BgL_arg2645z00_2501 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 247 */
																		long BgL_auxz00_4417;

																		BgL_auxz00_4417 =
																			(long) (BgL_arg2645z00_2501);
																		BgL_modz00_2500 =
																			(BgL_offsetz00_2499 / BgL_auxz00_4417);
																}}
																{	/* Coerce/coerce.scm 247 */
																	long BgL_restz00_2502;

																	{	/* Coerce/coerce.scm 247 */
																		int BgL_arg2644z00_2503;

																		BgL_arg2644z00_2503 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 247 */
																			long BgL_auxz00_4421;

																			BgL_auxz00_4421 =
																				(long) (BgL_arg2644z00_2503);
																			BgL_restz00_2502 =
																				(BgL_offsetz00_2499 % BgL_auxz00_4421);
																	}}
																	{	/* Coerce/coerce.scm 247 */

																		BgL_method3588z00_2492 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2497,
																				(int) (BgL_modz00_2500)),
																			(int) (BgL_restz00_2502));
										}}}}}}}}
										BgL_res3991z00_2517 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2492) (BgL_method3588z00_2492,
												(obj_t) (BgL_arg3815z00_1587), BgL_callerz00_1580,
												(obj_t) (BgL_arg3816z00_1588), BBOOL(BgL_safez00_2491),
												BEOA));
								}}
								BgL_arg3814z00_1586 = BgL_res3991z00_2517;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1579))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3814z00_1586), BUNSPEC);
					}
					BgL_auxz00_4403 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1579),
						(BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00),
						(BgL_typez00_bglt) (BgL_toz00_1581), CBOOL(BgL_safez00_1582));
					return (obj_t) (BgL_auxz00_4403);
				}
			}
		}
	}



/* coerce!-cast3618 */
	obj_t BGl_coercez12zd2cast3618zc0zzcoerce_coercez00(obj_t BgL_envz00_3352,
		obj_t BgL_nodez00_3353, obj_t BgL_callerz00_3354, obj_t BgL_toz00_3355,
		obj_t BgL_safez00_3356)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 235 */
			{
				BgL_castz00_bglt BgL_nodez00_1567;

				obj_t BgL_callerz00_1568;

				obj_t BgL_toz00_1569;

				obj_t BgL_safez00_1570;

				{	/* Coerce/coerce.scm 236 */
					BgL_nodez00_bglt BgL_auxz00_4442;

					BgL_nodez00_1567 = (BgL_castz00_bglt) (BgL_nodez00_3353);
					BgL_callerz00_1568 = BgL_callerz00_3354;
					BgL_toz00_1569 = BgL_toz00_3355;
					BgL_safez00_1570 = BgL_safez00_3356;
					{	/* Coerce/coerce.scm 236 */
						BgL_nodez00_bglt BgL_arg3810z00_2447;

						{	/* Coerce/coerce.scm 236 */
							BgL_nodez00_bglt BgL_arg3811z00_2448;

							BgL_arg3811z00_2448 =
								(((BgL_castz00_bglt) CREF(BgL_nodez00_1567))->BgL_argz00);
							{	/* Coerce/coerce.scm 236 */
								BgL_nodez00_bglt BgL_res3988z00_2480;

								{	/* Coerce/coerce.scm 236 */
									BgL_typez00_bglt BgL_toz00_2453;

									bool_t BgL_safez00_2454;

									BgL_toz00_2453 = (BgL_typez00_bglt) (BgL_toz00_1569);
									BgL_safez00_2454 = CBOOL(BgL_safez00_1570);
									{	/* Coerce/coerce.scm 236 */
										obj_t BgL_method3588z00_2455;

										{	/* Coerce/coerce.scm 236 */
											BgL_objectz00_bglt BgL_objz00_2456;

											BgL_objz00_2456 =
												(BgL_objectz00_bglt) (BgL_arg3811z00_2448);
											{	/* Coerce/coerce.scm 236 */
												long BgL_objzd2classzd2numz00_2457;

												BgL_objzd2classzd2numz00_2457 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2456);
												{	/* Coerce/coerce.scm 236 */
													obj_t BgL_arg2643z00_2458;

													BgL_arg2643z00_2458 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 236 */
														obj_t BgL_arrayz00_2460;

														int BgL_offsetz00_2461;

														BgL_arrayz00_2460 = BgL_arg2643z00_2458;
														BgL_offsetz00_2461 =
															(int) (BgL_objzd2classzd2numz00_2457);
														{	/* Coerce/coerce.scm 236 */
															long BgL_offsetz00_2462;

															BgL_offsetz00_2462 =
																((long) (BgL_offsetz00_2461) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 236 */
																long BgL_modz00_2463;

																{	/* Coerce/coerce.scm 236 */
																	int BgL_arg2645z00_2464;

																	BgL_arg2645z00_2464 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 236 */
																		long BgL_auxz00_4454;

																		BgL_auxz00_4454 =
																			(long) (BgL_arg2645z00_2464);
																		BgL_modz00_2463 =
																			(BgL_offsetz00_2462 / BgL_auxz00_4454);
																}}
																{	/* Coerce/coerce.scm 236 */
																	long BgL_restz00_2465;

																	{	/* Coerce/coerce.scm 236 */
																		int BgL_arg2644z00_2466;

																		BgL_arg2644z00_2466 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 236 */
																			long BgL_auxz00_4458;

																			BgL_auxz00_4458 =
																				(long) (BgL_arg2644z00_2466);
																			BgL_restz00_2465 =
																				(BgL_offsetz00_2462 % BgL_auxz00_4458);
																	}}
																	{	/* Coerce/coerce.scm 236 */

																		BgL_method3588z00_2455 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2460,
																				(int) (BgL_modz00_2463)),
																			(int) (BgL_restz00_2465));
										}}}}}}}}
										BgL_res3988z00_2480 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2455) (BgL_method3588z00_2455,
												(obj_t) (BgL_arg3811z00_2448), BgL_callerz00_1568,
												(obj_t) (BgL_toz00_2453), BBOOL(BgL_safez00_2454),
												BEOA));
								}}
								BgL_arg3810z00_2447 = BgL_res3988z00_2480;
						}}
						((((BgL_castz00_bglt) CREF(BgL_nodez00_1567))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3810z00_2447), BUNSPEC);
					}
					{	/* Coerce/coerce.scm 236 */
						BgL_typez00_bglt BgL_arg3812z00_2449;

						{
							BgL_nodez00_bglt BgL_auxz00_4472;

							BgL_auxz00_4472 = (BgL_nodez00_bglt) (BgL_nodez00_1567);
							BgL_arg3812z00_2449 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_4472))->BgL_typez00);
						}
						BgL_auxz00_4442 =
							BGl_convertz12z12zzcoerce_convertz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1567), BgL_arg3812z00_2449,
							(BgL_typez00_bglt) (BgL_toz00_1569), CBOOL(BgL_safez00_1570));
					}
					return (obj_t) (BgL_auxz00_4442);
				}
			}
		}
	}



/* coerce!-vlength3615 */
	obj_t BGl_coercez12zd2vlength3615zc0zzcoerce_coercez00(obj_t BgL_envz00_3357,
		obj_t BgL_nodez00_3358, obj_t BgL_callerz00_3359, obj_t BgL_toz00_3360,
		obj_t BgL_safez00_3361)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 227 */
			{
				BgL_vlengthz00_bglt BgL_nodez00_1552;

				obj_t BgL_callerz00_1553;

				obj_t BgL_toz00_1554;

				obj_t BgL_safez00_1555;

				{	/* Coerce/coerce.scm 228 */
					BgL_nodez00_bglt BgL_auxz00_4481;

					BgL_nodez00_1552 = (BgL_vlengthz00_bglt) (BgL_nodez00_3358);
					BgL_callerz00_1553 = BgL_callerz00_3359;
					BgL_toz00_1554 = BgL_toz00_3360;
					BgL_safez00_1555 = BgL_safez00_3361;
					{	/* Coerce/coerce.scm 229 */
						obj_t BgL_arg3803z00_1559;

						BgL_nodez00_bglt BgL_arg3804z00_1560;

						{
							BgL_externz00_bglt BgL_auxz00_4482;

							BgL_auxz00_4482 = (BgL_externz00_bglt) (BgL_nodez00_1552);
							BgL_arg3803z00_1559 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4482))->BgL_exprza2za2);
						}
						{	/* Coerce/coerce.scm 229 */
							obj_t BgL_arg3805z00_1561;

							BgL_typez00_bglt BgL_arg3806z00_1562;

							{	/* Coerce/coerce.scm 229 */
								obj_t BgL_pairz00_2411;

								{
									BgL_externz00_bglt BgL_auxz00_4485;

									BgL_auxz00_4485 = (BgL_externz00_bglt) (BgL_nodez00_1552);
									BgL_pairz00_2411 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4485))->
										BgL_exprza2za2);
								}
								BgL_arg3805z00_1561 = CAR(BgL_pairz00_2411);
							}
							BgL_arg3806z00_1562 =
								(((BgL_vlengthz00_bglt) CREF(BgL_nodez00_1552))->BgL_vtypez00);
							{	/* Coerce/coerce.scm 229 */
								BgL_nodez00_bglt BgL_res3985z00_2442;

								{	/* Coerce/coerce.scm 229 */
									BgL_nodez00_bglt BgL_nodez00_2413;

									bool_t BgL_safez00_2416;

									BgL_nodez00_2413 = (BgL_nodez00_bglt) (BgL_arg3805z00_1561);
									BgL_safez00_2416 = CBOOL(BgL_safez00_1555);
									{	/* Coerce/coerce.scm 229 */
										obj_t BgL_method3588z00_2417;

										{	/* Coerce/coerce.scm 229 */
											BgL_objectz00_bglt BgL_objz00_2418;

											BgL_objz00_2418 = (BgL_objectz00_bglt) (BgL_nodez00_2413);
											{	/* Coerce/coerce.scm 229 */
												long BgL_objzd2classzd2numz00_2419;

												BgL_objzd2classzd2numz00_2419 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2418);
												{	/* Coerce/coerce.scm 229 */
													obj_t BgL_arg2643z00_2420;

													BgL_arg2643z00_2420 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 229 */
														obj_t BgL_arrayz00_2422;

														int BgL_offsetz00_2423;

														BgL_arrayz00_2422 = BgL_arg2643z00_2420;
														BgL_offsetz00_2423 =
															(int) (BgL_objzd2classzd2numz00_2419);
														{	/* Coerce/coerce.scm 229 */
															long BgL_offsetz00_2424;

															BgL_offsetz00_2424 =
																((long) (BgL_offsetz00_2423) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 229 */
																long BgL_modz00_2425;

																{	/* Coerce/coerce.scm 229 */
																	int BgL_arg2645z00_2426;

																	BgL_arg2645z00_2426 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 229 */
																		long BgL_auxz00_4500;

																		BgL_auxz00_4500 =
																			(long) (BgL_arg2645z00_2426);
																		BgL_modz00_2425 =
																			(BgL_offsetz00_2424 / BgL_auxz00_4500);
																}}
																{	/* Coerce/coerce.scm 229 */
																	long BgL_restz00_2427;

																	{	/* Coerce/coerce.scm 229 */
																		int BgL_arg2644z00_2428;

																		BgL_arg2644z00_2428 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 229 */
																			long BgL_auxz00_4504;

																			BgL_auxz00_4504 =
																				(long) (BgL_arg2644z00_2428);
																			BgL_restz00_2427 =
																				(BgL_offsetz00_2424 % BgL_auxz00_4504);
																	}}
																	{	/* Coerce/coerce.scm 229 */

																		BgL_method3588z00_2417 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2422,
																				(int) (BgL_modz00_2425)),
																			(int) (BgL_restz00_2427));
										}}}}}}}}
										BgL_res3985z00_2442 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2417) (BgL_method3588z00_2417,
												(obj_t) (BgL_nodez00_2413), BgL_callerz00_1553,
												(obj_t) (BgL_arg3806z00_1562), BBOOL(BgL_safez00_2416),
												BEOA));
								}}
								BgL_arg3804z00_1560 = BgL_res3985z00_2442;
						}}
						{	/* Coerce/coerce.scm 229 */
							obj_t BgL_auxz00_4517;

							BgL_auxz00_4517 = (obj_t) (BgL_arg3804z00_1560);
							SET_CAR(BgL_arg3803z00_1559, BgL_auxz00_4517);
					}}
					{	/* Coerce/coerce.scm 230 */
						BgL_typez00_bglt BgL_arg3808z00_1564;

						{
							BgL_nodez00_bglt BgL_auxz00_4520;

							BgL_auxz00_4520 = (BgL_nodez00_bglt) (BgL_nodez00_1552);
							BgL_arg3808z00_1564 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_4520))->BgL_typez00);
						}
						BgL_auxz00_4481 =
							BGl_convertz12z12zzcoerce_convertz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1552), BgL_arg3808z00_1564,
							(BgL_typez00_bglt) (BgL_toz00_1554), CBOOL(BgL_safez00_1555));
					}
					return (obj_t) (BgL_auxz00_4481);
				}
			}
		}
	}



/* coerce!-vset!3613 */
	obj_t BGl_coercez12zd2vsetz123613zd2zzcoerce_coercez00(obj_t BgL_envz00_3362,
		obj_t BgL_nodez00_3363, obj_t BgL_callerz00_3364, obj_t BgL_toz00_3365,
		obj_t BgL_safez00_3366)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 215 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1523;

				obj_t BgL_callerz00_1524;

				obj_t BgL_toz00_1525;

				obj_t BgL_safez00_1526;

				{	/* Coerce/coerce.scm 216 */
					BgL_nodez00_bglt BgL_auxz00_4529;

					BgL_nodez00_1523 = (BgL_vsetz12z12_bglt) (BgL_nodez00_3363);
					BgL_callerz00_1524 = BgL_callerz00_3364;
					BgL_toz00_1525 = BgL_toz00_3365;
					BgL_safez00_1526 = BgL_safez00_3366;
					{	/* Coerce/coerce.scm 218 */
						obj_t BgL_ftypez00_1530;

						{	/* Coerce/coerce.scm 218 */
							bool_t BgL_testz00_4530;

							{	/* Coerce/coerce.scm 218 */
								BgL_typez00_bglt BgL_arg3800z00_1549;

								BgL_arg3800z00_1549 =
									(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1523))->
									BgL_ftypez00);
								BgL_testz00_4530 =
									((obj_t) (BgL_arg3800z00_1549) ==
									BGl_za2_za2z00zztype_cachez00);
							}
							if (BgL_testz00_4530)
								{	/* Coerce/coerce.scm 218 */
									BgL_ftypez00_1530 = BGl_za2objza2z00zztype_cachez00;
								}
							else
								{	/* Coerce/coerce.scm 218 */
									BgL_ftypez00_1530 =
										(obj_t) (
										(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1523))->
											BgL_ftypez00));
								}
						}
						{	/* Coerce/coerce.scm 219 */
							obj_t BgL_arg3782z00_1531;

							BgL_nodez00_bglt BgL_arg3783z00_1532;

							{
								BgL_externz00_bglt BgL_auxz00_4536;

								BgL_auxz00_4536 = (BgL_externz00_bglt) (BgL_nodez00_1523);
								BgL_arg3782z00_1531 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4536))->
									BgL_exprza2za2);
							}
							{	/* Coerce/coerce.scm 219 */
								obj_t BgL_arg3784z00_1533;

								BgL_typez00_bglt BgL_arg3785z00_1534;

								{	/* Coerce/coerce.scm 219 */
									obj_t BgL_pairz00_2290;

									{
										BgL_externz00_bglt BgL_auxz00_4539;

										BgL_auxz00_4539 = (BgL_externz00_bglt) (BgL_nodez00_1523);
										BgL_pairz00_2290 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_4539))->
											BgL_exprza2za2);
									}
									BgL_arg3784z00_1533 = CAR(BgL_pairz00_2290);
								}
								BgL_arg3785z00_1534 =
									(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1523))->
									BgL_vtypez00);
								{	/* Coerce/coerce.scm 219 */
									BgL_nodez00_bglt BgL_res3976z00_2321;

									{	/* Coerce/coerce.scm 219 */
										BgL_nodez00_bglt BgL_nodez00_2292;

										bool_t BgL_safez00_2295;

										BgL_nodez00_2292 = (BgL_nodez00_bglt) (BgL_arg3784z00_1533);
										BgL_safez00_2295 = CBOOL(BgL_safez00_1526);
										{	/* Coerce/coerce.scm 219 */
											obj_t BgL_method3588z00_2296;

											{	/* Coerce/coerce.scm 219 */
												BgL_objectz00_bglt BgL_objz00_2297;

												BgL_objz00_2297 =
													(BgL_objectz00_bglt) (BgL_nodez00_2292);
												{	/* Coerce/coerce.scm 219 */
													long BgL_objzd2classzd2numz00_2298;

													BgL_objzd2classzd2numz00_2298 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2297);
													{	/* Coerce/coerce.scm 219 */
														obj_t BgL_arg2643z00_2299;

														BgL_arg2643z00_2299 =
															PROCEDURE_REF
															(BGl_coercez12zd2envzc0zzcoerce_coercez00,
															(int) (((long) 1)));
														{	/* Coerce/coerce.scm 219 */
															obj_t BgL_arrayz00_2301;

															int BgL_offsetz00_2302;

															BgL_arrayz00_2301 = BgL_arg2643z00_2299;
															BgL_offsetz00_2302 =
																(int) (BgL_objzd2classzd2numz00_2298);
															{	/* Coerce/coerce.scm 219 */
																long BgL_offsetz00_2303;

																BgL_offsetz00_2303 =
																	((long) (BgL_offsetz00_2302) - OBJECT_TYPE);
																{	/* Coerce/coerce.scm 219 */
																	long BgL_modz00_2304;

																	{	/* Coerce/coerce.scm 219 */
																		int BgL_arg2645z00_2305;

																		BgL_arg2645z00_2305 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 219 */
																			long BgL_auxz00_4554;

																			BgL_auxz00_4554 =
																				(long) (BgL_arg2645z00_2305);
																			BgL_modz00_2304 =
																				(BgL_offsetz00_2303 / BgL_auxz00_4554);
																	}}
																	{	/* Coerce/coerce.scm 219 */
																		long BgL_restz00_2306;

																		{	/* Coerce/coerce.scm 219 */
																			int BgL_arg2644z00_2307;

																			BgL_arg2644z00_2307 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 219 */
																				long BgL_auxz00_4558;

																				BgL_auxz00_4558 =
																					(long) (BgL_arg2644z00_2307);
																				BgL_restz00_2306 =
																					(BgL_offsetz00_2303 %
																					BgL_auxz00_4558);
																		}}
																		{	/* Coerce/coerce.scm 219 */

																			BgL_method3588z00_2296 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2301,
																					(int) (BgL_modz00_2304)),
																				(int) (BgL_restz00_2306));
											}}}}}}}}
											BgL_res3976z00_2321 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3588z00_2296) (BgL_method3588z00_2296,
													(obj_t) (BgL_nodez00_2292), BgL_callerz00_1524,
													(obj_t) (BgL_arg3785z00_1534),
													BBOOL(BgL_safez00_2295), BEOA));
									}}
									BgL_arg3783z00_1532 = BgL_res3976z00_2321;
							}}
							{	/* Coerce/coerce.scm 219 */
								obj_t BgL_auxz00_4571;

								BgL_auxz00_4571 = (obj_t) (BgL_arg3783z00_1532);
								SET_CAR(BgL_arg3782z00_1531, BgL_auxz00_4571);
						}}
						{	/* Coerce/coerce.scm 220 */
							obj_t BgL_arg3787z00_1536;

							BgL_nodez00_bglt BgL_arg3788z00_1537;

							{	/* Coerce/coerce.scm 220 */
								obj_t BgL_pairz00_2325;

								{
									BgL_externz00_bglt BgL_auxz00_4574;

									BgL_auxz00_4574 = (BgL_externz00_bglt) (BgL_nodez00_1523);
									BgL_pairz00_2325 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4574))->
										BgL_exprza2za2);
								}
								BgL_arg3787z00_1536 = CDR(BgL_pairz00_2325);
							}
							{	/* Coerce/coerce.scm 220 */
								obj_t BgL_arg3790z00_1539;

								BgL_typez00_bglt BgL_arg3791z00_1540;

								{	/* Coerce/coerce.scm 220 */
									obj_t BgL_pairz00_2327;

									{
										BgL_externz00_bglt BgL_auxz00_4578;

										BgL_auxz00_4578 = (BgL_externz00_bglt) (BgL_nodez00_1523);
										BgL_pairz00_2327 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_4578))->
											BgL_exprza2za2);
									}
									BgL_arg3790z00_1539 = CAR(CDR(BgL_pairz00_2327));
								}
								BgL_arg3791z00_1540 =
									(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1523))->
									BgL_otypez00);
								{	/* Coerce/coerce.scm 220 */
									BgL_nodez00_bglt BgL_res3979z00_2361;

									{	/* Coerce/coerce.scm 220 */
										BgL_nodez00_bglt BgL_nodez00_2332;

										bool_t BgL_safez00_2335;

										BgL_nodez00_2332 = (BgL_nodez00_bglt) (BgL_arg3790z00_1539);
										BgL_safez00_2335 = CBOOL(BgL_safez00_1526);
										{	/* Coerce/coerce.scm 220 */
											obj_t BgL_method3588z00_2336;

											{	/* Coerce/coerce.scm 220 */
												BgL_objectz00_bglt BgL_objz00_2337;

												BgL_objz00_2337 =
													(BgL_objectz00_bglt) (BgL_nodez00_2332);
												{	/* Coerce/coerce.scm 220 */
													long BgL_objzd2classzd2numz00_2338;

													BgL_objzd2classzd2numz00_2338 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2337);
													{	/* Coerce/coerce.scm 220 */
														obj_t BgL_arg2643z00_2339;

														BgL_arg2643z00_2339 =
															PROCEDURE_REF
															(BGl_coercez12zd2envzc0zzcoerce_coercez00,
															(int) (((long) 1)));
														{	/* Coerce/coerce.scm 220 */
															obj_t BgL_arrayz00_2341;

															int BgL_offsetz00_2342;

															BgL_arrayz00_2341 = BgL_arg2643z00_2339;
															BgL_offsetz00_2342 =
																(int) (BgL_objzd2classzd2numz00_2338);
															{	/* Coerce/coerce.scm 220 */
																long BgL_offsetz00_2343;

																BgL_offsetz00_2343 =
																	((long) (BgL_offsetz00_2342) - OBJECT_TYPE);
																{	/* Coerce/coerce.scm 220 */
																	long BgL_modz00_2344;

																	{	/* Coerce/coerce.scm 220 */
																		int BgL_arg2645z00_2345;

																		BgL_arg2645z00_2345 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 220 */
																			long BgL_auxz00_4594;

																			BgL_auxz00_4594 =
																				(long) (BgL_arg2645z00_2345);
																			BgL_modz00_2344 =
																				(BgL_offsetz00_2343 / BgL_auxz00_4594);
																	}}
																	{	/* Coerce/coerce.scm 220 */
																		long BgL_restz00_2346;

																		{	/* Coerce/coerce.scm 220 */
																			int BgL_arg2644z00_2347;

																			BgL_arg2644z00_2347 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 220 */
																				long BgL_auxz00_4598;

																				BgL_auxz00_4598 =
																					(long) (BgL_arg2644z00_2347);
																				BgL_restz00_2346 =
																					(BgL_offsetz00_2343 %
																					BgL_auxz00_4598);
																		}}
																		{	/* Coerce/coerce.scm 220 */

																			BgL_method3588z00_2336 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2341,
																					(int) (BgL_modz00_2344)),
																				(int) (BgL_restz00_2346));
											}}}}}}}}
											BgL_res3979z00_2361 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3588z00_2336) (BgL_method3588z00_2336,
													(obj_t) (BgL_nodez00_2332), BgL_callerz00_1524,
													(obj_t) (BgL_arg3791z00_1540),
													BBOOL(BgL_safez00_2335), BEOA));
									}}
									BgL_arg3788z00_1537 = BgL_res3979z00_2361;
							}}
							{	/* Coerce/coerce.scm 220 */
								obj_t BgL_auxz00_4611;

								BgL_auxz00_4611 = (obj_t) (BgL_arg3788z00_1537);
								SET_CAR(BgL_arg3787z00_1536, BgL_auxz00_4611);
						}}
						{	/* Coerce/coerce.scm 221 */
							obj_t BgL_arg3793z00_1542;

							BgL_nodez00_bglt BgL_arg3794z00_1543;

							{	/* Coerce/coerce.scm 221 */
								obj_t BgL_pairz00_2365;

								{
									BgL_externz00_bglt BgL_auxz00_4614;

									BgL_auxz00_4614 = (BgL_externz00_bglt) (BgL_nodez00_1523);
									BgL_pairz00_2365 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4614))->
										BgL_exprza2za2);
								}
								BgL_arg3793z00_1542 = CDR(CDR(BgL_pairz00_2365));
							}
							{	/* Coerce/coerce.scm 221 */
								obj_t BgL_arg3796z00_1545;

								{	/* Coerce/coerce.scm 221 */
									obj_t BgL_pairz00_2370;

									{
										BgL_externz00_bglt BgL_auxz00_4619;

										BgL_auxz00_4619 = (BgL_externz00_bglt) (BgL_nodez00_1523);
										BgL_pairz00_2370 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_4619))->
											BgL_exprza2za2);
									}
									BgL_arg3796z00_1545 = CAR(CDR(CDR(BgL_pairz00_2370)));
								}
								{	/* Coerce/coerce.scm 221 */
									BgL_nodez00_bglt BgL_res3982z00_2405;

									{	/* Coerce/coerce.scm 221 */
										BgL_nodez00_bglt BgL_nodez00_2376;

										BgL_typez00_bglt BgL_toz00_2378;

										bool_t BgL_safez00_2379;

										BgL_nodez00_2376 = (BgL_nodez00_bglt) (BgL_arg3796z00_1545);
										BgL_toz00_2378 = (BgL_typez00_bglt) (BgL_ftypez00_1530);
										BgL_safez00_2379 = CBOOL(BgL_safez00_1526);
										{	/* Coerce/coerce.scm 221 */
											obj_t BgL_method3588z00_2380;

											{	/* Coerce/coerce.scm 221 */
												BgL_objectz00_bglt BgL_objz00_2381;

												BgL_objz00_2381 =
													(BgL_objectz00_bglt) (BgL_nodez00_2376);
												{	/* Coerce/coerce.scm 221 */
													long BgL_objzd2classzd2numz00_2382;

													BgL_objzd2classzd2numz00_2382 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2381);
													{	/* Coerce/coerce.scm 221 */
														obj_t BgL_arg2643z00_2383;

														BgL_arg2643z00_2383 =
															PROCEDURE_REF
															(BGl_coercez12zd2envzc0zzcoerce_coercez00,
															(int) (((long) 1)));
														{	/* Coerce/coerce.scm 221 */
															obj_t BgL_arrayz00_2385;

															int BgL_offsetz00_2386;

															BgL_arrayz00_2385 = BgL_arg2643z00_2383;
															BgL_offsetz00_2386 =
																(int) (BgL_objzd2classzd2numz00_2382);
															{	/* Coerce/coerce.scm 221 */
																long BgL_offsetz00_2387;

																BgL_offsetz00_2387 =
																	((long) (BgL_offsetz00_2386) - OBJECT_TYPE);
																{	/* Coerce/coerce.scm 221 */
																	long BgL_modz00_2388;

																	{	/* Coerce/coerce.scm 221 */
																		int BgL_arg2645z00_2389;

																		BgL_arg2645z00_2389 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 221 */
																			long BgL_auxz00_4636;

																			BgL_auxz00_4636 =
																				(long) (BgL_arg2645z00_2389);
																			BgL_modz00_2388 =
																				(BgL_offsetz00_2387 / BgL_auxz00_4636);
																	}}
																	{	/* Coerce/coerce.scm 221 */
																		long BgL_restz00_2390;

																		{	/* Coerce/coerce.scm 221 */
																			int BgL_arg2644z00_2391;

																			BgL_arg2644z00_2391 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 221 */
																				long BgL_auxz00_4640;

																				BgL_auxz00_4640 =
																					(long) (BgL_arg2644z00_2391);
																				BgL_restz00_2390 =
																					(BgL_offsetz00_2387 %
																					BgL_auxz00_4640);
																		}}
																		{	/* Coerce/coerce.scm 221 */

																			BgL_method3588z00_2380 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2385,
																					(int) (BgL_modz00_2388)),
																				(int) (BgL_restz00_2390));
											}}}}}}}}
											BgL_res3982z00_2405 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3588z00_2380) (BgL_method3588z00_2380,
													(obj_t) (BgL_nodez00_2376), BgL_callerz00_1524,
													(obj_t) (BgL_toz00_2378), BBOOL(BgL_safez00_2379),
													BEOA));
									}}
									BgL_arg3794z00_1543 = BgL_res3982z00_2405;
							}}
							{	/* Coerce/coerce.scm 221 */
								obj_t BgL_auxz00_4653;

								BgL_auxz00_4653 = (obj_t) (BgL_arg3794z00_1543);
								SET_CAR(BgL_arg3793z00_1542, BgL_auxz00_4653);
						}}
						{	/* Coerce/coerce.scm 222 */
							BgL_typez00_bglt BgL_arg3798z00_1547;

							{
								BgL_nodez00_bglt BgL_auxz00_4656;

								BgL_auxz00_4656 = (BgL_nodez00_bglt) (BgL_nodez00_1523);
								BgL_arg3798z00_1547 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4656))->BgL_typez00);
							}
							BgL_auxz00_4529 =
								BGl_convertz12z12zzcoerce_convertz00(
								(BgL_nodez00_bglt) (BgL_nodez00_1523), BgL_arg3798z00_1547,
								(BgL_typez00_bglt) (BgL_toz00_1525), CBOOL(BgL_safez00_1526));
					}}
					return (obj_t) (BgL_auxz00_4529);
				}
			}
		}
	}



/* coerce!-vref3611 */
	obj_t BGl_coercez12zd2vref3611zc0zzcoerce_coercez00(obj_t BgL_envz00_3367,
		obj_t BgL_nodez00_3368, obj_t BgL_callerz00_3369, obj_t BgL_toz00_3370,
		obj_t BgL_safez00_3371)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 199 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1500;

				obj_t BgL_callerz00_1501;

				obj_t BgL_toz00_1502;

				obj_t BgL_safez00_1503;

				{	/* Coerce/coerce.scm 200 */
					BgL_nodez00_bglt BgL_auxz00_4665;

					BgL_nodez00_1500 = (BgL_vrefz00_bglt) (BgL_nodez00_3368);
					BgL_callerz00_1501 = BgL_callerz00_3369;
					BgL_toz00_1502 = BgL_toz00_3370;
					BgL_safez00_1503 = BgL_safez00_3371;
					{	/* Coerce/coerce.scm 207 */
						obj_t BgL_ftypez00_1507;

						{	/* Coerce/coerce.scm 207 */
							bool_t BgL_testz00_4666;

							{	/* Coerce/coerce.scm 207 */
								BgL_typez00_bglt BgL_arg3780z00_1520;

								BgL_arg3780z00_1520 =
									(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1500))->BgL_ftypez00);
								BgL_testz00_4666 =
									(
									(obj_t) (BgL_arg3780z00_1520) ==
									BGl_za2_za2z00zztype_cachez00);
							}
							if (BgL_testz00_4666)
								{	/* Coerce/coerce.scm 207 */
									BgL_ftypez00_1507 = BGl_za2objza2z00zztype_cachez00;
								}
							else
								{	/* Coerce/coerce.scm 207 */
									BgL_ftypez00_1507 =
										(obj_t) (
										(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1500))->
											BgL_ftypez00));
								}
						}
						{	/* Coerce/coerce.scm 208 */
							obj_t BgL_arg3768z00_1508;

							BgL_nodez00_bglt BgL_arg3769z00_1509;

							{
								BgL_externz00_bglt BgL_auxz00_4672;

								BgL_auxz00_4672 = (BgL_externz00_bglt) (BgL_nodez00_1500);
								BgL_arg3768z00_1508 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4672))->
									BgL_exprza2za2);
							}
							{	/* Coerce/coerce.scm 208 */
								obj_t BgL_arg3770z00_1510;

								BgL_typez00_bglt BgL_arg3771z00_1511;

								{	/* Coerce/coerce.scm 208 */
									obj_t BgL_pairz00_2212;

									{
										BgL_externz00_bglt BgL_auxz00_4675;

										BgL_auxz00_4675 = (BgL_externz00_bglt) (BgL_nodez00_1500);
										BgL_pairz00_2212 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_4675))->
											BgL_exprza2za2);
									}
									BgL_arg3770z00_1510 = CAR(BgL_pairz00_2212);
								}
								BgL_arg3771z00_1511 =
									(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1500))->BgL_vtypez00);
								{	/* Coerce/coerce.scm 208 */
									BgL_nodez00_bglt BgL_res3970z00_2243;

									{	/* Coerce/coerce.scm 208 */
										BgL_nodez00_bglt BgL_nodez00_2214;

										bool_t BgL_safez00_2217;

										BgL_nodez00_2214 = (BgL_nodez00_bglt) (BgL_arg3770z00_1510);
										BgL_safez00_2217 = CBOOL(BgL_safez00_1503);
										{	/* Coerce/coerce.scm 208 */
											obj_t BgL_method3588z00_2218;

											{	/* Coerce/coerce.scm 208 */
												BgL_objectz00_bglt BgL_objz00_2219;

												BgL_objz00_2219 =
													(BgL_objectz00_bglt) (BgL_nodez00_2214);
												{	/* Coerce/coerce.scm 208 */
													long BgL_objzd2classzd2numz00_2220;

													BgL_objzd2classzd2numz00_2220 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2219);
													{	/* Coerce/coerce.scm 208 */
														obj_t BgL_arg2643z00_2221;

														BgL_arg2643z00_2221 =
															PROCEDURE_REF
															(BGl_coercez12zd2envzc0zzcoerce_coercez00,
															(int) (((long) 1)));
														{	/* Coerce/coerce.scm 208 */
															obj_t BgL_arrayz00_2223;

															int BgL_offsetz00_2224;

															BgL_arrayz00_2223 = BgL_arg2643z00_2221;
															BgL_offsetz00_2224 =
																(int) (BgL_objzd2classzd2numz00_2220);
															{	/* Coerce/coerce.scm 208 */
																long BgL_offsetz00_2225;

																BgL_offsetz00_2225 =
																	((long) (BgL_offsetz00_2224) - OBJECT_TYPE);
																{	/* Coerce/coerce.scm 208 */
																	long BgL_modz00_2226;

																	{	/* Coerce/coerce.scm 208 */
																		int BgL_arg2645z00_2227;

																		BgL_arg2645z00_2227 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 208 */
																			long BgL_auxz00_4690;

																			BgL_auxz00_4690 =
																				(long) (BgL_arg2645z00_2227);
																			BgL_modz00_2226 =
																				(BgL_offsetz00_2225 / BgL_auxz00_4690);
																	}}
																	{	/* Coerce/coerce.scm 208 */
																		long BgL_restz00_2228;

																		{	/* Coerce/coerce.scm 208 */
																			int BgL_arg2644z00_2229;

																			BgL_arg2644z00_2229 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 208 */
																				long BgL_auxz00_4694;

																				BgL_auxz00_4694 =
																					(long) (BgL_arg2644z00_2229);
																				BgL_restz00_2228 =
																					(BgL_offsetz00_2225 %
																					BgL_auxz00_4694);
																		}}
																		{	/* Coerce/coerce.scm 208 */

																			BgL_method3588z00_2218 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2223,
																					(int) (BgL_modz00_2226)),
																				(int) (BgL_restz00_2228));
											}}}}}}}}
											BgL_res3970z00_2243 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3588z00_2218) (BgL_method3588z00_2218,
													(obj_t) (BgL_nodez00_2214), BgL_callerz00_1501,
													(obj_t) (BgL_arg3771z00_1511),
													BBOOL(BgL_safez00_2217), BEOA));
									}}
									BgL_arg3769z00_1509 = BgL_res3970z00_2243;
							}}
							{	/* Coerce/coerce.scm 208 */
								obj_t BgL_auxz00_4707;

								BgL_auxz00_4707 = (obj_t) (BgL_arg3769z00_1509);
								SET_CAR(BgL_arg3768z00_1508, BgL_auxz00_4707);
						}}
						{	/* Coerce/coerce.scm 209 */
							obj_t BgL_arg3773z00_1513;

							BgL_nodez00_bglt BgL_arg3774z00_1514;

							{	/* Coerce/coerce.scm 209 */
								obj_t BgL_pairz00_2247;

								{
									BgL_externz00_bglt BgL_auxz00_4710;

									BgL_auxz00_4710 = (BgL_externz00_bglt) (BgL_nodez00_1500);
									BgL_pairz00_2247 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4710))->
										BgL_exprza2za2);
								}
								BgL_arg3773z00_1513 = CDR(BgL_pairz00_2247);
							}
							{	/* Coerce/coerce.scm 209 */
								obj_t BgL_arg3776z00_1516;

								BgL_typez00_bglt BgL_arg3777z00_1517;

								{	/* Coerce/coerce.scm 209 */
									obj_t BgL_pairz00_2249;

									{
										BgL_externz00_bglt BgL_auxz00_4714;

										BgL_auxz00_4714 = (BgL_externz00_bglt) (BgL_nodez00_1500);
										BgL_pairz00_2249 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_4714))->
											BgL_exprza2za2);
									}
									BgL_arg3776z00_1516 = CAR(CDR(BgL_pairz00_2249));
								}
								BgL_arg3777z00_1517 =
									(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1500))->BgL_otypez00);
								{	/* Coerce/coerce.scm 209 */
									BgL_nodez00_bglt BgL_res3973z00_2283;

									{	/* Coerce/coerce.scm 209 */
										BgL_nodez00_bglt BgL_nodez00_2254;

										bool_t BgL_safez00_2257;

										BgL_nodez00_2254 = (BgL_nodez00_bglt) (BgL_arg3776z00_1516);
										BgL_safez00_2257 = CBOOL(BgL_safez00_1503);
										{	/* Coerce/coerce.scm 209 */
											obj_t BgL_method3588z00_2258;

											{	/* Coerce/coerce.scm 209 */
												BgL_objectz00_bglt BgL_objz00_2259;

												BgL_objz00_2259 =
													(BgL_objectz00_bglt) (BgL_nodez00_2254);
												{	/* Coerce/coerce.scm 209 */
													long BgL_objzd2classzd2numz00_2260;

													BgL_objzd2classzd2numz00_2260 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2259);
													{	/* Coerce/coerce.scm 209 */
														obj_t BgL_arg2643z00_2261;

														BgL_arg2643z00_2261 =
															PROCEDURE_REF
															(BGl_coercez12zd2envzc0zzcoerce_coercez00,
															(int) (((long) 1)));
														{	/* Coerce/coerce.scm 209 */
															obj_t BgL_arrayz00_2263;

															int BgL_offsetz00_2264;

															BgL_arrayz00_2263 = BgL_arg2643z00_2261;
															BgL_offsetz00_2264 =
																(int) (BgL_objzd2classzd2numz00_2260);
															{	/* Coerce/coerce.scm 209 */
																long BgL_offsetz00_2265;

																BgL_offsetz00_2265 =
																	((long) (BgL_offsetz00_2264) - OBJECT_TYPE);
																{	/* Coerce/coerce.scm 209 */
																	long BgL_modz00_2266;

																	{	/* Coerce/coerce.scm 209 */
																		int BgL_arg2645z00_2267;

																		BgL_arg2645z00_2267 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 209 */
																			long BgL_auxz00_4730;

																			BgL_auxz00_4730 =
																				(long) (BgL_arg2645z00_2267);
																			BgL_modz00_2266 =
																				(BgL_offsetz00_2265 / BgL_auxz00_4730);
																	}}
																	{	/* Coerce/coerce.scm 209 */
																		long BgL_restz00_2268;

																		{	/* Coerce/coerce.scm 209 */
																			int BgL_arg2644z00_2269;

																			BgL_arg2644z00_2269 = (int) (((long) 16));
																			{	/* Coerce/coerce.scm 209 */
																				long BgL_auxz00_4734;

																				BgL_auxz00_4734 =
																					(long) (BgL_arg2644z00_2269);
																				BgL_restz00_2268 =
																					(BgL_offsetz00_2265 %
																					BgL_auxz00_4734);
																		}}
																		{	/* Coerce/coerce.scm 209 */

																			BgL_method3588z00_2258 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2263,
																					(int) (BgL_modz00_2266)),
																				(int) (BgL_restz00_2268));
											}}}}}}}}
											BgL_res3973z00_2283 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3588z00_2258) (BgL_method3588z00_2258,
													(obj_t) (BgL_nodez00_2254), BgL_callerz00_1501,
													(obj_t) (BgL_arg3777z00_1517),
													BBOOL(BgL_safez00_2257), BEOA));
									}}
									BgL_arg3774z00_1514 = BgL_res3973z00_2283;
							}}
							{	/* Coerce/coerce.scm 209 */
								obj_t BgL_auxz00_4747;

								BgL_auxz00_4747 = (obj_t) (BgL_arg3774z00_1514);
								SET_CAR(BgL_arg3773z00_1513, BgL_auxz00_4747);
						}}
						BgL_auxz00_4665 =
							BGl_convertz12z12zzcoerce_convertz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1500),
							(BgL_typez00_bglt) (BgL_ftypez00_1507),
							(BgL_typez00_bglt) (BgL_toz00_1502), CBOOL(BgL_safez00_1503));
					}
					return (obj_t) (BgL_auxz00_4665);
				}
			}
		}
	}



/* coerce!-valloc3608 */
	obj_t BGl_coercez12zd2valloc3608zc0zzcoerce_coercez00(obj_t BgL_envz00_3372,
		obj_t BgL_nodez00_3373, obj_t BgL_callerz00_3374, obj_t BgL_toz00_3375,
		obj_t BgL_safez00_3376)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 191 */
			{
				BgL_vallocz00_bglt BgL_nodez00_1485;

				obj_t BgL_callerz00_1486;

				obj_t BgL_toz00_1487;

				obj_t BgL_safez00_1488;

				{	/* Coerce/coerce.scm 192 */
					BgL_nodez00_bglt BgL_auxz00_4757;

					BgL_nodez00_1485 = (BgL_vallocz00_bglt) (BgL_nodez00_3373);
					BgL_callerz00_1486 = BgL_callerz00_3374;
					BgL_toz00_1487 = BgL_toz00_3375;
					BgL_safez00_1488 = BgL_safez00_3376;
					{	/* Coerce/coerce.scm 193 */
						obj_t BgL_arg3761z00_1492;

						BgL_nodez00_bglt BgL_arg3762z00_1493;

						{
							BgL_externz00_bglt BgL_auxz00_4758;

							BgL_auxz00_4758 = (BgL_externz00_bglt) (BgL_nodez00_1485);
							BgL_arg3761z00_1492 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4758))->BgL_exprza2za2);
						}
						{	/* Coerce/coerce.scm 193 */
							obj_t BgL_arg3763z00_1494;

							BgL_typez00_bglt BgL_arg3764z00_1495;

							{	/* Coerce/coerce.scm 193 */
								obj_t BgL_pairz00_2173;

								{
									BgL_externz00_bglt BgL_auxz00_4761;

									BgL_auxz00_4761 = (BgL_externz00_bglt) (BgL_nodez00_1485);
									BgL_pairz00_2173 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4761))->
										BgL_exprza2za2);
								}
								BgL_arg3763z00_1494 = CAR(BgL_pairz00_2173);
							}
							BgL_arg3764z00_1495 =
								(((BgL_vallocz00_bglt) CREF(BgL_nodez00_1485))->BgL_otypez00);
							{	/* Coerce/coerce.scm 193 */
								BgL_nodez00_bglt BgL_res3967z00_2204;

								{	/* Coerce/coerce.scm 193 */
									BgL_nodez00_bglt BgL_nodez00_2175;

									bool_t BgL_safez00_2178;

									BgL_nodez00_2175 = (BgL_nodez00_bglt) (BgL_arg3763z00_1494);
									BgL_safez00_2178 = CBOOL(BgL_safez00_1488);
									{	/* Coerce/coerce.scm 193 */
										obj_t BgL_method3588z00_2179;

										{	/* Coerce/coerce.scm 193 */
											BgL_objectz00_bglt BgL_objz00_2180;

											BgL_objz00_2180 = (BgL_objectz00_bglt) (BgL_nodez00_2175);
											{	/* Coerce/coerce.scm 193 */
												long BgL_objzd2classzd2numz00_2181;

												BgL_objzd2classzd2numz00_2181 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2180);
												{	/* Coerce/coerce.scm 193 */
													obj_t BgL_arg2643z00_2182;

													BgL_arg2643z00_2182 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 193 */
														obj_t BgL_arrayz00_2184;

														int BgL_offsetz00_2185;

														BgL_arrayz00_2184 = BgL_arg2643z00_2182;
														BgL_offsetz00_2185 =
															(int) (BgL_objzd2classzd2numz00_2181);
														{	/* Coerce/coerce.scm 193 */
															long BgL_offsetz00_2186;

															BgL_offsetz00_2186 =
																((long) (BgL_offsetz00_2185) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 193 */
																long BgL_modz00_2187;

																{	/* Coerce/coerce.scm 193 */
																	int BgL_arg2645z00_2188;

																	BgL_arg2645z00_2188 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 193 */
																		long BgL_auxz00_4776;

																		BgL_auxz00_4776 =
																			(long) (BgL_arg2645z00_2188);
																		BgL_modz00_2187 =
																			(BgL_offsetz00_2186 / BgL_auxz00_4776);
																}}
																{	/* Coerce/coerce.scm 193 */
																	long BgL_restz00_2189;

																	{	/* Coerce/coerce.scm 193 */
																		int BgL_arg2644z00_2190;

																		BgL_arg2644z00_2190 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 193 */
																			long BgL_auxz00_4780;

																			BgL_auxz00_4780 =
																				(long) (BgL_arg2644z00_2190);
																			BgL_restz00_2189 =
																				(BgL_offsetz00_2186 % BgL_auxz00_4780);
																	}}
																	{	/* Coerce/coerce.scm 193 */

																		BgL_method3588z00_2179 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2184,
																				(int) (BgL_modz00_2187)),
																			(int) (BgL_restz00_2189));
										}}}}}}}}
										BgL_res3967z00_2204 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2179) (BgL_method3588z00_2179,
												(obj_t) (BgL_nodez00_2175), BgL_callerz00_1486,
												(obj_t) (BgL_arg3764z00_1495), BBOOL(BgL_safez00_2178),
												BEOA));
								}}
								BgL_arg3762z00_1493 = BgL_res3967z00_2204;
						}}
						{	/* Coerce/coerce.scm 193 */
							obj_t BgL_auxz00_4793;

							BgL_auxz00_4793 = (obj_t) (BgL_arg3762z00_1493);
							SET_CAR(BgL_arg3761z00_1492, BgL_auxz00_4793);
					}}
					{	/* Coerce/coerce.scm 194 */
						BgL_typez00_bglt BgL_arg3766z00_1497;

						{
							BgL_nodez00_bglt BgL_auxz00_4796;

							BgL_auxz00_4796 = (BgL_nodez00_bglt) (BgL_nodez00_1485);
							BgL_arg3766z00_1497 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_4796))->BgL_typez00);
						}
						BgL_auxz00_4757 =
							BGl_convertz12z12zzcoerce_convertz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1485), BgL_arg3766z00_1497,
							(BgL_typez00_bglt) (BgL_toz00_1487), CBOOL(BgL_safez00_1488));
					}
					return (obj_t) (BgL_auxz00_4757);
				}
			}
		}
	}



/* coerce!-new3606 */
	obj_t BGl_coercez12zd2new3606zc0zzcoerce_coercez00(obj_t BgL_envz00_3377,
		obj_t BgL_nodez00_3378, obj_t BgL_callerz00_3379, obj_t BgL_toz00_3380,
		obj_t BgL_safez00_3381)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 175 */
			{
				BgL_newz00_bglt BgL_nodez00_1463;

				obj_t BgL_callerz00_1464;

				obj_t BgL_toz00_1465;

				obj_t BgL_safez00_1466;

				{	/* Coerce/coerce.scm 176 */
					BgL_nodez00_bglt BgL_auxz00_4805;

					BgL_nodez00_1463 = (BgL_newz00_bglt) (BgL_nodez00_3378);
					BgL_callerz00_1464 = BgL_callerz00_3379;
					BgL_toz00_1465 = BgL_toz00_3380;
					BgL_safez00_1466 = BgL_safez00_3381;
					{
						obj_t BgL_lz00_1472;

						{	/* Coerce/coerce.scm 177 */
							obj_t BgL_arg3750z00_1471;

							{
								BgL_externz00_bglt BgL_auxz00_4806;

								BgL_auxz00_4806 = (BgL_externz00_bglt) (BgL_nodez00_1463);
								BgL_arg3750z00_1471 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4806))->
									BgL_exprza2za2);
							}
							BgL_lz00_1472 = BgL_arg3750z00_1471;
						BgL_zc3anonymousza33751ze3z83_1473:
							if (NULLP(BgL_lz00_1472))
								{	/* Coerce/coerce.scm 179 */
									BgL_typez00_bglt BgL_arg3753z00_1475;

									{
										BgL_nodez00_bglt BgL_auxz00_4811;

										BgL_auxz00_4811 = (BgL_nodez00_bglt) (BgL_nodez00_1463);
										BgL_arg3753z00_1475 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4811))->BgL_typez00);
									}
									BGl_convertz12z12zzcoerce_convertz00(
										(BgL_nodez00_bglt) (BgL_nodez00_1463), BgL_arg3753z00_1475,
										(BgL_typez00_bglt) (BgL_toz00_1465),
										CBOOL(BgL_safez00_1466));
								}
							else
								{	/* Coerce/coerce.scm 178 */
									{	/* Coerce/coerce.scm 181 */
										BgL_nodez00_bglt BgL_arg3754z00_1476;

										{	/* Coerce/coerce.scm 181 */
											obj_t BgL_arg3755z00_1477;

											BgL_typez00_bglt BgL_arg3756z00_1478;

											BgL_arg3755z00_1477 = CAR(BgL_lz00_1472);
											{	/* Coerce/coerce.scm 183 */
												obj_t BgL_arg3757z00_1479;

												BgL_arg3757z00_1479 = CAR(BgL_lz00_1472);
												BgL_arg3756z00_1478 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3757z00_1479));
											}
											{	/* Coerce/coerce.scm 181 */
												BgL_nodez00_bglt BgL_res3964z00_2166;

												{	/* Coerce/coerce.scm 181 */
													BgL_nodez00_bglt BgL_nodez00_2137;

													bool_t BgL_safez00_2140;

													BgL_nodez00_2137 =
														(BgL_nodez00_bglt) (BgL_arg3755z00_1477);
													BgL_safez00_2140 = CBOOL(BgL_safez00_1466);
													{	/* Coerce/coerce.scm 181 */
														obj_t BgL_method3588z00_2141;

														{	/* Coerce/coerce.scm 181 */
															BgL_objectz00_bglt BgL_objz00_2142;

															BgL_objz00_2142 =
																(BgL_objectz00_bglt) (BgL_nodez00_2137);
															{	/* Coerce/coerce.scm 181 */
																long BgL_objzd2classzd2numz00_2143;

																BgL_objzd2classzd2numz00_2143 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2142);
																{	/* Coerce/coerce.scm 181 */
																	obj_t BgL_arg2643z00_2144;

																	BgL_arg2643z00_2144 =
																		PROCEDURE_REF
																		(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																		(int) (((long) 1)));
																	{	/* Coerce/coerce.scm 181 */
																		obj_t BgL_arrayz00_2146;

																		int BgL_offsetz00_2147;

																		BgL_arrayz00_2146 = BgL_arg2643z00_2144;
																		BgL_offsetz00_2147 =
																			(int) (BgL_objzd2classzd2numz00_2143);
																		{	/* Coerce/coerce.scm 181 */
																			long BgL_offsetz00_2148;

																			BgL_offsetz00_2148 =
																				(
																				(long) (BgL_offsetz00_2147) -
																				OBJECT_TYPE);
																			{	/* Coerce/coerce.scm 181 */
																				long BgL_modz00_2149;

																				{	/* Coerce/coerce.scm 181 */
																					int BgL_arg2645z00_2150;

																					BgL_arg2645z00_2150 =
																						(int) (((long) 16));
																					{	/* Coerce/coerce.scm 181 */
																						long BgL_auxz00_4832;

																						BgL_auxz00_4832 =
																							(long) (BgL_arg2645z00_2150);
																						BgL_modz00_2149 =
																							(BgL_offsetz00_2148 /
																							BgL_auxz00_4832);
																				}}
																				{	/* Coerce/coerce.scm 181 */
																					long BgL_restz00_2151;

																					{	/* Coerce/coerce.scm 181 */
																						int BgL_arg2644z00_2152;

																						BgL_arg2644z00_2152 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 181 */
																							long BgL_auxz00_4836;

																							BgL_auxz00_4836 =
																								(long) (BgL_arg2644z00_2152);
																							BgL_restz00_2151 =
																								(BgL_offsetz00_2148 %
																								BgL_auxz00_4836);
																					}}
																					{	/* Coerce/coerce.scm 181 */

																						BgL_method3588z00_2141 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2146,
																								(int) (BgL_modz00_2149)),
																							(int) (BgL_restz00_2151));
														}}}}}}}}
														BgL_res3964z00_2166 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3588z00_2141) (BgL_method3588z00_2141,
																(obj_t) (BgL_nodez00_2137), BgL_callerz00_1464,
																(obj_t) (BgL_arg3756z00_1478),
																BBOOL(BgL_safez00_2140), BEOA));
												}}
												BgL_arg3754z00_1476 = BgL_res3964z00_2166;
										}}
										{	/* Coerce/coerce.scm 181 */
											obj_t BgL_auxz00_4849;

											BgL_auxz00_4849 = (obj_t) (BgL_arg3754z00_1476);
											SET_CAR(BgL_lz00_1472, BgL_auxz00_4849);
									}}
									{
										obj_t BgL_lz00_4852;

										BgL_lz00_4852 = CDR(BgL_lz00_1472);
										BgL_lz00_1472 = BgL_lz00_4852;
										goto BgL_zc3anonymousza33751ze3z83_1473;
									}
								}
						}
					}
					{	/* Coerce/coerce.scm 186 */
						BgL_typez00_bglt BgL_arg3759z00_1482;

						{
							BgL_nodez00_bglt BgL_auxz00_4854;

							BgL_auxz00_4854 = (BgL_nodez00_bglt) (BgL_nodez00_1463);
							BgL_arg3759z00_1482 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_4854))->BgL_typez00);
						}
						BgL_auxz00_4805 =
							BGl_convertz12z12zzcoerce_convertz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1463), BgL_arg3759z00_1482,
							(BgL_typez00_bglt) (BgL_toz00_1465), CBOOL(BgL_safez00_1466));
					}
					return (obj_t) (BgL_auxz00_4805);
				}
			}
		}
	}



/* coerce!-setfield3604 */
	obj_t BGl_coercez12zd2setfield3604zc0zzcoerce_coercez00(obj_t BgL_envz00_3382,
		obj_t BgL_nodez00_3383, obj_t BgL_callerz00_3384, obj_t BgL_toz00_3385,
		obj_t BgL_safez00_3386)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 166 */
			{
				BgL_setfieldz00_bglt BgL_nodez00_1444;

				obj_t BgL_callerz00_1445;

				obj_t BgL_toz00_1446;

				obj_t BgL_safez00_1447;

				{	/* Coerce/coerce.scm 167 */
					BgL_nodez00_bglt BgL_auxz00_4863;

					BgL_nodez00_1444 = (BgL_setfieldz00_bglt) (BgL_nodez00_3383);
					BgL_callerz00_1445 = BgL_callerz00_3384;
					BgL_toz00_1446 = BgL_toz00_3385;
					BgL_safez00_1447 = BgL_safez00_3386;
					{	/* Coerce/coerce.scm 168 */
						obj_t BgL_arg3737z00_1451;

						BgL_nodez00_bglt BgL_arg3738z00_1452;

						{
							BgL_externz00_bglt BgL_auxz00_4864;

							BgL_auxz00_4864 = (BgL_externz00_bglt) (BgL_nodez00_1444);
							BgL_arg3737z00_1451 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4864))->BgL_exprza2za2);
						}
						{	/* Coerce/coerce.scm 168 */
							obj_t BgL_arg3739z00_1453;

							{	/* Coerce/coerce.scm 168 */
								obj_t BgL_pairz00_2059;

								{
									BgL_externz00_bglt BgL_auxz00_4867;

									BgL_auxz00_4867 = (BgL_externz00_bglt) (BgL_nodez00_1444);
									BgL_pairz00_2059 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4867))->
										BgL_exprza2za2);
								}
								BgL_arg3739z00_1453 = CAR(BgL_pairz00_2059);
							}
							{	/* Coerce/coerce.scm 168 */
								BgL_nodez00_bglt BgL_res3958z00_2089;

								{	/* Coerce/coerce.scm 168 */
									BgL_nodez00_bglt BgL_nodez00_2060;

									BgL_typez00_bglt BgL_toz00_2062;

									bool_t BgL_safez00_2063;

									BgL_nodez00_2060 = (BgL_nodez00_bglt) (BgL_arg3739z00_1453);
									BgL_toz00_2062 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_2063 = CBOOL(BgL_safez00_1447);
									{	/* Coerce/coerce.scm 168 */
										obj_t BgL_method3588z00_2064;

										{	/* Coerce/coerce.scm 168 */
											BgL_objectz00_bglt BgL_objz00_2065;

											BgL_objz00_2065 = (BgL_objectz00_bglt) (BgL_nodez00_2060);
											{	/* Coerce/coerce.scm 168 */
												long BgL_objzd2classzd2numz00_2066;

												BgL_objzd2classzd2numz00_2066 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2065);
												{	/* Coerce/coerce.scm 168 */
													obj_t BgL_arg2643z00_2067;

													BgL_arg2643z00_2067 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 168 */
														obj_t BgL_arrayz00_2069;

														int BgL_offsetz00_2070;

														BgL_arrayz00_2069 = BgL_arg2643z00_2067;
														BgL_offsetz00_2070 =
															(int) (BgL_objzd2classzd2numz00_2066);
														{	/* Coerce/coerce.scm 168 */
															long BgL_offsetz00_2071;

															BgL_offsetz00_2071 =
																((long) (BgL_offsetz00_2070) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 168 */
																long BgL_modz00_2072;

																{	/* Coerce/coerce.scm 168 */
																	int BgL_arg2645z00_2073;

																	BgL_arg2645z00_2073 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 168 */
																		long BgL_auxz00_4882;

																		BgL_auxz00_4882 =
																			(long) (BgL_arg2645z00_2073);
																		BgL_modz00_2072 =
																			(BgL_offsetz00_2071 / BgL_auxz00_4882);
																}}
																{	/* Coerce/coerce.scm 168 */
																	long BgL_restz00_2074;

																	{	/* Coerce/coerce.scm 168 */
																		int BgL_arg2644z00_2075;

																		BgL_arg2644z00_2075 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 168 */
																			long BgL_auxz00_4886;

																			BgL_auxz00_4886 =
																				(long) (BgL_arg2644z00_2075);
																			BgL_restz00_2074 =
																				(BgL_offsetz00_2071 % BgL_auxz00_4886);
																	}}
																	{	/* Coerce/coerce.scm 168 */

																		BgL_method3588z00_2064 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2069,
																				(int) (BgL_modz00_2072)),
																			(int) (BgL_restz00_2074));
										}}}}}}}}
										BgL_res3958z00_2089 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2064) (BgL_method3588z00_2064,
												(obj_t) (BgL_nodez00_2060), BgL_callerz00_1445,
												(obj_t) (BgL_toz00_2062), BBOOL(BgL_safez00_2063),
												BEOA));
								}}
								BgL_arg3738z00_1452 = BgL_res3958z00_2089;
						}}
						{	/* Coerce/coerce.scm 168 */
							obj_t BgL_auxz00_4899;

							BgL_auxz00_4899 = (obj_t) (BgL_arg3738z00_1452);
							SET_CAR(BgL_arg3737z00_1451, BgL_auxz00_4899);
					}}
					{	/* Coerce/coerce.scm 169 */
						obj_t BgL_arg3741z00_1455;

						BgL_nodez00_bglt BgL_arg3742z00_1456;

						{	/* Coerce/coerce.scm 169 */
							obj_t BgL_pairz00_2093;

							{
								BgL_externz00_bglt BgL_auxz00_4902;

								BgL_auxz00_4902 = (BgL_externz00_bglt) (BgL_nodez00_1444);
								BgL_pairz00_2093 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4902))->
									BgL_exprza2za2);
							}
							BgL_arg3741z00_1455 = CDR(BgL_pairz00_2093);
						}
						{	/* Coerce/coerce.scm 169 */
							obj_t BgL_arg3746z00_1458;

							BgL_typez00_bglt BgL_arg3747z00_1459;

							{	/* Coerce/coerce.scm 169 */
								obj_t BgL_pairz00_2095;

								{
									BgL_externz00_bglt BgL_auxz00_4906;

									BgL_auxz00_4906 = (BgL_externz00_bglt) (BgL_nodez00_1444);
									BgL_pairz00_2095 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4906))->
										BgL_exprza2za2);
								}
								BgL_arg3746z00_1458 = CAR(CDR(BgL_pairz00_2095));
							}
							BgL_arg3747z00_1459 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1444))->BgL_ftypez00);
							{	/* Coerce/coerce.scm 169 */
								BgL_nodez00_bglt BgL_res3961z00_2129;

								{	/* Coerce/coerce.scm 169 */
									BgL_nodez00_bglt BgL_nodez00_2100;

									bool_t BgL_safez00_2103;

									BgL_nodez00_2100 = (BgL_nodez00_bglt) (BgL_arg3746z00_1458);
									BgL_safez00_2103 = CBOOL(BgL_safez00_1447);
									{	/* Coerce/coerce.scm 169 */
										obj_t BgL_method3588z00_2104;

										{	/* Coerce/coerce.scm 169 */
											BgL_objectz00_bglt BgL_objz00_2105;

											BgL_objz00_2105 = (BgL_objectz00_bglt) (BgL_nodez00_2100);
											{	/* Coerce/coerce.scm 169 */
												long BgL_objzd2classzd2numz00_2106;

												BgL_objzd2classzd2numz00_2106 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2105);
												{	/* Coerce/coerce.scm 169 */
													obj_t BgL_arg2643z00_2107;

													BgL_arg2643z00_2107 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 169 */
														obj_t BgL_arrayz00_2109;

														int BgL_offsetz00_2110;

														BgL_arrayz00_2109 = BgL_arg2643z00_2107;
														BgL_offsetz00_2110 =
															(int) (BgL_objzd2classzd2numz00_2106);
														{	/* Coerce/coerce.scm 169 */
															long BgL_offsetz00_2111;

															BgL_offsetz00_2111 =
																((long) (BgL_offsetz00_2110) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 169 */
																long BgL_modz00_2112;

																{	/* Coerce/coerce.scm 169 */
																	int BgL_arg2645z00_2113;

																	BgL_arg2645z00_2113 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 169 */
																		long BgL_auxz00_4922;

																		BgL_auxz00_4922 =
																			(long) (BgL_arg2645z00_2113);
																		BgL_modz00_2112 =
																			(BgL_offsetz00_2111 / BgL_auxz00_4922);
																}}
																{	/* Coerce/coerce.scm 169 */
																	long BgL_restz00_2114;

																	{	/* Coerce/coerce.scm 169 */
																		int BgL_arg2644z00_2115;

																		BgL_arg2644z00_2115 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 169 */
																			long BgL_auxz00_4926;

																			BgL_auxz00_4926 =
																				(long) (BgL_arg2644z00_2115);
																			BgL_restz00_2114 =
																				(BgL_offsetz00_2111 % BgL_auxz00_4926);
																	}}
																	{	/* Coerce/coerce.scm 169 */

																		BgL_method3588z00_2104 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2109,
																				(int) (BgL_modz00_2112)),
																			(int) (BgL_restz00_2114));
										}}}}}}}}
										BgL_res3961z00_2129 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2104) (BgL_method3588z00_2104,
												(obj_t) (BgL_nodez00_2100), BgL_callerz00_1445,
												(obj_t) (BgL_arg3747z00_1459), BBOOL(BgL_safez00_2103),
												BEOA));
								}}
								BgL_arg3742z00_1456 = BgL_res3961z00_2129;
						}}
						{	/* Coerce/coerce.scm 169 */
							obj_t BgL_auxz00_4939;

							BgL_auxz00_4939 = (obj_t) (BgL_arg3742z00_1456);
							SET_CAR(BgL_arg3741z00_1455, BgL_auxz00_4939);
					}}
					BgL_auxz00_4863 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1444),
						(BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00),
						(BgL_typez00_bglt) (BgL_toz00_1446), CBOOL(BgL_safez00_1447));
					return (obj_t) (BgL_auxz00_4863);
				}
			}
		}
	}



/* coerce!-getfield3602 */
	obj_t BGl_coercez12zd2getfield3602zc0zzcoerce_coercez00(obj_t BgL_envz00_3387,
		obj_t BgL_nodez00_3388, obj_t BgL_callerz00_3389, obj_t BgL_toz00_3390,
		obj_t BgL_safez00_3391)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 155 */
			{
				BgL_getfieldz00_bglt BgL_nodez00_1430;

				obj_t BgL_callerz00_1431;

				obj_t BgL_toz00_1432;

				obj_t BgL_safez00_1433;

				{	/* Coerce/coerce.scm 156 */
					BgL_nodez00_bglt BgL_auxz00_4949;

					BgL_nodez00_1430 = (BgL_getfieldz00_bglt) (BgL_nodez00_3388);
					BgL_callerz00_1431 = BgL_callerz00_3389;
					BgL_toz00_1432 = BgL_toz00_3390;
					BgL_safez00_1433 = BgL_safez00_3391;
					{	/* Coerce/coerce.scm 160 */
						obj_t BgL_arg3731z00_1437;

						BgL_nodez00_bglt BgL_arg3732z00_1438;

						{
							BgL_externz00_bglt BgL_auxz00_4950;

							BgL_auxz00_4950 = (BgL_externz00_bglt) (BgL_nodez00_1430);
							BgL_arg3731z00_1437 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4950))->BgL_exprza2za2);
						}
						{	/* Coerce/coerce.scm 160 */
							obj_t BgL_arg3733z00_1439;

							{	/* Coerce/coerce.scm 160 */
								obj_t BgL_pairz00_2023;

								{
									BgL_externz00_bglt BgL_auxz00_4953;

									BgL_auxz00_4953 = (BgL_externz00_bglt) (BgL_nodez00_1430);
									BgL_pairz00_2023 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_4953))->
										BgL_exprza2za2);
								}
								BgL_arg3733z00_1439 = CAR(BgL_pairz00_2023);
							}
							{	/* Coerce/coerce.scm 160 */
								BgL_nodez00_bglt BgL_res3955z00_2053;

								{	/* Coerce/coerce.scm 160 */
									BgL_nodez00_bglt BgL_nodez00_2024;

									BgL_typez00_bglt BgL_toz00_2026;

									bool_t BgL_safez00_2027;

									BgL_nodez00_2024 = (BgL_nodez00_bglt) (BgL_arg3733z00_1439);
									BgL_toz00_2026 =
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
									BgL_safez00_2027 = CBOOL(BgL_safez00_1433);
									{	/* Coerce/coerce.scm 160 */
										obj_t BgL_method3588z00_2028;

										{	/* Coerce/coerce.scm 160 */
											BgL_objectz00_bglt BgL_objz00_2029;

											BgL_objz00_2029 = (BgL_objectz00_bglt) (BgL_nodez00_2024);
											{	/* Coerce/coerce.scm 160 */
												long BgL_objzd2classzd2numz00_2030;

												BgL_objzd2classzd2numz00_2030 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2029);
												{	/* Coerce/coerce.scm 160 */
													obj_t BgL_arg2643z00_2031;

													BgL_arg2643z00_2031 =
														PROCEDURE_REF
														(BGl_coercez12zd2envzc0zzcoerce_coercez00,
														(int) (((long) 1)));
													{	/* Coerce/coerce.scm 160 */
														obj_t BgL_arrayz00_2033;

														int BgL_offsetz00_2034;

														BgL_arrayz00_2033 = BgL_arg2643z00_2031;
														BgL_offsetz00_2034 =
															(int) (BgL_objzd2classzd2numz00_2030);
														{	/* Coerce/coerce.scm 160 */
															long BgL_offsetz00_2035;

															BgL_offsetz00_2035 =
																((long) (BgL_offsetz00_2034) - OBJECT_TYPE);
															{	/* Coerce/coerce.scm 160 */
																long BgL_modz00_2036;

																{	/* Coerce/coerce.scm 160 */
																	int BgL_arg2645z00_2037;

																	BgL_arg2645z00_2037 = (int) (((long) 16));
																	{	/* Coerce/coerce.scm 160 */
																		long BgL_auxz00_4968;

																		BgL_auxz00_4968 =
																			(long) (BgL_arg2645z00_2037);
																		BgL_modz00_2036 =
																			(BgL_offsetz00_2035 / BgL_auxz00_4968);
																}}
																{	/* Coerce/coerce.scm 160 */
																	long BgL_restz00_2038;

																	{	/* Coerce/coerce.scm 160 */
																		int BgL_arg2644z00_2039;

																		BgL_arg2644z00_2039 = (int) (((long) 16));
																		{	/* Coerce/coerce.scm 160 */
																			long BgL_auxz00_4972;

																			BgL_auxz00_4972 =
																				(long) (BgL_arg2644z00_2039);
																			BgL_restz00_2038 =
																				(BgL_offsetz00_2035 % BgL_auxz00_4972);
																	}}
																	{	/* Coerce/coerce.scm 160 */

																		BgL_method3588z00_2028 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2033,
																				(int) (BgL_modz00_2036)),
																			(int) (BgL_restz00_2038));
										}}}}}}}}
										BgL_res3955z00_2053 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3588z00_2028) (BgL_method3588z00_2028,
												(obj_t) (BgL_nodez00_2024), BgL_callerz00_1431,
												(obj_t) (BgL_toz00_2026), BBOOL(BgL_safez00_2027),
												BEOA));
								}}
								BgL_arg3732z00_1438 = BgL_res3955z00_2053;
						}}
						{	/* Coerce/coerce.scm 160 */
							obj_t BgL_auxz00_4985;

							BgL_auxz00_4985 = (obj_t) (BgL_arg3732z00_1438);
							SET_CAR(BgL_arg3731z00_1437, BgL_auxz00_4985);
					}}
					{	/* Coerce/coerce.scm 161 */
						BgL_typez00_bglt BgL_arg3735z00_1441;

						BgL_arg3735z00_1441 =
							(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1430))->BgL_ftypez00);
						BgL_auxz00_4949 =
							BGl_convertz12z12zzcoerce_convertz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1430), BgL_arg3735z00_1441,
							(BgL_typez00_bglt) (BgL_toz00_1432), CBOOL(BgL_safez00_1433));
					}
					return (obj_t) (BgL_auxz00_4949);
				}
			}
		}
	}



/* coerce!-extern3600 */
	obj_t BGl_coercez12zd2extern3600zc0zzcoerce_coercez00(obj_t BgL_envz00_3392,
		obj_t BgL_nodez00_3393, obj_t BgL_callerz00_3394, obj_t BgL_toz00_3395,
		obj_t BgL_safez00_3396)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 140 */
			{
				BgL_externz00_bglt BgL_nodez00_1409;

				obj_t BgL_callerz00_1410;

				obj_t BgL_toz00_1411;

				obj_t BgL_safez00_1412;

				{	/* Coerce/coerce.scm 141 */
					BgL_nodez00_bglt BgL_auxz00_4995;

					BgL_nodez00_1409 = (BgL_externz00_bglt) (BgL_nodez00_3393);
					BgL_callerz00_1410 = BgL_callerz00_3394;
					BgL_toz00_1411 = BgL_toz00_3395;
					BgL_safez00_1412 = BgL_safez00_3396;
					{
						obj_t BgL_valuesz00_1418;

						{	/* Coerce/coerce.scm 142 */
							obj_t BgL_arg3721z00_1417;

							BgL_arg3721z00_1417 =
								(((BgL_externz00_bglt) CREF(BgL_nodez00_1409))->BgL_exprza2za2);
							BgL_valuesz00_1418 = BgL_arg3721z00_1417;
						BgL_zc3anonymousza33722ze3z83_1419:
							if (NULLP(BgL_valuesz00_1418))
								{	/* Coerce/coerce.scm 143 */
									BgL_auxz00_4995 =
										BGl_convertz12z12zzcoerce_convertz00(
										(BgL_nodez00_bglt) (BgL_nodez00_1409),
										BGl_getzd2typezd2zztype_typeofz00(
											(BgL_nodez00_bglt) (BgL_nodez00_1409)),
										(BgL_typez00_bglt) (BgL_toz00_1411),
										CBOOL(BgL_safez00_1412));
								}
							else
								{	/* Coerce/coerce.scm 143 */
									{	/* Coerce/coerce.scm 146 */
										BgL_nodez00_bglt BgL_arg3725z00_1422;

										{	/* Coerce/coerce.scm 146 */
											obj_t BgL_arg3726z00_1423;

											BgL_typez00_bglt BgL_arg3727z00_1424;

											BgL_arg3726z00_1423 = CAR(BgL_valuesz00_1418);
											{	/* Coerce/coerce.scm 148 */
												obj_t BgL_arg3728z00_1425;

												BgL_arg3728z00_1425 = CAR(BgL_valuesz00_1418);
												BgL_arg3727z00_1424 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3728z00_1425));
											}
											{	/* Coerce/coerce.scm 146 */
												BgL_nodez00_bglt BgL_res3952z00_2017;

												{	/* Coerce/coerce.scm 146 */
													BgL_nodez00_bglt BgL_nodez00_1988;

													bool_t BgL_safez00_1991;

													BgL_nodez00_1988 =
														(BgL_nodez00_bglt) (BgL_arg3726z00_1423);
													BgL_safez00_1991 = CBOOL(BgL_safez00_1412);
													{	/* Coerce/coerce.scm 146 */
														obj_t BgL_method3588z00_1992;

														{	/* Coerce/coerce.scm 146 */
															BgL_objectz00_bglt BgL_objz00_1993;

															BgL_objz00_1993 =
																(BgL_objectz00_bglt) (BgL_nodez00_1988);
															{	/* Coerce/coerce.scm 146 */
																long BgL_objzd2classzd2numz00_1994;

																BgL_objzd2classzd2numz00_1994 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1993);
																{	/* Coerce/coerce.scm 146 */
																	obj_t BgL_arg2643z00_1995;

																	BgL_arg2643z00_1995 =
																		PROCEDURE_REF
																		(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																		(int) (((long) 1)));
																	{	/* Coerce/coerce.scm 146 */
																		obj_t BgL_arrayz00_1997;

																		int BgL_offsetz00_1998;

																		BgL_arrayz00_1997 = BgL_arg2643z00_1995;
																		BgL_offsetz00_1998 =
																			(int) (BgL_objzd2classzd2numz00_1994);
																		{	/* Coerce/coerce.scm 146 */
																			long BgL_offsetz00_1999;

																			BgL_offsetz00_1999 =
																				(
																				(long) (BgL_offsetz00_1998) -
																				OBJECT_TYPE);
																			{	/* Coerce/coerce.scm 146 */
																				long BgL_modz00_2000;

																				{	/* Coerce/coerce.scm 146 */
																					int BgL_arg2645z00_2001;

																					BgL_arg2645z00_2001 =
																						(int) (((long) 16));
																					{	/* Coerce/coerce.scm 146 */
																						long BgL_auxz00_5019;

																						BgL_auxz00_5019 =
																							(long) (BgL_arg2645z00_2001);
																						BgL_modz00_2000 =
																							(BgL_offsetz00_1999 /
																							BgL_auxz00_5019);
																				}}
																				{	/* Coerce/coerce.scm 146 */
																					long BgL_restz00_2002;

																					{	/* Coerce/coerce.scm 146 */
																						int BgL_arg2644z00_2003;

																						BgL_arg2644z00_2003 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 146 */
																							long BgL_auxz00_5023;

																							BgL_auxz00_5023 =
																								(long) (BgL_arg2644z00_2003);
																							BgL_restz00_2002 =
																								(BgL_offsetz00_1999 %
																								BgL_auxz00_5023);
																					}}
																					{	/* Coerce/coerce.scm 146 */

																						BgL_method3588z00_1992 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1997,
																								(int) (BgL_modz00_2000)),
																							(int) (BgL_restz00_2002));
														}}}}}}}}
														BgL_res3952z00_2017 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3588z00_1992) (BgL_method3588z00_1992,
																(obj_t) (BgL_nodez00_1988), BgL_callerz00_1410,
																(obj_t) (BgL_arg3727z00_1424),
																BBOOL(BgL_safez00_1991), BEOA));
												}}
												BgL_arg3725z00_1422 = BgL_res3952z00_2017;
										}}
										{	/* Coerce/coerce.scm 146 */
											obj_t BgL_auxz00_5036;

											BgL_auxz00_5036 = (obj_t) (BgL_arg3725z00_1422);
											SET_CAR(BgL_valuesz00_1418, BgL_auxz00_5036);
									}}
									{
										obj_t BgL_valuesz00_5039;

										BgL_valuesz00_5039 = CDR(BgL_valuesz00_1418);
										BgL_valuesz00_1418 = BgL_valuesz00_5039;
										goto BgL_zc3anonymousza33722ze3z83_1419;
									}
								}
						}
					}
					return (obj_t) (BgL_auxz00_4995);
				}
			}
		}
	}



/* coerce!-sequence3598 */
	obj_t BGl_coercez12zd2sequence3598zc0zzcoerce_coercez00(obj_t BgL_envz00_3397,
		obj_t BgL_nodez00_3398, obj_t BgL_callerz00_3399, obj_t BgL_toz00_3400,
		obj_t BgL_safez00_3401)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 121 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1386;

				obj_t BgL_callerz00_1387;

				obj_t BgL_toz00_1388;

				obj_t BgL_safez00_1389;

				{	/* Coerce/coerce.scm 122 */
					BgL_sequencez00_bglt BgL_auxz00_5043;

					BgL_nodez00_1386 = (BgL_sequencez00_bglt) (BgL_nodez00_3398);
					BgL_callerz00_1387 = BgL_callerz00_3399;
					BgL_toz00_1388 = BgL_toz00_3400;
					BgL_safez00_1389 = BgL_safez00_3401;
					{
						obj_t BgL_hookz00_1395;

						{	/* Coerce/coerce.scm 123 */
							obj_t BgL_arg3709z00_1394;

							BgL_arg3709z00_1394 =
								(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1386))->BgL_nodesz00);
							BgL_hookz00_1395 = BgL_arg3709z00_1394;
						BgL_zc3anonymousza33710ze3z83_1396:
							if (NULLP(CDR(BgL_hookz00_1395)))
								{	/* Coerce/coerce.scm 124 */
									{	/* Coerce/coerce.scm 126 */
										BgL_nodez00_bglt BgL_arg3712z00_1398;

										{	/* Coerce/coerce.scm 126 */
											obj_t BgL_arg3713z00_1399;

											BgL_arg3713z00_1399 = CAR(BgL_hookz00_1395);
											{	/* Coerce/coerce.scm 126 */
												BgL_nodez00_bglt BgL_res3946z00_1946;

												{	/* Coerce/coerce.scm 126 */
													BgL_nodez00_bglt BgL_nodez00_1917;

													BgL_typez00_bglt BgL_toz00_1919;

													bool_t BgL_safez00_1920;

													BgL_nodez00_1917 =
														(BgL_nodez00_bglt) (BgL_arg3713z00_1399);
													BgL_toz00_1919 = (BgL_typez00_bglt) (BgL_toz00_1388);
													BgL_safez00_1920 = CBOOL(BgL_safez00_1389);
													{	/* Coerce/coerce.scm 126 */
														obj_t BgL_method3588z00_1921;

														{	/* Coerce/coerce.scm 126 */
															BgL_objectz00_bglt BgL_objz00_1922;

															BgL_objz00_1922 =
																(BgL_objectz00_bglt) (BgL_nodez00_1917);
															{	/* Coerce/coerce.scm 126 */
																long BgL_objzd2classzd2numz00_1923;

																BgL_objzd2classzd2numz00_1923 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1922);
																{	/* Coerce/coerce.scm 126 */
																	obj_t BgL_arg2643z00_1924;

																	BgL_arg2643z00_1924 =
																		PROCEDURE_REF
																		(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																		(int) (((long) 1)));
																	{	/* Coerce/coerce.scm 126 */
																		obj_t BgL_arrayz00_1926;

																		int BgL_offsetz00_1927;

																		BgL_arrayz00_1926 = BgL_arg2643z00_1924;
																		BgL_offsetz00_1927 =
																			(int) (BgL_objzd2classzd2numz00_1923);
																		{	/* Coerce/coerce.scm 126 */
																			long BgL_offsetz00_1928;

																			BgL_offsetz00_1928 =
																				(
																				(long) (BgL_offsetz00_1927) -
																				OBJECT_TYPE);
																			{	/* Coerce/coerce.scm 126 */
																				long BgL_modz00_1929;

																				{	/* Coerce/coerce.scm 126 */
																					int BgL_arg2645z00_1930;

																					BgL_arg2645z00_1930 =
																						(int) (((long) 16));
																					{	/* Coerce/coerce.scm 126 */
																						long BgL_auxz00_5060;

																						BgL_auxz00_5060 =
																							(long) (BgL_arg2645z00_1930);
																						BgL_modz00_1929 =
																							(BgL_offsetz00_1928 /
																							BgL_auxz00_5060);
																				}}
																				{	/* Coerce/coerce.scm 126 */
																					long BgL_restz00_1931;

																					{	/* Coerce/coerce.scm 126 */
																						int BgL_arg2644z00_1932;

																						BgL_arg2644z00_1932 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 126 */
																							long BgL_auxz00_5064;

																							BgL_auxz00_5064 =
																								(long) (BgL_arg2644z00_1932);
																							BgL_restz00_1931 =
																								(BgL_offsetz00_1928 %
																								BgL_auxz00_5064);
																					}}
																					{	/* Coerce/coerce.scm 126 */

																						BgL_method3588z00_1921 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1926,
																								(int) (BgL_modz00_1929)),
																							(int) (BgL_restz00_1931));
														}}}}}}}}
														BgL_res3946z00_1946 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3588z00_1921) (BgL_method3588z00_1921,
																(obj_t) (BgL_nodez00_1917), BgL_callerz00_1387,
																(obj_t) (BgL_toz00_1919),
																BBOOL(BgL_safez00_1920), BEOA));
												}}
												BgL_arg3712z00_1398 = BgL_res3946z00_1946;
										}}
										{	/* Coerce/coerce.scm 126 */
											obj_t BgL_auxz00_5077;

											BgL_auxz00_5077 = (obj_t) (BgL_arg3712z00_1398);
											SET_CAR(BgL_hookz00_1395, BgL_auxz00_5077);
									}}
									BgL_auxz00_5043 = BgL_nodez00_1386;
								}
							else
								{	/* Coerce/coerce.scm 124 */
									{	/* Coerce/coerce.scm 131 */
										BgL_nodez00_bglt BgL_arg3714z00_1400;

										{	/* Coerce/coerce.scm 131 */
											obj_t BgL_arg3715z00_1401;

											BgL_typez00_bglt BgL_arg3716z00_1402;

											BgL_arg3715z00_1401 = CAR(BgL_hookz00_1395);
											{	/* Coerce/coerce.scm 133 */
												obj_t BgL_arg3717z00_1403;

												BgL_arg3717z00_1403 = CAR(BgL_hookz00_1395);
												BgL_arg3716z00_1402 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3717z00_1403));
											}
											{	/* Coerce/coerce.scm 131 */
												BgL_nodez00_bglt BgL_res3949z00_1980;

												{	/* Coerce/coerce.scm 131 */
													BgL_nodez00_bglt BgL_nodez00_1951;

													bool_t BgL_safez00_1954;

													BgL_nodez00_1951 =
														(BgL_nodez00_bglt) (BgL_arg3715z00_1401);
													BgL_safez00_1954 = CBOOL(BgL_safez00_1389);
													{	/* Coerce/coerce.scm 131 */
														obj_t BgL_method3588z00_1955;

														{	/* Coerce/coerce.scm 131 */
															BgL_objectz00_bglt BgL_objz00_1956;

															BgL_objz00_1956 =
																(BgL_objectz00_bglt) (BgL_nodez00_1951);
															{	/* Coerce/coerce.scm 131 */
																long BgL_objzd2classzd2numz00_1957;

																BgL_objzd2classzd2numz00_1957 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1956);
																{	/* Coerce/coerce.scm 131 */
																	obj_t BgL_arg2643z00_1958;

																	BgL_arg2643z00_1958 =
																		PROCEDURE_REF
																		(BGl_coercez12zd2envzc0zzcoerce_coercez00,
																		(int) (((long) 1)));
																	{	/* Coerce/coerce.scm 131 */
																		obj_t BgL_arrayz00_1960;

																		int BgL_offsetz00_1961;

																		BgL_arrayz00_1960 = BgL_arg2643z00_1958;
																		BgL_offsetz00_1961 =
																			(int) (BgL_objzd2classzd2numz00_1957);
																		{	/* Coerce/coerce.scm 131 */
																			long BgL_offsetz00_1962;

																			BgL_offsetz00_1962 =
																				(
																				(long) (BgL_offsetz00_1961) -
																				OBJECT_TYPE);
																			{	/* Coerce/coerce.scm 131 */
																				long BgL_modz00_1963;

																				{	/* Coerce/coerce.scm 131 */
																					int BgL_arg2645z00_1964;

																					BgL_arg2645z00_1964 =
																						(int) (((long) 16));
																					{	/* Coerce/coerce.scm 131 */
																						long BgL_auxz00_5094;

																						BgL_auxz00_5094 =
																							(long) (BgL_arg2645z00_1964);
																						BgL_modz00_1963 =
																							(BgL_offsetz00_1962 /
																							BgL_auxz00_5094);
																				}}
																				{	/* Coerce/coerce.scm 131 */
																					long BgL_restz00_1965;

																					{	/* Coerce/coerce.scm 131 */
																						int BgL_arg2644z00_1966;

																						BgL_arg2644z00_1966 =
																							(int) (((long) 16));
																						{	/* Coerce/coerce.scm 131 */
																							long BgL_auxz00_5098;

																							BgL_auxz00_5098 =
																								(long) (BgL_arg2644z00_1966);
																							BgL_restz00_1965 =
																								(BgL_offsetz00_1962 %
																								BgL_auxz00_5098);
																					}}
																					{	/* Coerce/coerce.scm 131 */

																						BgL_method3588z00_1955 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1960,
																								(int) (BgL_modz00_1963)),
																							(int) (BgL_restz00_1965));
														}}}}}}}}
														BgL_res3949z00_1980 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3588z00_1955) (BgL_method3588z00_1955,
																(obj_t) (BgL_nodez00_1951), BgL_callerz00_1387,
																(obj_t) (BgL_arg3716z00_1402),
																BBOOL(BgL_safez00_1954), BEOA));
												}}
												BgL_arg3714z00_1400 = BgL_res3949z00_1980;
										}}
										{	/* Coerce/coerce.scm 131 */
											obj_t BgL_auxz00_5111;

											BgL_auxz00_5111 = (obj_t) (BgL_arg3714z00_1400);
											SET_CAR(BgL_hookz00_1395, BgL_auxz00_5111);
									}}
									{
										obj_t BgL_hookz00_5114;

										BgL_hookz00_5114 = CDR(BgL_hookz00_1395);
										BgL_hookz00_1395 = BgL_hookz00_5114;
										goto BgL_zc3anonymousza33710ze3z83_1396;
									}
								}
						}
					}
					return (obj_t) (BgL_auxz00_5043);
				}
			}
		}
	}



/* coerce!-closure3596 */
	obj_t BGl_coercez12zd2closure3596zc0zzcoerce_coercez00(obj_t BgL_envz00_3402,
		obj_t BgL_nodez00_3403, obj_t BgL_callerz00_3404, obj_t BgL_toz00_3405,
		obj_t BgL_safez00_3406)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 115 */
			{
				BgL_closurez00_bglt BgL_nodez00_1375;

				obj_t BgL_callerz00_1376;

				obj_t BgL_toz00_1377;

				obj_t BgL_safez00_1378;

				BgL_nodez00_1375 = (BgL_closurez00_bglt) (BgL_nodez00_3403);
				BgL_callerz00_1376 = BgL_callerz00_3404;
				BgL_toz00_1377 = BgL_toz00_3405;
				BgL_safez00_1378 = BgL_safez00_3406;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string4052z00zzcoerce_coercez00,
					BGl_string4079z00zzcoerce_coercez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1375)));
			}
		}
	}



/* coerce!-var3594 */
	obj_t BGl_coercez12zd2var3594zc0zzcoerce_coercez00(obj_t BgL_envz00_3407,
		obj_t BgL_nodez00_3408, obj_t BgL_callerz00_3409, obj_t BgL_toz00_3410,
		obj_t BgL_safez00_3411)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 100 */
			{
				BgL_varz00_bglt BgL_nodez00_1360;

				obj_t BgL_callerz00_1361;

				obj_t BgL_toz00_1362;

				obj_t BgL_safez00_1363;

				BgL_nodez00_1360 = (BgL_varz00_bglt) (BgL_nodez00_3408);
				BgL_callerz00_1361 = BgL_callerz00_3409;
				BgL_toz00_1362 = BgL_toz00_3410;
				BgL_safez00_1363 = BgL_safez00_3411;
				{	/* Coerce/coerce.scm 102 */
					BgL_typez00_bglt BgL_ntypez00_1367;

					BgL_typez00_bglt BgL_vtypez00_1368;

					BgL_ntypez00_1367 =
						BGl_getzd2typezd2zztype_typeofz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1360));
					{	/* Coerce/coerce.scm 103 */
						BgL_variablez00_bglt BgL_obj1870z00_1909;

						BgL_obj1870z00_1909 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1360))->BgL_variablez00);
						BgL_vtypez00_1368 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1870z00_1909))->BgL_typez00);
					}
					if (((obj_t) (BgL_vtypez00_1368) == BgL_toz00_1362))
						{	/* Coerce/coerce.scm 105 */
							return (obj_t) (BgL_nodez00_1360);
						}
					else
						{	/* Coerce/coerce.scm 105 */
							if (((obj_t) (BgL_ntypez00_1367) == (obj_t) (BgL_vtypez00_1368)))
								{	/* Coerce/coerce.scm 107 */
									return
										(obj_t) (BGl_convertz12z12zzcoerce_convertz00(
											(BgL_nodez00_bglt) (BgL_nodez00_1360), BgL_ntypez00_1367,
											(BgL_typez00_bglt) (BgL_toz00_1362),
											CBOOL(BgL_safez00_1363)));
								}
							else
								{	/* Coerce/coerce.scm 110 */
									BgL_nodez00_bglt BgL_arg3702z00_1371;

									BgL_arg3702z00_1371 =
										BGl_convertz12z12zzcoerce_convertz00(
										(BgL_nodez00_bglt) (BgL_nodez00_1360), BgL_vtypez00_1368,
										BgL_ntypez00_1367, ((bool_t) 0));
									return (obj_t) (BGl_convertz12z12zzcoerce_convertz00
										(BgL_arg3702z00_1371, BgL_ntypez00_1367,
											(BgL_typez00_bglt) (BgL_toz00_1362),
											CBOOL(BgL_safez00_1363)));
								}
						}
				}
			}
		}
	}



/* coerce!-kwote3592 */
	obj_t BGl_coercez12zd2kwote3592zc0zzcoerce_coercez00(obj_t BgL_envz00_3412,
		obj_t BgL_nodez00_3413, obj_t BgL_callerz00_3414, obj_t BgL_toz00_3415,
		obj_t BgL_safez00_3416)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 85 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1351;

				obj_t BgL_callerz00_1352;

				obj_t BgL_toz00_1353;

				obj_t BgL_safez00_1354;

				{	/* Coerce/coerce.scm 86 */
					BgL_nodez00_bglt BgL_auxz00_5146;

					BgL_nodez00_1351 = (BgL_kwotez00_bglt) (BgL_nodez00_3413);
					BgL_callerz00_1352 = BgL_callerz00_3414;
					BgL_toz00_1353 = BgL_toz00_3415;
					BgL_safez00_1354 = BgL_safez00_3416;
					BgL_auxz00_5146 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1351),
						BGl_getzd2typezd2zztype_typeofz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1351)),
						(BgL_typez00_bglt) (BgL_toz00_1353), CBOOL(BgL_safez00_1354));
					return (obj_t) (BgL_auxz00_5146);
				}
			}
		}
	}



/* coerce!-atom3590 */
	obj_t BGl_coercez12zd2atom3590zc0zzcoerce_coercez00(obj_t BgL_envz00_3417,
		obj_t BgL_nodez00_3418, obj_t BgL_callerz00_3419, obj_t BgL_toz00_3420,
		obj_t BgL_safez00_3421)
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 79 */
			{
				BgL_atomz00_bglt BgL_nodez00_1342;

				obj_t BgL_callerz00_1343;

				obj_t BgL_toz00_1344;

				obj_t BgL_safez00_1345;

				{	/* Coerce/coerce.scm 80 */
					BgL_nodez00_bglt BgL_auxz00_5155;

					BgL_nodez00_1342 = (BgL_atomz00_bglt) (BgL_nodez00_3418);
					BgL_callerz00_1343 = BgL_callerz00_3419;
					BgL_toz00_1344 = BgL_toz00_3420;
					BgL_safez00_1345 = BgL_safez00_3421;
					BgL_auxz00_5155 =
						BGl_convertz12z12zzcoerce_convertz00(
						(BgL_nodez00_bglt) (BgL_nodez00_1342),
						BGl_getzd2typezd2zztype_typeofz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1342)),
						(BgL_typez00_bglt) (BgL_toz00_1344), CBOOL(BgL_safez00_1345));
					return (obj_t) (BgL_auxz00_5155);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_coercez00()
	{
		AN_OBJECT;
		{	/* Coerce/coerce.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 451733024),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 269647501),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(((long) 30250399),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 65499856),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_appz00(((long) 130975358),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_applyz00(((long) 414524937),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(((long) 427175850),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string4080z00zzcoerce_coercez00));
		}
	}

#ifdef __cplusplus
}
#endif
