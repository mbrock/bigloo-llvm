/*===========================================================================*/
/*   (Cfa/cfa.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cfa.scm)*/
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

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

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_scnstzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_scnstzf2cinfozf2_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_cvarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cvarzf2cinfozf2_bglt;

	typedef struct BgL_sexitzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_sexitzf2cinfozf2_bglt;

	typedef struct BgL_atomzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_atomzf2cinfozf2_bglt;

	typedef struct BgL_kwotezf2nodezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                      *BgL_kwotezf2nodezf2_bglt;

	typedef struct BgL_kwotezf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_kwotezf2cinfozf2_bglt;

	typedef struct BgL_appzd2lyzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_appzd2lyzf2cinfoz20_bglt;

	typedef struct BgL_setqzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_setqzf2cinfozf2_bglt;

	typedef struct BgL_conditionalzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_conditionalzf2cinfozf2_bglt;

	typedef struct BgL_failzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_failzf2cinfozf2_bglt;

	typedef struct BgL_selectzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_selectzf2cinfozf2_bglt;

	typedef struct BgL_setzd2exzd2itzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_setzd2exzd2itzf2cinfozf2_bglt;

	typedef struct BgL_jumpzd2exzd2itzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                *BgL_jumpzd2exzd2itzf2cinfozf2_bglt;

	typedef struct BgL_makezd2boxzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_makezd2boxzf2cinfoz20_bglt;

	typedef struct BgL_boxzd2setz12zf2cinfoz32_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                              *BgL_boxzd2setz12zf2cinfoz32_bglt;

	typedef struct BgL_boxzd2refzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                           *BgL_boxzd2refzf2cinfoz20_bglt;

	typedef struct BgL_pragmazf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_pragmazf2cinfozf2_bglt;

	typedef struct BgL_getfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_getfieldzf2cinfozf2_bglt;

	typedef struct BgL_setfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_setfieldzf2cinfozf2_bglt;

	typedef struct BgL_newzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                     *BgL_newzf2cinfozf2_bglt;

	typedef struct BgL_isazf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                     *BgL_isazf2cinfozf2_bglt;

	typedef struct BgL_castzd2nullzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_castzd2nullzf2cinfoz20_bglt;


	static obj_t BGl_cfaz12zd2castzd2nullzf2Cinfo5275ze0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_cfaz12zd2letzd2var5289z12zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__cfaz12z12zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_setqzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_cfaz12zd2kwotezf2node5243z32zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfaz12zd2isazf2Cinfo5273z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	static obj_t
		BGl_cfazd2variablezd2valuezd2a5248zd2zzcfa_cfaz00(BgL_valuez00_bglt);
	static obj_t BGl_cfazd2variablezd2valuezd2a5251zd2zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfazd2variablezd2valuezd2a5253zd2zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfazd2variablezd2valuezd2a5255zd2zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfazd2variablezd2valuezd2a5257zd2zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfazd2variablezd2valuezd2a5259zd2zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_failzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_cfaz00();
	extern obj_t BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_cfaz12zd2selectzf2Cinfo5285z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_cfaz12zd2setzd2exzd2itzf2Cinfo5291z32zzcfa_cfaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cfaz12zd2boxzd2setz12zf2Cinfo5297zf2zzcfa_cfaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cfaz12zd2setfieldzf2Cinfo5269z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_newzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_cfaz12zd2boxzd2refzf2Cinfo5299ze0zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfaz12zd2jumpzd2exzd2itzf2Cinf5293z32zzcfa_cfaz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cfaz12zd2atomzf2Cinfo5239z32zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_cfaz00();
	static obj_t BGl_cfaz12zd2sequence5261zc0zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_pragmazf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_cfaz12zd2setqzf2Cinfo5279z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00;
	extern obj_t BGl_setfieldzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_cfaz12zd2newzf2Cinfo5271z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_cfaz12zd2default5236zc0zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_cfaz12zd2getfieldzf2Cinfo5267z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_getfieldzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__cfazd2variablezd2valuezd2a5248zd2zzcfa_cfaz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_selectzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_cfaz00();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_cfaz00 = BUNSPEC;
	static obj_t BGl_cfaz12zd2appzd2lyzf2Cinfo5263ze0zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfaz12zd2pragmazf2Cinfo5265z32zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_cfaz12zd2conditionalzf2Cin5281z32zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_cfaz00();
	extern obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_cfaz12zd2failzf2Cinfo5283z32zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl__cfaz12zd2default5236zc0zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_atomzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_cfaz12zd2makezd2boxzf2Cinfo5295ze0zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_cfaz00();
	extern BgL_approxz00_bglt BGl_makezd2approxzd2zzcfa_infoz00(BgL_typez00_bglt,
		bool_t, obj_t, bool_t, long);
	static obj_t BGl_cfaz12zd2cast5277zc0zzcfa_cfaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	static obj_t BGl__cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(BgL_valuez00_bglt);
	extern obj_t BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00;
	static obj_t BGl_cfaz12zd2kwotezf2Cinfo5241z32zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_globalzd2loosez12zc0zzcfa_loosez00(BgL_globalz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_isazf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_cfaz12zd2var5245zc0zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_conditionalzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_cfaz00();
	static obj_t BGl_cfaz12zd2letzd2fun5287z12zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_cfaz12zd2closure5247zc0zzcfa_cfaz00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_cfaz12zd2default5236zd2envz12zzcfa_cfaz00,
		BgL_bgl__cfaza712za7d2defaul5669z00,
		BGl__cfaz12zd2default5236zc0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
		BgL_bgl__cfaza712za712za7za7cfa_5670z00, BGl__cfaz12z12zzcfa_cfaz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5634z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2atomza7f25671za7,
		BGl_cfaz12zd2atomzf2Cinfo5239z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5635z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2kwoteza7f5672za7,
		BGl_cfaz12zd2kwotezf2Cinfo5241z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5636z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2kwoteza7f5673za7,
		BGl_cfaz12zd2kwotezf2node5243z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5637z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2var52455674z00, BGl_cfaz12zd2var5245zc0zzcfa_cfaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5638z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2closure5675z00,
		BGl_cfaz12zd2closure5247zc0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5640z00zzcfa_cfaz00,
		BgL_bgl_cfaza7d2variableza7d5676z00,
		BGl_cfazd2variablezd2valuezd2a5253zd2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5639z00zzcfa_cfaz00,
		BgL_bgl_cfaza7d2variableza7d5677z00,
		BGl_cfazd2variablezd2valuezd2a5251zd2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5641z00zzcfa_cfaz00,
		BgL_bgl_cfaza7d2variableza7d5678z00,
		BGl_cfazd2variablezd2valuezd2a5255zd2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5642z00zzcfa_cfaz00,
		BgL_bgl_cfaza7d2variableza7d5679z00,
		BGl_cfazd2variablezd2valuezd2a5257zd2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5643z00zzcfa_cfaz00,
		BgL_bgl_cfaza7d2variableza7d5680z00,
		BGl_cfazd2variablezd2valuezd2a5259zd2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5644z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2sequenc5681z00,
		BGl_cfaz12zd2sequence5261zc0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5645z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2appza7d2l5682za7,
		BGl_cfaz12zd2appzd2lyzf2Cinfo5263ze0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5646z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2pragmaza75683za7,
		BGl_cfaz12zd2pragmazf2Cinfo5265z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5647z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2getfiel5684z00,
		BGl_cfaz12zd2getfieldzf2Cinfo5267z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5648z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2setfiel5685z00,
		BGl_cfaz12zd2setfieldzf2Cinfo5269z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5650z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2isaza7f2c5686za7,
		BGl_cfaz12zd2isazf2Cinfo5273z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5649z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2newza7f2c5687za7,
		BGl_cfaz12zd2newzf2Cinfo5271z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5651z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2castza7d25688za7,
		BGl_cfaz12zd2castzd2nullzf2Cinfo5275ze0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5652z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2cast5275689z00, BGl_cfaz12zd2cast5277zc0zzcfa_cfaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5653z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2setqza7f25690za7,
		BGl_cfaz12zd2setqzf2Cinfo5279z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5654z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2conditi5691z00,
		BGl_cfaz12zd2conditionalzf2Cin5281z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5655z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2failza7f25692za7,
		BGl_cfaz12zd2failzf2Cinfo5283z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5656z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2selectza75693za7,
		BGl_cfaz12zd2selectzf2Cinfo5285z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5657z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2letza7d2f5694za7,
		BGl_cfaz12zd2letzd2fun5287z12zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5658z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2letza7d2v5695za7,
		BGl_cfaz12zd2letzd2var5289z12zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5660z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2jumpza7d25696za7,
		BGl_cfaz12zd2jumpzd2exzd2itzf2Cinf5293z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5659z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2setza7d2e5697za7,
		BGl_cfaz12zd2setzd2exzd2itzf2Cinfo5291z32zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5661z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2makeza7d25698za7,
		BGl_cfaz12zd2makezd2boxzf2Cinfo5295ze0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5662z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2boxza7d2s5699za7,
		BGl_cfaz12zd2boxzd2setz12zf2Cinfo5297zf2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5663z00zzcfa_cfaz00,
		BgL_bgl_cfaza712za7d2boxza7d2r5700za7,
		BGl_cfaz12zd2boxzd2refzf2Cinfo5299ze0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5630z00zzcfa_cfaz00,
		BgL_bgl_string5630za700za7za7c5701za7, "cfa!", 4);
	      DEFINE_STRING(BGl_string5631z00zzcfa_cfaz00,
		BgL_bgl_string5631za700za7za7c5702za7, "cfa-variable-value-approx", 25);
	      DEFINE_STRING(BGl_string5632z00zzcfa_cfaz00,
		BgL_bgl_string5632za700za7za7c5703za7, "cfa!:no method for this ast", 27);
	      DEFINE_STRING(BGl_string5633z00zzcfa_cfaz00,
		BgL_bgl_string5633za700za7za7c5704za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5664z00zzcfa_cfaz00,
		BgL_bgl_string5664za700za7za7c5705za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string5665z00zzcfa_cfaz00,
		BgL_bgl_string5665za700za7za7c5706za7, "cfa_cfa", 7);
	      DEFINE_STRING(BGl_string5666z00zzcfa_cfaz00,
		BgL_bgl_string5666za700za7za7c5707za7, "all cfa-variable-value-a5248 ", 29);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_cfazd2variablezd2valuezd2a5248zd2envz00zzcfa_cfaz00,
		BgL_bgl__cfaza7d2variableza75708z00,
		BGl__cfazd2variablezd2valuezd2a5248zd2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
		BgL_bgl__cfaza7d2variableza75709z00,
		BGl__cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long
		BgL_checksumz00_3140, char *BgL_fromz00_3141)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_cfaz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_cfaz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_cfaz00();
					BGl_cnstzd2initzd2zzcfa_cfaz00();
					BGl_importedzd2moduleszd2initz00zzcfa_cfaz00();
					BGl_genericzd2initzd2zzcfa_cfaz00();
					BGl_methodzd2initzd2zzcfa_cfaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_cfaz00()
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_cfa");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_cfaz00()
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			{	/* Cfa/cfa.scm 15 */
				obj_t BgL_cportz00_3132;

				BgL_cportz00_3132 =
					bgl_open_input_string(BGl_string5666z00zzcfa_cfaz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3133;

					BgL_iz00_3133 = ((long) 1);
				BgL_loopz00_3134:
					if ((BgL_iz00_3133 == ((long) -1)))
						{	/* Cfa/cfa.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cfa.scm 15 */
							{	/* Cfa/cfa.scm 15 */
								obj_t BgL_arg5668z00_3136;

								{	/* Cfa/cfa.scm 15 */

									{	/* Cfa/cfa.scm 15 */
										obj_t BgL_locationz00_3138;

										BgL_locationz00_3138 = BBOOL(((bool_t) 0));
										{	/* Cfa/cfa.scm 15 */

											BgL_arg5668z00_3136 =
												BGl_readz00zz__readerz00(BgL_cportz00_3132,
												BgL_locationz00_3138);
										}
									}
								}
								{	/* Cfa/cfa.scm 15 */
									int BgL_auxz00_3159;

									BgL_auxz00_3159 = (int) (BgL_iz00_3133);
									CNST_TABLE_SET(BgL_auxz00_3159, BgL_arg5668z00_3136);
							}}
							{	/* Cfa/cfa.scm 15 */
								int BgL_auxz00_3139;

								BgL_auxz00_3139 = (int) ((BgL_iz00_3133 - ((long) 1)));
								{
									long BgL_iz00_3164;

									BgL_iz00_3164 = (long) (BgL_auxz00_3139);
									BgL_iz00_3133 = BgL_iz00_3164;
									goto BgL_loopz00_3134;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_cfaz00()
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_cfaz00()
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_cfaz12zd2default5236zd2envz12zzcfa_cfaz00, BGl_nodez00zzast_nodez00,
				BGl_string5630z00zzcfa_cfaz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_cfazd2variablezd2valuezd2a5248zd2envz00zzcfa_cfaz00,
				BGl_valuez00zzast_varz00, BGl_string5631z00zzcfa_cfaz00);
		}
	}



/* cfa! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt
		BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 36 */
			{	/* Cfa/cfa.scm 36 */
				obj_t BgL_method5237z00_2060;

				{	/* Cfa/cfa.scm 36 */
					BgL_objectz00_bglt BgL_objz00_2061;

					BgL_objz00_2061 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Cfa/cfa.scm 36 */
						long BgL_objzd2classzd2numz00_2062;

						BgL_objzd2classzd2numz00_2062 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2061);
						{	/* Cfa/cfa.scm 36 */
							obj_t BgL_arg2643z00_2063;

							BgL_arg2643z00_2063 =
								PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
								(int) (((long) 1)));
							{	/* Cfa/cfa.scm 36 */
								obj_t BgL_arrayz00_2065;

								int BgL_offsetz00_2066;

								BgL_arrayz00_2065 = BgL_arg2643z00_2063;
								BgL_offsetz00_2066 = (int) (BgL_objzd2classzd2numz00_2062);
								{	/* Cfa/cfa.scm 36 */
									long BgL_offsetz00_2067;

									BgL_offsetz00_2067 =
										((long) (BgL_offsetz00_2066) - OBJECT_TYPE);
									{	/* Cfa/cfa.scm 36 */
										long BgL_modz00_2068;

										{	/* Cfa/cfa.scm 36 */
											int BgL_arg2645z00_2069;

											BgL_arg2645z00_2069 = (int) (((long) 16));
											{	/* Cfa/cfa.scm 36 */
												long BgL_auxz00_3176;

												BgL_auxz00_3176 = (long) (BgL_arg2645z00_2069);
												BgL_modz00_2068 =
													(BgL_offsetz00_2067 / BgL_auxz00_3176);
										}}
										{	/* Cfa/cfa.scm 36 */
											long BgL_restz00_2070;

											{	/* Cfa/cfa.scm 36 */
												int BgL_arg2644z00_2071;

												BgL_arg2644z00_2071 = (int) (((long) 16));
												{	/* Cfa/cfa.scm 36 */
													long BgL_auxz00_3180;

													BgL_auxz00_3180 = (long) (BgL_arg2644z00_2071);
													BgL_restz00_2070 =
														(BgL_offsetz00_2067 % BgL_auxz00_3180);
											}}
											{	/* Cfa/cfa.scm 36 */

												BgL_method5237z00_2060 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2065,
														(int) (BgL_modz00_2068)), (int) (BgL_restz00_2070));
				}}}}}}}}
				return
					(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2060)
					(BgL_method5237z00_2060, (obj_t) (BgL_nodez00_1), BEOA));
			}
		}
	}



/* _cfa! */
	obj_t BGl__cfaz12z12zzcfa_cfaz00(obj_t BgL_envz00_3034,
		obj_t BgL_nodez00_3035)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 36 */
			return
				(obj_t) (BGl_cfaz12z12zzcfa_cfaz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3035)));
		}
	}



/* cfa!-default5236 */
	BgL_approxz00_bglt BGl_cfaz12zd2default5236zc0zzcfa_cfaz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			{	/* Cfa/cfa.scm 37 */
				obj_t BgL_arg5406z00_2086;

				BgL_arg5406z00_2086 =
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_2));
				return
					(BgL_approxz00_bglt) (BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string5632z00zzcfa_cfaz00, (obj_t) (BgL_nodez00_2),
						BgL_arg5406z00_2086));
			}
		}
	}



/* _cfa!-default5236 */
	obj_t BGl__cfaz12zd2default5236zc0zzcfa_cfaz00(obj_t BgL_envz00_3036,
		obj_t BgL_nodez00_3037)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			return
				(obj_t) (BGl_cfaz12zd2default5236zc0zzcfa_cfaz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3037)));
		}
	}



/* cfa-variable-value-approx */
	BGL_EXPORTED_DEF obj_t
		BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(BgL_valuez00_bglt
		BgL_valuez00_8)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 82 */
			{	/* Cfa/cfa.scm 82 */
				obj_t BgL_method5249z00_2087;

				{	/* Cfa/cfa.scm 82 */
					BgL_objectz00_bglt BgL_objz00_2088;

					BgL_objz00_2088 = (BgL_objectz00_bglt) (BgL_valuez00_8);
					{	/* Cfa/cfa.scm 82 */
						long BgL_objzd2classzd2numz00_2089;

						BgL_objzd2classzd2numz00_2089 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2088);
						{	/* Cfa/cfa.scm 82 */
							obj_t BgL_arg2643z00_2090;

							BgL_arg2643z00_2090 =
								PROCEDURE_REF
								(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
								(int) (((long) 1)));
							{	/* Cfa/cfa.scm 82 */
								obj_t BgL_arrayz00_2092;

								int BgL_offsetz00_2093;

								BgL_arrayz00_2092 = BgL_arg2643z00_2090;
								BgL_offsetz00_2093 = (int) (BgL_objzd2classzd2numz00_2089);
								{	/* Cfa/cfa.scm 82 */
									long BgL_offsetz00_2094;

									BgL_offsetz00_2094 =
										((long) (BgL_offsetz00_2093) - OBJECT_TYPE);
									{	/* Cfa/cfa.scm 82 */
										long BgL_modz00_2095;

										{	/* Cfa/cfa.scm 82 */
											int BgL_arg2645z00_2096;

											BgL_arg2645z00_2096 = (int) (((long) 16));
											{	/* Cfa/cfa.scm 82 */
												long BgL_auxz00_3210;

												BgL_auxz00_3210 = (long) (BgL_arg2645z00_2096);
												BgL_modz00_2095 =
													(BgL_offsetz00_2094 / BgL_auxz00_3210);
										}}
										{	/* Cfa/cfa.scm 82 */
											long BgL_restz00_2097;

											{	/* Cfa/cfa.scm 82 */
												int BgL_arg2644z00_2098;

												BgL_arg2644z00_2098 = (int) (((long) 16));
												{	/* Cfa/cfa.scm 82 */
													long BgL_auxz00_3214;

													BgL_auxz00_3214 = (long) (BgL_arg2644z00_2098);
													BgL_restz00_2097 =
														(BgL_offsetz00_2094 % BgL_auxz00_3214);
											}}
											{	/* Cfa/cfa.scm 82 */

												BgL_method5249z00_2087 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2092,
														(int) (BgL_modz00_2095)), (int) (BgL_restz00_2097));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5249z00_2087) (BgL_method5249z00_2087,
					(obj_t) (BgL_valuez00_8), BEOA);
			}
		}
	}



/* _cfa-variable-value-approx */
	obj_t BGl__cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(obj_t
		BgL_envz00_3038, obj_t BgL_valuez00_3039)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 82 */
			return
				BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
				(BgL_valuez00_bglt) (BgL_valuez00_3039));
		}
	}



/* cfa-variable-value-a5248 */
	obj_t BGl_cfazd2variablezd2valuezd2a5248zd2zzcfa_cfaz00(BgL_valuez00_bglt
		BgL_valuez00_9)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string5633z00zzcfa_cfaz00, (obj_t) (BgL_valuez00_9));
		}
	}



/* _cfa-variable-value-a5248 */
	obj_t BGl__cfazd2variablezd2valuezd2a5248zd2zzcfa_cfaz00(obj_t
		BgL_envz00_3040, obj_t BgL_valuez00_3041)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			return
				BGl_cfazd2variablezd2valuezd2a5248zd2zzcfa_cfaz00(
				(BgL_valuez00_bglt) (BgL_valuez00_3041));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_cfaz00()
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_atomzf2Cinfozf2zzcfa_infoz00,
				BGl_proc5634z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_kwotezf2Cinfozf2zzcfa_infoz00,
				BGl_proc5635z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_kwotezf2nodezf2zzcfa_infoz00,
				BGl_proc5636z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_varz00zzast_nodez00,
				BGl_proc5637z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_closurez00zzast_nodez00,
				BGl_proc5638z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc5639z00zzcfa_cfaz00,
				BGl_string5631z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc5640z00zzcfa_cfaz00,
				BGl_string5631z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc5641z00zzcfa_cfaz00,
				BGl_string5631z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc5642z00zzcfa_cfaz00,
				BGl_string5631z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc5643z00zzcfa_cfaz00,
				BGl_string5631z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_sequencez00zzast_nodez00,
				BGl_proc5644z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00,
				BGl_proc5645z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_pragmazf2Cinfozf2zzcfa_info3z00,
				BGl_proc5646z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_getfieldzf2Cinfozf2zzcfa_info3z00,
				BGl_proc5647z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_setfieldzf2Cinfozf2zzcfa_info3z00,
				BGl_proc5648z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_newzf2Cinfozf2zzcfa_info3z00,
				BGl_proc5649z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_isazf2Cinfozf2zzcfa_info3z00,
				BGl_proc5650z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00, BGl_proc5651z00zzcfa_cfaz00,
				BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_castz00zzast_nodez00,
				BGl_proc5652z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_setqzf2Cinfozf2zzcfa_infoz00,
				BGl_proc5653z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00, BGl_proc5654z00zzcfa_cfaz00,
				BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_failzf2Cinfozf2zzcfa_infoz00,
				BGl_proc5655z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_selectzf2Cinfozf2zzcfa_infoz00,
				BGl_proc5656z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc5657z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc5658z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00, BGl_proc5659z00zzcfa_cfaz00,
				BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00, BGl_proc5660z00zzcfa_cfaz00,
				BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00, BGl_proc5661z00zzcfa_cfaz00,
				BGl_string5630z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00, BGl_proc5662z00zzcfa_cfaz00,
				BGl_string5630z00zzcfa_cfaz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00,
				BGl_proc5663z00zzcfa_cfaz00, BGl_string5630z00zzcfa_cfaz00);
		}
	}



/* cfa!-box-ref/Cinfo5299 */
	obj_t BGl_cfaz12zd2boxzd2refzf2Cinfo5299ze0zzcfa_cfaz00(obj_t BgL_envz00_3072,
		obj_t BgL_nodez00_3073)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 327 */
			{
				BgL_boxzd2refzf2cinfoz20_bglt BgL_nodez00_2053;

				{	/* Cfa/cfa.scm 328 */
					BgL_approxz00_bglt BgL_auxz00_3261;

					BgL_nodez00_2053 = (BgL_boxzd2refzf2cinfoz20_bglt) (BgL_nodez00_3073);
					{	/* Cfa/cfa.scm 328 */
						BgL_varz00_bglt BgL_arg5535z00_3004;

						{
							BgL_boxzd2refzd2_bglt BgL_auxz00_3262;

							BgL_auxz00_3262 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2053);
							BgL_arg5535z00_3004 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_auxz00_3262))->BgL_varz00);
						}
						{	/* Cfa/cfa.scm 328 */
							BgL_approxz00_bglt BgL_res5629z00_3032;

							{	/* Cfa/cfa.scm 328 */
								BgL_nodez00_bglt BgL_nodez00_3006;

								BgL_nodez00_3006 = (BgL_nodez00_bglt) (BgL_arg5535z00_3004);
								{	/* Cfa/cfa.scm 328 */
									obj_t BgL_method5237z00_3007;

									{	/* Cfa/cfa.scm 328 */
										BgL_objectz00_bglt BgL_objz00_3008;

										BgL_objz00_3008 = (BgL_objectz00_bglt) (BgL_nodez00_3006);
										{	/* Cfa/cfa.scm 328 */
											long BgL_objzd2classzd2numz00_3009;

											BgL_objzd2classzd2numz00_3009 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3008);
											{	/* Cfa/cfa.scm 328 */
												obj_t BgL_arg2643z00_3010;

												BgL_arg2643z00_3010 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 328 */
													obj_t BgL_arrayz00_3012;

													int BgL_offsetz00_3013;

													BgL_arrayz00_3012 = BgL_arg2643z00_3010;
													BgL_offsetz00_3013 =
														(int) (BgL_objzd2classzd2numz00_3009);
													{	/* Cfa/cfa.scm 328 */
														long BgL_offsetz00_3014;

														BgL_offsetz00_3014 =
															((long) (BgL_offsetz00_3013) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 328 */
															long BgL_modz00_3015;

															{	/* Cfa/cfa.scm 328 */
																int BgL_arg2645z00_3016;

																BgL_arg2645z00_3016 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 328 */
																	long BgL_auxz00_3274;

																	BgL_auxz00_3274 =
																		(long) (BgL_arg2645z00_3016);
																	BgL_modz00_3015 =
																		(BgL_offsetz00_3014 / BgL_auxz00_3274);
															}}
															{	/* Cfa/cfa.scm 328 */
																long BgL_restz00_3017;

																{	/* Cfa/cfa.scm 328 */
																	int BgL_arg2644z00_3018;

																	BgL_arg2644z00_3018 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 328 */
																		long BgL_auxz00_3278;

																		BgL_auxz00_3278 =
																			(long) (BgL_arg2644z00_3018);
																		BgL_restz00_3017 =
																			(BgL_offsetz00_3014 % BgL_auxz00_3278);
																}}
																{	/* Cfa/cfa.scm 328 */

																	BgL_method5237z00_3007 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3012,
																			(int) (BgL_modz00_3015)),
																		(int) (BgL_restz00_3017));
									}}}}}}}}
									BgL_res5629z00_3032 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_3007) (BgL_method5237z00_3007,
											(obj_t) (BgL_nodez00_3006), BEOA));
							}} BgL_res5629z00_3032;
					}}
					{
						obj_t BgL_auxz00_3289;

						{	/* Cfa/cfa.scm 328 */
							BgL_objectz00_bglt BgL_auxz00_3290;

							BgL_auxz00_3290 = (BgL_objectz00_bglt) (BgL_nodez00_2053);
							BgL_auxz00_3289 = BGL_OBJECT_WIDENING(BgL_auxz00_3290);
						}
						BgL_auxz00_3261 =
							(((BgL_boxzd2refzf2cinfoz20_bglt) CREF(BgL_auxz00_3289))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3261);
				}
			}
		}
	}



/* cfa!-box-set!/Cinfo5297 */
	obj_t BGl_cfaz12zd2boxzd2setz12zf2Cinfo5297zf2zzcfa_cfaz00(obj_t
		BgL_envz00_3074, obj_t BgL_nodez00_3075)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 318 */
			{
				BgL_boxzd2setz12zf2cinfoz32_bglt BgL_nodez00_2043;

				{	/* Cfa/cfa.scm 319 */
					BgL_approxz00_bglt BgL_auxz00_3296;

					BgL_nodez00_2043 =
						(BgL_boxzd2setz12zf2cinfoz32_bglt) (BgL_nodez00_3075);
					{	/* Cfa/cfa.scm 320 */
						BgL_varz00_bglt BgL_arg5530z00_2047;

						{
							BgL_boxzd2setz12zc0_bglt BgL_auxz00_3297;

							BgL_auxz00_3297 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2043);
							BgL_arg5530z00_2047 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_auxz00_3297))->
								BgL_varz00);
						}
						{	/* Cfa/cfa.scm 320 */
							BgL_approxz00_bglt BgL_res5623z00_2973;

							{	/* Cfa/cfa.scm 320 */
								BgL_nodez00_bglt BgL_nodez00_2947;

								BgL_nodez00_2947 = (BgL_nodez00_bglt) (BgL_arg5530z00_2047);
								{	/* Cfa/cfa.scm 320 */
									obj_t BgL_method5237z00_2948;

									{	/* Cfa/cfa.scm 320 */
										BgL_objectz00_bglt BgL_objz00_2949;

										BgL_objz00_2949 = (BgL_objectz00_bglt) (BgL_nodez00_2947);
										{	/* Cfa/cfa.scm 320 */
											long BgL_objzd2classzd2numz00_2950;

											BgL_objzd2classzd2numz00_2950 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2949);
											{	/* Cfa/cfa.scm 320 */
												obj_t BgL_arg2643z00_2951;

												BgL_arg2643z00_2951 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 320 */
													obj_t BgL_arrayz00_2953;

													int BgL_offsetz00_2954;

													BgL_arrayz00_2953 = BgL_arg2643z00_2951;
													BgL_offsetz00_2954 =
														(int) (BgL_objzd2classzd2numz00_2950);
													{	/* Cfa/cfa.scm 320 */
														long BgL_offsetz00_2955;

														BgL_offsetz00_2955 =
															((long) (BgL_offsetz00_2954) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 320 */
															long BgL_modz00_2956;

															{	/* Cfa/cfa.scm 320 */
																int BgL_arg2645z00_2957;

																BgL_arg2645z00_2957 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 320 */
																	long BgL_auxz00_3309;

																	BgL_auxz00_3309 =
																		(long) (BgL_arg2645z00_2957);
																	BgL_modz00_2956 =
																		(BgL_offsetz00_2955 / BgL_auxz00_3309);
															}}
															{	/* Cfa/cfa.scm 320 */
																long BgL_restz00_2958;

																{	/* Cfa/cfa.scm 320 */
																	int BgL_arg2644z00_2959;

																	BgL_arg2644z00_2959 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 320 */
																		long BgL_auxz00_3313;

																		BgL_auxz00_3313 =
																			(long) (BgL_arg2644z00_2959);
																		BgL_restz00_2958 =
																			(BgL_offsetz00_2955 % BgL_auxz00_3313);
																}}
																{	/* Cfa/cfa.scm 320 */

																	BgL_method5237z00_2948 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2953,
																			(int) (BgL_modz00_2956)),
																		(int) (BgL_restz00_2958));
									}}}}}}}}
									BgL_res5623z00_2973 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2948) (BgL_method5237z00_2948,
											(obj_t) (BgL_nodez00_2947), BEOA));
							}} BgL_res5623z00_2973;
					}}
					{	/* Cfa/cfa.scm 321 */
						BgL_approxz00_bglt BgL_arg5531z00_2048;

						obj_t BgL_arg5532z00_2049;

						{	/* Cfa/cfa.scm 321 */
							BgL_nodez00_bglt BgL_arg5533z00_2050;

							{
								BgL_boxzd2setz12zc0_bglt BgL_auxz00_3324;

								BgL_auxz00_3324 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2043);
								BgL_arg5533z00_2050 =
									(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_auxz00_3324))->
									BgL_valuez00);
							}
							{	/* Cfa/cfa.scm 321 */
								BgL_approxz00_bglt BgL_res5626z00_3001;

								{	/* Cfa/cfa.scm 321 */
									obj_t BgL_method5237z00_2976;

									{	/* Cfa/cfa.scm 321 */
										BgL_objectz00_bglt BgL_objz00_2977;

										BgL_objz00_2977 =
											(BgL_objectz00_bglt) (BgL_arg5533z00_2050);
										{	/* Cfa/cfa.scm 321 */
											long BgL_objzd2classzd2numz00_2978;

											BgL_objzd2classzd2numz00_2978 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2977);
											{	/* Cfa/cfa.scm 321 */
												obj_t BgL_arg2643z00_2979;

												BgL_arg2643z00_2979 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 321 */
													obj_t BgL_arrayz00_2981;

													int BgL_offsetz00_2982;

													BgL_arrayz00_2981 = BgL_arg2643z00_2979;
													BgL_offsetz00_2982 =
														(int) (BgL_objzd2classzd2numz00_2978);
													{	/* Cfa/cfa.scm 321 */
														long BgL_offsetz00_2983;

														BgL_offsetz00_2983 =
															((long) (BgL_offsetz00_2982) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 321 */
															long BgL_modz00_2984;

															{	/* Cfa/cfa.scm 321 */
																int BgL_arg2645z00_2985;

																BgL_arg2645z00_2985 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 321 */
																	long BgL_auxz00_3335;

																	BgL_auxz00_3335 =
																		(long) (BgL_arg2645z00_2985);
																	BgL_modz00_2984 =
																		(BgL_offsetz00_2983 / BgL_auxz00_3335);
															}}
															{	/* Cfa/cfa.scm 321 */
																long BgL_restz00_2986;

																{	/* Cfa/cfa.scm 321 */
																	int BgL_arg2644z00_2987;

																	BgL_arg2644z00_2987 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 321 */
																		long BgL_auxz00_3339;

																		BgL_auxz00_3339 =
																			(long) (BgL_arg2644z00_2987);
																		BgL_restz00_2986 =
																			(BgL_offsetz00_2983 % BgL_auxz00_3339);
																}}
																{	/* Cfa/cfa.scm 321 */

																	BgL_method5237z00_2976 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2981,
																			(int) (BgL_modz00_2984)),
																		(int) (BgL_restz00_2986));
									}}}}}}}}
									BgL_res5626z00_3001 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2976) (BgL_method5237z00_2976,
											(obj_t) (BgL_arg5533z00_2050), BEOA));
								}
								BgL_arg5531z00_2048 = BgL_res5626z00_3001;
						}}
						BgL_arg5532z00_2049 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5531z00_2048,
							BgL_arg5532z00_2049);
					}
					{
						obj_t BgL_auxz00_3352;

						{	/* Cfa/cfa.scm 322 */
							BgL_objectz00_bglt BgL_auxz00_3353;

							BgL_auxz00_3353 = (BgL_objectz00_bglt) (BgL_nodez00_2043);
							BgL_auxz00_3352 = BGL_OBJECT_WIDENING(BgL_auxz00_3353);
						}
						BgL_auxz00_3296 =
							(((BgL_boxzd2setz12zf2cinfoz32_bglt) CREF(BgL_auxz00_3352))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3296);
				}
			}
		}
	}



/* cfa!-make-box/Cinfo5295 */
	obj_t BGl_cfaz12zd2makezd2boxzf2Cinfo5295ze0zzcfa_cfaz00(obj_t
		BgL_envz00_3076, obj_t BgL_nodez00_3077)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 309 */
			{
				BgL_makezd2boxzf2cinfoz20_bglt BgL_nodez00_2034;

				{	/* Cfa/cfa.scm 310 */
					BgL_approxz00_bglt BgL_auxz00_3359;

					BgL_nodez00_2034 =
						(BgL_makezd2boxzf2cinfoz20_bglt) (BgL_nodez00_3077);
					{	/* Cfa/cfa.scm 312 */
						BgL_approxz00_bglt BgL_arg5526z00_2038;

						obj_t BgL_arg5527z00_2039;

						{	/* Cfa/cfa.scm 312 */
							BgL_nodez00_bglt BgL_arg5528z00_2040;

							{
								BgL_makezd2boxzd2_bglt BgL_auxz00_3360;

								BgL_auxz00_3360 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2034);
								BgL_arg5528z00_2040 =
									(((BgL_makezd2boxzd2_bglt) CREF(BgL_auxz00_3360))->
									BgL_valuez00);
							}
							{	/* Cfa/cfa.scm 312 */
								BgL_approxz00_bglt BgL_res5620z00_2944;

								{	/* Cfa/cfa.scm 312 */
									obj_t BgL_method5237z00_2919;

									{	/* Cfa/cfa.scm 312 */
										BgL_objectz00_bglt BgL_objz00_2920;

										BgL_objz00_2920 =
											(BgL_objectz00_bglt) (BgL_arg5528z00_2040);
										{	/* Cfa/cfa.scm 312 */
											long BgL_objzd2classzd2numz00_2921;

											BgL_objzd2classzd2numz00_2921 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2920);
											{	/* Cfa/cfa.scm 312 */
												obj_t BgL_arg2643z00_2922;

												BgL_arg2643z00_2922 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 312 */
													obj_t BgL_arrayz00_2924;

													int BgL_offsetz00_2925;

													BgL_arrayz00_2924 = BgL_arg2643z00_2922;
													BgL_offsetz00_2925 =
														(int) (BgL_objzd2classzd2numz00_2921);
													{	/* Cfa/cfa.scm 312 */
														long BgL_offsetz00_2926;

														BgL_offsetz00_2926 =
															((long) (BgL_offsetz00_2925) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 312 */
															long BgL_modz00_2927;

															{	/* Cfa/cfa.scm 312 */
																int BgL_arg2645z00_2928;

																BgL_arg2645z00_2928 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 312 */
																	long BgL_auxz00_3371;

																	BgL_auxz00_3371 =
																		(long) (BgL_arg2645z00_2928);
																	BgL_modz00_2927 =
																		(BgL_offsetz00_2926 / BgL_auxz00_3371);
															}}
															{	/* Cfa/cfa.scm 312 */
																long BgL_restz00_2929;

																{	/* Cfa/cfa.scm 312 */
																	int BgL_arg2644z00_2930;

																	BgL_arg2644z00_2930 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 312 */
																		long BgL_auxz00_3375;

																		BgL_auxz00_3375 =
																			(long) (BgL_arg2644z00_2930);
																		BgL_restz00_2929 =
																			(BgL_offsetz00_2926 % BgL_auxz00_3375);
																}}
																{	/* Cfa/cfa.scm 312 */

																	BgL_method5237z00_2919 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2924,
																			(int) (BgL_modz00_2927)),
																		(int) (BgL_restz00_2929));
									}}}}}}}}
									BgL_res5620z00_2944 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2919) (BgL_method5237z00_2919,
											(obj_t) (BgL_arg5528z00_2040), BEOA));
								}
								BgL_arg5526z00_2038 = BgL_res5620z00_2944;
						}}
						BgL_arg5527z00_2039 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5526z00_2038,
							BgL_arg5527z00_2039);
					}
					{
						obj_t BgL_auxz00_3388;

						{	/* Cfa/cfa.scm 313 */
							BgL_objectz00_bglt BgL_auxz00_3389;

							BgL_auxz00_3389 = (BgL_objectz00_bglt) (BgL_nodez00_2034);
							BgL_auxz00_3388 = BGL_OBJECT_WIDENING(BgL_auxz00_3389);
						}
						BgL_auxz00_3359 =
							(((BgL_makezd2boxzf2cinfoz20_bglt) CREF(BgL_auxz00_3388))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3359);
				}
			}
		}
	}



/* cfa!-jump-ex-it/Cinf5293 */
	obj_t BGl_cfaz12zd2jumpzd2exzd2itzf2Cinf5293z32zzcfa_cfaz00(obj_t
		BgL_envz00_3078, obj_t BgL_nodez00_3079)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 299 */
			{
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_nodez00_2025;

				{	/* Cfa/cfa.scm 300 */
					BgL_approxz00_bglt BgL_auxz00_3395;

					BgL_nodez00_2025 =
						(BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_nodez00_3079);
					{	/* Cfa/cfa.scm 301 */
						BgL_nodez00_bglt BgL_arg5523z00_2029;

						{
							BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3396;

							BgL_auxz00_3396 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2025);
							BgL_arg5523z00_2029 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_auxz00_3396))->
								BgL_exitz00);
						}
						{	/* Cfa/cfa.scm 301 */
							BgL_approxz00_bglt BgL_res5614z00_2887;

							{	/* Cfa/cfa.scm 301 */
								obj_t BgL_method5237z00_2862;

								{	/* Cfa/cfa.scm 301 */
									BgL_objectz00_bglt BgL_objz00_2863;

									BgL_objz00_2863 = (BgL_objectz00_bglt) (BgL_arg5523z00_2029);
									{	/* Cfa/cfa.scm 301 */
										long BgL_objzd2classzd2numz00_2864;

										BgL_objzd2classzd2numz00_2864 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2863);
										{	/* Cfa/cfa.scm 301 */
											obj_t BgL_arg2643z00_2865;

											BgL_arg2643z00_2865 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 301 */
												obj_t BgL_arrayz00_2867;

												int BgL_offsetz00_2868;

												BgL_arrayz00_2867 = BgL_arg2643z00_2865;
												BgL_offsetz00_2868 =
													(int) (BgL_objzd2classzd2numz00_2864);
												{	/* Cfa/cfa.scm 301 */
													long BgL_offsetz00_2869;

													BgL_offsetz00_2869 =
														((long) (BgL_offsetz00_2868) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 301 */
														long BgL_modz00_2870;

														{	/* Cfa/cfa.scm 301 */
															int BgL_arg2645z00_2871;

															BgL_arg2645z00_2871 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 301 */
																long BgL_auxz00_3407;

																BgL_auxz00_3407 = (long) (BgL_arg2645z00_2871);
																BgL_modz00_2870 =
																	(BgL_offsetz00_2869 / BgL_auxz00_3407);
														}}
														{	/* Cfa/cfa.scm 301 */
															long BgL_restz00_2872;

															{	/* Cfa/cfa.scm 301 */
																int BgL_arg2644z00_2873;

																BgL_arg2644z00_2873 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 301 */
																	long BgL_auxz00_3411;

																	BgL_auxz00_3411 =
																		(long) (BgL_arg2644z00_2873);
																	BgL_restz00_2872 =
																		(BgL_offsetz00_2869 % BgL_auxz00_3411);
															}}
															{	/* Cfa/cfa.scm 301 */

																BgL_method5237z00_2862 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2867,
																		(int) (BgL_modz00_2870)),
																	(int) (BgL_restz00_2872));
								}}}}}}}}
								BgL_res5614z00_2887 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2862)
									(BgL_method5237z00_2862, (obj_t) (BgL_arg5523z00_2029),
										BEOA));
							} BgL_res5614z00_2887;
					}}
					{	/* Cfa/cfa.scm 302 */
						BgL_approxz00_bglt BgL_valzd2approxzd2_2030;

						{	/* Cfa/cfa.scm 302 */
							BgL_nodez00_bglt BgL_arg5524z00_2031;

							{
								BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3422;

								BgL_auxz00_3422 =
									(BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2025);
								BgL_arg5524z00_2031 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_auxz00_3422))->
									BgL_valuez00);
							}
							{	/* Cfa/cfa.scm 302 */
								BgL_approxz00_bglt BgL_res5617z00_2915;

								{	/* Cfa/cfa.scm 302 */
									obj_t BgL_method5237z00_2890;

									{	/* Cfa/cfa.scm 302 */
										BgL_objectz00_bglt BgL_objz00_2891;

										BgL_objz00_2891 =
											(BgL_objectz00_bglt) (BgL_arg5524z00_2031);
										{	/* Cfa/cfa.scm 302 */
											long BgL_objzd2classzd2numz00_2892;

											BgL_objzd2classzd2numz00_2892 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2891);
											{	/* Cfa/cfa.scm 302 */
												obj_t BgL_arg2643z00_2893;

												BgL_arg2643z00_2893 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 302 */
													obj_t BgL_arrayz00_2895;

													int BgL_offsetz00_2896;

													BgL_arrayz00_2895 = BgL_arg2643z00_2893;
													BgL_offsetz00_2896 =
														(int) (BgL_objzd2classzd2numz00_2892);
													{	/* Cfa/cfa.scm 302 */
														long BgL_offsetz00_2897;

														BgL_offsetz00_2897 =
															((long) (BgL_offsetz00_2896) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 302 */
															long BgL_modz00_2898;

															{	/* Cfa/cfa.scm 302 */
																int BgL_arg2645z00_2899;

																BgL_arg2645z00_2899 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 302 */
																	long BgL_auxz00_3433;

																	BgL_auxz00_3433 =
																		(long) (BgL_arg2645z00_2899);
																	BgL_modz00_2898 =
																		(BgL_offsetz00_2897 / BgL_auxz00_3433);
															}}
															{	/* Cfa/cfa.scm 302 */
																long BgL_restz00_2900;

																{	/* Cfa/cfa.scm 302 */
																	int BgL_arg2644z00_2901;

																	BgL_arg2644z00_2901 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 302 */
																		long BgL_auxz00_3437;

																		BgL_auxz00_3437 =
																			(long) (BgL_arg2644z00_2901);
																		BgL_restz00_2900 =
																			(BgL_offsetz00_2897 % BgL_auxz00_3437);
																}}
																{	/* Cfa/cfa.scm 302 */

																	BgL_method5237z00_2890 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2895,
																			(int) (BgL_modz00_2898)),
																		(int) (BgL_restz00_2900));
									}}}}}}}}
									BgL_res5617z00_2915 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2890) (BgL_method5237z00_2890,
											(obj_t) (BgL_arg5524z00_2031), BEOA));
								}
								BgL_valzd2approxzd2_2030 = BgL_res5617z00_2915;
						}}
						BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_2030,
							CNST_TABLE_REF(((long) 1)));
						{
							obj_t BgL_auxz00_3450;

							{	/* Cfa/cfa.scm 304 */
								BgL_objectz00_bglt BgL_auxz00_3451;

								BgL_auxz00_3451 = (BgL_objectz00_bglt) (BgL_nodez00_2025);
								BgL_auxz00_3450 = BGL_OBJECT_WIDENING(BgL_auxz00_3451);
							}
							BgL_auxz00_3395 =
								(((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) CREF(BgL_auxz00_3450))->
								BgL_approxz00);
					}}
					return (obj_t) (BgL_auxz00_3395);
				}
			}
		}
	}



/* cfa!-set-ex-it/Cinfo5291 */
	obj_t BGl_cfaz12zd2setzd2exzd2itzf2Cinfo5291z32zzcfa_cfaz00(obj_t
		BgL_envz00_3080, obj_t BgL_nodez00_3081)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 291 */
			{
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_nodez00_2016;

				{	/* Cfa/cfa.scm 292 */
					BgL_approxz00_bglt BgL_auxz00_3457;

					BgL_nodez00_2016 =
						(BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_nodez00_3081);
					{	/* Cfa/cfa.scm 293 */
						BgL_approxz00_bglt BgL_arg5519z00_2020;

						obj_t BgL_arg5520z00_2021;

						{	/* Cfa/cfa.scm 293 */
							BgL_nodez00_bglt BgL_arg5521z00_2022;

							{
								BgL_setzd2exzd2itz00_bglt BgL_auxz00_3458;

								BgL_auxz00_3458 =
									(BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2016);
								BgL_arg5521z00_2022 =
									(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_auxz00_3458))->
									BgL_bodyz00);
							}
							{	/* Cfa/cfa.scm 293 */
								BgL_approxz00_bglt BgL_res5611z00_2858;

								{	/* Cfa/cfa.scm 293 */
									obj_t BgL_method5237z00_2833;

									{	/* Cfa/cfa.scm 293 */
										BgL_objectz00_bglt BgL_objz00_2834;

										BgL_objz00_2834 =
											(BgL_objectz00_bglt) (BgL_arg5521z00_2022);
										{	/* Cfa/cfa.scm 293 */
											long BgL_objzd2classzd2numz00_2835;

											BgL_objzd2classzd2numz00_2835 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2834);
											{	/* Cfa/cfa.scm 293 */
												obj_t BgL_arg2643z00_2836;

												BgL_arg2643z00_2836 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 293 */
													obj_t BgL_arrayz00_2838;

													int BgL_offsetz00_2839;

													BgL_arrayz00_2838 = BgL_arg2643z00_2836;
													BgL_offsetz00_2839 =
														(int) (BgL_objzd2classzd2numz00_2835);
													{	/* Cfa/cfa.scm 293 */
														long BgL_offsetz00_2840;

														BgL_offsetz00_2840 =
															((long) (BgL_offsetz00_2839) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 293 */
															long BgL_modz00_2841;

															{	/* Cfa/cfa.scm 293 */
																int BgL_arg2645z00_2842;

																BgL_arg2645z00_2842 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 293 */
																	long BgL_auxz00_3469;

																	BgL_auxz00_3469 =
																		(long) (BgL_arg2645z00_2842);
																	BgL_modz00_2841 =
																		(BgL_offsetz00_2840 / BgL_auxz00_3469);
															}}
															{	/* Cfa/cfa.scm 293 */
																long BgL_restz00_2843;

																{	/* Cfa/cfa.scm 293 */
																	int BgL_arg2644z00_2844;

																	BgL_arg2644z00_2844 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 293 */
																		long BgL_auxz00_3473;

																		BgL_auxz00_3473 =
																			(long) (BgL_arg2644z00_2844);
																		BgL_restz00_2843 =
																			(BgL_offsetz00_2840 % BgL_auxz00_3473);
																}}
																{	/* Cfa/cfa.scm 293 */

																	BgL_method5237z00_2833 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2838,
																			(int) (BgL_modz00_2841)),
																		(int) (BgL_restz00_2843));
									}}}}}}}}
									BgL_res5611z00_2858 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2833) (BgL_method5237z00_2833,
											(obj_t) (BgL_arg5521z00_2022), BEOA));
								}
								BgL_arg5519z00_2020 = BgL_res5611z00_2858;
						}}
						BgL_arg5520z00_2021 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5519z00_2020,
							BgL_arg5520z00_2021);
					}
					{
						obj_t BgL_auxz00_3486;

						{	/* Cfa/cfa.scm 294 */
							BgL_objectz00_bglt BgL_auxz00_3487;

							BgL_auxz00_3487 = (BgL_objectz00_bglt) (BgL_nodez00_2016);
							BgL_auxz00_3486 = BGL_OBJECT_WIDENING(BgL_auxz00_3487);
						}
						BgL_auxz00_3457 =
							(((BgL_setzd2exzd2itzf2cinfozf2_bglt) CREF(BgL_auxz00_3486))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3457);
				}
			}
		}
	}



/* cfa!-let-var5289 */
	obj_t BGl_cfaz12zd2letzd2var5289z12zzcfa_cfaz00(obj_t BgL_envz00_3082,
		obj_t BgL_nodez00_3083)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 256 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1990;

				{	/* Cfa/cfa.scm 257 */
					BgL_approxz00_bglt BgL_auxz00_3493;

					BgL_nodez00_1990 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3083);
					{	/* Cfa/cfa.scm 259 */
						obj_t BgL_g5235z00_1994;

						BgL_g5235z00_1994 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1990))->
							BgL_bindingsz00);
						{
							obj_t BgL_l5233z00_1996;

							BgL_l5233z00_1996 = BgL_g5235z00_1994;
						BgL_zc3anonymousza35508ze3z83_1997:
							if (PAIRP(BgL_l5233z00_1996))
								{	/* Cfa/cfa.scm 259 */
									{	/* Cfa/cfa.scm 260 */
										obj_t BgL_bindingz00_1999;

										BgL_bindingz00_1999 = CAR(BgL_l5233z00_1996);
										{	/* Cfa/cfa.scm 260 */
											obj_t BgL_varz00_2000;

											BgL_varz00_2000 = CAR(BgL_bindingz00_1999);
											{	/* Cfa/cfa.scm 260 */
												BgL_approxz00_bglt BgL_varzd2approxzd2_2001;

												{	/* Cfa/cfa.scm 261 */
													BgL_svarzf2cinfozf2_bglt BgL_obj3502z00_2771;

													{	/* Cfa/cfa.scm 261 */
														BgL_variablez00_bglt BgL_obj1611z00_2770;

														BgL_obj1611z00_2770 =
															(BgL_variablez00_bglt) (BgL_varz00_2000);
														BgL_obj3502z00_2771 =
															(BgL_svarzf2cinfozf2_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_2770))->BgL_valuez00));
													}
													{
														obj_t BgL_auxz00_3502;

														{	/* Cfa/cfa.scm 261 */
															BgL_objectz00_bglt BgL_auxz00_3503;

															BgL_auxz00_3503 =
																(BgL_objectz00_bglt) (BgL_obj3502z00_2771);
															BgL_auxz00_3502 =
																BGL_OBJECT_WIDENING(BgL_auxz00_3503);
														}
														BgL_varzd2approxzd2_2001 =
															(((BgL_svarzf2cinfozf2_bglt)
																CREF(BgL_auxz00_3502))->BgL_approxz00);
													}
												}
												{	/* Cfa/cfa.scm 261 */
													BgL_approxz00_bglt BgL_valzd2approxzd2_2002;

													{	/* Cfa/cfa.scm 262 */
														obj_t BgL_arg5514z00_2009;

														BgL_arg5514z00_2009 = CDR(BgL_bindingz00_1999);
														{	/* Cfa/cfa.scm 262 */
															BgL_approxz00_bglt BgL_res5605z00_2799;

															{	/* Cfa/cfa.scm 262 */
																BgL_nodez00_bglt BgL_nodez00_2773;

																BgL_nodez00_2773 =
																	(BgL_nodez00_bglt) (BgL_arg5514z00_2009);
																{	/* Cfa/cfa.scm 262 */
																	obj_t BgL_method5237z00_2774;

																	{	/* Cfa/cfa.scm 262 */
																		BgL_objectz00_bglt BgL_objz00_2775;

																		BgL_objz00_2775 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2773);
																		{	/* Cfa/cfa.scm 262 */
																			long BgL_objzd2classzd2numz00_2776;

																			BgL_objzd2classzd2numz00_2776 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2775);
																			{	/* Cfa/cfa.scm 262 */
																				obj_t BgL_arg2643z00_2777;

																				BgL_arg2643z00_2777 =
																					PROCEDURE_REF
																					(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																					(int) (((long) 1)));
																				{	/* Cfa/cfa.scm 262 */
																					obj_t BgL_arrayz00_2779;

																					int BgL_offsetz00_2780;

																					BgL_arrayz00_2779 =
																						BgL_arg2643z00_2777;
																					BgL_offsetz00_2780 =
																						(int)
																						(BgL_objzd2classzd2numz00_2776);
																					{	/* Cfa/cfa.scm 262 */
																						long BgL_offsetz00_2781;

																						BgL_offsetz00_2781 =
																							(
																							(long) (BgL_offsetz00_2780) -
																							OBJECT_TYPE);
																						{	/* Cfa/cfa.scm 262 */
																							long BgL_modz00_2782;

																							{	/* Cfa/cfa.scm 262 */
																								int BgL_arg2645z00_2783;

																								BgL_arg2645z00_2783 =
																									(int) (((long) 16));
																								{	/* Cfa/cfa.scm 262 */
																									long BgL_auxz00_3517;

																									BgL_auxz00_3517 =
																										(long)
																										(BgL_arg2645z00_2783);
																									BgL_modz00_2782 =
																										(BgL_offsetz00_2781 /
																										BgL_auxz00_3517);
																							}}
																							{	/* Cfa/cfa.scm 262 */
																								long BgL_restz00_2784;

																								{	/* Cfa/cfa.scm 262 */
																									int BgL_arg2644z00_2785;

																									BgL_arg2644z00_2785 =
																										(int) (((long) 16));
																									{	/* Cfa/cfa.scm 262 */
																										long BgL_auxz00_3521;

																										BgL_auxz00_3521 =
																											(long)
																											(BgL_arg2644z00_2785);
																										BgL_restz00_2784 =
																											(BgL_offsetz00_2781 %
																											BgL_auxz00_3521);
																								}}
																								{	/* Cfa/cfa.scm 262 */

																									BgL_method5237z00_2774 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2779,
																											(int) (BgL_modz00_2782)),
																										(int) (BgL_restz00_2784));
																	}}}}}}}}
																	BgL_res5605z00_2799 =
																		(BgL_approxz00_bglt) (PROCEDURE_ENTRY
																		(BgL_method5237z00_2774)
																		(BgL_method5237z00_2774,
																			(obj_t) (BgL_nodez00_2773), BEOA));
															}}
															BgL_valzd2approxzd2_2002 = BgL_res5605z00_2799;
													}}
													{	/* Cfa/cfa.scm 262 */

														{	/* Cfa/cfa.scm 263 */
															BgL_typez00_bglt BgL_vtypez00_2003;

															BgL_typez00_bglt BgL_atypez00_2004;

															{
																BgL_variablez00_bglt BgL_auxz00_3532;

																BgL_auxz00_3532 =
																	(BgL_variablez00_bglt) (BgL_varz00_2000);
																BgL_vtypez00_2003 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3532))->BgL_typez00);
															}
															BgL_atypez00_2004 =
																(((BgL_approxz00_bglt)
																	CREF(BgL_valzd2approxzd2_2002))->BgL_typez00);
															BGl_unionzd2approxz12zc0zzcfa_approxz00
																(BgL_varzd2approxzd2_2001,
																BgL_valzd2approxzd2_2002);
															{	/* Cfa/cfa.scm 277 */
																bool_t BgL_testz00_3537;

																if (
																	((obj_t) (BgL_vtypez00_2003) ==
																		BGl_za2_za2z00zztype_cachez00))
																	{	/* Cfa/cfa.scm 277 */
																		BgL_testz00_3537 = ((bool_t) 0);
																	}
																else
																	{	/* Cfa/cfa.scm 277 */
																		if (
																			((obj_t) (BgL_vtypez00_2003) ==
																				BGl_za2objza2z00zztype_cachez00))
																			{	/* Cfa/cfa.scm 278 */
																				BgL_testz00_3537 = ((bool_t) 0);
																			}
																		else
																			{	/* Cfa/cfa.scm 278 */
																				if (
																					((obj_t) (BgL_atypez00_2004) ==
																						BGl_za2_za2z00zztype_cachez00))
																					{	/* Cfa/cfa.scm 279 */
																						BgL_testz00_3537 = ((bool_t) 0);
																					}
																				else
																					{	/* Cfa/cfa.scm 279 */
																						BgL_testz00_3537 =
																							(
																							(obj_t) (BgL_atypez00_2004) ==
																							BGl_za2objza2z00zztype_cachez00);
																					}
																			}
																	}
																if (BgL_testz00_3537)
																	{	/* Cfa/cfa.scm 277 */
																		BGl_approxzd2setzd2topz12z12zzcfa_approxz00
																			(BgL_valzd2approxzd2_2002);
																		(obj_t) (BGl_loosez12z12zzcfa_loosez00
																			(BgL_valzd2approxzd2_2002,
																				CNST_TABLE_REF(((long) 1))));
																	}
																else
																	{	/* Cfa/cfa.scm 277 */
																		BFALSE;
																	}
															}
														}
													}
												}
											}
										}
									}
									{
										obj_t BgL_l5233z00_3553;

										BgL_l5233z00_3553 = CDR(BgL_l5233z00_1996);
										BgL_l5233z00_1996 = BgL_l5233z00_3553;
										goto BgL_zc3anonymousza35508ze3z83_1997;
									}
								}
							else
								{	/* Cfa/cfa.scm 259 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/cfa.scm 286 */
						BgL_nodez00_bglt BgL_arg5517z00_2013;

						BgL_arg5517z00_2013 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1990))->BgL_bodyz00);
						{	/* Cfa/cfa.scm 286 */
							BgL_approxz00_bglt BgL_res5608z00_2830;

							{	/* Cfa/cfa.scm 286 */
								obj_t BgL_method5237z00_2805;

								{	/* Cfa/cfa.scm 286 */
									BgL_objectz00_bglt BgL_objz00_2806;

									BgL_objz00_2806 = (BgL_objectz00_bglt) (BgL_arg5517z00_2013);
									{	/* Cfa/cfa.scm 286 */
										long BgL_objzd2classzd2numz00_2807;

										BgL_objzd2classzd2numz00_2807 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2806);
										{	/* Cfa/cfa.scm 286 */
											obj_t BgL_arg2643z00_2808;

											BgL_arg2643z00_2808 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 286 */
												obj_t BgL_arrayz00_2810;

												int BgL_offsetz00_2811;

												BgL_arrayz00_2810 = BgL_arg2643z00_2808;
												BgL_offsetz00_2811 =
													(int) (BgL_objzd2classzd2numz00_2807);
												{	/* Cfa/cfa.scm 286 */
													long BgL_offsetz00_2812;

													BgL_offsetz00_2812 =
														((long) (BgL_offsetz00_2811) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 286 */
														long BgL_modz00_2813;

														{	/* Cfa/cfa.scm 286 */
															int BgL_arg2645z00_2814;

															BgL_arg2645z00_2814 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 286 */
																long BgL_auxz00_3564;

																BgL_auxz00_3564 = (long) (BgL_arg2645z00_2814);
																BgL_modz00_2813 =
																	(BgL_offsetz00_2812 / BgL_auxz00_3564);
														}}
														{	/* Cfa/cfa.scm 286 */
															long BgL_restz00_2815;

															{	/* Cfa/cfa.scm 286 */
																int BgL_arg2644z00_2816;

																BgL_arg2644z00_2816 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 286 */
																	long BgL_auxz00_3568;

																	BgL_auxz00_3568 =
																		(long) (BgL_arg2644z00_2816);
																	BgL_restz00_2815 =
																		(BgL_offsetz00_2812 % BgL_auxz00_3568);
															}}
															{	/* Cfa/cfa.scm 286 */

																BgL_method5237z00_2805 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2810,
																		(int) (BgL_modz00_2813)),
																	(int) (BgL_restz00_2815));
								}}}}}}}}
								BgL_res5608z00_2830 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2805)
									(BgL_method5237z00_2805, (obj_t) (BgL_arg5517z00_2013),
										BEOA));
							}
							BgL_auxz00_3493 = BgL_res5608z00_2830;
					}}
					return (obj_t) (BgL_auxz00_3493);
				}
			}
		}
	}



/* cfa!-let-fun5287 */
	obj_t BGl_cfaz12zd2letzd2fun5287z12zzcfa_cfaz00(obj_t BgL_envz00_3084,
		obj_t BgL_nodez00_3085)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 249 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1983;

				{	/* Cfa/cfa.scm 250 */
					BgL_approxz00_bglt BgL_auxz00_3581;

					BgL_nodez00_1983 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3085);
					{	/* Cfa/cfa.scm 250 */
						BgL_nodez00_bglt BgL_arg5506z00_2737;

						BgL_arg5506z00_2737 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1983))->BgL_bodyz00);
						{	/* Cfa/cfa.scm 250 */
							BgL_approxz00_bglt BgL_res5602z00_2765;

							{	/* Cfa/cfa.scm 250 */
								obj_t BgL_method5237z00_2740;

								{	/* Cfa/cfa.scm 250 */
									BgL_objectz00_bglt BgL_objz00_2741;

									BgL_objz00_2741 = (BgL_objectz00_bglt) (BgL_arg5506z00_2737);
									{	/* Cfa/cfa.scm 250 */
										long BgL_objzd2classzd2numz00_2742;

										BgL_objzd2classzd2numz00_2742 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2741);
										{	/* Cfa/cfa.scm 250 */
											obj_t BgL_arg2643z00_2743;

											BgL_arg2643z00_2743 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 250 */
												obj_t BgL_arrayz00_2745;

												int BgL_offsetz00_2746;

												BgL_arrayz00_2745 = BgL_arg2643z00_2743;
												BgL_offsetz00_2746 =
													(int) (BgL_objzd2classzd2numz00_2742);
												{	/* Cfa/cfa.scm 250 */
													long BgL_offsetz00_2747;

													BgL_offsetz00_2747 =
														((long) (BgL_offsetz00_2746) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 250 */
														long BgL_modz00_2748;

														{	/* Cfa/cfa.scm 250 */
															int BgL_arg2645z00_2749;

															BgL_arg2645z00_2749 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 250 */
																long BgL_auxz00_3591;

																BgL_auxz00_3591 = (long) (BgL_arg2645z00_2749);
																BgL_modz00_2748 =
																	(BgL_offsetz00_2747 / BgL_auxz00_3591);
														}}
														{	/* Cfa/cfa.scm 250 */
															long BgL_restz00_2750;

															{	/* Cfa/cfa.scm 250 */
																int BgL_arg2644z00_2751;

																BgL_arg2644z00_2751 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 250 */
																	long BgL_auxz00_3595;

																	BgL_auxz00_3595 =
																		(long) (BgL_arg2644z00_2751);
																	BgL_restz00_2750 =
																		(BgL_offsetz00_2747 % BgL_auxz00_3595);
															}}
															{	/* Cfa/cfa.scm 250 */

																BgL_method5237z00_2740 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2745,
																		(int) (BgL_modz00_2748)),
																	(int) (BgL_restz00_2750));
								}}}}}}}}
								BgL_res5602z00_2765 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2740)
									(BgL_method5237z00_2740, (obj_t) (BgL_arg5506z00_2737),
										BEOA));
							}
							BgL_auxz00_3581 = BgL_res5602z00_2765;
					}}
					return (obj_t) (BgL_auxz00_3581);
				}
			}
		}
	}



/* cfa!-select/Cinfo5285 */
	obj_t BGl_cfaz12zd2selectzf2Cinfo5285z32zzcfa_cfaz00(obj_t BgL_envz00_3086,
		obj_t BgL_nodez00_3087)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 235 */
			{
				BgL_selectzf2cinfozf2_bglt BgL_nodez00_1965;

				{	/* Cfa/cfa.scm 236 */
					BgL_approxz00_bglt BgL_auxz00_3608;

					BgL_nodez00_1965 = (BgL_selectzf2cinfozf2_bglt) (BgL_nodez00_3087);
					{	/* Cfa/cfa.scm 237 */
						BgL_nodez00_bglt BgL_arg5498z00_1969;

						{
							BgL_selectz00_bglt BgL_auxz00_3609;

							BgL_auxz00_3609 = (BgL_selectz00_bglt) (BgL_nodez00_1965);
							BgL_arg5498z00_1969 =
								(((BgL_selectz00_bglt) CREF(BgL_auxz00_3609))->BgL_testz00);
						}
						{	/* Cfa/cfa.scm 237 */
							BgL_approxz00_bglt BgL_res5596z00_2702;

							{	/* Cfa/cfa.scm 237 */
								obj_t BgL_method5237z00_2677;

								{	/* Cfa/cfa.scm 237 */
									BgL_objectz00_bglt BgL_objz00_2678;

									BgL_objz00_2678 = (BgL_objectz00_bglt) (BgL_arg5498z00_1969);
									{	/* Cfa/cfa.scm 237 */
										long BgL_objzd2classzd2numz00_2679;

										BgL_objzd2classzd2numz00_2679 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2678);
										{	/* Cfa/cfa.scm 237 */
											obj_t BgL_arg2643z00_2680;

											BgL_arg2643z00_2680 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 237 */
												obj_t BgL_arrayz00_2682;

												int BgL_offsetz00_2683;

												BgL_arrayz00_2682 = BgL_arg2643z00_2680;
												BgL_offsetz00_2683 =
													(int) (BgL_objzd2classzd2numz00_2679);
												{	/* Cfa/cfa.scm 237 */
													long BgL_offsetz00_2684;

													BgL_offsetz00_2684 =
														((long) (BgL_offsetz00_2683) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 237 */
														long BgL_modz00_2685;

														{	/* Cfa/cfa.scm 237 */
															int BgL_arg2645z00_2686;

															BgL_arg2645z00_2686 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 237 */
																long BgL_auxz00_3620;

																BgL_auxz00_3620 = (long) (BgL_arg2645z00_2686);
																BgL_modz00_2685 =
																	(BgL_offsetz00_2684 / BgL_auxz00_3620);
														}}
														{	/* Cfa/cfa.scm 237 */
															long BgL_restz00_2687;

															{	/* Cfa/cfa.scm 237 */
																int BgL_arg2644z00_2688;

																BgL_arg2644z00_2688 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 237 */
																	long BgL_auxz00_3624;

																	BgL_auxz00_3624 =
																		(long) (BgL_arg2644z00_2688);
																	BgL_restz00_2687 =
																		(BgL_offsetz00_2684 % BgL_auxz00_3624);
															}}
															{	/* Cfa/cfa.scm 237 */

																BgL_method5237z00_2677 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2682,
																		(int) (BgL_modz00_2685)),
																	(int) (BgL_restz00_2687));
								}}}}}}}}
								BgL_res5596z00_2702 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2677)
									(BgL_method5237z00_2677, (obj_t) (BgL_arg5498z00_1969),
										BEOA));
							} BgL_res5596z00_2702;
					}}
					{	/* Cfa/cfa.scm 238 */
						BgL_approxz00_bglt BgL_reszd2approxzd2_1970;

						{
							obj_t BgL_auxz00_3635;

							{	/* Cfa/cfa.scm 238 */
								BgL_objectz00_bglt BgL_auxz00_3636;

								BgL_auxz00_3636 = (BgL_objectz00_bglt) (BgL_nodez00_1965);
								BgL_auxz00_3635 = BGL_OBJECT_WIDENING(BgL_auxz00_3636);
							}
							BgL_reszd2approxzd2_1970 =
								(((BgL_selectzf2cinfozf2_bglt) CREF(BgL_auxz00_3635))->
								BgL_approxz00);
						}
						{
							obj_t BgL_clsz00_1973;

							{	/* Cfa/cfa.scm 239 */
								obj_t BgL_arg5499z00_1972;

								{
									BgL_selectz00_bglt BgL_auxz00_3640;

									BgL_auxz00_3640 = (BgL_selectz00_bglt) (BgL_nodez00_1965);
									BgL_arg5499z00_1972 =
										(((BgL_selectz00_bglt) CREF(BgL_auxz00_3640))->
										BgL_clausesz00);
								}
								BgL_clsz00_1973 = BgL_arg5499z00_1972;
							BgL_zc3anonymousza35500ze3z83_1974:
								if (NULLP(BgL_clsz00_1973))
									{	/* Cfa/cfa.scm 240 */
										BgL_auxz00_3608 = BgL_reszd2approxzd2_1970;
									}
								else
									{	/* Cfa/cfa.scm 242 */
										BgL_approxz00_bglt BgL_newzd2approxzd2_1976;

										{	/* Cfa/cfa.scm 242 */
											obj_t BgL_arg5503z00_1978;

											BgL_arg5503z00_1978 = CDR(CAR(BgL_clsz00_1973));
											{	/* Cfa/cfa.scm 242 */
												BgL_approxz00_bglt BgL_res5599z00_2734;

												{	/* Cfa/cfa.scm 242 */
													BgL_nodez00_bglt BgL_nodez00_2708;

													BgL_nodez00_2708 =
														(BgL_nodez00_bglt) (BgL_arg5503z00_1978);
													{	/* Cfa/cfa.scm 242 */
														obj_t BgL_method5237z00_2709;

														{	/* Cfa/cfa.scm 242 */
															BgL_objectz00_bglt BgL_objz00_2710;

															BgL_objz00_2710 =
																(BgL_objectz00_bglt) (BgL_nodez00_2708);
															{	/* Cfa/cfa.scm 242 */
																long BgL_objzd2classzd2numz00_2711;

																BgL_objzd2classzd2numz00_2711 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2710);
																{	/* Cfa/cfa.scm 242 */
																	obj_t BgL_arg2643z00_2712;

																	BgL_arg2643z00_2712 =
																		PROCEDURE_REF
																		(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																		(int) (((long) 1)));
																	{	/* Cfa/cfa.scm 242 */
																		obj_t BgL_arrayz00_2714;

																		int BgL_offsetz00_2715;

																		BgL_arrayz00_2714 = BgL_arg2643z00_2712;
																		BgL_offsetz00_2715 =
																			(int) (BgL_objzd2classzd2numz00_2711);
																		{	/* Cfa/cfa.scm 242 */
																			long BgL_offsetz00_2716;

																			BgL_offsetz00_2716 =
																				(
																				(long) (BgL_offsetz00_2715) -
																				OBJECT_TYPE);
																			{	/* Cfa/cfa.scm 242 */
																				long BgL_modz00_2717;

																				{	/* Cfa/cfa.scm 242 */
																					int BgL_arg2645z00_2718;

																					BgL_arg2645z00_2718 =
																						(int) (((long) 16));
																					{	/* Cfa/cfa.scm 242 */
																						long BgL_auxz00_3656;

																						BgL_auxz00_3656 =
																							(long) (BgL_arg2645z00_2718);
																						BgL_modz00_2717 =
																							(BgL_offsetz00_2716 /
																							BgL_auxz00_3656);
																				}}
																				{	/* Cfa/cfa.scm 242 */
																					long BgL_restz00_2719;

																					{	/* Cfa/cfa.scm 242 */
																						int BgL_arg2644z00_2720;

																						BgL_arg2644z00_2720 =
																							(int) (((long) 16));
																						{	/* Cfa/cfa.scm 242 */
																							long BgL_auxz00_3660;

																							BgL_auxz00_3660 =
																								(long) (BgL_arg2644z00_2720);
																							BgL_restz00_2719 =
																								(BgL_offsetz00_2716 %
																								BgL_auxz00_3660);
																					}}
																					{	/* Cfa/cfa.scm 242 */

																						BgL_method5237z00_2709 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2714,
																								(int) (BgL_modz00_2717)),
																							(int) (BgL_restz00_2719));
														}}}}}}}}
														BgL_res5599z00_2734 =
															(BgL_approxz00_bglt) (PROCEDURE_ENTRY
															(BgL_method5237z00_2709) (BgL_method5237z00_2709,
																(obj_t) (BgL_nodez00_2708), BEOA));
												}}
												BgL_newzd2approxzd2_1976 = BgL_res5599z00_2734;
										}}
										BGl_unionzd2approxz12zc0zzcfa_approxz00
											(BgL_reszd2approxzd2_1970, BgL_newzd2approxzd2_1976);
										{
											obj_t BgL_clsz00_3672;

											BgL_clsz00_3672 = CDR(BgL_clsz00_1973);
											BgL_clsz00_1973 = BgL_clsz00_3672;
											goto BgL_zc3anonymousza35500ze3z83_1974;
										}
									}
							}
						}
					}
					return (obj_t) (BgL_auxz00_3608);
				}
			}
		}
	}



/* cfa!-fail/Cinfo5283 */
	obj_t BGl_cfaz12zd2failzf2Cinfo5283z32zzcfa_cfaz00(obj_t BgL_envz00_3088,
		obj_t BgL_nodez00_3089)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 225 */
			{
				BgL_failzf2cinfozf2_bglt BgL_nodez00_1950;

				{	/* Cfa/cfa.scm 226 */
					BgL_approxz00_bglt BgL_auxz00_3676;

					BgL_nodez00_1950 = (BgL_failzf2cinfozf2_bglt) (BgL_nodez00_3089);
					{	/* Cfa/cfa.scm 227 */
						BgL_approxz00_bglt BgL_arg5488z00_1954;

						obj_t BgL_arg5489z00_1955;

						{	/* Cfa/cfa.scm 227 */
							BgL_nodez00_bglt BgL_arg5490z00_1956;

							{
								BgL_failz00_bglt BgL_auxz00_3677;

								BgL_auxz00_3677 = (BgL_failz00_bglt) (BgL_nodez00_1950);
								BgL_arg5490z00_1956 =
									(((BgL_failz00_bglt) CREF(BgL_auxz00_3677))->BgL_procz00);
							}
							{	/* Cfa/cfa.scm 227 */
								BgL_approxz00_bglt BgL_res5587z00_2617;

								{	/* Cfa/cfa.scm 227 */
									obj_t BgL_method5237z00_2592;

									{	/* Cfa/cfa.scm 227 */
										BgL_objectz00_bglt BgL_objz00_2593;

										BgL_objz00_2593 =
											(BgL_objectz00_bglt) (BgL_arg5490z00_1956);
										{	/* Cfa/cfa.scm 227 */
											long BgL_objzd2classzd2numz00_2594;

											BgL_objzd2classzd2numz00_2594 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2593);
											{	/* Cfa/cfa.scm 227 */
												obj_t BgL_arg2643z00_2595;

												BgL_arg2643z00_2595 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 227 */
													obj_t BgL_arrayz00_2597;

													int BgL_offsetz00_2598;

													BgL_arrayz00_2597 = BgL_arg2643z00_2595;
													BgL_offsetz00_2598 =
														(int) (BgL_objzd2classzd2numz00_2594);
													{	/* Cfa/cfa.scm 227 */
														long BgL_offsetz00_2599;

														BgL_offsetz00_2599 =
															((long) (BgL_offsetz00_2598) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 227 */
															long BgL_modz00_2600;

															{	/* Cfa/cfa.scm 227 */
																int BgL_arg2645z00_2601;

																BgL_arg2645z00_2601 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 227 */
																	long BgL_auxz00_3688;

																	BgL_auxz00_3688 =
																		(long) (BgL_arg2645z00_2601);
																	BgL_modz00_2600 =
																		(BgL_offsetz00_2599 / BgL_auxz00_3688);
															}}
															{	/* Cfa/cfa.scm 227 */
																long BgL_restz00_2602;

																{	/* Cfa/cfa.scm 227 */
																	int BgL_arg2644z00_2603;

																	BgL_arg2644z00_2603 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 227 */
																		long BgL_auxz00_3692;

																		BgL_auxz00_3692 =
																			(long) (BgL_arg2644z00_2603);
																		BgL_restz00_2602 =
																			(BgL_offsetz00_2599 % BgL_auxz00_3692);
																}}
																{	/* Cfa/cfa.scm 227 */

																	BgL_method5237z00_2592 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2597,
																			(int) (BgL_modz00_2600)),
																		(int) (BgL_restz00_2602));
									}}}}}}}}
									BgL_res5587z00_2617 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2592) (BgL_method5237z00_2592,
											(obj_t) (BgL_arg5490z00_1956), BEOA));
								}
								BgL_arg5488z00_1954 = BgL_res5587z00_2617;
						}}
						BgL_arg5489z00_1955 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5488z00_1954,
							BgL_arg5489z00_1955);
					}
					{	/* Cfa/cfa.scm 228 */
						BgL_approxz00_bglt BgL_arg5491z00_1957;

						obj_t BgL_arg5492z00_1958;

						{	/* Cfa/cfa.scm 228 */
							BgL_nodez00_bglt BgL_arg5493z00_1959;

							{
								BgL_failz00_bglt BgL_auxz00_3705;

								BgL_auxz00_3705 = (BgL_failz00_bglt) (BgL_nodez00_1950);
								BgL_arg5493z00_1959 =
									(((BgL_failz00_bglt) CREF(BgL_auxz00_3705))->BgL_msgz00);
							}
							{	/* Cfa/cfa.scm 228 */
								BgL_approxz00_bglt BgL_res5590z00_2645;

								{	/* Cfa/cfa.scm 228 */
									obj_t BgL_method5237z00_2620;

									{	/* Cfa/cfa.scm 228 */
										BgL_objectz00_bglt BgL_objz00_2621;

										BgL_objz00_2621 =
											(BgL_objectz00_bglt) (BgL_arg5493z00_1959);
										{	/* Cfa/cfa.scm 228 */
											long BgL_objzd2classzd2numz00_2622;

											BgL_objzd2classzd2numz00_2622 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2621);
											{	/* Cfa/cfa.scm 228 */
												obj_t BgL_arg2643z00_2623;

												BgL_arg2643z00_2623 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 228 */
													obj_t BgL_arrayz00_2625;

													int BgL_offsetz00_2626;

													BgL_arrayz00_2625 = BgL_arg2643z00_2623;
													BgL_offsetz00_2626 =
														(int) (BgL_objzd2classzd2numz00_2622);
													{	/* Cfa/cfa.scm 228 */
														long BgL_offsetz00_2627;

														BgL_offsetz00_2627 =
															((long) (BgL_offsetz00_2626) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 228 */
															long BgL_modz00_2628;

															{	/* Cfa/cfa.scm 228 */
																int BgL_arg2645z00_2629;

																BgL_arg2645z00_2629 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 228 */
																	long BgL_auxz00_3716;

																	BgL_auxz00_3716 =
																		(long) (BgL_arg2645z00_2629);
																	BgL_modz00_2628 =
																		(BgL_offsetz00_2627 / BgL_auxz00_3716);
															}}
															{	/* Cfa/cfa.scm 228 */
																long BgL_restz00_2630;

																{	/* Cfa/cfa.scm 228 */
																	int BgL_arg2644z00_2631;

																	BgL_arg2644z00_2631 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 228 */
																		long BgL_auxz00_3720;

																		BgL_auxz00_3720 =
																			(long) (BgL_arg2644z00_2631);
																		BgL_restz00_2630 =
																			(BgL_offsetz00_2627 % BgL_auxz00_3720);
																}}
																{	/* Cfa/cfa.scm 228 */

																	BgL_method5237z00_2620 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2625,
																			(int) (BgL_modz00_2628)),
																		(int) (BgL_restz00_2630));
									}}}}}}}}
									BgL_res5590z00_2645 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2620) (BgL_method5237z00_2620,
											(obj_t) (BgL_arg5493z00_1959), BEOA));
								}
								BgL_arg5491z00_1957 = BgL_res5590z00_2645;
						}}
						BgL_arg5492z00_1958 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5491z00_1957,
							BgL_arg5492z00_1958);
					}
					{	/* Cfa/cfa.scm 229 */
						BgL_approxz00_bglt BgL_arg5494z00_1960;

						obj_t BgL_arg5495z00_1961;

						{	/* Cfa/cfa.scm 229 */
							BgL_nodez00_bglt BgL_arg5496z00_1962;

							{
								BgL_failz00_bglt BgL_auxz00_3733;

								BgL_auxz00_3733 = (BgL_failz00_bglt) (BgL_nodez00_1950);
								BgL_arg5496z00_1962 =
									(((BgL_failz00_bglt) CREF(BgL_auxz00_3733))->BgL_objz00);
							}
							{	/* Cfa/cfa.scm 229 */
								BgL_approxz00_bglt BgL_res5593z00_2673;

								{	/* Cfa/cfa.scm 229 */
									obj_t BgL_method5237z00_2648;

									{	/* Cfa/cfa.scm 229 */
										BgL_objectz00_bglt BgL_objz00_2649;

										BgL_objz00_2649 =
											(BgL_objectz00_bglt) (BgL_arg5496z00_1962);
										{	/* Cfa/cfa.scm 229 */
											long BgL_objzd2classzd2numz00_2650;

											BgL_objzd2classzd2numz00_2650 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2649);
											{	/* Cfa/cfa.scm 229 */
												obj_t BgL_arg2643z00_2651;

												BgL_arg2643z00_2651 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 229 */
													obj_t BgL_arrayz00_2653;

													int BgL_offsetz00_2654;

													BgL_arrayz00_2653 = BgL_arg2643z00_2651;
													BgL_offsetz00_2654 =
														(int) (BgL_objzd2classzd2numz00_2650);
													{	/* Cfa/cfa.scm 229 */
														long BgL_offsetz00_2655;

														BgL_offsetz00_2655 =
															((long) (BgL_offsetz00_2654) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 229 */
															long BgL_modz00_2656;

															{	/* Cfa/cfa.scm 229 */
																int BgL_arg2645z00_2657;

																BgL_arg2645z00_2657 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 229 */
																	long BgL_auxz00_3744;

																	BgL_auxz00_3744 =
																		(long) (BgL_arg2645z00_2657);
																	BgL_modz00_2656 =
																		(BgL_offsetz00_2655 / BgL_auxz00_3744);
															}}
															{	/* Cfa/cfa.scm 229 */
																long BgL_restz00_2658;

																{	/* Cfa/cfa.scm 229 */
																	int BgL_arg2644z00_2659;

																	BgL_arg2644z00_2659 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 229 */
																		long BgL_auxz00_3748;

																		BgL_auxz00_3748 =
																			(long) (BgL_arg2644z00_2659);
																		BgL_restz00_2658 =
																			(BgL_offsetz00_2655 % BgL_auxz00_3748);
																}}
																{	/* Cfa/cfa.scm 229 */

																	BgL_method5237z00_2648 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2653,
																			(int) (BgL_modz00_2656)),
																		(int) (BgL_restz00_2658));
									}}}}}}}}
									BgL_res5593z00_2673 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2648) (BgL_method5237z00_2648,
											(obj_t) (BgL_arg5496z00_1962), BEOA));
								}
								BgL_arg5494z00_1960 = BgL_res5593z00_2673;
						}}
						BgL_arg5495z00_1961 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5494z00_1960,
							BgL_arg5495z00_1961);
					}
					{
						obj_t BgL_auxz00_3761;

						{	/* Cfa/cfa.scm 230 */
							BgL_objectz00_bglt BgL_auxz00_3762;

							BgL_auxz00_3762 = (BgL_objectz00_bglt) (BgL_nodez00_1950);
							BgL_auxz00_3761 = BGL_OBJECT_WIDENING(BgL_auxz00_3762);
						}
						BgL_auxz00_3676 =
							(((BgL_failzf2cinfozf2_bglt) CREF(BgL_auxz00_3761))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3676);
				}
			}
		}
	}



/* cfa!-conditional/Cin5281 */
	obj_t BGl_cfaz12zd2conditionalzf2Cin5281z32zzcfa_cfaz00(obj_t BgL_envz00_3090,
		obj_t BgL_nodez00_3091)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 213 */
			{
				BgL_conditionalzf2cinfozf2_bglt BgL_nodez00_1937;

				{	/* Cfa/cfa.scm 214 */
					BgL_approxz00_bglt BgL_auxz00_3768;

					BgL_nodez00_1937 =
						(BgL_conditionalzf2cinfozf2_bglt) (BgL_nodez00_3091);
					{	/* Cfa/cfa.scm 215 */
						BgL_nodez00_bglt BgL_arg5482z00_1941;

						{
							BgL_conditionalz00_bglt BgL_auxz00_3769;

							BgL_auxz00_3769 = (BgL_conditionalz00_bglt) (BgL_nodez00_1937);
							BgL_arg5482z00_1941 =
								(((BgL_conditionalz00_bglt) CREF(BgL_auxz00_3769))->
								BgL_testz00);
						}
						{	/* Cfa/cfa.scm 215 */
							BgL_approxz00_bglt BgL_res5578z00_2530;

							{	/* Cfa/cfa.scm 215 */
								obj_t BgL_method5237z00_2505;

								{	/* Cfa/cfa.scm 215 */
									BgL_objectz00_bglt BgL_objz00_2506;

									BgL_objz00_2506 = (BgL_objectz00_bglt) (BgL_arg5482z00_1941);
									{	/* Cfa/cfa.scm 215 */
										long BgL_objzd2classzd2numz00_2507;

										BgL_objzd2classzd2numz00_2507 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2506);
										{	/* Cfa/cfa.scm 215 */
											obj_t BgL_arg2643z00_2508;

											BgL_arg2643z00_2508 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 215 */
												obj_t BgL_arrayz00_2510;

												int BgL_offsetz00_2511;

												BgL_arrayz00_2510 = BgL_arg2643z00_2508;
												BgL_offsetz00_2511 =
													(int) (BgL_objzd2classzd2numz00_2507);
												{	/* Cfa/cfa.scm 215 */
													long BgL_offsetz00_2512;

													BgL_offsetz00_2512 =
														((long) (BgL_offsetz00_2511) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 215 */
														long BgL_modz00_2513;

														{	/* Cfa/cfa.scm 215 */
															int BgL_arg2645z00_2514;

															BgL_arg2645z00_2514 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 215 */
																long BgL_auxz00_3780;

																BgL_auxz00_3780 = (long) (BgL_arg2645z00_2514);
																BgL_modz00_2513 =
																	(BgL_offsetz00_2512 / BgL_auxz00_3780);
														}}
														{	/* Cfa/cfa.scm 215 */
															long BgL_restz00_2515;

															{	/* Cfa/cfa.scm 215 */
																int BgL_arg2644z00_2516;

																BgL_arg2644z00_2516 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 215 */
																	long BgL_auxz00_3784;

																	BgL_auxz00_3784 =
																		(long) (BgL_arg2644z00_2516);
																	BgL_restz00_2515 =
																		(BgL_offsetz00_2512 % BgL_auxz00_3784);
															}}
															{	/* Cfa/cfa.scm 215 */

																BgL_method5237z00_2505 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2510,
																		(int) (BgL_modz00_2513)),
																	(int) (BgL_restz00_2515));
								}}}}}}}}
								BgL_res5578z00_2530 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2505)
									(BgL_method5237z00_2505, (obj_t) (BgL_arg5482z00_1941),
										BEOA));
							} BgL_res5578z00_2530;
					}}
					{	/* Cfa/cfa.scm 216 */
						BgL_approxz00_bglt BgL_thenzd2approxzd2_1942;

						BgL_approxz00_bglt BgL_elsezd2approxzd2_1943;

						{	/* Cfa/cfa.scm 216 */
							BgL_nodez00_bglt BgL_arg5485z00_1946;

							{
								BgL_conditionalz00_bglt BgL_auxz00_3795;

								BgL_auxz00_3795 = (BgL_conditionalz00_bglt) (BgL_nodez00_1937);
								BgL_arg5485z00_1946 =
									(((BgL_conditionalz00_bglt) CREF(BgL_auxz00_3795))->
									BgL_truez00);
							}
							{	/* Cfa/cfa.scm 216 */
								BgL_approxz00_bglt BgL_res5581z00_2558;

								{	/* Cfa/cfa.scm 216 */
									obj_t BgL_method5237z00_2533;

									{	/* Cfa/cfa.scm 216 */
										BgL_objectz00_bglt BgL_objz00_2534;

										BgL_objz00_2534 =
											(BgL_objectz00_bglt) (BgL_arg5485z00_1946);
										{	/* Cfa/cfa.scm 216 */
											long BgL_objzd2classzd2numz00_2535;

											BgL_objzd2classzd2numz00_2535 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2534);
											{	/* Cfa/cfa.scm 216 */
												obj_t BgL_arg2643z00_2536;

												BgL_arg2643z00_2536 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 216 */
													obj_t BgL_arrayz00_2538;

													int BgL_offsetz00_2539;

													BgL_arrayz00_2538 = BgL_arg2643z00_2536;
													BgL_offsetz00_2539 =
														(int) (BgL_objzd2classzd2numz00_2535);
													{	/* Cfa/cfa.scm 216 */
														long BgL_offsetz00_2540;

														BgL_offsetz00_2540 =
															((long) (BgL_offsetz00_2539) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 216 */
															long BgL_modz00_2541;

															{	/* Cfa/cfa.scm 216 */
																int BgL_arg2645z00_2542;

																BgL_arg2645z00_2542 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 216 */
																	long BgL_auxz00_3806;

																	BgL_auxz00_3806 =
																		(long) (BgL_arg2645z00_2542);
																	BgL_modz00_2541 =
																		(BgL_offsetz00_2540 / BgL_auxz00_3806);
															}}
															{	/* Cfa/cfa.scm 216 */
																long BgL_restz00_2543;

																{	/* Cfa/cfa.scm 216 */
																	int BgL_arg2644z00_2544;

																	BgL_arg2644z00_2544 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 216 */
																		long BgL_auxz00_3810;

																		BgL_auxz00_3810 =
																			(long) (BgL_arg2644z00_2544);
																		BgL_restz00_2543 =
																			(BgL_offsetz00_2540 % BgL_auxz00_3810);
																}}
																{	/* Cfa/cfa.scm 216 */

																	BgL_method5237z00_2533 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2538,
																			(int) (BgL_modz00_2541)),
																		(int) (BgL_restz00_2543));
									}}}}}}}}
									BgL_res5581z00_2558 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2533) (BgL_method5237z00_2533,
											(obj_t) (BgL_arg5485z00_1946), BEOA));
								}
								BgL_thenzd2approxzd2_1942 = BgL_res5581z00_2558;
						}}
						{	/* Cfa/cfa.scm 217 */
							BgL_nodez00_bglt BgL_arg5486z00_1947;

							{
								BgL_conditionalz00_bglt BgL_auxz00_3821;

								BgL_auxz00_3821 = (BgL_conditionalz00_bglt) (BgL_nodez00_1937);
								BgL_arg5486z00_1947 =
									(((BgL_conditionalz00_bglt) CREF(BgL_auxz00_3821))->
									BgL_falsez00);
							}
							{	/* Cfa/cfa.scm 217 */
								BgL_approxz00_bglt BgL_res5584z00_2586;

								{	/* Cfa/cfa.scm 217 */
									obj_t BgL_method5237z00_2561;

									{	/* Cfa/cfa.scm 217 */
										BgL_objectz00_bglt BgL_objz00_2562;

										BgL_objz00_2562 =
											(BgL_objectz00_bglt) (BgL_arg5486z00_1947);
										{	/* Cfa/cfa.scm 217 */
											long BgL_objzd2classzd2numz00_2563;

											BgL_objzd2classzd2numz00_2563 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2562);
											{	/* Cfa/cfa.scm 217 */
												obj_t BgL_arg2643z00_2564;

												BgL_arg2643z00_2564 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 217 */
													obj_t BgL_arrayz00_2566;

													int BgL_offsetz00_2567;

													BgL_arrayz00_2566 = BgL_arg2643z00_2564;
													BgL_offsetz00_2567 =
														(int) (BgL_objzd2classzd2numz00_2563);
													{	/* Cfa/cfa.scm 217 */
														long BgL_offsetz00_2568;

														BgL_offsetz00_2568 =
															((long) (BgL_offsetz00_2567) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 217 */
															long BgL_modz00_2569;

															{	/* Cfa/cfa.scm 217 */
																int BgL_arg2645z00_2570;

																BgL_arg2645z00_2570 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 217 */
																	long BgL_auxz00_3832;

																	BgL_auxz00_3832 =
																		(long) (BgL_arg2645z00_2570);
																	BgL_modz00_2569 =
																		(BgL_offsetz00_2568 / BgL_auxz00_3832);
															}}
															{	/* Cfa/cfa.scm 217 */
																long BgL_restz00_2571;

																{	/* Cfa/cfa.scm 217 */
																	int BgL_arg2644z00_2572;

																	BgL_arg2644z00_2572 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 217 */
																		long BgL_auxz00_3836;

																		BgL_auxz00_3836 =
																			(long) (BgL_arg2644z00_2572);
																		BgL_restz00_2571 =
																			(BgL_offsetz00_2568 % BgL_auxz00_3836);
																}}
																{	/* Cfa/cfa.scm 217 */

																	BgL_method5237z00_2561 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2566,
																			(int) (BgL_modz00_2569)),
																		(int) (BgL_restz00_2571));
									}}}}}}}}
									BgL_res5584z00_2586 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2561) (BgL_method5237z00_2561,
											(obj_t) (BgL_arg5486z00_1947), BEOA));
								}
								BgL_elsezd2approxzd2_1943 = BgL_res5584z00_2586;
						}}
						{	/* Cfa/cfa.scm 218 */
							BgL_approxz00_bglt BgL_arg5483z00_1944;

							{
								obj_t BgL_auxz00_3847;

								{	/* Cfa/cfa.scm 218 */
									BgL_objectz00_bglt BgL_auxz00_3848;

									BgL_auxz00_3848 = (BgL_objectz00_bglt) (BgL_nodez00_1937);
									BgL_auxz00_3847 = BGL_OBJECT_WIDENING(BgL_auxz00_3848);
								}
								BgL_arg5483z00_1944 =
									(((BgL_conditionalzf2cinfozf2_bglt) CREF(BgL_auxz00_3847))->
									BgL_approxz00);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg5483z00_1944,
								BgL_thenzd2approxzd2_1942);
						}
						{	/* Cfa/cfa.scm 219 */
							BgL_approxz00_bglt BgL_arg5484z00_1945;

							{
								obj_t BgL_auxz00_3853;

								{	/* Cfa/cfa.scm 219 */
									BgL_objectz00_bglt BgL_auxz00_3854;

									BgL_auxz00_3854 = (BgL_objectz00_bglt) (BgL_nodez00_1937);
									BgL_auxz00_3853 = BGL_OBJECT_WIDENING(BgL_auxz00_3854);
								}
								BgL_arg5484z00_1945 =
									(((BgL_conditionalzf2cinfozf2_bglt) CREF(BgL_auxz00_3853))->
									BgL_approxz00);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg5484z00_1945,
								BgL_elsezd2approxzd2_1943);
						}
						{
							obj_t BgL_auxz00_3859;

							{	/* Cfa/cfa.scm 220 */
								BgL_objectz00_bglt BgL_auxz00_3860;

								BgL_auxz00_3860 = (BgL_objectz00_bglt) (BgL_nodez00_1937);
								BgL_auxz00_3859 = BGL_OBJECT_WIDENING(BgL_auxz00_3860);
							}
							BgL_auxz00_3768 =
								(((BgL_conditionalzf2cinfozf2_bglt) CREF(BgL_auxz00_3859))->
								BgL_approxz00);
					}}
					return (obj_t) (BgL_auxz00_3768);
				}
			}
		}
	}



/* cfa!-setq/Cinfo5279 */
	obj_t BGl_cfaz12zd2setqzf2Cinfo5279z32zzcfa_cfaz00(obj_t BgL_envz00_3092,
		obj_t BgL_nodez00_3093)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 199 */
			{
				BgL_setqzf2cinfozf2_bglt BgL_nodez00_1924;

				{	/* Cfa/cfa.scm 200 */
					BgL_approxz00_bglt BgL_auxz00_3866;

					BgL_nodez00_1924 = (BgL_setqzf2cinfozf2_bglt) (BgL_nodez00_3093);
					{	/* Cfa/cfa.scm 201 */
						BgL_approxz00_bglt BgL_varzd2approxzd2_1928;

						{	/* Cfa/cfa.scm 201 */
							BgL_varz00_bglt BgL_arg5480z00_1934;

							{
								BgL_setqz00_bglt BgL_auxz00_3867;

								BgL_auxz00_3867 = (BgL_setqz00_bglt) (BgL_nodez00_1924);
								BgL_arg5480z00_1934 =
									(((BgL_setqz00_bglt) CREF(BgL_auxz00_3867))->BgL_varz00);
							}
							{	/* Cfa/cfa.scm 201 */
								BgL_approxz00_bglt BgL_res5572z00_2470;

								{	/* Cfa/cfa.scm 201 */
									BgL_nodez00_bglt BgL_nodez00_2444;

									BgL_nodez00_2444 = (BgL_nodez00_bglt) (BgL_arg5480z00_1934);
									{	/* Cfa/cfa.scm 201 */
										obj_t BgL_method5237z00_2445;

										{	/* Cfa/cfa.scm 201 */
											BgL_objectz00_bglt BgL_objz00_2446;

											BgL_objz00_2446 = (BgL_objectz00_bglt) (BgL_nodez00_2444);
											{	/* Cfa/cfa.scm 201 */
												long BgL_objzd2classzd2numz00_2447;

												BgL_objzd2classzd2numz00_2447 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2446);
												{	/* Cfa/cfa.scm 201 */
													obj_t BgL_arg2643z00_2448;

													BgL_arg2643z00_2448 =
														PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
														(int) (((long) 1)));
													{	/* Cfa/cfa.scm 201 */
														obj_t BgL_arrayz00_2450;

														int BgL_offsetz00_2451;

														BgL_arrayz00_2450 = BgL_arg2643z00_2448;
														BgL_offsetz00_2451 =
															(int) (BgL_objzd2classzd2numz00_2447);
														{	/* Cfa/cfa.scm 201 */
															long BgL_offsetz00_2452;

															BgL_offsetz00_2452 =
																((long) (BgL_offsetz00_2451) - OBJECT_TYPE);
															{	/* Cfa/cfa.scm 201 */
																long BgL_modz00_2453;

																{	/* Cfa/cfa.scm 201 */
																	int BgL_arg2645z00_2454;

																	BgL_arg2645z00_2454 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 201 */
																		long BgL_auxz00_3879;

																		BgL_auxz00_3879 =
																			(long) (BgL_arg2645z00_2454);
																		BgL_modz00_2453 =
																			(BgL_offsetz00_2452 / BgL_auxz00_3879);
																}}
																{	/* Cfa/cfa.scm 201 */
																	long BgL_restz00_2455;

																	{	/* Cfa/cfa.scm 201 */
																		int BgL_arg2644z00_2456;

																		BgL_arg2644z00_2456 = (int) (((long) 16));
																		{	/* Cfa/cfa.scm 201 */
																			long BgL_auxz00_3883;

																			BgL_auxz00_3883 =
																				(long) (BgL_arg2644z00_2456);
																			BgL_restz00_2455 =
																				(BgL_offsetz00_2452 % BgL_auxz00_3883);
																	}}
																	{	/* Cfa/cfa.scm 201 */

																		BgL_method5237z00_2445 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2450,
																				(int) (BgL_modz00_2453)),
																			(int) (BgL_restz00_2455));
										}}}}}}}}
										BgL_res5572z00_2470 =
											(BgL_approxz00_bglt) (PROCEDURE_ENTRY
											(BgL_method5237z00_2445) (BgL_method5237z00_2445,
												(obj_t) (BgL_nodez00_2444), BEOA));
								}}
								BgL_varzd2approxzd2_1928 = BgL_res5572z00_2470;
						}}
						{	/* Cfa/cfa.scm 201 */
							BgL_approxz00_bglt BgL_valzd2approxzd2_1929;

							{	/* Cfa/cfa.scm 202 */
								BgL_nodez00_bglt BgL_arg5479z00_1933;

								{
									BgL_setqz00_bglt BgL_auxz00_3894;

									BgL_auxz00_3894 = (BgL_setqz00_bglt) (BgL_nodez00_1924);
									BgL_arg5479z00_1933 =
										(((BgL_setqz00_bglt) CREF(BgL_auxz00_3894))->BgL_valuez00);
								}
								{	/* Cfa/cfa.scm 202 */
									BgL_approxz00_bglt BgL_res5575z00_2498;

									{	/* Cfa/cfa.scm 202 */
										obj_t BgL_method5237z00_2473;

										{	/* Cfa/cfa.scm 202 */
											BgL_objectz00_bglt BgL_objz00_2474;

											BgL_objz00_2474 =
												(BgL_objectz00_bglt) (BgL_arg5479z00_1933);
											{	/* Cfa/cfa.scm 202 */
												long BgL_objzd2classzd2numz00_2475;

												BgL_objzd2classzd2numz00_2475 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2474);
												{	/* Cfa/cfa.scm 202 */
													obj_t BgL_arg2643z00_2476;

													BgL_arg2643z00_2476 =
														PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
														(int) (((long) 1)));
													{	/* Cfa/cfa.scm 202 */
														obj_t BgL_arrayz00_2478;

														int BgL_offsetz00_2479;

														BgL_arrayz00_2478 = BgL_arg2643z00_2476;
														BgL_offsetz00_2479 =
															(int) (BgL_objzd2classzd2numz00_2475);
														{	/* Cfa/cfa.scm 202 */
															long BgL_offsetz00_2480;

															BgL_offsetz00_2480 =
																((long) (BgL_offsetz00_2479) - OBJECT_TYPE);
															{	/* Cfa/cfa.scm 202 */
																long BgL_modz00_2481;

																{	/* Cfa/cfa.scm 202 */
																	int BgL_arg2645z00_2482;

																	BgL_arg2645z00_2482 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 202 */
																		long BgL_auxz00_3905;

																		BgL_auxz00_3905 =
																			(long) (BgL_arg2645z00_2482);
																		BgL_modz00_2481 =
																			(BgL_offsetz00_2480 / BgL_auxz00_3905);
																}}
																{	/* Cfa/cfa.scm 202 */
																	long BgL_restz00_2483;

																	{	/* Cfa/cfa.scm 202 */
																		int BgL_arg2644z00_2484;

																		BgL_arg2644z00_2484 = (int) (((long) 16));
																		{	/* Cfa/cfa.scm 202 */
																			long BgL_auxz00_3909;

																			BgL_auxz00_3909 =
																				(long) (BgL_arg2644z00_2484);
																			BgL_restz00_2483 =
																				(BgL_offsetz00_2480 % BgL_auxz00_3909);
																	}}
																	{	/* Cfa/cfa.scm 202 */

																		BgL_method5237z00_2473 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2478,
																				(int) (BgL_modz00_2481)),
																			(int) (BgL_restz00_2483));
										}}}}}}}}
										BgL_res5575z00_2498 =
											(BgL_approxz00_bglt) (PROCEDURE_ENTRY
											(BgL_method5237z00_2473) (BgL_method5237z00_2473,
												(obj_t) (BgL_arg5479z00_1933), BEOA));
									}
									BgL_valzd2approxzd2_1929 = BgL_res5575z00_2498;
							}}
							{	/* Cfa/cfa.scm 202 */
								BgL_variablez00_bglt BgL_vz00_1930;

								{	/* Cfa/cfa.scm 203 */
									BgL_varz00_bglt BgL_obj2155z00_2500;

									{
										BgL_setqz00_bglt BgL_auxz00_3920;

										BgL_auxz00_3920 = (BgL_setqz00_bglt) (BgL_nodez00_1924);
										BgL_obj2155z00_2500 =
											(((BgL_setqz00_bglt) CREF(BgL_auxz00_3920))->BgL_varz00);
									}
									BgL_vz00_1930 =
										(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2500))->
										BgL_variablez00);
								}
								{	/* Cfa/cfa.scm 203 */

									BGl_unionzd2approxz12zc0zzcfa_approxz00
										(BgL_varzd2approxzd2_1928, BgL_valzd2approxzd2_1929);
									{	/* Cfa/cfa.scm 207 */
										bool_t BgL_testz00_3925;

										{	/* Cfa/cfa.scm 207 */
											obj_t BgL_obj1751z00_2501;

											BgL_obj1751z00_2501 = (obj_t) (BgL_vz00_1930);
											BgL_testz00_3925 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2501,
												BGl_globalz00zzast_varz00);
										}
										if (BgL_testz00_3925)
											{	/* Cfa/cfa.scm 207 */
												BGl_globalzd2loosez12zc0zzcfa_loosez00(
													(BgL_globalz00_bglt) (BgL_vz00_1930),
													BgL_varzd2approxzd2_1928);
											}
										else
											{	/* Cfa/cfa.scm 207 */
												BFALSE;
											}
									}
									{
										obj_t BgL_auxz00_3930;

										{	/* Cfa/cfa.scm 208 */
											BgL_objectz00_bglt BgL_auxz00_3931;

											BgL_auxz00_3931 = (BgL_objectz00_bglt) (BgL_nodez00_1924);
											BgL_auxz00_3930 = BGL_OBJECT_WIDENING(BgL_auxz00_3931);
										}
										BgL_auxz00_3866 =
											(((BgL_setqzf2cinfozf2_bglt) CREF(BgL_auxz00_3930))->
											BgL_approxz00);
									}
								}
							}
						}
					}
					return (obj_t) (BgL_auxz00_3866);
				}
			}
		}
	}



/* cfa!-cast5277 */
	obj_t BGl_cfaz12zd2cast5277zc0zzcfa_cfaz00(obj_t BgL_envz00_3094,
		obj_t BgL_nodez00_3095)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 192 */
			{
				BgL_castz00_bglt BgL_nodez00_1917;

				{	/* Cfa/cfa.scm 193 */
					BgL_approxz00_bglt BgL_auxz00_3937;

					BgL_nodez00_1917 = (BgL_castz00_bglt) (BgL_nodez00_3095);
					{	/* Cfa/cfa.scm 193 */
						BgL_nodez00_bglt BgL_arg5475z00_2414;

						BgL_arg5475z00_2414 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1917))->BgL_argz00);
						{	/* Cfa/cfa.scm 193 */
							BgL_approxz00_bglt BgL_res5569z00_2442;

							{	/* Cfa/cfa.scm 193 */
								obj_t BgL_method5237z00_2417;

								{	/* Cfa/cfa.scm 193 */
									BgL_objectz00_bglt BgL_objz00_2418;

									BgL_objz00_2418 = (BgL_objectz00_bglt) (BgL_arg5475z00_2414);
									{	/* Cfa/cfa.scm 193 */
										long BgL_objzd2classzd2numz00_2419;

										BgL_objzd2classzd2numz00_2419 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2418);
										{	/* Cfa/cfa.scm 193 */
											obj_t BgL_arg2643z00_2420;

											BgL_arg2643z00_2420 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 193 */
												obj_t BgL_arrayz00_2422;

												int BgL_offsetz00_2423;

												BgL_arrayz00_2422 = BgL_arg2643z00_2420;
												BgL_offsetz00_2423 =
													(int) (BgL_objzd2classzd2numz00_2419);
												{	/* Cfa/cfa.scm 193 */
													long BgL_offsetz00_2424;

													BgL_offsetz00_2424 =
														((long) (BgL_offsetz00_2423) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 193 */
														long BgL_modz00_2425;

														{	/* Cfa/cfa.scm 193 */
															int BgL_arg2645z00_2426;

															BgL_arg2645z00_2426 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 193 */
																long BgL_auxz00_3947;

																BgL_auxz00_3947 = (long) (BgL_arg2645z00_2426);
																BgL_modz00_2425 =
																	(BgL_offsetz00_2424 / BgL_auxz00_3947);
														}}
														{	/* Cfa/cfa.scm 193 */
															long BgL_restz00_2427;

															{	/* Cfa/cfa.scm 193 */
																int BgL_arg2644z00_2428;

																BgL_arg2644z00_2428 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 193 */
																	long BgL_auxz00_3951;

																	BgL_auxz00_3951 =
																		(long) (BgL_arg2644z00_2428);
																	BgL_restz00_2427 =
																		(BgL_offsetz00_2424 % BgL_auxz00_3951);
															}}
															{	/* Cfa/cfa.scm 193 */

																BgL_method5237z00_2417 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2422,
																		(int) (BgL_modz00_2425)),
																	(int) (BgL_restz00_2427));
								}}}}}}}}
								BgL_res5569z00_2442 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2417)
									(BgL_method5237z00_2417, (obj_t) (BgL_arg5475z00_2414),
										BEOA));
							}
							BgL_auxz00_3937 = BgL_res5569z00_2442;
					}}
					return (obj_t) (BgL_auxz00_3937);
				}
			}
		}
	}



/* cfa!-cast-null/Cinfo5275 */
	obj_t BGl_cfaz12zd2castzd2nullzf2Cinfo5275ze0zzcfa_cfaz00(obj_t
		BgL_envz00_3096, obj_t BgL_nodez00_3097)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 185 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_nodez00_1911;

				{	/* Cfa/cfa.scm 186 */
					BgL_approxz00_bglt BgL_auxz00_3964;

					BgL_nodez00_1911 =
						(BgL_castzd2nullzf2cinfoz20_bglt) (BgL_nodez00_3097);
					{
						obj_t BgL_auxz00_3965;

						{	/* Cfa/cfa.scm 186 */
							BgL_objectz00_bglt BgL_auxz00_3966;

							BgL_auxz00_3966 = (BgL_objectz00_bglt) (BgL_nodez00_1911);
							BgL_auxz00_3965 = BGL_OBJECT_WIDENING(BgL_auxz00_3966);
						}
						BgL_auxz00_3964 =
							(((BgL_castzd2nullzf2cinfoz20_bglt) CREF(BgL_auxz00_3965))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3964);
				}
			}
		}
	}



/* cfa!-isa/Cinfo5273 */
	obj_t BGl_cfaz12zd2isazf2Cinfo5273z32zzcfa_cfaz00(obj_t BgL_envz00_3098,
		obj_t BgL_nodez00_3099)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 178 */
			{
				BgL_isazf2cinfozf2_bglt BgL_nodez00_1905;

				{	/* Cfa/cfa.scm 179 */
					BgL_approxz00_bglt BgL_auxz00_3972;

					BgL_nodez00_1905 = (BgL_isazf2cinfozf2_bglt) (BgL_nodez00_3099);
					{
						obj_t BgL_auxz00_3973;

						{	/* Cfa/cfa.scm 179 */
							BgL_objectz00_bglt BgL_auxz00_3974;

							BgL_auxz00_3974 = (BgL_objectz00_bglt) (BgL_nodez00_1905);
							BgL_auxz00_3973 = BGL_OBJECT_WIDENING(BgL_auxz00_3974);
						}
						BgL_auxz00_3972 =
							(((BgL_isazf2cinfozf2_bglt) CREF(BgL_auxz00_3973))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3972);
				}
			}
		}
	}



/* cfa!-new/Cinfo5271 */
	obj_t BGl_cfaz12zd2newzf2Cinfo5271z32zzcfa_cfaz00(obj_t BgL_envz00_3100,
		obj_t BgL_nodez00_3101)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 170 */
			{
				BgL_newzf2cinfozf2_bglt BgL_nodez00_1889;

				{	/* Cfa/cfa.scm 171 */
					BgL_approxz00_bglt BgL_auxz00_3980;

					BgL_nodez00_1889 = (BgL_newzf2cinfozf2_bglt) (BgL_nodez00_3101);
					{	/* Cfa/cfa.scm 172 */
						obj_t BgL_g5232z00_1893;

						{
							BgL_externz00_bglt BgL_auxz00_3981;

							BgL_auxz00_3981 = (BgL_externz00_bglt) (BgL_nodez00_1889);
							BgL_g5232z00_1893 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_3981))->BgL_exprza2za2);
						}
						{
							obj_t BgL_l5230z00_1895;

							BgL_l5230z00_1895 = BgL_g5232z00_1893;
						BgL_zc3anonymousza35467ze3z83_1896:
							if (PAIRP(BgL_l5230z00_1895))
								{	/* Cfa/cfa.scm 172 */
									{	/* Cfa/cfa.scm 172 */
										obj_t BgL_az00_1898;

										BgL_az00_1898 = CAR(BgL_l5230z00_1895);
										{	/* Cfa/cfa.scm 172 */
											BgL_approxz00_bglt BgL_arg5469z00_1899;

											obj_t BgL_arg5470z00_1900;

											{	/* Cfa/cfa.scm 172 */
												BgL_approxz00_bglt BgL_res5566z00_2406;

												{	/* Cfa/cfa.scm 172 */
													BgL_nodez00_bglt BgL_nodez00_2380;

													BgL_nodez00_2380 = (BgL_nodez00_bglt) (BgL_az00_1898);
													{	/* Cfa/cfa.scm 172 */
														obj_t BgL_method5237z00_2381;

														{	/* Cfa/cfa.scm 172 */
															BgL_objectz00_bglt BgL_objz00_2382;

															BgL_objz00_2382 =
																(BgL_objectz00_bglt) (BgL_nodez00_2380);
															{	/* Cfa/cfa.scm 172 */
																long BgL_objzd2classzd2numz00_2383;

																BgL_objzd2classzd2numz00_2383 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2382);
																{	/* Cfa/cfa.scm 172 */
																	obj_t BgL_arg2643z00_2384;

																	BgL_arg2643z00_2384 =
																		PROCEDURE_REF
																		(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																		(int) (((long) 1)));
																	{	/* Cfa/cfa.scm 172 */
																		obj_t BgL_arrayz00_2386;

																		int BgL_offsetz00_2387;

																		BgL_arrayz00_2386 = BgL_arg2643z00_2384;
																		BgL_offsetz00_2387 =
																			(int) (BgL_objzd2classzd2numz00_2383);
																		{	/* Cfa/cfa.scm 172 */
																			long BgL_offsetz00_2388;

																			BgL_offsetz00_2388 =
																				(
																				(long) (BgL_offsetz00_2387) -
																				OBJECT_TYPE);
																			{	/* Cfa/cfa.scm 172 */
																				long BgL_modz00_2389;

																				{	/* Cfa/cfa.scm 172 */
																					int BgL_arg2645z00_2390;

																					BgL_arg2645z00_2390 =
																						(int) (((long) 16));
																					{	/* Cfa/cfa.scm 172 */
																						long BgL_auxz00_3996;

																						BgL_auxz00_3996 =
																							(long) (BgL_arg2645z00_2390);
																						BgL_modz00_2389 =
																							(BgL_offsetz00_2388 /
																							BgL_auxz00_3996);
																				}}
																				{	/* Cfa/cfa.scm 172 */
																					long BgL_restz00_2391;

																					{	/* Cfa/cfa.scm 172 */
																						int BgL_arg2644z00_2392;

																						BgL_arg2644z00_2392 =
																							(int) (((long) 16));
																						{	/* Cfa/cfa.scm 172 */
																							long BgL_auxz00_4000;

																							BgL_auxz00_4000 =
																								(long) (BgL_arg2644z00_2392);
																							BgL_restz00_2391 =
																								(BgL_offsetz00_2388 %
																								BgL_auxz00_4000);
																					}}
																					{	/* Cfa/cfa.scm 172 */

																						BgL_method5237z00_2381 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2386,
																								(int) (BgL_modz00_2389)),
																							(int) (BgL_restz00_2391));
														}}}}}}}}
														BgL_res5566z00_2406 =
															(BgL_approxz00_bglt) (PROCEDURE_ENTRY
															(BgL_method5237z00_2381) (BgL_method5237z00_2381,
																(obj_t) (BgL_nodez00_2380), BEOA));
												}}
												BgL_arg5469z00_1899 = BgL_res5566z00_2406;
											}
											BgL_arg5470z00_1900 = CNST_TABLE_REF(((long) 1));
											BGl_loosez12z12zzcfa_loosez00(BgL_arg5469z00_1899,
												BgL_arg5470z00_1900);
									}}
									{
										obj_t BgL_l5230z00_4013;

										BgL_l5230z00_4013 = CDR(BgL_l5230z00_1895);
										BgL_l5230z00_1895 = BgL_l5230z00_4013;
										goto BgL_zc3anonymousza35467ze3z83_1896;
									}
								}
							else
								{	/* Cfa/cfa.scm 172 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_4015;

						{	/* Cfa/cfa.scm 173 */
							BgL_objectz00_bglt BgL_auxz00_4016;

							BgL_auxz00_4016 = (BgL_objectz00_bglt) (BgL_nodez00_1889);
							BgL_auxz00_4015 = BGL_OBJECT_WIDENING(BgL_auxz00_4016);
						}
						BgL_auxz00_3980 =
							(((BgL_newzf2cinfozf2_bglt) CREF(BgL_auxz00_4015))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_3980);
				}
			}
		}
	}



/* cfa!-setfield/Cinfo5269 */
	obj_t BGl_cfaz12zd2setfieldzf2Cinfo5269z32zzcfa_cfaz00(obj_t BgL_envz00_3102,
		obj_t BgL_nodez00_3103)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 162 */
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_nodez00_1873;

				{	/* Cfa/cfa.scm 163 */
					BgL_approxz00_bglt BgL_auxz00_4022;

					BgL_nodez00_1873 = (BgL_setfieldzf2cinfozf2_bglt) (BgL_nodez00_3103);
					{	/* Cfa/cfa.scm 164 */
						obj_t BgL_g5229z00_1877;

						{
							BgL_externz00_bglt BgL_auxz00_4023;

							BgL_auxz00_4023 = (BgL_externz00_bglt) (BgL_nodez00_1873);
							BgL_g5229z00_1877 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4023))->BgL_exprza2za2);
						}
						{
							obj_t BgL_l5227z00_1879;

							BgL_l5227z00_1879 = BgL_g5229z00_1877;
						BgL_zc3anonymousza35461ze3z83_1880:
							if (PAIRP(BgL_l5227z00_1879))
								{	/* Cfa/cfa.scm 164 */
									{	/* Cfa/cfa.scm 164 */
										obj_t BgL_az00_1882;

										BgL_az00_1882 = CAR(BgL_l5227z00_1879);
										{	/* Cfa/cfa.scm 164 */
											BgL_approxz00_bglt BgL_arg5463z00_1883;

											obj_t BgL_arg5464z00_1884;

											{	/* Cfa/cfa.scm 164 */
												BgL_approxz00_bglt BgL_res5563z00_2374;

												{	/* Cfa/cfa.scm 164 */
													BgL_nodez00_bglt BgL_nodez00_2348;

													BgL_nodez00_2348 = (BgL_nodez00_bglt) (BgL_az00_1882);
													{	/* Cfa/cfa.scm 164 */
														obj_t BgL_method5237z00_2349;

														{	/* Cfa/cfa.scm 164 */
															BgL_objectz00_bglt BgL_objz00_2350;

															BgL_objz00_2350 =
																(BgL_objectz00_bglt) (BgL_nodez00_2348);
															{	/* Cfa/cfa.scm 164 */
																long BgL_objzd2classzd2numz00_2351;

																BgL_objzd2classzd2numz00_2351 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2350);
																{	/* Cfa/cfa.scm 164 */
																	obj_t BgL_arg2643z00_2352;

																	BgL_arg2643z00_2352 =
																		PROCEDURE_REF
																		(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																		(int) (((long) 1)));
																	{	/* Cfa/cfa.scm 164 */
																		obj_t BgL_arrayz00_2354;

																		int BgL_offsetz00_2355;

																		BgL_arrayz00_2354 = BgL_arg2643z00_2352;
																		BgL_offsetz00_2355 =
																			(int) (BgL_objzd2classzd2numz00_2351);
																		{	/* Cfa/cfa.scm 164 */
																			long BgL_offsetz00_2356;

																			BgL_offsetz00_2356 =
																				(
																				(long) (BgL_offsetz00_2355) -
																				OBJECT_TYPE);
																			{	/* Cfa/cfa.scm 164 */
																				long BgL_modz00_2357;

																				{	/* Cfa/cfa.scm 164 */
																					int BgL_arg2645z00_2358;

																					BgL_arg2645z00_2358 =
																						(int) (((long) 16));
																					{	/* Cfa/cfa.scm 164 */
																						long BgL_auxz00_4038;

																						BgL_auxz00_4038 =
																							(long) (BgL_arg2645z00_2358);
																						BgL_modz00_2357 =
																							(BgL_offsetz00_2356 /
																							BgL_auxz00_4038);
																				}}
																				{	/* Cfa/cfa.scm 164 */
																					long BgL_restz00_2359;

																					{	/* Cfa/cfa.scm 164 */
																						int BgL_arg2644z00_2360;

																						BgL_arg2644z00_2360 =
																							(int) (((long) 16));
																						{	/* Cfa/cfa.scm 164 */
																							long BgL_auxz00_4042;

																							BgL_auxz00_4042 =
																								(long) (BgL_arg2644z00_2360);
																							BgL_restz00_2359 =
																								(BgL_offsetz00_2356 %
																								BgL_auxz00_4042);
																					}}
																					{	/* Cfa/cfa.scm 164 */

																						BgL_method5237z00_2349 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2354,
																								(int) (BgL_modz00_2357)),
																							(int) (BgL_restz00_2359));
														}}}}}}}}
														BgL_res5563z00_2374 =
															(BgL_approxz00_bglt) (PROCEDURE_ENTRY
															(BgL_method5237z00_2349) (BgL_method5237z00_2349,
																(obj_t) (BgL_nodez00_2348), BEOA));
												}}
												BgL_arg5463z00_1883 = BgL_res5563z00_2374;
											}
											BgL_arg5464z00_1884 = CNST_TABLE_REF(((long) 1));
											BGl_loosez12z12zzcfa_loosez00(BgL_arg5463z00_1883,
												BgL_arg5464z00_1884);
									}}
									{
										obj_t BgL_l5227z00_4055;

										BgL_l5227z00_4055 = CDR(BgL_l5227z00_1879);
										BgL_l5227z00_1879 = BgL_l5227z00_4055;
										goto BgL_zc3anonymousza35461ze3z83_1880;
									}
								}
							else
								{	/* Cfa/cfa.scm 164 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_4057;

						{	/* Cfa/cfa.scm 165 */
							BgL_objectz00_bglt BgL_auxz00_4058;

							BgL_auxz00_4058 = (BgL_objectz00_bglt) (BgL_nodez00_1873);
							BgL_auxz00_4057 = BGL_OBJECT_WIDENING(BgL_auxz00_4058);
						}
						BgL_auxz00_4022 =
							(((BgL_setfieldzf2cinfozf2_bglt) CREF(BgL_auxz00_4057))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4022);
				}
			}
		}
	}



/* cfa!-getfield/Cinfo5267 */
	obj_t BGl_cfaz12zd2getfieldzf2Cinfo5267z32zzcfa_cfaz00(obj_t BgL_envz00_3104,
		obj_t BgL_nodez00_3105)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 154 */
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_nodez00_1857;

				{	/* Cfa/cfa.scm 155 */
					BgL_approxz00_bglt BgL_auxz00_4064;

					BgL_nodez00_1857 = (BgL_getfieldzf2cinfozf2_bglt) (BgL_nodez00_3105);
					{	/* Cfa/cfa.scm 156 */
						obj_t BgL_g5226z00_1861;

						{
							BgL_externz00_bglt BgL_auxz00_4065;

							BgL_auxz00_4065 = (BgL_externz00_bglt) (BgL_nodez00_1857);
							BgL_g5226z00_1861 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4065))->BgL_exprza2za2);
						}
						{
							obj_t BgL_l5224z00_1863;

							BgL_l5224z00_1863 = BgL_g5226z00_1861;
						BgL_zc3anonymousza35455ze3z83_1864:
							if (PAIRP(BgL_l5224z00_1863))
								{	/* Cfa/cfa.scm 156 */
									{	/* Cfa/cfa.scm 156 */
										obj_t BgL_az00_1866;

										BgL_az00_1866 = CAR(BgL_l5224z00_1863);
										{	/* Cfa/cfa.scm 156 */
											BgL_approxz00_bglt BgL_arg5457z00_1867;

											obj_t BgL_arg5458z00_1868;

											{	/* Cfa/cfa.scm 156 */
												BgL_approxz00_bglt BgL_res5560z00_2342;

												{	/* Cfa/cfa.scm 156 */
													BgL_nodez00_bglt BgL_nodez00_2316;

													BgL_nodez00_2316 = (BgL_nodez00_bglt) (BgL_az00_1866);
													{	/* Cfa/cfa.scm 156 */
														obj_t BgL_method5237z00_2317;

														{	/* Cfa/cfa.scm 156 */
															BgL_objectz00_bglt BgL_objz00_2318;

															BgL_objz00_2318 =
																(BgL_objectz00_bglt) (BgL_nodez00_2316);
															{	/* Cfa/cfa.scm 156 */
																long BgL_objzd2classzd2numz00_2319;

																BgL_objzd2classzd2numz00_2319 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2318);
																{	/* Cfa/cfa.scm 156 */
																	obj_t BgL_arg2643z00_2320;

																	BgL_arg2643z00_2320 =
																		PROCEDURE_REF
																		(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																		(int) (((long) 1)));
																	{	/* Cfa/cfa.scm 156 */
																		obj_t BgL_arrayz00_2322;

																		int BgL_offsetz00_2323;

																		BgL_arrayz00_2322 = BgL_arg2643z00_2320;
																		BgL_offsetz00_2323 =
																			(int) (BgL_objzd2classzd2numz00_2319);
																		{	/* Cfa/cfa.scm 156 */
																			long BgL_offsetz00_2324;

																			BgL_offsetz00_2324 =
																				(
																				(long) (BgL_offsetz00_2323) -
																				OBJECT_TYPE);
																			{	/* Cfa/cfa.scm 156 */
																				long BgL_modz00_2325;

																				{	/* Cfa/cfa.scm 156 */
																					int BgL_arg2645z00_2326;

																					BgL_arg2645z00_2326 =
																						(int) (((long) 16));
																					{	/* Cfa/cfa.scm 156 */
																						long BgL_auxz00_4080;

																						BgL_auxz00_4080 =
																							(long) (BgL_arg2645z00_2326);
																						BgL_modz00_2325 =
																							(BgL_offsetz00_2324 /
																							BgL_auxz00_4080);
																				}}
																				{	/* Cfa/cfa.scm 156 */
																					long BgL_restz00_2327;

																					{	/* Cfa/cfa.scm 156 */
																						int BgL_arg2644z00_2328;

																						BgL_arg2644z00_2328 =
																							(int) (((long) 16));
																						{	/* Cfa/cfa.scm 156 */
																							long BgL_auxz00_4084;

																							BgL_auxz00_4084 =
																								(long) (BgL_arg2644z00_2328);
																							BgL_restz00_2327 =
																								(BgL_offsetz00_2324 %
																								BgL_auxz00_4084);
																					}}
																					{	/* Cfa/cfa.scm 156 */

																						BgL_method5237z00_2317 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2322,
																								(int) (BgL_modz00_2325)),
																							(int) (BgL_restz00_2327));
														}}}}}}}}
														BgL_res5560z00_2342 =
															(BgL_approxz00_bglt) (PROCEDURE_ENTRY
															(BgL_method5237z00_2317) (BgL_method5237z00_2317,
																(obj_t) (BgL_nodez00_2316), BEOA));
												}}
												BgL_arg5457z00_1867 = BgL_res5560z00_2342;
											}
											BgL_arg5458z00_1868 = CNST_TABLE_REF(((long) 1));
											BGl_loosez12z12zzcfa_loosez00(BgL_arg5457z00_1867,
												BgL_arg5458z00_1868);
									}}
									{
										obj_t BgL_l5224z00_4097;

										BgL_l5224z00_4097 = CDR(BgL_l5224z00_1863);
										BgL_l5224z00_1863 = BgL_l5224z00_4097;
										goto BgL_zc3anonymousza35455ze3z83_1864;
									}
								}
							else
								{	/* Cfa/cfa.scm 156 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_4099;

						{	/* Cfa/cfa.scm 157 */
							BgL_objectz00_bglt BgL_auxz00_4100;

							BgL_auxz00_4100 = (BgL_objectz00_bglt) (BgL_nodez00_1857);
							BgL_auxz00_4099 = BGL_OBJECT_WIDENING(BgL_auxz00_4100);
						}
						BgL_auxz00_4064 =
							(((BgL_getfieldzf2cinfozf2_bglt) CREF(BgL_auxz00_4099))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4064);
				}
			}
		}
	}



/* cfa!-pragma/Cinfo5265 */
	obj_t BGl_cfaz12zd2pragmazf2Cinfo5265z32zzcfa_cfaz00(obj_t BgL_envz00_3106,
		obj_t BgL_nodez00_3107)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 146 */
			{
				BgL_pragmazf2cinfozf2_bglt BgL_nodez00_1841;

				{	/* Cfa/cfa.scm 147 */
					BgL_approxz00_bglt BgL_auxz00_4106;

					BgL_nodez00_1841 = (BgL_pragmazf2cinfozf2_bglt) (BgL_nodez00_3107);
					{	/* Cfa/cfa.scm 148 */
						obj_t BgL_g5223z00_1845;

						{
							BgL_externz00_bglt BgL_auxz00_4107;

							BgL_auxz00_4107 = (BgL_externz00_bglt) (BgL_nodez00_1841);
							BgL_g5223z00_1845 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_4107))->BgL_exprza2za2);
						}
						{
							obj_t BgL_l5221z00_1847;

							BgL_l5221z00_1847 = BgL_g5223z00_1845;
						BgL_zc3anonymousza35449ze3z83_1848:
							if (PAIRP(BgL_l5221z00_1847))
								{	/* Cfa/cfa.scm 148 */
									{	/* Cfa/cfa.scm 148 */
										obj_t BgL_az00_1850;

										BgL_az00_1850 = CAR(BgL_l5221z00_1847);
										{	/* Cfa/cfa.scm 148 */
											BgL_approxz00_bglt BgL_arg5451z00_1851;

											obj_t BgL_arg5452z00_1852;

											{	/* Cfa/cfa.scm 148 */
												BgL_approxz00_bglt BgL_res5557z00_2310;

												{	/* Cfa/cfa.scm 148 */
													BgL_nodez00_bglt BgL_nodez00_2284;

													BgL_nodez00_2284 = (BgL_nodez00_bglt) (BgL_az00_1850);
													{	/* Cfa/cfa.scm 148 */
														obj_t BgL_method5237z00_2285;

														{	/* Cfa/cfa.scm 148 */
															BgL_objectz00_bglt BgL_objz00_2286;

															BgL_objz00_2286 =
																(BgL_objectz00_bglt) (BgL_nodez00_2284);
															{	/* Cfa/cfa.scm 148 */
																long BgL_objzd2classzd2numz00_2287;

																BgL_objzd2classzd2numz00_2287 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2286);
																{	/* Cfa/cfa.scm 148 */
																	obj_t BgL_arg2643z00_2288;

																	BgL_arg2643z00_2288 =
																		PROCEDURE_REF
																		(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																		(int) (((long) 1)));
																	{	/* Cfa/cfa.scm 148 */
																		obj_t BgL_arrayz00_2290;

																		int BgL_offsetz00_2291;

																		BgL_arrayz00_2290 = BgL_arg2643z00_2288;
																		BgL_offsetz00_2291 =
																			(int) (BgL_objzd2classzd2numz00_2287);
																		{	/* Cfa/cfa.scm 148 */
																			long BgL_offsetz00_2292;

																			BgL_offsetz00_2292 =
																				(
																				(long) (BgL_offsetz00_2291) -
																				OBJECT_TYPE);
																			{	/* Cfa/cfa.scm 148 */
																				long BgL_modz00_2293;

																				{	/* Cfa/cfa.scm 148 */
																					int BgL_arg2645z00_2294;

																					BgL_arg2645z00_2294 =
																						(int) (((long) 16));
																					{	/* Cfa/cfa.scm 148 */
																						long BgL_auxz00_4122;

																						BgL_auxz00_4122 =
																							(long) (BgL_arg2645z00_2294);
																						BgL_modz00_2293 =
																							(BgL_offsetz00_2292 /
																							BgL_auxz00_4122);
																				}}
																				{	/* Cfa/cfa.scm 148 */
																					long BgL_restz00_2295;

																					{	/* Cfa/cfa.scm 148 */
																						int BgL_arg2644z00_2296;

																						BgL_arg2644z00_2296 =
																							(int) (((long) 16));
																						{	/* Cfa/cfa.scm 148 */
																							long BgL_auxz00_4126;

																							BgL_auxz00_4126 =
																								(long) (BgL_arg2644z00_2296);
																							BgL_restz00_2295 =
																								(BgL_offsetz00_2292 %
																								BgL_auxz00_4126);
																					}}
																					{	/* Cfa/cfa.scm 148 */

																						BgL_method5237z00_2285 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2290,
																								(int) (BgL_modz00_2293)),
																							(int) (BgL_restz00_2295));
														}}}}}}}}
														BgL_res5557z00_2310 =
															(BgL_approxz00_bglt) (PROCEDURE_ENTRY
															(BgL_method5237z00_2285) (BgL_method5237z00_2285,
																(obj_t) (BgL_nodez00_2284), BEOA));
												}}
												BgL_arg5451z00_1851 = BgL_res5557z00_2310;
											}
											BgL_arg5452z00_1852 = CNST_TABLE_REF(((long) 1));
											BGl_loosez12z12zzcfa_loosez00(BgL_arg5451z00_1851,
												BgL_arg5452z00_1852);
									}}
									{
										obj_t BgL_l5221z00_4139;

										BgL_l5221z00_4139 = CDR(BgL_l5221z00_1847);
										BgL_l5221z00_1847 = BgL_l5221z00_4139;
										goto BgL_zc3anonymousza35449ze3z83_1848;
									}
								}
							else
								{	/* Cfa/cfa.scm 148 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_4141;

						{	/* Cfa/cfa.scm 149 */
							BgL_objectz00_bglt BgL_auxz00_4142;

							BgL_auxz00_4142 = (BgL_objectz00_bglt) (BgL_nodez00_1841);
							BgL_auxz00_4141 = BGL_OBJECT_WIDENING(BgL_auxz00_4142);
						}
						BgL_auxz00_4106 =
							(((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_auxz00_4141))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4106);
				}
			}
		}
	}



/* cfa!-app-ly/Cinfo5263 */
	obj_t BGl_cfaz12zd2appzd2lyzf2Cinfo5263ze0zzcfa_cfaz00(obj_t BgL_envz00_3108,
		obj_t BgL_nodez00_3109)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 137 */
			{
				BgL_appzd2lyzf2cinfoz20_bglt BgL_nodez00_1829;

				{	/* Cfa/cfa.scm 138 */
					BgL_approxz00_bglt BgL_auxz00_4148;

					BgL_nodez00_1829 = (BgL_appzd2lyzf2cinfoz20_bglt) (BgL_nodez00_3109);
					{	/* Cfa/cfa.scm 139 */
						BgL_approxz00_bglt BgL_arg5442z00_1833;

						obj_t BgL_arg5443z00_1834;

						{	/* Cfa/cfa.scm 139 */
							BgL_nodez00_bglt BgL_arg5444z00_1835;

							{
								BgL_appzd2lyzd2_bglt BgL_auxz00_4149;

								BgL_auxz00_4149 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_1829);
								BgL_arg5444z00_1835 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_auxz00_4149))->BgL_argz00);
							}
							{	/* Cfa/cfa.scm 139 */
								BgL_approxz00_bglt BgL_res5551z00_2251;

								{	/* Cfa/cfa.scm 139 */
									obj_t BgL_method5237z00_2226;

									{	/* Cfa/cfa.scm 139 */
										BgL_objectz00_bglt BgL_objz00_2227;

										BgL_objz00_2227 =
											(BgL_objectz00_bglt) (BgL_arg5444z00_1835);
										{	/* Cfa/cfa.scm 139 */
											long BgL_objzd2classzd2numz00_2228;

											BgL_objzd2classzd2numz00_2228 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2227);
											{	/* Cfa/cfa.scm 139 */
												obj_t BgL_arg2643z00_2229;

												BgL_arg2643z00_2229 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 139 */
													obj_t BgL_arrayz00_2231;

													int BgL_offsetz00_2232;

													BgL_arrayz00_2231 = BgL_arg2643z00_2229;
													BgL_offsetz00_2232 =
														(int) (BgL_objzd2classzd2numz00_2228);
													{	/* Cfa/cfa.scm 139 */
														long BgL_offsetz00_2233;

														BgL_offsetz00_2233 =
															((long) (BgL_offsetz00_2232) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 139 */
															long BgL_modz00_2234;

															{	/* Cfa/cfa.scm 139 */
																int BgL_arg2645z00_2235;

																BgL_arg2645z00_2235 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 139 */
																	long BgL_auxz00_4160;

																	BgL_auxz00_4160 =
																		(long) (BgL_arg2645z00_2235);
																	BgL_modz00_2234 =
																		(BgL_offsetz00_2233 / BgL_auxz00_4160);
															}}
															{	/* Cfa/cfa.scm 139 */
																long BgL_restz00_2236;

																{	/* Cfa/cfa.scm 139 */
																	int BgL_arg2644z00_2237;

																	BgL_arg2644z00_2237 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 139 */
																		long BgL_auxz00_4164;

																		BgL_auxz00_4164 =
																			(long) (BgL_arg2644z00_2237);
																		BgL_restz00_2236 =
																			(BgL_offsetz00_2233 % BgL_auxz00_4164);
																}}
																{	/* Cfa/cfa.scm 139 */

																	BgL_method5237z00_2226 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2231,
																			(int) (BgL_modz00_2234)),
																		(int) (BgL_restz00_2236));
									}}}}}}}}
									BgL_res5551z00_2251 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2226) (BgL_method5237z00_2226,
											(obj_t) (BgL_arg5444z00_1835), BEOA));
								}
								BgL_arg5442z00_1833 = BgL_res5551z00_2251;
						}}
						BgL_arg5443z00_1834 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5442z00_1833,
							BgL_arg5443z00_1834);
					}
					{	/* Cfa/cfa.scm 140 */
						BgL_approxz00_bglt BgL_arg5445z00_1836;

						obj_t BgL_arg5446z00_1837;

						{	/* Cfa/cfa.scm 140 */
							BgL_nodez00_bglt BgL_arg5447z00_1838;

							{
								BgL_appzd2lyzd2_bglt BgL_auxz00_4177;

								BgL_auxz00_4177 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_1829);
								BgL_arg5447z00_1838 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_auxz00_4177))->BgL_funz00);
							}
							{	/* Cfa/cfa.scm 140 */
								BgL_approxz00_bglt BgL_res5554z00_2279;

								{	/* Cfa/cfa.scm 140 */
									obj_t BgL_method5237z00_2254;

									{	/* Cfa/cfa.scm 140 */
										BgL_objectz00_bglt BgL_objz00_2255;

										BgL_objz00_2255 =
											(BgL_objectz00_bglt) (BgL_arg5447z00_1838);
										{	/* Cfa/cfa.scm 140 */
											long BgL_objzd2classzd2numz00_2256;

											BgL_objzd2classzd2numz00_2256 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2255);
											{	/* Cfa/cfa.scm 140 */
												obj_t BgL_arg2643z00_2257;

												BgL_arg2643z00_2257 =
													PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
													(int) (((long) 1)));
												{	/* Cfa/cfa.scm 140 */
													obj_t BgL_arrayz00_2259;

													int BgL_offsetz00_2260;

													BgL_arrayz00_2259 = BgL_arg2643z00_2257;
													BgL_offsetz00_2260 =
														(int) (BgL_objzd2classzd2numz00_2256);
													{	/* Cfa/cfa.scm 140 */
														long BgL_offsetz00_2261;

														BgL_offsetz00_2261 =
															((long) (BgL_offsetz00_2260) - OBJECT_TYPE);
														{	/* Cfa/cfa.scm 140 */
															long BgL_modz00_2262;

															{	/* Cfa/cfa.scm 140 */
																int BgL_arg2645z00_2263;

																BgL_arg2645z00_2263 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 140 */
																	long BgL_auxz00_4188;

																	BgL_auxz00_4188 =
																		(long) (BgL_arg2645z00_2263);
																	BgL_modz00_2262 =
																		(BgL_offsetz00_2261 / BgL_auxz00_4188);
															}}
															{	/* Cfa/cfa.scm 140 */
																long BgL_restz00_2264;

																{	/* Cfa/cfa.scm 140 */
																	int BgL_arg2644z00_2265;

																	BgL_arg2644z00_2265 = (int) (((long) 16));
																	{	/* Cfa/cfa.scm 140 */
																		long BgL_auxz00_4192;

																		BgL_auxz00_4192 =
																			(long) (BgL_arg2644z00_2265);
																		BgL_restz00_2264 =
																			(BgL_offsetz00_2261 % BgL_auxz00_4192);
																}}
																{	/* Cfa/cfa.scm 140 */

																	BgL_method5237z00_2254 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2259,
																			(int) (BgL_modz00_2262)),
																		(int) (BgL_restz00_2264));
									}}}}}}}}
									BgL_res5554z00_2279 =
										(BgL_approxz00_bglt) (PROCEDURE_ENTRY
										(BgL_method5237z00_2254) (BgL_method5237z00_2254,
											(obj_t) (BgL_arg5447z00_1838), BEOA));
								}
								BgL_arg5445z00_1836 = BgL_res5554z00_2279;
						}}
						BgL_arg5446z00_1837 = CNST_TABLE_REF(((long) 1));
						BGl_loosez12z12zzcfa_loosez00(BgL_arg5445z00_1836,
							BgL_arg5446z00_1837);
					}
					{
						obj_t BgL_auxz00_4205;

						{	/* Cfa/cfa.scm 141 */
							BgL_objectz00_bglt BgL_auxz00_4206;

							BgL_auxz00_4206 = (BgL_objectz00_bglt) (BgL_nodez00_1829);
							BgL_auxz00_4205 = BGL_OBJECT_WIDENING(BgL_auxz00_4206);
						}
						BgL_auxz00_4148 =
							(((BgL_appzd2lyzf2cinfoz20_bglt) CREF(BgL_auxz00_4205))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4148);
				}
			}
		}
	}



/* cfa!-sequence5261 */
	obj_t BGl_cfaz12zd2sequence5261zc0zzcfa_cfaz00(obj_t BgL_envz00_3110,
		obj_t BgL_nodez00_3111)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 126 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1813;

				BgL_nodez00_1813 = (BgL_sequencez00_bglt) (BgL_nodez00_3111);
				{
					obj_t BgL_nz00_1819;

					obj_t BgL_approxz00_1820;

					{	/* Cfa/cfa.scm 128 */
						obj_t BgL_arg5435z00_1818;

						BgL_arg5435z00_1818 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1813))->BgL_nodesz00);
						BgL_nz00_1819 = BgL_arg5435z00_1818;
						BgL_approxz00_1820 = BUNSPEC;
					BgL_zc3anonymousza35436ze3z83_1821:
						if (NULLP(BgL_nz00_1819))
							{	/* Cfa/cfa.scm 130 */
								return BgL_approxz00_1820;
							}
						else
							{	/* Cfa/cfa.scm 132 */
								obj_t BgL_arg5438z00_1823;

								BgL_approxz00_bglt BgL_arg5439z00_1824;

								BgL_arg5438z00_1823 = CDR(BgL_nz00_1819);
								{	/* Cfa/cfa.scm 132 */
									obj_t BgL_arg5440z00_1825;

									BgL_arg5440z00_1825 = CAR(BgL_nz00_1819);
									{	/* Cfa/cfa.scm 132 */
										BgL_approxz00_bglt BgL_res5548z00_2223;

										{	/* Cfa/cfa.scm 132 */
											BgL_nodez00_bglt BgL_nodez00_2197;

											BgL_nodez00_2197 =
												(BgL_nodez00_bglt) (BgL_arg5440z00_1825);
											{	/* Cfa/cfa.scm 132 */
												obj_t BgL_method5237z00_2198;

												{	/* Cfa/cfa.scm 132 */
													BgL_objectz00_bglt BgL_objz00_2199;

													BgL_objz00_2199 =
														(BgL_objectz00_bglt) (BgL_nodez00_2197);
													{	/* Cfa/cfa.scm 132 */
														long BgL_objzd2classzd2numz00_2200;

														BgL_objzd2classzd2numz00_2200 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2199);
														{	/* Cfa/cfa.scm 132 */
															obj_t BgL_arg2643z00_2201;

															BgL_arg2643z00_2201 =
																PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
																(int) (((long) 1)));
															{	/* Cfa/cfa.scm 132 */
																obj_t BgL_arrayz00_2203;

																int BgL_offsetz00_2204;

																BgL_arrayz00_2203 = BgL_arg2643z00_2201;
																BgL_offsetz00_2204 =
																	(int) (BgL_objzd2classzd2numz00_2200);
																{	/* Cfa/cfa.scm 132 */
																	long BgL_offsetz00_2205;

																	BgL_offsetz00_2205 =
																		((long) (BgL_offsetz00_2204) - OBJECT_TYPE);
																	{	/* Cfa/cfa.scm 132 */
																		long BgL_modz00_2206;

																		{	/* Cfa/cfa.scm 132 */
																			int BgL_arg2645z00_2207;

																			BgL_arg2645z00_2207 = (int) (((long) 16));
																			{	/* Cfa/cfa.scm 132 */
																				long BgL_auxz00_4226;

																				BgL_auxz00_4226 =
																					(long) (BgL_arg2645z00_2207);
																				BgL_modz00_2206 =
																					(BgL_offsetz00_2205 /
																					BgL_auxz00_4226);
																		}}
																		{	/* Cfa/cfa.scm 132 */
																			long BgL_restz00_2208;

																			{	/* Cfa/cfa.scm 132 */
																				int BgL_arg2644z00_2209;

																				BgL_arg2644z00_2209 =
																					(int) (((long) 16));
																				{	/* Cfa/cfa.scm 132 */
																					long BgL_auxz00_4230;

																					BgL_auxz00_4230 =
																						(long) (BgL_arg2644z00_2209);
																					BgL_restz00_2208 =
																						(BgL_offsetz00_2205 %
																						BgL_auxz00_4230);
																			}}
																			{	/* Cfa/cfa.scm 132 */

																				BgL_method5237z00_2198 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2203,
																						(int) (BgL_modz00_2206)),
																					(int) (BgL_restz00_2208));
												}}}}}}}}
												BgL_res5548z00_2223 =
													(BgL_approxz00_bglt) (PROCEDURE_ENTRY
													(BgL_method5237z00_2198) (BgL_method5237z00_2198,
														(obj_t) (BgL_nodez00_2197), BEOA));
										}}
										BgL_arg5439z00_1824 = BgL_res5548z00_2223;
								}}
								{
									obj_t BgL_approxz00_4242;

									obj_t BgL_nz00_4241;

									BgL_nz00_4241 = BgL_arg5438z00_1823;
									BgL_approxz00_4242 = (obj_t) (BgL_arg5439z00_1824);
									BgL_approxz00_1820 = BgL_approxz00_4242;
									BgL_nz00_1819 = BgL_nz00_4241;
									goto BgL_zc3anonymousza35436ze3z83_1821;
								}
							}
					}
				}
			}
		}
	}



/* cfa-variable-value-a5259 */
	obj_t BGl_cfazd2variablezd2valuezd2a5259zd2zzcfa_cfaz00(obj_t BgL_envz00_3112,
		obj_t BgL_valuez00_3113)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 119 */
			{
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_valuez00_1807;

				{	/* Cfa/cfa.scm 120 */
					BgL_approxz00_bglt BgL_auxz00_4245;

					BgL_valuez00_1807 =
						(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_valuez00_3113);
					{
						obj_t BgL_auxz00_4246;

						{	/* Cfa/cfa.scm 120 */
							BgL_objectz00_bglt BgL_auxz00_4247;

							BgL_auxz00_4247 = (BgL_objectz00_bglt) (BgL_valuez00_1807);
							BgL_auxz00_4246 = BGL_OBJECT_WIDENING(BgL_auxz00_4247);
						}
						BgL_auxz00_4245 =
							(((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_auxz00_4246))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4245);
				}
			}
		}
	}



/* cfa-variable-value-a5257 */
	obj_t BGl_cfazd2variablezd2valuezd2a5257zd2zzcfa_cfaz00(obj_t BgL_envz00_3114,
		obj_t BgL_valuez00_3115)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 108 */
			{
				BgL_sexitzf2cinfozf2_bglt BgL_valuez00_1801;

				{	/* Cfa/cfa.scm 109 */
					BgL_approxz00_bglt BgL_auxz00_4253;

					BgL_valuez00_1801 = (BgL_sexitzf2cinfozf2_bglt) (BgL_valuez00_3115);
					{
						obj_t BgL_auxz00_4254;

						{	/* Cfa/cfa.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_4255;

							BgL_auxz00_4255 = (BgL_objectz00_bglt) (BgL_valuez00_1801);
							BgL_auxz00_4254 = BGL_OBJECT_WIDENING(BgL_auxz00_4255);
						}
						BgL_auxz00_4253 =
							(((BgL_sexitzf2cinfozf2_bglt) CREF(BgL_auxz00_4254))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4253);
				}
			}
		}
	}



/* cfa-variable-value-a5255 */
	obj_t BGl_cfazd2variablezd2valuezd2a5255zd2zzcfa_cfaz00(obj_t BgL_envz00_3116,
		obj_t BgL_valuez00_3117)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 101 */
			{
				BgL_cvarzf2cinfozf2_bglt BgL_valuez00_1795;

				{	/* Cfa/cfa.scm 102 */
					BgL_approxz00_bglt BgL_auxz00_4261;

					BgL_valuez00_1795 = (BgL_cvarzf2cinfozf2_bglt) (BgL_valuez00_3117);
					{
						obj_t BgL_auxz00_4262;

						{	/* Cfa/cfa.scm 102 */
							BgL_objectz00_bglt BgL_auxz00_4263;

							BgL_auxz00_4263 = (BgL_objectz00_bglt) (BgL_valuez00_1795);
							BgL_auxz00_4262 = BGL_OBJECT_WIDENING(BgL_auxz00_4263);
						}
						BgL_auxz00_4261 =
							(((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_auxz00_4262))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4261);
				}
			}
		}
	}



/* cfa-variable-value-a5253 */
	obj_t BGl_cfazd2variablezd2valuezd2a5253zd2zzcfa_cfaz00(obj_t BgL_envz00_3118,
		obj_t BgL_valuez00_3119)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 94 */
			{
				BgL_scnstzf2cinfozf2_bglt BgL_valuez00_1789;

				{	/* Cfa/cfa.scm 95 */
					BgL_approxz00_bglt BgL_auxz00_4269;

					BgL_valuez00_1789 = (BgL_scnstzf2cinfozf2_bglt) (BgL_valuez00_3119);
					{
						obj_t BgL_auxz00_4270;

						{	/* Cfa/cfa.scm 95 */
							BgL_objectz00_bglt BgL_auxz00_4271;

							BgL_auxz00_4271 = (BgL_objectz00_bglt) (BgL_valuez00_1789);
							BgL_auxz00_4270 = BGL_OBJECT_WIDENING(BgL_auxz00_4271);
						}
						BgL_auxz00_4269 =
							(((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_auxz00_4270))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4269);
				}
			}
		}
	}



/* cfa-variable-value-a5251 */
	obj_t BGl_cfazd2variablezd2valuezd2a5251zd2zzcfa_cfaz00(obj_t BgL_envz00_3120,
		obj_t BgL_valuez00_3121)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 87 */
			{
				BgL_svarzf2cinfozf2_bglt BgL_valuez00_1783;

				{	/* Cfa/cfa.scm 88 */
					BgL_approxz00_bglt BgL_auxz00_4277;

					BgL_valuez00_1783 = (BgL_svarzf2cinfozf2_bglt) (BgL_valuez00_3121);
					{
						obj_t BgL_auxz00_4278;

						{	/* Cfa/cfa.scm 88 */
							BgL_objectz00_bglt BgL_auxz00_4279;

							BgL_auxz00_4279 = (BgL_objectz00_bglt) (BgL_valuez00_1783);
							BgL_auxz00_4278 = BGL_OBJECT_WIDENING(BgL_auxz00_4279);
						}
						BgL_auxz00_4277 =
							(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_4278))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4277);
				}
			}
		}
	}



/* cfa!-closure5247 */
	obj_t BGl_cfaz12zd2closure5247zc0zzcfa_cfaz00(obj_t BgL_envz00_3122,
		obj_t BgL_nodez00_3123)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 76 */
			{
				BgL_closurez00_bglt BgL_nodez00_1775;

				BgL_nodez00_1775 = (BgL_closurez00_bglt) (BgL_nodez00_3123);
				return
					BGl_internalzd2errorzd2zztools_errorz00(BGl_string5630z00zzcfa_cfaz00,
					BGl_string5664z00zzcfa_cfaz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1775)));
			}
		}
	}



/* cfa!-var5245 */
	obj_t BGl_cfaz12zd2var5245zc0zzcfa_cfaz00(obj_t BgL_envz00_3124,
		obj_t BgL_nodez00_3125)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 65 */
			{
				BgL_varz00_bglt BgL_nodez00_1753;

				BgL_nodez00_1753 = (BgL_varz00_bglt) (BgL_nodez00_3125);
				{	/* Cfa/cfa.scm 67 */
					obj_t BgL_approxz00_1757;

					{	/* Cfa/cfa.scm 67 */
						BgL_valuez00_bglt BgL_arg5423z00_1771;

						{	/* Cfa/cfa.scm 67 */
							BgL_variablez00_bglt BgL_obj1611z00_2147;

							BgL_obj1611z00_2147 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1753))->BgL_variablez00);
							BgL_arg5423z00_1771 =
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2147))->
								BgL_valuez00);
						}
						{	/* Cfa/cfa.scm 67 */
							obj_t BgL_method5249z00_2149;

							{	/* Cfa/cfa.scm 67 */
								BgL_objectz00_bglt BgL_objz00_2150;

								BgL_objz00_2150 = (BgL_objectz00_bglt) (BgL_arg5423z00_1771);
								{	/* Cfa/cfa.scm 67 */
									long BgL_objzd2classzd2numz00_2151;

									BgL_objzd2classzd2numz00_2151 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2150);
									{	/* Cfa/cfa.scm 67 */
										obj_t BgL_arg2643z00_2152;

										BgL_arg2643z00_2152 =
											PROCEDURE_REF
											(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
											(int) (((long) 1)));
										{	/* Cfa/cfa.scm 67 */
											obj_t BgL_arrayz00_2154;

											int BgL_offsetz00_2155;

											BgL_arrayz00_2154 = BgL_arg2643z00_2152;
											BgL_offsetz00_2155 =
												(int) (BgL_objzd2classzd2numz00_2151);
											{	/* Cfa/cfa.scm 67 */
												long BgL_offsetz00_2156;

												BgL_offsetz00_2156 =
													((long) (BgL_offsetz00_2155) - OBJECT_TYPE);
												{	/* Cfa/cfa.scm 67 */
													long BgL_modz00_2157;

													{	/* Cfa/cfa.scm 67 */
														int BgL_arg2645z00_2158;

														BgL_arg2645z00_2158 = (int) (((long) 16));
														{	/* Cfa/cfa.scm 67 */
															long BgL_auxz00_4299;

															BgL_auxz00_4299 = (long) (BgL_arg2645z00_2158);
															BgL_modz00_2157 =
																(BgL_offsetz00_2156 / BgL_auxz00_4299);
													}}
													{	/* Cfa/cfa.scm 67 */
														long BgL_restz00_2159;

														{	/* Cfa/cfa.scm 67 */
															int BgL_arg2644z00_2160;

															BgL_arg2644z00_2160 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 67 */
																long BgL_auxz00_4303;

																BgL_auxz00_4303 = (long) (BgL_arg2644z00_2160);
																BgL_restz00_2159 =
																	(BgL_offsetz00_2156 % BgL_auxz00_4303);
														}}
														{	/* Cfa/cfa.scm 67 */

															BgL_method5249z00_2149 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2154,
																	(int) (BgL_modz00_2157)),
																(int) (BgL_restz00_2159));
							}}}}}}}}
							BgL_approxz00_1757 =
								PROCEDURE_ENTRY(BgL_method5249z00_2149) (BgL_method5249z00_2149,
								(obj_t) (BgL_arg5423z00_1771), BEOA);
					}}
					{	/* Cfa/cfa.scm 68 */
						bool_t BgL_testz00_4313;

						{	/* Cfa/cfa.scm 68 */
							bool_t BgL_testz00_4314;

							{	/* Cfa/cfa.scm 68 */
								obj_t BgL_auxz00_4320;

								obj_t BgL_auxz00_4315;

								{	/* Cfa/cfa.scm 68 */
									BgL_typez00_bglt BgL_auxz00_4321;

									{
										BgL_nodez00_bglt BgL_auxz00_4322;

										BgL_auxz00_4322 = (BgL_nodez00_bglt) (BgL_nodez00_1753);
										BgL_auxz00_4321 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4322))->BgL_typez00);
									}
									BgL_auxz00_4320 = (obj_t) (BgL_auxz00_4321);
								}
								{	/* Cfa/cfa.scm 68 */
									BgL_typez00_bglt BgL_auxz00_4316;

									{	/* Cfa/cfa.scm 68 */
										BgL_variablez00_bglt BgL_obj1608z00_2175;

										BgL_obj1608z00_2175 =
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1753))->
											BgL_variablez00);
										BgL_auxz00_4316 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2175))->
											BgL_typez00);
									}
									BgL_auxz00_4315 = (obj_t) (BgL_auxz00_4316);
								}
								BgL_testz00_4314 = (BgL_auxz00_4315 == BgL_auxz00_4320);
							}
							if (BgL_testz00_4314)
								{	/* Cfa/cfa.scm 68 */
									BgL_testz00_4313 = ((bool_t) 1);
								}
							else
								{	/* Cfa/cfa.scm 68 */
									BgL_typez00_bglt BgL_arg5419z00_1767;

									{
										BgL_nodez00_bglt BgL_auxz00_4327;

										BgL_auxz00_4327 = (BgL_nodez00_bglt) (BgL_nodez00_1753);
										BgL_arg5419z00_1767 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4327))->BgL_typez00);
									}
									BgL_testz00_4313 =
										(
										(obj_t) (BgL_arg5419z00_1767) ==
										BGl_za2_za2z00zztype_cachez00);
								}
						}
						if (BgL_testz00_4313)
							{	/* Cfa/cfa.scm 68 */
								return BgL_approxz00_1757;
							}
						else
							{	/* Cfa/cfa.scm 70 */
								BgL_approxz00_bglt BgL_duplicated5169z00_1759;

								BgL_duplicated5169z00_1759 =
									(BgL_approxz00_bglt) (BgL_approxz00_1757);
								{	/* Cfa/cfa.scm 71 */
									BgL_approxz00_bglt BgL_new5170z00_1760;

									{	/* Cfa/cfa.scm 71 */
										BgL_typez00_bglt BgL_arg5412z00_1761;

										bool_t BgL_arg5413z00_1762;

										obj_t BgL_arg5414z00_1763;

										bool_t BgL_arg5415z00_1764;

										long BgL_arg5416z00_1765;

										{
											BgL_nodez00_bglt BgL_auxz00_4333;

											BgL_auxz00_4333 = (BgL_nodez00_bglt) (BgL_nodez00_1753);
											BgL_arg5412z00_1761 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4333))->
												BgL_typez00);
										}
										BgL_arg5413z00_1762 =
											(((BgL_approxz00_bglt) CREF(BgL_duplicated5169z00_1759))->
											BgL_typezd2lockedzf3z21);
										BgL_arg5414z00_1763 =
											(((BgL_approxz00_bglt) CREF(BgL_duplicated5169z00_1759))->
											BgL_allocsz00);
										BgL_arg5415z00_1764 =
											(((BgL_approxz00_bglt) CREF(BgL_duplicated5169z00_1759))->
											BgL_topzf3zf3);
										BgL_arg5416z00_1765 =
											(((BgL_approxz00_bglt) CREF(BgL_duplicated5169z00_1759))->
											BgL_lostzd2stampzd2);
										BgL_new5170z00_1760 =
											BGl_makezd2approxzd2zzcfa_infoz00(BgL_arg5412z00_1761,
											BgL_arg5413z00_1762, BgL_arg5414z00_1763,
											BgL_arg5415z00_1764, BgL_arg5416z00_1765);
									}
									{	/* Cfa/cfa.scm 70 */

										return (obj_t) (BgL_new5170z00_1760);
									}
								}
							}
					}
				}
			}
		}
	}



/* cfa!-kwote/node5243 */
	obj_t BGl_cfaz12zd2kwotezf2node5243z32zzcfa_cfaz00(obj_t BgL_envz00_3126,
		obj_t BgL_knodez00_3127)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 56 */
			{
				BgL_kwotezf2nodezf2_bglt BgL_knodez00_1746;

				{	/* Cfa/cfa.scm 57 */
					BgL_approxz00_bglt BgL_auxz00_4343;

					BgL_knodez00_1746 = (BgL_kwotezf2nodezf2_bglt) (BgL_knodez00_3127);
					{	/* Cfa/cfa.scm 57 */
						BgL_nodez00_bglt BgL_arg5409z00_2117;

						{
							obj_t BgL_auxz00_4344;

							{	/* Cfa/cfa.scm 57 */
								BgL_objectz00_bglt BgL_auxz00_4345;

								BgL_auxz00_4345 = (BgL_objectz00_bglt) (BgL_knodez00_1746);
								BgL_auxz00_4344 = BGL_OBJECT_WIDENING(BgL_auxz00_4345);
							}
							BgL_arg5409z00_2117 =
								(((BgL_kwotezf2nodezf2_bglt) CREF(BgL_auxz00_4344))->
								BgL_nodez00);
						}
						{	/* Cfa/cfa.scm 57 */
							BgL_approxz00_bglt BgL_res5543z00_2145;

							{	/* Cfa/cfa.scm 57 */
								obj_t BgL_method5237z00_2120;

								{	/* Cfa/cfa.scm 57 */
									BgL_objectz00_bglt BgL_objz00_2121;

									BgL_objz00_2121 = (BgL_objectz00_bglt) (BgL_arg5409z00_2117);
									{	/* Cfa/cfa.scm 57 */
										long BgL_objzd2classzd2numz00_2122;

										BgL_objzd2classzd2numz00_2122 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2121);
										{	/* Cfa/cfa.scm 57 */
											obj_t BgL_arg2643z00_2123;

											BgL_arg2643z00_2123 =
												PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
												(int) (((long) 1)));
											{	/* Cfa/cfa.scm 57 */
												obj_t BgL_arrayz00_2125;

												int BgL_offsetz00_2126;

												BgL_arrayz00_2125 = BgL_arg2643z00_2123;
												BgL_offsetz00_2126 =
													(int) (BgL_objzd2classzd2numz00_2122);
												{	/* Cfa/cfa.scm 57 */
													long BgL_offsetz00_2127;

													BgL_offsetz00_2127 =
														((long) (BgL_offsetz00_2126) - OBJECT_TYPE);
													{	/* Cfa/cfa.scm 57 */
														long BgL_modz00_2128;

														{	/* Cfa/cfa.scm 57 */
															int BgL_arg2645z00_2129;

															BgL_arg2645z00_2129 = (int) (((long) 16));
															{	/* Cfa/cfa.scm 57 */
																long BgL_auxz00_4357;

																BgL_auxz00_4357 = (long) (BgL_arg2645z00_2129);
																BgL_modz00_2128 =
																	(BgL_offsetz00_2127 / BgL_auxz00_4357);
														}}
														{	/* Cfa/cfa.scm 57 */
															long BgL_restz00_2130;

															{	/* Cfa/cfa.scm 57 */
																int BgL_arg2644z00_2131;

																BgL_arg2644z00_2131 = (int) (((long) 16));
																{	/* Cfa/cfa.scm 57 */
																	long BgL_auxz00_4361;

																	BgL_auxz00_4361 =
																		(long) (BgL_arg2644z00_2131);
																	BgL_restz00_2130 =
																		(BgL_offsetz00_2127 % BgL_auxz00_4361);
															}}
															{	/* Cfa/cfa.scm 57 */

																BgL_method5237z00_2120 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2125,
																		(int) (BgL_modz00_2128)),
																	(int) (BgL_restz00_2130));
								}}}}}}}}
								BgL_res5543z00_2145 =
									(BgL_approxz00_bglt) (PROCEDURE_ENTRY(BgL_method5237z00_2120)
									(BgL_method5237z00_2120, (obj_t) (BgL_arg5409z00_2117),
										BEOA));
							}
							BgL_auxz00_4343 = BgL_res5543z00_2145;
					}}
					return (obj_t) (BgL_auxz00_4343);
				}
			}
		}
	}



/* cfa!-kwote/Cinfo5241 */
	obj_t BGl_cfaz12zd2kwotezf2Cinfo5241z32zzcfa_cfaz00(obj_t BgL_envz00_3128,
		obj_t BgL_nodez00_3129)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 49 */
			{
				BgL_kwotezf2cinfozf2_bglt BgL_nodez00_1740;

				{	/* Cfa/cfa.scm 50 */
					BgL_approxz00_bglt BgL_auxz00_4374;

					BgL_nodez00_1740 = (BgL_kwotezf2cinfozf2_bglt) (BgL_nodez00_3129);
					{
						obj_t BgL_auxz00_4375;

						{	/* Cfa/cfa.scm 50 */
							BgL_objectz00_bglt BgL_auxz00_4376;

							BgL_auxz00_4376 = (BgL_objectz00_bglt) (BgL_nodez00_1740);
							BgL_auxz00_4375 = BGL_OBJECT_WIDENING(BgL_auxz00_4376);
						}
						BgL_auxz00_4374 =
							(((BgL_kwotezf2cinfozf2_bglt) CREF(BgL_auxz00_4375))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4374);
				}
			}
		}
	}



/* cfa!-atom/Cinfo5239 */
	obj_t BGl_cfaz12zd2atomzf2Cinfo5239z32zzcfa_cfaz00(obj_t BgL_envz00_3130,
		obj_t BgL_nodez00_3131)
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 42 */
			{
				BgL_atomzf2cinfozf2_bglt BgL_nodez00_1734;

				{	/* Cfa/cfa.scm 43 */
					BgL_approxz00_bglt BgL_auxz00_4382;

					BgL_nodez00_1734 = (BgL_atomzf2cinfozf2_bglt) (BgL_nodez00_3131);
					{
						obj_t BgL_auxz00_4383;

						{	/* Cfa/cfa.scm 43 */
							BgL_objectz00_bglt BgL_auxz00_4384;

							BgL_auxz00_4384 = (BgL_objectz00_bglt) (BgL_nodez00_1734);
							BgL_auxz00_4383 = BGL_OBJECT_WIDENING(BgL_auxz00_4384);
						}
						BgL_auxz00_4382 =
							(((BgL_atomzf2cinfozf2_bglt) CREF(BgL_auxz00_4383))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_4382);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_cfaz00()
	{
		AN_OBJECT;
		{	/* Cfa/cfa.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_appz00(((long) 207302694),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_funcallz00(((long) 107614585),
				BSTRING_TO_STRING(BGl_string5665z00zzcfa_cfaz00));
		}
	}

#ifdef __cplusplus
}
#endif
