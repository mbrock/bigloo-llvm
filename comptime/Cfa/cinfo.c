/*===========================================================================*/
/*   (Cfa/cinfo.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cinfo.scm)*/
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

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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

	typedef struct BgL_cfunzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cfunzf2cinfozf2_bglt;

	typedef struct BgL_externzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_externzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_scnstzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_scnstzf2cinfozf2_bglt;

	typedef struct BgL_prezd2clozd2envz00_bgl
	{
		char dummy;
	}                         *BgL_prezd2clozd2envz00_bglt;

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

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;

	typedef struct BgL_reshapedzd2globalzd2_bgl
	{
		char dummy;
	}                           *BgL_reshapedzd2globalzd2_bglt;

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

	typedef struct BgL_funcallzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_vazd2approxzd2;
		bool_t BgL_arityzd2errorzd2noticedzf3zf3;
		bool_t BgL_typezd2errorzd2noticedzf3zf3;
	}                         *BgL_funcallzf2cinfozf2_bglt;

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

	typedef struct BgL_prezd2makezd2boxz00_bgl
	{
		char dummy;
	}                          *BgL_prezd2makezd2boxz00_bglt;

	typedef struct BgL_makezd2boxzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_makezd2boxzf2cinfoz20_bglt;

	typedef struct BgL_makezd2boxzf2ozd2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
	}                                *BgL_makezd2boxzf2ozd2cinfozf2_bglt;

	typedef struct BgL_boxzd2setz12zf2cinfoz32_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                              *BgL_boxzd2setz12zf2cinfoz32_bglt;

	typedef struct BgL_boxzd2refzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                           *BgL_boxzd2refzf2cinfoz20_bglt;

	typedef struct BgL_boxzd2setz12zf2ozd2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                  *BgL_boxzd2setz12zf2ozd2cinfoze0_bglt;

	typedef struct BgL_boxzd2refzf2ozd2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_boxzd2refzf2ozd2cinfozf2_bglt;


	static obj_t BGl__wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__makezd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_fillzd2setzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00
		(BgL_setzd2exzd2itzf2cinfozf2_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_makezd2boxzf2cinfoz20_bglt
		BGl_wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2atomzf24551z11zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2kwotezf2nodez72zzcfa_infoz00(obj_t);
	static obj_t BGl__atomzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setqzf2cinfozf2_bglt
		BGl_makezd2setqzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	extern BgL_boxzd2refzd2_bglt BGl_makezd2boxzd2refz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_atomz00_bglt
		BGl_z52allocatezd2atomzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__makezd2boxzf2Cinfozf3zd3zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	extern BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	BGL_EXPORTED_DECL BgL_prezd2clozd2envz00_bglt
		BGl_fillzd2prezd2clozd2envz12zc0zzcfa_infoz00(BgL_prezd2clozd2envz00_bglt);
	static obj_t BGl__z52allocatezd2failzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_cfunzf2cinfozf2_bglt
		BGl_cfunzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_z52allocatezd2jumpzd2exzd2itzf2Cinfoz72zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_reshapedzd2localzd2_bglt
		BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_kwotezf2nodezf3z01zzcfa_infoz00(obj_t);
	static obj_t BGl__z52allocatezd2appzd2lyzf2Cinfoza0zzcfa_infoz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2prezd2makezd2boxz80zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_appzd2lyzd2_bglt
		BGl_z52allocatezd2appzd2lyzf2Cinfoza0zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_kwotezf2nodezf2_bglt
		BGl_makezd2kwotezf2nodez20zzcfa_infoz00(obj_t, BgL_typez00_bglt, obj_t,
		BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2prezd2makezd2boxz80zzcfa_infoz00();
	static obj_t BGl__jumpzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_kwotezf2cinfozf2_bglt
		BGl_makezd2kwotezf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt, obj_t,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_jumpzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00();
	static obj_t BGl__fillzd2kwotezf2nodez12z32zzcfa_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_failzf2cinfozf2_bglt
		BGl_makezd2failzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_scnstzf2cinfozf2_bglt
		BGl_fillzd2scnstzf2Cinfoz12z32zzcfa_infoz00(BgL_scnstzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__wideningzd2cfunzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_setqzf2cinfozf2_bglt
		BGl_setqzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_atomzf2cinfozf2_bglt
		BGl_atomzf2Cinfozd2nilz20zzcfa_infoz00();
	extern BgL_makezd2boxzd2_bglt BGl_makezd2makezd2boxz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt);
	static obj_t BGl__z52allocatezd2cvarzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl__wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_setqzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__wideningzd2prezd2makezd2boxzd2zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_conditionalzf2cinfozf2_bglt
		BGl_conditionalzf2Cinfozd2nilz20zzcfa_infoz00();
	extern obj_t BGl_svarz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_boxzd2setz12zc0_bglt
		BGl_z52allocatezd2boxzd2setz12zf2Cinfozb2zzcfa_infoz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl__appzd2lyzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t);
	static obj_t BGl__z52allocatezd2boxzd2refzf2Cinfoza0zzcfa_infoz00(obj_t);
	static obj_t BGl__makezd2boxzf2Ozd2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_cvarzf2cinfozf2_bglt
		BGl_makezd2cvarzf2Cinfoz20zzcfa_infoz00(bool_t, BgL_approxz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_kwotezf2nodezf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_z52allocatezd2svarzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__makezd2conditionalzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_failzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2inter4585ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2selectzf2Cinfoz72zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_conditionalzf2cinfozf2_bglt
		BGl_makezd2conditionalzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_selectz00_bglt
		BGl_z52allocatezd2selectzf2Cinfoz72zzcfa_infoz00();
	extern BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00();
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__fillzd2prezd2clozd2envz12zc0zzcfa_infoz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_objectzd2ze3structzd2prezd2c4576z31zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2prezd2m4504z31zzcfa_infoz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_boxzd2setz12zf2Ozd2Cinfozd2nilz32zzcfa_infoz00();
	static obj_t BGl_cnstzd2initzd2zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_svarzf2cinfozf2_bglt
		BGl_svarzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DEF obj_t BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__wideningzd2selectzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl__z52allocatezd2scnstzf2Cinfoz72zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_failzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	static obj_t BGl__makezd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunzf2cinfozf2_bglt
		BGl_fillzd2cfunzf2Cinfoz12z32zzcfa_infoz00(BgL_cfunzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_makezd2boxzf2cinfoz20_bglt
		BGl_fillzd2makezd2boxzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_makezd2boxzf2cinfoz20_bglt, BgL_approxz00_bglt);
	static obj_t BGl__z52allocatezd2approxz80zzcfa_infoz00(obj_t);
	static obj_t BGl__makezd2atomzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2scnstzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzd2_bglt
		BGl_z52allocatezd2boxzd2refzf2Cinfoza0zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_makezd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	static obj_t BGl__z52allocatezd2conditionalzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl__boxzd2setz12zf2Cinfozf3zc1zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__fillzd2failzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DEF obj_t BGl_reshapedzd2localzd2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_prezd2clozd2envz00zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__kwotezf2nodezf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2kwote4543ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2kwote4547ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__boxzd2refzf2Cinfozf3zd3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2sexitzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl__fillzd2makezd2boxzf2Ozd2Cinfoz12z32zzcfa_infoz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__boxzd2refzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_fillzd2approxz12zc0zzcfa_infoz00(BgL_approxz00_bglt, BgL_typez00_bglt,
		bool_t, obj_t, bool_t, long);
	static obj_t BGl__wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_fillzd2makezd2boxzf2Ozd2Cinfoz12z32zzcfa_infoz00
		(BgL_makezd2boxzf2ozd2cinfozf2_bglt, BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_setzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00();
	static obj_t BGl__z52allocatezd2externzd2sfunzf2Cinfoza0zzcfa_infoz00(obj_t);
	extern BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_makezd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_kwotezf2Cinfozf3z01zzcfa_infoz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t
		BGl__z52allocatezd2boxzd2setz12zf2Ozd2Cinfoz60zzcfa_infoz00(obj_t);
	static obj_t BGl__fillzd2externzd2sfunzf2Cinfoz12ze0zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__conditionalzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_reshapedzd2globalzd2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__wideningzd2reshapedzd2globalz00zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL bool_t BGl_reshapedzd2globalzf3z21zzcfa_infoz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_infoz00();
	static obj_t BGl__prezd2clozd2envzf3zf3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2selec4517ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__makezd2svarzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_makezd2boxzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_setqzf2cinfozf2_bglt
		BGl_wideningzd2setqzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__wideningzd2scnstzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__fillzd2funcallzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cfunzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl__z52allocatezd2makezd2boxzf2Cinfoza0zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_prezd2makezd2boxz00_bglt
		BGl_prezd2makezd2boxzd2nilzd2zzcfa_infoz00();
	BGL_EXPORTED_DECL bool_t BGl_sexitzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	extern BgL_cvarz00_bglt BGl_makezd2cvarzd2zzast_varz00(bool_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2makezd2boxzf2Ozd2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__scnstzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__makezd2kwotezf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__boxzd2refzf2Ozd2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_conditionalzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_appzd2lyzf2cinfoz20_bglt
		BGl_wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	extern BgL_setzd2exzd2itz00_bglt
		BGl_makezd2setzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_prezd2makezd2boxz00_bglt
		BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_kwotezf2nodezf2_bglt
		BGl_wideningzd2kwotezf2nodez20zzcfa_infoz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__selectzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfunzf2cinfozf2_bglt
		BGl_makezd2cfunzf2Cinfoz20zzcfa_infoz00(long, obj_t, obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, BgL_approxz00_bglt);
	static obj_t BGl__kwotezf2nodezd2nilz20zzcfa_infoz00(obj_t);
	static obj_t BGl__reshapedzd2localzf3z21zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2reshapedzd2localz52zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_fillzd2externzd2sfunzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_externzd2sfunzf2cinfoz20_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_failzf2cinfozf2_bglt
		BGl_wideningzd2failzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2approxzd2nilz52zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__failzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__wideningzd2sexitzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_fillzd2boxzd2setz12zf2Cinfoz12zf2zzcfa_infoz00
		(BgL_boxzd2setz12zf2cinfoz32_bglt, BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_conditionalz00_bglt
		BGl_z52allocatezd2conditionalzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__fillzd2selectzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cvarzf2cinfozf2_bglt
		BGl_cvarzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_makezd2boxzf2cinfoz20_bglt
		BGl_makezd2makezd2boxzf2Cinfozf2zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_nodez00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_cvarzf2cinfozf2_bglt
		BGl_fillzd2cvarzf2Cinfoz12z32zzcfa_infoz00(BgL_cvarzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2funca4534ze3zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_kwotezf2cinfozf2_bglt
		BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__wideningzd2atomzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__makezd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_setzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_approxzf3zf3zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_cvarzf2cinfozf2_bglt
		BGl_wideningzd2cvarzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4480z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_reshapedzd2localzd2_bglt
		BGl_makezd2reshapedzd2localz00zzcfa_infoz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t, long, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_makezd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, BgL_approxz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4484z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4488z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4502z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4493z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__makezd2reshapedzd2globalz00zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4497z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4507z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4511z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4515z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_z52allocatezd2externzd2sfunzf2Cinfoza0zzcfa_infoz00();
	static obj_t BGl_structzb2objectzd2ze3objec4519z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfunzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4523z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2internzd2sfunzf2Cinfoz12ze0zzcfa_infoz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2boxzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_selectzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	static obj_t BGl__z52allocatezd2prezd2clozd2envz80zzcfa_infoz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4528z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_selectzf2cinfozf2_bglt
		BGl_wideningzd2selectzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4532z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4536z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_scnstz00_bglt
		BGl_z52allocatezd2scnstzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl_structzb2objectzd2ze3objec4541z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_selectzf2cinfozf2_bglt
		BGl_fillzd2selectzf2Cinfoz12z32zzcfa_infoz00(BgL_selectzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__externzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t);
	extern obj_t BGl_cvarz00zzast_varz00;
	static obj_t BGl_structzb2objectzd2ze3objec4545z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2boxzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t);
	static obj_t BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 =
		BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4549z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4553z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4557z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4561z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2reshapedzd2globalz52zzcfa_infoz00(obj_t);
	extern BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4566z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4570z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2cfunzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4574z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2boxzd2refzf2Ozd2Cinfoz12z32zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_boxzd2refzf2cinfoz20_bglt
		BGl_wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec4578z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2boxz00zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl_structzb2objectzd2ze3objec4583z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4587z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4601z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4592z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2funcallzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4597z83zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2boxzd2setz12zf2Cinfozb2zzcfa_infoz00(obj_t);
	static obj_t BGl__reshapedzd2globalzd2nilz00zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_failzf2cinfozf2_bglt
		BGl_failzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_conditionalzf2cinfozf2_bglt
		BGl_wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__cfunzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_sexitz00_bglt
		BGl_z52allocatezd2sexitzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__wideningzd2svarzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_selectz00_bglt BGl_makezd2selectzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_kwotezf2cinfozf2_bglt
		BGl_fillzd2kwotezf2Cinfoz12z32zzcfa_infoz00(BgL_kwotezf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_makezd2boxzf2Cinfozf3zd3zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzf2cinfoz20_bglt
		BGl_makezd2boxzf2Cinfozd2nilzf2zzcfa_infoz00();
	static obj_t BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_z52allocatezd2reshapedzd2globalz52zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_fillzd2internzd2sfunzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_internzd2sfunzf2cinfoz20_bglt, BgL_approxz00_bglt, long);
	BGL_EXPORTED_DECL BgL_setqz00_bglt
		BGl_z52allocatezd2setqzf2Cinfoz72zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_selectzf2cinfozf2_bglt
		BGl_selectzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_reshapedzd2localzd2_bglt
		BGl_fillzd2reshapedzd2localz12z12zzcfa_infoz00(BgL_reshapedzd2localzd2_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_makezd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_scnstzf2cinfozf2_bglt
		BGl_makezd2scnstzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl__setqzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_svarzf2cinfozf2_bglt
		BGl_fillzd2svarzf2Cinfoz12z32zzcfa_infoz00(BgL_svarzf2cinfozf2_bglt,
		BgL_approxz00_bglt, bool_t);
	static obj_t BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00 =
		BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2condi4526ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__atomzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	static obj_t BGl__wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__sexitzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2svarzf24572z11zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_approxz00zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_selectzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_funcallz00_bglt
		BGl_z52allocatezd2funcallzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__reshapedzd2globalzf3z21zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_kwotez00_bglt
		BGl_z52allocatezd2kwotezf2nodez72zzcfa_infoz00();
	static obj_t BGl__fillzd2boxzd2refzf2Cinfoz12ze0zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl__makezd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2prezd2clozd2envzd2zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_sexitzf2cinfozf2_bglt
		BGl_fillzd2sexitzf2Cinfoz12z32zzcfa_infoz00(BgL_sexitzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2failzf24521z11zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_failz00_bglt
		BGl_z52allocatezd2failzf2Cinfoz72zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_sexitzf2cinfozf2_bglt
		BGl_makezd2sexitzf2Cinfoz20zzcfa_infoz00(obj_t, bool_t, BgL_approxz00_bglt);
	static obj_t BGl__makezd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2boxzd2r4478z31zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2setzd2exzd2itzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl__prezd2makezd2boxzd2nilzd2zzcfa_infoz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2scnst4580ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__scnstzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2boxzd2r4486z31zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_makezd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(long, obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, BgL_approxz00_bglt, long);
	BGL_EXPORTED_DECL BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_setqzf2cinfozf2_bglt
		BGl_fillzd2setqzf2Cinfoz12z32zzcfa_infoz00(BgL_setqzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	extern BgL_funcallz00_bglt BGl_makezd2funcallzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl__prezd2clozd2envzd2nilzd2zzcfa_infoz00(obj_t);
	static obj_t BGl__cfunzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__kwotezf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	static obj_t BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_cvarz00_bglt
		BGl_z52allocatezd2cvarzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__fillzd2kwotezf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__svarzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvarzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2atomzf2Cinfoz72zzcfa_infoz00(obj_t);
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cfunzf24594z11zzcfa_infoz00(obj_t,
		obj_t);
	extern BgL_failz00_bglt BGl_makezd2failzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	extern obj_t BGl_scnstz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_cfunzf2cinfozf2_bglt
		BGl_wideningzd2cfunzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_makezd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	static obj_t BGl__z52allocatezd2internzd2sfunzf2Cinfoza0zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_setzd2exzd2itz00_bglt
		BGl_z52allocatezd2setzd2exzd2itzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__fillzd2cvarzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_makezd2boxzf2Ozd2Cinfozd2nilz20zzcfa_infoz00();
	static obj_t BGl__z52allocatezd2jumpzd2exzd2itzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_infoz00();
	BGL_EXPORTED_DEF obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl__appzd2lyzf2Cinfozf3zd3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2makezd24500z31zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_atomzf2cinfozf2_bglt
		BGl_makezd2atomzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt, obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl_objectzd2ze3structzd2makezd24495z31zzcfa_infoz00(obj_t,
		obj_t);
	extern BgL_jumpzd2exzd2itz00_bglt
		BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__setzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__jumpzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_funcallzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	static obj_t BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__approxzf3zf3zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_boxzd2setz12zf2Cinfozf3zc1zzcfa_infoz00(obj_t);
	static obj_t BGl__makezd2setqzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2sexitzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_svarz00_bglt
		BGl_z52allocatezd2prezd2clozd2envz80zzcfa_infoz00();
	static obj_t BGl__makezd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl__makezd2boxzd2refzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2appzd2lyzf2Cinfoz12ze0zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 =
		BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2setqzf24530z11zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_externzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00();
	BGL_EXPORTED_DEF obj_t BGl_funcallzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__prezd2makezd2boxzf3zf3zzcfa_infoz00(obj_t, obj_t);
	extern BgL_conditionalz00_bglt BGl_makezd2conditionalzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt,
		BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_fillzd2boxzd2refzf2Ozd2Cinfoz12z32zzcfa_infoz00
		(BgL_boxzd2refzf2ozd2cinfozf2_bglt, BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00 = BUNSPEC;
	extern obj_t BGl_sexitz00zzast_varz00;
	extern BgL_boxzd2setz12zc0_bglt BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__makezd2kwotezf2nodez20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__fillzd2prezd2makezd2boxz12zc0zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_approxz00_bglt BGl_approxzd2nilzd2zzcfa_infoz00();
	static obj_t BGl__externzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_atomzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2svarzf2Cinfoz72zzcfa_infoz00(obj_t);
	static obj_t BGl__makezd2failzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_atomzf2cinfozf2_bglt
		BGl_fillzd2atomzf2Cinfoz12z32zzcfa_infoz00(BgL_atomzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl__fillzd2approxz12zc0zzcfa_infoz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t BGl_appzd2lyzf2Cinfozf3zd3zzcfa_infoz00(obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_boxzd2refzf2cinfoz20_bglt
		BGl_makezd2boxzd2refzf2Cinfozf2zzcfa_infoz00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_varz00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_appzd2lyzf2cinfoz20_bglt
		BGl_fillzd2appzd2lyzf2Cinfoz12ze0zzcfa_infoz00(BgL_appzd2lyzf2cinfoz20_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__kwotezf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__boxzd2setz12zf2Ozd2Cinfozd2nilz32zzcfa_infoz00(obj_t);
	static obj_t BGl__fillzd2reshapedzd2globalz12z12zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarzf2cinfozf2_bglt
		BGl_makezd2svarzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_approxz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t BGl_svarzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2clozd2envz00_bglt
		BGl_makezd2prezd2clozd2envzd2zzcfa_infoz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_infoz00();
	BGL_EXPORTED_DECL bool_t BGl_prezd2makezd2boxzf3zf3zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2approxzd2zzcfa_infoz00(BgL_typez00_bglt, bool_t, obj_t, bool_t,
		long);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__makezd2cvarzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t);
	static obj_t BGl__selectzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2boxz00_bglt
		BGl_fillzd2prezd2makezd2boxz12zc0zzcfa_infoz00
		(BgL_prezd2makezd2boxz00_bglt);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zc0_bglt
		BGl_z52allocatezd2boxzd2setz12zf2Ozd2Cinfoz60zzcfa_infoz00();
	static obj_t BGl_objectzd2ze3structzd2jumpzd24509z31zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2scnstzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_externzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t);
	static obj_t BGl__fillzd2makezd2boxzf2Cinfoz12ze0zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	extern BgL_scnstz00_bglt BGl_makezd2scnstzd2zzast_varz00(obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2funcallzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2svarzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__cvarzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_funcallzf2cinfozf2_bglt
		BGl_wideningzd2funcallzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, bool_t, bool_t);
	static obj_t BGl__setzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	static obj_t BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_z52allocatezd2internzd2sfunzf2Cinfoza0zzcfa_infoz00();
	static obj_t BGl_objectzd2ze3structzd2boxzd2s4482z31zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__sexitzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2boxzd2s4491z31zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__cvarzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_reshapedzd2localzf3z21zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	extern BgL_cfunz00_bglt BGl_makezd2cfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_setqzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_scnstzf2cinfozf2_bglt
		BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl__makezd2sexitzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cfunz00_bglt
		BGl_z52allocatezd2cfunzf2Cinfoz72zzcfa_infoz00();
	static obj_t BGl__z52allocatezd2kwotezf2Cinfoz72zzcfa_infoz00(obj_t);
	extern BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t, bool_t);
	static obj_t BGl__internzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t);
	static obj_t BGl__fillzd2setqzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzf2cinfoz20_bglt
		BGl_boxzd2refzf2Cinfozd2nilzf2zzcfa_infoz00();
	BGL_EXPORTED_DEF obj_t BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appzd2lyzf2cinfoz20_bglt
		BGl_makezd2appzd2lyzf2Cinfozf2zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_funcallzf2cinfozf2_bglt
		BGl_fillzd2funcallzf2Cinfoz12z32zzcfa_infoz00(BgL_funcallzf2cinfozf2_bglt,
		BgL_approxz00_bglt, BgL_approxz00_bglt, bool_t, bool_t);
	BGL_EXPORTED_DECL BgL_prezd2makezd2boxz00_bglt
		BGl_makezd2prezd2makezd2boxzd2zzcfa_infoz00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_nodez00_bglt);
	static obj_t BGl__wideningzd2setqzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__internzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__fillzd2setzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_boxzd2refzf2Ozd2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_sexitzf2cinfozf2_bglt
		BGl_wideningzd2sexitzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__wideningzd2kwotezf2nodez20zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_boxzd2refzf2Cinfozf3zd3zzcfa_infoz00(obj_t);
	static obj_t BGl__failzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt,
		long);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL bool_t BGl_prezd2clozd2envzf3zf3zzcfa_infoz00(obj_t);
	static obj_t BGl__wideningzd2failzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__fillzd2boxzd2setz12zf2Ozd2Cinfoz12z20zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_makezd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_nodez00_bglt, BgL_approxz00_bglt, BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__reshapedzd2localzd2nilz00zzcfa_infoz00(obj_t);
	static obj_t BGl__z52allocatezd2makezd2boxzf2Ozd2Cinfoz72zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_kwotezf2nodezf2_bglt
		BGl_fillzd2kwotezf2nodez12z32zzcfa_infoz00(BgL_kwotezf2nodezf2_bglt,
		BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_fillzd2boxzd2setz12zf2Ozd2Cinfoz12z20zzcfa_infoz00
		(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt, BgL_approxz00_bglt);
	static obj_t BGl__makezd2makezd2boxzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_internzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t);
	static obj_t BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
	extern obj_t BGl_cfunz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_reshapedzd2globalzd2_bglt
		BGl_makezd2reshapedzd2globalz00zzcfa_infoz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t, obj_t, bool_t, obj_t,
		bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2exter4589ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__fillzd2conditionalzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__svarzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_atomzf2cinfozf2_bglt
		BGl_wideningzd2atomzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__makezd2approxzd2zzcfa_infoz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_selectzf2cinfozf2_bglt
		BGl_makezd2selectzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_nodez00_bglt, obj_t, BgL_typez00_bglt, BgL_approxz00_bglt);
	static obj_t BGl__fillzd2boxzd2setz12zf2Cinfoz12zf2zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_scnstzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	static obj_t BGl__conditionalzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_funcallzf2cinfozf2_bglt
		BGl_funcallzf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DECL bool_t BGl_atomzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_appzd2lyzf2cinfoz20_bglt
		BGl_appzd2lyzf2Cinfozd2nilzf2zzcfa_infoz00();
	static obj_t BGl__wideningzd2cvarzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__makezd2reshapedzd2localz00zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__boxzd2refzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t);
	static obj_t BGl__wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2appzd2lyzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2prezd2makezd2boxzd2zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2atomzf2Cinfoz12z32zzcfa_infoz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_reshapedzd2localzd2_bglt
		BGl_reshapedzd2localzd2nilz00zzcfa_infoz00();
	static obj_t BGl__fillzd2jumpzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_boxzd2setz12zf2Ozd2Cinfozf3z13zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_sexitzf2cinfozf2_bglt
		BGl_sexitzf2Cinfozd2nilz20zzcfa_infoz00();
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl__makezd2cfunzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_fillzd2jumpzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00
		(BgL_jumpzd2exzd2itzf2cinfozf2_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_reshapedzd2globalzd2_bglt
		BGl_fillzd2reshapedzd2globalz12z12zzcfa_infoz00
		(BgL_reshapedzd2globalzd2_bglt);
	static obj_t BGl__setqzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2appzd2l4538z31zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2resha4555ze3zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_reshapedzd2globalzd2_bglt
		BGl_reshapedzd2globalzd2nilz00zzcfa_infoz00();
	static obj_t BGl_objectzd2ze3structzd2resha4559ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__makezd2funcallzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_conditionalzf2cinfozf2_bglt
		BGl_fillzd2conditionalzf2Cinfoz12z32zzcfa_infoz00
		(BgL_conditionalzf2cinfozf2_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_kwotezf2nodezf2_bglt
		BGl_kwotezf2nodezd2nilz20zzcfa_infoz00();
	static obj_t BGl__makezd2prezd2clozd2envzd2zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_conditionalzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_reshapedzd2globalzd2_bglt
		BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
	static obj_t BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 =
		BUNSPEC;
	static obj_t BGl__z52allocatezd2boxzd2refzf2Ozd2Cinfoz72zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
	static obj_t BGl__wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_svarzf2cinfozf2_bglt
		BGl_wideningzd2svarzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt, bool_t);
	static obj_t BGl_objectzd2initzd2zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_z52allocatezd2approxz80zzcfa_infoz00();
	static obj_t BGl__boxzd2setz12zf2Cinfozd2nilze0zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_scnstzf2cinfozf2_bglt
		BGl_scnstzf2Cinfozd2nilz20zzcfa_infoz00();
	extern BgL_appzd2lyzd2_bglt BGl_makezd2appzd2lyz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_failzf2cinfozf2_bglt
		BGl_fillzd2failzf2Cinfoz12z32zzcfa_infoz00(BgL_failzf2cinfozf2_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_jumpzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2clozd2envz00_bglt
		BGl_prezd2clozd2envzd2nilzd2zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2makezd2boxzf2Cinfoza0zzcfa_infoz00();
	static obj_t BGl__wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2selectzf2Cinfoz20zzcfa_infoz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_kwotezf2cinfozf2_bglt
		BGl_kwotezf2Cinfozd2nilz20zzcfa_infoz00();
	BGL_EXPORTED_DEF obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_makezd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt, BgL_approxz00_bglt);
	static obj_t BGl__funcallzf2Cinfozd2nilz20zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_prezd2clozd2envz00_bglt
		BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00();
	static obj_t BGl__makezd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2reshapedzd2localz00zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2cvarzf24568z11zzcfa_infoz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_funcallzf2cinfozf2_bglt
		BGl_makezd2funcallzf2Cinfoz20zzcfa_infoz00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, obj_t, obj_t, BgL_approxz00_bglt, BgL_approxz00_bglt,
		bool_t, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_boxzd2refzd2_bglt
		BGl_z52allocatezd2boxzd2refzf2Ozd2Cinfoz72zzcfa_infoz00();
	BGL_EXPORTED_DECL bool_t BGl_boxzd2refzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_kwotez00_bglt
		BGl_z52allocatezd2kwotezf2Cinfoz72zzcfa_infoz00();
	extern BgL_varz00_bglt BGl_varzd2nilzd2zzast_nodez00();
	static obj_t BGl_objectzd2ze3structzd2sexit4564ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2setzd2e4513z31zzcfa_infoz00(obj_t,
		obj_t);
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2appro4599ze3zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2setqzf2Cinfoz72zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_z52allocatezd2reshapedzd2localz52zzcfa_infoz00();
	BGL_EXPORTED_DECL BgL_boxzd2refzf2cinfoz20_bglt
		BGl_fillzd2boxzd2refzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_boxzd2refzf2cinfoz20_bglt, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_internzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00();
	static obj_t BGl__fillzd2reshapedzd2localz12z12zzcfa_infoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__funcallzf2Cinfozf3z01zzcfa_infoz00(obj_t, obj_t);
	static obj_t BGl__approxzd2nilzd2zzcfa_infoz00(obj_t);
	BGL_EXPORTED_DECL BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_boxzd2setz12zf2Cinfozd2nilze0zzcfa_infoz00();
	static obj_t BGl__boxzd2setz12zf2Ozd2Cinfozf3z13zzcfa_infoz00(obj_t, obj_t);
	static obj_t __cnst[30];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2svarzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2svarza7f2c5698z00,
		BGl__makezd2svarzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2makezd2boxzd2envz00zzcfa_infoz00,
		BgL_bgl__wideningza7d2preza75699z00,
		BGl__wideningzd2prezd2makezd2boxzd2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2makezd2boxzf2Cinfoz12zd2envz32zzcfa_infoz00,
		BgL_bgl__fillza7d2makeza7d2b5700z00,
		BGl__fillzd2makezd2boxzf2Cinfoz12ze0zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jumpzd2exzd2itzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__jumpza7d2exza7d2itza75701za7,
		BGl__jumpzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2boxzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__makeza7d2makeza7d2b5702z00,
		BGl__makezd2makezd2boxzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2boxzd2setz12zf2Ozd2Cinfozd2envze0zzcfa_infoz00,
		BgL_bgl__wideningza7d2boxza75703z00,
		BGl__wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2funcallzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2func5704za7,
		BGl__wideningzd2funcallzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_prezd2makezd2boxzf3zd2envz21zzcfa_infoz00,
		BgL_bgl__preza7d2makeza7d2bo5705z00,
		BGl__prezd2makezd2boxzf3zf3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2boxzd2refzf2Ozd2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2boxza75706z00,
		BGl__wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_prezd2clozd2envzf3zd2envz21zzcfa_infoz00,
		BgL_bgl__preza7d2cloza7d2env5707z00,
		BGl__prezd2clozd2envzf3zf3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2sexitzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2sexitza7f25708z00,
		BGl__fillzd2sexitzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2appzd2lyzf2Cinfoz12zd2envz32zzcfa_infoz00,
		BgL_bgl__fillza7d2appza7d2ly5709z00,
		BGl__fillzd2appzd2lyzf2Cinfoz12ze0zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2reshapedzd2localzd2envzd2zzcfa_infoz00,
		BgL_bgl__wideningza7d2resh5710za7,
		BGl__wideningzd2reshapedzd2localz00zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cvarzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2cvarza7f2c5711z00,
		BGl__fillzd2cvarzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2reshapedzd2globalzd2envz80zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2r5712z00,
		BGl__z52allocatezd2reshapedzd2globalz52zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setqzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__setqza7f2cinfoza7f35713z00, BGl__setqzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kwotezf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__kwoteza7f2cinfoza7f5714z00, BGl__kwotezf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2boxzf2Ozd2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2makeza7d2b5715z00,
		BGl__makezd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_internzd2sfunzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
		BgL_bgl__internza7d2sfunza7f5716z00,
		BGl__internzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2boxzd2nilzd2envz00zzcfa_infoz00,
		BgL_bgl__preza7d2makeza7d2bo5717z00,
		BGl__prezd2makezd2boxzd2nilzd2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2setzd2exzd2itzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2setza7d2ex5718z00,
		BGl__makezd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2internzd2sfunzf2Cinfozd2envz72zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2i5719z00,
		BGl__z52allocatezd2internzd2sfunzf2Cinfoza0zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2setz12zf2Cinfozd2nilzd2envz32zzcfa_infoz00,
		BgL_bgl__boxza7d2setza712za7f25720za7,
		BGl__boxzd2setz12zf2Cinfozd2nilze0zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atomzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__atomza7f2cinfoza7f35721z00, BGl__atomzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2conditionalzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2conditio5722za7,
		BGl__fillzd2conditionalzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_kwotezf2nodezd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__kwoteza7f2nodeza7d25723z00,
		BGl__kwotezf2nodezd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2reshapedzd2globalzd2envzd2zzcfa_infoz00,
		BgL_bgl__wideningza7d2resh5724za7,
		BGl__wideningzd2reshapedzd2globalz00zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sexitzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2sexitza7f25725z00,
		BGl__makezd2sexitzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionalzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__conditionalza7f2c5726za7,
		BGl__conditionalzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_failzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__failza7f2cinfoza7f35727z00, BGl__failzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2boxzd2setz12zf2Cinfozd2envz32zzcfa_infoz00,
		BgL_bgl__wideningza7d2boxza75728z00,
		BGl__wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cvarzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2cvarza7f2c5729z00,
		BGl__makezd2cvarzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conditionalzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__conditionalza7f2c5730za7,
		BGl__conditionalzf2Cinfozf3z01zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funcallzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__funcallza7f2cinfo5731za7, BGl__funcallzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__sexitza7f2cinfoza7d5732z00,
		BGl__sexitzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2selectzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2sele5733za7,
		BGl__wideningzd2selectzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2externzd2sfunzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__wideningza7d2exte5734za7,
		BGl__wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2scnstzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2scnstza7f25735z00,
		BGl__makezd2scnstzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_appzd2lyzf2Cinfozf3zd2envz01zzcfa_infoz00,
		BgL_bgl__appza7d2lyza7f2cinf5736z00,
		BGl__appzd2lyzf2Cinfozf3zd3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2conditionalzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2c5737z00,
		BGl__z52allocatezd2conditionalzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2clozd2envzd2envz00zzcfa_infoz00,
		BgL_bgl__makeza7d2preza7d2cl5738z00,
		BGl__makezd2prezd2clozd2envzd2zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2kwotezf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2kwoteza7f25739z00,
		BGl__makezd2kwotezf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2jumpzd2exzd2itzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2j5740z00,
		BGl__z52allocatezd2jumpzd2exzd2itzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2internzd2sfunzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__makeza7d2internza7d5741z00,
		BGl__makezd2internzd2sfunzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2sexitzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2sexi5742za7,
		BGl__wideningzd2sexitzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2refzf2Ozd2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__boxza7d2refza7f2oza7d5743za7,
		BGl__boxzd2refzf2Ozd2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_approxzf3zd2envz21zzcfa_infoz00,
		BgL_bgl__approxza7f3za7f3za7za7c5744z00, BGl__approxzf3zf3zzcfa_infoz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2approxzd2envz00zzcfa_infoz00,
		BgL_bgl__makeza7d2approxza7d5745z00, BGl__makezd2approxzd2zzcfa_infoz00, 0L,
		BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2failzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2failza7f2c5746z00,
		BGl__makezd2failzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_kwotezf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__kwoteza7f2cinfoza7d5747z00,
		BGl__kwotezf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2reshapedzd2localzd2envz80zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2r5748z00,
		BGl__z52allocatezd2reshapedzd2localz52zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2scnstzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2scns5749za7,
		BGl__wideningzd2scnstzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2prezd2clozd2envzd2envz00zzcfa_infoz00,
		BgL_bgl__wideningza7d2preza75750z00,
		BGl__wideningzd2prezd2clozd2envzd2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2kwotezf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2kwot5751za7,
		BGl__wideningzd2kwotezf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2boxzd2setz12zf2Ozd2Cinfozd2envzb2zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2b5752z00,
		BGl__z52allocatezd2boxzd2setz12zf2Ozd2Cinfoz60zzcfa_infoz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2boxzd2envz00zzcfa_infoz00,
		BgL_bgl__makeza7d2preza7d2ma5753z00,
		BGl__makezd2prezd2makezd2boxzd2zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2internzd2sfunzf2Cinfoz12zd2envz32zzcfa_infoz00,
		BgL_bgl__fillza7d2internza7d5754z00,
		BGl__fillzd2internzd2sfunzf2Cinfoz12ze0zzcfa_infoz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__scnstza7f2cinfoza7d5755z00,
		BGl__scnstzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2kwotezf2nodez12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2kwoteza7f25756z00,
		BGl__fillzd2kwotezf2nodez12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2conditionalzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2conditio5757za7,
		BGl__makezd2conditionalzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_selectzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__selectza7f2cinfoza75758z00,
		BGl__selectzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2appzd2lyzf2Cinfozd2envz72zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2a5759z00,
		BGl__z52allocatezd2appzd2lyzf2Cinfoza0zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_internzd2sfunzf2Cinfozf3zd2envz01zzcfa_infoz00,
		BgL_bgl__internza7d2sfunza7f5760z00,
		BGl__internzd2sfunzf2Cinfozf3zd3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_boxzd2refzf2Cinfozf3zd2envz01zzcfa_infoz00,
		BgL_bgl__boxza7d2refza7f2cin5761z00,
		BGl__boxzd2refzf2Cinfozf3zd3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2makezd2boxzf2Ozd2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2makeza7d2b5762z00,
		BGl__fillzd2makezd2boxzf2Ozd2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2kwotezf2nodezd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2k5763z00,
		BGl__z52allocatezd2kwotezf2nodez72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2boxzd2setz12zf2Cinfozd2envz60zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2b5764z00,
		BGl__z52allocatezd2boxzd2setz12zf2Cinfozb2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2setzd2exzd2itzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2s5765z00,
		BGl__z52allocatezd2setzd2exzd2itzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2cfunzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2cfunza7f2c5766z00,
		BGl__fillzd2cfunzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reshapedzd2localzf3zd2envzf3zzcfa_infoz00,
		BgL_bgl__reshapedza7d2loca5767za7, BGl__reshapedzd2localzf3z21zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2setz12zf2Cinfozf3zd2envz13zzcfa_infoz00,
		BgL_bgl__boxza7d2setza712za7f25768za7,
		BGl__boxzd2setz12zf2Cinfozf3zc1zzcfa_infoz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__cvarza7f2cinfoza7d25769z00,
		BGl__cvarzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2setzd2exzd2itzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2setza7d2ex5770z00,
		BGl__fillzd2setzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2selectzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2selectza7f5771z00,
		BGl__fillzd2selectzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2exzd2itzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__setza7d2exza7d2itza7f5772za7,
		BGl__setzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvarzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__cvarza7f2cinfoza7f35773z00, BGl__cvarzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2kwotezf2nodezd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2kwot5774za7,
		BGl__wideningzd2kwotezf2nodez20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2svarzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2svarza7f2c5775z00,
		BGl__fillzd2svarzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2boxzf2Cinfozf3zd2envz01zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7f2ci5776z00,
		BGl__makezd2boxzf2Cinfozf3zd3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2makezd2boxzf2Ozd2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2make5777za7,
		BGl__wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2scnstzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2scnstza7f25778z00,
		BGl__fillzd2scnstzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2reshapedzd2localzd2envzd2zzcfa_infoz00,
		BgL_bgl__makeza7d2reshaped5779za7,
		BGl__makezd2reshapedzd2localz00zzcfa_infoz00, 0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2setzd2exzd2itzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2setza75780z00,
		BGl__wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setqzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__setqza7f2cinfoza7d25781z00,
		BGl__setqzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2selectzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2selectza7f5782z00,
		BGl__makezd2selectzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__svarza7f2cinfoza7d25783z00,
		BGl__svarzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reshapedzd2globalzd2nilzd2envzd2zzcfa_infoz00,
		BgL_bgl__reshapedza7d2glob5784za7,
		BGl__reshapedzd2globalzd2nilz00zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexitzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__sexitza7f2cinfoza7f5785z00, BGl__sexitzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reshapedzd2localzd2nilzd2envzd2zzcfa_infoz00,
		BgL_bgl__reshapedza7d2loca5786za7,
		BGl__reshapedzd2localzd2nilz00zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cfunzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2c5787z00,
		BGl__z52allocatezd2cfunzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_funcallzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__funcallza7f2cinfo5788za7,
		BGl__funcallzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2setqzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2s5789z00,
		BGl__z52allocatezd2setqzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2boxzd2setz12zf2Ozd2Cinfoz12zd2envzf2zzcfa_infoz00,
		BgL_bgl__fillza7d2boxza7d2se5790z00,
		BGl__fillzd2boxzd2setz12zf2Ozd2Cinfoz12z20zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2atomzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2a5791z00,
		BGl__z52allocatezd2atomzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2cfunzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2cfun5792za7,
		BGl__wideningzd2cfunzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2internzd2sfunzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__wideningza7d2inte5793za7,
		BGl__wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_selectzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__selectza7f2cinfoza75794z00, BGl__selectzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2jumpzd2exzd2itzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2jumpza7d2e5795z00,
		BGl__makezd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzd2setz12zf2Cinfozd2envz32zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7d2se5796z00,
		BGl__makezd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5579z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5797z00,
		BGl_objectzd2ze3structzd2boxzd2r4478z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5581z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75798z00,
		BGl_structzb2objectzd2ze3objec4480z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5583z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5799z00,
		BGl_objectzd2ze3structzd2boxzd2s4482z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5584z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75800z00,
		BGl_structzb2objectzd2ze3objec4484z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5585z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5801z00,
		BGl_objectzd2ze3structzd2boxzd2r4486z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5586z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75802z00,
		BGl_structzb2objectzd2ze3objec4488z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5587z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5803z00,
		BGl_objectzd2ze3structzd2boxzd2s4491z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5588z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75804z00,
		BGl_structzb2objectzd2ze3objec4493z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5600z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75805z00,
		BGl_structzb2objectzd2ze3objec4519z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5590z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75806z00,
		BGl_structzb2objectzd2ze3objec4497z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5589z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5807z00,
		BGl_objectzd2ze3structzd2makezd24495z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5601z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5808z00,
		BGl_objectzd2ze3structzd2failzf24521z11zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5591z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5809z00,
		BGl_objectzd2ze3structzd2makezd24500z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2boxzd2refzf2Ozd2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2boxza7d2re5810z00,
		BGl__fillzd2boxzd2refzf2Ozd2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5602z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75811z00,
		BGl_structzb2objectzd2ze3objec4523z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5592z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75812z00,
		BGl_structzb2objectzd2ze3objec4502z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5603z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5813z00,
		BGl_objectzd2ze3structzd2condi4526ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5593z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5814z00,
		BGl_objectzd2ze3structzd2prezd2m4504z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5604z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75815z00,
		BGl_structzb2objectzd2ze3objec4528z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5594z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75816z00,
		BGl_structzb2objectzd2ze3objec4507z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5605z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5817z00,
		BGl_objectzd2ze3structzd2setqzf24530z11zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5595z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5818z00,
		BGl_objectzd2ze3structzd2jumpzd24509z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5606z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75819z00,
		BGl_structzb2objectzd2ze3objec4532z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5596z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75820z00,
		BGl_structzb2objectzd2ze3objec4511z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5607z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5821z00,
		BGl_objectzd2ze3structzd2funca4534ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5597z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5822z00,
		BGl_objectzd2ze3structzd2setzd2e4513z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5608z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75823z00,
		BGl_structzb2objectzd2ze3objec4536z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5598z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75824z00,
		BGl_structzb2objectzd2ze3objec4515z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5610z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75825z00,
		BGl_structzb2objectzd2ze3objec4541z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5609z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5826z00,
		BGl_objectzd2ze3structzd2appzd2l4538z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5599z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5827z00,
		BGl_objectzd2ze3structzd2selec4517ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5611z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5828z00,
		BGl_objectzd2ze3structzd2kwote4543ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2appzd2lyzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__wideningza7d2appza75829z00,
		BGl__wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5612z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75830z00,
		BGl_structzb2objectzd2ze3objec4545z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5613z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5831z00,
		BGl_objectzd2ze3structzd2kwote4547ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5614z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75832z00,
		BGl_structzb2objectzd2ze3objec4549z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5615z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5833z00,
		BGl_objectzd2ze3structzd2atomzf24551z11zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5616z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75834z00,
		BGl_structzb2objectzd2ze3objec4553z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5617z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5835z00,
		BGl_objectzd2ze3structzd2resha4555ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5618z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75836z00,
		BGl_structzb2objectzd2ze3objec4557z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5620z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75837z00,
		BGl_structzb2objectzd2ze3objec4561z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5619z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5838z00,
		BGl_objectzd2ze3structzd2resha4559ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5621z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5839z00,
		BGl_objectzd2ze3structzd2sexit4564ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2refzf2Ozd2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__boxza7d2refza7f2oza7d5840za7,
		BGl__boxzd2refzf2Ozd2Cinfozf3z01zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5622z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75841z00,
		BGl_structzb2objectzd2ze3objec4566z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2setqzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2setq5842za7,
		BGl__wideningzd2setqzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzf2Ozd2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7f2oza75843za7,
		BGl__makezd2boxzf2Ozd2Cinfozf3z01zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5623z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5844z00,
		BGl_objectzd2ze3structzd2cvarzf24568z11zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzf2Ozd2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7f2oza75845za7,
		BGl__makezd2boxzf2Ozd2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5624z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75846z00,
		BGl_structzb2objectzd2ze3objec4570z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5625z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5847z00,
		BGl_objectzd2ze3structzd2svarzf24572z11zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5626z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75848z00,
		BGl_structzb2objectzd2ze3objec4574z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5627z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5849z00,
		BGl_objectzd2ze3structzd2prezd2c4576z31zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5628z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75850z00,
		BGl_structzb2objectzd2ze3objec4578z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5630z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75851z00,
		BGl_structzb2objectzd2ze3objec4583z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5629z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5852z00,
		BGl_objectzd2ze3structzd2scnst4580ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5631z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5853z00,
		BGl_objectzd2ze3structzd2inter4585ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5632z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75854z00,
		BGl_structzb2objectzd2ze3objec4587z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5633z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5855z00,
		BGl_objectzd2ze3structzd2exter4589ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5634z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75856z00,
		BGl_structzb2objectzd2ze3objec4592z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5635z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5857z00,
		BGl_objectzd2ze3structzd2cfunzf24594z11zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2atomzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2atom5858za7,
		BGl__wideningzd2atomzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5636z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75859z00,
		BGl_structzb2objectzd2ze3objec4597z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5637z00zzcfa_infoz00,
		BgL_bgl_objectza7d2za7e3stru5860z00,
		BGl_objectzd2ze3structzd2appro4599ze3zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5638z00zzcfa_infoz00,
		BgL_bgl_structza7b2objectza75861z00,
		BGl_structzb2objectzd2ze3objec4601z83zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2clozd2envz12zd2envz12zzcfa_infoz00,
		BgL_bgl__fillza7d2preza7d2cl5862z00,
		BGl__fillzd2prezd2clozd2envz12zc0zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__cfunza7f2cinfoza7d25863z00,
		BGl__cfunzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2svarzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2s5864z00,
		BGl__z52allocatezd2svarzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_failzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__failza7f2cinfoza7d25865z00,
		BGl__failzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2makezd2boxzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__wideningza7d2make5866za7,
		BGl__wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2reshapedzd2globalz12zd2envzc0zzcfa_infoz00,
		BgL_bgl__fillza7d2reshaped5867za7,
		BGl__fillzd2reshapedzd2globalz12z12zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_prezd2clozd2envzd2nilzd2envz00zzcfa_infoz00,
		BgL_bgl__preza7d2cloza7d2env5868z00,
		BGl__prezd2clozd2envzd2nilzd2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reshapedzd2globalzf3zd2envzf3zzcfa_infoz00,
		BgL_bgl__reshapedza7d2glob5869za7,
		BGl__reshapedzd2globalzf3z21zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2kwotezf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2kwoteza7f25870z00,
		BGl__fillzd2kwotezf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2refzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
		BgL_bgl__boxza7d2refza7f2cin5871z00,
		BGl__boxzd2refzf2Cinfozd2nilzf2zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string5578z00zzcfa_infoz00,
		BgL_bgl_string5578za700za7za7c5872za7, "", 0);
	      DEFINE_STRING(BGl_string5580z00zzcfa_infoz00,
		BgL_bgl_string5580za700za7za7c5873za7, "object->struct::struct", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzd2refzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7d2re5874z00,
		BGl__makezd2boxzd2refzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 6);
	      DEFINE_STRING(BGl_string5582z00zzcfa_infoz00,
		BgL_bgl_string5582za700za7za7c5875za7, "struct+object->object::object", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7f2ci5876z00,
		BGl__makezd2boxzf2Cinfozd2nilzf2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzd2setz12zf2Ozd2Cinfozd2envze0zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7d2se5877z00,
		BGl__makezd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2conditionalzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2cond5878za7,
		BGl__wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2boxzd2refzf2Ozd2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2boxza7d2re5879z00,
		BGl__makezd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 6);
	      DEFINE_STRING(BGl_string5640z00zzcfa_infoz00,
		BgL_bgl_string5640za700za7za7c5880za7,
		"_ box-ref/O-Cinfo box-set!/O-Cinfo box-ref/Cinfo box-set!/Cinfo make-box/O-Cinfo make-box/Cinfo pre-make-box jump-ex-it/Cinfo set-ex-it/Cinfo select/Cinfo fail/Cinfo conditional/Cinfo setq/Cinfo funcall/Cinfo app-ly/Cinfo kwote/Cinfo kwote/node atom/Cinfo reshaped-global reshaped-local sexit/Cinfo cvar/Cinfo svar/Cinfo pre-clo-env scnst/Cinfo intern-sfun/Cinfo extern-sfun/Cinfo cfun/Cinfo approx ",
		399);
	      DEFINE_STRING(BGl_string5639z00zzcfa_infoz00,
		BgL_bgl_string5639za700za7za7c5881za7, "cfa_info", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2svarzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2svar5882za7,
		BGl__wideningzd2svarzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_externzd2sfunzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
		BgL_bgl__externza7d2sfunza7f5883z00,
		BGl__externzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kwotezf2nodezf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__kwoteza7f2nodeza7f35884z00, BGl__kwotezf2nodezf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2approxzd2envz52zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2a5885z00,
		BGl__z52allocatezd2approxz80zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2funcallzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2funcallza75886z00,
		BGl__fillzd2funcallzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2setqzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2setqza7f2c5887z00,
		BGl__fillzd2setqzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_approxzd2nilzd2envz00zzcfa_infoz00,
		BgL_bgl__approxza7d2nilza7d25888z00, BGl__approxzd2nilzd2zzcfa_infoz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2makezd2boxzf2Ozd2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2m5889z00,
		BGl__z52allocatezd2makezd2boxzf2Ozd2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2externzd2sfunzf2Cinfozd2envz72zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2e5890z00,
		BGl__z52allocatezd2externzd2sfunzf2Cinfoza0zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2funcallzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2funcallza75891z00,
		BGl__makezd2funcallzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appzd2lyzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
		BgL_bgl__appza7d2lyza7f2cinf5892z00,
		BGl__appzd2lyzf2Cinfozd2nilzf2zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2setz12zf2Ozd2Cinfozf3zd2envzc1zzcfa_infoz00,
		BgL_bgl__boxza7d2setza712za7f25893za7,
		BGl__boxzd2setz12zf2Ozd2Cinfozf3z13zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfunzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__cfunza7f2cinfoza7f35894z00, BGl__cfunzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2kwotezf2nodezd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2kwoteza7f25895z00,
		BGl__makezd2kwotezf2nodez20zzcfa_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2atomzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2atomza7f2c5896z00,
		BGl__fillzd2atomzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2sexitzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2s5897z00,
		BGl__z52allocatezd2sexitzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2makezd2boxzd2envz52zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2p5898z00,
		BGl__z52allocatezd2prezd2makezd2boxz80zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2reshapedzd2globalzd2envzd2zzcfa_infoz00,
		BgL_bgl__makeza7d2reshaped5899za7,
		BGl__makezd2reshapedzd2globalz00zzcfa_infoz00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2failzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2failza7f2c5900z00,
		BGl__fillzd2failzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2cvarzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2c5901z00,
		BGl__z52allocatezd2cvarzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2jumpzd2exzd2itzf2Cinfoz12zd2envze0zzcfa_infoz00,
		BgL_bgl__fillza7d2jumpza7d2e5902z00,
		BGl__fillzd2jumpzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2scnstzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2s5903z00,
		BGl__z52allocatezd2scnstzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_svarzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__svarza7f2cinfoza7f35904z00, BGl__svarzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2prezd2clozd2envzd2envz52zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2p5905z00,
		BGl__z52allocatezd2prezd2clozd2envz80zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2kwotezf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2k5906z00,
		BGl__z52allocatezd2kwotezf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jumpzd2exzd2itzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__jumpza7d2exza7d2itza75907za7,
		BGl__jumpzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2makezd2boxzf2Cinfozd2envz72zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2m5908z00,
		BGl__z52allocatezd2makezd2boxzf2Cinfoza0zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_boxzd2setz12zf2Ozd2Cinfozd2nilzd2envze0zzcfa_infoz00,
		BgL_bgl__boxza7d2setza712za7f25909za7,
		BGl__boxzd2setz12zf2Ozd2Cinfozd2nilz32zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2externzd2sfunzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__makeza7d2externza7d5910z00,
		BGl__makezd2externzd2sfunzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2boxzd2refzf2Cinfozd2envz72zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2b5911z00,
		BGl__z52allocatezd2boxzd2refzf2Cinfoza0zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2cvarzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2cvar5912za7,
		BGl__wideningzd2cvarzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfunzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2cfunza7f2c5913z00,
		BGl__makezd2cfunzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2failzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2f5914z00,
		BGl__z52allocatezd2failzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2prezd2makezd2boxz12zd2envz12zzcfa_infoz00,
		BgL_bgl__fillza7d2preza7d2ma5915z00,
		BGl__fillzd2prezd2makezd2boxz12zc0zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2boxzd2refzf2Cinfoz12zd2envz32zzcfa_infoz00,
		BgL_bgl__fillza7d2boxza7d2re5916z00,
		BGl__fillzd2boxzd2refzf2Cinfoz12ze0zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2appzd2lyzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__makeza7d2appza7d2ly5917z00,
		BGl__makezd2appzd2lyzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2externzd2sfunzf2Cinfoz12zd2envz32zzcfa_infoz00,
		BgL_bgl__fillza7d2externza7d5918z00,
		BGl__fillzd2externzd2sfunzf2Cinfoz12ze0zzcfa_infoz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_scnstzf2Cinfozf3zd2envzd3zzcfa_infoz00,
		BgL_bgl__scnstza7f2cinfoza7f5919z00, BGl__scnstzf2Cinfozf3z01zzcfa_infoz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2setqzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2setqza7f2c5920z00,
		BGl__makezd2setqzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2atomzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__makeza7d2atomza7f2c5921z00,
		BGl__makezd2atomzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_atomzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__atomza7f2cinfoza7d25922z00,
		BGl__atomzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2failzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2fail5923za7,
		BGl__wideningzd2failzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2approxz12zd2envz12zzcfa_infoz00,
		BgL_bgl__fillza7d2approxza715924z00, BGl__fillzd2approxz12zc0zzcfa_infoz00,
		0L, BUNSPEC, 6);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2boxzd2refzf2Cinfozd2envz20zzcfa_infoz00,
		BgL_bgl__wideningza7d2boxza75925z00,
		BGl__wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_externzd2sfunzf2Cinfozf3zd2envz01zzcfa_infoz00,
		BgL_bgl__externza7d2sfunza7f5926z00,
		BGl__externzd2sfunzf2Cinfozf3zd3zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2funcallzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2f5927z00,
		BGl__z52allocatezd2funcallzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2jumpzd2exzd2itzf2Cinfozd2envzf2zzcfa_infoz00,
		BgL_bgl__wideningza7d2jump5928za7,
		BGl__wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2selectzf2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2s5929z00,
		BGl__z52allocatezd2selectzf2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2boxzd2refzf2Ozd2Cinfozd2envza0zzcfa_infoz00,
		BgL_bgl__za752allocateza7d2b5930z00,
		BGl__z52allocatezd2boxzd2refzf2Ozd2Cinfoz72zzcfa_infoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2reshapedzd2localz12zd2envzc0zzcfa_infoz00,
		BgL_bgl__fillza7d2reshaped5931za7,
		BGl__fillzd2reshapedzd2localz12z12zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2boxzd2setz12zf2Cinfoz12zd2envz20zzcfa_infoz00,
		BgL_bgl__fillza7d2boxza7d2se5932z00,
		BGl__fillzd2boxzd2setz12zf2Cinfoz12zf2zzcfa_infoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2exzd2itzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
		BgL_bgl__setza7d2exza7d2itza7f5933za7,
		BGl__setzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long
		BgL_checksumz00_6461, char *BgL_fromz00_6462)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_infoz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_infoz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_infoz00();
					BGl_cnstzd2initzd2zzcfa_infoz00();
					BGl_importedzd2moduleszd2initz00zzcfa_infoz00();
					BGl_objectzd2initzd2zzcfa_infoz00();
					BGl_methodzd2initzd2zzcfa_infoz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_info");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_info");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			{	/* Cfa/cinfo.scm 15 */
				obj_t BgL_cportz00_6116;

				BgL_cportz00_6116 =
					bgl_open_input_string(BGl_string5640z00zzcfa_infoz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_6117;

					BgL_iz00_6117 = ((long) 29);
				BgL_loopz00_6118:
					if ((BgL_iz00_6117 == ((long) -1)))
						{	/* Cfa/cinfo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cinfo.scm 15 */
							{	/* Cfa/cinfo.scm 15 */
								obj_t BgL_arg5642z00_6120;

								{	/* Cfa/cinfo.scm 15 */

									{	/* Cfa/cinfo.scm 15 */
										obj_t BgL_locationz00_6122;

										BgL_locationz00_6122 = BBOOL(((bool_t) 0));
										{	/* Cfa/cinfo.scm 15 */

											BgL_arg5642z00_6120 =
												BGl_readz00zz__readerz00(BgL_cportz00_6116,
												BgL_locationz00_6122);
										}
									}
								}
								{	/* Cfa/cinfo.scm 15 */
									int BgL_auxz00_6479;

									BgL_auxz00_6479 = (int) (BgL_iz00_6117);
									CNST_TABLE_SET(BgL_auxz00_6479, BgL_arg5642z00_6120);
							}}
							{	/* Cfa/cinfo.scm 15 */
								int BgL_auxz00_6123;

								BgL_auxz00_6123 = (int) ((BgL_iz00_6117 - ((long) 1)));
								{
									long BgL_iz00_6484;

									BgL_iz00_6484 = (long) (BgL_auxz00_6123);
									BgL_iz00_6117 = BgL_iz00_6484;
									goto BgL_loopz00_6118;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			{	/* Cfa/cinfo.scm 23 */
				obj_t BgL_arg4602z00_1234;

				obj_t BgL_arg4603z00_1235;

				obj_t BgL_arg4606z00_1238;

				BgL_arg4602z00_1234 = CNST_TABLE_REF(((long) 0));
				BgL_arg4603z00_1235 = BGl_objectz00zz__objectz00;
				{	/* Cfa/cinfo.scm 23 */
					obj_t BgL_v4448z00_1239;

					BgL_v4448z00_1239 = create_vector((int) (((long) 0)));
					BgL_arg4606z00_1238 = BgL_v4448z00_1239;
				}
				BGl_approxz00zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4602z00_1234,
					BgL_arg4603z00_1235, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2approxzd2envz52zzcfa_infoz00,
					BGl_approxzd2nilzd2envz00zzcfa_infoz00,
					BGl_approxzf3zd2envz21zzcfa_infoz00, ((long) 296402150), BFALSE,
					BFALSE, BgL_arg4606z00_1238);
			}
			{	/* Cfa/cinfo.scm 40 */
				obj_t BgL_arg4607z00_1240;

				obj_t BgL_arg4608z00_1241;

				obj_t BgL_arg4611z00_1244;

				BgL_arg4607z00_1240 = CNST_TABLE_REF(((long) 1));
				BgL_arg4608z00_1241 = BGl_cfunz00zzast_varz00;
				{	/* Cfa/cinfo.scm 40 */
					obj_t BgL_v4449z00_1245;

					BgL_v4449z00_1245 = create_vector((int) (((long) 0)));
					BgL_arg4611z00_1244 = BgL_v4449z00_1245;
				}
				BGl_cfunzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4607z00_1240,
					BgL_arg4608z00_1241, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cfunzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_cfunzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_cfunzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 316154050), BFALSE,
					BFALSE, BgL_arg4611z00_1244);
			}
			{	/* Cfa/cinfo.scm 42 */
				obj_t BgL_arg4612z00_1246;

				obj_t BgL_arg4613z00_1247;

				obj_t BgL_arg4616z00_1250;

				BgL_arg4612z00_1246 = CNST_TABLE_REF(((long) 2));
				BgL_arg4613z00_1247 = BGl_sfunz00zzast_varz00;
				{	/* Cfa/cinfo.scm 42 */
					obj_t BgL_v4450z00_1251;

					BgL_v4450z00_1251 = create_vector((int) (((long) 0)));
					BgL_arg4616z00_1250 = BgL_v4450z00_1251;
				}
				BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4612z00_1246,
					BgL_arg4613z00_1247, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2externzd2sfunzf2Cinfozd2envz72zzcfa_infoz00,
					BGl_externzd2sfunzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
					BGl_externzd2sfunzf2Cinfozf3zd2envz01zzcfa_infoz00,
					((long) 380900751), BFALSE, BFALSE, BgL_arg4616z00_1250);
			}
			{	/* Cfa/cinfo.scm 44 */
				obj_t BgL_arg4617z00_1252;

				obj_t BgL_arg4618z00_1253;

				obj_t BgL_arg4621z00_1256;

				BgL_arg4617z00_1252 = CNST_TABLE_REF(((long) 3));
				BgL_arg4618z00_1253 = BGl_sfunz00zzast_varz00;
				{	/* Cfa/cinfo.scm 44 */
					obj_t BgL_v4451z00_1257;

					BgL_v4451z00_1257 = create_vector((int) (((long) 0)));
					BgL_arg4621z00_1256 = BgL_v4451z00_1257;
				}
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4617z00_1252,
					BgL_arg4618z00_1253, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2internzd2sfunzf2Cinfozd2envz72zzcfa_infoz00,
					BGl_internzd2sfunzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
					BGl_internzd2sfunzf2Cinfozf3zd2envz01zzcfa_infoz00,
					((long) 469149243), BFALSE, BFALSE, BgL_arg4621z00_1256);
			}
			{	/* Cfa/cinfo.scm 49 */
				obj_t BgL_arg4622z00_1258;

				obj_t BgL_arg4623z00_1259;

				obj_t BgL_arg4626z00_1262;

				BgL_arg4622z00_1258 = CNST_TABLE_REF(((long) 4));
				BgL_arg4623z00_1259 = BGl_scnstz00zzast_varz00;
				{	/* Cfa/cinfo.scm 49 */
					obj_t BgL_v4452z00_1263;

					BgL_v4452z00_1263 = create_vector((int) (((long) 0)));
					BgL_arg4626z00_1262 = BgL_v4452z00_1263;
				}
				BGl_scnstzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4622z00_1258,
					BgL_arg4623z00_1259, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2scnstzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_scnstzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_scnstzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 55471587), BFALSE,
					BFALSE, BgL_arg4626z00_1262);
			}
			{	/* Cfa/cinfo.scm 53 */
				obj_t BgL_arg4627z00_1264;

				obj_t BgL_arg4628z00_1265;

				obj_t BgL_arg4631z00_1268;

				BgL_arg4627z00_1264 = CNST_TABLE_REF(((long) 5));
				BgL_arg4628z00_1265 = BGl_svarz00zzast_varz00;
				{	/* Cfa/cinfo.scm 53 */
					obj_t BgL_v4453z00_1269;

					BgL_v4453z00_1269 = create_vector((int) (((long) 0)));
					BgL_arg4631z00_1268 = BgL_v4453z00_1269;
				}
				BGl_prezd2clozd2envz00zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4627z00_1264,
					BgL_arg4628z00_1265, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2clozd2envzd2envz52zzcfa_infoz00,
					BGl_prezd2clozd2envzd2nilzd2envz00zzcfa_infoz00,
					BGl_prezd2clozd2envzf3zd2envz21zzcfa_infoz00, ((long) 148095385),
					BFALSE, BFALSE, BgL_arg4631z00_1268);
			}
			{	/* Cfa/cinfo.scm 54 */
				obj_t BgL_arg4632z00_1270;

				obj_t BgL_arg4633z00_1271;

				obj_t BgL_arg4636z00_1274;

				BgL_arg4632z00_1270 = CNST_TABLE_REF(((long) 6));
				BgL_arg4633z00_1271 = BGl_svarz00zzast_varz00;
				{	/* Cfa/cinfo.scm 54 */
					obj_t BgL_v4454z00_1275;

					BgL_v4454z00_1275 = create_vector((int) (((long) 0)));
					BgL_arg4636z00_1274 = BgL_v4454z00_1275;
				}
				BGl_svarzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4632z00_1270,
					BgL_arg4633z00_1271, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2svarzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_svarzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_svarzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 45563302), BFALSE,
					BFALSE, BgL_arg4636z00_1274);
			}
			{	/* Cfa/cinfo.scm 60 */
				obj_t BgL_arg4637z00_1276;

				obj_t BgL_arg4638z00_1277;

				obj_t BgL_arg4641z00_1280;

				BgL_arg4637z00_1276 = CNST_TABLE_REF(((long) 7));
				BgL_arg4638z00_1277 = BGl_cvarz00zzast_varz00;
				{	/* Cfa/cinfo.scm 60 */
					obj_t BgL_v4455z00_1281;

					BgL_v4455z00_1281 = create_vector((int) (((long) 0)));
					BgL_arg4641z00_1280 = BgL_v4455z00_1281;
				}
				BGl_cvarzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4637z00_1276,
					BgL_arg4638z00_1277, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cvarzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_cvarzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_cvarzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 374530914), BFALSE,
					BFALSE, BgL_arg4641z00_1280);
			}
			{	/* Cfa/cinfo.scm 64 */
				obj_t BgL_arg4642z00_1282;

				obj_t BgL_arg4643z00_1283;

				obj_t BgL_arg4646z00_1286;

				BgL_arg4642z00_1282 = CNST_TABLE_REF(((long) 8));
				BgL_arg4643z00_1283 = BGl_sexitz00zzast_varz00;
				{	/* Cfa/cinfo.scm 64 */
					obj_t BgL_v4456z00_1287;

					BgL_v4456z00_1287 = create_vector((int) (((long) 0)));
					BgL_arg4646z00_1286 = BgL_v4456z00_1287;
				}
				BGl_sexitzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4642z00_1282,
					BgL_arg4643z00_1283, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sexitzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_sexitzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_sexitzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 71543301), BFALSE,
					BFALSE, BgL_arg4646z00_1286);
			}
			{	/* Cfa/cinfo.scm 68 */
				obj_t BgL_arg4648z00_1288;

				obj_t BgL_arg4649z00_1289;

				obj_t BgL_arg4652z00_1292;

				BgL_arg4648z00_1288 = CNST_TABLE_REF(((long) 9));
				BgL_arg4649z00_1289 = BGl_localz00zzast_varz00;
				{	/* Cfa/cinfo.scm 68 */
					obj_t BgL_v4457z00_1293;

					BgL_v4457z00_1293 = create_vector((int) (((long) 0)));
					BgL_arg4652z00_1292 = BgL_v4457z00_1293;
				}
				BGl_reshapedzd2localzd2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4648z00_1288,
					BgL_arg4649z00_1289, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2reshapedzd2localzd2envz80zzcfa_infoz00,
					BGl_reshapedzd2localzd2nilzd2envzd2zzcfa_infoz00,
					BGl_reshapedzd2localzf3zd2envzf3zzcfa_infoz00, ((long) 118615075),
					BFALSE, BFALSE, BgL_arg4652z00_1292);
			}
			{	/* Cfa/cinfo.scm 70 */
				obj_t BgL_arg4653z00_1294;

				obj_t BgL_arg4654z00_1295;

				obj_t BgL_arg4657z00_1298;

				BgL_arg4653z00_1294 = CNST_TABLE_REF(((long) 10));
				BgL_arg4654z00_1295 = BGl_globalz00zzast_varz00;
				{	/* Cfa/cinfo.scm 70 */
					obj_t BgL_v4458z00_1299;

					BgL_v4458z00_1299 = create_vector((int) (((long) 0)));
					BgL_arg4657z00_1298 = BgL_v4458z00_1299;
				}
				BGl_reshapedzd2globalzd2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4653z00_1294,
					BgL_arg4654z00_1295, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2reshapedzd2globalzd2envz80zzcfa_infoz00,
					BGl_reshapedzd2globalzd2nilzd2envzd2zzcfa_infoz00,
					BGl_reshapedzd2globalzf3zd2envzf3zzcfa_infoz00, ((long) 496501243),
					BFALSE, BFALSE, BgL_arg4657z00_1298);
			}
			{	/* Cfa/cinfo.scm 73 */
				obj_t BgL_arg4658z00_1300;

				obj_t BgL_arg4659z00_1301;

				obj_t BgL_arg4662z00_1304;

				BgL_arg4658z00_1300 = CNST_TABLE_REF(((long) 11));
				BgL_arg4659z00_1301 = BGl_atomz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 73 */
					obj_t BgL_v4459z00_1305;

					BgL_v4459z00_1305 = create_vector((int) (((long) 0)));
					BgL_arg4662z00_1304 = BgL_v4459z00_1305;
				}
				BGl_atomzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4658z00_1300,
					BgL_arg4659z00_1301, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2atomzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_atomzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_atomzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 115246857), BFALSE,
					BFALSE, BgL_arg4662z00_1304);
			}
			{	/* Cfa/cinfo.scm 75 */
				obj_t BgL_arg4663z00_1306;

				obj_t BgL_arg4664z00_1307;

				obj_t BgL_arg4667z00_1310;

				BgL_arg4663z00_1306 = CNST_TABLE_REF(((long) 12));
				BgL_arg4664z00_1307 = BGl_kwotez00zzast_nodez00;
				{	/* Cfa/cinfo.scm 75 */
					obj_t BgL_v4460z00_1311;

					BgL_v4460z00_1311 = create_vector((int) (((long) 0)));
					BgL_arg4667z00_1310 = BgL_v4460z00_1311;
				}
				BGl_kwotezf2nodezf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4663z00_1306,
					BgL_arg4664z00_1307, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2kwotezf2nodezd2envza0zzcfa_infoz00,
					BGl_kwotezf2nodezd2nilzd2envzf2zzcfa_infoz00,
					BGl_kwotezf2nodezf3zd2envzd3zzcfa_infoz00, ((long) 322888729), BFALSE,
					BFALSE, BgL_arg4667z00_1310);
			}
			{	/* Cfa/cinfo.scm 77 */
				obj_t BgL_arg4668z00_1312;

				obj_t BgL_arg4669z00_1313;

				obj_t BgL_arg4672z00_1316;

				BgL_arg4668z00_1312 = CNST_TABLE_REF(((long) 13));
				BgL_arg4669z00_1313 = BGl_kwotez00zzast_nodez00;
				{	/* Cfa/cinfo.scm 77 */
					obj_t BgL_v4461z00_1317;

					BgL_v4461z00_1317 = create_vector((int) (((long) 0)));
					BgL_arg4672z00_1316 = BgL_v4461z00_1317;
				}
				BGl_kwotezf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4668z00_1312,
					BgL_arg4669z00_1313, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2kwotezf2Cinfozd2envza0zzcfa_infoz00,
					BGl_kwotezf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_kwotezf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 283434648),
					BFALSE, BFALSE, BgL_arg4672z00_1316);
			}
			{	/* Cfa/cinfo.scm 79 */
				obj_t BgL_arg4673z00_1318;

				obj_t BgL_arg4674z00_1319;

				obj_t BgL_arg4677z00_1322;

				BgL_arg4673z00_1318 = CNST_TABLE_REF(((long) 14));
				BgL_arg4674z00_1319 = BGl_appzd2lyzd2zzast_nodez00;
				{	/* Cfa/cinfo.scm 79 */
					obj_t BgL_v4462z00_1323;

					BgL_v4462z00_1323 = create_vector((int) (((long) 0)));
					BgL_arg4677z00_1322 = BgL_v4462z00_1323;
				}
				BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4673z00_1318,
					BgL_arg4674z00_1319, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2appzd2lyzf2Cinfozd2envz72zzcfa_infoz00,
					BGl_appzd2lyzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
					BGl_appzd2lyzf2Cinfozf3zd2envz01zzcfa_infoz00, ((long) 498155779),
					BFALSE, BFALSE, BgL_arg4677z00_1322);
			}
			{	/* Cfa/cinfo.scm 81 */
				obj_t BgL_arg4678z00_1324;

				obj_t BgL_arg4679z00_1325;

				obj_t BgL_arg4682z00_1328;

				BgL_arg4678z00_1324 = CNST_TABLE_REF(((long) 15));
				BgL_arg4679z00_1325 = BGl_funcallz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 81 */
					obj_t BgL_v4463z00_1329;

					BgL_v4463z00_1329 = create_vector((int) (((long) 0)));
					BgL_arg4682z00_1328 = BgL_v4463z00_1329;
				}
				BGl_funcallzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4678z00_1324,
					BgL_arg4679z00_1325, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2funcallzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_funcallzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_funcallzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 343427263),
					BFALSE, BFALSE, BgL_arg4682z00_1328);
			}
			{	/* Cfa/cinfo.scm 86 */
				obj_t BgL_arg4683z00_1330;

				obj_t BgL_arg4684z00_1331;

				obj_t BgL_arg4687z00_1334;

				BgL_arg4683z00_1330 = CNST_TABLE_REF(((long) 16));
				BgL_arg4684z00_1331 = BGl_setqz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 86 */
					obj_t BgL_v4464z00_1335;

					BgL_v4464z00_1335 = create_vector((int) (((long) 0)));
					BgL_arg4687z00_1334 = BgL_v4464z00_1335;
				}
				BGl_setqzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4683z00_1330,
					BgL_arg4684z00_1331, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2setqzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_setqzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_setqzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 228047517), BFALSE,
					BFALSE, BgL_arg4687z00_1334);
			}
			{	/* Cfa/cinfo.scm 88 */
				obj_t BgL_arg4688z00_1336;

				obj_t BgL_arg4689z00_1337;

				obj_t BgL_arg4692z00_1340;

				BgL_arg4688z00_1336 = CNST_TABLE_REF(((long) 17));
				BgL_arg4689z00_1337 = BGl_conditionalz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 88 */
					obj_t BgL_v4465z00_1341;

					BgL_v4465z00_1341 = create_vector((int) (((long) 0)));
					BgL_arg4692z00_1340 = BgL_v4465z00_1341;
				}
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4688z00_1336,
					BgL_arg4689z00_1337, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2conditionalzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_conditionalzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_conditionalzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 111607138),
					BFALSE, BFALSE, BgL_arg4692z00_1340);
			}
			{	/* Cfa/cinfo.scm 90 */
				obj_t BgL_arg4693z00_1342;

				obj_t BgL_arg4694z00_1343;

				obj_t BgL_arg4697z00_1346;

				BgL_arg4693z00_1342 = CNST_TABLE_REF(((long) 18));
				BgL_arg4694z00_1343 = BGl_failz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 90 */
					obj_t BgL_v4466z00_1347;

					BgL_v4466z00_1347 = create_vector((int) (((long) 0)));
					BgL_arg4697z00_1346 = BgL_v4466z00_1347;
				}
				BGl_failzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4693z00_1342,
					BgL_arg4694z00_1343, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2failzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_failzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_failzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 131507002), BFALSE,
					BFALSE, BgL_arg4697z00_1346);
			}
			{	/* Cfa/cinfo.scm 92 */
				obj_t BgL_arg4698z00_1348;

				obj_t BgL_arg4700z00_1349;

				obj_t BgL_arg4703z00_1352;

				BgL_arg4698z00_1348 = CNST_TABLE_REF(((long) 19));
				BgL_arg4700z00_1349 = BGl_selectz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 92 */
					obj_t BgL_v4467z00_1353;

					BgL_v4467z00_1353 = create_vector((int) (((long) 0)));
					BgL_arg4703z00_1352 = BgL_v4467z00_1353;
				}
				BGl_selectzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4698z00_1348,
					BgL_arg4700z00_1349, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2selectzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_selectzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_selectzf2Cinfozf3zd2envzd3zzcfa_infoz00, ((long) 342667750),
					BFALSE, BFALSE, BgL_arg4703z00_1352);
			}
			{	/* Cfa/cinfo.scm 94 */
				obj_t BgL_arg4704z00_1354;

				obj_t BgL_arg4705z00_1355;

				obj_t BgL_arg4708z00_1358;

				BgL_arg4704z00_1354 = CNST_TABLE_REF(((long) 20));
				BgL_arg4705z00_1355 = BGl_setzd2exzd2itz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 94 */
					obj_t BgL_v4468z00_1359;

					BgL_v4468z00_1359 = create_vector((int) (((long) 0)));
					BgL_arg4708z00_1358 = BgL_v4468z00_1359;
				}
				BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4704z00_1354,
					BgL_arg4705z00_1355, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2setzd2exzd2itzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_setzd2exzd2itzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_setzd2exzd2itzf2Cinfozf3zd2envzd3zzcfa_infoz00,
					((long) 195926222), BFALSE, BFALSE, BgL_arg4708z00_1358);
			}
			{	/* Cfa/cinfo.scm 96 */
				obj_t BgL_arg4710z00_1360;

				obj_t BgL_arg4711z00_1361;

				obj_t BgL_arg4714z00_1364;

				BgL_arg4710z00_1360 = CNST_TABLE_REF(((long) 21));
				BgL_arg4711z00_1361 = BGl_jumpzd2exzd2itz00zzast_nodez00;
				{	/* Cfa/cinfo.scm 96 */
					obj_t BgL_v4469z00_1365;

					BgL_v4469z00_1365 = create_vector((int) (((long) 0)));
					BgL_arg4714z00_1364 = BgL_v4469z00_1365;
				}
				BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4710z00_1360,
					BgL_arg4711z00_1361, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jumpzd2exzd2itzf2Cinfozd2envza0zzcfa_infoz00,
					BGl_jumpzd2exzd2itzf2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_jumpzd2exzd2itzf2Cinfozf3zd2envzd3zzcfa_infoz00,
					((long) 323646350), BFALSE, BFALSE, BgL_arg4714z00_1364);
			}
			{	/* Cfa/cinfo.scm 100 */
				obj_t BgL_arg4715z00_1366;

				obj_t BgL_arg4716z00_1367;

				obj_t BgL_arg4719z00_1370;

				BgL_arg4715z00_1366 = CNST_TABLE_REF(((long) 22));
				BgL_arg4716z00_1367 = BGl_makezd2boxzd2zzast_nodez00;
				{	/* Cfa/cinfo.scm 100 */
					obj_t BgL_v4470z00_1371;

					BgL_v4470z00_1371 = create_vector((int) (((long) 0)));
					BgL_arg4719z00_1370 = BgL_v4470z00_1371;
				}
				BGl_prezd2makezd2boxz00zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4715z00_1366,
					BgL_arg4716z00_1367, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2prezd2makezd2boxzd2envz52zzcfa_infoz00,
					BGl_prezd2makezd2boxzd2nilzd2envz00zzcfa_infoz00,
					BGl_prezd2makezd2boxzf3zd2envz21zzcfa_infoz00, ((long) 301189953),
					BFALSE, BFALSE, BgL_arg4719z00_1370);
			}
			{	/* Cfa/cinfo.scm 101 */
				obj_t BgL_arg4720z00_1372;

				obj_t BgL_arg4721z00_1373;

				obj_t BgL_arg4724z00_1376;

				BgL_arg4720z00_1372 = CNST_TABLE_REF(((long) 23));
				BgL_arg4721z00_1373 = BGl_makezd2boxzd2zzast_nodez00;
				{	/* Cfa/cinfo.scm 101 */
					obj_t BgL_v4471z00_1377;

					BgL_v4471z00_1377 = create_vector((int) (((long) 0)));
					BgL_arg4724z00_1376 = BgL_v4471z00_1377;
				}
				BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4720z00_1372,
					BgL_arg4721z00_1373, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2makezd2boxzf2Cinfozd2envz72zzcfa_infoz00,
					BGl_makezd2boxzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
					BGl_makezd2boxzf2Cinfozf3zd2envz01zzcfa_infoz00, ((long) 382004090),
					BFALSE, BFALSE, BgL_arg4724z00_1376);
			}
			{	/* Cfa/cinfo.scm 103 */
				obj_t BgL_arg4725z00_1378;

				obj_t BgL_arg4726z00_1379;

				obj_t BgL_arg4729z00_1382;

				BgL_arg4725z00_1378 = CNST_TABLE_REF(((long) 24));
				BgL_arg4726z00_1379 = BGl_makezd2boxzd2zzast_nodez00;
				{	/* Cfa/cinfo.scm 103 */
					obj_t BgL_v4472z00_1383;

					BgL_v4472z00_1383 = create_vector((int) (((long) 0)));
					BgL_arg4729z00_1382 = BgL_v4472z00_1383;
				}
				BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4725z00_1378,
					BgL_arg4726z00_1379, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2makezd2boxzf2Ozd2Cinfozd2envza0zzcfa_infoz00,
					BGl_makezd2boxzf2Ozd2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_makezd2boxzf2Ozd2Cinfozf3zd2envzd3zzcfa_infoz00,
					((long) 208360501), BFALSE, BFALSE, BgL_arg4729z00_1382);
			}
			{	/* Cfa/cinfo.scm 106 */
				obj_t BgL_arg4730z00_1384;

				obj_t BgL_arg4731z00_1385;

				obj_t BgL_arg4734z00_1388;

				BgL_arg4730z00_1384 = CNST_TABLE_REF(((long) 25));
				BgL_arg4731z00_1385 = BGl_boxzd2setz12zc0zzast_nodez00;
				{	/* Cfa/cinfo.scm 106 */
					obj_t BgL_v4473z00_1389;

					BgL_v4473z00_1389 = create_vector((int) (((long) 0)));
					BgL_arg4734z00_1388 = BgL_v4473z00_1389;
				}
				BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4730z00_1384,
					BgL_arg4731z00_1385, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2boxzd2setz12zf2Cinfozd2envz60zzcfa_infoz00,
					BGl_boxzd2setz12zf2Cinfozd2nilzd2envz32zzcfa_infoz00,
					BGl_boxzd2setz12zf2Cinfozf3zd2envz13zzcfa_infoz00, ((long) 261423219),
					BFALSE, BFALSE, BgL_arg4734z00_1388);
			}
			{	/* Cfa/cinfo.scm 108 */
				obj_t BgL_arg4735z00_1390;

				obj_t BgL_arg4736z00_1391;

				obj_t BgL_arg4740z00_1394;

				BgL_arg4735z00_1390 = CNST_TABLE_REF(((long) 26));
				BgL_arg4736z00_1391 = BGl_boxzd2refzd2zzast_nodez00;
				{	/* Cfa/cinfo.scm 108 */
					obj_t BgL_v4474z00_1395;

					BgL_v4474z00_1395 = create_vector((int) (((long) 0)));
					BgL_arg4740z00_1394 = BgL_v4474z00_1395;
				}
				BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4735z00_1390,
					BgL_arg4736z00_1391, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2boxzd2refzf2Cinfozd2envz72zzcfa_infoz00,
					BGl_boxzd2refzf2Cinfozd2nilzd2envz20zzcfa_infoz00,
					BGl_boxzd2refzf2Cinfozf3zd2envz01zzcfa_infoz00, ((long) 419692611),
					BFALSE, BFALSE, BgL_arg4740z00_1394);
			}
			{	/* Cfa/cinfo.scm 110 */
				obj_t BgL_arg4741z00_1396;

				obj_t BgL_arg4742z00_1397;

				obj_t BgL_arg4745z00_1400;

				BgL_arg4741z00_1396 = CNST_TABLE_REF(((long) 27));
				BgL_arg4742z00_1397 = BGl_boxzd2setz12zc0zzast_nodez00;
				{	/* Cfa/cinfo.scm 110 */
					obj_t BgL_v4475z00_1401;

					BgL_v4475z00_1401 = create_vector((int) (((long) 0)));
					BgL_arg4745z00_1400 = BgL_v4475z00_1401;
				}
				BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4741z00_1396,
					BgL_arg4742z00_1397, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2boxzd2setz12zf2Ozd2Cinfozd2envzb2zzcfa_infoz00,
					BGl_boxzd2setz12zf2Ozd2Cinfozd2nilzd2envze0zzcfa_infoz00,
					BGl_boxzd2setz12zf2Ozd2Cinfozf3zd2envzc1zzcfa_infoz00,
					((long) 153318599), BFALSE, BFALSE, BgL_arg4745z00_1400);
			}
			{	/* Cfa/cinfo.scm 112 */
				obj_t BgL_arg4746z00_1402;

				obj_t BgL_arg4747z00_1403;

				obj_t BgL_arg4750z00_1406;

				BgL_arg4746z00_1402 = CNST_TABLE_REF(((long) 28));
				BgL_arg4747z00_1403 = BGl_boxzd2refzd2zzast_nodez00;
				{	/* Cfa/cinfo.scm 112 */
					obj_t BgL_v4476z00_1407;

					BgL_v4476z00_1407 = create_vector((int) (((long) 0)));
					BgL_arg4750z00_1406 = BgL_v4476z00_1407;
				}
				BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4746z00_1402,
					BgL_arg4747z00_1403, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2boxzd2refzf2Ozd2Cinfozd2envza0zzcfa_infoz00,
					BGl_boxzd2refzf2Ozd2Cinfozd2nilzd2envzf2zzcfa_infoz00,
					BGl_boxzd2refzf2Ozd2Cinfozf3zd2envzd3zzcfa_infoz00,
					((long) 155337751), BFALSE, BFALSE, BgL_arg4750z00_1406);
			}
			BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 = BUNSPEC;
			BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00 = BUNSPEC;
			return (BGl_z52thezd2approxzd2nilz52zzcfa_infoz00 = BUNSPEC, BUNSPEC);
		}
	}



/* box-ref/O-Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_boxzd2refzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4432z00_1)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4432z00_1,
				BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00);
		}
	}



/* _box-ref/O-Cinfo? */
	obj_t BGl__boxzd2refzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5527,
		obj_t BgL_obj4432z00_5528)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4432z00_5528,
					BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-box-ref/O-Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4410z00_5)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{	/* Cfa/cinfo.scm 112 */
				BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4411z00_2840;

				BgL_new4411z00_2840 =
					((BgL_boxzd2refzf2ozd2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2refzf2ozd2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 112 */
					BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5312z00_2844;

					{	/* Cfa/cinfo.scm 112 */
						BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4422z00_2841;

						BgL_new4422z00_2841 = BgL_new4411z00_2840;
						{	/* Cfa/cinfo.scm 112 */
							BgL_approxz00_bglt BgL_approx4421z00_2843;

							BgL_approx4421z00_2843 = BgL_approx4410z00_5;
							((((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
										CREF(BgL_new4422z00_2841))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4421z00_2843), BUNSPEC);
							BgL_res5312z00_2844 = BgL_new4422z00_2841;
					}} BgL_res5312z00_2844;
				}
				return BgL_new4411z00_2840;
			}
		}
	}



/* _widening-box-ref/O-Cinfo */
	obj_t BGl__wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5529, obj_t BgL_approx4410z00_5530)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			return
				(obj_t) (BGl_wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4410z00_5530)));
		}
	}



/* make-box-ref/O-Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_makezd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t BgL_loc4414z00_6,
		BgL_typez00_bglt BgL_type4415z00_7, obj_t BgL_sidezd2effectzf34416z21_8,
		obj_t BgL_key4417z00_9, BgL_varz00_bglt BgL_var4418z00_10,
		BgL_approxz00_bglt BgL_approx4413z00_11)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{	/* Cfa/cinfo.scm 112 */
				BgL_boxzd2refzd2_bglt BgL_aux4419z00_2845;

				BgL_aux4419z00_2845 =
					BGl_makezd2boxzd2refz00zzast_nodez00(BgL_loc4414z00_6,
					BgL_type4415z00_7, BgL_sidezd2effectzf34416z21_8, BgL_key4417z00_9,
					BgL_var4418z00_10);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4419z00_2845),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 112 */
					BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_arg4752z00_2847;

					{	/* Cfa/cinfo.scm 112 */
						BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5314z00_2857;

						{	/* Cfa/cinfo.scm 112 */
							BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4411z00_2852;

							BgL_new4411z00_2852 =
								((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2refzf2ozd2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 112 */
								BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5313z00_2856;

								{	/* Cfa/cinfo.scm 112 */
									BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4422z00_2853;

									BgL_new4422z00_2853 = BgL_new4411z00_2852;
									{	/* Cfa/cinfo.scm 112 */
										BgL_approxz00_bglt BgL_approx4421z00_2855;

										BgL_approx4421z00_2855 = BgL_approx4413z00_11;
										((((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
													CREF(BgL_new4422z00_2853))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4421z00_2855), BUNSPEC);
										BgL_res5313z00_2856 = BgL_new4422z00_2853;
								}} BgL_res5313z00_2856;
							}
							BgL_res5314z00_2857 = BgL_new4411z00_2852;
						}
						BgL_arg4752z00_2847 = BgL_res5314z00_2857;
					}
					{	/* Cfa/cinfo.scm 112 */
						obj_t BgL_auxz00_6618;

						BgL_objectz00_bglt BgL_auxz00_6616;

						BgL_auxz00_6618 = (obj_t) (BgL_arg4752z00_2847);
						BgL_auxz00_6616 = (BgL_objectz00_bglt) (BgL_aux4419z00_2845);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_6616, BgL_auxz00_6618);
				}}
				return
					((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
					(BgL_boxzd2refzf2ozd2cinfozf2_bglt) (BgL_aux4419z00_2845));
			}
		}
	}



/* _make-box-ref/O-Cinfo */
	obj_t BGl__makezd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5531,
		obj_t BgL_loc4414z00_5532, obj_t BgL_type4415z00_5533,
		obj_t BgL_sidezd2effectzf34416z21_5534, obj_t BgL_key4417z00_5535,
		obj_t BgL_var4418z00_5536, obj_t BgL_approx4413z00_5537)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			return
				(obj_t) (BGl_makezd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00
				(BgL_loc4414z00_5532, (BgL_typez00_bglt) (BgL_type4415z00_5533),
					BgL_sidezd2effectzf34416z21_5534, BgL_key4417z00_5535,
					(BgL_varz00_bglt) (BgL_var4418z00_5536),
					(BgL_approxz00_bglt) (BgL_approx4413z00_5537)));
		}
	}



/* fill-box-ref/O-Cinfo! */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_fillzd2boxzd2refzf2Ozd2Cinfoz12z32zzcfa_infoz00
		(BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4422z00_12,
		BgL_approxz00_bglt BgL_approx4421z00_13)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{	/* Cfa/cinfo.scm 112 */
				BgL_approxz00_bglt BgL_approx4421z00_6125;

				BgL_approx4421z00_6125 = BgL_approx4421z00_13;
				((((BgL_boxzd2refzf2ozd2cinfozf2_bglt) CREF(BgL_new4422z00_12))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4421z00_6125), BUNSPEC);
				return BgL_new4422z00_12;
			}
		}
	}



/* _fill-box-ref/O-Cinfo! */
	obj_t BGl__fillzd2boxzd2refzf2Ozd2Cinfoz12z32zzcfa_infoz00(obj_t
		BgL_envz00_5538, obj_t BgL_new4422z00_5539, obj_t BgL_approx4421z00_5540)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{	/* Cfa/cinfo.scm 112 */
				BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_auxz00_6629;

				{	/* Cfa/cinfo.scm 112 */
					BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5643z00_6129;

					{	/* Cfa/cinfo.scm 112 */
						BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4422z00_6126;

						BgL_approxz00_bglt BgL_approx4421z00_6127;

						BgL_new4422z00_6126 =
							(BgL_boxzd2refzf2ozd2cinfozf2_bglt) (BgL_new4422z00_5539);
						BgL_approx4421z00_6127 =
							(BgL_approxz00_bglt) (BgL_approx4421z00_5540);
						{	/* Cfa/cinfo.scm 112 */
							BgL_approxz00_bglt BgL_approx4421z00_6128;

							BgL_approx4421z00_6128 = BgL_approx4421z00_6127;
							((((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
										CREF(BgL_new4422z00_6126))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4421z00_6128), BUNSPEC);
							BgL_res5643z00_6129 = BgL_new4422z00_6126;
						}
					}
					BgL_auxz00_6629 = BgL_res5643z00_6129;
				}
				return (obj_t) (BgL_auxz00_6629);
			}
		}
	}



/* %allocate-box-ref/O-Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2refzd2_bglt
		BGl_z52allocatezd2boxzd2refzf2Ozd2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{	/* Cfa/cinfo.scm 112 */
				BgL_boxzd2refzd2_bglt BgL_new4425z00_6130;

				BgL_new4425z00_6130 =
					((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2refzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4425z00_6130),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 112 */
					BgL_objectz00_bglt BgL_auxz00_6638;

					BgL_auxz00_6638 = (BgL_objectz00_bglt) (BgL_new4425z00_6130);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6638, BFALSE);
				}
				return BgL_new4425z00_6130;
			}
		}
	}



/* _%allocate-box-ref/O-Cinfo */
	obj_t BGl__z52allocatezd2boxzd2refzf2Ozd2Cinfoz72zzcfa_infoz00(obj_t
		BgL_envz00_5525)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{	/* Cfa/cinfo.scm 112 */
				BgL_boxzd2refzd2_bglt BgL_auxz00_6641;

				{	/* Cfa/cinfo.scm 112 */
					BgL_boxzd2refzd2_bglt BgL_res5644z00_6134;

					{	/* Cfa/cinfo.scm 112 */
						BgL_boxzd2refzd2_bglt BgL_new4425z00_6132;

						BgL_new4425z00_6132 =
							((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2refzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4425z00_6132),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 112 */
							BgL_objectz00_bglt BgL_auxz00_6646;

							BgL_auxz00_6646 = (BgL_objectz00_bglt) (BgL_new4425z00_6132);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6646, BFALSE);
						}
						BgL_res5644z00_6134 = BgL_new4425z00_6132;
					}
					BgL_auxz00_6641 = BgL_res5644z00_6134;
				}
				return (obj_t) (BgL_auxz00_6641);
			}
		}
	}



/* box-ref/O-Cinfo-nil */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2ozd2cinfozf2_bglt
		BGl_boxzd2refzf2Ozd2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			if ((BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 112 */
					{	/* Cfa/cinfo.scm 112 */
						BgL_boxzd2refzd2_bglt BgL_res5315z00_2867;

						{	/* Cfa/cinfo.scm 112 */
							BgL_boxzd2refzd2_bglt BgL_new3214z00_2863;

							BgL_new3214z00_2863 =
								((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2refzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3214z00_2863),
								BGl_classzd2numzd2zz__objectz00(BGl_boxzd2refzd2zzast_nodez00));
							{	/* Cfa/cinfo.scm 112 */
								BgL_objectz00_bglt BgL_auxz00_6656;

								BgL_auxz00_6656 = (BgL_objectz00_bglt) (BgL_new3214z00_2863);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6656, BFALSE);
							}
							BgL_res5315z00_2867 = BgL_new3214z00_2863;
						}
						BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5315z00_2867);
					}
					{	/* Cfa/cinfo.scm 112 */
						BgL_typez00_bglt BgL_arg4755z00_1417;

						BgL_varz00_bglt BgL_arg4756z00_1418;

						BgL_arg4755z00_1417 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4756z00_1418 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 112 */
							BgL_boxzd2refzd2_bglt BgL_res5316z00_2879;

							{	/* Cfa/cinfo.scm 112 */
								BgL_boxzd2refzd2_bglt BgL_new3207z00_2868;

								BgL_new3207z00_2868 =
									(BgL_boxzd2refzd2_bglt)
									(BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 112 */
									obj_t BgL_loc3202z00_2874;

									BgL_typez00_bglt BgL_type3203z00_2875;

									obj_t BgL_sidezd2effectzf33204z21_2876;

									obj_t BgL_key3205z00_2877;

									BgL_varz00_bglt BgL_var3206z00_2878;

									BgL_loc3202z00_2874 = BUNSPEC;
									BgL_type3203z00_2875 = BgL_arg4755z00_1417;
									BgL_sidezd2effectzf33204z21_2876 = BUNSPEC;
									BgL_key3205z00_2877 = BUNSPEC;
									BgL_var3206z00_2878 = BgL_arg4756z00_1418;
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2868))->
											BgL_locz00) = ((obj_t) BgL_loc3202z00_2874), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2868))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3203z00_2875), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2868))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33204z21_2876), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2868))->
											BgL_keyz00) = ((obj_t) BgL_key3205z00_2877), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2868))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3206z00_2878), BUNSPEC);
									BgL_res5316z00_2879 = BgL_new3207z00_2868;
							}} BgL_res5316z00_2879;
					}}
					{	/* Cfa/cinfo.scm 112 */
						long BgL_arg4757z00_1419;

						BgL_arg4757z00_1419 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4757z00_1419);
					}
					{	/* Cfa/cinfo.scm 112 */
						BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_arg4758z00_1420;

						{	/* Cfa/cinfo.scm 112 */
							BgL_approxz00_bglt BgL_arg4760z00_1421;

							BgL_arg4760z00_1421 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 112 */
								BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5318z00_2888;

								{	/* Cfa/cinfo.scm 112 */
									BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4411z00_2883;

									BgL_new4411z00_2883 =
										((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_boxzd2refzf2ozd2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 112 */
										BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5317z00_2887;

										{	/* Cfa/cinfo.scm 112 */
											BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4422z00_2884;

											BgL_new4422z00_2884 = BgL_new4411z00_2883;
											{	/* Cfa/cinfo.scm 112 */
												BgL_approxz00_bglt BgL_approx4421z00_2886;

												BgL_approx4421z00_2886 = BgL_arg4760z00_1421;
												((((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
															CREF(BgL_new4422z00_2884))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4421z00_2886),
													BUNSPEC);
												BgL_res5317z00_2887 = BgL_new4422z00_2884;
										}} BgL_res5317z00_2887;
									}
									BgL_res5318z00_2888 = BgL_new4411z00_2883;
								}
								BgL_arg4758z00_1420 = BgL_res5318z00_2888;
						}}
						{	/* Cfa/cinfo.scm 112 */
							obj_t BgL_auxz00_6676;

							BgL_objectz00_bglt BgL_auxz00_6674;

							BgL_auxz00_6676 = (obj_t) (BgL_arg4758z00_1420);
							BgL_auxz00_6674 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6674, BgL_auxz00_6676);
				}}}
			else
				{	/* Cfa/cinfo.scm 112 */
					BFALSE;
				}
			return
				(BgL_boxzd2refzf2ozd2cinfozf2_bglt)
				(BGl_z52thezd2boxzd2refzf2Ozd2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _box-ref/O-Cinfo-nil */
	obj_t BGl__boxzd2refzf2Ozd2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5526)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			return (obj_t) (BGl_boxzd2refzf2Ozd2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* box-set!/O-Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_boxzd2setz12zf2Ozd2Cinfozf3z13zzcfa_infoz00(obj_t
		BgL_obj4398z00_15)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4398z00_15,
				BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00);
		}
	}



/* _box-set!/O-Cinfo? */
	obj_t BGl__boxzd2setz12zf2Ozd2Cinfozf3z13zzcfa_infoz00(obj_t BgL_envz00_5523,
		obj_t BgL_obj4398z00_5524)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4398z00_5524,
					BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00));
		}
	}



/* widening-box-set!/O-Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4377z00_19)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{	/* Cfa/cinfo.scm 110 */
				BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4378z00_2889;

				BgL_new4378z00_2889 =
					((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2setz12zf2ozd2cinfoze0_bgl))));
				{	/* Cfa/cinfo.scm 110 */
					BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5319z00_2893;

					{	/* Cfa/cinfo.scm 110 */
						BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4388z00_2890;

						BgL_new4388z00_2890 = BgL_new4378z00_2889;
						{	/* Cfa/cinfo.scm 110 */
							BgL_approxz00_bglt BgL_approx4387z00_2892;

							BgL_approx4387z00_2892 = BgL_approx4377z00_19;
							((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
										CREF(BgL_new4388z00_2890))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4387z00_2892), BUNSPEC);
							BgL_res5319z00_2893 = BgL_new4388z00_2890;
					}} BgL_res5319z00_2893;
				}
				return BgL_new4378z00_2889;
			}
		}
	}



/* _widening-box-set!/O-Cinfo */
	obj_t BGl__wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(obj_t
		BgL_envz00_5541, obj_t BgL_approx4377z00_5542)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			return
				(obj_t) (BGl_wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4377z00_5542)));
		}
	}



/* make-box-set!/O-Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_makezd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(obj_t BgL_loc4381z00_20,
		BgL_typez00_bglt BgL_type4382z00_21, BgL_varz00_bglt BgL_var4383z00_22,
		BgL_nodez00_bglt BgL_value4384z00_23,
		BgL_approxz00_bglt BgL_approx4380z00_24)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{	/* Cfa/cinfo.scm 110 */
				BgL_boxzd2setz12zc0_bglt BgL_aux4385z00_2894;

				BgL_aux4385z00_2894 =
					BGl_makezd2boxzd2setz12z12zzast_nodez00(BgL_loc4381z00_20,
					BgL_type4382z00_21, BgL_var4383z00_22, BgL_value4384z00_23);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4385z00_2894),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 110 */
					BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_arg4762z00_2896;

					{	/* Cfa/cinfo.scm 110 */
						BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5321z00_2906;

						{	/* Cfa/cinfo.scm 110 */
							BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4378z00_2901;

							BgL_new4378z00_2901 =
								((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2setz12zf2ozd2cinfoze0_bgl))));
							{	/* Cfa/cinfo.scm 110 */
								BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5320z00_2905;

								{	/* Cfa/cinfo.scm 110 */
									BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4388z00_2902;

									BgL_new4388z00_2902 = BgL_new4378z00_2901;
									{	/* Cfa/cinfo.scm 110 */
										BgL_approxz00_bglt BgL_approx4387z00_2904;

										BgL_approx4387z00_2904 = BgL_approx4380z00_24;
										((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
													CREF(BgL_new4388z00_2902))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4387z00_2904), BUNSPEC);
										BgL_res5320z00_2905 = BgL_new4388z00_2902;
								}} BgL_res5320z00_2905;
							}
							BgL_res5321z00_2906 = BgL_new4378z00_2901;
						}
						BgL_arg4762z00_2896 = BgL_res5321z00_2906;
					}
					{	/* Cfa/cinfo.scm 110 */
						obj_t BgL_auxz00_6698;

						BgL_objectz00_bglt BgL_auxz00_6696;

						BgL_auxz00_6698 = (obj_t) (BgL_arg4762z00_2896);
						BgL_auxz00_6696 = (BgL_objectz00_bglt) (BgL_aux4385z00_2894);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_6696, BgL_auxz00_6698);
				}}
				return
					((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
					(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) (BgL_aux4385z00_2894));
			}
		}
	}



/* _make-box-set!/O-Cinfo */
	obj_t BGl__makezd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(obj_t
		BgL_envz00_5543, obj_t BgL_loc4381z00_5544, obj_t BgL_type4382z00_5545,
		obj_t BgL_var4383z00_5546, obj_t BgL_value4384z00_5547,
		obj_t BgL_approx4380z00_5548)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			return
				(obj_t) (BGl_makezd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00
				(BgL_loc4381z00_5544, (BgL_typez00_bglt) (BgL_type4382z00_5545),
					(BgL_varz00_bglt) (BgL_var4383z00_5546),
					(BgL_nodez00_bglt) (BgL_value4384z00_5547),
					(BgL_approxz00_bglt) (BgL_approx4380z00_5548)));
		}
	}



/* fill-box-set!/O-Cinfo! */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_fillzd2boxzd2setz12zf2Ozd2Cinfoz12z20zzcfa_infoz00
		(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4388z00_25,
		BgL_approxz00_bglt BgL_approx4387z00_26)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{	/* Cfa/cinfo.scm 110 */
				BgL_approxz00_bglt BgL_approx4387z00_6136;

				BgL_approx4387z00_6136 = BgL_approx4387z00_26;
				((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) CREF(BgL_new4388z00_25))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4387z00_6136), BUNSPEC);
				return BgL_new4388z00_25;
			}
		}
	}



/* _fill-box-set!/O-Cinfo! */
	obj_t BGl__fillzd2boxzd2setz12zf2Ozd2Cinfoz12z20zzcfa_infoz00(obj_t
		BgL_envz00_5549, obj_t BgL_new4388z00_5550, obj_t BgL_approx4387z00_5551)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{	/* Cfa/cinfo.scm 110 */
				BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_auxz00_6710;

				{	/* Cfa/cinfo.scm 110 */
					BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5645z00_6140;

					{	/* Cfa/cinfo.scm 110 */
						BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4388z00_6137;

						BgL_approxz00_bglt BgL_approx4387z00_6138;

						BgL_new4388z00_6137 =
							(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) (BgL_new4388z00_5550);
						BgL_approx4387z00_6138 =
							(BgL_approxz00_bglt) (BgL_approx4387z00_5551);
						{	/* Cfa/cinfo.scm 110 */
							BgL_approxz00_bglt BgL_approx4387z00_6139;

							BgL_approx4387z00_6139 = BgL_approx4387z00_6138;
							((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
										CREF(BgL_new4388z00_6137))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4387z00_6139), BUNSPEC);
							BgL_res5645z00_6140 = BgL_new4388z00_6137;
						}
					}
					BgL_auxz00_6710 = BgL_res5645z00_6140;
				}
				return (obj_t) (BgL_auxz00_6710);
			}
		}
	}



/* %allocate-box-set!/O-Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zc0_bglt
		BGl_z52allocatezd2boxzd2setz12zf2Ozd2Cinfoz60zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{	/* Cfa/cinfo.scm 110 */
				BgL_boxzd2setz12zc0_bglt BgL_new4391z00_6141;

				BgL_new4391z00_6141 =
					((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2setz12zc0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4391z00_6141),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 110 */
					BgL_objectz00_bglt BgL_auxz00_6719;

					BgL_auxz00_6719 = (BgL_objectz00_bglt) (BgL_new4391z00_6141);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6719, BFALSE);
				}
				return BgL_new4391z00_6141;
			}
		}
	}



/* _%allocate-box-set!/O-Cinfo */
	obj_t BGl__z52allocatezd2boxzd2setz12zf2Ozd2Cinfoz60zzcfa_infoz00(obj_t
		BgL_envz00_5521)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{	/* Cfa/cinfo.scm 110 */
				BgL_boxzd2setz12zc0_bglt BgL_auxz00_6722;

				{	/* Cfa/cinfo.scm 110 */
					BgL_boxzd2setz12zc0_bglt BgL_res5646z00_6145;

					{	/* Cfa/cinfo.scm 110 */
						BgL_boxzd2setz12zc0_bglt BgL_new4391z00_6143;

						BgL_new4391z00_6143 =
							((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2setz12zc0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4391z00_6143),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_6727;

							BgL_auxz00_6727 = (BgL_objectz00_bglt) (BgL_new4391z00_6143);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6727, BFALSE);
						}
						BgL_res5646z00_6145 = BgL_new4391z00_6143;
					}
					BgL_auxz00_6722 = BgL_res5646z00_6145;
				}
				return (obj_t) (BgL_auxz00_6722);
			}
		}
	}



/* box-set!/O-Cinfo-nil */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
		BGl_boxzd2setz12zf2Ozd2Cinfozd2nilz32zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			if (
				(BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00 ==
					BUNSPEC))
				{	/* Cfa/cinfo.scm 110 */
					{	/* Cfa/cinfo.scm 110 */
						BgL_boxzd2setz12zc0_bglt BgL_res5322z00_2916;

						{	/* Cfa/cinfo.scm 110 */
							BgL_boxzd2setz12zc0_bglt BgL_new3240z00_2912;

							BgL_new3240z00_2912 =
								((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2setz12zc0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3240z00_2912),
								BGl_classzd2numzd2zz__objectz00
								(BGl_boxzd2setz12zc0zzast_nodez00));
							{	/* Cfa/cinfo.scm 110 */
								BgL_objectz00_bglt BgL_auxz00_6737;

								BgL_auxz00_6737 = (BgL_objectz00_bglt) (BgL_new3240z00_2912);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6737, BFALSE);
							}
							BgL_res5322z00_2916 = BgL_new3240z00_2912;
						}
						BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00 =
							(obj_t) (BgL_res5322z00_2916);
					}
					{	/* Cfa/cinfo.scm 110 */
						BgL_typez00_bglt BgL_arg4765z00_1431;

						BgL_varz00_bglt BgL_arg4766z00_1432;

						BgL_nodez00_bglt BgL_arg4767z00_1433;

						BgL_arg4765z00_1431 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4766z00_1432 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4767z00_1433 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 110 */
							BgL_boxzd2setz12zc0_bglt BgL_res5323z00_2926;

							{	/* Cfa/cinfo.scm 110 */
								BgL_boxzd2setz12zc0_bglt BgL_new3234z00_2917;

								BgL_new3234z00_2917 =
									(BgL_boxzd2setz12zc0_bglt)
									(BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 110 */
									obj_t BgL_loc3230z00_2922;

									BgL_typez00_bglt BgL_type3231z00_2923;

									BgL_varz00_bglt BgL_var3232z00_2924;

									BgL_nodez00_bglt BgL_value3233z00_2925;

									BgL_loc3230z00_2922 = BUNSPEC;
									BgL_type3231z00_2923 = BgL_arg4765z00_1431;
									BgL_var3232z00_2924 = BgL_arg4766z00_1432;
									BgL_value3233z00_2925 = BgL_arg4767z00_1433;
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_2917))->
											BgL_locz00) = ((obj_t) BgL_loc3230z00_2922), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_2917))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3231z00_2923), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_2917))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3232z00_2924), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_2917))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3233z00_2925), BUNSPEC);
									BgL_res5323z00_2926 = BgL_new3234z00_2917;
							}} BgL_res5323z00_2926;
					}}
					{	/* Cfa/cinfo.scm 110 */
						long BgL_arg4768z00_1434;

						BgL_arg4768z00_1434 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00),
							BgL_arg4768z00_1434);
					}
					{	/* Cfa/cinfo.scm 110 */
						BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_arg4769z00_1435;

						{	/* Cfa/cinfo.scm 110 */
							BgL_approxz00_bglt BgL_arg4770z00_1436;

							BgL_arg4770z00_1436 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 110 */
								BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5325z00_2935;

								{	/* Cfa/cinfo.scm 110 */
									BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4378z00_2930;

									BgL_new4378z00_2930 =
										((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_boxzd2setz12zf2ozd2cinfoze0_bgl))));
									{	/* Cfa/cinfo.scm 110 */
										BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5324z00_2934;

										{	/* Cfa/cinfo.scm 110 */
											BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4388z00_2931;

											BgL_new4388z00_2931 = BgL_new4378z00_2930;
											{	/* Cfa/cinfo.scm 110 */
												BgL_approxz00_bglt BgL_approx4387z00_2933;

												BgL_approx4387z00_2933 = BgL_arg4770z00_1436;
												((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
															CREF(BgL_new4388z00_2931))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4387z00_2933),
													BUNSPEC);
												BgL_res5324z00_2934 = BgL_new4388z00_2931;
										}} BgL_res5324z00_2934;
									}
									BgL_res5325z00_2935 = BgL_new4378z00_2930;
								}
								BgL_arg4769z00_1435 = BgL_res5325z00_2935;
						}}
						{	/* Cfa/cinfo.scm 110 */
							obj_t BgL_auxz00_6757;

							BgL_objectz00_bglt BgL_auxz00_6755;

							BgL_auxz00_6757 = (obj_t) (BgL_arg4769z00_1435);
							BgL_auxz00_6755 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6755, BgL_auxz00_6757);
				}}}
			else
				{	/* Cfa/cinfo.scm 110 */
					BFALSE;
				}
			return
				(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
				(BGl_z52thezd2boxzd2setz12zf2Ozd2Cinfozd2nilzb2zzcfa_infoz00);
		}
	}



/* _box-set!/O-Cinfo-nil */
	obj_t BGl__boxzd2setz12zf2Ozd2Cinfozd2nilz32zzcfa_infoz00(obj_t
		BgL_envz00_5522)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			return (obj_t) (BGl_boxzd2setz12zf2Ozd2Cinfozd2nilz32zzcfa_infoz00());
		}
	}



/* box-ref/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_boxzd2refzf2Cinfozf3zd3zzcfa_infoz00(obj_t
		BgL_obj4362z00_28)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4362z00_28,
				BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00);
		}
	}



/* _box-ref/Cinfo? */
	obj_t BGl__boxzd2refzf2Cinfozf3zd3zzcfa_infoz00(obj_t BgL_envz00_5519,
		obj_t BgL_obj4362z00_5520)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4362z00_5520,
					BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00));
		}
	}



/* widening-box-ref/Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2cinfoz20_bglt
		BGl_wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4340z00_32)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{	/* Cfa/cinfo.scm 108 */
				BgL_boxzd2refzf2cinfoz20_bglt BgL_new4341z00_2936;

				BgL_new4341z00_2936 =
					((BgL_boxzd2refzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2refzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo.scm 108 */
					BgL_boxzd2refzf2cinfoz20_bglt BgL_res5326z00_2940;

					{	/* Cfa/cinfo.scm 108 */
						BgL_boxzd2refzf2cinfoz20_bglt BgL_new4352z00_2937;

						BgL_new4352z00_2937 = BgL_new4341z00_2936;
						{	/* Cfa/cinfo.scm 108 */
							BgL_approxz00_bglt BgL_approx4351z00_2939;

							BgL_approx4351z00_2939 = BgL_approx4340z00_32;
							((((BgL_boxzd2refzf2cinfoz20_bglt) CREF(BgL_new4352z00_2937))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4351z00_2939), BUNSPEC);
							BgL_res5326z00_2940 = BgL_new4352z00_2937;
					}} BgL_res5326z00_2940;
				}
				return BgL_new4341z00_2936;
			}
		}
	}



/* _widening-box-ref/Cinfo */
	obj_t BGl__wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5552,
		obj_t BgL_approx4340z00_5553)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			return
				(obj_t) (BGl_wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4340z00_5553)));
		}
	}



/* make-box-ref/Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2cinfoz20_bglt
		BGl_makezd2boxzd2refzf2Cinfozf2zzcfa_infoz00(obj_t BgL_loc4344z00_33,
		BgL_typez00_bglt BgL_type4345z00_34, obj_t BgL_sidezd2effectzf34346z21_35,
		obj_t BgL_key4347z00_36, BgL_varz00_bglt BgL_var4348z00_37,
		BgL_approxz00_bglt BgL_approx4343z00_38)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{	/* Cfa/cinfo.scm 108 */
				BgL_boxzd2refzd2_bglt BgL_aux4349z00_2941;

				BgL_aux4349z00_2941 =
					BGl_makezd2boxzd2refz00zzast_nodez00(BgL_loc4344z00_33,
					BgL_type4345z00_34, BgL_sidezd2effectzf34346z21_35, BgL_key4347z00_36,
					BgL_var4348z00_37);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4349z00_2941),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 108 */
					BgL_boxzd2refzf2cinfoz20_bglt BgL_arg4772z00_2943;

					{	/* Cfa/cinfo.scm 108 */
						BgL_boxzd2refzf2cinfoz20_bglt BgL_res5328z00_2953;

						{	/* Cfa/cinfo.scm 108 */
							BgL_boxzd2refzf2cinfoz20_bglt BgL_new4341z00_2948;

							BgL_new4341z00_2948 =
								((BgL_boxzd2refzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2refzf2cinfoz20_bgl))));
							{	/* Cfa/cinfo.scm 108 */
								BgL_boxzd2refzf2cinfoz20_bglt BgL_res5327z00_2952;

								{	/* Cfa/cinfo.scm 108 */
									BgL_boxzd2refzf2cinfoz20_bglt BgL_new4352z00_2949;

									BgL_new4352z00_2949 = BgL_new4341z00_2948;
									{	/* Cfa/cinfo.scm 108 */
										BgL_approxz00_bglt BgL_approx4351z00_2951;

										BgL_approx4351z00_2951 = BgL_approx4343z00_38;
										((((BgL_boxzd2refzf2cinfoz20_bglt)
													CREF(BgL_new4352z00_2949))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4351z00_2951), BUNSPEC);
										BgL_res5327z00_2952 = BgL_new4352z00_2949;
								}} BgL_res5327z00_2952;
							}
							BgL_res5328z00_2953 = BgL_new4341z00_2948;
						}
						BgL_arg4772z00_2943 = BgL_res5328z00_2953;
					}
					{	/* Cfa/cinfo.scm 108 */
						obj_t BgL_auxz00_6779;

						BgL_objectz00_bglt BgL_auxz00_6777;

						BgL_auxz00_6779 = (obj_t) (BgL_arg4772z00_2943);
						BgL_auxz00_6777 = (BgL_objectz00_bglt) (BgL_aux4349z00_2941);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_6777, BgL_auxz00_6779);
				}}
				return
					((BgL_boxzd2refzf2cinfoz20_bglt)
					(BgL_boxzd2refzf2cinfoz20_bglt) (BgL_aux4349z00_2941));
			}
		}
	}



/* _make-box-ref/Cinfo */
	obj_t BGl__makezd2boxzd2refzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5554,
		obj_t BgL_loc4344z00_5555, obj_t BgL_type4345z00_5556,
		obj_t BgL_sidezd2effectzf34346z21_5557, obj_t BgL_key4347z00_5558,
		obj_t BgL_var4348z00_5559, obj_t BgL_approx4343z00_5560)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			return
				(obj_t) (BGl_makezd2boxzd2refzf2Cinfozf2zzcfa_infoz00
				(BgL_loc4344z00_5555, (BgL_typez00_bglt) (BgL_type4345z00_5556),
					BgL_sidezd2effectzf34346z21_5557, BgL_key4347z00_5558,
					(BgL_varz00_bglt) (BgL_var4348z00_5559),
					(BgL_approxz00_bglt) (BgL_approx4343z00_5560)));
		}
	}



/* fill-box-ref/Cinfo! */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2cinfoz20_bglt
		BGl_fillzd2boxzd2refzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_boxzd2refzf2cinfoz20_bglt BgL_new4352z00_39,
		BgL_approxz00_bglt BgL_approx4351z00_40)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{	/* Cfa/cinfo.scm 108 */
				BgL_approxz00_bglt BgL_approx4351z00_6147;

				BgL_approx4351z00_6147 = BgL_approx4351z00_40;
				((((BgL_boxzd2refzf2cinfoz20_bglt) CREF(BgL_new4352z00_39))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4351z00_6147), BUNSPEC);
				return BgL_new4352z00_39;
			}
		}
	}



/* _fill-box-ref/Cinfo! */
	obj_t BGl__fillzd2boxzd2refzf2Cinfoz12ze0zzcfa_infoz00(obj_t BgL_envz00_5561,
		obj_t BgL_new4352z00_5562, obj_t BgL_approx4351z00_5563)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{	/* Cfa/cinfo.scm 108 */
				BgL_boxzd2refzf2cinfoz20_bglt BgL_auxz00_6790;

				{	/* Cfa/cinfo.scm 108 */
					BgL_boxzd2refzf2cinfoz20_bglt BgL_res5647z00_6151;

					{	/* Cfa/cinfo.scm 108 */
						BgL_boxzd2refzf2cinfoz20_bglt BgL_new4352z00_6148;

						BgL_approxz00_bglt BgL_approx4351z00_6149;

						BgL_new4352z00_6148 =
							(BgL_boxzd2refzf2cinfoz20_bglt) (BgL_new4352z00_5562);
						BgL_approx4351z00_6149 =
							(BgL_approxz00_bglt) (BgL_approx4351z00_5563);
						{	/* Cfa/cinfo.scm 108 */
							BgL_approxz00_bglt BgL_approx4351z00_6150;

							BgL_approx4351z00_6150 = BgL_approx4351z00_6149;
							((((BgL_boxzd2refzf2cinfoz20_bglt) CREF(BgL_new4352z00_6148))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4351z00_6150), BUNSPEC);
							BgL_res5647z00_6151 = BgL_new4352z00_6148;
						}
					}
					BgL_auxz00_6790 = BgL_res5647z00_6151;
				}
				return (obj_t) (BgL_auxz00_6790);
			}
		}
	}



/* %allocate-box-ref/Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2refzd2_bglt
		BGl_z52allocatezd2boxzd2refzf2Cinfoza0zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{	/* Cfa/cinfo.scm 108 */
				BgL_boxzd2refzd2_bglt BgL_new4355z00_6152;

				BgL_new4355z00_6152 =
					((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2refzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4355z00_6152),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 108 */
					BgL_objectz00_bglt BgL_auxz00_6799;

					BgL_auxz00_6799 = (BgL_objectz00_bglt) (BgL_new4355z00_6152);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6799, BFALSE);
				}
				return BgL_new4355z00_6152;
			}
		}
	}



/* _%allocate-box-ref/Cinfo */
	obj_t BGl__z52allocatezd2boxzd2refzf2Cinfoza0zzcfa_infoz00(obj_t
		BgL_envz00_5517)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{	/* Cfa/cinfo.scm 108 */
				BgL_boxzd2refzd2_bglt BgL_auxz00_6802;

				{	/* Cfa/cinfo.scm 108 */
					BgL_boxzd2refzd2_bglt BgL_res5648z00_6156;

					{	/* Cfa/cinfo.scm 108 */
						BgL_boxzd2refzd2_bglt BgL_new4355z00_6154;

						BgL_new4355z00_6154 =
							((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2refzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4355z00_6154),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 108 */
							BgL_objectz00_bglt BgL_auxz00_6807;

							BgL_auxz00_6807 = (BgL_objectz00_bglt) (BgL_new4355z00_6154);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6807, BFALSE);
						}
						BgL_res5648z00_6156 = BgL_new4355z00_6154;
					}
					BgL_auxz00_6802 = BgL_res5648z00_6156;
				}
				return (obj_t) (BgL_auxz00_6802);
			}
		}
	}



/* box-ref/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_boxzd2refzf2cinfoz20_bglt
		BGl_boxzd2refzf2Cinfozd2nilzf2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			if ((BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 108 */
					{	/* Cfa/cinfo.scm 108 */
						BgL_boxzd2refzd2_bglt BgL_res5329z00_2963;

						{	/* Cfa/cinfo.scm 108 */
							BgL_boxzd2refzd2_bglt BgL_new3214z00_2959;

							BgL_new3214z00_2959 =
								((BgL_boxzd2refzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2refzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3214z00_2959),
								BGl_classzd2numzd2zz__objectz00(BGl_boxzd2refzd2zzast_nodez00));
							{	/* Cfa/cinfo.scm 108 */
								BgL_objectz00_bglt BgL_auxz00_6817;

								BgL_auxz00_6817 = (BgL_objectz00_bglt) (BgL_new3214z00_2959);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6817, BFALSE);
							}
							BgL_res5329z00_2963 = BgL_new3214z00_2959;
						}
						BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00 =
							(obj_t) (BgL_res5329z00_2963);
					}
					{	/* Cfa/cinfo.scm 108 */
						BgL_typez00_bglt BgL_arg4775z00_1446;

						BgL_varz00_bglt BgL_arg4776z00_1447;

						BgL_arg4775z00_1446 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4776z00_1447 = BGl_varzd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 108 */
							BgL_boxzd2refzd2_bglt BgL_res5330z00_2975;

							{	/* Cfa/cinfo.scm 108 */
								BgL_boxzd2refzd2_bglt BgL_new3207z00_2964;

								BgL_new3207z00_2964 =
									(BgL_boxzd2refzd2_bglt)
									(BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 108 */
									obj_t BgL_loc3202z00_2970;

									BgL_typez00_bglt BgL_type3203z00_2971;

									obj_t BgL_sidezd2effectzf33204z21_2972;

									obj_t BgL_key3205z00_2973;

									BgL_varz00_bglt BgL_var3206z00_2974;

									BgL_loc3202z00_2970 = BUNSPEC;
									BgL_type3203z00_2971 = BgL_arg4775z00_1446;
									BgL_sidezd2effectzf33204z21_2972 = BUNSPEC;
									BgL_key3205z00_2973 = BUNSPEC;
									BgL_var3206z00_2974 = BgL_arg4776z00_1447;
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2964))->
											BgL_locz00) = ((obj_t) BgL_loc3202z00_2970), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2964))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3203z00_2971), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2964))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33204z21_2972), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2964))->
											BgL_keyz00) = ((obj_t) BgL_key3205z00_2973), BUNSPEC);
									((((BgL_boxzd2refzd2_bglt) CREF(BgL_new3207z00_2964))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3206z00_2974), BUNSPEC);
									BgL_res5330z00_2975 = BgL_new3207z00_2964;
							}} BgL_res5330z00_2975;
					}}
					{	/* Cfa/cinfo.scm 108 */
						long BgL_arg4777z00_1448;

						BgL_arg4777z00_1448 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00),
							BgL_arg4777z00_1448);
					}
					{	/* Cfa/cinfo.scm 108 */
						BgL_boxzd2refzf2cinfoz20_bglt BgL_arg4778z00_1449;

						{	/* Cfa/cinfo.scm 108 */
							BgL_approxz00_bglt BgL_arg4780z00_1450;

							BgL_arg4780z00_1450 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 108 */
								BgL_boxzd2refzf2cinfoz20_bglt BgL_res5332z00_2984;

								{	/* Cfa/cinfo.scm 108 */
									BgL_boxzd2refzf2cinfoz20_bglt BgL_new4341z00_2979;

									BgL_new4341z00_2979 =
										((BgL_boxzd2refzf2cinfoz20_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_boxzd2refzf2cinfoz20_bgl))));
									{	/* Cfa/cinfo.scm 108 */
										BgL_boxzd2refzf2cinfoz20_bglt BgL_res5331z00_2983;

										{	/* Cfa/cinfo.scm 108 */
											BgL_boxzd2refzf2cinfoz20_bglt BgL_new4352z00_2980;

											BgL_new4352z00_2980 = BgL_new4341z00_2979;
											{	/* Cfa/cinfo.scm 108 */
												BgL_approxz00_bglt BgL_approx4351z00_2982;

												BgL_approx4351z00_2982 = BgL_arg4780z00_1450;
												((((BgL_boxzd2refzf2cinfoz20_bglt)
															CREF(BgL_new4352z00_2980))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4351z00_2982),
													BUNSPEC);
												BgL_res5331z00_2983 = BgL_new4352z00_2980;
										}} BgL_res5331z00_2983;
									}
									BgL_res5332z00_2984 = BgL_new4341z00_2979;
								}
								BgL_arg4778z00_1449 = BgL_res5332z00_2984;
						}}
						{	/* Cfa/cinfo.scm 108 */
							obj_t BgL_auxz00_6837;

							BgL_objectz00_bglt BgL_auxz00_6835;

							BgL_auxz00_6837 = (obj_t) (BgL_arg4778z00_1449);
							BgL_auxz00_6835 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6835, BgL_auxz00_6837);
				}}}
			else
				{	/* Cfa/cinfo.scm 108 */
					BFALSE;
				}
			return
				(BgL_boxzd2refzf2cinfoz20_bglt)
				(BGl_z52thezd2boxzd2refzf2Cinfozd2nilz72zzcfa_infoz00);
		}
	}



/* _box-ref/Cinfo-nil */
	obj_t BGl__boxzd2refzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t BgL_envz00_5518)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			return (obj_t) (BGl_boxzd2refzf2Cinfozd2nilzf2zzcfa_infoz00());
		}
	}



/* box-set!/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_boxzd2setz12zf2Cinfozf3zc1zzcfa_infoz00(obj_t
		BgL_obj4327z00_42)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4327z00_42,
				BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00);
		}
	}



/* _box-set!/Cinfo? */
	obj_t BGl__boxzd2setz12zf2Cinfozf3zc1zzcfa_infoz00(obj_t BgL_envz00_5515,
		obj_t BgL_obj4327z00_5516)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4327z00_5516,
					BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00));
		}
	}



/* widening-box-set!/Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4306z00_46)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{	/* Cfa/cinfo.scm 106 */
				BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4307z00_2985;

				BgL_new4307z00_2985 =
					((BgL_boxzd2setz12zf2cinfoz32_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2setz12zf2cinfoz32_bgl))));
				{	/* Cfa/cinfo.scm 106 */
					BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5333z00_2989;

					{	/* Cfa/cinfo.scm 106 */
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4317z00_2986;

						BgL_new4317z00_2986 = BgL_new4307z00_2985;
						{	/* Cfa/cinfo.scm 106 */
							BgL_approxz00_bglt BgL_approx4316z00_2988;

							BgL_approx4316z00_2988 = BgL_approx4306z00_46;
							((((BgL_boxzd2setz12zf2cinfoz32_bglt) CREF(BgL_new4317z00_2986))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4316z00_2988), BUNSPEC);
							BgL_res5333z00_2989 = BgL_new4317z00_2986;
					}} BgL_res5333z00_2989;
				}
				return BgL_new4307z00_2985;
			}
		}
	}



/* _widening-box-set!/Cinfo */
	obj_t BGl__wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(obj_t
		BgL_envz00_5564, obj_t BgL_approx4306z00_5565)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			return
				(obj_t) (BGl_wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4306z00_5565)));
		}
	}



/* make-box-set!/Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_makezd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(obj_t BgL_loc4310z00_47,
		BgL_typez00_bglt BgL_type4311z00_48, BgL_varz00_bglt BgL_var4312z00_49,
		BgL_nodez00_bglt BgL_value4313z00_50,
		BgL_approxz00_bglt BgL_approx4309z00_51)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{	/* Cfa/cinfo.scm 106 */
				BgL_boxzd2setz12zc0_bglt BgL_aux4314z00_2990;

				BgL_aux4314z00_2990 =
					BGl_makezd2boxzd2setz12z12zzast_nodez00(BgL_loc4310z00_47,
					BgL_type4311z00_48, BgL_var4312z00_49, BgL_value4313z00_50);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4314z00_2990),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 106 */
					BgL_boxzd2setz12zf2cinfoz32_bglt BgL_arg4783z00_2992;

					{	/* Cfa/cinfo.scm 106 */
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5335z00_3002;

						{	/* Cfa/cinfo.scm 106 */
							BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4307z00_2997;

							BgL_new4307z00_2997 =
								((BgL_boxzd2setz12zf2cinfoz32_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2setz12zf2cinfoz32_bgl))));
							{	/* Cfa/cinfo.scm 106 */
								BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5334z00_3001;

								{	/* Cfa/cinfo.scm 106 */
									BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4317z00_2998;

									BgL_new4317z00_2998 = BgL_new4307z00_2997;
									{	/* Cfa/cinfo.scm 106 */
										BgL_approxz00_bglt BgL_approx4316z00_3000;

										BgL_approx4316z00_3000 = BgL_approx4309z00_51;
										((((BgL_boxzd2setz12zf2cinfoz32_bglt)
													CREF(BgL_new4317z00_2998))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4316z00_3000), BUNSPEC);
										BgL_res5334z00_3001 = BgL_new4317z00_2998;
								}} BgL_res5334z00_3001;
							}
							BgL_res5335z00_3002 = BgL_new4307z00_2997;
						}
						BgL_arg4783z00_2992 = BgL_res5335z00_3002;
					}
					{	/* Cfa/cinfo.scm 106 */
						obj_t BgL_auxz00_6859;

						BgL_objectz00_bglt BgL_auxz00_6857;

						BgL_auxz00_6859 = (obj_t) (BgL_arg4783z00_2992);
						BgL_auxz00_6857 = (BgL_objectz00_bglt) (BgL_aux4314z00_2990);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_6857, BgL_auxz00_6859);
				}}
				return
					((BgL_boxzd2setz12zf2cinfoz32_bglt)
					(BgL_boxzd2setz12zf2cinfoz32_bglt) (BgL_aux4314z00_2990));
			}
		}
	}



/* _make-box-set!/Cinfo */
	obj_t BGl__makezd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(obj_t BgL_envz00_5566,
		obj_t BgL_loc4310z00_5567, obj_t BgL_type4311z00_5568,
		obj_t BgL_var4312z00_5569, obj_t BgL_value4313z00_5570,
		obj_t BgL_approx4309z00_5571)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			return
				(obj_t) (BGl_makezd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00
				(BgL_loc4310z00_5567, (BgL_typez00_bglt) (BgL_type4311z00_5568),
					(BgL_varz00_bglt) (BgL_var4312z00_5569),
					(BgL_nodez00_bglt) (BgL_value4313z00_5570),
					(BgL_approxz00_bglt) (BgL_approx4309z00_5571)));
		}
	}



/* fill-box-set!/Cinfo! */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_fillzd2boxzd2setz12zf2Cinfoz12zf2zzcfa_infoz00
		(BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4317z00_52,
		BgL_approxz00_bglt BgL_approx4316z00_53)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{	/* Cfa/cinfo.scm 106 */
				BgL_approxz00_bglt BgL_approx4316z00_6158;

				BgL_approx4316z00_6158 = BgL_approx4316z00_53;
				((((BgL_boxzd2setz12zf2cinfoz32_bglt) CREF(BgL_new4317z00_52))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4316z00_6158), BUNSPEC);
				return BgL_new4317z00_52;
			}
		}
	}



/* _fill-box-set!/Cinfo! */
	obj_t BGl__fillzd2boxzd2setz12zf2Cinfoz12zf2zzcfa_infoz00(obj_t
		BgL_envz00_5572, obj_t BgL_new4317z00_5573, obj_t BgL_approx4316z00_5574)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{	/* Cfa/cinfo.scm 106 */
				BgL_boxzd2setz12zf2cinfoz32_bglt BgL_auxz00_6871;

				{	/* Cfa/cinfo.scm 106 */
					BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5649z00_6162;

					{	/* Cfa/cinfo.scm 106 */
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4317z00_6159;

						BgL_approxz00_bglt BgL_approx4316z00_6160;

						BgL_new4317z00_6159 =
							(BgL_boxzd2setz12zf2cinfoz32_bglt) (BgL_new4317z00_5573);
						BgL_approx4316z00_6160 =
							(BgL_approxz00_bglt) (BgL_approx4316z00_5574);
						{	/* Cfa/cinfo.scm 106 */
							BgL_approxz00_bglt BgL_approx4316z00_6161;

							BgL_approx4316z00_6161 = BgL_approx4316z00_6160;
							((((BgL_boxzd2setz12zf2cinfoz32_bglt) CREF(BgL_new4317z00_6159))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4316z00_6161), BUNSPEC);
							BgL_res5649z00_6162 = BgL_new4317z00_6159;
						}
					}
					BgL_auxz00_6871 = BgL_res5649z00_6162;
				}
				return (obj_t) (BgL_auxz00_6871);
			}
		}
	}



/* %allocate-box-set!/Cinfo */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zc0_bglt
		BGl_z52allocatezd2boxzd2setz12zf2Cinfozb2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{	/* Cfa/cinfo.scm 106 */
				BgL_boxzd2setz12zc0_bglt BgL_new4320z00_6163;

				BgL_new4320z00_6163 =
					((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_boxzd2setz12zc0_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4320z00_6163),
					BGl_classzd2numzd2zz__objectz00
					(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 106 */
					BgL_objectz00_bglt BgL_auxz00_6880;

					BgL_auxz00_6880 = (BgL_objectz00_bglt) (BgL_new4320z00_6163);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6880, BFALSE);
				}
				return BgL_new4320z00_6163;
			}
		}
	}



/* _%allocate-box-set!/Cinfo */
	obj_t BGl__z52allocatezd2boxzd2setz12zf2Cinfozb2zzcfa_infoz00(obj_t
		BgL_envz00_5513)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{	/* Cfa/cinfo.scm 106 */
				BgL_boxzd2setz12zc0_bglt BgL_auxz00_6883;

				{	/* Cfa/cinfo.scm 106 */
					BgL_boxzd2setz12zc0_bglt BgL_res5650z00_6167;

					{	/* Cfa/cinfo.scm 106 */
						BgL_boxzd2setz12zc0_bglt BgL_new4320z00_6165;

						BgL_new4320z00_6165 =
							((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_boxzd2setz12zc0_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4320z00_6165),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 106 */
							BgL_objectz00_bglt BgL_auxz00_6888;

							BgL_auxz00_6888 = (BgL_objectz00_bglt) (BgL_new4320z00_6165);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6888, BFALSE);
						}
						BgL_res5650z00_6167 = BgL_new4320z00_6165;
					}
					BgL_auxz00_6883 = BgL_res5650z00_6167;
				}
				return (obj_t) (BgL_auxz00_6883);
			}
		}
	}



/* box-set!/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_boxzd2setz12zf2cinfoz32_bglt
		BGl_boxzd2setz12zf2Cinfozd2nilze0zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			if ((BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 106 */
					{	/* Cfa/cinfo.scm 106 */
						BgL_boxzd2setz12zc0_bglt BgL_res5336z00_3012;

						{	/* Cfa/cinfo.scm 106 */
							BgL_boxzd2setz12zc0_bglt BgL_new3240z00_3008;

							BgL_new3240z00_3008 =
								((BgL_boxzd2setz12zc0_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_boxzd2setz12zc0_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3240z00_3008),
								BGl_classzd2numzd2zz__objectz00
								(BGl_boxzd2setz12zc0zzast_nodez00));
							{	/* Cfa/cinfo.scm 106 */
								BgL_objectz00_bglt BgL_auxz00_6898;

								BgL_auxz00_6898 = (BgL_objectz00_bglt) (BgL_new3240z00_3008);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6898, BFALSE);
							}
							BgL_res5336z00_3012 = BgL_new3240z00_3008;
						}
						BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00 =
							(obj_t) (BgL_res5336z00_3012);
					}
					{	/* Cfa/cinfo.scm 106 */
						BgL_typez00_bglt BgL_arg4786z00_1460;

						BgL_varz00_bglt BgL_arg4787z00_1461;

						BgL_nodez00_bglt BgL_arg4788z00_1462;

						BgL_arg4786z00_1460 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4787z00_1461 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4788z00_1462 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 106 */
							BgL_boxzd2setz12zc0_bglt BgL_res5337z00_3022;

							{	/* Cfa/cinfo.scm 106 */
								BgL_boxzd2setz12zc0_bglt BgL_new3234z00_3013;

								BgL_new3234z00_3013 =
									(BgL_boxzd2setz12zc0_bglt)
									(BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 106 */
									obj_t BgL_loc3230z00_3018;

									BgL_typez00_bglt BgL_type3231z00_3019;

									BgL_varz00_bglt BgL_var3232z00_3020;

									BgL_nodez00_bglt BgL_value3233z00_3021;

									BgL_loc3230z00_3018 = BUNSPEC;
									BgL_type3231z00_3019 = BgL_arg4786z00_1460;
									BgL_var3232z00_3020 = BgL_arg4787z00_1461;
									BgL_value3233z00_3021 = BgL_arg4788z00_1462;
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_3013))->
											BgL_locz00) = ((obj_t) BgL_loc3230z00_3018), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_3013))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3231z00_3019), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_3013))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3232z00_3020), BUNSPEC);
									((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_new3234z00_3013))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3233z00_3021), BUNSPEC);
									BgL_res5337z00_3022 = BgL_new3234z00_3013;
							}} BgL_res5337z00_3022;
					}}
					{	/* Cfa/cinfo.scm 106 */
						long BgL_arg4789z00_1463;

						BgL_arg4789z00_1463 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00),
							BgL_arg4789z00_1463);
					}
					{	/* Cfa/cinfo.scm 106 */
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_arg4790z00_1464;

						{	/* Cfa/cinfo.scm 106 */
							BgL_approxz00_bglt BgL_arg4791z00_1465;

							BgL_arg4791z00_1465 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 106 */
								BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5339z00_3031;

								{	/* Cfa/cinfo.scm 106 */
									BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4307z00_3026;

									BgL_new4307z00_3026 =
										((BgL_boxzd2setz12zf2cinfoz32_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_boxzd2setz12zf2cinfoz32_bgl))));
									{	/* Cfa/cinfo.scm 106 */
										BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5338z00_3030;

										{	/* Cfa/cinfo.scm 106 */
											BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4317z00_3027;

											BgL_new4317z00_3027 = BgL_new4307z00_3026;
											{	/* Cfa/cinfo.scm 106 */
												BgL_approxz00_bglt BgL_approx4316z00_3029;

												BgL_approx4316z00_3029 = BgL_arg4791z00_1465;
												((((BgL_boxzd2setz12zf2cinfoz32_bglt)
															CREF(BgL_new4317z00_3027))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4316z00_3029),
													BUNSPEC);
												BgL_res5338z00_3030 = BgL_new4317z00_3027;
										}} BgL_res5338z00_3030;
									}
									BgL_res5339z00_3031 = BgL_new4307z00_3026;
								}
								BgL_arg4790z00_1464 = BgL_res5339z00_3031;
						}}
						{	/* Cfa/cinfo.scm 106 */
							obj_t BgL_auxz00_6918;

							BgL_objectz00_bglt BgL_auxz00_6916;

							BgL_auxz00_6918 = (obj_t) (BgL_arg4790z00_1464);
							BgL_auxz00_6916 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6916, BgL_auxz00_6918);
				}}}
			else
				{	/* Cfa/cinfo.scm 106 */
					BFALSE;
				}
			return
				(BgL_boxzd2setz12zf2cinfoz32_bglt)
				(BGl_z52thezd2boxzd2setz12zf2Cinfozd2nilz60zzcfa_infoz00);
		}
	}



/* _box-set!/Cinfo-nil */
	obj_t BGl__boxzd2setz12zf2Cinfozd2nilze0zzcfa_infoz00(obj_t BgL_envz00_5514)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			return (obj_t) (BGl_boxzd2setz12zf2Cinfozd2nilze0zzcfa_infoz00());
		}
	}



/* make-box/O-Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2boxzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4287z00_55)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4287z00_55,
				BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00);
		}
	}



/* _make-box/O-Cinfo? */
	obj_t BGl__makezd2boxzf2Ozd2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5511,
		obj_t BgL_obj4287z00_5512)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4287z00_5512,
					BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-make-box/O-Cinfo */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4261z00_59, BgL_approxz00_bglt BgL_valuezd2approx4262zd2_60)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{	/* Cfa/cinfo.scm 103 */
				BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4263z00_3032;

				BgL_new4263z00_3032 =
					((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzf2ozd2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 103 */
					BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5340z00_3038;

					{	/* Cfa/cinfo.scm 103 */
						BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4276z00_3033;

						BgL_new4276z00_3033 = BgL_new4263z00_3032;
						{	/* Cfa/cinfo.scm 103 */
							BgL_approxz00_bglt BgL_approx4274z00_3036;

							BgL_approxz00_bglt BgL_valuezd2approx4275zd2_3037;

							BgL_approx4274z00_3036 = BgL_approx4261z00_59;
							BgL_valuezd2approx4275zd2_3037 = BgL_valuezd2approx4262zd2_60;
							((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										CREF(BgL_new4276z00_3033))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4274z00_3036), BUNSPEC);
							((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										CREF(BgL_new4276z00_3033))->BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4275zd2_3037), BUNSPEC);
							BgL_res5340z00_3038 = BgL_new4276z00_3033;
					}} BgL_res5340z00_3038;
				}
				return BgL_new4263z00_3032;
			}
		}
	}



/* _widening-make-box/O-Cinfo */
	obj_t BGl__wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5575, obj_t BgL_approx4261z00_5576,
		obj_t BgL_valuezd2approx4262zd2_5577)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			return
				(obj_t) (BGl_wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4261z00_5576),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4262zd2_5577)));
		}
	}



/* make-make-box/O-Cinfo */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_makezd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t BgL_loc4267z00_61,
		BgL_typez00_bglt BgL_type4268z00_62, obj_t BgL_sidezd2effectzf34269z21_63,
		obj_t BgL_key4270z00_64, BgL_nodez00_bglt BgL_value4271z00_65,
		BgL_approxz00_bglt BgL_approx4265z00_66,
		BgL_approxz00_bglt BgL_valuezd2approx4266zd2_67)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{	/* Cfa/cinfo.scm 103 */
				BgL_makezd2boxzd2_bglt BgL_aux4272z00_3039;

				BgL_aux4272z00_3039 =
					BGl_makezd2makezd2boxz00zzast_nodez00(BgL_loc4267z00_61,
					BgL_type4268z00_62, BgL_sidezd2effectzf34269z21_63, BgL_key4270z00_64,
					BgL_value4271z00_65);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4272z00_3039),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 103 */
					BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_arg4793z00_3041;

					{	/* Cfa/cinfo.scm 103 */
						BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5342z00_3054;

						{	/* Cfa/cinfo.scm 103 */
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4263z00_3047;

							BgL_new4263z00_3047 =
								((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzf2ozd2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 103 */
								BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5341z00_3053;

								{	/* Cfa/cinfo.scm 103 */
									BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4276z00_3048;

									BgL_new4276z00_3048 = BgL_new4263z00_3047;
									{	/* Cfa/cinfo.scm 103 */
										BgL_approxz00_bglt BgL_approx4274z00_3051;

										BgL_approxz00_bglt BgL_valuezd2approx4275zd2_3052;

										BgL_approx4274z00_3051 = BgL_approx4265z00_66;
										BgL_valuezd2approx4275zd2_3052 =
											BgL_valuezd2approx4266zd2_67;
										((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
													CREF(BgL_new4276z00_3048))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4274z00_3051), BUNSPEC);
										((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
													CREF(BgL_new4276z00_3048))->BgL_valuezd2approxzd2) =
											((BgL_approxz00_bglt) BgL_valuezd2approx4275zd2_3052),
											BUNSPEC);
										BgL_res5341z00_3053 = BgL_new4276z00_3048;
								}} BgL_res5341z00_3053;
							}
							BgL_res5342z00_3054 = BgL_new4263z00_3047;
						}
						BgL_arg4793z00_3041 = BgL_res5342z00_3054;
					}
					{	/* Cfa/cinfo.scm 103 */
						obj_t BgL_auxz00_6943;

						BgL_objectz00_bglt BgL_auxz00_6941;

						BgL_auxz00_6943 = (obj_t) (BgL_arg4793z00_3041);
						BgL_auxz00_6941 = (BgL_objectz00_bglt) (BgL_aux4272z00_3039);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_6941, BgL_auxz00_6943);
				}}
				return
					((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
					(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_aux4272z00_3039));
			}
		}
	}



/* _make-make-box/O-Cinfo */
	obj_t BGl__makezd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5578, obj_t BgL_loc4267z00_5579, obj_t BgL_type4268z00_5580,
		obj_t BgL_sidezd2effectzf34269z21_5581, obj_t BgL_key4270z00_5582,
		obj_t BgL_value4271z00_5583, obj_t BgL_approx4265z00_5584,
		obj_t BgL_valuezd2approx4266zd2_5585)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			return
				(obj_t) (BGl_makezd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00
				(BgL_loc4267z00_5579, (BgL_typez00_bglt) (BgL_type4268z00_5580),
					BgL_sidezd2effectzf34269z21_5581, BgL_key4270z00_5582,
					(BgL_nodez00_bglt) (BgL_value4271z00_5583),
					(BgL_approxz00_bglt) (BgL_approx4265z00_5584),
					(BgL_approxz00_bglt) (BgL_valuezd2approx4266zd2_5585)));
		}
	}



/* fill-make-box/O-Cinfo! */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_fillzd2makezd2boxzf2Ozd2Cinfoz12z32zzcfa_infoz00
		(BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4276z00_68,
		BgL_approxz00_bglt BgL_approx4274z00_69,
		BgL_approxz00_bglt BgL_valuezd2approx4275zd2_70)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{	/* Cfa/cinfo.scm 103 */
				BgL_approxz00_bglt BgL_approx4274z00_6169;

				BgL_approxz00_bglt BgL_valuezd2approx4275zd2_6170;

				BgL_approx4274z00_6169 = BgL_approx4274z00_69;
				BgL_valuezd2approx4275zd2_6170 = BgL_valuezd2approx4275zd2_70;
				((((BgL_makezd2boxzf2ozd2cinfozf2_bglt) CREF(BgL_new4276z00_68))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4274z00_6169), BUNSPEC);
				((((BgL_makezd2boxzf2ozd2cinfozf2_bglt) CREF(BgL_new4276z00_68))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) BgL_valuezd2approx4275zd2_6170), BUNSPEC);
				return BgL_new4276z00_68;
			}
		}
	}



/* _fill-make-box/O-Cinfo! */
	obj_t BGl__fillzd2makezd2boxzf2Ozd2Cinfoz12z32zzcfa_infoz00(obj_t
		BgL_envz00_5586, obj_t BgL_new4276z00_5587, obj_t BgL_approx4274z00_5588,
		obj_t BgL_valuezd2approx4275zd2_5589)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{	/* Cfa/cinfo.scm 103 */
				BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_6956;

				{	/* Cfa/cinfo.scm 103 */
					BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5651z00_6176;

					{	/* Cfa/cinfo.scm 103 */
						BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4276z00_6171;

						BgL_approxz00_bglt BgL_approx4274z00_6172;

						BgL_approxz00_bglt BgL_valuezd2approx4275zd2_6173;

						BgL_new4276z00_6171 =
							(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_new4276z00_5587);
						BgL_approx4274z00_6172 =
							(BgL_approxz00_bglt) (BgL_approx4274z00_5588);
						BgL_valuezd2approx4275zd2_6173 =
							(BgL_approxz00_bglt) (BgL_valuezd2approx4275zd2_5589);
						{	/* Cfa/cinfo.scm 103 */
							BgL_approxz00_bglt BgL_approx4274z00_6174;

							BgL_approxz00_bglt BgL_valuezd2approx4275zd2_6175;

							BgL_approx4274z00_6174 = BgL_approx4274z00_6172;
							BgL_valuezd2approx4275zd2_6175 = BgL_valuezd2approx4275zd2_6173;
							((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										CREF(BgL_new4276z00_6171))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4274z00_6174), BUNSPEC);
							((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										CREF(BgL_new4276z00_6171))->BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt) BgL_valuezd2approx4275zd2_6175), BUNSPEC);
							BgL_res5651z00_6176 = BgL_new4276z00_6171;
						}
					}
					BgL_auxz00_6956 = BgL_res5651z00_6176;
				}
				return (obj_t) (BgL_auxz00_6956);
			}
		}
	}



/* %allocate-make-box/O-Cinfo */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2makezd2boxzf2Ozd2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{	/* Cfa/cinfo.scm 103 */
				BgL_makezd2boxzd2_bglt BgL_new4280z00_6177;

				BgL_new4280z00_6177 =
					((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4280z00_6177),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 103 */
					BgL_objectz00_bglt BgL_auxz00_6967;

					BgL_auxz00_6967 = (BgL_objectz00_bglt) (BgL_new4280z00_6177);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_6967, BFALSE);
				}
				return BgL_new4280z00_6177;
			}
		}
	}



/* _%allocate-make-box/O-Cinfo */
	obj_t BGl__z52allocatezd2makezd2boxzf2Ozd2Cinfoz72zzcfa_infoz00(obj_t
		BgL_envz00_5509)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{	/* Cfa/cinfo.scm 103 */
				BgL_makezd2boxzd2_bglt BgL_auxz00_6970;

				{	/* Cfa/cinfo.scm 103 */
					BgL_makezd2boxzd2_bglt BgL_res5652z00_6181;

					{	/* Cfa/cinfo.scm 103 */
						BgL_makezd2boxzd2_bglt BgL_new4280z00_6179;

						BgL_new4280z00_6179 =
							((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_makezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4280z00_6179),
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 103 */
							BgL_objectz00_bglt BgL_auxz00_6975;

							BgL_auxz00_6975 = (BgL_objectz00_bglt) (BgL_new4280z00_6179);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_6975, BFALSE);
						}
						BgL_res5652z00_6181 = BgL_new4280z00_6179;
					}
					BgL_auxz00_6970 = BgL_res5652z00_6181;
				}
				return (obj_t) (BgL_auxz00_6970);
			}
		}
	}



/* make-box/O-Cinfo-nil */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2ozd2cinfozf2_bglt
		BGl_makezd2boxzf2Ozd2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			if (
				(BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 103 */
					{	/* Cfa/cinfo.scm 103 */
						BgL_makezd2boxzd2_bglt BgL_res5343z00_3065;

						{	/* Cfa/cinfo.scm 103 */
							BgL_makezd2boxzd2_bglt BgL_new3182z00_3061;

							BgL_new3182z00_3061 =
								((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3182z00_3061),
								BGl_classzd2numzd2zz__objectz00
								(BGl_makezd2boxzd2zzast_nodez00));
							{	/* Cfa/cinfo.scm 103 */
								BgL_objectz00_bglt BgL_auxz00_6985;

								BgL_auxz00_6985 = (BgL_objectz00_bglt) (BgL_new3182z00_3061);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_6985, BFALSE);
							}
							BgL_res5343z00_3065 = BgL_new3182z00_3061;
						}
						BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5343z00_3065);
					}
					{	/* Cfa/cinfo.scm 103 */
						BgL_typez00_bglt BgL_arg4796z00_1476;

						BgL_nodez00_bglt BgL_arg4797z00_1477;

						BgL_arg4796z00_1476 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4797z00_1477 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 103 */
							BgL_makezd2boxzd2_bglt BgL_res5344z00_3077;

							{	/* Cfa/cinfo.scm 103 */
								BgL_makezd2boxzd2_bglt BgL_new3175z00_3066;

								BgL_new3175z00_3066 =
									(BgL_makezd2boxzd2_bglt)
									(BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 103 */
									obj_t BgL_loc3170z00_3072;

									BgL_typez00_bglt BgL_type3171z00_3073;

									obj_t BgL_sidezd2effectzf33172z21_3074;

									obj_t BgL_key3173z00_3075;

									BgL_nodez00_bglt BgL_value3174z00_3076;

									BgL_loc3170z00_3072 = BUNSPEC;
									BgL_type3171z00_3073 = BgL_arg4796z00_1476;
									BgL_sidezd2effectzf33172z21_3074 = BUNSPEC;
									BgL_key3173z00_3075 = BUNSPEC;
									BgL_value3174z00_3076 = BgL_arg4797z00_1477;
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3066))->
											BgL_locz00) = ((obj_t) BgL_loc3170z00_3072), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3066))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3171z00_3073), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3066))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33172z21_3074), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3066))->
											BgL_keyz00) = ((obj_t) BgL_key3173z00_3075), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3066))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3174z00_3076), BUNSPEC);
									BgL_res5344z00_3077 = BgL_new3175z00_3066;
							}} BgL_res5344z00_3077;
					}}
					{	/* Cfa/cinfo.scm 103 */
						long BgL_arg4798z00_1478;

						BgL_arg4798z00_1478 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4798z00_1478);
					}
					{	/* Cfa/cinfo.scm 103 */
						BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_arg4799z00_1479;

						{	/* Cfa/cinfo.scm 103 */
							BgL_approxz00_bglt BgL_arg4800z00_1480;

							BgL_approxz00_bglt BgL_arg4801z00_1481;

							BgL_arg4800z00_1480 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg4801z00_1481 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 103 */
								BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5346z00_3089;

								{	/* Cfa/cinfo.scm 103 */
									BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4263z00_3082;

									BgL_new4263z00_3082 =
										((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_makezd2boxzf2ozd2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 103 */
										BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5345z00_3088;

										{	/* Cfa/cinfo.scm 103 */
											BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4276z00_3083;

											BgL_new4276z00_3083 = BgL_new4263z00_3082;
											{	/* Cfa/cinfo.scm 103 */
												BgL_approxz00_bglt BgL_approx4274z00_3086;

												BgL_approxz00_bglt BgL_valuezd2approx4275zd2_3087;

												BgL_approx4274z00_3086 = BgL_arg4800z00_1480;
												BgL_valuezd2approx4275zd2_3087 = BgL_arg4801z00_1481;
												((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
															CREF(BgL_new4276z00_3083))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4274z00_3086),
													BUNSPEC);
												((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
															CREF(BgL_new4276z00_3083))->
														BgL_valuezd2approxzd2) =
													((BgL_approxz00_bglt) BgL_valuezd2approx4275zd2_3087),
													BUNSPEC);
												BgL_res5345z00_3088 = BgL_new4276z00_3083;
										}} BgL_res5345z00_3088;
									}
									BgL_res5346z00_3089 = BgL_new4263z00_3082;
								}
								BgL_arg4799z00_1479 = BgL_res5346z00_3089;
						}}
						{	/* Cfa/cinfo.scm 103 */
							obj_t BgL_auxz00_7007;

							BgL_objectz00_bglt BgL_auxz00_7005;

							BgL_auxz00_7007 = (obj_t) (BgL_arg4799z00_1479);
							BgL_auxz00_7005 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7005, BgL_auxz00_7007);
				}}}
			else
				{	/* Cfa/cinfo.scm 103 */
					BFALSE;
				}
			return
				(BgL_makezd2boxzf2ozd2cinfozf2_bglt)
				(BGl_z52thezd2makezd2boxzf2Ozd2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _make-box/O-Cinfo-nil */
	obj_t BGl__makezd2boxzf2Ozd2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5510)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			return (obj_t) (BGl_makezd2boxzf2Ozd2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* make-box/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2boxzf2Cinfozf3zd3zzcfa_infoz00(obj_t
		BgL_obj4246z00_75)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4246z00_75,
				BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00);
		}
	}



/* _make-box/Cinfo? */
	obj_t BGl__makezd2boxzf2Cinfozf3zd3zzcfa_infoz00(obj_t BgL_envz00_5507,
		obj_t BgL_obj4246z00_5508)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4246z00_5508,
					BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00));
		}
	}



/* widening-make-box/Cinfo */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2cinfoz20_bglt
		BGl_wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4224z00_79)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{	/* Cfa/cinfo.scm 101 */
				BgL_makezd2boxzf2cinfoz20_bglt BgL_new4225z00_3090;

				BgL_new4225z00_3090 =
					((BgL_makezd2boxzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo.scm 101 */
					BgL_makezd2boxzf2cinfoz20_bglt BgL_res5347z00_3094;

					{	/* Cfa/cinfo.scm 101 */
						BgL_makezd2boxzf2cinfoz20_bglt BgL_new4236z00_3091;

						BgL_new4236z00_3091 = BgL_new4225z00_3090;
						{	/* Cfa/cinfo.scm 101 */
							BgL_approxz00_bglt BgL_approx4235z00_3093;

							BgL_approx4235z00_3093 = BgL_approx4224z00_79;
							((((BgL_makezd2boxzf2cinfoz20_bglt) CREF(BgL_new4236z00_3091))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4235z00_3093), BUNSPEC);
							BgL_res5347z00_3094 = BgL_new4236z00_3091;
					}} BgL_res5347z00_3094;
				}
				return BgL_new4225z00_3090;
			}
		}
	}



/* _widening-make-box/Cinfo */
	obj_t BGl__wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00(obj_t
		BgL_envz00_5590, obj_t BgL_approx4224z00_5591)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			return
				(obj_t) (BGl_wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4224z00_5591)));
		}
	}



/* make-make-box/Cinfo */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2cinfoz20_bglt
		BGl_makezd2makezd2boxzf2Cinfozf2zzcfa_infoz00(obj_t BgL_loc4228z00_80,
		BgL_typez00_bglt BgL_type4229z00_81, obj_t BgL_sidezd2effectzf34230z21_82,
		obj_t BgL_key4231z00_83, BgL_nodez00_bglt BgL_value4232z00_84,
		BgL_approxz00_bglt BgL_approx4227z00_85)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{	/* Cfa/cinfo.scm 101 */
				BgL_makezd2boxzd2_bglt BgL_aux4233z00_3095;

				BgL_aux4233z00_3095 =
					BGl_makezd2makezd2boxz00zzast_nodez00(BgL_loc4228z00_80,
					BgL_type4229z00_81, BgL_sidezd2effectzf34230z21_82, BgL_key4231z00_83,
					BgL_value4232z00_84);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4233z00_3095),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 101 */
					BgL_makezd2boxzf2cinfoz20_bglt BgL_arg4804z00_3097;

					{	/* Cfa/cinfo.scm 101 */
						BgL_makezd2boxzf2cinfoz20_bglt BgL_res5349z00_3107;

						{	/* Cfa/cinfo.scm 101 */
							BgL_makezd2boxzf2cinfoz20_bglt BgL_new4225z00_3102;

							BgL_new4225z00_3102 =
								((BgL_makezd2boxzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzf2cinfoz20_bgl))));
							{	/* Cfa/cinfo.scm 101 */
								BgL_makezd2boxzf2cinfoz20_bglt BgL_res5348z00_3106;

								{	/* Cfa/cinfo.scm 101 */
									BgL_makezd2boxzf2cinfoz20_bglt BgL_new4236z00_3103;

									BgL_new4236z00_3103 = BgL_new4225z00_3102;
									{	/* Cfa/cinfo.scm 101 */
										BgL_approxz00_bglt BgL_approx4235z00_3105;

										BgL_approx4235z00_3105 = BgL_approx4227z00_85;
										((((BgL_makezd2boxzf2cinfoz20_bglt)
													CREF(BgL_new4236z00_3103))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4235z00_3105), BUNSPEC);
										BgL_res5348z00_3106 = BgL_new4236z00_3103;
								}} BgL_res5348z00_3106;
							}
							BgL_res5349z00_3107 = BgL_new4225z00_3102;
						}
						BgL_arg4804z00_3097 = BgL_res5349z00_3107;
					}
					{	/* Cfa/cinfo.scm 101 */
						obj_t BgL_auxz00_7029;

						BgL_objectz00_bglt BgL_auxz00_7027;

						BgL_auxz00_7029 = (obj_t) (BgL_arg4804z00_3097);
						BgL_auxz00_7027 = (BgL_objectz00_bglt) (BgL_aux4233z00_3095);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7027, BgL_auxz00_7029);
				}}
				return
					((BgL_makezd2boxzf2cinfoz20_bglt)
					(BgL_makezd2boxzf2cinfoz20_bglt) (BgL_aux4233z00_3095));
			}
		}
	}



/* _make-make-box/Cinfo */
	obj_t BGl__makezd2makezd2boxzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5592,
		obj_t BgL_loc4228z00_5593, obj_t BgL_type4229z00_5594,
		obj_t BgL_sidezd2effectzf34230z21_5595, obj_t BgL_key4231z00_5596,
		obj_t BgL_value4232z00_5597, obj_t BgL_approx4227z00_5598)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			return
				(obj_t) (BGl_makezd2makezd2boxzf2Cinfozf2zzcfa_infoz00
				(BgL_loc4228z00_5593, (BgL_typez00_bglt) (BgL_type4229z00_5594),
					BgL_sidezd2effectzf34230z21_5595, BgL_key4231z00_5596,
					(BgL_nodez00_bglt) (BgL_value4232z00_5597),
					(BgL_approxz00_bglt) (BgL_approx4227z00_5598)));
		}
	}



/* fill-make-box/Cinfo! */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2cinfoz20_bglt
		BGl_fillzd2makezd2boxzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_makezd2boxzf2cinfoz20_bglt BgL_new4236z00_86,
		BgL_approxz00_bglt BgL_approx4235z00_87)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{	/* Cfa/cinfo.scm 101 */
				BgL_approxz00_bglt BgL_approx4235z00_6183;

				BgL_approx4235z00_6183 = BgL_approx4235z00_87;
				((((BgL_makezd2boxzf2cinfoz20_bglt) CREF(BgL_new4236z00_86))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4235z00_6183), BUNSPEC);
				return BgL_new4236z00_86;
			}
		}
	}



/* _fill-make-box/Cinfo! */
	obj_t BGl__fillzd2makezd2boxzf2Cinfoz12ze0zzcfa_infoz00(obj_t BgL_envz00_5599,
		obj_t BgL_new4236z00_5600, obj_t BgL_approx4235z00_5601)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{	/* Cfa/cinfo.scm 101 */
				BgL_makezd2boxzf2cinfoz20_bglt BgL_auxz00_7040;

				{	/* Cfa/cinfo.scm 101 */
					BgL_makezd2boxzf2cinfoz20_bglt BgL_res5653z00_6187;

					{	/* Cfa/cinfo.scm 101 */
						BgL_makezd2boxzf2cinfoz20_bglt BgL_new4236z00_6184;

						BgL_approxz00_bglt BgL_approx4235z00_6185;

						BgL_new4236z00_6184 =
							(BgL_makezd2boxzf2cinfoz20_bglt) (BgL_new4236z00_5600);
						BgL_approx4235z00_6185 =
							(BgL_approxz00_bglt) (BgL_approx4235z00_5601);
						{	/* Cfa/cinfo.scm 101 */
							BgL_approxz00_bglt BgL_approx4235z00_6186;

							BgL_approx4235z00_6186 = BgL_approx4235z00_6185;
							((((BgL_makezd2boxzf2cinfoz20_bglt) CREF(BgL_new4236z00_6184))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4235z00_6186), BUNSPEC);
							BgL_res5653z00_6187 = BgL_new4236z00_6184;
						}
					}
					BgL_auxz00_7040 = BgL_res5653z00_6187;
				}
				return (obj_t) (BgL_auxz00_7040);
			}
		}
	}



/* %allocate-make-box/Cinfo */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2makezd2boxzf2Cinfoza0zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{	/* Cfa/cinfo.scm 101 */
				BgL_makezd2boxzd2_bglt BgL_new4239z00_6188;

				BgL_new4239z00_6188 =
					((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4239z00_6188),
					BGl_classzd2numzd2zz__objectz00
					(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 101 */
					BgL_objectz00_bglt BgL_auxz00_7049;

					BgL_auxz00_7049 = (BgL_objectz00_bglt) (BgL_new4239z00_6188);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7049, BFALSE);
				}
				return BgL_new4239z00_6188;
			}
		}
	}



/* _%allocate-make-box/Cinfo */
	obj_t BGl__z52allocatezd2makezd2boxzf2Cinfoza0zzcfa_infoz00(obj_t
		BgL_envz00_5505)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{	/* Cfa/cinfo.scm 101 */
				BgL_makezd2boxzd2_bglt BgL_auxz00_7052;

				{	/* Cfa/cinfo.scm 101 */
					BgL_makezd2boxzd2_bglt BgL_res5654z00_6192;

					{	/* Cfa/cinfo.scm 101 */
						BgL_makezd2boxzd2_bglt BgL_new4239z00_6190;

						BgL_new4239z00_6190 =
							((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_makezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4239z00_6190),
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 101 */
							BgL_objectz00_bglt BgL_auxz00_7057;

							BgL_auxz00_7057 = (BgL_objectz00_bglt) (BgL_new4239z00_6190);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7057, BFALSE);
						}
						BgL_res5654z00_6192 = BgL_new4239z00_6190;
					}
					BgL_auxz00_7052 = BgL_res5654z00_6192;
				}
				return (obj_t) (BgL_auxz00_7052);
			}
		}
	}



/* make-box/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_makezd2boxzf2cinfoz20_bglt
		BGl_makezd2boxzf2Cinfozd2nilzf2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			if ((BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 101 */
					{	/* Cfa/cinfo.scm 101 */
						BgL_makezd2boxzd2_bglt BgL_res5350z00_3117;

						{	/* Cfa/cinfo.scm 101 */
							BgL_makezd2boxzd2_bglt BgL_new3182z00_3113;

							BgL_new3182z00_3113 =
								((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3182z00_3113),
								BGl_classzd2numzd2zz__objectz00
								(BGl_makezd2boxzd2zzast_nodez00));
							{	/* Cfa/cinfo.scm 101 */
								BgL_objectz00_bglt BgL_auxz00_7067;

								BgL_auxz00_7067 = (BgL_objectz00_bglt) (BgL_new3182z00_3113);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7067, BFALSE);
							}
							BgL_res5350z00_3117 = BgL_new3182z00_3113;
						}
						BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00 =
							(obj_t) (BgL_res5350z00_3117);
					}
					{	/* Cfa/cinfo.scm 101 */
						BgL_typez00_bglt BgL_arg4807z00_1491;

						BgL_nodez00_bglt BgL_arg4808z00_1492;

						BgL_arg4807z00_1491 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4808z00_1492 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 101 */
							BgL_makezd2boxzd2_bglt BgL_res5351z00_3129;

							{	/* Cfa/cinfo.scm 101 */
								BgL_makezd2boxzd2_bglt BgL_new3175z00_3118;

								BgL_new3175z00_3118 =
									(BgL_makezd2boxzd2_bglt)
									(BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 101 */
									obj_t BgL_loc3170z00_3124;

									BgL_typez00_bglt BgL_type3171z00_3125;

									obj_t BgL_sidezd2effectzf33172z21_3126;

									obj_t BgL_key3173z00_3127;

									BgL_nodez00_bglt BgL_value3174z00_3128;

									BgL_loc3170z00_3124 = BUNSPEC;
									BgL_type3171z00_3125 = BgL_arg4807z00_1491;
									BgL_sidezd2effectzf33172z21_3126 = BUNSPEC;
									BgL_key3173z00_3127 = BUNSPEC;
									BgL_value3174z00_3128 = BgL_arg4808z00_1492;
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3118))->
											BgL_locz00) = ((obj_t) BgL_loc3170z00_3124), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3118))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3171z00_3125), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3118))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33172z21_3126), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3118))->
											BgL_keyz00) = ((obj_t) BgL_key3173z00_3127), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3118))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3174z00_3128), BUNSPEC);
									BgL_res5351z00_3129 = BgL_new3175z00_3118;
							}} BgL_res5351z00_3129;
					}}
					{	/* Cfa/cinfo.scm 101 */
						long BgL_arg4810z00_1493;

						BgL_arg4810z00_1493 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00),
							BgL_arg4810z00_1493);
					}
					{	/* Cfa/cinfo.scm 101 */
						BgL_makezd2boxzf2cinfoz20_bglt BgL_arg4811z00_1494;

						{	/* Cfa/cinfo.scm 101 */
							BgL_approxz00_bglt BgL_arg4812z00_1495;

							BgL_arg4812z00_1495 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 101 */
								BgL_makezd2boxzf2cinfoz20_bglt BgL_res5353z00_3138;

								{	/* Cfa/cinfo.scm 101 */
									BgL_makezd2boxzf2cinfoz20_bglt BgL_new4225z00_3133;

									BgL_new4225z00_3133 =
										((BgL_makezd2boxzf2cinfoz20_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_makezd2boxzf2cinfoz20_bgl))));
									{	/* Cfa/cinfo.scm 101 */
										BgL_makezd2boxzf2cinfoz20_bglt BgL_res5352z00_3137;

										{	/* Cfa/cinfo.scm 101 */
											BgL_makezd2boxzf2cinfoz20_bglt BgL_new4236z00_3134;

											BgL_new4236z00_3134 = BgL_new4225z00_3133;
											{	/* Cfa/cinfo.scm 101 */
												BgL_approxz00_bglt BgL_approx4235z00_3136;

												BgL_approx4235z00_3136 = BgL_arg4812z00_1495;
												((((BgL_makezd2boxzf2cinfoz20_bglt)
															CREF(BgL_new4236z00_3134))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4235z00_3136),
													BUNSPEC);
												BgL_res5352z00_3137 = BgL_new4236z00_3134;
										}} BgL_res5352z00_3137;
									}
									BgL_res5353z00_3138 = BgL_new4225z00_3133;
								}
								BgL_arg4811z00_1494 = BgL_res5353z00_3138;
						}}
						{	/* Cfa/cinfo.scm 101 */
							obj_t BgL_auxz00_7087;

							BgL_objectz00_bglt BgL_auxz00_7085;

							BgL_auxz00_7087 = (obj_t) (BgL_arg4811z00_1494);
							BgL_auxz00_7085 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7085, BgL_auxz00_7087);
				}}}
			else
				{	/* Cfa/cinfo.scm 101 */
					BFALSE;
				}
			return
				(BgL_makezd2boxzf2cinfoz20_bglt)
				(BGl_z52thezd2makezd2boxzf2Cinfozd2nilz72zzcfa_infoz00);
		}
	}



/* _make-box/Cinfo-nil */
	obj_t BGl__makezd2boxzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t BgL_envz00_5506)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			return (obj_t) (BGl_makezd2boxzf2Cinfozd2nilzf2zzcfa_infoz00());
		}
	}



/* pre-make-box? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2makezd2boxzf3zf3zzcfa_infoz00(obj_t
		BgL_obj4210z00_89)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4210z00_89,
				BGl_prezd2makezd2boxz00zzcfa_infoz00);
		}
	}



/* _pre-make-box? */
	obj_t BGl__prezd2makezd2boxzf3zf3zzcfa_infoz00(obj_t BgL_envz00_5503,
		obj_t BgL_obj4210z00_5504)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4210z00_5504,
					BGl_prezd2makezd2boxz00zzcfa_infoz00));
		}
	}



/* widening-pre-make-box */
	BGL_EXPORTED_DEF BgL_prezd2makezd2boxz00_bglt
		BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{	/* Cfa/cinfo.scm 100 */
				BgL_prezd2makezd2boxz00_bglt BgL_new4191z00_1496;

				BgL_new4191z00_1496 =
					((BgL_prezd2makezd2boxz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2boxz00_bgl))));
				return BgL_new4191z00_1496;
			}
		}
	}



/* _widening-pre-make-box */
	obj_t BGl__wideningzd2prezd2makezd2boxzd2zzcfa_infoz00(obj_t BgL_envz00_5602)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			return (obj_t) (BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00());
		}
	}



/* make-pre-make-box */
	BGL_EXPORTED_DEF BgL_prezd2makezd2boxz00_bglt
		BGl_makezd2prezd2makezd2boxzd2zzcfa_infoz00(obj_t BgL_loc4193z00_93,
		BgL_typez00_bglt BgL_type4194z00_94, obj_t BgL_sidezd2effectzf34195z21_95,
		obj_t BgL_key4196z00_96, BgL_nodez00_bglt BgL_value4197z00_97)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{	/* Cfa/cinfo.scm 100 */
				BgL_makezd2boxzd2_bglt BgL_aux4198z00_3140;

				BgL_aux4198z00_3140 =
					BGl_makezd2makezd2boxz00zzast_nodez00(BgL_loc4193z00_93,
					BgL_type4194z00_94, BgL_sidezd2effectzf34195z21_95, BgL_key4196z00_96,
					BgL_value4197z00_97);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4198z00_3140),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2boxz00zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 100 */
					BgL_prezd2makezd2boxz00_bglt BgL_arg4814z00_3142;

					BgL_arg4814z00_3142 =
						BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00();
					{	/* Cfa/cinfo.scm 100 */
						obj_t BgL_auxz00_7106;

						BgL_objectz00_bglt BgL_auxz00_7104;

						BgL_auxz00_7106 = (obj_t) (BgL_arg4814z00_3142);
						BgL_auxz00_7104 = (BgL_objectz00_bglt) (BgL_aux4198z00_3140);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7104, BgL_auxz00_7106);
					}
				}
				return
					((BgL_prezd2makezd2boxz00_bglt)
					(BgL_prezd2makezd2boxz00_bglt) (BgL_aux4198z00_3140));
			}
		}
	}



/* _make-pre-make-box */
	obj_t BGl__makezd2prezd2makezd2boxzd2zzcfa_infoz00(obj_t BgL_envz00_5603,
		obj_t BgL_loc4193z00_5604, obj_t BgL_type4194z00_5605,
		obj_t BgL_sidezd2effectzf34195z21_5606, obj_t BgL_key4196z00_5607,
		obj_t BgL_value4197z00_5608)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			return
				(obj_t) (BGl_makezd2prezd2makezd2boxzd2zzcfa_infoz00
				(BgL_loc4193z00_5604, (BgL_typez00_bglt) (BgL_type4194z00_5605),
					BgL_sidezd2effectzf34195z21_5606, BgL_key4196z00_5607,
					(BgL_nodez00_bglt) (BgL_value4197z00_5608)));
		}
	}



/* fill-pre-make-box! */
	BGL_EXPORTED_DEF BgL_prezd2makezd2boxz00_bglt
		BGl_fillzd2prezd2makezd2boxz12zc0zzcfa_infoz00(BgL_prezd2makezd2boxz00_bglt
		BgL_new4200z00_98)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{	/* Cfa/cinfo.scm 100 */

				return BgL_new4200z00_98;
			}
		}
	}



/* _fill-pre-make-box! */
	obj_t BGl__fillzd2prezd2makezd2boxz12zc0zzcfa_infoz00(obj_t BgL_envz00_5609,
		obj_t BgL_new4200z00_5610)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{	/* Cfa/cinfo.scm 100 */
				BgL_prezd2makezd2boxz00_bglt BgL_auxz00_7115;

				{	/* Cfa/cinfo.scm 100 */

					BgL_auxz00_7115 =
						(BgL_prezd2makezd2boxz00_bglt) (BgL_new4200z00_5610);
				}
				return (obj_t) (BgL_auxz00_7115);
			}
		}
	}



/* %allocate-pre-make-box */
	BGL_EXPORTED_DEF BgL_makezd2boxzd2_bglt
		BGl_z52allocatezd2prezd2makezd2boxz80zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{	/* Cfa/cinfo.scm 100 */
				BgL_makezd2boxzd2_bglt BgL_new4202z00_6195;

				BgL_new4202z00_6195 =
					((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4202z00_6195),
					BGl_classzd2numzd2zz__objectz00
					(BGl_prezd2makezd2boxz00zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 100 */
					BgL_objectz00_bglt BgL_auxz00_7122;

					BgL_auxz00_7122 = (BgL_objectz00_bglt) (BgL_new4202z00_6195);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7122, BFALSE);
				}
				return BgL_new4202z00_6195;
			}
		}
	}



/* _%allocate-pre-make-box */
	obj_t BGl__z52allocatezd2prezd2makezd2boxz80zzcfa_infoz00(obj_t
		BgL_envz00_5501)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{	/* Cfa/cinfo.scm 100 */
				BgL_makezd2boxzd2_bglt BgL_auxz00_7125;

				{	/* Cfa/cinfo.scm 100 */
					BgL_makezd2boxzd2_bglt BgL_res5655z00_6199;

					{	/* Cfa/cinfo.scm 100 */
						BgL_makezd2boxzd2_bglt BgL_new4202z00_6197;

						BgL_new4202z00_6197 =
							((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_makezd2boxzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4202z00_6197),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2boxz00zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 100 */
							BgL_objectz00_bglt BgL_auxz00_7130;

							BgL_auxz00_7130 = (BgL_objectz00_bglt) (BgL_new4202z00_6197);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7130, BFALSE);
						}
						BgL_res5655z00_6199 = BgL_new4202z00_6197;
					}
					BgL_auxz00_7125 = BgL_res5655z00_6199;
				}
				return (obj_t) (BgL_auxz00_7125);
			}
		}
	}



/* pre-make-box-nil */
	BGL_EXPORTED_DEF BgL_prezd2makezd2boxz00_bglt
		BGl_prezd2makezd2boxzd2nilzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			if ((BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 100 */
					{	/* Cfa/cinfo.scm 100 */
						BgL_makezd2boxzd2_bglt BgL_res5354z00_3154;

						{	/* Cfa/cinfo.scm 100 */
							BgL_makezd2boxzd2_bglt BgL_new3182z00_3150;

							BgL_new3182z00_3150 =
								((BgL_makezd2boxzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3182z00_3150),
								BGl_classzd2numzd2zz__objectz00
								(BGl_makezd2boxzd2zzast_nodez00));
							{	/* Cfa/cinfo.scm 100 */
								BgL_objectz00_bglt BgL_auxz00_7140;

								BgL_auxz00_7140 = (BgL_objectz00_bglt) (BgL_new3182z00_3150);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7140, BFALSE);
							}
							BgL_res5354z00_3154 = BgL_new3182z00_3150;
						}
						BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00 =
							(obj_t) (BgL_res5354z00_3154);
					}
					{	/* Cfa/cinfo.scm 100 */
						BgL_typez00_bglt BgL_arg4817z00_1504;

						BgL_nodez00_bglt BgL_arg4819z00_1505;

						BgL_arg4817z00_1504 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4819z00_1505 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 100 */
							BgL_makezd2boxzd2_bglt BgL_res5355z00_3166;

							{	/* Cfa/cinfo.scm 100 */
								BgL_makezd2boxzd2_bglt BgL_new3175z00_3155;

								BgL_new3175z00_3155 =
									(BgL_makezd2boxzd2_bglt)
									(BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 100 */
									obj_t BgL_loc3170z00_3161;

									BgL_typez00_bglt BgL_type3171z00_3162;

									obj_t BgL_sidezd2effectzf33172z21_3163;

									obj_t BgL_key3173z00_3164;

									BgL_nodez00_bglt BgL_value3174z00_3165;

									BgL_loc3170z00_3161 = BUNSPEC;
									BgL_type3171z00_3162 = BgL_arg4817z00_1504;
									BgL_sidezd2effectzf33172z21_3163 = BUNSPEC;
									BgL_key3173z00_3164 = BUNSPEC;
									BgL_value3174z00_3165 = BgL_arg4819z00_1505;
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3155))->
											BgL_locz00) = ((obj_t) BgL_loc3170z00_3161), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3155))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3171z00_3162), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3155))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33172z21_3163), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3155))->
											BgL_keyz00) = ((obj_t) BgL_key3173z00_3164), BUNSPEC);
									((((BgL_makezd2boxzd2_bglt) CREF(BgL_new3175z00_3155))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3174z00_3165), BUNSPEC);
									BgL_res5355z00_3166 = BgL_new3175z00_3155;
							}} BgL_res5355z00_3166;
					}}
					{	/* Cfa/cinfo.scm 100 */
						long BgL_arg4820z00_1506;

						BgL_arg4820z00_1506 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2makezd2boxz00zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00),
							BgL_arg4820z00_1506);
					}
					{	/* Cfa/cinfo.scm 100 */
						BgL_prezd2makezd2boxz00_bglt BgL_arg4821z00_1507;

						BgL_arg4821z00_1507 =
							BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00();
						{	/* Cfa/cinfo.scm 100 */
							obj_t BgL_auxz00_7158;

							BgL_objectz00_bglt BgL_auxz00_7156;

							BgL_auxz00_7158 = (obj_t) (BgL_arg4821z00_1507);
							BgL_auxz00_7156 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7156, BgL_auxz00_7158);
				}}}
			else
				{	/* Cfa/cinfo.scm 100 */
					BFALSE;
				}
			return
				(BgL_prezd2makezd2boxz00_bglt)
				(BGl_z52thezd2prezd2makezd2boxzd2nilz52zzcfa_infoz00);
		}
	}



/* _pre-make-box-nil */
	obj_t BGl__prezd2makezd2boxzd2nilzd2zzcfa_infoz00(obj_t BgL_envz00_5502)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			return (obj_t) (BGl_prezd2makezd2boxzd2nilzd2zzcfa_infoz00());
		}
	}



/* jump-ex-it/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_jumpzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4177z00_99)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4177z00_99,
				BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _jump-ex-it/Cinfo? */
	obj_t BGl__jumpzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5499,
		obj_t BgL_obj4177z00_5500)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4177z00_5500,
					BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-jump-ex-it/Cinfo */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4156z00_103)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{	/* Cfa/cinfo.scm 96 */
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4157z00_3169;

				BgL_new4157z00_3169 =
					((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_jumpzd2exzd2itzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 96 */
					BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5356z00_3173;

					{	/* Cfa/cinfo.scm 96 */
						BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4167z00_3170;

						BgL_new4167z00_3170 = BgL_new4157z00_3169;
						{	/* Cfa/cinfo.scm 96 */
							BgL_approxz00_bglt BgL_approx4166z00_3172;

							BgL_approx4166z00_3172 = BgL_approx4156z00_103;
							((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
										CREF(BgL_new4167z00_3170))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4166z00_3172), BUNSPEC);
							BgL_res5356z00_3173 = BgL_new4167z00_3170;
					}} BgL_res5356z00_3173;
				}
				return BgL_new4157z00_3169;
			}
		}
	}



/* _widening-jump-ex-it/Cinfo */
	obj_t BGl__wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5611, obj_t BgL_approx4156z00_5612)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			return
				(obj_t) (BGl_wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4156z00_5612)));
		}
	}



/* make-jump-ex-it/Cinfo */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_makezd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc4160z00_104,
		BgL_typez00_bglt BgL_type4161z00_105, BgL_nodez00_bglt BgL_exit4162z00_106,
		BgL_nodez00_bglt BgL_value4163z00_107,
		BgL_approxz00_bglt BgL_approx4159z00_108)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{	/* Cfa/cinfo.scm 96 */
				BgL_jumpzd2exzd2itz00_bglt BgL_aux4164z00_3174;

				BgL_aux4164z00_3174 =
					BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(BgL_loc4160z00_104,
					BgL_type4161z00_105, BgL_exit4162z00_106, BgL_value4163z00_107);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4164z00_3174),
					BGl_classzd2numzd2zz__objectz00
					(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 96 */
					BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_arg4823z00_3176;

					{	/* Cfa/cinfo.scm 96 */
						BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5358z00_3186;

						{	/* Cfa/cinfo.scm 96 */
							BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4157z00_3181;

							BgL_new4157z00_3181 =
								((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_jumpzd2exzd2itzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 96 */
								BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5357z00_3185;

								{	/* Cfa/cinfo.scm 96 */
									BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4167z00_3182;

									BgL_new4167z00_3182 = BgL_new4157z00_3181;
									{	/* Cfa/cinfo.scm 96 */
										BgL_approxz00_bglt BgL_approx4166z00_3184;

										BgL_approx4166z00_3184 = BgL_approx4159z00_108;
										((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
													CREF(BgL_new4167z00_3182))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4166z00_3184), BUNSPEC);
										BgL_res5357z00_3185 = BgL_new4167z00_3182;
								}} BgL_res5357z00_3185;
							}
							BgL_res5358z00_3186 = BgL_new4157z00_3181;
						}
						BgL_arg4823z00_3176 = BgL_res5358z00_3186;
					}
					{	/* Cfa/cinfo.scm 96 */
						obj_t BgL_auxz00_7180;

						BgL_objectz00_bglt BgL_auxz00_7178;

						BgL_auxz00_7180 = (obj_t) (BgL_arg4823z00_3176);
						BgL_auxz00_7178 = (BgL_objectz00_bglt) (BgL_aux4164z00_3174);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7178, BgL_auxz00_7180);
				}}
				return
					((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
					(BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_aux4164z00_3174));
			}
		}
	}



/* _make-jump-ex-it/Cinfo */
	obj_t BGl__makezd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5613, obj_t BgL_loc4160z00_5614, obj_t BgL_type4161z00_5615,
		obj_t BgL_exit4162z00_5616, obj_t BgL_value4163z00_5617,
		obj_t BgL_approx4159z00_5618)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			return
				(obj_t) (BGl_makezd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00
				(BgL_loc4160z00_5614, (BgL_typez00_bglt) (BgL_type4161z00_5615),
					(BgL_nodez00_bglt) (BgL_exit4162z00_5616),
					(BgL_nodez00_bglt) (BgL_value4163z00_5617),
					(BgL_approxz00_bglt) (BgL_approx4159z00_5618)));
		}
	}



/* fill-jump-ex-it/Cinfo! */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_fillzd2jumpzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00
		(BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4167z00_109,
		BgL_approxz00_bglt BgL_approx4166z00_110)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{	/* Cfa/cinfo.scm 96 */
				BgL_approxz00_bglt BgL_approx4166z00_6201;

				BgL_approx4166z00_6201 = BgL_approx4166z00_110;
				((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) CREF(BgL_new4167z00_109))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4166z00_6201), BUNSPEC);
				return BgL_new4167z00_109;
			}
		}
	}



/* _fill-jump-ex-it/Cinfo! */
	obj_t BGl__fillzd2jumpzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00(obj_t
		BgL_envz00_5619, obj_t BgL_new4167z00_5620, obj_t BgL_approx4166z00_5621)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{	/* Cfa/cinfo.scm 96 */
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_7192;

				{	/* Cfa/cinfo.scm 96 */
					BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5656z00_6205;

					{	/* Cfa/cinfo.scm 96 */
						BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4167z00_6202;

						BgL_approxz00_bglt BgL_approx4166z00_6203;

						BgL_new4167z00_6202 =
							(BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_new4167z00_5620);
						BgL_approx4166z00_6203 =
							(BgL_approxz00_bglt) (BgL_approx4166z00_5621);
						{	/* Cfa/cinfo.scm 96 */
							BgL_approxz00_bglt BgL_approx4166z00_6204;

							BgL_approx4166z00_6204 = BgL_approx4166z00_6203;
							((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
										CREF(BgL_new4167z00_6202))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4166z00_6204), BUNSPEC);
							BgL_res5656z00_6205 = BgL_new4167z00_6202;
						}
					}
					BgL_auxz00_7192 = BgL_res5656z00_6205;
				}
				return (obj_t) (BgL_auxz00_7192);
			}
		}
	}



/* %allocate-jump-ex-it/Cinfo */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_z52allocatezd2jumpzd2exzd2itzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{	/* Cfa/cinfo.scm 96 */
				BgL_jumpzd2exzd2itz00_bglt BgL_new4170z00_6206;

				BgL_new4170z00_6206 =
					((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_jumpzd2exzd2itz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4170z00_6206),
					BGl_classzd2numzd2zz__objectz00
					(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 96 */
					BgL_objectz00_bglt BgL_auxz00_7201;

					BgL_auxz00_7201 = (BgL_objectz00_bglt) (BgL_new4170z00_6206);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7201, BFALSE);
				}
				return BgL_new4170z00_6206;
			}
		}
	}



/* _%allocate-jump-ex-it/Cinfo */
	obj_t BGl__z52allocatezd2jumpzd2exzd2itzf2Cinfoz72zzcfa_infoz00(obj_t
		BgL_envz00_5497)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{	/* Cfa/cinfo.scm 96 */
				BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_7204;

				{	/* Cfa/cinfo.scm 96 */
					BgL_jumpzd2exzd2itz00_bglt BgL_res5657z00_6210;

					{	/* Cfa/cinfo.scm 96 */
						BgL_jumpzd2exzd2itz00_bglt BgL_new4170z00_6208;

						BgL_new4170z00_6208 =
							((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jumpzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4170z00_6208),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 96 */
							BgL_objectz00_bglt BgL_auxz00_7209;

							BgL_auxz00_7209 = (BgL_objectz00_bglt) (BgL_new4170z00_6208);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7209, BFALSE);
						}
						BgL_res5657z00_6210 = BgL_new4170z00_6208;
					}
					BgL_auxz00_7204 = BgL_res5657z00_6210;
				}
				return (obj_t) (BgL_auxz00_7204);
			}
		}
	}



/* jump-ex-it/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itzf2cinfozf2_bglt
		BGl_jumpzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			if (
				(BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 96 */
					{	/* Cfa/cinfo.scm 96 */
						BgL_jumpzd2exzd2itz00_bglt BgL_res5359z00_3196;

						{	/* Cfa/cinfo.scm 96 */
							BgL_jumpzd2exzd2itz00_bglt BgL_new3150z00_3192;

							BgL_new3150z00_3192 =
								((BgL_jumpzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jumpzd2exzd2itz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3150z00_3192),
								BGl_classzd2numzd2zz__objectz00
								(BGl_jumpzd2exzd2itz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 96 */
								BgL_objectz00_bglt BgL_auxz00_7219;

								BgL_auxz00_7219 = (BgL_objectz00_bglt) (BgL_new3150z00_3192);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7219, BFALSE);
							}
							BgL_res5359z00_3196 = BgL_new3150z00_3192;
						}
						BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5359z00_3196);
					}
					{	/* Cfa/cinfo.scm 96 */
						BgL_typez00_bglt BgL_arg4826z00_1517;

						BgL_nodez00_bglt BgL_arg4827z00_1518;

						BgL_nodez00_bglt BgL_arg4828z00_1519;

						BgL_arg4826z00_1517 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4827z00_1518 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4828z00_1519 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 96 */
							BgL_jumpzd2exzd2itz00_bglt BgL_res5360z00_3206;

							{	/* Cfa/cinfo.scm 96 */
								BgL_jumpzd2exzd2itz00_bglt BgL_new3144z00_3197;

								BgL_new3144z00_3197 =
									(BgL_jumpzd2exzd2itz00_bglt)
									(BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 96 */
									obj_t BgL_loc3140z00_3202;

									BgL_typez00_bglt BgL_type3141z00_3203;

									BgL_nodez00_bglt BgL_exit3142z00_3204;

									BgL_nodez00_bglt BgL_value3143z00_3205;

									BgL_loc3140z00_3202 = BUNSPEC;
									BgL_type3141z00_3203 = BgL_arg4826z00_1517;
									BgL_exit3142z00_3204 = BgL_arg4827z00_1518;
									BgL_value3143z00_3205 = BgL_arg4828z00_1519;
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3144z00_3197))->
											BgL_locz00) = ((obj_t) BgL_loc3140z00_3202), BUNSPEC);
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3144z00_3197))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3141z00_3203), BUNSPEC);
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3144z00_3197))->
											BgL_exitz00) =
										((BgL_nodez00_bglt) BgL_exit3142z00_3204), BUNSPEC);
									((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_new3144z00_3197))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value3143z00_3205), BUNSPEC);
									BgL_res5360z00_3206 = BgL_new3144z00_3197;
							}} BgL_res5360z00_3206;
					}}
					{	/* Cfa/cinfo.scm 96 */
						long BgL_arg4829z00_1520;

						BgL_arg4829z00_1520 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4829z00_1520);
					}
					{	/* Cfa/cinfo.scm 96 */
						BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_arg4830z00_1521;

						{	/* Cfa/cinfo.scm 96 */
							BgL_approxz00_bglt BgL_arg4831z00_1522;

							BgL_arg4831z00_1522 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 96 */
								BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5362z00_3215;

								{	/* Cfa/cinfo.scm 96 */
									BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4157z00_3210;

									BgL_new4157z00_3210 =
										((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_jumpzd2exzd2itzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 96 */
										BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5361z00_3214;

										{	/* Cfa/cinfo.scm 96 */
											BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4167z00_3211;

											BgL_new4167z00_3211 = BgL_new4157z00_3210;
											{	/* Cfa/cinfo.scm 96 */
												BgL_approxz00_bglt BgL_approx4166z00_3213;

												BgL_approx4166z00_3213 = BgL_arg4831z00_1522;
												((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
															CREF(BgL_new4167z00_3211))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4166z00_3213),
													BUNSPEC);
												BgL_res5361z00_3214 = BgL_new4167z00_3211;
										}} BgL_res5361z00_3214;
									}
									BgL_res5362z00_3215 = BgL_new4157z00_3210;
								}
								BgL_arg4830z00_1521 = BgL_res5362z00_3215;
						}}
						{	/* Cfa/cinfo.scm 96 */
							obj_t BgL_auxz00_7239;

							BgL_objectz00_bglt BgL_auxz00_7237;

							BgL_auxz00_7239 = (obj_t) (BgL_arg4830z00_1521);
							BgL_auxz00_7237 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7237, BgL_auxz00_7239);
				}}}
			else
				{	/* Cfa/cinfo.scm 96 */
					BFALSE;
				}
			return
				(BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
				(BGl_z52thezd2jumpzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _jump-ex-it/Cinfo-nil */
	obj_t BGl__jumpzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5498)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			return (obj_t) (BGl_jumpzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* set-ex-it/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_setzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4142z00_112)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4142z00_112,
				BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _set-ex-it/Cinfo? */
	obj_t BGl__setzd2exzd2itzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5495,
		obj_t BgL_obj4142z00_5496)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4142z00_5496,
					BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-set-ex-it/Cinfo */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4119z00_116)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{	/* Cfa/cinfo.scm 94 */
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4120z00_3216;

				BgL_new4120z00_3216 =
					((BgL_setzd2exzd2itzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setzd2exzd2itzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 94 */
					BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5363z00_3220;

					{	/* Cfa/cinfo.scm 94 */
						BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4130z00_3217;

						BgL_new4130z00_3217 = BgL_new4120z00_3216;
						{	/* Cfa/cinfo.scm 94 */
							BgL_approxz00_bglt BgL_approx4129z00_3219;

							BgL_approx4129z00_3219 = BgL_approx4119z00_116;
							((((BgL_setzd2exzd2itzf2cinfozf2_bglt)
										CREF(BgL_new4130z00_3217))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4129z00_3219), BUNSPEC);
							BgL_res5363z00_3220 = BgL_new4130z00_3217;
					}} BgL_res5363z00_3220;
				}
				return BgL_new4120z00_3216;
			}
		}
	}



/* _widening-set-ex-it/Cinfo */
	obj_t BGl__wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5622, obj_t BgL_approx4119z00_5623)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			return
				(obj_t) (BGl_wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4119z00_5623)));
		}
	}



/* make-set-ex-it/Cinfo */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_makezd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc4123z00_117,
		BgL_typez00_bglt BgL_type4124z00_118, BgL_varz00_bglt BgL_var4125z00_119,
		BgL_nodez00_bglt BgL_body4126z00_120,
		BgL_approxz00_bglt BgL_approx4122z00_121)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{	/* Cfa/cinfo.scm 94 */
				BgL_setzd2exzd2itz00_bglt BgL_aux4127z00_3221;

				BgL_aux4127z00_3221 =
					BGl_makezd2setzd2exzd2itzd2zzast_nodez00(BgL_loc4123z00_117,
					BgL_type4124z00_118, BgL_var4125z00_119, BgL_body4126z00_120);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4127z00_3221),
					BGl_classzd2numzd2zz__objectz00
					(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 94 */
					BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_arg4833z00_3223;

					{	/* Cfa/cinfo.scm 94 */
						BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5365z00_3233;

						{	/* Cfa/cinfo.scm 94 */
							BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4120z00_3228;

							BgL_new4120z00_3228 =
								((BgL_setzd2exzd2itzf2cinfozf2_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_setzd2exzd2itzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 94 */
								BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5364z00_3232;

								{	/* Cfa/cinfo.scm 94 */
									BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4130z00_3229;

									BgL_new4130z00_3229 = BgL_new4120z00_3228;
									{	/* Cfa/cinfo.scm 94 */
										BgL_approxz00_bglt BgL_approx4129z00_3231;

										BgL_approx4129z00_3231 = BgL_approx4122z00_121;
										((((BgL_setzd2exzd2itzf2cinfozf2_bglt)
													CREF(BgL_new4130z00_3229))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4129z00_3231), BUNSPEC);
										BgL_res5364z00_3232 = BgL_new4130z00_3229;
								}} BgL_res5364z00_3232;
							}
							BgL_res5365z00_3233 = BgL_new4120z00_3228;
						}
						BgL_arg4833z00_3223 = BgL_res5365z00_3233;
					}
					{	/* Cfa/cinfo.scm 94 */
						obj_t BgL_auxz00_7261;

						BgL_objectz00_bglt BgL_auxz00_7259;

						BgL_auxz00_7261 = (obj_t) (BgL_arg4833z00_3223);
						BgL_auxz00_7259 = (BgL_objectz00_bglt) (BgL_aux4127z00_3221);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7259, BgL_auxz00_7261);
				}}
				return
					((BgL_setzd2exzd2itzf2cinfozf2_bglt)
					(BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_aux4127z00_3221));
			}
		}
	}



/* _make-set-ex-it/Cinfo */
	obj_t BGl__makezd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5624,
		obj_t BgL_loc4123z00_5625, obj_t BgL_type4124z00_5626,
		obj_t BgL_var4125z00_5627, obj_t BgL_body4126z00_5628,
		obj_t BgL_approx4122z00_5629)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			return
				(obj_t) (BGl_makezd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00
				(BgL_loc4123z00_5625, (BgL_typez00_bglt) (BgL_type4124z00_5626),
					(BgL_varz00_bglt) (BgL_var4125z00_5627),
					(BgL_nodez00_bglt) (BgL_body4126z00_5628),
					(BgL_approxz00_bglt) (BgL_approx4122z00_5629)));
		}
	}



/* fill-set-ex-it/Cinfo! */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_fillzd2setzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00
		(BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4130z00_122,
		BgL_approxz00_bglt BgL_approx4129z00_123)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{	/* Cfa/cinfo.scm 94 */
				BgL_approxz00_bglt BgL_approx4129z00_6212;

				BgL_approx4129z00_6212 = BgL_approx4129z00_123;
				((((BgL_setzd2exzd2itzf2cinfozf2_bglt) CREF(BgL_new4130z00_122))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4129z00_6212), BUNSPEC);
				return BgL_new4130z00_122;
			}
		}
	}



/* _fill-set-ex-it/Cinfo! */
	obj_t BGl__fillzd2setzd2exzd2itzf2Cinfoz12z32zzcfa_infoz00(obj_t
		BgL_envz00_5630, obj_t BgL_new4130z00_5631, obj_t BgL_approx4129z00_5632)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{	/* Cfa/cinfo.scm 94 */
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_7273;

				{	/* Cfa/cinfo.scm 94 */
					BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5658z00_6216;

					{	/* Cfa/cinfo.scm 94 */
						BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4130z00_6213;

						BgL_approxz00_bglt BgL_approx4129z00_6214;

						BgL_new4130z00_6213 =
							(BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_new4130z00_5631);
						BgL_approx4129z00_6214 =
							(BgL_approxz00_bglt) (BgL_approx4129z00_5632);
						{	/* Cfa/cinfo.scm 94 */
							BgL_approxz00_bglt BgL_approx4129z00_6215;

							BgL_approx4129z00_6215 = BgL_approx4129z00_6214;
							((((BgL_setzd2exzd2itzf2cinfozf2_bglt)
										CREF(BgL_new4130z00_6213))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4129z00_6215), BUNSPEC);
							BgL_res5658z00_6216 = BgL_new4130z00_6213;
						}
					}
					BgL_auxz00_7273 = BgL_res5658z00_6216;
				}
				return (obj_t) (BgL_auxz00_7273);
			}
		}
	}



/* %allocate-set-ex-it/Cinfo */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itz00_bglt
		BGl_z52allocatezd2setzd2exzd2itzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{	/* Cfa/cinfo.scm 94 */
				BgL_setzd2exzd2itz00_bglt BgL_new4133z00_6217;

				BgL_new4133z00_6217 =
					((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setzd2exzd2itz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4133z00_6217),
					BGl_classzd2numzd2zz__objectz00
					(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 94 */
					BgL_objectz00_bglt BgL_auxz00_7282;

					BgL_auxz00_7282 = (BgL_objectz00_bglt) (BgL_new4133z00_6217);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7282, BFALSE);
				}
				return BgL_new4133z00_6217;
			}
		}
	}



/* _%allocate-set-ex-it/Cinfo */
	obj_t BGl__z52allocatezd2setzd2exzd2itzf2Cinfoz72zzcfa_infoz00(obj_t
		BgL_envz00_5493)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{	/* Cfa/cinfo.scm 94 */
				BgL_setzd2exzd2itz00_bglt BgL_auxz00_7285;

				{	/* Cfa/cinfo.scm 94 */
					BgL_setzd2exzd2itz00_bglt BgL_res5659z00_6221;

					{	/* Cfa/cinfo.scm 94 */
						BgL_setzd2exzd2itz00_bglt BgL_new4133z00_6219;

						BgL_new4133z00_6219 =
							((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setzd2exzd2itz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4133z00_6219),
							BGl_classzd2numzd2zz__objectz00
							(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 94 */
							BgL_objectz00_bglt BgL_auxz00_7290;

							BgL_auxz00_7290 = (BgL_objectz00_bglt) (BgL_new4133z00_6219);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7290, BFALSE);
						}
						BgL_res5659z00_6221 = BgL_new4133z00_6219;
					}
					BgL_auxz00_7285 = BgL_res5659z00_6221;
				}
				return (obj_t) (BgL_auxz00_7285);
			}
		}
	}



/* set-ex-it/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_setzd2exzd2itzf2cinfozf2_bglt
		BGl_setzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			if ((BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 94 */
					{	/* Cfa/cinfo.scm 94 */
						BgL_setzd2exzd2itz00_bglt BgL_res5366z00_3243;

						{	/* Cfa/cinfo.scm 94 */
							BgL_setzd2exzd2itz00_bglt BgL_new3124z00_3239;

							BgL_new3124z00_3239 =
								((BgL_setzd2exzd2itz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setzd2exzd2itz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3124z00_3239),
								BGl_classzd2numzd2zz__objectz00
								(BGl_setzd2exzd2itz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 94 */
								BgL_objectz00_bglt BgL_auxz00_7300;

								BgL_auxz00_7300 = (BgL_objectz00_bglt) (BgL_new3124z00_3239);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7300, BFALSE);
							}
							BgL_res5366z00_3243 = BgL_new3124z00_3239;
						}
						BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5366z00_3243);
					}
					{	/* Cfa/cinfo.scm 94 */
						BgL_typez00_bglt BgL_arg4836z00_1532;

						BgL_varz00_bglt BgL_arg4837z00_1533;

						BgL_nodez00_bglt BgL_arg4838z00_1534;

						BgL_arg4836z00_1532 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4837z00_1533 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4838z00_1534 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 94 */
							BgL_setzd2exzd2itz00_bglt BgL_res5367z00_3253;

							{	/* Cfa/cinfo.scm 94 */
								BgL_setzd2exzd2itz00_bglt BgL_new3118z00_3244;

								BgL_new3118z00_3244 =
									(BgL_setzd2exzd2itz00_bglt)
									(BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 94 */
									obj_t BgL_loc3114z00_3249;

									BgL_typez00_bglt BgL_type3115z00_3250;

									BgL_varz00_bglt BgL_var3116z00_3251;

									BgL_nodez00_bglt BgL_body3117z00_3252;

									BgL_loc3114z00_3249 = BUNSPEC;
									BgL_type3115z00_3250 = BgL_arg4836z00_1532;
									BgL_var3116z00_3251 = BgL_arg4837z00_1533;
									BgL_body3117z00_3252 = BgL_arg4838z00_1534;
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3118z00_3244))->
											BgL_locz00) = ((obj_t) BgL_loc3114z00_3249), BUNSPEC);
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3118z00_3244))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3115z00_3250), BUNSPEC);
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3118z00_3244))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var3116z00_3251), BUNSPEC);
									((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_new3118z00_3244))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_body3117z00_3252), BUNSPEC);
									BgL_res5367z00_3253 = BgL_new3118z00_3244;
							}} BgL_res5367z00_3253;
					}}
					{	/* Cfa/cinfo.scm 94 */
						long BgL_arg4839z00_1535;

						BgL_arg4839z00_1535 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4839z00_1535);
					}
					{	/* Cfa/cinfo.scm 94 */
						BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_arg4840z00_1536;

						{	/* Cfa/cinfo.scm 94 */
							BgL_approxz00_bglt BgL_arg4841z00_1537;

							BgL_arg4841z00_1537 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 94 */
								BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5369z00_3262;

								{	/* Cfa/cinfo.scm 94 */
									BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4120z00_3257;

									BgL_new4120z00_3257 =
										((BgL_setzd2exzd2itzf2cinfozf2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_setzd2exzd2itzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 94 */
										BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5368z00_3261;

										{	/* Cfa/cinfo.scm 94 */
											BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4130z00_3258;

											BgL_new4130z00_3258 = BgL_new4120z00_3257;
											{	/* Cfa/cinfo.scm 94 */
												BgL_approxz00_bglt BgL_approx4129z00_3260;

												BgL_approx4129z00_3260 = BgL_arg4841z00_1537;
												((((BgL_setzd2exzd2itzf2cinfozf2_bglt)
															CREF(BgL_new4130z00_3258))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4129z00_3260),
													BUNSPEC);
												BgL_res5368z00_3261 = BgL_new4130z00_3258;
										}} BgL_res5368z00_3261;
									}
									BgL_res5369z00_3262 = BgL_new4120z00_3257;
								}
								BgL_arg4840z00_1536 = BgL_res5369z00_3262;
						}}
						{	/* Cfa/cinfo.scm 94 */
							obj_t BgL_auxz00_7320;

							BgL_objectz00_bglt BgL_auxz00_7318;

							BgL_auxz00_7320 = (obj_t) (BgL_arg4840z00_1536);
							BgL_auxz00_7318 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7318, BgL_auxz00_7320);
				}}}
			else
				{	/* Cfa/cinfo.scm 94 */
					BFALSE;
				}
			return
				(BgL_setzd2exzd2itzf2cinfozf2_bglt)
				(BGl_z52thezd2setzd2exzd2itzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _set-ex-it/Cinfo-nil */
	obj_t BGl__setzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5494)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			return (obj_t) (BGl_setzd2exzd2itzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* select/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_selectzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4099z00_125)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4099z00_125,
				BGl_selectzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _select/Cinfo? */
	obj_t BGl__selectzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5491,
		obj_t BgL_obj4099z00_5492)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4099z00_5492,
					BGl_selectzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-select/Cinfo */
	BGL_EXPORTED_DEF BgL_selectzf2cinfozf2_bglt
		BGl_wideningzd2selectzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4074z00_129)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{	/* Cfa/cinfo.scm 92 */
				BgL_selectzf2cinfozf2_bglt BgL_new4075z00_3263;

				BgL_new4075z00_3263 =
					((BgL_selectzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_selectzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 92 */
					BgL_selectzf2cinfozf2_bglt BgL_res5370z00_3267;

					{	/* Cfa/cinfo.scm 92 */
						BgL_selectzf2cinfozf2_bglt BgL_new4088z00_3264;

						BgL_new4088z00_3264 = BgL_new4075z00_3263;
						{	/* Cfa/cinfo.scm 92 */
							BgL_approxz00_bglt BgL_approx4087z00_3266;

							BgL_approx4087z00_3266 = BgL_approx4074z00_129;
							((((BgL_selectzf2cinfozf2_bglt) CREF(BgL_new4088z00_3264))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4087z00_3266), BUNSPEC);
							BgL_res5370z00_3267 = BgL_new4088z00_3264;
					}} BgL_res5370z00_3267;
				}
				return BgL_new4075z00_3263;
			}
		}
	}



/* _widening-select/Cinfo */
	obj_t BGl__wideningzd2selectzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5633,
		obj_t BgL_approx4074z00_5634)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			return
				(obj_t) (BGl_wideningzd2selectzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4074z00_5634)));
		}
	}



/* make-select/Cinfo */
	BGL_EXPORTED_DEF BgL_selectzf2cinfozf2_bglt
		BGl_makezd2selectzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc4078z00_130,
		BgL_typez00_bglt BgL_type4079z00_131, obj_t BgL_sidezd2effectzf34080z21_132,
		obj_t BgL_key4081z00_133, BgL_nodez00_bglt BgL_test4082z00_134,
		obj_t BgL_clauses4083z00_135, BgL_typez00_bglt BgL_itemzd2type4084zd2_136,
		BgL_approxz00_bglt BgL_approx4077z00_137)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{	/* Cfa/cinfo.scm 92 */
				BgL_selectz00_bglt BgL_aux4085z00_3268;

				BgL_aux4085z00_3268 =
					BGl_makezd2selectzd2zzast_nodez00(BgL_loc4078z00_130,
					BgL_type4079z00_131, BgL_sidezd2effectzf34080z21_132,
					BgL_key4081z00_133, BgL_test4082z00_134, BgL_clauses4083z00_135,
					BgL_itemzd2type4084zd2_136);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4085z00_3268),
					BGl_classzd2numzd2zz__objectz00(BGl_selectzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 92 */
					BgL_selectzf2cinfozf2_bglt BgL_arg4844z00_3270;

					{	/* Cfa/cinfo.scm 92 */
						BgL_selectzf2cinfozf2_bglt BgL_res5372z00_3280;

						{	/* Cfa/cinfo.scm 92 */
							BgL_selectzf2cinfozf2_bglt BgL_new4075z00_3275;

							BgL_new4075z00_3275 =
								((BgL_selectzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_selectzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 92 */
								BgL_selectzf2cinfozf2_bglt BgL_res5371z00_3279;

								{	/* Cfa/cinfo.scm 92 */
									BgL_selectzf2cinfozf2_bglt BgL_new4088z00_3276;

									BgL_new4088z00_3276 = BgL_new4075z00_3275;
									{	/* Cfa/cinfo.scm 92 */
										BgL_approxz00_bglt BgL_approx4087z00_3278;

										BgL_approx4087z00_3278 = BgL_approx4077z00_137;
										((((BgL_selectzf2cinfozf2_bglt) CREF(BgL_new4088z00_3276))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4087z00_3278), BUNSPEC);
										BgL_res5371z00_3279 = BgL_new4088z00_3276;
								}} BgL_res5371z00_3279;
							}
							BgL_res5372z00_3280 = BgL_new4075z00_3275;
						}
						BgL_arg4844z00_3270 = BgL_res5372z00_3280;
					}
					{	/* Cfa/cinfo.scm 92 */
						obj_t BgL_auxz00_7342;

						BgL_objectz00_bglt BgL_auxz00_7340;

						BgL_auxz00_7342 = (obj_t) (BgL_arg4844z00_3270);
						BgL_auxz00_7340 = (BgL_objectz00_bglt) (BgL_aux4085z00_3268);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7340, BgL_auxz00_7342);
				}}
				return
					((BgL_selectzf2cinfozf2_bglt)
					(BgL_selectzf2cinfozf2_bglt) (BgL_aux4085z00_3268));
			}
		}
	}



/* _make-select/Cinfo */
	obj_t BGl__makezd2selectzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5635,
		obj_t BgL_loc4078z00_5636, obj_t BgL_type4079z00_5637,
		obj_t BgL_sidezd2effectzf34080z21_5638, obj_t BgL_key4081z00_5639,
		obj_t BgL_test4082z00_5640, obj_t BgL_clauses4083z00_5641,
		obj_t BgL_itemzd2type4084zd2_5642, obj_t BgL_approx4077z00_5643)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			return
				(obj_t) (BGl_makezd2selectzf2Cinfoz20zzcfa_infoz00(BgL_loc4078z00_5636,
					(BgL_typez00_bglt) (BgL_type4079z00_5637),
					BgL_sidezd2effectzf34080z21_5638, BgL_key4081z00_5639,
					(BgL_nodez00_bglt) (BgL_test4082z00_5640), BgL_clauses4083z00_5641,
					(BgL_typez00_bglt) (BgL_itemzd2type4084zd2_5642),
					(BgL_approxz00_bglt) (BgL_approx4077z00_5643)));
		}
	}



/* fill-select/Cinfo! */
	BGL_EXPORTED_DEF BgL_selectzf2cinfozf2_bglt
		BGl_fillzd2selectzf2Cinfoz12z32zzcfa_infoz00(BgL_selectzf2cinfozf2_bglt
		BgL_new4088z00_138, BgL_approxz00_bglt BgL_approx4087z00_139)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{	/* Cfa/cinfo.scm 92 */
				BgL_approxz00_bglt BgL_approx4087z00_6223;

				BgL_approx4087z00_6223 = BgL_approx4087z00_139;
				((((BgL_selectzf2cinfozf2_bglt) CREF(BgL_new4088z00_138))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4087z00_6223), BUNSPEC);
				return BgL_new4088z00_138;
			}
		}
	}



/* _fill-select/Cinfo! */
	obj_t BGl__fillzd2selectzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5644,
		obj_t BgL_new4088z00_5645, obj_t BgL_approx4087z00_5646)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{	/* Cfa/cinfo.scm 92 */
				BgL_selectzf2cinfozf2_bglt BgL_auxz00_7354;

				{	/* Cfa/cinfo.scm 92 */
					BgL_selectzf2cinfozf2_bglt BgL_res5660z00_6227;

					{	/* Cfa/cinfo.scm 92 */
						BgL_selectzf2cinfozf2_bglt BgL_new4088z00_6224;

						BgL_approxz00_bglt BgL_approx4087z00_6225;

						BgL_new4088z00_6224 =
							(BgL_selectzf2cinfozf2_bglt) (BgL_new4088z00_5645);
						BgL_approx4087z00_6225 =
							(BgL_approxz00_bglt) (BgL_approx4087z00_5646);
						{	/* Cfa/cinfo.scm 92 */
							BgL_approxz00_bglt BgL_approx4087z00_6226;

							BgL_approx4087z00_6226 = BgL_approx4087z00_6225;
							((((BgL_selectzf2cinfozf2_bglt) CREF(BgL_new4088z00_6224))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4087z00_6226), BUNSPEC);
							BgL_res5660z00_6227 = BgL_new4088z00_6224;
						}
					}
					BgL_auxz00_7354 = BgL_res5660z00_6227;
				}
				return (obj_t) (BgL_auxz00_7354);
			}
		}
	}



/* %allocate-select/Cinfo */
	BGL_EXPORTED_DEF BgL_selectz00_bglt
		BGl_z52allocatezd2selectzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{	/* Cfa/cinfo.scm 92 */
				BgL_selectz00_bglt BgL_new4091z00_6228;

				BgL_new4091z00_6228 =
					((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_selectz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4091z00_6228),
					BGl_classzd2numzd2zz__objectz00(BGl_selectzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 92 */
					BgL_objectz00_bglt BgL_auxz00_7363;

					BgL_auxz00_7363 = (BgL_objectz00_bglt) (BgL_new4091z00_6228);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7363, BFALSE);
				}
				return BgL_new4091z00_6228;
			}
		}
	}



/* _%allocate-select/Cinfo */
	obj_t BGl__z52allocatezd2selectzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5489)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{	/* Cfa/cinfo.scm 92 */
				BgL_selectz00_bglt BgL_auxz00_7366;

				{	/* Cfa/cinfo.scm 92 */
					BgL_selectz00_bglt BgL_res5661z00_6232;

					{	/* Cfa/cinfo.scm 92 */
						BgL_selectz00_bglt BgL_new4091z00_6230;

						BgL_new4091z00_6230 =
							((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_selectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4091z00_6230),
							BGl_classzd2numzd2zz__objectz00
							(BGl_selectzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 92 */
							BgL_objectz00_bglt BgL_auxz00_7371;

							BgL_auxz00_7371 = (BgL_objectz00_bglt) (BgL_new4091z00_6230);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7371, BFALSE);
						}
						BgL_res5661z00_6232 = BgL_new4091z00_6230;
					}
					BgL_auxz00_7366 = BgL_res5661z00_6232;
				}
				return (obj_t) (BgL_auxz00_7366);
			}
		}
	}



/* select/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_selectzf2cinfozf2_bglt
		BGl_selectzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			if ((BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 92 */
					{	/* Cfa/cinfo.scm 92 */
						BgL_selectz00_bglt BgL_res5373z00_3290;

						{	/* Cfa/cinfo.scm 92 */
							BgL_selectz00_bglt BgL_new3016z00_3286;

							BgL_new3016z00_3286 =
								((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_selectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3016z00_3286),
								BGl_classzd2numzd2zz__objectz00(BGl_selectz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 92 */
								BgL_objectz00_bglt BgL_auxz00_7381;

								BgL_auxz00_7381 = (BgL_objectz00_bglt) (BgL_new3016z00_3286);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7381, BFALSE);
							}
							BgL_res5373z00_3290 = BgL_new3016z00_3286;
						}
						BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5373z00_3290);
					}
					{	/* Cfa/cinfo.scm 92 */
						BgL_typez00_bglt BgL_arg4847z00_1547;

						BgL_nodez00_bglt BgL_arg4848z00_1548;

						BgL_typez00_bglt BgL_arg4849z00_1549;

						BgL_arg4847z00_1547 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4848z00_1548 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4849z00_1549 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo.scm 92 */
							BgL_selectz00_bglt BgL_res5374z00_3306;

							{	/* Cfa/cinfo.scm 92 */
								BgL_selectz00_bglt BgL_new3007z00_3291;

								BgL_new3007z00_3291 =
									(BgL_selectz00_bglt)
									(BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 92 */
									obj_t BgL_loc3000z00_3299;

									BgL_typez00_bglt BgL_type3001z00_3300;

									obj_t BgL_sidezd2effectzf33002z21_3301;

									obj_t BgL_key3003z00_3302;

									BgL_nodez00_bglt BgL_test3004z00_3303;

									obj_t BgL_clauses3005z00_3304;

									BgL_typez00_bglt BgL_itemzd2type3006zd2_3305;

									BgL_loc3000z00_3299 = BUNSPEC;
									BgL_type3001z00_3300 = BgL_arg4847z00_1547;
									BgL_sidezd2effectzf33002z21_3301 = BUNSPEC;
									BgL_key3003z00_3302 = BUNSPEC;
									BgL_test3004z00_3303 = BgL_arg4848z00_1548;
									BgL_clauses3005z00_3304 = BUNSPEC;
									BgL_itemzd2type3006zd2_3305 = BgL_arg4849z00_1549;
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_locz00) = ((obj_t) BgL_loc3000z00_3299), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3001z00_3300), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33002z21_3301), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_keyz00) = ((obj_t) BgL_key3003z00_3302), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_testz00) =
										((BgL_nodez00_bglt) BgL_test3004z00_3303), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_clausesz00) =
										((obj_t) BgL_clauses3005z00_3304), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_3291))->
											BgL_itemzd2typezd2) =
										((BgL_typez00_bglt) BgL_itemzd2type3006zd2_3305), BUNSPEC);
									BgL_res5374z00_3306 = BgL_new3007z00_3291;
							}} BgL_res5374z00_3306;
					}}
					{	/* Cfa/cinfo.scm 92 */
						long BgL_arg4850z00_1550;

						BgL_arg4850z00_1550 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_selectzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4850z00_1550);
					}
					{	/* Cfa/cinfo.scm 92 */
						BgL_selectzf2cinfozf2_bglt BgL_arg4851z00_1551;

						{	/* Cfa/cinfo.scm 92 */
							BgL_approxz00_bglt BgL_arg4852z00_1552;

							BgL_arg4852z00_1552 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 92 */
								BgL_selectzf2cinfozf2_bglt BgL_res5376z00_3315;

								{	/* Cfa/cinfo.scm 92 */
									BgL_selectzf2cinfozf2_bglt BgL_new4075z00_3310;

									BgL_new4075z00_3310 =
										((BgL_selectzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_selectzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 92 */
										BgL_selectzf2cinfozf2_bglt BgL_res5375z00_3314;

										{	/* Cfa/cinfo.scm 92 */
											BgL_selectzf2cinfozf2_bglt BgL_new4088z00_3311;

											BgL_new4088z00_3311 = BgL_new4075z00_3310;
											{	/* Cfa/cinfo.scm 92 */
												BgL_approxz00_bglt BgL_approx4087z00_3313;

												BgL_approx4087z00_3313 = BgL_arg4852z00_1552;
												((((BgL_selectzf2cinfozf2_bglt)
															CREF(BgL_new4088z00_3311))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4087z00_3313),
													BUNSPEC);
												BgL_res5375z00_3314 = BgL_new4088z00_3311;
										}} BgL_res5375z00_3314;
									}
									BgL_res5376z00_3315 = BgL_new4075z00_3310;
								}
								BgL_arg4851z00_1551 = BgL_res5376z00_3315;
						}}
						{	/* Cfa/cinfo.scm 92 */
							obj_t BgL_auxz00_7404;

							BgL_objectz00_bglt BgL_auxz00_7402;

							BgL_auxz00_7404 = (obj_t) (BgL_arg4851z00_1551);
							BgL_auxz00_7402 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7402, BgL_auxz00_7404);
				}}}
			else
				{	/* Cfa/cinfo.scm 92 */
					BFALSE;
				}
			return
				(BgL_selectzf2cinfozf2_bglt)
				(BGl_z52thezd2selectzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _select/Cinfo-nil */
	obj_t BGl__selectzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5490)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			return (obj_t) (BGl_selectzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* fail/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_failzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4059z00_141)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4059z00_141,
				BGl_failzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _fail/Cinfo? */
	obj_t BGl__failzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5487,
		obj_t BgL_obj4059z00_5488)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4059z00_5488,
					BGl_failzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-fail/Cinfo */
	BGL_EXPORTED_DEF BgL_failzf2cinfozf2_bglt
		BGl_wideningzd2failzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx4037z00_145)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{	/* Cfa/cinfo.scm 90 */
				BgL_failzf2cinfozf2_bglt BgL_new4038z00_3316;

				BgL_new4038z00_3316 =
					((BgL_failzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_failzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 90 */
					BgL_failzf2cinfozf2_bglt BgL_res5377z00_3320;

					{	/* Cfa/cinfo.scm 90 */
						BgL_failzf2cinfozf2_bglt BgL_new4049z00_3317;

						BgL_new4049z00_3317 = BgL_new4038z00_3316;
						{	/* Cfa/cinfo.scm 90 */
							BgL_approxz00_bglt BgL_approx4048z00_3319;

							BgL_approx4048z00_3319 = BgL_approx4037z00_145;
							((((BgL_failzf2cinfozf2_bglt) CREF(BgL_new4049z00_3317))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4048z00_3319), BUNSPEC);
							BgL_res5377z00_3320 = BgL_new4049z00_3317;
					}} BgL_res5377z00_3320;
				}
				return BgL_new4038z00_3316;
			}
		}
	}



/* _widening-fail/Cinfo */
	obj_t BGl__wideningzd2failzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5647,
		obj_t BgL_approx4037z00_5648)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			return
				(obj_t) (BGl_wideningzd2failzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx4037z00_5648)));
		}
	}



/* make-fail/Cinfo */
	BGL_EXPORTED_DEF BgL_failzf2cinfozf2_bglt
		BGl_makezd2failzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc4041z00_146,
		BgL_typez00_bglt BgL_type4042z00_147, BgL_nodez00_bglt BgL_proc4043z00_148,
		BgL_nodez00_bglt BgL_msg4044z00_149, BgL_nodez00_bglt BgL_obj4045z00_150,
		BgL_approxz00_bglt BgL_approx4040z00_151)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{	/* Cfa/cinfo.scm 90 */
				BgL_failz00_bglt BgL_aux4046z00_3321;

				BgL_aux4046z00_3321 =
					BGl_makezd2failzd2zzast_nodez00(BgL_loc4041z00_146,
					BgL_type4042z00_147, BgL_proc4043z00_148, BgL_msg4044z00_149,
					BgL_obj4045z00_150);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4046z00_3321),
					BGl_classzd2numzd2zz__objectz00(BGl_failzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 90 */
					BgL_failzf2cinfozf2_bglt BgL_arg4854z00_3323;

					{	/* Cfa/cinfo.scm 90 */
						BgL_failzf2cinfozf2_bglt BgL_res5379z00_3333;

						{	/* Cfa/cinfo.scm 90 */
							BgL_failzf2cinfozf2_bglt BgL_new4038z00_3328;

							BgL_new4038z00_3328 =
								((BgL_failzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_failzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 90 */
								BgL_failzf2cinfozf2_bglt BgL_res5378z00_3332;

								{	/* Cfa/cinfo.scm 90 */
									BgL_failzf2cinfozf2_bglt BgL_new4049z00_3329;

									BgL_new4049z00_3329 = BgL_new4038z00_3328;
									{	/* Cfa/cinfo.scm 90 */
										BgL_approxz00_bglt BgL_approx4048z00_3331;

										BgL_approx4048z00_3331 = BgL_approx4040z00_151;
										((((BgL_failzf2cinfozf2_bglt) CREF(BgL_new4049z00_3329))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4048z00_3331), BUNSPEC);
										BgL_res5378z00_3332 = BgL_new4049z00_3329;
								}} BgL_res5378z00_3332;
							}
							BgL_res5379z00_3333 = BgL_new4038z00_3328;
						}
						BgL_arg4854z00_3323 = BgL_res5379z00_3333;
					}
					{	/* Cfa/cinfo.scm 90 */
						obj_t BgL_auxz00_7426;

						BgL_objectz00_bglt BgL_auxz00_7424;

						BgL_auxz00_7426 = (obj_t) (BgL_arg4854z00_3323);
						BgL_auxz00_7424 = (BgL_objectz00_bglt) (BgL_aux4046z00_3321);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7424, BgL_auxz00_7426);
				}}
				return
					((BgL_failzf2cinfozf2_bglt)
					(BgL_failzf2cinfozf2_bglt) (BgL_aux4046z00_3321));
			}
		}
	}



/* _make-fail/Cinfo */
	obj_t BGl__makezd2failzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5649,
		obj_t BgL_loc4041z00_5650, obj_t BgL_type4042z00_5651,
		obj_t BgL_proc4043z00_5652, obj_t BgL_msg4044z00_5653,
		obj_t BgL_obj4045z00_5654, obj_t BgL_approx4040z00_5655)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			return
				(obj_t) (BGl_makezd2failzf2Cinfoz20zzcfa_infoz00(BgL_loc4041z00_5650,
					(BgL_typez00_bglt) (BgL_type4042z00_5651),
					(BgL_nodez00_bglt) (BgL_proc4043z00_5652),
					(BgL_nodez00_bglt) (BgL_msg4044z00_5653),
					(BgL_nodez00_bglt) (BgL_obj4045z00_5654),
					(BgL_approxz00_bglt) (BgL_approx4040z00_5655)));
		}
	}



/* fill-fail/Cinfo! */
	BGL_EXPORTED_DEF BgL_failzf2cinfozf2_bglt
		BGl_fillzd2failzf2Cinfoz12z32zzcfa_infoz00(BgL_failzf2cinfozf2_bglt
		BgL_new4049z00_152, BgL_approxz00_bglt BgL_approx4048z00_153)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{	/* Cfa/cinfo.scm 90 */
				BgL_approxz00_bglt BgL_approx4048z00_6234;

				BgL_approx4048z00_6234 = BgL_approx4048z00_153;
				((((BgL_failzf2cinfozf2_bglt) CREF(BgL_new4049z00_152))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4048z00_6234), BUNSPEC);
				return BgL_new4049z00_152;
			}
		}
	}



/* _fill-fail/Cinfo! */
	obj_t BGl__fillzd2failzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5656,
		obj_t BgL_new4049z00_5657, obj_t BgL_approx4048z00_5658)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{	/* Cfa/cinfo.scm 90 */
				BgL_failzf2cinfozf2_bglt BgL_auxz00_7439;

				{	/* Cfa/cinfo.scm 90 */
					BgL_failzf2cinfozf2_bglt BgL_res5662z00_6238;

					{	/* Cfa/cinfo.scm 90 */
						BgL_failzf2cinfozf2_bglt BgL_new4049z00_6235;

						BgL_approxz00_bglt BgL_approx4048z00_6236;

						BgL_new4049z00_6235 =
							(BgL_failzf2cinfozf2_bglt) (BgL_new4049z00_5657);
						BgL_approx4048z00_6236 =
							(BgL_approxz00_bglt) (BgL_approx4048z00_5658);
						{	/* Cfa/cinfo.scm 90 */
							BgL_approxz00_bglt BgL_approx4048z00_6237;

							BgL_approx4048z00_6237 = BgL_approx4048z00_6236;
							((((BgL_failzf2cinfozf2_bglt) CREF(BgL_new4049z00_6235))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4048z00_6237), BUNSPEC);
							BgL_res5662z00_6238 = BgL_new4049z00_6235;
						}
					}
					BgL_auxz00_7439 = BgL_res5662z00_6238;
				}
				return (obj_t) (BgL_auxz00_7439);
			}
		}
	}



/* %allocate-fail/Cinfo */
	BGL_EXPORTED_DEF BgL_failz00_bglt
		BGl_z52allocatezd2failzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{	/* Cfa/cinfo.scm 90 */
				BgL_failz00_bglt BgL_new4052z00_6239;

				BgL_new4052z00_6239 =
					((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_failz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new4052z00_6239),
					BGl_classzd2numzd2zz__objectz00(BGl_failzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 90 */
					BgL_objectz00_bglt BgL_auxz00_7448;

					BgL_auxz00_7448 = (BgL_objectz00_bglt) (BgL_new4052z00_6239);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7448, BFALSE);
				}
				return BgL_new4052z00_6239;
			}
		}
	}



/* _%allocate-fail/Cinfo */
	obj_t BGl__z52allocatezd2failzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5485)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{	/* Cfa/cinfo.scm 90 */
				BgL_failz00_bglt BgL_auxz00_7451;

				{	/* Cfa/cinfo.scm 90 */
					BgL_failz00_bglt BgL_res5663z00_6243;

					{	/* Cfa/cinfo.scm 90 */
						BgL_failz00_bglt BgL_new4052z00_6241;

						BgL_new4052z00_6241 =
							((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_failz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4052z00_6241),
							BGl_classzd2numzd2zz__objectz00
							(BGl_failzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 90 */
							BgL_objectz00_bglt BgL_auxz00_7456;

							BgL_auxz00_7456 = (BgL_objectz00_bglt) (BgL_new4052z00_6241);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7456, BFALSE);
						}
						BgL_res5663z00_6243 = BgL_new4052z00_6241;
					}
					BgL_auxz00_7451 = BgL_res5663z00_6243;
				}
				return (obj_t) (BgL_auxz00_7451);
			}
		}
	}



/* fail/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_failzf2cinfozf2_bglt
		BGl_failzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			if ((BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 90 */
					{	/* Cfa/cinfo.scm 90 */
						BgL_failz00_bglt BgL_res5380z00_3343;

						{	/* Cfa/cinfo.scm 90 */
							BgL_failz00_bglt BgL_new2976z00_3339;

							BgL_new2976z00_3339 =
								((BgL_failz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_failz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2976z00_3339),
								BGl_classzd2numzd2zz__objectz00(BGl_failz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 90 */
								BgL_objectz00_bglt BgL_auxz00_7466;

								BgL_auxz00_7466 = (BgL_objectz00_bglt) (BgL_new2976z00_3339);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7466, BFALSE);
							}
							BgL_res5380z00_3343 = BgL_new2976z00_3339;
						}
						BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5380z00_3343);
					}
					{	/* Cfa/cinfo.scm 90 */
						BgL_typez00_bglt BgL_arg4857z00_1562;

						BgL_nodez00_bglt BgL_arg4858z00_1563;

						BgL_nodez00_bglt BgL_arg4859z00_1564;

						BgL_nodez00_bglt BgL_arg4860z00_1565;

						BgL_arg4857z00_1562 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4858z00_1563 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4859z00_1564 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4860z00_1565 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 90 */
							BgL_failz00_bglt BgL_res5381z00_3355;

							{	/* Cfa/cinfo.scm 90 */
								BgL_failz00_bglt BgL_new2969z00_3344;

								BgL_new2969z00_3344 =
									(BgL_failz00_bglt)
									(BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 90 */
									obj_t BgL_loc2964z00_3350;

									BgL_typez00_bglt BgL_type2965z00_3351;

									BgL_nodez00_bglt BgL_proc2966z00_3352;

									BgL_nodez00_bglt BgL_msg2967z00_3353;

									BgL_nodez00_bglt BgL_obj2968z00_3354;

									BgL_loc2964z00_3350 = BUNSPEC;
									BgL_type2965z00_3351 = BgL_arg4857z00_1562;
									BgL_proc2966z00_3352 = BgL_arg4858z00_1563;
									BgL_msg2967z00_3353 = BgL_arg4859z00_1564;
									BgL_obj2968z00_3354 = BgL_arg4860z00_1565;
									((((BgL_failz00_bglt) CREF(BgL_new2969z00_3344))->
											BgL_locz00) = ((obj_t) BgL_loc2964z00_3350), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new2969z00_3344))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2965z00_3351), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new2969z00_3344))->
											BgL_procz00) =
										((BgL_nodez00_bglt) BgL_proc2966z00_3352), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new2969z00_3344))->
											BgL_msgz00) =
										((BgL_nodez00_bglt) BgL_msg2967z00_3353), BUNSPEC);
									((((BgL_failz00_bglt) CREF(BgL_new2969z00_3344))->
											BgL_objz00) =
										((BgL_nodez00_bglt) BgL_obj2968z00_3354), BUNSPEC);
									BgL_res5381z00_3355 = BgL_new2969z00_3344;
							}} BgL_res5381z00_3355;
					}}
					{	/* Cfa/cinfo.scm 90 */
						long BgL_arg4861z00_1566;

						BgL_arg4861z00_1566 =
							BGl_classzd2numzd2zz__objectz00(BGl_failzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4861z00_1566);
					}
					{	/* Cfa/cinfo.scm 90 */
						BgL_failzf2cinfozf2_bglt BgL_arg4862z00_1567;

						{	/* Cfa/cinfo.scm 90 */
							BgL_approxz00_bglt BgL_arg4863z00_1568;

							BgL_arg4863z00_1568 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 90 */
								BgL_failzf2cinfozf2_bglt BgL_res5383z00_3364;

								{	/* Cfa/cinfo.scm 90 */
									BgL_failzf2cinfozf2_bglt BgL_new4038z00_3359;

									BgL_new4038z00_3359 =
										((BgL_failzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_failzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 90 */
										BgL_failzf2cinfozf2_bglt BgL_res5382z00_3363;

										{	/* Cfa/cinfo.scm 90 */
											BgL_failzf2cinfozf2_bglt BgL_new4049z00_3360;

											BgL_new4049z00_3360 = BgL_new4038z00_3359;
											{	/* Cfa/cinfo.scm 90 */
												BgL_approxz00_bglt BgL_approx4048z00_3362;

												BgL_approx4048z00_3362 = BgL_arg4863z00_1568;
												((((BgL_failzf2cinfozf2_bglt)
															CREF(BgL_new4049z00_3360))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4048z00_3362),
													BUNSPEC);
												BgL_res5382z00_3363 = BgL_new4049z00_3360;
										}} BgL_res5382z00_3363;
									}
									BgL_res5383z00_3364 = BgL_new4038z00_3359;
								}
								BgL_arg4862z00_1567 = BgL_res5383z00_3364;
						}}
						{	/* Cfa/cinfo.scm 90 */
							obj_t BgL_auxz00_7488;

							BgL_objectz00_bglt BgL_auxz00_7486;

							BgL_auxz00_7488 = (obj_t) (BgL_arg4862z00_1567);
							BgL_auxz00_7486 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7486, BgL_auxz00_7488);
				}}}
			else
				{	/* Cfa/cinfo.scm 90 */
					BFALSE;
				}
			return
				(BgL_failzf2cinfozf2_bglt)
				(BGl_z52thezd2failzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _fail/Cinfo-nil */
	obj_t BGl__failzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5486)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			return (obj_t) (BGl_failzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* conditional/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_conditionalzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj4016z00_155)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4016z00_155,
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _conditional/Cinfo? */
	obj_t BGl__conditionalzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5483,
		obj_t BgL_obj4016z00_5484)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4016z00_5484,
					BGl_conditionalzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-conditional/Cinfo */
	BGL_EXPORTED_DEF BgL_conditionalzf2cinfozf2_bglt
		BGl_wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3992z00_159)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{	/* Cfa/cinfo.scm 88 */
				BgL_conditionalzf2cinfozf2_bglt BgL_new3993z00_3365;

				BgL_new3993z00_3365 =
					((BgL_conditionalzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_conditionalzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 88 */
					BgL_conditionalzf2cinfozf2_bglt BgL_res5384z00_3369;

					{	/* Cfa/cinfo.scm 88 */
						BgL_conditionalzf2cinfozf2_bglt BgL_new4006z00_3366;

						BgL_new4006z00_3366 = BgL_new3993z00_3365;
						{	/* Cfa/cinfo.scm 88 */
							BgL_approxz00_bglt BgL_approx4005z00_3368;

							BgL_approx4005z00_3368 = BgL_approx3992z00_159;
							((((BgL_conditionalzf2cinfozf2_bglt) CREF(BgL_new4006z00_3366))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4005z00_3368), BUNSPEC);
							BgL_res5384z00_3369 = BgL_new4006z00_3366;
					}} BgL_res5384z00_3369;
				}
				return BgL_new3993z00_3365;
			}
		}
	}



/* _widening-conditional/Cinfo */
	obj_t BGl__wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00(obj_t
		BgL_envz00_5659, obj_t BgL_approx3992z00_5660)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			return
				(obj_t) (BGl_wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3992z00_5660)));
		}
	}



/* make-conditional/Cinfo */
	BGL_EXPORTED_DEF BgL_conditionalzf2cinfozf2_bglt
		BGl_makezd2conditionalzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc3996z00_160,
		BgL_typez00_bglt BgL_type3997z00_161, obj_t BgL_sidezd2effectzf33998z21_162,
		obj_t BgL_key3999z00_163, BgL_nodez00_bglt BgL_test4000z00_164,
		BgL_nodez00_bglt BgL_true4001z00_165, BgL_nodez00_bglt BgL_false4002z00_166,
		BgL_approxz00_bglt BgL_approx3995z00_167)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{	/* Cfa/cinfo.scm 88 */
				BgL_conditionalz00_bglt BgL_aux4003z00_3370;

				BgL_aux4003z00_3370 =
					BGl_makezd2conditionalzd2zzast_nodez00(BgL_loc3996z00_160,
					BgL_type3997z00_161, BgL_sidezd2effectzf33998z21_162,
					BgL_key3999z00_163, BgL_test4000z00_164, BgL_true4001z00_165,
					BgL_false4002z00_166);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux4003z00_3370),
					BGl_classzd2numzd2zz__objectz00
					(BGl_conditionalzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 88 */
					BgL_conditionalzf2cinfozf2_bglt BgL_arg4865z00_3372;

					{	/* Cfa/cinfo.scm 88 */
						BgL_conditionalzf2cinfozf2_bglt BgL_res5386z00_3382;

						{	/* Cfa/cinfo.scm 88 */
							BgL_conditionalzf2cinfozf2_bglt BgL_new3993z00_3377;

							BgL_new3993z00_3377 =
								((BgL_conditionalzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_conditionalzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 88 */
								BgL_conditionalzf2cinfozf2_bglt BgL_res5385z00_3381;

								{	/* Cfa/cinfo.scm 88 */
									BgL_conditionalzf2cinfozf2_bglt BgL_new4006z00_3378;

									BgL_new4006z00_3378 = BgL_new3993z00_3377;
									{	/* Cfa/cinfo.scm 88 */
										BgL_approxz00_bglt BgL_approx4005z00_3380;

										BgL_approx4005z00_3380 = BgL_approx3995z00_167;
										((((BgL_conditionalzf2cinfozf2_bglt)
													CREF(BgL_new4006z00_3378))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx4005z00_3380), BUNSPEC);
										BgL_res5385z00_3381 = BgL_new4006z00_3378;
								}} BgL_res5385z00_3381;
							}
							BgL_res5386z00_3382 = BgL_new3993z00_3377;
						}
						BgL_arg4865z00_3372 = BgL_res5386z00_3382;
					}
					{	/* Cfa/cinfo.scm 88 */
						obj_t BgL_auxz00_7510;

						BgL_objectz00_bglt BgL_auxz00_7508;

						BgL_auxz00_7510 = (obj_t) (BgL_arg4865z00_3372);
						BgL_auxz00_7508 = (BgL_objectz00_bglt) (BgL_aux4003z00_3370);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7508, BgL_auxz00_7510);
				}}
				return
					((BgL_conditionalzf2cinfozf2_bglt)
					(BgL_conditionalzf2cinfozf2_bglt) (BgL_aux4003z00_3370));
			}
		}
	}



/* _make-conditional/Cinfo */
	obj_t BGl__makezd2conditionalzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5661,
		obj_t BgL_loc3996z00_5662, obj_t BgL_type3997z00_5663,
		obj_t BgL_sidezd2effectzf33998z21_5664, obj_t BgL_key3999z00_5665,
		obj_t BgL_test4000z00_5666, obj_t BgL_true4001z00_5667,
		obj_t BgL_false4002z00_5668, obj_t BgL_approx3995z00_5669)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			return
				(obj_t) (BGl_makezd2conditionalzf2Cinfoz20zzcfa_infoz00
				(BgL_loc3996z00_5662, (BgL_typez00_bglt) (BgL_type3997z00_5663),
					BgL_sidezd2effectzf33998z21_5664, BgL_key3999z00_5665,
					(BgL_nodez00_bglt) (BgL_test4000z00_5666),
					(BgL_nodez00_bglt) (BgL_true4001z00_5667),
					(BgL_nodez00_bglt) (BgL_false4002z00_5668),
					(BgL_approxz00_bglt) (BgL_approx3995z00_5669)));
		}
	}



/* fill-conditional/Cinfo! */
	BGL_EXPORTED_DEF BgL_conditionalzf2cinfozf2_bglt
		BGl_fillzd2conditionalzf2Cinfoz12z32zzcfa_infoz00
		(BgL_conditionalzf2cinfozf2_bglt BgL_new4006z00_168,
		BgL_approxz00_bglt BgL_approx4005z00_169)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{	/* Cfa/cinfo.scm 88 */
				BgL_approxz00_bglt BgL_approx4005z00_6245;

				BgL_approx4005z00_6245 = BgL_approx4005z00_169;
				((((BgL_conditionalzf2cinfozf2_bglt) CREF(BgL_new4006z00_168))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx4005z00_6245), BUNSPEC);
				return BgL_new4006z00_168;
			}
		}
	}



/* _fill-conditional/Cinfo! */
	obj_t BGl__fillzd2conditionalzf2Cinfoz12z32zzcfa_infoz00(obj_t
		BgL_envz00_5670, obj_t BgL_new4006z00_5671, obj_t BgL_approx4005z00_5672)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{	/* Cfa/cinfo.scm 88 */
				BgL_conditionalzf2cinfozf2_bglt BgL_auxz00_7523;

				{	/* Cfa/cinfo.scm 88 */
					BgL_conditionalzf2cinfozf2_bglt BgL_res5664z00_6249;

					{	/* Cfa/cinfo.scm 88 */
						BgL_conditionalzf2cinfozf2_bglt BgL_new4006z00_6246;

						BgL_approxz00_bglt BgL_approx4005z00_6247;

						BgL_new4006z00_6246 =
							(BgL_conditionalzf2cinfozf2_bglt) (BgL_new4006z00_5671);
						BgL_approx4005z00_6247 =
							(BgL_approxz00_bglt) (BgL_approx4005z00_5672);
						{	/* Cfa/cinfo.scm 88 */
							BgL_approxz00_bglt BgL_approx4005z00_6248;

							BgL_approx4005z00_6248 = BgL_approx4005z00_6247;
							((((BgL_conditionalzf2cinfozf2_bglt) CREF(BgL_new4006z00_6246))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx4005z00_6248), BUNSPEC);
							BgL_res5664z00_6249 = BgL_new4006z00_6246;
						}
					}
					BgL_auxz00_7523 = BgL_res5664z00_6249;
				}
				return (obj_t) (BgL_auxz00_7523);
			}
		}
	}



/* %allocate-conditional/Cinfo */
	BGL_EXPORTED_DEF BgL_conditionalz00_bglt
		BGl_z52allocatezd2conditionalzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{	/* Cfa/cinfo.scm 88 */
				BgL_conditionalz00_bglt BgL_new4009z00_6250;

				BgL_new4009z00_6250 =
					((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_conditionalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4009z00_6250),
					BGl_classzd2numzd2zz__objectz00
					(BGl_conditionalzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 88 */
					BgL_objectz00_bglt BgL_auxz00_7532;

					BgL_auxz00_7532 = (BgL_objectz00_bglt) (BgL_new4009z00_6250);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7532, BFALSE);
				}
				return BgL_new4009z00_6250;
			}
		}
	}



/* _%allocate-conditional/Cinfo */
	obj_t BGl__z52allocatezd2conditionalzf2Cinfoz72zzcfa_infoz00(obj_t
		BgL_envz00_5481)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{	/* Cfa/cinfo.scm 88 */
				BgL_conditionalz00_bglt BgL_auxz00_7535;

				{	/* Cfa/cinfo.scm 88 */
					BgL_conditionalz00_bglt BgL_res5665z00_6254;

					{	/* Cfa/cinfo.scm 88 */
						BgL_conditionalz00_bglt BgL_new4009z00_6252;

						BgL_new4009z00_6252 =
							((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_conditionalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4009z00_6252),
							BGl_classzd2numzd2zz__objectz00
							(BGl_conditionalzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 88 */
							BgL_objectz00_bglt BgL_auxz00_7540;

							BgL_auxz00_7540 = (BgL_objectz00_bglt) (BgL_new4009z00_6252);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7540, BFALSE);
						}
						BgL_res5665z00_6254 = BgL_new4009z00_6252;
					}
					BgL_auxz00_7535 = BgL_res5665z00_6254;
				}
				return (obj_t) (BgL_auxz00_7535);
			}
		}
	}



/* conditional/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_conditionalzf2cinfozf2_bglt
		BGl_conditionalzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			if ((BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 88 */
					{	/* Cfa/cinfo.scm 88 */
						BgL_conditionalz00_bglt BgL_res5387z00_3392;

						{	/* Cfa/cinfo.scm 88 */
							BgL_conditionalz00_bglt BgL_new2944z00_3388;

							BgL_new2944z00_3388 =
								((BgL_conditionalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_conditionalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2944z00_3388),
								BGl_classzd2numzd2zz__objectz00
								(BGl_conditionalz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 88 */
								BgL_objectz00_bglt BgL_auxz00_7550;

								BgL_auxz00_7550 = (BgL_objectz00_bglt) (BgL_new2944z00_3388);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7550, BFALSE);
							}
							BgL_res5387z00_3392 = BgL_new2944z00_3388;
						}
						BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5387z00_3392);
					}
					{	/* Cfa/cinfo.scm 88 */
						BgL_typez00_bglt BgL_arg4868z00_1578;

						BgL_nodez00_bglt BgL_arg4869z00_1579;

						BgL_nodez00_bglt BgL_arg4870z00_1580;

						BgL_nodez00_bglt BgL_arg4871z00_1581;

						BgL_arg4868z00_1578 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4869z00_1579 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4870z00_1580 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4871z00_1581 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 88 */
							BgL_conditionalz00_bglt BgL_res5388z00_3408;

							{	/* Cfa/cinfo.scm 88 */
								BgL_conditionalz00_bglt BgL_new2935z00_3393;

								BgL_new2935z00_3393 =
									(BgL_conditionalz00_bglt)
									(BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 88 */
									obj_t BgL_loc2928z00_3401;

									BgL_typez00_bglt BgL_type2929z00_3402;

									obj_t BgL_sidezd2effectzf32930z21_3403;

									obj_t BgL_key2931z00_3404;

									BgL_nodez00_bglt BgL_test2932z00_3405;

									BgL_nodez00_bglt BgL_true2933z00_3406;

									BgL_nodez00_bglt BgL_false2934z00_3407;

									BgL_loc2928z00_3401 = BUNSPEC;
									BgL_type2929z00_3402 = BgL_arg4868z00_1578;
									BgL_sidezd2effectzf32930z21_3403 = BUNSPEC;
									BgL_key2931z00_3404 = BUNSPEC;
									BgL_test2932z00_3405 = BgL_arg4869z00_1579;
									BgL_true2933z00_3406 = BgL_arg4870z00_1580;
									BgL_false2934z00_3407 = BgL_arg4871z00_1581;
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_locz00) = ((obj_t) BgL_loc2928z00_3401), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2929z00_3402), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32930z21_3403), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_keyz00) = ((obj_t) BgL_key2931z00_3404), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_testz00) =
										((BgL_nodez00_bglt) BgL_test2932z00_3405), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_truez00) =
										((BgL_nodez00_bglt) BgL_true2933z00_3406), BUNSPEC);
									((((BgL_conditionalz00_bglt) CREF(BgL_new2935z00_3393))->
											BgL_falsez00) =
										((BgL_nodez00_bglt) BgL_false2934z00_3407), BUNSPEC);
									BgL_res5388z00_3408 = BgL_new2935z00_3393;
							}} BgL_res5388z00_3408;
					}}
					{	/* Cfa/cinfo.scm 88 */
						long BgL_arg4872z00_1582;

						BgL_arg4872z00_1582 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_conditionalzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4872z00_1582);
					}
					{	/* Cfa/cinfo.scm 88 */
						BgL_conditionalzf2cinfozf2_bglt BgL_arg4873z00_1583;

						{	/* Cfa/cinfo.scm 88 */
							BgL_approxz00_bglt BgL_arg4874z00_1584;

							BgL_arg4874z00_1584 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 88 */
								BgL_conditionalzf2cinfozf2_bglt BgL_res5390z00_3417;

								{	/* Cfa/cinfo.scm 88 */
									BgL_conditionalzf2cinfozf2_bglt BgL_new3993z00_3412;

									BgL_new3993z00_3412 =
										((BgL_conditionalzf2cinfozf2_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_conditionalzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 88 */
										BgL_conditionalzf2cinfozf2_bglt BgL_res5389z00_3416;

										{	/* Cfa/cinfo.scm 88 */
											BgL_conditionalzf2cinfozf2_bglt BgL_new4006z00_3413;

											BgL_new4006z00_3413 = BgL_new3993z00_3412;
											{	/* Cfa/cinfo.scm 88 */
												BgL_approxz00_bglt BgL_approx4005z00_3415;

												BgL_approx4005z00_3415 = BgL_arg4874z00_1584;
												((((BgL_conditionalzf2cinfozf2_bglt)
															CREF(BgL_new4006z00_3413))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx4005z00_3415),
													BUNSPEC);
												BgL_res5389z00_3416 = BgL_new4006z00_3413;
										}} BgL_res5389z00_3416;
									}
									BgL_res5390z00_3417 = BgL_new3993z00_3412;
								}
								BgL_arg4873z00_1583 = BgL_res5390z00_3417;
						}}
						{	/* Cfa/cinfo.scm 88 */
							obj_t BgL_auxz00_7574;

							BgL_objectz00_bglt BgL_auxz00_7572;

							BgL_auxz00_7574 = (obj_t) (BgL_arg4873z00_1583);
							BgL_auxz00_7572 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7572, BgL_auxz00_7574);
				}}}
			else
				{	/* Cfa/cinfo.scm 88 */
					BFALSE;
				}
			return
				(BgL_conditionalzf2cinfozf2_bglt)
				(BGl_z52thezd2conditionalzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _conditional/Cinfo-nil */
	obj_t BGl__conditionalzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5482)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			return (obj_t) (BGl_conditionalzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* setq/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_setqzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3978z00_171)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3978z00_171,
				BGl_setqzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _setq/Cinfo? */
	obj_t BGl__setqzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5479,
		obj_t BgL_obj3978z00_5480)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3978z00_5480,
					BGl_setqzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-setq/Cinfo */
	BGL_EXPORTED_DEF BgL_setqzf2cinfozf2_bglt
		BGl_wideningzd2setqzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3957z00_175)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{	/* Cfa/cinfo.scm 86 */
				BgL_setqzf2cinfozf2_bglt BgL_new3958z00_3418;

				BgL_new3958z00_3418 =
					((BgL_setqzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_setqzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 86 */
					BgL_setqzf2cinfozf2_bglt BgL_res5391z00_3422;

					{	/* Cfa/cinfo.scm 86 */
						BgL_setqzf2cinfozf2_bglt BgL_new3968z00_3419;

						BgL_new3968z00_3419 = BgL_new3958z00_3418;
						{	/* Cfa/cinfo.scm 86 */
							BgL_approxz00_bglt BgL_approx3967z00_3421;

							BgL_approx3967z00_3421 = BgL_approx3957z00_175;
							((((BgL_setqzf2cinfozf2_bglt) CREF(BgL_new3968z00_3419))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3967z00_3421), BUNSPEC);
							BgL_res5391z00_3422 = BgL_new3968z00_3419;
					}} BgL_res5391z00_3422;
				}
				return BgL_new3958z00_3418;
			}
		}
	}



/* _widening-setq/Cinfo */
	obj_t BGl__wideningzd2setqzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5673,
		obj_t BgL_approx3957z00_5674)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			return
				(obj_t) (BGl_wideningzd2setqzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3957z00_5674)));
		}
	}



/* make-setq/Cinfo */
	BGL_EXPORTED_DEF BgL_setqzf2cinfozf2_bglt
		BGl_makezd2setqzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc3961z00_176,
		BgL_typez00_bglt BgL_type3962z00_177, BgL_varz00_bglt BgL_var3963z00_178,
		BgL_nodez00_bglt BgL_value3964z00_179,
		BgL_approxz00_bglt BgL_approx3960z00_180)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{	/* Cfa/cinfo.scm 86 */
				BgL_setqz00_bglt BgL_aux3965z00_3423;

				BgL_aux3965z00_3423 =
					BGl_makezd2setqzd2zzast_nodez00(BgL_loc3961z00_176,
					BgL_type3962z00_177, BgL_var3963z00_178, BgL_value3964z00_179);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3965z00_3423),
					BGl_classzd2numzd2zz__objectz00(BGl_setqzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 86 */
					BgL_setqzf2cinfozf2_bglt BgL_arg4876z00_3425;

					{	/* Cfa/cinfo.scm 86 */
						BgL_setqzf2cinfozf2_bglt BgL_res5393z00_3435;

						{	/* Cfa/cinfo.scm 86 */
							BgL_setqzf2cinfozf2_bglt BgL_new3958z00_3430;

							BgL_new3958z00_3430 =
								((BgL_setqzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setqzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 86 */
								BgL_setqzf2cinfozf2_bglt BgL_res5392z00_3434;

								{	/* Cfa/cinfo.scm 86 */
									BgL_setqzf2cinfozf2_bglt BgL_new3968z00_3431;

									BgL_new3968z00_3431 = BgL_new3958z00_3430;
									{	/* Cfa/cinfo.scm 86 */
										BgL_approxz00_bglt BgL_approx3967z00_3433;

										BgL_approx3967z00_3433 = BgL_approx3960z00_180;
										((((BgL_setqzf2cinfozf2_bglt) CREF(BgL_new3968z00_3431))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3967z00_3433), BUNSPEC);
										BgL_res5392z00_3434 = BgL_new3968z00_3431;
								}} BgL_res5392z00_3434;
							}
							BgL_res5393z00_3435 = BgL_new3958z00_3430;
						}
						BgL_arg4876z00_3425 = BgL_res5393z00_3435;
					}
					{	/* Cfa/cinfo.scm 86 */
						obj_t BgL_auxz00_7596;

						BgL_objectz00_bglt BgL_auxz00_7594;

						BgL_auxz00_7596 = (obj_t) (BgL_arg4876z00_3425);
						BgL_auxz00_7594 = (BgL_objectz00_bglt) (BgL_aux3965z00_3423);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7594, BgL_auxz00_7596);
				}}
				return
					((BgL_setqzf2cinfozf2_bglt)
					(BgL_setqzf2cinfozf2_bglt) (BgL_aux3965z00_3423));
			}
		}
	}



/* _make-setq/Cinfo */
	obj_t BGl__makezd2setqzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5675,
		obj_t BgL_loc3961z00_5676, obj_t BgL_type3962z00_5677,
		obj_t BgL_var3963z00_5678, obj_t BgL_value3964z00_5679,
		obj_t BgL_approx3960z00_5680)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			return
				(obj_t) (BGl_makezd2setqzf2Cinfoz20zzcfa_infoz00(BgL_loc3961z00_5676,
					(BgL_typez00_bglt) (BgL_type3962z00_5677),
					(BgL_varz00_bglt) (BgL_var3963z00_5678),
					(BgL_nodez00_bglt) (BgL_value3964z00_5679),
					(BgL_approxz00_bglt) (BgL_approx3960z00_5680)));
		}
	}



/* fill-setq/Cinfo! */
	BGL_EXPORTED_DEF BgL_setqzf2cinfozf2_bglt
		BGl_fillzd2setqzf2Cinfoz12z32zzcfa_infoz00(BgL_setqzf2cinfozf2_bglt
		BgL_new3968z00_181, BgL_approxz00_bglt BgL_approx3967z00_182)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{	/* Cfa/cinfo.scm 86 */
				BgL_approxz00_bglt BgL_approx3967z00_6256;

				BgL_approx3967z00_6256 = BgL_approx3967z00_182;
				((((BgL_setqzf2cinfozf2_bglt) CREF(BgL_new3968z00_181))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3967z00_6256), BUNSPEC);
				return BgL_new3968z00_181;
			}
		}
	}



/* _fill-setq/Cinfo! */
	obj_t BGl__fillzd2setqzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5681,
		obj_t BgL_new3968z00_5682, obj_t BgL_approx3967z00_5683)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{	/* Cfa/cinfo.scm 86 */
				BgL_setqzf2cinfozf2_bglt BgL_auxz00_7608;

				{	/* Cfa/cinfo.scm 86 */
					BgL_setqzf2cinfozf2_bglt BgL_res5666z00_6260;

					{	/* Cfa/cinfo.scm 86 */
						BgL_setqzf2cinfozf2_bglt BgL_new3968z00_6257;

						BgL_approxz00_bglt BgL_approx3967z00_6258;

						BgL_new3968z00_6257 =
							(BgL_setqzf2cinfozf2_bglt) (BgL_new3968z00_5682);
						BgL_approx3967z00_6258 =
							(BgL_approxz00_bglt) (BgL_approx3967z00_5683);
						{	/* Cfa/cinfo.scm 86 */
							BgL_approxz00_bglt BgL_approx3967z00_6259;

							BgL_approx3967z00_6259 = BgL_approx3967z00_6258;
							((((BgL_setqzf2cinfozf2_bglt) CREF(BgL_new3968z00_6257))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3967z00_6259), BUNSPEC);
							BgL_res5666z00_6260 = BgL_new3968z00_6257;
						}
					}
					BgL_auxz00_7608 = BgL_res5666z00_6260;
				}
				return (obj_t) (BgL_auxz00_7608);
			}
		}
	}



/* %allocate-setq/Cinfo */
	BGL_EXPORTED_DEF BgL_setqz00_bglt
		BGl_z52allocatezd2setqzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{	/* Cfa/cinfo.scm 86 */
				BgL_setqz00_bglt BgL_new3971z00_6261;

				BgL_new3971z00_6261 =
					((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_setqz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3971z00_6261),
					BGl_classzd2numzd2zz__objectz00(BGl_setqzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 86 */
					BgL_objectz00_bglt BgL_auxz00_7617;

					BgL_auxz00_7617 = (BgL_objectz00_bglt) (BgL_new3971z00_6261);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7617, BFALSE);
				}
				return BgL_new3971z00_6261;
			}
		}
	}



/* _%allocate-setq/Cinfo */
	obj_t BGl__z52allocatezd2setqzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5477)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{	/* Cfa/cinfo.scm 86 */
				BgL_setqz00_bglt BgL_auxz00_7620;

				{	/* Cfa/cinfo.scm 86 */
					BgL_setqz00_bglt BgL_res5667z00_6265;

					{	/* Cfa/cinfo.scm 86 */
						BgL_setqz00_bglt BgL_new3971z00_6263;

						BgL_new3971z00_6263 =
							((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_setqz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3971z00_6263),
							BGl_classzd2numzd2zz__objectz00
							(BGl_setqzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 86 */
							BgL_objectz00_bglt BgL_auxz00_7625;

							BgL_auxz00_7625 = (BgL_objectz00_bglt) (BgL_new3971z00_6263);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7625, BFALSE);
						}
						BgL_res5667z00_6265 = BgL_new3971z00_6263;
					}
					BgL_auxz00_7620 = BgL_res5667z00_6265;
				}
				return (obj_t) (BgL_auxz00_7620);
			}
		}
	}



/* setq/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_setqzf2cinfozf2_bglt
		BGl_setqzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			if ((BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 86 */
					{	/* Cfa/cinfo.scm 86 */
						BgL_setqz00_bglt BgL_res5394z00_3445;

						{	/* Cfa/cinfo.scm 86 */
							BgL_setqz00_bglt BgL_new2900z00_3441;

							BgL_new2900z00_3441 =
								((BgL_setqz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_setqz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2900z00_3441),
								BGl_classzd2numzd2zz__objectz00(BGl_setqz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 86 */
								BgL_objectz00_bglt BgL_auxz00_7635;

								BgL_auxz00_7635 = (BgL_objectz00_bglt) (BgL_new2900z00_3441);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7635, BFALSE);
							}
							BgL_res5394z00_3445 = BgL_new2900z00_3441;
						}
						BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5394z00_3445);
					}
					{	/* Cfa/cinfo.scm 86 */
						BgL_typez00_bglt BgL_arg4879z00_1594;

						BgL_varz00_bglt BgL_arg4880z00_1595;

						BgL_nodez00_bglt BgL_arg4881z00_1596;

						BgL_arg4879z00_1594 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4880z00_1595 = BGl_varzd2nilzd2zzast_nodez00();
						BgL_arg4881z00_1596 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 86 */
							BgL_setqz00_bglt BgL_res5395z00_3455;

							{	/* Cfa/cinfo.scm 86 */
								BgL_setqz00_bglt BgL_new2894z00_3446;

								BgL_new2894z00_3446 =
									(BgL_setqz00_bglt)
									(BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 86 */
									obj_t BgL_loc2890z00_3451;

									BgL_typez00_bglt BgL_type2891z00_3452;

									BgL_varz00_bglt BgL_var2892z00_3453;

									BgL_nodez00_bglt BgL_value2893z00_3454;

									BgL_loc2890z00_3451 = BUNSPEC;
									BgL_type2891z00_3452 = BgL_arg4879z00_1594;
									BgL_var2892z00_3453 = BgL_arg4880z00_1595;
									BgL_value2893z00_3454 = BgL_arg4881z00_1596;
									((((BgL_setqz00_bglt) CREF(BgL_new2894z00_3446))->
											BgL_locz00) = ((obj_t) BgL_loc2890z00_3451), BUNSPEC);
									((((BgL_setqz00_bglt) CREF(BgL_new2894z00_3446))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2891z00_3452), BUNSPEC);
									((((BgL_setqz00_bglt) CREF(BgL_new2894z00_3446))->
											BgL_varz00) =
										((BgL_varz00_bglt) BgL_var2892z00_3453), BUNSPEC);
									((((BgL_setqz00_bglt) CREF(BgL_new2894z00_3446))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_value2893z00_3454), BUNSPEC);
									BgL_res5395z00_3455 = BgL_new2894z00_3446;
							}} BgL_res5395z00_3455;
					}}
					{	/* Cfa/cinfo.scm 86 */
						long BgL_arg4882z00_1597;

						BgL_arg4882z00_1597 =
							BGl_classzd2numzd2zz__objectz00(BGl_setqzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4882z00_1597);
					}
					{	/* Cfa/cinfo.scm 86 */
						BgL_setqzf2cinfozf2_bglt BgL_arg4883z00_1598;

						{	/* Cfa/cinfo.scm 86 */
							BgL_approxz00_bglt BgL_arg4884z00_1599;

							BgL_arg4884z00_1599 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 86 */
								BgL_setqzf2cinfozf2_bglt BgL_res5397z00_3464;

								{	/* Cfa/cinfo.scm 86 */
									BgL_setqzf2cinfozf2_bglt BgL_new3958z00_3459;

									BgL_new3958z00_3459 =
										((BgL_setqzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_setqzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 86 */
										BgL_setqzf2cinfozf2_bglt BgL_res5396z00_3463;

										{	/* Cfa/cinfo.scm 86 */
											BgL_setqzf2cinfozf2_bglt BgL_new3968z00_3460;

											BgL_new3968z00_3460 = BgL_new3958z00_3459;
											{	/* Cfa/cinfo.scm 86 */
												BgL_approxz00_bglt BgL_approx3967z00_3462;

												BgL_approx3967z00_3462 = BgL_arg4884z00_1599;
												((((BgL_setqzf2cinfozf2_bglt)
															CREF(BgL_new3968z00_3460))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3967z00_3462),
													BUNSPEC);
												BgL_res5396z00_3463 = BgL_new3968z00_3460;
										}} BgL_res5396z00_3463;
									}
									BgL_res5397z00_3464 = BgL_new3958z00_3459;
								}
								BgL_arg4883z00_1598 = BgL_res5397z00_3464;
						}}
						{	/* Cfa/cinfo.scm 86 */
							obj_t BgL_auxz00_7655;

							BgL_objectz00_bglt BgL_auxz00_7653;

							BgL_auxz00_7655 = (obj_t) (BgL_arg4883z00_1598);
							BgL_auxz00_7653 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7653, BgL_auxz00_7655);
				}}}
			else
				{	/* Cfa/cinfo.scm 86 */
					BFALSE;
				}
			return
				(BgL_setqzf2cinfozf2_bglt)
				(BGl_z52thezd2setqzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _setq/Cinfo-nil */
	obj_t BGl__setqzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5478)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			return (obj_t) (BGl_setqzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* funcall/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_funcallzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3935z00_184)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3935z00_184,
				BGl_funcallzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _funcall/Cinfo? */
	obj_t BGl__funcallzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5475,
		obj_t BgL_obj3935z00_5476)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3935z00_5476,
					BGl_funcallzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-funcall/Cinfo */
	BGL_EXPORTED_DEF BgL_funcallzf2cinfozf2_bglt
		BGl_wideningzd2funcallzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3901z00_188, BgL_approxz00_bglt BgL_vazd2approx3902zd2_189,
		bool_t BgL_arityzd2errorzd2noticedzf33903zf3_190,
		bool_t BgL_typezd2errorzd2noticedzf33904zf3_191)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{	/* Cfa/cinfo.scm 81 */
				BgL_funcallzf2cinfozf2_bglt BgL_new3905z00_3465;

				BgL_new3905z00_3465 =
					((BgL_funcallzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_funcallzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 81 */
					BgL_funcallzf2cinfozf2_bglt BgL_res5398z00_3475;

					{	/* Cfa/cinfo.scm 81 */
						BgL_funcallzf2cinfozf2_bglt BgL_new3922z00_3466;

						BgL_new3922z00_3466 = BgL_new3905z00_3465;
						{	/* Cfa/cinfo.scm 81 */
							BgL_approxz00_bglt BgL_approx3918z00_3471;

							BgL_approxz00_bglt BgL_vazd2approx3919zd2_3472;

							bool_t BgL_arityzd2errorzd2noticedzf33920zf3_3473;

							bool_t BgL_typezd2errorzd2noticedzf33921zf3_3474;

							BgL_approx3918z00_3471 = BgL_approx3901z00_188;
							BgL_vazd2approx3919zd2_3472 = BgL_vazd2approx3902zd2_189;
							BgL_arityzd2errorzd2noticedzf33920zf3_3473 =
								BgL_arityzd2errorzd2noticedzf33903zf3_190;
							BgL_typezd2errorzd2noticedzf33921zf3_3474 =
								BgL_typezd2errorzd2noticedzf33904zf3_191;
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_3466))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3918z00_3471), BUNSPEC);
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_3466))->
									BgL_vazd2approxzd2) =
								((BgL_approxz00_bglt) BgL_vazd2approx3919zd2_3472), BUNSPEC);
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_3466))->
									BgL_arityzd2errorzd2noticedzf3zf3) =
								((bool_t) BgL_arityzd2errorzd2noticedzf33920zf3_3473), BUNSPEC);
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_3466))->
									BgL_typezd2errorzd2noticedzf3zf3) =
								((bool_t) BgL_typezd2errorzd2noticedzf33921zf3_3474), BUNSPEC);
							BgL_res5398z00_3475 = BgL_new3922z00_3466;
					}} BgL_res5398z00_3475;
				}
				return BgL_new3905z00_3465;
			}
		}
	}



/* _widening-funcall/Cinfo */
	obj_t BGl__wideningzd2funcallzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5684,
		obj_t BgL_approx3901z00_5685, obj_t BgL_vazd2approx3902zd2_5686,
		obj_t BgL_arityzd2errorzd2noticedzf33903zf3_5687,
		obj_t BgL_typezd2errorzd2noticedzf33904zf3_5688)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			return
				(obj_t) (BGl_wideningzd2funcallzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3901z00_5685),
					(BgL_approxz00_bglt) (BgL_vazd2approx3902zd2_5686),
					CBOOL(BgL_arityzd2errorzd2noticedzf33903zf3_5687),
					CBOOL(BgL_typezd2errorzd2noticedzf33904zf3_5688)));
		}
	}



/* make-funcall/Cinfo */
	BGL_EXPORTED_DEF BgL_funcallzf2cinfozf2_bglt
		BGl_makezd2funcallzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc3911z00_192,
		BgL_typez00_bglt BgL_type3912z00_193, BgL_nodez00_bglt BgL_fun3913z00_194,
		obj_t BgL_args3914z00_195, obj_t BgL_strength3915z00_196,
		BgL_approxz00_bglt BgL_approx3907z00_197,
		BgL_approxz00_bglt BgL_vazd2approx3908zd2_198,
		bool_t BgL_arityzd2errorzd2noticedzf33909zf3_199,
		bool_t BgL_typezd2errorzd2noticedzf33910zf3_200)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{	/* Cfa/cinfo.scm 81 */
				BgL_funcallz00_bglt BgL_aux3916z00_3476;

				BgL_aux3916z00_3476 =
					BGl_makezd2funcallzd2zzast_nodez00(BgL_loc3911z00_192,
					BgL_type3912z00_193, BgL_fun3913z00_194, BgL_args3914z00_195,
					BgL_strength3915z00_196);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3916z00_3476),
					BGl_classzd2numzd2zz__objectz00(BGl_funcallzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 81 */
					BgL_funcallzf2cinfozf2_bglt BgL_arg4886z00_3478;

					{	/* Cfa/cinfo.scm 81 */
						BgL_funcallzf2cinfozf2_bglt BgL_res5400z00_3497;

						{	/* Cfa/cinfo.scm 81 */
							BgL_funcallzf2cinfozf2_bglt BgL_new3905z00_3486;

							BgL_new3905z00_3486 =
								((BgL_funcallzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_funcallzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 81 */
								BgL_funcallzf2cinfozf2_bglt BgL_res5399z00_3496;

								{	/* Cfa/cinfo.scm 81 */
									BgL_funcallzf2cinfozf2_bglt BgL_new3922z00_3487;

									BgL_new3922z00_3487 = BgL_new3905z00_3486;
									{	/* Cfa/cinfo.scm 81 */
										BgL_approxz00_bglt BgL_approx3918z00_3492;

										BgL_approxz00_bglt BgL_vazd2approx3919zd2_3493;

										bool_t BgL_arityzd2errorzd2noticedzf33920zf3_3494;

										bool_t BgL_typezd2errorzd2noticedzf33921zf3_3495;

										BgL_approx3918z00_3492 = BgL_approx3907z00_197;
										BgL_vazd2approx3919zd2_3493 = BgL_vazd2approx3908zd2_198;
										BgL_arityzd2errorzd2noticedzf33920zf3_3494 =
											BgL_arityzd2errorzd2noticedzf33909zf3_199;
										BgL_typezd2errorzd2noticedzf33921zf3_3495 =
											BgL_typezd2errorzd2noticedzf33910zf3_200;
										((((BgL_funcallzf2cinfozf2_bglt)
													CREF(BgL_new3922z00_3487))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3918z00_3492), BUNSPEC);
										((((BgL_funcallzf2cinfozf2_bglt)
													CREF(BgL_new3922z00_3487))->BgL_vazd2approxzd2) =
											((BgL_approxz00_bglt) BgL_vazd2approx3919zd2_3493),
											BUNSPEC);
										((((BgL_funcallzf2cinfozf2_bglt)
													CREF(BgL_new3922z00_3487))->
												BgL_arityzd2errorzd2noticedzf3zf3) =
											((bool_t) BgL_arityzd2errorzd2noticedzf33920zf3_3494),
											BUNSPEC);
										((((BgL_funcallzf2cinfozf2_bglt)
													CREF(BgL_new3922z00_3487))->
												BgL_typezd2errorzd2noticedzf3zf3) =
											((bool_t) BgL_typezd2errorzd2noticedzf33921zf3_3495),
											BUNSPEC);
										BgL_res5399z00_3496 = BgL_new3922z00_3487;
								}} BgL_res5399z00_3496;
							}
							BgL_res5400z00_3497 = BgL_new3905z00_3486;
						}
						BgL_arg4886z00_3478 = BgL_res5400z00_3497;
					}
					{	/* Cfa/cinfo.scm 81 */
						obj_t BgL_auxz00_7686;

						BgL_objectz00_bglt BgL_auxz00_7684;

						BgL_auxz00_7686 = (obj_t) (BgL_arg4886z00_3478);
						BgL_auxz00_7684 = (BgL_objectz00_bglt) (BgL_aux3916z00_3476);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7684, BgL_auxz00_7686);
				}}
				return
					((BgL_funcallzf2cinfozf2_bglt)
					(BgL_funcallzf2cinfozf2_bglt) (BgL_aux3916z00_3476));
			}
		}
	}



/* _make-funcall/Cinfo */
	obj_t BGl__makezd2funcallzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5689,
		obj_t BgL_loc3911z00_5690, obj_t BgL_type3912z00_5691,
		obj_t BgL_fun3913z00_5692, obj_t BgL_args3914z00_5693,
		obj_t BgL_strength3915z00_5694, obj_t BgL_approx3907z00_5695,
		obj_t BgL_vazd2approx3908zd2_5696,
		obj_t BgL_arityzd2errorzd2noticedzf33909zf3_5697,
		obj_t BgL_typezd2errorzd2noticedzf33910zf3_5698)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			return
				(obj_t) (BGl_makezd2funcallzf2Cinfoz20zzcfa_infoz00(BgL_loc3911z00_5690,
					(BgL_typez00_bglt) (BgL_type3912z00_5691),
					(BgL_nodez00_bglt) (BgL_fun3913z00_5692), BgL_args3914z00_5693,
					BgL_strength3915z00_5694,
					(BgL_approxz00_bglt) (BgL_approx3907z00_5695),
					(BgL_approxz00_bglt) (BgL_vazd2approx3908zd2_5696),
					CBOOL(BgL_arityzd2errorzd2noticedzf33909zf3_5697),
					CBOOL(BgL_typezd2errorzd2noticedzf33910zf3_5698)));
		}
	}



/* fill-funcall/Cinfo! */
	BGL_EXPORTED_DEF BgL_funcallzf2cinfozf2_bglt
		BGl_fillzd2funcallzf2Cinfoz12z32zzcfa_infoz00(BgL_funcallzf2cinfozf2_bglt
		BgL_new3922z00_201, BgL_approxz00_bglt BgL_approx3918z00_202,
		BgL_approxz00_bglt BgL_vazd2approx3919zd2_203,
		bool_t BgL_arityzd2errorzd2noticedzf33920zf3_204,
		bool_t BgL_typezd2errorzd2noticedzf33921zf3_205)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{	/* Cfa/cinfo.scm 81 */
				BgL_approxz00_bglt BgL_approx3918z00_6267;

				BgL_approxz00_bglt BgL_vazd2approx3919zd2_6268;

				bool_t BgL_arityzd2errorzd2noticedzf33920zf3_6269;

				bool_t BgL_typezd2errorzd2noticedzf33921zf3_6270;

				BgL_approx3918z00_6267 = BgL_approx3918z00_202;
				BgL_vazd2approx3919zd2_6268 = BgL_vazd2approx3919zd2_203;
				BgL_arityzd2errorzd2noticedzf33920zf3_6269 =
					BgL_arityzd2errorzd2noticedzf33920zf3_204;
				BgL_typezd2errorzd2noticedzf33921zf3_6270 =
					BgL_typezd2errorzd2noticedzf33921zf3_205;
				((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_201))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3918z00_6267), BUNSPEC);
				((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_201))->
						BgL_vazd2approxzd2) =
					((BgL_approxz00_bglt) BgL_vazd2approx3919zd2_6268), BUNSPEC);
				((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_201))->
						BgL_arityzd2errorzd2noticedzf3zf3) =
					((bool_t) BgL_arityzd2errorzd2noticedzf33920zf3_6269), BUNSPEC);
				((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_201))->
						BgL_typezd2errorzd2noticedzf3zf3) =
					((bool_t) BgL_typezd2errorzd2noticedzf33921zf3_6270), BUNSPEC);
				return BgL_new3922z00_201;
			}
		}
	}



/* _fill-funcall/Cinfo! */
	obj_t BGl__fillzd2funcallzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5699,
		obj_t BgL_new3922z00_5700, obj_t BgL_approx3918z00_5701,
		obj_t BgL_vazd2approx3919zd2_5702,
		obj_t BgL_arityzd2errorzd2noticedzf33920zf3_5703,
		obj_t BgL_typezd2errorzd2noticedzf33921zf3_5704)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{	/* Cfa/cinfo.scm 81 */
				BgL_funcallzf2cinfozf2_bglt BgL_auxz00_7703;

				{	/* Cfa/cinfo.scm 81 */
					BgL_funcallzf2cinfozf2_bglt BgL_res5668z00_6280;

					{	/* Cfa/cinfo.scm 81 */
						BgL_funcallzf2cinfozf2_bglt BgL_new3922z00_6271;

						BgL_approxz00_bglt BgL_approx3918z00_6272;

						BgL_approxz00_bglt BgL_vazd2approx3919zd2_6273;

						bool_t BgL_arityzd2errorzd2noticedzf33920zf3_6274;

						bool_t BgL_typezd2errorzd2noticedzf33921zf3_6275;

						BgL_new3922z00_6271 =
							(BgL_funcallzf2cinfozf2_bglt) (BgL_new3922z00_5700);
						BgL_approx3918z00_6272 =
							(BgL_approxz00_bglt) (BgL_approx3918z00_5701);
						BgL_vazd2approx3919zd2_6273 =
							(BgL_approxz00_bglt) (BgL_vazd2approx3919zd2_5702);
						BgL_arityzd2errorzd2noticedzf33920zf3_6274 =
							CBOOL(BgL_arityzd2errorzd2noticedzf33920zf3_5703);
						BgL_typezd2errorzd2noticedzf33921zf3_6275 =
							CBOOL(BgL_typezd2errorzd2noticedzf33921zf3_5704);
						{	/* Cfa/cinfo.scm 81 */
							BgL_approxz00_bglt BgL_approx3918z00_6276;

							BgL_approxz00_bglt BgL_vazd2approx3919zd2_6277;

							bool_t BgL_arityzd2errorzd2noticedzf33920zf3_6278;

							bool_t BgL_typezd2errorzd2noticedzf33921zf3_6279;

							BgL_approx3918z00_6276 = BgL_approx3918z00_6272;
							BgL_vazd2approx3919zd2_6277 = BgL_vazd2approx3919zd2_6273;
							BgL_arityzd2errorzd2noticedzf33920zf3_6278 =
								BgL_arityzd2errorzd2noticedzf33920zf3_6274;
							BgL_typezd2errorzd2noticedzf33921zf3_6279 =
								BgL_typezd2errorzd2noticedzf33921zf3_6275;
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_6271))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3918z00_6276), BUNSPEC);
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_6271))->
									BgL_vazd2approxzd2) =
								((BgL_approxz00_bglt) BgL_vazd2approx3919zd2_6277), BUNSPEC);
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_6271))->
									BgL_arityzd2errorzd2noticedzf3zf3) =
								((bool_t) BgL_arityzd2errorzd2noticedzf33920zf3_6278), BUNSPEC);
							((((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_new3922z00_6271))->
									BgL_typezd2errorzd2noticedzf3zf3) =
								((bool_t) BgL_typezd2errorzd2noticedzf33921zf3_6279), BUNSPEC);
							BgL_res5668z00_6280 = BgL_new3922z00_6271;
						}
					}
					BgL_auxz00_7703 = BgL_res5668z00_6280;
				}
				return (obj_t) (BgL_auxz00_7703);
			}
		}
	}



/* %allocate-funcall/Cinfo */
	BGL_EXPORTED_DEF BgL_funcallz00_bglt
		BGl_z52allocatezd2funcallzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{	/* Cfa/cinfo.scm 81 */
				BgL_funcallz00_bglt BgL_new3928z00_6281;

				BgL_new3928z00_6281 =
					((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_funcallz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3928z00_6281),
					BGl_classzd2numzd2zz__objectz00(BGl_funcallzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 81 */
					BgL_objectz00_bglt BgL_auxz00_7718;

					BgL_auxz00_7718 = (BgL_objectz00_bglt) (BgL_new3928z00_6281);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7718, BFALSE);
				}
				return BgL_new3928z00_6281;
			}
		}
	}



/* _%allocate-funcall/Cinfo */
	obj_t BGl__z52allocatezd2funcallzf2Cinfoz72zzcfa_infoz00(obj_t
		BgL_envz00_5473)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{	/* Cfa/cinfo.scm 81 */
				BgL_funcallz00_bglt BgL_auxz00_7721;

				{	/* Cfa/cinfo.scm 81 */
					BgL_funcallz00_bglt BgL_res5669z00_6285;

					{	/* Cfa/cinfo.scm 81 */
						BgL_funcallz00_bglt BgL_new3928z00_6283;

						BgL_new3928z00_6283 =
							((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_funcallz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3928z00_6283),
							BGl_classzd2numzd2zz__objectz00
							(BGl_funcallzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 81 */
							BgL_objectz00_bglt BgL_auxz00_7726;

							BgL_auxz00_7726 = (BgL_objectz00_bglt) (BgL_new3928z00_6283);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7726, BFALSE);
						}
						BgL_res5669z00_6285 = BgL_new3928z00_6283;
					}
					BgL_auxz00_7721 = BgL_res5669z00_6285;
				}
				return (obj_t) (BgL_auxz00_7721);
			}
		}
	}



/* funcall/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_funcallzf2cinfozf2_bglt
		BGl_funcallzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			if ((BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 81 */
					{	/* Cfa/cinfo.scm 81 */
						BgL_funcallz00_bglt BgL_res5401z00_3510;

						{	/* Cfa/cinfo.scm 81 */
							BgL_funcallz00_bglt BgL_new2334z00_3506;

							BgL_new2334z00_3506 =
								((BgL_funcallz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_funcallz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2334z00_3506),
								BGl_classzd2numzd2zz__objectz00(BGl_funcallz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 81 */
								BgL_objectz00_bglt BgL_auxz00_7736;

								BgL_auxz00_7736 = (BgL_objectz00_bglt) (BgL_new2334z00_3506);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7736, BFALSE);
							}
							BgL_res5401z00_3510 = BgL_new2334z00_3506;
						}
						BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5401z00_3510);
					}
					{	/* Cfa/cinfo.scm 81 */
						BgL_typez00_bglt BgL_arg4889z00_1612;

						BgL_nodez00_bglt BgL_arg4890z00_1613;

						obj_t BgL_arg4891z00_1614;

						BgL_arg4889z00_1612 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4890z00_1613 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4891z00_1614 = CNST_TABLE_REF(((long) 29));
						{	/* Cfa/cinfo.scm 81 */
							BgL_funcallz00_bglt BgL_res5402z00_3522;

							{	/* Cfa/cinfo.scm 81 */
								BgL_funcallz00_bglt BgL_new2327z00_3511;

								BgL_new2327z00_3511 =
									(BgL_funcallz00_bglt)
									(BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 81 */
									obj_t BgL_loc2322z00_3517;

									BgL_typez00_bglt BgL_type2323z00_3518;

									BgL_nodez00_bglt BgL_fun2324z00_3519;

									obj_t BgL_args2325z00_3520;

									obj_t BgL_strength2326z00_3521;

									BgL_loc2322z00_3517 = BUNSPEC;
									BgL_type2323z00_3518 = BgL_arg4889z00_1612;
									BgL_fun2324z00_3519 = BgL_arg4890z00_1613;
									BgL_args2325z00_3520 = BUNSPEC;
									BgL_strength2326z00_3521 = BgL_arg4891z00_1614;
									((((BgL_funcallz00_bglt) CREF(BgL_new2327z00_3511))->
											BgL_locz00) = ((obj_t) BgL_loc2322z00_3517), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2327z00_3511))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2323z00_3518), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2327z00_3511))->
											BgL_funz00) =
										((BgL_nodez00_bglt) BgL_fun2324z00_3519), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2327z00_3511))->
											BgL_argsz00) = ((obj_t) BgL_args2325z00_3520), BUNSPEC);
									((((BgL_funcallz00_bglt) CREF(BgL_new2327z00_3511))->
											BgL_strengthz00) =
										((obj_t) BgL_strength2326z00_3521), BUNSPEC);
									BgL_res5402z00_3522 = BgL_new2327z00_3511;
							}} BgL_res5402z00_3522;
					}}
					{	/* Cfa/cinfo.scm 81 */
						long BgL_arg4892z00_1615;

						BgL_arg4892z00_1615 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_funcallzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4892z00_1615);
					}
					{	/* Cfa/cinfo.scm 81 */
						BgL_funcallzf2cinfozf2_bglt BgL_arg4893z00_1616;

						{	/* Cfa/cinfo.scm 81 */
							BgL_approxz00_bglt BgL_arg4894z00_1617;

							BgL_approxz00_bglt BgL_arg4895z00_1618;

							BgL_arg4894z00_1617 = BGl_approxzd2nilzd2zzcfa_infoz00();
							BgL_arg4895z00_1618 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 81 */
								BgL_funcallzf2cinfozf2_bglt BgL_res5404z00_3540;

								{	/* Cfa/cinfo.scm 81 */
									BgL_funcallzf2cinfozf2_bglt BgL_new3905z00_3529;

									BgL_new3905z00_3529 =
										((BgL_funcallzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_funcallzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 81 */
										BgL_funcallzf2cinfozf2_bglt BgL_res5403z00_3539;

										{	/* Cfa/cinfo.scm 81 */
											BgL_funcallzf2cinfozf2_bglt BgL_new3922z00_3530;

											BgL_new3922z00_3530 = BgL_new3905z00_3529;
											{	/* Cfa/cinfo.scm 81 */
												BgL_approxz00_bglt BgL_approx3918z00_3535;

												BgL_approxz00_bglt BgL_vazd2approx3919zd2_3536;

												bool_t BgL_arityzd2errorzd2noticedzf33920zf3_3537;

												bool_t BgL_typezd2errorzd2noticedzf33921zf3_3538;

												BgL_approx3918z00_3535 = BgL_arg4894z00_1617;
												BgL_vazd2approx3919zd2_3536 = BgL_arg4895z00_1618;
												BgL_arityzd2errorzd2noticedzf33920zf3_3537 =
													((bool_t) 0);
												BgL_typezd2errorzd2noticedzf33921zf3_3538 =
													((bool_t) 0);
												((((BgL_funcallzf2cinfozf2_bglt)
															CREF(BgL_new3922z00_3530))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3918z00_3535),
													BUNSPEC);
												((((BgL_funcallzf2cinfozf2_bglt)
															CREF(BgL_new3922z00_3530))->BgL_vazd2approxzd2) =
													((BgL_approxz00_bglt) BgL_vazd2approx3919zd2_3536),
													BUNSPEC);
												((((BgL_funcallzf2cinfozf2_bglt)
															CREF(BgL_new3922z00_3530))->
														BgL_arityzd2errorzd2noticedzf3zf3) =
													((bool_t) BgL_arityzd2errorzd2noticedzf33920zf3_3537),
													BUNSPEC);
												((((BgL_funcallzf2cinfozf2_bglt)
															CREF(BgL_new3922z00_3530))->
														BgL_typezd2errorzd2noticedzf3zf3) =
													((bool_t) BgL_typezd2errorzd2noticedzf33921zf3_3538),
													BUNSPEC);
												BgL_res5403z00_3539 = BgL_new3922z00_3530;
										}} BgL_res5403z00_3539;
									}
									BgL_res5404z00_3540 = BgL_new3905z00_3529;
								}
								BgL_arg4893z00_1616 = BgL_res5404z00_3540;
						}}
						{	/* Cfa/cinfo.scm 81 */
							obj_t BgL_auxz00_7761;

							BgL_objectz00_bglt BgL_auxz00_7759;

							BgL_auxz00_7761 = (obj_t) (BgL_arg4893z00_1616);
							BgL_auxz00_7759 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7759, BgL_auxz00_7761);
				}}}
			else
				{	/* Cfa/cinfo.scm 81 */
					BFALSE;
				}
			return
				(BgL_funcallzf2cinfozf2_bglt)
				(BGl_z52thezd2funcallzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _funcall/Cinfo-nil */
	obj_t BGl__funcallzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5474)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			return (obj_t) (BGl_funcallzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* app-ly/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_appzd2lyzf2Cinfozf3zd3zzcfa_infoz00(obj_t
		BgL_obj3889z00_214)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3889z00_214,
				BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00);
		}
	}



/* _app-ly/Cinfo? */
	obj_t BGl__appzd2lyzf2Cinfozf3zd3zzcfa_infoz00(obj_t BgL_envz00_5471,
		obj_t BgL_obj3889z00_5472)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3889z00_5472,
					BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00));
		}
	}



/* widening-app-ly/Cinfo */
	BGL_EXPORTED_DEF BgL_appzd2lyzf2cinfoz20_bglt
		BGl_wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3868z00_218)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{	/* Cfa/cinfo.scm 79 */
				BgL_appzd2lyzf2cinfoz20_bglt BgL_new3869z00_3541;

				BgL_new3869z00_3541 =
					((BgL_appzd2lyzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_appzd2lyzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo.scm 79 */
					BgL_appzd2lyzf2cinfoz20_bglt BgL_res5405z00_3545;

					{	/* Cfa/cinfo.scm 79 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_new3879z00_3542;

						BgL_new3879z00_3542 = BgL_new3869z00_3541;
						{	/* Cfa/cinfo.scm 79 */
							BgL_approxz00_bglt BgL_approx3878z00_3544;

							BgL_approx3878z00_3544 = BgL_approx3868z00_218;
							((((BgL_appzd2lyzf2cinfoz20_bglt) CREF(BgL_new3879z00_3542))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3878z00_3544), BUNSPEC);
							BgL_res5405z00_3545 = BgL_new3879z00_3542;
					}} BgL_res5405z00_3545;
				}
				return BgL_new3869z00_3541;
			}
		}
	}



/* _widening-app-ly/Cinfo */
	obj_t BGl__wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5705,
		obj_t BgL_approx3868z00_5706)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			return
				(obj_t) (BGl_wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3868z00_5706)));
		}
	}



/* make-app-ly/Cinfo */
	BGL_EXPORTED_DEF BgL_appzd2lyzf2cinfoz20_bglt
		BGl_makezd2appzd2lyzf2Cinfozf2zzcfa_infoz00(obj_t BgL_loc3872z00_219,
		BgL_typez00_bglt BgL_type3873z00_220, BgL_nodez00_bglt BgL_fun3874z00_221,
		BgL_nodez00_bglt BgL_arg3875z00_222,
		BgL_approxz00_bglt BgL_approx3871z00_223)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{	/* Cfa/cinfo.scm 79 */
				BgL_appzd2lyzd2_bglt BgL_aux3876z00_3546;

				BgL_aux3876z00_3546 =
					BGl_makezd2appzd2lyz00zzast_nodez00(BgL_loc3872z00_219,
					BgL_type3873z00_220, BgL_fun3874z00_221, BgL_arg3875z00_222);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3876z00_3546),
					BGl_classzd2numzd2zz__objectz00
					(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 79 */
					BgL_appzd2lyzf2cinfoz20_bglt BgL_arg4897z00_3548;

					{	/* Cfa/cinfo.scm 79 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_res5407z00_3558;

						{	/* Cfa/cinfo.scm 79 */
							BgL_appzd2lyzf2cinfoz20_bglt BgL_new3869z00_3553;

							BgL_new3869z00_3553 =
								((BgL_appzd2lyzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appzd2lyzf2cinfoz20_bgl))));
							{	/* Cfa/cinfo.scm 79 */
								BgL_appzd2lyzf2cinfoz20_bglt BgL_res5406z00_3557;

								{	/* Cfa/cinfo.scm 79 */
									BgL_appzd2lyzf2cinfoz20_bglt BgL_new3879z00_3554;

									BgL_new3879z00_3554 = BgL_new3869z00_3553;
									{	/* Cfa/cinfo.scm 79 */
										BgL_approxz00_bglt BgL_approx3878z00_3556;

										BgL_approx3878z00_3556 = BgL_approx3871z00_223;
										((((BgL_appzd2lyzf2cinfoz20_bglt)
													CREF(BgL_new3879z00_3554))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3878z00_3556), BUNSPEC);
										BgL_res5406z00_3557 = BgL_new3879z00_3554;
								}} BgL_res5406z00_3557;
							}
							BgL_res5407z00_3558 = BgL_new3869z00_3553;
						}
						BgL_arg4897z00_3548 = BgL_res5407z00_3558;
					}
					{	/* Cfa/cinfo.scm 79 */
						obj_t BgL_auxz00_7783;

						BgL_objectz00_bglt BgL_auxz00_7781;

						BgL_auxz00_7783 = (obj_t) (BgL_arg4897z00_3548);
						BgL_auxz00_7781 = (BgL_objectz00_bglt) (BgL_aux3876z00_3546);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7781, BgL_auxz00_7783);
				}}
				return
					((BgL_appzd2lyzf2cinfoz20_bglt)
					(BgL_appzd2lyzf2cinfoz20_bglt) (BgL_aux3876z00_3546));
			}
		}
	}



/* _make-app-ly/Cinfo */
	obj_t BGl__makezd2appzd2lyzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5707,
		obj_t BgL_loc3872z00_5708, obj_t BgL_type3873z00_5709,
		obj_t BgL_fun3874z00_5710, obj_t BgL_arg3875z00_5711,
		obj_t BgL_approx3871z00_5712)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			return
				(obj_t) (BGl_makezd2appzd2lyzf2Cinfozf2zzcfa_infoz00
				(BgL_loc3872z00_5708, (BgL_typez00_bglt) (BgL_type3873z00_5709),
					(BgL_nodez00_bglt) (BgL_fun3874z00_5710),
					(BgL_nodez00_bglt) (BgL_arg3875z00_5711),
					(BgL_approxz00_bglt) (BgL_approx3871z00_5712)));
		}
	}



/* fill-app-ly/Cinfo! */
	BGL_EXPORTED_DEF BgL_appzd2lyzf2cinfoz20_bglt
		BGl_fillzd2appzd2lyzf2Cinfoz12ze0zzcfa_infoz00(BgL_appzd2lyzf2cinfoz20_bglt
		BgL_new3879z00_224, BgL_approxz00_bglt BgL_approx3878z00_225)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{	/* Cfa/cinfo.scm 79 */
				BgL_approxz00_bglt BgL_approx3878z00_6287;

				BgL_approx3878z00_6287 = BgL_approx3878z00_225;
				((((BgL_appzd2lyzf2cinfoz20_bglt) CREF(BgL_new3879z00_224))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3878z00_6287), BUNSPEC);
				return BgL_new3879z00_224;
			}
		}
	}



/* _fill-app-ly/Cinfo! */
	obj_t BGl__fillzd2appzd2lyzf2Cinfoz12ze0zzcfa_infoz00(obj_t BgL_envz00_5713,
		obj_t BgL_new3879z00_5714, obj_t BgL_approx3878z00_5715)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{	/* Cfa/cinfo.scm 79 */
				BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_7795;

				{	/* Cfa/cinfo.scm 79 */
					BgL_appzd2lyzf2cinfoz20_bglt BgL_res5670z00_6291;

					{	/* Cfa/cinfo.scm 79 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_new3879z00_6288;

						BgL_approxz00_bglt BgL_approx3878z00_6289;

						BgL_new3879z00_6288 =
							(BgL_appzd2lyzf2cinfoz20_bglt) (BgL_new3879z00_5714);
						BgL_approx3878z00_6289 =
							(BgL_approxz00_bglt) (BgL_approx3878z00_5715);
						{	/* Cfa/cinfo.scm 79 */
							BgL_approxz00_bglt BgL_approx3878z00_6290;

							BgL_approx3878z00_6290 = BgL_approx3878z00_6289;
							((((BgL_appzd2lyzf2cinfoz20_bglt) CREF(BgL_new3879z00_6288))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3878z00_6290), BUNSPEC);
							BgL_res5670z00_6291 = BgL_new3879z00_6288;
						}
					}
					BgL_auxz00_7795 = BgL_res5670z00_6291;
				}
				return (obj_t) (BgL_auxz00_7795);
			}
		}
	}



/* %allocate-app-ly/Cinfo */
	BGL_EXPORTED_DEF BgL_appzd2lyzd2_bglt
		BGl_z52allocatezd2appzd2lyzf2Cinfoza0zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{	/* Cfa/cinfo.scm 79 */
				BgL_appzd2lyzd2_bglt BgL_new3882z00_6292;

				BgL_new3882z00_6292 =
					((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_appzd2lyzd2_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3882z00_6292),
					BGl_classzd2numzd2zz__objectz00
					(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 79 */
					BgL_objectz00_bglt BgL_auxz00_7804;

					BgL_auxz00_7804 = (BgL_objectz00_bglt) (BgL_new3882z00_6292);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7804, BFALSE);
				}
				return BgL_new3882z00_6292;
			}
		}
	}



/* _%allocate-app-ly/Cinfo */
	obj_t BGl__z52allocatezd2appzd2lyzf2Cinfoza0zzcfa_infoz00(obj_t
		BgL_envz00_5469)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{	/* Cfa/cinfo.scm 79 */
				BgL_appzd2lyzd2_bglt BgL_auxz00_7807;

				{	/* Cfa/cinfo.scm 79 */
					BgL_appzd2lyzd2_bglt BgL_res5671z00_6296;

					{	/* Cfa/cinfo.scm 79 */
						BgL_appzd2lyzd2_bglt BgL_new3882z00_6294;

						BgL_new3882z00_6294 =
							((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_appzd2lyzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3882z00_6294),
							BGl_classzd2numzd2zz__objectz00
							(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 79 */
							BgL_objectz00_bglt BgL_auxz00_7812;

							BgL_auxz00_7812 = (BgL_objectz00_bglt) (BgL_new3882z00_6294);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7812, BFALSE);
						}
						BgL_res5671z00_6296 = BgL_new3882z00_6294;
					}
					BgL_auxz00_7807 = BgL_res5671z00_6296;
				}
				return (obj_t) (BgL_auxz00_7807);
			}
		}
	}



/* app-ly/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_appzd2lyzf2cinfoz20_bglt
		BGl_appzd2lyzf2Cinfozd2nilzf2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			if ((BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 79 */
					{	/* Cfa/cinfo.scm 79 */
						BgL_appzd2lyzd2_bglt BgL_res5408z00_3568;

						{	/* Cfa/cinfo.scm 79 */
							BgL_appzd2lyzd2_bglt BgL_new2302z00_3564;

							BgL_new2302z00_3564 =
								((BgL_appzd2lyzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_appzd2lyzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2302z00_3564),
								BGl_classzd2numzd2zz__objectz00(BGl_appzd2lyzd2zzast_nodez00));
							{	/* Cfa/cinfo.scm 79 */
								BgL_objectz00_bglt BgL_auxz00_7822;

								BgL_auxz00_7822 = (BgL_objectz00_bglt) (BgL_new2302z00_3564);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7822, BFALSE);
							}
							BgL_res5408z00_3568 = BgL_new2302z00_3564;
						}
						BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00 =
							(obj_t) (BgL_res5408z00_3568);
					}
					{	/* Cfa/cinfo.scm 79 */
						BgL_typez00_bglt BgL_arg4900z00_1628;

						BgL_nodez00_bglt BgL_arg4901z00_1629;

						BgL_nodez00_bglt BgL_arg4902z00_1630;

						BgL_arg4900z00_1628 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4901z00_1629 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg4902z00_1630 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Cfa/cinfo.scm 79 */
							BgL_appzd2lyzd2_bglt BgL_res5409z00_3578;

							{	/* Cfa/cinfo.scm 79 */
								BgL_appzd2lyzd2_bglt BgL_new2296z00_3569;

								BgL_new2296z00_3569 =
									(BgL_appzd2lyzd2_bglt)
									(BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 79 */
									obj_t BgL_loc2291z00_3574;

									BgL_typez00_bglt BgL_type2292z00_3575;

									BgL_nodez00_bglt BgL_fun2293z00_3576;

									BgL_nodez00_bglt BgL_arg2295z00_3577;

									BgL_loc2291z00_3574 = BUNSPEC;
									BgL_type2292z00_3575 = BgL_arg4900z00_1628;
									BgL_fun2293z00_3576 = BgL_arg4901z00_1629;
									BgL_arg2295z00_3577 = BgL_arg4902z00_1630;
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2296z00_3569))->
											BgL_locz00) = ((obj_t) BgL_loc2291z00_3574), BUNSPEC);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2296z00_3569))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2292z00_3575), BUNSPEC);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2296z00_3569))->
											BgL_funz00) =
										((BgL_nodez00_bglt) BgL_fun2293z00_3576), BUNSPEC);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_new2296z00_3569))->
											BgL_argz00) =
										((BgL_nodez00_bglt) BgL_arg2295z00_3577), BUNSPEC);
									BgL_res5409z00_3578 = BgL_new2296z00_3569;
							}} BgL_res5409z00_3578;
					}}
					{	/* Cfa/cinfo.scm 79 */
						long BgL_arg4903z00_1631;

						BgL_arg4903z00_1631 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00),
							BgL_arg4903z00_1631);
					}
					{	/* Cfa/cinfo.scm 79 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_arg4904z00_1632;

						{	/* Cfa/cinfo.scm 79 */
							BgL_approxz00_bglt BgL_arg4905z00_1633;

							BgL_arg4905z00_1633 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 79 */
								BgL_appzd2lyzf2cinfoz20_bglt BgL_res5411z00_3587;

								{	/* Cfa/cinfo.scm 79 */
									BgL_appzd2lyzf2cinfoz20_bglt BgL_new3869z00_3582;

									BgL_new3869z00_3582 =
										((BgL_appzd2lyzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_appzd2lyzf2cinfoz20_bgl))));
									{	/* Cfa/cinfo.scm 79 */
										BgL_appzd2lyzf2cinfoz20_bglt BgL_res5410z00_3586;

										{	/* Cfa/cinfo.scm 79 */
											BgL_appzd2lyzf2cinfoz20_bglt BgL_new3879z00_3583;

											BgL_new3879z00_3583 = BgL_new3869z00_3582;
											{	/* Cfa/cinfo.scm 79 */
												BgL_approxz00_bglt BgL_approx3878z00_3585;

												BgL_approx3878z00_3585 = BgL_arg4905z00_1633;
												((((BgL_appzd2lyzf2cinfoz20_bglt)
															CREF(BgL_new3879z00_3583))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3878z00_3585),
													BUNSPEC);
												BgL_res5410z00_3586 = BgL_new3879z00_3583;
										}} BgL_res5410z00_3586;
									}
									BgL_res5411z00_3587 = BgL_new3869z00_3582;
								}
								BgL_arg4904z00_1632 = BgL_res5411z00_3587;
						}}
						{	/* Cfa/cinfo.scm 79 */
							obj_t BgL_auxz00_7842;

							BgL_objectz00_bglt BgL_auxz00_7840;

							BgL_auxz00_7842 = (obj_t) (BgL_arg4904z00_1632);
							BgL_auxz00_7840 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7840, BgL_auxz00_7842);
				}}}
			else
				{	/* Cfa/cinfo.scm 79 */
					BFALSE;
				}
			return
				(BgL_appzd2lyzf2cinfoz20_bglt)
				(BGl_z52thezd2appzd2lyzf2Cinfozd2nilz72zzcfa_infoz00);
		}
	}



/* _app-ly/Cinfo-nil */
	obj_t BGl__appzd2lyzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t BgL_envz00_5470)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			return (obj_t) (BGl_appzd2lyzf2Cinfozd2nilzf2zzcfa_infoz00());
		}
	}



/* kwote/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_kwotezf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3861z00_227)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3861z00_227,
				BGl_kwotezf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _kwote/Cinfo? */
	obj_t BGl__kwotezf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5467,
		obj_t BgL_obj3861z00_5468)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3861z00_5468,
					BGl_kwotezf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-kwote/Cinfo */
	BGL_EXPORTED_DEF BgL_kwotezf2cinfozf2_bglt
		BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3841z00_231)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{	/* Cfa/cinfo.scm 77 */
				BgL_kwotezf2cinfozf2_bglt BgL_new3842z00_3588;

				BgL_new3842z00_3588 =
					((BgL_kwotezf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_kwotezf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 77 */
					BgL_kwotezf2cinfozf2_bglt BgL_res5412z00_3592;

					{	/* Cfa/cinfo.scm 77 */
						BgL_kwotezf2cinfozf2_bglt BgL_new3851z00_3589;

						BgL_new3851z00_3589 = BgL_new3842z00_3588;
						{	/* Cfa/cinfo.scm 77 */
							BgL_approxz00_bglt BgL_approx3850z00_3591;

							BgL_approx3850z00_3591 = BgL_approx3841z00_231;
							((((BgL_kwotezf2cinfozf2_bglt) CREF(BgL_new3851z00_3589))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3850z00_3591), BUNSPEC);
							BgL_res5412z00_3592 = BgL_new3851z00_3589;
					}} BgL_res5412z00_3592;
				}
				return BgL_new3842z00_3588;
			}
		}
	}



/* _widening-kwote/Cinfo */
	obj_t BGl__wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5716,
		obj_t BgL_approx3841z00_5717)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			return
				(obj_t) (BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3841z00_5717)));
		}
	}



/* make-kwote/Cinfo */
	BGL_EXPORTED_DEF BgL_kwotezf2cinfozf2_bglt
		BGl_makezd2kwotezf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc3845z00_232,
		BgL_typez00_bglt BgL_type3846z00_233, obj_t BgL_value3847z00_234,
		BgL_approxz00_bglt BgL_approx3844z00_235)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{	/* Cfa/cinfo.scm 77 */
				BgL_kwotez00_bglt BgL_aux3848z00_3593;

				BgL_aux3848z00_3593 =
					BGl_makezd2kwotezd2zzast_nodez00(BgL_loc3845z00_232,
					BgL_type3846z00_233, BgL_value3847z00_234);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3848z00_3593),
					BGl_classzd2numzd2zz__objectz00(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 77 */
					BgL_kwotezf2cinfozf2_bglt BgL_arg4907z00_3595;

					{	/* Cfa/cinfo.scm 77 */
						BgL_kwotezf2cinfozf2_bglt BgL_res5414z00_3605;

						{	/* Cfa/cinfo.scm 77 */
							BgL_kwotezf2cinfozf2_bglt BgL_new3842z00_3600;

							BgL_new3842z00_3600 =
								((BgL_kwotezf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_kwotezf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 77 */
								BgL_kwotezf2cinfozf2_bglt BgL_res5413z00_3604;

								{	/* Cfa/cinfo.scm 77 */
									BgL_kwotezf2cinfozf2_bglt BgL_new3851z00_3601;

									BgL_new3851z00_3601 = BgL_new3842z00_3600;
									{	/* Cfa/cinfo.scm 77 */
										BgL_approxz00_bglt BgL_approx3850z00_3603;

										BgL_approx3850z00_3603 = BgL_approx3844z00_235;
										((((BgL_kwotezf2cinfozf2_bglt) CREF(BgL_new3851z00_3601))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3850z00_3603), BUNSPEC);
										BgL_res5413z00_3604 = BgL_new3851z00_3601;
								}} BgL_res5413z00_3604;
							}
							BgL_res5414z00_3605 = BgL_new3842z00_3600;
						}
						BgL_arg4907z00_3595 = BgL_res5414z00_3605;
					}
					{	/* Cfa/cinfo.scm 77 */
						obj_t BgL_auxz00_7864;

						BgL_objectz00_bglt BgL_auxz00_7862;

						BgL_auxz00_7864 = (obj_t) (BgL_arg4907z00_3595);
						BgL_auxz00_7862 = (BgL_objectz00_bglt) (BgL_aux3848z00_3593);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7862, BgL_auxz00_7864);
				}}
				return
					((BgL_kwotezf2cinfozf2_bglt)
					(BgL_kwotezf2cinfozf2_bglt) (BgL_aux3848z00_3593));
			}
		}
	}



/* _make-kwote/Cinfo */
	obj_t BGl__makezd2kwotezf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5718,
		obj_t BgL_loc3845z00_5719, obj_t BgL_type3846z00_5720,
		obj_t BgL_value3847z00_5721, obj_t BgL_approx3844z00_5722)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			return
				(obj_t) (BGl_makezd2kwotezf2Cinfoz20zzcfa_infoz00(BgL_loc3845z00_5719,
					(BgL_typez00_bglt) (BgL_type3846z00_5720), BgL_value3847z00_5721,
					(BgL_approxz00_bglt) (BgL_approx3844z00_5722)));
		}
	}



/* fill-kwote/Cinfo! */
	BGL_EXPORTED_DEF BgL_kwotezf2cinfozf2_bglt
		BGl_fillzd2kwotezf2Cinfoz12z32zzcfa_infoz00(BgL_kwotezf2cinfozf2_bglt
		BgL_new3851z00_236, BgL_approxz00_bglt BgL_approx3850z00_237)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{	/* Cfa/cinfo.scm 77 */
				BgL_approxz00_bglt BgL_approx3850z00_6298;

				BgL_approx3850z00_6298 = BgL_approx3850z00_237;
				((((BgL_kwotezf2cinfozf2_bglt) CREF(BgL_new3851z00_236))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3850z00_6298), BUNSPEC);
				return BgL_new3851z00_236;
			}
		}
	}



/* _fill-kwote/Cinfo! */
	obj_t BGl__fillzd2kwotezf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5723,
		obj_t BgL_new3851z00_5724, obj_t BgL_approx3850z00_5725)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{	/* Cfa/cinfo.scm 77 */
				BgL_kwotezf2cinfozf2_bglt BgL_auxz00_7874;

				{	/* Cfa/cinfo.scm 77 */
					BgL_kwotezf2cinfozf2_bglt BgL_res5672z00_6302;

					{	/* Cfa/cinfo.scm 77 */
						BgL_kwotezf2cinfozf2_bglt BgL_new3851z00_6299;

						BgL_approxz00_bglt BgL_approx3850z00_6300;

						BgL_new3851z00_6299 =
							(BgL_kwotezf2cinfozf2_bglt) (BgL_new3851z00_5724);
						BgL_approx3850z00_6300 =
							(BgL_approxz00_bglt) (BgL_approx3850z00_5725);
						{	/* Cfa/cinfo.scm 77 */
							BgL_approxz00_bglt BgL_approx3850z00_6301;

							BgL_approx3850z00_6301 = BgL_approx3850z00_6300;
							((((BgL_kwotezf2cinfozf2_bglt) CREF(BgL_new3851z00_6299))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3850z00_6301), BUNSPEC);
							BgL_res5672z00_6302 = BgL_new3851z00_6299;
						}
					}
					BgL_auxz00_7874 = BgL_res5672z00_6302;
				}
				return (obj_t) (BgL_auxz00_7874);
			}
		}
	}



/* %allocate-kwote/Cinfo */
	BGL_EXPORTED_DEF BgL_kwotez00_bglt
		BGl_z52allocatezd2kwotezf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{	/* Cfa/cinfo.scm 77 */
				BgL_kwotez00_bglt BgL_new3854z00_6303;

				BgL_new3854z00_6303 =
					((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_kwotez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3854z00_6303),
					BGl_classzd2numzd2zz__objectz00(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 77 */
					BgL_objectz00_bglt BgL_auxz00_7883;

					BgL_auxz00_7883 = (BgL_objectz00_bglt) (BgL_new3854z00_6303);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7883, BFALSE);
				}
				return BgL_new3854z00_6303;
			}
		}
	}



/* _%allocate-kwote/Cinfo */
	obj_t BGl__z52allocatezd2kwotezf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5465)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{	/* Cfa/cinfo.scm 77 */
				BgL_kwotez00_bglt BgL_auxz00_7886;

				{	/* Cfa/cinfo.scm 77 */
					BgL_kwotez00_bglt BgL_res5673z00_6307;

					{	/* Cfa/cinfo.scm 77 */
						BgL_kwotez00_bglt BgL_new3854z00_6305;

						BgL_new3854z00_6305 =
							((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_kwotez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3854z00_6305),
							BGl_classzd2numzd2zz__objectz00
							(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 77 */
							BgL_objectz00_bglt BgL_auxz00_7891;

							BgL_auxz00_7891 = (BgL_objectz00_bglt) (BgL_new3854z00_6305);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7891, BFALSE);
						}
						BgL_res5673z00_6307 = BgL_new3854z00_6305;
					}
					BgL_auxz00_7886 = BgL_res5673z00_6307;
				}
				return (obj_t) (BgL_auxz00_7886);
			}
		}
	}



/* kwote/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_kwotezf2cinfozf2_bglt
		BGl_kwotezf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			if ((BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 77 */
					{	/* Cfa/cinfo.scm 77 */
						BgL_kwotez00_bglt BgL_res5415z00_3615;

						{	/* Cfa/cinfo.scm 77 */
							BgL_kwotez00_bglt BgL_new2207z00_3611;

							BgL_new2207z00_3611 =
								((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_kwotez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2207z00_3611),
								BGl_classzd2numzd2zz__objectz00(BGl_kwotez00zzast_nodez00));
							{	/* Cfa/cinfo.scm 77 */
								BgL_objectz00_bglt BgL_auxz00_7901;

								BgL_auxz00_7901 = (BgL_objectz00_bglt) (BgL_new2207z00_3611);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7901, BFALSE);
							}
							BgL_res5415z00_3615 = BgL_new2207z00_3611;
						}
						BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5415z00_3615);
					}
					{	/* Cfa/cinfo.scm 77 */
						BgL_typez00_bglt BgL_arg4910z00_1643;

						BgL_arg4910z00_1643 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo.scm 77 */
							BgL_kwotez00_bglt BgL_res5416z00_3623;

							{	/* Cfa/cinfo.scm 77 */
								BgL_kwotez00_bglt BgL_new2202z00_3616;

								BgL_new2202z00_3616 =
									(BgL_kwotez00_bglt)
									(BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 77 */
									obj_t BgL_loc2199z00_3620;

									BgL_typez00_bglt BgL_type2200z00_3621;

									obj_t BgL_value2201z00_3622;

									BgL_loc2199z00_3620 = BUNSPEC;
									BgL_type2200z00_3621 = BgL_arg4910z00_1643;
									BgL_value2201z00_3622 = BUNSPEC;
									((((BgL_kwotez00_bglt) CREF(BgL_new2202z00_3616))->
											BgL_locz00) = ((obj_t) BgL_loc2199z00_3620), BUNSPEC);
									((((BgL_kwotez00_bglt) CREF(BgL_new2202z00_3616))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2200z00_3621), BUNSPEC);
									((((BgL_kwotez00_bglt) CREF(BgL_new2202z00_3616))->
											BgL_valuez00) = ((obj_t) BgL_value2201z00_3622), BUNSPEC);
									BgL_res5416z00_3623 = BgL_new2202z00_3616;
							}} BgL_res5416z00_3623;
					}}
					{	/* Cfa/cinfo.scm 77 */
						long BgL_arg4911z00_1644;

						BgL_arg4911z00_1644 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_kwotezf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4911z00_1644);
					}
					{	/* Cfa/cinfo.scm 77 */
						BgL_kwotezf2cinfozf2_bglt BgL_arg4912z00_1645;

						{	/* Cfa/cinfo.scm 77 */
							BgL_approxz00_bglt BgL_arg4913z00_1646;

							BgL_arg4913z00_1646 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 77 */
								BgL_kwotezf2cinfozf2_bglt BgL_res5418z00_3632;

								{	/* Cfa/cinfo.scm 77 */
									BgL_kwotezf2cinfozf2_bglt BgL_new3842z00_3627;

									BgL_new3842z00_3627 =
										((BgL_kwotezf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_kwotezf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 77 */
										BgL_kwotezf2cinfozf2_bglt BgL_res5417z00_3631;

										{	/* Cfa/cinfo.scm 77 */
											BgL_kwotezf2cinfozf2_bglt BgL_new3851z00_3628;

											BgL_new3851z00_3628 = BgL_new3842z00_3627;
											{	/* Cfa/cinfo.scm 77 */
												BgL_approxz00_bglt BgL_approx3850z00_3630;

												BgL_approx3850z00_3630 = BgL_arg4913z00_1646;
												((((BgL_kwotezf2cinfozf2_bglt)
															CREF(BgL_new3851z00_3628))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3850z00_3630),
													BUNSPEC);
												BgL_res5417z00_3631 = BgL_new3851z00_3628;
										}} BgL_res5417z00_3631;
									}
									BgL_res5418z00_3632 = BgL_new3842z00_3627;
								}
								BgL_arg4912z00_1645 = BgL_res5418z00_3632;
						}}
						{	/* Cfa/cinfo.scm 77 */
							obj_t BgL_auxz00_7918;

							BgL_objectz00_bglt BgL_auxz00_7916;

							BgL_auxz00_7918 = (obj_t) (BgL_arg4912z00_1645);
							BgL_auxz00_7916 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7916, BgL_auxz00_7918);
				}}}
			else
				{	/* Cfa/cinfo.scm 77 */
					BFALSE;
				}
			return
				(BgL_kwotezf2cinfozf2_bglt)
				(BGl_z52thezd2kwotezf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _kwote/Cinfo-nil */
	obj_t BGl__kwotezf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5466)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			return (obj_t) (BGl_kwotezf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* kwote/node? */
	BGL_EXPORTED_DEF bool_t BGl_kwotezf2nodezf3z01zzcfa_infoz00(obj_t
		BgL_obj3834z00_239)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3834z00_239,
				BGl_kwotezf2nodezf2zzcfa_infoz00);
		}
	}



/* _kwote/node? */
	obj_t BGl__kwotezf2nodezf3z01zzcfa_infoz00(obj_t BgL_envz00_5463,
		obj_t BgL_obj3834z00_5464)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3834z00_5464,
					BGl_kwotezf2nodezf2zzcfa_infoz00));
		}
	}



/* widening-kwote/node */
	BGL_EXPORTED_DEF BgL_kwotezf2nodezf2_bglt
		BGl_wideningzd2kwotezf2nodez20zzcfa_infoz00(BgL_nodez00_bglt
		BgL_node3814z00_243)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{	/* Cfa/cinfo.scm 75 */
				BgL_kwotezf2nodezf2_bglt BgL_new3815z00_3633;

				BgL_new3815z00_3633 =
					((BgL_kwotezf2nodezf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_kwotezf2nodezf2_bgl))));
				{	/* Cfa/cinfo.scm 75 */
					BgL_kwotezf2nodezf2_bglt BgL_res5419z00_3637;

					{	/* Cfa/cinfo.scm 75 */
						BgL_kwotezf2nodezf2_bglt BgL_new3824z00_3634;

						BgL_new3824z00_3634 = BgL_new3815z00_3633;
						{	/* Cfa/cinfo.scm 75 */
							BgL_nodez00_bglt BgL_node3823z00_3636;

							BgL_node3823z00_3636 = BgL_node3814z00_243;
							((((BgL_kwotezf2nodezf2_bglt) CREF(BgL_new3824z00_3634))->
									BgL_nodez00) =
								((BgL_nodez00_bglt) BgL_node3823z00_3636), BUNSPEC);
							BgL_res5419z00_3637 = BgL_new3824z00_3634;
					}} BgL_res5419z00_3637;
				}
				return BgL_new3815z00_3633;
			}
		}
	}



/* _widening-kwote/node */
	obj_t BGl__wideningzd2kwotezf2nodez20zzcfa_infoz00(obj_t BgL_envz00_5726,
		obj_t BgL_node3814z00_5727)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			return
				(obj_t) (BGl_wideningzd2kwotezf2nodez20zzcfa_infoz00(
					(BgL_nodez00_bglt) (BgL_node3814z00_5727)));
		}
	}



/* make-kwote/node */
	BGL_EXPORTED_DEF BgL_kwotezf2nodezf2_bglt
		BGl_makezd2kwotezf2nodez20zzcfa_infoz00(obj_t BgL_loc3818z00_244,
		BgL_typez00_bglt BgL_type3819z00_245, obj_t BgL_value3820z00_246,
		BgL_nodez00_bglt BgL_node3817z00_247)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{	/* Cfa/cinfo.scm 75 */
				BgL_kwotez00_bglt BgL_aux3821z00_3638;

				BgL_aux3821z00_3638 =
					BGl_makezd2kwotezd2zzast_nodez00(BgL_loc3818z00_244,
					BgL_type3819z00_245, BgL_value3820z00_246);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3821z00_3638),
					BGl_classzd2numzd2zz__objectz00(BGl_kwotezf2nodezf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 75 */
					BgL_kwotezf2nodezf2_bglt BgL_arg4915z00_3640;

					{	/* Cfa/cinfo.scm 75 */
						BgL_kwotezf2nodezf2_bglt BgL_res5421z00_3650;

						{	/* Cfa/cinfo.scm 75 */
							BgL_kwotezf2nodezf2_bglt BgL_new3815z00_3645;

							BgL_new3815z00_3645 =
								((BgL_kwotezf2nodezf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_kwotezf2nodezf2_bgl))));
							{	/* Cfa/cinfo.scm 75 */
								BgL_kwotezf2nodezf2_bglt BgL_res5420z00_3649;

								{	/* Cfa/cinfo.scm 75 */
									BgL_kwotezf2nodezf2_bglt BgL_new3824z00_3646;

									BgL_new3824z00_3646 = BgL_new3815z00_3645;
									{	/* Cfa/cinfo.scm 75 */
										BgL_nodez00_bglt BgL_node3823z00_3648;

										BgL_node3823z00_3648 = BgL_node3817z00_247;
										((((BgL_kwotezf2nodezf2_bglt) CREF(BgL_new3824z00_3646))->
												BgL_nodez00) =
											((BgL_nodez00_bglt) BgL_node3823z00_3648), BUNSPEC);
										BgL_res5420z00_3649 = BgL_new3824z00_3646;
								}} BgL_res5420z00_3649;
							}
							BgL_res5421z00_3650 = BgL_new3815z00_3645;
						}
						BgL_arg4915z00_3640 = BgL_res5421z00_3650;
					}
					{	/* Cfa/cinfo.scm 75 */
						obj_t BgL_auxz00_7940;

						BgL_objectz00_bglt BgL_auxz00_7938;

						BgL_auxz00_7940 = (obj_t) (BgL_arg4915z00_3640);
						BgL_auxz00_7938 = (BgL_objectz00_bglt) (BgL_aux3821z00_3638);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_7938, BgL_auxz00_7940);
				}}
				return
					((BgL_kwotezf2nodezf2_bglt)
					(BgL_kwotezf2nodezf2_bglt) (BgL_aux3821z00_3638));
			}
		}
	}



/* _make-kwote/node */
	obj_t BGl__makezd2kwotezf2nodez20zzcfa_infoz00(obj_t BgL_envz00_5728,
		obj_t BgL_loc3818z00_5729, obj_t BgL_type3819z00_5730,
		obj_t BgL_value3820z00_5731, obj_t BgL_node3817z00_5732)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			return
				(obj_t) (BGl_makezd2kwotezf2nodez20zzcfa_infoz00(BgL_loc3818z00_5729,
					(BgL_typez00_bglt) (BgL_type3819z00_5730), BgL_value3820z00_5731,
					(BgL_nodez00_bglt) (BgL_node3817z00_5732)));
		}
	}



/* fill-kwote/node! */
	BGL_EXPORTED_DEF BgL_kwotezf2nodezf2_bglt
		BGl_fillzd2kwotezf2nodez12z32zzcfa_infoz00(BgL_kwotezf2nodezf2_bglt
		BgL_new3824z00_248, BgL_nodez00_bglt BgL_node3823z00_249)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{	/* Cfa/cinfo.scm 75 */
				BgL_nodez00_bglt BgL_node3823z00_6309;

				BgL_node3823z00_6309 = BgL_node3823z00_249;
				((((BgL_kwotezf2nodezf2_bglt) CREF(BgL_new3824z00_248))->BgL_nodez00) =
					((BgL_nodez00_bglt) BgL_node3823z00_6309), BUNSPEC);
				return BgL_new3824z00_248;
			}
		}
	}



/* _fill-kwote/node! */
	obj_t BGl__fillzd2kwotezf2nodez12z32zzcfa_infoz00(obj_t BgL_envz00_5733,
		obj_t BgL_new3824z00_5734, obj_t BgL_node3823z00_5735)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{	/* Cfa/cinfo.scm 75 */
				BgL_kwotezf2nodezf2_bglt BgL_auxz00_7950;

				{	/* Cfa/cinfo.scm 75 */
					BgL_kwotezf2nodezf2_bglt BgL_res5674z00_6313;

					{	/* Cfa/cinfo.scm 75 */
						BgL_kwotezf2nodezf2_bglt BgL_new3824z00_6310;

						BgL_nodez00_bglt BgL_node3823z00_6311;

						BgL_new3824z00_6310 =
							(BgL_kwotezf2nodezf2_bglt) (BgL_new3824z00_5734);
						BgL_node3823z00_6311 = (BgL_nodez00_bglt) (BgL_node3823z00_5735);
						{	/* Cfa/cinfo.scm 75 */
							BgL_nodez00_bglt BgL_node3823z00_6312;

							BgL_node3823z00_6312 = BgL_node3823z00_6311;
							((((BgL_kwotezf2nodezf2_bglt) CREF(BgL_new3824z00_6310))->
									BgL_nodez00) =
								((BgL_nodez00_bglt) BgL_node3823z00_6312), BUNSPEC);
							BgL_res5674z00_6313 = BgL_new3824z00_6310;
						}
					}
					BgL_auxz00_7950 = BgL_res5674z00_6313;
				}
				return (obj_t) (BgL_auxz00_7950);
			}
		}
	}



/* %allocate-kwote/node */
	BGL_EXPORTED_DEF BgL_kwotez00_bglt
		BGl_z52allocatezd2kwotezf2nodez72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{	/* Cfa/cinfo.scm 75 */
				BgL_kwotez00_bglt BgL_new3827z00_6314;

				BgL_new3827z00_6314 =
					((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_kwotez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3827z00_6314),
					BGl_classzd2numzd2zz__objectz00(BGl_kwotezf2nodezf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 75 */
					BgL_objectz00_bglt BgL_auxz00_7959;

					BgL_auxz00_7959 = (BgL_objectz00_bglt) (BgL_new3827z00_6314);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_7959, BFALSE);
				}
				return BgL_new3827z00_6314;
			}
		}
	}



/* _%allocate-kwote/node */
	obj_t BGl__z52allocatezd2kwotezf2nodez72zzcfa_infoz00(obj_t BgL_envz00_5461)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{	/* Cfa/cinfo.scm 75 */
				BgL_kwotez00_bglt BgL_auxz00_7962;

				{	/* Cfa/cinfo.scm 75 */
					BgL_kwotez00_bglt BgL_res5675z00_6318;

					{	/* Cfa/cinfo.scm 75 */
						BgL_kwotez00_bglt BgL_new3827z00_6316;

						BgL_new3827z00_6316 =
							((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_kwotez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3827z00_6316),
							BGl_classzd2numzd2zz__objectz00
							(BGl_kwotezf2nodezf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 75 */
							BgL_objectz00_bglt BgL_auxz00_7967;

							BgL_auxz00_7967 = (BgL_objectz00_bglt) (BgL_new3827z00_6316);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7967, BFALSE);
						}
						BgL_res5675z00_6318 = BgL_new3827z00_6316;
					}
					BgL_auxz00_7962 = BgL_res5675z00_6318;
				}
				return (obj_t) (BgL_auxz00_7962);
			}
		}
	}



/* kwote/node-nil */
	BGL_EXPORTED_DEF BgL_kwotezf2nodezf2_bglt
		BGl_kwotezf2nodezd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			if ((BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 75 */
					{	/* Cfa/cinfo.scm 75 */
						BgL_kwotez00_bglt BgL_res5422z00_3660;

						{	/* Cfa/cinfo.scm 75 */
							BgL_kwotez00_bglt BgL_new2207z00_3656;

							BgL_new2207z00_3656 =
								((BgL_kwotez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_kwotez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2207z00_3656),
								BGl_classzd2numzd2zz__objectz00(BGl_kwotez00zzast_nodez00));
							{	/* Cfa/cinfo.scm 75 */
								BgL_objectz00_bglt BgL_auxz00_7977;

								BgL_auxz00_7977 = (BgL_objectz00_bglt) (BgL_new2207z00_3656);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_7977, BFALSE);
							}
							BgL_res5422z00_3660 = BgL_new2207z00_3656;
						}
						BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5422z00_3660);
					}
					{	/* Cfa/cinfo.scm 75 */
						BgL_typez00_bglt BgL_arg4918z00_1656;

						BgL_arg4918z00_1656 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo.scm 75 */
							BgL_kwotez00_bglt BgL_res5423z00_3668;

							{	/* Cfa/cinfo.scm 75 */
								BgL_kwotez00_bglt BgL_new2202z00_3661;

								BgL_new2202z00_3661 =
									(BgL_kwotez00_bglt)
									(BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 75 */
									obj_t BgL_loc2199z00_3665;

									BgL_typez00_bglt BgL_type2200z00_3666;

									obj_t BgL_value2201z00_3667;

									BgL_loc2199z00_3665 = BUNSPEC;
									BgL_type2200z00_3666 = BgL_arg4918z00_1656;
									BgL_value2201z00_3667 = BUNSPEC;
									((((BgL_kwotez00_bglt) CREF(BgL_new2202z00_3661))->
											BgL_locz00) = ((obj_t) BgL_loc2199z00_3665), BUNSPEC);
									((((BgL_kwotez00_bglt) CREF(BgL_new2202z00_3661))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2200z00_3666), BUNSPEC);
									((((BgL_kwotez00_bglt) CREF(BgL_new2202z00_3661))->
											BgL_valuez00) = ((obj_t) BgL_value2201z00_3667), BUNSPEC);
									BgL_res5423z00_3668 = BgL_new2202z00_3661;
							}} BgL_res5423z00_3668;
					}}
					{	/* Cfa/cinfo.scm 75 */
						long BgL_arg4919z00_1657;

						BgL_arg4919z00_1657 =
							BGl_classzd2numzd2zz__objectz00(BGl_kwotezf2nodezf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00),
							BgL_arg4919z00_1657);
					}
					{	/* Cfa/cinfo.scm 75 */
						BgL_kwotezf2nodezf2_bglt BgL_arg4920z00_1658;

						{	/* Cfa/cinfo.scm 75 */
							BgL_nodez00_bglt BgL_arg4921z00_1659;

							BgL_arg4921z00_1659 = BGl_nodezd2nilzd2zzast_nodez00();
							{	/* Cfa/cinfo.scm 75 */
								BgL_kwotezf2nodezf2_bglt BgL_res5425z00_3677;

								{	/* Cfa/cinfo.scm 75 */
									BgL_kwotezf2nodezf2_bglt BgL_new3815z00_3672;

									BgL_new3815z00_3672 =
										((BgL_kwotezf2nodezf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_kwotezf2nodezf2_bgl))));
									{	/* Cfa/cinfo.scm 75 */
										BgL_kwotezf2nodezf2_bglt BgL_res5424z00_3676;

										{	/* Cfa/cinfo.scm 75 */
											BgL_kwotezf2nodezf2_bglt BgL_new3824z00_3673;

											BgL_new3824z00_3673 = BgL_new3815z00_3672;
											{	/* Cfa/cinfo.scm 75 */
												BgL_nodez00_bglt BgL_node3823z00_3675;

												BgL_node3823z00_3675 = BgL_arg4921z00_1659;
												((((BgL_kwotezf2nodezf2_bglt)
															CREF(BgL_new3824z00_3673))->BgL_nodez00) =
													((BgL_nodez00_bglt) BgL_node3823z00_3675), BUNSPEC);
												BgL_res5424z00_3676 = BgL_new3824z00_3673;
										}} BgL_res5424z00_3676;
									}
									BgL_res5425z00_3677 = BgL_new3815z00_3672;
								}
								BgL_arg4920z00_1658 = BgL_res5425z00_3677;
						}}
						{	/* Cfa/cinfo.scm 75 */
							obj_t BgL_auxz00_7994;

							BgL_objectz00_bglt BgL_auxz00_7992;

							BgL_auxz00_7994 = (obj_t) (BgL_arg4920z00_1658);
							BgL_auxz00_7992 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_7992, BgL_auxz00_7994);
				}}}
			else
				{	/* Cfa/cinfo.scm 75 */
					BFALSE;
				}
			return
				(BgL_kwotezf2nodezf2_bglt)
				(BGl_z52thezd2kwotezf2nodezd2nilza0zzcfa_infoz00);
		}
	}



/* _kwote/node-nil */
	obj_t BGl__kwotezf2nodezd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5462)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			return (obj_t) (BGl_kwotezf2nodezd2nilz20zzcfa_infoz00());
		}
	}



/* atom/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_atomzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3805z00_251)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3805z00_251,
				BGl_atomzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _atom/Cinfo? */
	obj_t BGl__atomzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5459,
		obj_t BgL_obj3805z00_5460)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3805z00_5460,
					BGl_atomzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-atom/Cinfo */
	BGL_EXPORTED_DEF BgL_atomzf2cinfozf2_bglt
		BGl_wideningzd2atomzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3785z00_255)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{	/* Cfa/cinfo.scm 73 */
				BgL_atomzf2cinfozf2_bglt BgL_new3786z00_3678;

				BgL_new3786z00_3678 =
					((BgL_atomzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_atomzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 73 */
					BgL_atomzf2cinfozf2_bglt BgL_res5426z00_3682;

					{	/* Cfa/cinfo.scm 73 */
						BgL_atomzf2cinfozf2_bglt BgL_new3795z00_3679;

						BgL_new3795z00_3679 = BgL_new3786z00_3678;
						{	/* Cfa/cinfo.scm 73 */
							BgL_approxz00_bglt BgL_approx3794z00_3681;

							BgL_approx3794z00_3681 = BgL_approx3785z00_255;
							((((BgL_atomzf2cinfozf2_bglt) CREF(BgL_new3795z00_3679))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3794z00_3681), BUNSPEC);
							BgL_res5426z00_3682 = BgL_new3795z00_3679;
					}} BgL_res5426z00_3682;
				}
				return BgL_new3786z00_3678;
			}
		}
	}



/* _widening-atom/Cinfo */
	obj_t BGl__wideningzd2atomzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5736,
		obj_t BgL_approx3785z00_5737)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			return
				(obj_t) (BGl_wideningzd2atomzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3785z00_5737)));
		}
	}



/* make-atom/Cinfo */
	BGL_EXPORTED_DEF BgL_atomzf2cinfozf2_bglt
		BGl_makezd2atomzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc3789z00_256,
		BgL_typez00_bglt BgL_type3790z00_257, obj_t BgL_value3791z00_258,
		BgL_approxz00_bglt BgL_approx3788z00_259)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{	/* Cfa/cinfo.scm 73 */
				BgL_atomz00_bglt BgL_aux3792z00_3683;

				BgL_aux3792z00_3683 =
					BGl_makezd2atomzd2zzast_nodez00(BgL_loc3789z00_256,
					BgL_type3790z00_257, BgL_value3791z00_258);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3792z00_3683),
					BGl_classzd2numzd2zz__objectz00(BGl_atomzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 73 */
					BgL_atomzf2cinfozf2_bglt BgL_arg4923z00_3685;

					{	/* Cfa/cinfo.scm 73 */
						BgL_atomzf2cinfozf2_bglt BgL_res5428z00_3695;

						{	/* Cfa/cinfo.scm 73 */
							BgL_atomzf2cinfozf2_bglt BgL_new3786z00_3690;

							BgL_new3786z00_3690 =
								((BgL_atomzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_atomzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 73 */
								BgL_atomzf2cinfozf2_bglt BgL_res5427z00_3694;

								{	/* Cfa/cinfo.scm 73 */
									BgL_atomzf2cinfozf2_bglt BgL_new3795z00_3691;

									BgL_new3795z00_3691 = BgL_new3786z00_3690;
									{	/* Cfa/cinfo.scm 73 */
										BgL_approxz00_bglt BgL_approx3794z00_3693;

										BgL_approx3794z00_3693 = BgL_approx3788z00_259;
										((((BgL_atomzf2cinfozf2_bglt) CREF(BgL_new3795z00_3691))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3794z00_3693), BUNSPEC);
										BgL_res5427z00_3694 = BgL_new3795z00_3691;
								}} BgL_res5427z00_3694;
							}
							BgL_res5428z00_3695 = BgL_new3786z00_3690;
						}
						BgL_arg4923z00_3685 = BgL_res5428z00_3695;
					}
					{	/* Cfa/cinfo.scm 73 */
						obj_t BgL_auxz00_8016;

						BgL_objectz00_bglt BgL_auxz00_8014;

						BgL_auxz00_8016 = (obj_t) (BgL_arg4923z00_3685);
						BgL_auxz00_8014 = (BgL_objectz00_bglt) (BgL_aux3792z00_3683);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8014, BgL_auxz00_8016);
				}}
				return
					((BgL_atomzf2cinfozf2_bglt)
					(BgL_atomzf2cinfozf2_bglt) (BgL_aux3792z00_3683));
			}
		}
	}



/* _make-atom/Cinfo */
	obj_t BGl__makezd2atomzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5738,
		obj_t BgL_loc3789z00_5739, obj_t BgL_type3790z00_5740,
		obj_t BgL_value3791z00_5741, obj_t BgL_approx3788z00_5742)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			return
				(obj_t) (BGl_makezd2atomzf2Cinfoz20zzcfa_infoz00(BgL_loc3789z00_5739,
					(BgL_typez00_bglt) (BgL_type3790z00_5740), BgL_value3791z00_5741,
					(BgL_approxz00_bglt) (BgL_approx3788z00_5742)));
		}
	}



/* fill-atom/Cinfo! */
	BGL_EXPORTED_DEF BgL_atomzf2cinfozf2_bglt
		BGl_fillzd2atomzf2Cinfoz12z32zzcfa_infoz00(BgL_atomzf2cinfozf2_bglt
		BgL_new3795z00_260, BgL_approxz00_bglt BgL_approx3794z00_261)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{	/* Cfa/cinfo.scm 73 */
				BgL_approxz00_bglt BgL_approx3794z00_6320;

				BgL_approx3794z00_6320 = BgL_approx3794z00_261;
				((((BgL_atomzf2cinfozf2_bglt) CREF(BgL_new3795z00_260))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3794z00_6320), BUNSPEC);
				return BgL_new3795z00_260;
			}
		}
	}



/* _fill-atom/Cinfo! */
	obj_t BGl__fillzd2atomzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5743,
		obj_t BgL_new3795z00_5744, obj_t BgL_approx3794z00_5745)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{	/* Cfa/cinfo.scm 73 */
				BgL_atomzf2cinfozf2_bglt BgL_auxz00_8026;

				{	/* Cfa/cinfo.scm 73 */
					BgL_atomzf2cinfozf2_bglt BgL_res5676z00_6324;

					{	/* Cfa/cinfo.scm 73 */
						BgL_atomzf2cinfozf2_bglt BgL_new3795z00_6321;

						BgL_approxz00_bglt BgL_approx3794z00_6322;

						BgL_new3795z00_6321 =
							(BgL_atomzf2cinfozf2_bglt) (BgL_new3795z00_5744);
						BgL_approx3794z00_6322 =
							(BgL_approxz00_bglt) (BgL_approx3794z00_5745);
						{	/* Cfa/cinfo.scm 73 */
							BgL_approxz00_bglt BgL_approx3794z00_6323;

							BgL_approx3794z00_6323 = BgL_approx3794z00_6322;
							((((BgL_atomzf2cinfozf2_bglt) CREF(BgL_new3795z00_6321))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3794z00_6323), BUNSPEC);
							BgL_res5676z00_6324 = BgL_new3795z00_6321;
						}
					}
					BgL_auxz00_8026 = BgL_res5676z00_6324;
				}
				return (obj_t) (BgL_auxz00_8026);
			}
		}
	}



/* %allocate-atom/Cinfo */
	BGL_EXPORTED_DEF BgL_atomz00_bglt
		BGl_z52allocatezd2atomzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{	/* Cfa/cinfo.scm 73 */
				BgL_atomz00_bglt BgL_new3798z00_6325;

				BgL_new3798z00_6325 =
					((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_atomz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3798z00_6325),
					BGl_classzd2numzd2zz__objectz00(BGl_atomzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 73 */
					BgL_objectz00_bglt BgL_auxz00_8035;

					BgL_auxz00_8035 = (BgL_objectz00_bglt) (BgL_new3798z00_6325);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8035, BFALSE);
				}
				return BgL_new3798z00_6325;
			}
		}
	}



/* _%allocate-atom/Cinfo */
	obj_t BGl__z52allocatezd2atomzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5457)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{	/* Cfa/cinfo.scm 73 */
				BgL_atomz00_bglt BgL_auxz00_8038;

				{	/* Cfa/cinfo.scm 73 */
					BgL_atomz00_bglt BgL_res5677z00_6329;

					{	/* Cfa/cinfo.scm 73 */
						BgL_atomz00_bglt BgL_new3798z00_6327;

						BgL_new3798z00_6327 =
							((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_atomz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3798z00_6327),
							BGl_classzd2numzd2zz__objectz00
							(BGl_atomzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 73 */
							BgL_objectz00_bglt BgL_auxz00_8043;

							BgL_auxz00_8043 = (BgL_objectz00_bglt) (BgL_new3798z00_6327);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8043, BFALSE);
						}
						BgL_res5677z00_6329 = BgL_new3798z00_6327;
					}
					BgL_auxz00_8038 = BgL_res5677z00_6329;
				}
				return (obj_t) (BgL_auxz00_8038);
			}
		}
	}



/* atom/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_atomzf2cinfozf2_bglt
		BGl_atomzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			if ((BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 73 */
					{	/* Cfa/cinfo.scm 73 */
						BgL_atomz00_bglt BgL_res5429z00_3705;

						{	/* Cfa/cinfo.scm 73 */
							BgL_atomz00_bglt BgL_new2149z00_3701;

							BgL_new2149z00_3701 =
								((BgL_atomz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_atomz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2149z00_3701),
								BGl_classzd2numzd2zz__objectz00(BGl_atomz00zzast_nodez00));
							{	/* Cfa/cinfo.scm 73 */
								BgL_objectz00_bglt BgL_auxz00_8053;

								BgL_auxz00_8053 = (BgL_objectz00_bglt) (BgL_new2149z00_3701);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8053, BFALSE);
							}
							BgL_res5429z00_3705 = BgL_new2149z00_3701;
						}
						BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5429z00_3705);
					}
					{	/* Cfa/cinfo.scm 73 */
						BgL_typez00_bglt BgL_arg4926z00_1669;

						BgL_arg4926z00_1669 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo.scm 73 */
							BgL_atomz00_bglt BgL_res5430z00_3713;

							{	/* Cfa/cinfo.scm 73 */
								BgL_atomz00_bglt BgL_new2144z00_3706;

								BgL_new2144z00_3706 =
									(BgL_atomz00_bglt)
									(BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 73 */
									obj_t BgL_loc2141z00_3710;

									BgL_typez00_bglt BgL_type2142z00_3711;

									obj_t BgL_value2143z00_3712;

									BgL_loc2141z00_3710 = BUNSPEC;
									BgL_type2142z00_3711 = BgL_arg4926z00_1669;
									BgL_value2143z00_3712 = BUNSPEC;
									((((BgL_atomz00_bglt) CREF(BgL_new2144z00_3706))->
											BgL_locz00) = ((obj_t) BgL_loc2141z00_3710), BUNSPEC);
									((((BgL_atomz00_bglt) CREF(BgL_new2144z00_3706))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2142z00_3711), BUNSPEC);
									((((BgL_atomz00_bglt) CREF(BgL_new2144z00_3706))->
											BgL_valuez00) = ((obj_t) BgL_value2143z00_3712), BUNSPEC);
									BgL_res5430z00_3713 = BgL_new2144z00_3706;
							}} BgL_res5430z00_3713;
					}}
					{	/* Cfa/cinfo.scm 73 */
						long BgL_arg4927z00_1670;

						BgL_arg4927z00_1670 =
							BGl_classzd2numzd2zz__objectz00(BGl_atomzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4927z00_1670);
					}
					{	/* Cfa/cinfo.scm 73 */
						BgL_atomzf2cinfozf2_bglt BgL_arg4928z00_1671;

						{	/* Cfa/cinfo.scm 73 */
							BgL_approxz00_bglt BgL_arg4929z00_1672;

							BgL_arg4929z00_1672 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 73 */
								BgL_atomzf2cinfozf2_bglt BgL_res5432z00_3722;

								{	/* Cfa/cinfo.scm 73 */
									BgL_atomzf2cinfozf2_bglt BgL_new3786z00_3717;

									BgL_new3786z00_3717 =
										((BgL_atomzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_atomzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 73 */
										BgL_atomzf2cinfozf2_bglt BgL_res5431z00_3721;

										{	/* Cfa/cinfo.scm 73 */
											BgL_atomzf2cinfozf2_bglt BgL_new3795z00_3718;

											BgL_new3795z00_3718 = BgL_new3786z00_3717;
											{	/* Cfa/cinfo.scm 73 */
												BgL_approxz00_bglt BgL_approx3794z00_3720;

												BgL_approx3794z00_3720 = BgL_arg4929z00_1672;
												((((BgL_atomzf2cinfozf2_bglt)
															CREF(BgL_new3795z00_3718))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3794z00_3720),
													BUNSPEC);
												BgL_res5431z00_3721 = BgL_new3795z00_3718;
										}} BgL_res5431z00_3721;
									}
									BgL_res5432z00_3722 = BgL_new3786z00_3717;
								}
								BgL_arg4928z00_1671 = BgL_res5432z00_3722;
						}}
						{	/* Cfa/cinfo.scm 73 */
							obj_t BgL_auxz00_8070;

							BgL_objectz00_bglt BgL_auxz00_8068;

							BgL_auxz00_8070 = (obj_t) (BgL_arg4928z00_1671);
							BgL_auxz00_8068 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8068, BgL_auxz00_8070);
				}}}
			else
				{	/* Cfa/cinfo.scm 73 */
					BFALSE;
				}
			return
				(BgL_atomzf2cinfozf2_bglt)
				(BGl_z52thezd2atomzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _atom/Cinfo-nil */
	obj_t BGl__atomzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5458)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			return (obj_t) (BGl_atomzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* reshaped-global? */
	BGL_EXPORTED_DEF bool_t BGl_reshapedzd2globalzf3z21zzcfa_infoz00(obj_t
		BgL_obj3738z00_263)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3738z00_263,
				BGl_reshapedzd2globalzd2zzcfa_infoz00);
		}
	}



/* _reshaped-global? */
	obj_t BGl__reshapedzd2globalzf3z21zzcfa_infoz00(obj_t BgL_envz00_5455,
		obj_t BgL_obj3738z00_5456)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3738z00_5456,
					BGl_reshapedzd2globalzd2zzcfa_infoz00));
		}
	}



/* widening-reshaped-global */
	BGL_EXPORTED_DEF BgL_reshapedzd2globalzd2_bglt
		BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{	/* Cfa/cinfo.scm 70 */
				BgL_reshapedzd2globalzd2_bglt BgL_new3709z00_1673;

				BgL_new3709z00_1673 =
					((BgL_reshapedzd2globalzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_reshapedzd2globalzd2_bgl))));
				return BgL_new3709z00_1673;
			}
		}
	}



/* _widening-reshaped-global */
	obj_t BGl__wideningzd2reshapedzd2globalz00zzcfa_infoz00(obj_t BgL_envz00_5746)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			return (obj_t) (BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00());
		}
	}



/* make-reshaped-global */
	BGL_EXPORTED_DEF BgL_reshapedzd2globalzd2_bglt
		BGl_makezd2reshapedzd2globalz00zzcfa_infoz00(obj_t BgL_id3711z00_267,
		obj_t BgL_name3712z00_268, BgL_typez00_bglt BgL_type3713z00_269,
		BgL_valuez00_bglt BgL_value3714z00_270, obj_t BgL_access3715z00_271,
		obj_t BgL_fastzd2alpha3716zd2_272, obj_t BgL_removable3717z00_273,
		long BgL_occurrence3718z00_274, obj_t BgL_module3719z00_275,
		obj_t BgL_import3720z00_276, bool_t BgL_evaluablezf33721zf3_277,
		obj_t BgL_library3722z00_278, bool_t BgL_userzf33723zf3_279,
		obj_t BgL_pragma3724z00_280, obj_t BgL_src3725z00_281,
		obj_t BgL_jvmzd2typezd2name3726z00_282)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{	/* Cfa/cinfo.scm 70 */
				BgL_globalz00_bglt BgL_aux3727z00_3724;

				BgL_aux3727z00_3724 =
					BGl_makezd2globalzd2zzast_varz00(BgL_id3711z00_267,
					BgL_name3712z00_268, BgL_type3713z00_269, BgL_value3714z00_270,
					BgL_access3715z00_271, BgL_fastzd2alpha3716zd2_272,
					BgL_removable3717z00_273, BgL_occurrence3718z00_274,
					BgL_module3719z00_275, BgL_import3720z00_276,
					BgL_evaluablezf33721zf3_277, BgL_library3722z00_278,
					BgL_userzf33723zf3_279, BgL_pragma3724z00_280, BgL_src3725z00_281,
					BgL_jvmzd2typezd2name3726z00_282);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3727z00_3724),
					BGl_classzd2numzd2zz__objectz00
					(BGl_reshapedzd2globalzd2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 70 */
					BgL_reshapedzd2globalzd2_bglt BgL_arg4931z00_3726;

					BgL_arg4931z00_3726 =
						BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
					{	/* Cfa/cinfo.scm 70 */
						obj_t BgL_auxz00_8089;

						BgL_objectz00_bglt BgL_auxz00_8087;

						BgL_auxz00_8089 = (obj_t) (BgL_arg4931z00_3726);
						BgL_auxz00_8087 = (BgL_objectz00_bglt) (BgL_aux3727z00_3724);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8087, BgL_auxz00_8089);
				}}
				return
					((BgL_reshapedzd2globalzd2_bglt)
					(BgL_reshapedzd2globalzd2_bglt) (BgL_aux3727z00_3724));
			}
		}
	}



/* _make-reshaped-global */
	obj_t BGl__makezd2reshapedzd2globalz00zzcfa_infoz00(obj_t BgL_envz00_5747,
		obj_t BgL_id3711z00_5748, obj_t BgL_name3712z00_5749,
		obj_t BgL_type3713z00_5750, obj_t BgL_value3714z00_5751,
		obj_t BgL_access3715z00_5752, obj_t BgL_fastzd2alpha3716zd2_5753,
		obj_t BgL_removable3717z00_5754, obj_t BgL_occurrence3718z00_5755,
		obj_t BgL_module3719z00_5756, obj_t BgL_import3720z00_5757,
		obj_t BgL_evaluablezf33721zf3_5758, obj_t BgL_library3722z00_5759,
		obj_t BgL_userzf33723zf3_5760, obj_t BgL_pragma3724z00_5761,
		obj_t BgL_src3725z00_5762, obj_t BgL_jvmzd2typezd2name3726z00_5763)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			return
				(obj_t) (BGl_makezd2reshapedzd2globalz00zzcfa_infoz00
				(BgL_id3711z00_5748, BgL_name3712z00_5749,
					(BgL_typez00_bglt) (BgL_type3713z00_5750),
					(BgL_valuez00_bglt) (BgL_value3714z00_5751), BgL_access3715z00_5752,
					BgL_fastzd2alpha3716zd2_5753, BgL_removable3717z00_5754,
					(long) CINT(BgL_occurrence3718z00_5755), BgL_module3719z00_5756,
					BgL_import3720z00_5757, CBOOL(BgL_evaluablezf33721zf3_5758),
					BgL_library3722z00_5759, CBOOL(BgL_userzf33723zf3_5760),
					BgL_pragma3724z00_5761, BgL_src3725z00_5762,
					BgL_jvmzd2typezd2name3726z00_5763));
		}
	}



/* fill-reshaped-global! */
	BGL_EXPORTED_DEF BgL_reshapedzd2globalzd2_bglt
		BGl_fillzd2reshapedzd2globalz12z12zzcfa_infoz00
		(BgL_reshapedzd2globalzd2_bglt BgL_new3729z00_283)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{	/* Cfa/cinfo.scm 70 */

				return BgL_new3729z00_283;
			}
		}
	}



/* _fill-reshaped-global! */
	obj_t BGl__fillzd2reshapedzd2globalz12z12zzcfa_infoz00(obj_t BgL_envz00_5764,
		obj_t BgL_new3729z00_5765)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{	/* Cfa/cinfo.scm 70 */
				BgL_reshapedzd2globalzd2_bglt BgL_auxz00_8101;

				{	/* Cfa/cinfo.scm 70 */

					BgL_auxz00_8101 =
						(BgL_reshapedzd2globalzd2_bglt) (BgL_new3729z00_5765);
				}
				return (obj_t) (BgL_auxz00_8101);
			}
		}
	}



/* %allocate-reshaped-global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_z52allocatezd2reshapedzd2globalz52zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{	/* Cfa/cinfo.scm 70 */
				BgL_globalz00_bglt BgL_new3731z00_6332;

				BgL_new3731z00_6332 =
					((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3731z00_6332),
					BGl_classzd2numzd2zz__objectz00
					(BGl_reshapedzd2globalzd2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 70 */
					BgL_objectz00_bglt BgL_auxz00_8108;

					BgL_auxz00_8108 = (BgL_objectz00_bglt) (BgL_new3731z00_6332);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8108, BFALSE);
				}
				return BgL_new3731z00_6332;
			}
		}
	}



/* _%allocate-reshaped-global */
	obj_t BGl__z52allocatezd2reshapedzd2globalz52zzcfa_infoz00(obj_t
		BgL_envz00_5453)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{	/* Cfa/cinfo.scm 70 */
				BgL_globalz00_bglt BgL_auxz00_8111;

				{	/* Cfa/cinfo.scm 70 */
					BgL_globalz00_bglt BgL_res5678z00_6336;

					{	/* Cfa/cinfo.scm 70 */
						BgL_globalz00_bglt BgL_new3731z00_6334;

						BgL_new3731z00_6334 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3731z00_6334),
							BGl_classzd2numzd2zz__objectz00
							(BGl_reshapedzd2globalzd2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 70 */
							BgL_objectz00_bglt BgL_auxz00_8116;

							BgL_auxz00_8116 = (BgL_objectz00_bglt) (BgL_new3731z00_6334);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8116, BFALSE);
						}
						BgL_res5678z00_6336 = BgL_new3731z00_6334;
					}
					BgL_auxz00_8111 = BgL_res5678z00_6336;
				}
				return (obj_t) (BgL_auxz00_8111);
			}
		}
	}



/* reshaped-global-nil */
	BGL_EXPORTED_DEF BgL_reshapedzd2globalzd2_bglt
		BGl_reshapedzd2globalzd2nilz00zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			if ((BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 70 */
					{	/* Cfa/cinfo.scm 70 */
						BgL_globalz00_bglt BgL_res5433z00_3738;

						{	/* Cfa/cinfo.scm 70 */
							BgL_globalz00_bglt BgL_new1750z00_3734;

							BgL_new1750z00_3734 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1750z00_3734),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* Cfa/cinfo.scm 70 */
								BgL_objectz00_bglt BgL_auxz00_8126;

								BgL_auxz00_8126 = (BgL_objectz00_bglt) (BgL_new1750z00_3734);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8126, BFALSE);
							}
							BgL_res5433z00_3738 = BgL_new1750z00_3734;
						}
						BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00 =
							(obj_t) (BgL_res5433z00_3738);
					}
					{	/* Cfa/cinfo.scm 70 */
						obj_t BgL_arg4937z00_1681;

						BgL_typez00_bglt BgL_arg4938z00_1682;

						BgL_valuez00_bglt BgL_arg4939z00_1683;

						obj_t BgL_arg4941z00_1685;

						BgL_arg4937z00_1681 = CNST_TABLE_REF(((long) 29));
						BgL_arg4938z00_1682 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4939z00_1683 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg4941z00_1685 = CNST_TABLE_REF(((long) 29));
						{	/* Cfa/cinfo.scm 70 */
							BgL_globalz00_bglt BgL_res5434z00_3772;

							{	/* Cfa/cinfo.scm 70 */
								BgL_globalz00_bglt BgL_new1732z00_3739;

								BgL_new1732z00_3739 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 70 */
									obj_t BgL_id1716z00_3756;

									obj_t BgL_name1717z00_3757;

									BgL_typez00_bglt BgL_type1718z00_3758;

									BgL_valuez00_bglt BgL_value1719z00_3759;

									obj_t BgL_access1720z00_3760;

									obj_t BgL_fastzd2alpha1721zd2_3761;

									obj_t BgL_removable1722z00_3762;

									long BgL_occurrence1723z00_3763;

									obj_t BgL_module1724z00_3764;

									obj_t BgL_import1725z00_3765;

									bool_t BgL_evaluablezf31726zf3_3766;

									obj_t BgL_library1727z00_3767;

									bool_t BgL_userzf31728zf3_3768;

									obj_t BgL_pragma1729z00_3769;

									obj_t BgL_src1730z00_3770;

									obj_t BgL_jvmzd2typezd2name1731z00_3771;

									BgL_id1716z00_3756 = BgL_arg4937z00_1681;
									BgL_name1717z00_3757 = BUNSPEC;
									BgL_type1718z00_3758 = BgL_arg4938z00_1682;
									BgL_value1719z00_3759 = BgL_arg4939z00_1683;
									BgL_access1720z00_3760 = BUNSPEC;
									BgL_fastzd2alpha1721zd2_3761 = BUNSPEC;
									BgL_removable1722z00_3762 = BUNSPEC;
									BgL_occurrence1723z00_3763 = ((long) 0);
									BgL_module1724z00_3764 = BgL_arg4941z00_1685;
									BgL_import1725z00_3765 = BUNSPEC;
									BgL_evaluablezf31726zf3_3766 = ((bool_t) 0);
									BgL_library1727z00_3767 = BUNSPEC;
									BgL_userzf31728zf3_3768 = ((bool_t) 0);
									BgL_pragma1729z00_3769 = BUNSPEC;
									BgL_src1730z00_3770 = BUNSPEC;
									BgL_jvmzd2typezd2name1731z00_3771 =
										BGl_string5578z00zzcfa_infoz00;
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_idz00) = ((obj_t) BgL_id1716z00_3756), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_namez00) = ((obj_t) BgL_name1717z00_3757), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1718z00_3758), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1719z00_3759), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_accessz00) =
										((obj_t) BgL_access1720z00_3760), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1721zd2_3761), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_removablez00) =
										((obj_t) BgL_removable1722z00_3762), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1723z00_3763), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_modulez00) =
										((obj_t) BgL_module1724z00_3764), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_importz00) =
										((obj_t) BgL_import1725z00_3765), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31726zf3_3766), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_libraryz00) =
										((obj_t) BgL_library1727z00_3767), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31728zf3_3768), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1729z00_3769), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_srcz00) = ((obj_t) BgL_src1730z00_3770), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_3739))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1731z00_3771), BUNSPEC);
									BgL_res5434z00_3772 = BgL_new1732z00_3739;
							}} BgL_res5434z00_3772;
					}}
					{	/* Cfa/cinfo.scm 70 */
						long BgL_arg4943z00_1687;

						BgL_arg4943z00_1687 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_reshapedzd2globalzd2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00),
							BgL_arg4943z00_1687);
					}
					{	/* Cfa/cinfo.scm 70 */
						BgL_reshapedzd2globalzd2_bglt BgL_arg4944z00_1688;

						BgL_arg4944z00_1688 =
							BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
						{	/* Cfa/cinfo.scm 70 */
							obj_t BgL_auxz00_8157;

							BgL_objectz00_bglt BgL_auxz00_8155;

							BgL_auxz00_8157 = (obj_t) (BgL_arg4944z00_1688);
							BgL_auxz00_8155 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8155, BgL_auxz00_8157);
				}}}
			else
				{	/* Cfa/cinfo.scm 70 */
					BFALSE;
				}
			return
				(BgL_reshapedzd2globalzd2_bglt)
				(BGl_z52thezd2reshapedzd2globalzd2nilz80zzcfa_infoz00);
		}
	}



/* _reshaped-global-nil */
	obj_t BGl__reshapedzd2globalzd2nilz00zzcfa_infoz00(obj_t BgL_envz00_5454)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			return (obj_t) (BGl_reshapedzd2globalzd2nilz00zzcfa_infoz00());
		}
	}



/* reshaped-local? */
	BGL_EXPORTED_DEF bool_t BGl_reshapedzd2localzf3z21zzcfa_infoz00(obj_t
		BgL_obj3680z00_284)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3680z00_284,
				BGl_reshapedzd2localzd2zzcfa_infoz00);
		}
	}



/* _reshaped-local? */
	obj_t BGl__reshapedzd2localzf3z21zzcfa_infoz00(obj_t BgL_envz00_5451,
		obj_t BgL_obj3680z00_5452)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3680z00_5452,
					BGl_reshapedzd2localzd2zzcfa_infoz00));
		}
	}



/* widening-reshaped-local */
	BGL_EXPORTED_DEF BgL_reshapedzd2localzd2_bglt
		BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00(obj_t
		BgL_bindingzd2value3653zd2_288)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{	/* Cfa/cinfo.scm 68 */
				BgL_reshapedzd2localzd2_bglt BgL_new3654z00_3775;

				BgL_new3654z00_3775 =
					((BgL_reshapedzd2localzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_reshapedzd2localzd2_bgl))));
				{	/* Cfa/cinfo.scm 68 */
					BgL_reshapedzd2localzd2_bglt BgL_res5435z00_3779;

					{	/* Cfa/cinfo.scm 68 */
						BgL_reshapedzd2localzd2_bglt BgL_new3670z00_3776;

						BgL_new3670z00_3776 = BgL_new3654z00_3775;
						{	/* Cfa/cinfo.scm 68 */
							obj_t BgL_bindingzd2value3669zd2_3778;

							BgL_bindingzd2value3669zd2_3778 = BgL_bindingzd2value3653zd2_288;
							((((BgL_reshapedzd2localzd2_bglt) CREF(BgL_new3670z00_3776))->
									BgL_bindingzd2valuezd2) =
								((obj_t) BgL_bindingzd2value3669zd2_3778), BUNSPEC);
							BgL_res5435z00_3779 = BgL_new3670z00_3776;
					}} BgL_res5435z00_3779;
				}
				return BgL_new3654z00_3775;
			}
		}
	}



/* _widening-reshaped-local */
	obj_t BGl__wideningzd2reshapedzd2localz00zzcfa_infoz00(obj_t BgL_envz00_5766,
		obj_t BgL_bindingzd2value3653zd2_5767)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			return
				(obj_t) (BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00
				(BgL_bindingzd2value3653zd2_5767));
		}
	}



/* make-reshaped-local */
	BGL_EXPORTED_DEF BgL_reshapedzd2localzd2_bglt
		BGl_makezd2reshapedzd2localz00zzcfa_infoz00(obj_t BgL_id3657z00_289,
		obj_t BgL_name3658z00_290, BgL_typez00_bglt BgL_type3659z00_291,
		BgL_valuez00_bglt BgL_value3660z00_292, obj_t BgL_access3661z00_293,
		obj_t BgL_fastzd2alpha3662zd2_294, obj_t BgL_removable3663z00_295,
		long BgL_occurrence3664z00_296, bool_t BgL_userzf33665zf3_297,
		long BgL_key3666z00_298, obj_t BgL_bindingzd2value3656zd2_299)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{	/* Cfa/cinfo.scm 68 */
				BgL_localz00_bglt BgL_aux3667z00_3780;

				BgL_aux3667z00_3780 =
					BGl_makezd2localzd2zzast_varz00(BgL_id3657z00_289,
					BgL_name3658z00_290, BgL_type3659z00_291, BgL_value3660z00_292,
					BgL_access3661z00_293, BgL_fastzd2alpha3662zd2_294,
					BgL_removable3663z00_295, BgL_occurrence3664z00_296,
					BgL_userzf33665zf3_297, BgL_key3666z00_298);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3667z00_3780),
					BGl_classzd2numzd2zz__objectz00
					(BGl_reshapedzd2localzd2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 68 */
					BgL_reshapedzd2localzd2_bglt BgL_arg4946z00_3782;

					{	/* Cfa/cinfo.scm 68 */
						BgL_reshapedzd2localzd2_bglt BgL_res5437z00_3792;

						{	/* Cfa/cinfo.scm 68 */
							BgL_reshapedzd2localzd2_bglt BgL_new3654z00_3787;

							BgL_new3654z00_3787 =
								((BgL_reshapedzd2localzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_reshapedzd2localzd2_bgl))));
							{	/* Cfa/cinfo.scm 68 */
								BgL_reshapedzd2localzd2_bglt BgL_res5436z00_3791;

								{	/* Cfa/cinfo.scm 68 */
									BgL_reshapedzd2localzd2_bglt BgL_new3670z00_3788;

									BgL_new3670z00_3788 = BgL_new3654z00_3787;
									{	/* Cfa/cinfo.scm 68 */
										obj_t BgL_bindingzd2value3669zd2_3790;

										BgL_bindingzd2value3669zd2_3790 =
											BgL_bindingzd2value3656zd2_299;
										((((BgL_reshapedzd2localzd2_bglt)
													CREF(BgL_new3670z00_3788))->BgL_bindingzd2valuezd2) =
											((obj_t) BgL_bindingzd2value3669zd2_3790), BUNSPEC);
										BgL_res5436z00_3791 = BgL_new3670z00_3788;
								}} BgL_res5436z00_3791;
							}
							BgL_res5437z00_3792 = BgL_new3654z00_3787;
						}
						BgL_arg4946z00_3782 = BgL_res5437z00_3792;
					}
					{	/* Cfa/cinfo.scm 68 */
						obj_t BgL_auxz00_8178;

						BgL_objectz00_bglt BgL_auxz00_8176;

						BgL_auxz00_8178 = (obj_t) (BgL_arg4946z00_3782);
						BgL_auxz00_8176 = (BgL_objectz00_bglt) (BgL_aux3667z00_3780);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8176, BgL_auxz00_8178);
				}}
				return
					((BgL_reshapedzd2localzd2_bglt)
					(BgL_reshapedzd2localzd2_bglt) (BgL_aux3667z00_3780));
			}
		}
	}



/* _make-reshaped-local */
	obj_t BGl__makezd2reshapedzd2localz00zzcfa_infoz00(obj_t BgL_envz00_5768,
		obj_t BgL_id3657z00_5769, obj_t BgL_name3658z00_5770,
		obj_t BgL_type3659z00_5771, obj_t BgL_value3660z00_5772,
		obj_t BgL_access3661z00_5773, obj_t BgL_fastzd2alpha3662zd2_5774,
		obj_t BgL_removable3663z00_5775, obj_t BgL_occurrence3664z00_5776,
		obj_t BgL_userzf33665zf3_5777, obj_t BgL_key3666z00_5778,
		obj_t BgL_bindingzd2value3656zd2_5779)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			return
				(obj_t) (BGl_makezd2reshapedzd2localz00zzcfa_infoz00(BgL_id3657z00_5769,
					BgL_name3658z00_5770, (BgL_typez00_bglt) (BgL_type3659z00_5771),
					(BgL_valuez00_bglt) (BgL_value3660z00_5772), BgL_access3661z00_5773,
					BgL_fastzd2alpha3662zd2_5774, BgL_removable3663z00_5775,
					(long) CINT(BgL_occurrence3664z00_5776),
					CBOOL(BgL_userzf33665zf3_5777), (long) CINT(BgL_key3666z00_5778),
					BgL_bindingzd2value3656zd2_5779));
		}
	}



/* fill-reshaped-local! */
	BGL_EXPORTED_DEF BgL_reshapedzd2localzd2_bglt
		BGl_fillzd2reshapedzd2localz12z12zzcfa_infoz00(BgL_reshapedzd2localzd2_bglt
		BgL_new3670z00_300, obj_t BgL_bindingzd2value3669zd2_301)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{	/* Cfa/cinfo.scm 68 */
				obj_t BgL_bindingzd2value3669zd2_6338;

				BgL_bindingzd2value3669zd2_6338 = BgL_bindingzd2value3669zd2_301;
				((((BgL_reshapedzd2localzd2_bglt) CREF(BgL_new3670z00_300))->
						BgL_bindingzd2valuezd2) =
					((obj_t) BgL_bindingzd2value3669zd2_6338), BUNSPEC);
				return BgL_new3670z00_300;
			}
		}
	}



/* _fill-reshaped-local! */
	obj_t BGl__fillzd2reshapedzd2localz12z12zzcfa_infoz00(obj_t BgL_envz00_5780,
		obj_t BgL_new3670z00_5781, obj_t BgL_bindingzd2value3669zd2_5782)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{	/* Cfa/cinfo.scm 68 */
				BgL_reshapedzd2localzd2_bglt BgL_auxz00_8191;

				{	/* Cfa/cinfo.scm 68 */
					BgL_reshapedzd2localzd2_bglt BgL_res5679z00_6342;

					{	/* Cfa/cinfo.scm 68 */
						BgL_reshapedzd2localzd2_bglt BgL_new3670z00_6339;

						BgL_new3670z00_6339 =
							(BgL_reshapedzd2localzd2_bglt) (BgL_new3670z00_5781);
						{	/* Cfa/cinfo.scm 68 */
							obj_t BgL_bindingzd2value3669zd2_6341;

							BgL_bindingzd2value3669zd2_6341 = BgL_bindingzd2value3669zd2_5782;
							((((BgL_reshapedzd2localzd2_bglt) CREF(BgL_new3670z00_6339))->
									BgL_bindingzd2valuezd2) =
								((obj_t) BgL_bindingzd2value3669zd2_6341), BUNSPEC);
							BgL_res5679z00_6342 = BgL_new3670z00_6339;
						}
					}
					BgL_auxz00_8191 = BgL_res5679z00_6342;
				}
				return (obj_t) (BgL_auxz00_8191);
			}
		}
	}



/* %allocate-reshaped-local */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_z52allocatezd2reshapedzd2localz52zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{	/* Cfa/cinfo.scm 68 */
				BgL_localz00_bglt BgL_new3673z00_6343;

				BgL_new3673z00_6343 =
					((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3673z00_6343),
					BGl_classzd2numzd2zz__objectz00
					(BGl_reshapedzd2localzd2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 68 */
					BgL_objectz00_bglt BgL_auxz00_8199;

					BgL_auxz00_8199 = (BgL_objectz00_bglt) (BgL_new3673z00_6343);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8199, BFALSE);
				}
				return BgL_new3673z00_6343;
			}
		}
	}



/* _%allocate-reshaped-local */
	obj_t BGl__z52allocatezd2reshapedzd2localz52zzcfa_infoz00(obj_t
		BgL_envz00_5449)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{	/* Cfa/cinfo.scm 68 */
				BgL_localz00_bglt BgL_auxz00_8202;

				{	/* Cfa/cinfo.scm 68 */
					BgL_localz00_bglt BgL_res5680z00_6347;

					{	/* Cfa/cinfo.scm 68 */
						BgL_localz00_bglt BgL_new3673z00_6345;

						BgL_new3673z00_6345 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3673z00_6345),
							BGl_classzd2numzd2zz__objectz00
							(BGl_reshapedzd2localzd2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 68 */
							BgL_objectz00_bglt BgL_auxz00_8207;

							BgL_auxz00_8207 = (BgL_objectz00_bglt) (BgL_new3673z00_6345);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8207, BFALSE);
						}
						BgL_res5680z00_6347 = BgL_new3673z00_6345;
					}
					BgL_auxz00_8202 = BgL_res5680z00_6347;
				}
				return (obj_t) (BgL_auxz00_8202);
			}
		}
	}



/* reshaped-local-nil */
	BGL_EXPORTED_DEF BgL_reshapedzd2localzd2_bglt
		BGl_reshapedzd2localzd2nilz00zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			if ((BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 68 */
					{	/* Cfa/cinfo.scm 68 */
						BgL_localz00_bglt BgL_res5438z00_3802;

						{	/* Cfa/cinfo.scm 68 */
							BgL_localz00_bglt BgL_new1810z00_3798;

							BgL_new1810z00_3798 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_3798),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Cfa/cinfo.scm 68 */
								BgL_objectz00_bglt BgL_auxz00_8217;

								BgL_auxz00_8217 = (BgL_objectz00_bglt) (BgL_new1810z00_3798);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8217, BFALSE);
							}
							BgL_res5438z00_3802 = BgL_new1810z00_3798;
						}
						BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00 =
							(obj_t) (BgL_res5438z00_3802);
					}
					{	/* Cfa/cinfo.scm 68 */
						obj_t BgL_arg4949z00_1698;

						BgL_typez00_bglt BgL_arg4950z00_1699;

						BgL_valuez00_bglt BgL_arg4951z00_1700;

						BgL_arg4949z00_1698 = CNST_TABLE_REF(((long) 29));
						BgL_arg4950z00_1699 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4951z00_1700 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Cfa/cinfo.scm 68 */
							BgL_localz00_bglt BgL_res5439z00_3824;

							{	/* Cfa/cinfo.scm 68 */
								BgL_localz00_bglt BgL_new1798z00_3803;

								BgL_new1798z00_3803 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 68 */
									obj_t BgL_id1788z00_3814;

									obj_t BgL_name1789z00_3815;

									BgL_typez00_bglt BgL_type1790z00_3816;

									BgL_valuez00_bglt BgL_value1791z00_3817;

									obj_t BgL_access1792z00_3818;

									obj_t BgL_fastzd2alpha1793zd2_3819;

									obj_t BgL_removable1794z00_3820;

									long BgL_occurrence1795z00_3821;

									bool_t BgL_userzf31796zf3_3822;

									long BgL_key1797z00_3823;

									BgL_id1788z00_3814 = BgL_arg4949z00_1698;
									BgL_name1789z00_3815 = BUNSPEC;
									BgL_type1790z00_3816 = BgL_arg4950z00_1699;
									BgL_value1791z00_3817 = BgL_arg4951z00_1700;
									BgL_access1792z00_3818 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_3819 = BUNSPEC;
									BgL_removable1794z00_3820 = BUNSPEC;
									BgL_occurrence1795z00_3821 = ((long) 0);
									BgL_userzf31796zf3_3822 = ((bool_t) 0);
									BgL_key1797z00_3823 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_3814), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_3815), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_3816), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_3817), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_3818), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_3819), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_3820), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_3821), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_3822), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_3803))->
											BgL_keyz00) = ((long) BgL_key1797z00_3823), BUNSPEC);
									BgL_res5439z00_3824 = BgL_new1798z00_3803;
							}} BgL_res5439z00_3824;
					}}
					{	/* Cfa/cinfo.scm 68 */
						long BgL_arg4954z00_1703;

						BgL_arg4954z00_1703 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_reshapedzd2localzd2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00),
							BgL_arg4954z00_1703);
					}
					{	/* Cfa/cinfo.scm 68 */
						BgL_reshapedzd2localzd2_bglt BgL_arg4955z00_1704;

						{	/* Cfa/cinfo.scm 68 */
							BgL_reshapedzd2localzd2_bglt BgL_res5441z00_3833;

							{	/* Cfa/cinfo.scm 68 */
								BgL_reshapedzd2localzd2_bglt BgL_new3654z00_3828;

								BgL_new3654z00_3828 =
									((BgL_reshapedzd2localzd2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_reshapedzd2localzd2_bgl))));
								{	/* Cfa/cinfo.scm 68 */
									BgL_reshapedzd2localzd2_bglt BgL_res5440z00_3832;

									{	/* Cfa/cinfo.scm 68 */
										BgL_reshapedzd2localzd2_bglt BgL_new3670z00_3829;

										BgL_new3670z00_3829 = BgL_new3654z00_3828;
										{	/* Cfa/cinfo.scm 68 */
											obj_t BgL_bindingzd2value3669zd2_3831;

											BgL_bindingzd2value3669zd2_3831 = BUNSPEC;
											((((BgL_reshapedzd2localzd2_bglt)
														CREF(BgL_new3670z00_3829))->
													BgL_bindingzd2valuezd2) =
												((obj_t) BgL_bindingzd2value3669zd2_3831), BUNSPEC);
											BgL_res5440z00_3832 = BgL_new3670z00_3829;
									}} BgL_res5440z00_3832;
								}
								BgL_res5441z00_3833 = BgL_new3654z00_3828;
							}
							BgL_arg4955z00_1704 = BgL_res5441z00_3833;
						}
						{	/* Cfa/cinfo.scm 68 */
							obj_t BgL_auxz00_8242;

							BgL_objectz00_bglt BgL_auxz00_8240;

							BgL_auxz00_8242 = (obj_t) (BgL_arg4955z00_1704);
							BgL_auxz00_8240 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8240, BgL_auxz00_8242);
				}}}
			else
				{	/* Cfa/cinfo.scm 68 */
					BFALSE;
				}
			return
				(BgL_reshapedzd2localzd2_bglt)
				(BGl_z52thezd2reshapedzd2localzd2nilz80zzcfa_infoz00);
		}
	}



/* _reshaped-local-nil */
	obj_t BGl__reshapedzd2localzd2nilz00zzcfa_infoz00(obj_t BgL_envz00_5450)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			return (obj_t) (BGl_reshapedzd2localzd2nilz00zzcfa_infoz00());
		}
	}



/* sexit/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_sexitzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3645z00_303)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3645z00_303,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _sexit/Cinfo? */
	obj_t BGl__sexitzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5447,
		obj_t BgL_obj3645z00_5448)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3645z00_5448,
					BGl_sexitzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-sexit/Cinfo */
	BGL_EXPORTED_DEF BgL_sexitzf2cinfozf2_bglt
		BGl_wideningzd2sexitzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3626z00_307)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{	/* Cfa/cinfo.scm 64 */
				BgL_sexitzf2cinfozf2_bglt BgL_new3627z00_3834;

				BgL_new3627z00_3834 =
					((BgL_sexitzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 64 */
					BgL_sexitzf2cinfozf2_bglt BgL_res5442z00_3838;

					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitzf2cinfozf2_bglt BgL_new3635z00_3835;

						BgL_new3635z00_3835 = BgL_new3627z00_3834;
						{	/* Cfa/cinfo.scm 64 */
							BgL_approxz00_bglt BgL_approx3634z00_3837;

							BgL_approx3634z00_3837 = BgL_approx3626z00_307;
							((((BgL_sexitzf2cinfozf2_bglt) CREF(BgL_new3635z00_3835))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3634z00_3837), BUNSPEC);
							BgL_res5442z00_3838 = BgL_new3635z00_3835;
					}} BgL_res5442z00_3838;
				}
				return BgL_new3627z00_3834;
			}
		}
	}



/* _widening-sexit/Cinfo */
	obj_t BGl__wideningzd2sexitzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5783,
		obj_t BgL_approx3626z00_5784)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			return
				(obj_t) (BGl_wideningzd2sexitzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3626z00_5784)));
		}
	}



/* make-sexit/Cinfo */
	BGL_EXPORTED_DEF BgL_sexitzf2cinfozf2_bglt
		BGl_makezd2sexitzf2Cinfoz20zzcfa_infoz00(obj_t BgL_handler3630z00_308,
		bool_t BgL_detachedzf33631zf3_309, BgL_approxz00_bglt BgL_approx3629z00_310)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{	/* Cfa/cinfo.scm 64 */
				BgL_sexitz00_bglt BgL_aux3632z00_3839;

				BgL_aux3632z00_3839 =
					BGl_makezd2sexitzd2zzast_varz00(BgL_handler3630z00_308,
					BgL_detachedzf33631zf3_309);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3632z00_3839),
					BGl_classzd2numzd2zz__objectz00(BGl_sexitzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 64 */
					BgL_sexitzf2cinfozf2_bglt BgL_arg4957z00_3841;

					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitzf2cinfozf2_bglt BgL_res5444z00_3851;

						{	/* Cfa/cinfo.scm 64 */
							BgL_sexitzf2cinfozf2_bglt BgL_new3627z00_3846;

							BgL_new3627z00_3846 =
								((BgL_sexitzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 64 */
								BgL_sexitzf2cinfozf2_bglt BgL_res5443z00_3850;

								{	/* Cfa/cinfo.scm 64 */
									BgL_sexitzf2cinfozf2_bglt BgL_new3635z00_3847;

									BgL_new3635z00_3847 = BgL_new3627z00_3846;
									{	/* Cfa/cinfo.scm 64 */
										BgL_approxz00_bglt BgL_approx3634z00_3849;

										BgL_approx3634z00_3849 = BgL_approx3629z00_310;
										((((BgL_sexitzf2cinfozf2_bglt) CREF(BgL_new3635z00_3847))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3634z00_3849), BUNSPEC);
										BgL_res5443z00_3850 = BgL_new3635z00_3847;
								}} BgL_res5443z00_3850;
							}
							BgL_res5444z00_3851 = BgL_new3627z00_3846;
						}
						BgL_arg4957z00_3841 = BgL_res5444z00_3851;
					}
					{	/* Cfa/cinfo.scm 64 */
						obj_t BgL_auxz00_8264;

						BgL_objectz00_bglt BgL_auxz00_8262;

						BgL_auxz00_8264 = (obj_t) (BgL_arg4957z00_3841);
						BgL_auxz00_8262 = (BgL_objectz00_bglt) (BgL_aux3632z00_3839);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8262, BgL_auxz00_8264);
				}}
				return
					((BgL_sexitzf2cinfozf2_bglt)
					(BgL_sexitzf2cinfozf2_bglt) (BgL_aux3632z00_3839));
			}
		}
	}



/* _make-sexit/Cinfo */
	obj_t BGl__makezd2sexitzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5785,
		obj_t BgL_handler3630z00_5786, obj_t BgL_detachedzf33631zf3_5787,
		obj_t BgL_approx3629z00_5788)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			return
				(obj_t) (BGl_makezd2sexitzf2Cinfoz20zzcfa_infoz00
				(BgL_handler3630z00_5786, CBOOL(BgL_detachedzf33631zf3_5787),
					(BgL_approxz00_bglt) (BgL_approx3629z00_5788)));
		}
	}



/* fill-sexit/Cinfo! */
	BGL_EXPORTED_DEF BgL_sexitzf2cinfozf2_bglt
		BGl_fillzd2sexitzf2Cinfoz12z32zzcfa_infoz00(BgL_sexitzf2cinfozf2_bglt
		BgL_new3635z00_311, BgL_approxz00_bglt BgL_approx3634z00_312)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{	/* Cfa/cinfo.scm 64 */
				BgL_approxz00_bglt BgL_approx3634z00_6349;

				BgL_approx3634z00_6349 = BgL_approx3634z00_312;
				((((BgL_sexitzf2cinfozf2_bglt) CREF(BgL_new3635z00_311))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3634z00_6349), BUNSPEC);
				return BgL_new3635z00_311;
			}
		}
	}



/* _fill-sexit/Cinfo! */
	obj_t BGl__fillzd2sexitzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5789,
		obj_t BgL_new3635z00_5790, obj_t BgL_approx3634z00_5791)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{	/* Cfa/cinfo.scm 64 */
				BgL_sexitzf2cinfozf2_bglt BgL_auxz00_8274;

				{	/* Cfa/cinfo.scm 64 */
					BgL_sexitzf2cinfozf2_bglt BgL_res5681z00_6353;

					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitzf2cinfozf2_bglt BgL_new3635z00_6350;

						BgL_approxz00_bglt BgL_approx3634z00_6351;

						BgL_new3635z00_6350 =
							(BgL_sexitzf2cinfozf2_bglt) (BgL_new3635z00_5790);
						BgL_approx3634z00_6351 =
							(BgL_approxz00_bglt) (BgL_approx3634z00_5791);
						{	/* Cfa/cinfo.scm 64 */
							BgL_approxz00_bglt BgL_approx3634z00_6352;

							BgL_approx3634z00_6352 = BgL_approx3634z00_6351;
							((((BgL_sexitzf2cinfozf2_bglt) CREF(BgL_new3635z00_6350))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3634z00_6352), BUNSPEC);
							BgL_res5681z00_6353 = BgL_new3635z00_6350;
						}
					}
					BgL_auxz00_8274 = BgL_res5681z00_6353;
				}
				return (obj_t) (BgL_auxz00_8274);
			}
		}
	}



/* %allocate-sexit/Cinfo */
	BGL_EXPORTED_DEF BgL_sexitz00_bglt
		BGl_z52allocatezd2sexitzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{	/* Cfa/cinfo.scm 64 */
				BgL_sexitz00_bglt BgL_new3638z00_6354;

				BgL_new3638z00_6354 =
					((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_sexitz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3638z00_6354),
					BGl_classzd2numzd2zz__objectz00(BGl_sexitzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 64 */
					BgL_objectz00_bglt BgL_auxz00_8283;

					BgL_auxz00_8283 = (BgL_objectz00_bglt) (BgL_new3638z00_6354);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8283, BFALSE);
				}
				return BgL_new3638z00_6354;
			}
		}
	}



/* _%allocate-sexit/Cinfo */
	obj_t BGl__z52allocatezd2sexitzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5445)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{	/* Cfa/cinfo.scm 64 */
				BgL_sexitz00_bglt BgL_auxz00_8286;

				{	/* Cfa/cinfo.scm 64 */
					BgL_sexitz00_bglt BgL_res5682z00_6358;

					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitz00_bglt BgL_new3638z00_6356;

						BgL_new3638z00_6356 =
							((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sexitz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3638z00_6356),
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 64 */
							BgL_objectz00_bglt BgL_auxz00_8291;

							BgL_auxz00_8291 = (BgL_objectz00_bglt) (BgL_new3638z00_6356);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8291, BFALSE);
						}
						BgL_res5682z00_6358 = BgL_new3638z00_6356;
					}
					BgL_auxz00_8286 = BgL_res5682z00_6358;
				}
				return (obj_t) (BgL_auxz00_8286);
			}
		}
	}



/* sexit/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_sexitzf2cinfozf2_bglt
		BGl_sexitzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			if ((BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 64 */
					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitz00_bglt BgL_res5445z00_3861;

						{	/* Cfa/cinfo.scm 64 */
							BgL_sexitz00_bglt BgL_new2072z00_3857;

							BgL_new2072z00_3857 =
								((BgL_sexitz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sexitz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2072z00_3857),
								BGl_classzd2numzd2zz__objectz00(BGl_sexitz00zzast_varz00));
							{	/* Cfa/cinfo.scm 64 */
								BgL_objectz00_bglt BgL_auxz00_8301;

								BgL_auxz00_8301 = (BgL_objectz00_bglt) (BgL_new2072z00_3857);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8301, BFALSE);
							}
							BgL_res5445z00_3861 = BgL_new2072z00_3857;
						}
						BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5445z00_3861);
					}
					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitz00_bglt BgL_res5446z00_3867;

						{	/* Cfa/cinfo.scm 64 */
							BgL_sexitz00_bglt BgL_new2068z00_3862;

							BgL_new2068z00_3862 =
								(BgL_sexitz00_bglt)
								(BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 64 */
								obj_t BgL_handler2066z00_3865;

								bool_t BgL_detachedzf32067zf3_3866;

								BgL_handler2066z00_3865 = BUNSPEC;
								BgL_detachedzf32067zf3_3866 = ((bool_t) 0);
								((((BgL_sexitz00_bglt) CREF(BgL_new2068z00_3862))->
										BgL_handlerz00) =
									((obj_t) BgL_handler2066z00_3865), BUNSPEC);
								((((BgL_sexitz00_bglt) CREF(BgL_new2068z00_3862))->
										BgL_detachedzf3zf3) =
									((bool_t) BgL_detachedzf32067zf3_3866), BUNSPEC);
								BgL_res5446z00_3867 = BgL_new2068z00_3862;
						}} BgL_res5446z00_3867;
					}
					{	/* Cfa/cinfo.scm 64 */
						long BgL_arg4960z00_1714;

						BgL_arg4960z00_1714 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4960z00_1714);
					}
					{	/* Cfa/cinfo.scm 64 */
						BgL_sexitzf2cinfozf2_bglt BgL_arg4961z00_1715;

						{	/* Cfa/cinfo.scm 64 */
							BgL_approxz00_bglt BgL_arg4962z00_1716;

							BgL_arg4962z00_1716 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 64 */
								BgL_sexitzf2cinfozf2_bglt BgL_res5448z00_3876;

								{	/* Cfa/cinfo.scm 64 */
									BgL_sexitzf2cinfozf2_bglt BgL_new3627z00_3871;

									BgL_new3627z00_3871 =
										((BgL_sexitzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_sexitzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 64 */
										BgL_sexitzf2cinfozf2_bglt BgL_res5447z00_3875;

										{	/* Cfa/cinfo.scm 64 */
											BgL_sexitzf2cinfozf2_bglt BgL_new3635z00_3872;

											BgL_new3635z00_3872 = BgL_new3627z00_3871;
											{	/* Cfa/cinfo.scm 64 */
												BgL_approxz00_bglt BgL_approx3634z00_3874;

												BgL_approx3634z00_3874 = BgL_arg4962z00_1716;
												((((BgL_sexitzf2cinfozf2_bglt)
															CREF(BgL_new3635z00_3872))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3634z00_3874),
													BUNSPEC);
												BgL_res5447z00_3875 = BgL_new3635z00_3872;
										}} BgL_res5447z00_3875;
									}
									BgL_res5448z00_3876 = BgL_new3627z00_3871;
								}
								BgL_arg4961z00_1715 = BgL_res5448z00_3876;
						}}
						{	/* Cfa/cinfo.scm 64 */
							obj_t BgL_auxz00_8316;

							BgL_objectz00_bglt BgL_auxz00_8314;

							BgL_auxz00_8316 = (obj_t) (BgL_arg4961z00_1715);
							BgL_auxz00_8314 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8314, BgL_auxz00_8316);
				}}}
			else
				{	/* Cfa/cinfo.scm 64 */
					BFALSE;
				}
			return
				(BgL_sexitzf2cinfozf2_bglt)
				(BGl_z52thezd2sexitzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _sexit/Cinfo-nil */
	obj_t BGl__sexitzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5446)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			return (obj_t) (BGl_sexitzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* cvar/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_cvarzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3623z00_314)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3623z00_314,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _cvar/Cinfo? */
	obj_t BGl__cvarzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5443,
		obj_t BgL_obj3623z00_5444)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3623z00_5444,
					BGl_cvarzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-cvar/Cinfo */
	BGL_EXPORTED_DEF BgL_cvarzf2cinfozf2_bglt
		BGl_wideningzd2cvarzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3605z00_318)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{	/* Cfa/cinfo.scm 60 */
				BgL_cvarzf2cinfozf2_bglt BgL_new3606z00_3877;

				BgL_new3606z00_3877 =
					((BgL_cvarzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cvarzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 60 */
					BgL_cvarzf2cinfozf2_bglt BgL_res5449z00_3881;

					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarzf2cinfozf2_bglt BgL_new3613z00_3878;

						BgL_new3613z00_3878 = BgL_new3606z00_3877;
						{	/* Cfa/cinfo.scm 60 */
							BgL_approxz00_bglt BgL_approx3612z00_3880;

							BgL_approx3612z00_3880 = BgL_approx3605z00_318;
							((((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_new3613z00_3878))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3612z00_3880), BUNSPEC);
							BgL_res5449z00_3881 = BgL_new3613z00_3878;
					}} BgL_res5449z00_3881;
				}
				return BgL_new3606z00_3877;
			}
		}
	}



/* _widening-cvar/Cinfo */
	obj_t BGl__wideningzd2cvarzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5792,
		obj_t BgL_approx3605z00_5793)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			return
				(obj_t) (BGl_wideningzd2cvarzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3605z00_5793)));
		}
	}



/* make-cvar/Cinfo */
	BGL_EXPORTED_DEF BgL_cvarzf2cinfozf2_bglt
		BGl_makezd2cvarzf2Cinfoz20zzcfa_infoz00(bool_t BgL_macrozf33609zf3_319,
		BgL_approxz00_bglt BgL_approx3608z00_320)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{	/* Cfa/cinfo.scm 60 */
				BgL_cvarz00_bglt BgL_aux3610z00_1718;

				BgL_aux3610z00_1718 =
					BGl_makezd2cvarzd2zzast_varz00(BgL_macrozf33609zf3_319);
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_aux3610z00_1718),
					BGl_classzd2numzd2zz__objectz00(BGl_cvarzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 60 */
					BgL_cvarzf2cinfozf2_bglt BgL_arg4964z00_1720;

					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarzf2cinfozf2_bglt BgL_res5451z00_3890;

						{	/* Cfa/cinfo.scm 60 */
							BgL_cvarzf2cinfozf2_bglt BgL_new3606z00_3885;

							BgL_new3606z00_3885 =
								((BgL_cvarzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cvarzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 60 */
								BgL_cvarzf2cinfozf2_bglt BgL_res5450z00_3889;

								{	/* Cfa/cinfo.scm 60 */
									BgL_cvarzf2cinfozf2_bglt BgL_new3613z00_3886;

									BgL_new3613z00_3886 = BgL_new3606z00_3885;
									{	/* Cfa/cinfo.scm 60 */
										BgL_approxz00_bglt BgL_approx3612z00_3888;

										BgL_approx3612z00_3888 = BgL_approx3608z00_320;
										((((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_new3613z00_3886))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3612z00_3888), BUNSPEC);
										BgL_res5450z00_3889 = BgL_new3613z00_3886;
								}} BgL_res5450z00_3889;
							}
							BgL_res5451z00_3890 = BgL_new3606z00_3885;
						}
						BgL_arg4964z00_1720 = BgL_res5451z00_3890;
					}
					{	/* Cfa/cinfo.scm 60 */
						obj_t BgL_auxz00_8338;

						BgL_objectz00_bglt BgL_auxz00_8336;

						BgL_auxz00_8338 = (obj_t) (BgL_arg4964z00_1720);
						BgL_auxz00_8336 = (BgL_objectz00_bglt) (BgL_aux3610z00_1718);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8336, BgL_auxz00_8338);
				}}
				return
					((BgL_cvarzf2cinfozf2_bglt)
					(BgL_cvarzf2cinfozf2_bglt) (BgL_aux3610z00_1718));
			}
		}
	}



/* _make-cvar/Cinfo */
	obj_t BGl__makezd2cvarzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5794,
		obj_t BgL_macrozf33609zf3_5795, obj_t BgL_approx3608z00_5796)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			return
				(obj_t) (BGl_makezd2cvarzf2Cinfoz20zzcfa_infoz00(CBOOL
					(BgL_macrozf33609zf3_5795),
					(BgL_approxz00_bglt) (BgL_approx3608z00_5796)));
		}
	}



/* fill-cvar/Cinfo! */
	BGL_EXPORTED_DEF BgL_cvarzf2cinfozf2_bglt
		BGl_fillzd2cvarzf2Cinfoz12z32zzcfa_infoz00(BgL_cvarzf2cinfozf2_bglt
		BgL_new3613z00_321, BgL_approxz00_bglt BgL_approx3612z00_322)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{	/* Cfa/cinfo.scm 60 */
				BgL_approxz00_bglt BgL_approx3612z00_6360;

				BgL_approx3612z00_6360 = BgL_approx3612z00_322;
				((((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_new3613z00_321))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3612z00_6360), BUNSPEC);
				return BgL_new3613z00_321;
			}
		}
	}



/* _fill-cvar/Cinfo! */
	obj_t BGl__fillzd2cvarzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5797,
		obj_t BgL_new3613z00_5798, obj_t BgL_approx3612z00_5799)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{	/* Cfa/cinfo.scm 60 */
				BgL_cvarzf2cinfozf2_bglt BgL_auxz00_8348;

				{	/* Cfa/cinfo.scm 60 */
					BgL_cvarzf2cinfozf2_bglt BgL_res5683z00_6364;

					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarzf2cinfozf2_bglt BgL_new3613z00_6361;

						BgL_approxz00_bglt BgL_approx3612z00_6362;

						BgL_new3613z00_6361 =
							(BgL_cvarzf2cinfozf2_bglt) (BgL_new3613z00_5798);
						BgL_approx3612z00_6362 =
							(BgL_approxz00_bglt) (BgL_approx3612z00_5799);
						{	/* Cfa/cinfo.scm 60 */
							BgL_approxz00_bglt BgL_approx3612z00_6363;

							BgL_approx3612z00_6363 = BgL_approx3612z00_6362;
							((((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_new3613z00_6361))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3612z00_6363), BUNSPEC);
							BgL_res5683z00_6364 = BgL_new3613z00_6361;
						}
					}
					BgL_auxz00_8348 = BgL_res5683z00_6364;
				}
				return (obj_t) (BgL_auxz00_8348);
			}
		}
	}



/* %allocate-cvar/Cinfo */
	BGL_EXPORTED_DEF BgL_cvarz00_bglt
		BGl_z52allocatezd2cvarzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{	/* Cfa/cinfo.scm 60 */
				BgL_cvarz00_bglt BgL_new3616z00_6365;

				BgL_new3616z00_6365 =
					((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cvarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3616z00_6365),
					BGl_classzd2numzd2zz__objectz00(BGl_cvarzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 60 */
					BgL_objectz00_bglt BgL_auxz00_8357;

					BgL_auxz00_8357 = (BgL_objectz00_bglt) (BgL_new3616z00_6365);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8357, BFALSE);
				}
				return BgL_new3616z00_6365;
			}
		}
	}



/* _%allocate-cvar/Cinfo */
	obj_t BGl__z52allocatezd2cvarzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5441)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{	/* Cfa/cinfo.scm 60 */
				BgL_cvarz00_bglt BgL_auxz00_8360;

				{	/* Cfa/cinfo.scm 60 */
					BgL_cvarz00_bglt BgL_res5684z00_6369;

					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarz00_bglt BgL_new3616z00_6367;

						BgL_new3616z00_6367 =
							((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cvarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3616z00_6367),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cvarzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_8365;

							BgL_auxz00_8365 = (BgL_objectz00_bglt) (BgL_new3616z00_6367);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8365, BFALSE);
						}
						BgL_res5684z00_6369 = BgL_new3616z00_6367;
					}
					BgL_auxz00_8360 = BgL_res5684z00_6369;
				}
				return (obj_t) (BgL_auxz00_8360);
			}
		}
	}



/* cvar/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_cvarzf2cinfozf2_bglt
		BGl_cvarzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			if ((BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 60 */
					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarz00_bglt BgL_res5452z00_3900;

						{	/* Cfa/cinfo.scm 60 */
							BgL_cvarz00_bglt BgL_new2056z00_3896;

							BgL_new2056z00_3896 =
								((BgL_cvarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cvarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2056z00_3896),
								BGl_classzd2numzd2zz__objectz00(BGl_cvarz00zzast_varz00));
							{	/* Cfa/cinfo.scm 60 */
								BgL_objectz00_bglt BgL_auxz00_8375;

								BgL_auxz00_8375 = (BgL_objectz00_bglt) (BgL_new2056z00_3896);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8375, BFALSE);
							}
							BgL_res5452z00_3900 = BgL_new2056z00_3896;
						}
						BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5452z00_3900);
					}
					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarz00_bglt BgL_res5453z00_3904;

						{	/* Cfa/cinfo.scm 60 */
							BgL_cvarz00_bglt BgL_new2053z00_3901;

							BgL_new2053z00_3901 =
								(BgL_cvarz00_bglt)
								(BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 60 */
								bool_t BgL_macrozf32052zf3_3903;

								BgL_macrozf32052zf3_3903 = ((bool_t) 0);
								((((BgL_cvarz00_bglt) CREF(BgL_new2053z00_3901))->
										BgL_macrozf3zf3) =
									((bool_t) BgL_macrozf32052zf3_3903), BUNSPEC);
								BgL_res5453z00_3904 = BgL_new2053z00_3901;
						}} BgL_res5453z00_3904;
					}
					{	/* Cfa/cinfo.scm 60 */
						long BgL_arg4967z00_1726;

						BgL_arg4967z00_1726 =
							BGl_classzd2numzd2zz__objectz00(BGl_cvarzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4967z00_1726);
					}
					{	/* Cfa/cinfo.scm 60 */
						BgL_cvarzf2cinfozf2_bglt BgL_arg4968z00_1727;

						{	/* Cfa/cinfo.scm 60 */
							BgL_approxz00_bglt BgL_arg4969z00_1728;

							BgL_arg4969z00_1728 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 60 */
								BgL_cvarzf2cinfozf2_bglt BgL_res5455z00_3913;

								{	/* Cfa/cinfo.scm 60 */
									BgL_cvarzf2cinfozf2_bglt BgL_new3606z00_3908;

									BgL_new3606z00_3908 =
										((BgL_cvarzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cvarzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 60 */
										BgL_cvarzf2cinfozf2_bglt BgL_res5454z00_3912;

										{	/* Cfa/cinfo.scm 60 */
											BgL_cvarzf2cinfozf2_bglt BgL_new3613z00_3909;

											BgL_new3613z00_3909 = BgL_new3606z00_3908;
											{	/* Cfa/cinfo.scm 60 */
												BgL_approxz00_bglt BgL_approx3612z00_3911;

												BgL_approx3612z00_3911 = BgL_arg4969z00_1728;
												((((BgL_cvarzf2cinfozf2_bglt)
															CREF(BgL_new3613z00_3909))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3612z00_3911),
													BUNSPEC);
												BgL_res5454z00_3912 = BgL_new3613z00_3909;
										}} BgL_res5454z00_3912;
									}
									BgL_res5455z00_3913 = BgL_new3606z00_3908;
								}
								BgL_arg4968z00_1727 = BgL_res5455z00_3913;
						}}
						{	/* Cfa/cinfo.scm 60 */
							obj_t BgL_auxz00_8389;

							BgL_objectz00_bglt BgL_auxz00_8387;

							BgL_auxz00_8389 = (obj_t) (BgL_arg4968z00_1727);
							BgL_auxz00_8387 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8387, BgL_auxz00_8389);
				}}}
			else
				{	/* Cfa/cinfo.scm 60 */
					BFALSE;
				}
			return
				(BgL_cvarzf2cinfozf2_bglt)
				(BGl_z52thezd2cvarzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _cvar/Cinfo-nil */
	obj_t BGl__cvarzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5442)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			return (obj_t) (BGl_cvarzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* svar/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_svarzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3597z00_324)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3597z00_324,
				BGl_svarzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _svar/Cinfo? */
	obj_t BGl__svarzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5439,
		obj_t BgL_obj3597z00_5440)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3597z00_5440,
					BGl_svarzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-svar/Cinfo */
	BGL_EXPORTED_DEF BgL_svarzf2cinfozf2_bglt
		BGl_wideningzd2svarzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3574z00_328, bool_t BgL_clozd2envzf33575z21_329)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{	/* Cfa/cinfo.scm 54 */
				BgL_svarzf2cinfozf2_bglt BgL_new3576z00_3914;

				BgL_new3576z00_3914 =
					((BgL_svarzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_svarzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 54 */
					BgL_svarzf2cinfozf2_bglt BgL_res5456z00_3920;

					{	/* Cfa/cinfo.scm 54 */
						BgL_svarzf2cinfozf2_bglt BgL_new3585z00_3915;

						BgL_new3585z00_3915 = BgL_new3576z00_3914;
						{	/* Cfa/cinfo.scm 54 */
							BgL_approxz00_bglt BgL_approx3583z00_3918;

							bool_t BgL_clozd2envzf33584z21_3919;

							BgL_approx3583z00_3918 = BgL_approx3574z00_328;
							BgL_clozd2envzf33584z21_3919 = BgL_clozd2envzf33575z21_329;
							((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_3915))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3583z00_3918), BUNSPEC);
							((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_3915))->
									BgL_clozd2envzf3z21) =
								((bool_t) BgL_clozd2envzf33584z21_3919), BUNSPEC);
							BgL_res5456z00_3920 = BgL_new3585z00_3915;
					}} BgL_res5456z00_3920;
				}
				return BgL_new3576z00_3914;
			}
		}
	}



/* _widening-svar/Cinfo */
	obj_t BGl__wideningzd2svarzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5800,
		obj_t BgL_approx3574z00_5801, obj_t BgL_clozd2envzf33575z21_5802)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			return
				(obj_t) (BGl_wideningzd2svarzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3574z00_5801),
					CBOOL(BgL_clozd2envzf33575z21_5802)));
		}
	}



/* make-svar/Cinfo */
	BGL_EXPORTED_DEF BgL_svarzf2cinfozf2_bglt
		BGl_makezd2svarzf2Cinfoz20zzcfa_infoz00(obj_t BgL_loc3580z00_330,
		BgL_approxz00_bglt BgL_approx3578z00_331,
		bool_t BgL_clozd2envzf33579z21_332)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{	/* Cfa/cinfo.scm 54 */
				BgL_svarz00_bglt BgL_aux3581z00_3921;

				BgL_aux3581z00_3921 =
					BGl_makezd2svarzd2zzast_varz00(BgL_loc3580z00_330);
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_aux3581z00_3921),
					BGl_classzd2numzd2zz__objectz00(BGl_svarzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 54 */
					BgL_svarzf2cinfozf2_bglt BgL_arg4971z00_3923;

					{	/* Cfa/cinfo.scm 54 */
						BgL_svarzf2cinfozf2_bglt BgL_res5458z00_3936;

						{	/* Cfa/cinfo.scm 54 */
							BgL_svarzf2cinfozf2_bglt BgL_new3576z00_3929;

							BgL_new3576z00_3929 =
								((BgL_svarzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 54 */
								BgL_svarzf2cinfozf2_bglt BgL_res5457z00_3935;

								{	/* Cfa/cinfo.scm 54 */
									BgL_svarzf2cinfozf2_bglt BgL_new3585z00_3930;

									BgL_new3585z00_3930 = BgL_new3576z00_3929;
									{	/* Cfa/cinfo.scm 54 */
										BgL_approxz00_bglt BgL_approx3583z00_3933;

										bool_t BgL_clozd2envzf33584z21_3934;

										BgL_approx3583z00_3933 = BgL_approx3578z00_331;
										BgL_clozd2envzf33584z21_3934 = BgL_clozd2envzf33579z21_332;
										((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_3930))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3583z00_3933), BUNSPEC);
										((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_3930))->
												BgL_clozd2envzf3z21) =
											((bool_t) BgL_clozd2envzf33584z21_3934), BUNSPEC);
										BgL_res5457z00_3935 = BgL_new3585z00_3930;
								}} BgL_res5457z00_3935;
							}
							BgL_res5458z00_3936 = BgL_new3576z00_3929;
						}
						BgL_arg4971z00_3923 = BgL_res5458z00_3936;
					}
					{	/* Cfa/cinfo.scm 54 */
						obj_t BgL_auxz00_8414;

						BgL_objectz00_bglt BgL_auxz00_8412;

						BgL_auxz00_8414 = (obj_t) (BgL_arg4971z00_3923);
						BgL_auxz00_8412 = (BgL_objectz00_bglt) (BgL_aux3581z00_3921);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8412, BgL_auxz00_8414);
				}}
				return
					((BgL_svarzf2cinfozf2_bglt)
					(BgL_svarzf2cinfozf2_bglt) (BgL_aux3581z00_3921));
			}
		}
	}



/* _make-svar/Cinfo */
	obj_t BGl__makezd2svarzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5803,
		obj_t BgL_loc3580z00_5804, obj_t BgL_approx3578z00_5805,
		obj_t BgL_clozd2envzf33579z21_5806)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			return
				(obj_t) (BGl_makezd2svarzf2Cinfoz20zzcfa_infoz00(BgL_loc3580z00_5804,
					(BgL_approxz00_bglt) (BgL_approx3578z00_5805),
					CBOOL(BgL_clozd2envzf33579z21_5806)));
		}
	}



/* fill-svar/Cinfo! */
	BGL_EXPORTED_DEF BgL_svarzf2cinfozf2_bglt
		BGl_fillzd2svarzf2Cinfoz12z32zzcfa_infoz00(BgL_svarzf2cinfozf2_bglt
		BgL_new3585z00_333, BgL_approxz00_bglt BgL_approx3583z00_334,
		bool_t BgL_clozd2envzf33584z21_335)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{	/* Cfa/cinfo.scm 54 */
				BgL_approxz00_bglt BgL_approx3583z00_6371;

				bool_t BgL_clozd2envzf33584z21_6372;

				BgL_approx3583z00_6371 = BgL_approx3583z00_334;
				BgL_clozd2envzf33584z21_6372 = BgL_clozd2envzf33584z21_335;
				((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_333))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3583z00_6371), BUNSPEC);
				((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_333))->
						BgL_clozd2envzf3z21) =
					((bool_t) BgL_clozd2envzf33584z21_6372), BUNSPEC);
				return BgL_new3585z00_333;
			}
		}
	}



/* _fill-svar/Cinfo! */
	obj_t BGl__fillzd2svarzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5807,
		obj_t BgL_new3585z00_5808, obj_t BgL_approx3583z00_5809,
		obj_t BgL_clozd2envzf33584z21_5810)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{	/* Cfa/cinfo.scm 54 */
				BgL_svarzf2cinfozf2_bglt BgL_auxz00_8425;

				{	/* Cfa/cinfo.scm 54 */
					BgL_svarzf2cinfozf2_bglt BgL_res5685z00_6378;

					{	/* Cfa/cinfo.scm 54 */
						BgL_svarzf2cinfozf2_bglt BgL_new3585z00_6373;

						BgL_approxz00_bglt BgL_approx3583z00_6374;

						bool_t BgL_clozd2envzf33584z21_6375;

						BgL_new3585z00_6373 =
							(BgL_svarzf2cinfozf2_bglt) (BgL_new3585z00_5808);
						BgL_approx3583z00_6374 =
							(BgL_approxz00_bglt) (BgL_approx3583z00_5809);
						BgL_clozd2envzf33584z21_6375 = CBOOL(BgL_clozd2envzf33584z21_5810);
						{	/* Cfa/cinfo.scm 54 */
							BgL_approxz00_bglt BgL_approx3583z00_6376;

							bool_t BgL_clozd2envzf33584z21_6377;

							BgL_approx3583z00_6376 = BgL_approx3583z00_6374;
							BgL_clozd2envzf33584z21_6377 = BgL_clozd2envzf33584z21_6375;
							((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_6373))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3583z00_6376), BUNSPEC);
							((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_new3585z00_6373))->
									BgL_clozd2envzf3z21) =
								((bool_t) BgL_clozd2envzf33584z21_6377), BUNSPEC);
							BgL_res5685z00_6378 = BgL_new3585z00_6373;
						}
					}
					BgL_auxz00_8425 = BgL_res5685z00_6378;
				}
				return (obj_t) (BgL_auxz00_8425);
			}
		}
	}



/* %allocate-svar/Cinfo */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_z52allocatezd2svarzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{	/* Cfa/cinfo.scm 54 */
				BgL_svarz00_bglt BgL_new3589z00_6379;

				BgL_new3589z00_6379 =
					((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_svarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3589z00_6379),
					BGl_classzd2numzd2zz__objectz00(BGl_svarzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 54 */
					BgL_objectz00_bglt BgL_auxz00_8436;

					BgL_auxz00_8436 = (BgL_objectz00_bglt) (BgL_new3589z00_6379);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8436, BFALSE);
				}
				return BgL_new3589z00_6379;
			}
		}
	}



/* _%allocate-svar/Cinfo */
	obj_t BGl__z52allocatezd2svarzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5437)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{	/* Cfa/cinfo.scm 54 */
				BgL_svarz00_bglt BgL_auxz00_8439;

				{	/* Cfa/cinfo.scm 54 */
					BgL_svarz00_bglt BgL_res5686z00_6383;

					{	/* Cfa/cinfo.scm 54 */
						BgL_svarz00_bglt BgL_new3589z00_6381;

						BgL_new3589z00_6381 =
							((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3589z00_6381),
							BGl_classzd2numzd2zz__objectz00
							(BGl_svarzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 54 */
							BgL_objectz00_bglt BgL_auxz00_8444;

							BgL_auxz00_8444 = (BgL_objectz00_bglt) (BgL_new3589z00_6381);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8444, BFALSE);
						}
						BgL_res5686z00_6383 = BgL_new3589z00_6381;
					}
					BgL_auxz00_8439 = BgL_res5686z00_6383;
				}
				return (obj_t) (BgL_auxz00_8439);
			}
		}
	}



/* svar/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_svarzf2cinfozf2_bglt
		BGl_svarzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			if ((BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 54 */
					{	/* Cfa/cinfo.scm 54 */
						BgL_svarz00_bglt BgL_res5459z00_3947;

						{	/* Cfa/cinfo.scm 54 */
							BgL_svarz00_bglt BgL_new2028z00_3943;

							BgL_new2028z00_3943 =
								((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2028z00_3943),
								BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
							{	/* Cfa/cinfo.scm 54 */
								BgL_objectz00_bglt BgL_auxz00_8454;

								BgL_auxz00_8454 = (BgL_objectz00_bglt) (BgL_new2028z00_3943);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8454, BFALSE);
							}
							BgL_res5459z00_3947 = BgL_new2028z00_3943;
						}
						BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5459z00_3947);
					}
					{	/* Cfa/cinfo.scm 54 */
						BgL_svarz00_bglt BgL_res5460z00_3951;

						{	/* Cfa/cinfo.scm 54 */
							BgL_svarz00_bglt BgL_new2025z00_3948;

							BgL_new2025z00_3948 =
								(BgL_svarz00_bglt)
								(BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 54 */
								obj_t BgL_loc2024z00_3950;

								BgL_loc2024z00_3950 = BUNSPEC;
								((((BgL_svarz00_bglt) CREF(BgL_new2025z00_3948))->BgL_locz00) =
									((obj_t) BgL_loc2024z00_3950), BUNSPEC);
								BgL_res5460z00_3951 = BgL_new2025z00_3948;
						}} BgL_res5460z00_3951;
					}
					{	/* Cfa/cinfo.scm 54 */
						long BgL_arg4974z00_1739;

						BgL_arg4974z00_1739 =
							BGl_classzd2numzd2zz__objectz00(BGl_svarzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4974z00_1739);
					}
					{	/* Cfa/cinfo.scm 54 */
						BgL_svarzf2cinfozf2_bglt BgL_arg4975z00_1740;

						{	/* Cfa/cinfo.scm 54 */
							BgL_approxz00_bglt BgL_arg4977z00_1741;

							BgL_arg4977z00_1741 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 54 */
								BgL_svarzf2cinfozf2_bglt BgL_res5462z00_3963;

								{	/* Cfa/cinfo.scm 54 */
									BgL_svarzf2cinfozf2_bglt BgL_new3576z00_3956;

									BgL_new3576z00_3956 =
										((BgL_svarzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_svarzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 54 */
										BgL_svarzf2cinfozf2_bglt BgL_res5461z00_3962;

										{	/* Cfa/cinfo.scm 54 */
											BgL_svarzf2cinfozf2_bglt BgL_new3585z00_3957;

											BgL_new3585z00_3957 = BgL_new3576z00_3956;
											{	/* Cfa/cinfo.scm 54 */
												BgL_approxz00_bglt BgL_approx3583z00_3960;

												bool_t BgL_clozd2envzf33584z21_3961;

												BgL_approx3583z00_3960 = BgL_arg4977z00_1741;
												BgL_clozd2envzf33584z21_3961 = ((bool_t) 0);
												((((BgL_svarzf2cinfozf2_bglt)
															CREF(BgL_new3585z00_3957))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3583z00_3960),
													BUNSPEC);
												((((BgL_svarzf2cinfozf2_bglt)
															CREF(BgL_new3585z00_3957))->BgL_clozd2envzf3z21) =
													((bool_t) BgL_clozd2envzf33584z21_3961), BUNSPEC);
												BgL_res5461z00_3962 = BgL_new3585z00_3957;
										}} BgL_res5461z00_3962;
									}
									BgL_res5462z00_3963 = BgL_new3576z00_3956;
								}
								BgL_arg4975z00_1740 = BgL_res5462z00_3963;
						}}
						{	/* Cfa/cinfo.scm 54 */
							obj_t BgL_auxz00_8469;

							BgL_objectz00_bglt BgL_auxz00_8467;

							BgL_auxz00_8469 = (obj_t) (BgL_arg4975z00_1740);
							BgL_auxz00_8467 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8467, BgL_auxz00_8469);
				}}}
			else
				{	/* Cfa/cinfo.scm 54 */
					BFALSE;
				}
			return
				(BgL_svarzf2cinfozf2_bglt)
				(BGl_z52thezd2svarzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _svar/Cinfo-nil */
	obj_t BGl__svarzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5438)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			return (obj_t) (BGl_svarzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* pre-clo-env? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2clozd2envzf3zf3zzcfa_infoz00(obj_t
		BgL_obj3570z00_340)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3570z00_340,
				BGl_prezd2clozd2envz00zzcfa_infoz00);
		}
	}



/* _pre-clo-env? */
	obj_t BGl__prezd2clozd2envzf3zf3zzcfa_infoz00(obj_t BgL_envz00_5435,
		obj_t BgL_obj3570z00_5436)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3570z00_5436,
					BGl_prezd2clozd2envz00zzcfa_infoz00));
		}
	}



/* widening-pre-clo-env */
	BGL_EXPORTED_DEF BgL_prezd2clozd2envz00_bglt
		BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{	/* Cfa/cinfo.scm 53 */
				BgL_prezd2clozd2envz00_bglt BgL_new3556z00_1742;

				BgL_new3556z00_1742 =
					((BgL_prezd2clozd2envz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_prezd2clozd2envz00_bgl))));
				return BgL_new3556z00_1742;
			}
		}
	}



/* _widening-pre-clo-env */
	obj_t BGl__wideningzd2prezd2clozd2envzd2zzcfa_infoz00(obj_t BgL_envz00_5811)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			return (obj_t) (BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00());
		}
	}



/* make-pre-clo-env */
	BGL_EXPORTED_DEF BgL_prezd2clozd2envz00_bglt
		BGl_makezd2prezd2clozd2envzd2zzcfa_infoz00(obj_t BgL_loc3558z00_344)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{	/* Cfa/cinfo.scm 53 */
				BgL_svarz00_bglt BgL_aux3559z00_1743;

				BgL_aux3559z00_1743 =
					BGl_makezd2svarzd2zzast_varz00(BgL_loc3558z00_344);
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_aux3559z00_1743),
					BGl_classzd2numzd2zz__objectz00(BGl_prezd2clozd2envz00zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 53 */
					BgL_prezd2clozd2envz00_bglt BgL_arg4979z00_1745;

					BgL_arg4979z00_1745 =
						BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00();
					{	/* Cfa/cinfo.scm 53 */
						obj_t BgL_auxz00_8488;

						BgL_objectz00_bglt BgL_auxz00_8486;

						BgL_auxz00_8488 = (obj_t) (BgL_arg4979z00_1745);
						BgL_auxz00_8486 = (BgL_objectz00_bglt) (BgL_aux3559z00_1743);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8486, BgL_auxz00_8488);
					}
				}
				return
					((BgL_prezd2clozd2envz00_bglt)
					(BgL_prezd2clozd2envz00_bglt) (BgL_aux3559z00_1743));
			}
		}
	}



/* _make-pre-clo-env */
	obj_t BGl__makezd2prezd2clozd2envzd2zzcfa_infoz00(obj_t BgL_envz00_5812,
		obj_t BgL_loc3558z00_5813)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			return
				(obj_t) (BGl_makezd2prezd2clozd2envzd2zzcfa_infoz00
				(BgL_loc3558z00_5813));
		}
	}



/* fill-pre-clo-env! */
	BGL_EXPORTED_DEF BgL_prezd2clozd2envz00_bglt
		BGl_fillzd2prezd2clozd2envz12zc0zzcfa_infoz00(BgL_prezd2clozd2envz00_bglt
		BgL_new3561z00_345)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{	/* Cfa/cinfo.scm 53 */

				return BgL_new3561z00_345;
			}
		}
	}



/* _fill-pre-clo-env! */
	obj_t BGl__fillzd2prezd2clozd2envz12zc0zzcfa_infoz00(obj_t BgL_envz00_5814,
		obj_t BgL_new3561z00_5815)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{	/* Cfa/cinfo.scm 53 */
				BgL_prezd2clozd2envz00_bglt BgL_auxz00_8495;

				{	/* Cfa/cinfo.scm 53 */

					BgL_auxz00_8495 = (BgL_prezd2clozd2envz00_bglt) (BgL_new3561z00_5815);
				}
				return (obj_t) (BgL_auxz00_8495);
			}
		}
	}



/* %allocate-pre-clo-env */
	BGL_EXPORTED_DEF BgL_svarz00_bglt
		BGl_z52allocatezd2prezd2clozd2envz80zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{	/* Cfa/cinfo.scm 53 */
				BgL_svarz00_bglt BgL_new3563z00_6386;

				BgL_new3563z00_6386 =
					((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_svarz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3563z00_6386),
					BGl_classzd2numzd2zz__objectz00(BGl_prezd2clozd2envz00zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 53 */
					BgL_objectz00_bglt BgL_auxz00_8502;

					BgL_auxz00_8502 = (BgL_objectz00_bglt) (BgL_new3563z00_6386);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8502, BFALSE);
				}
				return BgL_new3563z00_6386;
			}
		}
	}



/* _%allocate-pre-clo-env */
	obj_t BGl__z52allocatezd2prezd2clozd2envz80zzcfa_infoz00(obj_t
		BgL_envz00_5433)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{	/* Cfa/cinfo.scm 53 */
				BgL_svarz00_bglt BgL_auxz00_8505;

				{	/* Cfa/cinfo.scm 53 */
					BgL_svarz00_bglt BgL_res5687z00_6390;

					{	/* Cfa/cinfo.scm 53 */
						BgL_svarz00_bglt BgL_new3563z00_6388;

						BgL_new3563z00_6388 =
							((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3563z00_6388),
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2clozd2envz00zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 53 */
							BgL_objectz00_bglt BgL_auxz00_8510;

							BgL_auxz00_8510 = (BgL_objectz00_bglt) (BgL_new3563z00_6388);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8510, BFALSE);
						}
						BgL_res5687z00_6390 = BgL_new3563z00_6388;
					}
					BgL_auxz00_8505 = BgL_res5687z00_6390;
				}
				return (obj_t) (BgL_auxz00_8505);
			}
		}
	}



/* pre-clo-env-nil */
	BGL_EXPORTED_DEF BgL_prezd2clozd2envz00_bglt
		BGl_prezd2clozd2envzd2nilzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			if ((BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 53 */
					{	/* Cfa/cinfo.scm 53 */
						BgL_svarz00_bglt BgL_res5463z00_3975;

						{	/* Cfa/cinfo.scm 53 */
							BgL_svarz00_bglt BgL_new2028z00_3971;

							BgL_new2028z00_3971 =
								((BgL_svarz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_svarz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2028z00_3971),
								BGl_classzd2numzd2zz__objectz00(BGl_svarz00zzast_varz00));
							{	/* Cfa/cinfo.scm 53 */
								BgL_objectz00_bglt BgL_auxz00_8520;

								BgL_auxz00_8520 = (BgL_objectz00_bglt) (BgL_new2028z00_3971);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8520, BFALSE);
							}
							BgL_res5463z00_3975 = BgL_new2028z00_3971;
						}
						BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00 =
							(obj_t) (BgL_res5463z00_3975);
					}
					{	/* Cfa/cinfo.scm 53 */
						BgL_svarz00_bglt BgL_res5464z00_3979;

						{	/* Cfa/cinfo.scm 53 */
							BgL_svarz00_bglt BgL_new2025z00_3976;

							BgL_new2025z00_3976 =
								(BgL_svarz00_bglt)
								(BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 53 */
								obj_t BgL_loc2024z00_3978;

								BgL_loc2024z00_3978 = BUNSPEC;
								((((BgL_svarz00_bglt) CREF(BgL_new2025z00_3976))->BgL_locz00) =
									((obj_t) BgL_loc2024z00_3978), BUNSPEC);
								BgL_res5464z00_3979 = BgL_new2025z00_3976;
						}} BgL_res5464z00_3979;
					}
					{	/* Cfa/cinfo.scm 53 */
						long BgL_arg4982z00_1750;

						BgL_arg4982z00_1750 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_prezd2clozd2envz00zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00),
							BgL_arg4982z00_1750);
					}
					{	/* Cfa/cinfo.scm 53 */
						BgL_prezd2clozd2envz00_bglt BgL_arg4983z00_1751;

						BgL_arg4983z00_1751 =
							BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00();
						{	/* Cfa/cinfo.scm 53 */
							obj_t BgL_auxz00_8532;

							BgL_objectz00_bglt BgL_auxz00_8530;

							BgL_auxz00_8532 = (obj_t) (BgL_arg4983z00_1751);
							BgL_auxz00_8530 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8530, BgL_auxz00_8532);
				}}}
			else
				{	/* Cfa/cinfo.scm 53 */
					BFALSE;
				}
			return
				(BgL_prezd2clozd2envz00_bglt)
				(BGl_z52thezd2prezd2clozd2envzd2nilz52zzcfa_infoz00);
		}
	}



/* _pre-clo-env-nil */
	obj_t BGl__prezd2clozd2envzd2nilzd2zzcfa_infoz00(obj_t BgL_envz00_5434)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			return (obj_t) (BGl_prezd2clozd2envzd2nilzd2zzcfa_infoz00());
		}
	}



/* scnst/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_scnstzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3547z00_346)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3547z00_346,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _scnst/Cinfo? */
	obj_t BGl__scnstzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5431,
		obj_t BgL_obj3547z00_5432)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3547z00_5432,
					BGl_scnstzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-scnst/Cinfo */
	BGL_EXPORTED_DEF BgL_scnstzf2cinfozf2_bglt
		BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3527z00_350)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{	/* Cfa/cinfo.scm 49 */
				BgL_scnstzf2cinfozf2_bglt BgL_new3528z00_3982;

				BgL_new3528z00_3982 =
					((BgL_scnstzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_scnstzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 49 */
					BgL_scnstzf2cinfozf2_bglt BgL_res5465z00_3986;

					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstzf2cinfozf2_bglt BgL_new3537z00_3983;

						BgL_new3537z00_3983 = BgL_new3528z00_3982;
						{	/* Cfa/cinfo.scm 49 */
							BgL_approxz00_bglt BgL_approx3536z00_3985;

							BgL_approx3536z00_3985 = BgL_approx3527z00_350;
							((((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_new3537z00_3983))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3536z00_3985), BUNSPEC);
							BgL_res5465z00_3986 = BgL_new3537z00_3983;
					}} BgL_res5465z00_3986;
				}
				return BgL_new3528z00_3982;
			}
		}
	}



/* _widening-scnst/Cinfo */
	obj_t BGl__wideningzd2scnstzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5816,
		obj_t BgL_approx3527z00_5817)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			return
				(obj_t) (BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3527z00_5817)));
		}
	}



/* make-scnst/Cinfo */
	BGL_EXPORTED_DEF BgL_scnstzf2cinfozf2_bglt
		BGl_makezd2scnstzf2Cinfoz20zzcfa_infoz00(obj_t BgL_node3531z00_351,
		obj_t BgL_class3532z00_352, obj_t BgL_loc3533z00_353,
		BgL_approxz00_bglt BgL_approx3530z00_354)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{	/* Cfa/cinfo.scm 49 */
				BgL_scnstz00_bglt BgL_aux3534z00_3987;

				BgL_aux3534z00_3987 =
					BGl_makezd2scnstzd2zzast_varz00(BgL_node3531z00_351,
					BgL_class3532z00_352, BgL_loc3533z00_353);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3534z00_3987),
					BGl_classzd2numzd2zz__objectz00(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 49 */
					BgL_scnstzf2cinfozf2_bglt BgL_arg4985z00_3989;

					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstzf2cinfozf2_bglt BgL_res5467z00_3999;

						{	/* Cfa/cinfo.scm 49 */
							BgL_scnstzf2cinfozf2_bglt BgL_new3528z00_3994;

							BgL_new3528z00_3994 =
								((BgL_scnstzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_scnstzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 49 */
								BgL_scnstzf2cinfozf2_bglt BgL_res5466z00_3998;

								{	/* Cfa/cinfo.scm 49 */
									BgL_scnstzf2cinfozf2_bglt BgL_new3537z00_3995;

									BgL_new3537z00_3995 = BgL_new3528z00_3994;
									{	/* Cfa/cinfo.scm 49 */
										BgL_approxz00_bglt BgL_approx3536z00_3997;

										BgL_approx3536z00_3997 = BgL_approx3530z00_354;
										((((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_new3537z00_3995))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3536z00_3997), BUNSPEC);
										BgL_res5466z00_3998 = BgL_new3537z00_3995;
								}} BgL_res5466z00_3998;
							}
							BgL_res5467z00_3999 = BgL_new3528z00_3994;
						}
						BgL_arg4985z00_3989 = BgL_res5467z00_3999;
					}
					{	/* Cfa/cinfo.scm 49 */
						obj_t BgL_auxz00_8554;

						BgL_objectz00_bglt BgL_auxz00_8552;

						BgL_auxz00_8554 = (obj_t) (BgL_arg4985z00_3989);
						BgL_auxz00_8552 = (BgL_objectz00_bglt) (BgL_aux3534z00_3987);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8552, BgL_auxz00_8554);
				}}
				return
					((BgL_scnstzf2cinfozf2_bglt)
					(BgL_scnstzf2cinfozf2_bglt) (BgL_aux3534z00_3987));
			}
		}
	}



/* _make-scnst/Cinfo */
	obj_t BGl__makezd2scnstzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5818,
		obj_t BgL_node3531z00_5819, obj_t BgL_class3532z00_5820,
		obj_t BgL_loc3533z00_5821, obj_t BgL_approx3530z00_5822)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			return
				(obj_t) (BGl_makezd2scnstzf2Cinfoz20zzcfa_infoz00(BgL_node3531z00_5819,
					BgL_class3532z00_5820, BgL_loc3533z00_5821,
					(BgL_approxz00_bglt) (BgL_approx3530z00_5822)));
		}
	}



/* fill-scnst/Cinfo! */
	BGL_EXPORTED_DEF BgL_scnstzf2cinfozf2_bglt
		BGl_fillzd2scnstzf2Cinfoz12z32zzcfa_infoz00(BgL_scnstzf2cinfozf2_bglt
		BgL_new3537z00_355, BgL_approxz00_bglt BgL_approx3536z00_356)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{	/* Cfa/cinfo.scm 49 */
				BgL_approxz00_bglt BgL_approx3536z00_6392;

				BgL_approx3536z00_6392 = BgL_approx3536z00_356;
				((((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_new3537z00_355))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3536z00_6392), BUNSPEC);
				return BgL_new3537z00_355;
			}
		}
	}



/* _fill-scnst/Cinfo! */
	obj_t BGl__fillzd2scnstzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5823,
		obj_t BgL_new3537z00_5824, obj_t BgL_approx3536z00_5825)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{	/* Cfa/cinfo.scm 49 */
				BgL_scnstzf2cinfozf2_bglt BgL_auxz00_8563;

				{	/* Cfa/cinfo.scm 49 */
					BgL_scnstzf2cinfozf2_bglt BgL_res5688z00_6396;

					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstzf2cinfozf2_bglt BgL_new3537z00_6393;

						BgL_approxz00_bglt BgL_approx3536z00_6394;

						BgL_new3537z00_6393 =
							(BgL_scnstzf2cinfozf2_bglt) (BgL_new3537z00_5824);
						BgL_approx3536z00_6394 =
							(BgL_approxz00_bglt) (BgL_approx3536z00_5825);
						{	/* Cfa/cinfo.scm 49 */
							BgL_approxz00_bglt BgL_approx3536z00_6395;

							BgL_approx3536z00_6395 = BgL_approx3536z00_6394;
							((((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_new3537z00_6393))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3536z00_6395), BUNSPEC);
							BgL_res5688z00_6396 = BgL_new3537z00_6393;
						}
					}
					BgL_auxz00_8563 = BgL_res5688z00_6396;
				}
				return (obj_t) (BgL_auxz00_8563);
			}
		}
	}



/* %allocate-scnst/Cinfo */
	BGL_EXPORTED_DEF BgL_scnstz00_bglt
		BGl_z52allocatezd2scnstzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{	/* Cfa/cinfo.scm 49 */
				BgL_scnstz00_bglt BgL_new3540z00_6397;

				BgL_new3540z00_6397 =
					((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_scnstz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3540z00_6397),
					BGl_classzd2numzd2zz__objectz00(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 49 */
					BgL_objectz00_bglt BgL_auxz00_8572;

					BgL_auxz00_8572 = (BgL_objectz00_bglt) (BgL_new3540z00_6397);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8572, BFALSE);
				}
				return BgL_new3540z00_6397;
			}
		}
	}



/* _%allocate-scnst/Cinfo */
	obj_t BGl__z52allocatezd2scnstzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5429)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{	/* Cfa/cinfo.scm 49 */
				BgL_scnstz00_bglt BgL_auxz00_8575;

				{	/* Cfa/cinfo.scm 49 */
					BgL_scnstz00_bglt BgL_res5689z00_6401;

					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstz00_bglt BgL_new3540z00_6399;

						BgL_new3540z00_6399 =
							((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_scnstz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3540z00_6399),
							BGl_classzd2numzd2zz__objectz00
							(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_8580;

							BgL_auxz00_8580 = (BgL_objectz00_bglt) (BgL_new3540z00_6399);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8580, BFALSE);
						}
						BgL_res5689z00_6401 = BgL_new3540z00_6399;
					}
					BgL_auxz00_8575 = BgL_res5689z00_6401;
				}
				return (obj_t) (BgL_auxz00_8575);
			}
		}
	}



/* scnst/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_scnstzf2cinfozf2_bglt
		BGl_scnstzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			if ((BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 49 */
					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstz00_bglt BgL_res5468z00_4009;

						{	/* Cfa/cinfo.scm 49 */
							BgL_scnstz00_bglt BgL_new2048z00_4005;

							BgL_new2048z00_4005 =
								((BgL_scnstz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_scnstz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2048z00_4005),
								BGl_classzd2numzd2zz__objectz00(BGl_scnstz00zzast_varz00));
							{	/* Cfa/cinfo.scm 49 */
								BgL_objectz00_bglt BgL_auxz00_8590;

								BgL_auxz00_8590 = (BgL_objectz00_bglt) (BgL_new2048z00_4005);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8590, BFALSE);
							}
							BgL_res5468z00_4009 = BgL_new2048z00_4005;
						}
						BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5468z00_4009);
					}
					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstz00_bglt BgL_res5469z00_4017;

						{	/* Cfa/cinfo.scm 49 */
							BgL_scnstz00_bglt BgL_new2043z00_4010;

							BgL_new2043z00_4010 =
								(BgL_scnstz00_bglt)
								(BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 49 */
								obj_t BgL_node2040z00_4014;

								obj_t BgL_class2041z00_4015;

								obj_t BgL_loc2042z00_4016;

								BgL_node2040z00_4014 = BUNSPEC;
								BgL_class2041z00_4015 = BUNSPEC;
								BgL_loc2042z00_4016 = BUNSPEC;
								((((BgL_scnstz00_bglt) CREF(BgL_new2043z00_4010))->
										BgL_nodez00) = ((obj_t) BgL_node2040z00_4014), BUNSPEC);
								((((BgL_scnstz00_bglt) CREF(BgL_new2043z00_4010))->
										BgL_classz00) = ((obj_t) BgL_class2041z00_4015), BUNSPEC);
								((((BgL_scnstz00_bglt) CREF(BgL_new2043z00_4010))->BgL_locz00) =
									((obj_t) BgL_loc2042z00_4016), BUNSPEC);
								BgL_res5469z00_4017 = BgL_new2043z00_4010;
						}} BgL_res5469z00_4017;
					}
					{	/* Cfa/cinfo.scm 49 */
						long BgL_arg4990z00_1761;

						BgL_arg4990z00_1761 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_scnstzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg4990z00_1761);
					}
					{	/* Cfa/cinfo.scm 49 */
						BgL_scnstzf2cinfozf2_bglt BgL_arg4991z00_1762;

						{	/* Cfa/cinfo.scm 49 */
							BgL_approxz00_bglt BgL_arg4993z00_1763;

							BgL_arg4993z00_1763 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 49 */
								BgL_scnstzf2cinfozf2_bglt BgL_res5471z00_4026;

								{	/* Cfa/cinfo.scm 49 */
									BgL_scnstzf2cinfozf2_bglt BgL_new3528z00_4021;

									BgL_new3528z00_4021 =
										((BgL_scnstzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_scnstzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 49 */
										BgL_scnstzf2cinfozf2_bglt BgL_res5470z00_4025;

										{	/* Cfa/cinfo.scm 49 */
											BgL_scnstzf2cinfozf2_bglt BgL_new3537z00_4022;

											BgL_new3537z00_4022 = BgL_new3528z00_4021;
											{	/* Cfa/cinfo.scm 49 */
												BgL_approxz00_bglt BgL_approx3536z00_4024;

												BgL_approx3536z00_4024 = BgL_arg4993z00_1763;
												((((BgL_scnstzf2cinfozf2_bglt)
															CREF(BgL_new3537z00_4022))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3536z00_4024),
													BUNSPEC);
												BgL_res5470z00_4025 = BgL_new3537z00_4022;
										}} BgL_res5470z00_4025;
									}
									BgL_res5471z00_4026 = BgL_new3528z00_4021;
								}
								BgL_arg4991z00_1762 = BgL_res5471z00_4026;
						}}
						{	/* Cfa/cinfo.scm 49 */
							obj_t BgL_auxz00_8606;

							BgL_objectz00_bglt BgL_auxz00_8604;

							BgL_auxz00_8606 = (obj_t) (BgL_arg4991z00_1762);
							BgL_auxz00_8604 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8604, BgL_auxz00_8606);
				}}}
			else
				{	/* Cfa/cinfo.scm 49 */
					BFALSE;
				}
			return
				(BgL_scnstzf2cinfozf2_bglt)
				(BGl_z52thezd2scnstzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _scnst/Cinfo-nil */
	obj_t BGl__scnstzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5430)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			return (obj_t) (BGl_scnstzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* intern-sfun/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_internzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t
		BgL_obj3478z00_358)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3478z00_358,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
		}
	}



/* _intern-sfun/Cinfo? */
	obj_t BGl__internzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t BgL_envz00_5427,
		obj_t BgL_obj3478z00_5428)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3478z00_5428,
					BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00));
		}
	}



/* widening-intern-sfun/Cinfo */
	BGL_EXPORTED_DEF BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3440z00_362, long BgL_stamp3441z00_363)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{	/* Cfa/cinfo.scm 44 */
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3442z00_4027;

				BgL_new3442z00_4027 =
					((BgL_internzd2sfunzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_internzd2sfunzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo.scm 44 */
					BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5472z00_4033;

					{	/* Cfa/cinfo.scm 44 */
						BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3467z00_4028;

						BgL_new3467z00_4028 = BgL_new3442z00_4027;
						{	/* Cfa/cinfo.scm 44 */
							BgL_approxz00_bglt BgL_approx3465z00_4031;

							long BgL_stamp3466z00_4032;

							BgL_approx3465z00_4031 = BgL_approx3440z00_362;
							BgL_stamp3466z00_4032 = BgL_stamp3441z00_363;
							((((BgL_internzd2sfunzf2cinfoz20_bglt)
										CREF(BgL_new3467z00_4028))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3465z00_4031), BUNSPEC);
							((((BgL_internzd2sfunzf2cinfoz20_bglt)
										CREF(BgL_new3467z00_4028))->BgL_stampz00) =
								((long) BgL_stamp3466z00_4032), BUNSPEC);
							BgL_res5472z00_4033 = BgL_new3467z00_4028;
					}} BgL_res5472z00_4033;
				}
				return BgL_new3442z00_4027;
			}
		}
	}



/* _widening-intern-sfun/Cinfo */
	obj_t BGl__wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t
		BgL_envz00_5826, obj_t BgL_approx3440z00_5827, obj_t BgL_stamp3441z00_5828)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			return
				(obj_t) (BGl_wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3440z00_5827),
					(long) CINT(BgL_stamp3441z00_5828)));
		}
	}



/* make-intern-sfun/Cinfo */
	BGL_EXPORTED_DEF BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_makezd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(long BgL_arity3446z00_364,
		obj_t BgL_sidezd2effectzf33447z21_365, obj_t BgL_predicatezd2of3448zd2_366,
		obj_t BgL_stackzd2allocator3449zd2_367, bool_t BgL_topzf33450zf3_368,
		obj_t BgL_thezd2closure3451zd2_369, obj_t BgL_effect3452z00_370,
		obj_t BgL_property3453z00_371, obj_t BgL_args3454z00_372,
		obj_t BgL_argszd2name3455zd2_373, obj_t BgL_body3456z00_374,
		obj_t BgL_class3457z00_375, obj_t BgL_dssslzd2keywords3458zd2_376,
		obj_t BgL_loc3459z00_377, obj_t BgL_optionals3460z00_378,
		obj_t BgL_keys3461z00_379, obj_t BgL_thezd2closurezd2global3462z00_380,
		BgL_approxz00_bglt BgL_approx3444z00_381, long BgL_stamp3445z00_382)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{	/* Cfa/cinfo.scm 44 */
				BgL_sfunz00_bglt BgL_aux3463z00_4034;

				BgL_aux3463z00_4034 =
					BGl_makezd2sfunzd2zzast_varz00(BgL_arity3446z00_364,
					BgL_sidezd2effectzf33447z21_365, BgL_predicatezd2of3448zd2_366,
					BgL_stackzd2allocator3449zd2_367, BgL_topzf33450zf3_368,
					BgL_thezd2closure3451zd2_369, BgL_effect3452z00_370,
					BgL_property3453z00_371, BgL_args3454z00_372,
					BgL_argszd2name3455zd2_373, BgL_body3456z00_374, BgL_class3457z00_375,
					BgL_dssslzd2keywords3458zd2_376, BgL_loc3459z00_377,
					BgL_optionals3460z00_378, BgL_keys3461z00_379,
					BgL_thezd2closurezd2global3462z00_380);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3463z00_4034),
					BGl_classzd2numzd2zz__objectz00
					(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 44 */
					BgL_internzd2sfunzf2cinfoz20_bglt BgL_arg4995z00_4036;

					{	/* Cfa/cinfo.scm 44 */
						BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5474z00_4049;

						{	/* Cfa/cinfo.scm 44 */
							BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3442z00_4042;

							BgL_new3442z00_4042 =
								((BgL_internzd2sfunzf2cinfoz20_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_internzd2sfunzf2cinfoz20_bgl))));
							{	/* Cfa/cinfo.scm 44 */
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5473z00_4048;

								{	/* Cfa/cinfo.scm 44 */
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3467z00_4043;

									BgL_new3467z00_4043 = BgL_new3442z00_4042;
									{	/* Cfa/cinfo.scm 44 */
										BgL_approxz00_bglt BgL_approx3465z00_4046;

										long BgL_stamp3466z00_4047;

										BgL_approx3465z00_4046 = BgL_approx3444z00_381;
										BgL_stamp3466z00_4047 = BgL_stamp3445z00_382;
										((((BgL_internzd2sfunzf2cinfoz20_bglt)
													CREF(BgL_new3467z00_4043))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3465z00_4046), BUNSPEC);
										((((BgL_internzd2sfunzf2cinfoz20_bglt)
													CREF(BgL_new3467z00_4043))->BgL_stampz00) =
											((long) BgL_stamp3466z00_4047), BUNSPEC);
										BgL_res5473z00_4048 = BgL_new3467z00_4043;
								}} BgL_res5473z00_4048;
							}
							BgL_res5474z00_4049 = BgL_new3442z00_4042;
						}
						BgL_arg4995z00_4036 = BgL_res5474z00_4049;
					}
					{	/* Cfa/cinfo.scm 44 */
						obj_t BgL_auxz00_8631;

						BgL_objectz00_bglt BgL_auxz00_8629;

						BgL_auxz00_8631 = (obj_t) (BgL_arg4995z00_4036);
						BgL_auxz00_8629 = (BgL_objectz00_bglt) (BgL_aux3463z00_4034);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8629, BgL_auxz00_8631);
				}}
				return
					((BgL_internzd2sfunzf2cinfoz20_bglt)
					(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_aux3463z00_4034));
			}
		}
	}



/* _make-intern-sfun/Cinfo */
	obj_t BGl__makezd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5829,
		obj_t BgL_arity3446z00_5830, obj_t BgL_sidezd2effectzf33447z21_5831,
		obj_t BgL_predicatezd2of3448zd2_5832,
		obj_t BgL_stackzd2allocator3449zd2_5833, obj_t BgL_topzf33450zf3_5834,
		obj_t BgL_thezd2closure3451zd2_5835, obj_t BgL_effect3452z00_5836,
		obj_t BgL_property3453z00_5837, obj_t BgL_args3454z00_5838,
		obj_t BgL_argszd2name3455zd2_5839, obj_t BgL_body3456z00_5840,
		obj_t BgL_class3457z00_5841, obj_t BgL_dssslzd2keywords3458zd2_5842,
		obj_t BgL_loc3459z00_5843, obj_t BgL_optionals3460z00_5844,
		obj_t BgL_keys3461z00_5845, obj_t BgL_thezd2closurezd2global3462z00_5846,
		obj_t BgL_approx3444z00_5847, obj_t BgL_stamp3445z00_5848)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			return
				(obj_t) (BGl_makezd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(
					(long) CINT(BgL_arity3446z00_5830), BgL_sidezd2effectzf33447z21_5831,
					BgL_predicatezd2of3448zd2_5832, BgL_stackzd2allocator3449zd2_5833,
					CBOOL(BgL_topzf33450zf3_5834), BgL_thezd2closure3451zd2_5835,
					BgL_effect3452z00_5836, BgL_property3453z00_5837,
					BgL_args3454z00_5838, BgL_argszd2name3455zd2_5839,
					BgL_body3456z00_5840, BgL_class3457z00_5841,
					BgL_dssslzd2keywords3458zd2_5842, BgL_loc3459z00_5843,
					BgL_optionals3460z00_5844, BgL_keys3461z00_5845,
					BgL_thezd2closurezd2global3462z00_5846,
					(BgL_approxz00_bglt) (BgL_approx3444z00_5847),
					(long) CINT(BgL_stamp3445z00_5848)));
		}
	}



/* fill-intern-sfun/Cinfo! */
	BGL_EXPORTED_DEF BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_fillzd2internzd2sfunzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3467z00_383,
		BgL_approxz00_bglt BgL_approx3465z00_384, long BgL_stamp3466z00_385)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{	/* Cfa/cinfo.scm 44 */
				BgL_approxz00_bglt BgL_approx3465z00_6403;

				long BgL_stamp3466z00_6404;

				BgL_approx3465z00_6403 = BgL_approx3465z00_384;
				BgL_stamp3466z00_6404 = BgL_stamp3466z00_385;
				((((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_new3467z00_383))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3465z00_6403), BUNSPEC);
				((((BgL_internzd2sfunzf2cinfoz20_bglt) CREF(BgL_new3467z00_383))->
						BgL_stampz00) = ((long) BgL_stamp3466z00_6404), BUNSPEC);
				return BgL_new3467z00_383;
			}
		}
	}



/* _fill-intern-sfun/Cinfo! */
	obj_t BGl__fillzd2internzd2sfunzf2Cinfoz12ze0zzcfa_infoz00(obj_t
		BgL_envz00_5849, obj_t BgL_new3467z00_5850, obj_t BgL_approx3465z00_5851,
		obj_t BgL_stamp3466z00_5852)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{	/* Cfa/cinfo.scm 44 */
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_8644;

				{	/* Cfa/cinfo.scm 44 */
					BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5690z00_6410;

					{	/* Cfa/cinfo.scm 44 */
						BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3467z00_6405;

						BgL_approxz00_bglt BgL_approx3465z00_6406;

						long BgL_stamp3466z00_6407;

						BgL_new3467z00_6405 =
							(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_new3467z00_5850);
						BgL_approx3465z00_6406 =
							(BgL_approxz00_bglt) (BgL_approx3465z00_5851);
						BgL_stamp3466z00_6407 = (long) CINT(BgL_stamp3466z00_5852);
						{	/* Cfa/cinfo.scm 44 */
							BgL_approxz00_bglt BgL_approx3465z00_6408;

							long BgL_stamp3466z00_6409;

							BgL_approx3465z00_6408 = BgL_approx3465z00_6406;
							BgL_stamp3466z00_6409 = BgL_stamp3466z00_6407;
							((((BgL_internzd2sfunzf2cinfoz20_bglt)
										CREF(BgL_new3467z00_6405))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3465z00_6408), BUNSPEC);
							((((BgL_internzd2sfunzf2cinfoz20_bglt)
										CREF(BgL_new3467z00_6405))->BgL_stampz00) =
								((long) BgL_stamp3466z00_6409), BUNSPEC);
							BgL_res5690z00_6410 = BgL_new3467z00_6405;
					}}
					BgL_auxz00_8644 = BgL_res5690z00_6410;
				}
				return (obj_t) (BgL_auxz00_8644);
			}
		}
	}



/* %allocate-intern-sfun/Cinfo */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_z52allocatezd2internzd2sfunzf2Cinfoza0zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{	/* Cfa/cinfo.scm 44 */
				BgL_sfunz00_bglt BgL_new3471z00_6411;

				BgL_new3471z00_6411 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3471z00_6411),
					BGl_classzd2numzd2zz__objectz00
					(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 44 */
					BgL_objectz00_bglt BgL_auxz00_8655;

					BgL_auxz00_8655 = (BgL_objectz00_bglt) (BgL_new3471z00_6411);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8655, BFALSE);
				}
				return BgL_new3471z00_6411;
			}
		}
	}



/* _%allocate-intern-sfun/Cinfo */
	obj_t BGl__z52allocatezd2internzd2sfunzf2Cinfoza0zzcfa_infoz00(obj_t
		BgL_envz00_5425)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{	/* Cfa/cinfo.scm 44 */
				BgL_sfunz00_bglt BgL_auxz00_8658;

				{	/* Cfa/cinfo.scm 44 */
					BgL_sfunz00_bglt BgL_res5691z00_6415;

					{	/* Cfa/cinfo.scm 44 */
						BgL_sfunz00_bglt BgL_new3471z00_6413;

						BgL_new3471z00_6413 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3471z00_6413),
							BGl_classzd2numzd2zz__objectz00
							(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 44 */
							BgL_objectz00_bglt BgL_auxz00_8663;

							BgL_auxz00_8663 = (BgL_objectz00_bglt) (BgL_new3471z00_6413);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8663, BFALSE);
						}
						BgL_res5691z00_6415 = BgL_new3471z00_6413;
					}
					BgL_auxz00_8658 = BgL_res5691z00_6415;
				}
				return (obj_t) (BgL_auxz00_8658);
			}
		}
	}



/* intern-sfun/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_internzd2sfunzf2cinfoz20_bglt
		BGl_internzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			if ((BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 44 */
					{	/* Cfa/cinfo.scm 44 */
						BgL_sfunz00_bglt BgL_res5475z00_4060;

						{	/* Cfa/cinfo.scm 44 */
							BgL_sfunz00_bglt BgL_new1954z00_4056;

							BgL_new1954z00_4056 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1954z00_4056),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Cfa/cinfo.scm 44 */
								BgL_objectz00_bglt BgL_auxz00_8673;

								BgL_auxz00_8673 = (BgL_objectz00_bglt) (BgL_new1954z00_4056);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8673, BFALSE);
							}
							BgL_res5475z00_4060 = BgL_new1954z00_4056;
						}
						BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 =
							(obj_t) (BgL_res5475z00_4060);
					}
					{	/* Cfa/cinfo.scm 44 */
						BgL_sfunz00_bglt BgL_res5476z00_4096;

						{	/* Cfa/cinfo.scm 44 */
							BgL_sfunz00_bglt BgL_new1935z00_4061;

							BgL_new1935z00_4061 =
								(BgL_sfunz00_bglt)
								(BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 44 */
								long BgL_arity1918z00_4079;

								obj_t BgL_sidezd2effectzf31919z21_4080;

								obj_t BgL_predicatezd2of1920zd2_4081;

								obj_t BgL_stackzd2allocator1921zd2_4082;

								bool_t BgL_topzf31922zf3_4083;

								obj_t BgL_thezd2closure1923zd2_4084;

								obj_t BgL_effect1924z00_4085;

								obj_t BgL_property1925z00_4086;

								obj_t BgL_args1926z00_4087;

								obj_t BgL_argszd2name1927zd2_4088;

								obj_t BgL_body1928z00_4089;

								obj_t BgL_class1929z00_4090;

								obj_t BgL_dssslzd2keywords1930zd2_4091;

								obj_t BgL_loc1931z00_4092;

								obj_t BgL_optionals1932z00_4093;

								obj_t BgL_keys1933z00_4094;

								obj_t BgL_thezd2closurezd2global1934z00_4095;

								BgL_arity1918z00_4079 = ((long) 0);
								BgL_sidezd2effectzf31919z21_4080 = BUNSPEC;
								BgL_predicatezd2of1920zd2_4081 = BUNSPEC;
								BgL_stackzd2allocator1921zd2_4082 = BUNSPEC;
								BgL_topzf31922zf3_4083 = ((bool_t) 0);
								BgL_thezd2closure1923zd2_4084 = BUNSPEC;
								BgL_effect1924z00_4085 = BUNSPEC;
								BgL_property1925z00_4086 = BUNSPEC;
								BgL_args1926z00_4087 = BUNSPEC;
								BgL_argszd2name1927zd2_4088 = BUNSPEC;
								BgL_body1928z00_4089 = BUNSPEC;
								BgL_class1929z00_4090 = BUNSPEC;
								BgL_dssslzd2keywords1930zd2_4091 = BUNSPEC;
								BgL_loc1931z00_4092 = BUNSPEC;
								BgL_optionals1932z00_4093 = BUNSPEC;
								BgL_keys1933z00_4094 = BUNSPEC;
								BgL_thezd2closurezd2global1934z00_4095 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_arityz00) = ((long) BgL_arity1918z00_4079), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31919z21_4080), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1920zd2_4081), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1921zd2_4082), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31922zf3_4083), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1923zd2_4084), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_effectz00) = ((obj_t) BgL_effect1924z00_4085), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_propertyz00) =
									((obj_t) BgL_property1925z00_4086), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->BgL_argsz00) =
									((obj_t) BgL_args1926z00_4087), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name1927zd2_4088), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->BgL_bodyz00) =
									((obj_t) BgL_body1928z00_4089), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_classz00) = ((obj_t) BgL_class1929z00_4090), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords1930zd2_4091), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->BgL_locz00) =
									((obj_t) BgL_loc1931z00_4092), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals1932z00_4093), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->BgL_keysz00) =
									((obj_t) BgL_keys1933z00_4094), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4061))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global1934z00_4095), BUNSPEC);
								BgL_res5476z00_4096 = BgL_new1935z00_4061;
						}} BgL_res5476z00_4096;
					}
					{	/* Cfa/cinfo.scm 44 */
						long BgL_arg4998z00_1774;

						BgL_arg4998z00_1774 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00),
							BgL_arg4998z00_1774);
					}
					{	/* Cfa/cinfo.scm 44 */
						BgL_internzd2sfunzf2cinfoz20_bglt BgL_arg4999z00_1775;

						{	/* Cfa/cinfo.scm 44 */
							BgL_approxz00_bglt BgL_arg5000z00_1776;

							BgL_arg5000z00_1776 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 44 */
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5478z00_4108;

								{	/* Cfa/cinfo.scm 44 */
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3442z00_4101;

									BgL_new3442z00_4101 =
										((BgL_internzd2sfunzf2cinfoz20_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_internzd2sfunzf2cinfoz20_bgl))));
									{	/* Cfa/cinfo.scm 44 */
										BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5477z00_4107;

										{	/* Cfa/cinfo.scm 44 */
											BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3467z00_4102;

											BgL_new3467z00_4102 = BgL_new3442z00_4101;
											{	/* Cfa/cinfo.scm 44 */
												BgL_approxz00_bglt BgL_approx3465z00_4105;

												long BgL_stamp3466z00_4106;

												BgL_approx3465z00_4105 = BgL_arg5000z00_1776;
												BgL_stamp3466z00_4106 = ((long) 0);
												((((BgL_internzd2sfunzf2cinfoz20_bglt)
															CREF(BgL_new3467z00_4102))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3465z00_4105),
													BUNSPEC);
												((((BgL_internzd2sfunzf2cinfoz20_bglt)
															CREF(BgL_new3467z00_4102))->BgL_stampz00) =
													((long) BgL_stamp3466z00_4106), BUNSPEC);
												BgL_res5477z00_4107 = BgL_new3467z00_4102;
										}} BgL_res5477z00_4107;
									}
									BgL_res5478z00_4108 = BgL_new3442z00_4101;
								}
								BgL_arg4999z00_1775 = BgL_res5478z00_4108;
						}}
						{	/* Cfa/cinfo.scm 44 */
							obj_t BgL_auxz00_8704;

							BgL_objectz00_bglt BgL_auxz00_8702;

							BgL_auxz00_8704 = (obj_t) (BgL_arg4999z00_1775);
							BgL_auxz00_8702 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8702, BgL_auxz00_8704);
				}}}
			else
				{	/* Cfa/cinfo.scm 44 */
					BFALSE;
				}
			return
				(BgL_internzd2sfunzf2cinfoz20_bglt)
				(BGl_z52thezd2internzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00);
		}
	}



/* _intern-sfun/Cinfo-nil */
	obj_t BGl__internzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t BgL_envz00_5426)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			return (obj_t) (BGl_internzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00());
		}
	}



/* extern-sfun/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_externzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t
		BgL_obj3394z00_390)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3394z00_390,
				BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
		}
	}



/* _extern-sfun/Cinfo? */
	obj_t BGl__externzd2sfunzf2Cinfozf3zd3zzcfa_infoz00(obj_t BgL_envz00_5423,
		obj_t BgL_obj3394z00_5424)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3394z00_5424,
					BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00));
		}
	}



/* widening-extern-sfun/Cinfo */
	BGL_EXPORTED_DEF BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3358z00_394)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{	/* Cfa/cinfo.scm 42 */
				BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3359z00_4109;

				BgL_new3359z00_4109 =
					((BgL_externzd2sfunzf2cinfoz20_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_externzd2sfunzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo.scm 42 */
					BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5479z00_4113;

					{	/* Cfa/cinfo.scm 42 */
						BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3382z00_4110;

						BgL_new3382z00_4110 = BgL_new3359z00_4109;
						{	/* Cfa/cinfo.scm 42 */
							BgL_approxz00_bglt BgL_approx3381z00_4112;

							BgL_approx3381z00_4112 = BgL_approx3358z00_394;
							((((BgL_externzd2sfunzf2cinfoz20_bglt)
										CREF(BgL_new3382z00_4110))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3381z00_4112), BUNSPEC);
							BgL_res5479z00_4113 = BgL_new3382z00_4110;
					}} BgL_res5479z00_4113;
				}
				return BgL_new3359z00_4109;
			}
		}
	}



/* _widening-extern-sfun/Cinfo */
	obj_t BGl__wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t
		BgL_envz00_5853, obj_t BgL_approx3358z00_5854)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			return
				(obj_t) (BGl_wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3358z00_5854)));
		}
	}



/* make-extern-sfun/Cinfo */
	BGL_EXPORTED_DEF BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_makezd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(long BgL_arity3362z00_395,
		obj_t BgL_sidezd2effectzf33363z21_396, obj_t BgL_predicatezd2of3364zd2_397,
		obj_t BgL_stackzd2allocator3365zd2_398, bool_t BgL_topzf33366zf3_399,
		obj_t BgL_thezd2closure3367zd2_400, obj_t BgL_effect3368z00_401,
		obj_t BgL_property3369z00_402, obj_t BgL_args3370z00_403,
		obj_t BgL_argszd2name3371zd2_404, obj_t BgL_body3372z00_405,
		obj_t BgL_class3373z00_406, obj_t BgL_dssslzd2keywords3374zd2_407,
		obj_t BgL_loc3375z00_408, obj_t BgL_optionals3376z00_409,
		obj_t BgL_keys3377z00_410, obj_t BgL_thezd2closurezd2global3378z00_411,
		BgL_approxz00_bglt BgL_approx3361z00_412)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{	/* Cfa/cinfo.scm 42 */
				BgL_sfunz00_bglt BgL_aux3379z00_4114;

				BgL_aux3379z00_4114 =
					BGl_makezd2sfunzd2zzast_varz00(BgL_arity3362z00_395,
					BgL_sidezd2effectzf33363z21_396, BgL_predicatezd2of3364zd2_397,
					BgL_stackzd2allocator3365zd2_398, BgL_topzf33366zf3_399,
					BgL_thezd2closure3367zd2_400, BgL_effect3368z00_401,
					BgL_property3369z00_402, BgL_args3370z00_403,
					BgL_argszd2name3371zd2_404, BgL_body3372z00_405, BgL_class3373z00_406,
					BgL_dssslzd2keywords3374zd2_407, BgL_loc3375z00_408,
					BgL_optionals3376z00_409, BgL_keys3377z00_410,
					BgL_thezd2closurezd2global3378z00_411);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3379z00_4114),
					BGl_classzd2numzd2zz__objectz00
					(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 42 */
					BgL_externzd2sfunzf2cinfoz20_bglt BgL_arg5003z00_4116;

					{	/* Cfa/cinfo.scm 42 */
						BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5481z00_4126;

						{	/* Cfa/cinfo.scm 42 */
							BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3359z00_4121;

							BgL_new3359z00_4121 =
								((BgL_externzd2sfunzf2cinfoz20_bglt)
								BREF(GC_MALLOC(sizeof(struct
											BgL_externzd2sfunzf2cinfoz20_bgl))));
							{	/* Cfa/cinfo.scm 42 */
								BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5480z00_4125;

								{	/* Cfa/cinfo.scm 42 */
									BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3382z00_4122;

									BgL_new3382z00_4122 = BgL_new3359z00_4121;
									{	/* Cfa/cinfo.scm 42 */
										BgL_approxz00_bglt BgL_approx3381z00_4124;

										BgL_approx3381z00_4124 = BgL_approx3361z00_412;
										((((BgL_externzd2sfunzf2cinfoz20_bglt)
													CREF(BgL_new3382z00_4122))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3381z00_4124), BUNSPEC);
										BgL_res5480z00_4125 = BgL_new3382z00_4122;
								}} BgL_res5480z00_4125;
							}
							BgL_res5481z00_4126 = BgL_new3359z00_4121;
						}
						BgL_arg5003z00_4116 = BgL_res5481z00_4126;
					}
					{	/* Cfa/cinfo.scm 42 */
						obj_t BgL_auxz00_8726;

						BgL_objectz00_bglt BgL_auxz00_8724;

						BgL_auxz00_8726 = (obj_t) (BgL_arg5003z00_4116);
						BgL_auxz00_8724 = (BgL_objectz00_bglt) (BgL_aux3379z00_4114);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8724, BgL_auxz00_8726);
				}}
				return
					((BgL_externzd2sfunzf2cinfoz20_bglt)
					(BgL_externzd2sfunzf2cinfoz20_bglt) (BgL_aux3379z00_4114));
			}
		}
	}



/* _make-extern-sfun/Cinfo */
	obj_t BGl__makezd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(obj_t BgL_envz00_5855,
		obj_t BgL_arity3362z00_5856, obj_t BgL_sidezd2effectzf33363z21_5857,
		obj_t BgL_predicatezd2of3364zd2_5858,
		obj_t BgL_stackzd2allocator3365zd2_5859, obj_t BgL_topzf33366zf3_5860,
		obj_t BgL_thezd2closure3367zd2_5861, obj_t BgL_effect3368z00_5862,
		obj_t BgL_property3369z00_5863, obj_t BgL_args3370z00_5864,
		obj_t BgL_argszd2name3371zd2_5865, obj_t BgL_body3372z00_5866,
		obj_t BgL_class3373z00_5867, obj_t BgL_dssslzd2keywords3374zd2_5868,
		obj_t BgL_loc3375z00_5869, obj_t BgL_optionals3376z00_5870,
		obj_t BgL_keys3377z00_5871, obj_t BgL_thezd2closurezd2global3378z00_5872,
		obj_t BgL_approx3361z00_5873)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			return
				(obj_t) (BGl_makezd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(
					(long) CINT(BgL_arity3362z00_5856), BgL_sidezd2effectzf33363z21_5857,
					BgL_predicatezd2of3364zd2_5858, BgL_stackzd2allocator3365zd2_5859,
					CBOOL(BgL_topzf33366zf3_5860), BgL_thezd2closure3367zd2_5861,
					BgL_effect3368z00_5862, BgL_property3369z00_5863,
					BgL_args3370z00_5864, BgL_argszd2name3371zd2_5865,
					BgL_body3372z00_5866, BgL_class3373z00_5867,
					BgL_dssslzd2keywords3374zd2_5868, BgL_loc3375z00_5869,
					BgL_optionals3376z00_5870, BgL_keys3377z00_5871,
					BgL_thezd2closurezd2global3378z00_5872,
					(BgL_approxz00_bglt) (BgL_approx3361z00_5873)));
		}
	}



/* fill-extern-sfun/Cinfo! */
	BGL_EXPORTED_DEF BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_fillzd2externzd2sfunzf2Cinfoz12ze0zzcfa_infoz00
		(BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3382z00_413,
		BgL_approxz00_bglt BgL_approx3381z00_414)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{	/* Cfa/cinfo.scm 42 */
				BgL_approxz00_bglt BgL_approx3381z00_6417;

				BgL_approx3381z00_6417 = BgL_approx3381z00_414;
				((((BgL_externzd2sfunzf2cinfoz20_bglt) CREF(BgL_new3382z00_413))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3381z00_6417), BUNSPEC);
				return BgL_new3382z00_413;
			}
		}
	}



/* _fill-extern-sfun/Cinfo! */
	obj_t BGl__fillzd2externzd2sfunzf2Cinfoz12ze0zzcfa_infoz00(obj_t
		BgL_envz00_5874, obj_t BgL_new3382z00_5875, obj_t BgL_approx3381z00_5876)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{	/* Cfa/cinfo.scm 42 */
				BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_8737;

				{	/* Cfa/cinfo.scm 42 */
					BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5692z00_6421;

					{	/* Cfa/cinfo.scm 42 */
						BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3382z00_6418;

						BgL_approxz00_bglt BgL_approx3381z00_6419;

						BgL_new3382z00_6418 =
							(BgL_externzd2sfunzf2cinfoz20_bglt) (BgL_new3382z00_5875);
						BgL_approx3381z00_6419 =
							(BgL_approxz00_bglt) (BgL_approx3381z00_5876);
						{	/* Cfa/cinfo.scm 42 */
							BgL_approxz00_bglt BgL_approx3381z00_6420;

							BgL_approx3381z00_6420 = BgL_approx3381z00_6419;
							((((BgL_externzd2sfunzf2cinfoz20_bglt)
										CREF(BgL_new3382z00_6418))->BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3381z00_6420), BUNSPEC);
							BgL_res5692z00_6421 = BgL_new3382z00_6418;
						}
					}
					BgL_auxz00_8737 = BgL_res5692z00_6421;
				}
				return (obj_t) (BgL_auxz00_8737);
			}
		}
	}



/* %allocate-extern-sfun/Cinfo */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_z52allocatezd2externzd2sfunzf2Cinfoza0zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{	/* Cfa/cinfo.scm 42 */
				BgL_sfunz00_bglt BgL_new3385z00_6422;

				BgL_new3385z00_6422 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3385z00_6422),
					BGl_classzd2numzd2zz__objectz00
					(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 42 */
					BgL_objectz00_bglt BgL_auxz00_8746;

					BgL_auxz00_8746 = (BgL_objectz00_bglt) (BgL_new3385z00_6422);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8746, BFALSE);
				}
				return BgL_new3385z00_6422;
			}
		}
	}



/* _%allocate-extern-sfun/Cinfo */
	obj_t BGl__z52allocatezd2externzd2sfunzf2Cinfoza0zzcfa_infoz00(obj_t
		BgL_envz00_5421)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{	/* Cfa/cinfo.scm 42 */
				BgL_sfunz00_bglt BgL_auxz00_8749;

				{	/* Cfa/cinfo.scm 42 */
					BgL_sfunz00_bglt BgL_res5693z00_6426;

					{	/* Cfa/cinfo.scm 42 */
						BgL_sfunz00_bglt BgL_new3385z00_6424;

						BgL_new3385z00_6424 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3385z00_6424),
							BGl_classzd2numzd2zz__objectz00
							(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 42 */
							BgL_objectz00_bglt BgL_auxz00_8754;

							BgL_auxz00_8754 = (BgL_objectz00_bglt) (BgL_new3385z00_6424);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8754, BFALSE);
						}
						BgL_res5693z00_6426 = BgL_new3385z00_6424;
					}
					BgL_auxz00_8749 = BgL_res5693z00_6426;
				}
				return (obj_t) (BgL_auxz00_8749);
			}
		}
	}



/* extern-sfun/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_externzd2sfunzf2cinfoz20_bglt
		BGl_externzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			if ((BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 42 */
					{	/* Cfa/cinfo.scm 42 */
						BgL_sfunz00_bglt BgL_res5482z00_4136;

						{	/* Cfa/cinfo.scm 42 */
							BgL_sfunz00_bglt BgL_new1954z00_4132;

							BgL_new1954z00_4132 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1954z00_4132),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Cfa/cinfo.scm 42 */
								BgL_objectz00_bglt BgL_auxz00_8764;

								BgL_auxz00_8764 = (BgL_objectz00_bglt) (BgL_new1954z00_4132);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8764, BFALSE);
							}
							BgL_res5482z00_4136 = BgL_new1954z00_4132;
						}
						BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00 =
							(obj_t) (BgL_res5482z00_4136);
					}
					{	/* Cfa/cinfo.scm 42 */
						BgL_sfunz00_bglt BgL_res5483z00_4172;

						{	/* Cfa/cinfo.scm 42 */
							BgL_sfunz00_bglt BgL_new1935z00_4137;

							BgL_new1935z00_4137 =
								(BgL_sfunz00_bglt)
								(BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 42 */
								long BgL_arity1918z00_4155;

								obj_t BgL_sidezd2effectzf31919z21_4156;

								obj_t BgL_predicatezd2of1920zd2_4157;

								obj_t BgL_stackzd2allocator1921zd2_4158;

								bool_t BgL_topzf31922zf3_4159;

								obj_t BgL_thezd2closure1923zd2_4160;

								obj_t BgL_effect1924z00_4161;

								obj_t BgL_property1925z00_4162;

								obj_t BgL_args1926z00_4163;

								obj_t BgL_argszd2name1927zd2_4164;

								obj_t BgL_body1928z00_4165;

								obj_t BgL_class1929z00_4166;

								obj_t BgL_dssslzd2keywords1930zd2_4167;

								obj_t BgL_loc1931z00_4168;

								obj_t BgL_optionals1932z00_4169;

								obj_t BgL_keys1933z00_4170;

								obj_t BgL_thezd2closurezd2global1934z00_4171;

								BgL_arity1918z00_4155 = ((long) 0);
								BgL_sidezd2effectzf31919z21_4156 = BUNSPEC;
								BgL_predicatezd2of1920zd2_4157 = BUNSPEC;
								BgL_stackzd2allocator1921zd2_4158 = BUNSPEC;
								BgL_topzf31922zf3_4159 = ((bool_t) 0);
								BgL_thezd2closure1923zd2_4160 = BUNSPEC;
								BgL_effect1924z00_4161 = BUNSPEC;
								BgL_property1925z00_4162 = BUNSPEC;
								BgL_args1926z00_4163 = BUNSPEC;
								BgL_argszd2name1927zd2_4164 = BUNSPEC;
								BgL_body1928z00_4165 = BUNSPEC;
								BgL_class1929z00_4166 = BUNSPEC;
								BgL_dssslzd2keywords1930zd2_4167 = BUNSPEC;
								BgL_loc1931z00_4168 = BUNSPEC;
								BgL_optionals1932z00_4169 = BUNSPEC;
								BgL_keys1933z00_4170 = BUNSPEC;
								BgL_thezd2closurezd2global1934z00_4171 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_arityz00) = ((long) BgL_arity1918z00_4155), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31919z21_4156), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1920zd2_4157), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1921zd2_4158), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31922zf3_4159), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1923zd2_4160), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_effectz00) = ((obj_t) BgL_effect1924z00_4161), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_propertyz00) =
									((obj_t) BgL_property1925z00_4162), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->BgL_argsz00) =
									((obj_t) BgL_args1926z00_4163), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name1927zd2_4164), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->BgL_bodyz00) =
									((obj_t) BgL_body1928z00_4165), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_classz00) = ((obj_t) BgL_class1929z00_4166), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords1930zd2_4167), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->BgL_locz00) =
									((obj_t) BgL_loc1931z00_4168), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals1932z00_4169), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->BgL_keysz00) =
									((obj_t) BgL_keys1933z00_4170), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_4137))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global1934z00_4171), BUNSPEC);
								BgL_res5483z00_4172 = BgL_new1935z00_4137;
						}} BgL_res5483z00_4172;
					}
					{	/* Cfa/cinfo.scm 42 */
						long BgL_arg5006z00_1787;

						BgL_arg5006z00_1787 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00),
							BgL_arg5006z00_1787);
					}
					{	/* Cfa/cinfo.scm 42 */
						BgL_externzd2sfunzf2cinfoz20_bglt BgL_arg5007z00_1788;

						{	/* Cfa/cinfo.scm 42 */
							BgL_approxz00_bglt BgL_arg5008z00_1789;

							BgL_arg5008z00_1789 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 42 */
								BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5485z00_4181;

								{	/* Cfa/cinfo.scm 42 */
									BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3359z00_4176;

									BgL_new3359z00_4176 =
										((BgL_externzd2sfunzf2cinfoz20_bglt)
										BREF(GC_MALLOC(sizeof(struct
													BgL_externzd2sfunzf2cinfoz20_bgl))));
									{	/* Cfa/cinfo.scm 42 */
										BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5484z00_4180;

										{	/* Cfa/cinfo.scm 42 */
											BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3382z00_4177;

											BgL_new3382z00_4177 = BgL_new3359z00_4176;
											{	/* Cfa/cinfo.scm 42 */
												BgL_approxz00_bglt BgL_approx3381z00_4179;

												BgL_approx3381z00_4179 = BgL_arg5008z00_1789;
												((((BgL_externzd2sfunzf2cinfoz20_bglt)
															CREF(BgL_new3382z00_4177))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3381z00_4179),
													BUNSPEC);
												BgL_res5484z00_4180 = BgL_new3382z00_4177;
										}} BgL_res5484z00_4180;
									}
									BgL_res5485z00_4181 = BgL_new3359z00_4176;
								}
								BgL_arg5007z00_1788 = BgL_res5485z00_4181;
						}}
						{	/* Cfa/cinfo.scm 42 */
							obj_t BgL_auxz00_8794;

							BgL_objectz00_bglt BgL_auxz00_8792;

							BgL_auxz00_8794 = (obj_t) (BgL_arg5007z00_1788);
							BgL_auxz00_8792 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8792, BgL_auxz00_8794);
				}}}
			else
				{	/* Cfa/cinfo.scm 42 */
					BFALSE;
				}
			return
				(BgL_externzd2sfunzf2cinfoz20_bglt)
				(BGl_z52thezd2externzd2sfunzf2Cinfozd2nilz72zzcfa_infoz00);
		}
	}



/* _extern-sfun/Cinfo-nil */
	obj_t BGl__externzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00(obj_t BgL_envz00_5422)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			return (obj_t) (BGl_externzd2sfunzf2Cinfozd2nilzf2zzcfa_infoz00());
		}
	}



/* cfun/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_cfunzf2Cinfozf3z01zzcfa_infoz00(obj_t
		BgL_obj3326z00_416)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3326z00_416,
				BGl_cfunzf2Cinfozf2zzcfa_infoz00);
		}
	}



/* _cfun/Cinfo? */
	obj_t BGl__cfunzf2Cinfozf3z01zzcfa_infoz00(obj_t BgL_envz00_5419,
		obj_t BgL_obj3326z00_5420)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3326z00_5420,
					BGl_cfunzf2Cinfozf2zzcfa_infoz00));
		}
	}



/* widening-cfun/Cinfo */
	BGL_EXPORTED_DEF BgL_cfunzf2cinfozf2_bglt
		BGl_wideningzd2cfunzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt
		BgL_approx3297z00_420)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{	/* Cfa/cinfo.scm 40 */
				BgL_cfunzf2cinfozf2_bglt BgL_new3298z00_4182;

				BgL_new3298z00_4182 =
					((BgL_cfunzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_cfunzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo.scm 40 */
					BgL_cfunzf2cinfozf2_bglt BgL_res5486z00_4186;

					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunzf2cinfozf2_bglt BgL_new3316z00_4183;

						BgL_new3316z00_4183 = BgL_new3298z00_4182;
						{	/* Cfa/cinfo.scm 40 */
							BgL_approxz00_bglt BgL_approx3315z00_4185;

							BgL_approx3315z00_4185 = BgL_approx3297z00_420;
							((((BgL_cfunzf2cinfozf2_bglt) CREF(BgL_new3316z00_4183))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3315z00_4185), BUNSPEC);
							BgL_res5486z00_4186 = BgL_new3316z00_4183;
					}} BgL_res5486z00_4186;
				}
				return BgL_new3298z00_4182;
			}
		}
	}



/* _widening-cfun/Cinfo */
	obj_t BGl__wideningzd2cfunzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5877,
		obj_t BgL_approx3297z00_5878)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			return
				(obj_t) (BGl_wideningzd2cfunzf2Cinfoz20zzcfa_infoz00(
					(BgL_approxz00_bglt) (BgL_approx3297z00_5878)));
		}
	}



/* make-cfun/Cinfo */
	BGL_EXPORTED_DEF BgL_cfunzf2cinfozf2_bglt
		BGl_makezd2cfunzf2Cinfoz20zzcfa_infoz00(long BgL_arity3301z00_421,
		obj_t BgL_sidezd2effectzf33302z21_422, obj_t BgL_predicatezd2of3303zd2_423,
		obj_t BgL_stackzd2allocator3304zd2_424, bool_t BgL_topzf33305zf3_425,
		obj_t BgL_thezd2closure3306zd2_426, obj_t BgL_effect3307z00_427,
		obj_t BgL_argszd2type3308zd2_428, bool_t BgL_macrozf33309zf3_429,
		bool_t BgL_infixzf33310zf3_430, obj_t BgL_method3312z00_431,
		BgL_approxz00_bglt BgL_approx3300z00_432)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{	/* Cfa/cinfo.scm 40 */
				BgL_cfunz00_bglt BgL_aux3313z00_4187;

				BgL_aux3313z00_4187 =
					BGl_makezd2cfunzd2zzast_varz00(BgL_arity3301z00_421,
					BgL_sidezd2effectzf33302z21_422, BgL_predicatezd2of3303zd2_423,
					BgL_stackzd2allocator3304zd2_424, BgL_topzf33305zf3_425,
					BgL_thezd2closure3306zd2_426, BgL_effect3307z00_427,
					BgL_argszd2type3308zd2_428, BgL_macrozf33309zf3_429,
					BgL_infixzf33310zf3_430, BgL_method3312z00_431);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3313z00_4187),
					BGl_classzd2numzd2zz__objectz00(BGl_cfunzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 40 */
					BgL_cfunzf2cinfozf2_bglt BgL_arg5010z00_4189;

					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunzf2cinfozf2_bglt BgL_res5488z00_4199;

						{	/* Cfa/cinfo.scm 40 */
							BgL_cfunzf2cinfozf2_bglt BgL_new3298z00_4194;

							BgL_new3298z00_4194 =
								((BgL_cfunzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cfunzf2cinfozf2_bgl))));
							{	/* Cfa/cinfo.scm 40 */
								BgL_cfunzf2cinfozf2_bglt BgL_res5487z00_4198;

								{	/* Cfa/cinfo.scm 40 */
									BgL_cfunzf2cinfozf2_bglt BgL_new3316z00_4195;

									BgL_new3316z00_4195 = BgL_new3298z00_4194;
									{	/* Cfa/cinfo.scm 40 */
										BgL_approxz00_bglt BgL_approx3315z00_4197;

										BgL_approx3315z00_4197 = BgL_approx3300z00_432;
										((((BgL_cfunzf2cinfozf2_bglt) CREF(BgL_new3316z00_4195))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approx3315z00_4197), BUNSPEC);
										BgL_res5487z00_4198 = BgL_new3316z00_4195;
								}} BgL_res5487z00_4198;
							}
							BgL_res5488z00_4199 = BgL_new3298z00_4194;
						}
						BgL_arg5010z00_4189 = BgL_res5488z00_4199;
					}
					{	/* Cfa/cinfo.scm 40 */
						obj_t BgL_auxz00_8816;

						BgL_objectz00_bglt BgL_auxz00_8814;

						BgL_auxz00_8816 = (obj_t) (BgL_arg5010z00_4189);
						BgL_auxz00_8814 = (BgL_objectz00_bglt) (BgL_aux3313z00_4187);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_8814, BgL_auxz00_8816);
				}}
				return
					((BgL_cfunzf2cinfozf2_bglt)
					(BgL_cfunzf2cinfozf2_bglt) (BgL_aux3313z00_4187));
			}
		}
	}



/* _make-cfun/Cinfo */
	obj_t BGl__makezd2cfunzf2Cinfoz20zzcfa_infoz00(obj_t BgL_envz00_5879,
		obj_t BgL_arity3301z00_5880, obj_t BgL_sidezd2effectzf33302z21_5881,
		obj_t BgL_predicatezd2of3303zd2_5882,
		obj_t BgL_stackzd2allocator3304zd2_5883, obj_t BgL_topzf33305zf3_5884,
		obj_t BgL_thezd2closure3306zd2_5885, obj_t BgL_effect3307z00_5886,
		obj_t BgL_argszd2type3308zd2_5887, obj_t BgL_macrozf33309zf3_5888,
		obj_t BgL_infixzf33310zf3_5889, obj_t BgL_method3312z00_5890,
		obj_t BgL_approx3300z00_5891)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			return
				(obj_t) (BGl_makezd2cfunzf2Cinfoz20zzcfa_infoz00(
					(long) CINT(BgL_arity3301z00_5880), BgL_sidezd2effectzf33302z21_5881,
					BgL_predicatezd2of3303zd2_5882, BgL_stackzd2allocator3304zd2_5883,
					CBOOL(BgL_topzf33305zf3_5884), BgL_thezd2closure3306zd2_5885,
					BgL_effect3307z00_5886, BgL_argszd2type3308zd2_5887,
					CBOOL(BgL_macrozf33309zf3_5888), CBOOL(BgL_infixzf33310zf3_5889),
					BgL_method3312z00_5890,
					(BgL_approxz00_bglt) (BgL_approx3300z00_5891)));
		}
	}



/* fill-cfun/Cinfo! */
	BGL_EXPORTED_DEF BgL_cfunzf2cinfozf2_bglt
		BGl_fillzd2cfunzf2Cinfoz12z32zzcfa_infoz00(BgL_cfunzf2cinfozf2_bglt
		BgL_new3316z00_433, BgL_approxz00_bglt BgL_approx3315z00_434)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{	/* Cfa/cinfo.scm 40 */
				BgL_approxz00_bglt BgL_approx3315z00_6428;

				BgL_approx3315z00_6428 = BgL_approx3315z00_434;
				((((BgL_cfunzf2cinfozf2_bglt) CREF(BgL_new3316z00_433))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_approx3315z00_6428), BUNSPEC);
				return BgL_new3316z00_433;
			}
		}
	}



/* _fill-cfun/Cinfo! */
	obj_t BGl__fillzd2cfunzf2Cinfoz12z32zzcfa_infoz00(obj_t BgL_envz00_5892,
		obj_t BgL_new3316z00_5893, obj_t BgL_approx3315z00_5894)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{	/* Cfa/cinfo.scm 40 */
				BgL_cfunzf2cinfozf2_bglt BgL_auxz00_8829;

				{	/* Cfa/cinfo.scm 40 */
					BgL_cfunzf2cinfozf2_bglt BgL_res5694z00_6432;

					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunzf2cinfozf2_bglt BgL_new3316z00_6429;

						BgL_approxz00_bglt BgL_approx3315z00_6430;

						BgL_new3316z00_6429 =
							(BgL_cfunzf2cinfozf2_bglt) (BgL_new3316z00_5893);
						BgL_approx3315z00_6430 =
							(BgL_approxz00_bglt) (BgL_approx3315z00_5894);
						{	/* Cfa/cinfo.scm 40 */
							BgL_approxz00_bglt BgL_approx3315z00_6431;

							BgL_approx3315z00_6431 = BgL_approx3315z00_6430;
							((((BgL_cfunzf2cinfozf2_bglt) CREF(BgL_new3316z00_6429))->
									BgL_approxz00) =
								((BgL_approxz00_bglt) BgL_approx3315z00_6431), BUNSPEC);
							BgL_res5694z00_6432 = BgL_new3316z00_6429;
						}
					}
					BgL_auxz00_8829 = BgL_res5694z00_6432;
				}
				return (obj_t) (BgL_auxz00_8829);
			}
		}
	}



/* %allocate-cfun/Cinfo */
	BGL_EXPORTED_DEF BgL_cfunz00_bglt
		BGl_z52allocatezd2cfunzf2Cinfoz72zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{	/* Cfa/cinfo.scm 40 */
				BgL_cfunz00_bglt BgL_new3319z00_6433;

				BgL_new3319z00_6433 =
					((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3319z00_6433),
					BGl_classzd2numzd2zz__objectz00(BGl_cfunzf2Cinfozf2zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 40 */
					BgL_objectz00_bglt BgL_auxz00_8838;

					BgL_auxz00_8838 = (BgL_objectz00_bglt) (BgL_new3319z00_6433);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8838, BFALSE);
				}
				return BgL_new3319z00_6433;
			}
		}
	}



/* _%allocate-cfun/Cinfo */
	obj_t BGl__z52allocatezd2cfunzf2Cinfoz72zzcfa_infoz00(obj_t BgL_envz00_5417)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{	/* Cfa/cinfo.scm 40 */
				BgL_cfunz00_bglt BgL_auxz00_8841;

				{	/* Cfa/cinfo.scm 40 */
					BgL_cfunz00_bglt BgL_res5695z00_6437;

					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunz00_bglt BgL_new3319z00_6435;

						BgL_new3319z00_6435 =
							((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3319z00_6435),
							BGl_classzd2numzd2zz__objectz00
							(BGl_cfunzf2Cinfozf2zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_8846;

							BgL_auxz00_8846 = (BgL_objectz00_bglt) (BgL_new3319z00_6435);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8846, BFALSE);
						}
						BgL_res5695z00_6437 = BgL_new3319z00_6435;
					}
					BgL_auxz00_8841 = BgL_res5695z00_6437;
				}
				return (obj_t) (BgL_auxz00_8841);
			}
		}
	}



/* cfun/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_cfunzf2cinfozf2_bglt
		BGl_cfunzf2Cinfozd2nilz20zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			if ((BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 40 */
					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunz00_bglt BgL_res5489z00_4209;

						{	/* Cfa/cinfo.scm 40 */
							BgL_cfunz00_bglt BgL_new2018z00_4205;

							BgL_new2018z00_4205 =
								((BgL_cfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2018z00_4205),
								BGl_classzd2numzd2zz__objectz00(BGl_cfunz00zzast_varz00));
							{	/* Cfa/cinfo.scm 40 */
								BgL_objectz00_bglt BgL_auxz00_8856;

								BgL_auxz00_8856 = (BgL_objectz00_bglt) (BgL_new2018z00_4205);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8856, BFALSE);
							}
							BgL_res5489z00_4209 = BgL_new2018z00_4205;
						}
						BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00 =
							(obj_t) (BgL_res5489z00_4209);
					}
					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunz00_bglt BgL_res5490z00_4233;

						{	/* Cfa/cinfo.scm 40 */
							BgL_cfunz00_bglt BgL_new2005z00_4210;

							BgL_new2005z00_4210 =
								(BgL_cfunz00_bglt)
								(BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00);
							{	/* Cfa/cinfo.scm 40 */
								long BgL_arity1994z00_4222;

								obj_t BgL_sidezd2effectzf31995z21_4223;

								obj_t BgL_predicatezd2of1996zd2_4224;

								obj_t BgL_stackzd2allocator1997zd2_4225;

								bool_t BgL_topzf31998zf3_4226;

								obj_t BgL_thezd2closure1999zd2_4227;

								obj_t BgL_effect2000z00_4228;

								obj_t BgL_argszd2type2001zd2_4229;

								bool_t BgL_macrozf32002zf3_4230;

								bool_t BgL_infixzf32003zf3_4231;

								obj_t BgL_method2004z00_4232;

								BgL_arity1994z00_4222 = ((long) 0);
								BgL_sidezd2effectzf31995z21_4223 = BUNSPEC;
								BgL_predicatezd2of1996zd2_4224 = BUNSPEC;
								BgL_stackzd2allocator1997zd2_4225 = BUNSPEC;
								BgL_topzf31998zf3_4226 = ((bool_t) 0);
								BgL_thezd2closure1999zd2_4227 = BUNSPEC;
								BgL_effect2000z00_4228 = BUNSPEC;
								BgL_argszd2type2001zd2_4229 = BUNSPEC;
								BgL_macrozf32002zf3_4230 = ((bool_t) 0);
								BgL_infixzf32003zf3_4231 = ((bool_t) 0);
								BgL_method2004z00_4232 = BNIL;
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_arityz00) = ((long) BgL_arity1994z00_4222), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31995z21_4223), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1996zd2_4224), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1997zd2_4225), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31998zf3_4226), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1999zd2_4227), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_effectz00) = ((obj_t) BgL_effect2000z00_4228), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_argszd2typezd2) =
									((obj_t) BgL_argszd2type2001zd2_4229), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_macrozf3zf3) =
									((bool_t) BgL_macrozf32002zf3_4230), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_infixzf3zf3) =
									((bool_t) BgL_infixzf32003zf3_4231), BUNSPEC);
								((((BgL_cfunz00_bglt) CREF(BgL_new2005z00_4210))->
										BgL_methodz00) = ((obj_t) BgL_method2004z00_4232), BUNSPEC);
								BgL_res5490z00_4233 = BgL_new2005z00_4210;
						}} BgL_res5490z00_4233;
					}
					{	/* Cfa/cinfo.scm 40 */
						long BgL_arg5013z00_1799;

						BgL_arg5013z00_1799 =
							BGl_classzd2numzd2zz__objectz00(BGl_cfunzf2Cinfozf2zzcfa_infoz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00),
							BgL_arg5013z00_1799);
					}
					{	/* Cfa/cinfo.scm 40 */
						BgL_cfunzf2cinfozf2_bglt BgL_arg5014z00_1800;

						{	/* Cfa/cinfo.scm 40 */
							BgL_approxz00_bglt BgL_arg5015z00_1801;

							BgL_arg5015z00_1801 = BGl_approxzd2nilzd2zzcfa_infoz00();
							{	/* Cfa/cinfo.scm 40 */
								BgL_cfunzf2cinfozf2_bglt BgL_res5492z00_4242;

								{	/* Cfa/cinfo.scm 40 */
									BgL_cfunzf2cinfozf2_bglt BgL_new3298z00_4237;

									BgL_new3298z00_4237 =
										((BgL_cfunzf2cinfozf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_cfunzf2cinfozf2_bgl))));
									{	/* Cfa/cinfo.scm 40 */
										BgL_cfunzf2cinfozf2_bglt BgL_res5491z00_4241;

										{	/* Cfa/cinfo.scm 40 */
											BgL_cfunzf2cinfozf2_bglt BgL_new3316z00_4238;

											BgL_new3316z00_4238 = BgL_new3298z00_4237;
											{	/* Cfa/cinfo.scm 40 */
												BgL_approxz00_bglt BgL_approx3315z00_4240;

												BgL_approx3315z00_4240 = BgL_arg5015z00_1801;
												((((BgL_cfunzf2cinfozf2_bglt)
															CREF(BgL_new3316z00_4238))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approx3315z00_4240),
													BUNSPEC);
												BgL_res5491z00_4241 = BgL_new3316z00_4238;
										}} BgL_res5491z00_4241;
									}
									BgL_res5492z00_4242 = BgL_new3298z00_4237;
								}
								BgL_arg5014z00_1800 = BgL_res5492z00_4242;
						}}
						{	/* Cfa/cinfo.scm 40 */
							obj_t BgL_auxz00_8880;

							BgL_objectz00_bglt BgL_auxz00_8878;

							BgL_auxz00_8880 = (obj_t) (BgL_arg5014z00_1800);
							BgL_auxz00_8878 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8878, BgL_auxz00_8880);
				}}}
			else
				{	/* Cfa/cinfo.scm 40 */
					BFALSE;
				}
			return
				(BgL_cfunzf2cinfozf2_bglt)
				(BGl_z52thezd2cfunzf2Cinfozd2nilza0zzcfa_infoz00);
		}
	}



/* _cfun/Cinfo-nil */
	obj_t BGl__cfunzf2Cinfozd2nilz20zzcfa_infoz00(obj_t BgL_envz00_5418)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			return (obj_t) (BGl_cfunzf2Cinfozd2nilz20zzcfa_infoz00());
		}
	}



/* approx? */
	BGL_EXPORTED_DEF bool_t BGl_approxzf3zf3zzcfa_infoz00(obj_t
		BgL_obj3296z00_436)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3296z00_436,
				BGl_approxz00zzcfa_infoz00);
		}
	}



/* _approx? */
	obj_t BGl__approxzf3zf3zzcfa_infoz00(obj_t BgL_envz00_5415,
		obj_t BgL_obj3296z00_5416)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3296z00_5416,
					BGl_approxz00zzcfa_infoz00));
		}
	}



/* make-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2approxzd2zzcfa_infoz00(BgL_typez00_bglt BgL_type3253z00_440,
		bool_t BgL_typezd2lockedzf33254z21_441, obj_t BgL_allocs3255z00_442,
		bool_t BgL_topzf33256zf3_443, long BgL_lostzd2stamp3257zd2_444)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{	/* Cfa/cinfo.scm 23 */
				BgL_approxz00_bglt BgL_new3258z00_4243;

				{	/* Cfa/cinfo.scm 23 */
					BgL_approxz00_bglt BgL_res5493z00_4248;

					{	/* Cfa/cinfo.scm 23 */
						BgL_approxz00_bglt BgL_new3272z00_4244;

						BgL_new3272z00_4244 =
							((BgL_approxz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_approxz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3272z00_4244),
							BGl_classzd2numzd2zz__objectz00(BGl_approxz00zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_8893;

							BgL_auxz00_8893 = (BgL_objectz00_bglt) (BgL_new3272z00_4244);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8893, BFALSE);
						}
						BgL_res5493z00_4248 = BgL_new3272z00_4244;
					}
					BgL_new3258z00_4243 = BgL_res5493z00_4248;
				}
				{	/* Cfa/cinfo.scm 23 */
					BgL_approxz00_bglt BgL_res5494z00_4260;

					{	/* Cfa/cinfo.scm 23 */
						BgL_approxz00_bglt BgL_new3265z00_4249;

						BgL_new3265z00_4249 = BgL_new3258z00_4243;
						{	/* Cfa/cinfo.scm 23 */
							BgL_typez00_bglt BgL_type3260z00_4255;

							bool_t BgL_typezd2lockedzf33261z21_4256;

							obj_t BgL_allocs3262z00_4257;

							bool_t BgL_topzf33263zf3_4258;

							long BgL_lostzd2stamp3264zd2_4259;

							BgL_type3260z00_4255 = BgL_type3253z00_440;
							BgL_typezd2lockedzf33261z21_4256 =
								BgL_typezd2lockedzf33254z21_441;
							BgL_allocs3262z00_4257 = BgL_allocs3255z00_442;
							BgL_topzf33263zf3_4258 = BgL_topzf33256zf3_443;
							BgL_lostzd2stamp3264zd2_4259 = BgL_lostzd2stamp3257zd2_444;
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4249))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3260z00_4255), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4249))->
									BgL_typezd2lockedzf3z21) =
								((bool_t) BgL_typezd2lockedzf33261z21_4256), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4249))->
									BgL_allocsz00) = ((obj_t) BgL_allocs3262z00_4257), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4249))->
									BgL_topzf3zf3) = ((bool_t) BgL_topzf33263zf3_4258), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4249))->
									BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp3264zd2_4259), BUNSPEC);
							BgL_res5494z00_4260 = BgL_new3265z00_4249;
					}} BgL_res5494z00_4260;
				}
				return BgL_new3258z00_4243;
			}
		}
	}



/* _make-approx */
	obj_t BGl__makezd2approxzd2zzcfa_infoz00(obj_t BgL_envz00_5895,
		obj_t BgL_type3253z00_5896, obj_t BgL_typezd2lockedzf33254z21_5897,
		obj_t BgL_allocs3255z00_5898, obj_t BgL_topzf33256zf3_5899,
		obj_t BgL_lostzd2stamp3257zd2_5900)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			return
				(obj_t) (BGl_makezd2approxzd2zzcfa_infoz00(
					(BgL_typez00_bglt) (BgL_type3253z00_5896),
					CBOOL(BgL_typezd2lockedzf33254z21_5897), BgL_allocs3255z00_5898,
					CBOOL(BgL_topzf33256zf3_5899),
					(long) CINT(BgL_lostzd2stamp3257zd2_5900)));
		}
	}



/* fill-approx! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_fillzd2approxz12zc0zzcfa_infoz00(BgL_approxz00_bglt BgL_new3265z00_445,
		BgL_typez00_bglt BgL_type3260z00_446,
		bool_t BgL_typezd2lockedzf33261z21_447, obj_t BgL_allocs3262z00_448,
		bool_t BgL_topzf33263zf3_449, long BgL_lostzd2stamp3264zd2_450)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{	/* Cfa/cinfo.scm 23 */
				BgL_typez00_bglt BgL_type3260z00_6439;

				bool_t BgL_typezd2lockedzf33261z21_6440;

				obj_t BgL_allocs3262z00_6441;

				bool_t BgL_topzf33263zf3_6442;

				long BgL_lostzd2stamp3264zd2_6443;

				BgL_type3260z00_6439 = BgL_type3260z00_446;
				BgL_typezd2lockedzf33261z21_6440 = BgL_typezd2lockedzf33261z21_447;
				BgL_allocs3262z00_6441 = BgL_allocs3262z00_448;
				BgL_topzf33263zf3_6442 = BgL_topzf33263zf3_449;
				BgL_lostzd2stamp3264zd2_6443 = BgL_lostzd2stamp3264zd2_450;
				((((BgL_approxz00_bglt) CREF(BgL_new3265z00_445))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type3260z00_6439), BUNSPEC);
				((((BgL_approxz00_bglt) CREF(BgL_new3265z00_445))->
						BgL_typezd2lockedzf3z21) =
					((bool_t) BgL_typezd2lockedzf33261z21_6440), BUNSPEC);
				((((BgL_approxz00_bglt) CREF(BgL_new3265z00_445))->BgL_allocsz00) =
					((obj_t) BgL_allocs3262z00_6441), BUNSPEC);
				((((BgL_approxz00_bglt) CREF(BgL_new3265z00_445))->BgL_topzf3zf3) =
					((bool_t) BgL_topzf33263zf3_6442), BUNSPEC);
				((((BgL_approxz00_bglt) CREF(BgL_new3265z00_445))->
						BgL_lostzd2stampzd2) =
					((long) BgL_lostzd2stamp3264zd2_6443), BUNSPEC);
				return BgL_new3265z00_445;
			}
		}
	}



/* _fill-approx! */
	obj_t BGl__fillzd2approxz12zc0zzcfa_infoz00(obj_t BgL_envz00_5901,
		obj_t BgL_new3265z00_5902, obj_t BgL_type3260z00_5903,
		obj_t BgL_typezd2lockedzf33261z21_5904, obj_t BgL_allocs3262z00_5905,
		obj_t BgL_topzf33263zf3_5906, obj_t BgL_lostzd2stamp3264zd2_5907)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{	/* Cfa/cinfo.scm 23 */
				BgL_approxz00_bglt BgL_auxz00_8912;

				{	/* Cfa/cinfo.scm 23 */
					BgL_approxz00_bglt BgL_res5696z00_6455;

					{	/* Cfa/cinfo.scm 23 */
						BgL_approxz00_bglt BgL_new3265z00_6444;

						BgL_typez00_bglt BgL_type3260z00_6445;

						bool_t BgL_typezd2lockedzf33261z21_6446;

						bool_t BgL_topzf33263zf3_6448;

						long BgL_lostzd2stamp3264zd2_6449;

						BgL_new3265z00_6444 = (BgL_approxz00_bglt) (BgL_new3265z00_5902);
						BgL_type3260z00_6445 = (BgL_typez00_bglt) (BgL_type3260z00_5903);
						BgL_typezd2lockedzf33261z21_6446 =
							CBOOL(BgL_typezd2lockedzf33261z21_5904);
						BgL_topzf33263zf3_6448 = CBOOL(BgL_topzf33263zf3_5906);
						BgL_lostzd2stamp3264zd2_6449 =
							(long) CINT(BgL_lostzd2stamp3264zd2_5907);
						{	/* Cfa/cinfo.scm 23 */
							BgL_typez00_bglt BgL_type3260z00_6450;

							bool_t BgL_typezd2lockedzf33261z21_6451;

							obj_t BgL_allocs3262z00_6452;

							bool_t BgL_topzf33263zf3_6453;

							long BgL_lostzd2stamp3264zd2_6454;

							BgL_type3260z00_6450 = BgL_type3260z00_6445;
							BgL_typezd2lockedzf33261z21_6451 =
								BgL_typezd2lockedzf33261z21_6446;
							BgL_allocs3262z00_6452 = BgL_allocs3262z00_5905;
							BgL_topzf33263zf3_6453 = BgL_topzf33263zf3_6448;
							BgL_lostzd2stamp3264zd2_6454 = BgL_lostzd2stamp3264zd2_6449;
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_6444))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_type3260z00_6450), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_6444))->
									BgL_typezd2lockedzf3z21) =
								((bool_t) BgL_typezd2lockedzf33261z21_6451), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_6444))->
									BgL_allocsz00) = ((obj_t) BgL_allocs3262z00_6452), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_6444))->
									BgL_topzf3zf3) = ((bool_t) BgL_topzf33263zf3_6453), BUNSPEC);
							((((BgL_approxz00_bglt) CREF(BgL_new3265z00_6444))->
									BgL_lostzd2stampzd2) =
								((long) BgL_lostzd2stamp3264zd2_6454), BUNSPEC);
							BgL_res5696z00_6455 = BgL_new3265z00_6444;
					}}
					BgL_auxz00_8912 = BgL_res5696z00_6455;
				}
				return (obj_t) (BgL_auxz00_8912);
			}
		}
	}



/* %allocate-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt BGl_z52allocatezd2approxz80zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{	/* Cfa/cinfo.scm 23 */
				BgL_approxz00_bglt BgL_new3272z00_6456;

				BgL_new3272z00_6456 =
					((BgL_approxz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_approxz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3272z00_6456),
					BGl_classzd2numzd2zz__objectz00(BGl_approxz00zzcfa_infoz00));
				{	/* Cfa/cinfo.scm 23 */
					BgL_objectz00_bglt BgL_auxz00_8928;

					BgL_auxz00_8928 = (BgL_objectz00_bglt) (BgL_new3272z00_6456);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_8928, BFALSE);
				}
				return BgL_new3272z00_6456;
			}
		}
	}



/* _%allocate-approx */
	obj_t BGl__z52allocatezd2approxz80zzcfa_infoz00(obj_t BgL_envz00_5413)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{	/* Cfa/cinfo.scm 23 */
				BgL_approxz00_bglt BgL_auxz00_8931;

				{	/* Cfa/cinfo.scm 23 */
					BgL_approxz00_bglt BgL_res5697z00_6460;

					{	/* Cfa/cinfo.scm 23 */
						BgL_approxz00_bglt BgL_new3272z00_6458;

						BgL_new3272z00_6458 =
							((BgL_approxz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_approxz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3272z00_6458),
							BGl_classzd2numzd2zz__objectz00(BGl_approxz00zzcfa_infoz00));
						{	/* Cfa/cinfo.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_8936;

							BgL_auxz00_8936 = (BgL_objectz00_bglt) (BgL_new3272z00_6458);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_8936, BFALSE);
						}
						BgL_res5697z00_6460 = BgL_new3272z00_6458;
					}
					BgL_auxz00_8931 = BgL_res5697z00_6460;
				}
				return (obj_t) (BgL_auxz00_8931);
			}
		}
	}



/* approx-nil */
	BGL_EXPORTED_DEF BgL_approxz00_bglt BGl_approxzd2nilzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			if ((BGl_z52thezd2approxzd2nilz52zzcfa_infoz00 == BUNSPEC))
				{	/* Cfa/cinfo.scm 23 */
					{	/* Cfa/cinfo.scm 23 */
						BgL_approxz00_bglt BgL_res5495z00_4274;

						{	/* Cfa/cinfo.scm 23 */
							BgL_approxz00_bglt BgL_new3272z00_4270;

							BgL_new3272z00_4270 =
								((BgL_approxz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_approxz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3272z00_4270),
								BGl_classzd2numzd2zz__objectz00(BGl_approxz00zzcfa_infoz00));
							{	/* Cfa/cinfo.scm 23 */
								BgL_objectz00_bglt BgL_auxz00_8946;

								BgL_auxz00_8946 = (BgL_objectz00_bglt) (BgL_new3272z00_4270);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_8946, BFALSE);
							}
							BgL_res5495z00_4274 = BgL_new3272z00_4270;
						}
						BGl_z52thezd2approxzd2nilz52zzcfa_infoz00 =
							(obj_t) (BgL_res5495z00_4274);
					}
					{	/* Cfa/cinfo.scm 23 */
						BgL_typez00_bglt BgL_arg5018z00_1811;

						BgL_arg5018z00_1811 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Cfa/cinfo.scm 23 */
							BgL_approxz00_bglt BgL_res5496z00_4286;

							{	/* Cfa/cinfo.scm 23 */
								BgL_approxz00_bglt BgL_new3265z00_4275;

								BgL_new3265z00_4275 =
									(BgL_approxz00_bglt)
									(BGl_z52thezd2approxzd2nilz52zzcfa_infoz00);
								{	/* Cfa/cinfo.scm 23 */
									BgL_typez00_bglt BgL_type3260z00_4281;

									bool_t BgL_typezd2lockedzf33261z21_4282;

									obj_t BgL_allocs3262z00_4283;

									bool_t BgL_topzf33263zf3_4284;

									long BgL_lostzd2stamp3264zd2_4285;

									BgL_type3260z00_4281 = BgL_arg5018z00_1811;
									BgL_typezd2lockedzf33261z21_4282 = ((bool_t) 0);
									BgL_allocs3262z00_4283 = BUNSPEC;
									BgL_topzf33263zf3_4284 = ((bool_t) 0);
									BgL_lostzd2stamp3264zd2_4285 = ((long) 0);
									((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4275))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3260z00_4281), BUNSPEC);
									((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4275))->
											BgL_typezd2lockedzf3z21) =
										((bool_t) BgL_typezd2lockedzf33261z21_4282), BUNSPEC);
									((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4275))->
											BgL_allocsz00) =
										((obj_t) BgL_allocs3262z00_4283), BUNSPEC);
									((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4275))->
											BgL_topzf3zf3) =
										((bool_t) BgL_topzf33263zf3_4284), BUNSPEC);
									((((BgL_approxz00_bglt) CREF(BgL_new3265z00_4275))->
											BgL_lostzd2stampzd2) =
										((long) BgL_lostzd2stamp3264zd2_4285), BUNSPEC);
									BgL_res5496z00_4286 = BgL_new3265z00_4275;
							}}
							(obj_t) (BgL_res5496z00_4286);
				}}}
			else
				{	/* Cfa/cinfo.scm 23 */
					BFALSE;
				}
			return (BgL_approxz00_bglt) (BGl_z52thezd2approxzd2nilz52zzcfa_infoz00);
		}
	}



/* _approx-nil */
	obj_t BGl__approxzd2nilzd2zzcfa_infoz00(obj_t BgL_envz00_5414)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			return (obj_t) (BGl_approxzd2nilzd2zzcfa_infoz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00, BGl_proc5579z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00, BGl_proc5581z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00,
				BGl_proc5583z00zzcfa_infoz00, BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00,
				BGl_proc5584z00zzcfa_infoz00, BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00, BGl_proc5585z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00, BGl_proc5586z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00, BGl_proc5587z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00, BGl_proc5588z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00,
				BGl_proc5589z00zzcfa_infoz00, BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00,
				BGl_proc5590z00zzcfa_infoz00, BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00, BGl_proc5591z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00, BGl_proc5592z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2makezd2boxz00zzcfa_infoz00, BGl_proc5593z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2makezd2boxz00zzcfa_infoz00, BGl_proc5594z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00,
				BGl_proc5595z00zzcfa_infoz00, BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00,
				BGl_proc5596z00zzcfa_infoz00, BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00, BGl_proc5597z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00, BGl_proc5598z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_selectzf2Cinfozf2zzcfa_infoz00, BGl_proc5599z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_selectzf2Cinfozf2zzcfa_infoz00, BGl_proc5600z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_failzf2Cinfozf2zzcfa_infoz00, BGl_proc5601z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_failzf2Cinfozf2zzcfa_infoz00, BGl_proc5602z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00, BGl_proc5603z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00, BGl_proc5604z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_setqzf2Cinfozf2zzcfa_infoz00, BGl_proc5605z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_setqzf2Cinfozf2zzcfa_infoz00, BGl_proc5606z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_funcallzf2Cinfozf2zzcfa_infoz00, BGl_proc5607z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_funcallzf2Cinfozf2zzcfa_infoz00, BGl_proc5608z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00, BGl_proc5609z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00, BGl_proc5610z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_kwotezf2Cinfozf2zzcfa_infoz00, BGl_proc5611z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_kwotezf2Cinfozf2zzcfa_infoz00, BGl_proc5612z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_kwotezf2nodezf2zzcfa_infoz00, BGl_proc5613z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_kwotezf2nodezf2zzcfa_infoz00, BGl_proc5614z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_atomzf2Cinfozf2zzcfa_infoz00, BGl_proc5615z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_atomzf2Cinfozf2zzcfa_infoz00, BGl_proc5616z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_reshapedzd2globalzd2zzcfa_infoz00, BGl_proc5617z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_reshapedzd2globalzd2zzcfa_infoz00, BGl_proc5618z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_reshapedzd2localzd2zzcfa_infoz00, BGl_proc5619z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_reshapedzd2localzd2zzcfa_infoz00, BGl_proc5620z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc5621z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc5622z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc5623z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc5624z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc5625z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc5626z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_prezd2clozd2envz00zzcfa_infoz00, BGl_proc5627z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_prezd2clozd2envz00zzcfa_infoz00, BGl_proc5628z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc5629z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc5630z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc5631z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc5632z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc5633z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc5634z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cfunzf2Cinfozf2zzcfa_infoz00, BGl_proc5635z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cfunzf2Cinfozf2zzcfa_infoz00, BGl_proc5636z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_approxz00zzcfa_infoz00, BGl_proc5637z00zzcfa_infoz00,
				BGl_string5580z00zzcfa_infoz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_approxz00zzcfa_infoz00, BGl_proc5638z00zzcfa_infoz00,
				BGl_string5582z00zzcfa_infoz00);
		}
	}



/* struct+object->objec4601 */
	obj_t BGl_structzb2objectzd2ze3objec4601z83zzcfa_infoz00(obj_t
		BgL_envz00_5971, obj_t BgL_oz00_5972, obj_t BgL_sz00_5973)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{
				BgL_approxz00_bglt BgL_oz00_2828;

				obj_t BgL_sz00_2829;

				{	/* Cfa/cinfo.scm 23 */
					BgL_approxz00_bglt BgL_auxz00_9019;

					BgL_oz00_2828 = (BgL_approxz00_bglt) (BgL_oz00_5972);
					BgL_sz00_2829 = BgL_sz00_5973;
					{	/* Cfa/cinfo.scm 23 */
						obj_t BgL_arg5310z00_2832;

						BgL_arg5310z00_2832 = STRUCT_REF(BgL_sz00_2829, (int) (((long) 0)));
						{	/* Cfa/cinfo.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_9022;

							BgL_auxz00_9022 = (BgL_objectz00_bglt) (BgL_oz00_2828);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_9022, BgL_arg5310z00_2832);
					}}
					{
						BgL_typez00_bglt BgL_auxz00_9025;

						BgL_auxz00_9025 =
							(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2829,
								(int) (((long) 1))));
						((((BgL_approxz00_bglt) CREF(BgL_oz00_2828))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_9025), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_9030;

						BgL_auxz00_9030 =
							CBOOL(STRUCT_REF(BgL_sz00_2829, (int) (((long) 2))));
						((((BgL_approxz00_bglt) CREF(BgL_oz00_2828))->
								BgL_typezd2lockedzf3z21) = ((bool_t) BgL_auxz00_9030), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_9035;

						BgL_auxz00_9035 = STRUCT_REF(BgL_sz00_2829, (int) (((long) 3)));
						((((BgL_approxz00_bglt) CREF(BgL_oz00_2828))->BgL_allocsz00) =
							((obj_t) BgL_auxz00_9035), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_9039;

						BgL_auxz00_9039 =
							CBOOL(STRUCT_REF(BgL_sz00_2829, (int) (((long) 4))));
						((((BgL_approxz00_bglt) CREF(BgL_oz00_2828))->BgL_topzf3zf3) =
							((bool_t) BgL_auxz00_9039), BUNSPEC);
					}
					{
						long BgL_auxz00_9044;

						BgL_auxz00_9044 =
							(long) CINT(STRUCT_REF(BgL_sz00_2829, (int) (((long) 5))));
						((((BgL_approxz00_bglt) CREF(BgL_oz00_2828))->BgL_lostzd2stampzd2) =
							((long) BgL_auxz00_9044), BUNSPEC);
					}
					BgL_auxz00_9019 = BgL_oz00_2828;
					return (obj_t) (BgL_auxz00_9019);
				}
			}
		}
	}



/* object->struct-appro4599 */
	obj_t BGl_objectzd2ze3structzd2appro4599ze3zzcfa_infoz00(obj_t
		BgL_envz00_5974, obj_t BgL_obj3274z00_5975)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 23 */
			{
				BgL_approxz00_bglt BgL_obj3274z00_2812;

				BgL_obj3274z00_2812 = (BgL_approxz00_bglt) (BgL_obj3274z00_5975);
				{	/* Cfa/cinfo.scm 23 */
					obj_t BgL_res3275z00_2815;

					{	/* Cfa/cinfo.scm 23 */
						obj_t BgL_keyz00_5375;

						BgL_keyz00_5375 = CNST_TABLE_REF(((long) 0));
						BgL_res3275z00_2815 =
							make_struct(BgL_keyz00_5375, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Cfa/cinfo.scm 23 */
						int BgL_auxz00_9054;

						BgL_auxz00_9054 = (int) (((long) 0));
						STRUCT_SET(BgL_res3275z00_2815, BgL_auxz00_9054, BFALSE);
					}
					{	/* Cfa/cinfo.scm 23 */
						BgL_typez00_bglt BgL_arg5300z00_2817;

						BgL_arg5300z00_2817 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3274z00_2812))->BgL_typez00);
						{	/* Cfa/cinfo.scm 23 */
							obj_t BgL_auxz00_9060;

							int BgL_auxz00_9058;

							BgL_auxz00_9060 = (obj_t) (BgL_arg5300z00_2817);
							BgL_auxz00_9058 = (int) (((long) 1));
							STRUCT_SET(BgL_res3275z00_2815, BgL_auxz00_9058, BgL_auxz00_9060);
					}}
					{	/* Cfa/cinfo.scm 23 */
						bool_t BgL_arg5302z00_2819;

						BgL_arg5302z00_2819 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3274z00_2812))->
							BgL_typezd2lockedzf3z21);
						{	/* Cfa/cinfo.scm 23 */
							obj_t BgL_auxz00_9066;

							int BgL_auxz00_9064;

							BgL_auxz00_9066 = BBOOL(BgL_arg5302z00_2819);
							BgL_auxz00_9064 = (int) (((long) 2));
							STRUCT_SET(BgL_res3275z00_2815, BgL_auxz00_9064, BgL_auxz00_9066);
					}}
					{	/* Cfa/cinfo.scm 23 */
						obj_t BgL_arg5304z00_2821;

						BgL_arg5304z00_2821 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3274z00_2812))->BgL_allocsz00);
						{	/* Cfa/cinfo.scm 23 */
							int BgL_auxz00_9070;

							BgL_auxz00_9070 = (int) (((long) 3));
							STRUCT_SET(BgL_res3275z00_2815, BgL_auxz00_9070,
								BgL_arg5304z00_2821);
					}}
					{	/* Cfa/cinfo.scm 23 */
						bool_t BgL_arg5306z00_2823;

						BgL_arg5306z00_2823 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3274z00_2812))->BgL_topzf3zf3);
						{	/* Cfa/cinfo.scm 23 */
							obj_t BgL_auxz00_9076;

							int BgL_auxz00_9074;

							BgL_auxz00_9076 = BBOOL(BgL_arg5306z00_2823);
							BgL_auxz00_9074 = (int) (((long) 4));
							STRUCT_SET(BgL_res3275z00_2815, BgL_auxz00_9074, BgL_auxz00_9076);
					}}
					{	/* Cfa/cinfo.scm 23 */
						long BgL_arg5308z00_2825;

						BgL_arg5308z00_2825 =
							(((BgL_approxz00_bglt) CREF(BgL_obj3274z00_2812))->
							BgL_lostzd2stampzd2);
						{	/* Cfa/cinfo.scm 23 */
							obj_t BgL_auxz00_9082;

							int BgL_auxz00_9080;

							BgL_auxz00_9082 = BINT(BgL_arg5308z00_2825);
							BgL_auxz00_9080 = (int) (((long) 5));
							STRUCT_SET(BgL_res3275z00_2815, BgL_auxz00_9080, BgL_auxz00_9082);
					}}
					return BgL_res3275z00_2815;
				}
			}
		}
	}



/* struct+object->objec4597 */
	obj_t BGl_structzb2objectzd2ze3objec4597z83zzcfa_infoz00(obj_t
		BgL_envz00_5976, obj_t BgL_oz00_5977, obj_t BgL_sz00_5978)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{
				BgL_cfunzf2cinfozf2_bglt BgL_oz00_2800;

				obj_t BgL_sz00_2801;

				{	/* Cfa/cinfo.scm 40 */
					BgL_cfunzf2cinfozf2_bglt BgL_auxz00_9086;

					BgL_oz00_2800 = (BgL_cfunzf2cinfozf2_bglt) (BgL_oz00_5977);
					BgL_sz00_2801 = BgL_sz00_5978;
					{

						{	/* Cfa/cinfo.scm 40 */
							obj_t BgL_old3323z00_2804;

							obj_t BgL_aux3324z00_2805;

							{	/* Cfa/cinfo.scm 40 */
								obj_t BgL_nextzd2method4596zd2_2810;

								BgL_nextzd2method4596zd2_2810 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2800),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cfunzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4596zd2_2810))
									{	/* Cfa/cinfo.scm 40 */
										BgL_old3323z00_2804 =
											PROCEDURE_ENTRY(BgL_nextzd2method4596zd2_2810)
											(BgL_nextzd2method4596zd2_2810, (obj_t) (BgL_oz00_2800),
											BgL_sz00_2801, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 40 */
										BgL_old3323z00_2804 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2800), BgL_sz00_2801));
									}
							}
							BgL_aux3324z00_2805 =
								STRUCT_REF(BgL_sz00_2801, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 40 */
								BgL_cfunzf2cinfozf2_bglt BgL_new3325z00_2806;

								BgL_new3325z00_2806 =
									((BgL_cfunzf2cinfozf2_bglt) (BgL_old3323z00_2804));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3325z00_2806),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cfunzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 40 */
									BgL_cfunzf2cinfozf2_bglt BgL_arg5296z00_2808;

									{	/* Cfa/cinfo.scm 40 */
										obj_t BgL_arg5297z00_2809;

										BgL_arg5297z00_2809 =
											STRUCT_REF(BgL_aux3324z00_2805, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 40 */
											BgL_cfunzf2cinfozf2_bglt BgL_res5574z00_5373;

											{	/* Cfa/cinfo.scm 40 */
												BgL_approxz00_bglt BgL_approx3297z00_5367;

												BgL_approx3297z00_5367 =
													(BgL_approxz00_bglt) (BgL_arg5297z00_2809);
												{	/* Cfa/cinfo.scm 40 */
													BgL_cfunzf2cinfozf2_bglt BgL_new3298z00_5368;

													BgL_new3298z00_5368 =
														((BgL_cfunzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_cfunzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 40 */
														BgL_cfunzf2cinfozf2_bglt BgL_res5573z00_5372;

														{	/* Cfa/cinfo.scm 40 */
															BgL_cfunzf2cinfozf2_bglt BgL_new3316z00_5369;

															BgL_new3316z00_5369 = BgL_new3298z00_5368;
															{	/* Cfa/cinfo.scm 40 */
																BgL_approxz00_bglt BgL_approx3315z00_5371;

																BgL_approx3315z00_5371 = BgL_approx3297z00_5367;
																((((BgL_cfunzf2cinfozf2_bglt)
																			CREF(BgL_new3316z00_5369))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3315z00_5371),
																	BUNSPEC);
																BgL_res5573z00_5372 = BgL_new3316z00_5369;
														}} BgL_res5573z00_5372;
													}
													BgL_res5574z00_5373 = BgL_new3298z00_5368;
											}}
											BgL_arg5296z00_2808 = BgL_res5574z00_5373;
									}}
									{	/* Cfa/cinfo.scm 40 */
										obj_t BgL_auxz00_9110;

										BgL_objectz00_bglt BgL_auxz00_9108;

										BgL_auxz00_9110 = (obj_t) (BgL_arg5296z00_2808);
										BgL_auxz00_9108 =
											(BgL_objectz00_bglt) (BgL_new3325z00_2806);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9108, BgL_auxz00_9110);
								}}
								BgL_auxz00_9086 = BgL_new3325z00_2806;
					}}}
					return (obj_t) (BgL_auxz00_9086);
				}
			}
		}
	}



/* object->struct-cfun/4594 */
	obj_t BGl_objectzd2ze3structzd2cfunzf24594z11zzcfa_infoz00(obj_t
		BgL_envz00_5979, obj_t BgL_obj3320z00_5980)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 40 */
			{
				BgL_cfunzf2cinfozf2_bglt BgL_obj3320z00_2790;

				BgL_obj3320z00_2790 = (BgL_cfunzf2cinfozf2_bglt) (BgL_obj3320z00_5980);
				{

					{	/* Cfa/cinfo.scm 40 */
						obj_t BgL_res3321z00_2793;

						{	/* Cfa/cinfo.scm 40 */
							obj_t BgL_nextzd2method4593zd2_2798;

							BgL_nextzd2method4593zd2_2798 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3320z00_2790),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cfunzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4593zd2_2798))
								{	/* Cfa/cinfo.scm 40 */
									BgL_res3321z00_2793 =
										PROCEDURE_ENTRY(BgL_nextzd2method4593zd2_2798)
										(BgL_nextzd2method4593zd2_2798,
										(obj_t) (BgL_obj3320z00_2790), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 40 */
									BgL_res3321z00_2793 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3320z00_2790));
								}
						}
						{	/* Cfa/cinfo.scm 40 */
							obj_t BgL_aux3322z00_2794;

							{	/* Cfa/cinfo.scm 40 */
								obj_t BgL_keyz00_5344;

								BgL_keyz00_5344 = CNST_TABLE_REF(((long) 1));
								BgL_aux3322z00_2794 =
									make_struct(BgL_keyz00_5344, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 40 */
								BgL_approxz00_bglt BgL_arg5292z00_2796;

								{
									obj_t BgL_auxz00_9127;

									{	/* Cfa/cinfo.scm 40 */
										BgL_objectz00_bglt BgL_auxz00_9128;

										BgL_auxz00_9128 =
											(BgL_objectz00_bglt) (BgL_obj3320z00_2790);
										BgL_auxz00_9127 = BGL_OBJECT_WIDENING(BgL_auxz00_9128);
									}
									BgL_arg5292z00_2796 =
										(((BgL_cfunzf2cinfozf2_bglt) CREF(BgL_auxz00_9127))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 40 */
									obj_t BgL_auxz00_9134;

									int BgL_auxz00_9132;

									BgL_auxz00_9134 = (obj_t) (BgL_arg5292z00_2796);
									BgL_auxz00_9132 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3322z00_2794, BgL_auxz00_9132,
										BgL_auxz00_9134);
							}}
							{	/* Cfa/cinfo.scm 40 */
								int BgL_auxz00_9137;

								BgL_auxz00_9137 = (int) (((long) 0));
								STRUCT_SET(BgL_res3321z00_2793, BgL_auxz00_9137,
									BgL_aux3322z00_2794);
							}
							{	/* Cfa/cinfo.scm 40 */
								obj_t BgL_auxz00_9140;

								BgL_auxz00_9140 = STRUCT_KEY(BgL_res3321z00_2793);
								STRUCT_KEY_SET(BgL_aux3322z00_2794, BgL_auxz00_9140);
							}
							{	/* Cfa/cinfo.scm 40 */
								obj_t BgL_kz00_5359;

								BgL_kz00_5359 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3321z00_2793, BgL_kz00_5359);
							}
							return BgL_res3321z00_2793;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4592 */
	obj_t BGl_structzb2objectzd2ze3objec4592z83zzcfa_infoz00(obj_t
		BgL_envz00_5981, obj_t BgL_oz00_5982, obj_t BgL_sz00_5983)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{
				BgL_externzd2sfunzf2cinfoz20_bglt BgL_oz00_2778;

				obj_t BgL_sz00_2779;

				{	/* Cfa/cinfo.scm 42 */
					BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_9146;

					BgL_oz00_2778 = (BgL_externzd2sfunzf2cinfoz20_bglt) (BgL_oz00_5982);
					BgL_sz00_2779 = BgL_sz00_5983;
					{

						{	/* Cfa/cinfo.scm 42 */
							obj_t BgL_old3389z00_2782;

							obj_t BgL_aux3390z00_2783;

							{	/* Cfa/cinfo.scm 42 */
								obj_t BgL_nextzd2method4591zd2_2788;

								BgL_nextzd2method4591zd2_2788 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2778),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4591zd2_2788))
									{	/* Cfa/cinfo.scm 42 */
										BgL_old3389z00_2782 =
											PROCEDURE_ENTRY(BgL_nextzd2method4591zd2_2788)
											(BgL_nextzd2method4591zd2_2788, (obj_t) (BgL_oz00_2778),
											BgL_sz00_2779, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 42 */
										BgL_old3389z00_2782 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2778), BgL_sz00_2779));
									}
							}
							BgL_aux3390z00_2783 =
								STRUCT_REF(BgL_sz00_2779, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 42 */
								BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3391z00_2784;

								BgL_new3391z00_2784 =
									((BgL_externzd2sfunzf2cinfoz20_bglt) (BgL_old3389z00_2782));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3391z00_2784),
									BGl_classzd2numzd2zz__objectz00
									(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 42 */
									BgL_externzd2sfunzf2cinfoz20_bglt BgL_arg5288z00_2786;

									{	/* Cfa/cinfo.scm 42 */
										obj_t BgL_arg5289z00_2787;

										BgL_arg5289z00_2787 =
											STRUCT_REF(BgL_aux3390z00_2783, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 42 */
											BgL_externzd2sfunzf2cinfoz20_bglt BgL_res5571z00_5342;

											{	/* Cfa/cinfo.scm 42 */
												BgL_approxz00_bglt BgL_approx3358z00_5336;

												BgL_approx3358z00_5336 =
													(BgL_approxz00_bglt) (BgL_arg5289z00_2787);
												{	/* Cfa/cinfo.scm 42 */
													BgL_externzd2sfunzf2cinfoz20_bglt BgL_new3359z00_5337;

													BgL_new3359z00_5337 =
														((BgL_externzd2sfunzf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_externzd2sfunzf2cinfoz20_bgl))));
													{	/* Cfa/cinfo.scm 42 */
														BgL_externzd2sfunzf2cinfoz20_bglt
															BgL_res5570z00_5341;
														{	/* Cfa/cinfo.scm 42 */
															BgL_externzd2sfunzf2cinfoz20_bglt
																BgL_new3382z00_5338;
															BgL_new3382z00_5338 = BgL_new3359z00_5337;
															{	/* Cfa/cinfo.scm 42 */
																BgL_approxz00_bglt BgL_approx3381z00_5340;

																BgL_approx3381z00_5340 = BgL_approx3358z00_5336;
																((((BgL_externzd2sfunzf2cinfoz20_bglt)
																			CREF(BgL_new3382z00_5338))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3381z00_5340),
																	BUNSPEC);
																BgL_res5570z00_5341 = BgL_new3382z00_5338;
														}} BgL_res5570z00_5341;
													}
													BgL_res5571z00_5342 = BgL_new3359z00_5337;
											}}
											BgL_arg5288z00_2786 = BgL_res5571z00_5342;
									}}
									{	/* Cfa/cinfo.scm 42 */
										obj_t BgL_auxz00_9170;

										BgL_objectz00_bglt BgL_auxz00_9168;

										BgL_auxz00_9170 = (obj_t) (BgL_arg5288z00_2786);
										BgL_auxz00_9168 =
											(BgL_objectz00_bglt) (BgL_new3391z00_2784);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9168, BgL_auxz00_9170);
								}}
								BgL_auxz00_9146 = BgL_new3391z00_2784;
					}}}
					return (obj_t) (BgL_auxz00_9146);
				}
			}
		}
	}



/* object->struct-exter4589 */
	obj_t BGl_objectzd2ze3structzd2exter4589ze3zzcfa_infoz00(obj_t
		BgL_envz00_5984, obj_t BgL_obj3386z00_5985)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 42 */
			{
				BgL_externzd2sfunzf2cinfoz20_bglt BgL_obj3386z00_2768;

				BgL_obj3386z00_2768 =
					(BgL_externzd2sfunzf2cinfoz20_bglt) (BgL_obj3386z00_5985);
				{

					{	/* Cfa/cinfo.scm 42 */
						obj_t BgL_res3387z00_2771;

						{	/* Cfa/cinfo.scm 42 */
							obj_t BgL_nextzd2method4588zd2_2776;

							BgL_nextzd2method4588zd2_2776 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3386z00_2768),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4588zd2_2776))
								{	/* Cfa/cinfo.scm 42 */
									BgL_res3387z00_2771 =
										PROCEDURE_ENTRY(BgL_nextzd2method4588zd2_2776)
										(BgL_nextzd2method4588zd2_2776,
										(obj_t) (BgL_obj3386z00_2768), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 42 */
									BgL_res3387z00_2771 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3386z00_2768));
								}
						}
						{	/* Cfa/cinfo.scm 42 */
							obj_t BgL_aux3388z00_2772;

							{	/* Cfa/cinfo.scm 42 */
								obj_t BgL_keyz00_5313;

								BgL_keyz00_5313 = CNST_TABLE_REF(((long) 2));
								BgL_aux3388z00_2772 =
									make_struct(BgL_keyz00_5313, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 42 */
								BgL_approxz00_bglt BgL_arg5284z00_2774;

								{
									obj_t BgL_auxz00_9187;

									{	/* Cfa/cinfo.scm 42 */
										BgL_objectz00_bglt BgL_auxz00_9188;

										BgL_auxz00_9188 =
											(BgL_objectz00_bglt) (BgL_obj3386z00_2768);
										BgL_auxz00_9187 = BGL_OBJECT_WIDENING(BgL_auxz00_9188);
									}
									BgL_arg5284z00_2774 =
										(((BgL_externzd2sfunzf2cinfoz20_bglt)
											CREF(BgL_auxz00_9187))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 42 */
									obj_t BgL_auxz00_9194;

									int BgL_auxz00_9192;

									BgL_auxz00_9194 = (obj_t) (BgL_arg5284z00_2774);
									BgL_auxz00_9192 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3388z00_2772, BgL_auxz00_9192,
										BgL_auxz00_9194);
							}}
							{	/* Cfa/cinfo.scm 42 */
								int BgL_auxz00_9197;

								BgL_auxz00_9197 = (int) (((long) 0));
								STRUCT_SET(BgL_res3387z00_2771, BgL_auxz00_9197,
									BgL_aux3388z00_2772);
							}
							{	/* Cfa/cinfo.scm 42 */
								obj_t BgL_auxz00_9200;

								BgL_auxz00_9200 = STRUCT_KEY(BgL_res3387z00_2771);
								STRUCT_KEY_SET(BgL_aux3388z00_2772, BgL_auxz00_9200);
							}
							{	/* Cfa/cinfo.scm 42 */
								obj_t BgL_kz00_5328;

								BgL_kz00_5328 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res3387z00_2771, BgL_kz00_5328);
							}
							return BgL_res3387z00_2771;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4587 */
	obj_t BGl_structzb2objectzd2ze3objec4587z83zzcfa_infoz00(obj_t
		BgL_envz00_5986, obj_t BgL_oz00_5987, obj_t BgL_sz00_5988)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_oz00_2755;

				obj_t BgL_sz00_2756;

				{	/* Cfa/cinfo.scm 44 */
					BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_9206;

					BgL_oz00_2755 = (BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_oz00_5987);
					BgL_sz00_2756 = BgL_sz00_5988;
					{

						{	/* Cfa/cinfo.scm 44 */
							obj_t BgL_old3475z00_2759;

							obj_t BgL_aux3476z00_2760;

							{	/* Cfa/cinfo.scm 44 */
								obj_t BgL_nextzd2method4586zd2_2766;

								BgL_nextzd2method4586zd2_2766 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2755),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4586zd2_2766))
									{	/* Cfa/cinfo.scm 44 */
										BgL_old3475z00_2759 =
											PROCEDURE_ENTRY(BgL_nextzd2method4586zd2_2766)
											(BgL_nextzd2method4586zd2_2766, (obj_t) (BgL_oz00_2755),
											BgL_sz00_2756, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 44 */
										BgL_old3475z00_2759 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2755), BgL_sz00_2756));
									}
							}
							BgL_aux3476z00_2760 =
								STRUCT_REF(BgL_sz00_2756, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 44 */
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3477z00_2761;

								BgL_new3477z00_2761 =
									((BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_old3475z00_2759));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3477z00_2761),
									BGl_classzd2numzd2zz__objectz00
									(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 44 */
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_arg5279z00_2763;

									{	/* Cfa/cinfo.scm 44 */
										obj_t BgL_arg5280z00_2764;

										obj_t BgL_arg5281z00_2765;

										BgL_arg5280z00_2764 =
											STRUCT_REF(BgL_aux3476z00_2760, (int) (((long) 0)));
										BgL_arg5281z00_2765 =
											STRUCT_REF(BgL_aux3476z00_2760, (int) (((long) 1)));
										{	/* Cfa/cinfo.scm 44 */
											BgL_internzd2sfunzf2cinfoz20_bglt BgL_res5568z00_5311;

											{	/* Cfa/cinfo.scm 44 */
												BgL_approxz00_bglt BgL_approx3440z00_5302;

												long BgL_stamp3441z00_5303;

												BgL_approx3440z00_5302 =
													(BgL_approxz00_bglt) (BgL_arg5280z00_2764);
												BgL_stamp3441z00_5303 =
													(long) CINT(BgL_arg5281z00_2765);
												{	/* Cfa/cinfo.scm 44 */
													BgL_internzd2sfunzf2cinfoz20_bglt BgL_new3442z00_5304;

													BgL_new3442z00_5304 =
														((BgL_internzd2sfunzf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_internzd2sfunzf2cinfoz20_bgl))));
													{	/* Cfa/cinfo.scm 44 */
														BgL_internzd2sfunzf2cinfoz20_bglt
															BgL_res5567z00_5310;
														{	/* Cfa/cinfo.scm 44 */
															BgL_internzd2sfunzf2cinfoz20_bglt
																BgL_new3467z00_5305;
															BgL_new3467z00_5305 = BgL_new3442z00_5304;
															{	/* Cfa/cinfo.scm 44 */
																BgL_approxz00_bglt BgL_approx3465z00_5308;

																long BgL_stamp3466z00_5309;

																BgL_approx3465z00_5308 = BgL_approx3440z00_5302;
																BgL_stamp3466z00_5309 = BgL_stamp3441z00_5303;
																((((BgL_internzd2sfunzf2cinfoz20_bglt)
																			CREF(BgL_new3467z00_5305))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3465z00_5308),
																	BUNSPEC);
																((((BgL_internzd2sfunzf2cinfoz20_bglt)
																			CREF(BgL_new3467z00_5305))->
																		BgL_stampz00) =
																	((long) BgL_stamp3466z00_5309), BUNSPEC);
																BgL_res5567z00_5310 = BgL_new3467z00_5305;
														}} BgL_res5567z00_5310;
													}
													BgL_res5568z00_5311 = BgL_new3442z00_5304;
											}}
											BgL_arg5279z00_2763 = BgL_res5568z00_5311;
									}}
									{	/* Cfa/cinfo.scm 44 */
										obj_t BgL_auxz00_9234;

										BgL_objectz00_bglt BgL_auxz00_9232;

										BgL_auxz00_9234 = (obj_t) (BgL_arg5279z00_2763);
										BgL_auxz00_9232 =
											(BgL_objectz00_bglt) (BgL_new3477z00_2761);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9232, BgL_auxz00_9234);
								}}
								BgL_auxz00_9206 = BgL_new3477z00_2761;
					}}}
					return (obj_t) (BgL_auxz00_9206);
				}
			}
		}
	}



/* object->struct-inter4585 */
	obj_t BGl_objectzd2ze3structzd2inter4585ze3zzcfa_infoz00(obj_t
		BgL_envz00_5989, obj_t BgL_obj3472z00_5990)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 44 */
			{
				BgL_internzd2sfunzf2cinfoz20_bglt BgL_obj3472z00_2743;

				BgL_obj3472z00_2743 =
					(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_obj3472z00_5990);
				{

					{	/* Cfa/cinfo.scm 44 */
						obj_t BgL_res3473z00_2746;

						{	/* Cfa/cinfo.scm 44 */
							obj_t BgL_nextzd2method4584zd2_2753;

							BgL_nextzd2method4584zd2_2753 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3472z00_2743),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4584zd2_2753))
								{	/* Cfa/cinfo.scm 44 */
									BgL_res3473z00_2746 =
										PROCEDURE_ENTRY(BgL_nextzd2method4584zd2_2753)
										(BgL_nextzd2method4584zd2_2753,
										(obj_t) (BgL_obj3472z00_2743), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 44 */
									BgL_res3473z00_2746 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3472z00_2743));
								}
						}
						{	/* Cfa/cinfo.scm 44 */
							obj_t BgL_aux3474z00_2747;

							{	/* Cfa/cinfo.scm 44 */
								obj_t BgL_keyz00_5273;

								BgL_keyz00_5273 = CNST_TABLE_REF(((long) 3));
								BgL_aux3474z00_2747 =
									make_struct(BgL_keyz00_5273, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 44 */
								BgL_approxz00_bglt BgL_arg5273z00_2749;

								{
									obj_t BgL_auxz00_9251;

									{	/* Cfa/cinfo.scm 44 */
										BgL_objectz00_bglt BgL_auxz00_9252;

										BgL_auxz00_9252 =
											(BgL_objectz00_bglt) (BgL_obj3472z00_2743);
										BgL_auxz00_9251 = BGL_OBJECT_WIDENING(BgL_auxz00_9252);
									}
									BgL_arg5273z00_2749 =
										(((BgL_internzd2sfunzf2cinfoz20_bglt)
											CREF(BgL_auxz00_9251))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 44 */
									obj_t BgL_auxz00_9258;

									int BgL_auxz00_9256;

									BgL_auxz00_9258 = (obj_t) (BgL_arg5273z00_2749);
									BgL_auxz00_9256 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3474z00_2747, BgL_auxz00_9256,
										BgL_auxz00_9258);
							}}
							{	/* Cfa/cinfo.scm 44 */
								long BgL_arg5275z00_2751;

								{
									obj_t BgL_auxz00_9261;

									{	/* Cfa/cinfo.scm 44 */
										BgL_objectz00_bglt BgL_auxz00_9262;

										BgL_auxz00_9262 =
											(BgL_objectz00_bglt) (BgL_obj3472z00_2743);
										BgL_auxz00_9261 = BGL_OBJECT_WIDENING(BgL_auxz00_9262);
									}
									BgL_arg5275z00_2751 =
										(((BgL_internzd2sfunzf2cinfoz20_bglt)
											CREF(BgL_auxz00_9261))->BgL_stampz00);
								}
								{	/* Cfa/cinfo.scm 44 */
									obj_t BgL_auxz00_9268;

									int BgL_auxz00_9266;

									BgL_auxz00_9268 = BINT(BgL_arg5275z00_2751);
									BgL_auxz00_9266 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3474z00_2747, BgL_auxz00_9266,
										BgL_auxz00_9268);
							}}
							{	/* Cfa/cinfo.scm 44 */
								int BgL_auxz00_9271;

								BgL_auxz00_9271 = (int) (((long) 0));
								STRUCT_SET(BgL_res3473z00_2746, BgL_auxz00_9271,
									BgL_aux3474z00_2747);
							}
							{	/* Cfa/cinfo.scm 44 */
								obj_t BgL_auxz00_9274;

								BgL_auxz00_9274 = STRUCT_KEY(BgL_res3473z00_2746);
								STRUCT_KEY_SET(BgL_aux3474z00_2747, BgL_auxz00_9274);
							}
							{	/* Cfa/cinfo.scm 44 */
								obj_t BgL_kz00_5292;

								BgL_kz00_5292 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res3473z00_2746, BgL_kz00_5292);
							}
							return BgL_res3473z00_2746;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4583 */
	obj_t BGl_structzb2objectzd2ze3objec4583z83zzcfa_infoz00(obj_t
		BgL_envz00_5991, obj_t BgL_oz00_5992, obj_t BgL_sz00_5993)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{
				BgL_scnstzf2cinfozf2_bglt BgL_oz00_2731;

				obj_t BgL_sz00_2732;

				{	/* Cfa/cinfo.scm 49 */
					BgL_scnstzf2cinfozf2_bglt BgL_auxz00_9280;

					BgL_oz00_2731 = (BgL_scnstzf2cinfozf2_bglt) (BgL_oz00_5992);
					BgL_sz00_2732 = BgL_sz00_5993;
					{

						{	/* Cfa/cinfo.scm 49 */
							obj_t BgL_old3544z00_2735;

							obj_t BgL_aux3545z00_2736;

							{	/* Cfa/cinfo.scm 49 */
								obj_t BgL_nextzd2method4582zd2_2741;

								BgL_nextzd2method4582zd2_2741 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2731),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_scnstzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4582zd2_2741))
									{	/* Cfa/cinfo.scm 49 */
										BgL_old3544z00_2735 =
											PROCEDURE_ENTRY(BgL_nextzd2method4582zd2_2741)
											(BgL_nextzd2method4582zd2_2741, (obj_t) (BgL_oz00_2731),
											BgL_sz00_2732, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 49 */
										BgL_old3544z00_2735 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2731), BgL_sz00_2732));
									}
							}
							BgL_aux3545z00_2736 =
								STRUCT_REF(BgL_sz00_2732, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 49 */
								BgL_scnstzf2cinfozf2_bglt BgL_new3546z00_2737;

								BgL_new3546z00_2737 =
									((BgL_scnstzf2cinfozf2_bglt) (BgL_old3544z00_2735));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3546z00_2737),
									BGl_classzd2numzd2zz__objectz00
									(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 49 */
									BgL_scnstzf2cinfozf2_bglt BgL_arg5269z00_2739;

									{	/* Cfa/cinfo.scm 49 */
										obj_t BgL_arg5270z00_2740;

										BgL_arg5270z00_2740 =
											STRUCT_REF(BgL_aux3545z00_2736, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 49 */
											BgL_scnstzf2cinfozf2_bglt BgL_res5565z00_5271;

											{	/* Cfa/cinfo.scm 49 */
												BgL_approxz00_bglt BgL_approx3527z00_5265;

												BgL_approx3527z00_5265 =
													(BgL_approxz00_bglt) (BgL_arg5270z00_2740);
												{	/* Cfa/cinfo.scm 49 */
													BgL_scnstzf2cinfozf2_bglt BgL_new3528z00_5266;

													BgL_new3528z00_5266 =
														((BgL_scnstzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_scnstzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 49 */
														BgL_scnstzf2cinfozf2_bglt BgL_res5564z00_5270;

														{	/* Cfa/cinfo.scm 49 */
															BgL_scnstzf2cinfozf2_bglt BgL_new3537z00_5267;

															BgL_new3537z00_5267 = BgL_new3528z00_5266;
															{	/* Cfa/cinfo.scm 49 */
																BgL_approxz00_bglt BgL_approx3536z00_5269;

																BgL_approx3536z00_5269 = BgL_approx3527z00_5265;
																((((BgL_scnstzf2cinfozf2_bglt)
																			CREF(BgL_new3537z00_5267))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3536z00_5269),
																	BUNSPEC);
																BgL_res5564z00_5270 = BgL_new3537z00_5267;
														}} BgL_res5564z00_5270;
													}
													BgL_res5565z00_5271 = BgL_new3528z00_5266;
											}}
											BgL_arg5269z00_2739 = BgL_res5565z00_5271;
									}}
									{	/* Cfa/cinfo.scm 49 */
										obj_t BgL_auxz00_9304;

										BgL_objectz00_bglt BgL_auxz00_9302;

										BgL_auxz00_9304 = (obj_t) (BgL_arg5269z00_2739);
										BgL_auxz00_9302 =
											(BgL_objectz00_bglt) (BgL_new3546z00_2737);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9302, BgL_auxz00_9304);
								}}
								BgL_auxz00_9280 = BgL_new3546z00_2737;
					}}}
					return (obj_t) (BgL_auxz00_9280);
				}
			}
		}
	}



/* object->struct-scnst4580 */
	obj_t BGl_objectzd2ze3structzd2scnst4580ze3zzcfa_infoz00(obj_t
		BgL_envz00_5994, obj_t BgL_obj3541z00_5995)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 49 */
			{
				BgL_scnstzf2cinfozf2_bglt BgL_obj3541z00_2721;

				BgL_obj3541z00_2721 = (BgL_scnstzf2cinfozf2_bglt) (BgL_obj3541z00_5995);
				{

					{	/* Cfa/cinfo.scm 49 */
						obj_t BgL_res3542z00_2724;

						{	/* Cfa/cinfo.scm 49 */
							obj_t BgL_nextzd2method4579zd2_2729;

							BgL_nextzd2method4579zd2_2729 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3541z00_2721),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_scnstzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4579zd2_2729))
								{	/* Cfa/cinfo.scm 49 */
									BgL_res3542z00_2724 =
										PROCEDURE_ENTRY(BgL_nextzd2method4579zd2_2729)
										(BgL_nextzd2method4579zd2_2729,
										(obj_t) (BgL_obj3541z00_2721), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 49 */
									BgL_res3542z00_2724 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3541z00_2721));
								}
						}
						{	/* Cfa/cinfo.scm 49 */
							obj_t BgL_aux3543z00_2725;

							{	/* Cfa/cinfo.scm 49 */
								obj_t BgL_keyz00_5242;

								BgL_keyz00_5242 = CNST_TABLE_REF(((long) 4));
								BgL_aux3543z00_2725 =
									make_struct(BgL_keyz00_5242, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 49 */
								BgL_approxz00_bglt BgL_arg5265z00_2727;

								{
									obj_t BgL_auxz00_9321;

									{	/* Cfa/cinfo.scm 49 */
										BgL_objectz00_bglt BgL_auxz00_9322;

										BgL_auxz00_9322 =
											(BgL_objectz00_bglt) (BgL_obj3541z00_2721);
										BgL_auxz00_9321 = BGL_OBJECT_WIDENING(BgL_auxz00_9322);
									}
									BgL_arg5265z00_2727 =
										(((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_auxz00_9321))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 49 */
									obj_t BgL_auxz00_9328;

									int BgL_auxz00_9326;

									BgL_auxz00_9328 = (obj_t) (BgL_arg5265z00_2727);
									BgL_auxz00_9326 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3543z00_2725, BgL_auxz00_9326,
										BgL_auxz00_9328);
							}}
							{	/* Cfa/cinfo.scm 49 */
								int BgL_auxz00_9331;

								BgL_auxz00_9331 = (int) (((long) 0));
								STRUCT_SET(BgL_res3542z00_2724, BgL_auxz00_9331,
									BgL_aux3543z00_2725);
							}
							{	/* Cfa/cinfo.scm 49 */
								obj_t BgL_auxz00_9334;

								BgL_auxz00_9334 = STRUCT_KEY(BgL_res3542z00_2724);
								STRUCT_KEY_SET(BgL_aux3543z00_2725, BgL_auxz00_9334);
							}
							{	/* Cfa/cinfo.scm 49 */
								obj_t BgL_kz00_5257;

								BgL_kz00_5257 = CNST_TABLE_REF(((long) 4));
								STRUCT_KEY_SET(BgL_res3542z00_2724, BgL_kz00_5257);
							}
							return BgL_res3542z00_2724;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4578 */
	obj_t BGl_structzb2objectzd2ze3objec4578z83zzcfa_infoz00(obj_t
		BgL_envz00_5996, obj_t BgL_oz00_5997, obj_t BgL_sz00_5998)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{
				BgL_prezd2clozd2envz00_bglt BgL_oz00_2710;

				obj_t BgL_sz00_2711;

				{	/* Cfa/cinfo.scm 53 */
					BgL_prezd2clozd2envz00_bglt BgL_auxz00_9340;

					BgL_oz00_2710 = (BgL_prezd2clozd2envz00_bglt) (BgL_oz00_5997);
					BgL_sz00_2711 = BgL_sz00_5998;
					{

						{	/* Cfa/cinfo.scm 53 */
							obj_t BgL_old3567z00_2714;

							{	/* Cfa/cinfo.scm 53 */
								obj_t BgL_nextzd2method4577zd2_2719;

								BgL_nextzd2method4577zd2_2719 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2710),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2clozd2envz00zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4577zd2_2719))
									{	/* Cfa/cinfo.scm 53 */
										BgL_old3567z00_2714 =
											PROCEDURE_ENTRY(BgL_nextzd2method4577zd2_2719)
											(BgL_nextzd2method4577zd2_2719, (obj_t) (BgL_oz00_2710),
											BgL_sz00_2711, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 53 */
										BgL_old3567z00_2714 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2710), BgL_sz00_2711));
									}
							}
							{	/* Cfa/cinfo.scm 53 */
								BgL_prezd2clozd2envz00_bglt BgL_new3569z00_2716;

								BgL_new3569z00_2716 =
									((BgL_prezd2clozd2envz00_bglt) (BgL_old3567z00_2714));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3569z00_2716),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2clozd2envz00zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 53 */
									BgL_prezd2clozd2envz00_bglt BgL_arg5262z00_2718;

									BgL_arg5262z00_2718 =
										BGl_wideningzd2prezd2clozd2envzd2zzcfa_infoz00();
									{	/* Cfa/cinfo.scm 53 */
										obj_t BgL_auxz00_9358;

										BgL_objectz00_bglt BgL_auxz00_9356;

										BgL_auxz00_9358 = (obj_t) (BgL_arg5262z00_2718);
										BgL_auxz00_9356 =
											(BgL_objectz00_bglt) (BgL_new3569z00_2716);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9356, BgL_auxz00_9358);
									}
								}
								BgL_auxz00_9340 = BgL_new3569z00_2716;
							}
						}
					}
					return (obj_t) (BgL_auxz00_9340);
				}
			}
		}
	}



/* object->struct-pre-c4576 */
	obj_t BGl_objectzd2ze3structzd2prezd2c4576z31zzcfa_infoz00(obj_t
		BgL_envz00_5999, obj_t BgL_obj3564z00_6000)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 53 */
			{
				BgL_prezd2clozd2envz00_bglt BgL_obj3564z00_2702;

				BgL_obj3564z00_2702 =
					(BgL_prezd2clozd2envz00_bglt) (BgL_obj3564z00_6000);
				{

					{	/* Cfa/cinfo.scm 53 */
						obj_t BgL_res3565z00_2705;

						{	/* Cfa/cinfo.scm 53 */
							obj_t BgL_nextzd2method4575zd2_2708;

							BgL_nextzd2method4575zd2_2708 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3564z00_2702),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2clozd2envz00zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4575zd2_2708))
								{	/* Cfa/cinfo.scm 53 */
									BgL_res3565z00_2705 =
										PROCEDURE_ENTRY(BgL_nextzd2method4575zd2_2708)
										(BgL_nextzd2method4575zd2_2708,
										(obj_t) (BgL_obj3564z00_2702), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 53 */
									BgL_res3565z00_2705 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3564z00_2702));
								}
						}
						{	/* Cfa/cinfo.scm 53 */
							obj_t BgL_aux3566z00_2706;

							{	/* Cfa/cinfo.scm 53 */
								obj_t BgL_keyz00_5224;

								BgL_keyz00_5224 = CNST_TABLE_REF(((long) 5));
								BgL_aux3566z00_2706 =
									make_struct(BgL_keyz00_5224, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 53 */
								int BgL_auxz00_9375;

								BgL_auxz00_9375 = (int) (((long) 0));
								STRUCT_SET(BgL_res3565z00_2705, BgL_auxz00_9375,
									BgL_aux3566z00_2706);
							}
							{	/* Cfa/cinfo.scm 53 */
								obj_t BgL_auxz00_9378;

								BgL_auxz00_9378 = STRUCT_KEY(BgL_res3565z00_2705);
								STRUCT_KEY_SET(BgL_aux3566z00_2706, BgL_auxz00_9378);
							}
							{	/* Cfa/cinfo.scm 53 */
								obj_t BgL_kz00_5235;

								BgL_kz00_5235 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res3565z00_2705, BgL_kz00_5235);
							}
							return BgL_res3565z00_2705;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4574 */
	obj_t BGl_structzb2objectzd2ze3objec4574z83zzcfa_infoz00(obj_t
		BgL_envz00_6001, obj_t BgL_oz00_6002, obj_t BgL_sz00_6003)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{
				BgL_svarzf2cinfozf2_bglt BgL_oz00_2689;

				obj_t BgL_sz00_2690;

				{	/* Cfa/cinfo.scm 54 */
					BgL_svarzf2cinfozf2_bglt BgL_auxz00_9384;

					BgL_oz00_2689 = (BgL_svarzf2cinfozf2_bglt) (BgL_oz00_6002);
					BgL_sz00_2690 = BgL_sz00_6003;
					{

						{	/* Cfa/cinfo.scm 54 */
							obj_t BgL_old3594z00_2693;

							obj_t BgL_aux3595z00_2694;

							{	/* Cfa/cinfo.scm 54 */
								obj_t BgL_nextzd2method4573zd2_2700;

								BgL_nextzd2method4573zd2_2700 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2689),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_svarzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4573zd2_2700))
									{	/* Cfa/cinfo.scm 54 */
										BgL_old3594z00_2693 =
											PROCEDURE_ENTRY(BgL_nextzd2method4573zd2_2700)
											(BgL_nextzd2method4573zd2_2700, (obj_t) (BgL_oz00_2689),
											BgL_sz00_2690, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 54 */
										BgL_old3594z00_2693 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2689), BgL_sz00_2690));
									}
							}
							BgL_aux3595z00_2694 =
								STRUCT_REF(BgL_sz00_2690, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 54 */
								BgL_svarzf2cinfozf2_bglt BgL_new3596z00_2695;

								BgL_new3596z00_2695 =
									((BgL_svarzf2cinfozf2_bglt) (BgL_old3594z00_2693));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3596z00_2695),
									BGl_classzd2numzd2zz__objectz00
									(BGl_svarzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 54 */
									BgL_svarzf2cinfozf2_bglt BgL_arg5255z00_2697;

									{	/* Cfa/cinfo.scm 54 */
										obj_t BgL_arg5256z00_2698;

										obj_t BgL_arg5257z00_2699;

										BgL_arg5256z00_2698 =
											STRUCT_REF(BgL_aux3595z00_2694, (int) (((long) 0)));
										BgL_arg5257z00_2699 =
											STRUCT_REF(BgL_aux3595z00_2694, (int) (((long) 1)));
										{	/* Cfa/cinfo.scm 54 */
											BgL_svarzf2cinfozf2_bglt BgL_res5561z00_5222;

											{	/* Cfa/cinfo.scm 54 */
												BgL_approxz00_bglt BgL_approx3574z00_5213;

												bool_t BgL_clozd2envzf33575z21_5214;

												BgL_approx3574z00_5213 =
													(BgL_approxz00_bglt) (BgL_arg5256z00_2698);
												BgL_clozd2envzf33575z21_5214 =
													CBOOL(BgL_arg5257z00_2699);
												{	/* Cfa/cinfo.scm 54 */
													BgL_svarzf2cinfozf2_bglt BgL_new3576z00_5215;

													BgL_new3576z00_5215 =
														((BgL_svarzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_svarzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 54 */
														BgL_svarzf2cinfozf2_bglt BgL_res5560z00_5221;

														{	/* Cfa/cinfo.scm 54 */
															BgL_svarzf2cinfozf2_bglt BgL_new3585z00_5216;

															BgL_new3585z00_5216 = BgL_new3576z00_5215;
															{	/* Cfa/cinfo.scm 54 */
																BgL_approxz00_bglt BgL_approx3583z00_5219;

																bool_t BgL_clozd2envzf33584z21_5220;

																BgL_approx3583z00_5219 = BgL_approx3574z00_5213;
																BgL_clozd2envzf33584z21_5220 =
																	BgL_clozd2envzf33575z21_5214;
																((((BgL_svarzf2cinfozf2_bglt)
																			CREF(BgL_new3585z00_5216))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3583z00_5219),
																	BUNSPEC);
																((((BgL_svarzf2cinfozf2_bglt)
																			CREF(BgL_new3585z00_5216))->
																		BgL_clozd2envzf3z21) =
																	((bool_t) BgL_clozd2envzf33584z21_5220),
																	BUNSPEC);
																BgL_res5560z00_5221 = BgL_new3585z00_5216;
														}} BgL_res5560z00_5221;
													}
													BgL_res5561z00_5222 = BgL_new3576z00_5215;
											}}
											BgL_arg5255z00_2697 = BgL_res5561z00_5222;
									}}
									{	/* Cfa/cinfo.scm 54 */
										obj_t BgL_auxz00_9412;

										BgL_objectz00_bglt BgL_auxz00_9410;

										BgL_auxz00_9412 = (obj_t) (BgL_arg5255z00_2697);
										BgL_auxz00_9410 =
											(BgL_objectz00_bglt) (BgL_new3596z00_2695);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9410, BgL_auxz00_9412);
								}}
								BgL_auxz00_9384 = BgL_new3596z00_2695;
					}}}
					return (obj_t) (BgL_auxz00_9384);
				}
			}
		}
	}



/* object->struct-svar/4572 */
	obj_t BGl_objectzd2ze3structzd2svarzf24572z11zzcfa_infoz00(obj_t
		BgL_envz00_6004, obj_t BgL_obj3591z00_6005)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 54 */
			{
				BgL_svarzf2cinfozf2_bglt BgL_obj3591z00_2677;

				BgL_obj3591z00_2677 = (BgL_svarzf2cinfozf2_bglt) (BgL_obj3591z00_6005);
				{

					{	/* Cfa/cinfo.scm 54 */
						obj_t BgL_res3592z00_2680;

						{	/* Cfa/cinfo.scm 54 */
							obj_t BgL_nextzd2method4571zd2_2687;

							BgL_nextzd2method4571zd2_2687 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3591z00_2677),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_svarzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4571zd2_2687))
								{	/* Cfa/cinfo.scm 54 */
									BgL_res3592z00_2680 =
										PROCEDURE_ENTRY(BgL_nextzd2method4571zd2_2687)
										(BgL_nextzd2method4571zd2_2687,
										(obj_t) (BgL_obj3591z00_2677), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 54 */
									BgL_res3592z00_2680 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3591z00_2677));
								}
						}
						{	/* Cfa/cinfo.scm 54 */
							obj_t BgL_aux3593z00_2681;

							{	/* Cfa/cinfo.scm 54 */
								obj_t BgL_keyz00_5184;

								BgL_keyz00_5184 = CNST_TABLE_REF(((long) 6));
								BgL_aux3593z00_2681 =
									make_struct(BgL_keyz00_5184, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 54 */
								BgL_approxz00_bglt BgL_arg5249z00_2683;

								{
									obj_t BgL_auxz00_9429;

									{	/* Cfa/cinfo.scm 54 */
										BgL_objectz00_bglt BgL_auxz00_9430;

										BgL_auxz00_9430 =
											(BgL_objectz00_bglt) (BgL_obj3591z00_2677);
										BgL_auxz00_9429 = BGL_OBJECT_WIDENING(BgL_auxz00_9430);
									}
									BgL_arg5249z00_2683 =
										(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_9429))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 54 */
									obj_t BgL_auxz00_9436;

									int BgL_auxz00_9434;

									BgL_auxz00_9436 = (obj_t) (BgL_arg5249z00_2683);
									BgL_auxz00_9434 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3593z00_2681, BgL_auxz00_9434,
										BgL_auxz00_9436);
							}}
							{	/* Cfa/cinfo.scm 54 */
								bool_t BgL_arg5251z00_2685;

								{
									obj_t BgL_auxz00_9439;

									{	/* Cfa/cinfo.scm 54 */
										BgL_objectz00_bglt BgL_auxz00_9440;

										BgL_auxz00_9440 =
											(BgL_objectz00_bglt) (BgL_obj3591z00_2677);
										BgL_auxz00_9439 = BGL_OBJECT_WIDENING(BgL_auxz00_9440);
									}
									BgL_arg5251z00_2685 =
										(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_9439))->
										BgL_clozd2envzf3z21);
								}
								{	/* Cfa/cinfo.scm 54 */
									obj_t BgL_auxz00_9446;

									int BgL_auxz00_9444;

									BgL_auxz00_9446 = BBOOL(BgL_arg5251z00_2685);
									BgL_auxz00_9444 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3593z00_2681, BgL_auxz00_9444,
										BgL_auxz00_9446);
							}}
							{	/* Cfa/cinfo.scm 54 */
								int BgL_auxz00_9449;

								BgL_auxz00_9449 = (int) (((long) 0));
								STRUCT_SET(BgL_res3592z00_2680, BgL_auxz00_9449,
									BgL_aux3593z00_2681);
							}
							{	/* Cfa/cinfo.scm 54 */
								obj_t BgL_auxz00_9452;

								BgL_auxz00_9452 = STRUCT_KEY(BgL_res3592z00_2680);
								STRUCT_KEY_SET(BgL_aux3593z00_2681, BgL_auxz00_9452);
							}
							{	/* Cfa/cinfo.scm 54 */
								obj_t BgL_kz00_5203;

								BgL_kz00_5203 = CNST_TABLE_REF(((long) 6));
								STRUCT_KEY_SET(BgL_res3592z00_2680, BgL_kz00_5203);
							}
							return BgL_res3592z00_2680;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4570 */
	obj_t BGl_structzb2objectzd2ze3objec4570z83zzcfa_infoz00(obj_t
		BgL_envz00_6006, obj_t BgL_oz00_6007, obj_t BgL_sz00_6008)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{
				BgL_cvarzf2cinfozf2_bglt BgL_oz00_2665;

				obj_t BgL_sz00_2666;

				{	/* Cfa/cinfo.scm 60 */
					BgL_cvarzf2cinfozf2_bglt BgL_auxz00_9458;

					BgL_oz00_2665 = (BgL_cvarzf2cinfozf2_bglt) (BgL_oz00_6007);
					BgL_sz00_2666 = BgL_sz00_6008;
					{

						{	/* Cfa/cinfo.scm 60 */
							obj_t BgL_old3620z00_2669;

							obj_t BgL_aux3621z00_2670;

							{	/* Cfa/cinfo.scm 60 */
								obj_t BgL_nextzd2method4569zd2_2675;

								BgL_nextzd2method4569zd2_2675 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2665),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_cvarzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4569zd2_2675))
									{	/* Cfa/cinfo.scm 60 */
										BgL_old3620z00_2669 =
											PROCEDURE_ENTRY(BgL_nextzd2method4569zd2_2675)
											(BgL_nextzd2method4569zd2_2675, (obj_t) (BgL_oz00_2665),
											BgL_sz00_2666, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 60 */
										BgL_old3620z00_2669 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2665), BgL_sz00_2666));
									}
							}
							BgL_aux3621z00_2670 =
								STRUCT_REF(BgL_sz00_2666, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 60 */
								BgL_cvarzf2cinfozf2_bglt BgL_new3622z00_2671;

								BgL_new3622z00_2671 =
									((BgL_cvarzf2cinfozf2_bglt) (BgL_old3620z00_2669));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3622z00_2671),
									BGl_classzd2numzd2zz__objectz00
									(BGl_cvarzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 60 */
									BgL_cvarzf2cinfozf2_bglt BgL_arg5245z00_2673;

									{	/* Cfa/cinfo.scm 60 */
										obj_t BgL_arg5246z00_2674;

										BgL_arg5246z00_2674 =
											STRUCT_REF(BgL_aux3621z00_2670, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 60 */
											BgL_cvarzf2cinfozf2_bglt BgL_res5558z00_5182;

											{	/* Cfa/cinfo.scm 60 */
												BgL_approxz00_bglt BgL_approx3605z00_5176;

												BgL_approx3605z00_5176 =
													(BgL_approxz00_bglt) (BgL_arg5246z00_2674);
												{	/* Cfa/cinfo.scm 60 */
													BgL_cvarzf2cinfozf2_bglt BgL_new3606z00_5177;

													BgL_new3606z00_5177 =
														((BgL_cvarzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_cvarzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 60 */
														BgL_cvarzf2cinfozf2_bglt BgL_res5557z00_5181;

														{	/* Cfa/cinfo.scm 60 */
															BgL_cvarzf2cinfozf2_bglt BgL_new3613z00_5178;

															BgL_new3613z00_5178 = BgL_new3606z00_5177;
															{	/* Cfa/cinfo.scm 60 */
																BgL_approxz00_bglt BgL_approx3612z00_5180;

																BgL_approx3612z00_5180 = BgL_approx3605z00_5176;
																((((BgL_cvarzf2cinfozf2_bglt)
																			CREF(BgL_new3613z00_5178))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3612z00_5180),
																	BUNSPEC);
																BgL_res5557z00_5181 = BgL_new3613z00_5178;
														}} BgL_res5557z00_5181;
													}
													BgL_res5558z00_5182 = BgL_new3606z00_5177;
											}}
											BgL_arg5245z00_2673 = BgL_res5558z00_5182;
									}}
									{	/* Cfa/cinfo.scm 60 */
										obj_t BgL_auxz00_9482;

										BgL_objectz00_bglt BgL_auxz00_9480;

										BgL_auxz00_9482 = (obj_t) (BgL_arg5245z00_2673);
										BgL_auxz00_9480 =
											(BgL_objectz00_bglt) (BgL_new3622z00_2671);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9480, BgL_auxz00_9482);
								}}
								BgL_auxz00_9458 = BgL_new3622z00_2671;
					}}}
					return (obj_t) (BgL_auxz00_9458);
				}
			}
		}
	}



/* object->struct-cvar/4568 */
	obj_t BGl_objectzd2ze3structzd2cvarzf24568z11zzcfa_infoz00(obj_t
		BgL_envz00_6009, obj_t BgL_obj3617z00_6010)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 60 */
			{
				BgL_cvarzf2cinfozf2_bglt BgL_obj3617z00_2655;

				BgL_obj3617z00_2655 = (BgL_cvarzf2cinfozf2_bglt) (BgL_obj3617z00_6010);
				{

					{	/* Cfa/cinfo.scm 60 */
						obj_t BgL_res3618z00_2658;

						{	/* Cfa/cinfo.scm 60 */
							obj_t BgL_nextzd2method4567zd2_2663;

							BgL_nextzd2method4567zd2_2663 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3617z00_2655),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_cvarzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4567zd2_2663))
								{	/* Cfa/cinfo.scm 60 */
									BgL_res3618z00_2658 =
										PROCEDURE_ENTRY(BgL_nextzd2method4567zd2_2663)
										(BgL_nextzd2method4567zd2_2663,
										(obj_t) (BgL_obj3617z00_2655), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 60 */
									BgL_res3618z00_2658 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3617z00_2655));
								}
						}
						{	/* Cfa/cinfo.scm 60 */
							obj_t BgL_aux3619z00_2659;

							{	/* Cfa/cinfo.scm 60 */
								obj_t BgL_keyz00_5153;

								BgL_keyz00_5153 = CNST_TABLE_REF(((long) 7));
								BgL_aux3619z00_2659 =
									make_struct(BgL_keyz00_5153, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 60 */
								BgL_approxz00_bglt BgL_arg5241z00_2661;

								{
									obj_t BgL_auxz00_9499;

									{	/* Cfa/cinfo.scm 60 */
										BgL_objectz00_bglt BgL_auxz00_9500;

										BgL_auxz00_9500 =
											(BgL_objectz00_bglt) (BgL_obj3617z00_2655);
										BgL_auxz00_9499 = BGL_OBJECT_WIDENING(BgL_auxz00_9500);
									}
									BgL_arg5241z00_2661 =
										(((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_auxz00_9499))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 60 */
									obj_t BgL_auxz00_9506;

									int BgL_auxz00_9504;

									BgL_auxz00_9506 = (obj_t) (BgL_arg5241z00_2661);
									BgL_auxz00_9504 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3619z00_2659, BgL_auxz00_9504,
										BgL_auxz00_9506);
							}}
							{	/* Cfa/cinfo.scm 60 */
								int BgL_auxz00_9509;

								BgL_auxz00_9509 = (int) (((long) 0));
								STRUCT_SET(BgL_res3618z00_2658, BgL_auxz00_9509,
									BgL_aux3619z00_2659);
							}
							{	/* Cfa/cinfo.scm 60 */
								obj_t BgL_auxz00_9512;

								BgL_auxz00_9512 = STRUCT_KEY(BgL_res3618z00_2658);
								STRUCT_KEY_SET(BgL_aux3619z00_2659, BgL_auxz00_9512);
							}
							{	/* Cfa/cinfo.scm 60 */
								obj_t BgL_kz00_5168;

								BgL_kz00_5168 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res3618z00_2658, BgL_kz00_5168);
							}
							return BgL_res3618z00_2658;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4566 */
	obj_t BGl_structzb2objectzd2ze3objec4566z83zzcfa_infoz00(obj_t
		BgL_envz00_6011, obj_t BgL_oz00_6012, obj_t BgL_sz00_6013)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{
				BgL_sexitzf2cinfozf2_bglt BgL_oz00_2643;

				obj_t BgL_sz00_2644;

				{	/* Cfa/cinfo.scm 64 */
					BgL_sexitzf2cinfozf2_bglt BgL_auxz00_9518;

					BgL_oz00_2643 = (BgL_sexitzf2cinfozf2_bglt) (BgL_oz00_6012);
					BgL_sz00_2644 = BgL_sz00_6013;
					{

						{	/* Cfa/cinfo.scm 64 */
							obj_t BgL_old3642z00_2647;

							obj_t BgL_aux3643z00_2648;

							{	/* Cfa/cinfo.scm 64 */
								obj_t BgL_nextzd2method4565zd2_2653;

								BgL_nextzd2method4565zd2_2653 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2643),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_sexitzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4565zd2_2653))
									{	/* Cfa/cinfo.scm 64 */
										BgL_old3642z00_2647 =
											PROCEDURE_ENTRY(BgL_nextzd2method4565zd2_2653)
											(BgL_nextzd2method4565zd2_2653, (obj_t) (BgL_oz00_2643),
											BgL_sz00_2644, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 64 */
										BgL_old3642z00_2647 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2643), BgL_sz00_2644));
									}
							}
							BgL_aux3643z00_2648 =
								STRUCT_REF(BgL_sz00_2644, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 64 */
								BgL_sexitzf2cinfozf2_bglt BgL_new3644z00_2649;

								BgL_new3644z00_2649 =
									((BgL_sexitzf2cinfozf2_bglt) (BgL_old3642z00_2647));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3644z00_2649),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sexitzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 64 */
									BgL_sexitzf2cinfozf2_bglt BgL_arg5237z00_2651;

									{	/* Cfa/cinfo.scm 64 */
										obj_t BgL_arg5238z00_2652;

										BgL_arg5238z00_2652 =
											STRUCT_REF(BgL_aux3643z00_2648, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 64 */
											BgL_sexitzf2cinfozf2_bglt BgL_res5555z00_5151;

											{	/* Cfa/cinfo.scm 64 */
												BgL_approxz00_bglt BgL_approx3626z00_5145;

												BgL_approx3626z00_5145 =
													(BgL_approxz00_bglt) (BgL_arg5238z00_2652);
												{	/* Cfa/cinfo.scm 64 */
													BgL_sexitzf2cinfozf2_bglt BgL_new3627z00_5146;

													BgL_new3627z00_5146 =
														((BgL_sexitzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_sexitzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 64 */
														BgL_sexitzf2cinfozf2_bglt BgL_res5554z00_5150;

														{	/* Cfa/cinfo.scm 64 */
															BgL_sexitzf2cinfozf2_bglt BgL_new3635z00_5147;

															BgL_new3635z00_5147 = BgL_new3627z00_5146;
															{	/* Cfa/cinfo.scm 64 */
																BgL_approxz00_bglt BgL_approx3634z00_5149;

																BgL_approx3634z00_5149 = BgL_approx3626z00_5145;
																((((BgL_sexitzf2cinfozf2_bglt)
																			CREF(BgL_new3635z00_5147))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3634z00_5149),
																	BUNSPEC);
																BgL_res5554z00_5150 = BgL_new3635z00_5147;
														}} BgL_res5554z00_5150;
													}
													BgL_res5555z00_5151 = BgL_new3627z00_5146;
											}}
											BgL_arg5237z00_2651 = BgL_res5555z00_5151;
									}}
									{	/* Cfa/cinfo.scm 64 */
										obj_t BgL_auxz00_9542;

										BgL_objectz00_bglt BgL_auxz00_9540;

										BgL_auxz00_9542 = (obj_t) (BgL_arg5237z00_2651);
										BgL_auxz00_9540 =
											(BgL_objectz00_bglt) (BgL_new3644z00_2649);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9540, BgL_auxz00_9542);
								}}
								BgL_auxz00_9518 = BgL_new3644z00_2649;
					}}}
					return (obj_t) (BgL_auxz00_9518);
				}
			}
		}
	}



/* object->struct-sexit4564 */
	obj_t BGl_objectzd2ze3structzd2sexit4564ze3zzcfa_infoz00(obj_t
		BgL_envz00_6014, obj_t BgL_obj3639z00_6015)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 64 */
			{
				BgL_sexitzf2cinfozf2_bglt BgL_obj3639z00_2633;

				BgL_obj3639z00_2633 = (BgL_sexitzf2cinfozf2_bglt) (BgL_obj3639z00_6015);
				{

					{	/* Cfa/cinfo.scm 64 */
						obj_t BgL_res3640z00_2636;

						{	/* Cfa/cinfo.scm 64 */
							obj_t BgL_nextzd2method4563zd2_2641;

							BgL_nextzd2method4563zd2_2641 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3639z00_2633),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_sexitzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4563zd2_2641))
								{	/* Cfa/cinfo.scm 64 */
									BgL_res3640z00_2636 =
										PROCEDURE_ENTRY(BgL_nextzd2method4563zd2_2641)
										(BgL_nextzd2method4563zd2_2641,
										(obj_t) (BgL_obj3639z00_2633), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 64 */
									BgL_res3640z00_2636 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3639z00_2633));
								}
						}
						{	/* Cfa/cinfo.scm 64 */
							obj_t BgL_aux3641z00_2637;

							{	/* Cfa/cinfo.scm 64 */
								obj_t BgL_keyz00_5122;

								BgL_keyz00_5122 = CNST_TABLE_REF(((long) 8));
								BgL_aux3641z00_2637 =
									make_struct(BgL_keyz00_5122, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 64 */
								BgL_approxz00_bglt BgL_arg5233z00_2639;

								{
									obj_t BgL_auxz00_9559;

									{	/* Cfa/cinfo.scm 64 */
										BgL_objectz00_bglt BgL_auxz00_9560;

										BgL_auxz00_9560 =
											(BgL_objectz00_bglt) (BgL_obj3639z00_2633);
										BgL_auxz00_9559 = BGL_OBJECT_WIDENING(BgL_auxz00_9560);
									}
									BgL_arg5233z00_2639 =
										(((BgL_sexitzf2cinfozf2_bglt) CREF(BgL_auxz00_9559))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 64 */
									obj_t BgL_auxz00_9566;

									int BgL_auxz00_9564;

									BgL_auxz00_9566 = (obj_t) (BgL_arg5233z00_2639);
									BgL_auxz00_9564 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3641z00_2637, BgL_auxz00_9564,
										BgL_auxz00_9566);
							}}
							{	/* Cfa/cinfo.scm 64 */
								int BgL_auxz00_9569;

								BgL_auxz00_9569 = (int) (((long) 0));
								STRUCT_SET(BgL_res3640z00_2636, BgL_auxz00_9569,
									BgL_aux3641z00_2637);
							}
							{	/* Cfa/cinfo.scm 64 */
								obj_t BgL_auxz00_9572;

								BgL_auxz00_9572 = STRUCT_KEY(BgL_res3640z00_2636);
								STRUCT_KEY_SET(BgL_aux3641z00_2637, BgL_auxz00_9572);
							}
							{	/* Cfa/cinfo.scm 64 */
								obj_t BgL_kz00_5137;

								BgL_kz00_5137 = CNST_TABLE_REF(((long) 8));
								STRUCT_KEY_SET(BgL_res3640z00_2636, BgL_kz00_5137);
							}
							return BgL_res3640z00_2636;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4561 */
	obj_t BGl_structzb2objectzd2ze3objec4561z83zzcfa_infoz00(obj_t
		BgL_envz00_6016, obj_t BgL_oz00_6017, obj_t BgL_sz00_6018)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{
				BgL_reshapedzd2localzd2_bglt BgL_oz00_2621;

				obj_t BgL_sz00_2622;

				{	/* Cfa/cinfo.scm 68 */
					BgL_reshapedzd2localzd2_bglt BgL_auxz00_9578;

					BgL_oz00_2621 = (BgL_reshapedzd2localzd2_bglt) (BgL_oz00_6017);
					BgL_sz00_2622 = BgL_sz00_6018;
					{

						{	/* Cfa/cinfo.scm 68 */
							obj_t BgL_old3677z00_2625;

							obj_t BgL_aux3678z00_2626;

							{	/* Cfa/cinfo.scm 68 */
								obj_t BgL_nextzd2method4560zd2_2631;

								BgL_nextzd2method4560zd2_2631 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2621),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_reshapedzd2localzd2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4560zd2_2631))
									{	/* Cfa/cinfo.scm 68 */
										BgL_old3677z00_2625 =
											PROCEDURE_ENTRY(BgL_nextzd2method4560zd2_2631)
											(BgL_nextzd2method4560zd2_2631, (obj_t) (BgL_oz00_2621),
											BgL_sz00_2622, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 68 */
										BgL_old3677z00_2625 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2621), BgL_sz00_2622));
									}
							}
							BgL_aux3678z00_2626 =
								STRUCT_REF(BgL_sz00_2622, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 68 */
								BgL_reshapedzd2localzd2_bglt BgL_new3679z00_2627;

								BgL_new3679z00_2627 =
									((BgL_reshapedzd2localzd2_bglt) (BgL_old3677z00_2625));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3679z00_2627),
									BGl_classzd2numzd2zz__objectz00
									(BGl_reshapedzd2localzd2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 68 */
									BgL_reshapedzd2localzd2_bglt BgL_arg5229z00_2629;

									{	/* Cfa/cinfo.scm 68 */
										obj_t BgL_arg5230z00_2630;

										BgL_arg5230z00_2630 =
											STRUCT_REF(BgL_aux3678z00_2626, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 68 */
											BgL_reshapedzd2localzd2_bglt BgL_res5552z00_5120;

											{	/* Cfa/cinfo.scm 68 */
												BgL_reshapedzd2localzd2_bglt BgL_new3654z00_5115;

												BgL_new3654z00_5115 =
													((BgL_reshapedzd2localzd2_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_reshapedzd2localzd2_bgl))));
												{	/* Cfa/cinfo.scm 68 */
													BgL_reshapedzd2localzd2_bglt BgL_res5551z00_5119;

													{	/* Cfa/cinfo.scm 68 */
														BgL_reshapedzd2localzd2_bglt BgL_new3670z00_5116;

														BgL_new3670z00_5116 = BgL_new3654z00_5115;
														{	/* Cfa/cinfo.scm 68 */
															obj_t BgL_bindingzd2value3669zd2_5118;

															BgL_bindingzd2value3669zd2_5118 =
																BgL_arg5230z00_2630;
															((((BgL_reshapedzd2localzd2_bglt)
																		CREF(BgL_new3670z00_5116))->
																	BgL_bindingzd2valuezd2) =
																((obj_t) BgL_bindingzd2value3669zd2_5118),
																BUNSPEC);
															BgL_res5551z00_5119 = BgL_new3670z00_5116;
													}} BgL_res5551z00_5119;
												}
												BgL_res5552z00_5120 = BgL_new3654z00_5115;
											}
											BgL_arg5229z00_2629 = BgL_res5552z00_5120;
									}}
									{	/* Cfa/cinfo.scm 68 */
										obj_t BgL_auxz00_9601;

										BgL_objectz00_bglt BgL_auxz00_9599;

										BgL_auxz00_9601 = (obj_t) (BgL_arg5229z00_2629);
										BgL_auxz00_9599 =
											(BgL_objectz00_bglt) (BgL_new3679z00_2627);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9599, BgL_auxz00_9601);
								}}
								BgL_auxz00_9578 = BgL_new3679z00_2627;
					}}}
					return (obj_t) (BgL_auxz00_9578);
				}
			}
		}
	}



/* object->struct-resha4559 */
	obj_t BGl_objectzd2ze3structzd2resha4559ze3zzcfa_infoz00(obj_t
		BgL_envz00_6019, obj_t BgL_obj3674z00_6020)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 68 */
			{
				BgL_reshapedzd2localzd2_bglt BgL_obj3674z00_2611;

				BgL_obj3674z00_2611 =
					(BgL_reshapedzd2localzd2_bglt) (BgL_obj3674z00_6020);
				{

					{	/* Cfa/cinfo.scm 68 */
						obj_t BgL_res3675z00_2614;

						{	/* Cfa/cinfo.scm 68 */
							obj_t BgL_nextzd2method4558zd2_2619;

							BgL_nextzd2method4558zd2_2619 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3674z00_2611),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_reshapedzd2localzd2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4558zd2_2619))
								{	/* Cfa/cinfo.scm 68 */
									BgL_res3675z00_2614 =
										PROCEDURE_ENTRY(BgL_nextzd2method4558zd2_2619)
										(BgL_nextzd2method4558zd2_2619,
										(obj_t) (BgL_obj3674z00_2611), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 68 */
									BgL_res3675z00_2614 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3674z00_2611));
								}
						}
						{	/* Cfa/cinfo.scm 68 */
							obj_t BgL_aux3676z00_2615;

							{	/* Cfa/cinfo.scm 68 */
								obj_t BgL_keyz00_5091;

								BgL_keyz00_5091 = CNST_TABLE_REF(((long) 9));
								BgL_aux3676z00_2615 =
									make_struct(BgL_keyz00_5091, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 68 */
								obj_t BgL_arg5225z00_2617;

								{
									obj_t BgL_auxz00_9618;

									{	/* Cfa/cinfo.scm 68 */
										BgL_objectz00_bglt BgL_auxz00_9619;

										BgL_auxz00_9619 =
											(BgL_objectz00_bglt) (BgL_obj3674z00_2611);
										BgL_auxz00_9618 = BGL_OBJECT_WIDENING(BgL_auxz00_9619);
									}
									BgL_arg5225z00_2617 =
										(((BgL_reshapedzd2localzd2_bglt) CREF(BgL_auxz00_9618))->
										BgL_bindingzd2valuezd2);
								}
								{	/* Cfa/cinfo.scm 68 */
									int BgL_auxz00_9623;

									BgL_auxz00_9623 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3676z00_2615, BgL_auxz00_9623,
										BgL_arg5225z00_2617);
							}}
							{	/* Cfa/cinfo.scm 68 */
								int BgL_auxz00_9626;

								BgL_auxz00_9626 = (int) (((long) 0));
								STRUCT_SET(BgL_res3675z00_2614, BgL_auxz00_9626,
									BgL_aux3676z00_2615);
							}
							{	/* Cfa/cinfo.scm 68 */
								obj_t BgL_auxz00_9629;

								BgL_auxz00_9629 = STRUCT_KEY(BgL_res3675z00_2614);
								STRUCT_KEY_SET(BgL_aux3676z00_2615, BgL_auxz00_9629);
							}
							{	/* Cfa/cinfo.scm 68 */
								obj_t BgL_kz00_5106;

								BgL_kz00_5106 = CNST_TABLE_REF(((long) 9));
								STRUCT_KEY_SET(BgL_res3675z00_2614, BgL_kz00_5106);
							}
							return BgL_res3675z00_2614;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4557 */
	obj_t BGl_structzb2objectzd2ze3objec4557z83zzcfa_infoz00(obj_t
		BgL_envz00_6021, obj_t BgL_oz00_6022, obj_t BgL_sz00_6023)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{
				BgL_reshapedzd2globalzd2_bglt BgL_oz00_2600;

				obj_t BgL_sz00_2601;

				{	/* Cfa/cinfo.scm 70 */
					BgL_reshapedzd2globalzd2_bglt BgL_auxz00_9635;

					BgL_oz00_2600 = (BgL_reshapedzd2globalzd2_bglt) (BgL_oz00_6022);
					BgL_sz00_2601 = BgL_sz00_6023;
					{

						{	/* Cfa/cinfo.scm 70 */
							obj_t BgL_old3735z00_2604;

							{	/* Cfa/cinfo.scm 70 */
								obj_t BgL_nextzd2method4556zd2_2609;

								BgL_nextzd2method4556zd2_2609 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2600),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_reshapedzd2globalzd2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4556zd2_2609))
									{	/* Cfa/cinfo.scm 70 */
										BgL_old3735z00_2604 =
											PROCEDURE_ENTRY(BgL_nextzd2method4556zd2_2609)
											(BgL_nextzd2method4556zd2_2609, (obj_t) (BgL_oz00_2600),
											BgL_sz00_2601, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 70 */
										BgL_old3735z00_2604 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2600), BgL_sz00_2601));
									}
							}
							{	/* Cfa/cinfo.scm 70 */
								BgL_reshapedzd2globalzd2_bglt BgL_new3737z00_2606;

								BgL_new3737z00_2606 =
									((BgL_reshapedzd2globalzd2_bglt) (BgL_old3735z00_2604));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3737z00_2606),
									BGl_classzd2numzd2zz__objectz00
									(BGl_reshapedzd2globalzd2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 70 */
									BgL_reshapedzd2globalzd2_bglt BgL_arg5222z00_2608;

									BgL_arg5222z00_2608 =
										BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
									{	/* Cfa/cinfo.scm 70 */
										obj_t BgL_auxz00_9653;

										BgL_objectz00_bglt BgL_auxz00_9651;

										BgL_auxz00_9653 = (obj_t) (BgL_arg5222z00_2608);
										BgL_auxz00_9651 =
											(BgL_objectz00_bglt) (BgL_new3737z00_2606);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9651, BgL_auxz00_9653);
									}
								}
								BgL_auxz00_9635 = BgL_new3737z00_2606;
							}
						}
					}
					return (obj_t) (BgL_auxz00_9635);
				}
			}
		}
	}



/* object->struct-resha4555 */
	obj_t BGl_objectzd2ze3structzd2resha4555ze3zzcfa_infoz00(obj_t
		BgL_envz00_6024, obj_t BgL_obj3732z00_6025)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 70 */
			{
				BgL_reshapedzd2globalzd2_bglt BgL_obj3732z00_2592;

				BgL_obj3732z00_2592 =
					(BgL_reshapedzd2globalzd2_bglt) (BgL_obj3732z00_6025);
				{

					{	/* Cfa/cinfo.scm 70 */
						obj_t BgL_res3733z00_2595;

						{	/* Cfa/cinfo.scm 70 */
							obj_t BgL_nextzd2method4554zd2_2598;

							BgL_nextzd2method4554zd2_2598 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3732z00_2592),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_reshapedzd2globalzd2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4554zd2_2598))
								{	/* Cfa/cinfo.scm 70 */
									BgL_res3733z00_2595 =
										PROCEDURE_ENTRY(BgL_nextzd2method4554zd2_2598)
										(BgL_nextzd2method4554zd2_2598,
										(obj_t) (BgL_obj3732z00_2592), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 70 */
									BgL_res3733z00_2595 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3732z00_2592));
								}
						}
						{	/* Cfa/cinfo.scm 70 */
							obj_t BgL_aux3734z00_2596;

							{	/* Cfa/cinfo.scm 70 */
								obj_t BgL_keyz00_5073;

								BgL_keyz00_5073 = CNST_TABLE_REF(((long) 10));
								BgL_aux3734z00_2596 =
									make_struct(BgL_keyz00_5073, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 70 */
								int BgL_auxz00_9670;

								BgL_auxz00_9670 = (int) (((long) 0));
								STRUCT_SET(BgL_res3733z00_2595, BgL_auxz00_9670,
									BgL_aux3734z00_2596);
							}
							{	/* Cfa/cinfo.scm 70 */
								obj_t BgL_auxz00_9673;

								BgL_auxz00_9673 = STRUCT_KEY(BgL_res3733z00_2595);
								STRUCT_KEY_SET(BgL_aux3734z00_2596, BgL_auxz00_9673);
							}
							{	/* Cfa/cinfo.scm 70 */
								obj_t BgL_kz00_5084;

								BgL_kz00_5084 = CNST_TABLE_REF(((long) 10));
								STRUCT_KEY_SET(BgL_res3733z00_2595, BgL_kz00_5084);
							}
							return BgL_res3733z00_2595;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4553 */
	obj_t BGl_structzb2objectzd2ze3objec4553z83zzcfa_infoz00(obj_t
		BgL_envz00_6026, obj_t BgL_oz00_6027, obj_t BgL_sz00_6028)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{
				BgL_atomzf2cinfozf2_bglt BgL_oz00_2580;

				obj_t BgL_sz00_2581;

				{	/* Cfa/cinfo.scm 73 */
					BgL_atomzf2cinfozf2_bglt BgL_auxz00_9679;

					BgL_oz00_2580 = (BgL_atomzf2cinfozf2_bglt) (BgL_oz00_6027);
					BgL_sz00_2581 = BgL_sz00_6028;
					{

						{	/* Cfa/cinfo.scm 73 */
							obj_t BgL_old3802z00_2584;

							obj_t BgL_aux3803z00_2585;

							{	/* Cfa/cinfo.scm 73 */
								obj_t BgL_nextzd2method4552zd2_2590;

								BgL_nextzd2method4552zd2_2590 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2580),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_atomzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4552zd2_2590))
									{	/* Cfa/cinfo.scm 73 */
										BgL_old3802z00_2584 =
											PROCEDURE_ENTRY(BgL_nextzd2method4552zd2_2590)
											(BgL_nextzd2method4552zd2_2590, (obj_t) (BgL_oz00_2580),
											BgL_sz00_2581, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 73 */
										BgL_old3802z00_2584 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2580), BgL_sz00_2581));
									}
							}
							BgL_aux3803z00_2585 =
								STRUCT_REF(BgL_sz00_2581, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 73 */
								BgL_atomzf2cinfozf2_bglt BgL_new3804z00_2586;

								BgL_new3804z00_2586 =
									((BgL_atomzf2cinfozf2_bglt) (BgL_old3802z00_2584));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3804z00_2586),
									BGl_classzd2numzd2zz__objectz00
									(BGl_atomzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 73 */
									BgL_atomzf2cinfozf2_bglt BgL_arg5216z00_2588;

									{	/* Cfa/cinfo.scm 73 */
										obj_t BgL_arg5217z00_2589;

										BgL_arg5217z00_2589 =
											STRUCT_REF(BgL_aux3803z00_2585, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 73 */
											BgL_atomzf2cinfozf2_bglt BgL_res5548z00_5071;

											{	/* Cfa/cinfo.scm 73 */
												BgL_approxz00_bglt BgL_approx3785z00_5065;

												BgL_approx3785z00_5065 =
													(BgL_approxz00_bglt) (BgL_arg5217z00_2589);
												{	/* Cfa/cinfo.scm 73 */
													BgL_atomzf2cinfozf2_bglt BgL_new3786z00_5066;

													BgL_new3786z00_5066 =
														((BgL_atomzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_atomzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 73 */
														BgL_atomzf2cinfozf2_bglt BgL_res5547z00_5070;

														{	/* Cfa/cinfo.scm 73 */
															BgL_atomzf2cinfozf2_bglt BgL_new3795z00_5067;

															BgL_new3795z00_5067 = BgL_new3786z00_5066;
															{	/* Cfa/cinfo.scm 73 */
																BgL_approxz00_bglt BgL_approx3794z00_5069;

																BgL_approx3794z00_5069 = BgL_approx3785z00_5065;
																((((BgL_atomzf2cinfozf2_bglt)
																			CREF(BgL_new3795z00_5067))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3794z00_5069),
																	BUNSPEC);
																BgL_res5547z00_5070 = BgL_new3795z00_5067;
														}} BgL_res5547z00_5070;
													}
													BgL_res5548z00_5071 = BgL_new3786z00_5066;
											}}
											BgL_arg5216z00_2588 = BgL_res5548z00_5071;
									}}
									{	/* Cfa/cinfo.scm 73 */
										obj_t BgL_auxz00_9703;

										BgL_objectz00_bglt BgL_auxz00_9701;

										BgL_auxz00_9703 = (obj_t) (BgL_arg5216z00_2588);
										BgL_auxz00_9701 =
											(BgL_objectz00_bglt) (BgL_new3804z00_2586);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9701, BgL_auxz00_9703);
								}}
								BgL_auxz00_9679 = BgL_new3804z00_2586;
					}}}
					return (obj_t) (BgL_auxz00_9679);
				}
			}
		}
	}



/* object->struct-atom/4551 */
	obj_t BGl_objectzd2ze3structzd2atomzf24551z11zzcfa_infoz00(obj_t
		BgL_envz00_6029, obj_t BgL_obj3799z00_6030)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 73 */
			{
				BgL_atomzf2cinfozf2_bglt BgL_obj3799z00_2570;

				BgL_obj3799z00_2570 = (BgL_atomzf2cinfozf2_bglt) (BgL_obj3799z00_6030);
				{

					{	/* Cfa/cinfo.scm 73 */
						obj_t BgL_res3800z00_2573;

						{	/* Cfa/cinfo.scm 73 */
							obj_t BgL_nextzd2method4550zd2_2578;

							BgL_nextzd2method4550zd2_2578 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3799z00_2570),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_atomzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4550zd2_2578))
								{	/* Cfa/cinfo.scm 73 */
									BgL_res3800z00_2573 =
										PROCEDURE_ENTRY(BgL_nextzd2method4550zd2_2578)
										(BgL_nextzd2method4550zd2_2578,
										(obj_t) (BgL_obj3799z00_2570), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 73 */
									BgL_res3800z00_2573 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3799z00_2570));
								}
						}
						{	/* Cfa/cinfo.scm 73 */
							obj_t BgL_aux3801z00_2574;

							{	/* Cfa/cinfo.scm 73 */
								obj_t BgL_keyz00_5042;

								BgL_keyz00_5042 = CNST_TABLE_REF(((long) 11));
								BgL_aux3801z00_2574 =
									make_struct(BgL_keyz00_5042, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 73 */
								BgL_approxz00_bglt BgL_arg5212z00_2576;

								{
									obj_t BgL_auxz00_9720;

									{	/* Cfa/cinfo.scm 73 */
										BgL_objectz00_bglt BgL_auxz00_9721;

										BgL_auxz00_9721 =
											(BgL_objectz00_bglt) (BgL_obj3799z00_2570);
										BgL_auxz00_9720 = BGL_OBJECT_WIDENING(BgL_auxz00_9721);
									}
									BgL_arg5212z00_2576 =
										(((BgL_atomzf2cinfozf2_bglt) CREF(BgL_auxz00_9720))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 73 */
									obj_t BgL_auxz00_9727;

									int BgL_auxz00_9725;

									BgL_auxz00_9727 = (obj_t) (BgL_arg5212z00_2576);
									BgL_auxz00_9725 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3801z00_2574, BgL_auxz00_9725,
										BgL_auxz00_9727);
							}}
							{	/* Cfa/cinfo.scm 73 */
								int BgL_auxz00_9730;

								BgL_auxz00_9730 = (int) (((long) 0));
								STRUCT_SET(BgL_res3800z00_2573, BgL_auxz00_9730,
									BgL_aux3801z00_2574);
							}
							{	/* Cfa/cinfo.scm 73 */
								obj_t BgL_auxz00_9733;

								BgL_auxz00_9733 = STRUCT_KEY(BgL_res3800z00_2573);
								STRUCT_KEY_SET(BgL_aux3801z00_2574, BgL_auxz00_9733);
							}
							{	/* Cfa/cinfo.scm 73 */
								obj_t BgL_kz00_5057;

								BgL_kz00_5057 = CNST_TABLE_REF(((long) 11));
								STRUCT_KEY_SET(BgL_res3800z00_2573, BgL_kz00_5057);
							}
							return BgL_res3800z00_2573;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4549 */
	obj_t BGl_structzb2objectzd2ze3objec4549z83zzcfa_infoz00(obj_t
		BgL_envz00_6031, obj_t BgL_oz00_6032, obj_t BgL_sz00_6033)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{
				BgL_kwotezf2nodezf2_bglt BgL_oz00_2558;

				obj_t BgL_sz00_2559;

				{	/* Cfa/cinfo.scm 75 */
					BgL_kwotezf2nodezf2_bglt BgL_auxz00_9739;

					BgL_oz00_2558 = (BgL_kwotezf2nodezf2_bglt) (BgL_oz00_6032);
					BgL_sz00_2559 = BgL_sz00_6033;
					{

						{	/* Cfa/cinfo.scm 75 */
							obj_t BgL_old3831z00_2562;

							obj_t BgL_aux3832z00_2563;

							{	/* Cfa/cinfo.scm 75 */
								obj_t BgL_nextzd2method4548zd2_2568;

								BgL_nextzd2method4548zd2_2568 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2558),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_kwotezf2nodezf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4548zd2_2568))
									{	/* Cfa/cinfo.scm 75 */
										BgL_old3831z00_2562 =
											PROCEDURE_ENTRY(BgL_nextzd2method4548zd2_2568)
											(BgL_nextzd2method4548zd2_2568, (obj_t) (BgL_oz00_2558),
											BgL_sz00_2559, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 75 */
										BgL_old3831z00_2562 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2558), BgL_sz00_2559));
									}
							}
							BgL_aux3832z00_2563 =
								STRUCT_REF(BgL_sz00_2559, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 75 */
								BgL_kwotezf2nodezf2_bglt BgL_new3833z00_2564;

								BgL_new3833z00_2564 =
									((BgL_kwotezf2nodezf2_bglt) (BgL_old3831z00_2562));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3833z00_2564),
									BGl_classzd2numzd2zz__objectz00
									(BGl_kwotezf2nodezf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 75 */
									BgL_kwotezf2nodezf2_bglt BgL_arg5208z00_2566;

									{	/* Cfa/cinfo.scm 75 */
										obj_t BgL_arg5209z00_2567;

										BgL_arg5209z00_2567 =
											STRUCT_REF(BgL_aux3832z00_2563, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 75 */
											BgL_kwotezf2nodezf2_bglt BgL_res5545z00_5040;

											{	/* Cfa/cinfo.scm 75 */
												BgL_nodez00_bglt BgL_node3814z00_5034;

												BgL_node3814z00_5034 =
													(BgL_nodez00_bglt) (BgL_arg5209z00_2567);
												{	/* Cfa/cinfo.scm 75 */
													BgL_kwotezf2nodezf2_bglt BgL_new3815z00_5035;

													BgL_new3815z00_5035 =
														((BgL_kwotezf2nodezf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_kwotezf2nodezf2_bgl))));
													{	/* Cfa/cinfo.scm 75 */
														BgL_kwotezf2nodezf2_bglt BgL_res5544z00_5039;

														{	/* Cfa/cinfo.scm 75 */
															BgL_kwotezf2nodezf2_bglt BgL_new3824z00_5036;

															BgL_new3824z00_5036 = BgL_new3815z00_5035;
															{	/* Cfa/cinfo.scm 75 */
																BgL_nodez00_bglt BgL_node3823z00_5038;

																BgL_node3823z00_5038 = BgL_node3814z00_5034;
																((((BgL_kwotezf2nodezf2_bglt)
																			CREF(BgL_new3824z00_5036))->BgL_nodez00) =
																	((BgL_nodez00_bglt) BgL_node3823z00_5038),
																	BUNSPEC);
																BgL_res5544z00_5039 = BgL_new3824z00_5036;
														}} BgL_res5544z00_5039;
													}
													BgL_res5545z00_5040 = BgL_new3815z00_5035;
											}}
											BgL_arg5208z00_2566 = BgL_res5545z00_5040;
									}}
									{	/* Cfa/cinfo.scm 75 */
										obj_t BgL_auxz00_9763;

										BgL_objectz00_bglt BgL_auxz00_9761;

										BgL_auxz00_9763 = (obj_t) (BgL_arg5208z00_2566);
										BgL_auxz00_9761 =
											(BgL_objectz00_bglt) (BgL_new3833z00_2564);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9761, BgL_auxz00_9763);
								}}
								BgL_auxz00_9739 = BgL_new3833z00_2564;
					}}}
					return (obj_t) (BgL_auxz00_9739);
				}
			}
		}
	}



/* object->struct-kwote4547 */
	obj_t BGl_objectzd2ze3structzd2kwote4547ze3zzcfa_infoz00(obj_t
		BgL_envz00_6034, obj_t BgL_obj3828z00_6035)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 75 */
			{
				BgL_kwotezf2nodezf2_bglt BgL_obj3828z00_2548;

				BgL_obj3828z00_2548 = (BgL_kwotezf2nodezf2_bglt) (BgL_obj3828z00_6035);
				{

					{	/* Cfa/cinfo.scm 75 */
						obj_t BgL_res3829z00_2551;

						{	/* Cfa/cinfo.scm 75 */
							obj_t BgL_nextzd2method4546zd2_2556;

							BgL_nextzd2method4546zd2_2556 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3828z00_2548),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_kwotezf2nodezf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4546zd2_2556))
								{	/* Cfa/cinfo.scm 75 */
									BgL_res3829z00_2551 =
										PROCEDURE_ENTRY(BgL_nextzd2method4546zd2_2556)
										(BgL_nextzd2method4546zd2_2556,
										(obj_t) (BgL_obj3828z00_2548), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 75 */
									BgL_res3829z00_2551 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3828z00_2548));
								}
						}
						{	/* Cfa/cinfo.scm 75 */
							obj_t BgL_aux3830z00_2552;

							{	/* Cfa/cinfo.scm 75 */
								obj_t BgL_keyz00_5011;

								BgL_keyz00_5011 = CNST_TABLE_REF(((long) 12));
								BgL_aux3830z00_2552 =
									make_struct(BgL_keyz00_5011, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 75 */
								BgL_nodez00_bglt BgL_arg5204z00_2554;

								{
									obj_t BgL_auxz00_9780;

									{	/* Cfa/cinfo.scm 75 */
										BgL_objectz00_bglt BgL_auxz00_9781;

										BgL_auxz00_9781 =
											(BgL_objectz00_bglt) (BgL_obj3828z00_2548);
										BgL_auxz00_9780 = BGL_OBJECT_WIDENING(BgL_auxz00_9781);
									}
									BgL_arg5204z00_2554 =
										(((BgL_kwotezf2nodezf2_bglt) CREF(BgL_auxz00_9780))->
										BgL_nodez00);
								}
								{	/* Cfa/cinfo.scm 75 */
									obj_t BgL_auxz00_9787;

									int BgL_auxz00_9785;

									BgL_auxz00_9787 = (obj_t) (BgL_arg5204z00_2554);
									BgL_auxz00_9785 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3830z00_2552, BgL_auxz00_9785,
										BgL_auxz00_9787);
							}}
							{	/* Cfa/cinfo.scm 75 */
								int BgL_auxz00_9790;

								BgL_auxz00_9790 = (int) (((long) 0));
								STRUCT_SET(BgL_res3829z00_2551, BgL_auxz00_9790,
									BgL_aux3830z00_2552);
							}
							{	/* Cfa/cinfo.scm 75 */
								obj_t BgL_auxz00_9793;

								BgL_auxz00_9793 = STRUCT_KEY(BgL_res3829z00_2551);
								STRUCT_KEY_SET(BgL_aux3830z00_2552, BgL_auxz00_9793);
							}
							{	/* Cfa/cinfo.scm 75 */
								obj_t BgL_kz00_5026;

								BgL_kz00_5026 = CNST_TABLE_REF(((long) 12));
								STRUCT_KEY_SET(BgL_res3829z00_2551, BgL_kz00_5026);
							}
							return BgL_res3829z00_2551;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4545 */
	obj_t BGl_structzb2objectzd2ze3objec4545z83zzcfa_infoz00(obj_t
		BgL_envz00_6036, obj_t BgL_oz00_6037, obj_t BgL_sz00_6038)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{
				BgL_kwotezf2cinfozf2_bglt BgL_oz00_2536;

				obj_t BgL_sz00_2537;

				{	/* Cfa/cinfo.scm 77 */
					BgL_kwotezf2cinfozf2_bglt BgL_auxz00_9799;

					BgL_oz00_2536 = (BgL_kwotezf2cinfozf2_bglt) (BgL_oz00_6037);
					BgL_sz00_2537 = BgL_sz00_6038;
					{

						{	/* Cfa/cinfo.scm 77 */
							obj_t BgL_old3858z00_2540;

							obj_t BgL_aux3859z00_2541;

							{	/* Cfa/cinfo.scm 77 */
								obj_t BgL_nextzd2method4544zd2_2546;

								BgL_nextzd2method4544zd2_2546 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2536),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_kwotezf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4544zd2_2546))
									{	/* Cfa/cinfo.scm 77 */
										BgL_old3858z00_2540 =
											PROCEDURE_ENTRY(BgL_nextzd2method4544zd2_2546)
											(BgL_nextzd2method4544zd2_2546, (obj_t) (BgL_oz00_2536),
											BgL_sz00_2537, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 77 */
										BgL_old3858z00_2540 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2536), BgL_sz00_2537));
									}
							}
							BgL_aux3859z00_2541 =
								STRUCT_REF(BgL_sz00_2537, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 77 */
								BgL_kwotezf2cinfozf2_bglt BgL_new3860z00_2542;

								BgL_new3860z00_2542 =
									((BgL_kwotezf2cinfozf2_bglt) (BgL_old3858z00_2540));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3860z00_2542),
									BGl_classzd2numzd2zz__objectz00
									(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 77 */
									BgL_kwotezf2cinfozf2_bglt BgL_arg5200z00_2544;

									{	/* Cfa/cinfo.scm 77 */
										obj_t BgL_arg5201z00_2545;

										BgL_arg5201z00_2545 =
											STRUCT_REF(BgL_aux3859z00_2541, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 77 */
											BgL_kwotezf2cinfozf2_bglt BgL_res5542z00_5009;

											{	/* Cfa/cinfo.scm 77 */
												BgL_approxz00_bglt BgL_approx3841z00_5003;

												BgL_approx3841z00_5003 =
													(BgL_approxz00_bglt) (BgL_arg5201z00_2545);
												{	/* Cfa/cinfo.scm 77 */
													BgL_kwotezf2cinfozf2_bglt BgL_new3842z00_5004;

													BgL_new3842z00_5004 =
														((BgL_kwotezf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_kwotezf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 77 */
														BgL_kwotezf2cinfozf2_bglt BgL_res5541z00_5008;

														{	/* Cfa/cinfo.scm 77 */
															BgL_kwotezf2cinfozf2_bglt BgL_new3851z00_5005;

															BgL_new3851z00_5005 = BgL_new3842z00_5004;
															{	/* Cfa/cinfo.scm 77 */
																BgL_approxz00_bglt BgL_approx3850z00_5007;

																BgL_approx3850z00_5007 = BgL_approx3841z00_5003;
																((((BgL_kwotezf2cinfozf2_bglt)
																			CREF(BgL_new3851z00_5005))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3850z00_5007),
																	BUNSPEC);
																BgL_res5541z00_5008 = BgL_new3851z00_5005;
														}} BgL_res5541z00_5008;
													}
													BgL_res5542z00_5009 = BgL_new3842z00_5004;
											}}
											BgL_arg5200z00_2544 = BgL_res5542z00_5009;
									}}
									{	/* Cfa/cinfo.scm 77 */
										obj_t BgL_auxz00_9823;

										BgL_objectz00_bglt BgL_auxz00_9821;

										BgL_auxz00_9823 = (obj_t) (BgL_arg5200z00_2544);
										BgL_auxz00_9821 =
											(BgL_objectz00_bglt) (BgL_new3860z00_2542);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9821, BgL_auxz00_9823);
								}}
								BgL_auxz00_9799 = BgL_new3860z00_2542;
					}}}
					return (obj_t) (BgL_auxz00_9799);
				}
			}
		}
	}



/* object->struct-kwote4543 */
	obj_t BGl_objectzd2ze3structzd2kwote4543ze3zzcfa_infoz00(obj_t
		BgL_envz00_6039, obj_t BgL_obj3855z00_6040)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 77 */
			{
				BgL_kwotezf2cinfozf2_bglt BgL_obj3855z00_2526;

				BgL_obj3855z00_2526 = (BgL_kwotezf2cinfozf2_bglt) (BgL_obj3855z00_6040);
				{

					{	/* Cfa/cinfo.scm 77 */
						obj_t BgL_res3856z00_2529;

						{	/* Cfa/cinfo.scm 77 */
							obj_t BgL_nextzd2method4542zd2_2534;

							BgL_nextzd2method4542zd2_2534 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3855z00_2526),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_kwotezf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4542zd2_2534))
								{	/* Cfa/cinfo.scm 77 */
									BgL_res3856z00_2529 =
										PROCEDURE_ENTRY(BgL_nextzd2method4542zd2_2534)
										(BgL_nextzd2method4542zd2_2534,
										(obj_t) (BgL_obj3855z00_2526), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 77 */
									BgL_res3856z00_2529 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3855z00_2526));
								}
						}
						{	/* Cfa/cinfo.scm 77 */
							obj_t BgL_aux3857z00_2530;

							{	/* Cfa/cinfo.scm 77 */
								obj_t BgL_keyz00_4980;

								BgL_keyz00_4980 = CNST_TABLE_REF(((long) 13));
								BgL_aux3857z00_2530 =
									make_struct(BgL_keyz00_4980, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 77 */
								BgL_approxz00_bglt BgL_arg5196z00_2532;

								{
									obj_t BgL_auxz00_9840;

									{	/* Cfa/cinfo.scm 77 */
										BgL_objectz00_bglt BgL_auxz00_9841;

										BgL_auxz00_9841 =
											(BgL_objectz00_bglt) (BgL_obj3855z00_2526);
										BgL_auxz00_9840 = BGL_OBJECT_WIDENING(BgL_auxz00_9841);
									}
									BgL_arg5196z00_2532 =
										(((BgL_kwotezf2cinfozf2_bglt) CREF(BgL_auxz00_9840))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 77 */
									obj_t BgL_auxz00_9847;

									int BgL_auxz00_9845;

									BgL_auxz00_9847 = (obj_t) (BgL_arg5196z00_2532);
									BgL_auxz00_9845 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3857z00_2530, BgL_auxz00_9845,
										BgL_auxz00_9847);
							}}
							{	/* Cfa/cinfo.scm 77 */
								int BgL_auxz00_9850;

								BgL_auxz00_9850 = (int) (((long) 0));
								STRUCT_SET(BgL_res3856z00_2529, BgL_auxz00_9850,
									BgL_aux3857z00_2530);
							}
							{	/* Cfa/cinfo.scm 77 */
								obj_t BgL_auxz00_9853;

								BgL_auxz00_9853 = STRUCT_KEY(BgL_res3856z00_2529);
								STRUCT_KEY_SET(BgL_aux3857z00_2530, BgL_auxz00_9853);
							}
							{	/* Cfa/cinfo.scm 77 */
								obj_t BgL_kz00_4995;

								BgL_kz00_4995 = CNST_TABLE_REF(((long) 13));
								STRUCT_KEY_SET(BgL_res3856z00_2529, BgL_kz00_4995);
							}
							return BgL_res3856z00_2529;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4541 */
	obj_t BGl_structzb2objectzd2ze3objec4541z83zzcfa_infoz00(obj_t
		BgL_envz00_6041, obj_t BgL_oz00_6042, obj_t BgL_sz00_6043)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{
				BgL_appzd2lyzf2cinfoz20_bglt BgL_oz00_2514;

				obj_t BgL_sz00_2515;

				{	/* Cfa/cinfo.scm 79 */
					BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_9859;

					BgL_oz00_2514 = (BgL_appzd2lyzf2cinfoz20_bglt) (BgL_oz00_6042);
					BgL_sz00_2515 = BgL_sz00_6043;
					{

						{	/* Cfa/cinfo.scm 79 */
							obj_t BgL_old3886z00_2518;

							obj_t BgL_aux3887z00_2519;

							{	/* Cfa/cinfo.scm 79 */
								obj_t BgL_nextzd2method4540zd2_2524;

								BgL_nextzd2method4540zd2_2524 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2514),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4540zd2_2524))
									{	/* Cfa/cinfo.scm 79 */
										BgL_old3886z00_2518 =
											PROCEDURE_ENTRY(BgL_nextzd2method4540zd2_2524)
											(BgL_nextzd2method4540zd2_2524, (obj_t) (BgL_oz00_2514),
											BgL_sz00_2515, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 79 */
										BgL_old3886z00_2518 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2514), BgL_sz00_2515));
									}
							}
							BgL_aux3887z00_2519 =
								STRUCT_REF(BgL_sz00_2515, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 79 */
								BgL_appzd2lyzf2cinfoz20_bglt BgL_new3888z00_2520;

								BgL_new3888z00_2520 =
									((BgL_appzd2lyzf2cinfoz20_bglt) (BgL_old3886z00_2518));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3888z00_2520),
									BGl_classzd2numzd2zz__objectz00
									(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 79 */
									BgL_appzd2lyzf2cinfoz20_bglt BgL_arg5192z00_2522;

									{	/* Cfa/cinfo.scm 79 */
										obj_t BgL_arg5193z00_2523;

										BgL_arg5193z00_2523 =
											STRUCT_REF(BgL_aux3887z00_2519, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 79 */
											BgL_appzd2lyzf2cinfoz20_bglt BgL_res5539z00_4978;

											{	/* Cfa/cinfo.scm 79 */
												BgL_approxz00_bglt BgL_approx3868z00_4972;

												BgL_approx3868z00_4972 =
													(BgL_approxz00_bglt) (BgL_arg5193z00_2523);
												{	/* Cfa/cinfo.scm 79 */
													BgL_appzd2lyzf2cinfoz20_bglt BgL_new3869z00_4973;

													BgL_new3869z00_4973 =
														((BgL_appzd2lyzf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_appzd2lyzf2cinfoz20_bgl))));
													{	/* Cfa/cinfo.scm 79 */
														BgL_appzd2lyzf2cinfoz20_bglt BgL_res5538z00_4977;

														{	/* Cfa/cinfo.scm 79 */
															BgL_appzd2lyzf2cinfoz20_bglt BgL_new3879z00_4974;

															BgL_new3879z00_4974 = BgL_new3869z00_4973;
															{	/* Cfa/cinfo.scm 79 */
																BgL_approxz00_bglt BgL_approx3878z00_4976;

																BgL_approx3878z00_4976 = BgL_approx3868z00_4972;
																((((BgL_appzd2lyzf2cinfoz20_bglt)
																			CREF(BgL_new3879z00_4974))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3878z00_4976),
																	BUNSPEC);
																BgL_res5538z00_4977 = BgL_new3879z00_4974;
														}} BgL_res5538z00_4977;
													}
													BgL_res5539z00_4978 = BgL_new3869z00_4973;
											}}
											BgL_arg5192z00_2522 = BgL_res5539z00_4978;
									}}
									{	/* Cfa/cinfo.scm 79 */
										obj_t BgL_auxz00_9883;

										BgL_objectz00_bglt BgL_auxz00_9881;

										BgL_auxz00_9883 = (obj_t) (BgL_arg5192z00_2522);
										BgL_auxz00_9881 =
											(BgL_objectz00_bglt) (BgL_new3888z00_2520);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9881, BgL_auxz00_9883);
								}}
								BgL_auxz00_9859 = BgL_new3888z00_2520;
					}}}
					return (obj_t) (BgL_auxz00_9859);
				}
			}
		}
	}



/* object->struct-app-l4538 */
	obj_t BGl_objectzd2ze3structzd2appzd2l4538z31zzcfa_infoz00(obj_t
		BgL_envz00_6044, obj_t BgL_obj3883z00_6045)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 79 */
			{
				BgL_appzd2lyzf2cinfoz20_bglt BgL_obj3883z00_2504;

				BgL_obj3883z00_2504 =
					(BgL_appzd2lyzf2cinfoz20_bglt) (BgL_obj3883z00_6045);
				{

					{	/* Cfa/cinfo.scm 79 */
						obj_t BgL_res3884z00_2507;

						{	/* Cfa/cinfo.scm 79 */
							obj_t BgL_nextzd2method4537zd2_2512;

							BgL_nextzd2method4537zd2_2512 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3883z00_2504),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4537zd2_2512))
								{	/* Cfa/cinfo.scm 79 */
									BgL_res3884z00_2507 =
										PROCEDURE_ENTRY(BgL_nextzd2method4537zd2_2512)
										(BgL_nextzd2method4537zd2_2512,
										(obj_t) (BgL_obj3883z00_2504), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 79 */
									BgL_res3884z00_2507 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3883z00_2504));
								}
						}
						{	/* Cfa/cinfo.scm 79 */
							obj_t BgL_aux3885z00_2508;

							{	/* Cfa/cinfo.scm 79 */
								obj_t BgL_keyz00_4949;

								BgL_keyz00_4949 = CNST_TABLE_REF(((long) 14));
								BgL_aux3885z00_2508 =
									make_struct(BgL_keyz00_4949, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 79 */
								BgL_approxz00_bglt BgL_arg5188z00_2510;

								{
									obj_t BgL_auxz00_9900;

									{	/* Cfa/cinfo.scm 79 */
										BgL_objectz00_bglt BgL_auxz00_9901;

										BgL_auxz00_9901 =
											(BgL_objectz00_bglt) (BgL_obj3883z00_2504);
										BgL_auxz00_9900 = BGL_OBJECT_WIDENING(BgL_auxz00_9901);
									}
									BgL_arg5188z00_2510 =
										(((BgL_appzd2lyzf2cinfoz20_bglt) CREF(BgL_auxz00_9900))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 79 */
									obj_t BgL_auxz00_9907;

									int BgL_auxz00_9905;

									BgL_auxz00_9907 = (obj_t) (BgL_arg5188z00_2510);
									BgL_auxz00_9905 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3885z00_2508, BgL_auxz00_9905,
										BgL_auxz00_9907);
							}}
							{	/* Cfa/cinfo.scm 79 */
								int BgL_auxz00_9910;

								BgL_auxz00_9910 = (int) (((long) 0));
								STRUCT_SET(BgL_res3884z00_2507, BgL_auxz00_9910,
									BgL_aux3885z00_2508);
							}
							{	/* Cfa/cinfo.scm 79 */
								obj_t BgL_auxz00_9913;

								BgL_auxz00_9913 = STRUCT_KEY(BgL_res3884z00_2507);
								STRUCT_KEY_SET(BgL_aux3885z00_2508, BgL_auxz00_9913);
							}
							{	/* Cfa/cinfo.scm 79 */
								obj_t BgL_kz00_4964;

								BgL_kz00_4964 = CNST_TABLE_REF(((long) 14));
								STRUCT_KEY_SET(BgL_res3884z00_2507, BgL_kz00_4964);
							}
							return BgL_res3884z00_2507;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4536 */
	obj_t BGl_structzb2objectzd2ze3objec4536z83zzcfa_infoz00(obj_t
		BgL_envz00_6046, obj_t BgL_oz00_6047, obj_t BgL_sz00_6048)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{
				BgL_funcallzf2cinfozf2_bglt BgL_oz00_2489;

				obj_t BgL_sz00_2490;

				{	/* Cfa/cinfo.scm 81 */
					BgL_funcallzf2cinfozf2_bglt BgL_auxz00_9919;

					BgL_oz00_2489 = (BgL_funcallzf2cinfozf2_bglt) (BgL_oz00_6047);
					BgL_sz00_2490 = BgL_sz00_6048;
					{

						{	/* Cfa/cinfo.scm 81 */
							obj_t BgL_old3932z00_2493;

							obj_t BgL_aux3933z00_2494;

							{	/* Cfa/cinfo.scm 81 */
								obj_t BgL_nextzd2method4535zd2_2502;

								BgL_nextzd2method4535zd2_2502 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2489),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_funcallzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4535zd2_2502))
									{	/* Cfa/cinfo.scm 81 */
										BgL_old3932z00_2493 =
											PROCEDURE_ENTRY(BgL_nextzd2method4535zd2_2502)
											(BgL_nextzd2method4535zd2_2502, (obj_t) (BgL_oz00_2489),
											BgL_sz00_2490, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 81 */
										BgL_old3932z00_2493 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2489), BgL_sz00_2490));
									}
							}
							BgL_aux3933z00_2494 =
								STRUCT_REF(BgL_sz00_2490, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 81 */
								BgL_funcallzf2cinfozf2_bglt BgL_new3934z00_2495;

								BgL_new3934z00_2495 =
									((BgL_funcallzf2cinfozf2_bglt) (BgL_old3932z00_2493));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3934z00_2495),
									BGl_classzd2numzd2zz__objectz00
									(BGl_funcallzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 81 */
									BgL_funcallzf2cinfozf2_bglt BgL_arg5181z00_2497;

									{	/* Cfa/cinfo.scm 81 */
										obj_t BgL_arg5182z00_2498;

										obj_t BgL_arg5183z00_2499;

										obj_t BgL_arg5184z00_2500;

										obj_t BgL_arg5185z00_2501;

										BgL_arg5182z00_2498 =
											STRUCT_REF(BgL_aux3933z00_2494, (int) (((long) 0)));
										BgL_arg5183z00_2499 =
											STRUCT_REF(BgL_aux3933z00_2494, (int) (((long) 1)));
										BgL_arg5184z00_2500 =
											STRUCT_REF(BgL_aux3933z00_2494, (int) (((long) 2)));
										BgL_arg5185z00_2501 =
											STRUCT_REF(BgL_aux3933z00_2494, (int) (((long) 3)));
										{	/* Cfa/cinfo.scm 81 */
											BgL_funcallzf2cinfozf2_bglt BgL_res5536z00_4947;

											{	/* Cfa/cinfo.scm 81 */
												BgL_approxz00_bglt BgL_approx3901z00_4932;

												BgL_approxz00_bglt BgL_vazd2approx3902zd2_4933;

												bool_t BgL_arityzd2errorzd2noticedzf33903zf3_4934;

												bool_t BgL_typezd2errorzd2noticedzf33904zf3_4935;

												BgL_approx3901z00_4932 =
													(BgL_approxz00_bglt) (BgL_arg5182z00_2498);
												BgL_vazd2approx3902zd2_4933 =
													(BgL_approxz00_bglt) (BgL_arg5183z00_2499);
												BgL_arityzd2errorzd2noticedzf33903zf3_4934 =
													CBOOL(BgL_arg5184z00_2500);
												BgL_typezd2errorzd2noticedzf33904zf3_4935 =
													CBOOL(BgL_arg5185z00_2501);
												{	/* Cfa/cinfo.scm 81 */
													BgL_funcallzf2cinfozf2_bglt BgL_new3905z00_4936;

													BgL_new3905z00_4936 =
														((BgL_funcallzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_funcallzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 81 */
														BgL_funcallzf2cinfozf2_bglt BgL_res5535z00_4946;

														{	/* Cfa/cinfo.scm 81 */
															BgL_funcallzf2cinfozf2_bglt BgL_new3922z00_4937;

															BgL_new3922z00_4937 = BgL_new3905z00_4936;
															{	/* Cfa/cinfo.scm 81 */
																BgL_approxz00_bglt BgL_approx3918z00_4942;

																BgL_approxz00_bglt BgL_vazd2approx3919zd2_4943;

																bool_t
																	BgL_arityzd2errorzd2noticedzf33920zf3_4944;
																bool_t
																	BgL_typezd2errorzd2noticedzf33921zf3_4945;
																BgL_approx3918z00_4942 = BgL_approx3901z00_4932;
																BgL_vazd2approx3919zd2_4943 =
																	BgL_vazd2approx3902zd2_4933;
																BgL_arityzd2errorzd2noticedzf33920zf3_4944 =
																	BgL_arityzd2errorzd2noticedzf33903zf3_4934;
																BgL_typezd2errorzd2noticedzf33921zf3_4945 =
																	BgL_typezd2errorzd2noticedzf33904zf3_4935;
																((((BgL_funcallzf2cinfozf2_bglt)
																			CREF(BgL_new3922z00_4937))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3918z00_4942),
																	BUNSPEC);
																((((BgL_funcallzf2cinfozf2_bglt)
																			CREF(BgL_new3922z00_4937))->
																		BgL_vazd2approxzd2) =
																	((BgL_approxz00_bglt)
																		BgL_vazd2approx3919zd2_4943), BUNSPEC);
																((((BgL_funcallzf2cinfozf2_bglt)
																			CREF(BgL_new3922z00_4937))->
																		BgL_arityzd2errorzd2noticedzf3zf3) =
																	((bool_t)
																		BgL_arityzd2errorzd2noticedzf33920zf3_4944),
																	BUNSPEC);
																((((BgL_funcallzf2cinfozf2_bglt)
																			CREF(BgL_new3922z00_4937))->
																		BgL_typezd2errorzd2noticedzf3zf3) =
																	((bool_t)
																		BgL_typezd2errorzd2noticedzf33921zf3_4945),
																	BUNSPEC);
																BgL_res5535z00_4946 = BgL_new3922z00_4937;
														}} BgL_res5535z00_4946;
													}
													BgL_res5536z00_4947 = BgL_new3905z00_4936;
											}}
											BgL_arg5181z00_2497 = BgL_res5536z00_4947;
									}}
									{	/* Cfa/cinfo.scm 81 */
										obj_t BgL_auxz00_9955;

										BgL_objectz00_bglt BgL_auxz00_9953;

										BgL_auxz00_9955 = (obj_t) (BgL_arg5181z00_2497);
										BgL_auxz00_9953 =
											(BgL_objectz00_bglt) (BgL_new3934z00_2495);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_9953, BgL_auxz00_9955);
								}}
								BgL_auxz00_9919 = BgL_new3934z00_2495;
					}}}
					return (obj_t) (BgL_auxz00_9919);
				}
			}
		}
	}



/* object->struct-funca4534 */
	obj_t BGl_objectzd2ze3structzd2funca4534ze3zzcfa_infoz00(obj_t
		BgL_envz00_6049, obj_t BgL_obj3929z00_6050)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 81 */
			{
				BgL_funcallzf2cinfozf2_bglt BgL_obj3929z00_2473;

				BgL_obj3929z00_2473 =
					(BgL_funcallzf2cinfozf2_bglt) (BgL_obj3929z00_6050);
				{

					{	/* Cfa/cinfo.scm 81 */
						obj_t BgL_res3930z00_2476;

						{	/* Cfa/cinfo.scm 81 */
							obj_t BgL_nextzd2method4533zd2_2487;

							BgL_nextzd2method4533zd2_2487 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3929z00_2473),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_funcallzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4533zd2_2487))
								{	/* Cfa/cinfo.scm 81 */
									BgL_res3930z00_2476 =
										PROCEDURE_ENTRY(BgL_nextzd2method4533zd2_2487)
										(BgL_nextzd2method4533zd2_2487,
										(obj_t) (BgL_obj3929z00_2473), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 81 */
									BgL_res3930z00_2476 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3929z00_2473));
								}
						}
						{	/* Cfa/cinfo.scm 81 */
							obj_t BgL_aux3931z00_2477;

							{	/* Cfa/cinfo.scm 81 */
								obj_t BgL_keyz00_4891;

								BgL_keyz00_4891 = CNST_TABLE_REF(((long) 15));
								BgL_aux3931z00_2477 =
									make_struct(BgL_keyz00_4891, (int) (((long) 4)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 81 */
								BgL_approxz00_bglt BgL_arg5171z00_2479;

								{
									obj_t BgL_auxz00_9972;

									{	/* Cfa/cinfo.scm 81 */
										BgL_objectz00_bglt BgL_auxz00_9973;

										BgL_auxz00_9973 =
											(BgL_objectz00_bglt) (BgL_obj3929z00_2473);
										BgL_auxz00_9972 = BGL_OBJECT_WIDENING(BgL_auxz00_9973);
									}
									BgL_arg5171z00_2479 =
										(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_9972))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 81 */
									obj_t BgL_auxz00_9979;

									int BgL_auxz00_9977;

									BgL_auxz00_9979 = (obj_t) (BgL_arg5171z00_2479);
									BgL_auxz00_9977 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3931z00_2477, BgL_auxz00_9977,
										BgL_auxz00_9979);
							}}
							{	/* Cfa/cinfo.scm 81 */
								BgL_approxz00_bglt BgL_arg5173z00_2481;

								{
									obj_t BgL_auxz00_9982;

									{	/* Cfa/cinfo.scm 81 */
										BgL_objectz00_bglt BgL_auxz00_9983;

										BgL_auxz00_9983 =
											(BgL_objectz00_bglt) (BgL_obj3929z00_2473);
										BgL_auxz00_9982 = BGL_OBJECT_WIDENING(BgL_auxz00_9983);
									}
									BgL_arg5173z00_2481 =
										(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_9982))->
										BgL_vazd2approxzd2);
								}
								{	/* Cfa/cinfo.scm 81 */
									obj_t BgL_auxz00_9989;

									int BgL_auxz00_9987;

									BgL_auxz00_9989 = (obj_t) (BgL_arg5173z00_2481);
									BgL_auxz00_9987 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3931z00_2477, BgL_auxz00_9987,
										BgL_auxz00_9989);
							}}
							{	/* Cfa/cinfo.scm 81 */
								bool_t BgL_arg5175z00_2483;

								{
									obj_t BgL_auxz00_9992;

									{	/* Cfa/cinfo.scm 81 */
										BgL_objectz00_bglt BgL_auxz00_9993;

										BgL_auxz00_9993 =
											(BgL_objectz00_bglt) (BgL_obj3929z00_2473);
										BgL_auxz00_9992 = BGL_OBJECT_WIDENING(BgL_auxz00_9993);
									}
									BgL_arg5175z00_2483 =
										(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_9992))->
										BgL_arityzd2errorzd2noticedzf3zf3);
								}
								{	/* Cfa/cinfo.scm 81 */
									obj_t BgL_auxz00_9999;

									int BgL_auxz00_9997;

									BgL_auxz00_9999 = BBOOL(BgL_arg5175z00_2483);
									BgL_auxz00_9997 = (int) (((long) 2));
									STRUCT_SET(BgL_aux3931z00_2477, BgL_auxz00_9997,
										BgL_auxz00_9999);
							}}
							{	/* Cfa/cinfo.scm 81 */
								bool_t BgL_arg5177z00_2485;

								{
									obj_t BgL_auxz00_10002;

									{	/* Cfa/cinfo.scm 81 */
										BgL_objectz00_bglt BgL_auxz00_10003;

										BgL_auxz00_10003 =
											(BgL_objectz00_bglt) (BgL_obj3929z00_2473);
										BgL_auxz00_10002 = BGL_OBJECT_WIDENING(BgL_auxz00_10003);
									}
									BgL_arg5177z00_2485 =
										(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_10002))->
										BgL_typezd2errorzd2noticedzf3zf3);
								}
								{	/* Cfa/cinfo.scm 81 */
									obj_t BgL_auxz00_10009;

									int BgL_auxz00_10007;

									BgL_auxz00_10009 = BBOOL(BgL_arg5177z00_2485);
									BgL_auxz00_10007 = (int) (((long) 3));
									STRUCT_SET(BgL_aux3931z00_2477, BgL_auxz00_10007,
										BgL_auxz00_10009);
							}}
							{	/* Cfa/cinfo.scm 81 */
								int BgL_auxz00_10012;

								BgL_auxz00_10012 = (int) (((long) 0));
								STRUCT_SET(BgL_res3930z00_2476, BgL_auxz00_10012,
									BgL_aux3931z00_2477);
							}
							{	/* Cfa/cinfo.scm 81 */
								obj_t BgL_auxz00_10015;

								BgL_auxz00_10015 = STRUCT_KEY(BgL_res3930z00_2476);
								STRUCT_KEY_SET(BgL_aux3931z00_2477, BgL_auxz00_10015);
							}
							{	/* Cfa/cinfo.scm 81 */
								obj_t BgL_kz00_4918;

								BgL_kz00_4918 = CNST_TABLE_REF(((long) 15));
								STRUCT_KEY_SET(BgL_res3930z00_2476, BgL_kz00_4918);
							}
							return BgL_res3930z00_2476;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4532 */
	obj_t BGl_structzb2objectzd2ze3objec4532z83zzcfa_infoz00(obj_t
		BgL_envz00_6051, obj_t BgL_oz00_6052, obj_t BgL_sz00_6053)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{
				BgL_setqzf2cinfozf2_bglt BgL_oz00_2461;

				obj_t BgL_sz00_2462;

				{	/* Cfa/cinfo.scm 86 */
					BgL_setqzf2cinfozf2_bglt BgL_auxz00_10021;

					BgL_oz00_2461 = (BgL_setqzf2cinfozf2_bglt) (BgL_oz00_6052);
					BgL_sz00_2462 = BgL_sz00_6053;
					{

						{	/* Cfa/cinfo.scm 86 */
							obj_t BgL_old3975z00_2465;

							obj_t BgL_aux3976z00_2466;

							{	/* Cfa/cinfo.scm 86 */
								obj_t BgL_nextzd2method4531zd2_2471;

								BgL_nextzd2method4531zd2_2471 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2461),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_setqzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4531zd2_2471))
									{	/* Cfa/cinfo.scm 86 */
										BgL_old3975z00_2465 =
											PROCEDURE_ENTRY(BgL_nextzd2method4531zd2_2471)
											(BgL_nextzd2method4531zd2_2471, (obj_t) (BgL_oz00_2461),
											BgL_sz00_2462, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 86 */
										BgL_old3975z00_2465 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2461), BgL_sz00_2462));
									}
							}
							BgL_aux3976z00_2466 =
								STRUCT_REF(BgL_sz00_2462, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 86 */
								BgL_setqzf2cinfozf2_bglt BgL_new3977z00_2467;

								BgL_new3977z00_2467 =
									((BgL_setqzf2cinfozf2_bglt) (BgL_old3975z00_2465));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3977z00_2467),
									BGl_classzd2numzd2zz__objectz00
									(BGl_setqzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 86 */
									BgL_setqzf2cinfozf2_bglt BgL_arg5167z00_2469;

									{	/* Cfa/cinfo.scm 86 */
										obj_t BgL_arg5168z00_2470;

										BgL_arg5168z00_2470 =
											STRUCT_REF(BgL_aux3976z00_2466, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 86 */
											BgL_setqzf2cinfozf2_bglt BgL_res5533z00_4889;

											{	/* Cfa/cinfo.scm 86 */
												BgL_approxz00_bglt BgL_approx3957z00_4883;

												BgL_approx3957z00_4883 =
													(BgL_approxz00_bglt) (BgL_arg5168z00_2470);
												{	/* Cfa/cinfo.scm 86 */
													BgL_setqzf2cinfozf2_bglt BgL_new3958z00_4884;

													BgL_new3958z00_4884 =
														((BgL_setqzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_setqzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 86 */
														BgL_setqzf2cinfozf2_bglt BgL_res5532z00_4888;

														{	/* Cfa/cinfo.scm 86 */
															BgL_setqzf2cinfozf2_bglt BgL_new3968z00_4885;

															BgL_new3968z00_4885 = BgL_new3958z00_4884;
															{	/* Cfa/cinfo.scm 86 */
																BgL_approxz00_bglt BgL_approx3967z00_4887;

																BgL_approx3967z00_4887 = BgL_approx3957z00_4883;
																((((BgL_setqzf2cinfozf2_bglt)
																			CREF(BgL_new3968z00_4885))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx3967z00_4887),
																	BUNSPEC);
																BgL_res5532z00_4888 = BgL_new3968z00_4885;
														}} BgL_res5532z00_4888;
													}
													BgL_res5533z00_4889 = BgL_new3958z00_4884;
											}}
											BgL_arg5167z00_2469 = BgL_res5533z00_4889;
									}}
									{	/* Cfa/cinfo.scm 86 */
										obj_t BgL_auxz00_10045;

										BgL_objectz00_bglt BgL_auxz00_10043;

										BgL_auxz00_10045 = (obj_t) (BgL_arg5167z00_2469);
										BgL_auxz00_10043 =
											(BgL_objectz00_bglt) (BgL_new3977z00_2467);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10043, BgL_auxz00_10045);
								}}
								BgL_auxz00_10021 = BgL_new3977z00_2467;
					}}}
					return (obj_t) (BgL_auxz00_10021);
				}
			}
		}
	}



/* object->struct-setq/4530 */
	obj_t BGl_objectzd2ze3structzd2setqzf24530z11zzcfa_infoz00(obj_t
		BgL_envz00_6054, obj_t BgL_obj3972z00_6055)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 86 */
			{
				BgL_setqzf2cinfozf2_bglt BgL_obj3972z00_2451;

				BgL_obj3972z00_2451 = (BgL_setqzf2cinfozf2_bglt) (BgL_obj3972z00_6055);
				{

					{	/* Cfa/cinfo.scm 86 */
						obj_t BgL_res3973z00_2454;

						{	/* Cfa/cinfo.scm 86 */
							obj_t BgL_nextzd2method4529zd2_2459;

							BgL_nextzd2method4529zd2_2459 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3972z00_2451),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_setqzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4529zd2_2459))
								{	/* Cfa/cinfo.scm 86 */
									BgL_res3973z00_2454 =
										PROCEDURE_ENTRY(BgL_nextzd2method4529zd2_2459)
										(BgL_nextzd2method4529zd2_2459,
										(obj_t) (BgL_obj3972z00_2451), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 86 */
									BgL_res3973z00_2454 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3972z00_2451));
								}
						}
						{	/* Cfa/cinfo.scm 86 */
							obj_t BgL_aux3974z00_2455;

							{	/* Cfa/cinfo.scm 86 */
								obj_t BgL_keyz00_4860;

								BgL_keyz00_4860 = CNST_TABLE_REF(((long) 16));
								BgL_aux3974z00_2455 =
									make_struct(BgL_keyz00_4860, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 86 */
								BgL_approxz00_bglt BgL_arg5163z00_2457;

								{
									obj_t BgL_auxz00_10062;

									{	/* Cfa/cinfo.scm 86 */
										BgL_objectz00_bglt BgL_auxz00_10063;

										BgL_auxz00_10063 =
											(BgL_objectz00_bglt) (BgL_obj3972z00_2451);
										BgL_auxz00_10062 = BGL_OBJECT_WIDENING(BgL_auxz00_10063);
									}
									BgL_arg5163z00_2457 =
										(((BgL_setqzf2cinfozf2_bglt) CREF(BgL_auxz00_10062))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 86 */
									obj_t BgL_auxz00_10069;

									int BgL_auxz00_10067;

									BgL_auxz00_10069 = (obj_t) (BgL_arg5163z00_2457);
									BgL_auxz00_10067 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3974z00_2455, BgL_auxz00_10067,
										BgL_auxz00_10069);
							}}
							{	/* Cfa/cinfo.scm 86 */
								int BgL_auxz00_10072;

								BgL_auxz00_10072 = (int) (((long) 0));
								STRUCT_SET(BgL_res3973z00_2454, BgL_auxz00_10072,
									BgL_aux3974z00_2455);
							}
							{	/* Cfa/cinfo.scm 86 */
								obj_t BgL_auxz00_10075;

								BgL_auxz00_10075 = STRUCT_KEY(BgL_res3973z00_2454);
								STRUCT_KEY_SET(BgL_aux3974z00_2455, BgL_auxz00_10075);
							}
							{	/* Cfa/cinfo.scm 86 */
								obj_t BgL_kz00_4875;

								BgL_kz00_4875 = CNST_TABLE_REF(((long) 16));
								STRUCT_KEY_SET(BgL_res3973z00_2454, BgL_kz00_4875);
							}
							return BgL_res3973z00_2454;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4528 */
	obj_t BGl_structzb2objectzd2ze3objec4528z83zzcfa_infoz00(obj_t
		BgL_envz00_6056, obj_t BgL_oz00_6057, obj_t BgL_sz00_6058)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{
				BgL_conditionalzf2cinfozf2_bglt BgL_oz00_2439;

				obj_t BgL_sz00_2440;

				{	/* Cfa/cinfo.scm 88 */
					BgL_conditionalzf2cinfozf2_bglt BgL_auxz00_10081;

					BgL_oz00_2439 = (BgL_conditionalzf2cinfozf2_bglt) (BgL_oz00_6057);
					BgL_sz00_2440 = BgL_sz00_6058;
					{

						{	/* Cfa/cinfo.scm 88 */
							obj_t BgL_old4013z00_2443;

							obj_t BgL_aux4014z00_2444;

							{	/* Cfa/cinfo.scm 88 */
								obj_t BgL_nextzd2method4527zd2_2449;

								BgL_nextzd2method4527zd2_2449 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2439),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_conditionalzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4527zd2_2449))
									{	/* Cfa/cinfo.scm 88 */
										BgL_old4013z00_2443 =
											PROCEDURE_ENTRY(BgL_nextzd2method4527zd2_2449)
											(BgL_nextzd2method4527zd2_2449, (obj_t) (BgL_oz00_2439),
											BgL_sz00_2440, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 88 */
										BgL_old4013z00_2443 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2439), BgL_sz00_2440));
									}
							}
							BgL_aux4014z00_2444 =
								STRUCT_REF(BgL_sz00_2440, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 88 */
								BgL_conditionalzf2cinfozf2_bglt BgL_new4015z00_2445;

								BgL_new4015z00_2445 =
									((BgL_conditionalzf2cinfozf2_bglt) (BgL_old4013z00_2443));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4015z00_2445),
									BGl_classzd2numzd2zz__objectz00
									(BGl_conditionalzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 88 */
									BgL_conditionalzf2cinfozf2_bglt BgL_arg5159z00_2447;

									{	/* Cfa/cinfo.scm 88 */
										obj_t BgL_arg5160z00_2448;

										BgL_arg5160z00_2448 =
											STRUCT_REF(BgL_aux4014z00_2444, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 88 */
											BgL_conditionalzf2cinfozf2_bglt BgL_res5530z00_4858;

											{	/* Cfa/cinfo.scm 88 */
												BgL_approxz00_bglt BgL_approx3992z00_4852;

												BgL_approx3992z00_4852 =
													(BgL_approxz00_bglt) (BgL_arg5160z00_2448);
												{	/* Cfa/cinfo.scm 88 */
													BgL_conditionalzf2cinfozf2_bglt BgL_new3993z00_4853;

													BgL_new3993z00_4853 =
														((BgL_conditionalzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_conditionalzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 88 */
														BgL_conditionalzf2cinfozf2_bglt BgL_res5529z00_4857;

														{	/* Cfa/cinfo.scm 88 */
															BgL_conditionalzf2cinfozf2_bglt
																BgL_new4006z00_4854;
															BgL_new4006z00_4854 = BgL_new3993z00_4853;
															{	/* Cfa/cinfo.scm 88 */
																BgL_approxz00_bglt BgL_approx4005z00_4856;

																BgL_approx4005z00_4856 = BgL_approx3992z00_4852;
																((((BgL_conditionalzf2cinfozf2_bglt)
																			CREF(BgL_new4006z00_4854))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4005z00_4856),
																	BUNSPEC);
																BgL_res5529z00_4857 = BgL_new4006z00_4854;
														}} BgL_res5529z00_4857;
													}
													BgL_res5530z00_4858 = BgL_new3993z00_4853;
											}}
											BgL_arg5159z00_2447 = BgL_res5530z00_4858;
									}}
									{	/* Cfa/cinfo.scm 88 */
										obj_t BgL_auxz00_10105;

										BgL_objectz00_bglt BgL_auxz00_10103;

										BgL_auxz00_10105 = (obj_t) (BgL_arg5159z00_2447);
										BgL_auxz00_10103 =
											(BgL_objectz00_bglt) (BgL_new4015z00_2445);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10103, BgL_auxz00_10105);
								}}
								BgL_auxz00_10081 = BgL_new4015z00_2445;
					}}}
					return (obj_t) (BgL_auxz00_10081);
				}
			}
		}
	}



/* object->struct-condi4526 */
	obj_t BGl_objectzd2ze3structzd2condi4526ze3zzcfa_infoz00(obj_t
		BgL_envz00_6059, obj_t BgL_obj4010z00_6060)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 88 */
			{
				BgL_conditionalzf2cinfozf2_bglt BgL_obj4010z00_2429;

				BgL_obj4010z00_2429 =
					(BgL_conditionalzf2cinfozf2_bglt) (BgL_obj4010z00_6060);
				{

					{	/* Cfa/cinfo.scm 88 */
						obj_t BgL_res4011z00_2432;

						{	/* Cfa/cinfo.scm 88 */
							obj_t BgL_nextzd2method4525zd2_2437;

							BgL_nextzd2method4525zd2_2437 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4010z00_2429),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_conditionalzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4525zd2_2437))
								{	/* Cfa/cinfo.scm 88 */
									BgL_res4011z00_2432 =
										PROCEDURE_ENTRY(BgL_nextzd2method4525zd2_2437)
										(BgL_nextzd2method4525zd2_2437,
										(obj_t) (BgL_obj4010z00_2429), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 88 */
									BgL_res4011z00_2432 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4010z00_2429));
								}
						}
						{	/* Cfa/cinfo.scm 88 */
							obj_t BgL_aux4012z00_2433;

							{	/* Cfa/cinfo.scm 88 */
								obj_t BgL_keyz00_4829;

								BgL_keyz00_4829 = CNST_TABLE_REF(((long) 17));
								BgL_aux4012z00_2433 =
									make_struct(BgL_keyz00_4829, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 88 */
								BgL_approxz00_bglt BgL_arg5155z00_2435;

								{
									obj_t BgL_auxz00_10122;

									{	/* Cfa/cinfo.scm 88 */
										BgL_objectz00_bglt BgL_auxz00_10123;

										BgL_auxz00_10123 =
											(BgL_objectz00_bglt) (BgL_obj4010z00_2429);
										BgL_auxz00_10122 = BGL_OBJECT_WIDENING(BgL_auxz00_10123);
									}
									BgL_arg5155z00_2435 =
										(((BgL_conditionalzf2cinfozf2_bglt)
											CREF(BgL_auxz00_10122))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 88 */
									obj_t BgL_auxz00_10129;

									int BgL_auxz00_10127;

									BgL_auxz00_10129 = (obj_t) (BgL_arg5155z00_2435);
									BgL_auxz00_10127 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4012z00_2433, BgL_auxz00_10127,
										BgL_auxz00_10129);
							}}
							{	/* Cfa/cinfo.scm 88 */
								int BgL_auxz00_10132;

								BgL_auxz00_10132 = (int) (((long) 0));
								STRUCT_SET(BgL_res4011z00_2432, BgL_auxz00_10132,
									BgL_aux4012z00_2433);
							}
							{	/* Cfa/cinfo.scm 88 */
								obj_t BgL_auxz00_10135;

								BgL_auxz00_10135 = STRUCT_KEY(BgL_res4011z00_2432);
								STRUCT_KEY_SET(BgL_aux4012z00_2433, BgL_auxz00_10135);
							}
							{	/* Cfa/cinfo.scm 88 */
								obj_t BgL_kz00_4844;

								BgL_kz00_4844 = CNST_TABLE_REF(((long) 17));
								STRUCT_KEY_SET(BgL_res4011z00_2432, BgL_kz00_4844);
							}
							return BgL_res4011z00_2432;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4523 */
	obj_t BGl_structzb2objectzd2ze3objec4523z83zzcfa_infoz00(obj_t
		BgL_envz00_6061, obj_t BgL_oz00_6062, obj_t BgL_sz00_6063)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{
				BgL_failzf2cinfozf2_bglt BgL_oz00_2417;

				obj_t BgL_sz00_2418;

				{	/* Cfa/cinfo.scm 90 */
					BgL_failzf2cinfozf2_bglt BgL_auxz00_10141;

					BgL_oz00_2417 = (BgL_failzf2cinfozf2_bglt) (BgL_oz00_6062);
					BgL_sz00_2418 = BgL_sz00_6063;
					{

						{	/* Cfa/cinfo.scm 90 */
							obj_t BgL_old4056z00_2421;

							obj_t BgL_aux4057z00_2422;

							{	/* Cfa/cinfo.scm 90 */
								obj_t BgL_nextzd2method4522zd2_2427;

								BgL_nextzd2method4522zd2_2427 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2417),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_failzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4522zd2_2427))
									{	/* Cfa/cinfo.scm 90 */
										BgL_old4056z00_2421 =
											PROCEDURE_ENTRY(BgL_nextzd2method4522zd2_2427)
											(BgL_nextzd2method4522zd2_2427, (obj_t) (BgL_oz00_2417),
											BgL_sz00_2418, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 90 */
										BgL_old4056z00_2421 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2417), BgL_sz00_2418));
									}
							}
							BgL_aux4057z00_2422 =
								STRUCT_REF(BgL_sz00_2418, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 90 */
								BgL_failzf2cinfozf2_bglt BgL_new4058z00_2423;

								BgL_new4058z00_2423 =
									((BgL_failzf2cinfozf2_bglt) (BgL_old4056z00_2421));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4058z00_2423),
									BGl_classzd2numzd2zz__objectz00
									(BGl_failzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 90 */
									BgL_failzf2cinfozf2_bglt BgL_arg5151z00_2425;

									{	/* Cfa/cinfo.scm 90 */
										obj_t BgL_arg5152z00_2426;

										BgL_arg5152z00_2426 =
											STRUCT_REF(BgL_aux4057z00_2422, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 90 */
											BgL_failzf2cinfozf2_bglt BgL_res5527z00_4827;

											{	/* Cfa/cinfo.scm 90 */
												BgL_approxz00_bglt BgL_approx4037z00_4821;

												BgL_approx4037z00_4821 =
													(BgL_approxz00_bglt) (BgL_arg5152z00_2426);
												{	/* Cfa/cinfo.scm 90 */
													BgL_failzf2cinfozf2_bglt BgL_new4038z00_4822;

													BgL_new4038z00_4822 =
														((BgL_failzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_failzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 90 */
														BgL_failzf2cinfozf2_bglt BgL_res5526z00_4826;

														{	/* Cfa/cinfo.scm 90 */
															BgL_failzf2cinfozf2_bglt BgL_new4049z00_4823;

															BgL_new4049z00_4823 = BgL_new4038z00_4822;
															{	/* Cfa/cinfo.scm 90 */
																BgL_approxz00_bglt BgL_approx4048z00_4825;

																BgL_approx4048z00_4825 = BgL_approx4037z00_4821;
																((((BgL_failzf2cinfozf2_bglt)
																			CREF(BgL_new4049z00_4823))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4048z00_4825),
																	BUNSPEC);
																BgL_res5526z00_4826 = BgL_new4049z00_4823;
														}} BgL_res5526z00_4826;
													}
													BgL_res5527z00_4827 = BgL_new4038z00_4822;
											}}
											BgL_arg5151z00_2425 = BgL_res5527z00_4827;
									}}
									{	/* Cfa/cinfo.scm 90 */
										obj_t BgL_auxz00_10165;

										BgL_objectz00_bglt BgL_auxz00_10163;

										BgL_auxz00_10165 = (obj_t) (BgL_arg5151z00_2425);
										BgL_auxz00_10163 =
											(BgL_objectz00_bglt) (BgL_new4058z00_2423);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10163, BgL_auxz00_10165);
								}}
								BgL_auxz00_10141 = BgL_new4058z00_2423;
					}}}
					return (obj_t) (BgL_auxz00_10141);
				}
			}
		}
	}



/* object->struct-fail/4521 */
	obj_t BGl_objectzd2ze3structzd2failzf24521z11zzcfa_infoz00(obj_t
		BgL_envz00_6064, obj_t BgL_obj4053z00_6065)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 90 */
			{
				BgL_failzf2cinfozf2_bglt BgL_obj4053z00_2407;

				BgL_obj4053z00_2407 = (BgL_failzf2cinfozf2_bglt) (BgL_obj4053z00_6065);
				{

					{	/* Cfa/cinfo.scm 90 */
						obj_t BgL_res4054z00_2410;

						{	/* Cfa/cinfo.scm 90 */
							obj_t BgL_nextzd2method4520zd2_2415;

							BgL_nextzd2method4520zd2_2415 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4053z00_2407),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_failzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4520zd2_2415))
								{	/* Cfa/cinfo.scm 90 */
									BgL_res4054z00_2410 =
										PROCEDURE_ENTRY(BgL_nextzd2method4520zd2_2415)
										(BgL_nextzd2method4520zd2_2415,
										(obj_t) (BgL_obj4053z00_2407), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 90 */
									BgL_res4054z00_2410 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4053z00_2407));
								}
						}
						{	/* Cfa/cinfo.scm 90 */
							obj_t BgL_aux4055z00_2411;

							{	/* Cfa/cinfo.scm 90 */
								obj_t BgL_keyz00_4798;

								BgL_keyz00_4798 = CNST_TABLE_REF(((long) 18));
								BgL_aux4055z00_2411 =
									make_struct(BgL_keyz00_4798, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 90 */
								BgL_approxz00_bglt BgL_arg5147z00_2413;

								{
									obj_t BgL_auxz00_10182;

									{	/* Cfa/cinfo.scm 90 */
										BgL_objectz00_bglt BgL_auxz00_10183;

										BgL_auxz00_10183 =
											(BgL_objectz00_bglt) (BgL_obj4053z00_2407);
										BgL_auxz00_10182 = BGL_OBJECT_WIDENING(BgL_auxz00_10183);
									}
									BgL_arg5147z00_2413 =
										(((BgL_failzf2cinfozf2_bglt) CREF(BgL_auxz00_10182))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 90 */
									obj_t BgL_auxz00_10189;

									int BgL_auxz00_10187;

									BgL_auxz00_10189 = (obj_t) (BgL_arg5147z00_2413);
									BgL_auxz00_10187 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4055z00_2411, BgL_auxz00_10187,
										BgL_auxz00_10189);
							}}
							{	/* Cfa/cinfo.scm 90 */
								int BgL_auxz00_10192;

								BgL_auxz00_10192 = (int) (((long) 0));
								STRUCT_SET(BgL_res4054z00_2410, BgL_auxz00_10192,
									BgL_aux4055z00_2411);
							}
							{	/* Cfa/cinfo.scm 90 */
								obj_t BgL_auxz00_10195;

								BgL_auxz00_10195 = STRUCT_KEY(BgL_res4054z00_2410);
								STRUCT_KEY_SET(BgL_aux4055z00_2411, BgL_auxz00_10195);
							}
							{	/* Cfa/cinfo.scm 90 */
								obj_t BgL_kz00_4813;

								BgL_kz00_4813 = CNST_TABLE_REF(((long) 18));
								STRUCT_KEY_SET(BgL_res4054z00_2410, BgL_kz00_4813);
							}
							return BgL_res4054z00_2410;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4519 */
	obj_t BGl_structzb2objectzd2ze3objec4519z83zzcfa_infoz00(obj_t
		BgL_envz00_6066, obj_t BgL_oz00_6067, obj_t BgL_sz00_6068)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{
				BgL_selectzf2cinfozf2_bglt BgL_oz00_2395;

				obj_t BgL_sz00_2396;

				{	/* Cfa/cinfo.scm 92 */
					BgL_selectzf2cinfozf2_bglt BgL_auxz00_10201;

					BgL_oz00_2395 = (BgL_selectzf2cinfozf2_bglt) (BgL_oz00_6067);
					BgL_sz00_2396 = BgL_sz00_6068;
					{

						{	/* Cfa/cinfo.scm 92 */
							obj_t BgL_old4096z00_2399;

							obj_t BgL_aux4097z00_2400;

							{	/* Cfa/cinfo.scm 92 */
								obj_t BgL_nextzd2method4518zd2_2405;

								BgL_nextzd2method4518zd2_2405 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2395),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_selectzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4518zd2_2405))
									{	/* Cfa/cinfo.scm 92 */
										BgL_old4096z00_2399 =
											PROCEDURE_ENTRY(BgL_nextzd2method4518zd2_2405)
											(BgL_nextzd2method4518zd2_2405, (obj_t) (BgL_oz00_2395),
											BgL_sz00_2396, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 92 */
										BgL_old4096z00_2399 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2395), BgL_sz00_2396));
									}
							}
							BgL_aux4097z00_2400 =
								STRUCT_REF(BgL_sz00_2396, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 92 */
								BgL_selectzf2cinfozf2_bglt BgL_new4098z00_2401;

								BgL_new4098z00_2401 =
									((BgL_selectzf2cinfozf2_bglt) (BgL_old4096z00_2399));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4098z00_2401),
									BGl_classzd2numzd2zz__objectz00
									(BGl_selectzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 92 */
									BgL_selectzf2cinfozf2_bglt BgL_arg5143z00_2403;

									{	/* Cfa/cinfo.scm 92 */
										obj_t BgL_arg5144z00_2404;

										BgL_arg5144z00_2404 =
											STRUCT_REF(BgL_aux4097z00_2400, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 92 */
											BgL_selectzf2cinfozf2_bglt BgL_res5524z00_4796;

											{	/* Cfa/cinfo.scm 92 */
												BgL_approxz00_bglt BgL_approx4074z00_4790;

												BgL_approx4074z00_4790 =
													(BgL_approxz00_bglt) (BgL_arg5144z00_2404);
												{	/* Cfa/cinfo.scm 92 */
													BgL_selectzf2cinfozf2_bglt BgL_new4075z00_4791;

													BgL_new4075z00_4791 =
														((BgL_selectzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_selectzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 92 */
														BgL_selectzf2cinfozf2_bglt BgL_res5523z00_4795;

														{	/* Cfa/cinfo.scm 92 */
															BgL_selectzf2cinfozf2_bglt BgL_new4088z00_4792;

															BgL_new4088z00_4792 = BgL_new4075z00_4791;
															{	/* Cfa/cinfo.scm 92 */
																BgL_approxz00_bglt BgL_approx4087z00_4794;

																BgL_approx4087z00_4794 = BgL_approx4074z00_4790;
																((((BgL_selectzf2cinfozf2_bglt)
																			CREF(BgL_new4088z00_4792))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4087z00_4794),
																	BUNSPEC);
																BgL_res5523z00_4795 = BgL_new4088z00_4792;
														}} BgL_res5523z00_4795;
													}
													BgL_res5524z00_4796 = BgL_new4075z00_4791;
											}}
											BgL_arg5143z00_2403 = BgL_res5524z00_4796;
									}}
									{	/* Cfa/cinfo.scm 92 */
										obj_t BgL_auxz00_10225;

										BgL_objectz00_bglt BgL_auxz00_10223;

										BgL_auxz00_10225 = (obj_t) (BgL_arg5143z00_2403);
										BgL_auxz00_10223 =
											(BgL_objectz00_bglt) (BgL_new4098z00_2401);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10223, BgL_auxz00_10225);
								}}
								BgL_auxz00_10201 = BgL_new4098z00_2401;
					}}}
					return (obj_t) (BgL_auxz00_10201);
				}
			}
		}
	}



/* object->struct-selec4517 */
	obj_t BGl_objectzd2ze3structzd2selec4517ze3zzcfa_infoz00(obj_t
		BgL_envz00_6069, obj_t BgL_obj4093z00_6070)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 92 */
			{
				BgL_selectzf2cinfozf2_bglt BgL_obj4093z00_2385;

				BgL_obj4093z00_2385 =
					(BgL_selectzf2cinfozf2_bglt) (BgL_obj4093z00_6070);
				{

					{	/* Cfa/cinfo.scm 92 */
						obj_t BgL_res4094z00_2388;

						{	/* Cfa/cinfo.scm 92 */
							obj_t BgL_nextzd2method4516zd2_2393;

							BgL_nextzd2method4516zd2_2393 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4093z00_2385),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_selectzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4516zd2_2393))
								{	/* Cfa/cinfo.scm 92 */
									BgL_res4094z00_2388 =
										PROCEDURE_ENTRY(BgL_nextzd2method4516zd2_2393)
										(BgL_nextzd2method4516zd2_2393,
										(obj_t) (BgL_obj4093z00_2385), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 92 */
									BgL_res4094z00_2388 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4093z00_2385));
								}
						}
						{	/* Cfa/cinfo.scm 92 */
							obj_t BgL_aux4095z00_2389;

							{	/* Cfa/cinfo.scm 92 */
								obj_t BgL_keyz00_4767;

								BgL_keyz00_4767 = CNST_TABLE_REF(((long) 19));
								BgL_aux4095z00_2389 =
									make_struct(BgL_keyz00_4767, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 92 */
								BgL_approxz00_bglt BgL_arg5139z00_2391;

								{
									obj_t BgL_auxz00_10242;

									{	/* Cfa/cinfo.scm 92 */
										BgL_objectz00_bglt BgL_auxz00_10243;

										BgL_auxz00_10243 =
											(BgL_objectz00_bglt) (BgL_obj4093z00_2385);
										BgL_auxz00_10242 = BGL_OBJECT_WIDENING(BgL_auxz00_10243);
									}
									BgL_arg5139z00_2391 =
										(((BgL_selectzf2cinfozf2_bglt) CREF(BgL_auxz00_10242))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 92 */
									obj_t BgL_auxz00_10249;

									int BgL_auxz00_10247;

									BgL_auxz00_10249 = (obj_t) (BgL_arg5139z00_2391);
									BgL_auxz00_10247 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4095z00_2389, BgL_auxz00_10247,
										BgL_auxz00_10249);
							}}
							{	/* Cfa/cinfo.scm 92 */
								int BgL_auxz00_10252;

								BgL_auxz00_10252 = (int) (((long) 0));
								STRUCT_SET(BgL_res4094z00_2388, BgL_auxz00_10252,
									BgL_aux4095z00_2389);
							}
							{	/* Cfa/cinfo.scm 92 */
								obj_t BgL_auxz00_10255;

								BgL_auxz00_10255 = STRUCT_KEY(BgL_res4094z00_2388);
								STRUCT_KEY_SET(BgL_aux4095z00_2389, BgL_auxz00_10255);
							}
							{	/* Cfa/cinfo.scm 92 */
								obj_t BgL_kz00_4782;

								BgL_kz00_4782 = CNST_TABLE_REF(((long) 19));
								STRUCT_KEY_SET(BgL_res4094z00_2388, BgL_kz00_4782);
							}
							return BgL_res4094z00_2388;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4515 */
	obj_t BGl_structzb2objectzd2ze3objec4515z83zzcfa_infoz00(obj_t
		BgL_envz00_6071, obj_t BgL_oz00_6072, obj_t BgL_sz00_6073)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_oz00_2373;

				obj_t BgL_sz00_2374;

				{	/* Cfa/cinfo.scm 94 */
					BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_10261;

					BgL_oz00_2373 = (BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_oz00_6072);
					BgL_sz00_2374 = BgL_sz00_6073;
					{

						{	/* Cfa/cinfo.scm 94 */
							obj_t BgL_old4138z00_2377;

							obj_t BgL_aux4139z00_2378;

							{	/* Cfa/cinfo.scm 94 */
								obj_t BgL_nextzd2method4514zd2_2383;

								BgL_nextzd2method4514zd2_2383 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2373),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4514zd2_2383))
									{	/* Cfa/cinfo.scm 94 */
										BgL_old4138z00_2377 =
											PROCEDURE_ENTRY(BgL_nextzd2method4514zd2_2383)
											(BgL_nextzd2method4514zd2_2383, (obj_t) (BgL_oz00_2373),
											BgL_sz00_2374, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 94 */
										BgL_old4138z00_2377 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2373), BgL_sz00_2374));
									}
							}
							BgL_aux4139z00_2378 =
								STRUCT_REF(BgL_sz00_2374, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 94 */
								BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4140z00_2379;

								BgL_new4140z00_2379 =
									((BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_old4138z00_2377));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4140z00_2379),
									BGl_classzd2numzd2zz__objectz00
									(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 94 */
									BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_arg5135z00_2381;

									{	/* Cfa/cinfo.scm 94 */
										obj_t BgL_arg5136z00_2382;

										BgL_arg5136z00_2382 =
											STRUCT_REF(BgL_aux4139z00_2378, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 94 */
											BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_res5521z00_4765;

											{	/* Cfa/cinfo.scm 94 */
												BgL_approxz00_bglt BgL_approx4119z00_4759;

												BgL_approx4119z00_4759 =
													(BgL_approxz00_bglt) (BgL_arg5136z00_2382);
												{	/* Cfa/cinfo.scm 94 */
													BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_new4120z00_4760;

													BgL_new4120z00_4760 =
														((BgL_setzd2exzd2itzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_setzd2exzd2itzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 94 */
														BgL_setzd2exzd2itzf2cinfozf2_bglt
															BgL_res5520z00_4764;
														{	/* Cfa/cinfo.scm 94 */
															BgL_setzd2exzd2itzf2cinfozf2_bglt
																BgL_new4130z00_4761;
															BgL_new4130z00_4761 = BgL_new4120z00_4760;
															{	/* Cfa/cinfo.scm 94 */
																BgL_approxz00_bglt BgL_approx4129z00_4763;

																BgL_approx4129z00_4763 = BgL_approx4119z00_4759;
																((((BgL_setzd2exzd2itzf2cinfozf2_bglt)
																			CREF(BgL_new4130z00_4761))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4129z00_4763),
																	BUNSPEC);
																BgL_res5520z00_4764 = BgL_new4130z00_4761;
														}} BgL_res5520z00_4764;
													}
													BgL_res5521z00_4765 = BgL_new4120z00_4760;
											}}
											BgL_arg5135z00_2381 = BgL_res5521z00_4765;
									}}
									{	/* Cfa/cinfo.scm 94 */
										obj_t BgL_auxz00_10285;

										BgL_objectz00_bglt BgL_auxz00_10283;

										BgL_auxz00_10285 = (obj_t) (BgL_arg5135z00_2381);
										BgL_auxz00_10283 =
											(BgL_objectz00_bglt) (BgL_new4140z00_2379);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10283, BgL_auxz00_10285);
								}}
								BgL_auxz00_10261 = BgL_new4140z00_2379;
					}}}
					return (obj_t) (BgL_auxz00_10261);
				}
			}
		}
	}



/* object->struct-set-e4513 */
	obj_t BGl_objectzd2ze3structzd2setzd2e4513z31zzcfa_infoz00(obj_t
		BgL_envz00_6074, obj_t BgL_obj4135z00_6075)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 94 */
			{
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_obj4135z00_2363;

				BgL_obj4135z00_2363 =
					(BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_obj4135z00_6075);
				{

					{	/* Cfa/cinfo.scm 94 */
						obj_t BgL_res4136z00_2366;

						{	/* Cfa/cinfo.scm 94 */
							obj_t BgL_nextzd2method4512zd2_2371;

							BgL_nextzd2method4512zd2_2371 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4135z00_2363),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4512zd2_2371))
								{	/* Cfa/cinfo.scm 94 */
									BgL_res4136z00_2366 =
										PROCEDURE_ENTRY(BgL_nextzd2method4512zd2_2371)
										(BgL_nextzd2method4512zd2_2371,
										(obj_t) (BgL_obj4135z00_2363), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 94 */
									BgL_res4136z00_2366 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4135z00_2363));
								}
						}
						{	/* Cfa/cinfo.scm 94 */
							obj_t BgL_aux4137z00_2367;

							{	/* Cfa/cinfo.scm 94 */
								obj_t BgL_keyz00_4736;

								BgL_keyz00_4736 = CNST_TABLE_REF(((long) 20));
								BgL_aux4137z00_2367 =
									make_struct(BgL_keyz00_4736, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 94 */
								BgL_approxz00_bglt BgL_arg5131z00_2369;

								{
									obj_t BgL_auxz00_10302;

									{	/* Cfa/cinfo.scm 94 */
										BgL_objectz00_bglt BgL_auxz00_10303;

										BgL_auxz00_10303 =
											(BgL_objectz00_bglt) (BgL_obj4135z00_2363);
										BgL_auxz00_10302 = BGL_OBJECT_WIDENING(BgL_auxz00_10303);
									}
									BgL_arg5131z00_2369 =
										(((BgL_setzd2exzd2itzf2cinfozf2_bglt)
											CREF(BgL_auxz00_10302))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 94 */
									obj_t BgL_auxz00_10309;

									int BgL_auxz00_10307;

									BgL_auxz00_10309 = (obj_t) (BgL_arg5131z00_2369);
									BgL_auxz00_10307 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4137z00_2367, BgL_auxz00_10307,
										BgL_auxz00_10309);
							}}
							{	/* Cfa/cinfo.scm 94 */
								int BgL_auxz00_10312;

								BgL_auxz00_10312 = (int) (((long) 0));
								STRUCT_SET(BgL_res4136z00_2366, BgL_auxz00_10312,
									BgL_aux4137z00_2367);
							}
							{	/* Cfa/cinfo.scm 94 */
								obj_t BgL_auxz00_10315;

								BgL_auxz00_10315 = STRUCT_KEY(BgL_res4136z00_2366);
								STRUCT_KEY_SET(BgL_aux4137z00_2367, BgL_auxz00_10315);
							}
							{	/* Cfa/cinfo.scm 94 */
								obj_t BgL_kz00_4751;

								BgL_kz00_4751 = CNST_TABLE_REF(((long) 20));
								STRUCT_KEY_SET(BgL_res4136z00_2366, BgL_kz00_4751);
							}
							return BgL_res4136z00_2366;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4511 */
	obj_t BGl_structzb2objectzd2ze3objec4511z83zzcfa_infoz00(obj_t
		BgL_envz00_6076, obj_t BgL_oz00_6077, obj_t BgL_sz00_6078)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_oz00_2351;

				obj_t BgL_sz00_2352;

				{	/* Cfa/cinfo.scm 96 */
					BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_10321;

					BgL_oz00_2351 = (BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_oz00_6077);
					BgL_sz00_2352 = BgL_sz00_6078;
					{

						{	/* Cfa/cinfo.scm 96 */
							obj_t BgL_old4174z00_2355;

							obj_t BgL_aux4175z00_2356;

							{	/* Cfa/cinfo.scm 96 */
								obj_t BgL_nextzd2method4510zd2_2361;

								BgL_nextzd2method4510zd2_2361 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2351),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4510zd2_2361))
									{	/* Cfa/cinfo.scm 96 */
										BgL_old4174z00_2355 =
											PROCEDURE_ENTRY(BgL_nextzd2method4510zd2_2361)
											(BgL_nextzd2method4510zd2_2361, (obj_t) (BgL_oz00_2351),
											BgL_sz00_2352, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 96 */
										BgL_old4174z00_2355 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2351), BgL_sz00_2352));
									}
							}
							BgL_aux4175z00_2356 =
								STRUCT_REF(BgL_sz00_2352, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 96 */
								BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_new4176z00_2357;

								BgL_new4176z00_2357 =
									((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_old4174z00_2355));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4176z00_2357),
									BGl_classzd2numzd2zz__objectz00
									(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 96 */
									BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_arg5127z00_2359;

									{	/* Cfa/cinfo.scm 96 */
										obj_t BgL_arg5128z00_2360;

										BgL_arg5128z00_2360 =
											STRUCT_REF(BgL_aux4175z00_2356, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 96 */
											BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_res5518z00_4734;

											{	/* Cfa/cinfo.scm 96 */
												BgL_approxz00_bglt BgL_approx4156z00_4728;

												BgL_approx4156z00_4728 =
													(BgL_approxz00_bglt) (BgL_arg5128z00_2360);
												{	/* Cfa/cinfo.scm 96 */
													BgL_jumpzd2exzd2itzf2cinfozf2_bglt
														BgL_new4157z00_4729;
													BgL_new4157z00_4729 =
														((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_jumpzd2exzd2itzf2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 96 */
														BgL_jumpzd2exzd2itzf2cinfozf2_bglt
															BgL_res5517z00_4733;
														{	/* Cfa/cinfo.scm 96 */
															BgL_jumpzd2exzd2itzf2cinfozf2_bglt
																BgL_new4167z00_4730;
															BgL_new4167z00_4730 = BgL_new4157z00_4729;
															{	/* Cfa/cinfo.scm 96 */
																BgL_approxz00_bglt BgL_approx4166z00_4732;

																BgL_approx4166z00_4732 = BgL_approx4156z00_4728;
																((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
																			CREF(BgL_new4167z00_4730))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4166z00_4732),
																	BUNSPEC);
																BgL_res5517z00_4733 = BgL_new4167z00_4730;
														}} BgL_res5517z00_4733;
													}
													BgL_res5518z00_4734 = BgL_new4157z00_4729;
											}}
											BgL_arg5127z00_2359 = BgL_res5518z00_4734;
									}}
									{	/* Cfa/cinfo.scm 96 */
										obj_t BgL_auxz00_10345;

										BgL_objectz00_bglt BgL_auxz00_10343;

										BgL_auxz00_10345 = (obj_t) (BgL_arg5127z00_2359);
										BgL_auxz00_10343 =
											(BgL_objectz00_bglt) (BgL_new4176z00_2357);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10343, BgL_auxz00_10345);
								}}
								BgL_auxz00_10321 = BgL_new4176z00_2357;
					}}}
					return (obj_t) (BgL_auxz00_10321);
				}
			}
		}
	}



/* object->struct-jump-4509 */
	obj_t BGl_objectzd2ze3structzd2jumpzd24509z31zzcfa_infoz00(obj_t
		BgL_envz00_6079, obj_t BgL_obj4171z00_6080)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 96 */
			{
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_obj4171z00_2341;

				BgL_obj4171z00_2341 =
					(BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_obj4171z00_6080);
				{

					{	/* Cfa/cinfo.scm 96 */
						obj_t BgL_res4172z00_2344;

						{	/* Cfa/cinfo.scm 96 */
							obj_t BgL_nextzd2method4508zd2_2349;

							BgL_nextzd2method4508zd2_2349 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4171z00_2341),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4508zd2_2349))
								{	/* Cfa/cinfo.scm 96 */
									BgL_res4172z00_2344 =
										PROCEDURE_ENTRY(BgL_nextzd2method4508zd2_2349)
										(BgL_nextzd2method4508zd2_2349,
										(obj_t) (BgL_obj4171z00_2341), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 96 */
									BgL_res4172z00_2344 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4171z00_2341));
								}
						}
						{	/* Cfa/cinfo.scm 96 */
							obj_t BgL_aux4173z00_2345;

							{	/* Cfa/cinfo.scm 96 */
								obj_t BgL_keyz00_4705;

								BgL_keyz00_4705 = CNST_TABLE_REF(((long) 21));
								BgL_aux4173z00_2345 =
									make_struct(BgL_keyz00_4705, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 96 */
								BgL_approxz00_bglt BgL_arg5123z00_2347;

								{
									obj_t BgL_auxz00_10362;

									{	/* Cfa/cinfo.scm 96 */
										BgL_objectz00_bglt BgL_auxz00_10363;

										BgL_auxz00_10363 =
											(BgL_objectz00_bglt) (BgL_obj4171z00_2341);
										BgL_auxz00_10362 = BGL_OBJECT_WIDENING(BgL_auxz00_10363);
									}
									BgL_arg5123z00_2347 =
										(((BgL_jumpzd2exzd2itzf2cinfozf2_bglt)
											CREF(BgL_auxz00_10362))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 96 */
									obj_t BgL_auxz00_10369;

									int BgL_auxz00_10367;

									BgL_auxz00_10369 = (obj_t) (BgL_arg5123z00_2347);
									BgL_auxz00_10367 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4173z00_2345, BgL_auxz00_10367,
										BgL_auxz00_10369);
							}}
							{	/* Cfa/cinfo.scm 96 */
								int BgL_auxz00_10372;

								BgL_auxz00_10372 = (int) (((long) 0));
								STRUCT_SET(BgL_res4172z00_2344, BgL_auxz00_10372,
									BgL_aux4173z00_2345);
							}
							{	/* Cfa/cinfo.scm 96 */
								obj_t BgL_auxz00_10375;

								BgL_auxz00_10375 = STRUCT_KEY(BgL_res4172z00_2344);
								STRUCT_KEY_SET(BgL_aux4173z00_2345, BgL_auxz00_10375);
							}
							{	/* Cfa/cinfo.scm 96 */
								obj_t BgL_kz00_4720;

								BgL_kz00_4720 = CNST_TABLE_REF(((long) 21));
								STRUCT_KEY_SET(BgL_res4172z00_2344, BgL_kz00_4720);
							}
							return BgL_res4172z00_2344;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4507 */
	obj_t BGl_structzb2objectzd2ze3objec4507z83zzcfa_infoz00(obj_t
		BgL_envz00_6081, obj_t BgL_oz00_6082, obj_t BgL_sz00_6083)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{
				BgL_prezd2makezd2boxz00_bglt BgL_oz00_2330;

				obj_t BgL_sz00_2331;

				{	/* Cfa/cinfo.scm 100 */
					BgL_prezd2makezd2boxz00_bglt BgL_auxz00_10381;

					BgL_oz00_2330 = (BgL_prezd2makezd2boxz00_bglt) (BgL_oz00_6082);
					BgL_sz00_2331 = BgL_sz00_6083;
					{

						{	/* Cfa/cinfo.scm 100 */
							obj_t BgL_old4207z00_2334;

							{	/* Cfa/cinfo.scm 100 */
								obj_t BgL_nextzd2method4506zd2_2339;

								BgL_nextzd2method4506zd2_2339 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2330),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_prezd2makezd2boxz00zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4506zd2_2339))
									{	/* Cfa/cinfo.scm 100 */
										BgL_old4207z00_2334 =
											PROCEDURE_ENTRY(BgL_nextzd2method4506zd2_2339)
											(BgL_nextzd2method4506zd2_2339, (obj_t) (BgL_oz00_2330),
											BgL_sz00_2331, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 100 */
										BgL_old4207z00_2334 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2330), BgL_sz00_2331));
									}
							}
							{	/* Cfa/cinfo.scm 100 */
								BgL_prezd2makezd2boxz00_bglt BgL_new4209z00_2336;

								BgL_new4209z00_2336 =
									((BgL_prezd2makezd2boxz00_bglt) (BgL_old4207z00_2334));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4209z00_2336),
									BGl_classzd2numzd2zz__objectz00
									(BGl_prezd2makezd2boxz00zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 100 */
									BgL_prezd2makezd2boxz00_bglt BgL_arg5120z00_2338;

									BgL_arg5120z00_2338 =
										BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00();
									{	/* Cfa/cinfo.scm 100 */
										obj_t BgL_auxz00_10399;

										BgL_objectz00_bglt BgL_auxz00_10397;

										BgL_auxz00_10399 = (obj_t) (BgL_arg5120z00_2338);
										BgL_auxz00_10397 =
											(BgL_objectz00_bglt) (BgL_new4209z00_2336);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10397, BgL_auxz00_10399);
									}
								}
								BgL_auxz00_10381 = BgL_new4209z00_2336;
							}
						}
					}
					return (obj_t) (BgL_auxz00_10381);
				}
			}
		}
	}



/* object->struct-pre-m4504 */
	obj_t BGl_objectzd2ze3structzd2prezd2m4504z31zzcfa_infoz00(obj_t
		BgL_envz00_6084, obj_t BgL_obj4204z00_6085)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 100 */
			{
				BgL_prezd2makezd2boxz00_bglt BgL_obj4204z00_2322;

				BgL_obj4204z00_2322 =
					(BgL_prezd2makezd2boxz00_bglt) (BgL_obj4204z00_6085);
				{

					{	/* Cfa/cinfo.scm 100 */
						obj_t BgL_res4205z00_2325;

						{	/* Cfa/cinfo.scm 100 */
							obj_t BgL_nextzd2method4503zd2_2328;

							BgL_nextzd2method4503zd2_2328 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4204z00_2322),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_prezd2makezd2boxz00zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4503zd2_2328))
								{	/* Cfa/cinfo.scm 100 */
									BgL_res4205z00_2325 =
										PROCEDURE_ENTRY(BgL_nextzd2method4503zd2_2328)
										(BgL_nextzd2method4503zd2_2328,
										(obj_t) (BgL_obj4204z00_2322), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 100 */
									BgL_res4205z00_2325 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4204z00_2322));
								}
						}
						{	/* Cfa/cinfo.scm 100 */
							obj_t BgL_aux4206z00_2326;

							{	/* Cfa/cinfo.scm 100 */
								obj_t BgL_keyz00_4687;

								BgL_keyz00_4687 = CNST_TABLE_REF(((long) 22));
								BgL_aux4206z00_2326 =
									make_struct(BgL_keyz00_4687, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 100 */
								int BgL_auxz00_10416;

								BgL_auxz00_10416 = (int) (((long) 0));
								STRUCT_SET(BgL_res4205z00_2325, BgL_auxz00_10416,
									BgL_aux4206z00_2326);
							}
							{	/* Cfa/cinfo.scm 100 */
								obj_t BgL_auxz00_10419;

								BgL_auxz00_10419 = STRUCT_KEY(BgL_res4205z00_2325);
								STRUCT_KEY_SET(BgL_aux4206z00_2326, BgL_auxz00_10419);
							}
							{	/* Cfa/cinfo.scm 100 */
								obj_t BgL_kz00_4698;

								BgL_kz00_4698 = CNST_TABLE_REF(((long) 22));
								STRUCT_KEY_SET(BgL_res4205z00_2325, BgL_kz00_4698);
							}
							return BgL_res4205z00_2325;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4502 */
	obj_t BGl_structzb2objectzd2ze3objec4502z83zzcfa_infoz00(obj_t
		BgL_envz00_6086, obj_t BgL_oz00_6087, obj_t BgL_sz00_6088)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{
				BgL_makezd2boxzf2cinfoz20_bglt BgL_oz00_2310;

				obj_t BgL_sz00_2311;

				{	/* Cfa/cinfo.scm 101 */
					BgL_makezd2boxzf2cinfoz20_bglt BgL_auxz00_10425;

					BgL_oz00_2310 = (BgL_makezd2boxzf2cinfoz20_bglt) (BgL_oz00_6087);
					BgL_sz00_2311 = BgL_sz00_6088;
					{

						{	/* Cfa/cinfo.scm 101 */
							obj_t BgL_old4243z00_2314;

							obj_t BgL_aux4244z00_2315;

							{	/* Cfa/cinfo.scm 101 */
								obj_t BgL_nextzd2method4501zd2_2320;

								BgL_nextzd2method4501zd2_2320 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2310),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4501zd2_2320))
									{	/* Cfa/cinfo.scm 101 */
										BgL_old4243z00_2314 =
											PROCEDURE_ENTRY(BgL_nextzd2method4501zd2_2320)
											(BgL_nextzd2method4501zd2_2320, (obj_t) (BgL_oz00_2310),
											BgL_sz00_2311, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 101 */
										BgL_old4243z00_2314 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2310), BgL_sz00_2311));
									}
							}
							BgL_aux4244z00_2315 =
								STRUCT_REF(BgL_sz00_2311, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 101 */
								BgL_makezd2boxzf2cinfoz20_bglt BgL_new4245z00_2316;

								BgL_new4245z00_2316 =
									((BgL_makezd2boxzf2cinfoz20_bglt) (BgL_old4243z00_2314));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4245z00_2316),
									BGl_classzd2numzd2zz__objectz00
									(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 101 */
									BgL_makezd2boxzf2cinfoz20_bglt BgL_arg5114z00_2318;

									{	/* Cfa/cinfo.scm 101 */
										obj_t BgL_arg5115z00_2319;

										BgL_arg5115z00_2319 =
											STRUCT_REF(BgL_aux4244z00_2315, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 101 */
											BgL_makezd2boxzf2cinfoz20_bglt BgL_res5514z00_4685;

											{	/* Cfa/cinfo.scm 101 */
												BgL_approxz00_bglt BgL_approx4224z00_4679;

												BgL_approx4224z00_4679 =
													(BgL_approxz00_bglt) (BgL_arg5115z00_2319);
												{	/* Cfa/cinfo.scm 101 */
													BgL_makezd2boxzf2cinfoz20_bglt BgL_new4225z00_4680;

													BgL_new4225z00_4680 =
														((BgL_makezd2boxzf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_makezd2boxzf2cinfoz20_bgl))));
													{	/* Cfa/cinfo.scm 101 */
														BgL_makezd2boxzf2cinfoz20_bglt BgL_res5513z00_4684;

														{	/* Cfa/cinfo.scm 101 */
															BgL_makezd2boxzf2cinfoz20_bglt
																BgL_new4236z00_4681;
															BgL_new4236z00_4681 = BgL_new4225z00_4680;
															{	/* Cfa/cinfo.scm 101 */
																BgL_approxz00_bglt BgL_approx4235z00_4683;

																BgL_approx4235z00_4683 = BgL_approx4224z00_4679;
																((((BgL_makezd2boxzf2cinfoz20_bglt)
																			CREF(BgL_new4236z00_4681))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4235z00_4683),
																	BUNSPEC);
																BgL_res5513z00_4684 = BgL_new4236z00_4681;
														}} BgL_res5513z00_4684;
													}
													BgL_res5514z00_4685 = BgL_new4225z00_4680;
											}}
											BgL_arg5114z00_2318 = BgL_res5514z00_4685;
									}}
									{	/* Cfa/cinfo.scm 101 */
										obj_t BgL_auxz00_10449;

										BgL_objectz00_bglt BgL_auxz00_10447;

										BgL_auxz00_10449 = (obj_t) (BgL_arg5114z00_2318);
										BgL_auxz00_10447 =
											(BgL_objectz00_bglt) (BgL_new4245z00_2316);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10447, BgL_auxz00_10449);
								}}
								BgL_auxz00_10425 = BgL_new4245z00_2316;
					}}}
					return (obj_t) (BgL_auxz00_10425);
				}
			}
		}
	}



/* object->struct-make-4500 */
	obj_t BGl_objectzd2ze3structzd2makezd24500z31zzcfa_infoz00(obj_t
		BgL_envz00_6089, obj_t BgL_obj4240z00_6090)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 101 */
			{
				BgL_makezd2boxzf2cinfoz20_bglt BgL_obj4240z00_2300;

				BgL_obj4240z00_2300 =
					(BgL_makezd2boxzf2cinfoz20_bglt) (BgL_obj4240z00_6090);
				{

					{	/* Cfa/cinfo.scm 101 */
						obj_t BgL_res4241z00_2303;

						{	/* Cfa/cinfo.scm 101 */
							obj_t BgL_nextzd2method4499zd2_2308;

							BgL_nextzd2method4499zd2_2308 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4240z00_2300),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4499zd2_2308))
								{	/* Cfa/cinfo.scm 101 */
									BgL_res4241z00_2303 =
										PROCEDURE_ENTRY(BgL_nextzd2method4499zd2_2308)
										(BgL_nextzd2method4499zd2_2308,
										(obj_t) (BgL_obj4240z00_2300), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 101 */
									BgL_res4241z00_2303 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4240z00_2300));
								}
						}
						{	/* Cfa/cinfo.scm 101 */
							obj_t BgL_aux4242z00_2304;

							{	/* Cfa/cinfo.scm 101 */
								obj_t BgL_keyz00_4656;

								BgL_keyz00_4656 = CNST_TABLE_REF(((long) 23));
								BgL_aux4242z00_2304 =
									make_struct(BgL_keyz00_4656, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 101 */
								BgL_approxz00_bglt BgL_arg5110z00_2306;

								{
									obj_t BgL_auxz00_10466;

									{	/* Cfa/cinfo.scm 101 */
										BgL_objectz00_bglt BgL_auxz00_10467;

										BgL_auxz00_10467 =
											(BgL_objectz00_bglt) (BgL_obj4240z00_2300);
										BgL_auxz00_10466 = BGL_OBJECT_WIDENING(BgL_auxz00_10467);
									}
									BgL_arg5110z00_2306 =
										(((BgL_makezd2boxzf2cinfoz20_bglt) CREF(BgL_auxz00_10466))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 101 */
									obj_t BgL_auxz00_10473;

									int BgL_auxz00_10471;

									BgL_auxz00_10473 = (obj_t) (BgL_arg5110z00_2306);
									BgL_auxz00_10471 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4242z00_2304, BgL_auxz00_10471,
										BgL_auxz00_10473);
							}}
							{	/* Cfa/cinfo.scm 101 */
								int BgL_auxz00_10476;

								BgL_auxz00_10476 = (int) (((long) 0));
								STRUCT_SET(BgL_res4241z00_2303, BgL_auxz00_10476,
									BgL_aux4242z00_2304);
							}
							{	/* Cfa/cinfo.scm 101 */
								obj_t BgL_auxz00_10479;

								BgL_auxz00_10479 = STRUCT_KEY(BgL_res4241z00_2303);
								STRUCT_KEY_SET(BgL_aux4242z00_2304, BgL_auxz00_10479);
							}
							{	/* Cfa/cinfo.scm 101 */
								obj_t BgL_kz00_4671;

								BgL_kz00_4671 = CNST_TABLE_REF(((long) 23));
								STRUCT_KEY_SET(BgL_res4241z00_2303, BgL_kz00_4671);
							}
							return BgL_res4241z00_2303;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4497 */
	obj_t BGl_structzb2objectzd2ze3objec4497z83zzcfa_infoz00(obj_t
		BgL_envz00_6091, obj_t BgL_oz00_6092, obj_t BgL_sz00_6093)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{
				BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_oz00_2287;

				obj_t BgL_sz00_2288;

				{	/* Cfa/cinfo.scm 103 */
					BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_10485;

					BgL_oz00_2287 = (BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_oz00_6092);
					BgL_sz00_2288 = BgL_sz00_6093;
					{

						{	/* Cfa/cinfo.scm 103 */
							obj_t BgL_old4284z00_2291;

							obj_t BgL_aux4285z00_2292;

							{	/* Cfa/cinfo.scm 103 */
								obj_t BgL_nextzd2method4496zd2_2298;

								BgL_nextzd2method4496zd2_2298 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2287),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4496zd2_2298))
									{	/* Cfa/cinfo.scm 103 */
										BgL_old4284z00_2291 =
											PROCEDURE_ENTRY(BgL_nextzd2method4496zd2_2298)
											(BgL_nextzd2method4496zd2_2298, (obj_t) (BgL_oz00_2287),
											BgL_sz00_2288, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 103 */
										BgL_old4284z00_2291 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2287), BgL_sz00_2288));
									}
							}
							BgL_aux4285z00_2292 =
								STRUCT_REF(BgL_sz00_2288, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 103 */
								BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_new4286z00_2293;

								BgL_new4286z00_2293 =
									((BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_old4284z00_2291));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4286z00_2293),
									BGl_classzd2numzd2zz__objectz00
									(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 103 */
									BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_arg5105z00_2295;

									{	/* Cfa/cinfo.scm 103 */
										obj_t BgL_arg5106z00_2296;

										obj_t BgL_arg5107z00_2297;

										BgL_arg5106z00_2296 =
											STRUCT_REF(BgL_aux4285z00_2292, (int) (((long) 0)));
										BgL_arg5107z00_2297 =
											STRUCT_REF(BgL_aux4285z00_2292, (int) (((long) 1)));
										{	/* Cfa/cinfo.scm 103 */
											BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_res5511z00_4654;

											{	/* Cfa/cinfo.scm 103 */
												BgL_approxz00_bglt BgL_approx4261z00_4645;

												BgL_approxz00_bglt BgL_valuezd2approx4262zd2_4646;

												BgL_approx4261z00_4645 =
													(BgL_approxz00_bglt) (BgL_arg5106z00_2296);
												BgL_valuezd2approx4262zd2_4646 =
													(BgL_approxz00_bglt) (BgL_arg5107z00_2297);
												{	/* Cfa/cinfo.scm 103 */
													BgL_makezd2boxzf2ozd2cinfozf2_bglt
														BgL_new4263z00_4647;
													BgL_new4263z00_4647 =
														((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_makezd2boxzf2ozd2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 103 */
														BgL_makezd2boxzf2ozd2cinfozf2_bglt
															BgL_res5510z00_4653;
														{	/* Cfa/cinfo.scm 103 */
															BgL_makezd2boxzf2ozd2cinfozf2_bglt
																BgL_new4276z00_4648;
															BgL_new4276z00_4648 = BgL_new4263z00_4647;
															{	/* Cfa/cinfo.scm 103 */
																BgL_approxz00_bglt BgL_approx4274z00_4651;

																BgL_approxz00_bglt
																	BgL_valuezd2approx4275zd2_4652;
																BgL_approx4274z00_4651 = BgL_approx4261z00_4645;
																BgL_valuezd2approx4275zd2_4652 =
																	BgL_valuezd2approx4262zd2_4646;
																((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
																			CREF(BgL_new4276z00_4648))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4274z00_4651),
																	BUNSPEC);
																((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
																			CREF(BgL_new4276z00_4648))->
																		BgL_valuezd2approxzd2) =
																	((BgL_approxz00_bglt)
																		BgL_valuezd2approx4275zd2_4652), BUNSPEC);
																BgL_res5510z00_4653 = BgL_new4276z00_4648;
														}} BgL_res5510z00_4653;
													}
													BgL_res5511z00_4654 = BgL_new4263z00_4647;
											}}
											BgL_arg5105z00_2295 = BgL_res5511z00_4654;
									}}
									{	/* Cfa/cinfo.scm 103 */
										obj_t BgL_auxz00_10513;

										BgL_objectz00_bglt BgL_auxz00_10511;

										BgL_auxz00_10513 = (obj_t) (BgL_arg5105z00_2295);
										BgL_auxz00_10511 =
											(BgL_objectz00_bglt) (BgL_new4286z00_2293);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10511, BgL_auxz00_10513);
								}}
								BgL_auxz00_10485 = BgL_new4286z00_2293;
					}}}
					return (obj_t) (BgL_auxz00_10485);
				}
			}
		}
	}



/* object->struct-make-4495 */
	obj_t BGl_objectzd2ze3structzd2makezd24495z31zzcfa_infoz00(obj_t
		BgL_envz00_6094, obj_t BgL_obj4281z00_6095)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 103 */
			{
				BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_obj4281z00_2275;

				BgL_obj4281z00_2275 =
					(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_obj4281z00_6095);
				{

					{	/* Cfa/cinfo.scm 103 */
						obj_t BgL_res4282z00_2278;

						{	/* Cfa/cinfo.scm 103 */
							obj_t BgL_nextzd2method4494zd2_2285;

							BgL_nextzd2method4494zd2_2285 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4281z00_2275),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4494zd2_2285))
								{	/* Cfa/cinfo.scm 103 */
									BgL_res4282z00_2278 =
										PROCEDURE_ENTRY(BgL_nextzd2method4494zd2_2285)
										(BgL_nextzd2method4494zd2_2285,
										(obj_t) (BgL_obj4281z00_2275), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 103 */
									BgL_res4282z00_2278 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4281z00_2275));
								}
						}
						{	/* Cfa/cinfo.scm 103 */
							obj_t BgL_aux4283z00_2279;

							{	/* Cfa/cinfo.scm 103 */
								obj_t BgL_keyz00_4616;

								BgL_keyz00_4616 = CNST_TABLE_REF(((long) 24));
								BgL_aux4283z00_2279 =
									make_struct(BgL_keyz00_4616, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 103 */
								BgL_approxz00_bglt BgL_arg5099z00_2281;

								{
									obj_t BgL_auxz00_10530;

									{	/* Cfa/cinfo.scm 103 */
										BgL_objectz00_bglt BgL_auxz00_10531;

										BgL_auxz00_10531 =
											(BgL_objectz00_bglt) (BgL_obj4281z00_2275);
										BgL_auxz00_10530 = BGL_OBJECT_WIDENING(BgL_auxz00_10531);
									}
									BgL_arg5099z00_2281 =
										(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
											CREF(BgL_auxz00_10530))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 103 */
									obj_t BgL_auxz00_10537;

									int BgL_auxz00_10535;

									BgL_auxz00_10537 = (obj_t) (BgL_arg5099z00_2281);
									BgL_auxz00_10535 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4283z00_2279, BgL_auxz00_10535,
										BgL_auxz00_10537);
							}}
							{	/* Cfa/cinfo.scm 103 */
								BgL_approxz00_bglt BgL_arg5101z00_2283;

								{
									obj_t BgL_auxz00_10540;

									{	/* Cfa/cinfo.scm 103 */
										BgL_objectz00_bglt BgL_auxz00_10541;

										BgL_auxz00_10541 =
											(BgL_objectz00_bglt) (BgL_obj4281z00_2275);
										BgL_auxz00_10540 = BGL_OBJECT_WIDENING(BgL_auxz00_10541);
									}
									BgL_arg5101z00_2283 =
										(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
											CREF(BgL_auxz00_10540))->BgL_valuezd2approxzd2);
								}
								{	/* Cfa/cinfo.scm 103 */
									obj_t BgL_auxz00_10547;

									int BgL_auxz00_10545;

									BgL_auxz00_10547 = (obj_t) (BgL_arg5101z00_2283);
									BgL_auxz00_10545 = (int) (((long) 1));
									STRUCT_SET(BgL_aux4283z00_2279, BgL_auxz00_10545,
										BgL_auxz00_10547);
							}}
							{	/* Cfa/cinfo.scm 103 */
								int BgL_auxz00_10550;

								BgL_auxz00_10550 = (int) (((long) 0));
								STRUCT_SET(BgL_res4282z00_2278, BgL_auxz00_10550,
									BgL_aux4283z00_2279);
							}
							{	/* Cfa/cinfo.scm 103 */
								obj_t BgL_auxz00_10553;

								BgL_auxz00_10553 = STRUCT_KEY(BgL_res4282z00_2278);
								STRUCT_KEY_SET(BgL_aux4283z00_2279, BgL_auxz00_10553);
							}
							{	/* Cfa/cinfo.scm 103 */
								obj_t BgL_kz00_4635;

								BgL_kz00_4635 = CNST_TABLE_REF(((long) 24));
								STRUCT_KEY_SET(BgL_res4282z00_2278, BgL_kz00_4635);
							}
							return BgL_res4282z00_2278;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4493 */
	obj_t BGl_structzb2objectzd2ze3objec4493z83zzcfa_infoz00(obj_t
		BgL_envz00_6096, obj_t BgL_oz00_6097, obj_t BgL_sz00_6098)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{
				BgL_boxzd2setz12zf2cinfoz32_bglt BgL_oz00_2263;

				obj_t BgL_sz00_2264;

				{	/* Cfa/cinfo.scm 106 */
					BgL_boxzd2setz12zf2cinfoz32_bglt BgL_auxz00_10559;

					BgL_oz00_2263 = (BgL_boxzd2setz12zf2cinfoz32_bglt) (BgL_oz00_6097);
					BgL_sz00_2264 = BgL_sz00_6098;
					{

						{	/* Cfa/cinfo.scm 106 */
							obj_t BgL_old4324z00_2267;

							obj_t BgL_aux4325z00_2268;

							{	/* Cfa/cinfo.scm 106 */
								obj_t BgL_nextzd2method4492zd2_2273;

								BgL_nextzd2method4492zd2_2273 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2263),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4492zd2_2273))
									{	/* Cfa/cinfo.scm 106 */
										BgL_old4324z00_2267 =
											PROCEDURE_ENTRY(BgL_nextzd2method4492zd2_2273)
											(BgL_nextzd2method4492zd2_2273, (obj_t) (BgL_oz00_2263),
											BgL_sz00_2264, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 106 */
										BgL_old4324z00_2267 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2263), BgL_sz00_2264));
									}
							}
							BgL_aux4325z00_2268 =
								STRUCT_REF(BgL_sz00_2264, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 106 */
								BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4326z00_2269;

								BgL_new4326z00_2269 =
									((BgL_boxzd2setz12zf2cinfoz32_bglt) (BgL_old4324z00_2267));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4326z00_2269),
									BGl_classzd2numzd2zz__objectz00
									(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 106 */
									BgL_boxzd2setz12zf2cinfoz32_bglt BgL_arg5095z00_2271;

									{	/* Cfa/cinfo.scm 106 */
										obj_t BgL_arg5096z00_2272;

										BgL_arg5096z00_2272 =
											STRUCT_REF(BgL_aux4325z00_2268, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 106 */
											BgL_boxzd2setz12zf2cinfoz32_bglt BgL_res5508z00_4614;

											{	/* Cfa/cinfo.scm 106 */
												BgL_approxz00_bglt BgL_approx4306z00_4608;

												BgL_approx4306z00_4608 =
													(BgL_approxz00_bglt) (BgL_arg5096z00_2272);
												{	/* Cfa/cinfo.scm 106 */
													BgL_boxzd2setz12zf2cinfoz32_bglt BgL_new4307z00_4609;

													BgL_new4307z00_4609 =
														((BgL_boxzd2setz12zf2cinfoz32_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_boxzd2setz12zf2cinfoz32_bgl))));
													{	/* Cfa/cinfo.scm 106 */
														BgL_boxzd2setz12zf2cinfoz32_bglt
															BgL_res5507z00_4613;
														{	/* Cfa/cinfo.scm 106 */
															BgL_boxzd2setz12zf2cinfoz32_bglt
																BgL_new4317z00_4610;
															BgL_new4317z00_4610 = BgL_new4307z00_4609;
															{	/* Cfa/cinfo.scm 106 */
																BgL_approxz00_bglt BgL_approx4316z00_4612;

																BgL_approx4316z00_4612 = BgL_approx4306z00_4608;
																((((BgL_boxzd2setz12zf2cinfoz32_bglt)
																			CREF(BgL_new4317z00_4610))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4316z00_4612),
																	BUNSPEC);
																BgL_res5507z00_4613 = BgL_new4317z00_4610;
														}} BgL_res5507z00_4613;
													}
													BgL_res5508z00_4614 = BgL_new4307z00_4609;
											}}
											BgL_arg5095z00_2271 = BgL_res5508z00_4614;
									}}
									{	/* Cfa/cinfo.scm 106 */
										obj_t BgL_auxz00_10583;

										BgL_objectz00_bglt BgL_auxz00_10581;

										BgL_auxz00_10583 = (obj_t) (BgL_arg5095z00_2271);
										BgL_auxz00_10581 =
											(BgL_objectz00_bglt) (BgL_new4326z00_2269);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10581, BgL_auxz00_10583);
								}}
								BgL_auxz00_10559 = BgL_new4326z00_2269;
					}}}
					return (obj_t) (BgL_auxz00_10559);
				}
			}
		}
	}



/* object->struct-box-s4491 */
	obj_t BGl_objectzd2ze3structzd2boxzd2s4491z31zzcfa_infoz00(obj_t
		BgL_envz00_6099, obj_t BgL_obj4321z00_6100)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 106 */
			{
				BgL_boxzd2setz12zf2cinfoz32_bglt BgL_obj4321z00_2253;

				BgL_obj4321z00_2253 =
					(BgL_boxzd2setz12zf2cinfoz32_bglt) (BgL_obj4321z00_6100);
				{

					{	/* Cfa/cinfo.scm 106 */
						obj_t BgL_res4322z00_2256;

						{	/* Cfa/cinfo.scm 106 */
							obj_t BgL_nextzd2method4490zd2_2261;

							BgL_nextzd2method4490zd2_2261 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4321z00_2253),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4490zd2_2261))
								{	/* Cfa/cinfo.scm 106 */
									BgL_res4322z00_2256 =
										PROCEDURE_ENTRY(BgL_nextzd2method4490zd2_2261)
										(BgL_nextzd2method4490zd2_2261,
										(obj_t) (BgL_obj4321z00_2253), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 106 */
									BgL_res4322z00_2256 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4321z00_2253));
								}
						}
						{	/* Cfa/cinfo.scm 106 */
							obj_t BgL_aux4323z00_2257;

							{	/* Cfa/cinfo.scm 106 */
								obj_t BgL_keyz00_4585;

								BgL_keyz00_4585 = CNST_TABLE_REF(((long) 25));
								BgL_aux4323z00_2257 =
									make_struct(BgL_keyz00_4585, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 106 */
								BgL_approxz00_bglt BgL_arg5091z00_2259;

								{
									obj_t BgL_auxz00_10600;

									{	/* Cfa/cinfo.scm 106 */
										BgL_objectz00_bglt BgL_auxz00_10601;

										BgL_auxz00_10601 =
											(BgL_objectz00_bglt) (BgL_obj4321z00_2253);
										BgL_auxz00_10600 = BGL_OBJECT_WIDENING(BgL_auxz00_10601);
									}
									BgL_arg5091z00_2259 =
										(((BgL_boxzd2setz12zf2cinfoz32_bglt)
											CREF(BgL_auxz00_10600))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 106 */
									obj_t BgL_auxz00_10607;

									int BgL_auxz00_10605;

									BgL_auxz00_10607 = (obj_t) (BgL_arg5091z00_2259);
									BgL_auxz00_10605 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4323z00_2257, BgL_auxz00_10605,
										BgL_auxz00_10607);
							}}
							{	/* Cfa/cinfo.scm 106 */
								int BgL_auxz00_10610;

								BgL_auxz00_10610 = (int) (((long) 0));
								STRUCT_SET(BgL_res4322z00_2256, BgL_auxz00_10610,
									BgL_aux4323z00_2257);
							}
							{	/* Cfa/cinfo.scm 106 */
								obj_t BgL_auxz00_10613;

								BgL_auxz00_10613 = STRUCT_KEY(BgL_res4322z00_2256);
								STRUCT_KEY_SET(BgL_aux4323z00_2257, BgL_auxz00_10613);
							}
							{	/* Cfa/cinfo.scm 106 */
								obj_t BgL_kz00_4600;

								BgL_kz00_4600 = CNST_TABLE_REF(((long) 25));
								STRUCT_KEY_SET(BgL_res4322z00_2256, BgL_kz00_4600);
							}
							return BgL_res4322z00_2256;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4488 */
	obj_t BGl_structzb2objectzd2ze3objec4488z83zzcfa_infoz00(obj_t
		BgL_envz00_6101, obj_t BgL_oz00_6102, obj_t BgL_sz00_6103)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{
				BgL_boxzd2refzf2cinfoz20_bglt BgL_oz00_2241;

				obj_t BgL_sz00_2242;

				{	/* Cfa/cinfo.scm 108 */
					BgL_boxzd2refzf2cinfoz20_bglt BgL_auxz00_10619;

					BgL_oz00_2241 = (BgL_boxzd2refzf2cinfoz20_bglt) (BgL_oz00_6102);
					BgL_sz00_2242 = BgL_sz00_6103;
					{

						{	/* Cfa/cinfo.scm 108 */
							obj_t BgL_old4359z00_2245;

							obj_t BgL_aux4360z00_2246;

							{	/* Cfa/cinfo.scm 108 */
								obj_t BgL_nextzd2method4487zd2_2251;

								BgL_nextzd2method4487zd2_2251 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2241),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4487zd2_2251))
									{	/* Cfa/cinfo.scm 108 */
										BgL_old4359z00_2245 =
											PROCEDURE_ENTRY(BgL_nextzd2method4487zd2_2251)
											(BgL_nextzd2method4487zd2_2251, (obj_t) (BgL_oz00_2241),
											BgL_sz00_2242, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 108 */
										BgL_old4359z00_2245 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2241), BgL_sz00_2242));
									}
							}
							BgL_aux4360z00_2246 =
								STRUCT_REF(BgL_sz00_2242, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 108 */
								BgL_boxzd2refzf2cinfoz20_bglt BgL_new4361z00_2247;

								BgL_new4361z00_2247 =
									((BgL_boxzd2refzf2cinfoz20_bglt) (BgL_old4359z00_2245));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4361z00_2247),
									BGl_classzd2numzd2zz__objectz00
									(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 108 */
									BgL_boxzd2refzf2cinfoz20_bglt BgL_arg5087z00_2249;

									{	/* Cfa/cinfo.scm 108 */
										obj_t BgL_arg5088z00_2250;

										BgL_arg5088z00_2250 =
											STRUCT_REF(BgL_aux4360z00_2246, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 108 */
											BgL_boxzd2refzf2cinfoz20_bglt BgL_res5505z00_4583;

											{	/* Cfa/cinfo.scm 108 */
												BgL_approxz00_bglt BgL_approx4340z00_4577;

												BgL_approx4340z00_4577 =
													(BgL_approxz00_bglt) (BgL_arg5088z00_2250);
												{	/* Cfa/cinfo.scm 108 */
													BgL_boxzd2refzf2cinfoz20_bglt BgL_new4341z00_4578;

													BgL_new4341z00_4578 =
														((BgL_boxzd2refzf2cinfoz20_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_boxzd2refzf2cinfoz20_bgl))));
													{	/* Cfa/cinfo.scm 108 */
														BgL_boxzd2refzf2cinfoz20_bglt BgL_res5504z00_4582;

														{	/* Cfa/cinfo.scm 108 */
															BgL_boxzd2refzf2cinfoz20_bglt BgL_new4352z00_4579;

															BgL_new4352z00_4579 = BgL_new4341z00_4578;
															{	/* Cfa/cinfo.scm 108 */
																BgL_approxz00_bglt BgL_approx4351z00_4581;

																BgL_approx4351z00_4581 = BgL_approx4340z00_4577;
																((((BgL_boxzd2refzf2cinfoz20_bglt)
																			CREF(BgL_new4352z00_4579))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4351z00_4581),
																	BUNSPEC);
																BgL_res5504z00_4582 = BgL_new4352z00_4579;
														}} BgL_res5504z00_4582;
													}
													BgL_res5505z00_4583 = BgL_new4341z00_4578;
											}}
											BgL_arg5087z00_2249 = BgL_res5505z00_4583;
									}}
									{	/* Cfa/cinfo.scm 108 */
										obj_t BgL_auxz00_10643;

										BgL_objectz00_bglt BgL_auxz00_10641;

										BgL_auxz00_10643 = (obj_t) (BgL_arg5087z00_2249);
										BgL_auxz00_10641 =
											(BgL_objectz00_bglt) (BgL_new4361z00_2247);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10641, BgL_auxz00_10643);
								}}
								BgL_auxz00_10619 = BgL_new4361z00_2247;
					}}}
					return (obj_t) (BgL_auxz00_10619);
				}
			}
		}
	}



/* object->struct-box-r4486 */
	obj_t BGl_objectzd2ze3structzd2boxzd2r4486z31zzcfa_infoz00(obj_t
		BgL_envz00_6104, obj_t BgL_obj4356z00_6105)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 108 */
			{
				BgL_boxzd2refzf2cinfoz20_bglt BgL_obj4356z00_2231;

				BgL_obj4356z00_2231 =
					(BgL_boxzd2refzf2cinfoz20_bglt) (BgL_obj4356z00_6105);
				{

					{	/* Cfa/cinfo.scm 108 */
						obj_t BgL_res4357z00_2234;

						{	/* Cfa/cinfo.scm 108 */
							obj_t BgL_nextzd2method4485zd2_2239;

							BgL_nextzd2method4485zd2_2239 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4356z00_2231),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4485zd2_2239))
								{	/* Cfa/cinfo.scm 108 */
									BgL_res4357z00_2234 =
										PROCEDURE_ENTRY(BgL_nextzd2method4485zd2_2239)
										(BgL_nextzd2method4485zd2_2239,
										(obj_t) (BgL_obj4356z00_2231), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 108 */
									BgL_res4357z00_2234 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4356z00_2231));
								}
						}
						{	/* Cfa/cinfo.scm 108 */
							obj_t BgL_aux4358z00_2235;

							{	/* Cfa/cinfo.scm 108 */
								obj_t BgL_keyz00_4554;

								BgL_keyz00_4554 = CNST_TABLE_REF(((long) 26));
								BgL_aux4358z00_2235 =
									make_struct(BgL_keyz00_4554, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 108 */
								BgL_approxz00_bglt BgL_arg5083z00_2237;

								{
									obj_t BgL_auxz00_10660;

									{	/* Cfa/cinfo.scm 108 */
										BgL_objectz00_bglt BgL_auxz00_10661;

										BgL_auxz00_10661 =
											(BgL_objectz00_bglt) (BgL_obj4356z00_2231);
										BgL_auxz00_10660 = BGL_OBJECT_WIDENING(BgL_auxz00_10661);
									}
									BgL_arg5083z00_2237 =
										(((BgL_boxzd2refzf2cinfoz20_bglt) CREF(BgL_auxz00_10660))->
										BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 108 */
									obj_t BgL_auxz00_10667;

									int BgL_auxz00_10665;

									BgL_auxz00_10667 = (obj_t) (BgL_arg5083z00_2237);
									BgL_auxz00_10665 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4358z00_2235, BgL_auxz00_10665,
										BgL_auxz00_10667);
							}}
							{	/* Cfa/cinfo.scm 108 */
								int BgL_auxz00_10670;

								BgL_auxz00_10670 = (int) (((long) 0));
								STRUCT_SET(BgL_res4357z00_2234, BgL_auxz00_10670,
									BgL_aux4358z00_2235);
							}
							{	/* Cfa/cinfo.scm 108 */
								obj_t BgL_auxz00_10673;

								BgL_auxz00_10673 = STRUCT_KEY(BgL_res4357z00_2234);
								STRUCT_KEY_SET(BgL_aux4358z00_2235, BgL_auxz00_10673);
							}
							{	/* Cfa/cinfo.scm 108 */
								obj_t BgL_kz00_4569;

								BgL_kz00_4569 = CNST_TABLE_REF(((long) 26));
								STRUCT_KEY_SET(BgL_res4357z00_2234, BgL_kz00_4569);
							}
							return BgL_res4357z00_2234;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4484 */
	obj_t BGl_structzb2objectzd2ze3objec4484z83zzcfa_infoz00(obj_t
		BgL_envz00_6106, obj_t BgL_oz00_6107, obj_t BgL_sz00_6108)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{
				BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_oz00_2219;

				obj_t BgL_sz00_2220;

				{	/* Cfa/cinfo.scm 110 */
					BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_auxz00_10679;

					BgL_oz00_2219 =
						(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) (BgL_oz00_6107);
					BgL_sz00_2220 = BgL_sz00_6108;
					{

						{	/* Cfa/cinfo.scm 110 */
							obj_t BgL_old4395z00_2223;

							obj_t BgL_aux4396z00_2224;

							{	/* Cfa/cinfo.scm 110 */
								obj_t BgL_nextzd2method4483zd2_2229;

								BgL_nextzd2method4483zd2_2229 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2219),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4483zd2_2229))
									{	/* Cfa/cinfo.scm 110 */
										BgL_old4395z00_2223 =
											PROCEDURE_ENTRY(BgL_nextzd2method4483zd2_2229)
											(BgL_nextzd2method4483zd2_2229, (obj_t) (BgL_oz00_2219),
											BgL_sz00_2220, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 110 */
										BgL_old4395z00_2223 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2219), BgL_sz00_2220));
									}
							}
							BgL_aux4396z00_2224 =
								STRUCT_REF(BgL_sz00_2220, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 110 */
								BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_new4397z00_2225;

								BgL_new4397z00_2225 =
									((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
									(BgL_old4395z00_2223));
								BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
									(BgL_new4397z00_2225),
									BGl_classzd2numzd2zz__objectz00
									(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 110 */
									BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_arg5079z00_2227;

									{	/* Cfa/cinfo.scm 110 */
										obj_t BgL_arg5080z00_2228;

										BgL_arg5080z00_2228 =
											STRUCT_REF(BgL_aux4396z00_2224, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 110 */
											BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_res5502z00_4552;

											{	/* Cfa/cinfo.scm 110 */
												BgL_approxz00_bglt BgL_approx4377z00_4546;

												BgL_approx4377z00_4546 =
													(BgL_approxz00_bglt) (BgL_arg5080z00_2228);
												{	/* Cfa/cinfo.scm 110 */
													BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
														BgL_new4378z00_4547;
													BgL_new4378z00_4547 =
														((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_boxzd2setz12zf2ozd2cinfoze0_bgl))));
													{	/* Cfa/cinfo.scm 110 */
														BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
															BgL_res5501z00_4551;
														{	/* Cfa/cinfo.scm 110 */
															BgL_boxzd2setz12zf2ozd2cinfoze0_bglt
																BgL_new4388z00_4548;
															BgL_new4388z00_4548 = BgL_new4378z00_4547;
															{	/* Cfa/cinfo.scm 110 */
																BgL_approxz00_bglt BgL_approx4387z00_4550;

																BgL_approx4387z00_4550 = BgL_approx4377z00_4546;
																((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
																			CREF(BgL_new4388z00_4548))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4387z00_4550),
																	BUNSPEC);
																BgL_res5501z00_4551 = BgL_new4388z00_4548;
														}} BgL_res5501z00_4551;
													}
													BgL_res5502z00_4552 = BgL_new4378z00_4547;
											}}
											BgL_arg5079z00_2227 = BgL_res5502z00_4552;
									}}
									{	/* Cfa/cinfo.scm 110 */
										obj_t BgL_auxz00_10703;

										BgL_objectz00_bglt BgL_auxz00_10701;

										BgL_auxz00_10703 = (obj_t) (BgL_arg5079z00_2227);
										BgL_auxz00_10701 =
											(BgL_objectz00_bglt) (BgL_new4397z00_2225);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10701, BgL_auxz00_10703);
								}}
								BgL_auxz00_10679 = BgL_new4397z00_2225;
					}}}
					return (obj_t) (BgL_auxz00_10679);
				}
			}
		}
	}



/* object->struct-box-s4482 */
	obj_t BGl_objectzd2ze3structzd2boxzd2s4482z31zzcfa_infoz00(obj_t
		BgL_envz00_6109, obj_t BgL_obj4392z00_6110)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 110 */
			{
				BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_obj4392z00_2209;

				BgL_obj4392z00_2209 =
					(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) (BgL_obj4392z00_6110);
				{

					{	/* Cfa/cinfo.scm 110 */
						obj_t BgL_res4393z00_2212;

						{	/* Cfa/cinfo.scm 110 */
							obj_t BgL_nextzd2method4481zd2_2217;

							BgL_nextzd2method4481zd2_2217 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4392z00_2209),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4481zd2_2217))
								{	/* Cfa/cinfo.scm 110 */
									BgL_res4393z00_2212 =
										PROCEDURE_ENTRY(BgL_nextzd2method4481zd2_2217)
										(BgL_nextzd2method4481zd2_2217,
										(obj_t) (BgL_obj4392z00_2209), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 110 */
									BgL_res4393z00_2212 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4392z00_2209));
								}
						}
						{	/* Cfa/cinfo.scm 110 */
							obj_t BgL_aux4394z00_2213;

							{	/* Cfa/cinfo.scm 110 */
								obj_t BgL_keyz00_4523;

								BgL_keyz00_4523 = CNST_TABLE_REF(((long) 27));
								BgL_aux4394z00_2213 =
									make_struct(BgL_keyz00_4523, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 110 */
								BgL_approxz00_bglt BgL_arg5075z00_2215;

								{
									obj_t BgL_auxz00_10720;

									{	/* Cfa/cinfo.scm 110 */
										BgL_objectz00_bglt BgL_auxz00_10721;

										BgL_auxz00_10721 =
											(BgL_objectz00_bglt) (BgL_obj4392z00_2209);
										BgL_auxz00_10720 = BGL_OBJECT_WIDENING(BgL_auxz00_10721);
									}
									BgL_arg5075z00_2215 =
										(((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
											CREF(BgL_auxz00_10720))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 110 */
									obj_t BgL_auxz00_10727;

									int BgL_auxz00_10725;

									BgL_auxz00_10727 = (obj_t) (BgL_arg5075z00_2215);
									BgL_auxz00_10725 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4394z00_2213, BgL_auxz00_10725,
										BgL_auxz00_10727);
							}}
							{	/* Cfa/cinfo.scm 110 */
								int BgL_auxz00_10730;

								BgL_auxz00_10730 = (int) (((long) 0));
								STRUCT_SET(BgL_res4393z00_2212, BgL_auxz00_10730,
									BgL_aux4394z00_2213);
							}
							{	/* Cfa/cinfo.scm 110 */
								obj_t BgL_auxz00_10733;

								BgL_auxz00_10733 = STRUCT_KEY(BgL_res4393z00_2212);
								STRUCT_KEY_SET(BgL_aux4394z00_2213, BgL_auxz00_10733);
							}
							{	/* Cfa/cinfo.scm 110 */
								obj_t BgL_kz00_4538;

								BgL_kz00_4538 = CNST_TABLE_REF(((long) 27));
								STRUCT_KEY_SET(BgL_res4393z00_2212, BgL_kz00_4538);
							}
							return BgL_res4393z00_2212;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4480 */
	obj_t BGl_structzb2objectzd2ze3objec4480z83zzcfa_infoz00(obj_t
		BgL_envz00_6111, obj_t BgL_oz00_6112, obj_t BgL_sz00_6113)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{
				BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_oz00_2197;

				obj_t BgL_sz00_2198;

				{	/* Cfa/cinfo.scm 112 */
					BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_auxz00_10739;

					BgL_oz00_2197 = (BgL_boxzd2refzf2ozd2cinfozf2_bglt) (BgL_oz00_6112);
					BgL_sz00_2198 = BgL_sz00_6113;
					{

						{	/* Cfa/cinfo.scm 112 */
							obj_t BgL_old4429z00_2201;

							obj_t BgL_aux4430z00_2202;

							{	/* Cfa/cinfo.scm 112 */
								obj_t BgL_nextzd2method4479zd2_2207;

								BgL_nextzd2method4479zd2_2207 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2197),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4479zd2_2207))
									{	/* Cfa/cinfo.scm 112 */
										BgL_old4429z00_2201 =
											PROCEDURE_ENTRY(BgL_nextzd2method4479zd2_2207)
											(BgL_nextzd2method4479zd2_2207, (obj_t) (BgL_oz00_2197),
											BgL_sz00_2198, BEOA);
									}
								else
									{	/* Cfa/cinfo.scm 112 */
										BgL_old4429z00_2201 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2197), BgL_sz00_2198));
									}
							}
							BgL_aux4430z00_2202 =
								STRUCT_REF(BgL_sz00_2198, (int) (((long) 0)));
							{	/* Cfa/cinfo.scm 112 */
								BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4431z00_2203;

								BgL_new4431z00_2203 =
									((BgL_boxzd2refzf2ozd2cinfozf2_bglt) (BgL_old4429z00_2201));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4431z00_2203),
									BGl_classzd2numzd2zz__objectz00
									(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00));
								{	/* Cfa/cinfo.scm 112 */
									BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_arg5071z00_2205;

									{	/* Cfa/cinfo.scm 112 */
										obj_t BgL_arg5072z00_2206;

										BgL_arg5072z00_2206 =
											STRUCT_REF(BgL_aux4430z00_2202, (int) (((long) 0)));
										{	/* Cfa/cinfo.scm 112 */
											BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_res5499z00_4521;

											{	/* Cfa/cinfo.scm 112 */
												BgL_approxz00_bglt BgL_approx4410z00_4515;

												BgL_approx4410z00_4515 =
													(BgL_approxz00_bglt) (BgL_arg5072z00_2206);
												{	/* Cfa/cinfo.scm 112 */
													BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_new4411z00_4516;

													BgL_new4411z00_4516 =
														((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_boxzd2refzf2ozd2cinfozf2_bgl))));
													{	/* Cfa/cinfo.scm 112 */
														BgL_boxzd2refzf2ozd2cinfozf2_bglt
															BgL_res5498z00_4520;
														{	/* Cfa/cinfo.scm 112 */
															BgL_boxzd2refzf2ozd2cinfozf2_bglt
																BgL_new4422z00_4517;
															BgL_new4422z00_4517 = BgL_new4411z00_4516;
															{	/* Cfa/cinfo.scm 112 */
																BgL_approxz00_bglt BgL_approx4421z00_4519;

																BgL_approx4421z00_4519 = BgL_approx4410z00_4515;
																((((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
																			CREF(BgL_new4422z00_4517))->
																		BgL_approxz00) =
																	((BgL_approxz00_bglt) BgL_approx4421z00_4519),
																	BUNSPEC);
																BgL_res5498z00_4520 = BgL_new4422z00_4517;
														}} BgL_res5498z00_4520;
													}
													BgL_res5499z00_4521 = BgL_new4411z00_4516;
											}}
											BgL_arg5071z00_2205 = BgL_res5499z00_4521;
									}}
									{	/* Cfa/cinfo.scm 112 */
										obj_t BgL_auxz00_10763;

										BgL_objectz00_bglt BgL_auxz00_10761;

										BgL_auxz00_10763 = (obj_t) (BgL_arg5071z00_2205);
										BgL_auxz00_10761 =
											(BgL_objectz00_bglt) (BgL_new4431z00_2203);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_10761, BgL_auxz00_10763);
								}}
								BgL_auxz00_10739 = BgL_new4431z00_2203;
					}}}
					return (obj_t) (BgL_auxz00_10739);
				}
			}
		}
	}



/* object->struct-box-r4478 */
	obj_t BGl_objectzd2ze3structzd2boxzd2r4478z31zzcfa_infoz00(obj_t
		BgL_envz00_6114, obj_t BgL_obj4426z00_6115)
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 112 */
			{
				BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_obj4426z00_2187;

				BgL_obj4426z00_2187 =
					(BgL_boxzd2refzf2ozd2cinfozf2_bglt) (BgL_obj4426z00_6115);
				{

					{	/* Cfa/cinfo.scm 112 */
						obj_t BgL_res4427z00_2190;

						{	/* Cfa/cinfo.scm 112 */
							obj_t BgL_nextzd2method4477zd2_2195;

							BgL_nextzd2method4477zd2_2195 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4426z00_2187),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00);
							if (PROCEDUREP(BgL_nextzd2method4477zd2_2195))
								{	/* Cfa/cinfo.scm 112 */
									BgL_res4427z00_2190 =
										PROCEDURE_ENTRY(BgL_nextzd2method4477zd2_2195)
										(BgL_nextzd2method4477zd2_2195,
										(obj_t) (BgL_obj4426z00_2187), BEOA);
								}
							else
								{	/* Cfa/cinfo.scm 112 */
									BgL_res4427z00_2190 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4426z00_2187));
								}
						}
						{	/* Cfa/cinfo.scm 112 */
							obj_t BgL_aux4428z00_2191;

							{	/* Cfa/cinfo.scm 112 */
								obj_t BgL_keyz00_4492;

								BgL_keyz00_4492 = CNST_TABLE_REF(((long) 28));
								BgL_aux4428z00_2191 =
									make_struct(BgL_keyz00_4492, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/cinfo.scm 112 */
								BgL_approxz00_bglt BgL_arg5067z00_2193;

								{
									obj_t BgL_auxz00_10780;

									{	/* Cfa/cinfo.scm 112 */
										BgL_objectz00_bglt BgL_auxz00_10781;

										BgL_auxz00_10781 =
											(BgL_objectz00_bglt) (BgL_obj4426z00_2187);
										BgL_auxz00_10780 = BGL_OBJECT_WIDENING(BgL_auxz00_10781);
									}
									BgL_arg5067z00_2193 =
										(((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
											CREF(BgL_auxz00_10780))->BgL_approxz00);
								}
								{	/* Cfa/cinfo.scm 112 */
									obj_t BgL_auxz00_10787;

									int BgL_auxz00_10785;

									BgL_auxz00_10787 = (obj_t) (BgL_arg5067z00_2193);
									BgL_auxz00_10785 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4428z00_2191, BgL_auxz00_10785,
										BgL_auxz00_10787);
							}}
							{	/* Cfa/cinfo.scm 112 */
								int BgL_auxz00_10790;

								BgL_auxz00_10790 = (int) (((long) 0));
								STRUCT_SET(BgL_res4427z00_2190, BgL_auxz00_10790,
									BgL_aux4428z00_2191);
							}
							{	/* Cfa/cinfo.scm 112 */
								obj_t BgL_auxz00_10793;

								BgL_auxz00_10793 = STRUCT_KEY(BgL_res4427z00_2190);
								STRUCT_KEY_SET(BgL_aux4428z00_2191, BgL_auxz00_10793);
							}
							{	/* Cfa/cinfo.scm 112 */
								obj_t BgL_kz00_4507;

								BgL_kz00_4507 = CNST_TABLE_REF(((long) 28));
								STRUCT_KEY_SET(BgL_res4427z00_2190, BgL_kz00_4507);
							}
							return BgL_res4427z00_2190;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_infoz00()
	{
		AN_OBJECT;
		{	/* Cfa/cinfo.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5639z00zzcfa_infoz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5639z00zzcfa_infoz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5639z00zzcfa_infoz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5639z00zzcfa_infoz00));
		}
	}

#ifdef __cplusplus
}
#endif
