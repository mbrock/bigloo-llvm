/*===========================================================================*/
/*   (SawMill/node2rtl.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/node2rtl.scm)*/
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

	typedef struct BgL_rtl_jumpexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                      *BgL_rtl_jumpexitz00_bglt;

	typedef struct BgL_rtl_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_failz00_bglt;

	typedef struct BgL_rtl_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                *BgL_rtl_ifz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

	typedef struct BgL_rtl_movz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_movz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_loadfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                     *BgL_rtl_loadfunz00_bglt;

	typedef struct BgL_rtl_globalrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                       *BgL_rtl_globalrefz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                    *BgL_rtl_vallocz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                     *BgL_rtl_vlengthz00_bglt;

	typedef struct BgL_rtl_isaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                 *BgL_rtl_isaz00_bglt;

	typedef struct BgL_rtl_makeboxz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_makeboxz00_bglt;

	typedef struct BgL_rtl_boxrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxrefz00_bglt;

	typedef struct BgL_rtl_storegz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                    *BgL_rtl_storegz00_bglt;

	typedef struct BgL_rtl_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_setfieldz00_bglt;

	typedef struct BgL_rtl_vsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vsetz00_bglt;

	typedef struct BgL_rtl_boxsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxsetz00_bglt;

	typedef struct BgL_rtl_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_constrz00;
	}                 *BgL_rtl_newz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_applyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                   *BgL_rtl_applyz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_funcallz00_bglt;

	typedef struct BgL_rtl_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
	}                    *BgL_rtl_pragmaz00_bglt;

	typedef struct BgL_rtl_cast_nullz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                       *BgL_rtl_cast_nullz00_bglt;

	typedef struct BgL_rtl_protectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_protectz00_bglt;

	typedef struct BgL_rtl_protectedz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                       *BgL_rtl_protectedz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_areaz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_blockz00_bgl *BgL_entryz00;
		struct BgL_blockz00_bgl *BgL_exitz00;
	}              *BgL_areaz00_bglt;

	typedef struct BgL_reversedz00_bgl
	{
		char dummy;
	}                  *BgL_reversedz00_bglt;

	typedef struct BgL_rlocalz00_bgl
	{
		obj_t BgL_regz00;
		obj_t BgL_codez00;
	}                *BgL_rlocalz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern BgL_rtl_boxrefz00_bglt BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2pragma4327ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2select4317ze3zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static BgL_areaz00_bglt BGl_predicatez00zzsaw_node2rtlz00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl__nodezd2ze3rtlzd2default4300ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern BgL_rtl_returnz00_bglt BGl_makezd2rtl_returnzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2sequence4311ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern BgL_rtl_boxsetz00_bglt BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_blockz00_bglt,
		BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2conditiona4314ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2area4378ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2atom4303ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_rtl_insz00_bglt BGl_makezd2rtl_inszd2zzsaw_defsz00(obj_t, obj_t,
		obj_t, BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2new4333ze3zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt BGl_forkzf2joinzf2zzsaw_node2rtlz00(BgL_areaz00_bglt,
		obj_t, BgL_rtl_regz00_bglt);
	extern BgL_rtl_isaz00_bglt BGl_makezd2rtl_isazd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl__areazd2nilzd2zzsaw_node2rtlz00(obj_t);
	static BgL_areaz00_bglt BGl_linkz00zzsaw_node2rtlz00(BgL_areaz00_bglt,
		BgL_areaz00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2boxzd2setz124359z23zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3rtlzd2vsetz124339zf1zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern BgL_rtl_lightfuncallz00_bglt
		BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzsaw_node2rtlz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl__rlocalzd2nilzd2zzsaw_node2rtlz00(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_areaz00_bglt BGl_linkza2za2zzsaw_node2rtlz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern obj_t BGl_vallocz00zzast_nodez00;
	static BgL_areaz00_bglt BGl_forkz00zzsaw_node2rtlz00(BgL_areaz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__localzd2ze3regz31zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_node2rtlz00();
	static obj_t BGl_predicatezd2conditiona4365zd2zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t);
	static BgL_areaz00_bglt
		BGl_localzd2ze3codez31zzsaw_node2rtlz00(BgL_localz00_bglt);
	extern BgL_rtl_newz00_bglt BGl_makezd2rtl_newzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	extern BgL_rtl_movz00_bglt BGl_makezd2rtl_movzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2rever4374ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00 = BUNSPEC;
	static BgL_areaz00_bglt
		BGl_nodezd2ze3rtlzd2default4300ze3zzsaw_node2rtlz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl__reversedzf3zf3zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern BgL_rtl_nopz00_bglt BGl_makezd2rtl_nopzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4372z83zzsaw_node2rtlz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4376z83zzsaw_node2rtlz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4380z83zzsaw_node2rtlz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__predicatez00zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	extern BgL_rtl_selectz00_bglt BGl_makezd2rtl_selectzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt, obj_t);
	static BgL_areaz00_bglt BGl_rcallza2za2zzsaw_node2rtlz00(BgL_appz00_bglt,
		BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2castzd2null4347z31zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern BgL_rtl_vallocz00_bglt BGl_makezd2rtl_valloczd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern BgL_rtl_callz00_bglt BGl_makezd2rtl_callzd2zzsaw_defsz00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	extern BgL_rtl_jumpexitz00_bglt
		BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(obj_t);
	static BgL_rtl_regz00_bglt
		BGl_newzd2uregzd2zzsaw_node2rtlz00(BgL_localz00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2cast4345ze3zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_argszd21zd2zzsaw_node2rtlz00(obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_nodezd2ze3rtlzd2makezd2box4355z31zzsaw_node2rtlz00(obj_t,
		obj_t);
	static BgL_areaz00_bglt
		BGl_compilezd2labelzd2callz00zzsaw_node2rtlz00(BgL_localz00_bglt, obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3rtlzd2funcall4325ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2getfield4329ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern BgL_blockz00_bglt BGl_makezd2blockzd2zzsaw_defsz00(int, obj_t, obj_t,
		obj_t);
	static BgL_reversedz00_bglt BGl_wideningzd2reversedzd2zzsaw_node2rtlz00();
	extern BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_reversedz00_bglt BGl_reversedzd2nilzd2zzsaw_node2rtlz00();
	extern BgL_rtl_failz00_bglt BGl_makezd2rtl_failzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2app4321ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_rtl_globalrefz00_bglt
		BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(obj_t, BgL_globalz00_bglt);
	extern BgL_rtl_ifz00_bglt BGl_makezd2rtl_ifzd2zzsaw_defsz00(obj_t);
	static BgL_areaz00_bglt BGl_callza2za2zzsaw_node2rtlz00(obj_t,
		BgL_rtl_funz00_bglt, obj_t);
	extern BgL_rtl_cast_nullz00_bglt
		BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(obj_t, BgL_typez00_bglt);
	static bool_t BGl_dfsz00zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_globalz00_bglt);
	static obj_t BGl_predicatezd2atom4363zd2zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_nodezd2ze3rtlzd2jumpzd2exzd2it4351ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_node2rtlz00();
	static obj_t BGl__z52allocatezd2rlocalz80zzsaw_node2rtlz00(obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl__rlocalzf3zf3zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00 = BUNSPEC;
	static obj_t BGl_nodezd2ze3rtlzd2vref4337ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_rtl_vlengthz00_bglt BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2vlength4341ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2setq4309ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_blockz00_bglt BGl_blockzd2nilzd2zzsaw_defsz00();
	static obj_t BGl_areaz00zzsaw_node2rtlz00 = BUNSPEC;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static BgL_rtl_regz00_bglt
		BGl_newzd2regzd2zzsaw_node2rtlz00(BgL_nodez00_bglt);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00 = BUNSPEC;
	static obj_t BGl_nodezd2ze3rtlzd2setfield4331ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern BgL_rtl_protectz00_bglt BGl_makezd2rtl_protectzd2zzsaw_defsz00(obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzsaw_node2rtlz00();
	static BgL_areaz00_bglt
		BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(BgL_nodez00_bglt);
	static obj_t BGl_predicatezd2letzd2var4368z00zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl__z52allocatezd2reversedz80zzsaw_node2rtlz00(obj_t);
	extern BgL_rtl_applyz00_bglt BGl_makezd2rtl_applyzd2zzsaw_defsz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl__globalzd2ze3rtlz31zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2boxzd2ref4357z31zzsaw_node2rtlz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_joinz00zzsaw_node2rtlz00(obj_t, BgL_rtl_regz00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_reversedz00zzsaw_node2rtlz00 = BUNSPEC;
	extern BgL_rtl_getfieldz00_bglt BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(obj_t,
		obj_t, BgL_typez00_bglt, BgL_typez00_bglt);
	extern BgL_rtl_loadfunz00_bglt BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_node2rtlz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2var4305ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_rtl_pragmaz00_bglt BGl_makezd2rtl_pragmazd2zzsaw_defsz00(obj_t,
		obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_isaz00zzast_nodez00;
	extern BgL_rtl_makeboxz00_bglt BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(obj_t);
	static obj_t BGl__z52allocatezd2areaz80zzsaw_node2rtlz00(obj_t);
	static obj_t BGl__predicatezd2default4360zd2zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_nodezd2ze3rtlzd2fail4353ze3zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2rloca4370ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_areaz00_bglt BGl_movez00zzsaw_node2rtlz00(BgL_rtl_regz00_bglt,
		BgL_localz00_bglt);
	extern BgL_rtl_funcallz00_bglt BGl_makezd2rtl_funcallzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_imperativezf3zf3zzsaw_node2rtlz00(BgL_appz00_bglt,
		BgL_globalz00_bglt, obj_t);
	extern BgL_rtl_vrefz00_bglt BGl_makezd2rtl_vrefzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl_findzd2registerzd2zzsaw_node2rtlz00(obj_t,
		BgL_rtl_regz00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2appzd2ly4323z31zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_rlocalz00zzsaw_node2rtlz00 = BUNSPEC;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	static BgL_rlocalz00_bglt BGl_rlocalzd2nilzd2zzsaw_node2rtlz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_rtl_vsetz00_bglt BGl_makezd2rtl_vsetzd2zzsaw_defsz00(obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2isa4343ze3zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl__nodezd2ze3rtlz31zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_rtl_loadgz00_bglt BGl_makezd2rtl_loadgzd2zzsaw_defsz00(obj_t,
		BgL_globalz00_bglt);
	extern BgL_rtl_loadiz00_bglt BGl_makezd2rtl_loadizd2zzsaw_defsz00(obj_t,
		BgL_atomz00_bglt);
	extern obj_t BGl_newz00zzast_nodez00;
	static obj_t BGl_z52thezd2areazd2nilz52zzsaw_node2rtlz00 = BUNSPEC;
	static obj_t BGl__reversedzd2nilzd2zzsaw_node2rtlz00(obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2letzd2fun4319z31zzsaw_node2rtlz00(obj_t,
		obj_t);
	static BgL_areaz00_bglt BGl_singleza2za2zzsaw_node2rtlz00(obj_t,
		BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl__areazf3zf3zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_rtl_setfieldz00_bglt BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(obj_t,
		obj_t, BgL_typez00_bglt, BgL_typez00_bglt);
	extern BgL_rtl_protectedz00_bglt
		BGl_makezd2rtl_protectedzd2zzsaw_defsz00(obj_t);
	static obj_t BGl_nodezd2ze3rtlzd2valloc4335ze3zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	static obj_t BGl_nodezd2ze3rtlzd2letzd2var4307z31zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static BgL_areaz00_bglt BGl_unlinkz00zzsaw_node2rtlz00(BgL_areaz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_node2rtlz00();
	static BgL_areaz00_bglt
		BGl_predicatezd2default4360zd2zzsaw_node2rtlz00(BgL_nodez00_bglt, obj_t);
	static bool_t BGl_za2reversezd2callzd2argumentza2z00zzsaw_node2rtlz00;
	static obj_t BGl_coercez00zzsaw_node2rtlz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_node2rtlz00();
	static obj_t BGl_nodezd2ze3rtlzd2setzd2exzd2it4349ze3zzsaw_node2rtlz00(obj_t,
		obj_t);
	static BgL_areaz00_bglt BGl_areazd2nilzd2zzsaw_node2rtlz00();
	extern BgL_rtl_storegz00_bglt BGl_makezd2rtl_storegzd2zzsaw_defsz00(obj_t,
		BgL_globalz00_bglt);
	static obj_t __cnst[11];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_reversedzd2nilzd2envz00zzsaw_node2rtlz00,
		BgL_bgl__reversedza7d2nilza75240z00,
		BGl__reversedzd2nilzd2zzsaw_node2rtlz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
		BgL_bgl__nodeza7d2za7e3rtlza735241za7,
		BGl__nodezd2ze3rtlz31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_predicatezd2default4360zd2envz00zzsaw_node2rtlz00,
		BgL_bgl__predicateza7d2def5242za7,
		BGl__predicatezd2default4360zd2zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_reversedzf3zd2envz21zzsaw_node2rtlz00,
		BgL_bgl__reversedza7f3za7f3za75243za7, BGl__reversedzf3zf3zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_rlocalzd2nilzd2envz00zzsaw_node2rtlz00,
		BgL_bgl__rlocalza7d2nilza7d25244z00, BGl__rlocalzd2nilzd2zzsaw_node2rtlz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2ze3regzd2envze3zzsaw_node2rtlz00,
		BgL_bgl__localza7d2za7e3regza75245za7,
		BGl__localzd2ze3regz31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_areazf3zd2envz21zzsaw_node2rtlz00,
		BgL_bgl__areaza7f3za7f3za7za7saw5246z00, BGl__areazf3zf3zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2ze3rtlzd2envze3zzsaw_node2rtlz00,
		BgL_bgl__globalza7d2za7e3rtl5247z00,
		BGl__globalzd2ze3rtlz31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5200z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25248za7,
		BGl_nodezd2ze3rtlzd2letzd2fun4319z31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5201z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25249za7,
		BGl_nodezd2ze3rtlzd2app4321ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5202z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25250za7,
		BGl_nodezd2ze3rtlzd2appzd2ly4323z31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5192z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25251za7,
		BGl_nodezd2ze3rtlzd2atom4303ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5203z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25252za7,
		BGl_nodezd2ze3rtlzd2funcall4325ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5204z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25253za7,
		BGl_nodezd2ze3rtlzd2pragma4327ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5194z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25254za7,
		BGl_nodezd2ze3rtlzd2var4305ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5205z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25255za7,
		BGl_nodezd2ze3rtlzd2getfield4329ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5195z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25256za7,
		BGl_nodezd2ze3rtlzd2letzd2var4307z31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5206z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25257za7,
		BGl_nodezd2ze3rtlzd2setfield4331ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5196z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25258za7,
		BGl_nodezd2ze3rtlzd2setq4309ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5207z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25259za7,
		BGl_nodezd2ze3rtlzd2new4333ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5197z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25260za7,
		BGl_nodezd2ze3rtlzd2sequence4311ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5208z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25261za7,
		BGl_nodezd2ze3rtlzd2valloc4335ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5198z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25262za7,
		BGl_nodezd2ze3rtlzd2conditiona4314ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5210z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25263za7,
		BGl_nodezd2ze3rtlzd2vsetz124339zf1zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5209z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25264za7,
		BGl_nodezd2ze3rtlzd2vref4337ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5199z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25265za7,
		BGl_nodezd2ze3rtlzd2select4317ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5211z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25266za7,
		BGl_nodezd2ze3rtlzd2vlength4341ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5212z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25267za7,
		BGl_nodezd2ze3rtlzd2isa4343ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5213z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25268za7,
		BGl_nodezd2ze3rtlzd2cast4345ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5214z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25269za7,
		BGl_nodezd2ze3rtlzd2castzd2null4347z31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5215z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25270za7,
		BGl_nodezd2ze3rtlzd2setzd2exzd2it4349ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5216z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25271za7,
		BGl_nodezd2ze3rtlzd2jumpzd2exzd2it4351ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5217z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25272za7,
		BGl_nodezd2ze3rtlzd2fail4353ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5218z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25273za7,
		BGl_nodezd2ze3rtlzd2makezd2box4355z31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5220z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25274za7,
		BGl_nodezd2ze3rtlzd2boxzd2setz124359z23zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5219z00zzsaw_node2rtlz00,
		BgL_bgl_nodeza7d2za7e3rtlza7d25275za7,
		BGl_nodezd2ze3rtlzd2boxzd2ref4357z31zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5221z00zzsaw_node2rtlz00,
		BgL_bgl_predicateza7d2atom5276za7,
		BGl_predicatezd2atom4363zd2zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5223z00zzsaw_node2rtlz00,
		BgL_bgl_predicateza7d2cond5277za7,
		BGl_predicatezd2conditiona4365zd2zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5224z00zzsaw_node2rtlz00,
		BgL_bgl_predicateza7d2letza75278z00,
		BGl_predicatezd2letzd2var4368z00zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5225z00zzsaw_node2rtlz00,
		BgL_bgl_objectza7d2za7e3stru5279z00,
		BGl_objectzd2ze3structzd2rloca4370ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5227z00zzsaw_node2rtlz00,
		BgL_bgl_structza7b2objectza75280z00,
		BGl_structzb2objectzd2ze3objec4372z83zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5230z00zzsaw_node2rtlz00,
		BgL_bgl_structza7b2objectza75281z00,
		BGl_structzb2objectzd2ze3objec4376z83zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5229z00zzsaw_node2rtlz00,
		BgL_bgl_objectza7d2za7e3stru5282z00,
		BGl_objectzd2ze3structzd2rever4374ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5231z00zzsaw_node2rtlz00,
		BgL_bgl_objectza7d2za7e3stru5283z00,
		BGl_objectzd2ze3structzd2area4378ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5232z00zzsaw_node2rtlz00,
		BgL_bgl_structza7b2objectza75284z00,
		BGl_structzb2objectzd2ze3objec4380z83zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
		BgL_bgl__predicateza700za7za7s5285za7, BGl__predicatez00zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5188z00zzsaw_node2rtlz00,
		BgL_bgl_string5188za700za7za7s5286za7, "bad constant", 12);
	      DEFINE_STRING(BGl_string5190z00zzsaw_node2rtlz00,
		BgL_bgl_string5190za700za7za7s5287za7, "predicate", 9);
	      DEFINE_STRING(BGl_string5189z00zzsaw_node2rtlz00,
		BgL_bgl_string5189za700za7za7s5288za7, "node->rtl", 9);
	      DEFINE_STRING(BGl_string5191z00zzsaw_node2rtlz00,
		BgL_bgl_string5191za700za7za7s5289za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5193z00zzsaw_node2rtlz00,
		BgL_bgl_string5193za700za7za7s5290za7, "node->rtl::area", 15);
	      DEFINE_STRING(BGl_string5222z00zzsaw_node2rtlz00,
		BgL_bgl_string5222za700za7za7s5291za7, "predicate::area", 15);
	      DEFINE_STRING(BGl_string5226z00zzsaw_node2rtlz00,
		BgL_bgl_string5226za700za7za7s5292za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5228z00zzsaw_node2rtlz00,
		BgL_bgl_string5228za700za7za7s5293za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5233z00zzsaw_node2rtlz00,
		BgL_bgl_string5233za700za7za7s5294za7, "saw_node2rtl", 12);
	      DEFINE_STRING(BGl_string5234z00zzsaw_node2rtlz00,
		BgL_bgl_string5234za700za7za7s5295za7,
		"light elight node->rtl-default4300 _ rlocal reversed area __evmeaning_address procedure-1-el-set! select else ",
		110);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2areazd2envz52zzsaw_node2rtlz00,
		BgL_bgl__za752allocateza7d2a5296z00,
		BGl__z52allocatezd2areaz80zzsaw_node2rtlz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2reversedzd2envz52zzsaw_node2rtlz00,
		BgL_bgl__za752allocateza7d2r5297z00,
		BGl__z52allocatezd2reversedz80zzsaw_node2rtlz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_areazd2nilzd2envz00zzsaw_node2rtlz00,
		BgL_bgl__areaza7d2nilza7d2za7za75298z00,
		BGl__areazd2nilzd2zzsaw_node2rtlz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_rlocalzf3zd2envz21zzsaw_node2rtlz00,
		BgL_bgl__rlocalza7f3za7f3za7za7s5299z00, BGl__rlocalzf3zf3zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2rlocalzd2envz52zzsaw_node2rtlz00,
		BgL_bgl__za752allocateza7d2r5300z00,
		BGl__z52allocatezd2rlocalz80zzsaw_node2rtlz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2ze3rtlzd2default4300zd2envz31zzsaw_node2rtlz00,
		BgL_bgl__nodeza7d2za7e3rtlza7d5301za7,
		BGl__nodezd2ze3rtlzd2default4300ze3zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long
		BgL_checksumz00_4451, char *BgL_fromz00_4452)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_node2rtlz00();
					BGl_cnstzd2initzd2zzsaw_node2rtlz00();
					BGl_importedzd2moduleszd2initz00zzsaw_node2rtlz00();
					BGl_objectzd2initzd2zzsaw_node2rtlz00();
					BGl_genericzd2initzd2zzsaw_node2rtlz00();
					BGl_methodzd2initzd2zzsaw_node2rtlz00();
					BGl_toplevelzd2initzd2zzsaw_node2rtlz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_node2rtl");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			{	/* SawMill/node2rtl.scm 1 */
				obj_t BgL_cportz00_4425;

				BgL_cportz00_4425 =
					bgl_open_input_string(BGl_string5234z00zzsaw_node2rtlz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4426;

					BgL_iz00_4426 = ((long) 10);
				BgL_loopz00_4427:
					if ((BgL_iz00_4426 == ((long) -1)))
						{	/* SawMill/node2rtl.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/node2rtl.scm 1 */
							{	/* SawMill/node2rtl.scm 1 */
								obj_t BgL_arg5236z00_4429;

								{	/* SawMill/node2rtl.scm 1 */

									{	/* SawMill/node2rtl.scm 1 */
										obj_t BgL_locationz00_4431;

										BgL_locationz00_4431 = BBOOL(((bool_t) 0));
										{	/* SawMill/node2rtl.scm 1 */

											BgL_arg5236z00_4429 =
												BGl_readz00zz__readerz00(BgL_cportz00_4425,
												BgL_locationz00_4431);
										}
									}
								}
								{	/* SawMill/node2rtl.scm 1 */
									int BgL_auxz00_4475;

									BgL_auxz00_4475 = (int) (BgL_iz00_4426);
									CNST_TABLE_SET(BgL_auxz00_4475, BgL_arg5236z00_4429);
							}}
							{	/* SawMill/node2rtl.scm 1 */
								int BgL_auxz00_4432;

								BgL_auxz00_4432 = (int) ((BgL_iz00_4426 - ((long) 1)));
								{
									long BgL_iz00_4480;

									BgL_iz00_4480 = (long) (BgL_auxz00_4432);
									BgL_iz00_4426 = BgL_iz00_4480;
									goto BgL_loopz00_4427;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			BGl_za2reversezd2callzd2argumentza2z00zzsaw_node2rtlz00 = ((bool_t) 0);
			return BUNSPEC;
		}
	}



/* global->rtl */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_globalz00_bglt BgL_varz00_15)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 28 */
			{	/* SawMill/node2rtl.scm 29 */
				BgL_areaz00_bglt BgL_az00_1251;

				{	/* SawMill/node2rtl.scm 29 */
					BgL_rtl_returnz00_bglt BgL_arg4399z00_1272;

					obj_t BgL_arg4400z00_1273;

					{	/* SawMill/node2rtl.scm 29 */
						BgL_typez00_bglt BgL_arg4402z00_1275;

						{
							BgL_variablez00_bglt BgL_auxz00_4482;

							BgL_auxz00_4482 = (BgL_variablez00_bglt) (BgL_varz00_15);
							BgL_arg4402z00_1275 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4482))->BgL_typez00);
						}
						BgL_arg4399z00_1272 =
							BGl_makezd2rtl_returnzd2zzsaw_defsz00(BFALSE,
							BgL_arg4402z00_1275);
					}
					{	/* SawMill/node2rtl.scm 30 */
						BgL_sfunz00_bglt BgL_obj1884z00_2815;

						{	/* SawMill/node2rtl.scm 30 */
							BgL_variablez00_bglt BgL_obj1611z00_2814;

							BgL_obj1611z00_2814 = (BgL_variablez00_bglt) (BgL_varz00_15);
							BgL_obj1884z00_2815 =
								(BgL_sfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2814))->
									BgL_valuez00));
						}
						BgL_arg4400z00_1273 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2815))->BgL_bodyz00);
					}
					{	/* SawMill/node2rtl.scm 29 */
						obj_t BgL_list4401z00_1274;

						BgL_list4401z00_1274 = MAKE_PAIR(BgL_arg4400z00_1273, BNIL);
						BgL_az00_1251 =
							BGl_callza2za2zzsaw_node2rtlz00(BFALSE,
							(BgL_rtl_funz00_bglt) (BgL_arg4399z00_1272),
							BgL_list4401z00_1274);
					}
				}
				{	/* SawMill/node2rtl.scm 32 */
					BgL_blockz00_bglt BgL_rz00_1252;

					obj_t BgL_nz00_1253;

					BgL_rz00_1252 =
						(((BgL_areaz00_bglt) CREF(BgL_az00_1251))->BgL_entryz00);
					{	/* SawMill/node2rtl.scm 32 */
						obj_t BgL_cellvalz00_4494;

						BgL_cellvalz00_4494 = BINT(((long) 0));
						BgL_nz00_1253 = MAKE_CELL(BgL_cellvalz00_4494);
					}
					BGl_dfsz00zzsaw_node2rtlz00(BgL_nz00_1253, (obj_t) (BgL_rz00_1252));
					return BgL_rz00_1252;
				}
			}
		}
	}



/* dfs */
	bool_t BGl_dfsz00zzsaw_node2rtlz00(obj_t BgL_nz00_4422, obj_t BgL_bz00_1255)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 33 */
			{	/* SawMill/node2rtl.scm 34 */
				BgL_blockz00_bglt BgL_obj4086z00_1257;

				BgL_obj4086z00_1257 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1255));
				{	/* SawMill/node2rtl.scm 34 */
					BgL_reversedz00_bglt BgL_arg4391z00_1258;

					BgL_arg4391z00_1258 = BGl_wideningzd2reversedzd2zzsaw_node2rtlz00();
					{	/* SawMill/node2rtl.scm 34 */
						obj_t BgL_auxz00_4503;

						BgL_objectz00_bglt BgL_auxz00_4501;

						BgL_auxz00_4503 = (obj_t) (BgL_arg4391z00_1258);
						BgL_auxz00_4501 = (BgL_objectz00_bglt) (BgL_obj4086z00_1257);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4501, BgL_auxz00_4503);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4086z00_1257),
					BGl_classzd2numzd2zz__objectz00(BGl_reversedz00zzsaw_node2rtlz00));
				BgL_obj4086z00_1257;
			}
			{	/* SawMill/node2rtl.scm 35 */
				BgL_blockz00_bglt BgL_obj3933z00_2822;

				int BgL_val3932z00_2823;

				BgL_obj3933z00_2822 = (BgL_blockz00_bglt) (BgL_bz00_1255);
				BgL_val3932z00_2823 = CINT(CELL_REF(BgL_nz00_4422));
				((((BgL_blockz00_bglt) CREF(BgL_obj3933z00_2822))->BgL_labelz00) =
					((int) BgL_val3932z00_2823), BUNSPEC);
			}
			{	/* SawMill/node2rtl.scm 36 */
				obj_t BgL_auxz00_4423;

				{	/* SawMill/node2rtl.scm 36 */
					long BgL_za71za7_2824;

					BgL_za71za7_2824 = (long) CINT(CELL_REF(BgL_nz00_4422));
					BgL_auxz00_4423 = BINT((BgL_za71za7_2824 + ((long) 1)));
				}
				CELL_SET(BgL_nz00_4422, BgL_auxz00_4423);
			}
			{	/* SawMill/node2rtl.scm 37 */
				obj_t BgL_g4209z00_1260;

				{
					BgL_blockz00_bglt BgL_auxz00_4515;

					BgL_auxz00_4515 = (BgL_blockz00_bglt) (BgL_bz00_1255);
					BgL_g4209z00_1260 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_4515))->BgL_succsz00);
				}
				{
					obj_t BgL_l4207z00_1262;

					BgL_l4207z00_1262 = BgL_g4209z00_1260;
				BgL_zc3anonymousza34393ze3z83_1263:
					if (PAIRP(BgL_l4207z00_1262))
						{	/* SawMill/node2rtl.scm 40 */
							{	/* SawMill/node2rtl.scm 39 */
								obj_t BgL_sz00_1265;

								BgL_sz00_1265 = CAR(BgL_l4207z00_1262);
								{	/* SawMill/node2rtl.scm 38 */
									obj_t BgL_arg4395z00_1266;

									{	/* SawMill/node2rtl.scm 38 */
										obj_t BgL_arg4396z00_1267;

										{
											BgL_blockz00_bglt BgL_auxz00_4521;

											BgL_auxz00_4521 = (BgL_blockz00_bglt) (BgL_sz00_1265);
											BgL_arg4396z00_1267 =
												(((BgL_blockz00_bglt) CREF(BgL_auxz00_4521))->
												BgL_predsz00);
										}
										BgL_arg4395z00_1266 =
											MAKE_PAIR(BgL_bz00_1255, BgL_arg4396z00_1267);
									}
									{
										BgL_blockz00_bglt BgL_auxz00_4525;

										BgL_auxz00_4525 = (BgL_blockz00_bglt) (BgL_sz00_1265);
										((((BgL_blockz00_bglt) CREF(BgL_auxz00_4525))->
												BgL_predsz00) = ((obj_t) BgL_arg4395z00_1266), BUNSPEC);
									}
								}
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1265,
										BGl_reversedz00zzsaw_node2rtlz00))
									{	/* SawMill/node2rtl.scm 39 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/node2rtl.scm 39 */
										BGl_dfsz00zzsaw_node2rtlz00(BgL_nz00_4422, BgL_sz00_1265);
									}
							}
							{
								obj_t BgL_l4207z00_4531;

								BgL_l4207z00_4531 = CDR(BgL_l4207z00_1262);
								BgL_l4207z00_1262 = BgL_l4207z00_4531;
								goto BgL_zc3anonymousza34393ze3z83_1263;
							}
						}
					else
						{	/* SawMill/node2rtl.scm 40 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* _global->rtl */
	obj_t BGl__globalzd2ze3rtlz31zzsaw_node2rtlz00(obj_t BgL_envz00_4274,
		obj_t BgL_varz00_4275)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 28 */
			return
				(obj_t) (BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(
					(BgL_globalz00_bglt) (BgL_varz00_4275)));
		}
	}



/* new-reg */
	BgL_rtl_regz00_bglt BGl_newzd2regzd2zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_16)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 46 */
			{	/* SawMill/node2rtl.scm 47 */
				BgL_typez00_bglt BgL_arg4404z00_1277;

				obj_t BgL_arg4405z00_1278;

				obj_t BgL_arg4406z00_1279;

				BgL_arg4404z00_1277 = BGl_getzd2typezd2zztype_typeofz00(BgL_ez00_16);
				{	/* SawMill/node2rtl.scm 47 */

					{	/* SawMill/node2rtl.scm 47 */

						BgL_arg4405z00_1278 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				{	/* SawMill/defs.scm 16 */

					{	/* SawMill/defs.scm 16 */

						BgL_arg4406z00_1279 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				return
					BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_arg4404z00_1277, BFALSE,
					BFALSE, BgL_arg4405z00_1278, BgL_arg4406z00_1279, BFALSE);
			}
		}
	}



/* new-ureg */
	BgL_rtl_regz00_bglt BGl_newzd2uregzd2zzsaw_node2rtlz00(BgL_localz00_bglt
		BgL_varz00_17)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 49 */
			{	/* SawMill/node2rtl.scm 50 */
				BgL_typez00_bglt BgL_arg4407z00_1282;

				obj_t BgL_arg4408z00_1283;

				obj_t BgL_arg4409z00_1284;

				{
					BgL_variablez00_bglt BgL_auxz00_4540;

					BgL_auxz00_4540 = (BgL_variablez00_bglt) (BgL_varz00_17);
					BgL_arg4407z00_1282 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_4540))->BgL_typez00);
				}
				{	/* SawMill/defs.scm 15 */

					{	/* SawMill/defs.scm 15 */

						BgL_arg4408z00_1283 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				{	/* SawMill/defs.scm 16 */

					{	/* SawMill/defs.scm 16 */

						BgL_arg4409z00_1284 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				return
					BGl_makezd2rtl_regzd2zzsaw_defsz00(BgL_arg4407z00_1282,
					(obj_t) (BgL_varz00_17), BFALSE, BgL_arg4408z00_1283,
					BgL_arg4409z00_1284, BFALSE);
			}
		}
	}



/* local->reg */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt BgL_varz00_18)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 52 */
			{	/* SawMill/node2rtl.scm 53 */
				bool_t BgL_testz00_4547;

				{	/* SawMill/node2rtl.scm 53 */
					obj_t BgL_obj4050z00_2835;

					BgL_obj4050z00_2835 = (obj_t) (BgL_varz00_18);
					BgL_testz00_4547 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj4050z00_2835,
						BGl_rlocalz00zzsaw_node2rtlz00);
				}
				if (BgL_testz00_4547)
					{	/* SawMill/node2rtl.scm 54 */
						BgL_rlocalz00_bglt BgL_obj4051z00_2836;

						BgL_obj4051z00_2836 = (BgL_rlocalz00_bglt) (BgL_varz00_18);
						{	/* SawMill/node2rtl.scm 54 */
							obj_t BgL_auxz00_4551;

							{
								obj_t BgL_auxz00_4552;

								{	/* SawMill/node2rtl.scm 54 */
									BgL_objectz00_bglt BgL_auxz00_4553;

									BgL_auxz00_4553 = (BgL_objectz00_bglt) (BgL_obj4051z00_2836);
									BgL_auxz00_4552 = BGL_OBJECT_WIDENING(BgL_auxz00_4553);
								}
								BgL_auxz00_4551 =
									(((BgL_rlocalz00_bglt) CREF(BgL_auxz00_4552))->BgL_regz00);
							}
							return (BgL_rtl_regz00_bglt) (BgL_auxz00_4551);
						}
					}
				else
					{	/* SawMill/node2rtl.scm 55 */
						BgL_rtl_regz00_bglt BgL_rz00_1288;

						BgL_rz00_1288 = BGl_newzd2uregzd2zzsaw_node2rtlz00(BgL_varz00_18);
						{	/* SawMill/node2rtl.scm 56 */
							BgL_localz00_bglt BgL_obj4089z00_1289;

							BgL_obj4089z00_1289 = ((BgL_localz00_bglt) BgL_varz00_18);
							{	/* SawMill/node2rtl.scm 56 */
								BgL_rlocalz00_bglt BgL_arg4411z00_1290;

								{	/* SawMill/node2rtl.scm 56 */
									BgL_rlocalz00_bglt BgL_res5089z00_2846;

									{	/* SawMill/node2rtl.scm 56 */
										obj_t BgL_reg4018z00_2837;

										BgL_reg4018z00_2837 = (obj_t) (BgL_rz00_1288);
										{	/* SawMill/node2rtl.scm 56 */
											BgL_rlocalz00_bglt BgL_new4020z00_2839;

											BgL_new4020z00_2839 =
												((BgL_rlocalz00_bglt) BREF(GC_MALLOC(sizeof(struct
															BgL_rlocalz00_bgl))));
											{	/* SawMill/node2rtl.scm 56 */
												BgL_rlocalz00_bglt BgL_res5088z00_2845;

												{	/* SawMill/node2rtl.scm 56 */
													BgL_rlocalz00_bglt BgL_new4038z00_2840;

													BgL_new4038z00_2840 = BgL_new4020z00_2839;
													{	/* SawMill/node2rtl.scm 56 */
														obj_t BgL_reg4036z00_2843;

														obj_t BgL_code4037z00_2844;

														BgL_reg4036z00_2843 = BgL_reg4018z00_2837;
														BgL_code4037z00_2844 = BFALSE;
														((((BgL_rlocalz00_bglt) CREF(BgL_new4038z00_2840))->
																BgL_regz00) =
															((obj_t) BgL_reg4036z00_2843), BUNSPEC);
														((((BgL_rlocalz00_bglt) CREF(BgL_new4038z00_2840))->
																BgL_codez00) =
															((obj_t) BgL_code4037z00_2844), BUNSPEC);
														BgL_res5088z00_2845 = BgL_new4038z00_2840;
												}} BgL_res5088z00_2845;
											}
											BgL_res5089z00_2846 = BgL_new4020z00_2839;
									}}
									BgL_arg4411z00_1290 = BgL_res5089z00_2846;
								}
								{	/* SawMill/node2rtl.scm 56 */
									obj_t BgL_auxz00_4566;

									BgL_objectz00_bglt BgL_auxz00_4564;

									BgL_auxz00_4566 = (obj_t) (BgL_arg4411z00_1290);
									BgL_auxz00_4564 = (BgL_objectz00_bglt) (BgL_obj4089z00_1289);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_4564, BgL_auxz00_4566);
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4089z00_1289),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rlocalz00zzsaw_node2rtlz00));
							BgL_obj4089z00_1289;
						}
						return BgL_rz00_1288;
					}
			}
		}
	}



/* _local->reg */
	obj_t BGl__localzd2ze3regz31zzsaw_node2rtlz00(obj_t BgL_envz00_4276,
		obj_t BgL_varz00_4277)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 52 */
			return
				(obj_t) (BGl_localzd2ze3regz31zzsaw_node2rtlz00(
					(BgL_localz00_bglt) (BgL_varz00_4277)));
		}
	}



/* bdestination! */
	obj_t BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_blockz00_bglt BgL_bz00_21,
		BgL_rtl_regz00_bglt BgL_regz00_22)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 65 */
			{	/* SawMill/node2rtl.scm 66 */
				obj_t BgL_insz00_1294;

				BgL_insz00_1294 =
					CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
						(((BgL_blockz00_bglt) CREF(BgL_bz00_21))->BgL_firstz00)));
				{	/* SawMill/node2rtl.scm 67 */
					bool_t BgL_testz00_4578;

					{	/* SawMill/node2rtl.scm 67 */
						bool_t BgL_testz00_4579;

						{	/* SawMill/node2rtl.scm 67 */
							BgL_rtl_funz00_bglt BgL_arg4420z00_1300;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_4580;

								BgL_auxz00_4580 = (BgL_rtl_insz00_bglt) (BgL_insz00_1294);
								BgL_arg4420z00_1300 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4580))->BgL_funz00);
							}
							{	/* SawMill/node2rtl.scm 67 */
								obj_t BgL_obj3481z00_2857;

								BgL_obj3481z00_2857 = (obj_t) (BgL_arg4420z00_1300);
								BgL_testz00_4579 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3481z00_2857,
									BGl_rtl_movz00zzsaw_defsz00);
							}
						}
						if (BgL_testz00_4579)
							{	/* SawMill/node2rtl.scm 68 */
								bool_t BgL_testz00_4585;

								{	/* SawMill/node2rtl.scm 68 */
									obj_t BgL_auxz00_4586;

									{	/* SawMill/node2rtl.scm 68 */
										obj_t BgL_pairz00_2859;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_4587;

											BgL_auxz00_4587 = (BgL_rtl_insz00_bglt) (BgL_insz00_1294);
											BgL_pairz00_2859 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4587))->
												BgL_argsz00);
										}
										BgL_auxz00_4586 = CAR(BgL_pairz00_2859);
									}
									BgL_testz00_4585 =
										(BgL_auxz00_4586 == (obj_t) (BgL_regz00_22));
								}
								if (BgL_testz00_4585)
									{	/* SawMill/node2rtl.scm 68 */
										BgL_testz00_4578 = ((bool_t) 0);
									}
								else
									{	/* SawMill/node2rtl.scm 68 */
										BgL_testz00_4578 = ((bool_t) 1);
									}
							}
						else
							{	/* SawMill/node2rtl.scm 67 */
								BgL_testz00_4578 = ((bool_t) 1);
							}
					}
					if (BgL_testz00_4578)
						{
							obj_t BgL_auxz00_4595;

							BgL_rtl_insz00_bglt BgL_auxz00_4593;

							BgL_auxz00_4595 = (obj_t) (BgL_regz00_22);
							BgL_auxz00_4593 = (BgL_rtl_insz00_bglt) (BgL_insz00_1294);
							return
								((((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4593))->BgL_destz00) =
								((obj_t) BgL_auxz00_4595), BUNSPEC);
						}
					else
						{	/* SawMill/node2rtl.scm 67 */
							return BFALSE;
						}
				}
			}
		}
	}



/* single* */
	BgL_areaz00_bglt BGl_singleza2za2zzsaw_node2rtlz00(obj_t BgL_ez00_23,
		BgL_rtl_funz00_bglt BgL_funz00_24, obj_t BgL_argsz00_25)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 74 */
			{	/* SawMill/node2rtl.scm 75 */
				BgL_rtl_insz00_bglt BgL_insz00_1303;

				BgL_insz00_1303 =
					BGl_makezd2rtl_inszd2zzsaw_defsz00(BFALSE, BNIL, BFALSE,
					BgL_funz00_24, BgL_argsz00_25);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_23,
						BGl_nodez00zzast_nodez00))
					{	/* SawMill/node2rtl.scm 76 */
						{	/* SawMill/node2rtl.scm 77 */
							obj_t BgL_arg4424z00_1305;

							{
								BgL_nodez00_bglt BgL_auxz00_4601;

								BgL_auxz00_4601 = (BgL_nodez00_bglt) (BgL_ez00_23);
								BgL_arg4424z00_1305 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4601))->BgL_locz00);
							}
							((((BgL_rtl_funz00_bglt) CREF(BgL_funz00_24))->BgL_locz00) =
								((obj_t) BgL_arg4424z00_1305), BUNSPEC);
						}
						{	/* SawMill/node2rtl.scm 78 */
							obj_t BgL_arg4425z00_1306;

							{
								BgL_nodez00_bglt BgL_auxz00_4605;

								BgL_auxz00_4605 = (BgL_nodez00_bglt) (BgL_ez00_23);
								BgL_arg4425z00_1306 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4605))->BgL_locz00);
							}
							((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_1303))->BgL_locz00) =
								((obj_t) BgL_arg4425z00_1306), BUNSPEC);
						}
					}
				else
					{	/* SawMill/node2rtl.scm 76 */
						BFALSE;
					}
				{	/* SawMill/node2rtl.scm 79 */
					obj_t BgL_lz00_1307;

					BgL_lz00_1307 = MAKE_PAIR((obj_t) (BgL_insz00_1303), BNIL);
					{	/* SawMill/node2rtl.scm 80 */
						BgL_blockz00_bglt BgL_bz00_1308;

						BgL_bz00_1308 =
							BGl_makezd2blockzd2zzsaw_defsz00(
							(int) (((long) 0)), BNIL, BNIL, BgL_lz00_1307);
						{	/* SawMill/node2rtl.scm 81 */
							BgL_areaz00_bglt BgL_res5092z00_2883;

							{	/* SawMill/node2rtl.scm 81 */
								BgL_areaz00_bglt BgL_new3967z00_2871;

								{	/* SawMill/node2rtl.scm 81 */
									BgL_areaz00_bglt BgL_res5090z00_2876;

									{	/* SawMill/node2rtl.scm 81 */
										BgL_areaz00_bglt BgL_new3975z00_2872;

										BgL_new3975z00_2872 =
											((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_areaz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new3975z00_2872),
											BGl_classzd2numzd2zz__objectz00
											(BGl_areaz00zzsaw_node2rtlz00));
										{	/* SawMill/node2rtl.scm 81 */
											BgL_objectz00_bglt BgL_auxz00_4617;

											BgL_auxz00_4617 =
												(BgL_objectz00_bglt) (BgL_new3975z00_2872);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_4617, BFALSE);
										}
										BgL_res5090z00_2876 = BgL_new3975z00_2872;
									}
									BgL_new3967z00_2871 = BgL_res5090z00_2876;
								}
								{	/* SawMill/node2rtl.scm 81 */
									BgL_areaz00_bglt BgL_res5091z00_2882;

									{	/* SawMill/node2rtl.scm 81 */
										BgL_areaz00_bglt BgL_new3971z00_2877;

										BgL_new3971z00_2877 = BgL_new3967z00_2871;
										{	/* SawMill/node2rtl.scm 81 */
											BgL_blockz00_bglt BgL_entry3969z00_2880;

											BgL_blockz00_bglt BgL_exit3970z00_2881;

											BgL_entry3969z00_2880 = BgL_bz00_1308;
											BgL_exit3970z00_2881 = BgL_bz00_1308;
											((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2877))->
													BgL_entryz00) =
												((BgL_blockz00_bglt) BgL_entry3969z00_2880), BUNSPEC);
											((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2877))->
													BgL_exitz00) =
												((BgL_blockz00_bglt) BgL_exit3970z00_2881), BUNSPEC);
											BgL_res5091z00_2882 = BgL_new3971z00_2877;
									}} BgL_res5091z00_2882;
								}
								BgL_res5092z00_2883 = BgL_new3967z00_2871;
							}
							return BgL_res5092z00_2883;
						}
					}
				}
			}
		}
	}



/* unlink */
	BgL_areaz00_bglt BGl_unlinkz00zzsaw_node2rtlz00(BgL_areaz00_bglt BgL_az00_31)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 89 */
			{	/* SawMill/node2rtl.scm 90 */
				BgL_blockz00_bglt BgL_arg4427z00_1310;

				BgL_blockz00_bglt BgL_arg4428z00_1311;

				BgL_arg4427z00_1310 =
					(((BgL_areaz00_bglt) CREF(BgL_az00_31))->BgL_entryz00);
				{	/* SawMill/node2rtl.scm 92 */
					BgL_areaz00_bglt BgL_arg4429z00_1312;

					{	/* SawMill/node2rtl.scm 92 */
						BgL_rtl_nopz00_bglt BgL_arg4430z00_1313;

						BgL_arg4430z00_1313 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
						BgL_arg4429z00_1312 =
							BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
							(BgL_rtl_funz00_bglt) (BgL_arg4430z00_1313), BNIL);
					}
					BgL_arg4428z00_1311 =
						(((BgL_areaz00_bglt) CREF(BgL_arg4429z00_1312))->BgL_exitz00);
				}
				{	/* SawMill/node2rtl.scm 90 */
					BgL_areaz00_bglt BgL_res5095z00_2905;

					{	/* SawMill/node2rtl.scm 90 */
						BgL_areaz00_bglt BgL_new3967z00_2893;

						{	/* SawMill/node2rtl.scm 90 */
							BgL_areaz00_bglt BgL_res5093z00_2898;

							{	/* SawMill/node2rtl.scm 90 */
								BgL_areaz00_bglt BgL_new3975z00_2894;

								BgL_new3975z00_2894 =
									((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_areaz00_bgl))));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new3975z00_2894),
									BGl_classzd2numzd2zz__objectz00
									(BGl_areaz00zzsaw_node2rtlz00));
								{	/* SawMill/node2rtl.scm 90 */
									BgL_objectz00_bglt BgL_auxz00_4631;

									BgL_auxz00_4631 = (BgL_objectz00_bglt) (BgL_new3975z00_2894);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_4631, BFALSE);
								}
								BgL_res5093z00_2898 = BgL_new3975z00_2894;
							}
							BgL_new3967z00_2893 = BgL_res5093z00_2898;
						}
						{	/* SawMill/node2rtl.scm 90 */
							BgL_areaz00_bglt BgL_res5094z00_2904;

							{	/* SawMill/node2rtl.scm 90 */
								BgL_areaz00_bglt BgL_new3971z00_2899;

								BgL_new3971z00_2899 = BgL_new3967z00_2893;
								{	/* SawMill/node2rtl.scm 90 */
									BgL_blockz00_bglt BgL_entry3969z00_2902;

									BgL_blockz00_bglt BgL_exit3970z00_2903;

									BgL_entry3969z00_2902 = BgL_arg4427z00_1310;
									BgL_exit3970z00_2903 = BgL_arg4428z00_1311;
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2899))->
											BgL_entryz00) =
										((BgL_blockz00_bglt) BgL_entry3969z00_2902), BUNSPEC);
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2899))->
											BgL_exitz00) =
										((BgL_blockz00_bglt) BgL_exit3970z00_2903), BUNSPEC);
									BgL_res5094z00_2904 = BgL_new3971z00_2899;
							}} BgL_res5094z00_2904;
						}
						BgL_res5095z00_2905 = BgL_new3967z00_2893;
					}
					return BgL_res5095z00_2905;
				}
			}
		}
	}



/* link */
	BgL_areaz00_bglt BGl_linkz00zzsaw_node2rtlz00(BgL_areaz00_bglt BgL_b1z00_32,
		BgL_areaz00_bglt BgL_b2z00_33)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 94 */
			{	/* SawMill/node2rtl.scm 95 */
				BgL_blockz00_bglt BgL_arg4432z00_1315;

				BgL_blockz00_bglt BgL_arg4433z00_1316;

				BgL_arg4432z00_1315 =
					(((BgL_areaz00_bglt) CREF(BgL_b1z00_32))->BgL_exitz00);
				BgL_arg4433z00_1316 =
					(((BgL_areaz00_bglt) CREF(BgL_b2z00_33))->BgL_entryz00);
				{	/* SawMill/node2rtl.scm 95 */
					obj_t BgL_arg4413z00_2910;

					{	/* SawMill/node2rtl.scm 95 */
						obj_t BgL_arg4414z00_2911;

						BgL_arg4414z00_2911 =
							(((BgL_blockz00_bglt) CREF(BgL_arg4432z00_1315))->BgL_succsz00);
						BgL_arg4413z00_2910 =
							MAKE_PAIR((obj_t) (BgL_arg4433z00_1316), BgL_arg4414z00_2911);
					}
					((((BgL_blockz00_bglt) CREF(BgL_arg4432z00_1315))->BgL_succsz00) =
						((obj_t) BgL_arg4413z00_2910), BUNSPEC);
				}
			}
			{	/* SawMill/node2rtl.scm 96 */
				BgL_blockz00_bglt BgL_arg4434z00_1317;

				BgL_blockz00_bglt BgL_arg4435z00_1318;

				BgL_arg4434z00_1317 =
					(((BgL_areaz00_bglt) CREF(BgL_b1z00_32))->BgL_entryz00);
				BgL_arg4435z00_1318 =
					(((BgL_areaz00_bglt) CREF(BgL_b2z00_33))->BgL_exitz00);
				{	/* SawMill/node2rtl.scm 96 */
					BgL_areaz00_bglt BgL_res5098z00_2931;

					{	/* SawMill/node2rtl.scm 96 */
						BgL_areaz00_bglt BgL_new3967z00_2919;

						{	/* SawMill/node2rtl.scm 96 */
							BgL_areaz00_bglt BgL_res5096z00_2924;

							{	/* SawMill/node2rtl.scm 96 */
								BgL_areaz00_bglt BgL_new3975z00_2920;

								BgL_new3975z00_2920 =
									((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_areaz00_bgl))));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new3975z00_2920),
									BGl_classzd2numzd2zz__objectz00
									(BGl_areaz00zzsaw_node2rtlz00));
								{	/* SawMill/node2rtl.scm 96 */
									BgL_objectz00_bglt BgL_auxz00_4648;

									BgL_auxz00_4648 = (BgL_objectz00_bglt) (BgL_new3975z00_2920);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_4648, BFALSE);
								}
								BgL_res5096z00_2924 = BgL_new3975z00_2920;
							}
							BgL_new3967z00_2919 = BgL_res5096z00_2924;
						}
						{	/* SawMill/node2rtl.scm 96 */
							BgL_areaz00_bglt BgL_res5097z00_2930;

							{	/* SawMill/node2rtl.scm 96 */
								BgL_areaz00_bglt BgL_new3971z00_2925;

								BgL_new3971z00_2925 = BgL_new3967z00_2919;
								{	/* SawMill/node2rtl.scm 96 */
									BgL_blockz00_bglt BgL_entry3969z00_2928;

									BgL_blockz00_bglt BgL_exit3970z00_2929;

									BgL_entry3969z00_2928 = BgL_arg4434z00_1317;
									BgL_exit3970z00_2929 = BgL_arg4435z00_1318;
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2925))->
											BgL_entryz00) =
										((BgL_blockz00_bglt) BgL_entry3969z00_2928), BUNSPEC);
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2925))->
											BgL_exitz00) =
										((BgL_blockz00_bglt) BgL_exit3970z00_2929), BUNSPEC);
									BgL_res5097z00_2930 = BgL_new3971z00_2925;
							}} BgL_res5097z00_2930;
						}
						BgL_res5098z00_2931 = BgL_new3967z00_2919;
					}
					return BgL_res5098z00_2931;
				}
			}
		}
	}



/* link* */
	BgL_areaz00_bglt BGl_linkza2za2zzsaw_node2rtlz00(obj_t BgL_lz00_34)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 98 */
			{
				BgL_areaz00_bglt BgL_rz00_1325;

				obj_t BgL_lz00_1326;

				if (NULLP(BgL_lz00_34))
					{	/* SawMill/node2rtl.scm 104 */
						BgL_rtl_nopz00_bglt BgL_arg4437z00_1321;

						BgL_arg4437z00_1321 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
						return
							BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
							(BgL_rtl_funz00_bglt) (BgL_arg4437z00_1321), BNIL);
					}
				else
					{	/* SawMill/node2rtl.scm 105 */
						obj_t BgL_arg4439z00_1323;

						obj_t BgL_arg4440z00_1324;

						BgL_arg4439z00_1323 = CAR(BgL_lz00_34);
						BgL_arg4440z00_1324 = CDR(BgL_lz00_34);
						BgL_rz00_1325 = (BgL_areaz00_bglt) (BgL_arg4439z00_1323);
						BgL_lz00_1326 = BgL_arg4440z00_1324;
					BgL_zc3anonymousza34441ze3z83_1327:
						if (NULLP(BgL_lz00_1326))
							{	/* SawMill/node2rtl.scm 100 */
								return BgL_rz00_1325;
							}
						else
							{	/* SawMill/node2rtl.scm 102 */
								BgL_areaz00_bglt BgL_arg4443z00_1329;

								obj_t BgL_arg4444z00_1330;

								{	/* SawMill/node2rtl.scm 102 */
									obj_t BgL_arg4445z00_1331;

									BgL_arg4445z00_1331 = CAR(BgL_lz00_1326);
									BgL_arg4443z00_1329 =
										BGl_linkz00zzsaw_node2rtlz00(BgL_rz00_1325,
										(BgL_areaz00_bglt) (BgL_arg4445z00_1331));
								}
								BgL_arg4444z00_1330 = CDR(BgL_lz00_1326);
								{
									obj_t BgL_lz00_4667;

									BgL_areaz00_bglt BgL_rz00_4666;

									BgL_rz00_4666 = BgL_arg4443z00_1329;
									BgL_lz00_4667 = BgL_arg4444z00_1330;
									BgL_lz00_1326 = BgL_lz00_4667;
									BgL_rz00_1325 = BgL_rz00_4666;
									goto BgL_zc3anonymousza34441ze3z83_1327;
								}
							}
					}
			}
		}
	}



/* fork/join */
	BgL_areaz00_bglt BGl_forkzf2joinzf2zzsaw_node2rtlz00(BgL_areaz00_bglt
		BgL_headz00_35, obj_t BgL_contsz00_36, BgL_rtl_regz00_bglt BgL_rz00_37)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 107 */
			{	/* SawMill/node2rtl.scm 109 */
				BgL_blockz00_bglt BgL_arg4446z00_1333;

				obj_t BgL_arg4447z00_1334;

				BgL_arg4446z00_1333 =
					(((BgL_areaz00_bglt) CREF(BgL_headz00_35))->BgL_exitz00);
				if (NULLP(BgL_contsz00_36))
					{	/* SawMill/node2rtl.scm 109 */
						BgL_arg4447z00_1334 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 109 */
						obj_t BgL_head4212z00_1337;

						{	/* SawMill/node2rtl.scm 109 */
							BgL_blockz00_bglt BgL_arg4455z00_1350;

							{	/* SawMill/node2rtl.scm 109 */
								BgL_areaz00_bglt BgL_obj3959z00_2944;

								{	/* SawMill/node2rtl.scm 109 */
									obj_t BgL_pairz00_2943;

									BgL_pairz00_2943 = BgL_contsz00_36;
									BgL_obj3959z00_2944 =
										(BgL_areaz00_bglt) (CAR(BgL_pairz00_2943));
								}
								BgL_arg4455z00_1350 =
									(((BgL_areaz00_bglt) CREF(BgL_obj3959z00_2944))->
									BgL_entryz00);
							}
							BgL_head4212z00_1337 =
								MAKE_PAIR((obj_t) (BgL_arg4455z00_1350), BNIL);
						}
						{	/* SawMill/node2rtl.scm 109 */
							obj_t BgL_g4215z00_1338;

							BgL_g4215z00_1338 = CDR(BgL_contsz00_36);
							{
								obj_t BgL_l4210z00_1340;

								obj_t BgL_tail4213z00_1341;

								BgL_l4210z00_1340 = BgL_g4215z00_1338;
								BgL_tail4213z00_1341 = BgL_head4212z00_1337;
							BgL_zc3anonymousza34449ze3z83_1342:
								if (NULLP(BgL_l4210z00_1340))
									{	/* SawMill/node2rtl.scm 109 */
										BgL_arg4447z00_1334 = BgL_head4212z00_1337;
									}
								else
									{	/* SawMill/node2rtl.scm 109 */
										obj_t BgL_newtail4214z00_1344;

										{	/* SawMill/node2rtl.scm 109 */
											BgL_blockz00_bglt BgL_arg4452z00_1346;

											{	/* SawMill/node2rtl.scm 109 */
												BgL_areaz00_bglt BgL_obj3959z00_2950;

												{	/* SawMill/node2rtl.scm 109 */
													obj_t BgL_pairz00_2949;

													BgL_pairz00_2949 = BgL_l4210z00_1340;
													BgL_obj3959z00_2950 =
														(BgL_areaz00_bglt) (CAR(BgL_pairz00_2949));
												}
												BgL_arg4452z00_1346 =
													(((BgL_areaz00_bglt) CREF(BgL_obj3959z00_2950))->
													BgL_entryz00);
											}
											BgL_newtail4214z00_1344 =
												MAKE_PAIR((obj_t) (BgL_arg4452z00_1346), BNIL);
										}
										SET_CDR(BgL_tail4213z00_1341, BgL_newtail4214z00_1344);
										{
											obj_t BgL_tail4213z00_4688;

											obj_t BgL_l4210z00_4686;

											BgL_l4210z00_4686 = CDR(BgL_l4210z00_1340);
											BgL_tail4213z00_4688 = BgL_newtail4214z00_1344;
											BgL_tail4213z00_1341 = BgL_tail4213z00_4688;
											BgL_l4210z00_1340 = BgL_l4210z00_4686;
											goto BgL_zc3anonymousza34449ze3z83_1342;
										}
									}
							}
						}
					}
				((((BgL_blockz00_bglt) CREF(BgL_arg4446z00_1333))->BgL_succsz00) =
					((obj_t) BgL_arg4447z00_1334), BUNSPEC);
			}
			{	/* SawMill/node2rtl.scm 111 */
				BgL_blockz00_bglt BgL_joinz00_1353;

				{	/* SawMill/node2rtl.scm 111 */
					BgL_areaz00_bglt BgL_arg4462z00_1363;

					{	/* SawMill/node2rtl.scm 111 */
						BgL_rtl_movz00_bglt BgL_arg4463z00_1364;

						BgL_arg4463z00_1364 = BGl_makezd2rtl_movzd2zzsaw_defsz00(BFALSE);
						{	/* SawMill/node2rtl.scm 111 */
							obj_t BgL_list4464z00_1365;

							BgL_list4464z00_1365 = MAKE_PAIR((obj_t) (BgL_rz00_37), BNIL);
							BgL_arg4462z00_1363 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								(BgL_rtl_funz00_bglt) (BgL_arg4463z00_1364),
								BgL_list4464z00_1365);
						}
					}
					BgL_joinz00_1353 =
						(((BgL_areaz00_bglt) CREF(BgL_arg4462z00_1363))->BgL_entryz00);
				}
				{
					obj_t BgL_l4216z00_1355;

					BgL_l4216z00_1355 = BgL_contsz00_36;
				BgL_zc3anonymousza34458ze3z83_1356:
					if (PAIRP(BgL_l4216z00_1355))
						{	/* SawMill/node2rtl.scm 112 */
							{	/* SawMill/node2rtl.scm 113 */
								BgL_areaz00_bglt BgL_az00_1358;

								BgL_az00_1358 = (BgL_areaz00_bglt) (CAR(BgL_l4216z00_1355));
								{	/* SawMill/node2rtl.scm 113 */
									BgL_blockz00_bglt BgL_bz00_1359;

									BgL_bz00_1359 =
										(((BgL_areaz00_bglt) CREF(BgL_az00_1358))->BgL_exitz00);
									{	/* SawMill/node2rtl.scm 114 */
										obj_t BgL_arg4413z00_2967;

										{	/* SawMill/node2rtl.scm 114 */
											obj_t BgL_arg4414z00_2968;

											BgL_arg4414z00_2968 =
												(((BgL_blockz00_bglt) CREF(BgL_bz00_1359))->
												BgL_succsz00);
											BgL_arg4413z00_2967 =
												MAKE_PAIR((obj_t) (BgL_joinz00_1353),
												BgL_arg4414z00_2968);
										}
										((((BgL_blockz00_bglt) CREF(BgL_bz00_1359))->BgL_succsz00) =
											((obj_t) BgL_arg4413z00_2967), BUNSPEC);
									}
									BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_bz00_1359,
										BgL_rz00_37);
								}
							}
							{
								obj_t BgL_l4216z00_4706;

								BgL_l4216z00_4706 = CDR(BgL_l4216z00_1355);
								BgL_l4216z00_1355 = BgL_l4216z00_4706;
								goto BgL_zc3anonymousza34458ze3z83_1356;
							}
						}
					else
						{	/* SawMill/node2rtl.scm 112 */
							((bool_t) 1);
						}
				}
				{	/* SawMill/node2rtl.scm 118 */
					BgL_blockz00_bglt BgL_arg4461z00_1362;

					BgL_arg4461z00_1362 =
						(((BgL_areaz00_bglt) CREF(BgL_headz00_35))->BgL_entryz00);
					{	/* SawMill/node2rtl.scm 118 */
						BgL_areaz00_bglt BgL_res5101z00_2988;

						{	/* SawMill/node2rtl.scm 118 */
							BgL_areaz00_bglt BgL_new3967z00_2976;

							{	/* SawMill/node2rtl.scm 118 */
								BgL_areaz00_bglt BgL_res5099z00_2981;

								{	/* SawMill/node2rtl.scm 118 */
									BgL_areaz00_bglt BgL_new3975z00_2977;

									BgL_new3975z00_2977 =
										((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_areaz00_bgl))));
									BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
										(BgL_new3975z00_2977),
										BGl_classzd2numzd2zz__objectz00
										(BGl_areaz00zzsaw_node2rtlz00));
									{	/* SawMill/node2rtl.scm 118 */
										BgL_objectz00_bglt BgL_auxz00_4713;

										BgL_auxz00_4713 =
											(BgL_objectz00_bglt) (BgL_new3975z00_2977);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4713, BFALSE);
									}
									BgL_res5099z00_2981 = BgL_new3975z00_2977;
								}
								BgL_new3967z00_2976 = BgL_res5099z00_2981;
							}
							{	/* SawMill/node2rtl.scm 118 */
								BgL_areaz00_bglt BgL_res5100z00_2987;

								{	/* SawMill/node2rtl.scm 118 */
									BgL_areaz00_bglt BgL_new3971z00_2982;

									BgL_new3971z00_2982 = BgL_new3967z00_2976;
									{	/* SawMill/node2rtl.scm 118 */
										BgL_blockz00_bglt BgL_entry3969z00_2985;

										BgL_blockz00_bglt BgL_exit3970z00_2986;

										BgL_entry3969z00_2985 = BgL_arg4461z00_1362;
										BgL_exit3970z00_2986 = BgL_joinz00_1353;
										((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2982))->
												BgL_entryz00) =
											((BgL_blockz00_bglt) BgL_entry3969z00_2985), BUNSPEC);
										((((BgL_areaz00_bglt) CREF(BgL_new3971z00_2982))->
												BgL_exitz00) =
											((BgL_blockz00_bglt) BgL_exit3970z00_2986), BUNSPEC);
										BgL_res5100z00_2987 = BgL_new3971z00_2982;
								}} BgL_res5100z00_2987;
							}
							BgL_res5101z00_2988 = BgL_new3967z00_2976;
						}
						return BgL_res5101z00_2988;
					}
				}
			}
		}
	}



/* join */
	obj_t BGl_joinz00zzsaw_node2rtlz00(obj_t BgL_contsz00_38,
		BgL_rtl_regz00_bglt BgL_xrz00_39)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 120 */
			{	/* SawMill/node2rtl.scm 121 */
				obj_t BgL_rz00_1366;

				BgL_rz00_1366 =
					BGl_findzd2registerzd2zzsaw_node2rtlz00(BgL_contsz00_38,
					BgL_xrz00_39);
				{	/* SawMill/node2rtl.scm 123 */
					BgL_blockz00_bglt BgL_joinz00_1367;

					{	/* SawMill/node2rtl.scm 123 */
						BgL_areaz00_bglt BgL_arg4475z00_1391;

						{	/* SawMill/node2rtl.scm 123 */
							BgL_rtl_movz00_bglt BgL_arg4476z00_1392;

							BgL_arg4476z00_1392 = BGl_makezd2rtl_movzd2zzsaw_defsz00(BFALSE);
							{	/* SawMill/node2rtl.scm 123 */
								obj_t BgL_list4477z00_1393;

								BgL_list4477z00_1393 = MAKE_PAIR(BgL_rz00_1366, BNIL);
								BgL_arg4475z00_1391 =
									BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
									(BgL_rtl_funz00_bglt) (BgL_arg4476z00_1392),
									BgL_list4477z00_1393);
							}
						}
						BgL_joinz00_1367 =
							(((BgL_areaz00_bglt) CREF(BgL_arg4475z00_1391))->BgL_entryz00);
					}
					{
						obj_t BgL_l4218z00_1369;

						BgL_l4218z00_1369 = BgL_contsz00_38;
					BgL_zc3anonymousza34465ze3z83_1370:
						if (PAIRP(BgL_l4218z00_1369))
							{	/* SawMill/node2rtl.scm 124 */
								{	/* SawMill/node2rtl.scm 125 */
									BgL_areaz00_bglt BgL_az00_1372;

									BgL_az00_1372 = (BgL_areaz00_bglt) (CAR(BgL_l4218z00_1369));
									{	/* SawMill/node2rtl.scm 125 */
										BgL_blockz00_bglt BgL_bz00_1373;

										BgL_bz00_1373 =
											(((BgL_areaz00_bglt) CREF(BgL_az00_1372))->BgL_exitz00);
										{	/* SawMill/node2rtl.scm 126 */
											obj_t BgL_arg4413z00_2998;

											{	/* SawMill/node2rtl.scm 126 */
												obj_t BgL_arg4414z00_2999;

												BgL_arg4414z00_2999 =
													(((BgL_blockz00_bglt) CREF(BgL_bz00_1373))->
													BgL_succsz00);
												BgL_arg4413z00_2998 =
													MAKE_PAIR((obj_t) (BgL_joinz00_1367),
													BgL_arg4414z00_2999);
											}
											((((BgL_blockz00_bglt) CREF(BgL_bz00_1373))->
													BgL_succsz00) =
												((obj_t) BgL_arg4413z00_2998), BUNSPEC);
										}
										BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_bz00_1373,
											(BgL_rtl_regz00_bglt) (BgL_rz00_1366));
									}
								}
								{
									obj_t BgL_l4218z00_4735;

									BgL_l4218z00_4735 = CDR(BgL_l4218z00_1369);
									BgL_l4218z00_1369 = BgL_l4218z00_4735;
									goto BgL_zc3anonymousza34465ze3z83_1370;
								}
							}
						else
							{	/* SawMill/node2rtl.scm 124 */
								((bool_t) 1);
							}
					}
					if (NULLP(BgL_contsz00_38))
						{	/* SawMill/node2rtl.scm 130 */
							return BNIL;
						}
					else
						{	/* SawMill/node2rtl.scm 130 */
							obj_t BgL_head4222z00_1378;

							BgL_head4222z00_1378 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l4220z00_1380;

								obj_t BgL_tail4223z00_1381;

								BgL_l4220z00_1380 = BgL_contsz00_38;
								BgL_tail4223z00_1381 = BgL_head4222z00_1378;
							BgL_zc3anonymousza34469ze3z83_1382:
								if (NULLP(BgL_l4220z00_1380))
									{	/* SawMill/node2rtl.scm 130 */
										return CDR(BgL_head4222z00_1378);
									}
								else
									{	/* SawMill/node2rtl.scm 130 */
										obj_t BgL_newtail4224z00_1384;

										{	/* SawMill/node2rtl.scm 130 */
											BgL_areaz00_bglt BgL_arg4472z00_1386;

											{	/* SawMill/node2rtl.scm 130 */
												BgL_areaz00_bglt BgL_az00_1388;

												{	/* SawMill/node2rtl.scm 130 */
													obj_t BgL_pairz00_3009;

													BgL_pairz00_3009 = BgL_l4220z00_1380;
													BgL_az00_1388 =
														(BgL_areaz00_bglt) (CAR(BgL_pairz00_3009));
												}
												{	/* SawMill/node2rtl.scm 131 */
													BgL_blockz00_bglt BgL_arg4474z00_1389;

													BgL_arg4474z00_1389 =
														(((BgL_areaz00_bglt) CREF(BgL_az00_1388))->
														BgL_entryz00);
													{	/* SawMill/node2rtl.scm 131 */
														BgL_areaz00_bglt BgL_res5104z00_3025;

														{	/* SawMill/node2rtl.scm 131 */
															BgL_areaz00_bglt BgL_new3967z00_3013;

															{	/* SawMill/node2rtl.scm 131 */
																BgL_areaz00_bglt BgL_res5102z00_3018;

																{	/* SawMill/node2rtl.scm 131 */
																	BgL_areaz00_bglt BgL_new3975z00_3014;

																	BgL_new3975z00_3014 =
																		((BgL_areaz00_bglt)
																		BREF(GC_MALLOC(sizeof(struct
																					BgL_areaz00_bgl))));
																	BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
																		(BgL_new3975z00_3014),
																		BGl_classzd2numzd2zz__objectz00
																		(BGl_areaz00zzsaw_node2rtlz00));
																	{	/* SawMill/node2rtl.scm 131 */
																		BgL_objectz00_bglt BgL_auxz00_4750;

																		BgL_auxz00_4750 =
																			(BgL_objectz00_bglt)
																			(BgL_new3975z00_3014);
																		BGL_OBJECT_WIDENING_SET(BgL_auxz00_4750,
																			BFALSE);
																	}
																	BgL_res5102z00_3018 = BgL_new3975z00_3014;
																}
																BgL_new3967z00_3013 = BgL_res5102z00_3018;
															}
															{	/* SawMill/node2rtl.scm 131 */
																BgL_areaz00_bglt BgL_res5103z00_3024;

																{	/* SawMill/node2rtl.scm 131 */
																	BgL_areaz00_bglt BgL_new3971z00_3019;

																	BgL_new3971z00_3019 = BgL_new3967z00_3013;
																	{	/* SawMill/node2rtl.scm 131 */
																		BgL_blockz00_bglt BgL_entry3969z00_3022;

																		BgL_blockz00_bglt BgL_exit3970z00_3023;

																		BgL_entry3969z00_3022 = BgL_arg4474z00_1389;
																		BgL_exit3970z00_3023 = BgL_joinz00_1367;
																		((((BgL_areaz00_bglt)
																					CREF(BgL_new3971z00_3019))->
																				BgL_entryz00) =
																			((BgL_blockz00_bglt)
																				BgL_entry3969z00_3022), BUNSPEC);
																		((((BgL_areaz00_bglt)
																					CREF(BgL_new3971z00_3019))->
																				BgL_exitz00) =
																			((BgL_blockz00_bglt)
																				BgL_exit3970z00_3023), BUNSPEC);
																		BgL_res5103z00_3024 = BgL_new3971z00_3019;
																}} BgL_res5103z00_3024;
															}
															BgL_res5104z00_3025 = BgL_new3967z00_3013;
														}
														BgL_arg4472z00_1386 = BgL_res5104z00_3025;
											}}}
											BgL_newtail4224z00_1384 =
												MAKE_PAIR((obj_t) (BgL_arg4472z00_1386), BNIL);
										}
										SET_CDR(BgL_tail4223z00_1381, BgL_newtail4224z00_1384);
										{
											obj_t BgL_tail4223z00_4760;

											obj_t BgL_l4220z00_4758;

											BgL_l4220z00_4758 = CDR(BgL_l4220z00_1380);
											BgL_tail4223z00_4760 = BgL_newtail4224z00_1384;
											BgL_tail4223z00_1381 = BgL_tail4223z00_4760;
											BgL_l4220z00_1380 = BgL_l4220z00_4758;
											goto BgL_zc3anonymousza34469ze3z83_1382;
										}
									}
							}
						}
				}
			}
		}
	}



/* fork */
	BgL_areaz00_bglt BGl_forkz00zzsaw_node2rtlz00(BgL_areaz00_bglt BgL_headz00_40,
		obj_t BgL_joinedz00_41)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 134 */
			{	/* SawMill/node2rtl.scm 136 */
				BgL_blockz00_bglt BgL_arg4478z00_1394;

				obj_t BgL_arg4479z00_1395;

				BgL_arg4478z00_1394 =
					(((BgL_areaz00_bglt) CREF(BgL_headz00_40))->BgL_exitz00);
				if (NULLP(BgL_joinedz00_41))
					{	/* SawMill/node2rtl.scm 136 */
						BgL_arg4479z00_1395 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 136 */
						obj_t BgL_head4227z00_1398;

						{	/* SawMill/node2rtl.scm 136 */
							BgL_blockz00_bglt BgL_arg4487z00_1411;

							{	/* SawMill/node2rtl.scm 136 */
								BgL_areaz00_bglt BgL_obj3959z00_3034;

								{	/* SawMill/node2rtl.scm 136 */
									obj_t BgL_pairz00_3033;

									BgL_pairz00_3033 = BgL_joinedz00_41;
									BgL_obj3959z00_3034 =
										(BgL_areaz00_bglt) (CAR(BgL_pairz00_3033));
								}
								BgL_arg4487z00_1411 =
									(((BgL_areaz00_bglt) CREF(BgL_obj3959z00_3034))->
									BgL_entryz00);
							}
							BgL_head4227z00_1398 =
								MAKE_PAIR((obj_t) (BgL_arg4487z00_1411), BNIL);
						}
						{	/* SawMill/node2rtl.scm 136 */
							obj_t BgL_g4230z00_1399;

							BgL_g4230z00_1399 = CDR(BgL_joinedz00_41);
							{
								obj_t BgL_l4225z00_1401;

								obj_t BgL_tail4228z00_1402;

								BgL_l4225z00_1401 = BgL_g4230z00_1399;
								BgL_tail4228z00_1402 = BgL_head4227z00_1398;
							BgL_zc3anonymousza34481ze3z83_1403:
								if (NULLP(BgL_l4225z00_1401))
									{	/* SawMill/node2rtl.scm 136 */
										BgL_arg4479z00_1395 = BgL_head4227z00_1398;
									}
								else
									{	/* SawMill/node2rtl.scm 136 */
										obj_t BgL_newtail4229z00_1405;

										{	/* SawMill/node2rtl.scm 136 */
											BgL_blockz00_bglt BgL_arg4484z00_1407;

											{	/* SawMill/node2rtl.scm 136 */
												BgL_areaz00_bglt BgL_obj3959z00_3040;

												{	/* SawMill/node2rtl.scm 136 */
													obj_t BgL_pairz00_3039;

													BgL_pairz00_3039 = BgL_l4225z00_1401;
													BgL_obj3959z00_3040 =
														(BgL_areaz00_bglt) (CAR(BgL_pairz00_3039));
												}
												BgL_arg4484z00_1407 =
													(((BgL_areaz00_bglt) CREF(BgL_obj3959z00_3040))->
													BgL_entryz00);
											}
											BgL_newtail4229z00_1405 =
												MAKE_PAIR((obj_t) (BgL_arg4484z00_1407), BNIL);
										}
										SET_CDR(BgL_tail4228z00_1402, BgL_newtail4229z00_1405);
										{
											obj_t BgL_tail4228z00_4780;

											obj_t BgL_l4225z00_4778;

											BgL_l4225z00_4778 = CDR(BgL_l4225z00_1401);
											BgL_tail4228z00_4780 = BgL_newtail4229z00_1405;
											BgL_tail4228z00_1402 = BgL_tail4228z00_4780;
											BgL_l4225z00_1401 = BgL_l4225z00_4778;
											goto BgL_zc3anonymousza34481ze3z83_1403;
										}
									}
							}
						}
					}
				((((BgL_blockz00_bglt) CREF(BgL_arg4478z00_1394))->BgL_succsz00) =
					((obj_t) BgL_arg4479z00_1395), BUNSPEC);
			}
			{	/* SawMill/node2rtl.scm 138 */
				BgL_blockz00_bglt BgL_arg4490z00_1414;

				BgL_blockz00_bglt BgL_arg4491z00_1415;

				BgL_arg4490z00_1414 =
					(((BgL_areaz00_bglt) CREF(BgL_headz00_40))->BgL_entryz00);
				{	/* SawMill/node2rtl.scm 139 */
					BgL_areaz00_bglt BgL_obj3962z00_3050;

					{	/* SawMill/node2rtl.scm 139 */
						obj_t BgL_pairz00_3049;

						BgL_pairz00_3049 = BgL_joinedz00_41;
						BgL_obj3962z00_3050 = (BgL_areaz00_bglt) (CAR(BgL_pairz00_3049));
					}
					BgL_arg4491z00_1415 =
						(((BgL_areaz00_bglt) CREF(BgL_obj3962z00_3050))->BgL_exitz00);
				}
				{	/* SawMill/node2rtl.scm 138 */
					BgL_areaz00_bglt BgL_res5107z00_3065;

					{	/* SawMill/node2rtl.scm 138 */
						BgL_areaz00_bglt BgL_new3967z00_3053;

						{	/* SawMill/node2rtl.scm 138 */
							BgL_areaz00_bglt BgL_res5105z00_3058;

							{	/* SawMill/node2rtl.scm 138 */
								BgL_areaz00_bglt BgL_new3975z00_3054;

								BgL_new3975z00_3054 =
									((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_areaz00_bgl))));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new3975z00_3054),
									BGl_classzd2numzd2zz__objectz00
									(BGl_areaz00zzsaw_node2rtlz00));
								{	/* SawMill/node2rtl.scm 138 */
									BgL_objectz00_bglt BgL_auxz00_4790;

									BgL_auxz00_4790 = (BgL_objectz00_bglt) (BgL_new3975z00_3054);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_4790, BFALSE);
								}
								BgL_res5105z00_3058 = BgL_new3975z00_3054;
							}
							BgL_new3967z00_3053 = BgL_res5105z00_3058;
						}
						{	/* SawMill/node2rtl.scm 138 */
							BgL_areaz00_bglt BgL_res5106z00_3064;

							{	/* SawMill/node2rtl.scm 138 */
								BgL_areaz00_bglt BgL_new3971z00_3059;

								BgL_new3971z00_3059 = BgL_new3967z00_3053;
								{	/* SawMill/node2rtl.scm 138 */
									BgL_blockz00_bglt BgL_entry3969z00_3062;

									BgL_blockz00_bglt BgL_exit3970z00_3063;

									BgL_entry3969z00_3062 = BgL_arg4490z00_1414;
									BgL_exit3970z00_3063 = BgL_arg4491z00_1415;
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_3059))->
											BgL_entryz00) =
										((BgL_blockz00_bglt) BgL_entry3969z00_3062), BUNSPEC);
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_3059))->
											BgL_exitz00) =
										((BgL_blockz00_bglt) BgL_exit3970z00_3063), BUNSPEC);
									BgL_res5106z00_3064 = BgL_new3971z00_3059;
							}} BgL_res5106z00_3064;
						}
						BgL_res5107z00_3065 = BgL_new3967z00_3053;
					}
					return BgL_res5107z00_3065;
				}
			}
		}
	}



/* find-register */
	obj_t BGl_findzd2registerzd2zzsaw_node2rtlz00(obj_t BgL_areasz00_42,
		BgL_rtl_regz00_bglt BgL_regz00_43)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 141 */
			{
				obj_t BgL_az00_1426;

				{
					obj_t BgL_lz00_1419;

					BgL_lz00_1419 = BgL_areasz00_42;
				BgL_zc3anonymousza34493ze3z83_1420:
					if (NULLP(BgL_lz00_1419))
						{	/* SawMill/node2rtl.scm 151 */
							return (obj_t) (BgL_regz00_43);
						}
					else
						{	/* SawMill/node2rtl.scm 153 */
							obj_t BgL__ortest_4103z00_1422;

							BgL_az00_1426 = CAR(BgL_lz00_1419);
							{	/* SawMill/node2rtl.scm 143 */
								obj_t BgL_insz00_1428;

								{	/* SawMill/node2rtl.scm 143 */
									obj_t BgL_auxz00_4798;

									{	/* SawMill/node2rtl.scm 143 */
										obj_t BgL_auxz00_4799;

										{	/* SawMill/node2rtl.scm 143 */
											BgL_blockz00_bglt BgL_obj3940z00_3070;

											{
												BgL_areaz00_bglt BgL_auxz00_4800;

												BgL_auxz00_4800 = (BgL_areaz00_bglt) (BgL_az00_1426);
												BgL_obj3940z00_3070 =
													(((BgL_areaz00_bglt) CREF(BgL_auxz00_4800))->
													BgL_exitz00);
											}
											BgL_auxz00_4799 =
												(((BgL_blockz00_bglt) CREF(BgL_obj3940z00_3070))->
												BgL_firstz00);
										}
										BgL_auxz00_4798 =
											BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_auxz00_4799);
									}
									BgL_insz00_1428 = CAR(BgL_auxz00_4798);
								}
								{	/* SawMill/node2rtl.scm 144 */
									bool_t BgL_testz00_4806;

									{	/* SawMill/node2rtl.scm 144 */
										BgL_rtl_funz00_bglt BgL_arg4504z00_1437;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_4807;

											BgL_auxz00_4807 = (BgL_rtl_insz00_bglt) (BgL_insz00_1428);
											BgL_arg4504z00_1437 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4807))->
												BgL_funz00);
										}
										{	/* SawMill/node2rtl.scm 144 */
											obj_t BgL_obj3481z00_3073;

											BgL_obj3481z00_3073 = (obj_t) (BgL_arg4504z00_1437);
											BgL_testz00_4806 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3481z00_3073,
												BGl_rtl_movz00zzsaw_defsz00);
										}
									}
									if (BgL_testz00_4806)
										{	/* SawMill/node2rtl.scm 145 */
											obj_t BgL_rz00_1430;

											{	/* SawMill/node2rtl.scm 145 */
												obj_t BgL_pairz00_3075;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_4812;

													BgL_auxz00_4812 =
														(BgL_rtl_insz00_bglt) (BgL_insz00_1428);
													BgL_pairz00_3075 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4812))->
														BgL_argsz00);
												}
												BgL_rz00_1430 = CAR(BgL_pairz00_3075);
											}
											{	/* SawMill/node2rtl.scm 146 */
												bool_t BgL_testz00_4816;

												{	/* SawMill/node2rtl.scm 146 */
													bool_t BgL_testz00_4817;

													{	/* SawMill/node2rtl.scm 146 */
														BgL_rtl_regz00_bglt BgL_obj3245z00_3076;

														BgL_obj3245z00_3076 =
															(BgL_rtl_regz00_bglt) (BgL_rz00_1430);
														BgL_testz00_4817 =
															CBOOL(
															(((BgL_rtl_regz00_bglt)
																	CREF(BgL_obj3245z00_3076))->BgL_varz00));
													}
													if (BgL_testz00_4817)
														{	/* SawMill/node2rtl.scm 146 */
															BgL_testz00_4816 = ((bool_t) 1);
														}
													else
														{	/* SawMill/node2rtl.scm 147 */
															bool_t BgL_testz00_4821;

															{	/* SawMill/node2rtl.scm 147 */
																obj_t BgL_auxz00_4822;

																{	/* SawMill/node2rtl.scm 147 */
																	BgL_typez00_bglt BgL_auxz00_4823;

																	{
																		BgL_rtl_regz00_bglt BgL_auxz00_4824;

																		BgL_auxz00_4824 =
																			(BgL_rtl_regz00_bglt) (BgL_rz00_1430);
																		BgL_auxz00_4823 =
																			(((BgL_rtl_regz00_bglt)
																				CREF(BgL_auxz00_4824))->BgL_typez00);
																	}
																	BgL_auxz00_4822 = (obj_t) (BgL_auxz00_4823);
																}
																BgL_testz00_4821 =
																	(BgL_auxz00_4822 ==
																	(obj_t) (
																		(((BgL_rtl_regz00_bglt)
																				CREF(BgL_regz00_43))->BgL_typez00)));
															}
															if (BgL_testz00_4821)
																{	/* SawMill/node2rtl.scm 147 */
																	BgL_testz00_4816 = ((bool_t) 0);
																}
															else
																{	/* SawMill/node2rtl.scm 147 */
																	BgL_testz00_4816 = ((bool_t) 1);
																}
														}
												}
												if (BgL_testz00_4816)
													{	/* SawMill/node2rtl.scm 146 */
														BgL__ortest_4103z00_1422 = BFALSE;
													}
												else
													{	/* SawMill/node2rtl.scm 146 */
														BgL__ortest_4103z00_1422 = BgL_rz00_1430;
													}
											}
										}
									else
										{	/* SawMill/node2rtl.scm 144 */
											BgL__ortest_4103z00_1422 = BFALSE;
										}
								}
							}
							if (CBOOL(BgL__ortest_4103z00_1422))
								{	/* SawMill/node2rtl.scm 153 */
									return BgL__ortest_4103z00_1422;
								}
							else
								{
									obj_t BgL_lz00_4834;

									BgL_lz00_4834 = CDR(BgL_lz00_1419);
									BgL_lz00_1419 = BgL_lz00_4834;
									goto BgL_zc3anonymousza34493ze3z83_1420;
								}
						}
				}
			}
		}
	}



/* call* */
	BgL_areaz00_bglt BGl_callza2za2zzsaw_node2rtlz00(obj_t BgL_ez00_46,
		BgL_rtl_funz00_bglt BgL_funz00_47, obj_t BgL_exprsz00_48)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 161 */
			{	/* SawMill/node2rtl.scm 162 */
				obj_t BgL_regsz00_1443;

				if (NULLP(BgL_exprsz00_48))
					{	/* SawMill/node2rtl.scm 162 */
						BgL_regsz00_1443 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 162 */
						obj_t BgL_head4233z00_1467;

						BgL_head4233z00_1467 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l4231z00_1469;

							obj_t BgL_tail4234z00_1470;

							BgL_l4231z00_1469 = BgL_exprsz00_48;
							BgL_tail4234z00_1470 = BgL_head4233z00_1467;
						BgL_zc3anonymousza34519ze3z83_1471:
							if (NULLP(BgL_l4231z00_1469))
								{	/* SawMill/node2rtl.scm 162 */
									BgL_regsz00_1443 = CDR(BgL_head4233z00_1467);
								}
							else
								{	/* SawMill/node2rtl.scm 162 */
									obj_t BgL_newtail4235z00_1473;

									{	/* SawMill/node2rtl.scm 162 */
										BgL_rtl_regz00_bglt BgL_arg4522z00_1475;

										{	/* SawMill/node2rtl.scm 162 */
											obj_t BgL_ez00_1477;

											BgL_ez00_1477 = CAR(BgL_l4231z00_1469);
											BgL_arg4522z00_1475 =
												BGl_newzd2regzd2zzsaw_node2rtlz00(
												(BgL_nodez00_bglt) (BgL_ez00_1477));
										}
										BgL_newtail4235z00_1473 =
											MAKE_PAIR((obj_t) (BgL_arg4522z00_1475), BNIL);
									}
									SET_CDR(BgL_tail4234z00_1470, BgL_newtail4235z00_1473);
									{
										obj_t BgL_tail4234z00_4850;

										obj_t BgL_l4231z00_4848;

										BgL_l4231z00_4848 = CDR(BgL_l4231z00_1469);
										BgL_tail4234z00_4850 = BgL_newtail4235z00_1473;
										BgL_tail4234z00_1470 = BgL_tail4234z00_4850;
										BgL_l4231z00_1469 = BgL_l4231z00_4848;
										goto BgL_zc3anonymousza34519ze3z83_1471;
									}
								}
						}
					}
				{	/* SawMill/node2rtl.scm 163 */
					BgL_areaz00_bglt BgL_arg4508z00_1444;

					BgL_areaz00_bglt BgL_arg4509z00_1445;

					{	/* SawMill/node2rtl.scm 163 */
						obj_t BgL_arg4510z00_1446;

						if (NULLP(BgL_exprsz00_48))
							{	/* SawMill/node2rtl.scm 163 */
								BgL_arg4510z00_1446 = BNIL;
							}
						else
							{	/* SawMill/node2rtl.scm 163 */
								obj_t BgL_head4238z00_1450;

								BgL_head4238z00_1450 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_ll4236z00_1452;

									obj_t BgL_ll4237z00_1453;

									obj_t BgL_tail4239z00_1454;

									BgL_ll4236z00_1452 = BgL_exprsz00_48;
									BgL_ll4237z00_1453 = BgL_regsz00_1443;
									BgL_tail4239z00_1454 = BgL_head4238z00_1450;
								BgL_zc3anonymousza34512ze3z83_1455:
									if (NULLP(BgL_ll4236z00_1452))
										{	/* SawMill/node2rtl.scm 163 */
											BgL_arg4510z00_1446 = CDR(BgL_head4238z00_1450);
										}
									else
										{	/* SawMill/node2rtl.scm 163 */
											obj_t BgL_newtail4240z00_1457;

											{	/* SawMill/node2rtl.scm 163 */
												BgL_areaz00_bglt BgL_arg4516z00_1460;

												{	/* SawMill/node2rtl.scm 163 */
													obj_t BgL_az00_1462;

													obj_t BgL_rz00_1463;

													BgL_az00_1462 = CAR(BgL_ll4236z00_1452);
													BgL_rz00_1463 = CAR(BgL_ll4237z00_1453);
													{	/* SawMill/node2rtl.scm 163 */
														BgL_areaz00_bglt BgL_res5111z00_3136;

														{	/* SawMill/node2rtl.scm 163 */
															BgL_nodez00_bglt BgL_ez00_3129;

															BgL_rtl_regz00_bglt BgL_rz00_3130;

															BgL_ez00_3129 =
																(BgL_nodez00_bglt) (BgL_az00_1462);
															BgL_rz00_3130 =
																(BgL_rtl_regz00_bglt) (BgL_rz00_1463);
															{	/* SawMill/node2rtl.scm 163 */
																BgL_areaz00_bglt BgL_az00_3131;

																BgL_az00_3131 =
																	BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
																	(BgL_ez00_3129);
																{	/* SawMill/node2rtl.scm 163 */
																	BgL_blockz00_bglt BgL_arg4426z00_3134;

																	BgL_arg4426z00_3134 =
																		(((BgL_areaz00_bglt) CREF(BgL_az00_3131))->
																		BgL_exitz00);
																	BGl_bdestinationz12z12zzsaw_node2rtlz00
																		(BgL_arg4426z00_3134, BgL_rz00_3130);
																}
																BgL_res5111z00_3136 = BgL_az00_3131;
															}
														}
														BgL_arg4516z00_1460 = BgL_res5111z00_3136;
													}
												}
												BgL_newtail4240z00_1457 =
													MAKE_PAIR((obj_t) (BgL_arg4516z00_1460), BNIL);
											}
											SET_CDR(BgL_tail4239z00_1454, BgL_newtail4240z00_1457);
											{
												obj_t BgL_tail4239z00_4871;

												obj_t BgL_ll4237z00_4869;

												obj_t BgL_ll4236z00_4867;

												BgL_ll4236z00_4867 = CDR(BgL_ll4236z00_1452);
												BgL_ll4237z00_4869 = CDR(BgL_ll4237z00_1453);
												BgL_tail4239z00_4871 = BgL_newtail4240z00_1457;
												BgL_tail4239z00_1454 = BgL_tail4239z00_4871;
												BgL_ll4237z00_1453 = BgL_ll4237z00_4869;
												BgL_ll4236z00_1452 = BgL_ll4236z00_4867;
												goto BgL_zc3anonymousza34512ze3z83_1455;
											}
										}
								}
							}
						BgL_arg4508z00_1444 =
							BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg4510z00_1446);
					}
					BgL_arg4509z00_1445 =
						BGl_singleza2za2zzsaw_node2rtlz00(BgL_ez00_46, BgL_funz00_47,
						BgL_regsz00_1443);
					return BGl_linkz00zzsaw_node2rtlz00(BgL_arg4508z00_1444,
						BgL_arg4509z00_1445);
				}
			}
		}
	}



/* rcall* */
	BgL_areaz00_bglt BGl_rcallza2za2zzsaw_node2rtlz00(BgL_appz00_bglt BgL_ez00_49,
		BgL_rtl_funz00_bglt BgL_funz00_50, obj_t BgL_exprsz00_51)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 166 */
			{	/* SawMill/node2rtl.scm 167 */
				obj_t BgL_regsz00_1479;

				if (NULLP(BgL_exprsz00_51))
					{	/* SawMill/node2rtl.scm 167 */
						BgL_regsz00_1479 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 167 */
						obj_t BgL_head4244z00_1504;

						BgL_head4244z00_1504 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l4242z00_1506;

							obj_t BgL_tail4245z00_1507;

							BgL_l4242z00_1506 = BgL_exprsz00_51;
							BgL_tail4245z00_1507 = BgL_head4244z00_1504;
						BgL_zc3anonymousza34536ze3z83_1508:
							if (NULLP(BgL_l4242z00_1506))
								{	/* SawMill/node2rtl.scm 167 */
									BgL_regsz00_1479 = CDR(BgL_head4244z00_1504);
								}
							else
								{	/* SawMill/node2rtl.scm 167 */
									obj_t BgL_newtail4246z00_1510;

									{	/* SawMill/node2rtl.scm 167 */
										BgL_rtl_regz00_bglt BgL_arg4539z00_1512;

										{	/* SawMill/node2rtl.scm 167 */
											obj_t BgL_ez00_1514;

											BgL_ez00_1514 = CAR(BgL_l4242z00_1506);
											BgL_arg4539z00_1512 =
												BGl_newzd2regzd2zzsaw_node2rtlz00(
												(BgL_nodez00_bglt) (BgL_ez00_1514));
										}
										BgL_newtail4246z00_1510 =
											MAKE_PAIR((obj_t) (BgL_arg4539z00_1512), BNIL);
									}
									SET_CDR(BgL_tail4245z00_1507, BgL_newtail4246z00_1510);
									{
										obj_t BgL_tail4245z00_4889;

										obj_t BgL_l4242z00_4887;

										BgL_l4242z00_4887 = CDR(BgL_l4242z00_1506);
										BgL_tail4245z00_4889 = BgL_newtail4246z00_1510;
										BgL_tail4245z00_1507 = BgL_tail4245z00_4889;
										BgL_l4242z00_1506 = BgL_l4242z00_4887;
										goto BgL_zc3anonymousza34536ze3z83_1508;
									}
								}
						}
					}
				{	/* SawMill/node2rtl.scm 168 */
					BgL_areaz00_bglt BgL_arg4524z00_1480;

					BgL_areaz00_bglt BgL_arg4525z00_1481;

					{	/* SawMill/node2rtl.scm 168 */
						obj_t BgL_arg4526z00_1482;

						{	/* SawMill/node2rtl.scm 168 */
							obj_t BgL_arg4527z00_1483;

							if (NULLP(BgL_exprsz00_51))
								{	/* SawMill/node2rtl.scm 168 */
									BgL_arg4527z00_1483 = BNIL;
								}
							else
								{	/* SawMill/node2rtl.scm 168 */
									obj_t BgL_head4249z00_1487;

									BgL_head4249z00_1487 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_ll4247z00_1489;

										obj_t BgL_ll4248z00_1490;

										obj_t BgL_tail4250z00_1491;

										BgL_ll4247z00_1489 = BgL_exprsz00_51;
										BgL_ll4248z00_1490 = BgL_regsz00_1479;
										BgL_tail4250z00_1491 = BgL_head4249z00_1487;
									BgL_zc3anonymousza34529ze3z83_1492:
										if (NULLP(BgL_ll4247z00_1489))
											{	/* SawMill/node2rtl.scm 168 */
												BgL_arg4527z00_1483 = CDR(BgL_head4249z00_1487);
											}
										else
											{	/* SawMill/node2rtl.scm 168 */
												obj_t BgL_newtail4251z00_1494;

												{	/* SawMill/node2rtl.scm 168 */
													BgL_areaz00_bglt BgL_arg4533z00_1497;

													{	/* SawMill/node2rtl.scm 168 */
														obj_t BgL_az00_1499;

														obj_t BgL_rz00_1500;

														BgL_az00_1499 = CAR(BgL_ll4247z00_1489);
														BgL_rz00_1500 = CAR(BgL_ll4248z00_1490);
														{	/* SawMill/node2rtl.scm 168 */
															BgL_areaz00_bglt BgL_res5112z00_3168;

															{	/* SawMill/node2rtl.scm 168 */
																BgL_nodez00_bglt BgL_ez00_3161;

																BgL_rtl_regz00_bglt BgL_rz00_3162;

																BgL_ez00_3161 =
																	(BgL_nodez00_bglt) (BgL_az00_1499);
																BgL_rz00_3162 =
																	(BgL_rtl_regz00_bglt) (BgL_rz00_1500);
																{	/* SawMill/node2rtl.scm 168 */
																	BgL_areaz00_bglt BgL_az00_3163;

																	BgL_az00_3163 =
																		BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
																		(BgL_ez00_3161);
																	{	/* SawMill/node2rtl.scm 168 */
																		BgL_blockz00_bglt BgL_arg4426z00_3166;

																		BgL_arg4426z00_3166 =
																			(((BgL_areaz00_bglt)
																				CREF(BgL_az00_3163))->BgL_exitz00);
																		BGl_bdestinationz12z12zzsaw_node2rtlz00
																			(BgL_arg4426z00_3166, BgL_rz00_3162);
																	}
																	BgL_res5112z00_3168 = BgL_az00_3163;
																}
															}
															BgL_arg4533z00_1497 = BgL_res5112z00_3168;
														}
													}
													BgL_newtail4251z00_1494 =
														MAKE_PAIR((obj_t) (BgL_arg4533z00_1497), BNIL);
												}
												SET_CDR(BgL_tail4250z00_1491, BgL_newtail4251z00_1494);
												{
													obj_t BgL_tail4250z00_4910;

													obj_t BgL_ll4248z00_4908;

													obj_t BgL_ll4247z00_4906;

													BgL_ll4247z00_4906 = CDR(BgL_ll4247z00_1489);
													BgL_ll4248z00_4908 = CDR(BgL_ll4248z00_1490);
													BgL_tail4250z00_4910 = BgL_newtail4251z00_1494;
													BgL_tail4250z00_1491 = BgL_tail4250z00_4910;
													BgL_ll4248z00_1490 = BgL_ll4248z00_4908;
													BgL_ll4247z00_1489 = BgL_ll4247z00_4906;
													goto BgL_zc3anonymousza34529ze3z83_1492;
												}
											}
									}
								}
							BgL_arg4526z00_1482 = bgl_reverse_bang(BgL_arg4527z00_1483);
						}
						BgL_arg4524z00_1480 =
							BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg4526z00_1482);
					}
					BgL_arg4525z00_1481 =
						BGl_singleza2za2zzsaw_node2rtlz00(
						(obj_t) (BgL_ez00_49), BgL_funz00_50, BgL_regsz00_1479);
					return
						BGl_linkz00zzsaw_node2rtlz00(BgL_arg4524z00_1480,
						BgL_arg4525z00_1481);
				}
			}
		}
	}



/* coerce */
	obj_t BGl_coercez00zzsaw_node2rtlz00(obj_t BgL_clausesz00_64)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 239 */
			if (NULLP(BgL_clausesz00_64))
				{	/* SawMill/node2rtl.scm 240 */
					return BNIL;
				}
			else
				{	/* SawMill/node2rtl.scm 240 */
					obj_t BgL_head4275z00_1518;

					BgL_head4275z00_1518 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l4273z00_1520;

						obj_t BgL_tail4276z00_1521;

						BgL_l4273z00_1520 = BgL_clausesz00_64;
						BgL_tail4276z00_1521 = BgL_head4275z00_1518;
					BgL_zc3anonymousza34542ze3z83_1522:
						if (NULLP(BgL_l4273z00_1520))
							{	/* SawMill/node2rtl.scm 240 */
								return CDR(BgL_head4275z00_1518);
							}
						else
							{	/* SawMill/node2rtl.scm 240 */
								obj_t BgL_newtail4277z00_1524;

								{	/* SawMill/node2rtl.scm 240 */
									obj_t BgL_arg4545z00_1526;

									{	/* SawMill/node2rtl.scm 240 */
										obj_t BgL_cz00_1528;

										BgL_cz00_1528 = CAR(BgL_l4273z00_1520);
										{	/* SawMill/node2rtl.scm 241 */
											obj_t BgL_pz00_1529;

											BgL_pz00_1529 = CAR(BgL_cz00_1528);
											if ((BgL_pz00_1529 == CNST_TABLE_REF(((long) 0))))
												{	/* SawMill/node2rtl.scm 242 */
													BgL_arg4545z00_1526 = BgL_pz00_1529;
												}
											else
												{	/* SawMill/node2rtl.scm 242 */
													if (NULLP(BgL_pz00_1529))
														{	/* SawMill/node2rtl.scm 244 */
															BgL_arg4545z00_1526 = BNIL;
														}
													else
														{	/* SawMill/node2rtl.scm 244 */
															obj_t BgL_head4270z00_1533;

															BgL_head4270z00_1533 = MAKE_PAIR(BNIL, BNIL);
															{
																obj_t BgL_l4268z00_1535;

																obj_t BgL_tail4271z00_1536;

																BgL_l4268z00_1535 = BgL_pz00_1529;
																BgL_tail4271z00_1536 = BgL_head4270z00_1533;
															BgL_zc3anonymousza34549ze3z83_1537:
																if (NULLP(BgL_l4268z00_1535))
																	{	/* SawMill/node2rtl.scm 244 */
																		BgL_arg4545z00_1526 =
																			CDR(BgL_head4270z00_1533);
																	}
																else
																	{	/* SawMill/node2rtl.scm 244 */
																		obj_t BgL_newtail4272z00_1539;

																		{	/* SawMill/node2rtl.scm 244 */
																			obj_t BgL_arg4552z00_1541;

																			{	/* SawMill/node2rtl.scm 244 */
																				obj_t BgL_nz00_1543;

																				BgL_nz00_1543 = CAR(BgL_l4268z00_1535);
																				if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_nz00_1543))
																					{	/* SawMill/node2rtl.scm 245 */
																						BgL_arg4552z00_1541 = BgL_nz00_1543;
																					}
																				else
																					{	/* SawMill/node2rtl.scm 245 */
																						if (CHARP(BgL_nz00_1543))
																							{	/* SawMill/node2rtl.scm 246 */
																								BgL_arg4552z00_1541 =
																									BINT((CCHAR(BgL_nz00_1543)));
																							}
																						else
																							{	/* SawMill/node2rtl.scm 246 */
																								BgL_arg4552z00_1541 =
																									BGl_errorz00zz__errorz00
																									(CNST_TABLE_REF(((long) 1)),
																									BGl_string5188z00zzsaw_node2rtlz00,
																									BgL_nz00_1543);
																			}}}
																			BgL_newtail4272z00_1539 =
																				MAKE_PAIR(BgL_arg4552z00_1541, BNIL);
																		}
																		SET_CDR(BgL_tail4271z00_1536,
																			BgL_newtail4272z00_1539);
																		{
																			obj_t BgL_tail4271z00_4947;

																			obj_t BgL_l4268z00_4945;

																			BgL_l4268z00_4945 =
																				CDR(BgL_l4268z00_1535);
																			BgL_tail4271z00_4947 =
																				BgL_newtail4272z00_1539;
																			BgL_tail4271z00_1536 =
																				BgL_tail4271z00_4947;
																			BgL_l4268z00_1535 = BgL_l4268z00_4945;
																			goto BgL_zc3anonymousza34549ze3z83_1537;
																		}
																	}
															}
														}
												}
										}
									}
									BgL_newtail4277z00_1524 =
										MAKE_PAIR(BgL_arg4545z00_1526, BNIL);
								}
								SET_CDR(BgL_tail4276z00_1521, BgL_newtail4277z00_1524);
								{
									obj_t BgL_tail4276z00_4952;

									obj_t BgL_l4273z00_4950;

									BgL_l4273z00_4950 = CDR(BgL_l4273z00_1520);
									BgL_tail4276z00_4952 = BgL_newtail4277z00_1524;
									BgL_tail4276z00_1521 = BgL_tail4276z00_4952;
									BgL_l4273z00_1520 = BgL_l4273z00_4950;
									goto BgL_zc3anonymousza34542ze3z83_1522;
								}
							}
					}
				}
		}
	}



/* compile-label-call */
	BgL_areaz00_bglt
		BGl_compilezd2labelzd2callz00zzsaw_node2rtlz00(BgL_localz00_bglt
		BgL_vz00_66, obj_t BgL_argsz00_67)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 257 */
			{	/* SawMill/node2rtl.scm 264 */
				obj_t BgL_regsz00_1549;

				if (NULLP(BgL_argsz00_67))
					{	/* SawMill/node2rtl.scm 264 */
						BgL_regsz00_1549 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 264 */
						obj_t BgL_head4280z00_1602;

						BgL_head4280z00_1602 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l4278z00_1604;

							obj_t BgL_tail4281z00_1605;

							BgL_l4278z00_1604 = BgL_argsz00_67;
							BgL_tail4281z00_1605 = BgL_head4280z00_1602;
						BgL_zc3anonymousza34585ze3z83_1606:
							if (NULLP(BgL_l4278z00_1604))
								{	/* SawMill/node2rtl.scm 264 */
									BgL_regsz00_1549 = CDR(BgL_head4280z00_1602);
								}
							else
								{	/* SawMill/node2rtl.scm 264 */
									obj_t BgL_newtail4282z00_1608;

									{	/* SawMill/node2rtl.scm 264 */
										BgL_rtl_regz00_bglt BgL_arg4588z00_1610;

										{	/* SawMill/node2rtl.scm 264 */
											obj_t BgL_az00_1612;

											BgL_az00_1612 = CAR(BgL_l4278z00_1604);
											BgL_arg4588z00_1610 =
												BGl_newzd2regzd2zzsaw_node2rtlz00(
												(BgL_nodez00_bglt) (BgL_az00_1612));
										}
										BgL_newtail4282z00_1608 =
											MAKE_PAIR((obj_t) (BgL_arg4588z00_1610), BNIL);
									}
									SET_CDR(BgL_tail4281z00_1605, BgL_newtail4282z00_1608);
									{
										obj_t BgL_tail4281z00_4967;

										obj_t BgL_l4278z00_4965;

										BgL_l4278z00_4965 = CDR(BgL_l4278z00_1604);
										BgL_tail4281z00_4967 = BgL_newtail4282z00_1608;
										BgL_tail4281z00_1605 = BgL_tail4281z00_4967;
										BgL_l4278z00_1604 = BgL_l4278z00_4965;
										goto BgL_zc3anonymousza34585ze3z83_1606;
									}
								}
						}
					}
				{	/* SawMill/node2rtl.scm 265 */
					obj_t BgL_paramsz00_1550;

					{	/* SawMill/node2rtl.scm 265 */
						BgL_sfunz00_bglt BgL_obj1880z00_3212;

						{	/* SawMill/node2rtl.scm 265 */
							BgL_variablez00_bglt BgL_obj1611z00_3211;

							BgL_obj1611z00_3211 = (BgL_variablez00_bglt) (BgL_vz00_66);
							BgL_obj1880z00_3212 =
								(BgL_sfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_3211))->
									BgL_valuez00));
						}
						BgL_paramsz00_1550 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_3212))->BgL_argsz00);
					}
					{	/* SawMill/node2rtl.scm 267 */
						BgL_areaz00_bglt BgL_arg4556z00_1551;

						BgL_areaz00_bglt BgL_arg4557z00_1552;

						{	/* SawMill/node2rtl.scm 267 */
							obj_t BgL_arg4558z00_1553;

							if (NULLP(BgL_argsz00_67))
								{	/* SawMill/node2rtl.scm 267 */
									BgL_arg4558z00_1553 = BNIL;
								}
							else
								{	/* SawMill/node2rtl.scm 267 */
									obj_t BgL_head4285z00_1557;

									BgL_head4285z00_1557 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_ll4283z00_1559;

										obj_t BgL_ll4284z00_1560;

										obj_t BgL_tail4286z00_1561;

										BgL_ll4283z00_1559 = BgL_argsz00_67;
										BgL_ll4284z00_1560 = BgL_regsz00_1549;
										BgL_tail4286z00_1561 = BgL_head4285z00_1557;
									BgL_zc3anonymousza34560ze3z83_1562:
										if (NULLP(BgL_ll4283z00_1559))
											{	/* SawMill/node2rtl.scm 267 */
												BgL_arg4558z00_1553 = CDR(BgL_head4285z00_1557);
											}
										else
											{	/* SawMill/node2rtl.scm 267 */
												obj_t BgL_newtail4287z00_1564;

												{	/* SawMill/node2rtl.scm 267 */
													BgL_areaz00_bglt BgL_arg4564z00_1567;

													{	/* SawMill/node2rtl.scm 267 */
														obj_t BgL_ez00_1569;

														obj_t BgL_rz00_1570;

														BgL_ez00_1569 = CAR(BgL_ll4283z00_1559);
														BgL_rz00_1570 = CAR(BgL_ll4284z00_1560);
														{	/* SawMill/node2rtl.scm 267 */
															BgL_areaz00_bglt BgL_res5113z00_3227;

															{	/* SawMill/node2rtl.scm 267 */
																BgL_nodez00_bglt BgL_ez00_3220;

																BgL_rtl_regz00_bglt BgL_rz00_3221;

																BgL_ez00_3220 =
																	(BgL_nodez00_bglt) (BgL_ez00_1569);
																BgL_rz00_3221 =
																	(BgL_rtl_regz00_bglt) (BgL_rz00_1570);
																{	/* SawMill/node2rtl.scm 267 */
																	BgL_areaz00_bglt BgL_az00_3222;

																	BgL_az00_3222 =
																		BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
																		(BgL_ez00_3220);
																	{	/* SawMill/node2rtl.scm 267 */
																		BgL_blockz00_bglt BgL_arg4426z00_3225;

																		BgL_arg4426z00_3225 =
																			(((BgL_areaz00_bglt)
																				CREF(BgL_az00_3222))->BgL_exitz00);
																		BGl_bdestinationz12z12zzsaw_node2rtlz00
																			(BgL_arg4426z00_3225, BgL_rz00_3221);
																	}
																	BgL_res5113z00_3227 = BgL_az00_3222;
																}
															}
															BgL_arg4564z00_1567 = BgL_res5113z00_3227;
														}
													}
													BgL_newtail4287z00_1564 =
														MAKE_PAIR((obj_t) (BgL_arg4564z00_1567), BNIL);
												}
												SET_CDR(BgL_tail4286z00_1561, BgL_newtail4287z00_1564);
												{
													obj_t BgL_tail4286z00_4992;

													obj_t BgL_ll4284z00_4990;

													obj_t BgL_ll4283z00_4988;

													BgL_ll4283z00_4988 = CDR(BgL_ll4283z00_1559);
													BgL_ll4284z00_4990 = CDR(BgL_ll4284z00_1560);
													BgL_tail4286z00_4992 = BgL_newtail4287z00_1564;
													BgL_tail4286z00_1561 = BgL_tail4286z00_4992;
													BgL_ll4284z00_1560 = BgL_ll4284z00_4990;
													BgL_ll4283z00_1559 = BgL_ll4283z00_4988;
													goto BgL_zc3anonymousza34560ze3z83_1562;
												}
											}
									}
								}
							BgL_arg4556z00_1551 =
								BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg4558z00_1553);
						}
						{	/* SawMill/node2rtl.scm 269 */
							BgL_areaz00_bglt BgL_arg4566z00_1572;

							BgL_areaz00_bglt BgL_arg4567z00_1573;

							{	/* SawMill/node2rtl.scm 269 */
								obj_t BgL_arg4568z00_1574;

								{	/* SawMill/node2rtl.scm 269 */
									obj_t BgL_ll4289z00_1575;

									obj_t BgL_ll4290z00_1576;

									BgL_ll4289z00_1575 = bgl_reverse(BgL_regsz00_1549);
									BgL_ll4290z00_1576 = bgl_reverse(BgL_paramsz00_1550);
									if (NULLP(BgL_ll4289z00_1575))
										{	/* SawMill/node2rtl.scm 269 */
											BgL_arg4568z00_1574 = BNIL;
										}
									else
										{	/* SawMill/node2rtl.scm 269 */
											obj_t BgL_head4291z00_1578;

											{	/* SawMill/node2rtl.scm 269 */
												BgL_areaz00_bglt BgL_arg4579z00_1595;

												{	/* SawMill/node2rtl.scm 269 */
													obj_t BgL_arg4581z00_1597;

													obj_t BgL_arg4582z00_1598;

													BgL_arg4581z00_1597 = CAR(BgL_ll4289z00_1575);
													BgL_arg4582z00_1598 = CAR(BgL_ll4290z00_1576);
													BgL_arg4579z00_1595 =
														BGl_movez00zzsaw_node2rtlz00(
														(BgL_rtl_regz00_bglt) (BgL_arg4581z00_1597),
														(BgL_localz00_bglt) (BgL_arg4582z00_1598));
												}
												BgL_head4291z00_1578 =
													MAKE_PAIR((obj_t) (BgL_arg4579z00_1595), BNIL);
											}
											{	/* SawMill/node2rtl.scm 269 */
												obj_t BgL_g4295z00_1579;

												obj_t BgL_g4296z00_1580;

												BgL_g4295z00_1579 = CDR(BgL_ll4289z00_1575);
												BgL_g4296z00_1580 = CDR(BgL_ll4290z00_1576);
												{
													obj_t BgL_ll4289z00_1582;

													obj_t BgL_ll4290z00_1583;

													obj_t BgL_tail4292z00_1584;

													BgL_ll4289z00_1582 = BgL_g4295z00_1579;
													BgL_ll4290z00_1583 = BgL_g4296z00_1580;
													BgL_tail4292z00_1584 = BgL_head4291z00_1578;
												BgL_zc3anonymousza34570ze3z83_1585:
													if (NULLP(BgL_ll4289z00_1582))
														{	/* SawMill/node2rtl.scm 269 */
															BgL_arg4568z00_1574 = BgL_head4291z00_1578;
														}
													else
														{	/* SawMill/node2rtl.scm 269 */
															obj_t BgL_newtail4293z00_1587;

															{	/* SawMill/node2rtl.scm 269 */
																BgL_areaz00_bglt BgL_arg4575z00_1590;

																{	/* SawMill/node2rtl.scm 269 */
																	obj_t BgL_arg4577z00_1592;

																	obj_t BgL_arg4578z00_1593;

																	BgL_arg4577z00_1592 = CAR(BgL_ll4289z00_1582);
																	BgL_arg4578z00_1593 = CAR(BgL_ll4290z00_1583);
																	BgL_arg4575z00_1590 =
																		BGl_movez00zzsaw_node2rtlz00(
																		(BgL_rtl_regz00_bglt) (BgL_arg4577z00_1592),
																		(BgL_localz00_bglt) (BgL_arg4578z00_1593));
																}
																BgL_newtail4293z00_1587 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg4575z00_1590), BNIL);
															}
															SET_CDR(BgL_tail4292z00_1584,
																BgL_newtail4293z00_1587);
															{
																obj_t BgL_tail4292z00_5021;

																obj_t BgL_ll4290z00_5019;

																obj_t BgL_ll4289z00_5017;

																BgL_ll4289z00_5017 = CDR(BgL_ll4289z00_1582);
																BgL_ll4290z00_5019 = CDR(BgL_ll4290z00_1583);
																BgL_tail4292z00_5021 = BgL_newtail4293z00_1587;
																BgL_tail4292z00_1584 = BgL_tail4292z00_5021;
																BgL_ll4290z00_1583 = BgL_ll4290z00_5019;
																BgL_ll4289z00_1582 = BgL_ll4289z00_5017;
																goto BgL_zc3anonymousza34570ze3z83_1585;
															}
														}
												}
											}
										}
								}
								BgL_arg4566z00_1572 =
									BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg4568z00_1574);
							}
							BgL_arg4567z00_1573 =
								BGl_localzd2ze3codez31zzsaw_node2rtlz00(BgL_vz00_66);
							BgL_arg4557z00_1552 =
								BGl_linkz00zzsaw_node2rtlz00(BgL_arg4566z00_1572,
								BgL_arg4567z00_1573);
						}
						return
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg4556z00_1551,
							BgL_arg4557z00_1552);
					}
				}
			}
		}
	}



/* move */
	BgL_areaz00_bglt BGl_movez00zzsaw_node2rtlz00(BgL_rtl_regz00_bglt
		BgL_rz00_1614, BgL_localz00_bglt BgL_vz00_1615)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 263 */
			{	/* SawMill/node2rtl.scm 261 */
				BgL_areaz00_bglt BgL_az00_1617;

				{	/* SawMill/node2rtl.scm 261 */
					BgL_rtl_movz00_bglt BgL_arg4592z00_1619;

					BgL_arg4592z00_1619 = BGl_makezd2rtl_movzd2zzsaw_defsz00(BFALSE);
					{	/* SawMill/node2rtl.scm 261 */
						obj_t BgL_list4593z00_1620;

						BgL_list4593z00_1620 = MAKE_PAIR((obj_t) (BgL_rz00_1614), BNIL);
						BgL_az00_1617 =
							BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
							(BgL_rtl_funz00_bglt) (BgL_arg4592z00_1619),
							BgL_list4593z00_1620);
					}
				}
				{	/* SawMill/node2rtl.scm 262 */
					BgL_rtl_regz00_bglt BgL_arg4591z00_1618;

					BgL_arg4591z00_1618 =
						BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_vz00_1615);
					{	/* SawMill/node2rtl.scm 262 */
						BgL_blockz00_bglt BgL_arg4426z00_3255;

						BgL_arg4426z00_3255 =
							(((BgL_areaz00_bglt) CREF(BgL_az00_1617))->BgL_exitz00);
						BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_arg4426z00_3255,
							BgL_arg4591z00_1618);
					}
				}
				return BgL_az00_1617;
			}
		}
	}



/* local->code */
	BgL_areaz00_bglt BGl_localzd2ze3codez31zzsaw_node2rtlz00(BgL_localz00_bglt
		BgL_vz00_68)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 273 */
			{	/* SawMill/node2rtl.scm 274 */
				bool_t BgL_testz00_5034;

				{	/* SawMill/node2rtl.scm 274 */
					obj_t BgL_obj4050z00_3257;

					BgL_obj4050z00_3257 = (obj_t) (BgL_vz00_68);
					BgL_testz00_5034 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj4050z00_3257,
						BGl_rlocalz00zzsaw_node2rtlz00);
				}
				if (BgL_testz00_5034)
					{	/* SawMill/node2rtl.scm 283 */
						obj_t BgL_arg4595z00_1623;

						{	/* SawMill/node2rtl.scm 283 */
							BgL_rlocalz00_bglt BgL_obj4054z00_3258;

							BgL_obj4054z00_3258 = (BgL_rlocalz00_bglt) (BgL_vz00_68);
							{
								obj_t BgL_auxz00_5038;

								{	/* SawMill/node2rtl.scm 283 */
									BgL_objectz00_bglt BgL_auxz00_5039;

									BgL_auxz00_5039 = (BgL_objectz00_bglt) (BgL_obj4054z00_3258);
									BgL_auxz00_5038 = BGL_OBJECT_WIDENING(BgL_auxz00_5039);
								}
								BgL_arg4595z00_1623 =
									(((BgL_rlocalz00_bglt) CREF(BgL_auxz00_5038))->BgL_codez00);
							}
						}
						return
							BGl_unlinkz00zzsaw_node2rtlz00(
							(BgL_areaz00_bglt) (BgL_arg4595z00_1623));
					}
				else
					{	/* SawMill/node2rtl.scm 276 */
						BgL_areaz00_bglt BgL_nopz00_1624;

						obj_t BgL_bodyz00_1625;

						{	/* SawMill/node2rtl.scm 276 */
							BgL_rtl_nopz00_bglt BgL_arg4600z00_1630;

							BgL_arg4600z00_1630 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
							BgL_nopz00_1624 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								(BgL_rtl_funz00_bglt) (BgL_arg4600z00_1630), BNIL);
						}
						{	/* SawMill/node2rtl.scm 277 */
							BgL_sfunz00_bglt BgL_obj1884z00_3263;

							{	/* SawMill/node2rtl.scm 277 */
								BgL_variablez00_bglt BgL_obj1611z00_3262;

								BgL_obj1611z00_3262 = (BgL_variablez00_bglt) (BgL_vz00_68);
								BgL_obj1884z00_3263 =
									(BgL_sfunz00_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_3262))->
										BgL_valuez00));
							}
							BgL_bodyz00_1625 =
								(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_3263))->BgL_bodyz00);
						}
						{	/* SawMill/node2rtl.scm 279 */
							BgL_localz00_bglt BgL_obj4129z00_1626;

							BgL_obj4129z00_1626 = ((BgL_localz00_bglt) BgL_vz00_68);
							{	/* SawMill/node2rtl.scm 279 */
								BgL_rlocalz00_bglt BgL_arg4596z00_1627;

								{	/* SawMill/node2rtl.scm 279 */
									BgL_rlocalz00_bglt BgL_res5115z00_3273;

									{	/* SawMill/node2rtl.scm 279 */
										obj_t BgL_code4019z00_3265;

										BgL_code4019z00_3265 = (obj_t) (BgL_nopz00_1624);
										{	/* SawMill/node2rtl.scm 279 */
											BgL_rlocalz00_bglt BgL_new4020z00_3266;

											BgL_new4020z00_3266 =
												((BgL_rlocalz00_bglt) BREF(GC_MALLOC(sizeof(struct
															BgL_rlocalz00_bgl))));
											{	/* SawMill/node2rtl.scm 279 */
												BgL_rlocalz00_bglt BgL_res5114z00_3272;

												{	/* SawMill/node2rtl.scm 279 */
													BgL_rlocalz00_bglt BgL_new4038z00_3267;

													BgL_new4038z00_3267 = BgL_new4020z00_3266;
													{	/* SawMill/node2rtl.scm 279 */
														obj_t BgL_reg4036z00_3270;

														obj_t BgL_code4037z00_3271;

														BgL_reg4036z00_3270 = BFALSE;
														BgL_code4037z00_3271 = BgL_code4019z00_3265;
														((((BgL_rlocalz00_bglt) CREF(BgL_new4038z00_3267))->
																BgL_regz00) =
															((obj_t) BgL_reg4036z00_3270), BUNSPEC);
														((((BgL_rlocalz00_bglt) CREF(BgL_new4038z00_3267))->
																BgL_codez00) =
															((obj_t) BgL_code4037z00_3271), BUNSPEC);
														BgL_res5114z00_3272 = BgL_new4038z00_3267;
												}} BgL_res5114z00_3272;
											}
											BgL_res5115z00_3273 = BgL_new4020z00_3266;
									}}
									BgL_arg4596z00_1627 = BgL_res5115z00_3273;
								}
								{	/* SawMill/node2rtl.scm 279 */
									obj_t BgL_auxz00_5059;

									BgL_objectz00_bglt BgL_auxz00_5057;

									BgL_auxz00_5059 = (obj_t) (BgL_arg4596z00_1627);
									BgL_auxz00_5057 = (BgL_objectz00_bglt) (BgL_obj4129z00_1626);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_5057, BgL_auxz00_5059);
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4129z00_1626),
								BGl_classzd2numzd2zz__objectz00
								(BGl_rlocalz00zzsaw_node2rtlz00));
							BgL_obj4129z00_1626;
						}
						{	/* SawMill/node2rtl.scm 281 */
							BgL_areaz00_bglt BgL_arg4598z00_1629;

							{	/* SawMill/node2rtl.scm 281 */
								BgL_areaz00_bglt BgL_res5118z00_3302;

								{	/* SawMill/node2rtl.scm 281 */
									BgL_nodez00_bglt BgL_ez00_3276;

									BgL_ez00_3276 = (BgL_nodez00_bglt) (BgL_bodyz00_1625);
									{	/* SawMill/node2rtl.scm 281 */
										obj_t BgL_method4301z00_3277;

										{	/* SawMill/node2rtl.scm 281 */
											BgL_objectz00_bglt BgL_objz00_3278;

											BgL_objz00_3278 = (BgL_objectz00_bglt) (BgL_ez00_3276);
											{	/* SawMill/node2rtl.scm 281 */
												long BgL_objzd2classzd2numz00_3279;

												BgL_objzd2classzd2numz00_3279 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3278);
												{	/* SawMill/node2rtl.scm 281 */
													obj_t BgL_arg2643z00_3280;

													BgL_arg2643z00_3280 =
														PROCEDURE_REF
														(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
														(int) (((long) 1)));
													{	/* SawMill/node2rtl.scm 281 */
														obj_t BgL_arrayz00_3282;

														int BgL_offsetz00_3283;

														BgL_arrayz00_3282 = BgL_arg2643z00_3280;
														BgL_offsetz00_3283 =
															(int) (BgL_objzd2classzd2numz00_3279);
														{	/* SawMill/node2rtl.scm 281 */
															long BgL_offsetz00_3284;

															BgL_offsetz00_3284 =
																((long) (BgL_offsetz00_3283) - OBJECT_TYPE);
															{	/* SawMill/node2rtl.scm 281 */
																long BgL_modz00_3285;

																{	/* SawMill/node2rtl.scm 281 */
																	int BgL_arg2645z00_3286;

																	BgL_arg2645z00_3286 = (int) (((long) 16));
																	{	/* SawMill/node2rtl.scm 281 */
																		long BgL_auxz00_5074;

																		BgL_auxz00_5074 =
																			(long) (BgL_arg2645z00_3286);
																		BgL_modz00_3285 =
																			(BgL_offsetz00_3284 / BgL_auxz00_5074);
																}}
																{	/* SawMill/node2rtl.scm 281 */
																	long BgL_restz00_3287;

																	{	/* SawMill/node2rtl.scm 281 */
																		int BgL_arg2644z00_3288;

																		BgL_arg2644z00_3288 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 281 */
																			long BgL_auxz00_5078;

																			BgL_auxz00_5078 =
																				(long) (BgL_arg2644z00_3288);
																			BgL_restz00_3287 =
																				(BgL_offsetz00_3284 % BgL_auxz00_5078);
																	}}
																	{	/* SawMill/node2rtl.scm 281 */

																		BgL_method4301z00_3277 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3282,
																				(int) (BgL_modz00_3285)),
																			(int) (BgL_restz00_3287));
										}}}}}}}}
										BgL_res5118z00_3302 =
											(BgL_areaz00_bglt) (PROCEDURE_ENTRY
											(BgL_method4301z00_3277) (BgL_method4301z00_3277,
												(obj_t) (BgL_ez00_3276), BEOA));
								}}
								BgL_arg4598z00_1629 = BgL_res5118z00_3302;
							}
							return
								BGl_linkz00zzsaw_node2rtlz00(BgL_nopz00_1624,
								BgL_arg4598z00_1629);
						}
					}
			}
		}
	}



/* imperative? */
	obj_t BGl_imperativezf3zf3zzsaw_node2rtlz00(BgL_appz00_bglt BgL_ez00_70,
		BgL_globalz00_bglt BgL_vz00_71, obj_t BgL_argsz00_72)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 296 */
			{	/* SawMill/node2rtl.scm 297 */
				obj_t BgL_idz00_1633;

				{
					BgL_variablez00_bglt BgL_auxz00_5090;

					BgL_auxz00_5090 = (BgL_variablez00_bglt) (BgL_vz00_71);
					BgL_idz00_1633 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_5090))->BgL_idz00);
				}
				if ((BgL_idz00_1633 == CNST_TABLE_REF(((long) 2))))
					{	/* SawMill/node2rtl.scm 301 */
						BgL_areaz00_bglt BgL_arg4604z00_1635;

						BgL_areaz00_bglt BgL_arg4605z00_1636;

						{	/* SawMill/node2rtl.scm 301 */
							obj_t BgL_arg4606z00_1637;

							BgL_rtl_regz00_bglt BgL_arg4607z00_1638;

							{	/* SawMill/node2rtl.scm 301 */
								obj_t BgL_pairz00_3304;

								BgL_pairz00_3304 = BgL_argsz00_72;
								BgL_arg4606z00_1637 = CAR(CDR(CDR(BgL_pairz00_3304)));
							}
							{	/* SawMill/node2rtl.scm 302 */
								BgL_variablez00_bglt BgL_arg4608z00_1639;

								{	/* SawMill/node2rtl.scm 302 */
									BgL_varz00_bglt BgL_obj2155z00_3311;

									{	/* SawMill/node2rtl.scm 302 */
										obj_t BgL_pairz00_3310;

										BgL_pairz00_3310 = BgL_argsz00_72;
										BgL_obj2155z00_3311 =
											(BgL_varz00_bglt) (CAR(BgL_pairz00_3310));
									}
									BgL_arg4608z00_1639 =
										(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3311))->
										BgL_variablez00);
								}
								BgL_arg4607z00_1638 =
									BGl_localzd2ze3regz31zzsaw_node2rtlz00(
									(BgL_localz00_bglt) (BgL_arg4608z00_1639));
							}
							{	/* SawMill/node2rtl.scm 301 */
								BgL_areaz00_bglt BgL_res5119z00_3319;

								{	/* SawMill/node2rtl.scm 301 */
									BgL_nodez00_bglt BgL_ez00_3312;

									BgL_ez00_3312 = (BgL_nodez00_bglt) (BgL_arg4606z00_1637);
									{	/* SawMill/node2rtl.scm 301 */
										BgL_areaz00_bglt BgL_az00_3314;

										BgL_az00_3314 =
											BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(BgL_ez00_3312);
										{	/* SawMill/node2rtl.scm 301 */
											BgL_blockz00_bglt BgL_arg4426z00_3317;

											BgL_arg4426z00_3317 =
												(((BgL_areaz00_bglt) CREF(BgL_az00_3314))->BgL_exitz00);
											BGl_bdestinationz12z12zzsaw_node2rtlz00
												(BgL_arg4426z00_3317, BgL_arg4607z00_1638);
										}
										BgL_res5119z00_3319 = BgL_az00_3314;
								}}
								BgL_arg4604z00_1635 = BgL_res5119z00_3319;
						}}
						{	/* SawMill/node2rtl.scm 303 */
							BgL_rtl_nopz00_bglt BgL_arg4610z00_1641;

							BgL_arg4610z00_1641 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
							BgL_arg4605z00_1636 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								(BgL_rtl_funz00_bglt) (BgL_arg4610z00_1641), BNIL);
						}
						return
							(obj_t) (BGl_linkz00zzsaw_node2rtlz00(BgL_arg4604z00_1635,
								BgL_arg4605z00_1636));
					}
				else
					{	/* SawMill/node2rtl.scm 299 */
						if ((BgL_idz00_1633 == CNST_TABLE_REF(((long) 3))))
							{	/* SawMill/node2rtl.scm 306 */
								BgL_rtl_globalrefz00_bglt BgL_arg4613z00_1644;

								{	/* SawMill/node2rtl.scm 306 */
									BgL_variablez00_bglt BgL_arg4615z00_1646;

									{	/* SawMill/node2rtl.scm 306 */
										BgL_varz00_bglt BgL_obj2155z00_3324;

										{	/* SawMill/node2rtl.scm 306 */
											obj_t BgL_pairz00_3323;

											BgL_pairz00_3323 = BgL_argsz00_72;
											BgL_obj2155z00_3324 =
												(BgL_varz00_bglt) (CAR(BgL_pairz00_3323));
										}
										BgL_arg4615z00_1646 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3324))->
											BgL_variablez00);
									}
									BgL_arg4613z00_1644 =
										BGl_makezd2rtl_globalrefzd2zzsaw_defsz00(BFALSE,
										(BgL_globalz00_bglt) (BgL_arg4615z00_1646));
								}
								{	/* SawMill/node2rtl.scm 305 */
									BgL_rtl_funz00_bglt BgL_funz00_3326;

									BgL_funz00_3326 = (BgL_rtl_funz00_bglt) (BgL_arg4613z00_1644);
									return
										(obj_t) (BGl_callza2za2zzsaw_node2rtlz00(
											(obj_t) (BgL_ez00_70), BgL_funz00_3326, BNIL));
								}
							}
						else
							{	/* SawMill/node2rtl.scm 304 */
								return BFALSE;
							}
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			{	/* SawMill/node2rtl.scm 14 */
				obj_t BgL_arg4617z00_1648;

				obj_t BgL_arg4618z00_1649;

				obj_t BgL_arg4621z00_1652;

				BgL_arg4617z00_1648 = CNST_TABLE_REF(((long) 4));
				BgL_arg4618z00_1649 = BGl_objectz00zz__objectz00;
				{	/* SawMill/node2rtl.scm 14 */
					obj_t BgL_v4297z00_1653;

					BgL_v4297z00_1653 = create_vector((int) (((long) 0)));
					BgL_arg4621z00_1652 = BgL_v4297z00_1653;
				}
				BGl_areaz00zzsaw_node2rtlz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4617z00_1648,
					BgL_arg4618z00_1649, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2areazd2envz52zzsaw_node2rtlz00,
					BGl_areazd2nilzd2envz00zzsaw_node2rtlz00,
					BGl_areazf3zd2envz21zzsaw_node2rtlz00, ((long) 55034690), BFALSE,
					BFALSE, BgL_arg4621z00_1652);
			}
			{	/* SawMill/node2rtl.scm 15 */
				obj_t BgL_arg4622z00_1654;

				obj_t BgL_arg4623z00_1655;

				obj_t BgL_arg4626z00_1658;

				BgL_arg4622z00_1654 = CNST_TABLE_REF(((long) 5));
				BgL_arg4623z00_1655 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/node2rtl.scm 15 */
					obj_t BgL_v4298z00_1659;

					BgL_v4298z00_1659 = create_vector((int) (((long) 0)));
					BgL_arg4626z00_1658 = BgL_v4298z00_1659;
				}
				BGl_reversedz00zzsaw_node2rtlz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4622z00_1654,
					BgL_arg4623z00_1655, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2reversedzd2envz52zzsaw_node2rtlz00,
					BGl_reversedzd2nilzd2envz00zzsaw_node2rtlz00,
					BGl_reversedzf3zd2envz21zzsaw_node2rtlz00, ((long) 69786969), BFALSE,
					BFALSE, BgL_arg4626z00_1658);
			}
			{	/* SawMill/node2rtl.scm 16 */
				obj_t BgL_arg4627z00_1660;

				obj_t BgL_arg4628z00_1661;

				obj_t BgL_arg4631z00_1664;

				BgL_arg4627z00_1660 = CNST_TABLE_REF(((long) 6));
				BgL_arg4628z00_1661 = BGl_localz00zzast_varz00;
				{	/* SawMill/node2rtl.scm 16 */
					obj_t BgL_v4299z00_1665;

					BgL_v4299z00_1665 = create_vector((int) (((long) 0)));
					BgL_arg4631z00_1664 = BgL_v4299z00_1665;
				}
				BGl_rlocalz00zzsaw_node2rtlz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4627z00_1660,
					BgL_arg4628z00_1661, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rlocalzd2envz52zzsaw_node2rtlz00,
					BGl_rlocalzd2nilzd2envz00zzsaw_node2rtlz00,
					BGl_rlocalzf3zd2envz21zzsaw_node2rtlz00, ((long) 7573149), BFALSE,
					BFALSE, BgL_arg4631z00_1664);
			}
			BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00 = BUNSPEC;
			BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00 = BUNSPEC;
			return (BGl_z52thezd2areazd2nilz52zzsaw_node2rtlz00 = BUNSPEC, BUNSPEC);
		}
	}



/* _rlocal? */
	obj_t BGl__rlocalzf3zf3zzsaw_node2rtlz00(obj_t BgL_envz00_4290,
		obj_t BgL_obj4050z00_4291)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 16 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4050z00_4291,
					BGl_rlocalz00zzsaw_node2rtlz00));
		}
	}



/* _%allocate-rlocal */
	obj_t BGl__z52allocatezd2rlocalz80zzsaw_node2rtlz00(obj_t BgL_envz00_4288)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 16 */
			{	/* SawMill/node2rtl.scm 16 */
				BgL_localz00_bglt BgL_auxz00_5139;

				{	/* SawMill/node2rtl.scm 16 */
					BgL_localz00_bglt BgL_res5237z00_4438;

					{	/* SawMill/node2rtl.scm 16 */
						BgL_localz00_bglt BgL_new4042z00_4436;

						BgL_new4042z00_4436 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4042z00_4436),
							BGl_classzd2numzd2zz__objectz00(BGl_rlocalz00zzsaw_node2rtlz00));
						{	/* SawMill/node2rtl.scm 16 */
							BgL_objectz00_bglt BgL_auxz00_5144;

							BgL_auxz00_5144 = (BgL_objectz00_bglt) (BgL_new4042z00_4436);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5144, BFALSE);
						}
						BgL_res5237z00_4438 = BgL_new4042z00_4436;
					}
					BgL_auxz00_5139 = BgL_res5237z00_4438;
				}
				return (obj_t) (BgL_auxz00_5139);
			}
		}
	}



/* rlocal-nil */
	BgL_rlocalz00_bglt BGl_rlocalzd2nilzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 16 */
			if ((BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00 == BUNSPEC))
				{	/* SawMill/node2rtl.scm 16 */
					{	/* SawMill/node2rtl.scm 16 */
						BgL_localz00_bglt BgL_res5121z00_3345;

						{	/* SawMill/node2rtl.scm 16 */
							BgL_localz00_bglt BgL_new1810z00_3341;

							BgL_new1810z00_3341 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_3341),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* SawMill/node2rtl.scm 16 */
								BgL_objectz00_bglt BgL_auxz00_5154;

								BgL_auxz00_5154 = (BgL_objectz00_bglt) (BgL_new1810z00_3341);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5154, BFALSE);
							}
							BgL_res5121z00_3345 = BgL_new1810z00_3341;
						}
						BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00 =
							(obj_t) (BgL_res5121z00_3345);
					}
					{	/* SawMill/node2rtl.scm 16 */
						obj_t BgL_arg4638z00_1676;

						BgL_typez00_bglt BgL_arg4639z00_1677;

						BgL_valuez00_bglt BgL_arg4640z00_1678;

						BgL_arg4638z00_1676 = CNST_TABLE_REF(((long) 7));
						BgL_arg4639z00_1677 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4640z00_1678 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* SawMill/node2rtl.scm 16 */
							BgL_localz00_bglt BgL_res5122z00_3367;

							{	/* SawMill/node2rtl.scm 16 */
								BgL_localz00_bglt BgL_new1798z00_3346;

								BgL_new1798z00_3346 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00);
								{	/* SawMill/node2rtl.scm 16 */
									obj_t BgL_id1788z00_3357;

									obj_t BgL_name1789z00_3358;

									BgL_typez00_bglt BgL_type1790z00_3359;

									BgL_valuez00_bglt BgL_value1791z00_3360;

									obj_t BgL_access1792z00_3361;

									obj_t BgL_fastzd2alpha1793zd2_3362;

									obj_t BgL_removable1794z00_3363;

									long BgL_occurrence1795z00_3364;

									bool_t BgL_userzf31796zf3_3365;

									long BgL_key1797z00_3366;

									BgL_id1788z00_3357 = BgL_arg4638z00_1676;
									BgL_name1789z00_3358 = BUNSPEC;
									BgL_type1790z00_3359 = BgL_arg4639z00_1677;
									BgL_value1791z00_3360 = BgL_arg4640z00_1678;
									BgL_access1792z00_3361 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_3362 = BUNSPEC;
									BgL_removable1794z00_3363 = BUNSPEC;
									BgL_occurrence1795z00_3364 = ((long) 0);
									BgL_userzf31796zf3_3365 = ((bool_t) 0);
									BgL_key1797z00_3366 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_3357), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_3358), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_3359), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_3360), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_3361), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_3362), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_3363), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_3364), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_3365), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3346))->
											BgL_keyz00) = ((long) BgL_key1797z00_3366), BUNSPEC);
									BgL_res5122z00_3367 = BgL_new1798z00_3346;
							}} BgL_res5122z00_3367;
					}}
					{	/* SawMill/node2rtl.scm 16 */
						long BgL_arg4643z00_1681;

						BgL_arg4643z00_1681 =
							BGl_classzd2numzd2zz__objectz00(BGl_rlocalz00zzsaw_node2rtlz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00),
							BgL_arg4643z00_1681);
					}
					{	/* SawMill/node2rtl.scm 16 */
						BgL_rlocalz00_bglt BgL_arg4644z00_1682;

						{	/* SawMill/node2rtl.scm 16 */
							BgL_rlocalz00_bglt BgL_res5124z00_3379;

							{	/* SawMill/node2rtl.scm 16 */
								BgL_rlocalz00_bglt BgL_new4020z00_3372;

								BgL_new4020z00_3372 =
									((BgL_rlocalz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_rlocalz00_bgl))));
								{	/* SawMill/node2rtl.scm 16 */
									BgL_rlocalz00_bglt BgL_res5123z00_3378;

									{	/* SawMill/node2rtl.scm 16 */
										BgL_rlocalz00_bglt BgL_new4038z00_3373;

										BgL_new4038z00_3373 = BgL_new4020z00_3372;
										{	/* SawMill/node2rtl.scm 16 */
											obj_t BgL_reg4036z00_3376;

											obj_t BgL_code4037z00_3377;

											BgL_reg4036z00_3376 = BUNSPEC;
											BgL_code4037z00_3377 = BUNSPEC;
											((((BgL_rlocalz00_bglt) CREF(BgL_new4038z00_3373))->
													BgL_regz00) = ((obj_t) BgL_reg4036z00_3376), BUNSPEC);
											((((BgL_rlocalz00_bglt) CREF(BgL_new4038z00_3373))->
													BgL_codez00) =
												((obj_t) BgL_code4037z00_3377), BUNSPEC);
											BgL_res5123z00_3378 = BgL_new4038z00_3373;
									}} BgL_res5123z00_3378;
								}
								BgL_res5124z00_3379 = BgL_new4020z00_3372;
							}
							BgL_arg4644z00_1682 = BgL_res5124z00_3379;
						}
						{	/* SawMill/node2rtl.scm 16 */
							obj_t BgL_auxz00_5180;

							BgL_objectz00_bglt BgL_auxz00_5178;

							BgL_auxz00_5180 = (obj_t) (BgL_arg4644z00_1682);
							BgL_auxz00_5178 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5178, BgL_auxz00_5180);
				}}}
			else
				{	/* SawMill/node2rtl.scm 16 */
					BFALSE;
				}
			return
				(BgL_rlocalz00_bglt) (BGl_z52thezd2rlocalzd2nilz52zzsaw_node2rtlz00);
		}
	}



/* _rlocal-nil */
	obj_t BGl__rlocalzd2nilzd2zzsaw_node2rtlz00(obj_t BgL_envz00_4289)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 16 */
			return (obj_t) (BGl_rlocalzd2nilzd2zzsaw_node2rtlz00());
		}
	}



/* _reversed? */
	obj_t BGl__reversedzf3zf3zzsaw_node2rtlz00(obj_t BgL_envz00_4286,
		obj_t BgL_obj4004z00_4287)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4004z00_4287,
					BGl_reversedz00zzsaw_node2rtlz00));
		}
	}



/* widening-reversed */
	BgL_reversedz00_bglt BGl_wideningzd2reversedzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			{	/* SawMill/node2rtl.scm 15 */
				BgL_reversedz00_bglt BgL_new3987z00_1683;

				BgL_new3987z00_1683 =
					((BgL_reversedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_reversedz00_bgl))));
				return BgL_new3987z00_1683;
			}
		}
	}



/* _%allocate-reversed */
	obj_t BGl__z52allocatezd2reversedz80zzsaw_node2rtlz00(obj_t BgL_envz00_4284)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			{	/* SawMill/node2rtl.scm 15 */
				BgL_blockz00_bglt BgL_auxz00_5189;

				{	/* SawMill/node2rtl.scm 15 */
					BgL_blockz00_bglt BgL_res5238z00_4444;

					{	/* SawMill/node2rtl.scm 15 */
						BgL_blockz00_bglt BgL_new3997z00_4442;

						BgL_new3997z00_4442 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3997z00_4442),
							BGl_classzd2numzd2zz__objectz00
							(BGl_reversedz00zzsaw_node2rtlz00));
						{	/* SawMill/node2rtl.scm 15 */
							BgL_objectz00_bglt BgL_auxz00_5194;

							BgL_auxz00_5194 = (BgL_objectz00_bglt) (BgL_new3997z00_4442);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5194, BFALSE);
						}
						BgL_res5238z00_4444 = BgL_new3997z00_4442;
					}
					BgL_auxz00_5189 = BgL_res5238z00_4444;
				}
				return (obj_t) (BgL_auxz00_5189);
			}
		}
	}



/* reversed-nil */
	BgL_reversedz00_bglt BGl_reversedzd2nilzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			if ((BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00 == BUNSPEC))
				{	/* SawMill/node2rtl.scm 15 */
					{	/* SawMill/node2rtl.scm 15 */
						BgL_blockz00_bglt BgL_res5125z00_3389;

						{	/* SawMill/node2rtl.scm 15 */
							BgL_blockz00_bglt BgL_new3957z00_3385;

							BgL_new3957z00_3385 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_3385),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/node2rtl.scm 15 */
								BgL_objectz00_bglt BgL_auxz00_5204;

								BgL_auxz00_5204 = (BgL_objectz00_bglt) (BgL_new3957z00_3385);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5204, BFALSE);
							}
							BgL_res5125z00_3389 = BgL_new3957z00_3385;
						}
						BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00 =
							(obj_t) (BgL_res5125z00_3389);
					}
					{	/* SawMill/node2rtl.scm 15 */
						obj_t BgL_arg4653z00_1694;

						BgL_arg4653z00_1694 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/node2rtl.scm 15 */
							BgL_blockz00_bglt BgL_res5126z00_3399;

							{	/* SawMill/node2rtl.scm 15 */
								BgL_blockz00_bglt BgL_new3951z00_3390;

								int BgL_label3947z00_3391;

								BgL_new3951z00_3390 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00);
								BgL_label3947z00_3391 = (int) (((long) 0));
								{	/* SawMill/node2rtl.scm 15 */
									int BgL_label3947z00_3395;

									obj_t BgL_preds3948z00_3396;

									obj_t BgL_succs3949z00_3397;

									obj_t BgL_first3950z00_3398;

									BgL_label3947z00_3395 = BgL_label3947z00_3391;
									BgL_preds3948z00_3396 = BNIL;
									BgL_succs3949z00_3397 = BNIL;
									BgL_first3950z00_3398 = BgL_arg4653z00_1694;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_3390))->
											BgL_labelz00) = ((int) BgL_label3947z00_3395), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_3390))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_3396), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_3390))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_3397), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_3390))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_3398), BUNSPEC);
									BgL_res5126z00_3399 = BgL_new3951z00_3390;
							}} BgL_res5126z00_3399;
					}}
					{	/* SawMill/node2rtl.scm 15 */
						long BgL_arg4654z00_1695;

						BgL_arg4654z00_1695 =
							BGl_classzd2numzd2zz__objectz00(BGl_reversedz00zzsaw_node2rtlz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00),
							BgL_arg4654z00_1695);
					}
					{	/* SawMill/node2rtl.scm 15 */
						BgL_reversedz00_bglt BgL_arg4655z00_1696;

						BgL_arg4655z00_1696 = BGl_wideningzd2reversedzd2zzsaw_node2rtlz00();
						{	/* SawMill/node2rtl.scm 15 */
							obj_t BgL_auxz00_5221;

							BgL_objectz00_bglt BgL_auxz00_5219;

							BgL_auxz00_5221 = (obj_t) (BgL_arg4655z00_1696);
							BgL_auxz00_5219 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5219, BgL_auxz00_5221);
				}}}
			else
				{	/* SawMill/node2rtl.scm 15 */
					BFALSE;
				}
			return
				(BgL_reversedz00_bglt)
				(BGl_z52thezd2reversedzd2nilz52zzsaw_node2rtlz00);
		}
	}



/* _reversed-nil */
	obj_t BGl__reversedzd2nilzd2zzsaw_node2rtlz00(obj_t BgL_envz00_4285)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			return (obj_t) (BGl_reversedzd2nilzd2zzsaw_node2rtlz00());
		}
	}



/* _area? */
	obj_t BGl__areazf3zf3zzsaw_node2rtlz00(obj_t BgL_envz00_4282,
		obj_t BgL_obj3986z00_4283)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 14 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3986z00_4283,
					BGl_areaz00zzsaw_node2rtlz00));
		}
	}



/* _%allocate-area */
	obj_t BGl__z52allocatezd2areaz80zzsaw_node2rtlz00(obj_t BgL_envz00_4280)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 14 */
			{	/* SawMill/node2rtl.scm 14 */
				BgL_areaz00_bglt BgL_auxz00_5229;

				{	/* SawMill/node2rtl.scm 14 */
					BgL_areaz00_bglt BgL_res5239z00_4450;

					{	/* SawMill/node2rtl.scm 14 */
						BgL_areaz00_bglt BgL_new3975z00_4448;

						BgL_new3975z00_4448 =
							((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_areaz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3975z00_4448),
							BGl_classzd2numzd2zz__objectz00(BGl_areaz00zzsaw_node2rtlz00));
						{	/* SawMill/node2rtl.scm 14 */
							BgL_objectz00_bglt BgL_auxz00_5234;

							BgL_auxz00_5234 = (BgL_objectz00_bglt) (BgL_new3975z00_4448);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5234, BFALSE);
						}
						BgL_res5239z00_4450 = BgL_new3975z00_4448;
					}
					BgL_auxz00_5229 = BgL_res5239z00_4450;
				}
				return (obj_t) (BgL_auxz00_5229);
			}
		}
	}



/* area-nil */
	BgL_areaz00_bglt BGl_areazd2nilzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 14 */
			if ((BGl_z52thezd2areazd2nilz52zzsaw_node2rtlz00 == BUNSPEC))
				{	/* SawMill/node2rtl.scm 14 */
					{	/* SawMill/node2rtl.scm 14 */
						BgL_areaz00_bglt BgL_res5129z00_3424;

						{	/* SawMill/node2rtl.scm 14 */
							BgL_areaz00_bglt BgL_new3975z00_3420;

							BgL_new3975z00_3420 =
								((BgL_areaz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_areaz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3975z00_3420),
								BGl_classzd2numzd2zz__objectz00(BGl_areaz00zzsaw_node2rtlz00));
							{	/* SawMill/node2rtl.scm 14 */
								BgL_objectz00_bglt BgL_auxz00_5244;

								BgL_auxz00_5244 = (BgL_objectz00_bglt) (BgL_new3975z00_3420);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5244, BFALSE);
							}
							BgL_res5129z00_3424 = BgL_new3975z00_3420;
						}
						BGl_z52thezd2areazd2nilz52zzsaw_node2rtlz00 =
							(obj_t) (BgL_res5129z00_3424);
					}
					{	/* SawMill/node2rtl.scm 14 */
						BgL_blockz00_bglt BgL_arg4658z00_1703;

						BgL_blockz00_bglt BgL_arg4659z00_1704;

						BgL_arg4658z00_1703 = BGl_blockzd2nilzd2zzsaw_defsz00();
						BgL_arg4659z00_1704 = BGl_blockzd2nilzd2zzsaw_defsz00();
						{	/* SawMill/node2rtl.scm 14 */
							BgL_areaz00_bglt BgL_res5130z00_3430;

							{	/* SawMill/node2rtl.scm 14 */
								BgL_areaz00_bglt BgL_new3971z00_3425;

								BgL_new3971z00_3425 =
									(BgL_areaz00_bglt)
									(BGl_z52thezd2areazd2nilz52zzsaw_node2rtlz00);
								{	/* SawMill/node2rtl.scm 14 */
									BgL_blockz00_bglt BgL_entry3969z00_3428;

									BgL_blockz00_bglt BgL_exit3970z00_3429;

									BgL_entry3969z00_3428 = BgL_arg4658z00_1703;
									BgL_exit3970z00_3429 = BgL_arg4659z00_1704;
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_3425))->
											BgL_entryz00) =
										((BgL_blockz00_bglt) BgL_entry3969z00_3428), BUNSPEC);
									((((BgL_areaz00_bglt) CREF(BgL_new3971z00_3425))->
											BgL_exitz00) =
										((BgL_blockz00_bglt) BgL_exit3970z00_3429), BUNSPEC);
									BgL_res5130z00_3430 = BgL_new3971z00_3425;
							}}
							(obj_t) (BgL_res5130z00_3430);
				}}}
			else
				{	/* SawMill/node2rtl.scm 14 */
					BFALSE;
				}
			return (BgL_areaz00_bglt) (BGl_z52thezd2areazd2nilz52zzsaw_node2rtlz00);
		}
	}



/* _area-nil */
	obj_t BGl__areazd2nilzd2zzsaw_node2rtlz00(obj_t BgL_envz00_4281)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 14 */
			return (obj_t) (BGl_areazd2nilzd2zzsaw_node2rtlz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_nodezd2ze3rtlzd2default4300zd2envz31zzsaw_node2rtlz00,
				BGl_nodez00zzast_nodez00, BGl_string5189z00zzsaw_node2rtlz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
				BGl_predicatezd2default4360zd2envz00zzsaw_node2rtlz00,
				BGl_nodez00zzast_nodez00, BGl_string5190z00zzsaw_node2rtlz00);
		}
	}



/* node->rtl */
	BgL_areaz00_bglt BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_55)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 177 */
			{	/* SawMill/node2rtl.scm 177 */
				obj_t BgL_method4301z00_3453;

				{	/* SawMill/node2rtl.scm 177 */
					BgL_objectz00_bglt BgL_objz00_3454;

					BgL_objz00_3454 = (BgL_objectz00_bglt) (BgL_ez00_55);
					{	/* SawMill/node2rtl.scm 177 */
						long BgL_objzd2classzd2numz00_3455;

						BgL_objzd2classzd2numz00_3455 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3454);
						{	/* SawMill/node2rtl.scm 177 */
							obj_t BgL_arg2643z00_3456;

							BgL_arg2643z00_3456 =
								PROCEDURE_REF(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
								(int) (((long) 1)));
							{	/* SawMill/node2rtl.scm 177 */
								obj_t BgL_arrayz00_3458;

								int BgL_offsetz00_3459;

								BgL_arrayz00_3458 = BgL_arg2643z00_3456;
								BgL_offsetz00_3459 = (int) (BgL_objzd2classzd2numz00_3455);
								{	/* SawMill/node2rtl.scm 177 */
									long BgL_offsetz00_3460;

									BgL_offsetz00_3460 =
										((long) (BgL_offsetz00_3459) - OBJECT_TYPE);
									{	/* SawMill/node2rtl.scm 177 */
										long BgL_modz00_3461;

										{	/* SawMill/node2rtl.scm 177 */
											int BgL_arg2645z00_3462;

											BgL_arg2645z00_3462 = (int) (((long) 16));
											{	/* SawMill/node2rtl.scm 177 */
												long BgL_auxz00_5267;

												BgL_auxz00_5267 = (long) (BgL_arg2645z00_3462);
												BgL_modz00_3461 =
													(BgL_offsetz00_3460 / BgL_auxz00_5267);
										}}
										{	/* SawMill/node2rtl.scm 177 */
											long BgL_restz00_3463;

											{	/* SawMill/node2rtl.scm 177 */
												int BgL_arg2644z00_3464;

												BgL_arg2644z00_3464 = (int) (((long) 16));
												{	/* SawMill/node2rtl.scm 177 */
													long BgL_auxz00_5271;

													BgL_auxz00_5271 = (long) (BgL_arg2644z00_3464);
													BgL_restz00_3463 =
														(BgL_offsetz00_3460 % BgL_auxz00_5271);
											}}
											{	/* SawMill/node2rtl.scm 177 */

												BgL_method4301z00_3453 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3458,
														(int) (BgL_modz00_3461)), (int) (BgL_restz00_3463));
				}}}}}}}}
				return
					(BgL_areaz00_bglt) (PROCEDURE_ENTRY(BgL_method4301z00_3453)
					(BgL_method4301z00_3453, (obj_t) (BgL_ez00_55), BEOA));
			}
		}
	}



/* _node->rtl */
	obj_t BGl__nodezd2ze3rtlz31zzsaw_node2rtlz00(obj_t BgL_envz00_4278,
		obj_t BgL_ez00_4279)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 177 */
			return
				(obj_t) (BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
					(BgL_nodez00_bglt) (BgL_ez00_4279)));
		}
	}



/* node->rtl-default4300 */
	BgL_areaz00_bglt
		BGl_nodezd2ze3rtlzd2default4300ze3zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_56)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			return
				(BgL_areaz00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 8)),
					BGl_string5191z00zzsaw_node2rtlz00, (obj_t) (BgL_ez00_56)));
		}
	}



/* _node->rtl-default4300 */
	obj_t BGl__nodezd2ze3rtlzd2default4300ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4292, obj_t BgL_ez00_4293)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			return
				(obj_t) (BGl_nodezd2ze3rtlzd2default4300ze3zzsaw_node2rtlz00(
					(BgL_nodez00_bglt) (BgL_ez00_4293)));
		}
	}



/* predicate */
	BgL_areaz00_bglt BGl_predicatez00zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_92, obj_t BgL_joinedz00_93)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 438 */
			{	/* SawMill/node2rtl.scm 438 */
				obj_t BgL_method4361z00_3478;

				{	/* SawMill/node2rtl.scm 438 */
					BgL_objectz00_bglt BgL_objz00_3479;

					BgL_objz00_3479 = (BgL_objectz00_bglt) (BgL_ez00_92);
					{	/* SawMill/node2rtl.scm 438 */
						long BgL_objzd2classzd2numz00_3480;

						BgL_objzd2classzd2numz00_3480 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3479);
						{	/* SawMill/node2rtl.scm 438 */
							obj_t BgL_arg2643z00_3481;

							BgL_arg2643z00_3481 =
								PROCEDURE_REF(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
								(int) (((long) 1)));
							{	/* SawMill/node2rtl.scm 438 */
								obj_t BgL_arrayz00_3483;

								int BgL_offsetz00_3484;

								BgL_arrayz00_3483 = BgL_arg2643z00_3481;
								BgL_offsetz00_3484 = (int) (BgL_objzd2classzd2numz00_3480);
								{	/* SawMill/node2rtl.scm 438 */
									long BgL_offsetz00_3485;

									BgL_offsetz00_3485 =
										((long) (BgL_offsetz00_3484) - OBJECT_TYPE);
									{	/* SawMill/node2rtl.scm 438 */
										long BgL_modz00_3486;

										{	/* SawMill/node2rtl.scm 438 */
											int BgL_arg2645z00_3487;

											BgL_arg2645z00_3487 = (int) (((long) 16));
											{	/* SawMill/node2rtl.scm 438 */
												long BgL_auxz00_5300;

												BgL_auxz00_5300 = (long) (BgL_arg2645z00_3487);
												BgL_modz00_3486 =
													(BgL_offsetz00_3485 / BgL_auxz00_5300);
										}}
										{	/* SawMill/node2rtl.scm 438 */
											long BgL_restz00_3488;

											{	/* SawMill/node2rtl.scm 438 */
												int BgL_arg2644z00_3489;

												BgL_arg2644z00_3489 = (int) (((long) 16));
												{	/* SawMill/node2rtl.scm 438 */
													long BgL_auxz00_5304;

													BgL_auxz00_5304 = (long) (BgL_arg2644z00_3489);
													BgL_restz00_3488 =
														(BgL_offsetz00_3485 % BgL_auxz00_5304);
											}}
											{	/* SawMill/node2rtl.scm 438 */

												BgL_method4361z00_3478 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3483,
														(int) (BgL_modz00_3486)), (int) (BgL_restz00_3488));
				}}}}}}}}
				return
					(BgL_areaz00_bglt) (PROCEDURE_ENTRY(BgL_method4361z00_3478)
					(BgL_method4361z00_3478, (obj_t) (BgL_ez00_92), BgL_joinedz00_93,
						BEOA));
			}
		}
	}



/* _predicate */
	obj_t BGl__predicatez00zzsaw_node2rtlz00(obj_t BgL_envz00_4294,
		obj_t BgL_ez00_4295, obj_t BgL_joinedz00_4296)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 438 */
			return
				(obj_t) (BGl_predicatez00zzsaw_node2rtlz00(
					(BgL_nodez00_bglt) (BgL_ez00_4295), BgL_joinedz00_4296));
		}
	}



/* predicate-default4360 */
	BgL_areaz00_bglt
		BGl_predicatezd2default4360zd2zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_94, obj_t BgL_joinedz00_95)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			{	/* SawMill/node2rtl.scm 439 */
				BgL_areaz00_bglt BgL_arg4753z00_2259;

				{	/* SawMill/node2rtl.scm 439 */
					BgL_rtl_ifz00_bglt BgL_arg4754z00_2260;

					BgL_arg4754z00_2260 = BGl_makezd2rtl_ifzd2zzsaw_defsz00(BFALSE);
					{	/* SawMill/node2rtl.scm 439 */
						obj_t BgL_list4755z00_2261;

						BgL_list4755z00_2261 = MAKE_PAIR((obj_t) (BgL_ez00_94), BNIL);
						BgL_arg4753z00_2259 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_94),
							(BgL_rtl_funz00_bglt) (BgL_arg4754z00_2260),
							BgL_list4755z00_2261);
					}
				}
				return
					BGl_forkz00zzsaw_node2rtlz00(BgL_arg4753z00_2259, BgL_joinedz00_95);
			}
		}
	}



/* _predicate-default4360 */
	obj_t BGl__predicatezd2default4360zd2zzsaw_node2rtlz00(obj_t BgL_envz00_4297,
		obj_t BgL_ez00_4298, obj_t BgL_joinedz00_4299)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			return
				(obj_t) (BGl_predicatezd2default4360zd2zzsaw_node2rtlz00(
					(BgL_nodez00_bglt) (BgL_ez00_4298), BgL_joinedz00_4299));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_atomz00zzast_nodez00,
				BGl_proc5192z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_varz00zzast_nodez00,
				BGl_proc5194z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5195z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_setqz00zzast_nodez00,
				BGl_proc5196z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_sequencez00zzast_nodez00, BGl_proc5197z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5198z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_selectz00zzast_nodez00, BGl_proc5199z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5200z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_appz00zzast_nodez00,
				BGl_proc5201z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc5202z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_funcallz00zzast_nodez00, BGl_proc5203z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_pragmaz00zzast_nodez00, BGl_proc5204z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_getfieldz00zzast_nodez00, BGl_proc5205z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_setfieldz00zzast_nodez00, BGl_proc5206z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_newz00zzast_nodez00,
				BGl_proc5207z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_vallocz00zzast_nodez00, BGl_proc5208z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_vrefz00zzast_nodez00,
				BGl_proc5209z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc5210z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_vlengthz00zzast_nodez00, BGl_proc5211z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_isaz00zzast_nodez00,
				BGl_proc5212z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_castz00zzast_nodez00,
				BGl_proc5213z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc5214z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5215z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5216z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_failz00zzast_nodez00,
				BGl_proc5217z00zzsaw_node2rtlz00, BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5218z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5219z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5220z00zzsaw_node2rtlz00,
				BGl_string5193z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00, BGl_atomz00zzast_nodez00,
				BGl_proc5221z00zzsaw_node2rtlz00, BGl_string5222z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5223z00zzsaw_node2rtlz00,
				BGl_string5222z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc5224z00zzsaw_node2rtlz00, BGl_string5222z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rlocalz00zzsaw_node2rtlz00, BGl_proc5225z00zzsaw_node2rtlz00,
				BGl_string5226z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rlocalz00zzsaw_node2rtlz00, BGl_proc5227z00zzsaw_node2rtlz00,
				BGl_string5228z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_reversedz00zzsaw_node2rtlz00, BGl_proc5229z00zzsaw_node2rtlz00,
				BGl_string5226z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_reversedz00zzsaw_node2rtlz00, BGl_proc5230z00zzsaw_node2rtlz00,
				BGl_string5228z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_areaz00zzsaw_node2rtlz00, BGl_proc5231z00zzsaw_node2rtlz00,
				BGl_string5226z00zzsaw_node2rtlz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_areaz00zzsaw_node2rtlz00, BGl_proc5232z00zzsaw_node2rtlz00,
				BGl_string5228z00zzsaw_node2rtlz00);
		}
	}



/* struct+object->objec4380 */
	obj_t BGl_structzb2objectzd2ze3objec4380z83zzsaw_node2rtlz00(obj_t
		BgL_envz00_4342, obj_t BgL_oz00_4343, obj_t BgL_sz00_4344)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 14 */
			{
				BgL_areaz00_bglt BgL_oz00_2803;

				obj_t BgL_sz00_2804;

				{	/* SawMill/node2rtl.scm 14 */
					BgL_areaz00_bglt BgL_auxz00_5365;

					BgL_oz00_2803 = (BgL_areaz00_bglt) (BgL_oz00_4343);
					BgL_sz00_2804 = BgL_sz00_4344;
					{	/* SawMill/node2rtl.scm 14 */
						obj_t BgL_arg5085z00_2807;

						BgL_arg5085z00_2807 = STRUCT_REF(BgL_sz00_2804, (int) (((long) 0)));
						{	/* SawMill/node2rtl.scm 14 */
							BgL_objectz00_bglt BgL_auxz00_5368;

							BgL_auxz00_5368 = (BgL_objectz00_bglt) (BgL_oz00_2803);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_5368, BgL_arg5085z00_2807);
					}}
					{
						BgL_blockz00_bglt BgL_auxz00_5371;

						BgL_auxz00_5371 =
							(BgL_blockz00_bglt) (STRUCT_REF(BgL_sz00_2804,
								(int) (((long) 1))));
						((((BgL_areaz00_bglt) CREF(BgL_oz00_2803))->BgL_entryz00) =
							((BgL_blockz00_bglt) BgL_auxz00_5371), BUNSPEC);
					}
					{
						BgL_blockz00_bglt BgL_auxz00_5376;

						BgL_auxz00_5376 =
							(BgL_blockz00_bglt) (STRUCT_REF(BgL_sz00_2804,
								(int) (((long) 2))));
						((((BgL_areaz00_bglt) CREF(BgL_oz00_2803))->BgL_exitz00) =
							((BgL_blockz00_bglt) BgL_auxz00_5376), BUNSPEC);
					}
					BgL_auxz00_5365 = BgL_oz00_2803;
					return (obj_t) (BgL_auxz00_5365);
				}
			}
		}
	}



/* object->struct-area4378 */
	obj_t BGl_objectzd2ze3structzd2area4378ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4345, obj_t BgL_obj3976z00_4346)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 14 */
			{
				BgL_areaz00_bglt BgL_obj3976z00_2793;

				BgL_obj3976z00_2793 = (BgL_areaz00_bglt) (BgL_obj3976z00_4346);
				{	/* SawMill/node2rtl.scm 14 */
					obj_t BgL_res3977z00_2796;

					{	/* SawMill/node2rtl.scm 14 */
						obj_t BgL_keyz00_4254;

						BgL_keyz00_4254 = CNST_TABLE_REF(((long) 4));
						BgL_res3977z00_2796 =
							make_struct(BgL_keyz00_4254, (int) (((long) 3)), BUNSPEC);
					}
					{	/* SawMill/node2rtl.scm 14 */
						int BgL_auxz00_5386;

						BgL_auxz00_5386 = (int) (((long) 0));
						STRUCT_SET(BgL_res3977z00_2796, BgL_auxz00_5386, BFALSE);
					}
					{	/* SawMill/node2rtl.scm 14 */
						BgL_blockz00_bglt BgL_arg5081z00_2798;

						BgL_arg5081z00_2798 =
							(((BgL_areaz00_bglt) CREF(BgL_obj3976z00_2793))->BgL_entryz00);
						{	/* SawMill/node2rtl.scm 14 */
							obj_t BgL_auxz00_5392;

							int BgL_auxz00_5390;

							BgL_auxz00_5392 = (obj_t) (BgL_arg5081z00_2798);
							BgL_auxz00_5390 = (int) (((long) 1));
							STRUCT_SET(BgL_res3977z00_2796, BgL_auxz00_5390, BgL_auxz00_5392);
					}}
					{	/* SawMill/node2rtl.scm 14 */
						BgL_blockz00_bglt BgL_arg5083z00_2800;

						BgL_arg5083z00_2800 =
							(((BgL_areaz00_bglt) CREF(BgL_obj3976z00_2793))->BgL_exitz00);
						{	/* SawMill/node2rtl.scm 14 */
							obj_t BgL_auxz00_5398;

							int BgL_auxz00_5396;

							BgL_auxz00_5398 = (obj_t) (BgL_arg5083z00_2800);
							BgL_auxz00_5396 = (int) (((long) 2));
							STRUCT_SET(BgL_res3977z00_2796, BgL_auxz00_5396, BgL_auxz00_5398);
					}}
					return BgL_res3977z00_2796;
				}
			}
		}
	}



/* struct+object->objec4376 */
	obj_t BGl_structzb2objectzd2ze3objec4376z83zzsaw_node2rtlz00(obj_t
		BgL_envz00_4347, obj_t BgL_oz00_4348, obj_t BgL_sz00_4349)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			{
				BgL_reversedz00_bglt BgL_oz00_2782;

				obj_t BgL_sz00_2783;

				{	/* SawMill/node2rtl.scm 15 */
					BgL_reversedz00_bglt BgL_auxz00_5402;

					BgL_oz00_2782 = (BgL_reversedz00_bglt) (BgL_oz00_4348);
					BgL_sz00_2783 = BgL_sz00_4349;
					{

						{	/* SawMill/node2rtl.scm 15 */
							obj_t BgL_old4001z00_2786;

							{	/* SawMill/node2rtl.scm 15 */
								obj_t BgL_nextzd2method4375zd2_2791;

								BgL_nextzd2method4375zd2_2791 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2782),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_reversedz00zzsaw_node2rtlz00);
								if (PROCEDUREP(BgL_nextzd2method4375zd2_2791))
									{	/* SawMill/node2rtl.scm 15 */
										BgL_old4001z00_2786 =
											PROCEDURE_ENTRY(BgL_nextzd2method4375zd2_2791)
											(BgL_nextzd2method4375zd2_2791, (obj_t) (BgL_oz00_2782),
											BgL_sz00_2783, BEOA);
									}
								else
									{	/* SawMill/node2rtl.scm 15 */
										BgL_old4001z00_2786 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2782), BgL_sz00_2783));
									}
							}
							{	/* SawMill/node2rtl.scm 15 */
								BgL_reversedz00_bglt BgL_new4003z00_2788;

								BgL_new4003z00_2788 =
									((BgL_reversedz00_bglt) (BgL_old4001z00_2786));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4003z00_2788),
									BGl_classzd2numzd2zz__objectz00
									(BGl_reversedz00zzsaw_node2rtlz00));
								{	/* SawMill/node2rtl.scm 15 */
									BgL_reversedz00_bglt BgL_arg5078z00_2790;

									BgL_arg5078z00_2790 =
										BGl_wideningzd2reversedzd2zzsaw_node2rtlz00();
									{	/* SawMill/node2rtl.scm 15 */
										obj_t BgL_auxz00_5420;

										BgL_objectz00_bglt BgL_auxz00_5418;

										BgL_auxz00_5420 = (obj_t) (BgL_arg5078z00_2790);
										BgL_auxz00_5418 =
											(BgL_objectz00_bglt) (BgL_new4003z00_2788);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5418, BgL_auxz00_5420);
									}
								}
								BgL_auxz00_5402 = BgL_new4003z00_2788;
							}
						}
					}
					return (obj_t) (BgL_auxz00_5402);
				}
			}
		}
	}



/* object->struct-rever4374 */
	obj_t BGl_objectzd2ze3structzd2rever4374ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4350, obj_t BgL_obj3998z00_4351)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 15 */
			{
				BgL_reversedz00_bglt BgL_obj3998z00_2774;

				BgL_obj3998z00_2774 = (BgL_reversedz00_bglt) (BgL_obj3998z00_4351);
				{

					{	/* SawMill/node2rtl.scm 15 */
						obj_t BgL_res3999z00_2777;

						{	/* SawMill/node2rtl.scm 15 */
							obj_t BgL_nextzd2method4373zd2_2780;

							BgL_nextzd2method4373zd2_2780 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3998z00_2774),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_reversedz00zzsaw_node2rtlz00);
							if (PROCEDUREP(BgL_nextzd2method4373zd2_2780))
								{	/* SawMill/node2rtl.scm 15 */
									BgL_res3999z00_2777 =
										PROCEDURE_ENTRY(BgL_nextzd2method4373zd2_2780)
										(BgL_nextzd2method4373zd2_2780,
										(obj_t) (BgL_obj3998z00_2774), BEOA);
								}
							else
								{	/* SawMill/node2rtl.scm 15 */
									BgL_res3999z00_2777 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3998z00_2774));
								}
						}
						{	/* SawMill/node2rtl.scm 15 */
							obj_t BgL_aux4000z00_2778;

							{	/* SawMill/node2rtl.scm 15 */
								obj_t BgL_keyz00_4236;

								BgL_keyz00_4236 = CNST_TABLE_REF(((long) 5));
								BgL_aux4000z00_2778 =
									make_struct(BgL_keyz00_4236, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/node2rtl.scm 15 */
								int BgL_auxz00_5437;

								BgL_auxz00_5437 = (int) (((long) 0));
								STRUCT_SET(BgL_res3999z00_2777, BgL_auxz00_5437,
									BgL_aux4000z00_2778);
							}
							{	/* SawMill/node2rtl.scm 15 */
								obj_t BgL_auxz00_5440;

								BgL_auxz00_5440 = STRUCT_KEY(BgL_res3999z00_2777);
								STRUCT_KEY_SET(BgL_aux4000z00_2778, BgL_auxz00_5440);
							}
							{	/* SawMill/node2rtl.scm 15 */
								obj_t BgL_kz00_4247;

								BgL_kz00_4247 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res3999z00_2777, BgL_kz00_4247);
							}
							return BgL_res3999z00_2777;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4372 */
	obj_t BGl_structzb2objectzd2ze3objec4372z83zzsaw_node2rtlz00(obj_t
		BgL_envz00_4352, obj_t BgL_oz00_4353, obj_t BgL_sz00_4354)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 16 */
			{
				BgL_rlocalz00_bglt BgL_oz00_2761;

				obj_t BgL_sz00_2762;

				{	/* SawMill/node2rtl.scm 16 */
					BgL_rlocalz00_bglt BgL_auxz00_5446;

					BgL_oz00_2761 = (BgL_rlocalz00_bglt) (BgL_oz00_4353);
					BgL_sz00_2762 = BgL_sz00_4354;
					{

						{	/* SawMill/node2rtl.scm 16 */
							obj_t BgL_old4047z00_2765;

							obj_t BgL_aux4048z00_2766;

							{	/* SawMill/node2rtl.scm 16 */
								obj_t BgL_nextzd2method4371zd2_2772;

								BgL_nextzd2method4371zd2_2772 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2761),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_rlocalz00zzsaw_node2rtlz00);
								if (PROCEDUREP(BgL_nextzd2method4371zd2_2772))
									{	/* SawMill/node2rtl.scm 16 */
										BgL_old4047z00_2765 =
											PROCEDURE_ENTRY(BgL_nextzd2method4371zd2_2772)
											(BgL_nextzd2method4371zd2_2772, (obj_t) (BgL_oz00_2761),
											BgL_sz00_2762, BEOA);
									}
								else
									{	/* SawMill/node2rtl.scm 16 */
										BgL_old4047z00_2765 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2761), BgL_sz00_2762));
									}
							}
							BgL_aux4048z00_2766 =
								STRUCT_REF(BgL_sz00_2762, (int) (((long) 0)));
							{	/* SawMill/node2rtl.scm 16 */
								BgL_rlocalz00_bglt BgL_new4049z00_2767;

								BgL_new4049z00_2767 =
									((BgL_rlocalz00_bglt) (BgL_old4047z00_2765));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4049z00_2767),
									BGl_classzd2numzd2zz__objectz00
									(BGl_rlocalz00zzsaw_node2rtlz00));
								{	/* SawMill/node2rtl.scm 16 */
									BgL_rlocalz00_bglt BgL_arg5071z00_2769;

									{	/* SawMill/node2rtl.scm 16 */
										obj_t BgL_arg5072z00_2770;

										obj_t BgL_arg5073z00_2771;

										BgL_arg5072z00_2770 =
											STRUCT_REF(BgL_aux4048z00_2766, (int) (((long) 0)));
										BgL_arg5073z00_2771 =
											STRUCT_REF(BgL_aux4048z00_2766, (int) (((long) 1)));
										{	/* SawMill/node2rtl.scm 16 */
											BgL_rlocalz00_bglt BgL_res5183z00_4234;

											{	/* SawMill/node2rtl.scm 16 */
												BgL_rlocalz00_bglt BgL_new4020z00_4227;

												BgL_new4020z00_4227 =
													((BgL_rlocalz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_rlocalz00_bgl))));
												{	/* SawMill/node2rtl.scm 16 */
													BgL_rlocalz00_bglt BgL_res5182z00_4233;

													{	/* SawMill/node2rtl.scm 16 */
														BgL_rlocalz00_bglt BgL_new4038z00_4228;

														BgL_new4038z00_4228 = BgL_new4020z00_4227;
														{	/* SawMill/node2rtl.scm 16 */
															obj_t BgL_reg4036z00_4231;

															obj_t BgL_code4037z00_4232;

															BgL_reg4036z00_4231 = BgL_arg5072z00_2770;
															BgL_code4037z00_4232 = BgL_arg5073z00_2771;
															((((BgL_rlocalz00_bglt)
																		CREF(BgL_new4038z00_4228))->BgL_regz00) =
																((obj_t) BgL_reg4036z00_4231), BUNSPEC);
															((((BgL_rlocalz00_bglt)
																		CREF(BgL_new4038z00_4228))->BgL_codez00) =
																((obj_t) BgL_code4037z00_4232), BUNSPEC);
															BgL_res5182z00_4233 = BgL_new4038z00_4228;
													}} BgL_res5182z00_4233;
												}
												BgL_res5183z00_4234 = BgL_new4020z00_4227;
											}
											BgL_arg5071z00_2769 = BgL_res5183z00_4234;
									}}
									{	/* SawMill/node2rtl.scm 16 */
										obj_t BgL_auxz00_5472;

										BgL_objectz00_bglt BgL_auxz00_5470;

										BgL_auxz00_5472 = (obj_t) (BgL_arg5071z00_2769);
										BgL_auxz00_5470 =
											(BgL_objectz00_bglt) (BgL_new4049z00_2767);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5470, BgL_auxz00_5472);
								}}
								BgL_auxz00_5446 = BgL_new4049z00_2767;
					}}}
					return (obj_t) (BgL_auxz00_5446);
				}
			}
		}
	}



/* object->struct-rloca4370 */
	obj_t BGl_objectzd2ze3structzd2rloca4370ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4355, obj_t BgL_obj4044z00_4356)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 16 */
			{
				BgL_rlocalz00_bglt BgL_obj4044z00_2749;

				BgL_obj4044z00_2749 = (BgL_rlocalz00_bglt) (BgL_obj4044z00_4356);
				{

					{	/* SawMill/node2rtl.scm 16 */
						obj_t BgL_res4045z00_2752;

						{	/* SawMill/node2rtl.scm 16 */
							obj_t BgL_nextzd2method4369zd2_2759;

							BgL_nextzd2method4369zd2_2759 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4044z00_2749),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_rlocalz00zzsaw_node2rtlz00);
							if (PROCEDUREP(BgL_nextzd2method4369zd2_2759))
								{	/* SawMill/node2rtl.scm 16 */
									BgL_res4045z00_2752 =
										PROCEDURE_ENTRY(BgL_nextzd2method4369zd2_2759)
										(BgL_nextzd2method4369zd2_2759,
										(obj_t) (BgL_obj4044z00_2749), BEOA);
								}
							else
								{	/* SawMill/node2rtl.scm 16 */
									BgL_res4045z00_2752 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4044z00_2749));
								}
						}
						{	/* SawMill/node2rtl.scm 16 */
							obj_t BgL_aux4046z00_2753;

							{	/* SawMill/node2rtl.scm 16 */
								obj_t BgL_keyz00_4196;

								BgL_keyz00_4196 = CNST_TABLE_REF(((long) 6));
								BgL_aux4046z00_2753 =
									make_struct(BgL_keyz00_4196, (int) (((long) 2)), BUNSPEC);
							}
							{	/* SawMill/node2rtl.scm 16 */
								obj_t BgL_arg5065z00_2755;

								{
									obj_t BgL_auxz00_5489;

									{	/* SawMill/node2rtl.scm 16 */
										BgL_objectz00_bglt BgL_auxz00_5490;

										BgL_auxz00_5490 =
											(BgL_objectz00_bglt) (BgL_obj4044z00_2749);
										BgL_auxz00_5489 = BGL_OBJECT_WIDENING(BgL_auxz00_5490);
									}
									BgL_arg5065z00_2755 =
										(((BgL_rlocalz00_bglt) CREF(BgL_auxz00_5489))->BgL_regz00);
								}
								{	/* SawMill/node2rtl.scm 16 */
									int BgL_auxz00_5494;

									BgL_auxz00_5494 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4046z00_2753, BgL_auxz00_5494,
										BgL_arg5065z00_2755);
							}}
							{	/* SawMill/node2rtl.scm 16 */
								obj_t BgL_arg5067z00_2757;

								{
									obj_t BgL_auxz00_5497;

									{	/* SawMill/node2rtl.scm 16 */
										BgL_objectz00_bglt BgL_auxz00_5498;

										BgL_auxz00_5498 =
											(BgL_objectz00_bglt) (BgL_obj4044z00_2749);
										BgL_auxz00_5497 = BGL_OBJECT_WIDENING(BgL_auxz00_5498);
									}
									BgL_arg5067z00_2757 =
										(((BgL_rlocalz00_bglt) CREF(BgL_auxz00_5497))->BgL_codez00);
								}
								{	/* SawMill/node2rtl.scm 16 */
									int BgL_auxz00_5502;

									BgL_auxz00_5502 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4046z00_2753, BgL_auxz00_5502,
										BgL_arg5067z00_2757);
							}}
							{	/* SawMill/node2rtl.scm 16 */
								int BgL_auxz00_5505;

								BgL_auxz00_5505 = (int) (((long) 0));
								STRUCT_SET(BgL_res4045z00_2752, BgL_auxz00_5505,
									BgL_aux4046z00_2753);
							}
							{	/* SawMill/node2rtl.scm 16 */
								obj_t BgL_auxz00_5508;

								BgL_auxz00_5508 = STRUCT_KEY(BgL_res4045z00_2752);
								STRUCT_KEY_SET(BgL_aux4046z00_2753, BgL_auxz00_5508);
							}
							{	/* SawMill/node2rtl.scm 16 */
								obj_t BgL_kz00_4215;

								BgL_kz00_4215 = CNST_TABLE_REF(((long) 6));
								STRUCT_KEY_SET(BgL_res4045z00_2752, BgL_kz00_4215);
							}
							return BgL_res4045z00_2752;
						}
					}
				}
			}
		}
	}



/* predicate-let-var4368 */
	obj_t BGl_predicatezd2letzd2var4368z00zzsaw_node2rtlz00(obj_t BgL_envz00_4357,
		obj_t BgL_ez00_4358, obj_t BgL_lz00_4359)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 454 */
			{
				BgL_letzd2varzd2_bglt BgL_ez00_2700;

				obj_t BgL_lz00_2701;

				{	/* SawMill/node2rtl.scm 456 */
					BgL_areaz00_bglt BgL_auxz00_5514;

					BgL_ez00_2700 = (BgL_letzd2varzd2_bglt) (BgL_ez00_4358);
					BgL_lz00_2701 = BgL_lz00_4359;
					{	/* SawMill/node2rtl.scm 458 */
						bool_t BgL_testz00_5515;

						if (NULLP(
								(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
									BgL_bindingsz00)))
							{	/* SawMill/node2rtl.scm 458 */
								BgL_testz00_5515 = ((bool_t) 0);
							}
						else
							{	/* SawMill/node2rtl.scm 459 */
								bool_t BgL_testz00_5519;

								{	/* SawMill/node2rtl.scm 459 */
									obj_t BgL_auxz00_5520;

									{	/* SawMill/node2rtl.scm 459 */
										obj_t BgL_pairz00_4086;

										BgL_pairz00_4086 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
											BgL_bindingsz00);
										BgL_auxz00_5520 = CDR(BgL_pairz00_4086);
									}
									BgL_testz00_5519 = NULLP(BgL_auxz00_5520);
								}
								if (BgL_testz00_5519)
									{	/* SawMill/node2rtl.scm 460 */
										bool_t BgL_testz00_5524;

										{	/* SawMill/node2rtl.scm 460 */
											BgL_nodez00_bglt BgL_arg5059z00_2743;

											BgL_arg5059z00_2743 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
												BgL_bodyz00);
											{	/* SawMill/node2rtl.scm 460 */
												obj_t BgL_obj2170z00_4089;

												BgL_obj2170z00_4089 = (obj_t) (BgL_arg5059z00_2743);
												BgL_testz00_5524 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_4089,
													BGl_varz00zzast_nodez00);
											}
										}
										if (BgL_testz00_5524)
											{	/* SawMill/node2rtl.scm 461 */
												obj_t BgL_auxz00_5532;

												obj_t BgL_auxz00_5528;

												{	/* SawMill/node2rtl.scm 461 */
													BgL_variablez00_bglt BgL_auxz00_5533;

													{	/* SawMill/node2rtl.scm 461 */
														BgL_varz00_bglt BgL_obj2155z00_4096;

														BgL_obj2155z00_4096 =
															(BgL_varz00_bglt) (
															(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
																BgL_bodyz00));
														BgL_auxz00_5533 =
															(((BgL_varz00_bglt) CREF(BgL_obj2155z00_4096))->
															BgL_variablez00);
													}
													BgL_auxz00_5532 = (obj_t) (BgL_auxz00_5533);
												}
												{	/* SawMill/node2rtl.scm 461 */
													obj_t BgL_pairz00_4091;

													BgL_pairz00_4091 =
														(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
														BgL_bindingsz00);
													BgL_auxz00_5528 = CAR(CAR(BgL_pairz00_4091));
												}
												BgL_testz00_5515 = (BgL_auxz00_5528 == BgL_auxz00_5532);
											}
										else
											{	/* SawMill/node2rtl.scm 460 */
												BgL_testz00_5515 = ((bool_t) 0);
											}
									}
								else
									{	/* SawMill/node2rtl.scm 459 */
										BgL_testz00_5515 = ((bool_t) 0);
									}
							}
						if (BgL_testz00_5515)
							{	/* SawMill/node2rtl.scm 463 */
								obj_t BgL_arg5022z00_2706;

								{	/* SawMill/node2rtl.scm 463 */
									obj_t BgL_pairz00_4098;

									BgL_pairz00_4098 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
										BgL_bindingsz00);
									BgL_arg5022z00_2706 = CDR(CAR(BgL_pairz00_4098));
								}
								{	/* SawMill/node2rtl.scm 463 */
									BgL_areaz00_bglt BgL_res5177z00_4129;

									{	/* SawMill/node2rtl.scm 463 */
										BgL_nodez00_bglt BgL_ez00_4102;

										BgL_ez00_4102 = (BgL_nodez00_bglt) (BgL_arg5022z00_2706);
										{	/* SawMill/node2rtl.scm 463 */
											obj_t BgL_method4361z00_4104;

											{	/* SawMill/node2rtl.scm 463 */
												BgL_objectz00_bglt BgL_objz00_4105;

												BgL_objz00_4105 = (BgL_objectz00_bglt) (BgL_ez00_4102);
												{	/* SawMill/node2rtl.scm 463 */
													long BgL_objzd2classzd2numz00_4106;

													BgL_objzd2classzd2numz00_4106 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_4105);
													{	/* SawMill/node2rtl.scm 463 */
														obj_t BgL_arg2643z00_4107;

														BgL_arg2643z00_4107 =
															PROCEDURE_REF
															(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
															(int) (((long) 1)));
														{	/* SawMill/node2rtl.scm 463 */
															obj_t BgL_arrayz00_4109;

															int BgL_offsetz00_4110;

															BgL_arrayz00_4109 = BgL_arg2643z00_4107;
															BgL_offsetz00_4110 =
																(int) (BgL_objzd2classzd2numz00_4106);
															{	/* SawMill/node2rtl.scm 463 */
																long BgL_offsetz00_4111;

																BgL_offsetz00_4111 =
																	((long) (BgL_offsetz00_4110) - OBJECT_TYPE);
																{	/* SawMill/node2rtl.scm 463 */
																	long BgL_modz00_4112;

																	{	/* SawMill/node2rtl.scm 463 */
																		int BgL_arg2645z00_4113;

																		BgL_arg2645z00_4113 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 463 */
																			long BgL_auxz00_5551;

																			BgL_auxz00_5551 =
																				(long) (BgL_arg2645z00_4113);
																			BgL_modz00_4112 =
																				(BgL_offsetz00_4111 / BgL_auxz00_5551);
																	}}
																	{	/* SawMill/node2rtl.scm 463 */
																		long BgL_restz00_4114;

																		{	/* SawMill/node2rtl.scm 463 */
																			int BgL_arg2644z00_4115;

																			BgL_arg2644z00_4115 = (int) (((long) 16));
																			{	/* SawMill/node2rtl.scm 463 */
																				long BgL_auxz00_5555;

																				BgL_auxz00_5555 =
																					(long) (BgL_arg2644z00_4115);
																				BgL_restz00_4114 =
																					(BgL_offsetz00_4111 %
																					BgL_auxz00_5555);
																		}}
																		{	/* SawMill/node2rtl.scm 463 */

																			BgL_method4361z00_4104 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_4109,
																					(int) (BgL_modz00_4112)),
																				(int) (BgL_restz00_4114));
											}}}}}}}}
											BgL_res5177z00_4129 =
												(BgL_areaz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4361z00_4104) (BgL_method4361z00_4104,
													(obj_t) (BgL_ez00_4102), BgL_lz00_2701, BEOA));
									}}
									BgL_auxz00_5514 = BgL_res5177z00_4129;
							}}
						else
							{	/* SawMill/node2rtl.scm 464 */
								bool_t BgL_testz00_5566;

								{	/* SawMill/node2rtl.scm 464 */
									bool_t BgL_testz00_5567;

									{	/* SawMill/node2rtl.scm 464 */
										BgL_nodez00_bglt BgL_arg5051z00_2735;

										BgL_arg5051z00_2735 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
											BgL_bodyz00);
										{	/* SawMill/node2rtl.scm 464 */
											obj_t BgL_obj2945z00_4131;

											BgL_obj2945z00_4131 = (obj_t) (BgL_arg5051z00_2735);
											BgL_testz00_5567 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj2945z00_4131,
												BGl_conditionalz00zzast_nodez00);
										}
									}
									if (BgL_testz00_5567)
										{	/* SawMill/node2rtl.scm 464 */
											if (NULLP(
													(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
														BgL_bindingsz00)))
												{	/* SawMill/node2rtl.scm 465 */
													BgL_testz00_5566 = ((bool_t) 0);
												}
											else
												{	/* SawMill/node2rtl.scm 466 */
													bool_t BgL_testz00_5574;

													{	/* SawMill/node2rtl.scm 466 */
														obj_t BgL_auxz00_5575;

														{	/* SawMill/node2rtl.scm 466 */
															obj_t BgL_pairz00_4135;

															BgL_pairz00_4135 =
																(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
																BgL_bindingsz00);
															BgL_auxz00_5575 = CDR(BgL_pairz00_4135);
														}
														BgL_testz00_5574 = NULLP(BgL_auxz00_5575);
													}
													if (BgL_testz00_5574)
														{	/* SawMill/node2rtl.scm 467 */
															bool_t BgL_testz00_5579;

															{	/* SawMill/node2rtl.scm 467 */
																BgL_nodez00_bglt BgL_arg5046z00_2730;

																{	/* SawMill/node2rtl.scm 467 */
																	BgL_conditionalz00_bglt BgL_obj2912z00_4138;

																	BgL_obj2912z00_4138 =
																		(BgL_conditionalz00_bglt) (
																		(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_ez00_2700))->BgL_bodyz00));
																	BgL_arg5046z00_2730 =
																		(((BgL_conditionalz00_bglt)
																			CREF(BgL_obj2912z00_4138))->BgL_testz00);
																}
																{	/* SawMill/node2rtl.scm 467 */
																	obj_t BgL_obj2170z00_4139;

																	BgL_obj2170z00_4139 =
																		(obj_t) (BgL_arg5046z00_2730);
																	BgL_testz00_5579 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2170z00_4139,
																		BGl_varz00zzast_nodez00);
																}
															}
															if (BgL_testz00_5579)
																{	/* SawMill/node2rtl.scm 468 */
																	bool_t BgL_testz00_5585;

																	{	/* SawMill/node2rtl.scm 468 */
																		long BgL_auxz00_5586;

																		{	/* SawMill/node2rtl.scm 468 */
																			BgL_variablez00_bglt BgL_obj1623z00_4145;

																			{	/* SawMill/node2rtl.scm 468 */
																				obj_t BgL_auxz00_5587;

																				{	/* SawMill/node2rtl.scm 468 */
																					obj_t BgL_pairz00_4141;

																					BgL_pairz00_4141 =
																						(((BgL_letzd2varzd2_bglt)
																							CREF(BgL_ez00_2700))->
																						BgL_bindingsz00);
																					BgL_auxz00_5587 =
																						CAR(CAR(BgL_pairz00_4141));
																				}
																				BgL_obj1623z00_4145 =
																					(BgL_variablez00_bglt)
																					(BgL_auxz00_5587);
																			}
																			BgL_auxz00_5586 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_obj1623z00_4145))->
																				BgL_occurrencez00);
																		}
																		BgL_testz00_5585 =
																			(((long) 1) == BgL_auxz00_5586);
																	}
																	if (BgL_testz00_5585)
																		{	/* SawMill/node2rtl.scm 469 */
																			obj_t BgL_auxz00_5598;

																			obj_t BgL_auxz00_5594;

																			{	/* SawMill/node2rtl.scm 469 */
																				BgL_variablez00_bglt BgL_auxz00_5599;

																				{	/* SawMill/node2rtl.scm 469 */
																					BgL_varz00_bglt BgL_obj2155z00_4155;

																					{	/* SawMill/node2rtl.scm 469 */
																						BgL_nodez00_bglt BgL_auxz00_5600;

																						{	/* SawMill/node2rtl.scm 469 */
																							BgL_conditionalz00_bglt
																								BgL_obj2912z00_4154;
																							BgL_obj2912z00_4154 =
																								(BgL_conditionalz00_bglt) (((
																										(BgL_letzd2varzd2_bglt)
																										CREF(BgL_ez00_2700))->
																									BgL_bodyz00));
																							BgL_auxz00_5600 =
																								(((BgL_conditionalz00_bglt)
																									CREF(BgL_obj2912z00_4154))->
																								BgL_testz00);
																						}
																						BgL_obj2155z00_4155 =
																							(BgL_varz00_bglt)
																							(BgL_auxz00_5600);
																					}
																					BgL_auxz00_5599 =
																						(((BgL_varz00_bglt)
																							CREF(BgL_obj2155z00_4155))->
																						BgL_variablez00);
																				}
																				BgL_auxz00_5598 =
																					(obj_t) (BgL_auxz00_5599);
																			}
																			{	/* SawMill/node2rtl.scm 469 */
																				obj_t BgL_pairz00_4149;

																				BgL_pairz00_4149 =
																					(((BgL_letzd2varzd2_bglt)
																						CREF(BgL_ez00_2700))->
																					BgL_bindingsz00);
																				BgL_auxz00_5594 =
																					CAR(CAR(BgL_pairz00_4149));
																			}
																			BgL_testz00_5566 =
																				(BgL_auxz00_5594 == BgL_auxz00_5598);
																		}
																	else
																		{	/* SawMill/node2rtl.scm 468 */
																			BgL_testz00_5566 = ((bool_t) 0);
																		}
																}
															else
																{	/* SawMill/node2rtl.scm 467 */
																	BgL_testz00_5566 = ((bool_t) 0);
																}
														}
													else
														{	/* SawMill/node2rtl.scm 466 */
															BgL_testz00_5566 = ((bool_t) 0);
														}
												}
										}
									else
										{	/* SawMill/node2rtl.scm 464 */
											BgL_testz00_5566 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_5566)
									{	/* SawMill/node2rtl.scm 464 */
										{	/* SawMill/node2rtl.scm 471 */
											BgL_nodez00_bglt BgL_arg5025z00_2709;

											obj_t BgL_arg5026z00_2710;

											BgL_arg5025z00_2709 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
												BgL_bodyz00);
											{	/* SawMill/node2rtl.scm 471 */
												obj_t BgL_pairz00_4158;

												BgL_pairz00_4158 =
													(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
													BgL_bindingsz00);
												BgL_arg5026z00_2710 = CDR(CAR(BgL_pairz00_4158));
											}
											{
												BgL_nodez00_bglt BgL_auxz00_5614;

												BgL_conditionalz00_bglt BgL_auxz00_5612;

												BgL_auxz00_5614 =
													(BgL_nodez00_bglt) (BgL_arg5026z00_2710);
												BgL_auxz00_5612 =
													(BgL_conditionalz00_bglt) (BgL_arg5025z00_2709);
												((((BgL_conditionalz00_bglt) CREF(BgL_auxz00_5612))->
														BgL_testz00) =
													((BgL_nodez00_bglt) BgL_auxz00_5614), BUNSPEC);
											}
										}
										{	/* SawMill/node2rtl.scm 472 */
											BgL_nodez00_bglt BgL_arg5028z00_2712;

											BgL_arg5028z00_2712 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2700))->
												BgL_bodyz00);
											{	/* SawMill/node2rtl.scm 472 */
												BgL_areaz00_bglt BgL_res5180z00_4192;

												{	/* SawMill/node2rtl.scm 472 */
													obj_t BgL_method4361z00_4167;

													{	/* SawMill/node2rtl.scm 472 */
														BgL_objectz00_bglt BgL_objz00_4168;

														BgL_objz00_4168 =
															(BgL_objectz00_bglt) (BgL_arg5028z00_2712);
														{	/* SawMill/node2rtl.scm 472 */
															long BgL_objzd2classzd2numz00_4169;

															BgL_objzd2classzd2numz00_4169 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_4168);
															{	/* SawMill/node2rtl.scm 472 */
																obj_t BgL_arg2643z00_4170;

																BgL_arg2643z00_4170 =
																	PROCEDURE_REF
																	(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
																	(int) (((long) 1)));
																{	/* SawMill/node2rtl.scm 472 */
																	obj_t BgL_arrayz00_4172;

																	int BgL_offsetz00_4173;

																	BgL_arrayz00_4172 = BgL_arg2643z00_4170;
																	BgL_offsetz00_4173 =
																		(int) (BgL_objzd2classzd2numz00_4169);
																	{	/* SawMill/node2rtl.scm 472 */
																		long BgL_offsetz00_4174;

																		BgL_offsetz00_4174 =
																			(
																			(long) (BgL_offsetz00_4173) -
																			OBJECT_TYPE);
																		{	/* SawMill/node2rtl.scm 472 */
																			long BgL_modz00_4175;

																			{	/* SawMill/node2rtl.scm 472 */
																				int BgL_arg2645z00_4176;

																				BgL_arg2645z00_4176 =
																					(int) (((long) 16));
																				{	/* SawMill/node2rtl.scm 472 */
																					long BgL_auxz00_5626;

																					BgL_auxz00_5626 =
																						(long) (BgL_arg2645z00_4176);
																					BgL_modz00_4175 =
																						(BgL_offsetz00_4174 /
																						BgL_auxz00_5626);
																			}}
																			{	/* SawMill/node2rtl.scm 472 */
																				long BgL_restz00_4177;

																				{	/* SawMill/node2rtl.scm 472 */
																					int BgL_arg2644z00_4178;

																					BgL_arg2644z00_4178 =
																						(int) (((long) 16));
																					{	/* SawMill/node2rtl.scm 472 */
																						long BgL_auxz00_5630;

																						BgL_auxz00_5630 =
																							(long) (BgL_arg2644z00_4178);
																						BgL_restz00_4177 =
																							(BgL_offsetz00_4174 %
																							BgL_auxz00_5630);
																				}}
																				{	/* SawMill/node2rtl.scm 472 */

																					BgL_method4361z00_4167 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_4172,
																							(int) (BgL_modz00_4175)),
																						(int) (BgL_restz00_4177));
													}}}}}}}}
													BgL_res5180z00_4192 =
														(BgL_areaz00_bglt) (PROCEDURE_ENTRY
														(BgL_method4361z00_4167) (BgL_method4361z00_4167,
															(obj_t) (BgL_arg5028z00_2712), BgL_lz00_2701,
															BEOA));
												}
												BgL_auxz00_5514 = BgL_res5180z00_4192;
									}}}
								else
									{	/* SawMill/node2rtl.scm 474 */
										BgL_areaz00_bglt BgL_arg5029z00_2713;

										{	/* SawMill/node2rtl.scm 474 */
											BgL_rtl_ifz00_bglt BgL_arg5030z00_2714;

											BgL_arg5030z00_2714 =
												BGl_makezd2rtl_ifzd2zzsaw_defsz00(BFALSE);
											{	/* SawMill/node2rtl.scm 474 */
												obj_t BgL_list5031z00_2715;

												BgL_list5031z00_2715 =
													MAKE_PAIR((obj_t) (BgL_ez00_2700), BNIL);
												BgL_arg5029z00_2713 =
													BGl_callza2za2zzsaw_node2rtlz00(
													(obj_t) (BgL_ez00_2700),
													(BgL_rtl_funz00_bglt) (BgL_arg5030z00_2714),
													BgL_list5031z00_2715);
											}
										}
										BgL_auxz00_5514 =
											BGl_forkz00zzsaw_node2rtlz00(BgL_arg5029z00_2713,
											BgL_lz00_2701);
									}
							}
					}
					return (obj_t) (BgL_auxz00_5514);
				}
			}
		}
	}



/* predicate-conditiona4365 */
	obj_t BGl_predicatezd2conditiona4365zd2zzsaw_node2rtlz00(obj_t
		BgL_envz00_4360, obj_t BgL_ez00_4361, obj_t BgL_lz00_4362)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 449 */
			{
				BgL_conditionalz00_bglt BgL_ez00_2685;

				obj_t BgL_lz00_2686;

				{	/* SawMill/node2rtl.scm 450 */
					BgL_areaz00_bglt BgL_auxz00_5650;

					BgL_ez00_2685 = (BgL_conditionalz00_bglt) (BgL_ez00_4361);
					BgL_lz00_2686 = BgL_lz00_4362;
					{	/* SawMill/node2rtl.scm 451 */
						BgL_nodez00_bglt BgL_arg5012z00_2690;

						obj_t BgL_arg5013z00_2691;

						BgL_arg5012z00_2690 =
							(((BgL_conditionalz00_bglt) CREF(BgL_ez00_2685))->BgL_testz00);
						{	/* SawMill/node2rtl.scm 451 */
							BgL_areaz00_bglt BgL_arg5014z00_2692;

							BgL_areaz00_bglt BgL_arg5015z00_2693;

							{	/* SawMill/node2rtl.scm 451 */
								BgL_nodez00_bglt BgL_arg5018z00_2696;

								BgL_arg5018z00_2696 =
									(((BgL_conditionalz00_bglt) CREF(BgL_ez00_2685))->
									BgL_truez00);
								{	/* SawMill/node2rtl.scm 451 */
									BgL_areaz00_bglt BgL_res5167z00_4023;

									{	/* SawMill/node2rtl.scm 451 */
										obj_t BgL_method4361z00_3998;

										{	/* SawMill/node2rtl.scm 451 */
											BgL_objectz00_bglt BgL_objz00_3999;

											BgL_objz00_3999 =
												(BgL_objectz00_bglt) (BgL_arg5018z00_2696);
											{	/* SawMill/node2rtl.scm 451 */
												long BgL_objzd2classzd2numz00_4000;

												BgL_objzd2classzd2numz00_4000 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3999);
												{	/* SawMill/node2rtl.scm 451 */
													obj_t BgL_arg2643z00_4001;

													BgL_arg2643z00_4001 =
														PROCEDURE_REF
														(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
														(int) (((long) 1)));
													{	/* SawMill/node2rtl.scm 451 */
														obj_t BgL_arrayz00_4003;

														int BgL_offsetz00_4004;

														BgL_arrayz00_4003 = BgL_arg2643z00_4001;
														BgL_offsetz00_4004 =
															(int) (BgL_objzd2classzd2numz00_4000);
														{	/* SawMill/node2rtl.scm 451 */
															long BgL_offsetz00_4005;

															BgL_offsetz00_4005 =
																((long) (BgL_offsetz00_4004) - OBJECT_TYPE);
															{	/* SawMill/node2rtl.scm 451 */
																long BgL_modz00_4006;

																{	/* SawMill/node2rtl.scm 451 */
																	int BgL_arg2645z00_4007;

																	BgL_arg2645z00_4007 = (int) (((long) 16));
																	{	/* SawMill/node2rtl.scm 451 */
																		long BgL_auxz00_5661;

																		BgL_auxz00_5661 =
																			(long) (BgL_arg2645z00_4007);
																		BgL_modz00_4006 =
																			(BgL_offsetz00_4005 / BgL_auxz00_5661);
																}}
																{	/* SawMill/node2rtl.scm 451 */
																	long BgL_restz00_4008;

																	{	/* SawMill/node2rtl.scm 451 */
																		int BgL_arg2644z00_4009;

																		BgL_arg2644z00_4009 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 451 */
																			long BgL_auxz00_5665;

																			BgL_auxz00_5665 =
																				(long) (BgL_arg2644z00_4009);
																			BgL_restz00_4008 =
																				(BgL_offsetz00_4005 % BgL_auxz00_5665);
																	}}
																	{	/* SawMill/node2rtl.scm 451 */

																		BgL_method4361z00_3998 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_4003,
																				(int) (BgL_modz00_4006)),
																			(int) (BgL_restz00_4008));
										}}}}}}}}
										BgL_res5167z00_4023 =
											(BgL_areaz00_bglt) (PROCEDURE_ENTRY
											(BgL_method4361z00_3998) (BgL_method4361z00_3998,
												(obj_t) (BgL_arg5018z00_2696), BgL_lz00_2686, BEOA));
									}
									BgL_arg5014z00_2692 = BgL_res5167z00_4023;
							}}
							{	/* SawMill/node2rtl.scm 451 */
								BgL_nodez00_bglt BgL_arg5019z00_2697;

								BgL_arg5019z00_2697 =
									(((BgL_conditionalz00_bglt) CREF(BgL_ez00_2685))->
									BgL_falsez00);
								{	/* SawMill/node2rtl.scm 451 */
									BgL_areaz00_bglt BgL_res5170z00_4052;

									{	/* SawMill/node2rtl.scm 451 */
										obj_t BgL_method4361z00_4027;

										{	/* SawMill/node2rtl.scm 451 */
											BgL_objectz00_bglt BgL_objz00_4028;

											BgL_objz00_4028 =
												(BgL_objectz00_bglt) (BgL_arg5019z00_2697);
											{	/* SawMill/node2rtl.scm 451 */
												long BgL_objzd2classzd2numz00_4029;

												BgL_objzd2classzd2numz00_4029 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_4028);
												{	/* SawMill/node2rtl.scm 451 */
													obj_t BgL_arg2643z00_4030;

													BgL_arg2643z00_4030 =
														PROCEDURE_REF
														(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
														(int) (((long) 1)));
													{	/* SawMill/node2rtl.scm 451 */
														obj_t BgL_arrayz00_4032;

														int BgL_offsetz00_4033;

														BgL_arrayz00_4032 = BgL_arg2643z00_4030;
														BgL_offsetz00_4033 =
															(int) (BgL_objzd2classzd2numz00_4029);
														{	/* SawMill/node2rtl.scm 451 */
															long BgL_offsetz00_4034;

															BgL_offsetz00_4034 =
																((long) (BgL_offsetz00_4033) - OBJECT_TYPE);
															{	/* SawMill/node2rtl.scm 451 */
																long BgL_modz00_4035;

																{	/* SawMill/node2rtl.scm 451 */
																	int BgL_arg2645z00_4036;

																	BgL_arg2645z00_4036 = (int) (((long) 16));
																	{	/* SawMill/node2rtl.scm 451 */
																		long BgL_auxz00_5685;

																		BgL_auxz00_5685 =
																			(long) (BgL_arg2645z00_4036);
																		BgL_modz00_4035 =
																			(BgL_offsetz00_4034 / BgL_auxz00_5685);
																}}
																{	/* SawMill/node2rtl.scm 451 */
																	long BgL_restz00_4037;

																	{	/* SawMill/node2rtl.scm 451 */
																		int BgL_arg2644z00_4038;

																		BgL_arg2644z00_4038 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 451 */
																			long BgL_auxz00_5689;

																			BgL_auxz00_5689 =
																				(long) (BgL_arg2644z00_4038);
																			BgL_restz00_4037 =
																				(BgL_offsetz00_4034 % BgL_auxz00_5689);
																	}}
																	{	/* SawMill/node2rtl.scm 451 */

																		BgL_method4361z00_4027 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_4032,
																				(int) (BgL_modz00_4035)),
																			(int) (BgL_restz00_4037));
										}}}}}}}}
										BgL_res5170z00_4052 =
											(BgL_areaz00_bglt) (PROCEDURE_ENTRY
											(BgL_method4361z00_4027) (BgL_method4361z00_4027,
												(obj_t) (BgL_arg5019z00_2697), BgL_lz00_2686, BEOA));
									}
									BgL_arg5015z00_2693 = BgL_res5170z00_4052;
							}}
							{	/* SawMill/node2rtl.scm 451 */
								obj_t BgL_list5016z00_2694;

								{	/* SawMill/node2rtl.scm 451 */
									obj_t BgL_arg5017z00_2695;

									BgL_arg5017z00_2695 =
										MAKE_PAIR((obj_t) (BgL_arg5015z00_2693), BNIL);
									BgL_list5016z00_2694 =
										MAKE_PAIR(
										(obj_t) (BgL_arg5014z00_2692), BgL_arg5017z00_2695);
								}
								BgL_arg5013z00_2691 = BgL_list5016z00_2694;
						}}
						{	/* SawMill/node2rtl.scm 451 */
							BgL_areaz00_bglt BgL_res5174z00_4082;

							{	/* SawMill/node2rtl.scm 451 */
								obj_t BgL_method4361z00_4057;

								{	/* SawMill/node2rtl.scm 451 */
									BgL_objectz00_bglt BgL_objz00_4058;

									BgL_objz00_4058 = (BgL_objectz00_bglt) (BgL_arg5012z00_2690);
									{	/* SawMill/node2rtl.scm 451 */
										long BgL_objzd2classzd2numz00_4059;

										BgL_objzd2classzd2numz00_4059 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_4058);
										{	/* SawMill/node2rtl.scm 451 */
											obj_t BgL_arg2643z00_4060;

											BgL_arg2643z00_4060 =
												PROCEDURE_REF(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
												(int) (((long) 1)));
											{	/* SawMill/node2rtl.scm 451 */
												obj_t BgL_arrayz00_4062;

												int BgL_offsetz00_4063;

												BgL_arrayz00_4062 = BgL_arg2643z00_4060;
												BgL_offsetz00_4063 =
													(int) (BgL_objzd2classzd2numz00_4059);
												{	/* SawMill/node2rtl.scm 451 */
													long BgL_offsetz00_4064;

													BgL_offsetz00_4064 =
														((long) (BgL_offsetz00_4063) - OBJECT_TYPE);
													{	/* SawMill/node2rtl.scm 451 */
														long BgL_modz00_4065;

														{	/* SawMill/node2rtl.scm 451 */
															int BgL_arg2645z00_4066;

															BgL_arg2645z00_4066 = (int) (((long) 16));
															{	/* SawMill/node2rtl.scm 451 */
																long BgL_auxz00_5712;

																BgL_auxz00_5712 = (long) (BgL_arg2645z00_4066);
																BgL_modz00_4065 =
																	(BgL_offsetz00_4064 / BgL_auxz00_5712);
														}}
														{	/* SawMill/node2rtl.scm 451 */
															long BgL_restz00_4067;

															{	/* SawMill/node2rtl.scm 451 */
																int BgL_arg2644z00_4068;

																BgL_arg2644z00_4068 = (int) (((long) 16));
																{	/* SawMill/node2rtl.scm 451 */
																	long BgL_auxz00_5716;

																	BgL_auxz00_5716 =
																		(long) (BgL_arg2644z00_4068);
																	BgL_restz00_4067 =
																		(BgL_offsetz00_4064 % BgL_auxz00_5716);
															}}
															{	/* SawMill/node2rtl.scm 451 */

																BgL_method4361z00_4057 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_4062,
																		(int) (BgL_modz00_4065)),
																	(int) (BgL_restz00_4067));
								}}}}}}}}
								BgL_res5174z00_4082 =
									(BgL_areaz00_bglt) (PROCEDURE_ENTRY(BgL_method4361z00_4057)
									(BgL_method4361z00_4057, (obj_t) (BgL_arg5012z00_2690),
										BgL_arg5013z00_2691, BEOA));
							}
							BgL_auxz00_5650 = BgL_res5174z00_4082;
					}}
					return (obj_t) (BgL_auxz00_5650);
				}
			}
		}
	}



/* predicate-atom4363 */
	obj_t BGl_predicatezd2atom4363zd2zzsaw_node2rtlz00(obj_t BgL_envz00_4363,
		obj_t BgL_ez00_4364, obj_t BgL_lz00_4365)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 442 */
			{
				BgL_atomz00_bglt BgL_ez00_2677;

				obj_t BgL_lz00_2678;

				BgL_ez00_2677 = (BgL_atomz00_bglt) (BgL_ez00_4364);
				BgL_lz00_2678 = BgL_lz00_4365;
				if (CBOOL((((BgL_atomz00_bglt) CREF(BgL_ez00_2677))->BgL_valuez00)))
					{	/* SawMill/node2rtl.scm 443 */
						return CAR(BgL_lz00_2678);
					}
				else
					{	/* SawMill/node2rtl.scm 443 */
						obj_t BgL_pairz00_3990;

						BgL_pairz00_3990 = BgL_lz00_2678;
						return CAR(CDR(BgL_pairz00_3990));
					}
			}
		}
	}



/* node->rtl-box-set!4359 */
	obj_t BGl_nodezd2ze3rtlzd2boxzd2setz124359z23zzsaw_node2rtlz00(obj_t
		BgL_envz00_4366, obj_t BgL_ez00_4367)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 430 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_ez00_2662;

				{	/* SawMill/node2rtl.scm 431 */
					BgL_areaz00_bglt BgL_auxz00_5736;

					BgL_ez00_2662 = (BgL_boxzd2setz12zc0_bglt) (BgL_ez00_4367);
					{	/* SawMill/node2rtl.scm 432 */
						BgL_areaz00_bglt BgL_arg5000z00_2666;

						BgL_areaz00_bglt BgL_arg5001z00_2667;

						{	/* SawMill/node2rtl.scm 432 */
							BgL_rtl_boxsetz00_bglt BgL_arg5002z00_2668;

							BgL_varz00_bglt BgL_arg5003z00_2669;

							BgL_nodez00_bglt BgL_arg5004z00_2670;

							BgL_arg5002z00_2668 =
								BGl_makezd2rtl_boxsetzd2zzsaw_defsz00(BFALSE);
							BgL_arg5003z00_2669 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_ez00_2662))->BgL_varz00);
							BgL_arg5004z00_2670 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_ez00_2662))->
								BgL_valuez00);
							{	/* SawMill/node2rtl.scm 432 */
								obj_t BgL_list5005z00_2671;

								{	/* SawMill/node2rtl.scm 432 */
									obj_t BgL_arg5006z00_2672;

									BgL_arg5006z00_2672 =
										MAKE_PAIR((obj_t) (BgL_arg5004z00_2670), BNIL);
									BgL_list5005z00_2671 =
										MAKE_PAIR(
										(obj_t) (BgL_arg5003z00_2669), BgL_arg5006z00_2672);
								}
								BgL_arg5000z00_2666 =
									BGl_callza2za2zzsaw_node2rtlz00(
									(obj_t) (BgL_ez00_2662),
									(BgL_rtl_funz00_bglt) (BgL_arg5002z00_2668),
									BgL_list5005z00_2671);
							}
						}
						{	/* SawMill/node2rtl.scm 433 */
							BgL_rtl_nopz00_bglt BgL_arg5007z00_2673;

							BgL_arg5007z00_2673 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
							BgL_arg5001z00_2667 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								(BgL_rtl_funz00_bglt) (BgL_arg5007z00_2673), BNIL);
						}
						BgL_auxz00_5736 =
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg5000z00_2666,
							BgL_arg5001z00_2667);
					}
					return (obj_t) (BgL_auxz00_5736);
				}
			}
		}
	}



/* node->rtl-box-ref4357 */
	obj_t BGl_nodezd2ze3rtlzd2boxzd2ref4357z31zzsaw_node2rtlz00(obj_t
		BgL_envz00_4368, obj_t BgL_ez00_4369)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 425 */
			{
				BgL_boxzd2refzd2_bglt BgL_ez00_2653;

				{	/* SawMill/node2rtl.scm 426 */
					BgL_areaz00_bglt BgL_auxz00_5753;

					BgL_ez00_2653 = (BgL_boxzd2refzd2_bglt) (BgL_ez00_4369);
					{	/* SawMill/node2rtl.scm 427 */
						BgL_rtl_boxrefz00_bglt BgL_arg4996z00_2657;

						BgL_varz00_bglt BgL_arg4997z00_2658;

						BgL_arg4996z00_2657 = BGl_makezd2rtl_boxrefzd2zzsaw_defsz00(BFALSE);
						BgL_arg4997z00_2658 =
							(((BgL_boxzd2refzd2_bglt) CREF(BgL_ez00_2653))->BgL_varz00);
						{	/* SawMill/node2rtl.scm 427 */
							obj_t BgL_list4998z00_2659;

							BgL_list4998z00_2659 =
								MAKE_PAIR((obj_t) (BgL_arg4997z00_2658), BNIL);
							BgL_auxz00_5753 =
								BGl_callza2za2zzsaw_node2rtlz00(
								(obj_t) (BgL_ez00_2653),
								(BgL_rtl_funz00_bglt) (BgL_arg4996z00_2657),
								BgL_list4998z00_2659);
						}
					}
					return (obj_t) (BgL_auxz00_5753);
				}
			}
		}
	}



/* node->rtl-make-box4355 */
	obj_t BGl_nodezd2ze3rtlzd2makezd2box4355z31zzsaw_node2rtlz00(obj_t
		BgL_envz00_4370, obj_t BgL_ez00_4371)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 420 */
			{
				BgL_makezd2boxzd2_bglt BgL_ez00_2644;

				{	/* SawMill/node2rtl.scm 421 */
					BgL_areaz00_bglt BgL_auxz00_5763;

					BgL_ez00_2644 = (BgL_makezd2boxzd2_bglt) (BgL_ez00_4371);
					{	/* SawMill/node2rtl.scm 422 */
						BgL_rtl_makeboxz00_bglt BgL_arg4991z00_2648;

						BgL_nodez00_bglt BgL_arg4993z00_2649;

						BgL_arg4991z00_2648 =
							BGl_makezd2rtl_makeboxzd2zzsaw_defsz00(BFALSE);
						BgL_arg4993z00_2649 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_ez00_2644))->BgL_valuez00);
						{	/* SawMill/node2rtl.scm 422 */
							obj_t BgL_list4994z00_2650;

							BgL_list4994z00_2650 =
								MAKE_PAIR((obj_t) (BgL_arg4993z00_2649), BNIL);
							BgL_auxz00_5763 =
								BGl_callza2za2zzsaw_node2rtlz00(
								(obj_t) (BgL_ez00_2644),
								(BgL_rtl_funz00_bglt) (BgL_arg4991z00_2648),
								BgL_list4994z00_2650);
						}
					}
					return (obj_t) (BgL_auxz00_5763);
				}
			}
		}
	}



/* node->rtl-fail4353 */
	obj_t BGl_nodezd2ze3rtlzd2fail4353ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4372,
		obj_t BgL_ez00_4373)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 415 */
			{
				BgL_failz00_bglt BgL_ez00_2630;

				{	/* SawMill/node2rtl.scm 416 */
					BgL_areaz00_bglt BgL_auxz00_5773;

					BgL_ez00_2630 = (BgL_failz00_bglt) (BgL_ez00_4373);
					{	/* SawMill/node2rtl.scm 417 */
						BgL_areaz00_bglt BgL_arg4982z00_2634;

						{	/* SawMill/node2rtl.scm 417 */
							BgL_rtl_failz00_bglt BgL_arg4983z00_2635;

							BgL_nodez00_bglt BgL_arg4984z00_2636;

							BgL_nodez00_bglt BgL_arg4985z00_2637;

							BgL_nodez00_bglt BgL_arg4986z00_2638;

							BgL_arg4983z00_2635 = BGl_makezd2rtl_failzd2zzsaw_defsz00(BFALSE);
							BgL_arg4984z00_2636 =
								(((BgL_failz00_bglt) CREF(BgL_ez00_2630))->BgL_procz00);
							BgL_arg4985z00_2637 =
								(((BgL_failz00_bglt) CREF(BgL_ez00_2630))->BgL_msgz00);
							BgL_arg4986z00_2638 =
								(((BgL_failz00_bglt) CREF(BgL_ez00_2630))->BgL_objz00);
							{	/* SawMill/node2rtl.scm 417 */
								obj_t BgL_list4987z00_2639;

								{	/* SawMill/node2rtl.scm 417 */
									obj_t BgL_arg4988z00_2640;

									{	/* SawMill/node2rtl.scm 417 */
										obj_t BgL_arg4989z00_2641;

										BgL_arg4989z00_2641 =
											MAKE_PAIR((obj_t) (BgL_arg4986z00_2638), BNIL);
										BgL_arg4988z00_2640 =
											MAKE_PAIR(
											(obj_t) (BgL_arg4985z00_2637), BgL_arg4989z00_2641);
									}
									BgL_list4987z00_2639 =
										MAKE_PAIR(
										(obj_t) (BgL_arg4984z00_2636), BgL_arg4988z00_2640);
								}
								BgL_arg4982z00_2634 =
									BGl_callza2za2zzsaw_node2rtlz00(
									(obj_t) (BgL_ez00_2630),
									(BgL_rtl_funz00_bglt) (BgL_arg4983z00_2635),
									BgL_list4987z00_2639);
							}
						}
						BgL_auxz00_5773 =
							BGl_unlinkz00zzsaw_node2rtlz00(BgL_arg4982z00_2634);
					}
					return (obj_t) (BgL_auxz00_5773);
				}
			}
		}
	}



/* node->rtl-jump-ex-it4351 */
	obj_t BGl_nodezd2ze3rtlzd2jumpzd2exzd2it4351ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4374, obj_t BgL_ez00_4375)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 410 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_ez00_2618;

				{	/* SawMill/node2rtl.scm 411 */
					BgL_areaz00_bglt BgL_auxz00_5790;

					BgL_ez00_2618 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_ez00_4375);
					{	/* SawMill/node2rtl.scm 412 */
						BgL_areaz00_bglt BgL_arg4974z00_2622;

						{	/* SawMill/node2rtl.scm 412 */
							BgL_rtl_jumpexitz00_bglt BgL_arg4975z00_2623;

							BgL_nodez00_bglt BgL_arg4977z00_2624;

							BgL_nodez00_bglt BgL_arg4978z00_2625;

							BgL_arg4975z00_2623 =
								BGl_makezd2rtl_jumpexitzd2zzsaw_defsz00(BFALSE);
							BgL_arg4977z00_2624 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_ez00_2618))->
								BgL_exitz00);
							BgL_arg4978z00_2625 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_ez00_2618))->
								BgL_valuez00);
							{	/* SawMill/node2rtl.scm 412 */
								obj_t BgL_list4979z00_2626;

								{	/* SawMill/node2rtl.scm 412 */
									obj_t BgL_arg4980z00_2627;

									BgL_arg4980z00_2627 =
										MAKE_PAIR((obj_t) (BgL_arg4978z00_2625), BNIL);
									BgL_list4979z00_2626 =
										MAKE_PAIR(
										(obj_t) (BgL_arg4977z00_2624), BgL_arg4980z00_2627);
								}
								BgL_arg4974z00_2622 =
									BGl_callza2za2zzsaw_node2rtlz00(
									(obj_t) (BgL_ez00_2618),
									(BgL_rtl_funz00_bglt) (BgL_arg4975z00_2623),
									BgL_list4979z00_2626);
							}
						}
						BgL_auxz00_5790 =
							BGl_unlinkz00zzsaw_node2rtlz00(BgL_arg4974z00_2622);
					}
					return (obj_t) (BgL_auxz00_5790);
				}
			}
		}
	}



/* node->rtl-set-ex-it4349 */
	obj_t BGl_nodezd2ze3rtlzd2setzd2exzd2it4349ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4376, obj_t BgL_ez00_4377)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 402 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_ez00_2601;

				{	/* SawMill/node2rtl.scm 403 */
					BgL_areaz00_bglt BgL_auxz00_5804;

					BgL_ez00_2601 = (BgL_setzd2exzd2itz00_bglt) (BgL_ez00_4377);
					{	/* SawMill/node2rtl.scm 404 */
						BgL_areaz00_bglt BgL_arg4963z00_2605;

						BgL_areaz00_bglt BgL_arg4964z00_2606;

						{	/* SawMill/node2rtl.scm 404 */
							BgL_areaz00_bglt BgL_az00_2607;

							{	/* SawMill/node2rtl.scm 404 */
								BgL_rtl_protectz00_bglt BgL_arg4968z00_2611;

								BgL_arg4968z00_2611 =
									BGl_makezd2rtl_protectzd2zzsaw_defsz00(BFALSE);
								BgL_az00_2607 =
									BGl_singleza2za2zzsaw_node2rtlz00(
									(obj_t) (BgL_ez00_2601),
									(BgL_rtl_funz00_bglt) (BgL_arg4968z00_2611), BNIL);
							}
							{	/* SawMill/node2rtl.scm 405 */
								BgL_rtl_regz00_bglt BgL_arg4965z00_2608;

								{	/* SawMill/node2rtl.scm 405 */
									BgL_variablez00_bglt BgL_arg4966z00_2609;

									{	/* SawMill/node2rtl.scm 405 */
										BgL_varz00_bglt BgL_obj2155z00_3950;

										BgL_obj2155z00_3950 =
											(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_ez00_2601))->
											BgL_varz00);
										BgL_arg4966z00_2609 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3950))->
											BgL_variablez00);
									}
									BgL_arg4965z00_2608 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										(BgL_localz00_bglt) (BgL_arg4966z00_2609));
								}
								{	/* SawMill/node2rtl.scm 405 */
									BgL_blockz00_bglt BgL_arg4426z00_3953;

									BgL_arg4426z00_3953 =
										(((BgL_areaz00_bglt) CREF(BgL_az00_2607))->BgL_exitz00);
									BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_arg4426z00_3953,
										BgL_arg4965z00_2608);
								}
							}
							BgL_arg4963z00_2605 = BgL_az00_2607;
						}
						{	/* SawMill/node2rtl.scm 407 */
							BgL_rtl_protectedz00_bglt BgL_arg4970z00_2613;

							BgL_nodez00_bglt BgL_arg4971z00_2614;

							BgL_arg4970z00_2613 =
								BGl_makezd2rtl_protectedzd2zzsaw_defsz00(BFALSE);
							BgL_arg4971z00_2614 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_ez00_2601))->
								BgL_bodyz00);
							{	/* SawMill/node2rtl.scm 407 */
								obj_t BgL_list4972z00_2615;

								BgL_list4972z00_2615 =
									MAKE_PAIR((obj_t) (BgL_arg4971z00_2614), BNIL);
								BgL_arg4964z00_2606 =
									BGl_callza2za2zzsaw_node2rtlz00(
									(obj_t) (BgL_ez00_2601),
									(BgL_rtl_funz00_bglt) (BgL_arg4970z00_2613),
									BgL_list4972z00_2615);
							}
						}
						BgL_auxz00_5804 =
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg4963z00_2605,
							BgL_arg4964z00_2606);
					}
					return (obj_t) (BgL_auxz00_5804);
				}
			}
		}
	}



/* node->rtl-cast-null4347 */
	obj_t BGl_nodezd2ze3rtlzd2castzd2null4347z31zzsaw_node2rtlz00(obj_t
		BgL_envz00_4378, obj_t BgL_ez00_4379)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 397 */
			{
				BgL_castzd2nullzd2_bglt BgL_ez00_2592;

				{	/* SawMill/node2rtl.scm 398 */
					BgL_areaz00_bglt BgL_auxz00_5825;

					BgL_ez00_2592 = (BgL_castzd2nullzd2_bglt) (BgL_ez00_4379);
					{	/* SawMill/node2rtl.scm 399 */
						BgL_rtl_cast_nullz00_bglt BgL_arg4959z00_2596;

						{	/* SawMill/node2rtl.scm 399 */
							BgL_typez00_bglt BgL_arg4961z00_2598;

							{
								BgL_nodez00_bglt BgL_auxz00_5826;

								BgL_auxz00_5826 = (BgL_nodez00_bglt) (BgL_ez00_2592);
								BgL_arg4961z00_2598 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5826))->BgL_typez00);
							}
							BgL_arg4959z00_2596 =
								BGl_makezd2rtl_cast_nullzd2zzsaw_defsz00(BFALSE,
								BgL_arg4961z00_2598);
						}
						BgL_auxz00_5825 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2592),
							(BgL_rtl_funz00_bglt) (BgL_arg4959z00_2596), BNIL);
					}
					return (obj_t) (BgL_auxz00_5825);
				}
			}
		}
	}



/* node->rtl-cast4345 */
	obj_t BGl_nodezd2ze3rtlzd2cast4345ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4380,
		obj_t BgL_ez00_4381)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 390 */
			{
				BgL_castz00_bglt BgL_ez00_2585;

				{	/* SawMill/node2rtl.scm 391 */
					BgL_areaz00_bglt BgL_auxz00_5835;

					BgL_ez00_2585 = (BgL_castz00_bglt) (BgL_ez00_4381);
					{	/* SawMill/node2rtl.scm 391 */
						BgL_nodez00_bglt BgL_arg4957z00_3916;

						BgL_arg4957z00_3916 =
							(((BgL_castz00_bglt) CREF(BgL_ez00_2585))->BgL_argz00);
						{	/* SawMill/node2rtl.scm 391 */
							BgL_areaz00_bglt BgL_res5164z00_3944;

							{	/* SawMill/node2rtl.scm 391 */
								obj_t BgL_method4301z00_3919;

								{	/* SawMill/node2rtl.scm 391 */
									BgL_objectz00_bglt BgL_objz00_3920;

									BgL_objz00_3920 = (BgL_objectz00_bglt) (BgL_arg4957z00_3916);
									{	/* SawMill/node2rtl.scm 391 */
										long BgL_objzd2classzd2numz00_3921;

										BgL_objzd2classzd2numz00_3921 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3920);
										{	/* SawMill/node2rtl.scm 391 */
											obj_t BgL_arg2643z00_3922;

											BgL_arg2643z00_3922 =
												PROCEDURE_REF
												(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
												(int) (((long) 1)));
											{	/* SawMill/node2rtl.scm 391 */
												obj_t BgL_arrayz00_3924;

												int BgL_offsetz00_3925;

												BgL_arrayz00_3924 = BgL_arg2643z00_3922;
												BgL_offsetz00_3925 =
													(int) (BgL_objzd2classzd2numz00_3921);
												{	/* SawMill/node2rtl.scm 391 */
													long BgL_offsetz00_3926;

													BgL_offsetz00_3926 =
														((long) (BgL_offsetz00_3925) - OBJECT_TYPE);
													{	/* SawMill/node2rtl.scm 391 */
														long BgL_modz00_3927;

														{	/* SawMill/node2rtl.scm 391 */
															int BgL_arg2645z00_3928;

															BgL_arg2645z00_3928 = (int) (((long) 16));
															{	/* SawMill/node2rtl.scm 391 */
																long BgL_auxz00_5845;

																BgL_auxz00_5845 = (long) (BgL_arg2645z00_3928);
																BgL_modz00_3927 =
																	(BgL_offsetz00_3926 / BgL_auxz00_5845);
														}}
														{	/* SawMill/node2rtl.scm 391 */
															long BgL_restz00_3929;

															{	/* SawMill/node2rtl.scm 391 */
																int BgL_arg2644z00_3930;

																BgL_arg2644z00_3930 = (int) (((long) 16));
																{	/* SawMill/node2rtl.scm 391 */
																	long BgL_auxz00_5849;

																	BgL_auxz00_5849 =
																		(long) (BgL_arg2644z00_3930);
																	BgL_restz00_3929 =
																		(BgL_offsetz00_3926 % BgL_auxz00_5849);
															}}
															{	/* SawMill/node2rtl.scm 391 */

																BgL_method4301z00_3919 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3924,
																		(int) (BgL_modz00_3927)),
																	(int) (BgL_restz00_3929));
								}}}}}}}}
								BgL_res5164z00_3944 =
									(BgL_areaz00_bglt) (PROCEDURE_ENTRY(BgL_method4301z00_3919)
									(BgL_method4301z00_3919, (obj_t) (BgL_arg4957z00_3916),
										BEOA));
							}
							BgL_auxz00_5835 = BgL_res5164z00_3944;
					}}
					return (obj_t) (BgL_auxz00_5835);
				}
			}
		}
	}



/* node->rtl-isa4343 */
	obj_t BGl_nodezd2ze3rtlzd2isa4343ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4382,
		obj_t BgL_ez00_4383)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 385 */
			{
				BgL_isaz00_bglt BgL_ez00_2576;

				{	/* SawMill/node2rtl.scm 386 */
					BgL_areaz00_bglt BgL_auxz00_5862;

					BgL_ez00_2576 = (BgL_isaz00_bglt) (BgL_ez00_4383);
					{	/* SawMill/node2rtl.scm 387 */
						BgL_rtl_isaz00_bglt BgL_arg4953z00_2580;

						obj_t BgL_arg4954z00_2581;

						{	/* SawMill/node2rtl.scm 387 */
							BgL_typez00_bglt BgL_arg4955z00_2582;

							BgL_arg4955z00_2582 =
								(((BgL_isaz00_bglt) CREF(BgL_ez00_2576))->BgL_classz00);
							BgL_arg4953z00_2580 =
								BGl_makezd2rtl_isazd2zzsaw_defsz00(BFALSE, BgL_arg4955z00_2582);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5865;

							BgL_auxz00_5865 = (BgL_externz00_bglt) (BgL_ez00_2576);
							BgL_arg4954z00_2581 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5865))->BgL_exprza2za2);
						}
						BgL_auxz00_5862 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2576),
							(BgL_rtl_funz00_bglt) (BgL_arg4953z00_2580), BgL_arg4954z00_2581);
					}
					return (obj_t) (BgL_auxz00_5862);
				}
			}
		}
	}



/* node->rtl-vlength4341 */
	obj_t BGl_nodezd2ze3rtlzd2vlength4341ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4384, obj_t BgL_ez00_4385)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 380 */
			{
				BgL_vlengthz00_bglt BgL_ez00_2567;

				{	/* SawMill/node2rtl.scm 381 */
					BgL_areaz00_bglt BgL_auxz00_5873;

					BgL_ez00_2567 = (BgL_vlengthz00_bglt) (BgL_ez00_4385);
					{	/* SawMill/node2rtl.scm 382 */
						BgL_rtl_vlengthz00_bglt BgL_arg4946z00_2571;

						obj_t BgL_arg4947z00_2572;

						{	/* SawMill/node2rtl.scm 382 */
							BgL_typez00_bglt BgL_arg4948z00_2573;

							BgL_arg4948z00_2573 =
								(((BgL_vlengthz00_bglt) CREF(BgL_ez00_2567))->BgL_vtypez00);
							BgL_arg4946z00_2571 =
								BGl_makezd2rtl_vlengthzd2zzsaw_defsz00(BFALSE,
								BgL_arg4948z00_2573);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5876;

							BgL_auxz00_5876 = (BgL_externz00_bglt) (BgL_ez00_2567);
							BgL_arg4947z00_2572 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5876))->BgL_exprza2za2);
						}
						BgL_auxz00_5873 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2567),
							(BgL_rtl_funz00_bglt) (BgL_arg4946z00_2571), BgL_arg4947z00_2572);
					}
					return (obj_t) (BgL_auxz00_5873);
				}
			}
		}
	}



/* node->rtl-vset!4339 */
	obj_t BGl_nodezd2ze3rtlzd2vsetz124339zf1zzsaw_node2rtlz00(obj_t
		BgL_envz00_4386, obj_t BgL_ez00_4387)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 374 */
			{
				BgL_vsetz12z12_bglt BgL_ez00_2553;

				{	/* SawMill/node2rtl.scm 375 */
					BgL_areaz00_bglt BgL_auxz00_5884;

					BgL_ez00_2553 = (BgL_vsetz12z12_bglt) (BgL_ez00_4387);
					{	/* SawMill/node2rtl.scm 376 */
						BgL_areaz00_bglt BgL_arg4937z00_2557;

						BgL_areaz00_bglt BgL_arg4938z00_2558;

						{	/* SawMill/node2rtl.scm 376 */
							BgL_rtl_vsetz00_bglt BgL_arg4939z00_2559;

							obj_t BgL_arg4940z00_2560;

							{	/* SawMill/node2rtl.scm 376 */
								BgL_typez00_bglt BgL_arg4941z00_2561;

								BgL_typez00_bglt BgL_arg4942z00_2562;

								BgL_arg4941z00_2561 =
									(((BgL_vsetz12z12_bglt) CREF(BgL_ez00_2553))->BgL_ftypez00);
								BgL_arg4942z00_2562 =
									(((BgL_vsetz12z12_bglt) CREF(BgL_ez00_2553))->BgL_vtypez00);
								BgL_arg4939z00_2559 =
									BGl_makezd2rtl_vsetzd2zzsaw_defsz00(BFALSE,
									BgL_arg4941z00_2561, BgL_arg4942z00_2562);
							}
							{
								BgL_externz00_bglt BgL_auxz00_5888;

								BgL_auxz00_5888 = (BgL_externz00_bglt) (BgL_ez00_2553);
								BgL_arg4940z00_2560 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5888))->
									BgL_exprza2za2);
							}
							BgL_arg4937z00_2557 =
								BGl_callza2za2zzsaw_node2rtlz00(
								(obj_t) (BgL_ez00_2553),
								(BgL_rtl_funz00_bglt) (BgL_arg4939z00_2559),
								BgL_arg4940z00_2560);
						}
						{	/* SawMill/node2rtl.scm 377 */
							BgL_rtl_nopz00_bglt BgL_arg4943z00_2563;

							BgL_arg4943z00_2563 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
							BgL_arg4938z00_2558 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								(BgL_rtl_funz00_bglt) (BgL_arg4943z00_2563), BNIL);
						}
						BgL_auxz00_5884 =
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg4937z00_2557,
							BgL_arg4938z00_2558);
					}
					return (obj_t) (BgL_auxz00_5884);
				}
			}
		}
	}



/* node->rtl-vref4337 */
	obj_t BGl_nodezd2ze3rtlzd2vref4337ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4388,
		obj_t BgL_ez00_4389)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 369 */
			{
				BgL_vrefz00_bglt BgL_ez00_2543;

				{	/* SawMill/node2rtl.scm 370 */
					BgL_areaz00_bglt BgL_auxz00_5900;

					BgL_ez00_2543 = (BgL_vrefz00_bglt) (BgL_ez00_4389);
					{	/* SawMill/node2rtl.scm 371 */
						BgL_rtl_vrefz00_bglt BgL_arg4932z00_2547;

						obj_t BgL_arg4933z00_2548;

						{	/* SawMill/node2rtl.scm 371 */
							BgL_typez00_bglt BgL_arg4934z00_2549;

							BgL_typez00_bglt BgL_arg4935z00_2550;

							BgL_arg4934z00_2549 =
								(((BgL_vrefz00_bglt) CREF(BgL_ez00_2543))->BgL_ftypez00);
							BgL_arg4935z00_2550 =
								(((BgL_vrefz00_bglt) CREF(BgL_ez00_2543))->BgL_vtypez00);
							BgL_arg4932z00_2547 =
								BGl_makezd2rtl_vrefzd2zzsaw_defsz00(BFALSE, BgL_arg4934z00_2549,
								BgL_arg4935z00_2550);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5904;

							BgL_auxz00_5904 = (BgL_externz00_bglt) (BgL_ez00_2543);
							BgL_arg4933z00_2548 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5904))->BgL_exprza2za2);
						}
						BgL_auxz00_5900 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2543),
							(BgL_rtl_funz00_bglt) (BgL_arg4932z00_2547), BgL_arg4933z00_2548);
					}
					return (obj_t) (BgL_auxz00_5900);
				}
			}
		}
	}



/* node->rtl-valloc4335 */
	obj_t BGl_nodezd2ze3rtlzd2valloc4335ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4390, obj_t BgL_ez00_4391)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 363 */
			{
				BgL_vallocz00_bglt BgL_ez00_2533;

				{	/* SawMill/node2rtl.scm 364 */
					BgL_areaz00_bglt BgL_auxz00_5912;

					BgL_ez00_2533 = (BgL_vallocz00_bglt) (BgL_ez00_4391);
					{	/* SawMill/node2rtl.scm 365 */
						BgL_rtl_vallocz00_bglt BgL_arg4927z00_2537;

						obj_t BgL_arg4928z00_2538;

						{	/* SawMill/node2rtl.scm 365 */
							BgL_typez00_bglt BgL_arg4929z00_2539;

							BgL_typez00_bglt BgL_arg4930z00_2540;

							BgL_arg4929z00_2539 =
								(((BgL_vallocz00_bglt) CREF(BgL_ez00_2533))->BgL_ftypez00);
							BgL_arg4930z00_2540 =
								BGl_getzd2typezd2zztype_typeofz00(
								(BgL_nodez00_bglt) (BgL_ez00_2533));
							BgL_arg4927z00_2537 =
								BGl_makezd2rtl_valloczd2zzsaw_defsz00(BFALSE,
								BgL_arg4929z00_2539, BgL_arg4930z00_2540);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5917;

							BgL_auxz00_5917 = (BgL_externz00_bglt) (BgL_ez00_2533);
							BgL_arg4928z00_2538 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5917))->BgL_exprza2za2);
						}
						BgL_auxz00_5912 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2533),
							(BgL_rtl_funz00_bglt) (BgL_arg4927z00_2537), BgL_arg4928z00_2538);
					}
					return (obj_t) (BgL_auxz00_5912);
				}
			}
		}
	}



/* node->rtl-new4333 */
	obj_t BGl_nodezd2ze3rtlzd2new4333ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4392,
		obj_t BgL_ez00_4393)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 357 */
			{
				BgL_newz00_bglt BgL_ez00_2523;

				{	/* SawMill/node2rtl.scm 358 */
					BgL_areaz00_bglt BgL_auxz00_5925;

					BgL_ez00_2523 = (BgL_newz00_bglt) (BgL_ez00_4393);
					{	/* SawMill/node2rtl.scm 359 */
						BgL_rtl_newz00_bglt BgL_arg4922z00_2527;

						obj_t BgL_arg4923z00_2528;

						{	/* SawMill/node2rtl.scm 359 */
							BgL_typez00_bglt BgL_arg4924z00_2529;

							obj_t BgL_arg4925z00_2530;

							BgL_arg4924z00_2529 =
								BGl_getzd2typezd2zztype_typeofz00(
								(BgL_nodez00_bglt) (BgL_ez00_2523));
							BgL_arg4925z00_2530 =
								(((BgL_newz00_bglt) CREF(BgL_ez00_2523))->BgL_argszd2typezd2);
							BgL_arg4922z00_2527 =
								BGl_makezd2rtl_newzd2zzsaw_defsz00(BFALSE, BgL_arg4924z00_2529,
								BgL_arg4925z00_2530);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5930;

							BgL_auxz00_5930 = (BgL_externz00_bglt) (BgL_ez00_2523);
							BgL_arg4923z00_2528 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5930))->BgL_exprza2za2);
						}
						BgL_auxz00_5925 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2523),
							(BgL_rtl_funz00_bglt) (BgL_arg4922z00_2527), BgL_arg4923z00_2528);
					}
					return (obj_t) (BgL_auxz00_5925);
				}
			}
		}
	}



/* node->rtl-setfield4331 */
	obj_t BGl_nodezd2ze3rtlzd2setfield4331ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4394, obj_t BgL_ez00_4395)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 348 */
			{
				BgL_setfieldz00_bglt BgL_ez00_2508;

				{	/* SawMill/node2rtl.scm 349 */
					BgL_areaz00_bglt BgL_auxz00_5938;

					BgL_ez00_2508 = (BgL_setfieldz00_bglt) (BgL_ez00_4395);
					{	/* SawMill/node2rtl.scm 350 */
						BgL_areaz00_bglt BgL_arg4912z00_2512;

						BgL_areaz00_bglt BgL_arg4913z00_2513;

						{	/* SawMill/node2rtl.scm 350 */
							BgL_rtl_setfieldz00_bglt BgL_arg4914z00_2514;

							obj_t BgL_arg4915z00_2515;

							{	/* SawMill/node2rtl.scm 350 */
								obj_t BgL_arg4916z00_2516;

								BgL_typez00_bglt BgL_arg4917z00_2517;

								BgL_typez00_bglt BgL_arg4918z00_2518;

								BgL_arg4916z00_2516 =
									(((BgL_setfieldz00_bglt) CREF(BgL_ez00_2508))->BgL_fnamez00);
								BgL_arg4917z00_2517 =
									(((BgL_setfieldz00_bglt) CREF(BgL_ez00_2508))->BgL_otypez00);
								BgL_arg4918z00_2518 =
									(((BgL_setfieldz00_bglt) CREF(BgL_ez00_2508))->BgL_ftypez00);
								BgL_arg4914z00_2514 =
									BGl_makezd2rtl_setfieldzd2zzsaw_defsz00(BFALSE,
									BgL_arg4916z00_2516, BgL_arg4917z00_2517,
									BgL_arg4918z00_2518);
							}
							{
								BgL_externz00_bglt BgL_auxz00_5943;

								BgL_auxz00_5943 = (BgL_externz00_bglt) (BgL_ez00_2508);
								BgL_arg4915z00_2515 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5943))->
									BgL_exprza2za2);
							}
							BgL_arg4912z00_2512 =
								BGl_callza2za2zzsaw_node2rtlz00(
								(obj_t) (BgL_ez00_2508),
								(BgL_rtl_funz00_bglt) (BgL_arg4914z00_2514),
								BgL_arg4915z00_2515);
						}
						{	/* SawMill/node2rtl.scm 354 */
							BgL_rtl_nopz00_bglt BgL_arg4919z00_2519;

							BgL_arg4919z00_2519 = BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
							BgL_arg4913z00_2513 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								(BgL_rtl_funz00_bglt) (BgL_arg4919z00_2519), BNIL);
						}
						BgL_auxz00_5938 =
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg4912z00_2512,
							BgL_arg4913z00_2513);
					}
					return (obj_t) (BgL_auxz00_5938);
				}
			}
		}
	}



/* node->rtl-getfield4329 */
	obj_t BGl_nodezd2ze3rtlzd2getfield4329ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4396, obj_t BgL_ez00_4397)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 340 */
			{
				BgL_getfieldz00_bglt BgL_ez00_2497;

				{	/* SawMill/node2rtl.scm 341 */
					BgL_areaz00_bglt BgL_auxz00_5955;

					BgL_ez00_2497 = (BgL_getfieldz00_bglt) (BgL_ez00_4397);
					{	/* SawMill/node2rtl.scm 342 */
						BgL_rtl_getfieldz00_bglt BgL_arg4906z00_2501;

						obj_t BgL_arg4907z00_2502;

						{	/* SawMill/node2rtl.scm 342 */
							obj_t BgL_arg4908z00_2503;

							BgL_typez00_bglt BgL_arg4909z00_2504;

							BgL_typez00_bglt BgL_arg4910z00_2505;

							BgL_arg4908z00_2503 =
								(((BgL_getfieldz00_bglt) CREF(BgL_ez00_2497))->BgL_fnamez00);
							BgL_arg4909z00_2504 =
								(((BgL_getfieldz00_bglt) CREF(BgL_ez00_2497))->BgL_otypez00);
							BgL_arg4910z00_2505 =
								(((BgL_getfieldz00_bglt) CREF(BgL_ez00_2497))->BgL_ftypez00);
							BgL_arg4906z00_2501 =
								BGl_makezd2rtl_getfieldzd2zzsaw_defsz00(BFALSE,
								BgL_arg4908z00_2503, BgL_arg4909z00_2504, BgL_arg4910z00_2505);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5960;

							BgL_auxz00_5960 = (BgL_externz00_bglt) (BgL_ez00_2497);
							BgL_arg4907z00_2502 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5960))->BgL_exprza2za2);
						}
						BgL_auxz00_5955 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2497),
							(BgL_rtl_funz00_bglt) (BgL_arg4906z00_2501), BgL_arg4907z00_2502);
					}
					return (obj_t) (BgL_auxz00_5955);
				}
			}
		}
	}



/* node->rtl-pragma4327 */
	obj_t BGl_nodezd2ze3rtlzd2pragma4327ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4398, obj_t BgL_ez00_4399)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 335 */
			{
				BgL_pragmaz00_bglt BgL_ez00_2488;

				{	/* SawMill/node2rtl.scm 336 */
					BgL_areaz00_bglt BgL_auxz00_5968;

					BgL_ez00_2488 = (BgL_pragmaz00_bglt) (BgL_ez00_4399);
					{	/* SawMill/node2rtl.scm 337 */
						BgL_rtl_pragmaz00_bglt BgL_arg4902z00_2492;

						obj_t BgL_arg4903z00_2493;

						{	/* SawMill/node2rtl.scm 337 */
							obj_t BgL_arg4904z00_2494;

							BgL_arg4904z00_2494 =
								(((BgL_pragmaz00_bglt) CREF(BgL_ez00_2488))->BgL_formatz00);
							BgL_arg4902z00_2492 =
								BGl_makezd2rtl_pragmazd2zzsaw_defsz00(BFALSE,
								BgL_arg4904z00_2494);
						}
						{
							BgL_externz00_bglt BgL_auxz00_5971;

							BgL_auxz00_5971 = (BgL_externz00_bglt) (BgL_ez00_2488);
							BgL_arg4903z00_2493 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_5971))->BgL_exprza2za2);
						}
						BgL_auxz00_5968 =
							BGl_callza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2488),
							(BgL_rtl_funz00_bglt) (BgL_arg4902z00_2492), BgL_arg4903z00_2493);
					}
					return (obj_t) (BgL_auxz00_5968);
				}
			}
		}
	}



/* node->rtl-funcall4325 */
	obj_t BGl_nodezd2ze3rtlzd2funcall4325ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4400, obj_t BgL_ez00_4401)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 315 */
			{
				BgL_funcallz00_bglt BgL_ez00_2463;

				{	/* SawMill/node2rtl.scm 317 */
					BgL_areaz00_bglt BgL_auxz00_5979;

					BgL_ez00_2463 = (BgL_funcallz00_bglt) (BgL_ez00_4401);
					{	/* SawMill/node2rtl.scm 322 */
						obj_t BgL_argsz00_2468;

						{	/* SawMill/node2rtl.scm 322 */
							obj_t BgL_arg4894z00_2477;

							BgL_arg4894z00_2477 =
								(((BgL_funcallz00_bglt) CREF(BgL_ez00_2463))->BgL_argsz00);
							BgL_argsz00_2468 =
								BGl_argszd21zd2zzsaw_node2rtlz00(BgL_arg4894z00_2477);
						}
						{	/* SawMill/node2rtl.scm 323 */
							obj_t BgL_casezd2valuezd2_2469;

							BgL_casezd2valuezd2_2469 =
								(((BgL_funcallz00_bglt) CREF(BgL_ez00_2463))->BgL_strengthz00);
							if ((BgL_casezd2valuezd2_2469 == CNST_TABLE_REF(((long) 9))))
								{	/* SawMill/node2rtl.scm 326 */
									BgL_rtl_callz00_bglt BgL_arg4888z00_2471;

									{	/* SawMill/node2rtl.scm 326 */
										BgL_variablez00_bglt BgL_arg4889z00_2472;

										{	/* SawMill/node2rtl.scm 326 */
											BgL_varz00_bglt BgL_obj2155z00_3878;

											BgL_obj2155z00_3878 =
												(BgL_varz00_bglt) (
												(((BgL_funcallz00_bglt) CREF(BgL_ez00_2463))->
													BgL_funz00));
											BgL_arg4889z00_2472 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3878))->
												BgL_variablez00);
										}
										BgL_arg4888z00_2471 =
											BGl_makezd2rtl_callzd2zzsaw_defsz00(BFALSE,
											(BgL_globalz00_bglt) (BgL_arg4889z00_2472));
									}
									BgL_auxz00_5979 =
										BGl_callza2za2zzsaw_node2rtlz00(
										(obj_t) (BgL_ez00_2463),
										(BgL_rtl_funz00_bglt) (BgL_arg4888z00_2471),
										BgL_argsz00_2468);
								}
							else
								{	/* SawMill/node2rtl.scm 323 */
									if ((BgL_casezd2valuezd2_2469 == CNST_TABLE_REF(((long) 10))))
										{	/* SawMill/node2rtl.scm 329 */
											BgL_rtl_lightfuncallz00_bglt BgL_arg4892z00_2475;

											BgL_arg4892z00_2475 =
												BGl_makezd2rtl_lightfuncallzd2zzsaw_defsz00(BFALSE);
											BgL_auxz00_5979 =
												BGl_callza2za2zzsaw_node2rtlz00(
												(obj_t) (BgL_ez00_2463),
												(BgL_rtl_funz00_bglt) (BgL_arg4892z00_2475),
												BgL_argsz00_2468);
										}
									else
										{	/* SawMill/node2rtl.scm 332 */
											BgL_rtl_funcallz00_bglt BgL_arg4893z00_2476;

											BgL_arg4893z00_2476 =
												BGl_makezd2rtl_funcallzd2zzsaw_defsz00(BFALSE);
											BgL_auxz00_5979 =
												BGl_callza2za2zzsaw_node2rtlz00(
												(obj_t) (BgL_ez00_2463),
												(BgL_rtl_funz00_bglt) (BgL_arg4893z00_2476),
												BgL_argsz00_2468);
										}
								}
						}
					}
					return (obj_t) (BgL_auxz00_5979);
				}
			}
		}
	}



/* args-1 */
	obj_t BGl_argszd21zd2zzsaw_node2rtlz00(obj_t BgL_argsz00_2478)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 319 */
			if (NULLP(CDR(BgL_argsz00_2478)))
				{	/* SawMill/node2rtl.scm 317 */
					return BNIL;
				}
			else
				{	/* SawMill/node2rtl.scm 317 */
					return
						MAKE_PAIR(CAR(BgL_argsz00_2478),
						BGl_argszd21zd2zzsaw_node2rtlz00(CDR(BgL_argsz00_2478)));
				}
		}
	}



/* node->rtl-app-ly4323 */
	obj_t BGl_nodezd2ze3rtlzd2appzd2ly4323z31zzsaw_node2rtlz00(obj_t
		BgL_envz00_4402, obj_t BgL_ez00_4403)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 310 */
			{
				BgL_appzd2lyzd2_bglt BgL_ez00_2452;

				{	/* SawMill/node2rtl.scm 311 */
					BgL_areaz00_bglt BgL_auxz00_6014;

					BgL_ez00_2452 = (BgL_appzd2lyzd2_bglt) (BgL_ez00_4403);
					{	/* SawMill/node2rtl.scm 312 */
						BgL_rtl_applyz00_bglt BgL_arg4881z00_2456;

						BgL_nodez00_bglt BgL_arg4882z00_2457;

						BgL_nodez00_bglt BgL_arg4883z00_2458;

						BgL_arg4881z00_2456 = BGl_makezd2rtl_applyzd2zzsaw_defsz00(BFALSE);
						BgL_arg4882z00_2457 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_ez00_2452))->BgL_funz00);
						BgL_arg4883z00_2458 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_ez00_2452))->BgL_argz00);
						{	/* SawMill/node2rtl.scm 312 */
							obj_t BgL_list4884z00_2459;

							{	/* SawMill/node2rtl.scm 312 */
								obj_t BgL_arg4885z00_2460;

								BgL_arg4885z00_2460 =
									MAKE_PAIR((obj_t) (BgL_arg4883z00_2458), BNIL);
								BgL_list4884z00_2459 =
									MAKE_PAIR((obj_t) (BgL_arg4882z00_2457), BgL_arg4885z00_2460);
							}
							BgL_auxz00_6014 =
								BGl_callza2za2zzsaw_node2rtlz00(
								(obj_t) (BgL_ez00_2452),
								(BgL_rtl_funz00_bglt) (BgL_arg4881z00_2456),
								BgL_list4884z00_2459);
						}
					}
					return (obj_t) (BgL_auxz00_6014);
				}
			}
		}
	}



/* node->rtl-app4321 */
	obj_t BGl_nodezd2ze3rtlzd2app4321ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4404,
		obj_t BgL_ez00_4405)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 286 */
			{
				BgL_appz00_bglt BgL_ez00_2436;

				BgL_ez00_2436 = (BgL_appz00_bglt) (BgL_ez00_4405);
				{	/* SawMill/node2rtl.scm 288 */
					BgL_variablez00_bglt BgL_vz00_2440;

					{	/* SawMill/node2rtl.scm 288 */
						BgL_varz00_bglt BgL_obj2155z00_3862;

						BgL_obj2155z00_3862 =
							(((BgL_appz00_bglt) CREF(BgL_ez00_2436))->BgL_funz00);
						BgL_vz00_2440 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3862))->BgL_variablez00);
					}
					{	/* SawMill/node2rtl.scm 289 */
						bool_t BgL_testz00_6029;

						{	/* SawMill/node2rtl.scm 289 */
							obj_t BgL_obj1812z00_3863;

							BgL_obj1812z00_3863 = (obj_t) (BgL_vz00_2440);
							BgL_testz00_6029 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_3863,
								BGl_localz00zzast_varz00);
						}
						if (BgL_testz00_6029)
							{	/* SawMill/node2rtl.scm 290 */
								obj_t BgL_arg4873z00_2442;

								BgL_arg4873z00_2442 =
									(((BgL_appz00_bglt) CREF(BgL_ez00_2436))->BgL_argsz00);
								return
									(obj_t) (BGl_compilezd2labelzd2callz00zzsaw_node2rtlz00(
										(BgL_localz00_bglt) (BgL_vz00_2440), BgL_arg4873z00_2442));
							}
						else
							{	/* SawMill/node2rtl.scm 291 */
								obj_t BgL__ortest_4132z00_2443;

								{	/* SawMill/node2rtl.scm 291 */
									obj_t BgL_arg4878z00_2448;

									BgL_arg4878z00_2448 =
										(((BgL_appz00_bglt) CREF(BgL_ez00_2436))->BgL_argsz00);
									BgL__ortest_4132z00_2443 =
										BGl_imperativezf3zf3zzsaw_node2rtlz00(BgL_ez00_2436,
										(BgL_globalz00_bglt) (BgL_vz00_2440), BgL_arg4878z00_2448);
								}
								if (CBOOL(BgL__ortest_4132z00_2443))
									{	/* SawMill/node2rtl.scm 291 */
										return BgL__ortest_4132z00_2443;
									}
								else
									{	/* SawMill/node2rtl.scm 291 */
										if (BGl_za2reversezd2callzd2argumentza2z00zzsaw_node2rtlz00)
											{	/* SawMill/node2rtl.scm 293 */
												BgL_rtl_callz00_bglt BgL_arg4874z00_2444;

												obj_t BgL_arg4875z00_2445;

												BgL_arg4874z00_2444 =
													BGl_makezd2rtl_callzd2zzsaw_defsz00(BFALSE,
													(BgL_globalz00_bglt) (BgL_vz00_2440));
												BgL_arg4875z00_2445 =
													(((BgL_appz00_bglt) CREF(BgL_ez00_2436))->
													BgL_argsz00);
												return (obj_t) (BGl_rcallza2za2zzsaw_node2rtlz00
													(BgL_ez00_2436,
														(BgL_rtl_funz00_bglt) (BgL_arg4874z00_2444),
														BgL_arg4875z00_2445));
											}
										else
											{	/* SawMill/node2rtl.scm 294 */
												BgL_rtl_callz00_bglt BgL_arg4876z00_2446;

												obj_t BgL_arg4877z00_2447;

												BgL_arg4876z00_2446 =
													BGl_makezd2rtl_callzd2zzsaw_defsz00(BFALSE,
													(BgL_globalz00_bglt) (BgL_vz00_2440));
												BgL_arg4877z00_2447 =
													(((BgL_appz00_bglt) CREF(BgL_ez00_2436))->
													BgL_argsz00);
												return (obj_t) (BGl_callza2za2zzsaw_node2rtlz00((obj_t)
														(BgL_ez00_2436),
														(BgL_rtl_funz00_bglt) (BgL_arg4876z00_2446),
														BgL_arg4877z00_2447));
											}
									}
							}
					}
				}
			}
		}
	}



/* node->rtl-let-fun4319 */
	obj_t BGl_nodezd2ze3rtlzd2letzd2fun4319z31zzsaw_node2rtlz00(obj_t
		BgL_envz00_4406, obj_t BgL_ez00_4407)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 252 */
			{
				BgL_letzd2funzd2_bglt BgL_ez00_2429;

				{	/* SawMill/node2rtl.scm 253 */
					BgL_areaz00_bglt BgL_auxz00_6056;

					BgL_ez00_2429 = (BgL_letzd2funzd2_bglt) (BgL_ez00_4407);
					{	/* SawMill/node2rtl.scm 253 */
						BgL_nodez00_bglt BgL_arg4870z00_3832;

						BgL_arg4870z00_3832 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_ez00_2429))->BgL_bodyz00);
						{	/* SawMill/node2rtl.scm 253 */
							BgL_areaz00_bglt BgL_res5161z00_3860;

							{	/* SawMill/node2rtl.scm 253 */
								obj_t BgL_method4301z00_3835;

								{	/* SawMill/node2rtl.scm 253 */
									BgL_objectz00_bglt BgL_objz00_3836;

									BgL_objz00_3836 = (BgL_objectz00_bglt) (BgL_arg4870z00_3832);
									{	/* SawMill/node2rtl.scm 253 */
										long BgL_objzd2classzd2numz00_3837;

										BgL_objzd2classzd2numz00_3837 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3836);
										{	/* SawMill/node2rtl.scm 253 */
											obj_t BgL_arg2643z00_3838;

											BgL_arg2643z00_3838 =
												PROCEDURE_REF
												(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
												(int) (((long) 1)));
											{	/* SawMill/node2rtl.scm 253 */
												obj_t BgL_arrayz00_3840;

												int BgL_offsetz00_3841;

												BgL_arrayz00_3840 = BgL_arg2643z00_3838;
												BgL_offsetz00_3841 =
													(int) (BgL_objzd2classzd2numz00_3837);
												{	/* SawMill/node2rtl.scm 253 */
													long BgL_offsetz00_3842;

													BgL_offsetz00_3842 =
														((long) (BgL_offsetz00_3841) - OBJECT_TYPE);
													{	/* SawMill/node2rtl.scm 253 */
														long BgL_modz00_3843;

														{	/* SawMill/node2rtl.scm 253 */
															int BgL_arg2645z00_3844;

															BgL_arg2645z00_3844 = (int) (((long) 16));
															{	/* SawMill/node2rtl.scm 253 */
																long BgL_auxz00_6066;

																BgL_auxz00_6066 = (long) (BgL_arg2645z00_3844);
																BgL_modz00_3843 =
																	(BgL_offsetz00_3842 / BgL_auxz00_6066);
														}}
														{	/* SawMill/node2rtl.scm 253 */
															long BgL_restz00_3845;

															{	/* SawMill/node2rtl.scm 253 */
																int BgL_arg2644z00_3846;

																BgL_arg2644z00_3846 = (int) (((long) 16));
																{	/* SawMill/node2rtl.scm 253 */
																	long BgL_auxz00_6070;

																	BgL_auxz00_6070 =
																		(long) (BgL_arg2644z00_3846);
																	BgL_restz00_3845 =
																		(BgL_offsetz00_3842 % BgL_auxz00_6070);
															}}
															{	/* SawMill/node2rtl.scm 253 */

																BgL_method4301z00_3835 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3840,
																		(int) (BgL_modz00_3843)),
																	(int) (BgL_restz00_3845));
								}}}}}}}}
								BgL_res5161z00_3860 =
									(BgL_areaz00_bglt) (PROCEDURE_ENTRY(BgL_method4301z00_3835)
									(BgL_method4301z00_3835, (obj_t) (BgL_arg4870z00_3832),
										BEOA));
							}
							BgL_auxz00_6056 = BgL_res5161z00_3860;
					}}
					return (obj_t) (BgL_auxz00_6056);
				}
			}
		}
	}



/* node->rtl-select4317 */
	obj_t BGl_nodezd2ze3rtlzd2select4317ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4408, obj_t BgL_ez00_4409)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 231 */
			{
				BgL_selectz00_bglt BgL_ez00_2399;

				{	/* SawMill/node2rtl.scm 232 */
					BgL_areaz00_bglt BgL_auxz00_6083;

					BgL_ez00_2399 = (BgL_selectz00_bglt) (BgL_ez00_4409);
					{	/* SawMill/node2rtl.scm 233 */
						BgL_areaz00_bglt BgL_arg4853z00_2403;

						obj_t BgL_arg4854z00_2404;

						BgL_rtl_regz00_bglt BgL_arg4855z00_2405;

						{	/* SawMill/node2rtl.scm 233 */
							BgL_rtl_selectz00_bglt BgL_arg4856z00_2406;

							BgL_nodez00_bglt BgL_arg4857z00_2407;

							{	/* SawMill/node2rtl.scm 233 */
								BgL_typez00_bglt BgL_arg4859z00_2409;

								obj_t BgL_arg4860z00_2410;

								BgL_arg4859z00_2409 =
									(((BgL_selectz00_bglt) CREF(BgL_ez00_2399))->
									BgL_itemzd2typezd2);
								{	/* SawMill/node2rtl.scm 234 */
									obj_t BgL_arg4861z00_2411;

									BgL_arg4861z00_2411 =
										(((BgL_selectz00_bglt) CREF(BgL_ez00_2399))->
										BgL_clausesz00);
									BgL_arg4860z00_2410 =
										BGl_coercez00zzsaw_node2rtlz00(BgL_arg4861z00_2411);
								}
								BgL_arg4856z00_2406 =
									BGl_makezd2rtl_selectzd2zzsaw_defsz00(BFALSE,
									BgL_arg4859z00_2409, BgL_arg4860z00_2410);
							}
							BgL_arg4857z00_2407 =
								(((BgL_selectz00_bglt) CREF(BgL_ez00_2399))->BgL_testz00);
							{	/* SawMill/node2rtl.scm 233 */
								obj_t BgL_list4858z00_2408;

								BgL_list4858z00_2408 =
									MAKE_PAIR((obj_t) (BgL_arg4857z00_2407), BNIL);
								BgL_arg4853z00_2403 =
									BGl_callza2za2zzsaw_node2rtlz00(
									(obj_t) (BgL_ez00_2399),
									(BgL_rtl_funz00_bglt) (BgL_arg4856z00_2406),
									BgL_list4858z00_2408);
							}
						}
						{	/* SawMill/node2rtl.scm 236 */
							obj_t BgL_l4263z00_2412;

							BgL_l4263z00_2412 =
								(((BgL_selectz00_bglt) CREF(BgL_ez00_2399))->BgL_clausesz00);
							if (NULLP(BgL_l4263z00_2412))
								{	/* SawMill/node2rtl.scm 236 */
									BgL_arg4854z00_2404 = BNIL;
								}
							else
								{	/* SawMill/node2rtl.scm 236 */
									obj_t BgL_head4265z00_2414;

									BgL_head4265z00_2414 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l4263z00_2416;

										obj_t BgL_tail4266z00_2417;

										BgL_l4263z00_2416 = BgL_l4263z00_2412;
										BgL_tail4266z00_2417 = BgL_head4265z00_2414;
									BgL_zc3anonymousza34863ze3z83_2418:
										if (NULLP(BgL_l4263z00_2416))
											{	/* SawMill/node2rtl.scm 236 */
												BgL_arg4854z00_2404 = CDR(BgL_head4265z00_2414);
											}
										else
											{	/* SawMill/node2rtl.scm 236 */
												obj_t BgL_newtail4267z00_2420;

												{	/* SawMill/node2rtl.scm 236 */
													BgL_areaz00_bglt BgL_arg4866z00_2422;

													{	/* SawMill/node2rtl.scm 236 */
														obj_t BgL_cz00_2424;

														BgL_cz00_2424 = CAR(BgL_l4263z00_2416);
														{	/* SawMill/node2rtl.scm 236 */
															obj_t BgL_arg4868z00_2425;

															BgL_arg4868z00_2425 = CDR(BgL_cz00_2424);
															{	/* SawMill/node2rtl.scm 236 */
																BgL_areaz00_bglt BgL_res5158z00_3825;

																{	/* SawMill/node2rtl.scm 236 */
																	BgL_nodez00_bglt BgL_ez00_3799;

																	BgL_ez00_3799 =
																		(BgL_nodez00_bglt) (BgL_arg4868z00_2425);
																	{	/* SawMill/node2rtl.scm 236 */
																		obj_t BgL_method4301z00_3800;

																		{	/* SawMill/node2rtl.scm 236 */
																			BgL_objectz00_bglt BgL_objz00_3801;

																			BgL_objz00_3801 =
																				(BgL_objectz00_bglt) (BgL_ez00_3799);
																			{	/* SawMill/node2rtl.scm 236 */
																				long BgL_objzd2classzd2numz00_3802;

																				BgL_objzd2classzd2numz00_3802 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3801);
																				{	/* SawMill/node2rtl.scm 236 */
																					obj_t BgL_arg2643z00_3803;

																					BgL_arg2643z00_3803 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
																						(int) (((long) 1)));
																					{	/* SawMill/node2rtl.scm 236 */
																						obj_t BgL_arrayz00_3805;

																						int BgL_offsetz00_3806;

																						BgL_arrayz00_3805 =
																							BgL_arg2643z00_3803;
																						BgL_offsetz00_3806 =
																							(int)
																							(BgL_objzd2classzd2numz00_3802);
																						{	/* SawMill/node2rtl.scm 236 */
																							long BgL_offsetz00_3807;

																							BgL_offsetz00_3807 =
																								(
																								(long) (BgL_offsetz00_3806) -
																								OBJECT_TYPE);
																							{	/* SawMill/node2rtl.scm 236 */
																								long BgL_modz00_3808;

																								{	/* SawMill/node2rtl.scm 236 */
																									int BgL_arg2645z00_3809;

																									BgL_arg2645z00_3809 =
																										(int) (((long) 16));
																									{	/* SawMill/node2rtl.scm 236 */
																										long BgL_auxz00_6112;

																										BgL_auxz00_6112 =
																											(long)
																											(BgL_arg2645z00_3809);
																										BgL_modz00_3808 =
																											(BgL_offsetz00_3807 /
																											BgL_auxz00_6112);
																								}}
																								{	/* SawMill/node2rtl.scm 236 */
																									long BgL_restz00_3810;

																									{	/* SawMill/node2rtl.scm 236 */
																										int BgL_arg2644z00_3811;

																										BgL_arg2644z00_3811 =
																											(int) (((long) 16));
																										{	/* SawMill/node2rtl.scm 236 */
																											long BgL_auxz00_6116;

																											BgL_auxz00_6116 =
																												(long)
																												(BgL_arg2644z00_3811);
																											BgL_restz00_3810 =
																												(BgL_offsetz00_3807 %
																												BgL_auxz00_6116);
																									}}
																									{	/* SawMill/node2rtl.scm 236 */

																										BgL_method4301z00_3800 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3805,
																												(int)
																												(BgL_modz00_3808)),
																											(int) (BgL_restz00_3810));
																		}}}}}}}}
																		BgL_res5158z00_3825 =
																			(BgL_areaz00_bglt) (PROCEDURE_ENTRY
																			(BgL_method4301z00_3800)
																			(BgL_method4301z00_3800,
																				(obj_t) (BgL_ez00_3799), BEOA));
																}}
																BgL_arg4866z00_2422 = BgL_res5158z00_3825;
													}}}
													BgL_newtail4267z00_2420 =
														MAKE_PAIR((obj_t) (BgL_arg4866z00_2422), BNIL);
												}
												SET_CDR(BgL_tail4266z00_2417, BgL_newtail4267z00_2420);
												{
													obj_t BgL_tail4266z00_6132;

													obj_t BgL_l4263z00_6130;

													BgL_l4263z00_6130 = CDR(BgL_l4263z00_2416);
													BgL_tail4266z00_6132 = BgL_newtail4267z00_2420;
													BgL_tail4266z00_2417 = BgL_tail4266z00_6132;
													BgL_l4263z00_2416 = BgL_l4263z00_6130;
													goto BgL_zc3anonymousza34863ze3z83_2418;
												}
											}
									}
								}
						}
						BgL_arg4855z00_2405 =
							BGl_newzd2regzd2zzsaw_node2rtlz00(
							(BgL_nodez00_bglt) (BgL_ez00_2399));
						BgL_auxz00_6083 =
							BGl_forkzf2joinzf2zzsaw_node2rtlz00(BgL_arg4853z00_2403,
							BgL_arg4854z00_2404, BgL_arg4855z00_2405);
					}
					return (obj_t) (BgL_auxz00_6083);
				}
			}
		}
	}



/* node->rtl-conditiona4314 */
	obj_t BGl_nodezd2ze3rtlzd2conditiona4314ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4410, obj_t BgL_ez00_4411)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 225 */
			{
				BgL_conditionalz00_bglt BgL_ez00_2383;

				{	/* SawMill/node2rtl.scm 226 */
					BgL_areaz00_bglt BgL_auxz00_6138;

					BgL_ez00_2383 = (BgL_conditionalz00_bglt) (BgL_ez00_4411);
					{	/* SawMill/node2rtl.scm 227 */
						BgL_nodez00_bglt BgL_arg4841z00_2387;

						obj_t BgL_arg4842z00_2388;

						BgL_arg4841z00_2387 =
							(((BgL_conditionalz00_bglt) CREF(BgL_ez00_2383))->BgL_testz00);
						{	/* SawMill/node2rtl.scm 227 */
							obj_t BgL_arg4844z00_2389;

							BgL_rtl_regz00_bglt BgL_arg4845z00_2390;

							{	/* SawMill/node2rtl.scm 227 */
								BgL_areaz00_bglt BgL_arg4846z00_2391;

								BgL_areaz00_bglt BgL_arg4847z00_2392;

								{	/* SawMill/node2rtl.scm 227 */
									BgL_nodez00_bglt BgL_arg4850z00_2395;

									BgL_arg4850z00_2395 =
										(((BgL_conditionalz00_bglt) CREF(BgL_ez00_2383))->
										BgL_truez00);
									{	/* SawMill/node2rtl.scm 227 */
										BgL_areaz00_bglt BgL_res5148z00_3726;

										{	/* SawMill/node2rtl.scm 227 */
											obj_t BgL_method4301z00_3701;

											{	/* SawMill/node2rtl.scm 227 */
												BgL_objectz00_bglt BgL_objz00_3702;

												BgL_objz00_3702 =
													(BgL_objectz00_bglt) (BgL_arg4850z00_2395);
												{	/* SawMill/node2rtl.scm 227 */
													long BgL_objzd2classzd2numz00_3703;

													BgL_objzd2classzd2numz00_3703 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3702);
													{	/* SawMill/node2rtl.scm 227 */
														obj_t BgL_arg2643z00_3704;

														BgL_arg2643z00_3704 =
															PROCEDURE_REF
															(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
															(int) (((long) 1)));
														{	/* SawMill/node2rtl.scm 227 */
															obj_t BgL_arrayz00_3706;

															int BgL_offsetz00_3707;

															BgL_arrayz00_3706 = BgL_arg2643z00_3704;
															BgL_offsetz00_3707 =
																(int) (BgL_objzd2classzd2numz00_3703);
															{	/* SawMill/node2rtl.scm 227 */
																long BgL_offsetz00_3708;

																BgL_offsetz00_3708 =
																	((long) (BgL_offsetz00_3707) - OBJECT_TYPE);
																{	/* SawMill/node2rtl.scm 227 */
																	long BgL_modz00_3709;

																	{	/* SawMill/node2rtl.scm 227 */
																		int BgL_arg2645z00_3710;

																		BgL_arg2645z00_3710 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 227 */
																			long BgL_auxz00_6149;

																			BgL_auxz00_6149 =
																				(long) (BgL_arg2645z00_3710);
																			BgL_modz00_3709 =
																				(BgL_offsetz00_3708 / BgL_auxz00_6149);
																	}}
																	{	/* SawMill/node2rtl.scm 227 */
																		long BgL_restz00_3711;

																		{	/* SawMill/node2rtl.scm 227 */
																			int BgL_arg2644z00_3712;

																			BgL_arg2644z00_3712 = (int) (((long) 16));
																			{	/* SawMill/node2rtl.scm 227 */
																				long BgL_auxz00_6153;

																				BgL_auxz00_6153 =
																					(long) (BgL_arg2644z00_3712);
																				BgL_restz00_3711 =
																					(BgL_offsetz00_3708 %
																					BgL_auxz00_6153);
																		}}
																		{	/* SawMill/node2rtl.scm 227 */

																			BgL_method4301z00_3701 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3706,
																					(int) (BgL_modz00_3709)),
																				(int) (BgL_restz00_3711));
											}}}}}}}}
											BgL_res5148z00_3726 =
												(BgL_areaz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4301z00_3701) (BgL_method4301z00_3701,
													(obj_t) (BgL_arg4850z00_2395), BEOA));
										}
										BgL_arg4846z00_2391 = BgL_res5148z00_3726;
								}}
								{	/* SawMill/node2rtl.scm 227 */
									BgL_nodez00_bglt BgL_arg4851z00_2396;

									BgL_arg4851z00_2396 =
										(((BgL_conditionalz00_bglt) CREF(BgL_ez00_2383))->
										BgL_falsez00);
									{	/* SawMill/node2rtl.scm 227 */
										BgL_areaz00_bglt BgL_res5151z00_3754;

										{	/* SawMill/node2rtl.scm 227 */
											obj_t BgL_method4301z00_3729;

											{	/* SawMill/node2rtl.scm 227 */
												BgL_objectz00_bglt BgL_objz00_3730;

												BgL_objz00_3730 =
													(BgL_objectz00_bglt) (BgL_arg4851z00_2396);
												{	/* SawMill/node2rtl.scm 227 */
													long BgL_objzd2classzd2numz00_3731;

													BgL_objzd2classzd2numz00_3731 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3730);
													{	/* SawMill/node2rtl.scm 227 */
														obj_t BgL_arg2643z00_3732;

														BgL_arg2643z00_3732 =
															PROCEDURE_REF
															(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
															(int) (((long) 1)));
														{	/* SawMill/node2rtl.scm 227 */
															obj_t BgL_arrayz00_3734;

															int BgL_offsetz00_3735;

															BgL_arrayz00_3734 = BgL_arg2643z00_3732;
															BgL_offsetz00_3735 =
																(int) (BgL_objzd2classzd2numz00_3731);
															{	/* SawMill/node2rtl.scm 227 */
																long BgL_offsetz00_3736;

																BgL_offsetz00_3736 =
																	((long) (BgL_offsetz00_3735) - OBJECT_TYPE);
																{	/* SawMill/node2rtl.scm 227 */
																	long BgL_modz00_3737;

																	{	/* SawMill/node2rtl.scm 227 */
																		int BgL_arg2645z00_3738;

																		BgL_arg2645z00_3738 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 227 */
																			long BgL_auxz00_6173;

																			BgL_auxz00_6173 =
																				(long) (BgL_arg2645z00_3738);
																			BgL_modz00_3737 =
																				(BgL_offsetz00_3736 / BgL_auxz00_6173);
																	}}
																	{	/* SawMill/node2rtl.scm 227 */
																		long BgL_restz00_3739;

																		{	/* SawMill/node2rtl.scm 227 */
																			int BgL_arg2644z00_3740;

																			BgL_arg2644z00_3740 = (int) (((long) 16));
																			{	/* SawMill/node2rtl.scm 227 */
																				long BgL_auxz00_6177;

																				BgL_auxz00_6177 =
																					(long) (BgL_arg2644z00_3740);
																				BgL_restz00_3739 =
																					(BgL_offsetz00_3736 %
																					BgL_auxz00_6177);
																		}}
																		{	/* SawMill/node2rtl.scm 227 */

																			BgL_method4301z00_3729 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3734,
																					(int) (BgL_modz00_3737)),
																				(int) (BgL_restz00_3739));
											}}}}}}}}
											BgL_res5151z00_3754 =
												(BgL_areaz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4301z00_3729) (BgL_method4301z00_3729,
													(obj_t) (BgL_arg4851z00_2396), BEOA));
										}
										BgL_arg4847z00_2392 = BgL_res5151z00_3754;
								}}
								{	/* SawMill/node2rtl.scm 227 */
									obj_t BgL_list4848z00_2393;

									{	/* SawMill/node2rtl.scm 227 */
										obj_t BgL_arg4849z00_2394;

										BgL_arg4849z00_2394 =
											MAKE_PAIR((obj_t) (BgL_arg4847z00_2392), BNIL);
										BgL_list4848z00_2393 =
											MAKE_PAIR(
											(obj_t) (BgL_arg4846z00_2391), BgL_arg4849z00_2394);
									}
									BgL_arg4844z00_2389 = BgL_list4848z00_2393;
							}}
							BgL_arg4845z00_2390 =
								BGl_newzd2regzd2zzsaw_node2rtlz00(
								(BgL_nodez00_bglt) (BgL_ez00_2383));
							BgL_arg4842z00_2388 =
								BGl_joinz00zzsaw_node2rtlz00(BgL_arg4844z00_2389,
								BgL_arg4845z00_2390);
						}
						{	/* SawMill/node2rtl.scm 227 */
							BgL_areaz00_bglt BgL_res5155z00_3784;

							{	/* SawMill/node2rtl.scm 227 */
								obj_t BgL_method4361z00_3759;

								{	/* SawMill/node2rtl.scm 227 */
									BgL_objectz00_bglt BgL_objz00_3760;

									BgL_objz00_3760 = (BgL_objectz00_bglt) (BgL_arg4841z00_2387);
									{	/* SawMill/node2rtl.scm 227 */
										long BgL_objzd2classzd2numz00_3761;

										BgL_objzd2classzd2numz00_3761 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3760);
										{	/* SawMill/node2rtl.scm 227 */
											obj_t BgL_arg2643z00_3762;

											BgL_arg2643z00_3762 =
												PROCEDURE_REF(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
												(int) (((long) 1)));
											{	/* SawMill/node2rtl.scm 227 */
												obj_t BgL_arrayz00_3764;

												int BgL_offsetz00_3765;

												BgL_arrayz00_3764 = BgL_arg2643z00_3762;
												BgL_offsetz00_3765 =
													(int) (BgL_objzd2classzd2numz00_3761);
												{	/* SawMill/node2rtl.scm 227 */
													long BgL_offsetz00_3766;

													BgL_offsetz00_3766 =
														((long) (BgL_offsetz00_3765) - OBJECT_TYPE);
													{	/* SawMill/node2rtl.scm 227 */
														long BgL_modz00_3767;

														{	/* SawMill/node2rtl.scm 227 */
															int BgL_arg2645z00_3768;

															BgL_arg2645z00_3768 = (int) (((long) 16));
															{	/* SawMill/node2rtl.scm 227 */
																long BgL_auxz00_6203;

																BgL_auxz00_6203 = (long) (BgL_arg2645z00_3768);
																BgL_modz00_3767 =
																	(BgL_offsetz00_3766 / BgL_auxz00_6203);
														}}
														{	/* SawMill/node2rtl.scm 227 */
															long BgL_restz00_3769;

															{	/* SawMill/node2rtl.scm 227 */
																int BgL_arg2644z00_3770;

																BgL_arg2644z00_3770 = (int) (((long) 16));
																{	/* SawMill/node2rtl.scm 227 */
																	long BgL_auxz00_6207;

																	BgL_auxz00_6207 =
																		(long) (BgL_arg2644z00_3770);
																	BgL_restz00_3769 =
																		(BgL_offsetz00_3766 % BgL_auxz00_6207);
															}}
															{	/* SawMill/node2rtl.scm 227 */

																BgL_method4361z00_3759 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3764,
																		(int) (BgL_modz00_3767)),
																	(int) (BgL_restz00_3769));
								}}}}}}}}
								BgL_res5155z00_3784 =
									(BgL_areaz00_bglt) (PROCEDURE_ENTRY(BgL_method4361z00_3759)
									(BgL_method4361z00_3759, (obj_t) (BgL_arg4841z00_2387),
										BgL_arg4842z00_2388, BEOA));
							}
							BgL_auxz00_6138 = BgL_res5155z00_3784;
					}}
					return (obj_t) (BgL_auxz00_6138);
				}
			}
		}
	}



/* node->rtl-sequence4311 */
	obj_t BGl_nodezd2ze3rtlzd2sequence4311ze3zzsaw_node2rtlz00(obj_t
		BgL_envz00_4412, obj_t BgL_ez00_4413)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 220 */
			{
				BgL_sequencez00_bglt BgL_ez00_2362;

				{	/* SawMill/node2rtl.scm 221 */
					BgL_areaz00_bglt BgL_auxz00_6220;

					BgL_ez00_2362 = (BgL_sequencez00_bglt) (BgL_ez00_4413);
					{	/* SawMill/node2rtl.scm 222 */
						obj_t BgL_arg4833z00_2366;

						{	/* SawMill/node2rtl.scm 222 */
							obj_t BgL_l4258z00_2367;

							BgL_l4258z00_2367 =
								(((BgL_sequencez00_bglt) CREF(BgL_ez00_2362))->BgL_nodesz00);
							if (NULLP(BgL_l4258z00_2367))
								{	/* SawMill/node2rtl.scm 222 */
									BgL_arg4833z00_2366 = BNIL;
								}
							else
								{	/* SawMill/node2rtl.scm 222 */
									obj_t BgL_head4260z00_2369;

									BgL_head4260z00_2369 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l4258z00_2371;

										obj_t BgL_tail4261z00_2372;

										BgL_l4258z00_2371 = BgL_l4258z00_2367;
										BgL_tail4261z00_2372 = BgL_head4260z00_2369;
									BgL_zc3anonymousza34835ze3z83_2373:
										if (NULLP(BgL_l4258z00_2371))
											{	/* SawMill/node2rtl.scm 222 */
												BgL_arg4833z00_2366 = CDR(BgL_head4260z00_2369);
											}
										else
											{	/* SawMill/node2rtl.scm 222 */
												obj_t BgL_newtail4262z00_2375;

												{	/* SawMill/node2rtl.scm 222 */
													BgL_areaz00_bglt BgL_arg4838z00_2377;

													{	/* SawMill/node2rtl.scm 222 */
														obj_t BgL_ez00_2379;

														BgL_ez00_2379 = CAR(BgL_l4258z00_2371);
														{	/* SawMill/node2rtl.scm 222 */
															BgL_areaz00_bglt BgL_res5145z00_3692;

															{	/* SawMill/node2rtl.scm 222 */
																BgL_nodez00_bglt BgL_ez00_3666;

																BgL_ez00_3666 =
																	(BgL_nodez00_bglt) (BgL_ez00_2379);
																{	/* SawMill/node2rtl.scm 222 */
																	obj_t BgL_method4301z00_3667;

																	{	/* SawMill/node2rtl.scm 222 */
																		BgL_objectz00_bglt BgL_objz00_3668;

																		BgL_objz00_3668 =
																			(BgL_objectz00_bglt) (BgL_ez00_3666);
																		{	/* SawMill/node2rtl.scm 222 */
																			long BgL_objzd2classzd2numz00_3669;

																			BgL_objzd2classzd2numz00_3669 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_3668);
																			{	/* SawMill/node2rtl.scm 222 */
																				obj_t BgL_arg2643z00_3670;

																				BgL_arg2643z00_3670 =
																					PROCEDURE_REF
																					(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
																					(int) (((long) 1)));
																				{	/* SawMill/node2rtl.scm 222 */
																					obj_t BgL_arrayz00_3672;

																					int BgL_offsetz00_3673;

																					BgL_arrayz00_3672 =
																						BgL_arg2643z00_3670;
																					BgL_offsetz00_3673 =
																						(int)
																						(BgL_objzd2classzd2numz00_3669);
																					{	/* SawMill/node2rtl.scm 222 */
																						long BgL_offsetz00_3674;

																						BgL_offsetz00_3674 =
																							(
																							(long) (BgL_offsetz00_3673) -
																							OBJECT_TYPE);
																						{	/* SawMill/node2rtl.scm 222 */
																							long BgL_modz00_3675;

																							{	/* SawMill/node2rtl.scm 222 */
																								int BgL_arg2645z00_3676;

																								BgL_arg2645z00_3676 =
																									(int) (((long) 16));
																								{	/* SawMill/node2rtl.scm 222 */
																									long BgL_auxz00_6238;

																									BgL_auxz00_6238 =
																										(long)
																										(BgL_arg2645z00_3676);
																									BgL_modz00_3675 =
																										(BgL_offsetz00_3674 /
																										BgL_auxz00_6238);
																							}}
																							{	/* SawMill/node2rtl.scm 222 */
																								long BgL_restz00_3677;

																								{	/* SawMill/node2rtl.scm 222 */
																									int BgL_arg2644z00_3678;

																									BgL_arg2644z00_3678 =
																										(int) (((long) 16));
																									{	/* SawMill/node2rtl.scm 222 */
																										long BgL_auxz00_6242;

																										BgL_auxz00_6242 =
																											(long)
																											(BgL_arg2644z00_3678);
																										BgL_restz00_3677 =
																											(BgL_offsetz00_3674 %
																											BgL_auxz00_6242);
																								}}
																								{	/* SawMill/node2rtl.scm 222 */

																									BgL_method4301z00_3667 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_3672,
																											(int) (BgL_modz00_3675)),
																										(int) (BgL_restz00_3677));
																	}}}}}}}}
																	BgL_res5145z00_3692 =
																		(BgL_areaz00_bglt) (PROCEDURE_ENTRY
																		(BgL_method4301z00_3667)
																		(BgL_method4301z00_3667,
																			(obj_t) (BgL_ez00_3666), BEOA));
															}}
															BgL_arg4838z00_2377 = BgL_res5145z00_3692;
													}}
													BgL_newtail4262z00_2375 =
														MAKE_PAIR((obj_t) (BgL_arg4838z00_2377), BNIL);
												}
												SET_CDR(BgL_tail4261z00_2372, BgL_newtail4262z00_2375);
												{
													obj_t BgL_tail4261z00_6258;

													obj_t BgL_l4258z00_6256;

													BgL_l4258z00_6256 = CDR(BgL_l4258z00_2371);
													BgL_tail4261z00_6258 = BgL_newtail4262z00_2375;
													BgL_tail4261z00_2372 = BgL_tail4261z00_6258;
													BgL_l4258z00_2371 = BgL_l4258z00_6256;
													goto BgL_zc3anonymousza34835ze3z83_2373;
												}
											}
									}
								}
						}
						BgL_auxz00_6220 =
							BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg4833z00_2366);
					}
					return (obj_t) (BgL_auxz00_6220);
				}
			}
		}
	}



/* node->rtl-setq4309 */
	obj_t BGl_nodezd2ze3rtlzd2setq4309ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4414,
		obj_t BgL_ez00_4415)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 211 */
			{
				BgL_setqz00_bglt BgL_ez00_2342;

				{	/* SawMill/node2rtl.scm 212 */
					BgL_areaz00_bglt BgL_auxz00_6262;

					BgL_ez00_2342 = (BgL_setqz00_bglt) (BgL_ez00_4415);
					{	/* SawMill/node2rtl.scm 213 */
						BgL_varz00_bglt BgL_instance4114z00_2346;

						BgL_instance4114z00_2346 =
							(((BgL_setqz00_bglt) CREF(BgL_ez00_2342))->BgL_varz00);
						{	/* SawMill/node2rtl.scm 214 */
							BgL_areaz00_bglt BgL_arg4819z00_2347;

							BgL_areaz00_bglt BgL_arg4820z00_2348;

							{	/* SawMill/node2rtl.scm 214 */
								bool_t BgL_testz00_6264;

								{	/* SawMill/node2rtl.scm 214 */
									BgL_variablez00_bglt BgL_arg4829z00_2357;

									BgL_arg4829z00_2357 =
										(((BgL_varz00_bglt) CREF(BgL_instance4114z00_2346))->
										BgL_variablez00);
									{	/* SawMill/node2rtl.scm 214 */
										obj_t BgL_obj1751z00_3640;

										BgL_obj1751z00_3640 = (obj_t) (BgL_arg4829z00_2357);
										BgL_testz00_6264 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_3640,
											BGl_globalz00zzast_varz00);
									}
								}
								if (BgL_testz00_6264)
									{	/* SawMill/node2rtl.scm 215 */
										BgL_rtl_storegz00_bglt BgL_arg4822z00_2350;

										BgL_nodez00_bglt BgL_arg4823z00_2351;

										{	/* SawMill/node2rtl.scm 215 */
											BgL_variablez00_bglt BgL_arg4825z00_2353;

											BgL_arg4825z00_2353 =
												(((BgL_varz00_bglt) CREF(BgL_instance4114z00_2346))->
												BgL_variablez00);
											BgL_arg4822z00_2350 =
												BGl_makezd2rtl_storegzd2zzsaw_defsz00(BFALSE,
												(BgL_globalz00_bglt) (BgL_arg4825z00_2353));
										}
										BgL_arg4823z00_2351 =
											(((BgL_setqz00_bglt) CREF(BgL_ez00_2342))->BgL_valuez00);
										{	/* SawMill/node2rtl.scm 215 */
											obj_t BgL_list4824z00_2352;

											BgL_list4824z00_2352 =
												MAKE_PAIR((obj_t) (BgL_arg4823z00_2351), BNIL);
											BgL_arg4819z00_2347 =
												BGl_callza2za2zzsaw_node2rtlz00(
												(obj_t) (BgL_ez00_2342),
												(BgL_rtl_funz00_bglt) (BgL_arg4822z00_2350),
												BgL_list4824z00_2352);
										}
									}
								else
									{	/* SawMill/node2rtl.scm 216 */
										BgL_nodez00_bglt BgL_arg4826z00_2354;

										BgL_rtl_regz00_bglt BgL_arg4827z00_2355;

										BgL_arg4826z00_2354 =
											(((BgL_setqz00_bglt) CREF(BgL_ez00_2342))->BgL_valuez00);
										{	/* SawMill/node2rtl.scm 216 */
											BgL_variablez00_bglt BgL_arg4828z00_2356;

											BgL_arg4828z00_2356 =
												(((BgL_varz00_bglt) CREF(BgL_instance4114z00_2346))->
												BgL_variablez00);
											BgL_arg4827z00_2355 =
												BGl_localzd2ze3regz31zzsaw_node2rtlz00(
												(BgL_localz00_bglt) (BgL_arg4828z00_2356));
										}
										{	/* SawMill/node2rtl.scm 216 */
											BgL_areaz00_bglt BgL_res5142z00_3655;

											{	/* SawMill/node2rtl.scm 216 */
												BgL_areaz00_bglt BgL_az00_3650;

												BgL_az00_3650 =
													BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
													(BgL_arg4826z00_2354);
												{	/* SawMill/node2rtl.scm 216 */
													BgL_blockz00_bglt BgL_arg4426z00_3653;

													BgL_arg4426z00_3653 =
														(((BgL_areaz00_bglt) CREF(BgL_az00_3650))->
														BgL_exitz00);
													BGl_bdestinationz12z12zzsaw_node2rtlz00
														(BgL_arg4426z00_3653, BgL_arg4827z00_2355);
												}
												BgL_res5142z00_3655 = BgL_az00_3650;
											}
											BgL_arg4819z00_2347 = BgL_res5142z00_3655;
										}
									}
							}
							{	/* SawMill/node2rtl.scm 217 */
								BgL_rtl_nopz00_bglt BgL_arg4830z00_2358;

								BgL_arg4830z00_2358 =
									BGl_makezd2rtl_nopzd2zzsaw_defsz00(BFALSE);
								BgL_arg4820z00_2348 =
									BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
									(BgL_rtl_funz00_bglt) (BgL_arg4830z00_2358), BNIL);
							}
							BgL_auxz00_6262 =
								BGl_linkz00zzsaw_node2rtlz00(BgL_arg4819z00_2347,
								BgL_arg4820z00_2348);
						}
					}
					return (obj_t) (BgL_auxz00_6262);
				}
			}
		}
	}



/* node->rtl-let-var4307 */
	obj_t BGl_nodezd2ze3rtlzd2letzd2var4307z31zzsaw_node2rtlz00(obj_t
		BgL_envz00_4416, obj_t BgL_ez00_4417)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 194 */
			{
				BgL_letzd2varzd2_bglt BgL_ez00_2290;

				{	/* SawMill/node2rtl.scm 195 */
					BgL_areaz00_bglt BgL_auxz00_6290;

					BgL_ez00_2290 = (BgL_letzd2varzd2_bglt) (BgL_ez00_4417);
					{	/* SawMill/node2rtl.scm 197 */
						bool_t BgL_testz00_6291;

						{	/* SawMill/node2rtl.scm 197 */
							bool_t BgL_testz00_6292;

							{	/* SawMill/node2rtl.scm 197 */
								BgL_nodez00_bglt BgL_arg4816z00_2339;

								BgL_arg4816z00_2339 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->BgL_bodyz00);
								{	/* SawMill/node2rtl.scm 197 */
									obj_t BgL_obj2945z00_3527;

									BgL_obj2945z00_3527 = (obj_t) (BgL_arg4816z00_2339);
									BgL_testz00_6292 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2945z00_3527,
										BGl_conditionalz00zzast_nodez00);
								}
							}
							if (BgL_testz00_6292)
								{	/* SawMill/node2rtl.scm 197 */
									if (NULLP(
											(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
												BgL_bindingsz00)))
										{	/* SawMill/node2rtl.scm 198 */
											BgL_testz00_6291 = ((bool_t) 0);
										}
									else
										{	/* SawMill/node2rtl.scm 199 */
											bool_t BgL_testz00_6299;

											{	/* SawMill/node2rtl.scm 199 */
												obj_t BgL_auxz00_6300;

												{	/* SawMill/node2rtl.scm 199 */
													obj_t BgL_pairz00_3531;

													BgL_pairz00_3531 =
														(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
														BgL_bindingsz00);
													BgL_auxz00_6300 = CDR(BgL_pairz00_3531);
												}
												BgL_testz00_6299 = NULLP(BgL_auxz00_6300);
											}
											if (BgL_testz00_6299)
												{	/* SawMill/node2rtl.scm 200 */
													bool_t BgL_testz00_6304;

													{	/* SawMill/node2rtl.scm 200 */
														BgL_nodez00_bglt BgL_arg4811z00_2334;

														{	/* SawMill/node2rtl.scm 200 */
															BgL_conditionalz00_bglt BgL_obj2912z00_3534;

															BgL_obj2912z00_3534 =
																(BgL_conditionalz00_bglt) (
																(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
																	BgL_bodyz00));
															BgL_arg4811z00_2334 =
																(((BgL_conditionalz00_bglt)
																	CREF(BgL_obj2912z00_3534))->BgL_testz00);
														}
														{	/* SawMill/node2rtl.scm 200 */
															obj_t BgL_obj2170z00_3535;

															BgL_obj2170z00_3535 =
																(obj_t) (BgL_arg4811z00_2334);
															BgL_testz00_6304 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2170z00_3535, BGl_varz00zzast_nodez00);
														}
													}
													if (BgL_testz00_6304)
														{	/* SawMill/node2rtl.scm 201 */
															bool_t BgL_testz00_6310;

															{	/* SawMill/node2rtl.scm 201 */
																long BgL_auxz00_6311;

																{	/* SawMill/node2rtl.scm 201 */
																	BgL_variablez00_bglt BgL_obj1623z00_3541;

																	{	/* SawMill/node2rtl.scm 201 */
																		obj_t BgL_auxz00_6312;

																		{	/* SawMill/node2rtl.scm 201 */
																			obj_t BgL_pairz00_3537;

																			BgL_pairz00_3537 =
																				(((BgL_letzd2varzd2_bglt)
																					CREF(BgL_ez00_2290))->
																				BgL_bindingsz00);
																			BgL_auxz00_6312 =
																				CAR(CAR(BgL_pairz00_3537));
																		}
																		BgL_obj1623z00_3541 =
																			(BgL_variablez00_bglt) (BgL_auxz00_6312);
																	}
																	BgL_auxz00_6311 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_obj1623z00_3541))->
																		BgL_occurrencez00);
																}
																BgL_testz00_6310 =
																	(((long) 1) == BgL_auxz00_6311);
															}
															if (BgL_testz00_6310)
																{	/* SawMill/node2rtl.scm 202 */
																	obj_t BgL_auxz00_6323;

																	obj_t BgL_auxz00_6319;

																	{	/* SawMill/node2rtl.scm 202 */
																		BgL_variablez00_bglt BgL_auxz00_6324;

																		{	/* SawMill/node2rtl.scm 202 */
																			BgL_varz00_bglt BgL_obj2155z00_3551;

																			{	/* SawMill/node2rtl.scm 202 */
																				BgL_nodez00_bglt BgL_auxz00_6325;

																				{	/* SawMill/node2rtl.scm 202 */
																					BgL_conditionalz00_bglt
																						BgL_obj2912z00_3550;
																					BgL_obj2912z00_3550 =
																						(BgL_conditionalz00_bglt) (((
																								(BgL_letzd2varzd2_bglt)
																								CREF(BgL_ez00_2290))->
																							BgL_bodyz00));
																					BgL_auxz00_6325 =
																						(((BgL_conditionalz00_bglt)
																							CREF(BgL_obj2912z00_3550))->
																						BgL_testz00);
																				}
																				BgL_obj2155z00_3551 =
																					(BgL_varz00_bglt) (BgL_auxz00_6325);
																			}
																			BgL_auxz00_6324 =
																				(((BgL_varz00_bglt)
																					CREF(BgL_obj2155z00_3551))->
																				BgL_variablez00);
																		}
																		BgL_auxz00_6323 = (obj_t) (BgL_auxz00_6324);
																	}
																	{	/* SawMill/node2rtl.scm 202 */
																		obj_t BgL_pairz00_3545;

																		BgL_pairz00_3545 =
																			(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_ez00_2290))->BgL_bindingsz00);
																		BgL_auxz00_6319 =
																			CAR(CAR(BgL_pairz00_3545));
																	}
																	BgL_testz00_6291 =
																		(BgL_auxz00_6319 == BgL_auxz00_6323);
																}
															else
																{	/* SawMill/node2rtl.scm 201 */
																	BgL_testz00_6291 = ((bool_t) 0);
																}
														}
													else
														{	/* SawMill/node2rtl.scm 200 */
															BgL_testz00_6291 = ((bool_t) 0);
														}
												}
											else
												{	/* SawMill/node2rtl.scm 199 */
													BgL_testz00_6291 = ((bool_t) 0);
												}
										}
								}
							else
								{	/* SawMill/node2rtl.scm 197 */
									BgL_testz00_6291 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_6291)
							{	/* SawMill/node2rtl.scm 197 */
								{	/* SawMill/node2rtl.scm 203 */
									BgL_nodez00_bglt BgL_arg4776z00_2295;

									obj_t BgL_arg4777z00_2296;

									BgL_arg4776z00_2295 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
										BgL_bodyz00);
									{	/* SawMill/node2rtl.scm 203 */
										obj_t BgL_pairz00_3554;

										BgL_pairz00_3554 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
											BgL_bindingsz00);
										BgL_arg4777z00_2296 = CDR(CAR(BgL_pairz00_3554));
									}
									{
										BgL_nodez00_bglt BgL_auxz00_6339;

										BgL_conditionalz00_bglt BgL_auxz00_6337;

										BgL_auxz00_6339 = (BgL_nodez00_bglt) (BgL_arg4777z00_2296);
										BgL_auxz00_6337 =
											(BgL_conditionalz00_bglt) (BgL_arg4776z00_2295);
										((((BgL_conditionalz00_bglt) CREF(BgL_auxz00_6337))->
												BgL_testz00) =
											((BgL_nodez00_bglt) BgL_auxz00_6339), BUNSPEC);
									}
								}
								{	/* SawMill/node2rtl.scm 204 */
									BgL_nodez00_bglt BgL_arg4780z00_2298;

									BgL_arg4780z00_2298 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
										BgL_bodyz00);
									{	/* SawMill/node2rtl.scm 204 */
										BgL_areaz00_bglt BgL_res5137z00_3587;

										{	/* SawMill/node2rtl.scm 204 */
											obj_t BgL_method4301z00_3562;

											{	/* SawMill/node2rtl.scm 204 */
												BgL_objectz00_bglt BgL_objz00_3563;

												BgL_objz00_3563 =
													(BgL_objectz00_bglt) (BgL_arg4780z00_2298);
												{	/* SawMill/node2rtl.scm 204 */
													long BgL_objzd2classzd2numz00_3564;

													BgL_objzd2classzd2numz00_3564 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3563);
													{	/* SawMill/node2rtl.scm 204 */
														obj_t BgL_arg2643z00_3565;

														BgL_arg2643z00_3565 =
															PROCEDURE_REF
															(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
															(int) (((long) 1)));
														{	/* SawMill/node2rtl.scm 204 */
															obj_t BgL_arrayz00_3567;

															int BgL_offsetz00_3568;

															BgL_arrayz00_3567 = BgL_arg2643z00_3565;
															BgL_offsetz00_3568 =
																(int) (BgL_objzd2classzd2numz00_3564);
															{	/* SawMill/node2rtl.scm 204 */
																long BgL_offsetz00_3569;

																BgL_offsetz00_3569 =
																	((long) (BgL_offsetz00_3568) - OBJECT_TYPE);
																{	/* SawMill/node2rtl.scm 204 */
																	long BgL_modz00_3570;

																	{	/* SawMill/node2rtl.scm 204 */
																		int BgL_arg2645z00_3571;

																		BgL_arg2645z00_3571 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 204 */
																			long BgL_auxz00_6351;

																			BgL_auxz00_6351 =
																				(long) (BgL_arg2645z00_3571);
																			BgL_modz00_3570 =
																				(BgL_offsetz00_3569 / BgL_auxz00_6351);
																	}}
																	{	/* SawMill/node2rtl.scm 204 */
																		long BgL_restz00_3572;

																		{	/* SawMill/node2rtl.scm 204 */
																			int BgL_arg2644z00_3573;

																			BgL_arg2644z00_3573 = (int) (((long) 16));
																			{	/* SawMill/node2rtl.scm 204 */
																				long BgL_auxz00_6355;

																				BgL_auxz00_6355 =
																					(long) (BgL_arg2644z00_3573);
																				BgL_restz00_3572 =
																					(BgL_offsetz00_3569 %
																					BgL_auxz00_6355);
																		}}
																		{	/* SawMill/node2rtl.scm 204 */

																			BgL_method4301z00_3562 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3567,
																					(int) (BgL_modz00_3570)),
																				(int) (BgL_restz00_3572));
											}}}}}}}}
											BgL_res5137z00_3587 =
												(BgL_areaz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4301z00_3562) (BgL_method4301z00_3562,
													(obj_t) (BgL_arg4780z00_2298), BEOA));
										}
										BgL_auxz00_6290 = BgL_res5137z00_3587;
							}}}
						else
							{	/* SawMill/node2rtl.scm 206 */
								BgL_areaz00_bglt BgL_arg4782z00_2299;

								BgL_areaz00_bglt BgL_arg4783z00_2300;

								{	/* SawMill/node2rtl.scm 206 */
									obj_t BgL_arg4784z00_2301;

									{	/* SawMill/node2rtl.scm 206 */
										obj_t BgL_l4253z00_2302;

										BgL_l4253z00_2302 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
											BgL_bindingsz00);
										if (NULLP(BgL_l4253z00_2302))
											{	/* SawMill/node2rtl.scm 206 */
												BgL_arg4784z00_2301 = BNIL;
											}
										else
											{	/* SawMill/node2rtl.scm 206 */
												obj_t BgL_head4255z00_2304;

												BgL_head4255z00_2304 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l4253z00_2306;

													obj_t BgL_tail4256z00_2307;

													BgL_l4253z00_2306 = BgL_l4253z00_2302;
													BgL_tail4256z00_2307 = BgL_head4255z00_2304;
												BgL_zc3anonymousza34786ze3z83_2308:
													if (NULLP(BgL_l4253z00_2306))
														{	/* SawMill/node2rtl.scm 206 */
															BgL_arg4784z00_2301 = CDR(BgL_head4255z00_2304);
														}
													else
														{	/* SawMill/node2rtl.scm 206 */
															obj_t BgL_newtail4257z00_2310;

															{	/* SawMill/node2rtl.scm 206 */
																BgL_areaz00_bglt BgL_arg4789z00_2312;

																{	/* SawMill/node2rtl.scm 206 */
																	obj_t BgL_bz00_2314;

																	BgL_bz00_2314 = CAR(BgL_l4253z00_2306);
																	{	/* SawMill/node2rtl.scm 206 */
																		obj_t BgL_arg4791z00_2315;

																		BgL_rtl_regz00_bglt BgL_arg4792z00_2316;

																		BgL_arg4791z00_2315 = CDR(BgL_bz00_2314);
																		{	/* SawMill/node2rtl.scm 206 */
																			obj_t BgL_arg4793z00_2317;

																			BgL_arg4793z00_2317 = CAR(BgL_bz00_2314);
																			BgL_arg4792z00_2316 =
																				BGl_localzd2ze3regz31zzsaw_node2rtlz00(
																				(BgL_localz00_bglt)
																				(BgL_arg4793z00_2317));
																		}
																		{	/* SawMill/node2rtl.scm 206 */
																			BgL_areaz00_bglt BgL_res5138z00_3604;

																			{	/* SawMill/node2rtl.scm 206 */
																				BgL_nodez00_bglt BgL_ez00_3597;

																				BgL_ez00_3597 =
																					(BgL_nodez00_bglt)
																					(BgL_arg4791z00_2315);
																				{	/* SawMill/node2rtl.scm 206 */
																					BgL_areaz00_bglt BgL_az00_3599;

																					BgL_az00_3599 =
																						BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
																						(BgL_ez00_3597);
																					{	/* SawMill/node2rtl.scm 206 */
																						BgL_blockz00_bglt
																							BgL_arg4426z00_3602;
																						BgL_arg4426z00_3602 =
																							(((BgL_areaz00_bglt)
																								CREF(BgL_az00_3599))->
																							BgL_exitz00);
																						BGl_bdestinationz12z12zzsaw_node2rtlz00
																							(BgL_arg4426z00_3602,
																							BgL_arg4792z00_2316);
																					}
																					BgL_res5138z00_3604 = BgL_az00_3599;
																				}
																			}
																			BgL_arg4789z00_2312 = BgL_res5138z00_3604;
																		}
																	}
																}
																BgL_newtail4257z00_2310 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg4789z00_2312), BNIL);
															}
															SET_CDR(BgL_tail4256z00_2307,
																BgL_newtail4257z00_2310);
															{
																obj_t BgL_tail4256z00_6387;

																obj_t BgL_l4253z00_6385;

																BgL_l4253z00_6385 = CDR(BgL_l4253z00_2306);
																BgL_tail4256z00_6387 = BgL_newtail4257z00_2310;
																BgL_tail4256z00_2307 = BgL_tail4256z00_6387;
																BgL_l4253z00_2306 = BgL_l4253z00_6385;
																goto BgL_zc3anonymousza34786ze3z83_2308;
															}
														}
												}
											}
									}
									BgL_arg4782z00_2299 =
										BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg4784z00_2301);
								}
								{	/* SawMill/node2rtl.scm 208 */
									BgL_nodez00_bglt BgL_arg4794z00_2319;

									BgL_arg4794z00_2319 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_ez00_2290))->
										BgL_bodyz00);
									{	/* SawMill/node2rtl.scm 208 */
										BgL_areaz00_bglt BgL_res5141z00_3637;

										{	/* SawMill/node2rtl.scm 208 */
											obj_t BgL_method4301z00_3612;

											{	/* SawMill/node2rtl.scm 208 */
												BgL_objectz00_bglt BgL_objz00_3613;

												BgL_objz00_3613 =
													(BgL_objectz00_bglt) (BgL_arg4794z00_2319);
												{	/* SawMill/node2rtl.scm 208 */
													long BgL_objzd2classzd2numz00_3614;

													BgL_objzd2classzd2numz00_3614 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3613);
													{	/* SawMill/node2rtl.scm 208 */
														obj_t BgL_arg2643z00_3615;

														BgL_arg2643z00_3615 =
															PROCEDURE_REF
															(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
															(int) (((long) 1)));
														{	/* SawMill/node2rtl.scm 208 */
															obj_t BgL_arrayz00_3617;

															int BgL_offsetz00_3618;

															BgL_arrayz00_3617 = BgL_arg2643z00_3615;
															BgL_offsetz00_3618 =
																(int) (BgL_objzd2classzd2numz00_3614);
															{	/* SawMill/node2rtl.scm 208 */
																long BgL_offsetz00_3619;

																BgL_offsetz00_3619 =
																	((long) (BgL_offsetz00_3618) - OBJECT_TYPE);
																{	/* SawMill/node2rtl.scm 208 */
																	long BgL_modz00_3620;

																	{	/* SawMill/node2rtl.scm 208 */
																		int BgL_arg2645z00_3621;

																		BgL_arg2645z00_3621 = (int) (((long) 16));
																		{	/* SawMill/node2rtl.scm 208 */
																			long BgL_auxz00_6398;

																			BgL_auxz00_6398 =
																				(long) (BgL_arg2645z00_3621);
																			BgL_modz00_3620 =
																				(BgL_offsetz00_3619 / BgL_auxz00_6398);
																	}}
																	{	/* SawMill/node2rtl.scm 208 */
																		long BgL_restz00_3622;

																		{	/* SawMill/node2rtl.scm 208 */
																			int BgL_arg2644z00_3623;

																			BgL_arg2644z00_3623 = (int) (((long) 16));
																			{	/* SawMill/node2rtl.scm 208 */
																				long BgL_auxz00_6402;

																				BgL_auxz00_6402 =
																					(long) (BgL_arg2644z00_3623);
																				BgL_restz00_3622 =
																					(BgL_offsetz00_3619 %
																					BgL_auxz00_6402);
																		}}
																		{	/* SawMill/node2rtl.scm 208 */

																			BgL_method4301z00_3612 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3617,
																					(int) (BgL_modz00_3620)),
																				(int) (BgL_restz00_3622));
											}}}}}}}}
											BgL_res5141z00_3637 =
												(BgL_areaz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4301z00_3612) (BgL_method4301z00_3612,
													(obj_t) (BgL_arg4794z00_2319), BEOA));
										}
										BgL_arg4783z00_2300 = BgL_res5141z00_3637;
								}}
								BgL_auxz00_6290 =
									BGl_linkz00zzsaw_node2rtlz00(BgL_arg4782z00_2299,
									BgL_arg4783z00_2300);
					}}
					return (obj_t) (BgL_auxz00_6290);
				}
			}
		}
	}



/* node->rtl-var4305 */
	obj_t BGl_nodezd2ze3rtlzd2var4305ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4418,
		obj_t BgL_ez00_4419)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 184 */
			{
				BgL_varz00_bglt BgL_ez00_2269;

				{	/* SawMill/node2rtl.scm 185 */
					BgL_areaz00_bglt BgL_auxz00_6416;

					BgL_ez00_2269 = (BgL_varz00_bglt) (BgL_ez00_4419);
					{	/* SawMill/node2rtl.scm 186 */
						bool_t BgL_testz00_6417;

						{	/* SawMill/node2rtl.scm 186 */
							BgL_variablez00_bglt BgL_arg4773z00_2287;

							BgL_arg4773z00_2287 =
								(((BgL_varz00_bglt) CREF(BgL_ez00_2269))->BgL_variablez00);
							{	/* SawMill/node2rtl.scm 186 */
								obj_t BgL_obj1812z00_3510;

								BgL_obj1812z00_3510 = (obj_t) (BgL_arg4773z00_2287);
								BgL_testz00_6417 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_3510,
									BGl_localz00zzast_varz00);
							}
						}
						if (BgL_testz00_6417)
							{	/* SawMill/node2rtl.scm 187 */
								BgL_rtl_movz00_bglt BgL_arg4760z00_2274;

								BgL_rtl_regz00_bglt BgL_arg4761z00_2275;

								BgL_arg4760z00_2274 =
									BGl_makezd2rtl_movzd2zzsaw_defsz00(BFALSE);
								{	/* SawMill/node2rtl.scm 187 */
									BgL_variablez00_bglt BgL_arg4763z00_2277;

									BgL_arg4763z00_2277 =
										(((BgL_varz00_bglt) CREF(BgL_ez00_2269))->BgL_variablez00);
									BgL_arg4761z00_2275 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										(BgL_localz00_bglt) (BgL_arg4763z00_2277));
								}
								{	/* SawMill/node2rtl.scm 187 */
									obj_t BgL_list4762z00_2276;

									BgL_list4762z00_2276 =
										MAKE_PAIR((obj_t) (BgL_arg4761z00_2275), BNIL);
									BgL_auxz00_6416 =
										BGl_singleza2za2zzsaw_node2rtlz00(
										(obj_t) (BgL_ez00_2269),
										(BgL_rtl_funz00_bglt) (BgL_arg4760z00_2274),
										BgL_list4762z00_2276);
								}
							}
						else
							{	/* SawMill/node2rtl.scm 188 */
								bool_t BgL_testz00_6430;

								{	/* SawMill/node2rtl.scm 188 */
									BgL_valuez00_bglt BgL_arg4771z00_2285;

									{	/* SawMill/node2rtl.scm 188 */
										BgL_variablez00_bglt BgL_obj1611z00_3516;

										BgL_obj1611z00_3516 =
											(((BgL_varz00_bglt) CREF(BgL_ez00_2269))->
											BgL_variablez00);
										BgL_arg4771z00_2285 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_3516))->
											BgL_valuez00);
									}
									{	/* SawMill/node2rtl.scm 188 */
										obj_t BgL_obj1955z00_3517;

										BgL_obj1955z00_3517 = (obj_t) (BgL_arg4771z00_2285);
										BgL_testz00_6430 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_3517,
											BGl_sfunz00zzast_varz00);
									}
								}
								if (BgL_testz00_6430)
									{	/* SawMill/node2rtl.scm 189 */
										BgL_rtl_loadfunz00_bglt BgL_arg4765z00_2279;

										{	/* SawMill/node2rtl.scm 189 */
											BgL_variablez00_bglt BgL_arg4767z00_2281;

											BgL_arg4767z00_2281 =
												(((BgL_varz00_bglt) CREF(BgL_ez00_2269))->
												BgL_variablez00);
											BgL_arg4765z00_2279 =
												BGl_makezd2rtl_loadfunzd2zzsaw_defsz00(BFALSE,
												(BgL_globalz00_bglt) (BgL_arg4767z00_2281));
										}
										BgL_auxz00_6416 =
											BGl_singleza2za2zzsaw_node2rtlz00(
											(obj_t) (BgL_ez00_2269),
											(BgL_rtl_funz00_bglt) (BgL_arg4765z00_2279), BNIL);
									}
								else
									{	/* SawMill/node2rtl.scm 191 */
										BgL_rtl_loadgz00_bglt BgL_arg4768z00_2282;

										{	/* SawMill/node2rtl.scm 191 */
											BgL_variablez00_bglt BgL_arg4770z00_2284;

											BgL_arg4770z00_2284 =
												(((BgL_varz00_bglt) CREF(BgL_ez00_2269))->
												BgL_variablez00);
											BgL_arg4768z00_2282 =
												BGl_makezd2rtl_loadgzd2zzsaw_defsz00(BFALSE,
												(BgL_globalz00_bglt) (BgL_arg4770z00_2284));
										}
										BgL_auxz00_6416 =
											BGl_singleza2za2zzsaw_node2rtlz00(
											(obj_t) (BgL_ez00_2269),
											(BgL_rtl_funz00_bglt) (BgL_arg4768z00_2282), BNIL);
									}
							}
					}
					return (obj_t) (BgL_auxz00_6416);
				}
			}
		}
	}



/* node->rtl-atom4303 */
	obj_t BGl_nodezd2ze3rtlzd2atom4303ze3zzsaw_node2rtlz00(obj_t BgL_envz00_4420,
		obj_t BgL_ez00_4421)
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 180 */
			{
				BgL_atomz00_bglt BgL_ez00_2262;

				{	/* SawMill/node2rtl.scm 181 */
					BgL_areaz00_bglt BgL_auxz00_6449;

					BgL_ez00_2262 = (BgL_atomz00_bglt) (BgL_ez00_4421);
					{	/* SawMill/node2rtl.scm 181 */
						BgL_rtl_loadiz00_bglt BgL_arg4756z00_2265;

						BgL_arg4756z00_2265 =
							BGl_makezd2rtl_loadizd2zzsaw_defsz00(BFALSE, BgL_ez00_2262);
						BgL_auxz00_6449 =
							BGl_singleza2za2zzsaw_node2rtlz00(
							(obj_t) (BgL_ez00_2262),
							(BgL_rtl_funz00_bglt) (BgL_arg4756z00_2265), BNIL);
					}
					return (obj_t) (BgL_auxz00_6449);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_node2rtlz00()
	{
		AN_OBJECT;
		{	/* SawMill/node2rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5233z00zzsaw_node2rtlz00));
		}
	}

#ifdef __cplusplus
}
#endif
