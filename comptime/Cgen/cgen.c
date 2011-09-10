/*===========================================================================*/
/*   (Cgen/cgen.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/cgen.scm)*/
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

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_creturnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                 *BgL_creturnz00_bglt;

	typedef struct BgL_cvoidz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_cvoidz00_bglt;

	typedef struct BgL_catomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_valuez00;
	}               *BgL_catomz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;

	typedef struct BgL_ccastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_copz00_bgl *BgL_argz00;
	}               *BgL_ccastz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_nopz00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_cifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		struct BgL_copz00_bgl *BgL_truez00;
		struct BgL_copz00_bgl *BgL_falsez00;
	}             *BgL_cifz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfailz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_procz00;
		struct BgL_copz00_bgl *BgL_msgz00;
		struct BgL_copz00_bgl *BgL_objz00;
	}               *BgL_cfailz00_bglt;

	typedef struct BgL_cswitchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
	}                 *BgL_cswitchz00_bglt;

	typedef struct BgL_cmakezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                     *BgL_cmakezd2boxzd2_bglt;

	typedef struct BgL_cboxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
	}                    *BgL_cboxzd2refzd2_bglt;

	typedef struct BgL_cboxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                       *BgL_cboxzd2setz12zc0_bglt;

	typedef struct BgL_csetzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_jumpzd2valuezd2;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                        *BgL_csetzd2exzd2itz00_bglt;

	typedef struct BgL_cjumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                         *BgL_cjumpzd2exzd2itz00_bglt;

	typedef struct BgL_sfunzf2czf2_bgl
	{
		struct BgL_clabelz00_bgl *BgL_labelz00;
		bool_t BgL_integratedz00;
	}                  *BgL_sfunzf2czf2_bglt;

	typedef struct BgL_bdbzd2blockzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                     *BgL_bdbzd2blockzd2_bglt;


	static obj_t BGl_zc3anonymousza35060ze3z83zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern BgL_cboxzd2refzd2_bglt BGl_makezd2cboxzd2refz00zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	static obj_t BGl_zc3anonymousza35065ze3z83zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(obj_t, bool_t, obj_t,
		obj_t);
	extern bool_t BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt);
	static obj_t BGl_nodezd2ze3copzd2jumpzd2exzd2it4417ze3zzcgen_cgenz00(obj_t,
		obj_t, obj_t);
	extern BgL_cswitchz00_bglt BGl_makezd2cswitchzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2returnzd2kontza2zd2zzcgen_cgenz00 = BUNSPEC;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_zc3anonymousza34424ze3z83zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_zc3anonymousza34714ze3z83zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl__nodezd2ze3copzd2default4374ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2voidza2z00zztype_cachez00;
	static obj_t BGl_zc3anonymousza34433ze3z83zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34434ze3z83zzcgen_cgenz00(obj_t, obj_t);
	extern BgL_csequencez00_bglt BGl_makezd2csequencezd2zzcgen_copz00(obj_t,
		bool_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcgen_cgenz00();
	extern BgL_csetzd2exzd2itz00_bglt
		BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt, BgL_copz00_bglt);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern BgL_cifz00_bglt BGl_makezd2cifzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt, BgL_copz00_bglt);
	static obj_t BGl__nodezd2setqzd2zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern BgL_cvoidz00_bglt BGl_makezd2cvoidzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__cgenzd2functionzd2zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3copzd2sequence4385ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_bdbzd2letzd2varz00zzcgen_cgenz00(BgL_copz00_bglt, obj_t);
	static obj_t BGl__nodezd2ze3copz31zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern BgL_cpragmaz00_bglt BGl_makezd2cpragmazd2zzcgen_copz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3copzd2vsetz124397zf1zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__blockzd2kontzd2zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cappz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcgen_cgenz00();
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	static obj_t BGl_nodezd2ze3copzd2boxzd2setz124423z23zzcgen_cgenz00(obj_t,
		obj_t, obj_t);
	extern BgL_cjumpzd2exzd2itz00_bglt
		BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2functionzd2zzcgen_cgenz00(BgL_globalz00_bglt);
	extern obj_t BGl_blockz00zzcgen_copz00;
	extern BgL_bdbzd2blockzd2_bglt BGl_makezd2bdbzd2blockz00zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	extern obj_t BGl_wideningzd2sfunzf2Cz20zzcgen_copz00(BgL_clabelz00_bglt,
		bool_t);
	extern BgL_varcz00_bglt BGl_makezd2varczd2zzcgen_copz00(obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	static BgL_copz00_bglt
		BGl_nodezd2ze3copzd2default4374ze3zzcgen_cgenz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static obj_t BGl_zc3anonymousza34490ze3z83zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_cpragmaz00zzcgen_copz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_zc3anonymousza34505ze3z83zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3copzd2atom4377ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopz00zzcgen_cgenz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2stopzd2kontza2zd2zzcgen_cgenz00 = BUNSPEC;
	static obj_t BGl__bdbzd2letzd2varz00zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_varcz00zzcgen_copz00;
	static obj_t BGl_zc3anonymousza34786ze3z83zzcgen_cgenz00(obj_t, obj_t);
	extern BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern BgL_blockz00_bglt BGl_makezd2blockzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2();
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzcgen_cgenz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern BgL_cboxzd2setz12zc0_bglt
		BGl_makezd2cboxzd2setz12z12zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt);
	static obj_t BGl_makezd2setqzd2kontz00zzcgen_cgenz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	extern BgL_clabelz00_bglt BGl_makezd2clabelzd2zzcgen_copz00(obj_t, obj_t,
		bool_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2thezd2globalza2zd2zzcgen_cgenz00 = BUNSPEC;
	extern obj_t BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_nodezd2ze3copzd2makezd2box4419z31zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd2ze3copzd2getfield4389ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3copzd2vlength4393ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_cgenz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2idzd2kontza2zd2zzcgen_cgenz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcgen_cgenz00();
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3copzd2valloc4399ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern BgL_creturnz00_bglt BGl_makezd2creturnzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3copzd2cast4401ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_csetqz00zzcgen_copz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	static obj_t BGl_nodezd2ze3copzd2boxzd2ref4421z31zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern BgL_nopz00_bglt BGl_makezd2nopzd2zzcgen_copz00(obj_t);
	static obj_t BGl_nodezd2ze3copzd2conditiona4405ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl__makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3copzd2setfield4391ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_cgenz00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t);
	static obj_t BGl_nodezd2ze3copzd2pragma4387ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_sfunzf2Czf2zzcgen_copz00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2ze3copzd2select4409ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_externzd2ze3copz31zzcgen_cgenz00(obj_t, bool_t,
		BgL_externz00_bglt, obj_t);
	static obj_t BGl_nodezd2ze3copzd2vref4395ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2ze3copzd2kwote4379ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_nodezd2ze3copzd2setq4403ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern BgL_csetqz00_bglt BGl_makezd2csetqzd2zzcgen_copz00(obj_t,
		BgL_varcz00_bglt, BgL_copz00_bglt);
	extern BgL_pragmaz00_bglt BGl_makezd2pragmazd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_localzd2varzd2_bglt BGl_makezd2localzd2varz00zzcgen_copz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_catomz00zzcgen_copz00;
	static BgL_cvoidz00_bglt BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_cfailz00zzcgen_copz00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_globalzd2ze3cz31zzcgen_cgenz00(BgL_globalz00_bglt);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_nodezd2ze3copzd2var4381ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35030ze3z83zzcgen_cgenz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_blockzd2kontzd2zzcgen_cgenz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2ze3copzd2letzd2fun4411z31zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern BgL_ccastz00_bglt BGl_makezd2ccastzd2zzcgen_copz00(obj_t,
		BgL_typez00_bglt, BgL_copz00_bglt);
	static obj_t BGl_nodezd2ze3copzd2closure4383ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_setqz00_bglt
		BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_variablez00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern BgL_catomz00_bglt BGl_makezd2catomzd2zzcgen_copz00(obj_t, obj_t);
	extern BgL_cmakezd2boxzd2_bglt BGl_makezd2cmakezd2boxz00zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	extern BgL_cfailz00_bglt BGl_makezd2cfailzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	static obj_t BGl_nodezd2ze3copzd2setzd2exzd2it4415ze3zzcgen_cgenz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2ze3copzd2letzd2var4413z31zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_nodez00_bglt, obj_t);
	extern BgL_stopz00_bglt BGl_makezd2stopzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cgenz00();
	static obj_t BGl__za2voidzd2kontza2zd2zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_nodezd2ze3copzd2fail4407ze3zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2letzd2varzd2envzd2zzcgen_cgenz00,
		BgL_bgl__bdbza7d2letza7d2var5233z00, BGl__bdbzd2letzd2varz00zzcgen_cgenz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2kontzd2envz00zzcgen_cgenz00,
		BgL_bgl__blockza7d2kontza7d25234z00, BGl__blockzd2kontzd2zzcgen_cgenz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5178z00zzcgen_cgenz00,
		BgL_bgl_za7c3anonymousza7a345235z00,
		BGl_zc3anonymousza34424ze3z83zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5180z00zzcgen_cgenz00,
		BgL_bgl_za7c3anonymousza7a345236z00,
		BGl_zc3anonymousza34434ze3z83zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5179z00zzcgen_cgenz00,
		BgL_bgl_za7c3anonymousza7a345237z00,
		BGl_zc3anonymousza34433ze3z83zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5200z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25238za7,
		BGl_nodezd2ze3copzd2pragma4387ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5201z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25239za7,
		BGl_nodezd2ze3copzd2getfield4389ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5202z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25240za7,
		BGl_nodezd2ze3copzd2setfield4391ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5203z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25241za7,
		BGl_nodezd2ze3copzd2vlength4393ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5204z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25242za7,
		BGl_nodezd2ze3copzd2vref4395ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5205z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25243za7,
		BGl_nodezd2ze3copzd2vsetz124397zf1zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5195z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25244za7,
		BGl_nodezd2ze3copzd2atom4377ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5206z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25245za7,
		BGl_nodezd2ze3copzd2valloc4399ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5196z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25246za7,
		BGl_nodezd2ze3copzd2kwote4379ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5207z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25247za7,
		BGl_nodezd2ze3copzd2cast4401ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5197z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25248za7,
		BGl_nodezd2ze3copzd2var4381ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5208z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25249za7,
		BGl_nodezd2ze3copzd2setq4403ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5198z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25250za7,
		BGl_nodezd2ze3copzd2closure4383ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5210z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25251za7,
		BGl_nodezd2ze3copzd2fail4407ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5209z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25252za7,
		BGl_nodezd2ze3copzd2conditiona4405ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5199z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25253za7,
		BGl_nodezd2ze3copzd2sequence4385ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5211z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25254za7,
		BGl_nodezd2ze3copzd2select4409ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5212z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25255za7,
		BGl_nodezd2ze3copzd2letzd2fun4411z31zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5213z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25256za7,
		BGl_nodezd2ze3copzd2letzd2var4413z31zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5214z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25257za7,
		BGl_nodezd2ze3copzd2setzd2exzd2it4415ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5215z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25258za7,
		BGl_nodezd2ze3copzd2jumpzd2exzd2it4417ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5216z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25259za7,
		BGl_nodezd2ze3copzd2makezd2box4419z31zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5217z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25260za7,
		BGl_nodezd2ze3copzd2boxzd2ref4421z31zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5218z00zzcgen_cgenz00,
		BgL_bgl_nodeza7d2za7e3copza7d25261za7,
		BGl_nodezd2ze3copzd2boxzd2setz124423z23zzcgen_cgenz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2ze3copzd2default4374zd2envz31zzcgen_cgenz00,
		BgL_bgl__nodeza7d2za7e3copza7d5262za7,
		BGl__nodezd2ze3copzd2default4374ze3zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5181z00zzcgen_cgenz00,
		BgL_bgl_string5181za700za7za7c5263za7, "/* ", 3);
	      DEFINE_STRING(BGl_string5182z00zzcgen_cgenz00,
		BgL_bgl_string5182za700za7za7c5264za7, " */", 3);
	      DEFINE_STRING(BGl_string5183z00zzcgen_cgenz00,
		BgL_bgl_string5183za700za7za7c5265za7, "{ AN_OBJECT;", 12);
	      DEFINE_STRING(BGl_string5184z00zzcgen_cgenz00,
		BgL_bgl_string5184za700za7za7c5266za7,
		"{ obj_t ___ = BUNSPEC; } /* bdb dummy init stmt */", 50);
	      DEFINE_STRING(BGl_string5185z00zzcgen_cgenz00,
		BgL_bgl_string5185za700za7za7c5267za7, "}", 1);
	      DEFINE_STRING(BGl_string5186z00zzcgen_cgenz00,
		BgL_bgl_string5186za700za7za7c5268za7, "BGL_EXPORTED_DEF ", 17);
	      DEFINE_STRING(BGl_string5187z00zzcgen_cgenz00,
		BgL_bgl_string5187za700za7za7c5269za7, "()", 2);
	      DEFINE_STRING(BGl_string5188z00zzcgen_cgenz00,
		BgL_bgl_string5188za700za7za7c5270za7, "(", 1);
	      DEFINE_STRING(BGl_string5190z00zzcgen_cgenz00,
		BgL_bgl_string5190za700za7za7c5271za7, ", ", 2);
	      DEFINE_STRING(BGl_string5189z00zzcgen_cgenz00,
		BgL_bgl_string5189za700za7za7c5272za7, ")", 1);
	      DEFINE_STRING(BGl_string5191z00zzcgen_cgenz00,
		BgL_bgl_string5191za700za7za7c5273za7, "make-local-svar/name", 20);
	      DEFINE_STRING(BGl_string5192z00zzcgen_cgenz00,
		BgL_bgl_string5192za700za7za7c5274za7, "Illegal local name", 18);
	      DEFINE_STRING(BGl_string5193z00zzcgen_cgenz00,
		BgL_bgl_string5193za700za7za7c5275za7, "node->cop", 9);
	      DEFINE_STRING(BGl_string5194z00zzcgen_cgenz00,
		BgL_bgl_string5194za700za7za7c5276za7, "No method for this object", 25);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
		BgL_bgl__nodeza7d2za7e3copza735277za7, BGl__nodezd2ze3copz31zzcgen_cgenz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5220z00zzcgen_cgenz00,
		BgL_bgl_string5220za700za7za7c5278za7, "BGL_EXIT_VALUE()", 16);
	      DEFINE_STRING(BGl_string5219z00zzcgen_cgenz00,
		BgL_bgl_string5219za700za7za7c5279za7, "jmp_buf_t jmpbuf", 16);
	      DEFINE_STRING(BGl_string5221z00zzcgen_cgenz00,
		BgL_bgl_string5221za700za7za7c5280za7, ")jmpbuf", 7);
	      DEFINE_STRING(BGl_string5222z00zzcgen_cgenz00,
		BgL_bgl_string5222za700za7za7c5281za7, ")$2), BUNSPEC)", 14);
	      DEFINE_STRING(BGl_string5223z00zzcgen_cgenz00,
		BgL_bgl_string5223za700za7za7c5282za7, ") = ((", 6);
	      DEFINE_STRING(BGl_string5224z00zzcgen_cgenz00,
		BgL_bgl_string5224za700za7za7c5283za7, ")CREF($1))->", 12);
	      DEFINE_STRING(BGl_string5225z00zzcgen_cgenz00,
		BgL_bgl_string5225za700za7za7c5284za7, "((((", 4);
	      DEFINE_STRING(BGl_string5226z00zzcgen_cgenz00,
		BgL_bgl_string5226za700za7za7c5285za7, "(((", 3);
	      DEFINE_STRING(BGl_string5227z00zzcgen_cgenz00,
		BgL_bgl_string5227za700za7za7c5286za7, "Unexpected `closure' node", 25);
	      DEFINE_STRING(BGl_string5228z00zzcgen_cgenz00,
		BgL_bgl_string5228za700za7za7c5287za7, "Unexpected `kwote' node", 23);
	      DEFINE_STRING(BGl_string5230z00zzcgen_cgenz00,
		BgL_bgl_string5230za700za7za7c5288za7,
		"test exit cellval node->cop-default4374 aux export location ", 60);
	      DEFINE_STRING(BGl_string5229z00zzcgen_cgenz00,
		BgL_bgl_string5229za700za7za7c5289za7, "cgen_cgen", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2functionzd2envz00zzcgen_cgenz00,
		BgL_bgl__cgenza7d2function5290za7, BGl__cgenzd2functionzd2zzcgen_cgenz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_za2voidzd2kontza2zd2envz00zzcgen_cgenz00,
		BgL_bgl__za7a2voidza7d2kontza75291za7,
		BGl__za2voidzd2kontza2zd2zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2setqzd2envz00zzcgen_cgenz00,
		BgL_bgl__nodeza7d2setqza7d2za75292za7, BGl__nodezd2setqzd2zzcgen_cgenz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzd2svarzf2namezd2envz20zzcgen_cgenz00,
		BgL_bgl__makeza7d2localza7d25293z00,
		BGl__makezd2localzd2svarzf2namezf2zzcgen_cgenz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long
		BgL_checksumz00_3885, char *BgL_fromz00_3886)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_cgenz00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_cgenz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcgen_cgenz00();
					BGl_cnstzd2initzd2zzcgen_cgenz00();
					BGl_importedzd2moduleszd2initz00zzcgen_cgenz00();
					BGl_genericzd2initzd2zzcgen_cgenz00();
					BGl_methodzd2initzd2zzcgen_cgenz00();
					BGl_toplevelzd2initzd2zzcgen_cgenz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cgen_cgen");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			{	/* Cgen/cgen.scm 15 */
				obj_t BgL_cportz00_3874;

				BgL_cportz00_3874 =
					bgl_open_input_string(BGl_string5230z00zzcgen_cgenz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3875;

					BgL_iz00_3875 = ((long) 6);
				BgL_loopz00_3876:
					if ((BgL_iz00_3875 == ((long) -1)))
						{	/* Cgen/cgen.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/cgen.scm 15 */
							{	/* Cgen/cgen.scm 15 */
								obj_t BgL_arg5232z00_3878;

								{	/* Cgen/cgen.scm 15 */

									{	/* Cgen/cgen.scm 15 */
										obj_t BgL_locationz00_3880;

										BgL_locationz00_3880 = BBOOL(((bool_t) 0));
										{	/* Cgen/cgen.scm 15 */

											BgL_arg5232z00_3878 =
												BGl_readz00zz__readerz00(BgL_cportz00_3874,
												BgL_locationz00_3880);
										}
									}
								}
								{	/* Cgen/cgen.scm 15 */
									int BgL_auxz00_3909;

									BgL_auxz00_3909 = (int) (BgL_iz00_3875);
									CNST_TABLE_SET(BgL_auxz00_3909, BgL_arg5232z00_3878);
							}}
							{	/* Cgen/cgen.scm 15 */
								int BgL_auxz00_3881;

								BgL_auxz00_3881 = (int) ((BgL_iz00_3875 - ((long) 1)));
								{
									long BgL_iz00_3914;

									BgL_iz00_3914 = (long) (BgL_auxz00_3881);
									BgL_iz00_3875 = BgL_iz00_3914;
									goto BgL_loopz00_3876;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			BGl_za2thezd2globalza2zd2zzcgen_cgenz00 = BUNSPEC;
			BGl_za2returnzd2kontza2zd2zzcgen_cgenz00 = BGl_proc5178z00zzcgen_cgenz00;
			BGl_za2idzd2kontza2zd2zzcgen_cgenz00 = BGl_proc5179z00zzcgen_cgenz00;
			BGl_za2stopzd2kontza2zd2zzcgen_cgenz00 = BGl_proc5180z00zzcgen_cgenz00;
			return BUNSPEC;
		}
	}



/* <anonymous:4434> */
	obj_t BGl_zc3anonymousza34434ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3713,
		obj_t BgL_copz00_3714)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 172 */
			{
				obj_t BgL_copz00_1226;

				{	/* Cgen/cgen.scm 174 */
					BgL_stopz00_bglt BgL_auxz00_3916;

					BgL_copz00_1226 = BgL_copz00_3714;
					BgL_auxz00_3916 =
						BGl_makezd2stopzd2zzcgen_copz00(BFALSE,
						(BgL_copz00_bglt) (BgL_copz00_1226));
					return (obj_t) (BgL_auxz00_3916);
				}
			}
		}
	}



/* <anonymous:4433> */
	obj_t BGl_zc3anonymousza34433ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3715,
		obj_t BgL_copz00_3716)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 160 */
			return BgL_copz00_3716;
		}
	}



/* <anonymous:4424> */
	obj_t BGl_zc3anonymousza34424ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3717,
		obj_t BgL_copz00_3718)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 143 */
			{
				obj_t BgL_copz00_1214;

				{	/* Cgen/cgen.scm 146 */
					BgL_creturnz00_bglt BgL_auxz00_3920;

					BgL_copz00_1214 = BgL_copz00_3718;
					{	/* Cgen/cgen.scm 146 */
						obj_t BgL_arg4425z00_1216;

						obj_t BgL_arg4426z00_1217;

						{
							BgL_copz00_bglt BgL_auxz00_3921;

							BgL_auxz00_3921 = (BgL_copz00_bglt) (BgL_copz00_1214);
							BgL_arg4425z00_1216 =
								(((BgL_copz00_bglt) CREF(BgL_auxz00_3921))->BgL_locz00);
						}
						if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_1214,
								BGl_csetqz00zzcgen_copz00))
							{	/* Cgen/cgen.scm 150 */
								obj_t BgL_arg4428z00_1219;

								obj_t BgL_arg4429z00_1220;

								{
									BgL_copz00_bglt BgL_auxz00_3926;

									BgL_auxz00_3926 =
										(BgL_copz00_bglt) ((BgL_csetqz00_bglt) (BgL_copz00_1214));
									BgL_arg4428z00_1219 =
										(((BgL_copz00_bglt) CREF(BgL_auxz00_3926))->BgL_locz00);
								}
								{	/* Cgen/cgen.scm 152 */
									BgL_catomz00_bglt BgL_arg4430z00_1221;

									BgL_arg4430z00_1221 =
										BGl_makezd2catomzd2zzcgen_copz00(BFALSE, BUNSPEC);
									{	/* Cgen/cgen.scm 152 */
										obj_t BgL_list4431z00_1222;

										{	/* Cgen/cgen.scm 152 */
											obj_t BgL_arg4432z00_1223;

											BgL_arg4432z00_1223 =
												MAKE_PAIR((obj_t) (BgL_arg4430z00_1221), BNIL);
											BgL_list4431z00_1222 =
												MAKE_PAIR(BgL_copz00_1214, BgL_arg4432z00_1223);
										}
										BgL_arg4429z00_1220 = BgL_list4431z00_1222;
									}
								}
								BgL_arg4426z00_1217 =
									(obj_t) (BGl_makezd2csequencezd2zzcgen_copz00
									(BgL_arg4428z00_1219, ((bool_t) 1), BgL_arg4429z00_1220));
							}
						else
							{	/* Cgen/cgen.scm 148 */
								BgL_arg4426z00_1217 = BgL_copz00_1214;
							}
						BgL_auxz00_3920 =
							BGl_makezd2creturnzd2zzcgen_copz00(BgL_arg4425z00_1216,
							(BgL_copz00_bglt) (BgL_arg4426z00_1217));
					}
					return (obj_t) (BgL_auxz00_3920);
				}
			}
		}
	}



/* cgen-function */
	BGL_EXPORTED_DEF obj_t BGl_cgenzd2functionzd2zzcgen_cgenz00(BgL_globalz00_bglt
		BgL_globalz00_15)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 52 */
			if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00
				(BgL_globalz00_15))
				{	/* Cgen/cgen.scm 53 */
					{	/* Cgen/cgen.scm 54 */
						obj_t BgL_arg4445z00_1239;

						{
							BgL_variablez00_bglt BgL_auxz00_3941;

							BgL_auxz00_3941 = (BgL_variablez00_bglt) (BgL_globalz00_15);
							BgL_arg4445z00_1239 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3941))->BgL_idz00);
						}
						BGl_enterzd2functionzd2zztools_errorz00(BgL_arg4445z00_1239);
					}
					BGl_za2thezd2globalza2zd2zzcgen_cgenz00 = (obj_t) (BgL_globalz00_15);
					{	/* Cgen/cgen.scm 59 */
						obj_t BgL_shz00_1240;

						BgL_shz00_1240 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_globalz00_15));
						BUNSPEC;
					}
					{	/* Cgen/cgen.scm 61 */
						BgL_sfunz00_bglt BgL_sfunz00_1241;

						{	/* Cgen/cgen.scm 61 */
							BgL_sfunz00_bglt BgL_obj4210z00_1256;

							{
								BgL_sfunz00_bglt BgL_auxz00_3948;

								{	/* Cgen/cgen.scm 61 */
									BgL_valuez00_bglt BgL_auxz00_3949;

									{
										BgL_variablez00_bglt BgL_auxz00_3950;

										BgL_auxz00_3950 = (BgL_variablez00_bglt) (BgL_globalz00_15);
										BgL_auxz00_3949 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3950))->
											BgL_valuez00);
									}
									BgL_auxz00_3948 = (BgL_sfunz00_bglt) (BgL_auxz00_3949);
								}
								BgL_obj4210z00_1256 = ((BgL_sfunz00_bglt) BgL_auxz00_3948);
							}
							{	/* Cgen/cgen.scm 63 */
								obj_t BgL_arg4456z00_1257;

								{	/* Cgen/cgen.scm 63 */
									BgL_clabelz00_bglt BgL_arg4457z00_1258;

									{	/* Cgen/cgen.scm 63 */
										obj_t BgL_arg4458z00_1259;

										obj_t BgL_arg4459z00_1260;

										{	/* Cgen/cgen.scm 63 */
											BgL_sfunz00_bglt BgL_obj2211z00_2572;

											{	/* Cgen/cgen.scm 63 */
												BgL_variablez00_bglt BgL_obj1930z00_2571;

												BgL_obj1930z00_2571 =
													(BgL_variablez00_bglt) (BgL_globalz00_15);
												BgL_obj2211z00_2572 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1930z00_2571))->
														BgL_valuez00));
											}
											BgL_arg4458z00_1259 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj2211z00_2572))->
												BgL_locz00);
										}
										{
											BgL_variablez00_bglt BgL_auxz00_3959;

											BgL_auxz00_3959 =
												(BgL_variablez00_bglt) (BgL_globalz00_15);
											BgL_arg4459z00_1260 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3959))->
												BgL_namez00);
										}
										BgL_arg4457z00_1258 =
											BGl_makezd2clabelzd2zzcgen_copz00(BgL_arg4458z00_1259,
											BgL_arg4459z00_1260, ((bool_t) 0), BUNSPEC);
									}
									BgL_arg4456z00_1257 =
										BGl_wideningzd2sfunzf2Cz20zzcgen_copz00(BgL_arg4457z00_1258,
										((bool_t) 1));
								}
								{	/* Cgen/cgen.scm 61 */
									BgL_objectz00_bglt BgL_auxz00_3964;

									BgL_auxz00_3964 = (BgL_objectz00_bglt) (BgL_obj4210z00_1256);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_3964, BgL_arg4456z00_1257);
								}
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4210z00_1256),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunzf2Czf2zzcgen_copz00));
							BgL_sfunz00_1241 = BgL_obj4210z00_1256;
						}
						{	/* Cgen/cgen.scm 61 */
							obj_t BgL_locz00_1242;

							BgL_locz00_1242 =
								(((BgL_sfunz00_bglt) CREF(BgL_sfunz00_1241))->BgL_locz00);
							{	/* Cgen/cgen.scm 66 */
								BgL_copz00_bglt BgL_copz00_1243;

								{	/* Cgen/cgen.scm 67 */
									obj_t BgL_arg4452z00_1252;

									obj_t BgL_arg4453z00_1253;

									BgL_arg4452z00_1252 =
										(((BgL_sfunz00_bglt) CREF(BgL_sfunz00_1241))->BgL_bodyz00);
									{	/* Cgen/cgen.scm 68 */
										bool_t BgL_testz00_3972;

										{	/* Cgen/cgen.scm 68 */
											BgL_typez00_bglt BgL_arg4455z00_1255;

											{
												BgL_variablez00_bglt BgL_auxz00_3973;

												BgL_auxz00_3973 =
													(BgL_variablez00_bglt) (BgL_globalz00_15);
												BgL_arg4455z00_1255 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3973))->
													BgL_typez00);
											}
											BgL_testz00_3972 =
												(
												(obj_t) (BgL_arg4455z00_1255) ==
												BGl_za2voidza2z00zztype_cachez00);
										}
										if (BgL_testz00_3972)
											{	/* Cgen/cgen.scm 68 */
												BgL_arg4453z00_1253 =
													BGl_za2voidzd2kontza2zd2envz00zzcgen_cgenz00;
											}
										else
											{	/* Cgen/cgen.scm 68 */
												BgL_arg4453z00_1253 =
													BGl_za2returnzd2kontza2zd2zzcgen_cgenz00;
											}
									}
									{	/* Cgen/cgen.scm 67 */
										BgL_copz00_bglt BgL_res5077z00_2606;

										{	/* Cgen/cgen.scm 67 */
											BgL_nodez00_bglt BgL_nodez00_2579;

											obj_t BgL_kontz00_2580;

											BgL_nodez00_2579 =
												(BgL_nodez00_bglt) (BgL_arg4452z00_1252);
											BgL_kontz00_2580 = BgL_arg4453z00_1253;
											{	/* Cgen/cgen.scm 67 */
												obj_t BgL_method4375z00_2581;

												{	/* Cgen/cgen.scm 67 */
													BgL_objectz00_bglt BgL_objz00_2582;

													BgL_objz00_2582 =
														(BgL_objectz00_bglt) (BgL_nodez00_2579);
													{	/* Cgen/cgen.scm 67 */
														long BgL_objzd2classzd2numz00_2583;

														BgL_objzd2classzd2numz00_2583 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2582);
														{	/* Cgen/cgen.scm 67 */
															obj_t BgL_arg2643z00_2584;

															BgL_arg2643z00_2584 =
																PROCEDURE_REF
																(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																(int) (((long) 1)));
															{	/* Cgen/cgen.scm 67 */
																obj_t BgL_arrayz00_2586;

																int BgL_offsetz00_2587;

																BgL_arrayz00_2586 = BgL_arg2643z00_2584;
																BgL_offsetz00_2587 =
																	(int) (BgL_objzd2classzd2numz00_2583);
																{	/* Cgen/cgen.scm 67 */
																	long BgL_offsetz00_2588;

																	BgL_offsetz00_2588 =
																		((long) (BgL_offsetz00_2587) - OBJECT_TYPE);
																	{	/* Cgen/cgen.scm 67 */
																		long BgL_modz00_2589;

																		{	/* Cgen/cgen.scm 67 */
																			int BgL_arg2645z00_2590;

																			BgL_arg2645z00_2590 = (int) (((long) 16));
																			{	/* Cgen/cgen.scm 67 */
																				long BgL_auxz00_3987;

																				BgL_auxz00_3987 =
																					(long) (BgL_arg2645z00_2590);
																				BgL_modz00_2589 =
																					(BgL_offsetz00_2588 /
																					BgL_auxz00_3987);
																		}}
																		{	/* Cgen/cgen.scm 67 */
																			long BgL_restz00_2591;

																			{	/* Cgen/cgen.scm 67 */
																				int BgL_arg2644z00_2592;

																				BgL_arg2644z00_2592 =
																					(int) (((long) 16));
																				{	/* Cgen/cgen.scm 67 */
																					long BgL_auxz00_3991;

																					BgL_auxz00_3991 =
																						(long) (BgL_arg2644z00_2592);
																					BgL_restz00_2591 =
																						(BgL_offsetz00_2588 %
																						BgL_auxz00_3991);
																			}}
																			{	/* Cgen/cgen.scm 67 */

																				BgL_method4375z00_2581 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2586,
																						(int) (BgL_modz00_2589)),
																					(int) (BgL_restz00_2591));
												}}}}}}}}
												BgL_res5077z00_2606 =
													(BgL_copz00_bglt) (PROCEDURE_ENTRY
													(BgL_method4375z00_2581) (BgL_method4375z00_2581,
														(obj_t) (BgL_nodez00_2579), BgL_kontz00_2580,
														BEOA));
										}}
										BgL_copz00_1243 = BgL_res5077z00_2606;
								}}
								{	/* Cgen/cgen.scm 67 */

									BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
									bgl_display_char(((unsigned char) '\n'),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									bgl_display_char(((unsigned char) '\n'),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									bgl_display_string(BGl_string5181z00zzcgen_cgenz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									{	/* Cgen/cgen.scm 75 */
										obj_t BgL_arg4446z00_1244;

										BgL_arg4446z00_1244 =
											BGl_shapez00zztools_shapez00((obj_t) (BgL_globalz00_15));
										bgl_display_obj(BgL_arg4446z00_1244,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									}
									bgl_display_string(BGl_string5182z00zzcgen_cgenz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BFALSE);
									BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
									{	/* Cgen/cgen.scm 85 */
										BgL_clabelz00_bglt BgL_arg4447z00_1245;

										{	/* Cgen/cgen.scm 85 */
											BgL_sfunzf2czf2_bglt BgL_obj4042z00_2613;

											BgL_obj4042z00_2613 =
												(BgL_sfunzf2czf2_bglt) (BgL_sfunz00_1241);
											{
												obj_t BgL_auxz00_4013;

												{	/* Cgen/cgen.scm 85 */
													BgL_objectz00_bglt BgL_auxz00_4014;

													BgL_auxz00_4014 =
														(BgL_objectz00_bglt) (BgL_obj4042z00_2613);
													BgL_auxz00_4013 =
														BGL_OBJECT_WIDENING(BgL_auxz00_4014);
												}
												BgL_arg4447z00_1245 =
													(((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_4013))->
													BgL_labelz00);
										}}
										{
											obj_t BgL_auxz00_4018;

											BgL_auxz00_4018 = (obj_t) (BgL_copz00_1243);
											((((BgL_clabelz00_bglt) CREF(BgL_arg4447z00_1245))->
													BgL_bodyz00) = ((obj_t) BgL_auxz00_4018), BUNSPEC);
									}}
									BGl_globalzd2ze3cz31zzcgen_cgenz00(BgL_globalz00_15);
									{	/* Cgen/cgen.scm 87 */
										BgL_blockz00_bglt BgL_copz00_1246;

										{	/* Cgen/cgen.scm 87 */
											BgL_clabelz00_bglt BgL_arg4451z00_1251;

											{	/* Cgen/cgen.scm 87 */
												BgL_sfunzf2czf2_bglt BgL_obj4042z00_2616;

												BgL_obj4042z00_2616 =
													(BgL_sfunzf2czf2_bglt) (BgL_sfunz00_1241);
												{
													obj_t BgL_auxz00_4023;

													{	/* Cgen/cgen.scm 87 */
														BgL_objectz00_bglt BgL_auxz00_4024;

														BgL_auxz00_4024 =
															(BgL_objectz00_bglt) (BgL_obj4042z00_2616);
														BgL_auxz00_4023 =
															BGL_OBJECT_WIDENING(BgL_auxz00_4024);
													}
													BgL_arg4451z00_1251 =
														(((BgL_sfunzf2czf2_bglt) CREF(BgL_auxz00_4023))->
														BgL_labelz00);
											}}
											{	/* Cgen/cgen.scm 87 */
												obj_t BgL_copz00_2617;

												BgL_copz00_2617 = (obj_t) (BgL_arg4451z00_1251);
												if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_2617,
														BGl_blockz00zzcgen_copz00))
													{	/* Cgen/cgen.scm 87 */
														BgL_copz00_1246 =
															(BgL_blockz00_bglt) (BgL_copz00_2617);
													}
												else
													{	/* Cgen/cgen.scm 87 */
														BgL_copz00_1246 =
															BGl_makezd2blockzd2zzcgen_copz00(BgL_locz00_1242,
															(BgL_copz00_bglt) (BgL_copz00_2617));
													}
											}
										}
										bgl_display_string(BGl_string5183z00zzcgen_cgenz00,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/cgen.scm 92 */
											bool_t BgL_testz00_4035;

											if (BGl_2ze3ze3zz__r4_numbers_6_5z00
												(BGl_za2bdbzd2debugza2zd2zzengine_paramz00,
													BINT(((long) 0))))
												{	/* Cgen/cgen.scm 92 */
													if (STRUCTP(BgL_locz00_1242))
														{	/* Cgen/cgen.scm 92 */
															BgL_testz00_4035 =
																(STRUCT_KEY(BgL_locz00_1242) ==
																CNST_TABLE_REF(((long) 0)));
														}
													else
														{	/* Cgen/cgen.scm 92 */
															BgL_testz00_4035 = ((bool_t) 0);
														}
												}
											else
												{	/* Cgen/cgen.scm 92 */
													BgL_testz00_4035 = ((bool_t) 0);
												}
											if (BgL_testz00_4035)
												{	/* Cgen/cgen.scm 92 */
													BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
														(BgL_locz00_1242);
													bgl_display_string(BGl_string5184z00zzcgen_cgenz00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												}
											else
												{	/* Cgen/cgen.scm 92 */
													BFALSE;
												}
										}
										BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
											(BgL_copz00_bglt) (BgL_copz00_1246));
										BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
											(BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2());
										{	/* Cgen/cgen.scm 102 */
											obj_t BgL_port4357z00_1250;

											BgL_port4357z00_1250 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											bgl_display_string(BGl_string5185z00zzcgen_cgenz00,
												BgL_port4357z00_1250);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port4357z00_1250);
									}}
									BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00();
									return BGl_leavezd2functionzd2zztools_errorz00();
								}
							}
						}
					}
				}
			else
				{	/* Cgen/cgen.scm 53 */
					return BFALSE;
				}
		}
	}



/* _cgen-function */
	obj_t BGl__cgenzd2functionzd2zzcgen_cgenz00(obj_t BgL_envz00_3719,
		obj_t BgL_globalz00_3720)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 52 */
			return
				BGl_cgenzd2functionzd2zzcgen_cgenz00(
				(BgL_globalz00_bglt) (BgL_globalz00_3720));
		}
	}



/* global->c */
	obj_t BGl_globalzd2ze3cz31zzcgen_cgenz00(BgL_globalz00_bglt BgL_gz00_16)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 116 */
			if (
				((((BgL_globalz00_bglt) CREF(BgL_gz00_16))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 1))))
				{	/* Cgen/cgen.scm 118 */
					bgl_display_string(BGl_string5186z00zzcgen_cgenz00,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* Cgen/cgen.scm 118 */
					BFALSE;
				}
			{	/* Cgen/cgen.scm 119 */
				obj_t BgL_arg4465z00_1267;

				{	/* Cgen/cgen.scm 119 */
					BgL_typez00_bglt BgL_arg4466z00_1268;

					obj_t BgL_arg4467z00_1269;

					{
						BgL_variablez00_bglt BgL_auxz00_4061;

						BgL_auxz00_4061 = (BgL_variablez00_bglt) (BgL_gz00_16);
						BgL_arg4466z00_1268 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_4061))->BgL_typez00);
					}
					{	/* Cgen/cgen.scm 121 */
						obj_t BgL_arg4468z00_1270;

						obj_t BgL_arg4469z00_1271;

						{
							BgL_variablez00_bglt BgL_auxz00_4064;

							BgL_auxz00_4064 = (BgL_variablez00_bglt) (BgL_gz00_16);
							BgL_arg4468z00_1270 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4064))->BgL_namez00);
						}
						{	/* Cgen/cgen.scm 123 */
							bool_t BgL_testz00_4067;

							{	/* Cgen/cgen.scm 123 */
								obj_t BgL_auxz00_4068;

								{	/* Cgen/cgen.scm 123 */
									BgL_sfunz00_bglt BgL_obj2198z00_2641;

									{	/* Cgen/cgen.scm 123 */
										BgL_variablez00_bglt BgL_obj1930z00_2640;

										BgL_obj1930z00_2640 = (BgL_variablez00_bglt) (BgL_gz00_16);
										BgL_obj2198z00_2641 =
											(BgL_sfunz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_obj1930z00_2640))->
												BgL_valuez00));
									}
									BgL_auxz00_4068 =
										(((BgL_sfunz00_bglt) CREF(BgL_obj2198z00_2641))->
										BgL_argsz00);
								}
								BgL_testz00_4067 = NULLP(BgL_auxz00_4068);
							}
							if (BgL_testz00_4067)
								{	/* Cgen/cgen.scm 123 */
									BgL_arg4469z00_1271 = BGl_string5187z00zzcgen_cgenz00;
								}
							else
								{	/* Cgen/cgen.scm 125 */
									obj_t BgL_arg4472z00_1274;

									{	/* Cgen/cgen.scm 127 */
										obj_t BgL_g4214z00_1275;

										{	/* Cgen/cgen.scm 127 */
											BgL_sfunz00_bglt BgL_obj2198z00_2644;

											{	/* Cgen/cgen.scm 127 */
												BgL_variablez00_bglt BgL_obj1930z00_2643;

												BgL_obj1930z00_2643 =
													(BgL_variablez00_bglt) (BgL_gz00_16);
												BgL_obj2198z00_2644 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1930z00_2643))->
														BgL_valuez00));
											}
											BgL_g4214z00_1275 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj2198z00_2644))->
												BgL_argsz00);
										}
										BgL_arg4472z00_1274 =
											BGl_loopz00zzcgen_cgenz00(BgL_g4214z00_1275);
									}
									BgL_arg4469z00_1271 =
										string_append(BGl_string5188z00zzcgen_cgenz00,
										BgL_arg4472z00_1274);
								}
						}
						BgL_arg4467z00_1269 =
							string_append(BgL_arg4468z00_1270, BgL_arg4469z00_1271);
					}
					BgL_arg4465z00_1267 =
						BGl_makezd2typedzd2declarationz00zztype_toolsz00
						(BgL_arg4466z00_1268, BgL_arg4467z00_1269);
				}
				bgl_display_obj(BgL_arg4465z00_1267,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			return BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00();
		}
	}



/* loop */
	obj_t BGl_loopz00zzcgen_cgenz00(obj_t BgL_argsz00_1277)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 127 */
			if (NULLP(CDR(BgL_argsz00_1277)))
				{	/* Cgen/cgen.scm 129 */
					obj_t BgL_instance4215z00_1280;

					BgL_instance4215z00_1280 = CAR(BgL_argsz00_1277);
					{	/* Cgen/cgen.scm 131 */
						obj_t BgL_arg4475z00_1281;

						{	/* Cgen/cgen.scm 131 */
							BgL_typez00_bglt BgL_arg4477z00_1283;

							obj_t BgL_arg4478z00_1284;

							{
								BgL_variablez00_bglt BgL_auxz00_4088;

								BgL_auxz00_4088 =
									(BgL_variablez00_bglt) (BgL_instance4215z00_1280);
								BgL_arg4477z00_1283 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4088))->BgL_typez00);
							}
							{
								BgL_variablez00_bglt BgL_auxz00_4091;

								BgL_auxz00_4091 =
									(BgL_variablez00_bglt) (BgL_instance4215z00_1280);
								BgL_arg4478z00_1284 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4091))->BgL_namez00);
							}
							BgL_arg4475z00_1281 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg4477z00_1283, BgL_arg4478z00_1284);
						}
						return
							string_append(BgL_arg4475z00_1281,
							BGl_string5189z00zzcgen_cgenz00);
					}
				}
			else
				{	/* Cgen/cgen.scm 132 */
					obj_t BgL_instance4217z00_1285;

					BgL_instance4217z00_1285 = CAR(BgL_argsz00_1277);
					{	/* Cgen/cgen.scm 134 */
						obj_t BgL_arg4479z00_1286;

						obj_t BgL_arg4481z00_1288;

						{	/* Cgen/cgen.scm 134 */
							BgL_typez00_bglt BgL_arg4482z00_1289;

							obj_t BgL_arg4483z00_1290;

							{
								BgL_variablez00_bglt BgL_auxz00_4097;

								BgL_auxz00_4097 =
									(BgL_variablez00_bglt) (BgL_instance4217z00_1285);
								BgL_arg4482z00_1289 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4097))->BgL_typez00);
							}
							{
								BgL_variablez00_bglt BgL_auxz00_4100;

								BgL_auxz00_4100 =
									(BgL_variablez00_bglt) (BgL_instance4217z00_1285);
								BgL_arg4483z00_1290 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4100))->BgL_namez00);
							}
							BgL_arg4479z00_1286 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg4482z00_1289, BgL_arg4483z00_1290);
						}
						BgL_arg4481z00_1288 =
							BGl_loopz00zzcgen_cgenz00(CDR(BgL_argsz00_1277));
						return
							string_append_3(BgL_arg4479z00_1286,
							BGl_string5190z00zzcgen_cgenz00, BgL_arg4481z00_1288);
					}
				}
		}
	}



/* *void-kont* */
	BgL_cvoidz00_bglt BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(obj_t BgL_copz00_17)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 165 */
			return
				BGl_makezd2cvoidzd2zzcgen_copz00(BFALSE,
				(BgL_copz00_bglt) (BgL_copz00_17));
		}
	}



/* _*void-kont* */
	obj_t BGl__za2voidzd2kontza2zd2zzcgen_cgenz00(obj_t BgL_envz00_3721,
		obj_t BgL_copz00_3722)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 165 */
			return (obj_t) (BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(BgL_copz00_3722));
		}
	}



/* block-kont */
	BGL_EXPORTED_DEF obj_t BGl_blockzd2kontzd2zzcgen_cgenz00(obj_t BgL_copz00_18,
		obj_t BgL_locz00_19)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 179 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_18,
					BGl_blockz00zzcgen_copz00))
				{	/* Cgen/cgen.scm 181 */
					return BgL_copz00_18;
				}
			else
				{	/* Cgen/cgen.scm 181 */
					return
						(obj_t) (BGl_makezd2blockzd2zzcgen_copz00(BgL_locz00_19,
							(BgL_copz00_bglt) (BgL_copz00_18)));
				}
		}
	}



/* _block-kont */
	obj_t BGl__blockzd2kontzd2zzcgen_cgenz00(obj_t BgL_envz00_3726,
		obj_t BgL_copz00_3727, obj_t BgL_locz00_3728)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 179 */
			return
				BGl_blockzd2kontzd2zzcgen_cgenz00(BgL_copz00_3727, BgL_locz00_3728);
		}
	}



/* make-setq-kont */
	obj_t BGl_makezd2setqzd2kontz00zzcgen_cgenz00(BgL_variablez00_bglt
		BgL_varz00_22, obj_t BgL_locz00_23, obj_t BgL_kontz00_24)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 201 */
			{	/* Cgen/cgen.scm 202 */
				obj_t BgL_zc3anonymousza34490ze3z83_3729;

				BgL_zc3anonymousza34490ze3z83_3729 =
					make_fx_procedure(BGl_zc3anonymousza34490ze3z83zzcgen_cgenz00,
					(int) (((long) 1)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3anonymousza34490ze3z83_3729,
					(int) (((long) 0)), (obj_t) (BgL_varz00_22));
				PROCEDURE_SET(BgL_zc3anonymousza34490ze3z83_3729,
					(int) (((long) 1)), BgL_locz00_23);
				PROCEDURE_SET(BgL_zc3anonymousza34490ze3z83_3729,
					(int) (((long) 2)), BgL_kontz00_24);
				return BgL_zc3anonymousza34490ze3z83_3729;
			}
		}
	}



/* <anonymous:4490> */
	obj_t BGl_zc3anonymousza34490ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3730,
		obj_t BgL_copz00_3734)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 202 */
			{	/* Cgen/cgen.scm 203 */
				obj_t BgL_varz00_3731;

				obj_t BgL_locz00_3732;

				obj_t BgL_kontz00_3733;

				BgL_varz00_3731 = PROCEDURE_REF(BgL_envz00_3730, (int) (((long) 0)));
				BgL_locz00_3732 = PROCEDURE_REF(BgL_envz00_3730, (int) (((long) 1)));
				BgL_kontz00_3733 = PROCEDURE_REF(BgL_envz00_3730, (int) (((long) 2)));
				{
					obj_t BgL_copz00_1298;

					BgL_copz00_1298 = BgL_copz00_3734;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_1298,
							BGl_cfailz00zzcgen_copz00))
						{	/* Cgen/cgen.scm 203 */
							return BgL_copz00_1298;
						}
					else
						{	/* Cgen/cgen.scm 206 */
							BgL_csetqz00_bglt BgL_arg4492z00_1301;

							{	/* Cgen/cgen.scm 206 */
								BgL_varcz00_bglt BgL_arg4493z00_1302;

								obj_t BgL_arg4494z00_1303;

								BgL_arg4493z00_1302 =
									BGl_makezd2varczd2zzcgen_copz00(BFALSE,
									(BgL_variablez00_bglt) (BgL_varz00_3731));
								if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_1298,
										BGl_csetqz00zzcgen_copz00))
									{	/* Cgen/cgen.scm 210 */
										obj_t BgL_arg4496z00_1305;

										obj_t BgL_arg4497z00_1306;

										{
											BgL_copz00_bglt BgL_auxz00_4139;

											BgL_auxz00_4139 =
												(BgL_copz00_bglt) (
												(BgL_csetqz00_bglt) (BgL_copz00_1298));
											BgL_arg4496z00_1305 =
												(((BgL_copz00_bglt) CREF(BgL_auxz00_4139))->BgL_locz00);
										}
										{	/* Cgen/cgen.scm 214 */
											BgL_catomz00_bglt BgL_arg4498z00_1307;

											{	/* Cgen/cgen.scm 214 */
												obj_t BgL_arg4501z00_1310;

												{
													BgL_copz00_bglt BgL_auxz00_4143;

													BgL_auxz00_4143 =
														(BgL_copz00_bglt) (
														(BgL_csetqz00_bglt) (BgL_copz00_1298));
													BgL_arg4501z00_1310 =
														(((BgL_copz00_bglt) CREF(BgL_auxz00_4143))->
														BgL_locz00);
												}
												BgL_arg4498z00_1307 =
													BGl_makezd2catomzd2zzcgen_copz00(BgL_arg4501z00_1310,
													BUNSPEC);
											}
											{	/* Cgen/cgen.scm 212 */
												obj_t BgL_list4499z00_1308;

												{	/* Cgen/cgen.scm 212 */
													obj_t BgL_arg4500z00_1309;

													BgL_arg4500z00_1309 =
														MAKE_PAIR((obj_t) (BgL_arg4498z00_1307), BNIL);
													BgL_list4499z00_1308 =
														MAKE_PAIR(BgL_copz00_1298, BgL_arg4500z00_1309);
												}
												BgL_arg4497z00_1306 = BgL_list4499z00_1308;
											}
										}
										BgL_arg4494z00_1303 =
											(obj_t) (BGl_makezd2csequencezd2zzcgen_copz00
											(BgL_arg4496z00_1305, ((bool_t) 1), BgL_arg4497z00_1306));
									}
								else
									{	/* Cgen/cgen.scm 208 */
										BgL_arg4494z00_1303 = BgL_copz00_1298;
									}
								BgL_arg4492z00_1301 =
									BGl_makezd2csetqzd2zzcgen_copz00(BgL_locz00_3732,
									BgL_arg4493z00_1302, (BgL_copz00_bglt) (BgL_arg4494z00_1303));
							}
							return
								PROCEDURE_ENTRY(BgL_kontz00_3733) (BgL_kontz00_3733,
								(obj_t) (BgL_arg4492z00_1301), BEOA);
						}
				}
			}
		}
	}



/* extern->cop */
	obj_t BGl_externzd2ze3copz31zzcgen_cgenz00(obj_t BgL_formatz00_39,
		bool_t BgL_argszd2safezd2_40, BgL_externz00_bglt BgL_nodez00_41,
		obj_t BgL_kontz00_42)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 304 */
			{	/* Cgen/cgen.scm 309 */
				obj_t BgL_arg4502z00_1312;

				obj_t BgL_arg4503z00_1313;

				BgL_arg4502z00_1312 =
					(((BgL_externz00_bglt) CREF(BgL_nodez00_41))->BgL_exprza2za2);
				{
					BgL_nodez00_bglt BgL_auxz00_4159;

					BgL_auxz00_4159 = (BgL_nodez00_bglt) (BgL_nodez00_41);
					BgL_arg4503z00_1313 =
						(((BgL_nodez00_bglt) CREF(BgL_auxz00_4159))->BgL_locz00);
				}
				{	/* Cgen/cgen.scm 314 */
					obj_t BgL_zc3anonymousza34505ze3z83_3735;

					{
						int BgL_auxz00_4162;

						BgL_auxz00_4162 = (int) (((long) 3));
						BgL_zc3anonymousza34505ze3z83_3735 =
							MAKE_L_PROCEDURE(BGl_zc3anonymousza34505ze3z83zzcgen_cgenz00,
							BgL_auxz00_4162);
					}
					PROCEDURE_L_SET(BgL_zc3anonymousza34505ze3z83_3735,
						(int) (((long) 0)), (obj_t) (BgL_nodez00_41));
					PROCEDURE_L_SET(BgL_zc3anonymousza34505ze3z83_3735,
						(int) (((long) 1)), BgL_formatz00_39);
					PROCEDURE_L_SET(BgL_zc3anonymousza34505ze3z83_3735,
						(int) (((long) 2)), BgL_kontz00_42);
					return
						BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(BgL_arg4502z00_1312,
						BgL_argszd2safezd2_40, BgL_arg4503z00_1313,
						BgL_zc3anonymousza34505ze3z83_3735);
				}
			}
		}
	}



/* <anonymous:4505> */
	obj_t BGl_zc3anonymousza34505ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3736,
		obj_t BgL_newzd2argszd2_3740)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 312 */
			{	/* Cgen/cgen.scm 314 */
				obj_t BgL_instance4241z00_3737;

				obj_t BgL_formatz00_3738;

				obj_t BgL_kontz00_3739;

				BgL_instance4241z00_3737 =
					PROCEDURE_L_REF(BgL_envz00_3736, (int) (((long) 0)));
				BgL_formatz00_3738 =
					PROCEDURE_L_REF(BgL_envz00_3736, (int) (((long) 1)));
				BgL_kontz00_3739 = PROCEDURE_L_REF(BgL_envz00_3736, (int) (((long) 2)));
				{
					obj_t BgL_newzd2argszd2_1315;

					BgL_newzd2argszd2_1315 = BgL_newzd2argszd2_3740;
					{	/* Cgen/cgen.scm 314 */
						BgL_cpragmaz00_bglt BgL_arg4506z00_1317;

						{	/* Cgen/cgen.scm 314 */
							obj_t BgL_arg4507z00_1318;

							{
								BgL_nodez00_bglt BgL_auxz00_4179;

								BgL_auxz00_4179 = (BgL_nodez00_bglt) (BgL_instance4241z00_3737);
								BgL_arg4507z00_1318 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4179))->BgL_locz00);
							}
							BgL_arg4506z00_1317 =
								BGl_makezd2cpragmazd2zzcgen_copz00(BgL_arg4507z00_1318,
								BgL_formatz00_3738, BgL_newzd2argszd2_1315);
						}
						return
							PROCEDURE_ENTRY(BgL_kontz00_3739) (BgL_kontz00_3739,
							(obj_t) (BgL_arg4506z00_1317), BEOA);
					}
				}
			}
		}
	}



/* bdb-let-var */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_bdbzd2letzd2varz00zzcgen_cgenz00(BgL_copz00_bglt BgL_copz00_71,
		obj_t BgL_locz00_72)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 580 */
			{	/* Cgen/cgen.scm 581 */
				bool_t BgL_testz00_4186;

				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* Cgen/cgen.scm 581 */
						if (STRUCTP(BgL_locz00_72))
							{	/* Cgen/cgen.scm 581 */
								BgL_testz00_4186 =
									(STRUCT_KEY(BgL_locz00_72) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Cgen/cgen.scm 581 */
								BgL_testz00_4186 = ((bool_t) 0);
							}
					}
				else
					{	/* Cgen/cgen.scm 581 */
						BgL_testz00_4186 = ((bool_t) 0);
					}
				if (BgL_testz00_4186)
					{	/* Cgen/cgen.scm 581 */
						return
							(BgL_copz00_bglt) (BGl_makezd2bdbzd2blockz00zzcgen_copz00
							(BgL_locz00_72, BgL_copz00_71));
					}
				else
					{	/* Cgen/cgen.scm 581 */
						return BgL_copz00_71;
					}
			}
		}
	}



/* _bdb-let-var */
	obj_t BGl__bdbzd2letzd2varz00zzcgen_cgenz00(obj_t BgL_envz00_3741,
		obj_t BgL_copz00_3742, obj_t BgL_locz00_3743)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 580 */
			return
				(obj_t) (BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
					(BgL_copz00_bglt) (BgL_copz00_3742), BgL_locz00_3743));
		}
	}



/* node-setq */
	BGL_EXPORTED_DEF BgL_setqz00_bglt
		BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_variablez00_bglt BgL_variablez00_83,
		BgL_nodez00_bglt BgL_valuez00_84)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 779 */
			{	/* Cgen/cgen.scm 781 */
				obj_t BgL_arg4510z00_1322;

				BgL_varz00_bglt BgL_arg4511z00_1323;

				BgL_arg4510z00_1322 =
					(((BgL_nodez00_bglt) CREF(BgL_valuez00_84))->BgL_locz00);
				{	/* Cgen/cgen.scm 785 */
					BgL_typez00_bglt BgL_arg4512z00_1324;

					BgL_arg4512z00_1324 =
						(((BgL_variablez00_bglt) CREF(BgL_variablez00_83))->BgL_typez00);
					BgL_arg4511z00_1323 =
						BGl_makezd2varzd2zzast_nodez00(BFALSE, BgL_arg4512z00_1324,
						BgL_variablez00_83);
				}
				return
					BGl_makezd2setqzd2zzast_nodez00(BgL_arg4510z00_1322,
					(BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00),
					BgL_arg4511z00_1323, BgL_valuez00_84);
			}
		}
	}



/* _node-setq */
	obj_t BGl__nodezd2setqzd2zzcgen_cgenz00(obj_t BgL_envz00_3744,
		obj_t BgL_variablez00_3745, obj_t BgL_valuez00_3746)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 779 */
			return
				(obj_t) (BGl_nodezd2setqzd2zzcgen_cgenz00(
					(BgL_variablez00_bglt) (BgL_variablez00_3745),
					(BgL_nodez00_bglt) (BgL_valuez00_3746)));
		}
	}



/* make-local-svar/name */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t BgL_idz00_85,
		BgL_typez00_bglt BgL_typez00_86)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 792 */
			{	/* Cgen/cgen.scm 793 */
				BgL_localz00_bglt BgL_localz00_1325;

				BgL_localz00_1325 =
					BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_85,
					BgL_typez00_86);
				{	/* Cgen/cgen.scm 794 */
					bool_t BgL_testz00_4210;

					{	/* Cgen/cgen.scm 794 */
						obj_t BgL_auxz00_4211;

						{
							BgL_variablez00_bglt BgL_auxz00_4212;

							BgL_auxz00_4212 = (BgL_variablez00_bglt) (BgL_localz00_1325);
							BgL_auxz00_4211 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4212))->BgL_namez00);
						}
						BgL_testz00_4210 = STRINGP(BgL_auxz00_4211);
					}
					if (BgL_testz00_4210)
						{	/* Cgen/cgen.scm 794 */
							BFALSE;
						}
					else
						{	/* Cgen/cgen.scm 794 */
							BGl_errorz00zz__errorz00(BGl_string5191z00zzcgen_cgenz00,
								BGl_string5192z00zzcgen_cgenz00, (obj_t) (BgL_localz00_1325));
						}
				}
				return BgL_localz00_1325;
			}
		}
	}



/* _make-local-svar/name */
	obj_t BGl__makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t BgL_envz00_3747,
		obj_t BgL_idz00_3748, obj_t BgL_typez00_3749)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 792 */
			return
				(obj_t) (BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(BgL_idz00_3748,
					(BgL_typez00_bglt) (BgL_typez00_3749)));
		}
	}



/* no-bdb-newline */
	obj_t BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 803 */
			if ((BGl_za2bdbzd2debugza2zd2zzengine_paramz00 == BINT(((long) 0))))
				{	/* Cgen/cgen.scm 804 */
					return
						bgl_display_char(((unsigned char) '\n'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* Cgen/cgen.scm 804 */
					return BFALSE;
				}
		}
	}



/* node-args->cop */
	obj_t BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(obj_t BgL_argsz00_87,
		bool_t BgL_argszd2safezd2_88, obj_t BgL_locz00_89, obj_t BgL_kontz00_90)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 810 */
			{	/* Cgen/cgen.scm 811 */
				BgL_localz00_bglt BgL_g4346z00_1330;

				BgL_g4346z00_1330 =
					BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF(((long)
							2)), (BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
				{
					obj_t BgL_oldzd2actualszd2_1334;

					obj_t BgL_newzd2actualszd2_1335;

					BgL_localz00_bglt BgL_auxz00_1336;

					obj_t BgL_auxsz00_1337;

					obj_t BgL_expsz00_1338;

					BgL_oldzd2actualszd2_1334 = BgL_argsz00_87;
					BgL_newzd2actualszd2_1335 = BNIL;
					BgL_auxz00_1336 = BgL_g4346z00_1330;
					BgL_auxsz00_1337 = BNIL;
					BgL_expsz00_1338 = BNIL;
				BgL_zc3anonymousza34516ze3z83_1339:
					if (NULLP(BgL_oldzd2actualszd2_1334))
						{	/* Cgen/cgen.scm 816 */
							if (NULLP(BgL_auxsz00_1337))
								{	/* Cgen/cgen.scm 818 */
									obj_t BgL_arg4519z00_1342;

									BgL_arg4519z00_1342 =
										bgl_reverse_bang(BgL_newzd2actualszd2_1335);
									return
										PROCEDURE_L_ENTRY(BgL_kontz00_90) (BgL_kontz00_90,
										BgL_arg4519z00_1342);
								}
							else
								{	/* Cgen/cgen.scm 823 */
									BgL_csequencez00_bglt BgL_arg4520z00_1343;

									{	/* Cgen/cgen.scm 823 */
										obj_t BgL_arg4521z00_1344;

										{	/* Cgen/cgen.scm 823 */
											BgL_localzd2varzd2_bglt BgL_arg4522z00_1345;

											BgL_csequencez00_bglt BgL_arg4523z00_1346;

											obj_t BgL_arg4524z00_1347;

											BgL_arg4522z00_1345 =
												BGl_makezd2localzd2varz00zzcgen_copz00(BgL_locz00_89,
												BgL_auxsz00_1337);
											BgL_arg4523z00_1346 =
												BGl_makezd2csequencezd2zzcgen_copz00(BFALSE,
												((bool_t) 0), BgL_expsz00_1338);
											{	/* Cgen/cgen.scm 827 */
												obj_t BgL_arg4528z00_1351;

												BgL_arg4528z00_1351 =
													bgl_reverse_bang(BgL_newzd2actualszd2_1335);
												BgL_arg4524z00_1347 =
													PROCEDURE_L_ENTRY(BgL_kontz00_90) (BgL_kontz00_90,
													BgL_arg4528z00_1351);
											}
											{	/* Cgen/cgen.scm 822 */
												obj_t BgL_list4525z00_1348;

												{	/* Cgen/cgen.scm 822 */
													obj_t BgL_arg4526z00_1349;

													{	/* Cgen/cgen.scm 822 */
														obj_t BgL_arg4527z00_1350;

														BgL_arg4527z00_1350 =
															MAKE_PAIR(BgL_arg4524z00_1347, BNIL);
														BgL_arg4526z00_1349 =
															MAKE_PAIR(
															(obj_t) (BgL_arg4523z00_1346),
															BgL_arg4527z00_1350);
													}
													BgL_list4525z00_1348 =
														MAKE_PAIR(
														(obj_t) (BgL_arg4522z00_1345), BgL_arg4526z00_1349);
												}
												BgL_arg4521z00_1344 = BgL_list4525z00_1348;
											}
										}
										BgL_arg4520z00_1343 =
											BGl_makezd2csequencezd2zzcgen_copz00(BgL_locz00_89,
											((bool_t) 0), BgL_arg4521z00_1344);
									}
									return
										(obj_t) (BGl_makezd2blockzd2zzcgen_copz00(BFALSE,
											(BgL_copz00_bglt) (BgL_arg4520z00_1343)));
								}
						}
					else
						{	/* Cgen/cgen.scm 828 */
							BgL_copz00_bglt BgL_copz00_1352;

							{	/* Cgen/cgen.scm 828 */
								BgL_setqz00_bglt BgL_arg4548z00_1375;

								{	/* Cgen/cgen.scm 828 */
									obj_t BgL_arg4549z00_1376;

									BgL_arg4549z00_1376 = CAR(BgL_oldzd2actualszd2_1334);
									BgL_arg4548z00_1375 =
										BGl_nodezd2setqzd2zzcgen_cgenz00(
										(BgL_variablez00_bglt) (BgL_auxz00_1336),
										(BgL_nodez00_bglt) (BgL_arg4549z00_1376));
								}
								{	/* Cgen/cgen.scm 828 */
									BgL_copz00_bglt BgL_res5084z00_2711;

									{	/* Cgen/cgen.scm 828 */
										BgL_nodez00_bglt BgL_nodez00_2684;

										obj_t BgL_kontz00_2685;

										BgL_nodez00_2684 = (BgL_nodez00_bglt) (BgL_arg4548z00_1375);
										BgL_kontz00_2685 = BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
										{	/* Cgen/cgen.scm 828 */
											obj_t BgL_method4375z00_2686;

											{	/* Cgen/cgen.scm 828 */
												BgL_objectz00_bglt BgL_objz00_2687;

												BgL_objz00_2687 =
													(BgL_objectz00_bglt) (BgL_nodez00_2684);
												{	/* Cgen/cgen.scm 828 */
													long BgL_objzd2classzd2numz00_2688;

													BgL_objzd2classzd2numz00_2688 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2687);
													{	/* Cgen/cgen.scm 828 */
														obj_t BgL_arg2643z00_2689;

														BgL_arg2643z00_2689 =
															PROCEDURE_REF
															(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
															(int) (((long) 1)));
														{	/* Cgen/cgen.scm 828 */
															obj_t BgL_arrayz00_2691;

															int BgL_offsetz00_2692;

															BgL_arrayz00_2691 = BgL_arg2643z00_2689;
															BgL_offsetz00_2692 =
																(int) (BgL_objzd2classzd2numz00_2688);
															{	/* Cgen/cgen.scm 828 */
																long BgL_offsetz00_2693;

																BgL_offsetz00_2693 =
																	((long) (BgL_offsetz00_2692) - OBJECT_TYPE);
																{	/* Cgen/cgen.scm 828 */
																	long BgL_modz00_2694;

																	{	/* Cgen/cgen.scm 828 */
																		int BgL_arg2645z00_2695;

																		BgL_arg2645z00_2695 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 828 */
																			long BgL_auxz00_4262;

																			BgL_auxz00_4262 =
																				(long) (BgL_arg2645z00_2695);
																			BgL_modz00_2694 =
																				(BgL_offsetz00_2693 / BgL_auxz00_4262);
																	}}
																	{	/* Cgen/cgen.scm 828 */
																		long BgL_restz00_2696;

																		{	/* Cgen/cgen.scm 828 */
																			int BgL_arg2644z00_2697;

																			BgL_arg2644z00_2697 = (int) (((long) 16));
																			{	/* Cgen/cgen.scm 828 */
																				long BgL_auxz00_4266;

																				BgL_auxz00_4266 =
																					(long) (BgL_arg2644z00_2697);
																				BgL_restz00_2696 =
																					(BgL_offsetz00_2693 %
																					BgL_auxz00_4266);
																		}}
																		{	/* Cgen/cgen.scm 828 */

																			BgL_method4375z00_2686 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2691,
																					(int) (BgL_modz00_2694)),
																				(int) (BgL_restz00_2696));
											}}}}}}}}
											BgL_res5084z00_2711 =
												(BgL_copz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4375z00_2686) (BgL_method4375z00_2686,
													(obj_t) (BgL_nodez00_2684), BgL_kontz00_2685, BEOA));
									}}
									BgL_copz00_1352 = BgL_res5084z00_2711;
							}}
							{	/* Cgen/cgen.scm 829 */
								bool_t BgL_testz00_4277;

								{	/* Cgen/cgen.scm 829 */
									bool_t BgL_testz00_4278;

									{	/* Cgen/cgen.scm 829 */
										obj_t BgL_obj3793z00_2712;

										BgL_obj3793z00_2712 = (obj_t) (BgL_copz00_1352);
										BgL_testz00_4278 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3793z00_2712,
											BGl_csetqz00zzcgen_copz00);
									}
									if (BgL_testz00_4278)
										{	/* Cgen/cgen.scm 830 */
											bool_t BgL_testz00_4281;

											{	/* Cgen/cgen.scm 830 */
												obj_t BgL_auxz00_4282;

												{	/* Cgen/cgen.scm 830 */
													BgL_variablez00_bglt BgL_auxz00_4283;

													{	/* Cgen/cgen.scm 830 */
														BgL_varcz00_bglt BgL_obj3686z00_2714;

														{
															BgL_csetqz00_bglt BgL_auxz00_4284;

															BgL_auxz00_4284 =
																(BgL_csetqz00_bglt) (BgL_copz00_1352);
															BgL_obj3686z00_2714 =
																(((BgL_csetqz00_bglt) CREF(BgL_auxz00_4284))->
																BgL_varz00);
														}
														BgL_auxz00_4283 =
															(((BgL_varcz00_bglt) CREF(BgL_obj3686z00_2714))->
															BgL_variablez00);
													}
													BgL_auxz00_4282 = (obj_t) (BgL_auxz00_4283);
												}
												BgL_testz00_4281 =
													(BgL_auxz00_4282 == (obj_t) (BgL_auxz00_1336));
											}
											if (BgL_testz00_4281)
												{	/* Cgen/cgen.scm 830 */
													if (BgL_argszd2safezd2_88)
														{	/* Cgen/cgen.scm 831 */
															BgL_testz00_4277 = BgL_argszd2safezd2_88;
														}
													else
														{	/* Cgen/cgen.scm 832 */
															bool_t BgL__ortest_4354z00_1368;

															{	/* Cgen/cgen.scm 832 */
																BgL_copz00_bglt BgL_arg4545z00_1372;

																{
																	BgL_csetqz00_bglt BgL_auxz00_4292;

																	BgL_auxz00_4292 =
																		(BgL_csetqz00_bglt) (BgL_copz00_1352);
																	BgL_arg4545z00_1372 =
																		(((BgL_csetqz00_bglt)
																			CREF(BgL_auxz00_4292))->BgL_valuez00);
																}
																{	/* Cgen/cgen.scm 832 */
																	obj_t BgL_obj3682z00_2716;

																	BgL_obj3682z00_2716 =
																		(obj_t) (BgL_arg4545z00_1372);
																	BgL__ortest_4354z00_1368 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj3682z00_2716,
																		BGl_catomz00zzcgen_copz00);
																}
															}
															if (BgL__ortest_4354z00_1368)
																{	/* Cgen/cgen.scm 832 */
																	BgL_testz00_4277 = BgL__ortest_4354z00_1368;
																}
															else
																{	/* Cgen/cgen.scm 833 */
																	bool_t BgL__ortest_4355z00_1369;

																	{	/* Cgen/cgen.scm 833 */
																		BgL_copz00_bglt BgL_arg4544z00_1371;

																		{
																			BgL_csetqz00_bglt BgL_auxz00_4298;

																			BgL_auxz00_4298 =
																				(BgL_csetqz00_bglt) (BgL_copz00_1352);
																			BgL_arg4544z00_1371 =
																				(((BgL_csetqz00_bglt)
																					CREF(BgL_auxz00_4298))->BgL_valuez00);
																		}
																		{	/* Cgen/cgen.scm 833 */
																			obj_t BgL_obj3696z00_2718;

																			BgL_obj3696z00_2718 =
																				(obj_t) (BgL_arg4544z00_1371);
																			BgL__ortest_4355z00_1369 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj3696z00_2718,
																				BGl_varcz00zzcgen_copz00);
																		}
																	}
																	if (BgL__ortest_4355z00_1369)
																		{	/* Cgen/cgen.scm 833 */
																			BgL_testz00_4277 =
																				BgL__ortest_4355z00_1369;
																		}
																	else
																		{	/* Cgen/cgen.scm 834 */
																			BgL_copz00_bglt BgL_arg4543z00_1370;

																			{
																				BgL_csetqz00_bglt BgL_auxz00_4304;

																				BgL_auxz00_4304 =
																					(BgL_csetqz00_bglt) (BgL_copz00_1352);
																				BgL_arg4543z00_1370 =
																					(((BgL_csetqz00_bglt)
																						CREF(BgL_auxz00_4304))->
																					BgL_valuez00);
																			}
																			{	/* Cgen/cgen.scm 834 */
																				obj_t BgL_obj3714z00_2720;

																				BgL_obj3714z00_2720 =
																					(obj_t) (BgL_arg4543z00_1370);
																				BgL_testz00_4277 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj3714z00_2720,
																					BGl_cpragmaz00zzcgen_copz00);
																			}
																		}
																}
														}
												}
											else
												{	/* Cgen/cgen.scm 830 */
													BgL_testz00_4277 = ((bool_t) 0);
												}
										}
									else
										{	/* Cgen/cgen.scm 829 */
											BgL_testz00_4277 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_4277)
									{	/* Cgen/cgen.scm 835 */
										obj_t BgL_arg4530z00_1354;

										obj_t BgL_arg4531z00_1355;

										BgL_arg4530z00_1354 = CDR(BgL_oldzd2actualszd2_1334);
										{	/* Cgen/cgen.scm 836 */
											BgL_copz00_bglt BgL_arg4532z00_1356;

											{
												BgL_csetqz00_bglt BgL_auxz00_4310;

												BgL_auxz00_4310 = (BgL_csetqz00_bglt) (BgL_copz00_1352);
												BgL_arg4532z00_1356 =
													(((BgL_csetqz00_bglt) CREF(BgL_auxz00_4310))->
													BgL_valuez00);
											}
											BgL_arg4531z00_1355 =
												MAKE_PAIR(
												(obj_t) (BgL_arg4532z00_1356),
												BgL_newzd2actualszd2_1335);
										}
										{
											obj_t BgL_newzd2actualszd2_4316;

											obj_t BgL_oldzd2actualszd2_4315;

											BgL_oldzd2actualszd2_4315 = BgL_arg4530z00_1354;
											BgL_newzd2actualszd2_4316 = BgL_arg4531z00_1355;
											BgL_newzd2actualszd2_1335 = BgL_newzd2actualszd2_4316;
											BgL_oldzd2actualszd2_1334 = BgL_oldzd2actualszd2_4315;
											goto BgL_zc3anonymousza34516ze3z83_1339;
										}
									}
								else
									{	/* Cgen/cgen.scm 829 */
										{	/* Cgen/cgen.scm 841 */
											BgL_typez00_bglt BgL_arg4533z00_1357;

											{	/* Cgen/cgen.scm 841 */
												obj_t BgL_arg4534z00_1358;

												BgL_arg4534z00_1358 = CAR(BgL_oldzd2actualszd2_1334);
												BgL_arg4533z00_1357 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg4534z00_1358));
											}
											{
												BgL_variablez00_bglt BgL_auxz00_4320;

												BgL_auxz00_4320 =
													(BgL_variablez00_bglt) (BgL_auxz00_1336);
												((((BgL_variablez00_bglt) CREF(BgL_auxz00_4320))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_arg4533z00_1357), BUNSPEC);
											}
										}
										{	/* Cgen/cgen.scm 842 */
											obj_t BgL_arg4535z00_1359;

											obj_t BgL_arg4536z00_1360;

											BgL_localz00_bglt BgL_arg4537z00_1361;

											obj_t BgL_arg4538z00_1362;

											obj_t BgL_arg4539z00_1363;

											BgL_arg4535z00_1359 = CDR(BgL_oldzd2actualszd2_1334);
											{	/* Cgen/cgen.scm 843 */
												BgL_varcz00_bglt BgL_arg4540z00_1364;

												BgL_arg4540z00_1364 =
													BGl_makezd2varczd2zzcgen_copz00(BgL_locz00_89,
													(BgL_variablez00_bglt) (BgL_auxz00_1336));
												BgL_arg4536z00_1360 =
													MAKE_PAIR(
													(obj_t) (BgL_arg4540z00_1364),
													BgL_newzd2actualszd2_1335);
											}
											BgL_arg4537z00_1361 =
												BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
												(CNST_TABLE_REF(((long) 2)),
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
											BgL_arg4538z00_1362 =
												MAKE_PAIR((obj_t) (BgL_auxz00_1336), BgL_auxsz00_1337);
											BgL_arg4539z00_1363 =
												MAKE_PAIR((obj_t) (BgL_copz00_1352), BgL_expsz00_1338);
											{
												obj_t BgL_expsz00_4339;

												obj_t BgL_auxsz00_4338;

												BgL_localz00_bglt BgL_auxz00_4337;

												obj_t BgL_newzd2actualszd2_4336;

												obj_t BgL_oldzd2actualszd2_4335;

												BgL_oldzd2actualszd2_4335 = BgL_arg4535z00_1359;
												BgL_newzd2actualszd2_4336 = BgL_arg4536z00_1360;
												BgL_auxz00_4337 = BgL_arg4537z00_1361;
												BgL_auxsz00_4338 = BgL_arg4538z00_1362;
												BgL_expsz00_4339 = BgL_arg4539z00_1363;
												BgL_expsz00_1338 = BgL_expsz00_4339;
												BgL_auxsz00_1337 = BgL_auxsz00_4338;
												BgL_auxz00_1336 = BgL_auxz00_4337;
												BgL_newzd2actualszd2_1335 = BgL_newzd2actualszd2_4336;
												BgL_oldzd2actualszd2_1334 = BgL_oldzd2actualszd2_4335;
												goto BgL_zc3anonymousza34516ze3z83_1339;
											}
										}
									}
							}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_nodezd2ze3copzd2default4374zd2envz31zzcgen_cgenz00,
				BGl_nodez00zzast_nodez00, BGl_string5193z00zzcgen_cgenz00);
		}
	}



/* node->cop */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_nodez00_bglt BgL_nodez00_25,
		obj_t BgL_kontz00_26)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 223 */
			{	/* Cgen/cgen.scm 223 */
				obj_t BgL_method4375z00_2727;

				{	/* Cgen/cgen.scm 223 */
					BgL_objectz00_bglt BgL_objz00_2728;

					BgL_objz00_2728 = (BgL_objectz00_bglt) (BgL_nodez00_25);
					{	/* Cgen/cgen.scm 223 */
						long BgL_objzd2classzd2numz00_2729;

						BgL_objzd2classzd2numz00_2729 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2728);
						{	/* Cgen/cgen.scm 223 */
							obj_t BgL_arg2643z00_2730;

							BgL_arg2643z00_2730 =
								PROCEDURE_REF(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
								(int) (((long) 1)));
							{	/* Cgen/cgen.scm 223 */
								obj_t BgL_arrayz00_2732;

								int BgL_offsetz00_2733;

								BgL_arrayz00_2732 = BgL_arg2643z00_2730;
								BgL_offsetz00_2733 = (int) (BgL_objzd2classzd2numz00_2729);
								{	/* Cgen/cgen.scm 223 */
									long BgL_offsetz00_2734;

									BgL_offsetz00_2734 =
										((long) (BgL_offsetz00_2733) - OBJECT_TYPE);
									{	/* Cgen/cgen.scm 223 */
										long BgL_modz00_2735;

										{	/* Cgen/cgen.scm 223 */
											int BgL_arg2645z00_2736;

											BgL_arg2645z00_2736 = (int) (((long) 16));
											{	/* Cgen/cgen.scm 223 */
												long BgL_auxz00_4349;

												BgL_auxz00_4349 = (long) (BgL_arg2645z00_2736);
												BgL_modz00_2735 =
													(BgL_offsetz00_2734 / BgL_auxz00_4349);
										}}
										{	/* Cgen/cgen.scm 223 */
											long BgL_restz00_2737;

											{	/* Cgen/cgen.scm 223 */
												int BgL_arg2644z00_2738;

												BgL_arg2644z00_2738 = (int) (((long) 16));
												{	/* Cgen/cgen.scm 223 */
													long BgL_auxz00_4353;

													BgL_auxz00_4353 = (long) (BgL_arg2644z00_2738);
													BgL_restz00_2737 =
														(BgL_offsetz00_2734 % BgL_auxz00_4353);
											}}
											{	/* Cgen/cgen.scm 223 */

												BgL_method4375z00_2727 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2732,
														(int) (BgL_modz00_2735)), (int) (BgL_restz00_2737));
				}}}}}}}}
				return
					(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_2727)
					(BgL_method4375z00_2727, (obj_t) (BgL_nodez00_25), BgL_kontz00_26,
						BEOA));
			}
		}
	}



/* _node->cop */
	obj_t BGl__nodezd2ze3copz31zzcgen_cgenz00(obj_t BgL_envz00_3723,
		obj_t BgL_nodez00_3724, obj_t BgL_kontz00_3725)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 223 */
			return
				(obj_t) (BGl_nodezd2ze3copz31zzcgen_cgenz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3724), BgL_kontz00_3725));
		}
	}



/* node->cop-default4374 */
	BgL_copz00_bglt
		BGl_nodezd2ze3copzd2default4374ze3zzcgen_cgenz00(BgL_nodez00_bglt
		BgL_nodez00_27, obj_t BgL_kontz00_28)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			return
				(BgL_copz00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
					BGl_string5194z00zzcgen_cgenz00, (obj_t) (BgL_nodez00_27)));
		}
	}



/* _node->cop-default4374 */
	obj_t BGl__nodezd2ze3copzd2default4374ze3zzcgen_cgenz00(obj_t BgL_envz00_3750,
		obj_t BgL_nodez00_3751, obj_t BgL_kontz00_3752)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			return
				(obj_t) (BGl_nodezd2ze3copzd2default4374ze3zzcgen_cgenz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3751), BgL_kontz00_3752));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_atomz00zzast_nodez00,
				BGl_proc5195z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_kwotez00zzast_nodez00,
				BGl_proc5196z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_varz00zzast_nodez00,
				BGl_proc5197z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_closurez00zzast_nodez00,
				BGl_proc5198z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_sequencez00zzast_nodez00,
				BGl_proc5199z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc5200z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_getfieldz00zzast_nodez00,
				BGl_proc5201z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_setfieldz00zzast_nodez00,
				BGl_proc5202z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc5203z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_vrefz00zzast_nodez00,
				BGl_proc5204z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc5205z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_vallocz00zzast_nodez00,
				BGl_proc5206z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_castz00zzast_nodez00,
				BGl_proc5207z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_setqz00zzast_nodez00,
				BGl_proc5208z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5209z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_failz00zzast_nodez00,
				BGl_proc5210z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_selectz00zzast_nodez00,
				BGl_proc5211z00zzcgen_cgenz00, BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5212z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5213z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5214z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5215z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5216z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5217z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5218z00zzcgen_cgenz00,
				BGl_string5193z00zzcgen_cgenz00);
		}
	}



/* node->cop-box-set!4423 */
	obj_t BGl_nodezd2ze3copzd2boxzd2setz124423z23zzcgen_cgenz00(obj_t
		BgL_envz00_3782, obj_t BgL_nodez00_3783, obj_t BgL_kontz00_3784)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 762 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_2539;

				obj_t BgL_kontz00_2540;

				{	/* Tools/trace.sch 53 */
					BgL_copz00_bglt BgL_auxz00_4398;

					BgL_nodez00_2539 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3783);
					BgL_kontz00_2540 = BgL_kontz00_3784;
					{	/* Cgen/cgen.scm 767 */
						BgL_variablez00_bglt BgL_vz00_2544;

						{	/* Cgen/cgen.scm 767 */
							BgL_varz00_bglt BgL_obj2472z00_3679;

							BgL_obj2472z00_3679 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2539))->
								BgL_varz00);
							BgL_vz00_2544 =
								(((BgL_varz00_bglt) CREF(BgL_obj2472z00_3679))->
								BgL_variablez00);
						}
						{	/* Cgen/cgen.scm 768 */
							BgL_nodez00_bglt BgL_arg5063z00_2545;

							BgL_arg5063z00_2545 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2539))->
								BgL_valuez00);
							{	/* Cgen/cgen.scm 770 */
								obj_t BgL_zc3anonymousza35065ze3z83_3753;

								BgL_zc3anonymousza35065ze3z83_3753 =
									make_fx_procedure(BGl_zc3anonymousza35065ze3z83zzcgen_cgenz00,
									(int) (((long) 1)), (int) (((long) 3)));
								PROCEDURE_SET(BgL_zc3anonymousza35065ze3z83_3753,
									(int) (((long) 0)), (obj_t) (BgL_nodez00_2539));
								PROCEDURE_SET(BgL_zc3anonymousza35065ze3z83_3753,
									(int) (((long) 1)), (obj_t) (BgL_vz00_2544));
								PROCEDURE_SET(BgL_zc3anonymousza35065ze3z83_3753,
									(int) (((long) 2)), BgL_kontz00_2540);
								{	/* Cgen/cgen.scm 768 */
									BgL_copz00_bglt BgL_res5177z00_3707;

									{	/* Cgen/cgen.scm 768 */
										obj_t BgL_method4375z00_3682;

										{	/* Cgen/cgen.scm 768 */
											BgL_objectz00_bglt BgL_objz00_3683;

											BgL_objz00_3683 =
												(BgL_objectz00_bglt) (BgL_arg5063z00_2545);
											{	/* Cgen/cgen.scm 768 */
												long BgL_objzd2classzd2numz00_3684;

												BgL_objzd2classzd2numz00_3684 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3683);
												{	/* Cgen/cgen.scm 768 */
													obj_t BgL_arg2643z00_3685;

													BgL_arg2643z00_3685 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 768 */
														obj_t BgL_arrayz00_3687;

														int BgL_offsetz00_3688;

														BgL_arrayz00_3687 = BgL_arg2643z00_3685;
														BgL_offsetz00_3688 =
															(int) (BgL_objzd2classzd2numz00_3684);
														{	/* Cgen/cgen.scm 768 */
															long BgL_offsetz00_3689;

															BgL_offsetz00_3689 =
																((long) (BgL_offsetz00_3688) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 768 */
																long BgL_modz00_3690;

																{	/* Cgen/cgen.scm 768 */
																	int BgL_arg2645z00_3691;

																	BgL_arg2645z00_3691 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 768 */
																		long BgL_auxz00_4421;

																		BgL_auxz00_4421 =
																			(long) (BgL_arg2645z00_3691);
																		BgL_modz00_3690 =
																			(BgL_offsetz00_3689 / BgL_auxz00_4421);
																}}
																{	/* Cgen/cgen.scm 768 */
																	long BgL_restz00_3692;

																	{	/* Cgen/cgen.scm 768 */
																		int BgL_arg2644z00_3693;

																		BgL_arg2644z00_3693 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 768 */
																			long BgL_auxz00_4425;

																			BgL_auxz00_4425 =
																				(long) (BgL_arg2644z00_3693);
																			BgL_restz00_3692 =
																				(BgL_offsetz00_3689 % BgL_auxz00_4425);
																	}}
																	{	/* Cgen/cgen.scm 768 */

																		BgL_method4375z00_3682 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3687,
																				(int) (BgL_modz00_3690)),
																			(int) (BgL_restz00_3692));
										}}}}}}}}
										BgL_res5177z00_3707 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_3682)
											(BgL_method4375z00_3682, (obj_t) (BgL_arg5063z00_2545),
												BgL_zc3anonymousza35065ze3z83_3753, BEOA));
									}
									BgL_auxz00_4398 = BgL_res5177z00_3707;
					}}}}
					return (obj_t) (BgL_auxz00_4398);
				}
			}
		}
	}



/* <anonymous:5065> */
	obj_t BGl_zc3anonymousza35065ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3785,
		obj_t BgL_vlz00_3789)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 769 */
			{	/* Cgen/cgen.scm 770 */
				obj_t BgL_instance4339z00_3786;

				obj_t BgL_vz00_3787;

				obj_t BgL_kontz00_3788;

				BgL_instance4339z00_3786 =
					PROCEDURE_REF(BgL_envz00_3785, (int) (((long) 0)));
				BgL_vz00_3787 = PROCEDURE_REF(BgL_envz00_3785, (int) (((long) 1)));
				BgL_kontz00_3788 = PROCEDURE_REF(BgL_envz00_3785, (int) (((long) 2)));
				{
					obj_t BgL_vlz00_2547;

					BgL_vlz00_2547 = BgL_vlz00_3789;
					{	/* Cgen/cgen.scm 770 */
						BgL_cboxzd2setz12zc0_bglt BgL_arg5066z00_2549;

						{	/* Cgen/cgen.scm 770 */
							obj_t BgL_arg5067z00_2550;

							BgL_varcz00_bglt BgL_arg5068z00_2551;

							{
								BgL_nodez00_bglt BgL_auxz00_4444;

								BgL_auxz00_4444 = (BgL_nodez00_bglt) (BgL_instance4339z00_3786);
								BgL_arg5067z00_2550 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4444))->BgL_locz00);
							}
							{	/* Cgen/cgen.scm 772 */
								obj_t BgL_arg5069z00_2552;

								{
									BgL_nodez00_bglt BgL_auxz00_4447;

									BgL_auxz00_4447 =
										(BgL_nodez00_bglt) (BgL_instance4339z00_3786);
									BgL_arg5069z00_2552 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4447))->BgL_locz00);
								}
								BgL_arg5068z00_2551 =
									BGl_makezd2varczd2zzcgen_copz00(BgL_arg5069z00_2552,
									(BgL_variablez00_bglt) (BgL_vz00_3787));
							}
							BgL_arg5066z00_2549 =
								BGl_makezd2cboxzd2setz12z12zzcgen_copz00(BgL_arg5067z00_2550,
								(BgL_copz00_bglt) (BgL_arg5068z00_2551),
								(BgL_copz00_bglt) (BgL_vlz00_2547));
						}
						return
							PROCEDURE_ENTRY(BgL_kontz00_3788) (BgL_kontz00_3788,
							(obj_t) (BgL_arg5066z00_2549), BEOA);
					}
				}
			}
		}
	}



/* node->cop-box-ref4421 */
	obj_t BGl_nodezd2ze3copzd2boxzd2ref4421z31zzcgen_cgenz00(obj_t
		BgL_envz00_3790, obj_t BgL_nodez00_3791, obj_t BgL_kontz00_3792)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 750 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_2525;

				obj_t BgL_kontz00_2526;

				BgL_nodez00_2525 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3791);
				BgL_kontz00_2526 = BgL_kontz00_3792;
				{	/* Cgen/cgen.scm 755 */
					BgL_copz00_bglt BgL_arg5057z00_2530;

					{	/* Cgen/cgen.scm 755 */
						BgL_varz00_bglt BgL_arg5058z00_2531;

						BgL_arg5058z00_2531 =
							(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2525))->BgL_varz00);
						{	/* Cgen/cgen.scm 756 */
							obj_t BgL_zc3anonymousza35060ze3z83_3755;

							BgL_zc3anonymousza35060ze3z83_3755 =
								make_fx_procedure(BGl_zc3anonymousza35060ze3z83zzcgen_cgenz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza35060ze3z83_3755,
								(int) (((long) 0)), (obj_t) (BgL_nodez00_2525));
							{	/* Cgen/cgen.scm 755 */
								BgL_copz00_bglt BgL_res5174z00_3675;

								{	/* Cgen/cgen.scm 755 */
									BgL_nodez00_bglt BgL_nodez00_3649;

									BgL_nodez00_3649 = (BgL_nodez00_bglt) (BgL_arg5058z00_2531);
									{	/* Cgen/cgen.scm 755 */
										obj_t BgL_method4375z00_3650;

										{	/* Cgen/cgen.scm 755 */
											BgL_objectz00_bglt BgL_objz00_3651;

											BgL_objz00_3651 = (BgL_objectz00_bglt) (BgL_nodez00_3649);
											{	/* Cgen/cgen.scm 755 */
												long BgL_objzd2classzd2numz00_3652;

												BgL_objzd2classzd2numz00_3652 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3651);
												{	/* Cgen/cgen.scm 755 */
													obj_t BgL_arg2643z00_3653;

													BgL_arg2643z00_3653 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 755 */
														obj_t BgL_arrayz00_3655;

														int BgL_offsetz00_3656;

														BgL_arrayz00_3655 = BgL_arg2643z00_3653;
														BgL_offsetz00_3656 =
															(int) (BgL_objzd2classzd2numz00_3652);
														{	/* Cgen/cgen.scm 755 */
															long BgL_offsetz00_3657;

															BgL_offsetz00_3657 =
																((long) (BgL_offsetz00_3656) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 755 */
																long BgL_modz00_3658;

																{	/* Cgen/cgen.scm 755 */
																	int BgL_arg2645z00_3659;

																	BgL_arg2645z00_3659 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 755 */
																		long BgL_auxz00_4474;

																		BgL_auxz00_4474 =
																			(long) (BgL_arg2645z00_3659);
																		BgL_modz00_3658 =
																			(BgL_offsetz00_3657 / BgL_auxz00_4474);
																}}
																{	/* Cgen/cgen.scm 755 */
																	long BgL_restz00_3660;

																	{	/* Cgen/cgen.scm 755 */
																		int BgL_arg2644z00_3661;

																		BgL_arg2644z00_3661 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 755 */
																			long BgL_auxz00_4478;

																			BgL_auxz00_4478 =
																				(long) (BgL_arg2644z00_3661);
																			BgL_restz00_3660 =
																				(BgL_offsetz00_3657 % BgL_auxz00_4478);
																	}}
																	{	/* Cgen/cgen.scm 755 */

																		BgL_method4375z00_3650 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3655,
																				(int) (BgL_modz00_3658)),
																			(int) (BgL_restz00_3660));
										}}}}}}}}
										BgL_res5174z00_3675 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_3650)
											(BgL_method4375z00_3650, (obj_t) (BgL_nodez00_3649),
												BgL_zc3anonymousza35060ze3z83_3755, BEOA));
								}}
								BgL_arg5057z00_2530 = BgL_res5174z00_3675;
					}}}
					return
						PROCEDURE_ENTRY(BgL_kontz00_2526) (BgL_kontz00_2526,
						(obj_t) (BgL_arg5057z00_2530), BEOA);
				}
			}
		}
	}



/* <anonymous:5060> */
	obj_t BGl_zc3anonymousza35060ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3793,
		obj_t BgL_vz00_3795)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 755 */
			{	/* Cgen/cgen.scm 756 */
				obj_t BgL_instance4336z00_3794;

				BgL_instance4336z00_3794 =
					PROCEDURE_REF(BgL_envz00_3793, (int) (((long) 0)));
				{
					obj_t BgL_vz00_2533;

					{	/* Cgen/cgen.scm 756 */
						BgL_cboxzd2refzd2_bglt BgL_auxz00_4495;

						BgL_vz00_2533 = BgL_vz00_3795;
						{	/* Cgen/cgen.scm 756 */
							obj_t BgL_arg5061z00_3676;

							{
								BgL_nodez00_bglt BgL_auxz00_4496;

								BgL_auxz00_4496 = (BgL_nodez00_bglt) (BgL_instance4336z00_3794);
								BgL_arg5061z00_3676 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4496))->BgL_locz00);
							}
							BgL_auxz00_4495 =
								BGl_makezd2cboxzd2refz00zzcgen_copz00(BgL_arg5061z00_3676,
								(BgL_copz00_bglt) (BgL_vz00_2533));
						}
						return (obj_t) (BgL_auxz00_4495);
					}
				}
			}
		}
	}



/* node->cop-make-box4419 */
	obj_t BGl_nodezd2ze3copzd2makezd2box4419z31zzcgen_cgenz00(obj_t
		BgL_envz00_3796, obj_t BgL_nodez00_3797, obj_t BgL_kontz00_3798)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 719 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_2485;

				obj_t BgL_kontz00_2486;

				BgL_nodez00_2485 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3797);
				BgL_kontz00_2486 = BgL_kontz00_3798;
				{	/* Cgen/cgen.scm 724 */
					bool_t BgL_testz00_4502;

					{	/* Cgen/cgen.scm 724 */
						bool_t BgL_testz00_4503;

						{	/* Cgen/cgen.scm 724 */
							BgL_nodez00_bglt BgL_arg5055z00_2522;

							BgL_arg5055z00_2522 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2485))->
								BgL_valuez00);
							{	/* Cgen/cgen.scm 724 */
								obj_t BgL_obj2487z00_3576;

								BgL_obj2487z00_3576 = (obj_t) (BgL_arg5055z00_2522);
								BgL_testz00_4503 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2487z00_3576,
									BGl_varz00zzast_nodez00);
							}
						}
						if (BgL_testz00_4503)
							{	/* Cgen/cgen.scm 724 */
								BgL_testz00_4502 = ((bool_t) 1);
							}
						else
							{	/* Cgen/cgen.scm 724 */
								bool_t BgL_testz00_4507;

								{	/* Cgen/cgen.scm 724 */
									BgL_nodez00_bglt BgL_arg5054z00_2521;

									BgL_arg5054z00_2521 =
										(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2485))->
										BgL_valuez00);
									{	/* Cgen/cgen.scm 724 */
										obj_t BgL_obj2467z00_3578;

										BgL_obj2467z00_3578 = (obj_t) (BgL_arg5054z00_2521);
										BgL_testz00_4507 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2467z00_3578,
											BGl_atomz00zzast_nodez00);
									}
								}
								if (BgL_testz00_4507)
									{	/* Cgen/cgen.scm 724 */
										BgL_testz00_4502 = ((bool_t) 1);
									}
								else
									{	/* Cgen/cgen.scm 724 */
										BgL_nodez00_bglt BgL_arg5053z00_2520;

										BgL_arg5053z00_2520 =
											(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2485))->
											BgL_valuez00);
										{	/* Cgen/cgen.scm 724 */
											obj_t BgL_obj2526z00_3580;

											BgL_obj2526z00_3580 = (obj_t) (BgL_arg5053z00_2520);
											BgL_testz00_4502 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj2526z00_3580,
												BGl_kwotez00zzast_nodez00);
										}
									}
							}
					}
					if (BgL_testz00_4502)
						{	/* Cgen/cgen.scm 725 */
							BgL_nodez00_bglt BgL_arg5028z00_2491;

							BgL_arg5028z00_2491 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2485))->
								BgL_valuez00);
							{	/* Cgen/cgen.scm 727 */
								obj_t BgL_zc3anonymousza35030ze3z83_3757;

								BgL_zc3anonymousza35030ze3z83_3757 =
									make_fx_procedure(BGl_zc3anonymousza35030ze3z83zzcgen_cgenz00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza35030ze3z83_3757,
									(int) (((long) 0)), (obj_t) (BgL_nodez00_2485));
								PROCEDURE_SET(BgL_zc3anonymousza35030ze3z83_3757,
									(int) (((long) 1)), BgL_kontz00_2486);
								{	/* Cgen/cgen.scm 725 */
									BgL_copz00_bglt BgL_res5166z00_3608;

									{	/* Cgen/cgen.scm 725 */
										obj_t BgL_method4375z00_3583;

										{	/* Cgen/cgen.scm 725 */
											BgL_objectz00_bglt BgL_objz00_3584;

											BgL_objz00_3584 =
												(BgL_objectz00_bglt) (BgL_arg5028z00_2491);
											{	/* Cgen/cgen.scm 725 */
												long BgL_objzd2classzd2numz00_3585;

												BgL_objzd2classzd2numz00_3585 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3584);
												{	/* Cgen/cgen.scm 725 */
													obj_t BgL_arg2643z00_3586;

													BgL_arg2643z00_3586 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 725 */
														obj_t BgL_arrayz00_3588;

														int BgL_offsetz00_3589;

														BgL_arrayz00_3588 = BgL_arg2643z00_3586;
														BgL_offsetz00_3589 =
															(int) (BgL_objzd2classzd2numz00_3585);
														{	/* Cgen/cgen.scm 725 */
															long BgL_offsetz00_3590;

															BgL_offsetz00_3590 =
																((long) (BgL_offsetz00_3589) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 725 */
																long BgL_modz00_3591;

																{	/* Cgen/cgen.scm 725 */
																	int BgL_arg2645z00_3592;

																	BgL_arg2645z00_3592 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 725 */
																		long BgL_auxz00_4531;

																		BgL_auxz00_4531 =
																			(long) (BgL_arg2645z00_3592);
																		BgL_modz00_3591 =
																			(BgL_offsetz00_3590 / BgL_auxz00_4531);
																}}
																{	/* Cgen/cgen.scm 725 */
																	long BgL_restz00_3593;

																	{	/* Cgen/cgen.scm 725 */
																		int BgL_arg2644z00_3594;

																		BgL_arg2644z00_3594 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 725 */
																			long BgL_auxz00_4535;

																			BgL_auxz00_4535 =
																				(long) (BgL_arg2644z00_3594);
																			BgL_restz00_3593 =
																				(BgL_offsetz00_3590 % BgL_auxz00_4535);
																	}}
																	{	/* Cgen/cgen.scm 725 */

																		BgL_method4375z00_3583 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3588,
																				(int) (BgL_modz00_3591)),
																			(int) (BgL_restz00_3593));
										}}}}}}}}
										BgL_res5166z00_3608 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_3583)
											(BgL_method4375z00_3583, (obj_t) (BgL_arg5028z00_2491),
												BgL_zc3anonymousza35030ze3z83_3757, BEOA));
									}
									return (obj_t) (BgL_res5166z00_3608);
								}
							}
						}
					else
						{	/* Cgen/cgen.scm 729 */
							BgL_localz00_bglt BgL_auxz00_2498;

							BgL_auxz00_2498 =
								BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
										(long) 4)),
								(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
							{	/* Cgen/cgen.scm 729 */
								BgL_copz00_bglt BgL_cvalz00_2499;

								{	/* Cgen/cgen.scm 730 */
									BgL_setqz00_bglt BgL_arg5049z00_2516;

									{	/* Cgen/cgen.scm 730 */
										BgL_nodez00_bglt BgL_arg5050z00_2517;

										BgL_arg5050z00_2517 =
											(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2485))->
											BgL_valuez00);
										BgL_arg5049z00_2516 =
											BGl_nodezd2setqzd2zzcgen_cgenz00((BgL_variablez00_bglt)
											(BgL_auxz00_2498), BgL_arg5050z00_2517);
									}
									{	/* Cgen/cgen.scm 730 */
										BgL_copz00_bglt BgL_res5169z00_3638;

										{	/* Cgen/cgen.scm 730 */
											BgL_nodez00_bglt BgL_nodez00_3611;

											obj_t BgL_kontz00_3612;

											BgL_nodez00_3611 =
												(BgL_nodez00_bglt) (BgL_arg5049z00_2516);
											BgL_kontz00_3612 = BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
											{	/* Cgen/cgen.scm 730 */
												obj_t BgL_method4375z00_3613;

												{	/* Cgen/cgen.scm 730 */
													BgL_objectz00_bglt BgL_objz00_3614;

													BgL_objz00_3614 =
														(BgL_objectz00_bglt) (BgL_nodez00_3611);
													{	/* Cgen/cgen.scm 730 */
														long BgL_objzd2classzd2numz00_3615;

														BgL_objzd2classzd2numz00_3615 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3614);
														{	/* Cgen/cgen.scm 730 */
															obj_t BgL_arg2643z00_3616;

															BgL_arg2643z00_3616 =
																PROCEDURE_REF
																(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																(int) (((long) 1)));
															{	/* Cgen/cgen.scm 730 */
																obj_t BgL_arrayz00_3618;

																int BgL_offsetz00_3619;

																BgL_arrayz00_3618 = BgL_arg2643z00_3616;
																BgL_offsetz00_3619 =
																	(int) (BgL_objzd2classzd2numz00_3615);
																{	/* Cgen/cgen.scm 730 */
																	long BgL_offsetz00_3620;

																	BgL_offsetz00_3620 =
																		((long) (BgL_offsetz00_3619) - OBJECT_TYPE);
																	{	/* Cgen/cgen.scm 730 */
																		long BgL_modz00_3621;

																		{	/* Cgen/cgen.scm 730 */
																			int BgL_arg2645z00_3622;

																			BgL_arg2645z00_3622 = (int) (((long) 16));
																			{	/* Cgen/cgen.scm 730 */
																				long BgL_auxz00_4562;

																				BgL_auxz00_4562 =
																					(long) (BgL_arg2645z00_3622);
																				BgL_modz00_3621 =
																					(BgL_offsetz00_3620 /
																					BgL_auxz00_4562);
																		}}
																		{	/* Cgen/cgen.scm 730 */
																			long BgL_restz00_3623;

																			{	/* Cgen/cgen.scm 730 */
																				int BgL_arg2644z00_3624;

																				BgL_arg2644z00_3624 =
																					(int) (((long) 16));
																				{	/* Cgen/cgen.scm 730 */
																					long BgL_auxz00_4566;

																					BgL_auxz00_4566 =
																						(long) (BgL_arg2644z00_3624);
																					BgL_restz00_3623 =
																						(BgL_offsetz00_3620 %
																						BgL_auxz00_4566);
																			}}
																			{	/* Cgen/cgen.scm 730 */

																				BgL_method4375z00_3613 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3618,
																						(int) (BgL_modz00_3621)),
																					(int) (BgL_restz00_3623));
												}}}}}}}}
												BgL_res5169z00_3638 =
													(BgL_copz00_bglt) (PROCEDURE_ENTRY
													(BgL_method4375z00_3613) (BgL_method4375z00_3613,
														(obj_t) (BgL_nodez00_3611), BgL_kontz00_3612,
														BEOA));
										}}
										BgL_cvalz00_2499 = BgL_res5169z00_3638;
								}}
								{	/* Cgen/cgen.scm 730 */

									{	/* Cgen/cgen.scm 732 */
										obj_t BgL_arg5033z00_2500;

										BgL_csequencez00_bglt BgL_arg5034z00_2501;

										{
											BgL_nodez00_bglt BgL_auxz00_4577;

											BgL_auxz00_4577 = (BgL_nodez00_bglt) (BgL_nodez00_2485);
											BgL_arg5033z00_2500 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4577))->
												BgL_locz00);
										}
										{	/* Cgen/cgen.scm 734 */
											obj_t BgL_arg5035z00_2502;

											obj_t BgL_arg5036z00_2503;

											{
												BgL_nodez00_bglt BgL_auxz00_4580;

												BgL_auxz00_4580 = (BgL_nodez00_bglt) (BgL_nodez00_2485);
												BgL_arg5035z00_2502 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4580))->
													BgL_locz00);
											}
											{	/* Cgen/cgen.scm 737 */
												BgL_localzd2varzd2_bglt BgL_arg5037z00_2504;

												obj_t BgL_arg5038z00_2505;

												{	/* Cgen/cgen.scm 737 */
													obj_t BgL_arg5042z00_2509;

													obj_t BgL_arg5043z00_2510;

													{
														BgL_nodez00_bglt BgL_auxz00_4583;

														BgL_auxz00_4583 =
															(BgL_nodez00_bglt) (BgL_nodez00_2485);
														BgL_arg5042z00_2509 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_4583))->
															BgL_locz00);
													}
													{	/* Cgen/cgen.scm 738 */
														obj_t BgL_list5044z00_2511;

														BgL_list5044z00_2511 =
															MAKE_PAIR((obj_t) (BgL_auxz00_2498), BNIL);
														BgL_arg5043z00_2510 = BgL_list5044z00_2511;
													}
													BgL_arg5037z00_2504 =
														BGl_makezd2localzd2varz00zzcgen_copz00
														(BgL_arg5042z00_2509, BgL_arg5043z00_2510);
												}
												{	/* Cgen/cgen.scm 742 */
													BgL_cmakezd2boxzd2_bglt BgL_arg5045z00_2512;

													{	/* Cgen/cgen.scm 742 */
														obj_t BgL_arg5046z00_2513;

														BgL_varcz00_bglt BgL_arg5047z00_2514;

														{
															BgL_nodez00_bglt BgL_auxz00_4589;

															BgL_auxz00_4589 =
																(BgL_nodez00_bglt) (BgL_nodez00_2485);
															BgL_arg5046z00_2513 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4589))->
																BgL_locz00);
														}
														{	/* Cgen/cgen.scm 744 */
															obj_t BgL_arg5048z00_2515;

															{
																BgL_nodez00_bglt BgL_auxz00_4592;

																BgL_auxz00_4592 =
																	(BgL_nodez00_bglt) (BgL_nodez00_2485);
																BgL_arg5048z00_2515 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_4592))->
																	BgL_locz00);
															}
															BgL_arg5047z00_2514 =
																BGl_makezd2varczd2zzcgen_copz00
																(BgL_arg5048z00_2515,
																(BgL_variablez00_bglt) (BgL_auxz00_2498));
														}
														BgL_arg5045z00_2512 =
															BGl_makezd2cmakezd2boxz00zzcgen_copz00
															(BgL_arg5046z00_2513,
															(BgL_copz00_bglt) (BgL_arg5047z00_2514));
													}
													BgL_arg5038z00_2505 =
														PROCEDURE_ENTRY(BgL_kontz00_2486) (BgL_kontz00_2486,
														(obj_t) (BgL_arg5045z00_2512), BEOA);
												}
												{	/* Cgen/cgen.scm 735 */
													obj_t BgL_list5039z00_2506;

													{	/* Cgen/cgen.scm 735 */
														obj_t BgL_arg5040z00_2507;

														{	/* Cgen/cgen.scm 735 */
															obj_t BgL_arg5041z00_2508;

															BgL_arg5041z00_2508 =
																MAKE_PAIR(BgL_arg5038z00_2505, BNIL);
															BgL_arg5040z00_2507 =
																MAKE_PAIR(
																(obj_t) (BgL_cvalz00_2499),
																BgL_arg5041z00_2508);
														}
														BgL_list5039z00_2506 =
															MAKE_PAIR(
															(obj_t) (BgL_arg5037z00_2504),
															BgL_arg5040z00_2507);
													}
													BgL_arg5036z00_2503 = BgL_list5039z00_2506;
											}}
											BgL_arg5034z00_2501 =
												BGl_makezd2csequencezd2zzcgen_copz00
												(BgL_arg5035z00_2502, ((bool_t) 0),
												BgL_arg5036z00_2503);
										}
										return
											(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
											(BgL_arg5033z00_2500,
												(BgL_copz00_bglt) (BgL_arg5034z00_2501)));
									}
								}
							}
						}
				}
			}
		}
	}



/* <anonymous:5030> */
	obj_t BGl_zc3anonymousza35030ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3799,
		obj_t BgL_vz00_3802)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 726 */
			{	/* Cgen/cgen.scm 727 */
				obj_t BgL_instance4328z00_3800;

				obj_t BgL_kontz00_3801;

				BgL_instance4328z00_3800 =
					PROCEDURE_REF(BgL_envz00_3799, (int) (((long) 0)));
				BgL_kontz00_3801 = PROCEDURE_REF(BgL_envz00_3799, (int) (((long) 1)));
				{
					obj_t BgL_vz00_2493;

					BgL_vz00_2493 = BgL_vz00_3802;
					{	/* Cgen/cgen.scm 727 */
						BgL_cmakezd2boxzd2_bglt BgL_arg5031z00_2495;

						{	/* Cgen/cgen.scm 727 */
							obj_t BgL_arg5032z00_2496;

							{
								BgL_nodez00_bglt BgL_auxz00_4616;

								BgL_auxz00_4616 = (BgL_nodez00_bglt) (BgL_instance4328z00_3800);
								BgL_arg5032z00_2496 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4616))->BgL_locz00);
							}
							BgL_arg5031z00_2495 =
								BGl_makezd2cmakezd2boxz00zzcgen_copz00(BgL_arg5032z00_2496,
								(BgL_copz00_bglt) (BgL_vz00_2493));
						}
						return
							PROCEDURE_ENTRY(BgL_kontz00_3801) (BgL_kontz00_3801,
							(obj_t) (BgL_arg5031z00_2495), BEOA);
					}
				}
			}
		}
	}



/* node->cop-jump-ex-it4417 */
	obj_t BGl_nodezd2ze3copzd2jumpzd2exzd2it4417ze3zzcgen_cgenz00(obj_t
		BgL_envz00_3803, obj_t BgL_nodez00_3804, obj_t BgL_kontz00_3805)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 641 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2386;

				obj_t BgL_kontz00_2387;

				BgL_nodez00_2386 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3804);
				BgL_kontz00_2387 = BgL_kontz00_3805;
				{	/* Cgen/cgen.scm 646 */
					BgL_localz00_bglt BgL_vauxz00_2391;

					BgL_vauxz00_2391 =
						BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
								(long) 2)),
						(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
					{	/* Cgen/cgen.scm 646 */
						BgL_copz00_bglt BgL_vcopz00_2392;

						{	/* Cgen/cgen.scm 647 */
							BgL_setqz00_bglt BgL_arg5024z00_2481;

							{	/* Cgen/cgen.scm 647 */
								BgL_nodez00_bglt BgL_arg5025z00_2482;

								BgL_arg5025z00_2482 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2386))->
									BgL_valuez00);
								BgL_arg5024z00_2481 =
									BGl_nodezd2setqzd2zzcgen_cgenz00((BgL_variablez00_bglt)
									(BgL_vauxz00_2391), BgL_arg5025z00_2482);
							}
							{	/* Cgen/cgen.scm 647 */
								BgL_copz00_bglt BgL_res5151z00_3489;

								{	/* Cgen/cgen.scm 647 */
									BgL_nodez00_bglt BgL_nodez00_3462;

									obj_t BgL_kontz00_3463;

									BgL_nodez00_3462 = (BgL_nodez00_bglt) (BgL_arg5024z00_2481);
									BgL_kontz00_3463 = BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
									{	/* Cgen/cgen.scm 647 */
										obj_t BgL_method4375z00_3464;

										{	/* Cgen/cgen.scm 647 */
											BgL_objectz00_bglt BgL_objz00_3465;

											BgL_objz00_3465 = (BgL_objectz00_bglt) (BgL_nodez00_3462);
											{	/* Cgen/cgen.scm 647 */
												long BgL_objzd2classzd2numz00_3466;

												BgL_objzd2classzd2numz00_3466 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3465);
												{	/* Cgen/cgen.scm 647 */
													obj_t BgL_arg2643z00_3467;

													BgL_arg2643z00_3467 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 647 */
														obj_t BgL_arrayz00_3469;

														int BgL_offsetz00_3470;

														BgL_arrayz00_3469 = BgL_arg2643z00_3467;
														BgL_offsetz00_3470 =
															(int) (BgL_objzd2classzd2numz00_3466);
														{	/* Cgen/cgen.scm 647 */
															long BgL_offsetz00_3471;

															BgL_offsetz00_3471 =
																((long) (BgL_offsetz00_3470) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 647 */
																long BgL_modz00_3472;

																{	/* Cgen/cgen.scm 647 */
																	int BgL_arg2645z00_3473;

																	BgL_arg2645z00_3473 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 647 */
																		long BgL_auxz00_4639;

																		BgL_auxz00_4639 =
																			(long) (BgL_arg2645z00_3473);
																		BgL_modz00_3472 =
																			(BgL_offsetz00_3471 / BgL_auxz00_4639);
																}}
																{	/* Cgen/cgen.scm 647 */
																	long BgL_restz00_3474;

																	{	/* Cgen/cgen.scm 647 */
																		int BgL_arg2644z00_3475;

																		BgL_arg2644z00_3475 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 647 */
																			long BgL_auxz00_4643;

																			BgL_auxz00_4643 =
																				(long) (BgL_arg2644z00_3475);
																			BgL_restz00_3474 =
																				(BgL_offsetz00_3471 % BgL_auxz00_4643);
																	}}
																	{	/* Cgen/cgen.scm 647 */

																		BgL_method4375z00_3464 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3469,
																				(int) (BgL_modz00_3472)),
																			(int) (BgL_restz00_3474));
										}}}}}}}}
										BgL_res5151z00_3489 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_3464)
											(BgL_method4375z00_3464, (obj_t) (BgL_nodez00_3462),
												BgL_kontz00_3463, BEOA));
								}}
								BgL_vcopz00_2392 = BgL_res5151z00_3489;
						}}
						{	/* Cgen/cgen.scm 647 */
							BgL_nodez00_bglt BgL_exitz00_2393;

							BgL_exitz00_2393 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2386))->
								BgL_exitz00);
							{	/* Cgen/cgen.scm 648 */
								BgL_localz00_bglt BgL_eauxz00_2394;

								BgL_eauxz00_2394 =
									BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF
									(((long) 5)),
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
								{	/* Cgen/cgen.scm 649 */
									BgL_copz00_bglt BgL_ecopz00_2395;

									{	/* Cgen/cgen.scm 650 */
										BgL_setqz00_bglt BgL_arg5023z00_2480;

										BgL_arg5023z00_2480 =
											BGl_nodezd2setqzd2zzcgen_cgenz00(
											(BgL_variablez00_bglt) (BgL_eauxz00_2394),
											BgL_exitz00_2393);
										{	/* Cgen/cgen.scm 650 */
											BgL_copz00_bglt BgL_res5154z00_3518;

											{	/* Cgen/cgen.scm 650 */
												BgL_nodez00_bglt BgL_nodez00_3491;

												obj_t BgL_kontz00_3492;

												BgL_nodez00_3491 =
													(BgL_nodez00_bglt) (BgL_arg5023z00_2480);
												BgL_kontz00_3492 = BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
												{	/* Cgen/cgen.scm 650 */
													obj_t BgL_method4375z00_3493;

													{	/* Cgen/cgen.scm 650 */
														BgL_objectz00_bglt BgL_objz00_3494;

														BgL_objz00_3494 =
															(BgL_objectz00_bglt) (BgL_nodez00_3491);
														{	/* Cgen/cgen.scm 650 */
															long BgL_objzd2classzd2numz00_3495;

															BgL_objzd2classzd2numz00_3495 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3494);
															{	/* Cgen/cgen.scm 650 */
																obj_t BgL_arg2643z00_3496;

																BgL_arg2643z00_3496 =
																	PROCEDURE_REF
																	(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																	(int) (((long) 1)));
																{	/* Cgen/cgen.scm 650 */
																	obj_t BgL_arrayz00_3498;

																	int BgL_offsetz00_3499;

																	BgL_arrayz00_3498 = BgL_arg2643z00_3496;
																	BgL_offsetz00_3499 =
																		(int) (BgL_objzd2classzd2numz00_3495);
																	{	/* Cgen/cgen.scm 650 */
																		long BgL_offsetz00_3500;

																		BgL_offsetz00_3500 =
																			(
																			(long) (BgL_offsetz00_3499) -
																			OBJECT_TYPE);
																		{	/* Cgen/cgen.scm 650 */
																			long BgL_modz00_3501;

																			{	/* Cgen/cgen.scm 650 */
																				int BgL_arg2645z00_3502;

																				BgL_arg2645z00_3502 =
																					(int) (((long) 16));
																				{	/* Cgen/cgen.scm 650 */
																					long BgL_auxz00_4669;

																					BgL_auxz00_4669 =
																						(long) (BgL_arg2645z00_3502);
																					BgL_modz00_3501 =
																						(BgL_offsetz00_3500 /
																						BgL_auxz00_4669);
																			}}
																			{	/* Cgen/cgen.scm 650 */
																				long BgL_restz00_3503;

																				{	/* Cgen/cgen.scm 650 */
																					int BgL_arg2644z00_3504;

																					BgL_arg2644z00_3504 =
																						(int) (((long) 16));
																					{	/* Cgen/cgen.scm 650 */
																						long BgL_auxz00_4673;

																						BgL_auxz00_4673 =
																							(long) (BgL_arg2644z00_3504);
																						BgL_restz00_3503 =
																							(BgL_offsetz00_3500 %
																							BgL_auxz00_4673);
																				}}
																				{	/* Cgen/cgen.scm 650 */

																					BgL_method4375z00_3493 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3498,
																							(int) (BgL_modz00_3501)),
																						(int) (BgL_restz00_3503));
													}}}}}}}}
													BgL_res5154z00_3518 =
														(BgL_copz00_bglt) (PROCEDURE_ENTRY
														(BgL_method4375z00_3493) (BgL_method4375z00_3493,
															(obj_t) (BgL_nodez00_3491), BgL_kontz00_3492,
															BEOA));
											}}
											BgL_ecopz00_2395 = BgL_res5154z00_3518;
									}}
									{	/* Cgen/cgen.scm 650 */

										{	/* Cgen/cgen.scm 652 */
											bool_t BgL_testz00_4684;

											{	/* Cgen/cgen.scm 652 */
												bool_t BgL_testz00_4685;

												{	/* Cgen/cgen.scm 652 */
													obj_t BgL_obj3793z00_3519;

													BgL_obj3793z00_3519 = (obj_t) (BgL_vcopz00_2392);
													BgL_testz00_4685 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3793z00_3519,
														BGl_csetqz00zzcgen_copz00);
												}
												if (BgL_testz00_4685)
													{	/* Cgen/cgen.scm 652 */
														bool_t BgL_testz00_4688;

														{	/* Cgen/cgen.scm 652 */
															obj_t BgL_auxz00_4689;

															{	/* Cgen/cgen.scm 652 */
																BgL_variablez00_bglt BgL_auxz00_4690;

																{	/* Cgen/cgen.scm 652 */
																	BgL_varcz00_bglt BgL_obj3686z00_3521;

																	{
																		BgL_csetqz00_bglt BgL_auxz00_4691;

																		BgL_auxz00_4691 =
																			(BgL_csetqz00_bglt) (BgL_vcopz00_2392);
																		BgL_obj3686z00_3521 =
																			(((BgL_csetqz00_bglt)
																				CREF(BgL_auxz00_4691))->BgL_varz00);
																	}
																	BgL_auxz00_4690 =
																		(((BgL_varcz00_bglt)
																			CREF(BgL_obj3686z00_3521))->
																		BgL_variablez00);
																}
																BgL_auxz00_4689 = (obj_t) (BgL_auxz00_4690);
															}
															BgL_testz00_4688 =
																(BgL_auxz00_4689 == (obj_t) (BgL_vauxz00_2391));
														}
														if (BgL_testz00_4688)
															{	/* Cgen/cgen.scm 653 */
																bool_t BgL_testz00_4698;

																{	/* Cgen/cgen.scm 653 */
																	obj_t BgL_obj3793z00_3522;

																	BgL_obj3793z00_3522 =
																		(obj_t) (BgL_ecopz00_2395);
																	BgL_testz00_4698 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj3793z00_3522,
																		BGl_csetqz00zzcgen_copz00);
																}
																if (BgL_testz00_4698)
																	{	/* Cgen/cgen.scm 653 */
																		obj_t BgL_auxz00_4701;

																		{	/* Cgen/cgen.scm 653 */
																			BgL_variablez00_bglt BgL_auxz00_4702;

																			{	/* Cgen/cgen.scm 653 */
																				BgL_varcz00_bglt BgL_obj3686z00_3524;

																				{
																					BgL_csetqz00_bglt BgL_auxz00_4703;

																					BgL_auxz00_4703 =
																						(BgL_csetqz00_bglt)
																						(BgL_ecopz00_2395);
																					BgL_obj3686z00_3524 =
																						(((BgL_csetqz00_bglt)
																							CREF(BgL_auxz00_4703))->
																						BgL_varz00);
																				}
																				BgL_auxz00_4702 =
																					(((BgL_varcz00_bglt)
																						CREF(BgL_obj3686z00_3524))->
																					BgL_variablez00);
																			}
																			BgL_auxz00_4701 =
																				(obj_t) (BgL_auxz00_4702);
																		}
																		BgL_testz00_4684 =
																			(BgL_auxz00_4701 ==
																			(obj_t) (BgL_eauxz00_2394));
																	}
																else
																	{	/* Cgen/cgen.scm 653 */
																		BgL_testz00_4684 = ((bool_t) 0);
																	}
															}
														else
															{	/* Cgen/cgen.scm 652 */
																BgL_testz00_4684 = ((bool_t) 0);
															}
													}
												else
													{	/* Cgen/cgen.scm 652 */
														BgL_testz00_4684 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_4684)
												{	/* Cgen/cgen.scm 656 */
													BgL_cjumpzd2exzd2itz00_bglt BgL_arg4938z00_2397;

													{	/* Cgen/cgen.scm 656 */
														obj_t BgL_arg4939z00_2398;

														BgL_copz00_bglt BgL_arg4940z00_2399;

														BgL_copz00_bglt BgL_arg4941z00_2400;

														{
															BgL_nodez00_bglt BgL_auxz00_4710;

															BgL_auxz00_4710 =
																(BgL_nodez00_bglt) (BgL_nodez00_2386);
															BgL_arg4939z00_2398 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4710))->
																BgL_locz00);
														}
														{
															BgL_csetqz00_bglt BgL_auxz00_4713;

															BgL_auxz00_4713 =
																(BgL_csetqz00_bglt) (BgL_ecopz00_2395);
															BgL_arg4940z00_2399 =
																(((BgL_csetqz00_bglt) CREF(BgL_auxz00_4713))->
																BgL_valuez00);
														}
														{
															BgL_csetqz00_bglt BgL_auxz00_4716;

															BgL_auxz00_4716 =
																(BgL_csetqz00_bglt) (BgL_vcopz00_2392);
															BgL_arg4941z00_2400 =
																(((BgL_csetqz00_bglt) CREF(BgL_auxz00_4716))->
																BgL_valuez00);
														}
														BgL_arg4938z00_2397 =
															BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00
															(BgL_arg4939z00_2398, BgL_arg4940z00_2399,
															BgL_arg4941z00_2400);
													}
													return (obj_t) (BgL_arg4938z00_2397);
												}
											else
												{	/* Cgen/cgen.scm 659 */
													bool_t BgL_testz00_4721;

													{	/* Cgen/cgen.scm 659 */
														bool_t BgL_testz00_4722;

														{	/* Cgen/cgen.scm 659 */
															obj_t BgL_obj3793z00_3529;

															BgL_obj3793z00_3529 = (obj_t) (BgL_vcopz00_2392);
															BgL_testz00_4722 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj3793z00_3529,
																BGl_csetqz00zzcgen_copz00);
														}
														if (BgL_testz00_4722)
															{	/* Cgen/cgen.scm 659 */
																obj_t BgL_auxz00_4725;

																{	/* Cgen/cgen.scm 659 */
																	BgL_variablez00_bglt BgL_auxz00_4726;

																	{	/* Cgen/cgen.scm 659 */
																		BgL_varcz00_bglt BgL_obj3686z00_3531;

																		{
																			BgL_csetqz00_bglt BgL_auxz00_4727;

																			BgL_auxz00_4727 =
																				(BgL_csetqz00_bglt) (BgL_vcopz00_2392);
																			BgL_obj3686z00_3531 =
																				(((BgL_csetqz00_bglt)
																					CREF(BgL_auxz00_4727))->BgL_varz00);
																		}
																		BgL_auxz00_4726 =
																			(((BgL_varcz00_bglt)
																				CREF(BgL_obj3686z00_3531))->
																			BgL_variablez00);
																	}
																	BgL_auxz00_4725 = (obj_t) (BgL_auxz00_4726);
																}
																BgL_testz00_4721 =
																	(BgL_auxz00_4725 ==
																	(obj_t) (BgL_vauxz00_2391));
															}
														else
															{	/* Cgen/cgen.scm 659 */
																BgL_testz00_4721 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_4721)
														{	/* Cgen/cgen.scm 661 */
															obj_t BgL_arg4943z00_2402;

															BgL_csequencez00_bglt BgL_arg4944z00_2403;

															{
																BgL_nodez00_bglt BgL_auxz00_4734;

																BgL_auxz00_4734 =
																	(BgL_nodez00_bglt) (BgL_nodez00_2386);
																BgL_arg4943z00_2402 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_4734))->
																	BgL_locz00);
															}
															{	/* Cgen/cgen.scm 663 */
																obj_t BgL_arg4945z00_2404;

																obj_t BgL_arg4946z00_2405;

																{
																	BgL_nodez00_bglt BgL_auxz00_4737;

																	BgL_auxz00_4737 =
																		(BgL_nodez00_bglt) (BgL_nodez00_2386);
																	BgL_arg4945z00_2404 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_4737))->BgL_locz00);
																}
																{	/* Cgen/cgen.scm 665 */
																	BgL_localzd2varzd2_bglt BgL_arg4947z00_2406;

																	BgL_csequencez00_bglt BgL_arg4948z00_2407;

																	BgL_cjumpzd2exzd2itz00_bglt
																		BgL_arg4949z00_2408;
																	{	/* Cgen/cgen.scm 665 */
																		obj_t BgL_arg4953z00_2412;

																		obj_t BgL_arg4954z00_2413;

																		{
																			BgL_nodez00_bglt BgL_auxz00_4740;

																			BgL_auxz00_4740 =
																				(BgL_nodez00_bglt) (BgL_nodez00_2386);
																			BgL_arg4953z00_2412 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_4740))->BgL_locz00);
																		}
																		{	/* Cgen/cgen.scm 666 */
																			obj_t BgL_list4955z00_2414;

																			BgL_list4955z00_2414 =
																				MAKE_PAIR(
																				(obj_t) (BgL_eauxz00_2394), BNIL);
																			BgL_arg4954z00_2413 =
																				BgL_list4955z00_2414;
																		}
																		BgL_arg4947z00_2406 =
																			BGl_makezd2localzd2varz00zzcgen_copz00
																			(BgL_arg4953z00_2412,
																			BgL_arg4954z00_2413);
																	}
																	{	/* Cgen/cgen.scm 668 */
																		obj_t BgL_arg4956z00_2415;

																		obj_t BgL_arg4957z00_2416;

																		{
																			BgL_nodez00_bglt BgL_auxz00_4746;

																			BgL_auxz00_4746 =
																				(BgL_nodez00_bglt) (BgL_nodez00_2386);
																			BgL_arg4956z00_2415 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_4746))->BgL_locz00);
																		}
																		{	/* Cgen/cgen.scm 669 */
																			obj_t BgL_list4958z00_2417;

																			BgL_list4958z00_2417 =
																				MAKE_PAIR(
																				(obj_t) (BgL_ecopz00_2395), BNIL);
																			BgL_arg4957z00_2416 =
																				BgL_list4958z00_2417;
																		}
																		BgL_arg4948z00_2407 =
																			BGl_makezd2csequencezd2zzcgen_copz00
																			(BgL_arg4956z00_2415, ((bool_t) 0),
																			BgL_arg4957z00_2416);
																	}
																	{	/* Cgen/cgen.scm 672 */
																		BgL_cjumpzd2exzd2itz00_bglt
																			BgL_arg4959z00_2418;
																		{	/* Cgen/cgen.scm 672 */
																			obj_t BgL_arg4960z00_2419;

																			BgL_varcz00_bglt BgL_arg4961z00_2420;

																			BgL_copz00_bglt BgL_arg4962z00_2421;

																			{
																				BgL_nodez00_bglt BgL_auxz00_4752;

																				BgL_auxz00_4752 =
																					(BgL_nodez00_bglt) (BgL_nodez00_2386);
																				BgL_arg4960z00_2419 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_4752))->BgL_locz00);
																			}
																			{	/* Cgen/cgen.scm 674 */
																				obj_t BgL_arg4963z00_2422;

																				{
																					BgL_nodez00_bglt BgL_auxz00_4755;

																					BgL_auxz00_4755 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_2386);
																					BgL_arg4963z00_2422 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_4755))->
																						BgL_locz00);
																				}
																				BgL_arg4961z00_2420 =
																					BGl_makezd2varczd2zzcgen_copz00
																					(BgL_arg4963z00_2422,
																					(BgL_variablez00_bglt)
																					(BgL_eauxz00_2394));
																			}
																			{
																				BgL_csetqz00_bglt BgL_auxz00_4760;

																				BgL_auxz00_4760 =
																					(BgL_csetqz00_bglt)
																					(BgL_vcopz00_2392);
																				BgL_arg4962z00_2421 =
																					(((BgL_csetqz00_bglt)
																						CREF(BgL_auxz00_4760))->
																					BgL_valuez00);
																			}
																			BgL_arg4959z00_2418 =
																				BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00
																				(BgL_arg4960z00_2419,
																				(BgL_copz00_bglt) (BgL_arg4961z00_2420),
																				BgL_arg4962z00_2421);
																		}
																		BgL_arg4949z00_2408 = BgL_arg4959z00_2418;
																	}
																	{	/* Cgen/cgen.scm 664 */
																		obj_t BgL_list4950z00_2409;

																		{	/* Cgen/cgen.scm 664 */
																			obj_t BgL_arg4951z00_2410;

																			{	/* Cgen/cgen.scm 664 */
																				obj_t BgL_arg4952z00_2411;

																				BgL_arg4952z00_2411 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4949z00_2408), BNIL);
																				BgL_arg4951z00_2410 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg4948z00_2407),
																					BgL_arg4952z00_2411);
																			}
																			BgL_list4950z00_2409 =
																				MAKE_PAIR(
																				(obj_t) (BgL_arg4947z00_2406),
																				BgL_arg4951z00_2410);
																		}
																		BgL_arg4946z00_2405 = BgL_list4950z00_2409;
																	}
																}
																BgL_arg4944z00_2403 =
																	BGl_makezd2csequencezd2zzcgen_copz00
																	(BgL_arg4945z00_2404, ((bool_t) 0),
																	BgL_arg4946z00_2405);
															}
															return
																(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																(BgL_arg4943z00_2402,
																	(BgL_copz00_bglt) (BgL_arg4944z00_2403)));
														}
													else
														{	/* Cgen/cgen.scm 677 */
															bool_t BgL_testz00_4775;

															{	/* Cgen/cgen.scm 677 */
																bool_t BgL_testz00_4776;

																{	/* Cgen/cgen.scm 677 */
																	obj_t BgL_obj3793z00_3546;

																	BgL_obj3793z00_3546 =
																		(obj_t) (BgL_ecopz00_2395);
																	BgL_testz00_4776 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj3793z00_3546,
																		BGl_csetqz00zzcgen_copz00);
																}
																if (BgL_testz00_4776)
																	{	/* Cgen/cgen.scm 677 */
																		obj_t BgL_auxz00_4779;

																		{	/* Cgen/cgen.scm 677 */
																			BgL_variablez00_bglt BgL_auxz00_4780;

																			{	/* Cgen/cgen.scm 677 */
																				BgL_varcz00_bglt BgL_obj3686z00_3548;

																				{
																					BgL_csetqz00_bglt BgL_auxz00_4781;

																					BgL_auxz00_4781 =
																						(BgL_csetqz00_bglt)
																						(BgL_ecopz00_2395);
																					BgL_obj3686z00_3548 =
																						(((BgL_csetqz00_bglt)
																							CREF(BgL_auxz00_4781))->
																						BgL_varz00);
																				}
																				BgL_auxz00_4780 =
																					(((BgL_varcz00_bglt)
																						CREF(BgL_obj3686z00_3548))->
																					BgL_variablez00);
																			}
																			BgL_auxz00_4779 =
																				(obj_t) (BgL_auxz00_4780);
																		}
																		BgL_testz00_4775 =
																			(BgL_auxz00_4779 ==
																			(obj_t) (BgL_eauxz00_2394));
																	}
																else
																	{	/* Cgen/cgen.scm 677 */
																		BgL_testz00_4775 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_4775)
																{	/* Cgen/cgen.scm 679 */
																	obj_t BgL_arg4965z00_2424;

																	BgL_csequencez00_bglt BgL_arg4966z00_2425;

																	{
																		BgL_nodez00_bglt BgL_auxz00_4788;

																		BgL_auxz00_4788 =
																			(BgL_nodez00_bglt) (BgL_nodez00_2386);
																		BgL_arg4965z00_2424 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_4788))->BgL_locz00);
																	}
																	{	/* Cgen/cgen.scm 681 */
																		obj_t BgL_arg4967z00_2426;

																		obj_t BgL_arg4968z00_2427;

																		{
																			BgL_nodez00_bglt BgL_auxz00_4791;

																			BgL_auxz00_4791 =
																				(BgL_nodez00_bglt) (BgL_nodez00_2386);
																			BgL_arg4967z00_2426 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_4791))->BgL_locz00);
																		}
																		{	/* Cgen/cgen.scm 683 */
																			BgL_localzd2varzd2_bglt
																				BgL_arg4969z00_2428;
																			BgL_csequencez00_bglt BgL_arg4970z00_2429;

																			BgL_cjumpzd2exzd2itz00_bglt
																				BgL_arg4971z00_2430;
																			{	/* Cgen/cgen.scm 683 */
																				obj_t BgL_arg4975z00_2434;

																				obj_t BgL_arg4977z00_2435;

																				{
																					BgL_nodez00_bglt BgL_auxz00_4794;

																					BgL_auxz00_4794 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_2386);
																					BgL_arg4975z00_2434 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_4794))->
																						BgL_locz00);
																				}
																				{	/* Cgen/cgen.scm 684 */
																					obj_t BgL_list4978z00_2436;

																					BgL_list4978z00_2436 =
																						MAKE_PAIR(
																						(obj_t) (BgL_vauxz00_2391), BNIL);
																					BgL_arg4977z00_2435 =
																						BgL_list4978z00_2436;
																				}
																				BgL_arg4969z00_2428 =
																					BGl_makezd2localzd2varz00zzcgen_copz00
																					(BgL_arg4975z00_2434,
																					BgL_arg4977z00_2435);
																			}
																			{	/* Cgen/cgen.scm 686 */
																				obj_t BgL_arg4979z00_2437;

																				obj_t BgL_arg4980z00_2438;

																				{
																					BgL_nodez00_bglt BgL_auxz00_4800;

																					BgL_auxz00_4800 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_2386);
																					BgL_arg4979z00_2437 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_4800))->
																						BgL_locz00);
																				}
																				{	/* Cgen/cgen.scm 687 */
																					obj_t BgL_list4981z00_2439;

																					BgL_list4981z00_2439 =
																						MAKE_PAIR(
																						(obj_t) (BgL_vcopz00_2392), BNIL);
																					BgL_arg4980z00_2438 =
																						BgL_list4981z00_2439;
																				}
																				BgL_arg4970z00_2429 =
																					BGl_makezd2csequencezd2zzcgen_copz00
																					(BgL_arg4979z00_2437, ((bool_t) 0),
																					BgL_arg4980z00_2438);
																			}
																			{	/* Cgen/cgen.scm 690 */
																				BgL_cjumpzd2exzd2itz00_bglt
																					BgL_arg4982z00_2440;
																				{	/* Cgen/cgen.scm 690 */
																					obj_t BgL_arg4983z00_2441;

																					BgL_copz00_bglt BgL_arg4984z00_2442;

																					BgL_varcz00_bglt BgL_arg4985z00_2443;

																					{
																						BgL_nodez00_bglt BgL_auxz00_4806;

																						BgL_auxz00_4806 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_2386);
																						BgL_arg4983z00_2441 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_4806))->
																							BgL_locz00);
																					}
																					{
																						BgL_csetqz00_bglt BgL_auxz00_4809;

																						BgL_auxz00_4809 =
																							(BgL_csetqz00_bglt)
																							(BgL_ecopz00_2395);
																						BgL_arg4984z00_2442 =
																							(((BgL_csetqz00_bglt)
																								CREF(BgL_auxz00_4809))->
																							BgL_valuez00);
																					}
																					{	/* Cgen/cgen.scm 693 */
																						obj_t BgL_arg4986z00_2444;

																						{
																							BgL_nodez00_bglt BgL_auxz00_4812;

																							BgL_auxz00_4812 =
																								(BgL_nodez00_bglt)
																								(BgL_nodez00_2386);
																							BgL_arg4986z00_2444 =
																								(((BgL_nodez00_bglt)
																									CREF(BgL_auxz00_4812))->
																								BgL_locz00);
																						}
																						BgL_arg4985z00_2443 =
																							BGl_makezd2varczd2zzcgen_copz00
																							(BgL_arg4986z00_2444,
																							(BgL_variablez00_bglt)
																							(BgL_vauxz00_2391));
																					}
																					BgL_arg4982z00_2440 =
																						BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00
																						(BgL_arg4983z00_2441,
																						BgL_arg4984z00_2442,
																						(BgL_copz00_bglt)
																						(BgL_arg4985z00_2443));
																				}
																				BgL_arg4971z00_2430 =
																					BgL_arg4982z00_2440;
																			}
																			{	/* Cgen/cgen.scm 682 */
																				obj_t BgL_list4972z00_2431;

																				{	/* Cgen/cgen.scm 682 */
																					obj_t BgL_arg4973z00_2432;

																					{	/* Cgen/cgen.scm 682 */
																						obj_t BgL_arg4974z00_2433;

																						BgL_arg4974z00_2433 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg4971z00_2430),
																							BNIL);
																						BgL_arg4973z00_2432 =
																							MAKE_PAIR((obj_t)
																							(BgL_arg4970z00_2429),
																							BgL_arg4974z00_2433);
																					}
																					BgL_list4972z00_2431 =
																						MAKE_PAIR(
																						(obj_t) (BgL_arg4969z00_2428),
																						BgL_arg4973z00_2432);
																				}
																				BgL_arg4968z00_2427 =
																					BgL_list4972z00_2431;
																			}
																		}
																		BgL_arg4966z00_2425 =
																			BGl_makezd2csequencezd2zzcgen_copz00
																			(BgL_arg4967z00_2426, ((bool_t) 0),
																			BgL_arg4968z00_2427);
																	}
																	return
																		(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																		(BgL_arg4965z00_2424,
																			(BgL_copz00_bglt) (BgL_arg4966z00_2425)));
																}
															else
																{	/* Cgen/cgen.scm 697 */
																	obj_t BgL_arg4987z00_2445;

																	BgL_csequencez00_bglt BgL_arg4988z00_2446;

																	{
																		BgL_nodez00_bglt BgL_auxz00_4829;

																		BgL_auxz00_4829 =
																			(BgL_nodez00_bglt) (BgL_nodez00_2386);
																		BgL_arg4987z00_2445 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_4829))->BgL_locz00);
																	}
																	{	/* Cgen/cgen.scm 699 */
																		obj_t BgL_arg4989z00_2447;

																		obj_t BgL_arg4990z00_2448;

																		{
																			BgL_nodez00_bglt BgL_auxz00_4832;

																			BgL_auxz00_4832 =
																				(BgL_nodez00_bglt) (BgL_nodez00_2386);
																			BgL_arg4989z00_2447 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_4832))->BgL_locz00);
																		}
																		{	/* Cgen/cgen.scm 703 */
																			BgL_localzd2varzd2_bglt
																				BgL_arg4991z00_2449;
																			BgL_csequencez00_bglt BgL_arg4993z00_2450;

																			BgL_cjumpzd2exzd2itz00_bglt
																				BgL_arg4994z00_2451;
																			{	/* Cgen/cgen.scm 703 */
																				obj_t BgL_arg4998z00_2455;

																				obj_t BgL_arg4999z00_2456;

																				{
																					BgL_nodez00_bglt BgL_auxz00_4835;

																					BgL_auxz00_4835 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_2386);
																					BgL_arg4998z00_2455 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_4835))->
																						BgL_locz00);
																				}
																				{	/* Cgen/cgen.scm 704 */
																					obj_t BgL_list5000z00_2457;

																					{	/* Cgen/cgen.scm 704 */
																						obj_t BgL_arg5001z00_2458;

																						BgL_arg5001z00_2458 =
																							MAKE_PAIR(
																							(obj_t) (BgL_vauxz00_2391), BNIL);
																						BgL_list5000z00_2457 =
																							MAKE_PAIR(
																							(obj_t) (BgL_eauxz00_2394),
																							BgL_arg5001z00_2458);
																					}
																					BgL_arg4999z00_2456 =
																						BgL_list5000z00_2457;
																				}
																				BgL_arg4991z00_2449 =
																					BGl_makezd2localzd2varz00zzcgen_copz00
																					(BgL_arg4998z00_2455,
																					BgL_arg4999z00_2456);
																			}
																			{	/* Cgen/cgen.scm 706 */
																				obj_t BgL_arg5002z00_2459;

																				obj_t BgL_arg5003z00_2460;

																				{
																					BgL_nodez00_bglt BgL_auxz00_4843;

																					BgL_auxz00_4843 =
																						(BgL_nodez00_bglt)
																						(BgL_nodez00_2386);
																					BgL_arg5002z00_2459 =
																						(((BgL_nodez00_bglt)
																							CREF(BgL_auxz00_4843))->
																						BgL_locz00);
																				}
																				{	/* Cgen/cgen.scm 707 */
																					obj_t BgL_list5004z00_2461;

																					{	/* Cgen/cgen.scm 707 */
																						obj_t BgL_arg5005z00_2462;

																						BgL_arg5005z00_2462 =
																							MAKE_PAIR(
																							(obj_t) (BgL_vcopz00_2392), BNIL);
																						BgL_list5004z00_2461 =
																							MAKE_PAIR(
																							(obj_t) (BgL_ecopz00_2395),
																							BgL_arg5005z00_2462);
																					}
																					BgL_arg5003z00_2460 =
																						BgL_list5004z00_2461;
																				}
																				BgL_arg4993z00_2450 =
																					BGl_makezd2csequencezd2zzcgen_copz00
																					(BgL_arg5002z00_2459, ((bool_t) 0),
																					BgL_arg5003z00_2460);
																			}
																			{	/* Cgen/cgen.scm 710 */
																				BgL_cjumpzd2exzd2itz00_bglt
																					BgL_arg5006z00_2463;
																				{	/* Cgen/cgen.scm 710 */
																					obj_t BgL_arg5007z00_2464;

																					BgL_varcz00_bglt BgL_arg5008z00_2465;

																					BgL_varcz00_bglt BgL_arg5009z00_2466;

																					{
																						BgL_nodez00_bglt BgL_auxz00_4851;

																						BgL_auxz00_4851 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_2386);
																						BgL_arg5007z00_2464 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_4851))->
																							BgL_locz00);
																					}
																					BgL_arg5008z00_2465 =
																						BGl_makezd2varczd2zzcgen_copz00
																						(BFALSE,
																						(BgL_variablez00_bglt)
																						(BgL_eauxz00_2394));
																					BgL_arg5009z00_2466 =
																						BGl_makezd2varczd2zzcgen_copz00
																						(BFALSE,
																						(BgL_variablez00_bglt)
																						(BgL_vauxz00_2391));
																					BgL_arg5006z00_2463 =
																						BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00
																						(BgL_arg5007z00_2464,
																						(BgL_copz00_bglt)
																						(BgL_arg5008z00_2465),
																						(BgL_copz00_bglt)
																						(BgL_arg5009z00_2466));
																				}
																				BgL_arg4994z00_2451 =
																					BgL_arg5006z00_2463;
																			}
																			{	/* Cgen/cgen.scm 700 */
																				obj_t BgL_list4995z00_2452;

																				{	/* Cgen/cgen.scm 700 */
																					obj_t BgL_arg4996z00_2453;

																					{	/* Cgen/cgen.scm 700 */
																						obj_t BgL_arg4997z00_2454;

																						BgL_arg4997z00_2454 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg4994z00_2451),
																							BNIL);
																						BgL_arg4996z00_2453 =
																							MAKE_PAIR((obj_t)
																							(BgL_arg4993z00_2450),
																							BgL_arg4997z00_2454);
																					}
																					BgL_list4995z00_2452 =
																						MAKE_PAIR(
																						(obj_t) (BgL_arg4991z00_2449),
																						BgL_arg4996z00_2453);
																				}
																				BgL_arg4990z00_2448 =
																					BgL_list4995z00_2452;
																			}
																		}
																		BgL_arg4988z00_2446 =
																			BGl_makezd2csequencezd2zzcgen_copz00
																			(BgL_arg4989z00_2447, ((bool_t) 0),
																			BgL_arg4990z00_2448);
																	}
																	return
																		(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
																		(BgL_arg4987z00_2445,
																			(BgL_copz00_bglt) (BgL_arg4988z00_2446)));
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



/* node->cop-set-ex-it4415 */
	obj_t BGl_nodezd2ze3copzd2setzd2exzd2it4415ze3zzcgen_cgenz00(obj_t
		BgL_envz00_3806, obj_t BgL_nodez00_3807, obj_t BgL_kontz00_3808)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 590 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2333;

				obj_t BgL_kontz00_2334;

				{	/* Tools/trace.sch 53 */
					BgL_csequencez00_bglt BgL_auxz00_4872;

					BgL_nodez00_2333 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3807);
					BgL_kontz00_2334 = BgL_kontz00_3808;
					{	/* Cgen/cgen.scm 595 */
						BgL_variablez00_bglt BgL_exitz00_2338;

						{	/* Cgen/cgen.scm 595 */
							BgL_varz00_bglt BgL_obj2472z00_3357;

							BgL_obj2472z00_3357 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2333))->
								BgL_varz00);
							BgL_exitz00_2338 =
								(((BgL_varz00_bglt) CREF(BgL_obj2472z00_3357))->
								BgL_variablez00);
						}
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_exitz00_2338);
						{	/* Cgen/cgen.scm 598 */
							obj_t BgL_arg4888z00_2339;

							obj_t BgL_arg4889z00_2340;

							{
								BgL_nodez00_bglt BgL_auxz00_4876;

								BgL_auxz00_4876 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
								BgL_arg4888z00_2339 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4876))->BgL_locz00);
							}
							{	/* Cgen/cgen.scm 601 */
								BgL_cpragmaz00_bglt BgL_arg4890z00_2341;

								BgL_localzd2varzd2_bglt BgL_arg4891z00_2342;

								BgL_csetzd2exzd2itz00_bglt BgL_arg4892z00_2343;

								{	/* Cgen/cgen.scm 601 */
									obj_t BgL_arg4896z00_2347;

									{
										BgL_nodez00_bglt BgL_auxz00_4879;

										BgL_auxz00_4879 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
										BgL_arg4896z00_2347 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4879))->BgL_locz00);
									}
									BgL_arg4890z00_2341 =
										BGl_makezd2cpragmazd2zzcgen_copz00(BgL_arg4896z00_2347,
										BGl_string5219z00zzcgen_cgenz00, BNIL);
								}
								{	/* Cgen/cgen.scm 605 */
									obj_t BgL_arg4899z00_2350;

									obj_t BgL_arg4900z00_2351;

									{
										BgL_nodez00_bglt BgL_auxz00_4883;

										BgL_auxz00_4883 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
										BgL_arg4899z00_2350 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4883))->BgL_locz00);
									}
									{	/* Cgen/cgen.scm 606 */
										BgL_variablez00_bglt BgL_arg4901z00_2352;

										{	/* Cgen/cgen.scm 606 */
											BgL_varz00_bglt BgL_obj2472z00_3362;

											BgL_obj2472z00_3362 =
												(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2333))->
												BgL_varz00);
											BgL_arg4901z00_2352 =
												(((BgL_varz00_bglt) CREF(BgL_obj2472z00_3362))->
												BgL_variablez00);
										}
										{	/* Cgen/cgen.scm 606 */
											obj_t BgL_list4902z00_2353;

											BgL_list4902z00_2353 =
												MAKE_PAIR((obj_t) (BgL_arg4901z00_2352), BNIL);
											BgL_arg4900z00_2351 = BgL_list4902z00_2353;
										}
									}
									BgL_arg4891z00_2342 =
										BGl_makezd2localzd2varz00zzcgen_copz00(BgL_arg4899z00_2350,
										BgL_arg4900z00_2351);
								}
								{	/* Cgen/cgen.scm 608 */
									obj_t BgL_arg4904z00_2355;

									BgL_varcz00_bglt BgL_arg4905z00_2356;

									BgL_copz00_bglt BgL_arg4906z00_2357;

									BgL_csequencez00_bglt BgL_arg4907z00_2358;

									{
										BgL_nodez00_bglt BgL_auxz00_4891;

										BgL_auxz00_4891 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
										BgL_arg4904z00_2355 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4891))->BgL_locz00);
									}
									{	/* Cgen/cgen.scm 610 */
										obj_t BgL_arg4908z00_2359;

										{
											BgL_nodez00_bglt BgL_auxz00_4894;

											BgL_auxz00_4894 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
											BgL_arg4908z00_2359 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4894))->
												BgL_locz00);
										}
										BgL_arg4905z00_2356 =
											BGl_makezd2varczd2zzcgen_copz00(BgL_arg4908z00_2359,
											BgL_exitz00_2338);
									}
									{	/* Cgen/cgen.scm 613 */
										BgL_pragmaz00_bglt BgL_arg4909z00_2360;

										{	/* Cgen/cgen.scm 613 */
											obj_t BgL_arg4910z00_2361;

											{
												BgL_nodez00_bglt BgL_auxz00_4898;

												BgL_auxz00_4898 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
												BgL_arg4910z00_2361 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4898))->
													BgL_locz00);
											}
											BgL_arg4909z00_2360 =
												BGl_makezd2pragmazd2zzast_nodez00(BgL_arg4910z00_2361,
												(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
												BUNSPEC, BINT(((long) -1)), BNIL, BUNSPEC,
												BGl_string5220z00zzcgen_cgenz00);
										}
										{	/* Cgen/cgen.scm 612 */
											BgL_copz00_bglt BgL_res5140z00_3395;

											{	/* Cgen/cgen.scm 612 */
												BgL_nodez00_bglt BgL_nodez00_3368;

												obj_t BgL_kontz00_3369;

												BgL_nodez00_3368 =
													(BgL_nodez00_bglt) (BgL_arg4909z00_2360);
												BgL_kontz00_3369 = BgL_kontz00_2334;
												{	/* Cgen/cgen.scm 612 */
													obj_t BgL_method4375z00_3370;

													{	/* Cgen/cgen.scm 612 */
														BgL_objectz00_bglt BgL_objz00_3371;

														BgL_objz00_3371 =
															(BgL_objectz00_bglt) (BgL_nodez00_3368);
														{	/* Cgen/cgen.scm 612 */
															long BgL_objzd2classzd2numz00_3372;

															BgL_objzd2classzd2numz00_3372 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3371);
															{	/* Cgen/cgen.scm 612 */
																obj_t BgL_arg2643z00_3373;

																BgL_arg2643z00_3373 =
																	PROCEDURE_REF
																	(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																	(int) (((long) 1)));
																{	/* Cgen/cgen.scm 612 */
																	obj_t BgL_arrayz00_3375;

																	int BgL_offsetz00_3376;

																	BgL_arrayz00_3375 = BgL_arg2643z00_3373;
																	BgL_offsetz00_3376 =
																		(int) (BgL_objzd2classzd2numz00_3372);
																	{	/* Cgen/cgen.scm 612 */
																		long BgL_offsetz00_3377;

																		BgL_offsetz00_3377 =
																			(
																			(long) (BgL_offsetz00_3376) -
																			OBJECT_TYPE);
																		{	/* Cgen/cgen.scm 612 */
																			long BgL_modz00_3378;

																			{	/* Cgen/cgen.scm 612 */
																				int BgL_arg2645z00_3379;

																				BgL_arg2645z00_3379 =
																					(int) (((long) 16));
																				{	/* Cgen/cgen.scm 612 */
																					long BgL_auxz00_4913;

																					BgL_auxz00_4913 =
																						(long) (BgL_arg2645z00_3379);
																					BgL_modz00_3378 =
																						(BgL_offsetz00_3377 /
																						BgL_auxz00_4913);
																			}}
																			{	/* Cgen/cgen.scm 612 */
																				long BgL_restz00_3380;

																				{	/* Cgen/cgen.scm 612 */
																					int BgL_arg2644z00_3381;

																					BgL_arg2644z00_3381 =
																						(int) (((long) 16));
																					{	/* Cgen/cgen.scm 612 */
																						long BgL_auxz00_4917;

																						BgL_auxz00_4917 =
																							(long) (BgL_arg2644z00_3381);
																						BgL_restz00_3380 =
																							(BgL_offsetz00_3377 %
																							BgL_auxz00_4917);
																				}}
																				{	/* Cgen/cgen.scm 612 */

																					BgL_method4375z00_3370 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3375,
																							(int) (BgL_modz00_3378)),
																						(int) (BgL_restz00_3380));
													}}}}}}}}
													BgL_res5140z00_3395 =
														(BgL_copz00_bglt) (PROCEDURE_ENTRY
														(BgL_method4375z00_3370) (BgL_method4375z00_3370,
															(obj_t) (BgL_nodez00_3368), BgL_kontz00_3369,
															BEOA));
											}}
											BgL_arg4906z00_2357 = BgL_res5140z00_3395;
									}}
									{	/* Cgen/cgen.scm 619 */
										obj_t BgL_arg4914z00_2365;

										obj_t BgL_arg4915z00_2366;

										{
											BgL_nodez00_bglt BgL_auxz00_4928;

											BgL_auxz00_4928 = (BgL_nodez00_bglt) (BgL_nodez00_2333);
											BgL_arg4914z00_2365 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4928))->
												BgL_locz00);
										}
										{	/* Cgen/cgen.scm 626 */
											BgL_copz00_bglt BgL_arg4916z00_2367;

											BgL_copz00_bglt BgL_arg4917z00_2368;

											{	/* Cgen/cgen.scm 626 */
												BgL_setqz00_bglt BgL_arg4920z00_2371;

												{	/* Cgen/cgen.scm 626 */
													BgL_pragmaz00_bglt BgL_arg4921z00_2372;

													{	/* Cgen/cgen.scm 626 */
														obj_t BgL_arg4922z00_2373;

														obj_t BgL_arg4925z00_2376;

														{
															BgL_nodez00_bglt BgL_auxz00_4931;

															BgL_auxz00_4931 =
																(BgL_nodez00_bglt) (BgL_nodez00_2333);
															BgL_arg4922z00_2373 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4931))->
																BgL_locz00);
														}
														{	/* Cgen/cgen.scm 628 */
															obj_t BgL_arg4927z00_2378;

															{	/* Cgen/cgen.scm 632 */
																obj_t BgL_arg4929z00_2380;

																{	/* Cgen/cgen.scm 632 */
																	BgL_typez00_bglt BgL_obj1509z00_3399;

																	BgL_obj1509z00_3399 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_exitz00_2338))->BgL_typez00);
																	BgL_arg4929z00_2380 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_obj1509z00_3399))->BgL_namez00);
																}
																BgL_arg4927z00_2378 =
																	BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_arg4929z00_2380);
															}
															BgL_arg4925z00_2376 =
																string_append_3(BGl_string5188z00zzcgen_cgenz00,
																BgL_arg4927z00_2378,
																BGl_string5221z00zzcgen_cgenz00);
														}
														BgL_arg4921z00_2372 =
															BGl_makezd2pragmazd2zzast_nodez00
															(BgL_arg4922z00_2373,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
															BINT(((long) -1)), BNIL, BUNSPEC,
															BgL_arg4925z00_2376);
													}
													BgL_arg4920z00_2371 =
														BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_exitz00_2338,
														(BgL_nodez00_bglt) (BgL_arg4921z00_2372));
												}
												{	/* Cgen/cgen.scm 622 */
													BgL_copz00_bglt BgL_res5143z00_3427;

													{	/* Cgen/cgen.scm 622 */
														BgL_nodez00_bglt BgL_nodez00_3400;

														obj_t BgL_kontz00_3401;

														BgL_nodez00_3400 =
															(BgL_nodez00_bglt) (BgL_arg4920z00_2371);
														BgL_kontz00_3401 =
															BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
														{	/* Cgen/cgen.scm 622 */
															obj_t BgL_method4375z00_3402;

															{	/* Cgen/cgen.scm 622 */
																BgL_objectz00_bglt BgL_objz00_3403;

																BgL_objz00_3403 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3400);
																{	/* Cgen/cgen.scm 622 */
																	long BgL_objzd2classzd2numz00_3404;

																	BgL_objzd2classzd2numz00_3404 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3403);
																	{	/* Cgen/cgen.scm 622 */
																		obj_t BgL_arg2643z00_3405;

																		BgL_arg2643z00_3405 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																			(int) (((long) 1)));
																		{	/* Cgen/cgen.scm 622 */
																			obj_t BgL_arrayz00_3407;

																			int BgL_offsetz00_3408;

																			BgL_arrayz00_3407 = BgL_arg2643z00_3405;
																			BgL_offsetz00_3408 =
																				(int) (BgL_objzd2classzd2numz00_3404);
																			{	/* Cgen/cgen.scm 622 */
																				long BgL_offsetz00_3409;

																				BgL_offsetz00_3409 =
																					(
																					(long) (BgL_offsetz00_3408) -
																					OBJECT_TYPE);
																				{	/* Cgen/cgen.scm 622 */
																					long BgL_modz00_3410;

																					{	/* Cgen/cgen.scm 622 */
																						int BgL_arg2645z00_3411;

																						BgL_arg2645z00_3411 =
																							(int) (((long) 16));
																						{	/* Cgen/cgen.scm 622 */
																							long BgL_auxz00_4952;

																							BgL_auxz00_4952 =
																								(long) (BgL_arg2645z00_3411);
																							BgL_modz00_3410 =
																								(BgL_offsetz00_3409 /
																								BgL_auxz00_4952);
																					}}
																					{	/* Cgen/cgen.scm 622 */
																						long BgL_restz00_3412;

																						{	/* Cgen/cgen.scm 622 */
																							int BgL_arg2644z00_3413;

																							BgL_arg2644z00_3413 =
																								(int) (((long) 16));
																							{	/* Cgen/cgen.scm 622 */
																								long BgL_auxz00_4956;

																								BgL_auxz00_4956 =
																									(long) (BgL_arg2644z00_3413);
																								BgL_restz00_3412 =
																									(BgL_offsetz00_3409 %
																									BgL_auxz00_4956);
																						}}
																						{	/* Cgen/cgen.scm 622 */

																							BgL_method4375z00_3402 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3407,
																									(int) (BgL_modz00_3410)),
																								(int) (BgL_restz00_3412));
															}}}}}}}}
															BgL_res5143z00_3427 =
																(BgL_copz00_bglt) (PROCEDURE_ENTRY
																(BgL_method4375z00_3402)
																(BgL_method4375z00_3402,
																	(obj_t) (BgL_nodez00_3400), BgL_kontz00_3401,
																	BEOA));
													}}
													BgL_arg4916z00_2367 = BgL_res5143z00_3427;
											}}
											{	/* Cgen/cgen.scm 636 */
												BgL_nodez00_bglt BgL_arg4931z00_2382;

												BgL_arg4931z00_2382 =
													(((BgL_setzd2exzd2itz00_bglt)
														CREF(BgL_nodez00_2333))->BgL_bodyz00);
												{	/* Cgen/cgen.scm 636 */
													BgL_copz00_bglt BgL_res5146z00_3456;

													{	/* Cgen/cgen.scm 636 */
														obj_t BgL_kontz00_3430;

														BgL_kontz00_3430 = BgL_kontz00_2334;
														{	/* Cgen/cgen.scm 636 */
															obj_t BgL_method4375z00_3431;

															{	/* Cgen/cgen.scm 636 */
																BgL_objectz00_bglt BgL_objz00_3432;

																BgL_objz00_3432 =
																	(BgL_objectz00_bglt) (BgL_arg4931z00_2382);
																{	/* Cgen/cgen.scm 636 */
																	long BgL_objzd2classzd2numz00_3433;

																	BgL_objzd2classzd2numz00_3433 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3432);
																	{	/* Cgen/cgen.scm 636 */
																		obj_t BgL_arg2643z00_3434;

																		BgL_arg2643z00_3434 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																			(int) (((long) 1)));
																		{	/* Cgen/cgen.scm 636 */
																			obj_t BgL_arrayz00_3436;

																			int BgL_offsetz00_3437;

																			BgL_arrayz00_3436 = BgL_arg2643z00_3434;
																			BgL_offsetz00_3437 =
																				(int) (BgL_objzd2classzd2numz00_3433);
																			{	/* Cgen/cgen.scm 636 */
																				long BgL_offsetz00_3438;

																				BgL_offsetz00_3438 =
																					(
																					(long) (BgL_offsetz00_3437) -
																					OBJECT_TYPE);
																				{	/* Cgen/cgen.scm 636 */
																					long BgL_modz00_3439;

																					{	/* Cgen/cgen.scm 636 */
																						int BgL_arg2645z00_3440;

																						BgL_arg2645z00_3440 =
																							(int) (((long) 16));
																						{	/* Cgen/cgen.scm 636 */
																							long BgL_auxz00_4976;

																							BgL_auxz00_4976 =
																								(long) (BgL_arg2645z00_3440);
																							BgL_modz00_3439 =
																								(BgL_offsetz00_3438 /
																								BgL_auxz00_4976);
																					}}
																					{	/* Cgen/cgen.scm 636 */
																						long BgL_restz00_3441;

																						{	/* Cgen/cgen.scm 636 */
																							int BgL_arg2644z00_3442;

																							BgL_arg2644z00_3442 =
																								(int) (((long) 16));
																							{	/* Cgen/cgen.scm 636 */
																								long BgL_auxz00_4980;

																								BgL_auxz00_4980 =
																									(long) (BgL_arg2644z00_3442);
																								BgL_restz00_3441 =
																									(BgL_offsetz00_3438 %
																									BgL_auxz00_4980);
																						}}
																						{	/* Cgen/cgen.scm 636 */

																							BgL_method4375z00_3431 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3436,
																									(int) (BgL_modz00_3439)),
																								(int) (BgL_restz00_3441));
															}}}}}}}}
															BgL_res5146z00_3456 =
																(BgL_copz00_bglt) (PROCEDURE_ENTRY
																(BgL_method4375z00_3431)
																(BgL_method4375z00_3431,
																	(obj_t) (BgL_arg4931z00_2382),
																	BgL_kontz00_3430, BEOA));
													}}
													BgL_arg4917z00_2368 = BgL_res5146z00_3456;
											}}
											{	/* Cgen/cgen.scm 620 */
												obj_t BgL_list4918z00_2369;

												{	/* Cgen/cgen.scm 620 */
													obj_t BgL_arg4919z00_2370;

													BgL_arg4919z00_2370 =
														MAKE_PAIR((obj_t) (BgL_arg4917z00_2368), BNIL);
													BgL_list4918z00_2369 =
														MAKE_PAIR(
														(obj_t) (BgL_arg4916z00_2367), BgL_arg4919z00_2370);
												}
												BgL_arg4915z00_2366 = BgL_list4918z00_2369;
										}}
										BgL_arg4907z00_2358 =
											BGl_makezd2csequencezd2zzcgen_copz00(BgL_arg4914z00_2365,
											((bool_t) 0), BgL_arg4915z00_2366);
									}
									BgL_arg4892z00_2343 =
										BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00
										(BgL_arg4904z00_2355,
										(BgL_copz00_bglt) (BgL_arg4905z00_2356),
										BgL_arg4906z00_2357,
										(BgL_copz00_bglt) (BgL_arg4907z00_2358));
								}
								{	/* Cgen/cgen.scm 599 */
									obj_t BgL_list4893z00_2344;

									{	/* Cgen/cgen.scm 599 */
										obj_t BgL_arg4894z00_2345;

										{	/* Cgen/cgen.scm 599 */
											obj_t BgL_arg4895z00_2346;

											BgL_arg4895z00_2346 =
												MAKE_PAIR((obj_t) (BgL_arg4892z00_2343), BNIL);
											BgL_arg4894z00_2345 =
												MAKE_PAIR(
												(obj_t) (BgL_arg4891z00_2342), BgL_arg4895z00_2346);
										}
										BgL_list4893z00_2344 =
											MAKE_PAIR(
											(obj_t) (BgL_arg4890z00_2341), BgL_arg4894z00_2345);
									}
									BgL_arg4889z00_2340 = BgL_list4893z00_2344;
							}}
							BgL_auxz00_4872 =
								BGl_makezd2csequencezd2zzcgen_copz00(BgL_arg4888z00_2339,
								((bool_t) 0), BgL_arg4889z00_2340);
					}}
					return (obj_t) (BgL_auxz00_4872);
				}
			}
		}
	}



/* node->cop-let-var4413 */
	obj_t BGl_nodezd2ze3copzd2letzd2var4413z31zzcgen_cgenz00(obj_t
		BgL_envz00_3809, obj_t BgL_nodez00_3810, obj_t BgL_kontz00_3811)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 554 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_2274;

				obj_t BgL_kontz00_2275;

				{	/* Tools/trace.sch 53 */
					BgL_blockz00_bglt BgL_auxz00_5008;

					BgL_nodez00_2274 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3810);
					BgL_kontz00_2275 = BgL_kontz00_3811;
					{	/* Cgen/cgen.scm 559 */
						BgL_localzd2varzd2_bglt BgL_declsz00_2279;

						obj_t BgL_setsz00_2280;

						BgL_stopz00_bglt BgL_bodyz00_2281;

						{	/* Cgen/cgen.scm 560 */
							obj_t BgL_arg4864z00_2291;

							obj_t BgL_arg4865z00_2292;

							{
								BgL_nodez00_bglt BgL_auxz00_5009;

								BgL_auxz00_5009 = (BgL_nodez00_bglt) (BgL_nodez00_2274);
								BgL_arg4864z00_2291 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5009))->BgL_locz00);
							}
							{	/* Cgen/cgen.scm 561 */
								obj_t BgL_l4363z00_2293;

								BgL_l4363z00_2293 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2274))->
									BgL_bindingsz00);
								if (NULLP(BgL_l4363z00_2293))
									{	/* Cgen/cgen.scm 561 */
										BgL_arg4865z00_2292 = BNIL;
									}
								else
									{	/* Cgen/cgen.scm 561 */
										obj_t BgL_head4365z00_2295;

										BgL_head4365z00_2295 =
											MAKE_PAIR(CAR(CAR(BgL_l4363z00_2293)), BNIL);
										{	/* Cgen/cgen.scm 561 */
											obj_t BgL_g4368z00_2296;

											BgL_g4368z00_2296 = CDR(BgL_l4363z00_2293);
											{
												obj_t BgL_l4363z00_2298;

												obj_t BgL_tail4366z00_2299;

												BgL_l4363z00_2298 = BgL_g4368z00_2296;
												BgL_tail4366z00_2299 = BgL_head4365z00_2295;
											BgL_zc3anonymousza34867ze3z83_2300:
												if (NULLP(BgL_l4363z00_2298))
													{	/* Cgen/cgen.scm 561 */
														BgL_arg4865z00_2292 = BgL_head4365z00_2295;
													}
												else
													{	/* Cgen/cgen.scm 561 */
														obj_t BgL_newtail4367z00_2302;

														BgL_newtail4367z00_2302 =
															MAKE_PAIR(CAR(CAR(BgL_l4363z00_2298)), BNIL);
														SET_CDR(BgL_tail4366z00_2299,
															BgL_newtail4367z00_2302);
														{
															obj_t BgL_tail4366z00_5027;

															obj_t BgL_l4363z00_5025;

															BgL_l4363z00_5025 = CDR(BgL_l4363z00_2298);
															BgL_tail4366z00_5027 = BgL_newtail4367z00_2302;
															BgL_tail4366z00_2299 = BgL_tail4366z00_5027;
															BgL_l4363z00_2298 = BgL_l4363z00_5025;
															goto BgL_zc3anonymousza34867ze3z83_2300;
														}
													}
											}
										}
									}
							}
							BgL_declsz00_2279 =
								BGl_makezd2localzd2varz00zzcgen_copz00(BgL_arg4864z00_2291,
								BgL_arg4865z00_2292);
						}
						{	/* Cgen/cgen.scm 562 */
							obj_t BgL_l4369z00_2311;

							BgL_l4369z00_2311 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2274))->
								BgL_bindingsz00);
							if (NULLP(BgL_l4369z00_2311))
								{	/* Cgen/cgen.scm 562 */
									BgL_setsz00_2280 = BNIL;
								}
							else
								{	/* Cgen/cgen.scm 562 */
									obj_t BgL_head4371z00_2313;

									BgL_head4371z00_2313 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l4369z00_2315;

										obj_t BgL_tail4372z00_2316;

										BgL_l4369z00_2315 = BgL_l4369z00_2311;
										BgL_tail4372z00_2316 = BgL_head4371z00_2313;
									BgL_zc3anonymousza34877ze3z83_2317:
										if (NULLP(BgL_l4369z00_2315))
											{	/* Cgen/cgen.scm 562 */
												BgL_setsz00_2280 = CDR(BgL_head4371z00_2313);
											}
										else
											{	/* Cgen/cgen.scm 562 */
												obj_t BgL_newtail4373z00_2319;

												{	/* Cgen/cgen.scm 562 */
													BgL_copz00_bglt BgL_arg4880z00_2321;

													{	/* Cgen/cgen.scm 562 */
														obj_t BgL_xz00_2323;

														BgL_xz00_2323 = CAR(BgL_l4369z00_2315);
														{	/* Cgen/cgen.scm 563 */
															obj_t BgL_arg4882z00_2324;

															BgL_arg4882z00_2324 = CAR(BgL_xz00_2323);
															BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
																(BgL_variablez00_bglt) (BgL_arg4882z00_2324));
														}
														{	/* Cgen/cgen.scm 564 */
															BgL_setqz00_bglt BgL_arg4883z00_2325;

															{	/* Cgen/cgen.scm 564 */
																obj_t BgL_arg4884z00_2326;

																obj_t BgL_arg4885z00_2327;

																BgL_arg4884z00_2326 = CAR(BgL_xz00_2323);
																BgL_arg4885z00_2327 = CDR(BgL_xz00_2323);
																BgL_arg4883z00_2325 =
																	BGl_nodezd2setqzd2zzcgen_cgenz00(
																	(BgL_variablez00_bglt) (BgL_arg4884z00_2326),
																	(BgL_nodez00_bglt) (BgL_arg4885z00_2327));
															}
															{	/* Cgen/cgen.scm 564 */
																BgL_copz00_bglt BgL_res5132z00_3312;

																{	/* Cgen/cgen.scm 564 */
																	BgL_nodez00_bglt BgL_nodez00_3285;

																	obj_t BgL_kontz00_3286;

																	BgL_nodez00_3285 =
																		(BgL_nodez00_bglt) (BgL_arg4883z00_2325);
																	BgL_kontz00_3286 =
																		BGl_za2stopzd2kontza2zd2zzcgen_cgenz00;
																	{	/* Cgen/cgen.scm 564 */
																		obj_t BgL_method4375z00_3287;

																		{	/* Cgen/cgen.scm 564 */
																			BgL_objectz00_bglt BgL_objz00_3288;

																			BgL_objz00_3288 =
																				(BgL_objectz00_bglt) (BgL_nodez00_3285);
																			{	/* Cgen/cgen.scm 564 */
																				long BgL_objzd2classzd2numz00_3289;

																				BgL_objzd2classzd2numz00_3289 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3288);
																				{	/* Cgen/cgen.scm 564 */
																					obj_t BgL_arg2643z00_3290;

																					BgL_arg2643z00_3290 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																						(int) (((long) 1)));
																					{	/* Cgen/cgen.scm 564 */
																						obj_t BgL_arrayz00_3292;

																						int BgL_offsetz00_3293;

																						BgL_arrayz00_3292 =
																							BgL_arg2643z00_3290;
																						BgL_offsetz00_3293 =
																							(int)
																							(BgL_objzd2classzd2numz00_3289);
																						{	/* Cgen/cgen.scm 564 */
																							long BgL_offsetz00_3294;

																							BgL_offsetz00_3294 =
																								(
																								(long) (BgL_offsetz00_3293) -
																								OBJECT_TYPE);
																							{	/* Cgen/cgen.scm 564 */
																								long BgL_modz00_3295;

																								{	/* Cgen/cgen.scm 564 */
																									int BgL_arg2645z00_3296;

																									BgL_arg2645z00_3296 =
																										(int) (((long) 16));
																									{	/* Cgen/cgen.scm 564 */
																										long BgL_auxz00_5054;

																										BgL_auxz00_5054 =
																											(long)
																											(BgL_arg2645z00_3296);
																										BgL_modz00_3295 =
																											(BgL_offsetz00_3294 /
																											BgL_auxz00_5054);
																								}}
																								{	/* Cgen/cgen.scm 564 */
																									long BgL_restz00_3297;

																									{	/* Cgen/cgen.scm 564 */
																										int BgL_arg2644z00_3298;

																										BgL_arg2644z00_3298 =
																											(int) (((long) 16));
																										{	/* Cgen/cgen.scm 564 */
																											long BgL_auxz00_5058;

																											BgL_auxz00_5058 =
																												(long)
																												(BgL_arg2644z00_3298);
																											BgL_restz00_3297 =
																												(BgL_offsetz00_3294 %
																												BgL_auxz00_5058);
																									}}
																									{	/* Cgen/cgen.scm 564 */

																										BgL_method4375z00_3287 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3292,
																												(int)
																												(BgL_modz00_3295)),
																											(int) (BgL_restz00_3297));
																		}}}}}}}}
																		BgL_res5132z00_3312 =
																			(BgL_copz00_bglt) (PROCEDURE_ENTRY
																			(BgL_method4375z00_3287)
																			(BgL_method4375z00_3287,
																				(obj_t) (BgL_nodez00_3285),
																				BgL_kontz00_3286, BEOA));
																}}
																BgL_arg4880z00_2321 = BgL_res5132z00_3312;
													}}}
													BgL_newtail4373z00_2319 =
														MAKE_PAIR((obj_t) (BgL_arg4880z00_2321), BNIL);
												}
												SET_CDR(BgL_tail4372z00_2316, BgL_newtail4373z00_2319);
												{
													obj_t BgL_tail4372z00_5074;

													obj_t BgL_l4369z00_5072;

													BgL_l4369z00_5072 = CDR(BgL_l4369z00_2315);
													BgL_tail4372z00_5074 = BgL_newtail4373z00_2319;
													BgL_tail4372z00_2316 = BgL_tail4372z00_5074;
													BgL_l4369z00_2315 = BgL_l4369z00_5072;
													goto BgL_zc3anonymousza34877ze3z83_2317;
												}
											}
									}
								}
						}
						{	/* Cgen/cgen.scm 566 */
							BgL_copz00_bglt BgL_copz00_2329;

							{	/* Cgen/cgen.scm 566 */
								BgL_nodez00_bglt BgL_arg4886z00_2330;

								BgL_arg4886z00_2330 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2274))->
									BgL_bodyz00);
								{	/* Cgen/cgen.scm 566 */
									BgL_copz00_bglt BgL_res5135z00_3346;

									{	/* Cgen/cgen.scm 566 */
										obj_t BgL_kontz00_3320;

										BgL_kontz00_3320 = BgL_kontz00_2275;
										{	/* Cgen/cgen.scm 566 */
											obj_t BgL_method4375z00_3321;

											{	/* Cgen/cgen.scm 566 */
												BgL_objectz00_bglt BgL_objz00_3322;

												BgL_objz00_3322 =
													(BgL_objectz00_bglt) (BgL_arg4886z00_2330);
												{	/* Cgen/cgen.scm 566 */
													long BgL_objzd2classzd2numz00_3323;

													BgL_objzd2classzd2numz00_3323 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3322);
													{	/* Cgen/cgen.scm 566 */
														obj_t BgL_arg2643z00_3324;

														BgL_arg2643z00_3324 =
															PROCEDURE_REF
															(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
															(int) (((long) 1)));
														{	/* Cgen/cgen.scm 566 */
															obj_t BgL_arrayz00_3326;

															int BgL_offsetz00_3327;

															BgL_arrayz00_3326 = BgL_arg2643z00_3324;
															BgL_offsetz00_3327 =
																(int) (BgL_objzd2classzd2numz00_3323);
															{	/* Cgen/cgen.scm 566 */
																long BgL_offsetz00_3328;

																BgL_offsetz00_3328 =
																	((long) (BgL_offsetz00_3327) - OBJECT_TYPE);
																{	/* Cgen/cgen.scm 566 */
																	long BgL_modz00_3329;

																	{	/* Cgen/cgen.scm 566 */
																		int BgL_arg2645z00_3330;

																		BgL_arg2645z00_3330 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 566 */
																			long BgL_auxz00_5084;

																			BgL_auxz00_5084 =
																				(long) (BgL_arg2645z00_3330);
																			BgL_modz00_3329 =
																				(BgL_offsetz00_3328 / BgL_auxz00_5084);
																	}}
																	{	/* Cgen/cgen.scm 566 */
																		long BgL_restz00_3331;

																		{	/* Cgen/cgen.scm 566 */
																			int BgL_arg2644z00_3332;

																			BgL_arg2644z00_3332 = (int) (((long) 16));
																			{	/* Cgen/cgen.scm 566 */
																				long BgL_auxz00_5088;

																				BgL_auxz00_5088 =
																					(long) (BgL_arg2644z00_3332);
																				BgL_restz00_3331 =
																					(BgL_offsetz00_3328 %
																					BgL_auxz00_5088);
																		}}
																		{	/* Cgen/cgen.scm 566 */

																			BgL_method4375z00_3321 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3326,
																					(int) (BgL_modz00_3329)),
																				(int) (BgL_restz00_3331));
											}}}}}}}}
											BgL_res5135z00_3346 =
												(BgL_copz00_bglt) (PROCEDURE_ENTRY
												(BgL_method4375z00_3321) (BgL_method4375z00_3321,
													(obj_t) (BgL_arg4886z00_2330), BgL_kontz00_3320,
													BEOA));
									}}
									BgL_copz00_2329 = BgL_res5135z00_3346;
							}}
							BgL_bodyz00_2281 =
								BGl_makezd2stopzd2zzcgen_copz00(BFALSE, BgL_copz00_2329);
						}
						{	/* Cgen/cgen.scm 572 */
							BgL_copz00_bglt BgL_arg4855z00_2282;

							obj_t BgL_arg4856z00_2283;

							{	/* Cgen/cgen.scm 572 */
								BgL_csequencez00_bglt BgL_arg4857z00_2284;

								obj_t BgL_arg4858z00_2285;

								{	/* Cgen/cgen.scm 572 */
									obj_t BgL_arg4859z00_2286;

									obj_t BgL_arg4860z00_2287;

									{
										BgL_nodez00_bglt BgL_auxz00_5100;

										BgL_auxz00_5100 = (BgL_nodez00_bglt) (BgL_nodez00_2274);
										BgL_arg4859z00_2286 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_5100))->BgL_locz00);
									}
									{	/* Cgen/cgen.scm 573 */
										obj_t BgL_arg4861z00_2288;

										{	/* Cgen/cgen.scm 573 */
											obj_t BgL_arg4862z00_2289;

											{	/* Cgen/cgen.scm 573 */
												obj_t BgL_list4863z00_2290;

												BgL_list4863z00_2290 =
													MAKE_PAIR((obj_t) (BgL_bodyz00_2281), BNIL);
												BgL_arg4862z00_2289 = BgL_list4863z00_2290;
											}
											BgL_arg4861z00_2288 =
												bgl_append2(BgL_setsz00_2280, BgL_arg4862z00_2289);
										}
										BgL_arg4860z00_2287 =
											MAKE_PAIR(
											(obj_t) (BgL_declsz00_2279), BgL_arg4861z00_2288);
									}
									BgL_arg4857z00_2284 =
										BGl_makezd2csequencezd2zzcgen_copz00(BgL_arg4859z00_2286,
										((bool_t) 0), BgL_arg4860z00_2287);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_5109;

									BgL_auxz00_5109 = (BgL_nodez00_bglt) (BgL_nodez00_2274);
									BgL_arg4858z00_2285 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_5109))->BgL_locz00);
								}
								BgL_arg4855z00_2282 =
									BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
									(BgL_copz00_bglt) (BgL_arg4857z00_2284), BgL_arg4858z00_2285);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_5114;

								BgL_auxz00_5114 = (BgL_nodez00_bglt) (BgL_nodez00_2274);
								BgL_arg4856z00_2283 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5114))->BgL_locz00);
							}
							{	/* Cgen/cgen.scm 569 */
								obj_t BgL_copz00_3352;

								BgL_copz00_3352 = (obj_t) (BgL_arg4855z00_2282);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_3352,
										BGl_blockz00zzcgen_copz00))
									{	/* Cgen/cgen.scm 569 */
										BgL_auxz00_5008 = (BgL_blockz00_bglt) (BgL_copz00_3352);
									}
								else
									{	/* Cgen/cgen.scm 569 */
										BgL_auxz00_5008 =
											BGl_makezd2blockzd2zzcgen_copz00(BgL_arg4856z00_2283,
											(BgL_copz00_bglt) (BgL_copz00_3352));
									}
							}
						}
					}
					return (obj_t) (BgL_auxz00_5008);
				}
			}
		}
	}



/* node->cop-let-fun4411 */
	obj_t BGl_nodezd2ze3copzd2letzd2fun4411z31zzcgen_cgenz00(obj_t
		BgL_envz00_3812, obj_t BgL_nodez00_3813, obj_t BgL_kontz00_3814)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 517 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_2229;

				obj_t BgL_kontz00_2230;

				{	/* Tools/trace.sch 53 */
					BgL_blockz00_bglt BgL_auxz00_5125;

					BgL_nodez00_2229 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3813);
					BgL_kontz00_2230 = BgL_kontz00_3814;
					{
						obj_t BgL_localsz00_2237;

						obj_t BgL_allzd2formalszd2_2238;

						{	/* Cgen/cgen.scm 527 */
							obj_t BgL_arg4828z00_2236;

							BgL_arg4828z00_2236 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2229))->
								BgL_localsz00);
							BgL_localsz00_2237 = BgL_arg4828z00_2236;
							BgL_allzd2formalszd2_2238 = BNIL;
						BgL_zc3anonymousza34829ze3z83_2239:
							if (NULLP(BgL_localsz00_2237))
								{	/* Cgen/cgen.scm 533 */
									BgL_copz00_bglt BgL_arg4831z00_2241;

									{	/* Cgen/cgen.scm 533 */
										BgL_csequencez00_bglt BgL_arg4832z00_2242;

										obj_t BgL_arg4833z00_2243;

										{	/* Cgen/cgen.scm 533 */
											obj_t BgL_arg4834z00_2244;

											obj_t BgL_arg4835z00_2245;

											{
												BgL_nodez00_bglt BgL_auxz00_5129;

												BgL_auxz00_5129 = (BgL_nodez00_bglt) (BgL_nodez00_2229);
												BgL_arg4834z00_2244 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_5129))->
													BgL_locz00);
											}
											{	/* Cgen/cgen.scm 535 */
												BgL_localzd2varzd2_bglt BgL_arg4836z00_2246;

												BgL_copz00_bglt BgL_arg4837z00_2247;

												{	/* Cgen/cgen.scm 535 */
													obj_t BgL_arg4840z00_2250;

													{
														BgL_nodez00_bglt BgL_auxz00_5132;

														BgL_auxz00_5132 =
															(BgL_nodez00_bglt) (BgL_nodez00_2229);
														BgL_arg4840z00_2250 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_5132))->
															BgL_locz00);
													}
													BgL_arg4836z00_2246 =
														BGl_makezd2localzd2varz00zzcgen_copz00
														(BgL_arg4840z00_2250, BgL_allzd2formalszd2_2238);
												}
												{	/* Cgen/cgen.scm 537 */
													BgL_nodez00_bglt BgL_arg4841z00_2251;

													BgL_arg4841z00_2251 =
														(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2229))->
														BgL_bodyz00);
													{	/* Cgen/cgen.scm 537 */
														BgL_copz00_bglt BgL_res5128z00_3239;

														{	/* Cgen/cgen.scm 537 */
															obj_t BgL_kontz00_3213;

															BgL_kontz00_3213 = BgL_kontz00_2230;
															{	/* Cgen/cgen.scm 537 */
																obj_t BgL_method4375z00_3214;

																{	/* Cgen/cgen.scm 537 */
																	BgL_objectz00_bglt BgL_objz00_3215;

																	BgL_objz00_3215 =
																		(BgL_objectz00_bglt) (BgL_arg4841z00_2251);
																	{	/* Cgen/cgen.scm 537 */
																		long BgL_objzd2classzd2numz00_3216;

																		BgL_objzd2classzd2numz00_3216 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_3215);
																		{	/* Cgen/cgen.scm 537 */
																			obj_t BgL_arg2643z00_3217;

																			BgL_arg2643z00_3217 =
																				PROCEDURE_REF
																				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																				(int) (((long) 1)));
																			{	/* Cgen/cgen.scm 537 */
																				obj_t BgL_arrayz00_3219;

																				int BgL_offsetz00_3220;

																				BgL_arrayz00_3219 = BgL_arg2643z00_3217;
																				BgL_offsetz00_3220 =
																					(int) (BgL_objzd2classzd2numz00_3216);
																				{	/* Cgen/cgen.scm 537 */
																					long BgL_offsetz00_3221;

																					BgL_offsetz00_3221 =
																						(
																						(long) (BgL_offsetz00_3220) -
																						OBJECT_TYPE);
																					{	/* Cgen/cgen.scm 537 */
																						long BgL_modz00_3222;

																						{	/* Cgen/cgen.scm 537 */
																							int BgL_arg2645z00_3223;

																							BgL_arg2645z00_3223 =
																								(int) (((long) 16));
																							{	/* Cgen/cgen.scm 537 */
																								long BgL_auxz00_5145;

																								BgL_auxz00_5145 =
																									(long) (BgL_arg2645z00_3223);
																								BgL_modz00_3222 =
																									(BgL_offsetz00_3221 /
																									BgL_auxz00_5145);
																						}}
																						{	/* Cgen/cgen.scm 537 */
																							long BgL_restz00_3224;

																							{	/* Cgen/cgen.scm 537 */
																								int BgL_arg2644z00_3225;

																								BgL_arg2644z00_3225 =
																									(int) (((long) 16));
																								{	/* Cgen/cgen.scm 537 */
																									long BgL_auxz00_5149;

																									BgL_auxz00_5149 =
																										(long)
																										(BgL_arg2644z00_3225);
																									BgL_restz00_3224 =
																										(BgL_offsetz00_3221 %
																										BgL_auxz00_5149);
																							}}
																							{	/* Cgen/cgen.scm 537 */

																								BgL_method4375z00_3214 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_3219,
																										(int) (BgL_modz00_3222)),
																									(int) (BgL_restz00_3224));
																}}}}}}}}
																BgL_res5128z00_3239 =
																	(BgL_copz00_bglt) (PROCEDURE_ENTRY
																	(BgL_method4375z00_3214)
																	(BgL_method4375z00_3214,
																		(obj_t) (BgL_arg4841z00_2251),
																		BgL_kontz00_3213, BEOA));
														}}
														BgL_arg4837z00_2247 = BgL_res5128z00_3239;
												}}
												{	/* Cgen/cgen.scm 534 */
													obj_t BgL_list4838z00_2248;

													{	/* Cgen/cgen.scm 534 */
														obj_t BgL_arg4839z00_2249;

														BgL_arg4839z00_2249 =
															MAKE_PAIR((obj_t) (BgL_arg4837z00_2247), BNIL);
														BgL_list4838z00_2248 =
															MAKE_PAIR(
															(obj_t) (BgL_arg4836z00_2246),
															BgL_arg4839z00_2249);
													}
													BgL_arg4835z00_2245 = BgL_list4838z00_2248;
											}}
											BgL_arg4832z00_2242 =
												BGl_makezd2csequencezd2zzcgen_copz00
												(BgL_arg4834z00_2244, ((bool_t) 0),
												BgL_arg4835z00_2245);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_5165;

											BgL_auxz00_5165 = (BgL_nodez00_bglt) (BgL_nodez00_2229);
											BgL_arg4833z00_2243 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_5165))->
												BgL_locz00);
										}
										BgL_arg4831z00_2241 =
											BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
											(BgL_copz00_bglt) (BgL_arg4832z00_2242),
											BgL_arg4833z00_2243);
									}
									{	/* Cgen/cgen.scm 530 */
										obj_t BgL_copz00_3243;

										BgL_copz00_3243 = (obj_t) (BgL_arg4831z00_2241);
										if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_3243,
												BGl_blockz00zzcgen_copz00))
											{	/* Cgen/cgen.scm 530 */
												BgL_auxz00_5125 = (BgL_blockz00_bglt) (BgL_copz00_3243);
											}
										else
											{	/* Cgen/cgen.scm 530 */
												BgL_auxz00_5125 =
													BGl_makezd2blockzd2zzcgen_copz00(BFALSE,
													(BgL_copz00_bglt) (BgL_copz00_3243));
											}
									}
								}
							else
								{	/* Cgen/cgen.scm 540 */
									obj_t BgL_localz00_2252;

									BgL_localz00_2252 = CAR(BgL_localsz00_2237);
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
										(BgL_variablez00_bglt) (BgL_localz00_2252));
									{	/* Cgen/cgen.scm 542 */
										BgL_sfunz00_bglt BgL_funz00_2253;

										{	/* Cgen/cgen.scm 542 */
											BgL_sfunz00_bglt BgL_obj4288z00_2264;

											{
												BgL_sfunz00_bglt BgL_auxz00_5179;

												{	/* Cgen/cgen.scm 542 */
													BgL_valuez00_bglt BgL_auxz00_5180;

													{
														BgL_variablez00_bglt BgL_auxz00_5181;

														BgL_auxz00_5181 =
															(BgL_variablez00_bglt) (BgL_localz00_2252);
														BgL_auxz00_5180 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_5181))->
															BgL_valuez00);
													}
													BgL_auxz00_5179 =
														(BgL_sfunz00_bglt) (BgL_auxz00_5180);
												}
												BgL_obj4288z00_2264 =
													((BgL_sfunz00_bglt) BgL_auxz00_5179);
											}
											{	/* Cgen/cgen.scm 544 */
												obj_t BgL_arg4848z00_2265;

												{	/* Cgen/cgen.scm 544 */
													BgL_clabelz00_bglt BgL_arg4849z00_2266;

													{	/* Cgen/cgen.scm 544 */
														obj_t BgL_arg4850z00_2267;

														obj_t BgL_arg4851z00_2268;

														{	/* Cgen/cgen.scm 544 */
															BgL_sfunz00_bglt BgL_obj2211z00_3250;

															{	/* Cgen/cgen.scm 544 */
																BgL_variablez00_bglt BgL_obj1930z00_3249;

																BgL_obj1930z00_3249 =
																	(BgL_variablez00_bglt) (BgL_localz00_2252);
																BgL_obj2211z00_3250 =
																	(BgL_sfunz00_bglt) (
																	(((BgL_variablez00_bglt)
																			CREF(BgL_obj1930z00_3249))->
																		BgL_valuez00));
															}
															BgL_arg4850z00_2267 =
																(((BgL_sfunz00_bglt)
																	CREF(BgL_obj2211z00_3250))->BgL_locz00);
														}
														{
															BgL_variablez00_bglt BgL_auxz00_5190;

															BgL_auxz00_5190 =
																(BgL_variablez00_bglt) (BgL_localz00_2252);
															BgL_arg4851z00_2268 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_5190))->BgL_namez00);
														}
														BgL_arg4849z00_2266 =
															BGl_makezd2clabelzd2zzcgen_copz00
															(BgL_arg4850z00_2267, BgL_arg4851z00_2268,
															((bool_t) 0), BUNSPEC);
													}
													BgL_arg4848z00_2265 =
														BGl_wideningzd2sfunzf2Cz20zzcgen_copz00
														(BgL_arg4849z00_2266, ((bool_t) 0));
												}
												{	/* Cgen/cgen.scm 542 */
													BgL_objectz00_bglt BgL_auxz00_5195;

													BgL_auxz00_5195 =
														(BgL_objectz00_bglt) (BgL_obj4288z00_2264);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_5195,
														BgL_arg4848z00_2265);
												}
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_obj4288z00_2264),
												BGl_classzd2numzd2zz__objectz00
												(BGl_sfunzf2Czf2zzcgen_copz00));
											BgL_funz00_2253 = BgL_obj4288z00_2264;
										}
										{	/* Cgen/cgen.scm 542 */
											obj_t BgL_formalsz00_2254;

											BgL_formalsz00_2254 =
												(((BgL_sfunz00_bglt) CREF(BgL_funz00_2253))->
												BgL_argsz00);
											{	/* Cgen/cgen.scm 547 */

												{
													obj_t BgL_l4361z00_2256;

													BgL_l4361z00_2256 = BgL_formalsz00_2254;
												BgL_zc3anonymousza34842ze3z83_2257:
													if (PAIRP(BgL_l4361z00_2256))
														{	/* Cgen/cgen.scm 548 */
															{	/* Cgen/cgen.scm 548 */
																obj_t BgL_arg4844z00_2259;

																BgL_arg4844z00_2259 = CAR(BgL_l4361z00_2256);
																BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
																	((BgL_variablez00_bglt)
																	(BgL_arg4844z00_2259));
															}
															{
																obj_t BgL_l4361z00_5207;

																BgL_l4361z00_5207 = CDR(BgL_l4361z00_2256);
																BgL_l4361z00_2256 = BgL_l4361z00_5207;
																goto BgL_zc3anonymousza34842ze3z83_2257;
															}
														}
													else
														{	/* Cgen/cgen.scm 548 */
															((bool_t) 1);
														}
												}
												{
													obj_t BgL_allzd2formalszd2_5211;

													obj_t BgL_localsz00_5209;

													BgL_localsz00_5209 = CDR(BgL_localsz00_2237);
													BgL_allzd2formalszd2_5211 =
														bgl_append2(BgL_formalsz00_2254,
														BgL_allzd2formalszd2_2238);
													BgL_allzd2formalszd2_2238 = BgL_allzd2formalszd2_5211;
													BgL_localsz00_2237 = BgL_localsz00_5209;
													goto BgL_zc3anonymousza34829ze3z83_2239;
												}
											}
										}
									}
								}
						}
					}
					return (obj_t) (BgL_auxz00_5125);
				}
			}
		}
	}



/* node->cop-select4409 */
	obj_t BGl_nodezd2ze3copzd2select4409ze3zzcgen_cgenz00(obj_t BgL_envz00_3815,
		obj_t BgL_nodez00_3816, obj_t BgL_kontz00_3817)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 483 */
			{
				BgL_selectz00_bglt BgL_nodez00_2183;

				obj_t BgL_kontz00_2184;

				BgL_nodez00_2183 = (BgL_selectz00_bglt) (BgL_nodez00_3816);
				BgL_kontz00_2184 = BgL_kontz00_3817;
				{	/* Cgen/cgen.scm 488 */
					obj_t BgL_g4360z00_2188;

					BgL_g4360z00_2188 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_2183))->BgL_clausesz00);
					{
						obj_t BgL_l4358z00_2190;

						BgL_l4358z00_2190 = BgL_g4360z00_2188;
					BgL_zc3anonymousza34793ze3z83_2191:
						if (PAIRP(BgL_l4358z00_2190))
							{	/* Cgen/cgen.scm 488 */
								{	/* Cgen/cgen.scm 489 */
									obj_t BgL_clausez00_2193;

									BgL_clausez00_2193 = CAR(BgL_l4358z00_2190);
									{	/* Cgen/cgen.scm 489 */
										BgL_copz00_bglt BgL_arg4795z00_2194;

										{	/* Cgen/cgen.scm 489 */
											obj_t BgL_arg4796z00_2195;

											BgL_arg4796z00_2195 = CDR(BgL_clausez00_2193);
											{	/* Cgen/cgen.scm 489 */
												BgL_copz00_bglt BgL_res5120z00_3157;

												{	/* Cgen/cgen.scm 489 */
													BgL_nodez00_bglt BgL_nodez00_3130;

													obj_t BgL_kontz00_3131;

													BgL_nodez00_3130 =
														(BgL_nodez00_bglt) (BgL_arg4796z00_2195);
													BgL_kontz00_3131 = BgL_kontz00_2184;
													{	/* Cgen/cgen.scm 489 */
														obj_t BgL_method4375z00_3132;

														{	/* Cgen/cgen.scm 489 */
															BgL_objectz00_bglt BgL_objz00_3133;

															BgL_objz00_3133 =
																(BgL_objectz00_bglt) (BgL_nodez00_3130);
															{	/* Cgen/cgen.scm 489 */
																long BgL_objzd2classzd2numz00_3134;

																BgL_objzd2classzd2numz00_3134 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_3133);
																{	/* Cgen/cgen.scm 489 */
																	obj_t BgL_arg2643z00_3135;

																	BgL_arg2643z00_3135 =
																		PROCEDURE_REF
																		(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																		(int) (((long) 1)));
																	{	/* Cgen/cgen.scm 489 */
																		obj_t BgL_arrayz00_3137;

																		int BgL_offsetz00_3138;

																		BgL_arrayz00_3137 = BgL_arg2643z00_3135;
																		BgL_offsetz00_3138 =
																			(int) (BgL_objzd2classzd2numz00_3134);
																		{	/* Cgen/cgen.scm 489 */
																			long BgL_offsetz00_3139;

																			BgL_offsetz00_3139 =
																				(
																				(long) (BgL_offsetz00_3138) -
																				OBJECT_TYPE);
																			{	/* Cgen/cgen.scm 489 */
																				long BgL_modz00_3140;

																				{	/* Cgen/cgen.scm 489 */
																					int BgL_arg2645z00_3141;

																					BgL_arg2645z00_3141 =
																						(int) (((long) 16));
																					{	/* Cgen/cgen.scm 489 */
																						long BgL_auxz00_5229;

																						BgL_auxz00_5229 =
																							(long) (BgL_arg2645z00_3141);
																						BgL_modz00_3140 =
																							(BgL_offsetz00_3139 /
																							BgL_auxz00_5229);
																				}}
																				{	/* Cgen/cgen.scm 489 */
																					long BgL_restz00_3142;

																					{	/* Cgen/cgen.scm 489 */
																						int BgL_arg2644z00_3143;

																						BgL_arg2644z00_3143 =
																							(int) (((long) 16));
																						{	/* Cgen/cgen.scm 489 */
																							long BgL_auxz00_5233;

																							BgL_auxz00_5233 =
																								(long) (BgL_arg2644z00_3143);
																							BgL_restz00_3142 =
																								(BgL_offsetz00_3139 %
																								BgL_auxz00_5233);
																					}}
																					{	/* Cgen/cgen.scm 489 */

																						BgL_method4375z00_3132 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_3137,
																								(int) (BgL_modz00_3140)),
																							(int) (BgL_restz00_3142));
														}}}}}}}}
														BgL_res5120z00_3157 =
															(BgL_copz00_bglt) (PROCEDURE_ENTRY
															(BgL_method4375z00_3132) (BgL_method4375z00_3132,
																(obj_t) (BgL_nodez00_3130), BgL_kontz00_3131,
																BEOA));
												}}
												BgL_arg4795z00_2194 = BgL_res5120z00_3157;
										}}
										{	/* Cgen/cgen.scm 489 */
											obj_t BgL_auxz00_5244;

											BgL_auxz00_5244 = (obj_t) (BgL_arg4795z00_2194);
											SET_CDR(BgL_clausez00_2193, BgL_auxz00_5244);
								}}}
								{
									obj_t BgL_l4358z00_5247;

									BgL_l4358z00_5247 = CDR(BgL_l4358z00_2190);
									BgL_l4358z00_2190 = BgL_l4358z00_5247;
									goto BgL_zc3anonymousza34793ze3z83_2191;
								}
							}
						else
							{	/* Cgen/cgen.scm 488 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cgen/cgen.scm 491 */
					BgL_localz00_bglt BgL_auxz00_2198;

					{	/* Cgen/cgen.scm 491 */
						obj_t BgL_arg4825z00_2225;

						BgL_typez00_bglt BgL_arg4826z00_2226;

						BgL_arg4825z00_2225 = CNST_TABLE_REF(((long) 2));
						BgL_arg4826z00_2226 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_2183))->
							BgL_itemzd2typezd2);
						BgL_auxz00_2198 =
							BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
							(BgL_arg4825z00_2225, BgL_arg4826z00_2226);
					}
					{	/* Cgen/cgen.scm 492 */
						BgL_copz00_bglt BgL_copz00_2199;

						{	/* Cgen/cgen.scm 492 */
							BgL_setqz00_bglt BgL_arg4823z00_2223;

							{	/* Cgen/cgen.scm 492 */
								BgL_nodez00_bglt BgL_arg4824z00_2224;

								BgL_arg4824z00_2224 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_2183))->BgL_testz00);
								BgL_arg4823z00_2223 =
									BGl_nodezd2setqzd2zzcgen_cgenz00(
									(BgL_variablez00_bglt) (BgL_auxz00_2198),
									BgL_arg4824z00_2224);
							}
							{	/* Cgen/cgen.scm 492 */
								BgL_copz00_bglt BgL_res5123z00_3190;

								{	/* Cgen/cgen.scm 492 */
									BgL_nodez00_bglt BgL_nodez00_3163;

									obj_t BgL_kontz00_3164;

									BgL_nodez00_3163 = (BgL_nodez00_bglt) (BgL_arg4823z00_2223);
									BgL_kontz00_3164 = BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
									{	/* Cgen/cgen.scm 492 */
										obj_t BgL_method4375z00_3165;

										{	/* Cgen/cgen.scm 492 */
											BgL_objectz00_bglt BgL_objz00_3166;

											BgL_objz00_3166 = (BgL_objectz00_bglt) (BgL_nodez00_3163);
											{	/* Cgen/cgen.scm 492 */
												long BgL_objzd2classzd2numz00_3167;

												BgL_objzd2classzd2numz00_3167 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3166);
												{	/* Cgen/cgen.scm 492 */
													obj_t BgL_arg2643z00_3168;

													BgL_arg2643z00_3168 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 492 */
														obj_t BgL_arrayz00_3170;

														int BgL_offsetz00_3171;

														BgL_arrayz00_3170 = BgL_arg2643z00_3168;
														BgL_offsetz00_3171 =
															(int) (BgL_objzd2classzd2numz00_3167);
														{	/* Cgen/cgen.scm 492 */
															long BgL_offsetz00_3172;

															BgL_offsetz00_3172 =
																((long) (BgL_offsetz00_3171) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 492 */
																long BgL_modz00_3173;

																{	/* Cgen/cgen.scm 492 */
																	int BgL_arg2645z00_3174;

																	BgL_arg2645z00_3174 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 492 */
																		long BgL_auxz00_5264;

																		BgL_auxz00_5264 =
																			(long) (BgL_arg2645z00_3174);
																		BgL_modz00_3173 =
																			(BgL_offsetz00_3172 / BgL_auxz00_5264);
																}}
																{	/* Cgen/cgen.scm 492 */
																	long BgL_restz00_3175;

																	{	/* Cgen/cgen.scm 492 */
																		int BgL_arg2644z00_3176;

																		BgL_arg2644z00_3176 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 492 */
																			long BgL_auxz00_5268;

																			BgL_auxz00_5268 =
																				(long) (BgL_arg2644z00_3176);
																			BgL_restz00_3175 =
																				(BgL_offsetz00_3172 % BgL_auxz00_5268);
																	}}
																	{	/* Cgen/cgen.scm 492 */

																		BgL_method4375z00_3165 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3170,
																				(int) (BgL_modz00_3173)),
																			(int) (BgL_restz00_3175));
										}}}}}}}}
										BgL_res5123z00_3190 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_3165)
											(BgL_method4375z00_3165, (obj_t) (BgL_nodez00_3163),
												BgL_kontz00_3164, BEOA));
								}}
								BgL_copz00_2199 = BgL_res5123z00_3190;
						}}
						{	/* Cgen/cgen.scm 493 */
							bool_t BgL_testz00_5279;

							{	/* Cgen/cgen.scm 493 */
								bool_t BgL_testz00_5280;

								{	/* Cgen/cgen.scm 493 */
									obj_t BgL_obj3793z00_3191;

									BgL_obj3793z00_3191 = (obj_t) (BgL_copz00_2199);
									BgL_testz00_5280 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj3793z00_3191,
										BGl_csetqz00zzcgen_copz00);
								}
								if (BgL_testz00_5280)
									{	/* Cgen/cgen.scm 494 */
										obj_t BgL_auxz00_5283;

										{	/* Cgen/cgen.scm 494 */
											BgL_variablez00_bglt BgL_auxz00_5284;

											{	/* Cgen/cgen.scm 494 */
												BgL_varcz00_bglt BgL_obj3686z00_3193;

												{
													BgL_csetqz00_bglt BgL_auxz00_5285;

													BgL_auxz00_5285 =
														(BgL_csetqz00_bglt) (BgL_copz00_2199);
													BgL_obj3686z00_3193 =
														(((BgL_csetqz00_bglt) CREF(BgL_auxz00_5285))->
														BgL_varz00);
												}
												BgL_auxz00_5284 =
													(((BgL_varcz00_bglt) CREF(BgL_obj3686z00_3193))->
													BgL_variablez00);
											}
											BgL_auxz00_5283 = (obj_t) (BgL_auxz00_5284);
										}
										BgL_testz00_5279 =
											(BgL_auxz00_5283 == (obj_t) (BgL_auxz00_2198));
									}
								else
									{	/* Cgen/cgen.scm 493 */
										BgL_testz00_5279 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_5279)
								{	/* Cgen/cgen.scm 496 */
									obj_t BgL_arg4799z00_2201;

									BgL_copz00_bglt BgL_arg4800z00_2202;

									obj_t BgL_arg4801z00_2203;

									{
										BgL_nodez00_bglt BgL_auxz00_5292;

										BgL_auxz00_5292 = (BgL_nodez00_bglt) (BgL_nodez00_2183);
										BgL_arg4799z00_2201 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_5292))->BgL_locz00);
									}
									{
										BgL_csetqz00_bglt BgL_auxz00_5295;

										BgL_auxz00_5295 = (BgL_csetqz00_bglt) (BgL_copz00_2199);
										BgL_arg4800z00_2202 =
											(((BgL_csetqz00_bglt) CREF(BgL_auxz00_5295))->
											BgL_valuez00);
									}
									BgL_arg4801z00_2203 =
										(((BgL_selectz00_bglt) CREF(BgL_nodez00_2183))->
										BgL_clausesz00);
									return (obj_t) (BGl_makezd2cswitchzd2zzcgen_copz00
										(BgL_arg4799z00_2201, BgL_arg4800z00_2202,
											BgL_arg4801z00_2203));
								}
							else
								{	/* Cgen/cgen.scm 500 */
									obj_t BgL_arg4802z00_2204;

									BgL_csequencez00_bglt BgL_arg4804z00_2205;

									{
										BgL_nodez00_bglt BgL_auxz00_5301;

										BgL_auxz00_5301 = (BgL_nodez00_bglt) (BgL_nodez00_2183);
										BgL_arg4802z00_2204 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_5301))->BgL_locz00);
									}
									{	/* Cgen/cgen.scm 502 */
										obj_t BgL_arg4805z00_2206;

										obj_t BgL_arg4806z00_2207;

										{
											BgL_nodez00_bglt BgL_auxz00_5304;

											BgL_auxz00_5304 = (BgL_nodez00_bglt) (BgL_nodez00_2183);
											BgL_arg4805z00_2206 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_5304))->
												BgL_locz00);
										}
										{	/* Cgen/cgen.scm 504 */
											BgL_localzd2varzd2_bglt BgL_arg4807z00_2208;

											BgL_cswitchz00_bglt BgL_arg4808z00_2209;

											{	/* Cgen/cgen.scm 504 */
												obj_t BgL_arg4812z00_2213;

												obj_t BgL_arg4813z00_2214;

												{
													BgL_nodez00_bglt BgL_auxz00_5307;

													BgL_auxz00_5307 =
														(BgL_nodez00_bglt) (BgL_nodez00_2183);
													BgL_arg4812z00_2213 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_5307))->
														BgL_locz00);
												}
												{	/* Cgen/cgen.scm 505 */
													obj_t BgL_list4814z00_2215;

													BgL_list4814z00_2215 =
														MAKE_PAIR((obj_t) (BgL_auxz00_2198), BNIL);
													BgL_arg4813z00_2214 = BgL_list4814z00_2215;
												}
												BgL_arg4807z00_2208 =
													BGl_makezd2localzd2varz00zzcgen_copz00
													(BgL_arg4812z00_2213, BgL_arg4813z00_2214);
											}
											{	/* Cgen/cgen.scm 508 */
												obj_t BgL_arg4815z00_2216;

												BgL_varcz00_bglt BgL_arg4816z00_2217;

												obj_t BgL_arg4817z00_2218;

												{
													BgL_nodez00_bglt BgL_auxz00_5313;

													BgL_auxz00_5313 =
														(BgL_nodez00_bglt) (BgL_nodez00_2183);
													BgL_arg4815z00_2216 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_5313))->
														BgL_locz00);
												}
												{	/* Cgen/cgen.scm 510 */
													obj_t BgL_arg4819z00_2219;

													{
														BgL_nodez00_bglt BgL_auxz00_5316;

														BgL_auxz00_5316 =
															(BgL_nodez00_bglt) (BgL_nodez00_2183);
														BgL_arg4819z00_2219 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_5316))->
															BgL_locz00);
													}
													BgL_arg4816z00_2217 =
														BGl_makezd2varczd2zzcgen_copz00(BgL_arg4819z00_2219,
														(BgL_variablez00_bglt) (BgL_auxz00_2198));
												}
												BgL_arg4817z00_2218 =
													(((BgL_selectz00_bglt) CREF(BgL_nodez00_2183))->
													BgL_clausesz00);
												BgL_arg4808z00_2209 =
													BGl_makezd2cswitchzd2zzcgen_copz00
													(BgL_arg4815z00_2216,
													(BgL_copz00_bglt) (BgL_arg4816z00_2217),
													BgL_arg4817z00_2218);
											}
											{	/* Cgen/cgen.scm 503 */
												obj_t BgL_list4809z00_2210;

												{	/* Cgen/cgen.scm 503 */
													obj_t BgL_arg4810z00_2211;

													{	/* Cgen/cgen.scm 503 */
														obj_t BgL_arg4811z00_2212;

														BgL_arg4811z00_2212 =
															MAKE_PAIR((obj_t) (BgL_arg4808z00_2209), BNIL);
														BgL_arg4810z00_2211 =
															MAKE_PAIR(
															(obj_t) (BgL_copz00_2199), BgL_arg4811z00_2212);
													}
													BgL_list4809z00_2210 =
														MAKE_PAIR(
														(obj_t) (BgL_arg4807z00_2208), BgL_arg4810z00_2211);
												}
												BgL_arg4806z00_2207 = BgL_list4809z00_2210;
											}
										}
										BgL_arg4804z00_2205 =
											BGl_makezd2csequencezd2zzcgen_copz00(BgL_arg4805z00_2206,
											((bool_t) 0), BgL_arg4806z00_2207);
									}
									return
										(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
										(BgL_arg4802z00_2204,
											(BgL_copz00_bglt) (BgL_arg4804z00_2205)));
								}
						}
					}
				}
			}
		}
	}



/* node->cop-fail4407 */
	obj_t BGl_nodezd2ze3copzd2fail4407ze3zzcgen_cgenz00(obj_t BgL_envz00_3818,
		obj_t BgL_nodez00_3819, obj_t BgL_kontz00_3820)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 464 */
			{
				BgL_failz00_bglt BgL_nodez00_2159;

				obj_t BgL_kontz00_2160;

				BgL_nodez00_2159 = (BgL_failz00_bglt) (BgL_nodez00_3819);
				BgL_kontz00_2160 = BgL_kontz00_3820;
				{	/* Cgen/cgen.scm 469 */
					obj_t BgL_arg4775z00_2164;

					obj_t BgL_arg4776z00_2165;

					{	/* Cgen/cgen.scm 469 */
						BgL_nodez00_bglt BgL_arg4778z00_2167;

						BgL_nodez00_bglt BgL_arg4780z00_2168;

						BgL_nodez00_bglt BgL_arg4782z00_2169;

						BgL_arg4778z00_2167 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_2159))->BgL_procz00);
						BgL_arg4780z00_2168 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_2159))->BgL_msgz00);
						BgL_arg4782z00_2169 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_2159))->BgL_objz00);
						{	/* Cgen/cgen.scm 469 */
							obj_t BgL_list4783z00_2170;

							{	/* Cgen/cgen.scm 469 */
								obj_t BgL_arg4784z00_2171;

								{	/* Cgen/cgen.scm 469 */
									obj_t BgL_arg4785z00_2172;

									BgL_arg4785z00_2172 =
										MAKE_PAIR((obj_t) (BgL_arg4782z00_2169), BNIL);
									BgL_arg4784z00_2171 =
										MAKE_PAIR(
										(obj_t) (BgL_arg4780z00_2168), BgL_arg4785z00_2172);
								}
								BgL_list4783z00_2170 =
									MAKE_PAIR((obj_t) (BgL_arg4778z00_2167), BgL_arg4784z00_2171);
							}
							BgL_arg4775z00_2164 = BgL_list4783z00_2170;
						}
					}
					{
						BgL_nodez00_bglt BgL_auxz00_5344;

						BgL_auxz00_5344 = (BgL_nodez00_bglt) (BgL_nodez00_2159);
						BgL_arg4776z00_2165 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_5344))->BgL_locz00);
					}
					{	/* Cgen/cgen.scm 475 */
						obj_t BgL_zc3anonymousza34786ze3z83_3764;

						{
							int BgL_auxz00_5347;

							BgL_auxz00_5347 = (int) (((long) 1));
							BgL_zc3anonymousza34786ze3z83_3764 =
								MAKE_L_PROCEDURE(BGl_zc3anonymousza34786ze3z83zzcgen_cgenz00,
								BgL_auxz00_5347);
						}
						PROCEDURE_L_SET(BgL_zc3anonymousza34786ze3z83_3764,
							(int) (((long) 0)), (obj_t) (BgL_nodez00_2159));
						return
							BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(BgL_arg4775z00_2164,
							((bool_t) 0), BgL_arg4776z00_2165,
							BgL_zc3anonymousza34786ze3z83_3764);
					}
				}
			}
		}
	}



/* <anonymous:4786> */
	obj_t BGl_zc3anonymousza34786ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3821,
		obj_t BgL_newzd2argszd2_3823)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 472 */
			{	/* Cgen/cgen.scm 475 */
				obj_t BgL_instance4272z00_3822;

				BgL_instance4272z00_3822 =
					PROCEDURE_L_REF(BgL_envz00_3821, (int) (((long) 0)));
				{
					obj_t BgL_newzd2argszd2_2173;

					{	/* Cgen/cgen.scm 475 */
						BgL_cfailz00_bglt BgL_auxz00_5357;

						BgL_newzd2argszd2_2173 = BgL_newzd2argszd2_3823;
						{	/* Cgen/cgen.scm 475 */
							BgL_cfailz00_bglt BgL_arg4787z00_2175;

							{	/* Cgen/cgen.scm 475 */
								obj_t BgL_arg4788z00_2176;

								obj_t BgL_arg4789z00_2177;

								obj_t BgL_arg4790z00_2178;

								obj_t BgL_arg4791z00_2179;

								{
									BgL_nodez00_bglt BgL_auxz00_5358;

									BgL_auxz00_5358 =
										(BgL_nodez00_bglt) (BgL_instance4272z00_3822);
									BgL_arg4788z00_2176 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_5358))->BgL_locz00);
								}
								BgL_arg4789z00_2177 = CAR(BgL_newzd2argszd2_2173);
								{	/* Cgen/cgen.scm 477 */
									obj_t BgL_pairz00_3115;

									BgL_pairz00_3115 = BgL_newzd2argszd2_2173;
									BgL_arg4790z00_2178 = CAR(CDR(BgL_pairz00_3115));
								}
								{	/* Cgen/cgen.scm 478 */
									obj_t BgL_pairz00_3119;

									BgL_pairz00_3119 = BgL_newzd2argszd2_2173;
									BgL_arg4791z00_2179 = CAR(CDR(CDR(BgL_pairz00_3119)));
								}
								BgL_arg4787z00_2175 =
									BGl_makezd2cfailzd2zzcgen_copz00(BgL_arg4788z00_2176,
									(BgL_copz00_bglt) (BgL_arg4789z00_2177),
									(BgL_copz00_bglt) (BgL_arg4790z00_2178),
									(BgL_copz00_bglt) (BgL_arg4791z00_2179));
							}
							BgL_auxz00_5357 = BgL_arg4787z00_2175;
						}
						return (obj_t) (BgL_auxz00_5357);
					}
				}
			}
		}
	}



/* node->cop-conditiona4405 */
	obj_t BGl_nodezd2ze3copzd2conditiona4405ze3zzcgen_cgenz00(obj_t
		BgL_envz00_3824, obj_t BgL_nodez00_3825, obj_t BgL_kontz00_3826)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 428 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_2111;

				obj_t BgL_kontz00_2112;

				BgL_nodez00_2111 = (BgL_conditionalz00_bglt) (BgL_nodez00_3825);
				BgL_kontz00_2112 = BgL_kontz00_3826;
				{	/* Cgen/cgen.scm 434 */
					BgL_localz00_bglt BgL_auxz00_2116;

					BgL_auxz00_2116 =
						BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
								(long) 6)),
						(BgL_typez00_bglt) (BGl_za2boolza2z00zztype_cachez00));
					{	/* Cgen/cgen.scm 434 */
						BgL_copz00_bglt BgL_ctestz00_2117;

						{	/* Cgen/cgen.scm 435 */
							BgL_setqz00_bglt BgL_arg4772z00_2155;

							{	/* Cgen/cgen.scm 435 */
								BgL_nodez00_bglt BgL_arg4773z00_2156;

								BgL_arg4773z00_2156 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2111))->
									BgL_testz00);
								BgL_arg4772z00_2155 =
									BGl_nodezd2setqzd2zzcgen_cgenz00((BgL_variablez00_bglt)
									(BgL_auxz00_2116), BgL_arg4773z00_2156);
							}
							{	/* Cgen/cgen.scm 435 */
								BgL_copz00_bglt BgL_res5102z00_2956;

								{	/* Cgen/cgen.scm 435 */
									BgL_nodez00_bglt BgL_nodez00_2929;

									obj_t BgL_kontz00_2930;

									BgL_nodez00_2929 = (BgL_nodez00_bglt) (BgL_arg4772z00_2155);
									BgL_kontz00_2930 = BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
									{	/* Cgen/cgen.scm 435 */
										obj_t BgL_method4375z00_2931;

										{	/* Cgen/cgen.scm 435 */
											BgL_objectz00_bglt BgL_objz00_2932;

											BgL_objz00_2932 = (BgL_objectz00_bglt) (BgL_nodez00_2929);
											{	/* Cgen/cgen.scm 435 */
												long BgL_objzd2classzd2numz00_2933;

												BgL_objzd2classzd2numz00_2933 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2932);
												{	/* Cgen/cgen.scm 435 */
													obj_t BgL_arg2643z00_2934;

													BgL_arg2643z00_2934 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 435 */
														obj_t BgL_arrayz00_2936;

														int BgL_offsetz00_2937;

														BgL_arrayz00_2936 = BgL_arg2643z00_2934;
														BgL_offsetz00_2937 =
															(int) (BgL_objzd2classzd2numz00_2933);
														{	/* Cgen/cgen.scm 435 */
															long BgL_offsetz00_2938;

															BgL_offsetz00_2938 =
																((long) (BgL_offsetz00_2937) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 435 */
																long BgL_modz00_2939;

																{	/* Cgen/cgen.scm 435 */
																	int BgL_arg2645z00_2940;

																	BgL_arg2645z00_2940 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 435 */
																		long BgL_auxz00_5387;

																		BgL_auxz00_5387 =
																			(long) (BgL_arg2645z00_2940);
																		BgL_modz00_2939 =
																			(BgL_offsetz00_2938 / BgL_auxz00_5387);
																}}
																{	/* Cgen/cgen.scm 435 */
																	long BgL_restz00_2941;

																	{	/* Cgen/cgen.scm 435 */
																		int BgL_arg2644z00_2942;

																		BgL_arg2644z00_2942 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 435 */
																			long BgL_auxz00_5391;

																			BgL_auxz00_5391 =
																				(long) (BgL_arg2644z00_2942);
																			BgL_restz00_2941 =
																				(BgL_offsetz00_2938 % BgL_auxz00_5391);
																	}}
																	{	/* Cgen/cgen.scm 435 */

																		BgL_method4375z00_2931 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2936,
																				(int) (BgL_modz00_2939)),
																			(int) (BgL_restz00_2941));
										}}}}}}}}
										BgL_res5102z00_2956 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_2931)
											(BgL_method4375z00_2931, (obj_t) (BgL_nodez00_2929),
												BgL_kontz00_2930, BEOA));
								}}
								BgL_ctestz00_2117 = BgL_res5102z00_2956;
						}}
						{	/* Cgen/cgen.scm 435 */

							{	/* Cgen/cgen.scm 436 */
								bool_t BgL_testz00_5402;

								{	/* Cgen/cgen.scm 436 */
									bool_t BgL_testz00_5403;

									{	/* Cgen/cgen.scm 436 */
										obj_t BgL_obj3793z00_2957;

										BgL_obj3793z00_2957 = (obj_t) (BgL_ctestz00_2117);
										BgL_testz00_5403 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3793z00_2957,
											BGl_csetqz00zzcgen_copz00);
									}
									if (BgL_testz00_5403)
										{	/* Cgen/cgen.scm 436 */
											obj_t BgL_auxz00_5406;

											{	/* Cgen/cgen.scm 436 */
												BgL_variablez00_bglt BgL_auxz00_5407;

												{	/* Cgen/cgen.scm 436 */
													BgL_varcz00_bglt BgL_obj3686z00_2959;

													{
														BgL_csetqz00_bglt BgL_auxz00_5408;

														BgL_auxz00_5408 =
															(BgL_csetqz00_bglt) (BgL_ctestz00_2117);
														BgL_obj3686z00_2959 =
															(((BgL_csetqz00_bglt) CREF(BgL_auxz00_5408))->
															BgL_varz00);
													}
													BgL_auxz00_5407 =
														(((BgL_varcz00_bglt) CREF(BgL_obj3686z00_2959))->
														BgL_variablez00);
												}
												BgL_auxz00_5406 = (obj_t) (BgL_auxz00_5407);
											}
											BgL_testz00_5402 =
												(BgL_auxz00_5406 == (obj_t) (BgL_auxz00_2116));
										}
									else
										{	/* Cgen/cgen.scm 436 */
											BgL_testz00_5402 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_5402)
									{	/* Cgen/cgen.scm 441 */
										obj_t BgL_arg4734z00_2119;

										BgL_copz00_bglt BgL_arg4735z00_2120;

										BgL_blockz00_bglt BgL_arg4736z00_2121;

										BgL_blockz00_bglt BgL_arg4737z00_2122;

										{
											BgL_nodez00_bglt BgL_auxz00_5415;

											BgL_auxz00_5415 = (BgL_nodez00_bglt) (BgL_nodez00_2111);
											BgL_arg4734z00_2119 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_5415))->
												BgL_locz00);
										}
										{
											BgL_csetqz00_bglt BgL_auxz00_5418;

											BgL_auxz00_5418 = (BgL_csetqz00_bglt) (BgL_ctestz00_2117);
											BgL_arg4735z00_2120 =
												(((BgL_csetqz00_bglt) CREF(BgL_auxz00_5418))->
												BgL_valuez00);
										}
										{	/* Cgen/cgen.scm 439 */
											BgL_copz00_bglt BgL_arg4739z00_2123;

											obj_t BgL_arg4740z00_2124;

											{	/* Cgen/cgen.scm 439 */
												BgL_nodez00_bglt BgL_arg4741z00_2125;

												BgL_arg4741z00_2125 =
													(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2111))->
													BgL_truez00);
												{	/* Cgen/cgen.scm 439 */
													BgL_copz00_bglt BgL_res5105z00_2990;

													{	/* Cgen/cgen.scm 439 */
														obj_t BgL_kontz00_2964;

														BgL_kontz00_2964 = BgL_kontz00_2112;
														{	/* Cgen/cgen.scm 439 */
															obj_t BgL_method4375z00_2965;

															{	/* Cgen/cgen.scm 439 */
																BgL_objectz00_bglt BgL_objz00_2966;

																BgL_objz00_2966 =
																	(BgL_objectz00_bglt) (BgL_arg4741z00_2125);
																{	/* Cgen/cgen.scm 439 */
																	long BgL_objzd2classzd2numz00_2967;

																	BgL_objzd2classzd2numz00_2967 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2966);
																	{	/* Cgen/cgen.scm 439 */
																		obj_t BgL_arg2643z00_2968;

																		BgL_arg2643z00_2968 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																			(int) (((long) 1)));
																		{	/* Cgen/cgen.scm 439 */
																			obj_t BgL_arrayz00_2970;

																			int BgL_offsetz00_2971;

																			BgL_arrayz00_2970 = BgL_arg2643z00_2968;
																			BgL_offsetz00_2971 =
																				(int) (BgL_objzd2classzd2numz00_2967);
																			{	/* Cgen/cgen.scm 439 */
																				long BgL_offsetz00_2972;

																				BgL_offsetz00_2972 =
																					(
																					(long) (BgL_offsetz00_2971) -
																					OBJECT_TYPE);
																				{	/* Cgen/cgen.scm 439 */
																					long BgL_modz00_2973;

																					{	/* Cgen/cgen.scm 439 */
																						int BgL_arg2645z00_2974;

																						BgL_arg2645z00_2974 =
																							(int) (((long) 16));
																						{	/* Cgen/cgen.scm 439 */
																							long BgL_auxz00_5430;

																							BgL_auxz00_5430 =
																								(long) (BgL_arg2645z00_2974);
																							BgL_modz00_2973 =
																								(BgL_offsetz00_2972 /
																								BgL_auxz00_5430);
																					}}
																					{	/* Cgen/cgen.scm 439 */
																						long BgL_restz00_2975;

																						{	/* Cgen/cgen.scm 439 */
																							int BgL_arg2644z00_2976;

																							BgL_arg2644z00_2976 =
																								(int) (((long) 16));
																							{	/* Cgen/cgen.scm 439 */
																								long BgL_auxz00_5434;

																								BgL_auxz00_5434 =
																									(long) (BgL_arg2644z00_2976);
																								BgL_restz00_2975 =
																									(BgL_offsetz00_2972 %
																									BgL_auxz00_5434);
																						}}
																						{	/* Cgen/cgen.scm 439 */

																							BgL_method4375z00_2965 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2970,
																									(int) (BgL_modz00_2973)),
																								(int) (BgL_restz00_2975));
															}}}}}}}}
															BgL_res5105z00_2990 =
																(BgL_copz00_bglt) (PROCEDURE_ENTRY
																(BgL_method4375z00_2965)
																(BgL_method4375z00_2965,
																	(obj_t) (BgL_arg4741z00_2125),
																	BgL_kontz00_2964, BEOA));
													}}
													BgL_arg4739z00_2123 = BgL_res5105z00_2990;
											}}
											{
												BgL_nodez00_bglt BgL_auxz00_5445;

												BgL_auxz00_5445 = (BgL_nodez00_bglt) (BgL_nodez00_2111);
												BgL_arg4740z00_2124 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_5445))->
													BgL_locz00);
											}
											{	/* Cgen/cgen.scm 439 */
												obj_t BgL_copz00_2992;

												BgL_copz00_2992 = (obj_t) (BgL_arg4739z00_2123);
												if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_2992,
														BGl_blockz00zzcgen_copz00))
													{	/* Cgen/cgen.scm 439 */
														BgL_arg4736z00_2121 =
															(BgL_blockz00_bglt) (BgL_copz00_2992);
													}
												else
													{	/* Cgen/cgen.scm 439 */
														BgL_arg4736z00_2121 =
															BGl_makezd2blockzd2zzcgen_copz00
															(BgL_arg4740z00_2124,
															(BgL_copz00_bglt) (BgL_copz00_2992));
													}
											}
										}
										{	/* Cgen/cgen.scm 440 */
											BgL_copz00_bglt BgL_arg4742z00_2126;

											obj_t BgL_arg4743z00_2127;

											{	/* Cgen/cgen.scm 440 */
												BgL_nodez00_bglt BgL_arg4744z00_2128;

												BgL_arg4744z00_2128 =
													(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2111))->
													BgL_falsez00);
												{	/* Cgen/cgen.scm 440 */
													BgL_copz00_bglt BgL_res5108z00_3024;

													{	/* Cgen/cgen.scm 440 */
														obj_t BgL_kontz00_2998;

														BgL_kontz00_2998 = BgL_kontz00_2112;
														{	/* Cgen/cgen.scm 440 */
															obj_t BgL_method4375z00_2999;

															{	/* Cgen/cgen.scm 440 */
																BgL_objectz00_bglt BgL_objz00_3000;

																BgL_objz00_3000 =
																	(BgL_objectz00_bglt) (BgL_arg4744z00_2128);
																{	/* Cgen/cgen.scm 440 */
																	long BgL_objzd2classzd2numz00_3001;

																	BgL_objzd2classzd2numz00_3001 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3000);
																	{	/* Cgen/cgen.scm 440 */
																		obj_t BgL_arg2643z00_3002;

																		BgL_arg2643z00_3002 =
																			PROCEDURE_REF
																			(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																			(int) (((long) 1)));
																		{	/* Cgen/cgen.scm 440 */
																			obj_t BgL_arrayz00_3004;

																			int BgL_offsetz00_3005;

																			BgL_arrayz00_3004 = BgL_arg2643z00_3002;
																			BgL_offsetz00_3005 =
																				(int) (BgL_objzd2classzd2numz00_3001);
																			{	/* Cgen/cgen.scm 440 */
																				long BgL_offsetz00_3006;

																				BgL_offsetz00_3006 =
																					(
																					(long) (BgL_offsetz00_3005) -
																					OBJECT_TYPE);
																				{	/* Cgen/cgen.scm 440 */
																					long BgL_modz00_3007;

																					{	/* Cgen/cgen.scm 440 */
																						int BgL_arg2645z00_3008;

																						BgL_arg2645z00_3008 =
																							(int) (((long) 16));
																						{	/* Cgen/cgen.scm 440 */
																							long BgL_auxz00_5463;

																							BgL_auxz00_5463 =
																								(long) (BgL_arg2645z00_3008);
																							BgL_modz00_3007 =
																								(BgL_offsetz00_3006 /
																								BgL_auxz00_5463);
																					}}
																					{	/* Cgen/cgen.scm 440 */
																						long BgL_restz00_3009;

																						{	/* Cgen/cgen.scm 440 */
																							int BgL_arg2644z00_3010;

																							BgL_arg2644z00_3010 =
																								(int) (((long) 16));
																							{	/* Cgen/cgen.scm 440 */
																								long BgL_auxz00_5467;

																								BgL_auxz00_5467 =
																									(long) (BgL_arg2644z00_3010);
																								BgL_restz00_3009 =
																									(BgL_offsetz00_3006 %
																									BgL_auxz00_5467);
																						}}
																						{	/* Cgen/cgen.scm 440 */

																							BgL_method4375z00_2999 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3004,
																									(int) (BgL_modz00_3007)),
																								(int) (BgL_restz00_3009));
															}}}}}}}}
															BgL_res5108z00_3024 =
																(BgL_copz00_bglt) (PROCEDURE_ENTRY
																(BgL_method4375z00_2999)
																(BgL_method4375z00_2999,
																	(obj_t) (BgL_arg4744z00_2128),
																	BgL_kontz00_2998, BEOA));
													}}
													BgL_arg4742z00_2126 = BgL_res5108z00_3024;
											}}
											{
												BgL_nodez00_bglt BgL_auxz00_5478;

												BgL_auxz00_5478 = (BgL_nodez00_bglt) (BgL_nodez00_2111);
												BgL_arg4743z00_2127 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_5478))->
													BgL_locz00);
											}
											{	/* Cgen/cgen.scm 440 */
												obj_t BgL_copz00_3026;

												BgL_copz00_3026 = (obj_t) (BgL_arg4742z00_2126);
												if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_3026,
														BGl_blockz00zzcgen_copz00))
													{	/* Cgen/cgen.scm 440 */
														BgL_arg4737z00_2122 =
															(BgL_blockz00_bglt) (BgL_copz00_3026);
													}
												else
													{	/* Cgen/cgen.scm 440 */
														BgL_arg4737z00_2122 =
															BGl_makezd2blockzd2zzcgen_copz00
															(BgL_arg4743z00_2127,
															(BgL_copz00_bglt) (BgL_copz00_3026));
													}
											}
										}
										return
											(obj_t) (BGl_makezd2cifzd2zzcgen_copz00
											(BgL_arg4734z00_2119, BgL_arg4735z00_2120,
												(BgL_copz00_bglt) (BgL_arg4736z00_2121),
												(BgL_copz00_bglt) (BgL_arg4737z00_2122)));
									}
								else
									{	/* Cgen/cgen.scm 443 */
										obj_t BgL_arg4745z00_2129;

										BgL_csequencez00_bglt BgL_arg4746z00_2130;

										{
											BgL_nodez00_bglt BgL_auxz00_5491;

											BgL_auxz00_5491 = (BgL_nodez00_bglt) (BgL_nodez00_2111);
											BgL_arg4745z00_2129 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_5491))->
												BgL_locz00);
										}
										{	/* Cgen/cgen.scm 446 */
											obj_t BgL_arg4747z00_2131;

											obj_t BgL_arg4748z00_2132;

											{
												BgL_nodez00_bglt BgL_auxz00_5494;

												BgL_auxz00_5494 = (BgL_nodez00_bglt) (BgL_nodez00_2111);
												BgL_arg4747z00_2131 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_5494))->
													BgL_locz00);
											}
											{	/* Cgen/cgen.scm 451 */
												BgL_localzd2varzd2_bglt BgL_arg4749z00_2133;

												BgL_cifz00_bglt BgL_arg4750z00_2134;

												{	/* Cgen/cgen.scm 451 */
													obj_t BgL_arg4754z00_2138;

													obj_t BgL_arg4755z00_2139;

													{
														BgL_nodez00_bglt BgL_auxz00_5497;

														BgL_auxz00_5497 =
															(BgL_nodez00_bglt) (BgL_nodez00_2111);
														BgL_arg4754z00_2138 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_5497))->
															BgL_locz00);
													}
													{	/* Cgen/cgen.scm 450 */
														obj_t BgL_list4756z00_2140;

														BgL_list4756z00_2140 =
															MAKE_PAIR((obj_t) (BgL_auxz00_2116), BNIL);
														BgL_arg4755z00_2139 = BgL_list4756z00_2140;
													}
													BgL_arg4749z00_2133 =
														BGl_makezd2localzd2varz00zzcgen_copz00
														(BgL_arg4754z00_2138, BgL_arg4755z00_2139);
												}
												{	/* Cgen/cgen.scm 459 */
													obj_t BgL_arg4757z00_2141;

													BgL_varcz00_bglt BgL_arg4758z00_2142;

													BgL_blockz00_bglt BgL_arg4760z00_2143;

													BgL_blockz00_bglt BgL_arg4761z00_2144;

													{
														BgL_nodez00_bglt BgL_auxz00_5503;

														BgL_auxz00_5503 =
															(BgL_nodez00_bglt) (BgL_nodez00_2111);
														BgL_arg4757z00_2141 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_5503))->
															BgL_locz00);
													}
													{	/* Cgen/cgen.scm 456 */
														obj_t BgL_arg4762z00_2145;

														{
															BgL_nodez00_bglt BgL_auxz00_5506;

															BgL_auxz00_5506 =
																(BgL_nodez00_bglt) (BgL_nodez00_2111);
															BgL_arg4762z00_2145 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_5506))->
																BgL_locz00);
														}
														BgL_arg4758z00_2142 =
															BGl_makezd2varczd2zzcgen_copz00
															(BgL_arg4762z00_2145,
															(BgL_variablez00_bglt) (BgL_auxz00_2116));
													}
													{	/* Cgen/cgen.scm 458 */
														BgL_copz00_bglt BgL_arg4763z00_2146;

														obj_t BgL_arg4764z00_2147;

														{	/* Cgen/cgen.scm 458 */
															BgL_nodez00_bglt BgL_arg4765z00_2148;

															BgL_arg4765z00_2148 =
																(((BgL_conditionalz00_bglt)
																	CREF(BgL_nodez00_2111))->BgL_truez00);
															{	/* Cgen/cgen.scm 458 */
																BgL_copz00_bglt BgL_res5112z00_3065;

																{	/* Cgen/cgen.scm 458 */
																	obj_t BgL_kontz00_3039;

																	BgL_kontz00_3039 = BgL_kontz00_2112;
																	{	/* Cgen/cgen.scm 458 */
																		obj_t BgL_method4375z00_3040;

																		{	/* Cgen/cgen.scm 458 */
																			BgL_objectz00_bglt BgL_objz00_3041;

																			BgL_objz00_3041 =
																				(BgL_objectz00_bglt)
																				(BgL_arg4765z00_2148);
																			{	/* Cgen/cgen.scm 458 */
																				long BgL_objzd2classzd2numz00_3042;

																				BgL_objzd2classzd2numz00_3042 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3041);
																				{	/* Cgen/cgen.scm 458 */
																					obj_t BgL_arg2643z00_3043;

																					BgL_arg2643z00_3043 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																						(int) (((long) 1)));
																					{	/* Cgen/cgen.scm 458 */
																						obj_t BgL_arrayz00_3045;

																						int BgL_offsetz00_3046;

																						BgL_arrayz00_3045 =
																							BgL_arg2643z00_3043;
																						BgL_offsetz00_3046 =
																							(int)
																							(BgL_objzd2classzd2numz00_3042);
																						{	/* Cgen/cgen.scm 458 */
																							long BgL_offsetz00_3047;

																							BgL_offsetz00_3047 =
																								(
																								(long) (BgL_offsetz00_3046) -
																								OBJECT_TYPE);
																							{	/* Cgen/cgen.scm 458 */
																								long BgL_modz00_3048;

																								{	/* Cgen/cgen.scm 458 */
																									int BgL_arg2645z00_3049;

																									BgL_arg2645z00_3049 =
																										(int) (((long) 16));
																									{	/* Cgen/cgen.scm 458 */
																										long BgL_auxz00_5520;

																										BgL_auxz00_5520 =
																											(long)
																											(BgL_arg2645z00_3049);
																										BgL_modz00_3048 =
																											(BgL_offsetz00_3047 /
																											BgL_auxz00_5520);
																								}}
																								{	/* Cgen/cgen.scm 458 */
																									long BgL_restz00_3050;

																									{	/* Cgen/cgen.scm 458 */
																										int BgL_arg2644z00_3051;

																										BgL_arg2644z00_3051 =
																											(int) (((long) 16));
																										{	/* Cgen/cgen.scm 458 */
																											long BgL_auxz00_5524;

																											BgL_auxz00_5524 =
																												(long)
																												(BgL_arg2644z00_3051);
																											BgL_restz00_3050 =
																												(BgL_offsetz00_3047 %
																												BgL_auxz00_5524);
																									}}
																									{	/* Cgen/cgen.scm 458 */

																										BgL_method4375z00_3040 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3045,
																												(int)
																												(BgL_modz00_3048)),
																											(int) (BgL_restz00_3050));
																		}}}}}}}}
																		BgL_res5112z00_3065 =
																			(BgL_copz00_bglt) (PROCEDURE_ENTRY
																			(BgL_method4375z00_3040)
																			(BgL_method4375z00_3040,
																				(obj_t) (BgL_arg4765z00_2148),
																				BgL_kontz00_3039, BEOA));
																}}
																BgL_arg4763z00_2146 = BgL_res5112z00_3065;
														}}
														{
															BgL_nodez00_bglt BgL_auxz00_5535;

															BgL_auxz00_5535 =
																(BgL_nodez00_bglt) (BgL_nodez00_2111);
															BgL_arg4764z00_2147 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_5535))->
																BgL_locz00);
														}
														{	/* Cgen/cgen.scm 458 */
															obj_t BgL_copz00_3067;

															BgL_copz00_3067 = (obj_t) (BgL_arg4763z00_2146);
															if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_3067,
																	BGl_blockz00zzcgen_copz00))
																{	/* Cgen/cgen.scm 458 */
																	BgL_arg4760z00_2143 =
																		(BgL_blockz00_bglt) (BgL_copz00_3067);
																}
															else
																{	/* Cgen/cgen.scm 458 */
																	BgL_arg4760z00_2143 =
																		BGl_makezd2blockzd2zzcgen_copz00
																		(BgL_arg4764z00_2147,
																		(BgL_copz00_bglt) (BgL_copz00_3067));
																}
														}
													}
													{	/* Cgen/cgen.scm 457 */
														BgL_copz00_bglt BgL_arg4766z00_2149;

														obj_t BgL_arg4767z00_2150;

														{	/* Cgen/cgen.scm 457 */
															BgL_nodez00_bglt BgL_arg4768z00_2151;

															BgL_arg4768z00_2151 =
																(((BgL_conditionalz00_bglt)
																	CREF(BgL_nodez00_2111))->BgL_falsez00);
															{	/* Cgen/cgen.scm 457 */
																BgL_copz00_bglt BgL_res5115z00_3099;

																{	/* Cgen/cgen.scm 457 */
																	obj_t BgL_kontz00_3073;

																	BgL_kontz00_3073 = BgL_kontz00_2112;
																	{	/* Cgen/cgen.scm 457 */
																		obj_t BgL_method4375z00_3074;

																		{	/* Cgen/cgen.scm 457 */
																			BgL_objectz00_bglt BgL_objz00_3075;

																			BgL_objz00_3075 =
																				(BgL_objectz00_bglt)
																				(BgL_arg4768z00_2151);
																			{	/* Cgen/cgen.scm 457 */
																				long BgL_objzd2classzd2numz00_3076;

																				BgL_objzd2classzd2numz00_3076 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3075);
																				{	/* Cgen/cgen.scm 457 */
																					obj_t BgL_arg2643z00_3077;

																					BgL_arg2643z00_3077 =
																						PROCEDURE_REF
																						(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																						(int) (((long) 1)));
																					{	/* Cgen/cgen.scm 457 */
																						obj_t BgL_arrayz00_3079;

																						int BgL_offsetz00_3080;

																						BgL_arrayz00_3079 =
																							BgL_arg2643z00_3077;
																						BgL_offsetz00_3080 =
																							(int)
																							(BgL_objzd2classzd2numz00_3076);
																						{	/* Cgen/cgen.scm 457 */
																							long BgL_offsetz00_3081;

																							BgL_offsetz00_3081 =
																								(
																								(long) (BgL_offsetz00_3080) -
																								OBJECT_TYPE);
																							{	/* Cgen/cgen.scm 457 */
																								long BgL_modz00_3082;

																								{	/* Cgen/cgen.scm 457 */
																									int BgL_arg2645z00_3083;

																									BgL_arg2645z00_3083 =
																										(int) (((long) 16));
																									{	/* Cgen/cgen.scm 457 */
																										long BgL_auxz00_5553;

																										BgL_auxz00_5553 =
																											(long)
																											(BgL_arg2645z00_3083);
																										BgL_modz00_3082 =
																											(BgL_offsetz00_3081 /
																											BgL_auxz00_5553);
																								}}
																								{	/* Cgen/cgen.scm 457 */
																									long BgL_restz00_3084;

																									{	/* Cgen/cgen.scm 457 */
																										int BgL_arg2644z00_3085;

																										BgL_arg2644z00_3085 =
																											(int) (((long) 16));
																										{	/* Cgen/cgen.scm 457 */
																											long BgL_auxz00_5557;

																											BgL_auxz00_5557 =
																												(long)
																												(BgL_arg2644z00_3085);
																											BgL_restz00_3084 =
																												(BgL_offsetz00_3081 %
																												BgL_auxz00_5557);
																									}}
																									{	/* Cgen/cgen.scm 457 */

																										BgL_method4375z00_3074 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3079,
																												(int)
																												(BgL_modz00_3082)),
																											(int) (BgL_restz00_3084));
																		}}}}}}}}
																		BgL_res5115z00_3099 =
																			(BgL_copz00_bglt) (PROCEDURE_ENTRY
																			(BgL_method4375z00_3074)
																			(BgL_method4375z00_3074,
																				(obj_t) (BgL_arg4768z00_2151),
																				BgL_kontz00_3073, BEOA));
																}}
																BgL_arg4766z00_2149 = BgL_res5115z00_3099;
														}}
														{
															BgL_nodez00_bglt BgL_auxz00_5568;

															BgL_auxz00_5568 =
																(BgL_nodez00_bglt) (BgL_nodez00_2111);
															BgL_arg4767z00_2150 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_5568))->
																BgL_locz00);
														}
														{	/* Cgen/cgen.scm 457 */
															obj_t BgL_copz00_3101;

															BgL_copz00_3101 = (obj_t) (BgL_arg4766z00_2149);
															if (BGl_iszd2azf3z21zz__objectz00(BgL_copz00_3101,
																	BGl_blockz00zzcgen_copz00))
																{	/* Cgen/cgen.scm 457 */
																	BgL_arg4761z00_2144 =
																		(BgL_blockz00_bglt) (BgL_copz00_3101);
																}
															else
																{	/* Cgen/cgen.scm 457 */
																	BgL_arg4761z00_2144 =
																		BGl_makezd2blockzd2zzcgen_copz00
																		(BgL_arg4767z00_2150,
																		(BgL_copz00_bglt) (BgL_copz00_3101));
																}
														}
													}
													BgL_arg4750z00_2134 =
														BGl_makezd2cifzd2zzcgen_copz00(BgL_arg4757z00_2141,
														(BgL_copz00_bglt) (BgL_arg4758z00_2142),
														(BgL_copz00_bglt) (BgL_arg4760z00_2143),
														(BgL_copz00_bglt) (BgL_arg4761z00_2144));
												}
												{	/* Cgen/cgen.scm 447 */
													obj_t BgL_list4751z00_2135;

													{	/* Cgen/cgen.scm 447 */
														obj_t BgL_arg4752z00_2136;

														{	/* Cgen/cgen.scm 447 */
															obj_t BgL_arg4753z00_2137;

															BgL_arg4753z00_2137 =
																MAKE_PAIR((obj_t) (BgL_arg4750z00_2134), BNIL);
															BgL_arg4752z00_2136 =
																MAKE_PAIR(
																(obj_t) (BgL_ctestz00_2117),
																BgL_arg4753z00_2137);
														}
														BgL_list4751z00_2135 =
															MAKE_PAIR(
															(obj_t) (BgL_arg4749z00_2133),
															BgL_arg4752z00_2136);
													}
													BgL_arg4748z00_2132 = BgL_list4751z00_2135;
												}
											}
											BgL_arg4746z00_2130 =
												BGl_makezd2csequencezd2zzcgen_copz00
												(BgL_arg4747z00_2131, ((bool_t) 0),
												BgL_arg4748z00_2132);
										}
										return
											(obj_t) (BGl_makezd2blockzd2zzcgen_copz00
											(BgL_arg4745z00_2129,
												(BgL_copz00_bglt) (BgL_arg4746z00_2130)));
									}
							}
						}
					}
				}
			}
		}
	}



/* node->cop-setq4403 */
	obj_t BGl_nodezd2ze3copzd2setq4403ze3zzcgen_cgenz00(obj_t BgL_envz00_3827,
		obj_t BgL_nodez00_3828, obj_t BgL_kontz00_3829)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 413 */
			{
				BgL_setqz00_bglt BgL_nodez00_2091;

				obj_t BgL_kontz00_2092;

				BgL_nodez00_2091 = (BgL_setqz00_bglt) (BgL_nodez00_3828);
				BgL_kontz00_2092 = BgL_kontz00_3829;
				{	/* Cgen/cgen.scm 418 */
					BgL_variablez00_bglt BgL_varz00_2096;

					{	/* Cgen/cgen.scm 418 */
						BgL_varz00_bglt BgL_obj2472z00_2891;

						BgL_obj2472z00_2891 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_2091))->BgL_varz00);
						BgL_varz00_2096 =
							(((BgL_varz00_bglt) CREF(BgL_obj2472z00_2891))->BgL_variablez00);
					}
					{	/* Cgen/cgen.scm 419 */
						bool_t BgL_testz00_5594;

						{	/* Cgen/cgen.scm 419 */
							bool_t BgL_testz00_5595;

							{	/* Cgen/cgen.scm 419 */
								BgL_nodez00_bglt BgL_arg4730z00_2107;

								BgL_arg4730z00_2107 =
									(((BgL_setqz00_bglt) CREF(BgL_nodez00_2091))->BgL_valuez00);
								{	/* Cgen/cgen.scm 419 */
									obj_t BgL_obj2487z00_2893;

									BgL_obj2487z00_2893 = (obj_t) (BgL_arg4730z00_2107);
									BgL_testz00_5595 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2487z00_2893,
										BGl_varz00zzast_nodez00);
								}
							}
							if (BgL_testz00_5595)
								{	/* Cgen/cgen.scm 419 */
									obj_t BgL_auxz00_5599;

									{	/* Cgen/cgen.scm 419 */
										BgL_variablez00_bglt BgL_auxz00_5601;

										{	/* Cgen/cgen.scm 419 */
											BgL_varz00_bglt BgL_obj2472z00_2895;

											BgL_obj2472z00_2895 =
												(BgL_varz00_bglt) (
												(((BgL_setqz00_bglt) CREF(BgL_nodez00_2091))->
													BgL_valuez00));
											BgL_auxz00_5601 =
												(((BgL_varz00_bglt) CREF(BgL_obj2472z00_2895))->
												BgL_variablez00);
										}
										BgL_auxz00_5599 = (obj_t) (BgL_auxz00_5601);
									}
									BgL_testz00_5594 =
										((obj_t) (BgL_varz00_2096) == BgL_auxz00_5599);
								}
							else
								{	/* Cgen/cgen.scm 419 */
									BgL_testz00_5594 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_5594)
							{	/* Cgen/cgen.scm 421 */
								BgL_cvoidz00_bglt BgL_arg4721z00_2098;

								{	/* Cgen/cgen.scm 421 */
									BgL_catomz00_bglt BgL_arg4722z00_2099;

									{	/* Cgen/cgen.scm 421 */
										obj_t BgL_arg4723z00_2100;

										{
											BgL_nodez00_bglt BgL_auxz00_5607;

											BgL_auxz00_5607 = (BgL_nodez00_bglt) (BgL_nodez00_2091);
											BgL_arg4723z00_2100 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_5607))->
												BgL_locz00);
										}
										BgL_arg4722z00_2099 =
											BGl_makezd2catomzd2zzcgen_copz00(BgL_arg4723z00_2100,
											BUNSPEC);
									}
									BgL_arg4721z00_2098 =
										BGl_makezd2cvoidzd2zzcgen_copz00(BFALSE,
										(BgL_copz00_bglt) (BgL_arg4722z00_2099));
								}
								return
									PROCEDURE_ENTRY(BgL_kontz00_2092) (BgL_kontz00_2092,
									(obj_t) (BgL_arg4721z00_2098), BEOA);
							}
						else
							{	/* Cgen/cgen.scm 423 */
								BgL_nodez00_bglt BgL_arg4724z00_2101;

								obj_t BgL_arg4725z00_2102;

								BgL_arg4724z00_2101 =
									(((BgL_setqz00_bglt) CREF(BgL_nodez00_2091))->BgL_valuez00);
								{	/* Cgen/cgen.scm 423 */
									obj_t BgL_arg4726z00_2103;

									{
										BgL_nodez00_bglt BgL_auxz00_5617;

										BgL_auxz00_5617 = (BgL_nodez00_bglt) (BgL_nodez00_2091);
										BgL_arg4726z00_2103 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_5617))->BgL_locz00);
									}
									BgL_arg4725z00_2102 =
										BGl_makezd2setqzd2kontz00zzcgen_cgenz00(BgL_varz00_2096,
										BgL_arg4726z00_2103, BgL_kontz00_2092);
								}
								{	/* Cgen/cgen.scm 423 */
									BgL_copz00_bglt BgL_res5099z00_2927;

									{	/* Cgen/cgen.scm 423 */
										obj_t BgL_method4375z00_2902;

										{	/* Cgen/cgen.scm 423 */
											BgL_objectz00_bglt BgL_objz00_2903;

											BgL_objz00_2903 =
												(BgL_objectz00_bglt) (BgL_arg4724z00_2101);
											{	/* Cgen/cgen.scm 423 */
												long BgL_objzd2classzd2numz00_2904;

												BgL_objzd2classzd2numz00_2904 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2903);
												{	/* Cgen/cgen.scm 423 */
													obj_t BgL_arg2643z00_2905;

													BgL_arg2643z00_2905 =
														PROCEDURE_REF
														(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
														(int) (((long) 1)));
													{	/* Cgen/cgen.scm 423 */
														obj_t BgL_arrayz00_2907;

														int BgL_offsetz00_2908;

														BgL_arrayz00_2907 = BgL_arg2643z00_2905;
														BgL_offsetz00_2908 =
															(int) (BgL_objzd2classzd2numz00_2904);
														{	/* Cgen/cgen.scm 423 */
															long BgL_offsetz00_2909;

															BgL_offsetz00_2909 =
																((long) (BgL_offsetz00_2908) - OBJECT_TYPE);
															{	/* Cgen/cgen.scm 423 */
																long BgL_modz00_2910;

																{	/* Cgen/cgen.scm 423 */
																	int BgL_arg2645z00_2911;

																	BgL_arg2645z00_2911 = (int) (((long) 16));
																	{	/* Cgen/cgen.scm 423 */
																		long BgL_auxz00_5629;

																		BgL_auxz00_5629 =
																			(long) (BgL_arg2645z00_2911);
																		BgL_modz00_2910 =
																			(BgL_offsetz00_2909 / BgL_auxz00_5629);
																}}
																{	/* Cgen/cgen.scm 423 */
																	long BgL_restz00_2912;

																	{	/* Cgen/cgen.scm 423 */
																		int BgL_arg2644z00_2913;

																		BgL_arg2644z00_2913 = (int) (((long) 16));
																		{	/* Cgen/cgen.scm 423 */
																			long BgL_auxz00_5633;

																			BgL_auxz00_5633 =
																				(long) (BgL_arg2644z00_2913);
																			BgL_restz00_2912 =
																				(BgL_offsetz00_2909 % BgL_auxz00_5633);
																	}}
																	{	/* Cgen/cgen.scm 423 */

																		BgL_method4375z00_2902 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2907,
																				(int) (BgL_modz00_2910)),
																			(int) (BgL_restz00_2912));
										}}}}}}}}
										BgL_res5099z00_2927 =
											(BgL_copz00_bglt) (PROCEDURE_ENTRY(BgL_method4375z00_2902)
											(BgL_method4375z00_2902, (obj_t) (BgL_arg4724z00_2101),
												BgL_arg4725z00_2102, BEOA));
									}
									return (obj_t) (BgL_res5099z00_2927);
								}
							}
					}
				}
			}
		}
	}



/* node->cop-cast4401 */
	obj_t BGl_nodezd2ze3copzd2cast4401ze3zzcgen_cgenz00(obj_t BgL_envz00_3830,
		obj_t BgL_nodez00_3831, obj_t BgL_kontz00_3832)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 396 */
			{
				BgL_castz00_bglt BgL_nodez00_2072;

				obj_t BgL_kontz00_2073;

				BgL_nodez00_2072 = (BgL_castz00_bglt) (BgL_nodez00_3831);
				BgL_kontz00_2073 = BgL_kontz00_3832;
				{	/* Cgen/cgen.scm 401 */
					obj_t BgL_arg4708z00_2077;

					obj_t BgL_arg4710z00_2078;

					{	/* Cgen/cgen.scm 401 */
						BgL_nodez00_bglt BgL_arg4712z00_2080;

						BgL_arg4712z00_2080 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_2072))->BgL_argz00);
						{	/* Cgen/cgen.scm 401 */
							obj_t BgL_list4713z00_2081;

							BgL_list4713z00_2081 =
								MAKE_PAIR((obj_t) (BgL_arg4712z00_2080), BNIL);
							BgL_arg4708z00_2077 = BgL_list4713z00_2081;
						}
					}
					{
						BgL_nodez00_bglt BgL_auxz00_5649;

						BgL_auxz00_5649 = (BgL_nodez00_bglt) (BgL_nodez00_2072);
						BgL_arg4710z00_2078 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_5649))->BgL_locz00);
					}
					{	/* Cgen/cgen.scm 407 */
						obj_t BgL_zc3anonymousza34714ze3z83_3768;

						{
							int BgL_auxz00_5652;

							BgL_auxz00_5652 = (int) (((long) 2));
							BgL_zc3anonymousza34714ze3z83_3768 =
								MAKE_L_PROCEDURE(BGl_zc3anonymousza34714ze3z83zzcgen_cgenz00,
								BgL_auxz00_5652);
						}
						PROCEDURE_L_SET(BgL_zc3anonymousza34714ze3z83_3768,
							(int) (((long) 0)), (obj_t) (BgL_nodez00_2072));
						PROCEDURE_L_SET(BgL_zc3anonymousza34714ze3z83_3768,
							(int) (((long) 1)), BgL_kontz00_2073);
						return
							BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(BgL_arg4708z00_2077,
							((bool_t) 1), BgL_arg4710z00_2078,
							BgL_zc3anonymousza34714ze3z83_3768);
					}
				}
			}
		}
	}



/* <anonymous:4714> */
	obj_t BGl_zc3anonymousza34714ze3z83zzcgen_cgenz00(obj_t BgL_envz00_3833,
		obj_t BgL_newzd2argszd2_3836)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 404 */
			{	/* Cgen/cgen.scm 407 */
				obj_t BgL_instance4258z00_3834;

				obj_t BgL_kontz00_3835;

				BgL_instance4258z00_3834 =
					PROCEDURE_L_REF(BgL_envz00_3833, (int) (((long) 0)));
				BgL_kontz00_3835 = PROCEDURE_L_REF(BgL_envz00_3833, (int) (((long) 1)));
				{
					obj_t BgL_newzd2argszd2_2082;

					BgL_newzd2argszd2_2082 = BgL_newzd2argszd2_3836;
					{	/* Cgen/cgen.scm 407 */
						BgL_ccastz00_bglt BgL_arg4715z00_2084;

						{	/* Cgen/cgen.scm 407 */
							obj_t BgL_arg4716z00_2085;

							BgL_typez00_bglt BgL_arg4717z00_2086;

							obj_t BgL_arg4718z00_2087;

							{
								BgL_nodez00_bglt BgL_auxz00_5666;

								BgL_auxz00_5666 = (BgL_nodez00_bglt) (BgL_instance4258z00_3834);
								BgL_arg4716z00_2085 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5666))->BgL_locz00);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_5669;

								BgL_auxz00_5669 = (BgL_nodez00_bglt) (BgL_instance4258z00_3834);
								BgL_arg4717z00_2086 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5669))->BgL_typez00);
							}
							BgL_arg4718z00_2087 = CAR(BgL_newzd2argszd2_2082);
							BgL_arg4715z00_2084 =
								BGl_makezd2ccastzd2zzcgen_copz00(BgL_arg4716z00_2085,
								BgL_arg4717z00_2086, (BgL_copz00_bglt) (BgL_arg4718z00_2087));
						}
						return
							PROCEDURE_ENTRY(BgL_kontz00_3835) (BgL_kontz00_3835,
							(obj_t) (BgL_arg4715z00_2084), BEOA);
					}
				}
			}
		}
	}



/* node->cop-valloc4399 */
	obj_t BGl_nodezd2ze3copzd2valloc4399ze3zzcgen_cgenz00(obj_t BgL_envz00_3837,
		obj_t BgL_nodez00_3838, obj_t BgL_kontz00_3839)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 386 */
			{
				BgL_vallocz00_bglt BgL_nodez00_2064;

				obj_t BgL_kontz00_2065;

				BgL_nodez00_2064 = (BgL_vallocz00_bglt) (BgL_nodez00_3838);
				BgL_kontz00_2065 = BgL_kontz00_3839;
				{	/* Cgen/cgen.scm 387 */
					obj_t BgL_arg4706z00_2881;

					BgL_arg4706z00_2881 =
						(((BgL_vallocz00_bglt) CREF(BgL_nodez00_2064))->
						BgL_czd2heapzd2formatz00);
					return BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg4706z00_2881,
						((bool_t) 1), (BgL_externz00_bglt) (BgL_nodez00_2064),
						BgL_kontz00_2065);
				}
			}
		}
	}



/* node->cop-vset!4397 */
	obj_t BGl_nodezd2ze3copzd2vsetz124397zf1zzcgen_cgenz00(obj_t BgL_envz00_3840,
		obj_t BgL_nodez00_3841, obj_t BgL_kontz00_3842)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 376 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_2056;

				obj_t BgL_kontz00_2057;

				BgL_nodez00_2056 = (BgL_vsetz12z12_bglt) (BgL_nodez00_3841);
				BgL_kontz00_2057 = BgL_kontz00_3842;
				{	/* Cgen/cgen.scm 377 */
					obj_t BgL_arg4704z00_2878;

					BgL_arg4704z00_2878 =
						(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_2056))->BgL_czd2formatzd2);
					return
						BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg4704z00_2878,
						((bool_t) 1), (BgL_externz00_bglt) (BgL_nodez00_2056),
						BgL_kontz00_2057);
				}
			}
		}
	}



/* node->cop-vref4395 */
	obj_t BGl_nodezd2ze3copzd2vref4395ze3zzcgen_cgenz00(obj_t BgL_envz00_3843,
		obj_t BgL_nodez00_3844, obj_t BgL_kontz00_3845)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 366 */
			{
				BgL_vrefz00_bglt BgL_nodez00_2048;

				obj_t BgL_kontz00_2049;

				BgL_nodez00_2048 = (BgL_vrefz00_bglt) (BgL_nodez00_3844);
				BgL_kontz00_2049 = BgL_kontz00_3845;
				{	/* Cgen/cgen.scm 367 */
					obj_t BgL_arg4702z00_2875;

					BgL_arg4702z00_2875 =
						(((BgL_vrefz00_bglt) CREF(BgL_nodez00_2048))->BgL_czd2formatzd2);
					return
						BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg4702z00_2875,
						((bool_t) 1), (BgL_externz00_bglt) (BgL_nodez00_2048),
						BgL_kontz00_2049);
				}
			}
		}
	}



/* node->cop-vlength4393 */
	obj_t BGl_nodezd2ze3copzd2vlength4393ze3zzcgen_cgenz00(obj_t BgL_envz00_3846,
		obj_t BgL_nodez00_3847, obj_t BgL_kontz00_3848)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 356 */
			{
				BgL_vlengthz00_bglt BgL_nodez00_2040;

				obj_t BgL_kontz00_2041;

				BgL_nodez00_2040 = (BgL_vlengthz00_bglt) (BgL_nodez00_3847);
				BgL_kontz00_2041 = BgL_kontz00_3848;
				{	/* Cgen/cgen.scm 357 */
					obj_t BgL_arg4700z00_2872;

					BgL_arg4700z00_2872 =
						(((BgL_vlengthz00_bglt) CREF(BgL_nodez00_2040))->BgL_czd2formatzd2);
					return
						BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg4700z00_2872,
						((bool_t) 1), (BgL_externz00_bglt) (BgL_nodez00_2040),
						BgL_kontz00_2041);
				}
			}
		}
	}



/* node->cop-setfield4391 */
	obj_t BGl_nodezd2ze3copzd2setfield4391ze3zzcgen_cgenz00(obj_t BgL_envz00_3849,
		obj_t BgL_nodez00_3850, obj_t BgL_kontz00_3851)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 343 */
			{
				BgL_setfieldz00_bglt BgL_nodez00_2016;

				obj_t BgL_kontz00_2017;

				BgL_nodez00_2016 = (BgL_setfieldz00_bglt) (BgL_nodez00_3850);
				BgL_kontz00_2017 = BgL_kontz00_3851;
				{	/* Cgen/cgen.scm 348 */
					obj_t BgL_fmtz00_2021;

					{	/* Cgen/cgen.scm 348 */
						obj_t BgL_arg4683z00_2023;

						obj_t BgL_arg4685z00_2025;

						obj_t BgL_arg4687z00_2027;

						{	/* Cgen/cgen.scm 348 */
							BgL_typez00_bglt BgL_obj1509z00_2867;

							BgL_obj1509z00_2867 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_2016))->BgL_otypez00);
							BgL_arg4683z00_2023 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_2867))->BgL_namez00);
						}
						BgL_arg4685z00_2025 =
							(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_2016))->BgL_fnamez00);
						{	/* Cgen/cgen.scm 349 */
							BgL_typez00_bglt BgL_obj1509z00_2870;

							BgL_obj1509z00_2870 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_2016))->BgL_ftypez00);
							BgL_arg4687z00_2027 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_2870))->BgL_namez00);
						}
						{	/* Cgen/cgen.scm 348 */
							obj_t BgL_list4689z00_2029;

							{	/* Cgen/cgen.scm 348 */
								obj_t BgL_arg4690z00_2030;

								{	/* Cgen/cgen.scm 348 */
									obj_t BgL_arg4691z00_2031;

									{	/* Cgen/cgen.scm 348 */
										obj_t BgL_arg4692z00_2032;

										{	/* Cgen/cgen.scm 348 */
											obj_t BgL_arg4693z00_2033;

											{	/* Cgen/cgen.scm 348 */
												obj_t BgL_arg4694z00_2034;

												{	/* Cgen/cgen.scm 348 */
													obj_t BgL_arg4695z00_2035;

													BgL_arg4695z00_2035 =
														MAKE_PAIR(BGl_string5222z00zzcgen_cgenz00, BNIL);
													BgL_arg4694z00_2034 =
														MAKE_PAIR(BgL_arg4687z00_2027, BgL_arg4695z00_2035);
												}
												BgL_arg4693z00_2033 =
													MAKE_PAIR(BGl_string5223z00zzcgen_cgenz00,
													BgL_arg4694z00_2034);
											}
											BgL_arg4692z00_2032 =
												MAKE_PAIR(BgL_arg4685z00_2025, BgL_arg4693z00_2033);
										}
										BgL_arg4691z00_2031 =
											MAKE_PAIR(BGl_string5224z00zzcgen_cgenz00,
											BgL_arg4692z00_2032);
									}
									BgL_arg4690z00_2030 =
										MAKE_PAIR(BgL_arg4683z00_2023, BgL_arg4691z00_2031);
								}
								BgL_list4689z00_2029 =
									MAKE_PAIR(BGl_string5225z00zzcgen_cgenz00,
									BgL_arg4690z00_2030);
							}
							BgL_fmtz00_2021 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list4689z00_2029);
						}
					}
					return
						BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_fmtz00_2021, ((bool_t) 1),
						(BgL_externz00_bglt) (BgL_nodez00_2016), BgL_kontz00_2017);
				}
			}
		}
	}



/* node->cop-getfield4389 */
	obj_t BGl_nodezd2ze3copzd2getfield4389ze3zzcgen_cgenz00(obj_t BgL_envz00_3852,
		obj_t BgL_nodez00_3853, obj_t BgL_kontz00_3854)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 331 */
			{
				BgL_getfieldz00_bglt BgL_nodez00_1997;

				obj_t BgL_kontz00_1998;

				BgL_nodez00_1997 = (BgL_getfieldz00_bglt) (BgL_nodez00_3853);
				BgL_kontz00_1998 = BgL_kontz00_3854;
				{	/* Cgen/cgen.scm 336 */
					obj_t BgL_fmtz00_2002;

					{	/* Cgen/cgen.scm 336 */
						obj_t BgL_arg4671z00_2004;

						obj_t BgL_arg4673z00_2006;

						{	/* Cgen/cgen.scm 336 */
							BgL_typez00_bglt BgL_obj1509z00_2864;

							BgL_obj1509z00_2864 =
								(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1997))->BgL_otypez00);
							BgL_arg4671z00_2004 =
								(((BgL_typez00_bglt) CREF(BgL_obj1509z00_2864))->BgL_namez00);
						}
						BgL_arg4673z00_2006 =
							(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1997))->BgL_fnamez00);
						{	/* Cgen/cgen.scm 336 */
							obj_t BgL_list4675z00_2008;

							{	/* Cgen/cgen.scm 336 */
								obj_t BgL_arg4676z00_2009;

								{	/* Cgen/cgen.scm 336 */
									obj_t BgL_arg4677z00_2010;

									{	/* Cgen/cgen.scm 336 */
										obj_t BgL_arg4678z00_2011;

										{	/* Cgen/cgen.scm 336 */
											obj_t BgL_arg4679z00_2012;

											BgL_arg4679z00_2012 =
												MAKE_PAIR(BGl_string5189z00zzcgen_cgenz00, BNIL);
											BgL_arg4678z00_2011 =
												MAKE_PAIR(BgL_arg4673z00_2006, BgL_arg4679z00_2012);
										}
										BgL_arg4677z00_2010 =
											MAKE_PAIR(BGl_string5224z00zzcgen_cgenz00,
											BgL_arg4678z00_2011);
									}
									BgL_arg4676z00_2009 =
										MAKE_PAIR(BgL_arg4671z00_2004, BgL_arg4677z00_2010);
								}
								BgL_list4675z00_2008 =
									MAKE_PAIR(BGl_string5226z00zzcgen_cgenz00,
									BgL_arg4676z00_2009);
							}
							BgL_fmtz00_2002 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list4675z00_2008);
						}
					}
					return
						BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_fmtz00_2002, ((bool_t) 1),
						(BgL_externz00_bglt) (BgL_nodez00_1997), BgL_kontz00_1998);
				}
			}
		}
	}



/* node->cop-pragma4387 */
	obj_t BGl_nodezd2ze3copzd2pragma4387ze3zzcgen_cgenz00(obj_t BgL_envz00_3855,
		obj_t BgL_nodez00_3856, obj_t BgL_kontz00_3857)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 321 */
			{
				BgL_pragmaz00_bglt BgL_nodez00_1989;

				obj_t BgL_kontz00_1990;

				BgL_nodez00_1989 = (BgL_pragmaz00_bglt) (BgL_nodez00_3856);
				BgL_kontz00_1990 = BgL_kontz00_3857;
				{	/* Cgen/cgen.scm 325 */
					obj_t BgL_arg4668z00_2861;

					BgL_arg4668z00_2861 =
						(((BgL_pragmaz00_bglt) CREF(BgL_nodez00_1989))->BgL_formatz00);
					return
						BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg4668z00_2861,
						((bool_t) 0), (BgL_externz00_bglt) (BgL_nodez00_1989),
						BgL_kontz00_1990);
				}
			}
		}
	}



/* node->cop-sequence4385 */
	obj_t BGl_nodezd2ze3copzd2sequence4385ze3zzcgen_cgenz00(obj_t BgL_envz00_3858,
		obj_t BgL_nodez00_3859, obj_t BgL_kontz00_3860)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 273 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1954;

				obj_t BgL_kontz00_1955;

				BgL_nodez00_1954 = (BgL_sequencez00_bglt) (BgL_nodez00_3859);
				BgL_kontz00_1955 = BgL_kontz00_3860;
				{	/* Cgen/cgen.scm 278 */
					obj_t BgL_expz00_1959;

					BgL_expz00_1959 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1954))->BgL_nodesz00);
					if (NULLP(BgL_expz00_1959))
						{	/* Cgen/cgen.scm 282 */
							BgL_nopz00_bglt BgL_arg4648z00_1961;

							{	/* Cgen/cgen.scm 282 */
								obj_t BgL_arg4649z00_1962;

								{
									BgL_nodez00_bglt BgL_auxz00_5729;

									BgL_auxz00_5729 = (BgL_nodez00_bglt) (BgL_nodez00_1954);
									BgL_arg4649z00_1962 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_5729))->BgL_locz00);
								}
								BgL_arg4648z00_1961 =
									BGl_makezd2nopzd2zzcgen_copz00(BgL_arg4649z00_1962);
							}
							return
								PROCEDURE_ENTRY(BgL_kontz00_1955) (BgL_kontz00_1955,
								(obj_t) (BgL_arg4648z00_1961), BEOA);
						}
					else
						{	/* Cgen/cgen.scm 280 */
							if (NULLP(CDR(BgL_expz00_1959)))
								{	/* Cgen/cgen.scm 284 */
									BgL_copz00_bglt BgL_copz00_1964;

									{	/* Cgen/cgen.scm 284 */
										obj_t BgL_arg4651z00_1965;

										BgL_arg4651z00_1965 = CAR(BgL_expz00_1959);
										{	/* Cgen/cgen.scm 284 */
											BgL_copz00_bglt BgL_res5089z00_2795;

											{	/* Cgen/cgen.scm 284 */
												BgL_nodez00_bglt BgL_nodez00_2768;

												obj_t BgL_kontz00_2769;

												BgL_nodez00_2768 =
													(BgL_nodez00_bglt) (BgL_arg4651z00_1965);
												BgL_kontz00_2769 = BgL_kontz00_1955;
												{	/* Cgen/cgen.scm 284 */
													obj_t BgL_method4375z00_2770;

													{	/* Cgen/cgen.scm 284 */
														BgL_objectz00_bglt BgL_objz00_2771;

														BgL_objz00_2771 =
															(BgL_objectz00_bglt) (BgL_nodez00_2768);
														{	/* Cgen/cgen.scm 284 */
															long BgL_objzd2classzd2numz00_2772;

															BgL_objzd2classzd2numz00_2772 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2771);
															{	/* Cgen/cgen.scm 284 */
																obj_t BgL_arg2643z00_2773;

																BgL_arg2643z00_2773 =
																	PROCEDURE_REF
																	(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																	(int) (((long) 1)));
																{	/* Cgen/cgen.scm 284 */
																	obj_t BgL_arrayz00_2775;

																	int BgL_offsetz00_2776;

																	BgL_arrayz00_2775 = BgL_arg2643z00_2773;
																	BgL_offsetz00_2776 =
																		(int) (BgL_objzd2classzd2numz00_2772);
																	{	/* Cgen/cgen.scm 284 */
																		long BgL_offsetz00_2777;

																		BgL_offsetz00_2777 =
																			(
																			(long) (BgL_offsetz00_2776) -
																			OBJECT_TYPE);
																		{	/* Cgen/cgen.scm 284 */
																			long BgL_modz00_2778;

																			{	/* Cgen/cgen.scm 284 */
																				int BgL_arg2645z00_2779;

																				BgL_arg2645z00_2779 =
																					(int) (((long) 16));
																				{	/* Cgen/cgen.scm 284 */
																					long BgL_auxz00_5749;

																					BgL_auxz00_5749 =
																						(long) (BgL_arg2645z00_2779);
																					BgL_modz00_2778 =
																						(BgL_offsetz00_2777 /
																						BgL_auxz00_5749);
																			}}
																			{	/* Cgen/cgen.scm 284 */
																				long BgL_restz00_2780;

																				{	/* Cgen/cgen.scm 284 */
																					int BgL_arg2644z00_2781;

																					BgL_arg2644z00_2781 =
																						(int) (((long) 16));
																					{	/* Cgen/cgen.scm 284 */
																						long BgL_auxz00_5753;

																						BgL_auxz00_5753 =
																							(long) (BgL_arg2644z00_2781);
																						BgL_restz00_2780 =
																							(BgL_offsetz00_2777 %
																							BgL_auxz00_5753);
																				}}
																				{	/* Cgen/cgen.scm 284 */

																					BgL_method4375z00_2770 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2775,
																							(int) (BgL_modz00_2778)),
																						(int) (BgL_restz00_2780));
													}}}}}}}}
													BgL_res5089z00_2795 =
														(BgL_copz00_bglt) (PROCEDURE_ENTRY
														(BgL_method4375z00_2770) (BgL_method4375z00_2770,
															(obj_t) (BgL_nodez00_2768), BgL_kontz00_2769,
															BEOA));
											}}
											BgL_copz00_1964 = BgL_res5089z00_2795;
									}}
									return
										(obj_t) (BGl_makezd2stopzd2zzcgen_copz00(BFALSE,
											BgL_copz00_1964));
								}
							else
								{
									obj_t BgL_expz00_1968;

									obj_t BgL_newz00_1969;

									{	/* Cgen/cgen.scm 287 */
										BgL_csequencez00_bglt BgL_auxz00_5766;

										BgL_expz00_1968 = BgL_expz00_1959;
										BgL_newz00_1969 = BNIL;
									BgL_zc3anonymousza34652ze3z83_1970:
										if (NULLP(CDR(BgL_expz00_1968)))
											{	/* Cgen/cgen.scm 290 */
												BgL_copz00_bglt BgL_copz00_1972;

												{	/* Cgen/cgen.scm 290 */
													obj_t BgL_arg4657z00_1976;

													BgL_arg4657z00_1976 = CAR(BgL_expz00_1968);
													{	/* Cgen/cgen.scm 290 */
														BgL_copz00_bglt BgL_res5092z00_2826;

														{	/* Cgen/cgen.scm 290 */
															BgL_nodez00_bglt BgL_nodez00_2799;

															obj_t BgL_kontz00_2800;

															BgL_nodez00_2799 =
																(BgL_nodez00_bglt) (BgL_arg4657z00_1976);
															BgL_kontz00_2800 = BgL_kontz00_1955;
															{	/* Cgen/cgen.scm 290 */
																obj_t BgL_method4375z00_2801;

																{	/* Cgen/cgen.scm 290 */
																	BgL_objectz00_bglt BgL_objz00_2802;

																	BgL_objz00_2802 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2799);
																	{	/* Cgen/cgen.scm 290 */
																		long BgL_objzd2classzd2numz00_2803;

																		BgL_objzd2classzd2numz00_2803 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2802);
																		{	/* Cgen/cgen.scm 290 */
																			obj_t BgL_arg2643z00_2804;

																			BgL_arg2643z00_2804 =
																				PROCEDURE_REF
																				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																				(int) (((long) 1)));
																			{	/* Cgen/cgen.scm 290 */
																				obj_t BgL_arrayz00_2806;

																				int BgL_offsetz00_2807;

																				BgL_arrayz00_2806 = BgL_arg2643z00_2804;
																				BgL_offsetz00_2807 =
																					(int) (BgL_objzd2classzd2numz00_2803);
																				{	/* Cgen/cgen.scm 290 */
																					long BgL_offsetz00_2808;

																					BgL_offsetz00_2808 =
																						(
																						(long) (BgL_offsetz00_2807) -
																						OBJECT_TYPE);
																					{	/* Cgen/cgen.scm 290 */
																						long BgL_modz00_2809;

																						{	/* Cgen/cgen.scm 290 */
																							int BgL_arg2645z00_2810;

																							BgL_arg2645z00_2810 =
																								(int) (((long) 16));
																							{	/* Cgen/cgen.scm 290 */
																								long BgL_auxz00_5780;

																								BgL_auxz00_5780 =
																									(long) (BgL_arg2645z00_2810);
																								BgL_modz00_2809 =
																									(BgL_offsetz00_2808 /
																									BgL_auxz00_5780);
																						}}
																						{	/* Cgen/cgen.scm 290 */
																							long BgL_restz00_2811;

																							{	/* Cgen/cgen.scm 290 */
																								int BgL_arg2644z00_2812;

																								BgL_arg2644z00_2812 =
																									(int) (((long) 16));
																								{	/* Cgen/cgen.scm 290 */
																									long BgL_auxz00_5784;

																									BgL_auxz00_5784 =
																										(long)
																										(BgL_arg2644z00_2812);
																									BgL_restz00_2811 =
																										(BgL_offsetz00_2808 %
																										BgL_auxz00_5784);
																							}}
																							{	/* Cgen/cgen.scm 290 */

																								BgL_method4375z00_2801 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2806,
																										(int) (BgL_modz00_2809)),
																									(int) (BgL_restz00_2811));
																}}}}}}}}
																BgL_res5092z00_2826 =
																	(BgL_copz00_bglt) (PROCEDURE_ENTRY
																	(BgL_method4375z00_2801)
																	(BgL_method4375z00_2801,
																		(obj_t) (BgL_nodez00_2799),
																		BgL_kontz00_2800, BEOA));
														}}
														BgL_copz00_1972 = BgL_res5092z00_2826;
												}}
												{	/* Cgen/cgen.scm 292 */
													obj_t BgL_arg4654z00_1973;

													obj_t BgL_arg4655z00_1974;

													BgL_arg4654z00_1973 =
														(((BgL_copz00_bglt) CREF(BgL_copz00_1972))->
														BgL_locz00);
													{	/* Cgen/cgen.scm 293 */
														obj_t BgL_arg4656z00_1975;

														BgL_arg4656z00_1975 =
															MAKE_PAIR(
															(obj_t) (BgL_copz00_1972), BgL_newz00_1969);
														BgL_arg4655z00_1974 =
															bgl_reverse_bang(BgL_arg4656z00_1975);
													}
													BgL_auxz00_5766 =
														BGl_makezd2csequencezd2zzcgen_copz00
														(BgL_arg4654z00_1973, ((bool_t) 0),
														BgL_arg4655z00_1974);
											}}
										else
											{	/* Cgen/cgen.scm 295 */
												bool_t BgL_testz00_5800;

												{	/* Cgen/cgen.scm 295 */
													obj_t BgL_arg4664z00_1983;

													BgL_arg4664z00_1983 = CAR(BgL_expz00_1968);
													BgL_testz00_5800 =
														BGl_sidezd2effectzf3z21zzeffect_effectz00(
														(BgL_nodez00_bglt) (BgL_arg4664z00_1983));
												}
												if (BgL_testz00_5800)
													{	/* Cgen/cgen.scm 297 */
														obj_t BgL_arg4659z00_1978;

														obj_t BgL_arg4660z00_1979;

														BgL_arg4659z00_1978 = CDR(BgL_expz00_1968);
														{	/* Cgen/cgen.scm 298 */
															BgL_copz00_bglt BgL_arg4661z00_1980;

															{	/* Cgen/cgen.scm 298 */
																obj_t BgL_arg4662z00_1981;

																BgL_arg4662z00_1981 = CAR(BgL_expz00_1968);
																{	/* Cgen/cgen.scm 298 */
																	BgL_copz00_bglt BgL_res5095z00_2858;

																	{	/* Cgen/cgen.scm 298 */
																		BgL_nodez00_bglt BgL_nodez00_2831;

																		obj_t BgL_kontz00_2832;

																		BgL_nodez00_2831 =
																			(BgL_nodez00_bglt) (BgL_arg4662z00_1981);
																		BgL_kontz00_2832 =
																			BGl_za2stopzd2kontza2zd2zzcgen_cgenz00;
																		{	/* Cgen/cgen.scm 298 */
																			obj_t BgL_method4375z00_2833;

																			{	/* Cgen/cgen.scm 298 */
																				BgL_objectz00_bglt BgL_objz00_2834;

																				BgL_objz00_2834 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2831);
																				{	/* Cgen/cgen.scm 298 */
																					long BgL_objzd2classzd2numz00_2835;

																					BgL_objzd2classzd2numz00_2835 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2834);
																					{	/* Cgen/cgen.scm 298 */
																						obj_t BgL_arg2643z00_2836;

																						BgL_arg2643z00_2836 =
																							PROCEDURE_REF
																							(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
																							(int) (((long) 1)));
																						{	/* Cgen/cgen.scm 298 */
																							obj_t BgL_arrayz00_2838;

																							int BgL_offsetz00_2839;

																							BgL_arrayz00_2838 =
																								BgL_arg2643z00_2836;
																							BgL_offsetz00_2839 =
																								(int)
																								(BgL_objzd2classzd2numz00_2835);
																							{	/* Cgen/cgen.scm 298 */
																								long BgL_offsetz00_2840;

																								BgL_offsetz00_2840 =
																									(
																									(long) (BgL_offsetz00_2839) -
																									OBJECT_TYPE);
																								{	/* Cgen/cgen.scm 298 */
																									long BgL_modz00_2841;

																									{	/* Cgen/cgen.scm 298 */
																										int BgL_arg2645z00_2842;

																										BgL_arg2645z00_2842 =
																											(int) (((long) 16));
																										{	/* Cgen/cgen.scm 298 */
																											long BgL_auxz00_5815;

																											BgL_auxz00_5815 =
																												(long)
																												(BgL_arg2645z00_2842);
																											BgL_modz00_2841 =
																												(BgL_offsetz00_2840 /
																												BgL_auxz00_5815);
																									}}
																									{	/* Cgen/cgen.scm 298 */
																										long BgL_restz00_2843;

																										{	/* Cgen/cgen.scm 298 */
																											int BgL_arg2644z00_2844;

																											BgL_arg2644z00_2844 =
																												(int) (((long) 16));
																											{	/* Cgen/cgen.scm 298 */
																												long BgL_auxz00_5819;

																												BgL_auxz00_5819 =
																													(long)
																													(BgL_arg2644z00_2844);
																												BgL_restz00_2843 =
																													(BgL_offsetz00_2840 %
																													BgL_auxz00_5819);
																										}}
																										{	/* Cgen/cgen.scm 298 */

																											BgL_method4375z00_2833 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2838,
																													(int)
																													(BgL_modz00_2841)),
																												(int)
																												(BgL_restz00_2843));
																			}}}}}}}}
																			BgL_res5095z00_2858 =
																				(BgL_copz00_bglt) (PROCEDURE_ENTRY
																				(BgL_method4375z00_2833)
																				(BgL_method4375z00_2833,
																					(obj_t) (BgL_nodez00_2831),
																					BgL_kontz00_2832, BEOA));
																	}}
																	BgL_arg4661z00_1980 = BgL_res5095z00_2858;
															}}
															BgL_arg4660z00_1979 =
																MAKE_PAIR(
																(obj_t) (BgL_arg4661z00_1980), BgL_newz00_1969);
														}
														{
															obj_t BgL_newz00_5833;

															obj_t BgL_expz00_5832;

															BgL_expz00_5832 = BgL_arg4659z00_1978;
															BgL_newz00_5833 = BgL_arg4660z00_1979;
															BgL_newz00_1969 = BgL_newz00_5833;
															BgL_expz00_1968 = BgL_expz00_5832;
															goto BgL_zc3anonymousza34652ze3z83_1970;
														}
													}
												else
													{
														obj_t BgL_expz00_5834;

														BgL_expz00_5834 = CDR(BgL_expz00_1968);
														BgL_expz00_1968 = BgL_expz00_5834;
														goto BgL_zc3anonymousza34652ze3z83_1970;
													}
											}
										return (obj_t) (BgL_auxz00_5766);
									}
								}
						}
				}
			}
		}
	}



/* node->cop-closure4383 */
	obj_t BGl_nodezd2ze3copzd2closure4383ze3zzcgen_cgenz00(obj_t BgL_envz00_3861,
		obj_t BgL_nodez00_3862, obj_t BgL_kontz00_3863)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 264 */
			{
				BgL_closurez00_bglt BgL_nodez00_1945;

				obj_t BgL_kontz00_1946;

				BgL_nodez00_1945 = (BgL_closurez00_bglt) (BgL_nodez00_3862);
				BgL_kontz00_1946 = BgL_kontz00_3863;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string5193z00zzcgen_cgenz00, BGl_string5227z00zzcgen_cgenz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1945)));
			}
		}
	}



/* node->cop-var4381 */
	obj_t BGl_nodezd2ze3copzd2var4381ze3zzcgen_cgenz00(obj_t BgL_envz00_3864,
		obj_t BgL_nodez00_3865, obj_t BgL_kontz00_3866)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 249 */
			{
				BgL_varz00_bglt BgL_nodez00_1935;

				obj_t BgL_kontz00_1936;

				BgL_nodez00_1935 = (BgL_varz00_bglt) (BgL_nodez00_3865);
				BgL_kontz00_1936 = BgL_kontz00_3866;
				{	/* Cgen/cgen.scm 259 */
					BgL_varcz00_bglt BgL_arg4638z00_1940;

					{	/* Cgen/cgen.scm 259 */
						obj_t BgL_arg4639z00_1941;

						BgL_variablez00_bglt BgL_arg4640z00_1942;

						{
							BgL_nodez00_bglt BgL_auxz00_5842;

							BgL_auxz00_5842 = (BgL_nodez00_bglt) (BgL_nodez00_1935);
							BgL_arg4639z00_1941 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_5842))->BgL_locz00);
						}
						BgL_arg4640z00_1942 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1935))->BgL_variablez00);
						BgL_arg4638z00_1940 =
							BGl_makezd2varczd2zzcgen_copz00(BgL_arg4639z00_1941,
							BgL_arg4640z00_1942);
					}
					return
						PROCEDURE_ENTRY(BgL_kontz00_1936) (BgL_kontz00_1936,
						(obj_t) (BgL_arg4638z00_1940), BEOA);
				}
			}
		}
	}



/* node->cop-kwote4379 */
	obj_t BGl_nodezd2ze3copzd2kwote4379ze3zzcgen_cgenz00(obj_t BgL_envz00_3867,
		obj_t BgL_nodez00_3868, obj_t BgL_kontz00_3869)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 240 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1926;

				obj_t BgL_kontz00_1927;

				BgL_nodez00_1926 = (BgL_kwotez00_bglt) (BgL_nodez00_3868);
				BgL_kontz00_1927 = BgL_kontz00_3869;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string5193z00zzcgen_cgenz00, BGl_string5228z00zzcgen_cgenz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1926)));
			}
		}
	}



/* node->cop-atom4377 */
	obj_t BGl_nodezd2ze3copzd2atom4377ze3zzcgen_cgenz00(obj_t BgL_envz00_3870,
		obj_t BgL_nodez00_3871, obj_t BgL_kontz00_3872)
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 228 */
			{
				BgL_atomz00_bglt BgL_nodez00_1916;

				obj_t BgL_kontz00_1917;

				BgL_nodez00_1916 = (BgL_atomz00_bglt) (BgL_nodez00_3871);
				BgL_kontz00_1917 = BgL_kontz00_3872;
				{	/* Cgen/cgen.scm 235 */
					BgL_catomz00_bglt BgL_arg4630z00_1921;

					{	/* Cgen/cgen.scm 235 */
						obj_t BgL_arg4631z00_1922;

						obj_t BgL_arg4632z00_1923;

						{
							BgL_nodez00_bglt BgL_auxz00_5855;

							BgL_auxz00_5855 = (BgL_nodez00_bglt) (BgL_nodez00_1916);
							BgL_arg4631z00_1922 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_5855))->BgL_locz00);
						}
						BgL_arg4632z00_1923 =
							(((BgL_atomz00_bglt) CREF(BgL_nodez00_1916))->BgL_valuez00);
						BgL_arg4630z00_1921 =
							BGl_makezd2catomzd2zzcgen_copz00(BgL_arg4631z00_1922,
							BgL_arg4632z00_1923);
					}
					return
						PROCEDURE_ENTRY(BgL_kontz00_1917) (BgL_kontz00_1917,
						(obj_t) (BgL_arg4630z00_1921), BEOA);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_cgenz00()
	{
		AN_OBJECT;
		{	/* Cgen/cgen.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 241571075),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(((long) 356045708),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzcgen_cappz00(((long) 326723023),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					254412896), BSTRING_TO_STRING(BGl_string5229z00zzcgen_cgenz00));
		}
	}

#ifdef __cplusplus
}
#endif
