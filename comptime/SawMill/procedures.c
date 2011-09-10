/*===========================================================================*/
/*   (SawMill/procedures.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/procedures.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_getzd2boxzd2ref3370z00zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_getzd2app3331zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2castzd2null3357z00zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_getzd2jumpzd2exzd2it3363zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzsaw_proceduresz00();
	static obj_t BGl_getzd2makezd2box3367z00zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2getfield3339zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getza2za2zzsaw_proceduresz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t
		BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2procedureszd2zzsaw_proceduresz00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern obj_t BGl_vallocz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_proceduresz00();
	static obj_t BGl_getzd2cast3359zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2letzd2fun3328z00zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_getzd2appzd2ly3333z00zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__getzd2default3311zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2setfield3341zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_getzd2letzd2var3318z00zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_getzd2var3316zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2conditional3324zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_getzd2vref3348zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl__getz00zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2setq3320zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl_getzd2valloc3345zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzsaw_proceduresz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_getzd2isa3355zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_getzd2pragma3337zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_proceduresz00 = BUNSPEC;
	static obj_t BGl_getzd2select3326zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getz00zzsaw_proceduresz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzsaw_proceduresz00();
	extern obj_t BGl_pragmaz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_getzd2fail3365zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_proceduresz00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_isaz00zzast_nodez00;
	static obj_t BGl_zc3anonymousza33375ze3z83zzsaw_proceduresz00(obj_t, obj_t);
	static obj_t BGl_getzd2default3311zd2zzsaw_proceduresz00(BgL_nodez00_bglt,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_getzd2setzd2exzd2it3361zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_getzd2new3343zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t);
	static obj_t BGl_getzd2sequence3322zd2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2funcall3335zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	static obj_t BGl_getzd2vsetz123351zc0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_getzd2boxzd2setz123372z12zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static obj_t BGl_getzd2vlength3353zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_proceduresz00();
	static obj_t BGl_getzd2atom3314zd2zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_getzd2envzd2zzsaw_proceduresz00,
		BgL_bgl__getza700za7za7saw_pro3648za7, BGl__getz00zzsaw_proceduresz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2procedureszd2envz00zzsaw_proceduresz00,
		BgL_bgl__getza7d2procedure3649za7,
		BGl__getzd2procedureszd2zzsaw_proceduresz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2default3311zd2envz00zzsaw_proceduresz00,
		BgL_bgl__getza7d2default333650za7,
		BGl__getzd2default3311zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3616z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2atom3314za7d3651z00,
		BGl_getzd2atom3314zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3617z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2var3316za7d23652z00,
		BGl_getzd2var3316zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3618z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2letza7d2var33653z00,
		BGl_getzd2letzd2var3318z00zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3620z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2sequence333654za7,
		BGl_getzd2sequence3322zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3619z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2setq3320za7d3655z00,
		BGl_getzd2setq3320zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3621z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2conditiona3656za7,
		BGl_getzd2conditional3324zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3622z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2select33263657za7,
		BGl_getzd2select3326zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3623z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2letza7d2fun33658z00,
		BGl_getzd2letzd2fun3328z00zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3624z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2app3331za7d23659z00,
		BGl_getzd2app3331zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3625z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2appza7d2ly333660z00,
		BGl_getzd2appzd2ly3333z00zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3626z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2funcall3333661za7,
		BGl_getzd2funcall3335zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3627z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2pragma33373662za7,
		BGl_getzd2pragma3337zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3628z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2getfield333663za7,
		BGl_getzd2getfield3339zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3630z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2new3343za7d23664z00,
		BGl_getzd2new3343zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3629z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2setfield333665za7,
		BGl_getzd2setfield3341zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3631z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2valloc33453666za7,
		BGl_getzd2valloc3345zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3632z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2vref3348za7d3667z00,
		BGl_getzd2vref3348zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3633z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2vsetza7123353668z00,
		BGl_getzd2vsetz123351zc0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3634z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2vlength3353669za7,
		BGl_getzd2vlength3353zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3635z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2isa3355za7d23670z00,
		BGl_getzd2isa3355zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3636z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2castza7d2nul3671z00,
		BGl_getzd2castzd2null3357z00zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3637z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2cast3359za7d3672z00,
		BGl_getzd2cast3359zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3638z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2setza7d2exza7d3673za7,
		BGl_getzd2setzd2exzd2it3361zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3640z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2fail3365za7d3674z00,
		BGl_getzd2fail3365zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3639z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2jumpza7d2exza73675za7,
		BGl_getzd2jumpzd2exzd2it3363zd2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3641z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2makeza7d2box3676z00,
		BGl_getzd2makezd2box3367z00zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3642z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2boxza7d2ref33677z00,
		BGl_getzd2boxzd2ref3370z00zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3643z00zzsaw_proceduresz00,
		BgL_bgl_getza7d2boxza7d2setza73678za7,
		BGl_getzd2boxzd2setz123372z12zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3614z00zzsaw_proceduresz00,
		BgL_bgl_string3614za700za7za7s3679za7, "get", 3);
	      DEFINE_STRING(BGl_string3615z00zzsaw_proceduresz00,
		BgL_bgl_string3615za700za7za7s3680za7, "hole", 4);
	      DEFINE_STRING(BGl_string3644z00zzsaw_proceduresz00,
		BgL_bgl_string3644za700za7za7s3681za7, "saw_procedures", 14);
	      DEFINE_STRING(BGl_string3645z00zzsaw_proceduresz00,
		BgL_bgl_string3645za700za7za7s3682za7, "__evmeaning_address elight get ",
		31);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long
		BgL_checksumz00_2520, char *BgL_fromz00_2521)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_proceduresz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_proceduresz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_proceduresz00();
					BGl_cnstzd2initzd2zzsaw_proceduresz00();
					BGl_importedzd2moduleszd2initz00zzsaw_proceduresz00();
					BGl_genericzd2initzd2zzsaw_proceduresz00();
					BGl_methodzd2initzd2zzsaw_proceduresz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_proceduresz00()
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_procedures");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_proceduresz00()
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			{	/* SawMill/procedures.scm 1 */
				obj_t BgL_cportz00_2506;

				BgL_cportz00_2506 =
					bgl_open_input_string(BGl_string3645z00zzsaw_proceduresz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2507;

					BgL_iz00_2507 = ((long) 2);
				BgL_loopz00_2508:
					if ((BgL_iz00_2507 == ((long) -1)))
						{	/* SawMill/procedures.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/procedures.scm 1 */
							{	/* SawMill/procedures.scm 1 */
								obj_t BgL_arg3647z00_2510;

								{	/* SawMill/procedures.scm 1 */

									{	/* SawMill/procedures.scm 1 */
										obj_t BgL_locationz00_2512;

										BgL_locationz00_2512 = BBOOL(((bool_t) 0));
										{	/* SawMill/procedures.scm 1 */

											BgL_arg3647z00_2510 =
												BGl_readz00zz__readerz00(BgL_cportz00_2506,
												BgL_locationz00_2512);
										}
									}
								}
								{	/* SawMill/procedures.scm 1 */
									int BgL_auxz00_2540;

									BgL_auxz00_2540 = (int) (BgL_iz00_2507);
									CNST_TABLE_SET(BgL_auxz00_2540, BgL_arg3647z00_2510);
							}}
							{	/* SawMill/procedures.scm 1 */
								int BgL_auxz00_2513;

								BgL_auxz00_2513 = (int) ((BgL_iz00_2507 - ((long) 1)));
								{
									long BgL_iz00_2545;

									BgL_iz00_2545 = (long) (BgL_auxz00_2513);
									BgL_iz00_2507 = BgL_iz00_2545;
									goto BgL_loopz00_2508;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_proceduresz00()
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			return BUNSPEC;
		}
	}



/* get-procedures */
	BGL_EXPORTED_DEF obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 12 */
			{	/* SawMill/procedures.scm 13 */
				obj_t BgL_rz00_836;

				BgL_rz00_836 = MAKE_CELL(BNIL);
				{	/* SawMill/procedures.scm 15 */
					obj_t BgL_zc3anonymousza33375ze3z83_2380;

					BgL_zc3anonymousza33375ze3z83_2380 =
						make_fx_procedure(BGl_zc3anonymousza33375ze3z83zzsaw_proceduresz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza33375ze3z83_2380,
						(int) (((long) 0)), BgL_rz00_836);
					BGl_forzd2eachzd2globalz12z12zzast_envz00
						(BgL_zc3anonymousza33375ze3z83_2380, BNIL);
				}
				{
					obj_t BgL_l3292z00_846;

					BgL_l3292z00_846 = BgL_globalsz00_1;
				BgL_zc3anonymousza33379ze3z83_847:
					if (PAIRP(BgL_l3292z00_846))
						{	/* SawMill/procedures.scm 18 */
							{	/* SawMill/procedures.scm 19 */
								obj_t BgL_globalz00_849;

								BgL_globalz00_849 = CAR(BgL_l3292z00_846);
								{	/* SawMill/procedures.scm 19 */
									obj_t BgL_auxz00_2390;

									{	/* SawMill/procedures.scm 19 */
										obj_t BgL_arg3381z00_850;

										{	/* SawMill/procedures.scm 19 */
											BgL_sfunz00_bglt BgL_obj1884z00_1555;

											{	/* SawMill/procedures.scm 19 */
												BgL_variablez00_bglt BgL_obj1611z00_1554;

												BgL_obj1611z00_1554 =
													(BgL_variablez00_bglt) (BgL_globalz00_849);
												BgL_obj1884z00_1555 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1554))->
														BgL_valuez00));
											}
											BgL_arg3381z00_850 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1555))->
												BgL_bodyz00);
										}
										{	/* SawMill/procedures.scm 19 */
											BgL_nodez00_bglt BgL_ez00_1556;

											obj_t BgL_rz00_1557;

											BgL_ez00_1556 = (BgL_nodez00_bglt) (BgL_arg3381z00_850);
											BgL_rz00_1557 = CELL_REF(BgL_rz00_836);
											{	/* SawMill/procedures.scm 19 */
												obj_t BgL_method3312z00_1558;

												{	/* SawMill/procedures.scm 19 */
													BgL_objectz00_bglt BgL_objz00_1559;

													BgL_objz00_1559 =
														(BgL_objectz00_bglt) (BgL_ez00_1556);
													{	/* SawMill/procedures.scm 19 */
														long BgL_objzd2classzd2numz00_1560;

														BgL_objzd2classzd2numz00_1560 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1559);
														{	/* SawMill/procedures.scm 19 */
															obj_t BgL_arg2643z00_1561;

															BgL_arg2643z00_1561 =
																PROCEDURE_REF
																(BGl_getzd2envzd2zzsaw_proceduresz00,
																(int) (((long) 1)));
															{	/* SawMill/procedures.scm 19 */
																obj_t BgL_arrayz00_1563;

																int BgL_offsetz00_1564;

																BgL_arrayz00_1563 = BgL_arg2643z00_1561;
																BgL_offsetz00_1564 =
																	(int) (BgL_objzd2classzd2numz00_1560);
																{	/* SawMill/procedures.scm 19 */
																	long BgL_offsetz00_1565;

																	BgL_offsetz00_1565 =
																		((long) (BgL_offsetz00_1564) - OBJECT_TYPE);
																	{	/* SawMill/procedures.scm 19 */
																		long BgL_modz00_1566;

																		{	/* SawMill/procedures.scm 19 */
																			int BgL_arg2645z00_1567;

																			BgL_arg2645z00_1567 = (int) (((long) 16));
																			{	/* SawMill/procedures.scm 19 */
																				long BgL_auxz00_2569;

																				BgL_auxz00_2569 =
																					(long) (BgL_arg2645z00_1567);
																				BgL_modz00_1566 =
																					(BgL_offsetz00_1565 /
																					BgL_auxz00_2569);
																		}}
																		{	/* SawMill/procedures.scm 19 */
																			long BgL_restz00_1568;

																			{	/* SawMill/procedures.scm 19 */
																				int BgL_arg2644z00_1569;

																				BgL_arg2644z00_1569 =
																					(int) (((long) 16));
																				{	/* SawMill/procedures.scm 19 */
																					long BgL_auxz00_2573;

																					BgL_auxz00_2573 =
																						(long) (BgL_arg2644z00_1569);
																					BgL_restz00_1568 =
																						(BgL_offsetz00_1565 %
																						BgL_auxz00_2573);
																			}}
																			{	/* SawMill/procedures.scm 19 */

																				BgL_method3312z00_1558 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1563,
																						(int) (BgL_modz00_1566)),
																					(int) (BgL_restz00_1568));
												}}}}}}}}
												BgL_auxz00_2390 =
													PROCEDURE_ENTRY(BgL_method3312z00_1558)
													(BgL_method3312z00_1558, (obj_t) (BgL_ez00_1556),
													BgL_rz00_1557, BEOA);
									}}}
									CELL_SET(BgL_rz00_836, BgL_auxz00_2390);
							}}
							{
								obj_t BgL_l3292z00_2583;

								BgL_l3292z00_2583 = CDR(BgL_l3292z00_846);
								BgL_l3292z00_846 = BgL_l3292z00_2583;
								goto BgL_zc3anonymousza33379ze3z83_847;
							}
						}
					else
						{	/* SawMill/procedures.scm 18 */
							((bool_t) 1);
						}
				}
				return CELL_REF(BgL_rz00_836);
			}
		}
	}



/* _get-procedures */
	obj_t BGl__getzd2procedureszd2zzsaw_proceduresz00(obj_t BgL_envz00_2381,
		obj_t BgL_globalsz00_2382)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 12 */
			return BGl_getzd2procedureszd2zzsaw_proceduresz00(BgL_globalsz00_2382);
		}
	}



/* <anonymous:3375> */
	obj_t BGl_zc3anonymousza33375ze3z83zzsaw_proceduresz00(obj_t BgL_envz00_2383,
		obj_t BgL_globalz00_2385)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 14 */
			{	/* SawMill/procedures.scm 15 */
				obj_t BgL_rz00_2384;

				BgL_rz00_2384 = PROCEDURE_REF(BgL_envz00_2383, (int) (((long) 0)));
				{
					obj_t BgL_globalz00_839;

					BgL_globalz00_839 = BgL_globalz00_2385;
					{	/* SawMill/procedures.scm 15 */
						bool_t BgL_testz00_2588;

						if (CBOOL(BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(
									(BgL_globalz00_bglt) (BgL_globalz00_839))))
							{	/* SawMill/procedures.scm 15 */
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_globalz00_839, CELL_REF(BgL_rz00_2384))))
									{	/* SawMill/procedures.scm 16 */
										BgL_testz00_2588 = ((bool_t) 0);
									}
								else
									{	/* SawMill/procedures.scm 16 */
										BgL_testz00_2588 = ((bool_t) 1);
									}
							}
						else
							{	/* SawMill/procedures.scm 15 */
								BgL_testz00_2588 = ((bool_t) 0);
							}
						if (BgL_testz00_2588)
							{	/* SawMill/procedures.scm 17 */
								obj_t BgL_auxz00_2386;

								BgL_auxz00_2386 =
									MAKE_PAIR(BgL_globalz00_839, CELL_REF(BgL_rz00_2384));
								return CELL_SET(BgL_rz00_2384, BgL_auxz00_2386);
							}
						else
							{	/* SawMill/procedures.scm 15 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* get* */
	obj_t BGl_getza2za2zzsaw_proceduresz00(obj_t BgL_lz00_2, obj_t BgL_rz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 23 */
		BGl_getza2za2zzsaw_proceduresz00:
			if (NULLP(BgL_lz00_2))
				{	/* SawMill/procedures.scm 24 */
					return BgL_rz00_3;
				}
			else
				{	/* SawMill/procedures.scm 26 */
					obj_t BgL_arg3385z00_855;

					obj_t BgL_arg3386z00_856;

					BgL_arg3385z00_855 = CDR(BgL_lz00_2);
					{	/* SawMill/procedures.scm 26 */
						obj_t BgL_arg3387z00_857;

						BgL_arg3387z00_857 = CAR(BgL_lz00_2);
						{	/* SawMill/procedures.scm 26 */
							BgL_nodez00_bglt BgL_ez00_1587;

							BgL_ez00_1587 = (BgL_nodez00_bglt) (BgL_arg3387z00_857);
							{	/* SawMill/procedures.scm 26 */
								obj_t BgL_method3312z00_1589;

								{	/* SawMill/procedures.scm 26 */
									BgL_objectz00_bglt BgL_objz00_1590;

									BgL_objz00_1590 = (BgL_objectz00_bglt) (BgL_ez00_1587);
									{	/* SawMill/procedures.scm 26 */
										long BgL_objzd2classzd2numz00_1591;

										BgL_objzd2classzd2numz00_1591 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1590);
										{	/* SawMill/procedures.scm 26 */
											obj_t BgL_arg2643z00_1592;

											BgL_arg2643z00_1592 =
												PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
												(int) (((long) 1)));
											{	/* SawMill/procedures.scm 26 */
												obj_t BgL_arrayz00_1594;

												int BgL_offsetz00_1595;

												BgL_arrayz00_1594 = BgL_arg2643z00_1592;
												BgL_offsetz00_1595 =
													(int) (BgL_objzd2classzd2numz00_1591);
												{	/* SawMill/procedures.scm 26 */
													long BgL_offsetz00_1596;

													BgL_offsetz00_1596 =
														((long) (BgL_offsetz00_1595) - OBJECT_TYPE);
													{	/* SawMill/procedures.scm 26 */
														long BgL_modz00_1597;

														{	/* SawMill/procedures.scm 26 */
															int BgL_arg2645z00_1598;

															BgL_arg2645z00_1598 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 26 */
																long BgL_auxz00_2610;

																BgL_auxz00_2610 = (long) (BgL_arg2645z00_1598);
																BgL_modz00_1597 =
																	(BgL_offsetz00_1596 / BgL_auxz00_2610);
														}}
														{	/* SawMill/procedures.scm 26 */
															long BgL_restz00_1599;

															{	/* SawMill/procedures.scm 26 */
																int BgL_arg2644z00_1600;

																BgL_arg2644z00_1600 = (int) (((long) 16));
																{	/* SawMill/procedures.scm 26 */
																	long BgL_auxz00_2614;

																	BgL_auxz00_2614 =
																		(long) (BgL_arg2644z00_1600);
																	BgL_restz00_1599 =
																		(BgL_offsetz00_1596 % BgL_auxz00_2614);
															}}
															{	/* SawMill/procedures.scm 26 */

																BgL_method3312z00_1589 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1594,
																		(int) (BgL_modz00_1597)),
																	(int) (BgL_restz00_1599));
								}}}}}}}}
								BgL_arg3386z00_856 =
									PROCEDURE_ENTRY(BgL_method3312z00_1589)
									(BgL_method3312z00_1589, (obj_t) (BgL_ez00_1587), BgL_rz00_3,
									BEOA);
					}}}
					{
						obj_t BgL_rz00_2625;

						obj_t BgL_lz00_2624;

						BgL_lz00_2624 = BgL_arg3385z00_855;
						BgL_rz00_2625 = BgL_arg3386z00_856;
						BgL_rz00_3 = BgL_rz00_2625;
						BgL_lz00_2 = BgL_lz00_2624;
						goto BGl_getza2za2zzsaw_proceduresz00;
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_proceduresz00()
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00,
				BGl_getzd2default3311zd2envz00zzsaw_proceduresz00,
				BGl_nodez00zzast_nodez00, BGl_string3614z00zzsaw_proceduresz00);
		}
	}



/* get */
	obj_t BGl_getz00zzsaw_proceduresz00(BgL_nodez00_bglt BgL_ez00_4,
		obj_t BgL_rz00_5)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 31 */
			{	/* SawMill/procedures.scm 31 */
				obj_t BgL_method3312z00_1614;

				{	/* SawMill/procedures.scm 31 */
					BgL_objectz00_bglt BgL_objz00_1615;

					BgL_objz00_1615 = (BgL_objectz00_bglt) (BgL_ez00_4);
					{	/* SawMill/procedures.scm 31 */
						long BgL_objzd2classzd2numz00_1616;

						BgL_objzd2classzd2numz00_1616 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1615);
						{	/* SawMill/procedures.scm 31 */
							obj_t BgL_arg2643z00_1617;

							BgL_arg2643z00_1617 =
								PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
								(int) (((long) 1)));
							{	/* SawMill/procedures.scm 31 */
								obj_t BgL_arrayz00_1619;

								int BgL_offsetz00_1620;

								BgL_arrayz00_1619 = BgL_arg2643z00_1617;
								BgL_offsetz00_1620 = (int) (BgL_objzd2classzd2numz00_1616);
								{	/* SawMill/procedures.scm 31 */
									long BgL_offsetz00_1621;

									BgL_offsetz00_1621 =
										((long) (BgL_offsetz00_1620) - OBJECT_TYPE);
									{	/* SawMill/procedures.scm 31 */
										long BgL_modz00_1622;

										{	/* SawMill/procedures.scm 31 */
											int BgL_arg2645z00_1623;

											BgL_arg2645z00_1623 = (int) (((long) 16));
											{	/* SawMill/procedures.scm 31 */
												long BgL_auxz00_2635;

												BgL_auxz00_2635 = (long) (BgL_arg2645z00_1623);
												BgL_modz00_1622 =
													(BgL_offsetz00_1621 / BgL_auxz00_2635);
										}}
										{	/* SawMill/procedures.scm 31 */
											long BgL_restz00_1624;

											{	/* SawMill/procedures.scm 31 */
												int BgL_arg2644z00_1625;

												BgL_arg2644z00_1625 = (int) (((long) 16));
												{	/* SawMill/procedures.scm 31 */
													long BgL_auxz00_2639;

													BgL_auxz00_2639 = (long) (BgL_arg2644z00_1625);
													BgL_restz00_1624 =
														(BgL_offsetz00_1621 % BgL_auxz00_2639);
											}}
											{	/* SawMill/procedures.scm 31 */

												BgL_method3312z00_1614 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1619,
														(int) (BgL_modz00_1622)), (int) (BgL_restz00_1624));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3312z00_1614) (BgL_method3312z00_1614,
					(obj_t) (BgL_ez00_4), BgL_rz00_5, BEOA);
			}
		}
	}



/* _get */
	obj_t BGl__getz00zzsaw_proceduresz00(obj_t BgL_envz00_2387,
		obj_t BgL_ez00_2388, obj_t BgL_rz00_2389)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 31 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(BgL_nodez00_bglt) (BgL_ez00_2388), BgL_rz00_2389);
		}
	}



/* get-default3311 */
	obj_t BGl_getzd2default3311zd2zzsaw_proceduresz00(BgL_nodez00_bglt BgL_ez00_6,
		obj_t BgL_rz00_7)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			{	/* SawMill/procedures.scm 32 */
				obj_t BgL_arg3437z00_1639;

				obj_t BgL_arg3439z00_1641;

				BgL_arg3437z00_1639 = CNST_TABLE_REF(((long) 0));
				{	/* SawMill/procedures.scm 32 */
					obj_t BgL_arg3440z00_1642;

					{	/* SawMill/procedures.scm 32 */
						BgL_objectz00_bglt BgL_objectz00_1643;

						BgL_objectz00_1643 = (BgL_objectz00_bglt) (BgL_ez00_6);
						{	/* SawMill/procedures.scm 32 */
							long BgL_arg2646z00_1644;

							{	/* SawMill/procedures.scm 32 */
								long BgL_arg2647z00_1645;

								BgL_arg2647z00_1645 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_1643);
								BgL_arg2646z00_1644 = (BgL_arg2647z00_1645 - OBJECT_TYPE);
							}
							BgL_arg3440z00_1642 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								(int) (BgL_arg2646z00_1644));
					}}
					BgL_arg3439z00_1641 =
						BGl_classzd2namezd2zz__objectz00(BgL_arg3440z00_1642);
				}
				return
					BGl_errorz00zz__errorz00(BgL_arg3437z00_1639,
					BGl_string3615z00zzsaw_proceduresz00, BgL_arg3439z00_1641);
			}
		}
	}



/* _get-default3311 */
	obj_t BGl__getzd2default3311zd2zzsaw_proceduresz00(obj_t BgL_envz00_2391,
		obj_t BgL_ez00_2392, obj_t BgL_rz00_2393)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			return
				BGl_getzd2default3311zd2zzsaw_proceduresz00(
				(BgL_nodez00_bglt) (BgL_ez00_2392), BgL_rz00_2393);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_proceduresz00()
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_atomz00zzast_nodez00,
				BGl_proc3616z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_varz00zzast_nodez00,
				BGl_proc3617z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3618z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_setqz00zzast_nodez00,
				BGl_proc3619z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3620z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc3621z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_selectz00zzast_nodez00,
				BGl_proc3622z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3623z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_appz00zzast_nodez00,
				BGl_proc3624z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3625z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3626z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc3627z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_getfieldz00zzast_nodez00,
				BGl_proc3628z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_setfieldz00zzast_nodez00,
				BGl_proc3629z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_newz00zzast_nodez00,
				BGl_proc3630z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vallocz00zzast_nodez00,
				BGl_proc3631z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vrefz00zzast_nodez00,
				BGl_proc3632z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc3633z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc3634z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_isaz00zzast_nodez00,
				BGl_proc3635z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_castzd2nullzd2zzast_nodez00,
				BGl_proc3636z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_castz00zzast_nodez00,
				BGl_proc3637z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3638z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3639z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_failz00zzast_nodez00,
				BGl_proc3640z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3641z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc3642z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3643z00zzsaw_proceduresz00,
				BGl_string3614z00zzsaw_proceduresz00);
		}
	}



/* get-box-set!3372 */
	obj_t BGl_getzd2boxzd2setz123372z12zzsaw_proceduresz00(obj_t BgL_envz00_2422,
		obj_t BgL_ez00_2423, obj_t BgL_rz00_2424)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 183 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_ez00_1542;

				obj_t BgL_rz00_1543;

				BgL_ez00_1542 = (BgL_boxzd2setz12zc0_bglt) (BgL_ez00_2423);
				BgL_rz00_1543 = BgL_rz00_2424;
				{	/* SawMill/procedures.scm 184 */
					BgL_varz00_bglt BgL_arg3560z00_2321;

					obj_t BgL_arg3561z00_2322;

					BgL_arg3560z00_2321 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_ez00_1542))->BgL_varz00);
					{	/* SawMill/procedures.scm 184 */
						BgL_nodez00_bglt BgL_arg3562z00_2323;

						BgL_arg3562z00_2323 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_ez00_1542))->BgL_valuez00);
						{	/* SawMill/procedures.scm 184 */
							obj_t BgL_method3312z00_2328;

							{	/* SawMill/procedures.scm 184 */
								BgL_objectz00_bglt BgL_objz00_2329;

								BgL_objz00_2329 = (BgL_objectz00_bglt) (BgL_arg3562z00_2323);
								{	/* SawMill/procedures.scm 184 */
									long BgL_objzd2classzd2numz00_2330;

									BgL_objzd2classzd2numz00_2330 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2329);
									{	/* SawMill/procedures.scm 184 */
										obj_t BgL_arg2643z00_2331;

										BgL_arg2643z00_2331 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 184 */
											obj_t BgL_arrayz00_2333;

											int BgL_offsetz00_2334;

											BgL_arrayz00_2333 = BgL_arg2643z00_2331;
											BgL_offsetz00_2334 =
												(int) (BgL_objzd2classzd2numz00_2330);
											{	/* SawMill/procedures.scm 184 */
												long BgL_offsetz00_2335;

												BgL_offsetz00_2335 =
													((long) (BgL_offsetz00_2334) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 184 */
													long BgL_modz00_2336;

													{	/* SawMill/procedures.scm 184 */
														int BgL_arg2645z00_2337;

														BgL_arg2645z00_2337 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 184 */
															long BgL_auxz00_2699;

															BgL_auxz00_2699 = (long) (BgL_arg2645z00_2337);
															BgL_modz00_2336 =
																(BgL_offsetz00_2335 / BgL_auxz00_2699);
													}}
													{	/* SawMill/procedures.scm 184 */
														long BgL_restz00_2338;

														{	/* SawMill/procedures.scm 184 */
															int BgL_arg2644z00_2339;

															BgL_arg2644z00_2339 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 184 */
																long BgL_auxz00_2703;

																BgL_auxz00_2703 = (long) (BgL_arg2644z00_2339);
																BgL_restz00_2338 =
																	(BgL_offsetz00_2335 % BgL_auxz00_2703);
														}}
														{	/* SawMill/procedures.scm 184 */

															BgL_method3312z00_2328 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2333,
																	(int) (BgL_modz00_2336)),
																(int) (BgL_restz00_2338));
							}}}}}}}}
							BgL_arg3561z00_2322 =
								PROCEDURE_ENTRY(BgL_method3312z00_2328) (BgL_method3312z00_2328,
								(obj_t) (BgL_arg3562z00_2323), BgL_rz00_1543, BEOA);
					}}
					{	/* SawMill/procedures.scm 184 */
						BgL_nodez00_bglt BgL_ez00_2353;

						BgL_ez00_2353 = (BgL_nodez00_bglt) (BgL_arg3560z00_2321);
						{	/* SawMill/procedures.scm 184 */
							obj_t BgL_method3312z00_2355;

							{	/* SawMill/procedures.scm 184 */
								BgL_objectz00_bglt BgL_objz00_2356;

								BgL_objz00_2356 = (BgL_objectz00_bglt) (BgL_ez00_2353);
								{	/* SawMill/procedures.scm 184 */
									long BgL_objzd2classzd2numz00_2357;

									BgL_objzd2classzd2numz00_2357 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2356);
									{	/* SawMill/procedures.scm 184 */
										obj_t BgL_arg2643z00_2358;

										BgL_arg2643z00_2358 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 184 */
											obj_t BgL_arrayz00_2360;

											int BgL_offsetz00_2361;

											BgL_arrayz00_2360 = BgL_arg2643z00_2358;
											BgL_offsetz00_2361 =
												(int) (BgL_objzd2classzd2numz00_2357);
											{	/* SawMill/procedures.scm 184 */
												long BgL_offsetz00_2362;

												BgL_offsetz00_2362 =
													((long) (BgL_offsetz00_2361) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 184 */
													long BgL_modz00_2363;

													{	/* SawMill/procedures.scm 184 */
														int BgL_arg2645z00_2364;

														BgL_arg2645z00_2364 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 184 */
															long BgL_auxz00_2722;

															BgL_auxz00_2722 = (long) (BgL_arg2645z00_2364);
															BgL_modz00_2363 =
																(BgL_offsetz00_2362 / BgL_auxz00_2722);
													}}
													{	/* SawMill/procedures.scm 184 */
														long BgL_restz00_2365;

														{	/* SawMill/procedures.scm 184 */
															int BgL_arg2644z00_2366;

															BgL_arg2644z00_2366 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 184 */
																long BgL_auxz00_2726;

																BgL_auxz00_2726 = (long) (BgL_arg2644z00_2366);
																BgL_restz00_2365 =
																	(BgL_offsetz00_2362 % BgL_auxz00_2726);
														}}
														{	/* SawMill/procedures.scm 184 */

															BgL_method3312z00_2355 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2360,
																	(int) (BgL_modz00_2363)),
																(int) (BgL_restz00_2365));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3312z00_2355) (BgL_method3312z00_2355,
								(obj_t) (BgL_ez00_2353), BgL_arg3561z00_2322, BEOA);
						}
					}
				}
			}
		}
	}



/* get-box-ref3370 */
	obj_t BGl_getzd2boxzd2ref3370z00zzsaw_proceduresz00(obj_t BgL_envz00_2425,
		obj_t BgL_ez00_2426, obj_t BgL_rz00_2427)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 178 */
			{
				BgL_boxzd2refzd2_bglt BgL_ez00_1534;

				obj_t BgL_rz00_1535;

				BgL_ez00_1534 = (BgL_boxzd2refzd2_bglt) (BgL_ez00_2426);
				BgL_rz00_1535 = BgL_rz00_2427;
				{	/* SawMill/procedures.scm 179 */
					BgL_varz00_bglt BgL_arg3558z00_2291;

					BgL_arg3558z00_2291 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_ez00_1534))->BgL_varz00);
					{	/* SawMill/procedures.scm 179 */
						BgL_nodez00_bglt BgL_ez00_2293;

						BgL_ez00_2293 = (BgL_nodez00_bglt) (BgL_arg3558z00_2291);
						{	/* SawMill/procedures.scm 179 */
							obj_t BgL_method3312z00_2295;

							{	/* SawMill/procedures.scm 179 */
								BgL_objectz00_bglt BgL_objz00_2296;

								BgL_objz00_2296 = (BgL_objectz00_bglt) (BgL_ez00_2293);
								{	/* SawMill/procedures.scm 179 */
									long BgL_objzd2classzd2numz00_2297;

									BgL_objzd2classzd2numz00_2297 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2296);
									{	/* SawMill/procedures.scm 179 */
										obj_t BgL_arg2643z00_2298;

										BgL_arg2643z00_2298 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 179 */
											obj_t BgL_arrayz00_2300;

											int BgL_offsetz00_2301;

											BgL_arrayz00_2300 = BgL_arg2643z00_2298;
											BgL_offsetz00_2301 =
												(int) (BgL_objzd2classzd2numz00_2297);
											{	/* SawMill/procedures.scm 179 */
												long BgL_offsetz00_2302;

												BgL_offsetz00_2302 =
													((long) (BgL_offsetz00_2301) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 179 */
													long BgL_modz00_2303;

													{	/* SawMill/procedures.scm 179 */
														int BgL_arg2645z00_2304;

														BgL_arg2645z00_2304 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 179 */
															long BgL_auxz00_2747;

															BgL_auxz00_2747 = (long) (BgL_arg2645z00_2304);
															BgL_modz00_2303 =
																(BgL_offsetz00_2302 / BgL_auxz00_2747);
													}}
													{	/* SawMill/procedures.scm 179 */
														long BgL_restz00_2305;

														{	/* SawMill/procedures.scm 179 */
															int BgL_arg2644z00_2306;

															BgL_arg2644z00_2306 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 179 */
																long BgL_auxz00_2751;

																BgL_auxz00_2751 = (long) (BgL_arg2644z00_2306);
																BgL_restz00_2305 =
																	(BgL_offsetz00_2302 % BgL_auxz00_2751);
														}}
														{	/* SawMill/procedures.scm 179 */

															BgL_method3312z00_2295 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2300,
																	(int) (BgL_modz00_2303)),
																(int) (BgL_restz00_2305));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3312z00_2295) (BgL_method3312z00_2295,
								(obj_t) (BgL_ez00_2293), BgL_rz00_1535, BEOA);
						}
					}
				}
			}
		}
	}



/* get-make-box3367 */
	obj_t BGl_getzd2makezd2box3367z00zzsaw_proceduresz00(obj_t BgL_envz00_2428,
		obj_t BgL_ez00_2429, obj_t BgL_rz00_2430)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 173 */
			{
				BgL_makezd2boxzd2_bglt BgL_ez00_1526;

				obj_t BgL_rz00_1527;

				BgL_ez00_1526 = (BgL_makezd2boxzd2_bglt) (BgL_ez00_2429);
				BgL_rz00_1527 = BgL_rz00_2430;
				{	/* SawMill/procedures.scm 174 */
					BgL_nodez00_bglt BgL_arg3556z00_2261;

					BgL_arg3556z00_2261 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_ez00_1526))->BgL_valuez00);
					{	/* SawMill/procedures.scm 174 */
						obj_t BgL_method3312z00_2265;

						{	/* SawMill/procedures.scm 174 */
							BgL_objectz00_bglt BgL_objz00_2266;

							BgL_objz00_2266 = (BgL_objectz00_bglt) (BgL_arg3556z00_2261);
							{	/* SawMill/procedures.scm 174 */
								long BgL_objzd2classzd2numz00_2267;

								BgL_objzd2classzd2numz00_2267 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2266);
								{	/* SawMill/procedures.scm 174 */
									obj_t BgL_arg2643z00_2268;

									BgL_arg2643z00_2268 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 174 */
										obj_t BgL_arrayz00_2270;

										int BgL_offsetz00_2271;

										BgL_arrayz00_2270 = BgL_arg2643z00_2268;
										BgL_offsetz00_2271 = (int) (BgL_objzd2classzd2numz00_2267);
										{	/* SawMill/procedures.scm 174 */
											long BgL_offsetz00_2272;

											BgL_offsetz00_2272 =
												((long) (BgL_offsetz00_2271) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 174 */
												long BgL_modz00_2273;

												{	/* SawMill/procedures.scm 174 */
													int BgL_arg2645z00_2274;

													BgL_arg2645z00_2274 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 174 */
														long BgL_auxz00_2771;

														BgL_auxz00_2771 = (long) (BgL_arg2645z00_2274);
														BgL_modz00_2273 =
															(BgL_offsetz00_2272 / BgL_auxz00_2771);
												}}
												{	/* SawMill/procedures.scm 174 */
													long BgL_restz00_2275;

													{	/* SawMill/procedures.scm 174 */
														int BgL_arg2644z00_2276;

														BgL_arg2644z00_2276 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 174 */
															long BgL_auxz00_2775;

															BgL_auxz00_2775 = (long) (BgL_arg2644z00_2276);
															BgL_restz00_2275 =
																(BgL_offsetz00_2272 % BgL_auxz00_2775);
													}}
													{	/* SawMill/procedures.scm 174 */

														BgL_method3312z00_2265 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2270,
																(int) (BgL_modz00_2273)),
															(int) (BgL_restz00_2275));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_2265) (BgL_method3312z00_2265,
							(obj_t) (BgL_arg3556z00_2261), BgL_rz00_1527, BEOA);
					}
				}
			}
		}
	}



/* get-fail3365 */
	obj_t BGl_getzd2fail3365zd2zzsaw_proceduresz00(obj_t BgL_envz00_2431,
		obj_t BgL_ez00_2432, obj_t BgL_rz00_2433)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 168 */
			{
				BgL_failz00_bglt BgL_ez00_1514;

				obj_t BgL_rz00_1515;

				BgL_ez00_1514 = (BgL_failz00_bglt) (BgL_ez00_2432);
				BgL_rz00_1515 = BgL_rz00_2433;
				{	/* SawMill/procedures.scm 170 */
					BgL_nodez00_bglt BgL_arg3550z00_1519;

					obj_t BgL_arg3551z00_1520;

					BgL_arg3550z00_1519 =
						(((BgL_failz00_bglt) CREF(BgL_ez00_1514))->BgL_procz00);
					{	/* SawMill/procedures.scm 170 */
						BgL_nodez00_bglt BgL_arg3552z00_1521;

						obj_t BgL_arg3553z00_1522;

						BgL_arg3552z00_1521 =
							(((BgL_failz00_bglt) CREF(BgL_ez00_1514))->BgL_msgz00);
						{	/* SawMill/procedures.scm 170 */
							BgL_nodez00_bglt BgL_arg3554z00_1523;

							BgL_arg3554z00_1523 =
								(((BgL_failz00_bglt) CREF(BgL_ez00_1514))->BgL_objz00);
							{	/* SawMill/procedures.scm 170 */
								obj_t BgL_method3312z00_2181;

								{	/* SawMill/procedures.scm 170 */
									BgL_objectz00_bglt BgL_objz00_2182;

									BgL_objz00_2182 = (BgL_objectz00_bglt) (BgL_arg3554z00_1523);
									{	/* SawMill/procedures.scm 170 */
										long BgL_objzd2classzd2numz00_2183;

										BgL_objzd2classzd2numz00_2183 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2182);
										{	/* SawMill/procedures.scm 170 */
											obj_t BgL_arg2643z00_2184;

											BgL_arg2643z00_2184 =
												PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
												(int) (((long) 1)));
											{	/* SawMill/procedures.scm 170 */
												obj_t BgL_arrayz00_2186;

												int BgL_offsetz00_2187;

												BgL_arrayz00_2186 = BgL_arg2643z00_2184;
												BgL_offsetz00_2187 =
													(int) (BgL_objzd2classzd2numz00_2183);
												{	/* SawMill/procedures.scm 170 */
													long BgL_offsetz00_2188;

													BgL_offsetz00_2188 =
														((long) (BgL_offsetz00_2187) - OBJECT_TYPE);
													{	/* SawMill/procedures.scm 170 */
														long BgL_modz00_2189;

														{	/* SawMill/procedures.scm 170 */
															int BgL_arg2645z00_2190;

															BgL_arg2645z00_2190 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 170 */
																long BgL_auxz00_2797;

																BgL_auxz00_2797 = (long) (BgL_arg2645z00_2190);
																BgL_modz00_2189 =
																	(BgL_offsetz00_2188 / BgL_auxz00_2797);
														}}
														{	/* SawMill/procedures.scm 170 */
															long BgL_restz00_2191;

															{	/* SawMill/procedures.scm 170 */
																int BgL_arg2644z00_2192;

																BgL_arg2644z00_2192 = (int) (((long) 16));
																{	/* SawMill/procedures.scm 170 */
																	long BgL_auxz00_2801;

																	BgL_auxz00_2801 =
																		(long) (BgL_arg2644z00_2192);
																	BgL_restz00_2191 =
																		(BgL_offsetz00_2188 % BgL_auxz00_2801);
															}}
															{	/* SawMill/procedures.scm 170 */

																BgL_method3312z00_2181 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2186,
																		(int) (BgL_modz00_2189)),
																	(int) (BgL_restz00_2191));
								}}}}}}}}
								BgL_arg3553z00_1522 =
									PROCEDURE_ENTRY(BgL_method3312z00_2181)
									(BgL_method3312z00_2181, (obj_t) (BgL_arg3554z00_1523),
									BgL_rz00_1515, BEOA);
						}}
						{	/* SawMill/procedures.scm 170 */
							obj_t BgL_method3312z00_2208;

							{	/* SawMill/procedures.scm 170 */
								BgL_objectz00_bglt BgL_objz00_2209;

								BgL_objz00_2209 = (BgL_objectz00_bglt) (BgL_arg3552z00_1521);
								{	/* SawMill/procedures.scm 170 */
									long BgL_objzd2classzd2numz00_2210;

									BgL_objzd2classzd2numz00_2210 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2209);
									{	/* SawMill/procedures.scm 170 */
										obj_t BgL_arg2643z00_2211;

										BgL_arg2643z00_2211 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 170 */
											obj_t BgL_arrayz00_2213;

											int BgL_offsetz00_2214;

											BgL_arrayz00_2213 = BgL_arg2643z00_2211;
											BgL_offsetz00_2214 =
												(int) (BgL_objzd2classzd2numz00_2210);
											{	/* SawMill/procedures.scm 170 */
												long BgL_offsetz00_2215;

												BgL_offsetz00_2215 =
													((long) (BgL_offsetz00_2214) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 170 */
													long BgL_modz00_2216;

													{	/* SawMill/procedures.scm 170 */
														int BgL_arg2645z00_2217;

														BgL_arg2645z00_2217 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 170 */
															long BgL_auxz00_2819;

															BgL_auxz00_2819 = (long) (BgL_arg2645z00_2217);
															BgL_modz00_2216 =
																(BgL_offsetz00_2215 / BgL_auxz00_2819);
													}}
													{	/* SawMill/procedures.scm 170 */
														long BgL_restz00_2218;

														{	/* SawMill/procedures.scm 170 */
															int BgL_arg2644z00_2219;

															BgL_arg2644z00_2219 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 170 */
																long BgL_auxz00_2823;

																BgL_auxz00_2823 = (long) (BgL_arg2644z00_2219);
																BgL_restz00_2218 =
																	(BgL_offsetz00_2215 % BgL_auxz00_2823);
														}}
														{	/* SawMill/procedures.scm 170 */

															BgL_method3312z00_2208 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2213,
																	(int) (BgL_modz00_2216)),
																(int) (BgL_restz00_2218));
							}}}}}}}}
							BgL_arg3551z00_1520 =
								PROCEDURE_ENTRY(BgL_method3312z00_2208) (BgL_method3312z00_2208,
								(obj_t) (BgL_arg3552z00_1521), BgL_arg3553z00_1522, BEOA);
					}}
					{	/* SawMill/procedures.scm 170 */
						obj_t BgL_method3312z00_2235;

						{	/* SawMill/procedures.scm 170 */
							BgL_objectz00_bglt BgL_objz00_2236;

							BgL_objz00_2236 = (BgL_objectz00_bglt) (BgL_arg3550z00_1519);
							{	/* SawMill/procedures.scm 170 */
								long BgL_objzd2classzd2numz00_2237;

								BgL_objzd2classzd2numz00_2237 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2236);
								{	/* SawMill/procedures.scm 170 */
									obj_t BgL_arg2643z00_2238;

									BgL_arg2643z00_2238 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 170 */
										obj_t BgL_arrayz00_2240;

										int BgL_offsetz00_2241;

										BgL_arrayz00_2240 = BgL_arg2643z00_2238;
										BgL_offsetz00_2241 = (int) (BgL_objzd2classzd2numz00_2237);
										{	/* SawMill/procedures.scm 170 */
											long BgL_offsetz00_2242;

											BgL_offsetz00_2242 =
												((long) (BgL_offsetz00_2241) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 170 */
												long BgL_modz00_2243;

												{	/* SawMill/procedures.scm 170 */
													int BgL_arg2645z00_2244;

													BgL_arg2645z00_2244 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 170 */
														long BgL_auxz00_2841;

														BgL_auxz00_2841 = (long) (BgL_arg2645z00_2244);
														BgL_modz00_2243 =
															(BgL_offsetz00_2242 / BgL_auxz00_2841);
												}}
												{	/* SawMill/procedures.scm 170 */
													long BgL_restz00_2245;

													{	/* SawMill/procedures.scm 170 */
														int BgL_arg2644z00_2246;

														BgL_arg2644z00_2246 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 170 */
															long BgL_auxz00_2845;

															BgL_auxz00_2845 = (long) (BgL_arg2644z00_2246);
															BgL_restz00_2245 =
																(BgL_offsetz00_2242 % BgL_auxz00_2845);
													}}
													{	/* SawMill/procedures.scm 170 */

														BgL_method3312z00_2235 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2240,
																(int) (BgL_modz00_2243)),
															(int) (BgL_restz00_2245));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_2235) (BgL_method3312z00_2235,
							(obj_t) (BgL_arg3550z00_1519), BgL_arg3551z00_1520, BEOA);
					}
				}
			}
		}
	}



/* get-jump-ex-it3363 */
	obj_t BGl_getzd2jumpzd2exzd2it3363zd2zzsaw_proceduresz00(obj_t
		BgL_envz00_2434, obj_t BgL_ez00_2435, obj_t BgL_rz00_2436)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 163 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_ez00_1504;

				obj_t BgL_rz00_1505;

				BgL_ez00_1504 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_ez00_2435);
				BgL_rz00_1505 = BgL_rz00_2436;
				{	/* SawMill/procedures.scm 164 */
					BgL_nodez00_bglt BgL_arg3546z00_2117;

					obj_t BgL_arg3547z00_2118;

					BgL_arg3546z00_2117 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_ez00_1504))->BgL_exitz00);
					{	/* SawMill/procedures.scm 164 */
						BgL_nodez00_bglt BgL_arg3548z00_2119;

						BgL_arg3548z00_2119 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_ez00_1504))->
							BgL_valuez00);
						{	/* SawMill/procedures.scm 164 */
							obj_t BgL_method3312z00_2124;

							{	/* SawMill/procedures.scm 164 */
								BgL_objectz00_bglt BgL_objz00_2125;

								BgL_objz00_2125 = (BgL_objectz00_bglt) (BgL_arg3548z00_2119);
								{	/* SawMill/procedures.scm 164 */
									long BgL_objzd2classzd2numz00_2126;

									BgL_objzd2classzd2numz00_2126 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2125);
									{	/* SawMill/procedures.scm 164 */
										obj_t BgL_arg2643z00_2127;

										BgL_arg2643z00_2127 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 164 */
											obj_t BgL_arrayz00_2129;

											int BgL_offsetz00_2130;

											BgL_arrayz00_2129 = BgL_arg2643z00_2127;
											BgL_offsetz00_2130 =
												(int) (BgL_objzd2classzd2numz00_2126);
											{	/* SawMill/procedures.scm 164 */
												long BgL_offsetz00_2131;

												BgL_offsetz00_2131 =
													((long) (BgL_offsetz00_2130) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 164 */
													long BgL_modz00_2132;

													{	/* SawMill/procedures.scm 164 */
														int BgL_arg2645z00_2133;

														BgL_arg2645z00_2133 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 164 */
															long BgL_auxz00_2866;

															BgL_auxz00_2866 = (long) (BgL_arg2645z00_2133);
															BgL_modz00_2132 =
																(BgL_offsetz00_2131 / BgL_auxz00_2866);
													}}
													{	/* SawMill/procedures.scm 164 */
														long BgL_restz00_2134;

														{	/* SawMill/procedures.scm 164 */
															int BgL_arg2644z00_2135;

															BgL_arg2644z00_2135 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 164 */
																long BgL_auxz00_2870;

																BgL_auxz00_2870 = (long) (BgL_arg2644z00_2135);
																BgL_restz00_2134 =
																	(BgL_offsetz00_2131 % BgL_auxz00_2870);
														}}
														{	/* SawMill/procedures.scm 164 */

															BgL_method3312z00_2124 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2129,
																	(int) (BgL_modz00_2132)),
																(int) (BgL_restz00_2134));
							}}}}}}}}
							BgL_arg3547z00_2118 =
								PROCEDURE_ENTRY(BgL_method3312z00_2124) (BgL_method3312z00_2124,
								(obj_t) (BgL_arg3548z00_2119), BgL_rz00_1505, BEOA);
					}}
					{	/* SawMill/procedures.scm 164 */
						obj_t BgL_method3312z00_2151;

						{	/* SawMill/procedures.scm 164 */
							BgL_objectz00_bglt BgL_objz00_2152;

							BgL_objz00_2152 = (BgL_objectz00_bglt) (BgL_arg3546z00_2117);
							{	/* SawMill/procedures.scm 164 */
								long BgL_objzd2classzd2numz00_2153;

								BgL_objzd2classzd2numz00_2153 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2152);
								{	/* SawMill/procedures.scm 164 */
									obj_t BgL_arg2643z00_2154;

									BgL_arg2643z00_2154 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 164 */
										obj_t BgL_arrayz00_2156;

										int BgL_offsetz00_2157;

										BgL_arrayz00_2156 = BgL_arg2643z00_2154;
										BgL_offsetz00_2157 = (int) (BgL_objzd2classzd2numz00_2153);
										{	/* SawMill/procedures.scm 164 */
											long BgL_offsetz00_2158;

											BgL_offsetz00_2158 =
												((long) (BgL_offsetz00_2157) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 164 */
												long BgL_modz00_2159;

												{	/* SawMill/procedures.scm 164 */
													int BgL_arg2645z00_2160;

													BgL_arg2645z00_2160 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 164 */
														long BgL_auxz00_2888;

														BgL_auxz00_2888 = (long) (BgL_arg2645z00_2160);
														BgL_modz00_2159 =
															(BgL_offsetz00_2158 / BgL_auxz00_2888);
												}}
												{	/* SawMill/procedures.scm 164 */
													long BgL_restz00_2161;

													{	/* SawMill/procedures.scm 164 */
														int BgL_arg2644z00_2162;

														BgL_arg2644z00_2162 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 164 */
															long BgL_auxz00_2892;

															BgL_auxz00_2892 = (long) (BgL_arg2644z00_2162);
															BgL_restz00_2161 =
																(BgL_offsetz00_2158 % BgL_auxz00_2892);
													}}
													{	/* SawMill/procedures.scm 164 */

														BgL_method3312z00_2151 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2156,
																(int) (BgL_modz00_2159)),
															(int) (BgL_restz00_2161));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_2151) (BgL_method3312z00_2151,
							(obj_t) (BgL_arg3546z00_2117), BgL_arg3547z00_2118, BEOA);
					}
				}
			}
		}
	}



/* get-set-ex-it3361 */
	obj_t BGl_getzd2setzd2exzd2it3361zd2zzsaw_proceduresz00(obj_t BgL_envz00_2437,
		obj_t BgL_ez00_2438, obj_t BgL_rz00_2439)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 158 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_ez00_1494;

				obj_t BgL_rz00_1495;

				BgL_ez00_1494 = (BgL_setzd2exzd2itz00_bglt) (BgL_ez00_2438);
				BgL_rz00_1495 = BgL_rz00_2439;
				{	/* SawMill/procedures.scm 159 */
					BgL_varz00_bglt BgL_arg3542z00_2057;

					obj_t BgL_arg3543z00_2058;

					BgL_arg3542z00_2057 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_ez00_1494))->BgL_varz00);
					{	/* SawMill/procedures.scm 159 */
						BgL_nodez00_bglt BgL_arg3544z00_2059;

						BgL_arg3544z00_2059 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_ez00_1494))->BgL_bodyz00);
						{	/* SawMill/procedures.scm 159 */
							obj_t BgL_method3312z00_2064;

							{	/* SawMill/procedures.scm 159 */
								BgL_objectz00_bglt BgL_objz00_2065;

								BgL_objz00_2065 = (BgL_objectz00_bglt) (BgL_arg3544z00_2059);
								{	/* SawMill/procedures.scm 159 */
									long BgL_objzd2classzd2numz00_2066;

									BgL_objzd2classzd2numz00_2066 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2065);
									{	/* SawMill/procedures.scm 159 */
										obj_t BgL_arg2643z00_2067;

										BgL_arg2643z00_2067 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 159 */
											obj_t BgL_arrayz00_2069;

											int BgL_offsetz00_2070;

											BgL_arrayz00_2069 = BgL_arg2643z00_2067;
											BgL_offsetz00_2070 =
												(int) (BgL_objzd2classzd2numz00_2066);
											{	/* SawMill/procedures.scm 159 */
												long BgL_offsetz00_2071;

												BgL_offsetz00_2071 =
													((long) (BgL_offsetz00_2070) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 159 */
													long BgL_modz00_2072;

													{	/* SawMill/procedures.scm 159 */
														int BgL_arg2645z00_2073;

														BgL_arg2645z00_2073 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 159 */
															long BgL_auxz00_2913;

															BgL_auxz00_2913 = (long) (BgL_arg2645z00_2073);
															BgL_modz00_2072 =
																(BgL_offsetz00_2071 / BgL_auxz00_2913);
													}}
													{	/* SawMill/procedures.scm 159 */
														long BgL_restz00_2074;

														{	/* SawMill/procedures.scm 159 */
															int BgL_arg2644z00_2075;

															BgL_arg2644z00_2075 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 159 */
																long BgL_auxz00_2917;

																BgL_auxz00_2917 = (long) (BgL_arg2644z00_2075);
																BgL_restz00_2074 =
																	(BgL_offsetz00_2071 % BgL_auxz00_2917);
														}}
														{	/* SawMill/procedures.scm 159 */

															BgL_method3312z00_2064 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2069,
																	(int) (BgL_modz00_2072)),
																(int) (BgL_restz00_2074));
							}}}}}}}}
							BgL_arg3543z00_2058 =
								PROCEDURE_ENTRY(BgL_method3312z00_2064) (BgL_method3312z00_2064,
								(obj_t) (BgL_arg3544z00_2059), BgL_rz00_1495, BEOA);
					}}
					{	/* SawMill/procedures.scm 159 */
						BgL_nodez00_bglt BgL_ez00_2089;

						BgL_ez00_2089 = (BgL_nodez00_bglt) (BgL_arg3542z00_2057);
						{	/* SawMill/procedures.scm 159 */
							obj_t BgL_method3312z00_2091;

							{	/* SawMill/procedures.scm 159 */
								BgL_objectz00_bglt BgL_objz00_2092;

								BgL_objz00_2092 = (BgL_objectz00_bglt) (BgL_ez00_2089);
								{	/* SawMill/procedures.scm 159 */
									long BgL_objzd2classzd2numz00_2093;

									BgL_objzd2classzd2numz00_2093 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2092);
									{	/* SawMill/procedures.scm 159 */
										obj_t BgL_arg2643z00_2094;

										BgL_arg2643z00_2094 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 159 */
											obj_t BgL_arrayz00_2096;

											int BgL_offsetz00_2097;

											BgL_arrayz00_2096 = BgL_arg2643z00_2094;
											BgL_offsetz00_2097 =
												(int) (BgL_objzd2classzd2numz00_2093);
											{	/* SawMill/procedures.scm 159 */
												long BgL_offsetz00_2098;

												BgL_offsetz00_2098 =
													((long) (BgL_offsetz00_2097) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 159 */
													long BgL_modz00_2099;

													{	/* SawMill/procedures.scm 159 */
														int BgL_arg2645z00_2100;

														BgL_arg2645z00_2100 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 159 */
															long BgL_auxz00_2936;

															BgL_auxz00_2936 = (long) (BgL_arg2645z00_2100);
															BgL_modz00_2099 =
																(BgL_offsetz00_2098 / BgL_auxz00_2936);
													}}
													{	/* SawMill/procedures.scm 159 */
														long BgL_restz00_2101;

														{	/* SawMill/procedures.scm 159 */
															int BgL_arg2644z00_2102;

															BgL_arg2644z00_2102 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 159 */
																long BgL_auxz00_2940;

																BgL_auxz00_2940 = (long) (BgL_arg2644z00_2102);
																BgL_restz00_2101 =
																	(BgL_offsetz00_2098 % BgL_auxz00_2940);
														}}
														{	/* SawMill/procedures.scm 159 */

															BgL_method3312z00_2091 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2096,
																	(int) (BgL_modz00_2099)),
																(int) (BgL_restz00_2101));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3312z00_2091) (BgL_method3312z00_2091,
								(obj_t) (BgL_ez00_2089), BgL_arg3543z00_2058, BEOA);
						}
					}
				}
			}
		}
	}



/* get-cast3359 */
	obj_t BGl_getzd2cast3359zd2zzsaw_proceduresz00(obj_t BgL_envz00_2440,
		obj_t BgL_ez00_2441, obj_t BgL_rz00_2442)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 153 */
			{
				BgL_castz00_bglt BgL_ez00_1486;

				obj_t BgL_rz00_1487;

				BgL_ez00_1486 = (BgL_castz00_bglt) (BgL_ez00_2441);
				BgL_rz00_1487 = BgL_rz00_2442;
				{	/* SawMill/procedures.scm 154 */
					BgL_nodez00_bglt BgL_arg3540z00_2027;

					BgL_arg3540z00_2027 =
						(((BgL_castz00_bglt) CREF(BgL_ez00_1486))->BgL_argz00);
					{	/* SawMill/procedures.scm 154 */
						obj_t BgL_method3312z00_2031;

						{	/* SawMill/procedures.scm 154 */
							BgL_objectz00_bglt BgL_objz00_2032;

							BgL_objz00_2032 = (BgL_objectz00_bglt) (BgL_arg3540z00_2027);
							{	/* SawMill/procedures.scm 154 */
								long BgL_objzd2classzd2numz00_2033;

								BgL_objzd2classzd2numz00_2033 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2032);
								{	/* SawMill/procedures.scm 154 */
									obj_t BgL_arg2643z00_2034;

									BgL_arg2643z00_2034 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 154 */
										obj_t BgL_arrayz00_2036;

										int BgL_offsetz00_2037;

										BgL_arrayz00_2036 = BgL_arg2643z00_2034;
										BgL_offsetz00_2037 = (int) (BgL_objzd2classzd2numz00_2033);
										{	/* SawMill/procedures.scm 154 */
											long BgL_offsetz00_2038;

											BgL_offsetz00_2038 =
												((long) (BgL_offsetz00_2037) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 154 */
												long BgL_modz00_2039;

												{	/* SawMill/procedures.scm 154 */
													int BgL_arg2645z00_2040;

													BgL_arg2645z00_2040 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 154 */
														long BgL_auxz00_2960;

														BgL_auxz00_2960 = (long) (BgL_arg2645z00_2040);
														BgL_modz00_2039 =
															(BgL_offsetz00_2038 / BgL_auxz00_2960);
												}}
												{	/* SawMill/procedures.scm 154 */
													long BgL_restz00_2041;

													{	/* SawMill/procedures.scm 154 */
														int BgL_arg2644z00_2042;

														BgL_arg2644z00_2042 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 154 */
															long BgL_auxz00_2964;

															BgL_auxz00_2964 = (long) (BgL_arg2644z00_2042);
															BgL_restz00_2041 =
																(BgL_offsetz00_2038 % BgL_auxz00_2964);
													}}
													{	/* SawMill/procedures.scm 154 */

														BgL_method3312z00_2031 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2036,
																(int) (BgL_modz00_2039)),
															(int) (BgL_restz00_2041));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_2031) (BgL_method3312z00_2031,
							(obj_t) (BgL_arg3540z00_2027), BgL_rz00_1487, BEOA);
					}
				}
			}
		}
	}



/* get-cast-null3357 */
	obj_t BGl_getzd2castzd2null3357z00zzsaw_proceduresz00(obj_t BgL_envz00_2443,
		obj_t BgL_ez00_2444, obj_t BgL_rz00_2445)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 149 */
			return BgL_rz00_2445;
		}
	}



/* get-isa3355 */
	obj_t BGl_getzd2isa3355zd2zzsaw_proceduresz00(obj_t BgL_envz00_2446,
		obj_t BgL_ez00_2447, obj_t BgL_rz00_2448)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 144 */
			{
				BgL_isaz00_bglt BgL_ez00_1472;

				obj_t BgL_rz00_1473;

				BgL_ez00_1472 = (BgL_isaz00_bglt) (BgL_ez00_2447);
				BgL_rz00_1473 = BgL_rz00_2448;
				{	/* SawMill/procedures.scm 145 */
					obj_t BgL_arg3537z00_2024;

					{
						BgL_externz00_bglt BgL_auxz00_2975;

						BgL_auxz00_2975 = (BgL_externz00_bglt) (BgL_ez00_1472);
						BgL_arg3537z00_2024 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_2975))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3537z00_2024,
						BgL_rz00_1473);
				}
			}
		}
	}



/* get-vlength3353 */
	obj_t BGl_getzd2vlength3353zd2zzsaw_proceduresz00(obj_t BgL_envz00_2449,
		obj_t BgL_ez00_2450, obj_t BgL_rz00_2451)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 139 */
			{
				BgL_vlengthz00_bglt BgL_ez00_1464;

				obj_t BgL_rz00_1465;

				BgL_ez00_1464 = (BgL_vlengthz00_bglt) (BgL_ez00_2450);
				BgL_rz00_1465 = BgL_rz00_2451;
				{	/* SawMill/procedures.scm 140 */
					obj_t BgL_arg3535z00_2021;

					{
						BgL_externz00_bglt BgL_auxz00_2980;

						BgL_auxz00_2980 = (BgL_externz00_bglt) (BgL_ez00_1464);
						BgL_arg3535z00_2021 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_2980))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3535z00_2021,
						BgL_rz00_1465);
				}
			}
		}
	}



/* get-vset!3351 */
	obj_t BGl_getzd2vsetz123351zc0zzsaw_proceduresz00(obj_t BgL_envz00_2452,
		obj_t BgL_ez00_2453, obj_t BgL_rz00_2454)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 134 */
			{
				BgL_vsetz12z12_bglt BgL_ez00_1456;

				obj_t BgL_rz00_1457;

				BgL_ez00_1456 = (BgL_vsetz12z12_bglt) (BgL_ez00_2453);
				BgL_rz00_1457 = BgL_rz00_2454;
				{	/* SawMill/procedures.scm 135 */
					obj_t BgL_arg3533z00_2018;

					{
						BgL_externz00_bglt BgL_auxz00_2985;

						BgL_auxz00_2985 = (BgL_externz00_bglt) (BgL_ez00_1456);
						BgL_arg3533z00_2018 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_2985))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3533z00_2018,
						BgL_rz00_1457);
				}
			}
		}
	}



/* get-vref3348 */
	obj_t BGl_getzd2vref3348zd2zzsaw_proceduresz00(obj_t BgL_envz00_2455,
		obj_t BgL_ez00_2456, obj_t BgL_rz00_2457)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 129 */
			{
				BgL_vrefz00_bglt BgL_ez00_1448;

				obj_t BgL_rz00_1449;

				BgL_ez00_1448 = (BgL_vrefz00_bglt) (BgL_ez00_2456);
				BgL_rz00_1449 = BgL_rz00_2457;
				{	/* SawMill/procedures.scm 130 */
					obj_t BgL_arg3531z00_2015;

					{
						BgL_externz00_bglt BgL_auxz00_2990;

						BgL_auxz00_2990 = (BgL_externz00_bglt) (BgL_ez00_1448);
						BgL_arg3531z00_2015 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_2990))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3531z00_2015,
						BgL_rz00_1449);
				}
			}
		}
	}



/* get-valloc3345 */
	obj_t BGl_getzd2valloc3345zd2zzsaw_proceduresz00(obj_t BgL_envz00_2458,
		obj_t BgL_ez00_2459, obj_t BgL_rz00_2460)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 124 */
			{
				BgL_vallocz00_bglt BgL_ez00_1440;

				obj_t BgL_rz00_1441;

				BgL_ez00_1440 = (BgL_vallocz00_bglt) (BgL_ez00_2459);
				BgL_rz00_1441 = BgL_rz00_2460;
				{	/* SawMill/procedures.scm 125 */
					obj_t BgL_arg3529z00_2012;

					{
						BgL_externz00_bglt BgL_auxz00_2995;

						BgL_auxz00_2995 = (BgL_externz00_bglt) (BgL_ez00_1440);
						BgL_arg3529z00_2012 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_2995))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3529z00_2012,
						BgL_rz00_1441);
				}
			}
		}
	}



/* get-new3343 */
	obj_t BGl_getzd2new3343zd2zzsaw_proceduresz00(obj_t BgL_envz00_2461,
		obj_t BgL_ez00_2462, obj_t BgL_rz00_2463)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 120 */
			return BgL_rz00_2463;
		}
	}



/* get-setfield3341 */
	obj_t BGl_getzd2setfield3341zd2zzsaw_proceduresz00(obj_t BgL_envz00_2464,
		obj_t BgL_ez00_2465, obj_t BgL_rz00_2466)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 115 */
			{
				BgL_setfieldz00_bglt BgL_ez00_1426;

				obj_t BgL_rz00_1427;

				BgL_ez00_1426 = (BgL_setfieldz00_bglt) (BgL_ez00_2465);
				BgL_rz00_1427 = BgL_rz00_2466;
				{	/* SawMill/procedures.scm 116 */
					obj_t BgL_arg3526z00_2009;

					{
						BgL_externz00_bglt BgL_auxz00_3000;

						BgL_auxz00_3000 = (BgL_externz00_bglt) (BgL_ez00_1426);
						BgL_arg3526z00_2009 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_3000))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3526z00_2009,
						BgL_rz00_1427);
				}
			}
		}
	}



/* get-getfield3339 */
	obj_t BGl_getzd2getfield3339zd2zzsaw_proceduresz00(obj_t BgL_envz00_2467,
		obj_t BgL_ez00_2468, obj_t BgL_rz00_2469)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 110 */
			{
				BgL_getfieldz00_bglt BgL_ez00_1418;

				obj_t BgL_rz00_1419;

				BgL_ez00_1418 = (BgL_getfieldz00_bglt) (BgL_ez00_2468);
				BgL_rz00_1419 = BgL_rz00_2469;
				{	/* SawMill/procedures.scm 111 */
					obj_t BgL_arg3524z00_2006;

					{
						BgL_externz00_bglt BgL_auxz00_3005;

						BgL_auxz00_3005 = (BgL_externz00_bglt) (BgL_ez00_1418);
						BgL_arg3524z00_2006 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_3005))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3524z00_2006,
						BgL_rz00_1419);
				}
			}
		}
	}



/* get-pragma3337 */
	obj_t BGl_getzd2pragma3337zd2zzsaw_proceduresz00(obj_t BgL_envz00_2470,
		obj_t BgL_ez00_2471, obj_t BgL_rz00_2472)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 105 */
			{
				BgL_pragmaz00_bglt BgL_ez00_1410;

				obj_t BgL_rz00_1411;

				BgL_ez00_1410 = (BgL_pragmaz00_bglt) (BgL_ez00_2471);
				BgL_rz00_1411 = BgL_rz00_2472;
				{	/* SawMill/procedures.scm 106 */
					obj_t BgL_arg3522z00_2003;

					{
						BgL_externz00_bglt BgL_auxz00_3010;

						BgL_auxz00_3010 = (BgL_externz00_bglt) (BgL_ez00_1410);
						BgL_arg3522z00_2003 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_3010))->BgL_exprza2za2);
					}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3522z00_2003,
						BgL_rz00_1411);
				}
			}
		}
	}



/* get-funcall3335 */
	obj_t BGl_getzd2funcall3335zd2zzsaw_proceduresz00(obj_t BgL_envz00_2473,
		obj_t BgL_ez00_2474, obj_t BgL_rz00_2475)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 98 */
			{
				BgL_funcallz00_bglt BgL_ez00_1396;

				obj_t BgL_rz00_1397;

				BgL_ez00_1396 = (BgL_funcallz00_bglt) (BgL_ez00_2474);
				BgL_rz00_1397 = BgL_rz00_2475;
				if (
					((((BgL_funcallz00_bglt) CREF(BgL_ez00_1396))->BgL_strengthz00) ==
						CNST_TABLE_REF(((long) 1))))
					{	/* SawMill/procedures.scm 101 */
						obj_t BgL_arg3514z00_1402;

						BgL_arg3514z00_1402 =
							(((BgL_funcallz00_bglt) CREF(BgL_ez00_1396))->BgL_argsz00);
						return
							BGl_getza2za2zzsaw_proceduresz00(BgL_arg3514z00_1402,
							BgL_rz00_1397);
					}
				else
					{	/* SawMill/procedures.scm 102 */
						BgL_nodez00_bglt BgL_arg3515z00_1403;

						obj_t BgL_arg3517z00_1404;

						BgL_arg3515z00_1403 =
							(((BgL_funcallz00_bglt) CREF(BgL_ez00_1396))->BgL_funz00);
						{	/* SawMill/procedures.scm 102 */
							obj_t BgL_arg3518z00_1405;

							BgL_arg3518z00_1405 =
								(((BgL_funcallz00_bglt) CREF(BgL_ez00_1396))->BgL_argsz00);
							BgL_arg3517z00_1404 =
								BGl_getza2za2zzsaw_proceduresz00(BgL_arg3518z00_1405,
								BgL_rz00_1397);
						}
						{	/* SawMill/procedures.scm 102 */
							obj_t BgL_method3312z00_1977;

							{	/* SawMill/procedures.scm 102 */
								BgL_objectz00_bglt BgL_objz00_1978;

								BgL_objz00_1978 = (BgL_objectz00_bglt) (BgL_arg3515z00_1403);
								{	/* SawMill/procedures.scm 102 */
									long BgL_objzd2classzd2numz00_1979;

									BgL_objzd2classzd2numz00_1979 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1978);
									{	/* SawMill/procedures.scm 102 */
										obj_t BgL_arg2643z00_1980;

										BgL_arg2643z00_1980 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 102 */
											obj_t BgL_arrayz00_1982;

											int BgL_offsetz00_1983;

											BgL_arrayz00_1982 = BgL_arg2643z00_1980;
											BgL_offsetz00_1983 =
												(int) (BgL_objzd2classzd2numz00_1979);
											{	/* SawMill/procedures.scm 102 */
												long BgL_offsetz00_1984;

												BgL_offsetz00_1984 =
													((long) (BgL_offsetz00_1983) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 102 */
													long BgL_modz00_1985;

													{	/* SawMill/procedures.scm 102 */
														int BgL_arg2645z00_1986;

														BgL_arg2645z00_1986 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 102 */
															long BgL_auxz00_3032;

															BgL_auxz00_3032 = (long) (BgL_arg2645z00_1986);
															BgL_modz00_1985 =
																(BgL_offsetz00_1984 / BgL_auxz00_3032);
													}}
													{	/* SawMill/procedures.scm 102 */
														long BgL_restz00_1987;

														{	/* SawMill/procedures.scm 102 */
															int BgL_arg2644z00_1988;

															BgL_arg2644z00_1988 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 102 */
																long BgL_auxz00_3036;

																BgL_auxz00_3036 = (long) (BgL_arg2644z00_1988);
																BgL_restz00_1987 =
																	(BgL_offsetz00_1984 % BgL_auxz00_3036);
														}}
														{	/* SawMill/procedures.scm 102 */

															BgL_method3312z00_1977 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1982,
																	(int) (BgL_modz00_1985)),
																(int) (BgL_restz00_1987));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3312z00_1977) (BgL_method3312z00_1977,
								(obj_t) (BgL_arg3515z00_1403), BgL_arg3517z00_1404, BEOA);
						}
					}
			}
		}
	}



/* get-app-ly3333 */
	obj_t BGl_getzd2appzd2ly3333z00zzsaw_proceduresz00(obj_t BgL_envz00_2476,
		obj_t BgL_ez00_2477, obj_t BgL_rz00_2478)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 93 */
			{
				BgL_appzd2lyzd2_bglt BgL_ez00_1386;

				obj_t BgL_rz00_1387;

				BgL_ez00_1386 = (BgL_appzd2lyzd2_bglt) (BgL_ez00_2477);
				BgL_rz00_1387 = BgL_rz00_2478;
				{	/* SawMill/procedures.scm 94 */
					BgL_nodez00_bglt BgL_arg3509z00_1912;

					obj_t BgL_arg3510z00_1913;

					BgL_arg3509z00_1912 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_ez00_1386))->BgL_funz00);
					{	/* SawMill/procedures.scm 94 */
						BgL_nodez00_bglt BgL_arg3511z00_1914;

						BgL_arg3511z00_1914 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_ez00_1386))->BgL_argz00);
						{	/* SawMill/procedures.scm 94 */
							obj_t BgL_method3312z00_1919;

							{	/* SawMill/procedures.scm 94 */
								BgL_objectz00_bglt BgL_objz00_1920;

								BgL_objz00_1920 = (BgL_objectz00_bglt) (BgL_arg3511z00_1914);
								{	/* SawMill/procedures.scm 94 */
									long BgL_objzd2classzd2numz00_1921;

									BgL_objzd2classzd2numz00_1921 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1920);
									{	/* SawMill/procedures.scm 94 */
										obj_t BgL_arg2643z00_1922;

										BgL_arg2643z00_1922 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 94 */
											obj_t BgL_arrayz00_1924;

											int BgL_offsetz00_1925;

											BgL_arrayz00_1924 = BgL_arg2643z00_1922;
											BgL_offsetz00_1925 =
												(int) (BgL_objzd2classzd2numz00_1921);
											{	/* SawMill/procedures.scm 94 */
												long BgL_offsetz00_1926;

												BgL_offsetz00_1926 =
													((long) (BgL_offsetz00_1925) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 94 */
													long BgL_modz00_1927;

													{	/* SawMill/procedures.scm 94 */
														int BgL_arg2645z00_1928;

														BgL_arg2645z00_1928 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 94 */
															long BgL_auxz00_3057;

															BgL_auxz00_3057 = (long) (BgL_arg2645z00_1928);
															BgL_modz00_1927 =
																(BgL_offsetz00_1926 / BgL_auxz00_3057);
													}}
													{	/* SawMill/procedures.scm 94 */
														long BgL_restz00_1929;

														{	/* SawMill/procedures.scm 94 */
															int BgL_arg2644z00_1930;

															BgL_arg2644z00_1930 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 94 */
																long BgL_auxz00_3061;

																BgL_auxz00_3061 = (long) (BgL_arg2644z00_1930);
																BgL_restz00_1929 =
																	(BgL_offsetz00_1926 % BgL_auxz00_3061);
														}}
														{	/* SawMill/procedures.scm 94 */

															BgL_method3312z00_1919 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1924,
																	(int) (BgL_modz00_1927)),
																(int) (BgL_restz00_1929));
							}}}}}}}}
							BgL_arg3510z00_1913 =
								PROCEDURE_ENTRY(BgL_method3312z00_1919) (BgL_method3312z00_1919,
								(obj_t) (BgL_arg3511z00_1914), BgL_rz00_1387, BEOA);
					}}
					{	/* SawMill/procedures.scm 94 */
						obj_t BgL_method3312z00_1946;

						{	/* SawMill/procedures.scm 94 */
							BgL_objectz00_bglt BgL_objz00_1947;

							BgL_objz00_1947 = (BgL_objectz00_bglt) (BgL_arg3509z00_1912);
							{	/* SawMill/procedures.scm 94 */
								long BgL_objzd2classzd2numz00_1948;

								BgL_objzd2classzd2numz00_1948 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1947);
								{	/* SawMill/procedures.scm 94 */
									obj_t BgL_arg2643z00_1949;

									BgL_arg2643z00_1949 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 94 */
										obj_t BgL_arrayz00_1951;

										int BgL_offsetz00_1952;

										BgL_arrayz00_1951 = BgL_arg2643z00_1949;
										BgL_offsetz00_1952 = (int) (BgL_objzd2classzd2numz00_1948);
										{	/* SawMill/procedures.scm 94 */
											long BgL_offsetz00_1953;

											BgL_offsetz00_1953 =
												((long) (BgL_offsetz00_1952) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 94 */
												long BgL_modz00_1954;

												{	/* SawMill/procedures.scm 94 */
													int BgL_arg2645z00_1955;

													BgL_arg2645z00_1955 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 94 */
														long BgL_auxz00_3079;

														BgL_auxz00_3079 = (long) (BgL_arg2645z00_1955);
														BgL_modz00_1954 =
															(BgL_offsetz00_1953 / BgL_auxz00_3079);
												}}
												{	/* SawMill/procedures.scm 94 */
													long BgL_restz00_1956;

													{	/* SawMill/procedures.scm 94 */
														int BgL_arg2644z00_1957;

														BgL_arg2644z00_1957 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 94 */
															long BgL_auxz00_3083;

															BgL_auxz00_3083 = (long) (BgL_arg2644z00_1957);
															BgL_restz00_1956 =
																(BgL_offsetz00_1953 % BgL_auxz00_3083);
													}}
													{	/* SawMill/procedures.scm 94 */

														BgL_method3312z00_1946 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1951,
																(int) (BgL_modz00_1954)),
															(int) (BgL_restz00_1956));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_1946) (BgL_method3312z00_1946,
							(obj_t) (BgL_arg3509z00_1912), BgL_arg3510z00_1913, BEOA);
					}
				}
			}
		}
	}



/* get-app3331 */
	obj_t BGl_getzd2app3331zd2zzsaw_proceduresz00(obj_t BgL_envz00_2479,
		obj_t BgL_ez00_2480, obj_t BgL_rz00_2481)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 79 */
			{
				BgL_appz00_bglt BgL_ez00_1368;

				obj_t BgL_rz00_1369;

				BgL_ez00_1368 = (BgL_appz00_bglt) (BgL_ez00_2480);
				BgL_rz00_1369 = BgL_rz00_2481;
				{	/* SawMill/procedures.scm 81 */
					obj_t BgL_rz00_1373;

					BgL_variablez00_bglt BgL_vz00_1374;

					{	/* SawMill/procedures.scm 81 */
						obj_t BgL_arg3506z00_1382;

						BgL_arg3506z00_1382 =
							(((BgL_appz00_bglt) CREF(BgL_ez00_1368))->BgL_argsz00);
						BgL_rz00_1373 =
							BGl_getza2za2zzsaw_proceduresz00(BgL_arg3506z00_1382,
							BgL_rz00_1369);
					}
					{	/* SawMill/procedures.scm 81 */
						BgL_varz00_bglt BgL_obj2155z00_1905;

						BgL_obj2155z00_1905 =
							(((BgL_appz00_bglt) CREF(BgL_ez00_1368))->BgL_funz00);
						BgL_vz00_1374 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1905))->BgL_variablez00);
					}
					{	/* SawMill/procedures.scm 82 */
						bool_t BgL_testz00_3098;

						{	/* SawMill/procedures.scm 82 */
							obj_t BgL_obj1812z00_1906;

							BgL_obj1812z00_1906 = (obj_t) (BgL_vz00_1374);
							BgL_testz00_3098 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1906,
								BGl_localz00zzast_varz00);
						}
						if (BgL_testz00_3098)
							{	/* SawMill/procedures.scm 82 */
								return BgL_rz00_1373;
							}
						else
							{	/* SawMill/procedures.scm 84 */
								obj_t BgL_idz00_1376;

								BgL_idz00_1376 =
									(((BgL_variablez00_bglt) CREF(BgL_vz00_1374))->BgL_idz00);
								if ((BgL_idz00_1376 == CNST_TABLE_REF(((long) 2))))
									{	/* SawMill/procedures.scm 86 */
										BgL_variablez00_bglt BgL_gz00_1378;

										{	/* SawMill/procedures.scm 86 */
											BgL_varz00_bglt BgL_obj2155z00_1910;

											{	/* SawMill/procedures.scm 86 */
												obj_t BgL_auxz00_3105;

												{	/* SawMill/procedures.scm 86 */
													obj_t BgL_pairz00_1909;

													BgL_pairz00_1909 =
														(((BgL_appz00_bglt) CREF(BgL_ez00_1368))->
														BgL_argsz00);
													BgL_auxz00_3105 = CAR(BgL_pairz00_1909);
												}
												BgL_obj2155z00_1910 =
													(BgL_varz00_bglt) (BgL_auxz00_3105);
											}
											BgL_gz00_1378 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1910))->
												BgL_variablez00);
										}
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
													(obj_t) (BgL_gz00_1378), BgL_rz00_1373)))
											{	/* SawMill/procedures.scm 87 */
												return BgL_rz00_1373;
											}
										else
											{	/* SawMill/procedures.scm 87 */
												return
													MAKE_PAIR((obj_t) (BgL_gz00_1378), BgL_rz00_1373);
											}
									}
								else
									{	/* SawMill/procedures.scm 85 */
										return BgL_rz00_1373;
									}
							}
					}
				}
			}
		}
	}



/* get-let-fun3328 */
	obj_t BGl_getzd2letzd2fun3328z00zzsaw_proceduresz00(obj_t BgL_envz00_2482,
		obj_t BgL_ez00_2483, obj_t BgL_rz00_2484)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 73 */
			{
				BgL_letzd2funzd2_bglt BgL_ez00_1343;

				obj_t BgL_rz00_1344;

				BgL_ez00_1343 = (BgL_letzd2funzd2_bglt) (BgL_ez00_2483);
				BgL_rz00_1344 = BgL_rz00_2484;
				{	/* SawMill/procedures.scm 75 */
					obj_t BgL_arg3490z00_1348;

					obj_t BgL_arg3491z00_1349;

					{	/* SawMill/procedures.scm 75 */
						obj_t BgL_l3306z00_1350;

						BgL_l3306z00_1350 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_ez00_1343))->BgL_localsz00);
						if (NULLP(BgL_l3306z00_1350))
							{	/* SawMill/procedures.scm 75 */
								BgL_arg3490z00_1348 = BNIL;
							}
						else
							{	/* SawMill/procedures.scm 75 */
								obj_t BgL_head3308z00_1352;

								BgL_head3308z00_1352 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3306z00_1354;

									obj_t BgL_tail3309z00_1355;

									BgL_l3306z00_1354 = BgL_l3306z00_1350;
									BgL_tail3309z00_1355 = BgL_head3308z00_1352;
								BgL_zc3anonymousza33493ze3z83_1356:
									if (NULLP(BgL_l3306z00_1354))
										{	/* SawMill/procedures.scm 75 */
											BgL_arg3490z00_1348 = CDR(BgL_head3308z00_1352);
										}
									else
										{	/* SawMill/procedures.scm 75 */
											obj_t BgL_newtail3310z00_1358;

											{	/* SawMill/procedures.scm 75 */
												obj_t BgL_arg3496z00_1360;

												{	/* SawMill/procedures.scm 75 */
													BgL_sfunz00_bglt BgL_obj1884z00_1869;

													{	/* SawMill/procedures.scm 75 */
														BgL_variablez00_bglt BgL_obj1611z00_1868;

														BgL_obj1611z00_1868 =
															(BgL_variablez00_bglt) (CAR(BgL_l3306z00_1354));
														BgL_obj1884z00_1869 =
															(BgL_sfunz00_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1868))->BgL_valuez00));
													}
													BgL_arg3496z00_1360 =
														(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1869))->
														BgL_bodyz00);
												}
												BgL_newtail3310z00_1358 =
													MAKE_PAIR(BgL_arg3496z00_1360, BNIL);
											}
											SET_CDR(BgL_tail3309z00_1355, BgL_newtail3310z00_1358);
											{
												obj_t BgL_tail3309z00_3133;

												obj_t BgL_l3306z00_3131;

												BgL_l3306z00_3131 = CDR(BgL_l3306z00_1354);
												BgL_tail3309z00_3133 = BgL_newtail3310z00_1358;
												BgL_tail3309z00_1355 = BgL_tail3309z00_3133;
												BgL_l3306z00_1354 = BgL_l3306z00_3131;
												goto BgL_zc3anonymousza33493ze3z83_1356;
											}
										}
								}
							}
					}
					{	/* SawMill/procedures.scm 76 */
						BgL_nodez00_bglt BgL_arg3499z00_1365;

						BgL_arg3499z00_1365 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_ez00_1343))->BgL_bodyz00);
						{	/* SawMill/procedures.scm 76 */
							obj_t BgL_method3312z00_1878;

							{	/* SawMill/procedures.scm 76 */
								BgL_objectz00_bglt BgL_objz00_1879;

								BgL_objz00_1879 = (BgL_objectz00_bglt) (BgL_arg3499z00_1365);
								{	/* SawMill/procedures.scm 76 */
									long BgL_objzd2classzd2numz00_1880;

									BgL_objzd2classzd2numz00_1880 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1879);
									{	/* SawMill/procedures.scm 76 */
										obj_t BgL_arg2643z00_1881;

										BgL_arg2643z00_1881 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 76 */
											obj_t BgL_arrayz00_1883;

											int BgL_offsetz00_1884;

											BgL_arrayz00_1883 = BgL_arg2643z00_1881;
											BgL_offsetz00_1884 =
												(int) (BgL_objzd2classzd2numz00_1880);
											{	/* SawMill/procedures.scm 76 */
												long BgL_offsetz00_1885;

												BgL_offsetz00_1885 =
													((long) (BgL_offsetz00_1884) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 76 */
													long BgL_modz00_1886;

													{	/* SawMill/procedures.scm 76 */
														int BgL_arg2645z00_1887;

														BgL_arg2645z00_1887 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 76 */
															long BgL_auxz00_3143;

															BgL_auxz00_3143 = (long) (BgL_arg2645z00_1887);
															BgL_modz00_1886 =
																(BgL_offsetz00_1885 / BgL_auxz00_3143);
													}}
													{	/* SawMill/procedures.scm 76 */
														long BgL_restz00_1888;

														{	/* SawMill/procedures.scm 76 */
															int BgL_arg2644z00_1889;

															BgL_arg2644z00_1889 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 76 */
																long BgL_auxz00_3147;

																BgL_auxz00_3147 = (long) (BgL_arg2644z00_1889);
																BgL_restz00_1888 =
																	(BgL_offsetz00_1885 % BgL_auxz00_3147);
														}}
														{	/* SawMill/procedures.scm 76 */

															BgL_method3312z00_1878 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1883,
																	(int) (BgL_modz00_1886)),
																(int) (BgL_restz00_1888));
							}}}}}}}}
							BgL_arg3491z00_1349 =
								PROCEDURE_ENTRY(BgL_method3312z00_1878) (BgL_method3312z00_1878,
								(obj_t) (BgL_arg3499z00_1365), BgL_rz00_1344, BEOA);
					}}
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3490z00_1348,
						BgL_arg3491z00_1349);
				}
			}
		}
	}



/* get-select3326 */
	obj_t BGl_getzd2select3326zd2zzsaw_proceduresz00(obj_t BgL_envz00_2485,
		obj_t BgL_ez00_2486, obj_t BgL_rz00_2487)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 68 */
			{
				BgL_selectz00_bglt BgL_ez00_1315;

				obj_t BgL_rz00_1316;

				BgL_ez00_1315 = (BgL_selectz00_bglt) (BgL_ez00_2486);
				BgL_rz00_1316 = BgL_rz00_2487;
				{	/* SawMill/procedures.scm 70 */
					BgL_nodez00_bglt BgL_arg3476z00_1320;

					obj_t BgL_arg3477z00_1321;

					BgL_arg3476z00_1320 =
						(((BgL_selectz00_bglt) CREF(BgL_ez00_1315))->BgL_testz00);
					{	/* SawMill/procedures.scm 70 */
						obj_t BgL_arg3478z00_1322;

						{	/* SawMill/procedures.scm 70 */
							obj_t BgL_l3300z00_1323;

							BgL_l3300z00_1323 =
								(((BgL_selectz00_bglt) CREF(BgL_ez00_1315))->BgL_clausesz00);
							if (NULLP(BgL_l3300z00_1323))
								{	/* SawMill/procedures.scm 70 */
									BgL_arg3478z00_1322 = BNIL;
								}
							else
								{	/* SawMill/procedures.scm 70 */
									obj_t BgL_head3302z00_1325;

									BgL_head3302z00_1325 =
										MAKE_PAIR(CDR(CAR(BgL_l3300z00_1323)), BNIL);
									{	/* SawMill/procedures.scm 70 */
										obj_t BgL_g3305z00_1326;

										BgL_g3305z00_1326 = CDR(BgL_l3300z00_1323);
										{
											obj_t BgL_l3300z00_1328;

											obj_t BgL_tail3303z00_1329;

											BgL_l3300z00_1328 = BgL_g3305z00_1326;
											BgL_tail3303z00_1329 = BgL_head3302z00_1325;
										BgL_zc3anonymousza33480ze3z83_1330:
											if (NULLP(BgL_l3300z00_1328))
												{	/* SawMill/procedures.scm 70 */
													BgL_arg3478z00_1322 = BgL_head3302z00_1325;
												}
											else
												{	/* SawMill/procedures.scm 70 */
													obj_t BgL_newtail3304z00_1332;

													BgL_newtail3304z00_1332 =
														MAKE_PAIR(CDR(CAR(BgL_l3300z00_1328)), BNIL);
													SET_CDR(BgL_tail3303z00_1329,
														BgL_newtail3304z00_1332);
													{
														obj_t BgL_tail3303z00_3175;

														obj_t BgL_l3300z00_3173;

														BgL_l3300z00_3173 = CDR(BgL_l3300z00_1328);
														BgL_tail3303z00_3175 = BgL_newtail3304z00_1332;
														BgL_tail3303z00_1329 = BgL_tail3303z00_3175;
														BgL_l3300z00_1328 = BgL_l3300z00_3173;
														goto BgL_zc3anonymousza33480ze3z83_1330;
													}
												}
										}
									}
								}
						}
						BgL_arg3477z00_1321 =
							BGl_getza2za2zzsaw_proceduresz00(BgL_arg3478z00_1322,
							BgL_rz00_1316);
					}
					{	/* SawMill/procedures.scm 70 */
						obj_t BgL_method3312z00_1836;

						{	/* SawMill/procedures.scm 70 */
							BgL_objectz00_bglt BgL_objz00_1837;

							BgL_objz00_1837 = (BgL_objectz00_bglt) (BgL_arg3476z00_1320);
							{	/* SawMill/procedures.scm 70 */
								long BgL_objzd2classzd2numz00_1838;

								BgL_objzd2classzd2numz00_1838 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1837);
								{	/* SawMill/procedures.scm 70 */
									obj_t BgL_arg2643z00_1839;

									BgL_arg2643z00_1839 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 70 */
										obj_t BgL_arrayz00_1841;

										int BgL_offsetz00_1842;

										BgL_arrayz00_1841 = BgL_arg2643z00_1839;
										BgL_offsetz00_1842 = (int) (BgL_objzd2classzd2numz00_1838);
										{	/* SawMill/procedures.scm 70 */
											long BgL_offsetz00_1843;

											BgL_offsetz00_1843 =
												((long) (BgL_offsetz00_1842) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 70 */
												long BgL_modz00_1844;

												{	/* SawMill/procedures.scm 70 */
													int BgL_arg2645z00_1845;

													BgL_arg2645z00_1845 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 70 */
														long BgL_auxz00_3185;

														BgL_auxz00_3185 = (long) (BgL_arg2645z00_1845);
														BgL_modz00_1844 =
															(BgL_offsetz00_1843 / BgL_auxz00_3185);
												}}
												{	/* SawMill/procedures.scm 70 */
													long BgL_restz00_1846;

													{	/* SawMill/procedures.scm 70 */
														int BgL_arg2644z00_1847;

														BgL_arg2644z00_1847 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 70 */
															long BgL_auxz00_3189;

															BgL_auxz00_3189 = (long) (BgL_arg2644z00_1847);
															BgL_restz00_1846 =
																(BgL_offsetz00_1843 % BgL_auxz00_3189);
													}}
													{	/* SawMill/procedures.scm 70 */

														BgL_method3312z00_1836 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1841,
																(int) (BgL_modz00_1844)),
															(int) (BgL_restz00_1846));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_1836) (BgL_method3312z00_1836,
							(obj_t) (BgL_arg3476z00_1320), BgL_arg3477z00_1321, BEOA);
					}
				}
			}
		}
	}



/* get-conditional3324 */
	obj_t BGl_getzd2conditional3324zd2zzsaw_proceduresz00(obj_t BgL_envz00_2488,
		obj_t BgL_ez00_2489, obj_t BgL_rz00_2490)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 63 */
			{
				BgL_conditionalz00_bglt BgL_ez00_1303;

				obj_t BgL_rz00_1304;

				BgL_ez00_1303 = (BgL_conditionalz00_bglt) (BgL_ez00_2489);
				BgL_rz00_1304 = BgL_rz00_2490;
				{	/* SawMill/procedures.scm 65 */
					BgL_nodez00_bglt BgL_arg3470z00_1308;

					obj_t BgL_arg3471z00_1309;

					BgL_arg3470z00_1308 =
						(((BgL_conditionalz00_bglt) CREF(BgL_ez00_1303))->BgL_testz00);
					{	/* SawMill/procedures.scm 65 */
						BgL_nodez00_bglt BgL_arg3472z00_1310;

						obj_t BgL_arg3473z00_1311;

						BgL_arg3472z00_1310 =
							(((BgL_conditionalz00_bglt) CREF(BgL_ez00_1303))->BgL_truez00);
						{	/* SawMill/procedures.scm 65 */
							BgL_nodez00_bglt BgL_arg3474z00_1312;

							BgL_arg3474z00_1312 =
								(((BgL_conditionalz00_bglt) CREF(BgL_ez00_1303))->BgL_falsez00);
							{	/* SawMill/procedures.scm 65 */
								obj_t BgL_method3312z00_1739;

								{	/* SawMill/procedures.scm 65 */
									BgL_objectz00_bglt BgL_objz00_1740;

									BgL_objz00_1740 = (BgL_objectz00_bglt) (BgL_arg3474z00_1312);
									{	/* SawMill/procedures.scm 65 */
										long BgL_objzd2classzd2numz00_1741;

										BgL_objzd2classzd2numz00_1741 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1740);
										{	/* SawMill/procedures.scm 65 */
											obj_t BgL_arg2643z00_1742;

											BgL_arg2643z00_1742 =
												PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
												(int) (((long) 1)));
											{	/* SawMill/procedures.scm 65 */
												obj_t BgL_arrayz00_1744;

												int BgL_offsetz00_1745;

												BgL_arrayz00_1744 = BgL_arg2643z00_1742;
												BgL_offsetz00_1745 =
													(int) (BgL_objzd2classzd2numz00_1741);
												{	/* SawMill/procedures.scm 65 */
													long BgL_offsetz00_1746;

													BgL_offsetz00_1746 =
														((long) (BgL_offsetz00_1745) - OBJECT_TYPE);
													{	/* SawMill/procedures.scm 65 */
														long BgL_modz00_1747;

														{	/* SawMill/procedures.scm 65 */
															int BgL_arg2645z00_1748;

															BgL_arg2645z00_1748 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 65 */
																long BgL_auxz00_3211;

																BgL_auxz00_3211 = (long) (BgL_arg2645z00_1748);
																BgL_modz00_1747 =
																	(BgL_offsetz00_1746 / BgL_auxz00_3211);
														}}
														{	/* SawMill/procedures.scm 65 */
															long BgL_restz00_1749;

															{	/* SawMill/procedures.scm 65 */
																int BgL_arg2644z00_1750;

																BgL_arg2644z00_1750 = (int) (((long) 16));
																{	/* SawMill/procedures.scm 65 */
																	long BgL_auxz00_3215;

																	BgL_auxz00_3215 =
																		(long) (BgL_arg2644z00_1750);
																	BgL_restz00_1749 =
																		(BgL_offsetz00_1746 % BgL_auxz00_3215);
															}}
															{	/* SawMill/procedures.scm 65 */

																BgL_method3312z00_1739 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1744,
																		(int) (BgL_modz00_1747)),
																	(int) (BgL_restz00_1749));
								}}}}}}}}
								BgL_arg3473z00_1311 =
									PROCEDURE_ENTRY(BgL_method3312z00_1739)
									(BgL_method3312z00_1739, (obj_t) (BgL_arg3474z00_1312),
									BgL_rz00_1304, BEOA);
						}}
						{	/* SawMill/procedures.scm 65 */
							obj_t BgL_method3312z00_1766;

							{	/* SawMill/procedures.scm 65 */
								BgL_objectz00_bglt BgL_objz00_1767;

								BgL_objz00_1767 = (BgL_objectz00_bglt) (BgL_arg3472z00_1310);
								{	/* SawMill/procedures.scm 65 */
									long BgL_objzd2classzd2numz00_1768;

									BgL_objzd2classzd2numz00_1768 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1767);
									{	/* SawMill/procedures.scm 65 */
										obj_t BgL_arg2643z00_1769;

										BgL_arg2643z00_1769 =
											PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
											(int) (((long) 1)));
										{	/* SawMill/procedures.scm 65 */
											obj_t BgL_arrayz00_1771;

											int BgL_offsetz00_1772;

											BgL_arrayz00_1771 = BgL_arg2643z00_1769;
											BgL_offsetz00_1772 =
												(int) (BgL_objzd2classzd2numz00_1768);
											{	/* SawMill/procedures.scm 65 */
												long BgL_offsetz00_1773;

												BgL_offsetz00_1773 =
													((long) (BgL_offsetz00_1772) - OBJECT_TYPE);
												{	/* SawMill/procedures.scm 65 */
													long BgL_modz00_1774;

													{	/* SawMill/procedures.scm 65 */
														int BgL_arg2645z00_1775;

														BgL_arg2645z00_1775 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 65 */
															long BgL_auxz00_3233;

															BgL_auxz00_3233 = (long) (BgL_arg2645z00_1775);
															BgL_modz00_1774 =
																(BgL_offsetz00_1773 / BgL_auxz00_3233);
													}}
													{	/* SawMill/procedures.scm 65 */
														long BgL_restz00_1776;

														{	/* SawMill/procedures.scm 65 */
															int BgL_arg2644z00_1777;

															BgL_arg2644z00_1777 = (int) (((long) 16));
															{	/* SawMill/procedures.scm 65 */
																long BgL_auxz00_3237;

																BgL_auxz00_3237 = (long) (BgL_arg2644z00_1777);
																BgL_restz00_1776 =
																	(BgL_offsetz00_1773 % BgL_auxz00_3237);
														}}
														{	/* SawMill/procedures.scm 65 */

															BgL_method3312z00_1766 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1771,
																	(int) (BgL_modz00_1774)),
																(int) (BgL_restz00_1776));
							}}}}}}}}
							BgL_arg3471z00_1309 =
								PROCEDURE_ENTRY(BgL_method3312z00_1766) (BgL_method3312z00_1766,
								(obj_t) (BgL_arg3472z00_1310), BgL_arg3473z00_1311, BEOA);
					}}
					{	/* SawMill/procedures.scm 65 */
						obj_t BgL_method3312z00_1793;

						{	/* SawMill/procedures.scm 65 */
							BgL_objectz00_bglt BgL_objz00_1794;

							BgL_objz00_1794 = (BgL_objectz00_bglt) (BgL_arg3470z00_1308);
							{	/* SawMill/procedures.scm 65 */
								long BgL_objzd2classzd2numz00_1795;

								BgL_objzd2classzd2numz00_1795 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1794);
								{	/* SawMill/procedures.scm 65 */
									obj_t BgL_arg2643z00_1796;

									BgL_arg2643z00_1796 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 65 */
										obj_t BgL_arrayz00_1798;

										int BgL_offsetz00_1799;

										BgL_arrayz00_1798 = BgL_arg2643z00_1796;
										BgL_offsetz00_1799 = (int) (BgL_objzd2classzd2numz00_1795);
										{	/* SawMill/procedures.scm 65 */
											long BgL_offsetz00_1800;

											BgL_offsetz00_1800 =
												((long) (BgL_offsetz00_1799) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 65 */
												long BgL_modz00_1801;

												{	/* SawMill/procedures.scm 65 */
													int BgL_arg2645z00_1802;

													BgL_arg2645z00_1802 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 65 */
														long BgL_auxz00_3255;

														BgL_auxz00_3255 = (long) (BgL_arg2645z00_1802);
														BgL_modz00_1801 =
															(BgL_offsetz00_1800 / BgL_auxz00_3255);
												}}
												{	/* SawMill/procedures.scm 65 */
													long BgL_restz00_1803;

													{	/* SawMill/procedures.scm 65 */
														int BgL_arg2644z00_1804;

														BgL_arg2644z00_1804 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 65 */
															long BgL_auxz00_3259;

															BgL_auxz00_3259 = (long) (BgL_arg2644z00_1804);
															BgL_restz00_1803 =
																(BgL_offsetz00_1800 % BgL_auxz00_3259);
													}}
													{	/* SawMill/procedures.scm 65 */

														BgL_method3312z00_1793 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1798,
																(int) (BgL_modz00_1801)),
															(int) (BgL_restz00_1803));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_1793) (BgL_method3312z00_1793,
							(obj_t) (BgL_arg3470z00_1308), BgL_arg3471z00_1309, BEOA);
					}
				}
			}
		}
	}



/* get-sequence3322 */
	obj_t BGl_getzd2sequence3322zd2zzsaw_proceduresz00(obj_t BgL_envz00_2491,
		obj_t BgL_ez00_2492, obj_t BgL_rz00_2493)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 58 */
			{
				BgL_sequencez00_bglt BgL_ez00_1295;

				obj_t BgL_rz00_1296;

				BgL_ez00_1295 = (BgL_sequencez00_bglt) (BgL_ez00_2492);
				BgL_rz00_1296 = BgL_rz00_2493;
				{	/* SawMill/procedures.scm 59 */
					obj_t BgL_arg3468z00_1732;

					BgL_arg3468z00_1732 =
						(((BgL_sequencez00_bglt) CREF(BgL_ez00_1295))->BgL_nodesz00);
					return
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg3468z00_1732,
						BgL_rz00_1296);
				}
			}
		}
	}



/* get-setq3320 */
	obj_t BGl_getzd2setq3320zd2zzsaw_proceduresz00(obj_t BgL_envz00_2494,
		obj_t BgL_ez00_2495, obj_t BgL_rz00_2496)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 53 */
			{
				BgL_setqz00_bglt BgL_ez00_1287;

				obj_t BgL_rz00_1288;

				BgL_ez00_1287 = (BgL_setqz00_bglt) (BgL_ez00_2495);
				BgL_rz00_1288 = BgL_rz00_2496;
				{	/* SawMill/procedures.scm 54 */
					BgL_nodez00_bglt BgL_arg3466z00_1702;

					BgL_arg3466z00_1702 =
						(((BgL_setqz00_bglt) CREF(BgL_ez00_1287))->BgL_valuez00);
					{	/* SawMill/procedures.scm 54 */
						obj_t BgL_method3312z00_1706;

						{	/* SawMill/procedures.scm 54 */
							BgL_objectz00_bglt BgL_objz00_1707;

							BgL_objz00_1707 = (BgL_objectz00_bglt) (BgL_arg3466z00_1702);
							{	/* SawMill/procedures.scm 54 */
								long BgL_objzd2classzd2numz00_1708;

								BgL_objzd2classzd2numz00_1708 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1707);
								{	/* SawMill/procedures.scm 54 */
									obj_t BgL_arg2643z00_1709;

									BgL_arg2643z00_1709 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 54 */
										obj_t BgL_arrayz00_1711;

										int BgL_offsetz00_1712;

										BgL_arrayz00_1711 = BgL_arg2643z00_1709;
										BgL_offsetz00_1712 = (int) (BgL_objzd2classzd2numz00_1708);
										{	/* SawMill/procedures.scm 54 */
											long BgL_offsetz00_1713;

											BgL_offsetz00_1713 =
												((long) (BgL_offsetz00_1712) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 54 */
												long BgL_modz00_1714;

												{	/* SawMill/procedures.scm 54 */
													int BgL_arg2645z00_1715;

													BgL_arg2645z00_1715 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 54 */
														long BgL_auxz00_3282;

														BgL_auxz00_3282 = (long) (BgL_arg2645z00_1715);
														BgL_modz00_1714 =
															(BgL_offsetz00_1713 / BgL_auxz00_3282);
												}}
												{	/* SawMill/procedures.scm 54 */
													long BgL_restz00_1716;

													{	/* SawMill/procedures.scm 54 */
														int BgL_arg2644z00_1717;

														BgL_arg2644z00_1717 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 54 */
															long BgL_auxz00_3286;

															BgL_auxz00_3286 = (long) (BgL_arg2644z00_1717);
															BgL_restz00_1716 =
																(BgL_offsetz00_1713 % BgL_auxz00_3286);
													}}
													{	/* SawMill/procedures.scm 54 */

														BgL_method3312z00_1706 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1711,
																(int) (BgL_modz00_1714)),
															(int) (BgL_restz00_1716));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_1706) (BgL_method3312z00_1706,
							(obj_t) (BgL_arg3466z00_1702), BgL_rz00_1288, BEOA);
					}
				}
			}
		}
	}



/* get-let-var3318 */
	obj_t BGl_getzd2letzd2var3318z00zzsaw_proceduresz00(obj_t BgL_envz00_2497,
		obj_t BgL_ez00_2498, obj_t BgL_rz00_2499)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 48 */
			{
				BgL_letzd2varzd2_bglt BgL_ez00_1259;

				obj_t BgL_rz00_1260;

				BgL_ez00_1259 = (BgL_letzd2varzd2_bglt) (BgL_ez00_2498);
				BgL_rz00_1260 = BgL_rz00_2499;
				{	/* SawMill/procedures.scm 50 */
					BgL_nodez00_bglt BgL_arg3452z00_1264;

					obj_t BgL_arg3453z00_1265;

					BgL_arg3452z00_1264 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_1259))->BgL_bodyz00);
					{	/* SawMill/procedures.scm 50 */
						obj_t BgL_arg3454z00_1266;

						{	/* SawMill/procedures.scm 50 */
							obj_t BgL_l3294z00_1267;

							BgL_l3294z00_1267 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_1259))->
								BgL_bindingsz00);
							if (NULLP(BgL_l3294z00_1267))
								{	/* SawMill/procedures.scm 50 */
									BgL_arg3454z00_1266 = BNIL;
								}
							else
								{	/* SawMill/procedures.scm 50 */
									obj_t BgL_head3296z00_1269;

									BgL_head3296z00_1269 =
										MAKE_PAIR(CDR(CAR(BgL_l3294z00_1267)), BNIL);
									{	/* SawMill/procedures.scm 50 */
										obj_t BgL_g3299z00_1270;

										BgL_g3299z00_1270 = CDR(BgL_l3294z00_1267);
										{
											obj_t BgL_l3294z00_1272;

											obj_t BgL_tail3297z00_1273;

											BgL_l3294z00_1272 = BgL_g3299z00_1270;
											BgL_tail3297z00_1273 = BgL_head3296z00_1269;
										BgL_zc3anonymousza33456ze3z83_1274:
											if (NULLP(BgL_l3294z00_1272))
												{	/* SawMill/procedures.scm 50 */
													BgL_arg3454z00_1266 = BgL_head3296z00_1269;
												}
											else
												{	/* SawMill/procedures.scm 50 */
													obj_t BgL_newtail3298z00_1276;

													BgL_newtail3298z00_1276 =
														MAKE_PAIR(CDR(CAR(BgL_l3294z00_1272)), BNIL);
													SET_CDR(BgL_tail3297z00_1273,
														BgL_newtail3298z00_1276);
													{
														obj_t BgL_tail3297z00_3313;

														obj_t BgL_l3294z00_3311;

														BgL_l3294z00_3311 = CDR(BgL_l3294z00_1272);
														BgL_tail3297z00_3313 = BgL_newtail3298z00_1276;
														BgL_tail3297z00_1273 = BgL_tail3297z00_3313;
														BgL_l3294z00_1272 = BgL_l3294z00_3311;
														goto BgL_zc3anonymousza33456ze3z83_1274;
													}
												}
										}
									}
								}
						}
						BgL_arg3453z00_1265 =
							BGl_getza2za2zzsaw_proceduresz00(BgL_arg3454z00_1266,
							BgL_rz00_1260);
					}
					{	/* SawMill/procedures.scm 50 */
						obj_t BgL_method3312z00_1676;

						{	/* SawMill/procedures.scm 50 */
							BgL_objectz00_bglt BgL_objz00_1677;

							BgL_objz00_1677 = (BgL_objectz00_bglt) (BgL_arg3452z00_1264);
							{	/* SawMill/procedures.scm 50 */
								long BgL_objzd2classzd2numz00_1678;

								BgL_objzd2classzd2numz00_1678 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1677);
								{	/* SawMill/procedures.scm 50 */
									obj_t BgL_arg2643z00_1679;

									BgL_arg2643z00_1679 =
										PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
										(int) (((long) 1)));
									{	/* SawMill/procedures.scm 50 */
										obj_t BgL_arrayz00_1681;

										int BgL_offsetz00_1682;

										BgL_arrayz00_1681 = BgL_arg2643z00_1679;
										BgL_offsetz00_1682 = (int) (BgL_objzd2classzd2numz00_1678);
										{	/* SawMill/procedures.scm 50 */
											long BgL_offsetz00_1683;

											BgL_offsetz00_1683 =
												((long) (BgL_offsetz00_1682) - OBJECT_TYPE);
											{	/* SawMill/procedures.scm 50 */
												long BgL_modz00_1684;

												{	/* SawMill/procedures.scm 50 */
													int BgL_arg2645z00_1685;

													BgL_arg2645z00_1685 = (int) (((long) 16));
													{	/* SawMill/procedures.scm 50 */
														long BgL_auxz00_3323;

														BgL_auxz00_3323 = (long) (BgL_arg2645z00_1685);
														BgL_modz00_1684 =
															(BgL_offsetz00_1683 / BgL_auxz00_3323);
												}}
												{	/* SawMill/procedures.scm 50 */
													long BgL_restz00_1686;

													{	/* SawMill/procedures.scm 50 */
														int BgL_arg2644z00_1687;

														BgL_arg2644z00_1687 = (int) (((long) 16));
														{	/* SawMill/procedures.scm 50 */
															long BgL_auxz00_3327;

															BgL_auxz00_3327 = (long) (BgL_arg2644z00_1687);
															BgL_restz00_1686 =
																(BgL_offsetz00_1683 % BgL_auxz00_3327);
													}}
													{	/* SawMill/procedures.scm 50 */

														BgL_method3312z00_1676 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1681,
																(int) (BgL_modz00_1684)),
															(int) (BgL_restz00_1686));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3312z00_1676) (BgL_method3312z00_1676,
							(obj_t) (BgL_arg3452z00_1264), BgL_arg3453z00_1265, BEOA);
					}
				}
			}
		}
	}



/* get-var3316 */
	obj_t BGl_getzd2var3316zd2zzsaw_proceduresz00(obj_t BgL_envz00_2500,
		obj_t BgL_ez00_2501, obj_t BgL_rz00_2502)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 39 */
			{
				BgL_varz00_bglt BgL_ez00_1243;

				obj_t BgL_rz00_1244;

				BgL_ez00_1243 = (BgL_varz00_bglt) (BgL_ez00_2501);
				BgL_rz00_1244 = BgL_rz00_2502;
				{	/* SawMill/procedures.scm 41 */
					bool_t BgL_testz00_3338;

					{	/* SawMill/procedures.scm 41 */
						bool_t BgL_testz00_3339;

						{	/* SawMill/procedures.scm 41 */
							BgL_variablez00_bglt BgL_arg3450z00_1256;

							BgL_arg3450z00_1256 =
								(((BgL_varz00_bglt) CREF(BgL_ez00_1243))->BgL_variablez00);
							{	/* SawMill/procedures.scm 41 */
								obj_t BgL_obj1751z00_1652;

								BgL_obj1751z00_1652 = (obj_t) (BgL_arg3450z00_1256);
								BgL_testz00_3339 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1652,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_3339)
							{	/* SawMill/procedures.scm 42 */
								bool_t BgL_testz00_3343;

								{	/* SawMill/procedures.scm 42 */
									BgL_valuez00_bglt BgL_arg3448z00_1254;

									{	/* SawMill/procedures.scm 42 */
										BgL_variablez00_bglt BgL_obj1611z00_1654;

										BgL_obj1611z00_1654 =
											(((BgL_varz00_bglt) CREF(BgL_ez00_1243))->
											BgL_variablez00);
										BgL_arg3448z00_1254 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1654))->
											BgL_valuez00);
									}
									{	/* SawMill/procedures.scm 42 */
										obj_t BgL_obj1955z00_1655;

										BgL_obj1955z00_1655 = (obj_t) (BgL_arg3448z00_1254);
										BgL_testz00_3343 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1655,
											BGl_sfunz00zzast_varz00);
									}
								}
								if (BgL_testz00_3343)
									{	/* SawMill/procedures.scm 42 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
													(obj_t) (
														(((BgL_varz00_bglt) CREF(BgL_ez00_1243))->
															BgL_variablez00)), BgL_rz00_1244)))
											{	/* SawMill/procedures.scm 43 */
												BgL_testz00_3338 = ((bool_t) 0);
											}
										else
											{	/* SawMill/procedures.scm 43 */
												BgL_testz00_3338 = ((bool_t) 1);
											}
									}
								else
									{	/* SawMill/procedures.scm 42 */
										BgL_testz00_3338 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/procedures.scm 41 */
								BgL_testz00_3338 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3338)
						{	/* SawMill/procedures.scm 44 */
							BgL_variablez00_bglt BgL_arg3443z00_1249;

							BgL_arg3443z00_1249 =
								(((BgL_varz00_bglt) CREF(BgL_ez00_1243))->BgL_variablez00);
							return MAKE_PAIR((obj_t) (BgL_arg3443z00_1249), BgL_rz00_1244);
						}
					else
						{	/* SawMill/procedures.scm 41 */
							return BgL_rz00_1244;
						}
				}
			}
		}
	}



/* get-atom3314 */
	obj_t BGl_getzd2atom3314zd2zzsaw_proceduresz00(obj_t BgL_envz00_2503,
		obj_t BgL_ez00_2504, obj_t BgL_rz00_2505)
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 35 */
			return BgL_rz00_2505;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_proceduresz00()
	{
		AN_OBJECT;
		{	/* SawMill/procedures.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3644z00zzsaw_proceduresz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3644z00zzsaw_proceduresz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3644z00zzsaw_proceduresz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3644z00zzsaw_proceduresz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(((long) 184579698),
				BSTRING_TO_STRING(BGl_string3644z00zzsaw_proceduresz00));
		}
	}

#ifdef __cplusplus
}
#endif
