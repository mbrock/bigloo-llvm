/*===========================================================================*/
/*   (Cfa/setup.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/setup.scm)*/
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

	typedef struct BgL_kwotezf2nodezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                      *BgL_kwotezf2nodezf2_bglt;

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

	typedef struct BgL_setzd2exzd2itzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_setzd2exzd2itzf2cinfozf2_bglt;

	typedef struct BgL_jumpzd2exzd2itzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                *BgL_jumpzd2exzd2itzf2cinfozf2_bglt;

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;

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


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_funzd2setupz12zd2sfun5332z12zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nodezd2setupz12zd2fail5358z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00(obj_t);
	extern obj_t
		BGl_wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2setupz12zd2funcall5338z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_setqzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl__nodezd2setupza2z12z62zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_funzd2setupz12zd2cfun5334z12zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2setupz12zd2pragma5340z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	static obj_t BGl__variablezd2valuezd2setup5307z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_funzd2setupz12zc0zzcfa_setupz00(BgL_funz00_bglt, obj_t);
	extern obj_t BGl_failzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_nodezd2setupz12zd2select5360z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t
		BGl_wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_nodezd2setupz12zd2setzd2exzd2i5366z12zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2setupz12zd2sequence5326z12zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_setupz00();
	extern obj_t
		BGl_wideningzd2pragmazf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl__setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_prezd2clozd2envz00zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_newzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_selectz00zzast_nodez00;
	extern obj_t BGl_reshapedzd2globalzd2zzcfa_infoz00;
	static obj_t BGl_nodezd2setupz12zd2new5346z12zzcfa_setupz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_nodezd2setupz12zd2conditio5356z12zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_setupz00();
	extern obj_t BGl_pragmazf2Cinfozf2zzcfa_info3z00;
	extern obj_t
		BGl_wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t
		BGl_wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	extern obj_t BGl_wideningzd2setqzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern obj_t BGl_setfieldzf2Cinfozf2zzcfa_info3z00;
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	extern obj_t
		BGl_wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_wideningzd2failzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_nodezd2setupz12zd2jumpzd2exzd25368z12zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_wideningzd2cvarzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__funzd2setupz12zd2default5329z12zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_funzd2setupz12zd2default5329z12zzcfa_setupz00(BgL_funz00_bglt, obj_t);
	extern obj_t
		BGl_wideningzd2selectzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_cvarz00zzast_varz00;
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl__variablezd2valuezd2setupz12z12zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2setupz12zd2atom5300z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00;
	extern obj_t
		BGl_wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_getfieldzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_nodezd2setupz12zd2kwote5302z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__nodezd2setupz12zc0zzcfa_setupz00(obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl__funzd2setupz12zc0zzcfa_setupz00(obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2setupz12zd2getfield5342z12zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_selectzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_setupz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static bool_t BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_typez00_bglt);
	extern obj_t
		BGl_wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00(BgL_approxz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_nodezd2setupz12zd2letzd2fun5362zc0zzcfa_setupz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_setupz00 = BUNSPEC;
	static obj_t BGl_nodezd2setupz12zd2closure5324z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_scnstz00zzast_varz00;
	extern obj_t BGl_wideningzd2cfunzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_nodezd2setupz12zd2app5328z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzcfa_setupz00();
	extern obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_nodezd2setupz12zd2letzd2var5364zc0zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_wideningzd2isazf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_funcallzf2Cinfozf2zzcfa_infoz00;
	static obj_t
		BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2setupz12zd2setfield5344z12zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	extern obj_t BGl_atomzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_setupz00();
	static obj_t BGl_nodezd2setupz12zd2cast5352z12zzcfa_setupz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	static obj_t BGl_nodezd2setupz12zd2castzd2nul5350zc0zzcfa_setupz00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_isaz00zzast_nodez00;
	extern obj_t
		BGl_wideningzd2funcallzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, bool_t, bool_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	static obj_t
		BGl_variablezd2valuezd2setup5307z00zzcfa_setupz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_wideningzd2sexitzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_variablezd2valuezd2setup5310z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_variablezd2valuezd2setup5312z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_variablezd2valuezd2setup5314z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_variablezd2valuezd2setup5316z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_variablezd2valuezd2setup5318z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_variablezd2valuezd2setup5320z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_variablezd2valuezd2setup5322z00zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t
		BGl_wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt,
		long);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_nodezd2setupz12zd2setq5354z12zzcfa_setupz00(obj_t, obj_t);
	static obj_t BGl_nodezd2setupz12zd2var5306z12zzcfa_setupz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_wideningzd2atomzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_newz00zzast_nodez00;
	static obj_t BGl_nodezd2setupz12zd2appzd2ly5336zc0zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00;
	static obj_t BGl__nodezd2setupz12zd2default5297z12zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_wideningzd2newzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern obj_t BGl_isazf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_conditionalzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
	extern obj_t BGl_wideningzd2svarzf2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt,
		bool_t);
	static obj_t
		BGl_nodezd2setupz12zd2default5297z12zzcfa_setupz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2setupz12zd2isa5348z12zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setupz00();
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_nodezd2setupz12zd2kwotezf2no5304ze0zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2setupza2z12zd2envzb0zzcfa_setupz00,
		BgL_bgl__nodeza7d2setupza7a25872z00,
		BGl__nodezd2setupza2z12z62zzcfa_setupz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_variablezd2valuezd2setup5307zd2envzd2zzcfa_setupz00,
		BgL_bgl__variableza7d2valu5873za7,
		BGl__variablezd2valuezd2setup5307z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
		BgL_bgl__variableza7d2valu5874za7,
		BGl__variablezd2valuezd2setupz12z12zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
		BgL_bgl__nodeza7d2setupza7125875z00, BGl__nodezd2setupz12zc0zzcfa_setupz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2setupz12zd2default5297zd2envzc0zzcfa_setupz00,
		BgL_bgl__nodeza7d2setupza7125876z00,
		BGl__nodezd2setupz12zd2default5297z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
		BgL_bgl__funza7d2setupza712za75877za7, BGl__funzd2setupz12zc0zzcfa_setupz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5833z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75878za7,
		BGl_nodezd2setupz12zd2atom5300z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5834z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75879za7,
		BGl_nodezd2setupz12zd2kwote5302z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5835z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75880za7,
		BGl_nodezd2setupz12zd2kwotezf2no5304ze0zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5836z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75881za7,
		BGl_nodezd2setupz12zd2var5306z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5837z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5882za7,
		BGl_variablezd2valuezd2setup5310z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5838z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5883za7,
		BGl_variablezd2valuezd2setup5312z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5840z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5884za7,
		BGl_variablezd2valuezd2setup5316z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5839z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5885za7,
		BGl_variablezd2valuezd2setup5314z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5841z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5886za7,
		BGl_variablezd2valuezd2setup5318z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5842z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5887za7,
		BGl_variablezd2valuezd2setup5320z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5843z00zzcfa_setupz00,
		BgL_bgl_variableza7d2value5888za7,
		BGl_variablezd2valuezd2setup5322z00zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5844z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75889za7,
		BGl_nodezd2setupz12zd2closure5324z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5845z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75890za7,
		BGl_nodezd2setupz12zd2sequence5326z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5846z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75891za7,
		BGl_nodezd2setupz12zd2app5328z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5847z00zzcfa_setupz00,
		BgL_bgl_funza7d2setupza712za7d5892za7,
		BGl_funzd2setupz12zd2sfun5332z12zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5848z00zzcfa_setupz00,
		BgL_bgl_funza7d2setupza712za7d5893za7,
		BGl_funzd2setupz12zd2cfun5334z12zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5850z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75894za7,
		BGl_nodezd2setupz12zd2funcall5338z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5849z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75895za7,
		BGl_nodezd2setupz12zd2appzd2ly5336zc0zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5851z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75896za7,
		BGl_nodezd2setupz12zd2pragma5340z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5852z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75897za7,
		BGl_nodezd2setupz12zd2getfield5342z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5853z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75898za7,
		BGl_nodezd2setupz12zd2setfield5344z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5854z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75899za7,
		BGl_nodezd2setupz12zd2new5346z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5855z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75900za7,
		BGl_nodezd2setupz12zd2isa5348z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5856z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75901za7,
		BGl_nodezd2setupz12zd2castzd2nul5350zc0zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5857z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75902za7,
		BGl_nodezd2setupz12zd2cast5352z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5858z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75903za7,
		BGl_nodezd2setupz12zd2setq5354z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5860z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75904za7,
		BGl_nodezd2setupz12zd2fail5358z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5859z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75905za7,
		BGl_nodezd2setupz12zd2conditio5356z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5861z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75906za7,
		BGl_nodezd2setupz12zd2select5360z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5862z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75907za7,
		BGl_nodezd2setupz12zd2letzd2fun5362zc0zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5863z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75908za7,
		BGl_nodezd2setupz12zd2letzd2var5364zc0zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5864z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75909za7,
		BGl_nodezd2setupz12zd2setzd2exzd2i5366z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5865z00zzcfa_setupz00,
		BgL_bgl_nodeza7d2setupza712za75910za7,
		BGl_nodezd2setupz12zd2jumpzd2exzd25368z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2initialzd2approxz12zd2envzc0zzcfa_setupz00,
		BgL_bgl__setza7d2initialza7d5911z00,
		BGl__setzd2initialzd2approxz12z12zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5830z00zzcfa_setupz00,
		BgL_bgl_string5830za700za7za7c5912za7, "variable-value-setup!", 21);
	      DEFINE_STRING(BGl_string5829z00zzcfa_setupz00,
		BgL_bgl_string5829za700za7za7c5913za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string5831z00zzcfa_setupz00,
		BgL_bgl_string5831za700za7za7c5914za7, "fun-setup!", 10);
	      DEFINE_STRING(BGl_string5832z00zzcfa_setupz00,
		BgL_bgl_string5832za700za7za7c5915za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5866z00zzcfa_setupz00,
		BgL_bgl_string5866za700za7za7c5916za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string5867z00zzcfa_setupz00,
		BgL_bgl_string5867za700za7za7c5917za7, "cfa_setup", 9);
	      DEFINE_STRING(BGl_string5868z00zzcfa_setupz00,
		BgL_bgl_string5868za700za7za7c5918za7,
		"static already-done (sfun sgfun) import read variable-value-setup5307 node-setup!-default5297 ",
		94);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_funzd2setupz12zd2default5329zd2envzc0zzcfa_setupz00,
		BgL_bgl__funza7d2setupza712za75919za7,
		BGl__funzd2setupz12zd2default5329z12zzcfa_setupz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long
		BgL_checksumz00_3591, char *BgL_fromz00_3592)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_setupz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_setupz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_setupz00();
					BGl_cnstzd2initzd2zzcfa_setupz00();
					BGl_importedzd2moduleszd2initz00zzcfa_setupz00();
					BGl_genericzd2initzd2zzcfa_setupz00();
					BGl_methodzd2initzd2zzcfa_setupz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setupz00()
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_setup");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_setupz00()
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			{	/* Cfa/setup.scm 15 */
				obj_t BgL_cportz00_3576;

				BgL_cportz00_3576 =
					bgl_open_input_string(BGl_string5868z00zzcfa_setupz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3577;

					BgL_iz00_3577 = ((long) 6);
				BgL_loopz00_3578:
					if ((BgL_iz00_3577 == ((long) -1)))
						{	/* Cfa/setup.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/setup.scm 15 */
							{	/* Cfa/setup.scm 15 */
								obj_t BgL_arg5870z00_3580;

								{	/* Cfa/setup.scm 15 */

									{	/* Cfa/setup.scm 15 */
										obj_t BgL_locationz00_3582;

										BgL_locationz00_3582 = BBOOL(((bool_t) 0));
										{	/* Cfa/setup.scm 15 */

											BgL_arg5870z00_3580 =
												BGl_readz00zz__readerz00(BgL_cportz00_3576,
												BgL_locationz00_3582);
										}
									}
								}
								{	/* Cfa/setup.scm 15 */
									int BgL_auxz00_3612;

									BgL_auxz00_3612 = (int) (BgL_iz00_3577);
									CNST_TABLE_SET(BgL_auxz00_3612, BgL_arg5870z00_3580);
							}}
							{	/* Cfa/setup.scm 15 */
								int BgL_auxz00_3583;

								BgL_auxz00_3583 = (int) ((BgL_iz00_3577 - ((long) 1)));
								{
									long BgL_iz00_3617;

									BgL_iz00_3617 = (long) (BgL_auxz00_3583);
									BgL_iz00_3577 = BgL_iz00_3617;
									goto BgL_loopz00_3578;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_setupz00()
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			return BUNSPEC;
		}
	}



/* set-initial-approx! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 36 */
			{
				obj_t BgL_l5281z00_1188;

				{	/* Cfa/setup.scm 37 */
					bool_t BgL_auxz00_3619;

					BgL_l5281z00_1188 = BgL_globalsz00_1;
				BgL_zc3anonymousza35369ze3z83_1189:
					if (PAIRP(BgL_l5281z00_1188))
						{	/* Cfa/setup.scm 37 */
							{	/* Cfa/setup.scm 47 */
								obj_t BgL_globalz00_1191;

								BgL_globalz00_1191 = CAR(BgL_l5281z00_1188);
								{	/* Cfa/setup.scm 40 */
									BgL_valuez00_bglt BgL_funz00_1192;

									{
										BgL_variablez00_bglt BgL_auxz00_3623;

										BgL_auxz00_3623 =
											(BgL_variablez00_bglt) (BgL_globalz00_1191);
										BgL_funz00_1192 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3623))->
											BgL_valuez00);
									}
									{	/* Cfa/setup.scm 41 */
										BgL_funz00_bglt BgL_funz00_2294;

										BgL_funz00_2294 = (BgL_funz00_bglt) (BgL_funz00_1192);
										{	/* Cfa/setup.scm 41 */
											obj_t BgL_method5330z00_2296;

											{	/* Cfa/setup.scm 41 */
												BgL_objectz00_bglt BgL_objz00_2297;

												BgL_objz00_2297 =
													(BgL_objectz00_bglt) (BgL_funz00_2294);
												{	/* Cfa/setup.scm 41 */
													long BgL_objzd2classzd2numz00_2298;

													BgL_objzd2classzd2numz00_2298 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2297);
													{	/* Cfa/setup.scm 41 */
														obj_t BgL_arg2643z00_2299;

														BgL_arg2643z00_2299 =
															PROCEDURE_REF
															(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
															(int) (((long) 1)));
														{	/* Cfa/setup.scm 41 */
															obj_t BgL_arrayz00_2301;

															int BgL_offsetz00_2302;

															BgL_arrayz00_2301 = BgL_arg2643z00_2299;
															BgL_offsetz00_2302 =
																(int) (BgL_objzd2classzd2numz00_2298);
															{	/* Cfa/setup.scm 41 */
																long BgL_offsetz00_2303;

																BgL_offsetz00_2303 =
																	((long) (BgL_offsetz00_2302) - OBJECT_TYPE);
																{	/* Cfa/setup.scm 41 */
																	long BgL_modz00_2304;

																	{	/* Cfa/setup.scm 41 */
																		int BgL_arg2645z00_2305;

																		BgL_arg2645z00_2305 = (int) (((long) 16));
																		{	/* Cfa/setup.scm 41 */
																			long BgL_auxz00_3635;

																			BgL_auxz00_3635 =
																				(long) (BgL_arg2645z00_2305);
																			BgL_modz00_2304 =
																				(BgL_offsetz00_2303 / BgL_auxz00_3635);
																	}}
																	{	/* Cfa/setup.scm 41 */
																		long BgL_restz00_2306;

																		{	/* Cfa/setup.scm 41 */
																			int BgL_arg2644z00_2307;

																			BgL_arg2644z00_2307 = (int) (((long) 16));
																			{	/* Cfa/setup.scm 41 */
																				long BgL_auxz00_3639;

																				BgL_auxz00_3639 =
																					(long) (BgL_arg2644z00_2307);
																				BgL_restz00_2306 =
																					(BgL_offsetz00_2303 %
																					BgL_auxz00_3639);
																		}}
																		{	/* Cfa/setup.scm 41 */

																			BgL_method5330z00_2296 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2301,
																					(int) (BgL_modz00_2304)),
																				(int) (BgL_restz00_2306));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method5330z00_2296)
												(BgL_method5330z00_2296, (obj_t) (BgL_funz00_2294),
												BgL_globalz00_1191, BEOA);
									}}
									{	/* Cfa/setup.scm 42 */
										obj_t BgL_g5280z00_1193;

										{
											BgL_sfunz00_bglt BgL_auxz00_3649;

											BgL_auxz00_3649 = (BgL_sfunz00_bglt) (BgL_funz00_1192);
											BgL_g5280z00_1193 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3649))->
												BgL_argsz00);
										}
										{
											obj_t BgL_l5278z00_1195;

											BgL_l5278z00_1195 = BgL_g5280z00_1193;
										BgL_zc3anonymousza35371ze3z83_1196:
											if (PAIRP(BgL_l5278z00_1195))
												{	/* Cfa/setup.scm 46 */
													{	/* Cfa/setup.scm 45 */
														obj_t BgL_localz00_1198;

														BgL_localz00_1198 = CAR(BgL_l5278z00_1195);
														{	/* Cfa/setup.scm 43 */
															BgL_localz00_bglt BgL_obj5196z00_1199;

															BgL_obj5196z00_1199 =
																((BgL_localz00_bglt)
																(BgL_localz00_bglt) (BgL_localz00_1198));
															{	/* Cfa/setup.scm 43 */
																obj_t BgL_auxz00_3659;

																BgL_objectz00_bglt BgL_auxz00_3657;

																BgL_auxz00_3659 =
																	BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00
																	(BFALSE);
																BgL_auxz00_3657 =
																	(BgL_objectz00_bglt) (BgL_obj5196z00_1199);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_3657,
																	BgL_auxz00_3659);
															}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj5196z00_1199),
																BGl_classzd2numzd2zz__objectz00
																(BGl_reshapedzd2localzd2zzcfa_infoz00));
															BgL_obj5196z00_1199;
														}
														{	/* Cfa/setup.scm 44 */
															BgL_valuez00_bglt BgL_arg5375z00_1202;

															{
																BgL_variablez00_bglt BgL_auxz00_3665;

																BgL_auxz00_3665 =
																	(BgL_variablez00_bglt) (BgL_localz00_1198);
																BgL_arg5375z00_1202 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3665))->BgL_valuez00);
															}
															{	/* Cfa/setup.scm 44 */
																BgL_variablez00_bglt BgL_variablez00_2328;

																BgL_variablez00_2328 =
																	(BgL_variablez00_bglt) (BgL_localz00_1198);
																{	/* Cfa/setup.scm 44 */
																	obj_t BgL_method5308z00_2329;

																	{	/* Cfa/setup.scm 44 */
																		BgL_objectz00_bglt BgL_objz00_2330;

																		BgL_objz00_2330 =
																			(BgL_objectz00_bglt)
																			(BgL_arg5375z00_1202);
																		{	/* Cfa/setup.scm 44 */
																			long BgL_objzd2classzd2numz00_2331;

																			BgL_objzd2classzd2numz00_2331 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2330);
																			{	/* Cfa/setup.scm 44 */
																				obj_t BgL_arg2643z00_2332;

																				BgL_arg2643z00_2332 =
																					PROCEDURE_REF
																					(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
																					(int) (((long) 1)));
																				{	/* Cfa/setup.scm 44 */
																					obj_t BgL_arrayz00_2334;

																					int BgL_offsetz00_2335;

																					BgL_arrayz00_2334 =
																						BgL_arg2643z00_2332;
																					BgL_offsetz00_2335 =
																						(int)
																						(BgL_objzd2classzd2numz00_2331);
																					{	/* Cfa/setup.scm 44 */
																						long BgL_offsetz00_2336;

																						BgL_offsetz00_2336 =
																							(
																							(long) (BgL_offsetz00_2335) -
																							OBJECT_TYPE);
																						{	/* Cfa/setup.scm 44 */
																							long BgL_modz00_2337;

																							{	/* Cfa/setup.scm 44 */
																								int BgL_arg2645z00_2338;

																								BgL_arg2645z00_2338 =
																									(int) (((long) 16));
																								{	/* Cfa/setup.scm 44 */
																									long BgL_auxz00_3677;

																									BgL_auxz00_3677 =
																										(long)
																										(BgL_arg2645z00_2338);
																									BgL_modz00_2337 =
																										(BgL_offsetz00_2336 /
																										BgL_auxz00_3677);
																							}}
																							{	/* Cfa/setup.scm 44 */
																								long BgL_restz00_2339;

																								{	/* Cfa/setup.scm 44 */
																									int BgL_arg2644z00_2340;

																									BgL_arg2644z00_2340 =
																										(int) (((long) 16));
																									{	/* Cfa/setup.scm 44 */
																										long BgL_auxz00_3681;

																										BgL_auxz00_3681 =
																											(long)
																											(BgL_arg2644z00_2340);
																										BgL_restz00_2339 =
																											(BgL_offsetz00_2336 %
																											BgL_auxz00_3681);
																								}}
																								{	/* Cfa/setup.scm 44 */

																									BgL_method5308z00_2329 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2334,
																											(int) (BgL_modz00_2337)),
																										(int) (BgL_restz00_2339));
																	}}}}}}}}
																	PROCEDURE_ENTRY(BgL_method5308z00_2329)
																		(BgL_method5308z00_2329,
																		(obj_t) (BgL_arg5375z00_1202),
																		(obj_t) (BgL_variablez00_2328), BEOA);
													}}}}
													{
														obj_t BgL_l5278z00_3692;

														BgL_l5278z00_3692 = CDR(BgL_l5278z00_1195);
														BgL_l5278z00_1195 = BgL_l5278z00_3692;
														goto BgL_zc3anonymousza35371ze3z83_1196;
													}
												}
											else
												{	/* Cfa/setup.scm 46 */
													((bool_t) 1);
												}
										}
									}
								}
								{	/* Cfa/setup.scm 47 */
									obj_t BgL_arg5377z00_1205;

									{	/* Cfa/setup.scm 47 */
										BgL_sfunz00_bglt BgL_obj1907z00_2356;

										{	/* Cfa/setup.scm 47 */
											BgL_variablez00_bglt BgL_obj1631z00_2355;

											BgL_obj1631z00_2355 =
												(BgL_variablez00_bglt) (BgL_globalz00_1191);
											BgL_obj1907z00_2356 =
												(BgL_sfunz00_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_obj1631z00_2355))->
													BgL_valuez00));
										}
										BgL_arg5377z00_1205 =
											(((BgL_sfunz00_bglt) CREF(BgL_obj1907z00_2356))->
											BgL_bodyz00);
									}
									{	/* Cfa/setup.scm 47 */
										BgL_nodez00_bglt BgL_nodez00_2357;

										BgL_nodez00_2357 = (BgL_nodez00_bglt) (BgL_arg5377z00_1205);
										{	/* Cfa/setup.scm 47 */
											obj_t BgL_method5298z00_2358;

											{	/* Cfa/setup.scm 47 */
												BgL_objectz00_bglt BgL_objz00_2359;

												BgL_objz00_2359 =
													(BgL_objectz00_bglt) (BgL_nodez00_2357);
												{	/* Cfa/setup.scm 47 */
													long BgL_objzd2classzd2numz00_2360;

													BgL_objzd2classzd2numz00_2360 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2359);
													{	/* Cfa/setup.scm 47 */
														obj_t BgL_arg2643z00_2361;

														BgL_arg2643z00_2361 =
															PROCEDURE_REF
															(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
															(int) (((long) 1)));
														{	/* Cfa/setup.scm 47 */
															obj_t BgL_arrayz00_2363;

															int BgL_offsetz00_2364;

															BgL_arrayz00_2363 = BgL_arg2643z00_2361;
															BgL_offsetz00_2364 =
																(int) (BgL_objzd2classzd2numz00_2360);
															{	/* Cfa/setup.scm 47 */
																long BgL_offsetz00_2365;

																BgL_offsetz00_2365 =
																	((long) (BgL_offsetz00_2364) - OBJECT_TYPE);
																{	/* Cfa/setup.scm 47 */
																	long BgL_modz00_2366;

																	{	/* Cfa/setup.scm 47 */
																		int BgL_arg2645z00_2367;

																		BgL_arg2645z00_2367 = (int) (((long) 16));
																		{	/* Cfa/setup.scm 47 */
																			long BgL_auxz00_3707;

																			BgL_auxz00_3707 =
																				(long) (BgL_arg2645z00_2367);
																			BgL_modz00_2366 =
																				(BgL_offsetz00_2365 / BgL_auxz00_3707);
																	}}
																	{	/* Cfa/setup.scm 47 */
																		long BgL_restz00_2368;

																		{	/* Cfa/setup.scm 47 */
																			int BgL_arg2644z00_2369;

																			BgL_arg2644z00_2369 = (int) (((long) 16));
																			{	/* Cfa/setup.scm 47 */
																				long BgL_auxz00_3711;

																				BgL_auxz00_3711 =
																					(long) (BgL_arg2644z00_2369);
																				BgL_restz00_2368 =
																					(BgL_offsetz00_2365 %
																					BgL_auxz00_3711);
																		}}
																		{	/* Cfa/setup.scm 47 */

																			BgL_method5298z00_2358 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2363,
																					(int) (BgL_modz00_2366)),
																				(int) (BgL_restz00_2368));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method5298z00_2358)
												(BgL_method5298z00_2358, (obj_t) (BgL_nodez00_2357),
												BEOA);
							}}}}
							{
								obj_t BgL_l5281z00_3721;

								BgL_l5281z00_3721 = CDR(BgL_l5281z00_1188);
								BgL_l5281z00_1188 = BgL_l5281z00_3721;
								goto BgL_zc3anonymousza35369ze3z83_1189;
							}
						}
					else
						{	/* Cfa/setup.scm 37 */
							BgL_auxz00_3619 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3619);
				}
			}
		}
	}



/* _set-initial-approx! */
	obj_t BGl__setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t BgL_envz00_3448,
		obj_t BgL_globalsz00_3449)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 36 */
			return
				BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(BgL_globalsz00_3449);
		}
	}



/* alloc-type? */
	bool_t BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_typez00_bglt BgL_typez00_8)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 97 */
			if (((obj_t) (BgL_typez00_8) == BGl_za2vectorza2z00zztype_cachez00))
				{	/* Cfa/setup.scm 99 */
					return ((bool_t) 1);
				}
			else
				{	/* Cfa/setup.scm 99 */
					if (
						((obj_t) (BgL_typez00_8) == BGl_za2procedureza2z00zztype_cachez00))
						{	/* Cfa/setup.scm 101 */
							return ((bool_t) 1);
						}
					else
						{	/* Cfa/setup.scm 101 */
							if (
								((obj_t) (BgL_typez00_8) == BGl_za2structza2z00zztype_cachez00))
								{	/* Cfa/setup.scm 103 */
									return ((bool_t) 1);
								}
							else
								{	/* Cfa/setup.scm 103 */
									return ((bool_t) 0);
								}
						}
				}
		}
	}



/* node-setup*! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t
		BgL_nodeza2za2_55)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 443 */
			{
				obj_t BgL_l5295z00_1213;

				{	/* Cfa/setup.scm 444 */
					bool_t BgL_auxz00_3734;

					BgL_l5295z00_1213 = BgL_nodeza2za2_55;
				BgL_zc3anonymousza35383ze3z83_1214:
					if (PAIRP(BgL_l5295z00_1213))
						{	/* Cfa/setup.scm 444 */
							{	/* Cfa/setup.scm 444 */
								obj_t BgL_arg5385z00_1216;

								BgL_arg5385z00_1216 = CAR(BgL_l5295z00_1213);
								{	/* Cfa/setup.scm 444 */
									BgL_nodez00_bglt BgL_nodez00_2386;

									BgL_nodez00_2386 = (BgL_nodez00_bglt) (BgL_arg5385z00_1216);
									{	/* Cfa/setup.scm 444 */
										obj_t BgL_method5298z00_2387;

										{	/* Cfa/setup.scm 444 */
											BgL_objectz00_bglt BgL_objz00_2388;

											BgL_objz00_2388 = (BgL_objectz00_bglt) (BgL_nodez00_2386);
											{	/* Cfa/setup.scm 444 */
												long BgL_objzd2classzd2numz00_2389;

												BgL_objzd2classzd2numz00_2389 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2388);
												{	/* Cfa/setup.scm 444 */
													obj_t BgL_arg2643z00_2390;

													BgL_arg2643z00_2390 =
														PROCEDURE_REF
														(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
														(int) (((long) 1)));
													{	/* Cfa/setup.scm 444 */
														obj_t BgL_arrayz00_2392;

														int BgL_offsetz00_2393;

														BgL_arrayz00_2392 = BgL_arg2643z00_2390;
														BgL_offsetz00_2393 =
															(int) (BgL_objzd2classzd2numz00_2389);
														{	/* Cfa/setup.scm 444 */
															long BgL_offsetz00_2394;

															BgL_offsetz00_2394 =
																((long) (BgL_offsetz00_2393) - OBJECT_TYPE);
															{	/* Cfa/setup.scm 444 */
																long BgL_modz00_2395;

																{	/* Cfa/setup.scm 444 */
																	int BgL_arg2645z00_2396;

																	BgL_arg2645z00_2396 = (int) (((long) 16));
																	{	/* Cfa/setup.scm 444 */
																		long BgL_auxz00_3747;

																		BgL_auxz00_3747 =
																			(long) (BgL_arg2645z00_2396);
																		BgL_modz00_2395 =
																			(BgL_offsetz00_2394 / BgL_auxz00_3747);
																}}
																{	/* Cfa/setup.scm 444 */
																	long BgL_restz00_2397;

																	{	/* Cfa/setup.scm 444 */
																		int BgL_arg2644z00_2398;

																		BgL_arg2644z00_2398 = (int) (((long) 16));
																		{	/* Cfa/setup.scm 444 */
																			long BgL_auxz00_3751;

																			BgL_auxz00_3751 =
																				(long) (BgL_arg2644z00_2398);
																			BgL_restz00_2397 =
																				(BgL_offsetz00_2394 % BgL_auxz00_3751);
																	}}
																	{	/* Cfa/setup.scm 444 */

																		BgL_method5298z00_2387 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2392,
																				(int) (BgL_modz00_2395)),
																			(int) (BgL_restz00_2397));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2387)
											(BgL_method5298z00_2387, (obj_t) (BgL_nodez00_2386),
											BEOA);
							}}}
							{
								obj_t BgL_l5295z00_3761;

								BgL_l5295z00_3761 = CDR(BgL_l5295z00_1213);
								BgL_l5295z00_1213 = BgL_l5295z00_3761;
								goto BgL_zc3anonymousza35383ze3z83_1214;
							}
						}
					else
						{	/* Cfa/setup.scm 444 */
							BgL_auxz00_3734 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3734);
				}
			}
		}
	}



/* _node-setup*! */
	obj_t BGl__nodezd2setupza2z12z62zzcfa_setupz00(obj_t BgL_envz00_3458,
		obj_t BgL_nodeza2za2_3459)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 443 */
			return BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_nodeza2za2_3459);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_setupz00()
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_nodezd2setupz12zd2default5297zd2envzc0zzcfa_setupz00,
				BGl_nodez00zzast_nodez00, BGl_string5829z00zzcfa_setupz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_variablezd2valuezd2setup5307zd2envzd2zzcfa_setupz00,
				BGl_valuez00zzast_varz00, BGl_string5830z00zzcfa_setupz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
				BGl_funzd2setupz12zd2default5329zd2envzc0zzcfa_setupz00,
				BGl_funz00zzast_varz00, BGl_string5831z00zzcfa_setupz00);
		}
	}



/* node-setup! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 53 */
			{	/* Cfa/setup.scm 53 */
				obj_t BgL_method5298z00_2413;

				{	/* Cfa/setup.scm 53 */
					BgL_objectz00_bglt BgL_objz00_2414;

					BgL_objz00_2414 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Cfa/setup.scm 53 */
						long BgL_objzd2classzd2numz00_2415;

						BgL_objzd2classzd2numz00_2415 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2414);
						{	/* Cfa/setup.scm 53 */
							obj_t BgL_arg2643z00_2416;

							BgL_arg2643z00_2416 =
								PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
								(int) (((long) 1)));
							{	/* Cfa/setup.scm 53 */
								obj_t BgL_arrayz00_2418;

								int BgL_offsetz00_2419;

								BgL_arrayz00_2418 = BgL_arg2643z00_2416;
								BgL_offsetz00_2419 = (int) (BgL_objzd2classzd2numz00_2415);
								{	/* Cfa/setup.scm 53 */
									long BgL_offsetz00_2420;

									BgL_offsetz00_2420 =
										((long) (BgL_offsetz00_2419) - OBJECT_TYPE);
									{	/* Cfa/setup.scm 53 */
										long BgL_modz00_2421;

										{	/* Cfa/setup.scm 53 */
											int BgL_arg2645z00_2422;

											BgL_arg2645z00_2422 = (int) (((long) 16));
											{	/* Cfa/setup.scm 53 */
												long BgL_auxz00_3776;

												BgL_auxz00_3776 = (long) (BgL_arg2645z00_2422);
												BgL_modz00_2421 =
													(BgL_offsetz00_2420 / BgL_auxz00_3776);
										}}
										{	/* Cfa/setup.scm 53 */
											long BgL_restz00_2423;

											{	/* Cfa/setup.scm 53 */
												int BgL_arg2644z00_2424;

												BgL_arg2644z00_2424 = (int) (((long) 16));
												{	/* Cfa/setup.scm 53 */
													long BgL_auxz00_3780;

													BgL_auxz00_3780 = (long) (BgL_arg2644z00_2424);
													BgL_restz00_2423 =
														(BgL_offsetz00_2420 % BgL_auxz00_3780);
											}}
											{	/* Cfa/setup.scm 53 */

												BgL_method5298z00_2413 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2418,
														(int) (BgL_modz00_2421)), (int) (BgL_restz00_2423));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5298z00_2413) (BgL_method5298z00_2413,
					(obj_t) (BgL_nodez00_2), BEOA);
			}
		}
	}



/* _node-setup! */
	obj_t BGl__nodezd2setupz12zc0zzcfa_setupz00(obj_t BgL_envz00_3456,
		obj_t BgL_nodez00_3457)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 53 */
			return
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3457));
		}
	}



/* node-setup!-default5297 */
	obj_t BGl_nodezd2setupz12zd2default5297z12zzcfa_setupz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string5832z00zzcfa_setupz00, (obj_t) (BgL_nodez00_3));
		}
	}



/* _node-setup!-default5297 */
	obj_t BGl__nodezd2setupz12zd2default5297z12zzcfa_setupz00(obj_t
		BgL_envz00_3460, obj_t BgL_nodez00_3461)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			return
				BGl_nodezd2setupz12zd2default5297z12zzcfa_setupz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3461));
		}
	}



/* variable-value-setup! */
	obj_t BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(BgL_valuez00_bglt
		BgL_valuez00_9, BgL_variablez00_bglt BgL_variablez00_10)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 111 */
			{	/* Cfa/setup.scm 111 */
				obj_t BgL_method5308z00_2438;

				{	/* Cfa/setup.scm 111 */
					BgL_objectz00_bglt BgL_objz00_2439;

					BgL_objz00_2439 = (BgL_objectz00_bglt) (BgL_valuez00_9);
					{	/* Cfa/setup.scm 111 */
						long BgL_objzd2classzd2numz00_2440;

						BgL_objzd2classzd2numz00_2440 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2439);
						{	/* Cfa/setup.scm 111 */
							obj_t BgL_arg2643z00_2441;

							BgL_arg2643z00_2441 =
								PROCEDURE_REF
								(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
								(int) (((long) 1)));
							{	/* Cfa/setup.scm 111 */
								obj_t BgL_arrayz00_2443;

								int BgL_offsetz00_2444;

								BgL_arrayz00_2443 = BgL_arg2643z00_2441;
								BgL_offsetz00_2444 = (int) (BgL_objzd2classzd2numz00_2440);
								{	/* Cfa/setup.scm 111 */
									long BgL_offsetz00_2445;

									BgL_offsetz00_2445 =
										((long) (BgL_offsetz00_2444) - OBJECT_TYPE);
									{	/* Cfa/setup.scm 111 */
										long BgL_modz00_2446;

										{	/* Cfa/setup.scm 111 */
											int BgL_arg2645z00_2447;

											BgL_arg2645z00_2447 = (int) (((long) 16));
											{	/* Cfa/setup.scm 111 */
												long BgL_auxz00_3805;

												BgL_auxz00_3805 = (long) (BgL_arg2645z00_2447);
												BgL_modz00_2446 =
													(BgL_offsetz00_2445 / BgL_auxz00_3805);
										}}
										{	/* Cfa/setup.scm 111 */
											long BgL_restz00_2448;

											{	/* Cfa/setup.scm 111 */
												int BgL_arg2644z00_2449;

												BgL_arg2644z00_2449 = (int) (((long) 16));
												{	/* Cfa/setup.scm 111 */
													long BgL_auxz00_3809;

													BgL_auxz00_3809 = (long) (BgL_arg2644z00_2449);
													BgL_restz00_2448 =
														(BgL_offsetz00_2445 % BgL_auxz00_3809);
											}}
											{	/* Cfa/setup.scm 111 */

												BgL_method5308z00_2438 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2443,
														(int) (BgL_modz00_2446)), (int) (BgL_restz00_2448));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5308z00_2438) (BgL_method5308z00_2438,
					(obj_t) (BgL_valuez00_9), (obj_t) (BgL_variablez00_10), BEOA);
			}
		}
	}



/* _variable-value-setup! */
	obj_t BGl__variablezd2valuezd2setupz12z12zzcfa_setupz00(obj_t BgL_envz00_3453,
		obj_t BgL_valuez00_3454, obj_t BgL_variablez00_3455)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 111 */
			return
				BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(
				(BgL_valuez00_bglt) (BgL_valuez00_3454),
				(BgL_variablez00_bglt) (BgL_variablez00_3455));
		}
	}



/* variable-value-setup5307 */
	obj_t BGl_variablezd2valuezd2setup5307z00zzcfa_setupz00(BgL_valuez00_bglt
		BgL_valuez00_11, BgL_variablez00_bglt BgL_variablez00_12)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string5832z00zzcfa_setupz00, (obj_t) (BgL_valuez00_11));
		}
	}



/* _variable-value-setup5307 */
	obj_t BGl__variablezd2valuezd2setup5307z00zzcfa_setupz00(obj_t
		BgL_envz00_3462, obj_t BgL_valuez00_3463, obj_t BgL_variablez00_3464)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			return
				BGl_variablezd2valuezd2setup5307z00zzcfa_setupz00(
				(BgL_valuez00_bglt) (BgL_valuez00_3463),
				(BgL_variablez00_bglt) (BgL_variablez00_3464));
		}
	}



/* fun-setup! */
	obj_t BGl_funzd2setupz12zc0zzcfa_setupz00(BgL_funz00_bglt BgL_funz00_30,
		obj_t BgL_varz00_31)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 212 */
			{	/* Cfa/setup.scm 212 */
				obj_t BgL_method5330z00_2463;

				{	/* Cfa/setup.scm 212 */
					BgL_objectz00_bglt BgL_objz00_2464;

					BgL_objz00_2464 = (BgL_objectz00_bglt) (BgL_funz00_30);
					{	/* Cfa/setup.scm 212 */
						long BgL_objzd2classzd2numz00_2465;

						BgL_objzd2classzd2numz00_2465 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2464);
						{	/* Cfa/setup.scm 212 */
							obj_t BgL_arg2643z00_2466;

							BgL_arg2643z00_2466 =
								PROCEDURE_REF(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
								(int) (((long) 1)));
							{	/* Cfa/setup.scm 212 */
								obj_t BgL_arrayz00_2468;

								int BgL_offsetz00_2469;

								BgL_arrayz00_2468 = BgL_arg2643z00_2466;
								BgL_offsetz00_2469 = (int) (BgL_objzd2classzd2numz00_2465);
								{	/* Cfa/setup.scm 212 */
									long BgL_offsetz00_2470;

									BgL_offsetz00_2470 =
										((long) (BgL_offsetz00_2469) - OBJECT_TYPE);
									{	/* Cfa/setup.scm 212 */
										long BgL_modz00_2471;

										{	/* Cfa/setup.scm 212 */
											int BgL_arg2645z00_2472;

											BgL_arg2645z00_2472 = (int) (((long) 16));
											{	/* Cfa/setup.scm 212 */
												long BgL_auxz00_3837;

												BgL_auxz00_3837 = (long) (BgL_arg2645z00_2472);
												BgL_modz00_2471 =
													(BgL_offsetz00_2470 / BgL_auxz00_3837);
										}}
										{	/* Cfa/setup.scm 212 */
											long BgL_restz00_2473;

											{	/* Cfa/setup.scm 212 */
												int BgL_arg2644z00_2474;

												BgL_arg2644z00_2474 = (int) (((long) 16));
												{	/* Cfa/setup.scm 212 */
													long BgL_auxz00_3841;

													BgL_auxz00_3841 = (long) (BgL_arg2644z00_2474);
													BgL_restz00_2473 =
														(BgL_offsetz00_2470 % BgL_auxz00_3841);
											}}
											{	/* Cfa/setup.scm 212 */

												BgL_method5330z00_2463 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2468,
														(int) (BgL_modz00_2471)), (int) (BgL_restz00_2473));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5330z00_2463) (BgL_method5330z00_2463,
					(obj_t) (BgL_funz00_30), BgL_varz00_31, BEOA);
			}
		}
	}



/* _fun-setup! */
	obj_t BGl__funzd2setupz12zc0zzcfa_setupz00(obj_t BgL_envz00_3450,
		obj_t BgL_funz00_3451, obj_t BgL_varz00_3452)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 212 */
			return
				BGl_funzd2setupz12zc0zzcfa_setupz00(
				(BgL_funz00_bglt) (BgL_funz00_3451), BgL_varz00_3452);
		}
	}



/* fun-setup!-default5329 */
	obj_t BGl_funzd2setupz12zd2default5329z12zzcfa_setupz00(BgL_funz00_bglt
		BgL_funz00_32, obj_t BgL_varz00_33)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			{	/* Cfa/setup.scm 213 */
				bool_t BgL_testz00_3853;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_33,
						BGl_globalz00zzast_varz00))
					{	/* Cfa/setup.scm 213 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_33,
								BGl_reshapedzd2globalzd2zzcfa_infoz00))
							{	/* Cfa/setup.scm 213 */
								BgL_testz00_3853 = ((bool_t) 0);
							}
						else
							{	/* Cfa/setup.scm 213 */
								BgL_testz00_3853 = ((bool_t) 1);
							}
					}
				else
					{	/* Cfa/setup.scm 213 */
						BgL_testz00_3853 = ((bool_t) 0);
					}
				if (BgL_testz00_3853)
					{	/* Cfa/setup.scm 214 */
						BgL_globalz00_bglt BgL_obj5220z00_1803;

						BgL_obj5220z00_1803 =
							((BgL_globalz00_bglt) (BgL_globalz00_bglt) (BgL_varz00_33));
						{	/* Cfa/setup.scm 214 */
							obj_t BgL_auxz00_3862;

							BgL_objectz00_bglt BgL_auxz00_3860;

							BgL_auxz00_3862 =
								BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
							BgL_auxz00_3860 = (BgL_objectz00_bglt) (BgL_obj5220z00_1803);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3860, BgL_auxz00_3862);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5220z00_1803),
							BGl_classzd2numzd2zz__objectz00
							(BGl_reshapedzd2globalzd2zzcfa_infoz00));
						(obj_t) (BgL_obj5220z00_1803);
					}
				else
					{	/* Cfa/setup.scm 213 */
						BFALSE;
					}
			}
			return BUNSPEC;
		}
	}



/* _fun-setup!-default5329 */
	obj_t BGl__funzd2setupz12zd2default5329z12zzcfa_setupz00(obj_t
		BgL_envz00_3465, obj_t BgL_funz00_3466, obj_t BgL_varz00_3467)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			return
				BGl_funzd2setupz12zd2default5329z12zzcfa_setupz00(
				(BgL_funz00_bglt) (BgL_funz00_3466), BgL_varz00_3467);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_setupz00()
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_atomz00zzast_nodez00,
				BGl_proc5833z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_kwotez00zzast_nodez00,
				BGl_proc5834z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_kwotezf2nodezf2zzcfa_infoz00, BGl_proc5835z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_varz00zzast_nodez00,
				BGl_proc5836z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_sfunz00zzast_varz00, BGl_proc5837z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_svarz00zzast_varz00, BGl_proc5838z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_prezd2clozd2envz00zzcfa_infoz00, BGl_proc5839z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_sexitz00zzast_varz00, BGl_proc5840z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc5841z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_scnstz00zzast_varz00, BGl_proc5842z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_cvarz00zzast_varz00, BGl_proc5843z00zzcfa_setupz00,
				BGl_string5830z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_closurez00zzast_nodez00, BGl_proc5844z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_sequencez00zzast_nodez00, BGl_proc5845z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_appz00zzast_nodez00,
				BGl_proc5846z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_funzd2setupz12zd2envz12zzcfa_setupz00, BGl_sfunz00zzast_varz00,
				BGl_proc5847z00zzcfa_setupz00, BGl_string5831z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_funzd2setupz12zd2envz12zzcfa_setupz00, BGl_cfunz00zzast_varz00,
				BGl_proc5848z00zzcfa_setupz00, BGl_string5831z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc5849z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_funcallz00zzast_nodez00, BGl_proc5850z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc5851z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_getfieldz00zzast_nodez00, BGl_proc5852z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_setfieldz00zzast_nodez00, BGl_proc5853z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_newz00zzast_nodez00,
				BGl_proc5854z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_isaz00zzast_nodez00,
				BGl_proc5855z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc5856z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_castz00zzast_nodez00,
				BGl_proc5857z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_setqz00zzast_nodez00,
				BGl_proc5858z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5859z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_failz00zzast_nodez00,
				BGl_proc5860z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_selectz00zzast_nodez00,
				BGl_proc5861z00zzcfa_setupz00, BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5862z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5863z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5864z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5865z00zzcfa_setupz00,
				BGl_string5829z00zzcfa_setupz00);
		}
	}



/* node-setup!-jump-ex-5368 */
	obj_t BGl_nodezd2setupz12zd2jumpzd2exzd25368z12zzcfa_setupz00(obj_t
		BgL_envz00_3501, obj_t BgL_nodez00_3502)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 432 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2278;

				BgL_nodez00_2278 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3502);
				{	/* Cfa/setup.scm 434 */
					BgL_nodez00_bglt BgL_arg5750z00_2282;

					BgL_arg5750z00_2282 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2278))->
						BgL_exitz00);
					{	/* Cfa/setup.scm 434 */
						obj_t BgL_method5298z00_3393;

						{	/* Cfa/setup.scm 434 */
							BgL_objectz00_bglt BgL_objz00_3394;

							BgL_objz00_3394 = (BgL_objectz00_bglt) (BgL_arg5750z00_2282);
							{	/* Cfa/setup.scm 434 */
								long BgL_objzd2classzd2numz00_3395;

								BgL_objzd2classzd2numz00_3395 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3394);
								{	/* Cfa/setup.scm 434 */
									obj_t BgL_arg2643z00_3396;

									BgL_arg2643z00_3396 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 434 */
										obj_t BgL_arrayz00_3398;

										int BgL_offsetz00_3399;

										BgL_arrayz00_3398 = BgL_arg2643z00_3396;
										BgL_offsetz00_3399 = (int) (BgL_objzd2classzd2numz00_3395);
										{	/* Cfa/setup.scm 434 */
											long BgL_offsetz00_3400;

											BgL_offsetz00_3400 =
												((long) (BgL_offsetz00_3399) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 434 */
												long BgL_modz00_3401;

												{	/* Cfa/setup.scm 434 */
													int BgL_arg2645z00_3402;

													BgL_arg2645z00_3402 = (int) (((long) 16));
													{	/* Cfa/setup.scm 434 */
														long BgL_auxz00_3913;

														BgL_auxz00_3913 = (long) (BgL_arg2645z00_3402);
														BgL_modz00_3401 =
															(BgL_offsetz00_3400 / BgL_auxz00_3913);
												}}
												{	/* Cfa/setup.scm 434 */
													long BgL_restz00_3403;

													{	/* Cfa/setup.scm 434 */
														int BgL_arg2644z00_3404;

														BgL_arg2644z00_3404 = (int) (((long) 16));
														{	/* Cfa/setup.scm 434 */
															long BgL_auxz00_3917;

															BgL_auxz00_3917 = (long) (BgL_arg2644z00_3404);
															BgL_restz00_3403 =
																(BgL_offsetz00_3400 % BgL_auxz00_3917);
													}}
													{	/* Cfa/setup.scm 434 */

														BgL_method5298z00_3393 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3398,
																(int) (BgL_modz00_3401)),
															(int) (BgL_restz00_3403));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_3393) (BgL_method5298z00_3393,
							(obj_t) (BgL_arg5750z00_2282), BEOA);
				}}
				{	/* Cfa/setup.scm 435 */
					BgL_nodez00_bglt BgL_arg5751z00_2283;

					BgL_arg5751z00_2283 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2278))->
						BgL_valuez00);
					{	/* Cfa/setup.scm 435 */
						obj_t BgL_method5298z00_3420;

						{	/* Cfa/setup.scm 435 */
							BgL_objectz00_bglt BgL_objz00_3421;

							BgL_objz00_3421 = (BgL_objectz00_bglt) (BgL_arg5751z00_2283);
							{	/* Cfa/setup.scm 435 */
								long BgL_objzd2classzd2numz00_3422;

								BgL_objzd2classzd2numz00_3422 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3421);
								{	/* Cfa/setup.scm 435 */
									obj_t BgL_arg2643z00_3423;

									BgL_arg2643z00_3423 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 435 */
										obj_t BgL_arrayz00_3425;

										int BgL_offsetz00_3426;

										BgL_arrayz00_3425 = BgL_arg2643z00_3423;
										BgL_offsetz00_3426 = (int) (BgL_objzd2classzd2numz00_3422);
										{	/* Cfa/setup.scm 435 */
											long BgL_offsetz00_3427;

											BgL_offsetz00_3427 =
												((long) (BgL_offsetz00_3426) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 435 */
												long BgL_modz00_3428;

												{	/* Cfa/setup.scm 435 */
													int BgL_arg2645z00_3429;

													BgL_arg2645z00_3429 = (int) (((long) 16));
													{	/* Cfa/setup.scm 435 */
														long BgL_auxz00_3936;

														BgL_auxz00_3936 = (long) (BgL_arg2645z00_3429);
														BgL_modz00_3428 =
															(BgL_offsetz00_3427 / BgL_auxz00_3936);
												}}
												{	/* Cfa/setup.scm 435 */
													long BgL_restz00_3430;

													{	/* Cfa/setup.scm 435 */
														int BgL_arg2644z00_3431;

														BgL_arg2644z00_3431 = (int) (((long) 16));
														{	/* Cfa/setup.scm 435 */
															long BgL_auxz00_3940;

															BgL_auxz00_3940 = (long) (BgL_arg2644z00_3431);
															BgL_restz00_3430 =
																(BgL_offsetz00_3427 % BgL_auxz00_3940);
													}}
													{	/* Cfa/setup.scm 435 */

														BgL_method5298z00_3420 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3425,
																(int) (BgL_modz00_3428)),
															(int) (BgL_restz00_3430));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_3420) (BgL_method5298z00_3420,
							(obj_t) (BgL_arg5751z00_2283), BEOA);
				}}
				{	/* Cfa/setup.scm 436 */
					BgL_jumpzd2exzd2itz00_bglt BgL_obj5277z00_2284;

					BgL_obj5277z00_2284 = ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2278);
					{	/* Cfa/setup.scm 436 */
						obj_t BgL_auxz00_3953;

						BgL_objectz00_bglt BgL_auxz00_3951;

						BgL_auxz00_3953 =
							BGl_wideningzd2jumpzd2exzd2itzf2Cinfoz20zzcfa_infoz00
							(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
								(BGl_za2objza2z00zztype_cachez00)));
						BgL_auxz00_3951 = (BgL_objectz00_bglt) (BgL_obj5277z00_2284);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3951, BgL_auxz00_3953);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5277z00_2284),
						BGl_classzd2numzd2zz__objectz00
						(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
					BgL_obj5277z00_2284;
				}
				{	/* Cfa/setup.scm 438 */
					BgL_approxz00_bglt BgL_arg5755z00_2288;

					{	/* Cfa/setup.scm 438 */
						BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_obj3945z00_3447;

						BgL_obj3945z00_3447 =
							(BgL_jumpzd2exzd2itzf2cinfozf2_bglt) (BgL_nodez00_2278);
						{
							obj_t BgL_auxz00_3962;

							{	/* Cfa/setup.scm 438 */
								BgL_objectz00_bglt BgL_auxz00_3963;

								BgL_auxz00_3963 = (BgL_objectz00_bglt) (BgL_obj3945z00_3447);
								BgL_auxz00_3962 = BGL_OBJECT_WIDENING(BgL_auxz00_3963);
							}
							BgL_arg5755z00_2288 =
								(((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) CREF(BgL_auxz00_3962))->
								BgL_approxz00);
					}}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5755z00_2288);
				}
			}
		}
	}



/* node-setup!-set-ex-i5366 */
	obj_t BGl_nodezd2setupz12zd2setzd2exzd2i5366z12zzcfa_setupz00(obj_t
		BgL_envz00_3503, obj_t BgL_nodez00_3504)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 420 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2261;

				BgL_nodez00_2261 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3504);
				{	/* Cfa/setup.scm 422 */
					BgL_nodez00_bglt BgL_arg5740z00_2265;

					BgL_arg5740z00_2265 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2261))->BgL_bodyz00);
					{	/* Cfa/setup.scm 422 */
						obj_t BgL_method5298z00_3332;

						{	/* Cfa/setup.scm 422 */
							BgL_objectz00_bglt BgL_objz00_3333;

							BgL_objz00_3333 = (BgL_objectz00_bglt) (BgL_arg5740z00_2265);
							{	/* Cfa/setup.scm 422 */
								long BgL_objzd2classzd2numz00_3334;

								BgL_objzd2classzd2numz00_3334 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3333);
								{	/* Cfa/setup.scm 422 */
									obj_t BgL_arg2643z00_3335;

									BgL_arg2643z00_3335 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 422 */
										obj_t BgL_arrayz00_3337;

										int BgL_offsetz00_3338;

										BgL_arrayz00_3337 = BgL_arg2643z00_3335;
										BgL_offsetz00_3338 = (int) (BgL_objzd2classzd2numz00_3334);
										{	/* Cfa/setup.scm 422 */
											long BgL_offsetz00_3339;

											BgL_offsetz00_3339 =
												((long) (BgL_offsetz00_3338) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 422 */
												long BgL_modz00_3340;

												{	/* Cfa/setup.scm 422 */
													int BgL_arg2645z00_3341;

													BgL_arg2645z00_3341 = (int) (((long) 16));
													{	/* Cfa/setup.scm 422 */
														long BgL_auxz00_3978;

														BgL_auxz00_3978 = (long) (BgL_arg2645z00_3341);
														BgL_modz00_3340 =
															(BgL_offsetz00_3339 / BgL_auxz00_3978);
												}}
												{	/* Cfa/setup.scm 422 */
													long BgL_restz00_3342;

													{	/* Cfa/setup.scm 422 */
														int BgL_arg2644z00_3343;

														BgL_arg2644z00_3343 = (int) (((long) 16));
														{	/* Cfa/setup.scm 422 */
															long BgL_auxz00_3982;

															BgL_auxz00_3982 = (long) (BgL_arg2644z00_3343);
															BgL_restz00_3342 =
																(BgL_offsetz00_3339 % BgL_auxz00_3982);
													}}
													{	/* Cfa/setup.scm 422 */

														BgL_method5298z00_3332 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3337,
																(int) (BgL_modz00_3340)),
															(int) (BgL_restz00_3342));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_3332) (BgL_method5298z00_3332,
							(obj_t) (BgL_arg5740z00_2265), BEOA);
				}}
				{	/* Cfa/setup.scm 423 */
					BgL_varz00_bglt BgL_arg5741z00_2266;

					BgL_arg5741z00_2266 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2261))->BgL_varz00);
					{	/* Cfa/setup.scm 423 */
						BgL_nodez00_bglt BgL_nodez00_3358;

						BgL_nodez00_3358 = (BgL_nodez00_bglt) (BgL_arg5741z00_2266);
						{	/* Cfa/setup.scm 423 */
							obj_t BgL_method5298z00_3359;

							{	/* Cfa/setup.scm 423 */
								BgL_objectz00_bglt BgL_objz00_3360;

								BgL_objz00_3360 = (BgL_objectz00_bglt) (BgL_nodez00_3358);
								{	/* Cfa/setup.scm 423 */
									long BgL_objzd2classzd2numz00_3361;

									BgL_objzd2classzd2numz00_3361 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3360);
									{	/* Cfa/setup.scm 423 */
										obj_t BgL_arg2643z00_3362;

										BgL_arg2643z00_3362 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 423 */
											obj_t BgL_arrayz00_3364;

											int BgL_offsetz00_3365;

											BgL_arrayz00_3364 = BgL_arg2643z00_3362;
											BgL_offsetz00_3365 =
												(int) (BgL_objzd2classzd2numz00_3361);
											{	/* Cfa/setup.scm 423 */
												long BgL_offsetz00_3366;

												BgL_offsetz00_3366 =
													((long) (BgL_offsetz00_3365) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 423 */
													long BgL_modz00_3367;

													{	/* Cfa/setup.scm 423 */
														int BgL_arg2645z00_3368;

														BgL_arg2645z00_3368 = (int) (((long) 16));
														{	/* Cfa/setup.scm 423 */
															long BgL_auxz00_4002;

															BgL_auxz00_4002 = (long) (BgL_arg2645z00_3368);
															BgL_modz00_3367 =
																(BgL_offsetz00_3366 / BgL_auxz00_4002);
													}}
													{	/* Cfa/setup.scm 423 */
														long BgL_restz00_3369;

														{	/* Cfa/setup.scm 423 */
															int BgL_arg2644z00_3370;

															BgL_arg2644z00_3370 = (int) (((long) 16));
															{	/* Cfa/setup.scm 423 */
																long BgL_auxz00_4006;

																BgL_auxz00_4006 = (long) (BgL_arg2644z00_3370);
																BgL_restz00_3369 =
																	(BgL_offsetz00_3366 % BgL_auxz00_4006);
														}}
														{	/* Cfa/setup.scm 423 */

															BgL_method5298z00_3359 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3364,
																	(int) (BgL_modz00_3367)),
																(int) (BgL_restz00_3369));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_3359) (BgL_method5298z00_3359,
								(obj_t) (BgL_nodez00_3358), BEOA);
				}}}
				{	/* Cfa/setup.scm 424 */
					BgL_localz00_bglt BgL_obj5273z00_2267;

					{
						BgL_localz00_bglt BgL_auxz00_4016;

						{	/* Cfa/setup.scm 424 */
							BgL_varz00_bglt BgL_obj2178z00_3385;

							BgL_obj2178z00_3385 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2261))->
								BgL_varz00);
							BgL_auxz00_4016 =
								(BgL_localz00_bglt) ((((BgL_varz00_bglt)
										CREF(BgL_obj2178z00_3385))->BgL_variablez00));
						}
						BgL_obj5273z00_2267 = ((BgL_localz00_bglt) BgL_auxz00_4016);
					}
					{	/* Cfa/setup.scm 424 */
						obj_t BgL_auxz00_4023;

						BgL_objectz00_bglt BgL_auxz00_4021;

						BgL_auxz00_4023 =
							BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00(BFALSE);
						BgL_auxz00_4021 = (BgL_objectz00_bglt) (BgL_obj5273z00_2267);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4021, BgL_auxz00_4023);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5273z00_2267),
						BGl_classzd2numzd2zz__objectz00
						(BGl_reshapedzd2localzd2zzcfa_infoz00));
					BgL_obj5273z00_2267;
				}
				{	/* Cfa/setup.scm 425 */
					BgL_setzd2exzd2itz00_bglt BgL_obj5274z00_2271;

					BgL_obj5274z00_2271 = ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2261);
					{	/* Cfa/setup.scm 425 */
						obj_t BgL_auxz00_4032;

						BgL_objectz00_bglt BgL_auxz00_4030;

						BgL_auxz00_4032 =
							BGl_wideningzd2setzd2exzd2itzf2Cinfoz20zzcfa_infoz00
							(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
								(BGl_za2objza2z00zztype_cachez00)));
						BgL_auxz00_4030 = (BgL_objectz00_bglt) (BgL_obj5274z00_2271);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4030, BgL_auxz00_4032);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5274z00_2271),
						BGl_classzd2numzd2zz__objectz00
						(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00));
					BgL_obj5274z00_2271;
				}
				{	/* Cfa/setup.scm 427 */
					BgL_approxz00_bglt BgL_arg5748z00_2275;

					{	/* Cfa/setup.scm 427 */
						BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_obj3922z00_3390;

						BgL_obj3922z00_3390 =
							(BgL_setzd2exzd2itzf2cinfozf2_bglt) (BgL_nodez00_2261);
						{
							obj_t BgL_auxz00_4041;

							{	/* Cfa/setup.scm 427 */
								BgL_objectz00_bglt BgL_auxz00_4042;

								BgL_auxz00_4042 = (BgL_objectz00_bglt) (BgL_obj3922z00_3390);
								BgL_auxz00_4041 = BGL_OBJECT_WIDENING(BgL_auxz00_4042);
							}
							BgL_arg5748z00_2275 =
								(((BgL_setzd2exzd2itzf2cinfozf2_bglt) CREF(BgL_auxz00_4041))->
								BgL_approxz00);
					}}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5748z00_2275);
				}
			}
		}
	}



/* node-setup!-let-var5364 */
	obj_t BGl_nodezd2setupz12zd2letzd2var5364zc0zzcfa_setupz00(obj_t
		BgL_envz00_3505, obj_t BgL_nodez00_3506)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 395 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_2236;

				BgL_nodez00_2236 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3506);
				{	/* Cfa/setup.scm 398 */
					obj_t BgL_g5294z00_2240;

					BgL_g5294z00_2240 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2236))->BgL_bindingsz00);
					{
						obj_t BgL_l5292z00_2242;

						BgL_l5292z00_2242 = BgL_g5294z00_2240;
					BgL_zc3anonymousza35728ze3z83_2243:
						if (PAIRP(BgL_l5292z00_2242))
							{	/* Cfa/setup.scm 398 */
								{	/* Cfa/setup.scm 399 */
									obj_t BgL_bindingz00_2245;

									BgL_bindingz00_2245 = CAR(BgL_l5292z00_2242);
									{	/* Cfa/setup.scm 399 */
										obj_t BgL_varz00_2246;

										obj_t BgL_valz00_2247;

										BgL_varz00_2246 = CAR(BgL_bindingz00_2245);
										BgL_valz00_2247 = CDR(BgL_bindingz00_2245);
										{	/* Cfa/setup.scm 401 */
											BgL_valuez00_bglt BgL_arg5730z00_2248;

											{
												BgL_variablez00_bglt BgL_auxz00_4054;

												BgL_auxz00_4054 =
													(BgL_variablez00_bglt) (BgL_varz00_2246);
												BgL_arg5730z00_2248 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_4054))->
													BgL_valuez00);
											}
											{	/* Cfa/setup.scm 401 */
												BgL_variablez00_bglt BgL_variablez00_3247;

												BgL_variablez00_3247 =
													(BgL_variablez00_bglt) (BgL_varz00_2246);
												{	/* Cfa/setup.scm 401 */
													obj_t BgL_method5308z00_3248;

													{	/* Cfa/setup.scm 401 */
														BgL_objectz00_bglt BgL_objz00_3249;

														BgL_objz00_3249 =
															(BgL_objectz00_bglt) (BgL_arg5730z00_2248);
														{	/* Cfa/setup.scm 401 */
															long BgL_objzd2classzd2numz00_3250;

															BgL_objzd2classzd2numz00_3250 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3249);
															{	/* Cfa/setup.scm 401 */
																obj_t BgL_arg2643z00_3251;

																BgL_arg2643z00_3251 =
																	PROCEDURE_REF
																	(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
																	(int) (((long) 1)));
																{	/* Cfa/setup.scm 401 */
																	obj_t BgL_arrayz00_3253;

																	int BgL_offsetz00_3254;

																	BgL_arrayz00_3253 = BgL_arg2643z00_3251;
																	BgL_offsetz00_3254 =
																		(int) (BgL_objzd2classzd2numz00_3250);
																	{	/* Cfa/setup.scm 401 */
																		long BgL_offsetz00_3255;

																		BgL_offsetz00_3255 =
																			(
																			(long) (BgL_offsetz00_3254) -
																			OBJECT_TYPE);
																		{	/* Cfa/setup.scm 401 */
																			long BgL_modz00_3256;

																			{	/* Cfa/setup.scm 401 */
																				int BgL_arg2645z00_3257;

																				BgL_arg2645z00_3257 =
																					(int) (((long) 16));
																				{	/* Cfa/setup.scm 401 */
																					long BgL_auxz00_4066;

																					BgL_auxz00_4066 =
																						(long) (BgL_arg2645z00_3257);
																					BgL_modz00_3256 =
																						(BgL_offsetz00_3255 /
																						BgL_auxz00_4066);
																			}}
																			{	/* Cfa/setup.scm 401 */
																				long BgL_restz00_3258;

																				{	/* Cfa/setup.scm 401 */
																					int BgL_arg2644z00_3259;

																					BgL_arg2644z00_3259 =
																						(int) (((long) 16));
																					{	/* Cfa/setup.scm 401 */
																						long BgL_auxz00_4070;

																						BgL_auxz00_4070 =
																							(long) (BgL_arg2644z00_3259);
																						BgL_restz00_3258 =
																							(BgL_offsetz00_3255 %
																							BgL_auxz00_4070);
																				}}
																				{	/* Cfa/setup.scm 401 */

																					BgL_method5308z00_3248 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3253,
																							(int) (BgL_modz00_3256)),
																						(int) (BgL_restz00_3258));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5308z00_3248)
														(BgL_method5308z00_3248,
														(obj_t) (BgL_arg5730z00_2248),
														(obj_t) (BgL_variablez00_3247), BEOA);
										}}}
										{	/* Cfa/setup.scm 405 */
											BgL_nodez00_bglt BgL_nodez00_3273;

											BgL_nodez00_3273 = (BgL_nodez00_bglt) (BgL_valz00_2247);
											{	/* Cfa/setup.scm 405 */
												obj_t BgL_method5298z00_3274;

												{	/* Cfa/setup.scm 405 */
													BgL_objectz00_bglt BgL_objz00_3275;

													BgL_objz00_3275 =
														(BgL_objectz00_bglt) (BgL_nodez00_3273);
													{	/* Cfa/setup.scm 405 */
														long BgL_objzd2classzd2numz00_3276;

														BgL_objzd2classzd2numz00_3276 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3275);
														{	/* Cfa/setup.scm 405 */
															obj_t BgL_arg2643z00_3277;

															BgL_arg2643z00_3277 =
																PROCEDURE_REF
																(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
																(int) (((long) 1)));
															{	/* Cfa/setup.scm 405 */
																obj_t BgL_arrayz00_3279;

																int BgL_offsetz00_3280;

																BgL_arrayz00_3279 = BgL_arg2643z00_3277;
																BgL_offsetz00_3280 =
																	(int) (BgL_objzd2classzd2numz00_3276);
																{	/* Cfa/setup.scm 405 */
																	long BgL_offsetz00_3281;

																	BgL_offsetz00_3281 =
																		((long) (BgL_offsetz00_3280) - OBJECT_TYPE);
																	{	/* Cfa/setup.scm 405 */
																		long BgL_modz00_3282;

																		{	/* Cfa/setup.scm 405 */
																			int BgL_arg2645z00_3283;

																			BgL_arg2645z00_3283 = (int) (((long) 16));
																			{	/* Cfa/setup.scm 405 */
																				long BgL_auxz00_4090;

																				BgL_auxz00_4090 =
																					(long) (BgL_arg2645z00_3283);
																				BgL_modz00_3282 =
																					(BgL_offsetz00_3281 /
																					BgL_auxz00_4090);
																		}}
																		{	/* Cfa/setup.scm 405 */
																			long BgL_restz00_3284;

																			{	/* Cfa/setup.scm 405 */
																				int BgL_arg2644z00_3285;

																				BgL_arg2644z00_3285 =
																					(int) (((long) 16));
																				{	/* Cfa/setup.scm 405 */
																					long BgL_auxz00_4094;

																					BgL_auxz00_4094 =
																						(long) (BgL_arg2644z00_3285);
																					BgL_restz00_3284 =
																						(BgL_offsetz00_3281 %
																						BgL_auxz00_4094);
																			}}
																			{	/* Cfa/setup.scm 405 */

																				BgL_method5298z00_3274 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3279,
																						(int) (BgL_modz00_3282)),
																					(int) (BgL_restz00_3284));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method5298z00_3274)
													(BgL_method5298z00_3274, (obj_t) (BgL_nodez00_3273),
													BEOA);
										}}
										{	/* Cfa/setup.scm 406 */
											BgL_localz00_bglt BgL_obj5270z00_2249;

											BgL_obj5270z00_2249 =
												((BgL_localz00_bglt)
												(BgL_localz00_bglt) (BgL_varz00_2246));
											{	/* Cfa/setup.scm 407 */
												obj_t BgL_arg5731z00_2250;

												{	/* Cfa/setup.scm 407 */
													obj_t BgL_arg5732z00_2251;

													{	/* Cfa/setup.scm 407 */
														bool_t BgL_testz00_4106;

														{	/* Cfa/setup.scm 407 */
															obj_t BgL_auxz00_4107;

															{
																BgL_variablez00_bglt BgL_auxz00_4108;

																BgL_auxz00_4108 =
																	(BgL_variablez00_bglt) (BgL_varz00_2246);
																BgL_auxz00_4107 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4108))->BgL_accessz00);
															}
															BgL_testz00_4106 =
																(BgL_auxz00_4107 == CNST_TABLE_REF(((long) 2)));
														}
														if (BgL_testz00_4106)
															{	/* Cfa/setup.scm 407 */
																BgL_arg5732z00_2251 = BgL_valz00_2247;
															}
														else
															{	/* Cfa/setup.scm 407 */
																BgL_arg5732z00_2251 = BFALSE;
															}
													}
													BgL_arg5731z00_2250 =
														BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00
														(BgL_arg5732z00_2251);
												}
												{	/* Cfa/setup.scm 406 */
													BgL_objectz00_bglt BgL_auxz00_4114;

													BgL_auxz00_4114 =
														(BgL_objectz00_bglt) (BgL_obj5270z00_2249);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_4114,
														BgL_arg5731z00_2250);
												}
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_obj5270z00_2249),
												BGl_classzd2numzd2zz__objectz00
												(BGl_reshapedzd2localzd2zzcfa_infoz00));
											BgL_obj5270z00_2249;
										}
										BNIL;
									}
								}
								{
									obj_t BgL_l5292z00_4120;

									BgL_l5292z00_4120 = CDR(BgL_l5292z00_2242);
									BgL_l5292z00_2242 = BgL_l5292z00_4120;
									goto BgL_zc3anonymousza35728ze3z83_2243;
								}
							}
						else
							{	/* Cfa/setup.scm 398 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/setup.scm 415 */
					BgL_nodez00_bglt BgL_arg5738z00_2258;

					BgL_arg5738z00_2258 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2236))->BgL_bodyz00);
					{	/* Cfa/setup.scm 415 */
						obj_t BgL_method5298z00_3305;

						{	/* Cfa/setup.scm 415 */
							BgL_objectz00_bglt BgL_objz00_3306;

							BgL_objz00_3306 = (BgL_objectz00_bglt) (BgL_arg5738z00_2258);
							{	/* Cfa/setup.scm 415 */
								long BgL_objzd2classzd2numz00_3307;

								BgL_objzd2classzd2numz00_3307 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3306);
								{	/* Cfa/setup.scm 415 */
									obj_t BgL_arg2643z00_3308;

									BgL_arg2643z00_3308 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 415 */
										obj_t BgL_arrayz00_3310;

										int BgL_offsetz00_3311;

										BgL_arrayz00_3310 = BgL_arg2643z00_3308;
										BgL_offsetz00_3311 = (int) (BgL_objzd2classzd2numz00_3307);
										{	/* Cfa/setup.scm 415 */
											long BgL_offsetz00_3312;

											BgL_offsetz00_3312 =
												((long) (BgL_offsetz00_3311) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 415 */
												long BgL_modz00_3313;

												{	/* Cfa/setup.scm 415 */
													int BgL_arg2645z00_3314;

													BgL_arg2645z00_3314 = (int) (((long) 16));
													{	/* Cfa/setup.scm 415 */
														long BgL_auxz00_4131;

														BgL_auxz00_4131 = (long) (BgL_arg2645z00_3314);
														BgL_modz00_3313 =
															(BgL_offsetz00_3312 / BgL_auxz00_4131);
												}}
												{	/* Cfa/setup.scm 415 */
													long BgL_restz00_3315;

													{	/* Cfa/setup.scm 415 */
														int BgL_arg2644z00_3316;

														BgL_arg2644z00_3316 = (int) (((long) 16));
														{	/* Cfa/setup.scm 415 */
															long BgL_auxz00_4135;

															BgL_auxz00_4135 = (long) (BgL_arg2644z00_3316);
															BgL_restz00_3315 =
																(BgL_offsetz00_3312 % BgL_auxz00_4135);
													}}
													{	/* Cfa/setup.scm 415 */

														BgL_method5298z00_3305 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3310,
																(int) (BgL_modz00_3313)),
															(int) (BgL_restz00_3315));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_3305) (BgL_method5298z00_3305,
							(obj_t) (BgL_arg5738z00_2258), BEOA);
					}
				}
			}
		}
	}



/* node-setup!-let-fun5362 */
	obj_t BGl_nodezd2setupz12zd2letzd2fun5362zc0zzcfa_setupz00(obj_t
		BgL_envz00_3507, obj_t BgL_nodez00_3508)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 378 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_2204;

				BgL_nodez00_2204 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3508);
				{	/* Cfa/setup.scm 380 */
					obj_t BgL_g5291z00_2208;

					BgL_g5291z00_2208 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2204))->BgL_localsz00);
					{
						obj_t BgL_l5289z00_2210;

						BgL_l5289z00_2210 = BgL_g5291z00_2208;
					BgL_zc3anonymousza35713ze3z83_2211:
						if (PAIRP(BgL_l5289z00_2210))
							{	/* Cfa/setup.scm 380 */
								{	/* Cfa/setup.scm 388 */
									obj_t BgL_lz00_2213;

									BgL_lz00_2213 = CAR(BgL_l5289z00_2210);
									{	/* Cfa/setup.scm 381 */
										BgL_localz00_bglt BgL_obj5266z00_2214;

										BgL_obj5266z00_2214 =
											((BgL_localz00_bglt) (BgL_localz00_bglt) (BgL_lz00_2213));
										{	/* Cfa/setup.scm 381 */
											obj_t BgL_auxz00_4154;

											BgL_objectz00_bglt BgL_auxz00_4152;

											BgL_auxz00_4154 =
												BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00(BFALSE);
											BgL_auxz00_4152 =
												(BgL_objectz00_bglt) (BgL_obj5266z00_2214);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_4152, BgL_auxz00_4154);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj5266z00_2214),
											BGl_classzd2numzd2zz__objectz00
											(BGl_reshapedzd2localzd2zzcfa_infoz00));
										BgL_obj5266z00_2214;
									}
									{	/* Cfa/setup.scm 382 */
										BgL_valuez00_bglt BgL_funz00_2217;

										{
											BgL_variablez00_bglt BgL_auxz00_4160;

											BgL_auxz00_4160 = (BgL_variablez00_bglt) (BgL_lz00_2213);
											BgL_funz00_2217 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_4160))->
												BgL_valuez00);
										}
										{	/* Cfa/setup.scm 383 */
											obj_t BgL_g5288z00_2218;

											{
												BgL_sfunz00_bglt BgL_auxz00_4163;

												BgL_auxz00_4163 = (BgL_sfunz00_bglt) (BgL_funz00_2217);
												BgL_g5288z00_2218 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_4163))->
													BgL_argsz00);
											}
											{
												obj_t BgL_l5286z00_2220;

												BgL_l5286z00_2220 = BgL_g5288z00_2218;
											BgL_zc3anonymousza35717ze3z83_2221:
												if (PAIRP(BgL_l5286z00_2220))
													{	/* Cfa/setup.scm 387 */
														{	/* Cfa/setup.scm 386 */
															obj_t BgL_localz00_2223;

															BgL_localz00_2223 = CAR(BgL_l5286z00_2220);
															{	/* Cfa/setup.scm 384 */
																BgL_localz00_bglt BgL_obj5267z00_2224;

																BgL_obj5267z00_2224 =
																	((BgL_localz00_bglt)
																	(BgL_localz00_bglt) (BgL_localz00_2223));
																{	/* Cfa/setup.scm 384 */
																	obj_t BgL_auxz00_4173;

																	BgL_objectz00_bglt BgL_auxz00_4171;

																	BgL_auxz00_4173 =
																		BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00
																		(BFALSE);
																	BgL_auxz00_4171 =
																		(BgL_objectz00_bglt) (BgL_obj5267z00_2224);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_4171,
																		BgL_auxz00_4173);
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj5267z00_2224),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_reshapedzd2localzd2zzcfa_infoz00));
																BgL_obj5267z00_2224;
															}
															{	/* Cfa/setup.scm 385 */
																BgL_valuez00_bglt BgL_arg5722z00_2227;

																{
																	BgL_variablez00_bglt BgL_auxz00_4179;

																	BgL_auxz00_4179 =
																		(BgL_variablez00_bglt) (BgL_localz00_2223);
																	BgL_arg5722z00_2227 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_4179))->BgL_valuez00);
																}
																{	/* Cfa/setup.scm 385 */
																	BgL_variablez00_bglt BgL_variablez00_3158;

																	BgL_variablez00_3158 =
																		(BgL_variablez00_bglt) (BgL_localz00_2223);
																	{	/* Cfa/setup.scm 385 */
																		obj_t BgL_method5308z00_3159;

																		{	/* Cfa/setup.scm 385 */
																			BgL_objectz00_bglt BgL_objz00_3160;

																			BgL_objz00_3160 =
																				(BgL_objectz00_bglt)
																				(BgL_arg5722z00_2227);
																			{	/* Cfa/setup.scm 385 */
																				long BgL_objzd2classzd2numz00_3161;

																				BgL_objzd2classzd2numz00_3161 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_3160);
																				{	/* Cfa/setup.scm 385 */
																					obj_t BgL_arg2643z00_3162;

																					BgL_arg2643z00_3162 =
																						PROCEDURE_REF
																						(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
																						(int) (((long) 1)));
																					{	/* Cfa/setup.scm 385 */
																						obj_t BgL_arrayz00_3164;

																						int BgL_offsetz00_3165;

																						BgL_arrayz00_3164 =
																							BgL_arg2643z00_3162;
																						BgL_offsetz00_3165 =
																							(int)
																							(BgL_objzd2classzd2numz00_3161);
																						{	/* Cfa/setup.scm 385 */
																							long BgL_offsetz00_3166;

																							BgL_offsetz00_3166 =
																								(
																								(long) (BgL_offsetz00_3165) -
																								OBJECT_TYPE);
																							{	/* Cfa/setup.scm 385 */
																								long BgL_modz00_3167;

																								{	/* Cfa/setup.scm 385 */
																									int BgL_arg2645z00_3168;

																									BgL_arg2645z00_3168 =
																										(int) (((long) 16));
																									{	/* Cfa/setup.scm 385 */
																										long BgL_auxz00_4191;

																										BgL_auxz00_4191 =
																											(long)
																											(BgL_arg2645z00_3168);
																										BgL_modz00_3167 =
																											(BgL_offsetz00_3166 /
																											BgL_auxz00_4191);
																								}}
																								{	/* Cfa/setup.scm 385 */
																									long BgL_restz00_3169;

																									{	/* Cfa/setup.scm 385 */
																										int BgL_arg2644z00_3170;

																										BgL_arg2644z00_3170 =
																											(int) (((long) 16));
																										{	/* Cfa/setup.scm 385 */
																											long BgL_auxz00_4195;

																											BgL_auxz00_4195 =
																												(long)
																												(BgL_arg2644z00_3170);
																											BgL_restz00_3169 =
																												(BgL_offsetz00_3166 %
																												BgL_auxz00_4195);
																									}}
																									{	/* Cfa/setup.scm 385 */

																										BgL_method5308z00_3159 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_3164,
																												(int)
																												(BgL_modz00_3167)),
																											(int) (BgL_restz00_3169));
																		}}}}}}}}
																		PROCEDURE_ENTRY(BgL_method5308z00_3159)
																			(BgL_method5308z00_3159,
																			(obj_t) (BgL_arg5722z00_2227),
																			(obj_t) (BgL_variablez00_3158), BEOA);
														}}}}
														{
															obj_t BgL_l5286z00_4206;

															BgL_l5286z00_4206 = CDR(BgL_l5286z00_2220);
															BgL_l5286z00_2220 = BgL_l5286z00_4206;
															goto BgL_zc3anonymousza35717ze3z83_2221;
														}
													}
												else
													{	/* Cfa/setup.scm 387 */
														((bool_t) 1);
													}
											}
										}
										{	/* Cfa/setup.scm 388 */
											obj_t BgL_arg5724z00_2230;

											{
												BgL_sfunz00_bglt BgL_auxz00_4208;

												BgL_auxz00_4208 = (BgL_sfunz00_bglt) (BgL_funz00_2217);
												BgL_arg5724z00_2230 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_4208))->
													BgL_bodyz00);
											}
											{	/* Cfa/setup.scm 388 */
												BgL_nodez00_bglt BgL_nodez00_3186;

												BgL_nodez00_3186 =
													(BgL_nodez00_bglt) (BgL_arg5724z00_2230);
												{	/* Cfa/setup.scm 388 */
													obj_t BgL_method5298z00_3187;

													{	/* Cfa/setup.scm 388 */
														BgL_objectz00_bglt BgL_objz00_3188;

														BgL_objz00_3188 =
															(BgL_objectz00_bglt) (BgL_nodez00_3186);
														{	/* Cfa/setup.scm 388 */
															long BgL_objzd2classzd2numz00_3189;

															BgL_objzd2classzd2numz00_3189 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3188);
															{	/* Cfa/setup.scm 388 */
																obj_t BgL_arg2643z00_3190;

																BgL_arg2643z00_3190 =
																	PROCEDURE_REF
																	(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
																	(int) (((long) 1)));
																{	/* Cfa/setup.scm 388 */
																	obj_t BgL_arrayz00_3192;

																	int BgL_offsetz00_3193;

																	BgL_arrayz00_3192 = BgL_arg2643z00_3190;
																	BgL_offsetz00_3193 =
																		(int) (BgL_objzd2classzd2numz00_3189);
																	{	/* Cfa/setup.scm 388 */
																		long BgL_offsetz00_3194;

																		BgL_offsetz00_3194 =
																			(
																			(long) (BgL_offsetz00_3193) -
																			OBJECT_TYPE);
																		{	/* Cfa/setup.scm 388 */
																			long BgL_modz00_3195;

																			{	/* Cfa/setup.scm 388 */
																				int BgL_arg2645z00_3196;

																				BgL_arg2645z00_3196 =
																					(int) (((long) 16));
																				{	/* Cfa/setup.scm 388 */
																					long BgL_auxz00_4220;

																					BgL_auxz00_4220 =
																						(long) (BgL_arg2645z00_3196);
																					BgL_modz00_3195 =
																						(BgL_offsetz00_3194 /
																						BgL_auxz00_4220);
																			}}
																			{	/* Cfa/setup.scm 388 */
																				long BgL_restz00_3197;

																				{	/* Cfa/setup.scm 388 */
																					int BgL_arg2644z00_3198;

																					BgL_arg2644z00_3198 =
																						(int) (((long) 16));
																					{	/* Cfa/setup.scm 388 */
																						long BgL_auxz00_4224;

																						BgL_auxz00_4224 =
																							(long) (BgL_arg2644z00_3198);
																						BgL_restz00_3197 =
																							(BgL_offsetz00_3194 %
																							BgL_auxz00_4224);
																				}}
																				{	/* Cfa/setup.scm 388 */

																					BgL_method5298z00_3187 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3192,
																							(int) (BgL_modz00_3195)),
																						(int) (BgL_restz00_3197));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5298z00_3187)
														(BgL_method5298z00_3187, (obj_t) (BgL_nodez00_3186),
														BEOA);
								}}}}}
								{
									obj_t BgL_l5289z00_4234;

									BgL_l5289z00_4234 = CDR(BgL_l5289z00_2210);
									BgL_l5289z00_2210 = BgL_l5289z00_4234;
									goto BgL_zc3anonymousza35713ze3z83_2211;
								}
							}
						else
							{	/* Cfa/setup.scm 380 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/setup.scm 390 */
					BgL_nodez00_bglt BgL_arg5726z00_2233;

					BgL_arg5726z00_2233 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2204))->BgL_bodyz00);
					{	/* Cfa/setup.scm 390 */
						obj_t BgL_method5298z00_3215;

						{	/* Cfa/setup.scm 390 */
							BgL_objectz00_bglt BgL_objz00_3216;

							BgL_objz00_3216 = (BgL_objectz00_bglt) (BgL_arg5726z00_2233);
							{	/* Cfa/setup.scm 390 */
								long BgL_objzd2classzd2numz00_3217;

								BgL_objzd2classzd2numz00_3217 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3216);
								{	/* Cfa/setup.scm 390 */
									obj_t BgL_arg2643z00_3218;

									BgL_arg2643z00_3218 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 390 */
										obj_t BgL_arrayz00_3220;

										int BgL_offsetz00_3221;

										BgL_arrayz00_3220 = BgL_arg2643z00_3218;
										BgL_offsetz00_3221 = (int) (BgL_objzd2classzd2numz00_3217);
										{	/* Cfa/setup.scm 390 */
											long BgL_offsetz00_3222;

											BgL_offsetz00_3222 =
												((long) (BgL_offsetz00_3221) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 390 */
												long BgL_modz00_3223;

												{	/* Cfa/setup.scm 390 */
													int BgL_arg2645z00_3224;

													BgL_arg2645z00_3224 = (int) (((long) 16));
													{	/* Cfa/setup.scm 390 */
														long BgL_auxz00_4245;

														BgL_auxz00_4245 = (long) (BgL_arg2645z00_3224);
														BgL_modz00_3223 =
															(BgL_offsetz00_3222 / BgL_auxz00_4245);
												}}
												{	/* Cfa/setup.scm 390 */
													long BgL_restz00_3225;

													{	/* Cfa/setup.scm 390 */
														int BgL_arg2644z00_3226;

														BgL_arg2644z00_3226 = (int) (((long) 16));
														{	/* Cfa/setup.scm 390 */
															long BgL_auxz00_4249;

															BgL_auxz00_4249 = (long) (BgL_arg2644z00_3226);
															BgL_restz00_3225 =
																(BgL_offsetz00_3222 % BgL_auxz00_4249);
													}}
													{	/* Cfa/setup.scm 390 */

														BgL_method5298z00_3215 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3220,
																(int) (BgL_modz00_3223)),
															(int) (BgL_restz00_3225));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_3215) (BgL_method5298z00_3215,
							(obj_t) (BgL_arg5726z00_2233), BEOA);
					}
				}
			}
		}
	}



/* node-setup!-select5360 */
	obj_t BGl_nodezd2setupz12zd2select5360z12zzcfa_setupz00(obj_t BgL_envz00_3509,
		obj_t BgL_nodez00_3510)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 366 */
			{
				BgL_selectz00_bglt BgL_nodez00_2184;

				{	/* Cfa/setup.scm 367 */
					BgL_selectz00_bglt BgL_auxz00_4260;

					BgL_nodez00_2184 = (BgL_selectz00_bglt) (BgL_nodez00_3510);
					{	/* Cfa/setup.scm 368 */
						BgL_nodez00_bglt BgL_arg5704z00_2188;

						BgL_arg5704z00_2188 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_2184))->BgL_testz00);
						{	/* Cfa/setup.scm 368 */
							obj_t BgL_method5298z00_3087;

							{	/* Cfa/setup.scm 368 */
								BgL_objectz00_bglt BgL_objz00_3088;

								BgL_objz00_3088 = (BgL_objectz00_bglt) (BgL_arg5704z00_2188);
								{	/* Cfa/setup.scm 368 */
									long BgL_objzd2classzd2numz00_3089;

									BgL_objzd2classzd2numz00_3089 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3088);
									{	/* Cfa/setup.scm 368 */
										obj_t BgL_arg2643z00_3090;

										BgL_arg2643z00_3090 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 368 */
											obj_t BgL_arrayz00_3092;

											int BgL_offsetz00_3093;

											BgL_arrayz00_3092 = BgL_arg2643z00_3090;
											BgL_offsetz00_3093 =
												(int) (BgL_objzd2classzd2numz00_3089);
											{	/* Cfa/setup.scm 368 */
												long BgL_offsetz00_3094;

												BgL_offsetz00_3094 =
													((long) (BgL_offsetz00_3093) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 368 */
													long BgL_modz00_3095;

													{	/* Cfa/setup.scm 368 */
														int BgL_arg2645z00_3096;

														BgL_arg2645z00_3096 = (int) (((long) 16));
														{	/* Cfa/setup.scm 368 */
															long BgL_auxz00_4270;

															BgL_auxz00_4270 = (long) (BgL_arg2645z00_3096);
															BgL_modz00_3095 =
																(BgL_offsetz00_3094 / BgL_auxz00_4270);
													}}
													{	/* Cfa/setup.scm 368 */
														long BgL_restz00_3097;

														{	/* Cfa/setup.scm 368 */
															int BgL_arg2644z00_3098;

															BgL_arg2644z00_3098 = (int) (((long) 16));
															{	/* Cfa/setup.scm 368 */
																long BgL_auxz00_4274;

																BgL_auxz00_4274 = (long) (BgL_arg2644z00_3098);
																BgL_restz00_3097 =
																	(BgL_offsetz00_3094 % BgL_auxz00_4274);
														}}
														{	/* Cfa/setup.scm 368 */

															BgL_method5298z00_3087 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3092,
																	(int) (BgL_modz00_3095)),
																(int) (BgL_restz00_3097));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_3087) (BgL_method5298z00_3087,
								(obj_t) (BgL_arg5704z00_2188), BEOA);
					}}
					{	/* Cfa/setup.scm 369 */
						obj_t BgL_g5285z00_2189;

						BgL_g5285z00_2189 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_2184))->BgL_clausesz00);
						{
							obj_t BgL_l5283z00_2191;

							BgL_l5283z00_2191 = BgL_g5285z00_2189;
						BgL_zc3anonymousza35705ze3z83_2192:
							if (PAIRP(BgL_l5283z00_2191))
								{	/* Cfa/setup.scm 369 */
									{	/* Cfa/setup.scm 370 */
										obj_t BgL_clausez00_2194;

										BgL_clausez00_2194 = CAR(BgL_l5283z00_2191);
										{	/* Cfa/setup.scm 370 */
											obj_t BgL_arg5707z00_2195;

											BgL_arg5707z00_2195 = CDR(BgL_clausez00_2194);
											{	/* Cfa/setup.scm 370 */
												BgL_nodez00_bglt BgL_nodez00_3116;

												BgL_nodez00_3116 =
													(BgL_nodez00_bglt) (BgL_arg5707z00_2195);
												{	/* Cfa/setup.scm 370 */
													obj_t BgL_method5298z00_3117;

													{	/* Cfa/setup.scm 370 */
														BgL_objectz00_bglt BgL_objz00_3118;

														BgL_objz00_3118 =
															(BgL_objectz00_bglt) (BgL_nodez00_3116);
														{	/* Cfa/setup.scm 370 */
															long BgL_objzd2classzd2numz00_3119;

															BgL_objzd2classzd2numz00_3119 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3118);
															{	/* Cfa/setup.scm 370 */
																obj_t BgL_arg2643z00_3120;

																BgL_arg2643z00_3120 =
																	PROCEDURE_REF
																	(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
																	(int) (((long) 1)));
																{	/* Cfa/setup.scm 370 */
																	obj_t BgL_arrayz00_3122;

																	int BgL_offsetz00_3123;

																	BgL_arrayz00_3122 = BgL_arg2643z00_3120;
																	BgL_offsetz00_3123 =
																		(int) (BgL_objzd2classzd2numz00_3119);
																	{	/* Cfa/setup.scm 370 */
																		long BgL_offsetz00_3124;

																		BgL_offsetz00_3124 =
																			(
																			(long) (BgL_offsetz00_3123) -
																			OBJECT_TYPE);
																		{	/* Cfa/setup.scm 370 */
																			long BgL_modz00_3125;

																			{	/* Cfa/setup.scm 370 */
																				int BgL_arg2645z00_3126;

																				BgL_arg2645z00_3126 =
																					(int) (((long) 16));
																				{	/* Cfa/setup.scm 370 */
																					long BgL_auxz00_4298;

																					BgL_auxz00_4298 =
																						(long) (BgL_arg2645z00_3126);
																					BgL_modz00_3125 =
																						(BgL_offsetz00_3124 /
																						BgL_auxz00_4298);
																			}}
																			{	/* Cfa/setup.scm 370 */
																				long BgL_restz00_3127;

																				{	/* Cfa/setup.scm 370 */
																					int BgL_arg2644z00_3128;

																					BgL_arg2644z00_3128 =
																						(int) (((long) 16));
																					{	/* Cfa/setup.scm 370 */
																						long BgL_auxz00_4302;

																						BgL_auxz00_4302 =
																							(long) (BgL_arg2644z00_3128);
																						BgL_restz00_3127 =
																							(BgL_offsetz00_3124 %
																							BgL_auxz00_4302);
																				}}
																				{	/* Cfa/setup.scm 370 */

																					BgL_method5298z00_3117 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3122,
																							(int) (BgL_modz00_3125)),
																						(int) (BgL_restz00_3127));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5298z00_3117)
														(BgL_method5298z00_3117, (obj_t) (BgL_nodez00_3116),
														BEOA);
									}}}}
									{
										obj_t BgL_l5283z00_4312;

										BgL_l5283z00_4312 = CDR(BgL_l5283z00_2191);
										BgL_l5283z00_2191 = BgL_l5283z00_4312;
										goto BgL_zc3anonymousza35705ze3z83_2192;
									}
								}
							else
								{	/* Cfa/setup.scm 369 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/setup.scm 372 */
						BgL_selectz00_bglt BgL_obj5263z00_2198;

						BgL_obj5263z00_2198 = ((BgL_selectz00_bglt) BgL_nodez00_2184);
						{	/* Cfa/setup.scm 372 */
							obj_t BgL_auxz00_4317;

							BgL_objectz00_bglt BgL_auxz00_4315;

							BgL_auxz00_4317 =
								BGl_wideningzd2selectzf2Cinfoz20zzcfa_infoz00
								(BGl_makezd2emptyzd2approxz00zzcfa_approxz00());
							BgL_auxz00_4315 = (BgL_objectz00_bglt) (BgL_obj5263z00_2198);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4315, BgL_auxz00_4317);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5263z00_2198),
							BGl_classzd2numzd2zz__objectz00
							(BGl_selectzf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_4260 = BgL_obj5263z00_2198;
					}
					return (obj_t) (BgL_auxz00_4260);
				}
			}
		}
	}



/* node-setup!-fail5358 */
	obj_t BGl_nodezd2setupz12zd2fail5358z12zzcfa_setupz00(obj_t BgL_envz00_3511,
		obj_t BgL_nodez00_3512)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 355 */
			{
				BgL_failz00_bglt BgL_nodez00_2171;

				{	/* Cfa/setup.scm 356 */
					BgL_failz00_bglt BgL_auxz00_4326;

					BgL_nodez00_2171 = (BgL_failz00_bglt) (BgL_nodez00_3512);
					{	/* Cfa/setup.scm 357 */
						BgL_nodez00_bglt BgL_arg5697z00_2175;

						BgL_arg5697z00_2175 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_2171))->BgL_procz00);
						{	/* Cfa/setup.scm 357 */
							obj_t BgL_method5298z00_3004;

							{	/* Cfa/setup.scm 357 */
								BgL_objectz00_bglt BgL_objz00_3005;

								BgL_objz00_3005 = (BgL_objectz00_bglt) (BgL_arg5697z00_2175);
								{	/* Cfa/setup.scm 357 */
									long BgL_objzd2classzd2numz00_3006;

									BgL_objzd2classzd2numz00_3006 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3005);
									{	/* Cfa/setup.scm 357 */
										obj_t BgL_arg2643z00_3007;

										BgL_arg2643z00_3007 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 357 */
											obj_t BgL_arrayz00_3009;

											int BgL_offsetz00_3010;

											BgL_arrayz00_3009 = BgL_arg2643z00_3007;
											BgL_offsetz00_3010 =
												(int) (BgL_objzd2classzd2numz00_3006);
											{	/* Cfa/setup.scm 357 */
												long BgL_offsetz00_3011;

												BgL_offsetz00_3011 =
													((long) (BgL_offsetz00_3010) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 357 */
													long BgL_modz00_3012;

													{	/* Cfa/setup.scm 357 */
														int BgL_arg2645z00_3013;

														BgL_arg2645z00_3013 = (int) (((long) 16));
														{	/* Cfa/setup.scm 357 */
															long BgL_auxz00_4336;

															BgL_auxz00_4336 = (long) (BgL_arg2645z00_3013);
															BgL_modz00_3012 =
																(BgL_offsetz00_3011 / BgL_auxz00_4336);
													}}
													{	/* Cfa/setup.scm 357 */
														long BgL_restz00_3014;

														{	/* Cfa/setup.scm 357 */
															int BgL_arg2644z00_3015;

															BgL_arg2644z00_3015 = (int) (((long) 16));
															{	/* Cfa/setup.scm 357 */
																long BgL_auxz00_4340;

																BgL_auxz00_4340 = (long) (BgL_arg2644z00_3015);
																BgL_restz00_3014 =
																	(BgL_offsetz00_3011 % BgL_auxz00_4340);
														}}
														{	/* Cfa/setup.scm 357 */

															BgL_method5298z00_3004 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3009,
																	(int) (BgL_modz00_3012)),
																(int) (BgL_restz00_3014));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_3004) (BgL_method5298z00_3004,
								(obj_t) (BgL_arg5697z00_2175), BEOA);
					}}
					{	/* Cfa/setup.scm 358 */
						BgL_nodez00_bglt BgL_arg5698z00_2176;

						BgL_arg5698z00_2176 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_2171))->BgL_msgz00);
						{	/* Cfa/setup.scm 358 */
							obj_t BgL_method5298z00_3031;

							{	/* Cfa/setup.scm 358 */
								BgL_objectz00_bglt BgL_objz00_3032;

								BgL_objz00_3032 = (BgL_objectz00_bglt) (BgL_arg5698z00_2176);
								{	/* Cfa/setup.scm 358 */
									long BgL_objzd2classzd2numz00_3033;

									BgL_objzd2classzd2numz00_3033 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3032);
									{	/* Cfa/setup.scm 358 */
										obj_t BgL_arg2643z00_3034;

										BgL_arg2643z00_3034 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 358 */
											obj_t BgL_arrayz00_3036;

											int BgL_offsetz00_3037;

											BgL_arrayz00_3036 = BgL_arg2643z00_3034;
											BgL_offsetz00_3037 =
												(int) (BgL_objzd2classzd2numz00_3033);
											{	/* Cfa/setup.scm 358 */
												long BgL_offsetz00_3038;

												BgL_offsetz00_3038 =
													((long) (BgL_offsetz00_3037) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 358 */
													long BgL_modz00_3039;

													{	/* Cfa/setup.scm 358 */
														int BgL_arg2645z00_3040;

														BgL_arg2645z00_3040 = (int) (((long) 16));
														{	/* Cfa/setup.scm 358 */
															long BgL_auxz00_4359;

															BgL_auxz00_4359 = (long) (BgL_arg2645z00_3040);
															BgL_modz00_3039 =
																(BgL_offsetz00_3038 / BgL_auxz00_4359);
													}}
													{	/* Cfa/setup.scm 358 */
														long BgL_restz00_3041;

														{	/* Cfa/setup.scm 358 */
															int BgL_arg2644z00_3042;

															BgL_arg2644z00_3042 = (int) (((long) 16));
															{	/* Cfa/setup.scm 358 */
																long BgL_auxz00_4363;

																BgL_auxz00_4363 = (long) (BgL_arg2644z00_3042);
																BgL_restz00_3041 =
																	(BgL_offsetz00_3038 % BgL_auxz00_4363);
														}}
														{	/* Cfa/setup.scm 358 */

															BgL_method5298z00_3031 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3036,
																	(int) (BgL_modz00_3039)),
																(int) (BgL_restz00_3041));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_3031) (BgL_method5298z00_3031,
								(obj_t) (BgL_arg5698z00_2176), BEOA);
					}}
					{	/* Cfa/setup.scm 359 */
						BgL_nodez00_bglt BgL_arg5699z00_2177;

						BgL_arg5699z00_2177 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_2171))->BgL_objz00);
						{	/* Cfa/setup.scm 359 */
							obj_t BgL_method5298z00_3058;

							{	/* Cfa/setup.scm 359 */
								BgL_objectz00_bglt BgL_objz00_3059;

								BgL_objz00_3059 = (BgL_objectz00_bglt) (BgL_arg5699z00_2177);
								{	/* Cfa/setup.scm 359 */
									long BgL_objzd2classzd2numz00_3060;

									BgL_objzd2classzd2numz00_3060 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3059);
									{	/* Cfa/setup.scm 359 */
										obj_t BgL_arg2643z00_3061;

										BgL_arg2643z00_3061 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 359 */
											obj_t BgL_arrayz00_3063;

											int BgL_offsetz00_3064;

											BgL_arrayz00_3063 = BgL_arg2643z00_3061;
											BgL_offsetz00_3064 =
												(int) (BgL_objzd2classzd2numz00_3060);
											{	/* Cfa/setup.scm 359 */
												long BgL_offsetz00_3065;

												BgL_offsetz00_3065 =
													((long) (BgL_offsetz00_3064) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 359 */
													long BgL_modz00_3066;

													{	/* Cfa/setup.scm 359 */
														int BgL_arg2645z00_3067;

														BgL_arg2645z00_3067 = (int) (((long) 16));
														{	/* Cfa/setup.scm 359 */
															long BgL_auxz00_4382;

															BgL_auxz00_4382 = (long) (BgL_arg2645z00_3067);
															BgL_modz00_3066 =
																(BgL_offsetz00_3065 / BgL_auxz00_4382);
													}}
													{	/* Cfa/setup.scm 359 */
														long BgL_restz00_3068;

														{	/* Cfa/setup.scm 359 */
															int BgL_arg2644z00_3069;

															BgL_arg2644z00_3069 = (int) (((long) 16));
															{	/* Cfa/setup.scm 359 */
																long BgL_auxz00_4386;

																BgL_auxz00_4386 = (long) (BgL_arg2644z00_3069);
																BgL_restz00_3068 =
																	(BgL_offsetz00_3065 % BgL_auxz00_4386);
														}}
														{	/* Cfa/setup.scm 359 */

															BgL_method5298z00_3058 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3063,
																	(int) (BgL_modz00_3066)),
																(int) (BgL_restz00_3068));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_3058) (BgL_method5298z00_3058,
								(obj_t) (BgL_arg5699z00_2177), BEOA);
					}}
					{	/* Cfa/setup.scm 360 */
						BgL_failz00_bglt BgL_obj5260z00_2178;

						BgL_obj5260z00_2178 = ((BgL_failz00_bglt) BgL_nodez00_2171);
						{	/* Cfa/setup.scm 360 */
							obj_t BgL_auxz00_4399;

							BgL_objectz00_bglt BgL_auxz00_4397;

							BgL_auxz00_4399 =
								BGl_wideningzd2failzf2Cinfoz20zzcfa_infoz00
								(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
									(BGl_za2objza2z00zztype_cachez00)));
							BgL_auxz00_4397 = (BgL_objectz00_bglt) (BgL_obj5260z00_2178);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4397, BgL_auxz00_4399);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5260z00_2178),
							BGl_classzd2numzd2zz__objectz00
							(BGl_failzf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_4326 = BgL_obj5260z00_2178;
					}
					return (obj_t) (BgL_auxz00_4326);
				}
			}
		}
	}



/* node-setup!-conditio5356 */
	obj_t BGl_nodezd2setupz12zd2conditio5356z12zzcfa_setupz00(obj_t
		BgL_envz00_3513, obj_t BgL_nodez00_3514)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 344 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_2158;

				{	/* Cfa/setup.scm 345 */
					BgL_conditionalz00_bglt BgL_auxz00_4409;

					BgL_nodez00_2158 = (BgL_conditionalz00_bglt) (BgL_nodez00_3514);
					{	/* Cfa/setup.scm 346 */
						BgL_nodez00_bglt BgL_arg5690z00_2162;

						BgL_arg5690z00_2162 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2158))->BgL_testz00);
						{	/* Cfa/setup.scm 346 */
							obj_t BgL_method5298z00_2921;

							{	/* Cfa/setup.scm 346 */
								BgL_objectz00_bglt BgL_objz00_2922;

								BgL_objz00_2922 = (BgL_objectz00_bglt) (BgL_arg5690z00_2162);
								{	/* Cfa/setup.scm 346 */
									long BgL_objzd2classzd2numz00_2923;

									BgL_objzd2classzd2numz00_2923 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2922);
									{	/* Cfa/setup.scm 346 */
										obj_t BgL_arg2643z00_2924;

										BgL_arg2643z00_2924 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 346 */
											obj_t BgL_arrayz00_2926;

											int BgL_offsetz00_2927;

											BgL_arrayz00_2926 = BgL_arg2643z00_2924;
											BgL_offsetz00_2927 =
												(int) (BgL_objzd2classzd2numz00_2923);
											{	/* Cfa/setup.scm 346 */
												long BgL_offsetz00_2928;

												BgL_offsetz00_2928 =
													((long) (BgL_offsetz00_2927) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 346 */
													long BgL_modz00_2929;

													{	/* Cfa/setup.scm 346 */
														int BgL_arg2645z00_2930;

														BgL_arg2645z00_2930 = (int) (((long) 16));
														{	/* Cfa/setup.scm 346 */
															long BgL_auxz00_4419;

															BgL_auxz00_4419 = (long) (BgL_arg2645z00_2930);
															BgL_modz00_2929 =
																(BgL_offsetz00_2928 / BgL_auxz00_4419);
													}}
													{	/* Cfa/setup.scm 346 */
														long BgL_restz00_2931;

														{	/* Cfa/setup.scm 346 */
															int BgL_arg2644z00_2932;

															BgL_arg2644z00_2932 = (int) (((long) 16));
															{	/* Cfa/setup.scm 346 */
																long BgL_auxz00_4423;

																BgL_auxz00_4423 = (long) (BgL_arg2644z00_2932);
																BgL_restz00_2931 =
																	(BgL_offsetz00_2928 % BgL_auxz00_4423);
														}}
														{	/* Cfa/setup.scm 346 */

															BgL_method5298z00_2921 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2926,
																	(int) (BgL_modz00_2929)),
																(int) (BgL_restz00_2931));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2921) (BgL_method5298z00_2921,
								(obj_t) (BgL_arg5690z00_2162), BEOA);
					}}
					{	/* Cfa/setup.scm 347 */
						BgL_nodez00_bglt BgL_arg5691z00_2163;

						BgL_arg5691z00_2163 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2158))->BgL_truez00);
						{	/* Cfa/setup.scm 347 */
							obj_t BgL_method5298z00_2948;

							{	/* Cfa/setup.scm 347 */
								BgL_objectz00_bglt BgL_objz00_2949;

								BgL_objz00_2949 = (BgL_objectz00_bglt) (BgL_arg5691z00_2163);
								{	/* Cfa/setup.scm 347 */
									long BgL_objzd2classzd2numz00_2950;

									BgL_objzd2classzd2numz00_2950 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2949);
									{	/* Cfa/setup.scm 347 */
										obj_t BgL_arg2643z00_2951;

										BgL_arg2643z00_2951 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 347 */
											obj_t BgL_arrayz00_2953;

											int BgL_offsetz00_2954;

											BgL_arrayz00_2953 = BgL_arg2643z00_2951;
											BgL_offsetz00_2954 =
												(int) (BgL_objzd2classzd2numz00_2950);
											{	/* Cfa/setup.scm 347 */
												long BgL_offsetz00_2955;

												BgL_offsetz00_2955 =
													((long) (BgL_offsetz00_2954) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 347 */
													long BgL_modz00_2956;

													{	/* Cfa/setup.scm 347 */
														int BgL_arg2645z00_2957;

														BgL_arg2645z00_2957 = (int) (((long) 16));
														{	/* Cfa/setup.scm 347 */
															long BgL_auxz00_4442;

															BgL_auxz00_4442 = (long) (BgL_arg2645z00_2957);
															BgL_modz00_2956 =
																(BgL_offsetz00_2955 / BgL_auxz00_4442);
													}}
													{	/* Cfa/setup.scm 347 */
														long BgL_restz00_2958;

														{	/* Cfa/setup.scm 347 */
															int BgL_arg2644z00_2959;

															BgL_arg2644z00_2959 = (int) (((long) 16));
															{	/* Cfa/setup.scm 347 */
																long BgL_auxz00_4446;

																BgL_auxz00_4446 = (long) (BgL_arg2644z00_2959);
																BgL_restz00_2958 =
																	(BgL_offsetz00_2955 % BgL_auxz00_4446);
														}}
														{	/* Cfa/setup.scm 347 */

															BgL_method5298z00_2948 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2953,
																	(int) (BgL_modz00_2956)),
																(int) (BgL_restz00_2958));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2948) (BgL_method5298z00_2948,
								(obj_t) (BgL_arg5691z00_2163), BEOA);
					}}
					{	/* Cfa/setup.scm 348 */
						BgL_nodez00_bglt BgL_arg5692z00_2164;

						BgL_arg5692z00_2164 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2158))->
							BgL_falsez00);
						{	/* Cfa/setup.scm 348 */
							obj_t BgL_method5298z00_2975;

							{	/* Cfa/setup.scm 348 */
								BgL_objectz00_bglt BgL_objz00_2976;

								BgL_objz00_2976 = (BgL_objectz00_bglt) (BgL_arg5692z00_2164);
								{	/* Cfa/setup.scm 348 */
									long BgL_objzd2classzd2numz00_2977;

									BgL_objzd2classzd2numz00_2977 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2976);
									{	/* Cfa/setup.scm 348 */
										obj_t BgL_arg2643z00_2978;

										BgL_arg2643z00_2978 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 348 */
											obj_t BgL_arrayz00_2980;

											int BgL_offsetz00_2981;

											BgL_arrayz00_2980 = BgL_arg2643z00_2978;
											BgL_offsetz00_2981 =
												(int) (BgL_objzd2classzd2numz00_2977);
											{	/* Cfa/setup.scm 348 */
												long BgL_offsetz00_2982;

												BgL_offsetz00_2982 =
													((long) (BgL_offsetz00_2981) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 348 */
													long BgL_modz00_2983;

													{	/* Cfa/setup.scm 348 */
														int BgL_arg2645z00_2984;

														BgL_arg2645z00_2984 = (int) (((long) 16));
														{	/* Cfa/setup.scm 348 */
															long BgL_auxz00_4465;

															BgL_auxz00_4465 = (long) (BgL_arg2645z00_2984);
															BgL_modz00_2983 =
																(BgL_offsetz00_2982 / BgL_auxz00_4465);
													}}
													{	/* Cfa/setup.scm 348 */
														long BgL_restz00_2985;

														{	/* Cfa/setup.scm 348 */
															int BgL_arg2644z00_2986;

															BgL_arg2644z00_2986 = (int) (((long) 16));
															{	/* Cfa/setup.scm 348 */
																long BgL_auxz00_4469;

																BgL_auxz00_4469 = (long) (BgL_arg2644z00_2986);
																BgL_restz00_2985 =
																	(BgL_offsetz00_2982 % BgL_auxz00_4469);
														}}
														{	/* Cfa/setup.scm 348 */

															BgL_method5298z00_2975 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2980,
																	(int) (BgL_modz00_2983)),
																(int) (BgL_restz00_2985));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2975) (BgL_method5298z00_2975,
								(obj_t) (BgL_arg5692z00_2164), BEOA);
					}}
					{	/* Cfa/setup.scm 349 */
						BgL_conditionalz00_bglt BgL_obj5257z00_2165;

						BgL_obj5257z00_2165 = ((BgL_conditionalz00_bglt) BgL_nodez00_2158);
						{	/* Cfa/setup.scm 349 */
							obj_t BgL_auxz00_4482;

							BgL_objectz00_bglt BgL_auxz00_4480;

							BgL_auxz00_4482 =
								BGl_wideningzd2conditionalzf2Cinfoz20zzcfa_infoz00
								(BGl_makezd2emptyzd2approxz00zzcfa_approxz00());
							BgL_auxz00_4480 = (BgL_objectz00_bglt) (BgL_obj5257z00_2165);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4480, BgL_auxz00_4482);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5257z00_2165),
							BGl_classzd2numzd2zz__objectz00
							(BGl_conditionalzf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_4409 = BgL_obj5257z00_2165;
					}
					return (obj_t) (BgL_auxz00_4409);
				}
			}
		}
	}



/* node-setup!-setq5354 */
	obj_t BGl_nodezd2setupz12zd2setq5354z12zzcfa_setupz00(obj_t BgL_envz00_3515,
		obj_t BgL_nodez00_3516)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 333 */
			{
				BgL_setqz00_bglt BgL_nodez00_2146;

				{	/* Tools/trace.sch 53 */
					BgL_setqz00_bglt BgL_auxz00_4491;

					BgL_nodez00_2146 = (BgL_setqz00_bglt) (BgL_nodez00_3516);
					{	/* Cfa/setup.scm 336 */
						BgL_nodez00_bglt BgL_arg5684z00_2150;

						BgL_arg5684z00_2150 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_2146))->BgL_valuez00);
						{	/* Cfa/setup.scm 336 */
							obj_t BgL_method5298z00_2865;

							{	/* Cfa/setup.scm 336 */
								BgL_objectz00_bglt BgL_objz00_2866;

								BgL_objz00_2866 = (BgL_objectz00_bglt) (BgL_arg5684z00_2150);
								{	/* Cfa/setup.scm 336 */
									long BgL_objzd2classzd2numz00_2867;

									BgL_objzd2classzd2numz00_2867 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2866);
									{	/* Cfa/setup.scm 336 */
										obj_t BgL_arg2643z00_2868;

										BgL_arg2643z00_2868 =
											PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
											(int) (((long) 1)));
										{	/* Cfa/setup.scm 336 */
											obj_t BgL_arrayz00_2870;

											int BgL_offsetz00_2871;

											BgL_arrayz00_2870 = BgL_arg2643z00_2868;
											BgL_offsetz00_2871 =
												(int) (BgL_objzd2classzd2numz00_2867);
											{	/* Cfa/setup.scm 336 */
												long BgL_offsetz00_2872;

												BgL_offsetz00_2872 =
													((long) (BgL_offsetz00_2871) - OBJECT_TYPE);
												{	/* Cfa/setup.scm 336 */
													long BgL_modz00_2873;

													{	/* Cfa/setup.scm 336 */
														int BgL_arg2645z00_2874;

														BgL_arg2645z00_2874 = (int) (((long) 16));
														{	/* Cfa/setup.scm 336 */
															long BgL_auxz00_4501;

															BgL_auxz00_4501 = (long) (BgL_arg2645z00_2874);
															BgL_modz00_2873 =
																(BgL_offsetz00_2872 / BgL_auxz00_4501);
													}}
													{	/* Cfa/setup.scm 336 */
														long BgL_restz00_2875;

														{	/* Cfa/setup.scm 336 */
															int BgL_arg2644z00_2876;

															BgL_arg2644z00_2876 = (int) (((long) 16));
															{	/* Cfa/setup.scm 336 */
																long BgL_auxz00_4505;

																BgL_auxz00_4505 = (long) (BgL_arg2644z00_2876);
																BgL_restz00_2875 =
																	(BgL_offsetz00_2872 % BgL_auxz00_4505);
														}}
														{	/* Cfa/setup.scm 336 */

															BgL_method5298z00_2865 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2870,
																	(int) (BgL_modz00_2873)),
																(int) (BgL_restz00_2875));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2865) (BgL_method5298z00_2865,
								(obj_t) (BgL_arg5684z00_2150), BEOA);
					}}
					{	/* Cfa/setup.scm 337 */
						BgL_varz00_bglt BgL_arg5685z00_2151;

						BgL_arg5685z00_2151 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_2146))->BgL_varz00);
						{	/* Cfa/setup.scm 337 */
							BgL_nodez00_bglt BgL_nodez00_2891;

							BgL_nodez00_2891 = (BgL_nodez00_bglt) (BgL_arg5685z00_2151);
							{	/* Cfa/setup.scm 337 */
								obj_t BgL_method5298z00_2892;

								{	/* Cfa/setup.scm 337 */
									BgL_objectz00_bglt BgL_objz00_2893;

									BgL_objz00_2893 = (BgL_objectz00_bglt) (BgL_nodez00_2891);
									{	/* Cfa/setup.scm 337 */
										long BgL_objzd2classzd2numz00_2894;

										BgL_objzd2classzd2numz00_2894 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2893);
										{	/* Cfa/setup.scm 337 */
											obj_t BgL_arg2643z00_2895;

											BgL_arg2643z00_2895 =
												PROCEDURE_REF
												(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
												(int) (((long) 1)));
											{	/* Cfa/setup.scm 337 */
												obj_t BgL_arrayz00_2897;

												int BgL_offsetz00_2898;

												BgL_arrayz00_2897 = BgL_arg2643z00_2895;
												BgL_offsetz00_2898 =
													(int) (BgL_objzd2classzd2numz00_2894);
												{	/* Cfa/setup.scm 337 */
													long BgL_offsetz00_2899;

													BgL_offsetz00_2899 =
														((long) (BgL_offsetz00_2898) - OBJECT_TYPE);
													{	/* Cfa/setup.scm 337 */
														long BgL_modz00_2900;

														{	/* Cfa/setup.scm 337 */
															int BgL_arg2645z00_2901;

															BgL_arg2645z00_2901 = (int) (((long) 16));
															{	/* Cfa/setup.scm 337 */
																long BgL_auxz00_4525;

																BgL_auxz00_4525 = (long) (BgL_arg2645z00_2901);
																BgL_modz00_2900 =
																	(BgL_offsetz00_2899 / BgL_auxz00_4525);
														}}
														{	/* Cfa/setup.scm 337 */
															long BgL_restz00_2902;

															{	/* Cfa/setup.scm 337 */
																int BgL_arg2644z00_2903;

																BgL_arg2644z00_2903 = (int) (((long) 16));
																{	/* Cfa/setup.scm 337 */
																	long BgL_auxz00_4529;

																	BgL_auxz00_4529 =
																		(long) (BgL_arg2644z00_2903);
																	BgL_restz00_2902 =
																		(BgL_offsetz00_2899 % BgL_auxz00_4529);
															}}
															{	/* Cfa/setup.scm 337 */

																BgL_method5298z00_2892 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2897,
																		(int) (BgL_modz00_2900)),
																	(int) (BgL_restz00_2902));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5298z00_2892) (BgL_method5298z00_2892,
									(obj_t) (BgL_nodez00_2891), BEOA);
					}}}
					{	/* Cfa/setup.scm 338 */
						BgL_setqz00_bglt BgL_obj5254z00_2152;

						BgL_obj5254z00_2152 = ((BgL_setqz00_bglt) BgL_nodez00_2146);
						{	/* Cfa/setup.scm 338 */
							obj_t BgL_auxz00_4542;

							BgL_objectz00_bglt BgL_auxz00_4540;

							BgL_auxz00_4542 =
								BGl_wideningzd2setqzf2Cinfoz20zzcfa_infoz00
								(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
									(BGl_za2unspecza2z00zztype_cachez00)));
							BgL_auxz00_4540 = (BgL_objectz00_bglt) (BgL_obj5254z00_2152);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4540, BgL_auxz00_4542);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5254z00_2152),
							BGl_classzd2numzd2zz__objectz00
							(BGl_setqzf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_4491 = BgL_obj5254z00_2152;
					}
					return (obj_t) (BgL_auxz00_4491);
				}
			}
		}
	}



/* node-setup!-cast5352 */
	obj_t BGl_nodezd2setupz12zd2cast5352z12zzcfa_setupz00(obj_t BgL_envz00_3517,
		obj_t BgL_nodez00_3518)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 326 */
			{
				BgL_castz00_bglt BgL_nodez00_2139;

				BgL_nodez00_2139 = (BgL_castz00_bglt) (BgL_nodez00_3518);
				{	/* Cfa/setup.scm 327 */
					BgL_nodez00_bglt BgL_arg5682z00_2835;

					BgL_arg5682z00_2835 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_2139))->BgL_argz00);
					{	/* Cfa/setup.scm 327 */
						obj_t BgL_method5298z00_2838;

						{	/* Cfa/setup.scm 327 */
							BgL_objectz00_bglt BgL_objz00_2839;

							BgL_objz00_2839 = (BgL_objectz00_bglt) (BgL_arg5682z00_2835);
							{	/* Cfa/setup.scm 327 */
								long BgL_objzd2classzd2numz00_2840;

								BgL_objzd2classzd2numz00_2840 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2839);
								{	/* Cfa/setup.scm 327 */
									obj_t BgL_arg2643z00_2841;

									BgL_arg2643z00_2841 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 327 */
										obj_t BgL_arrayz00_2843;

										int BgL_offsetz00_2844;

										BgL_arrayz00_2843 = BgL_arg2643z00_2841;
										BgL_offsetz00_2844 = (int) (BgL_objzd2classzd2numz00_2840);
										{	/* Cfa/setup.scm 327 */
											long BgL_offsetz00_2845;

											BgL_offsetz00_2845 =
												((long) (BgL_offsetz00_2844) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 327 */
												long BgL_modz00_2846;

												{	/* Cfa/setup.scm 327 */
													int BgL_arg2645z00_2847;

													BgL_arg2645z00_2847 = (int) (((long) 16));
													{	/* Cfa/setup.scm 327 */
														long BgL_auxz00_4561;

														BgL_auxz00_4561 = (long) (BgL_arg2645z00_2847);
														BgL_modz00_2846 =
															(BgL_offsetz00_2845 / BgL_auxz00_4561);
												}}
												{	/* Cfa/setup.scm 327 */
													long BgL_restz00_2848;

													{	/* Cfa/setup.scm 327 */
														int BgL_arg2644z00_2849;

														BgL_arg2644z00_2849 = (int) (((long) 16));
														{	/* Cfa/setup.scm 327 */
															long BgL_auxz00_4565;

															BgL_auxz00_4565 = (long) (BgL_arg2644z00_2849);
															BgL_restz00_2848 =
																(BgL_offsetz00_2845 % BgL_auxz00_4565);
													}}
													{	/* Cfa/setup.scm 327 */

														BgL_method5298z00_2838 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2843,
																(int) (BgL_modz00_2846)),
															(int) (BgL_restz00_2848));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2838) (BgL_method5298z00_2838,
							(obj_t) (BgL_arg5682z00_2835), BEOA);
					}
				}
			}
		}
	}



/* node-setup!-cast-nul5350 */
	obj_t BGl_nodezd2setupz12zd2castzd2nul5350zc0zzcfa_setupz00(obj_t
		BgL_envz00_3519, obj_t BgL_nodez00_3520)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 318 */
			{
				BgL_castzd2nullzd2_bglt BgL_nodez00_2128;

				{	/* Cfa/setup.scm 319 */
					BgL_castzd2nullzd2_bglt BgL_auxz00_4576;

					BgL_nodez00_2128 = (BgL_castzd2nullzd2_bglt) (BgL_nodez00_3520);
					{	/* Cfa/setup.scm 320 */
						BgL_castzd2nullzd2_bglt BgL_obj5249z00_2132;

						BgL_obj5249z00_2132 = ((BgL_castzd2nullzd2_bglt) BgL_nodez00_2128);
						{	/* Cfa/setup.scm 321 */
							obj_t BgL_arg5677z00_2133;

							{	/* Cfa/setup.scm 321 */
								BgL_approxz00_bglt BgL_arg5678z00_2134;

								{	/* Cfa/setup.scm 321 */
									BgL_typez00_bglt BgL_arg5679z00_2135;

									{
										BgL_nodez00_bglt BgL_auxz00_4578;

										BgL_auxz00_4578 = (BgL_nodez00_bglt) (BgL_nodez00_2128);
										BgL_arg5679z00_2135 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4578))->BgL_typez00);
									}
									BgL_arg5678z00_2134 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5679z00_2135);
								}
								BgL_arg5677z00_2133 =
									BGl_wideningzd2castzd2nullzf2Cinfozf2zzcfa_info3z00
									(BgL_arg5678z00_2134);
							}
							{	/* Cfa/setup.scm 320 */
								BgL_objectz00_bglt BgL_auxz00_4583;

								BgL_auxz00_4583 = (BgL_objectz00_bglt) (BgL_obj5249z00_2132);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4583, BgL_arg5677z00_2133);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5249z00_2132),
							BGl_classzd2numzd2zz__objectz00
							(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
						BgL_auxz00_4576 = BgL_obj5249z00_2132;
					}
					return (obj_t) (BgL_auxz00_4576);
				}
			}
		}
	}



/* node-setup!-isa5348 */
	obj_t BGl_nodezd2setupz12zd2isa5348z12zzcfa_setupz00(obj_t BgL_envz00_3521,
		obj_t BgL_nodez00_3522)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 308 */
			{
				BgL_isaz00_bglt BgL_nodez00_2115;

				BgL_nodez00_2115 = (BgL_isaz00_bglt) (BgL_nodez00_3522);
				{	/* Cfa/setup.scm 310 */
					obj_t BgL_arg5670z00_2119;

					{
						BgL_externz00_bglt BgL_auxz00_4591;

						BgL_auxz00_4591 = (BgL_externz00_bglt) (BgL_nodez00_2115);
						BgL_arg5670z00_2119 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4591))->BgL_exprza2za2);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5670z00_2119);
				}
				{	/* Cfa/setup.scm 311 */
					BgL_isaz00_bglt BgL_obj5246z00_2120;

					BgL_obj5246z00_2120 = ((BgL_isaz00_bglt) BgL_nodez00_2115);
					{	/* Cfa/setup.scm 312 */
						obj_t BgL_arg5671z00_2121;

						{	/* Cfa/setup.scm 312 */
							BgL_approxz00_bglt BgL_arg5672z00_2122;

							{	/* Cfa/setup.scm 312 */
								BgL_typez00_bglt BgL_arg5673z00_2123;

								{
									BgL_nodez00_bglt BgL_auxz00_4596;

									BgL_auxz00_4596 = (BgL_nodez00_bglt) (BgL_nodez00_2115);
									BgL_arg5673z00_2123 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4596))->BgL_typez00);
								}
								BgL_arg5672z00_2122 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg5673z00_2123);
							}
							BgL_arg5671z00_2121 =
								BGl_wideningzd2isazf2Cinfoz20zzcfa_info3z00
								(BgL_arg5672z00_2122);
						}
						{	/* Cfa/setup.scm 311 */
							BgL_objectz00_bglt BgL_auxz00_4601;

							BgL_auxz00_4601 = (BgL_objectz00_bglt) (BgL_obj5246z00_2120);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4601, BgL_arg5671z00_2121);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5246z00_2120),
						BGl_classzd2numzd2zz__objectz00(BGl_isazf2Cinfozf2zzcfa_info3z00));
					BgL_obj5246z00_2120;
				}
				{	/* Cfa/setup.scm 313 */
					BgL_approxz00_bglt BgL_arg5675z00_2125;

					{	/* Cfa/setup.scm 313 */
						BgL_isazf2cinfozf2_bglt BgL_obj4866z00_2830;

						BgL_obj4866z00_2830 = (BgL_isazf2cinfozf2_bglt) (BgL_nodez00_2115);
						{
							obj_t BgL_auxz00_4608;

							{	/* Cfa/setup.scm 313 */
								BgL_objectz00_bglt BgL_auxz00_4609;

								BgL_auxz00_4609 = (BgL_objectz00_bglt) (BgL_obj4866z00_2830);
								BgL_auxz00_4608 = BGL_OBJECT_WIDENING(BgL_auxz00_4609);
							}
							BgL_arg5675z00_2125 =
								(((BgL_isazf2cinfozf2_bglt) CREF(BgL_auxz00_4608))->
								BgL_approxz00);
						}
					}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5675z00_2125);
				}
			}
		}
	}



/* node-setup!-new5346 */
	obj_t BGl_nodezd2setupz12zd2new5346z12zzcfa_setupz00(obj_t BgL_envz00_3523,
		obj_t BgL_nodez00_3524)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 298 */
			{
				BgL_newz00_bglt BgL_nodez00_2102;

				BgL_nodez00_2102 = (BgL_newz00_bglt) (BgL_nodez00_3524);
				{	/* Cfa/setup.scm 300 */
					obj_t BgL_arg5663z00_2106;

					{
						BgL_externz00_bglt BgL_auxz00_4615;

						BgL_auxz00_4615 = (BgL_externz00_bglt) (BgL_nodez00_2102);
						BgL_arg5663z00_2106 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4615))->BgL_exprza2za2);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5663z00_2106);
				}
				{	/* Cfa/setup.scm 301 */
					BgL_newz00_bglt BgL_obj5243z00_2107;

					BgL_obj5243z00_2107 = ((BgL_newz00_bglt) BgL_nodez00_2102);
					{	/* Cfa/setup.scm 302 */
						obj_t BgL_arg5664z00_2108;

						{	/* Cfa/setup.scm 302 */
							BgL_approxz00_bglt BgL_arg5665z00_2109;

							{	/* Cfa/setup.scm 302 */
								BgL_typez00_bglt BgL_arg5666z00_2110;

								{
									BgL_nodez00_bglt BgL_auxz00_4620;

									BgL_auxz00_4620 = (BgL_nodez00_bglt) (BgL_nodez00_2102);
									BgL_arg5666z00_2110 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4620))->BgL_typez00);
								}
								BgL_arg5665z00_2109 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg5666z00_2110);
							}
							BgL_arg5664z00_2108 =
								BGl_wideningzd2newzf2Cinfoz20zzcfa_info3z00
								(BgL_arg5665z00_2109);
						}
						{	/* Cfa/setup.scm 301 */
							BgL_objectz00_bglt BgL_auxz00_4625;

							BgL_auxz00_4625 = (BgL_objectz00_bglt) (BgL_obj5243z00_2107);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4625, BgL_arg5664z00_2108);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5243z00_2107),
						BGl_classzd2numzd2zz__objectz00(BGl_newzf2Cinfozf2zzcfa_info3z00));
					BgL_obj5243z00_2107;
				}
				{	/* Cfa/setup.scm 303 */
					BgL_approxz00_bglt BgL_arg5668z00_2112;

					{	/* Cfa/setup.scm 303 */
						BgL_newzf2cinfozf2_bglt BgL_obj4832z00_2825;

						BgL_obj4832z00_2825 = (BgL_newzf2cinfozf2_bglt) (BgL_nodez00_2102);
						{
							obj_t BgL_auxz00_4632;

							{	/* Cfa/setup.scm 303 */
								BgL_objectz00_bglt BgL_auxz00_4633;

								BgL_auxz00_4633 = (BgL_objectz00_bglt) (BgL_obj4832z00_2825);
								BgL_auxz00_4632 = BGL_OBJECT_WIDENING(BgL_auxz00_4633);
							}
							BgL_arg5668z00_2112 =
								(((BgL_newzf2cinfozf2_bglt) CREF(BgL_auxz00_4632))->
								BgL_approxz00);
						}
					}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5668z00_2112);
				}
			}
		}
	}



/* node-setup!-setfield5344 */
	obj_t BGl_nodezd2setupz12zd2setfield5344z12zzcfa_setupz00(obj_t
		BgL_envz00_3525, obj_t BgL_nodez00_3526)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 288 */
			{
				BgL_setfieldz00_bglt BgL_nodez00_2089;

				BgL_nodez00_2089 = (BgL_setfieldz00_bglt) (BgL_nodez00_3526);
				{	/* Cfa/setup.scm 290 */
					obj_t BgL_arg5656z00_2093;

					{
						BgL_externz00_bglt BgL_auxz00_4639;

						BgL_auxz00_4639 = (BgL_externz00_bglt) (BgL_nodez00_2089);
						BgL_arg5656z00_2093 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4639))->BgL_exprza2za2);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5656z00_2093);
				}
				{	/* Cfa/setup.scm 291 */
					BgL_setfieldz00_bglt BgL_obj5240z00_2094;

					BgL_obj5240z00_2094 = ((BgL_setfieldz00_bglt) BgL_nodez00_2089);
					{	/* Cfa/setup.scm 292 */
						obj_t BgL_arg5657z00_2095;

						{	/* Cfa/setup.scm 292 */
							BgL_approxz00_bglt BgL_arg5658z00_2096;

							{	/* Cfa/setup.scm 292 */
								BgL_typez00_bglt BgL_arg5659z00_2097;

								{
									BgL_nodez00_bglt BgL_auxz00_4644;

									BgL_auxz00_4644 = (BgL_nodez00_bglt) (BgL_nodez00_2089);
									BgL_arg5659z00_2097 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4644))->BgL_typez00);
								}
								BgL_arg5658z00_2096 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg5659z00_2097);
							}
							BgL_arg5657z00_2095 =
								BGl_wideningzd2setfieldzf2Cinfoz20zzcfa_info3z00
								(BgL_arg5658z00_2096);
						}
						{	/* Cfa/setup.scm 291 */
							BgL_objectz00_bglt BgL_auxz00_4649;

							BgL_auxz00_4649 = (BgL_objectz00_bglt) (BgL_obj5240z00_2094);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4649, BgL_arg5657z00_2095);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5240z00_2094),
						BGl_classzd2numzd2zz__objectz00
						(BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
					BgL_obj5240z00_2094;
				}
				{	/* Cfa/setup.scm 293 */
					BgL_approxz00_bglt BgL_arg5661z00_2099;

					{	/* Cfa/setup.scm 293 */
						BgL_setfieldzf2cinfozf2_bglt BgL_obj4798z00_2820;

						BgL_obj4798z00_2820 =
							(BgL_setfieldzf2cinfozf2_bglt) (BgL_nodez00_2089);
						{
							obj_t BgL_auxz00_4656;

							{	/* Cfa/setup.scm 293 */
								BgL_objectz00_bglt BgL_auxz00_4657;

								BgL_auxz00_4657 = (BgL_objectz00_bglt) (BgL_obj4798z00_2820);
								BgL_auxz00_4656 = BGL_OBJECT_WIDENING(BgL_auxz00_4657);
							}
							BgL_arg5661z00_2099 =
								(((BgL_setfieldzf2cinfozf2_bglt) CREF(BgL_auxz00_4656))->
								BgL_approxz00);
						}
					}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5661z00_2099);
				}
			}
		}
	}



/* node-setup!-getfield5342 */
	obj_t BGl_nodezd2setupz12zd2getfield5342z12zzcfa_setupz00(obj_t
		BgL_envz00_3527, obj_t BgL_nodez00_3528)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 278 */
			{
				BgL_getfieldz00_bglt BgL_nodez00_2076;

				BgL_nodez00_2076 = (BgL_getfieldz00_bglt) (BgL_nodez00_3528);
				{	/* Cfa/setup.scm 280 */
					obj_t BgL_arg5649z00_2080;

					{
						BgL_externz00_bglt BgL_auxz00_4663;

						BgL_auxz00_4663 = (BgL_externz00_bglt) (BgL_nodez00_2076);
						BgL_arg5649z00_2080 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4663))->BgL_exprza2za2);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5649z00_2080);
				}
				{	/* Cfa/setup.scm 281 */
					BgL_getfieldz00_bglt BgL_obj5237z00_2081;

					BgL_obj5237z00_2081 = ((BgL_getfieldz00_bglt) BgL_nodez00_2076);
					{	/* Cfa/setup.scm 282 */
						obj_t BgL_arg5650z00_2082;

						{	/* Cfa/setup.scm 282 */
							BgL_approxz00_bglt BgL_arg5651z00_2083;

							{	/* Cfa/setup.scm 282 */
								BgL_typez00_bglt BgL_arg5652z00_2084;

								{
									BgL_nodez00_bglt BgL_auxz00_4668;

									BgL_auxz00_4668 = (BgL_nodez00_bglt) (BgL_nodez00_2076);
									BgL_arg5652z00_2084 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4668))->BgL_typez00);
								}
								BgL_arg5651z00_2083 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg5652z00_2084);
							}
							BgL_arg5650z00_2082 =
								BGl_wideningzd2getfieldzf2Cinfoz20zzcfa_info3z00
								(BgL_arg5651z00_2083);
						}
						{	/* Cfa/setup.scm 281 */
							BgL_objectz00_bglt BgL_auxz00_4673;

							BgL_auxz00_4673 = (BgL_objectz00_bglt) (BgL_obj5237z00_2081);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4673, BgL_arg5650z00_2082);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5237z00_2081),
						BGl_classzd2numzd2zz__objectz00
						(BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
					BgL_obj5237z00_2081;
				}
				{	/* Cfa/setup.scm 283 */
					BgL_approxz00_bglt BgL_arg5654z00_2086;

					{	/* Cfa/setup.scm 283 */
						BgL_getfieldzf2cinfozf2_bglt BgL_obj4760z00_2815;

						BgL_obj4760z00_2815 =
							(BgL_getfieldzf2cinfozf2_bglt) (BgL_nodez00_2076);
						{
							obj_t BgL_auxz00_4680;

							{	/* Cfa/setup.scm 283 */
								BgL_objectz00_bglt BgL_auxz00_4681;

								BgL_auxz00_4681 = (BgL_objectz00_bglt) (BgL_obj4760z00_2815);
								BgL_auxz00_4680 = BGL_OBJECT_WIDENING(BgL_auxz00_4681);
							}
							BgL_arg5654z00_2086 =
								(((BgL_getfieldzf2cinfozf2_bglt) CREF(BgL_auxz00_4680))->
								BgL_approxz00);
						}
					}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5654z00_2086);
				}
			}
		}
	}



/* node-setup!-pragma5340 */
	obj_t BGl_nodezd2setupz12zd2pragma5340z12zzcfa_setupz00(obj_t BgL_envz00_3529,
		obj_t BgL_nodez00_3530)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 268 */
			{
				BgL_pragmaz00_bglt BgL_nodez00_2063;

				BgL_nodez00_2063 = (BgL_pragmaz00_bglt) (BgL_nodez00_3530);
				{	/* Cfa/setup.scm 270 */
					obj_t BgL_arg5642z00_2067;

					{
						BgL_externz00_bglt BgL_auxz00_4687;

						BgL_auxz00_4687 = (BgL_externz00_bglt) (BgL_nodez00_2063);
						BgL_arg5642z00_2067 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4687))->BgL_exprza2za2);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5642z00_2067);
				}
				{	/* Cfa/setup.scm 271 */
					BgL_pragmaz00_bglt BgL_obj5234z00_2068;

					BgL_obj5234z00_2068 = ((BgL_pragmaz00_bglt) BgL_nodez00_2063);
					{	/* Cfa/setup.scm 272 */
						obj_t BgL_arg5643z00_2069;

						{	/* Cfa/setup.scm 272 */
							BgL_approxz00_bglt BgL_arg5644z00_2070;

							{	/* Cfa/setup.scm 272 */
								BgL_typez00_bglt BgL_arg5645z00_2071;

								{
									BgL_nodez00_bglt BgL_auxz00_4692;

									BgL_auxz00_4692 = (BgL_nodez00_bglt) (BgL_nodez00_2063);
									BgL_arg5645z00_2071 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4692))->BgL_typez00);
								}
								BgL_arg5644z00_2070 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg5645z00_2071);
							}
							BgL_arg5643z00_2069 =
								BGl_wideningzd2pragmazf2Cinfoz20zzcfa_info3z00
								(BgL_arg5644z00_2070);
						}
						{	/* Cfa/setup.scm 271 */
							BgL_objectz00_bglt BgL_auxz00_4697;

							BgL_auxz00_4697 = (BgL_objectz00_bglt) (BgL_obj5234z00_2068);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4697, BgL_arg5643z00_2069);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5234z00_2068),
						BGl_classzd2numzd2zz__objectz00
						(BGl_pragmazf2Cinfozf2zzcfa_info3z00));
					BgL_obj5234z00_2068;
				}
				{	/* Cfa/setup.scm 273 */
					BgL_approxz00_bglt BgL_arg5647z00_2073;

					{	/* Cfa/setup.scm 273 */
						BgL_pragmazf2cinfozf2_bglt BgL_obj4726z00_2810;

						BgL_obj4726z00_2810 =
							(BgL_pragmazf2cinfozf2_bglt) (BgL_nodez00_2063);
						{
							obj_t BgL_auxz00_4704;

							{	/* Cfa/setup.scm 273 */
								BgL_objectz00_bglt BgL_auxz00_4705;

								BgL_auxz00_4705 = (BgL_objectz00_bglt) (BgL_obj4726z00_2810);
								BgL_auxz00_4704 = BGL_OBJECT_WIDENING(BgL_auxz00_4705);
							}
							BgL_arg5647z00_2073 =
								(((BgL_pragmazf2cinfozf2_bglt) CREF(BgL_auxz00_4704))->
								BgL_approxz00);
						}
					}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5647z00_2073);
				}
			}
		}
	}



/* node-setup!-funcall5338 */
	obj_t BGl_nodezd2setupz12zd2funcall5338z12zzcfa_setupz00(obj_t
		BgL_envz00_3531, obj_t BgL_nodez00_3532)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 256 */
			{
				BgL_funcallz00_bglt BgL_nodez00_2043;

				BgL_nodez00_2043 = (BgL_funcallz00_bglt) (BgL_nodez00_3532);
				{	/* Cfa/setup.scm 258 */
					BgL_nodez00_bglt BgL_arg5626z00_2047;

					BgL_arg5626z00_2047 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_2043))->BgL_funz00);
					{	/* Cfa/setup.scm 258 */
						obj_t BgL_method5298z00_2773;

						{	/* Cfa/setup.scm 258 */
							BgL_objectz00_bglt BgL_objz00_2774;

							BgL_objz00_2774 = (BgL_objectz00_bglt) (BgL_arg5626z00_2047);
							{	/* Cfa/setup.scm 258 */
								long BgL_objzd2classzd2numz00_2775;

								BgL_objzd2classzd2numz00_2775 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2774);
								{	/* Cfa/setup.scm 258 */
									obj_t BgL_arg2643z00_2776;

									BgL_arg2643z00_2776 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 258 */
										obj_t BgL_arrayz00_2778;

										int BgL_offsetz00_2779;

										BgL_arrayz00_2778 = BgL_arg2643z00_2776;
										BgL_offsetz00_2779 = (int) (BgL_objzd2classzd2numz00_2775);
										{	/* Cfa/setup.scm 258 */
											long BgL_offsetz00_2780;

											BgL_offsetz00_2780 =
												((long) (BgL_offsetz00_2779) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 258 */
												long BgL_modz00_2781;

												{	/* Cfa/setup.scm 258 */
													int BgL_arg2645z00_2782;

													BgL_arg2645z00_2782 = (int) (((long) 16));
													{	/* Cfa/setup.scm 258 */
														long BgL_auxz00_4720;

														BgL_auxz00_4720 = (long) (BgL_arg2645z00_2782);
														BgL_modz00_2781 =
															(BgL_offsetz00_2780 / BgL_auxz00_4720);
												}}
												{	/* Cfa/setup.scm 258 */
													long BgL_restz00_2783;

													{	/* Cfa/setup.scm 258 */
														int BgL_arg2644z00_2784;

														BgL_arg2644z00_2784 = (int) (((long) 16));
														{	/* Cfa/setup.scm 258 */
															long BgL_auxz00_4724;

															BgL_auxz00_4724 = (long) (BgL_arg2644z00_2784);
															BgL_restz00_2783 =
																(BgL_offsetz00_2780 % BgL_auxz00_4724);
													}}
													{	/* Cfa/setup.scm 258 */

														BgL_method5298z00_2773 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2778,
																(int) (BgL_modz00_2781)),
															(int) (BgL_restz00_2783));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2773) (BgL_method5298z00_2773,
							(obj_t) (BgL_arg5626z00_2047), BEOA);
				}}
				{	/* Cfa/setup.scm 259 */
					obj_t BgL_arg5627z00_2048;

					BgL_arg5627z00_2048 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_2043))->BgL_argsz00);
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5627z00_2048);
				}
				{	/* Cfa/setup.scm 260 */
					BgL_funcallz00_bglt BgL_obj5231z00_2049;

					BgL_obj5231z00_2049 = ((BgL_funcallz00_bglt) BgL_nodez00_2043);
					{	/* Cfa/setup.scm 261 */
						obj_t BgL_arg5628z00_2050;

						{	/* Cfa/setup.scm 261 */
							BgL_approxz00_bglt BgL_arg5629z00_2051;

							BgL_approxz00_bglt BgL_arg5630z00_2052;

							bool_t BgL_arg5631z00_2053;

							bool_t BgL_arg5632z00_2054;

							BgL_arg5629z00_2051 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(
								(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
							BgL_arg5630z00_2052 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(
								(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
							{	/* Cfa/cinfo.scm 84 */
								int BgL_arg5633z00_2055;

								BgL_arg5633z00_2055 = BGl_bigloozd2warningzd2zz__paramz00();
								BgL_arg5631z00_2053 =
									((long) (BgL_arg5633z00_2055) == ((long) 0));
							}
							{	/* Cfa/cinfo.scm 85 */
								int BgL_arg5635z00_2057;

								BgL_arg5635z00_2057 = BGl_bigloozd2warningzd2zz__paramz00();
								BgL_arg5632z00_2054 =
									((long) (BgL_arg5635z00_2057) == ((long) 0));
							}
							BgL_arg5628z00_2050 =
								BGl_wideningzd2funcallzf2Cinfoz20zzcfa_infoz00
								(BgL_arg5629z00_2051, BgL_arg5630z00_2052, BgL_arg5631z00_2053,
								BgL_arg5632z00_2054);
						}
						{	/* Cfa/setup.scm 260 */
							BgL_objectz00_bglt BgL_auxz00_4748;

							BgL_auxz00_4748 = (BgL_objectz00_bglt) (BgL_obj5231z00_2049);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4748, BgL_arg5628z00_2050);
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5231z00_2049),
						BGl_classzd2numzd2zz__objectz00
						(BGl_funcallzf2Cinfozf2zzcfa_infoz00));
					BgL_obj5231z00_2049;
				}
				{	/* Cfa/setup.scm 263 */
					BgL_approxz00_bglt BgL_arg5640z00_2060;

					{	/* Cfa/setup.scm 263 */
						BgL_funcallzf2cinfozf2_bglt BgL_obj3779z00_2805;

						BgL_obj3779z00_2805 =
							(BgL_funcallzf2cinfozf2_bglt) (BgL_nodez00_2043);
						{
							obj_t BgL_auxz00_4755;

							{	/* Cfa/setup.scm 263 */
								BgL_objectz00_bglt BgL_auxz00_4756;

								BgL_auxz00_4756 = (BgL_objectz00_bglt) (BgL_obj3779z00_2805);
								BgL_auxz00_4755 = BGL_OBJECT_WIDENING(BgL_auxz00_4756);
							}
							BgL_arg5640z00_2060 =
								(((BgL_funcallzf2cinfozf2_bglt) CREF(BgL_auxz00_4755))->
								BgL_vazd2approxzd2);
					}}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5640z00_2060);
				}
			}
		}
	}



/* node-setup!-app-ly5336 */
	obj_t BGl_nodezd2setupz12zd2appzd2ly5336zc0zzcfa_setupz00(obj_t
		BgL_envz00_3533, obj_t BgL_nodez00_3534)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 245 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_2030;

				BgL_nodez00_2030 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3534);
				{	/* Cfa/setup.scm 247 */
					BgL_nodez00_bglt BgL_arg5619z00_2034;

					BgL_arg5619z00_2034 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2030))->BgL_funz00);
					{	/* Cfa/setup.scm 247 */
						obj_t BgL_method5298z00_2716;

						{	/* Cfa/setup.scm 247 */
							BgL_objectz00_bglt BgL_objz00_2717;

							BgL_objz00_2717 = (BgL_objectz00_bglt) (BgL_arg5619z00_2034);
							{	/* Cfa/setup.scm 247 */
								long BgL_objzd2classzd2numz00_2718;

								BgL_objzd2classzd2numz00_2718 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2717);
								{	/* Cfa/setup.scm 247 */
									obj_t BgL_arg2643z00_2719;

									BgL_arg2643z00_2719 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 247 */
										obj_t BgL_arrayz00_2721;

										int BgL_offsetz00_2722;

										BgL_arrayz00_2721 = BgL_arg2643z00_2719;
										BgL_offsetz00_2722 = (int) (BgL_objzd2classzd2numz00_2718);
										{	/* Cfa/setup.scm 247 */
											long BgL_offsetz00_2723;

											BgL_offsetz00_2723 =
												((long) (BgL_offsetz00_2722) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 247 */
												long BgL_modz00_2724;

												{	/* Cfa/setup.scm 247 */
													int BgL_arg2645z00_2725;

													BgL_arg2645z00_2725 = (int) (((long) 16));
													{	/* Cfa/setup.scm 247 */
														long BgL_auxz00_4771;

														BgL_auxz00_4771 = (long) (BgL_arg2645z00_2725);
														BgL_modz00_2724 =
															(BgL_offsetz00_2723 / BgL_auxz00_4771);
												}}
												{	/* Cfa/setup.scm 247 */
													long BgL_restz00_2726;

													{	/* Cfa/setup.scm 247 */
														int BgL_arg2644z00_2727;

														BgL_arg2644z00_2727 = (int) (((long) 16));
														{	/* Cfa/setup.scm 247 */
															long BgL_auxz00_4775;

															BgL_auxz00_4775 = (long) (BgL_arg2644z00_2727);
															BgL_restz00_2726 =
																(BgL_offsetz00_2723 % BgL_auxz00_4775);
													}}
													{	/* Cfa/setup.scm 247 */

														BgL_method5298z00_2716 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2721,
																(int) (BgL_modz00_2724)),
															(int) (BgL_restz00_2726));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2716) (BgL_method5298z00_2716,
							(obj_t) (BgL_arg5619z00_2034), BEOA);
				}}
				{	/* Cfa/setup.scm 248 */
					BgL_nodez00_bglt BgL_arg5620z00_2035;

					BgL_arg5620z00_2035 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2030))->BgL_argz00);
					{	/* Cfa/setup.scm 248 */
						obj_t BgL_method5298z00_2743;

						{	/* Cfa/setup.scm 248 */
							BgL_objectz00_bglt BgL_objz00_2744;

							BgL_objz00_2744 = (BgL_objectz00_bglt) (BgL_arg5620z00_2035);
							{	/* Cfa/setup.scm 248 */
								long BgL_objzd2classzd2numz00_2745;

								BgL_objzd2classzd2numz00_2745 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2744);
								{	/* Cfa/setup.scm 248 */
									obj_t BgL_arg2643z00_2746;

									BgL_arg2643z00_2746 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 248 */
										obj_t BgL_arrayz00_2748;

										int BgL_offsetz00_2749;

										BgL_arrayz00_2748 = BgL_arg2643z00_2746;
										BgL_offsetz00_2749 = (int) (BgL_objzd2classzd2numz00_2745);
										{	/* Cfa/setup.scm 248 */
											long BgL_offsetz00_2750;

											BgL_offsetz00_2750 =
												((long) (BgL_offsetz00_2749) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 248 */
												long BgL_modz00_2751;

												{	/* Cfa/setup.scm 248 */
													int BgL_arg2645z00_2752;

													BgL_arg2645z00_2752 = (int) (((long) 16));
													{	/* Cfa/setup.scm 248 */
														long BgL_auxz00_4794;

														BgL_auxz00_4794 = (long) (BgL_arg2645z00_2752);
														BgL_modz00_2751 =
															(BgL_offsetz00_2750 / BgL_auxz00_4794);
												}}
												{	/* Cfa/setup.scm 248 */
													long BgL_restz00_2753;

													{	/* Cfa/setup.scm 248 */
														int BgL_arg2644z00_2754;

														BgL_arg2644z00_2754 = (int) (((long) 16));
														{	/* Cfa/setup.scm 248 */
															long BgL_auxz00_4798;

															BgL_auxz00_4798 = (long) (BgL_arg2644z00_2754);
															BgL_restz00_2753 =
																(BgL_offsetz00_2750 % BgL_auxz00_4798);
													}}
													{	/* Cfa/setup.scm 248 */

														BgL_method5298z00_2743 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2748,
																(int) (BgL_modz00_2751)),
															(int) (BgL_restz00_2753));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2743) (BgL_method5298z00_2743,
							(obj_t) (BgL_arg5620z00_2035), BEOA);
				}}
				{	/* Cfa/setup.scm 249 */
					BgL_appzd2lyzd2_bglt BgL_obj5228z00_2036;

					BgL_obj5228z00_2036 = ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2030);
					{	/* Cfa/setup.scm 249 */
						obj_t BgL_auxz00_4811;

						BgL_objectz00_bglt BgL_auxz00_4809;

						BgL_auxz00_4811 =
							BGl_wideningzd2appzd2lyzf2Cinfozf2zzcfa_infoz00
							(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
								(BGl_za2objza2z00zztype_cachez00)));
						BgL_auxz00_4809 = (BgL_objectz00_bglt) (BgL_obj5228z00_2036);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_4809, BgL_auxz00_4811);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5228z00_2036),
						BGl_classzd2numzd2zz__objectz00
						(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00));
					BgL_obj5228z00_2036;
				}
				{	/* Cfa/setup.scm 251 */
					BgL_approxz00_bglt BgL_arg5624z00_2040;

					{	/* Cfa/setup.scm 251 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_obj3746z00_2770;

						BgL_obj3746z00_2770 =
							(BgL_appzd2lyzf2cinfoz20_bglt) (BgL_nodez00_2030);
						{
							obj_t BgL_auxz00_4820;

							{	/* Cfa/setup.scm 251 */
								BgL_objectz00_bglt BgL_auxz00_4821;

								BgL_auxz00_4821 = (BgL_objectz00_bglt) (BgL_obj3746z00_2770);
								BgL_auxz00_4820 = BGL_OBJECT_WIDENING(BgL_auxz00_4821);
							}
							BgL_arg5624z00_2040 =
								(((BgL_appzd2lyzf2cinfoz20_bglt) CREF(BgL_auxz00_4820))->
								BgL_approxz00);
					}}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg5624z00_2040);
				}
			}
		}
	}



/* fun-setup!-cfun5334 */
	obj_t BGl_funzd2setupz12zd2cfun5334z12zzcfa_setupz00(obj_t BgL_envz00_3535,
		obj_t BgL_funz00_3536, obj_t BgL_varz00_3537)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 234 */
			{
				BgL_cfunz00_bglt BgL_funz00_2014;

				obj_t BgL_varz00_2015;

				{	/* Cfa/setup.scm 235 */
					BgL_cfunz00_bglt BgL_auxz00_4827;

					BgL_funz00_2014 = (BgL_cfunz00_bglt) (BgL_funz00_3536);
					BgL_varz00_2015 = BgL_varz00_3537;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_2015,
							BGl_reshapedzd2globalzd2zzcfa_infoz00))
						{	/* Cfa/setup.scm 235 */
							BFALSE;
						}
					else
						{	/* Cfa/setup.scm 236 */
							BgL_globalz00_bglt BgL_obj5224z00_2019;

							BgL_obj5224z00_2019 =
								((BgL_globalz00_bglt) (BgL_globalz00_bglt) (BgL_varz00_2015));
							{	/* Cfa/setup.scm 236 */
								obj_t BgL_auxz00_4834;

								BgL_objectz00_bglt BgL_auxz00_4832;

								BgL_auxz00_4834 =
									BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
								BgL_auxz00_4832 = (BgL_objectz00_bglt) (BgL_obj5224z00_2019);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4832, BgL_auxz00_4834);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj5224z00_2019),
								BGl_classzd2numzd2zz__objectz00
								(BGl_reshapedzd2globalzd2zzcfa_infoz00));
							(obj_t) (BgL_obj5224z00_2019);
						}
					{	/* Cfa/setup.scm 237 */
						BgL_approxz00_bglt BgL_approxz00_2022;

						{	/* Cfa/setup.scm 237 */
							BgL_typez00_bglt BgL_arg5617z00_2027;

							{
								BgL_variablez00_bglt BgL_auxz00_4841;

								BgL_auxz00_4841 = (BgL_variablez00_bglt) (BgL_varz00_2015);
								BgL_arg5617z00_2027 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4841))->BgL_typez00);
							}
							BgL_approxz00_2022 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg5617z00_2027);
						}
						{	/* Cfa/setup.scm 238 */
							bool_t BgL_testz00_4845;

							{
								BgL_funz00_bglt BgL_auxz00_4846;

								BgL_auxz00_4846 = (BgL_funz00_bglt) (BgL_funz00_2014);
								BgL_testz00_4845 =
									(((BgL_funz00_bglt) CREF(BgL_auxz00_4846))->BgL_topzf3zf3);
							}
							if (BgL_testz00_4845)
								{	/* Cfa/setup.scm 238 */
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
										(BgL_approxz00_2022);
								}
							else
								{	/* Cfa/setup.scm 238 */
									BFALSE;
								}
						}
						{	/* Cfa/setup.scm 239 */
							BgL_cfunz00_bglt BgL_obj5225z00_2024;

							BgL_obj5225z00_2024 = ((BgL_cfunz00_bglt) BgL_funz00_2014);
							{	/* Cfa/setup.scm 239 */
								obj_t BgL_auxz00_4853;

								BgL_objectz00_bglt BgL_auxz00_4851;

								BgL_auxz00_4853 =
									BGl_wideningzd2cfunzf2Cinfoz20zzcfa_infoz00
									(BgL_approxz00_2022);
								BgL_auxz00_4851 = (BgL_objectz00_bglt) (BgL_obj5225z00_2024);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4851, BgL_auxz00_4853);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj5225z00_2024),
								BGl_classzd2numzd2zz__objectz00
								(BGl_cfunzf2Cinfozf2zzcfa_infoz00));
							BgL_auxz00_4827 = BgL_obj5225z00_2024;
						}
					}
					return (obj_t) (BgL_auxz00_4827);
				}
			}
		}
	}



/* fun-setup!-sfun5332 */
	obj_t BGl_funzd2setupz12zd2sfun5332z12zzcfa_setupz00(obj_t BgL_envz00_3538,
		obj_t BgL_funz00_3539, obj_t BgL_varz00_3540)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 220 */
			{
				BgL_sfunz00_bglt BgL_funz00_1986;

				obj_t BgL_varz00_1987;

				{	/* Cfa/setup.scm 221 */
					BgL_sfunz00_bglt BgL_auxz00_4861;

					BgL_funz00_1986 = (BgL_sfunz00_bglt) (BgL_funz00_3539);
					BgL_varz00_1987 = BgL_varz00_3540;
					{	/* Cfa/setup.scm 221 */
						bool_t BgL_testz00_4862;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1987,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/setup.scm 221 */
								if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1987,
										BGl_reshapedzd2globalzd2zzcfa_infoz00))
									{	/* Cfa/setup.scm 221 */
										BgL_testz00_4862 = ((bool_t) 0);
									}
								else
									{	/* Cfa/setup.scm 221 */
										BgL_testz00_4862 = ((bool_t) 1);
									}
							}
						else
							{	/* Cfa/setup.scm 221 */
								BgL_testz00_4862 = ((bool_t) 0);
							}
						if (BgL_testz00_4862)
							{	/* Cfa/setup.scm 222 */
								BgL_globalz00_bglt BgL_obj5221z00_1991;

								BgL_obj5221z00_1991 =
									((BgL_globalz00_bglt) (BgL_globalz00_bglt) (BgL_varz00_1987));
								{	/* Cfa/setup.scm 222 */
									obj_t BgL_auxz00_4871;

									BgL_objectz00_bglt BgL_auxz00_4869;

									BgL_auxz00_4871 =
										BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
									BgL_auxz00_4869 = (BgL_objectz00_bglt) (BgL_obj5221z00_1991);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_4869, BgL_auxz00_4871);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj5221z00_1991),
									BGl_classzd2numzd2zz__objectz00
									(BGl_reshapedzd2globalzd2zzcfa_infoz00));
								(obj_t) (BgL_obj5221z00_1991);
							}
						else
							{	/* Cfa/setup.scm 221 */
								BFALSE;
							}
					}
					{	/* Cfa/setup.scm 223 */
						bool_t BgL_testz00_4878;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1987,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/setup.scm 223 */
								obj_t BgL_auxz00_4881;

								{
									BgL_globalz00_bglt BgL_auxz00_4882;

									BgL_auxz00_4882 = (BgL_globalz00_bglt) (BgL_varz00_1987);
									BgL_auxz00_4881 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_4882))->
										BgL_importz00);
								}
								BgL_testz00_4878 =
									(BgL_auxz00_4881 == CNST_TABLE_REF(((long) 3)));
							}
						else
							{	/* Cfa/setup.scm 223 */
								BgL_testz00_4878 = ((bool_t) 0);
							}
						if (BgL_testz00_4878)
							{	/* Cfa/setup.scm 224 */
								BgL_approxz00_bglt BgL_approxz00_1997;

								{	/* Cfa/setup.scm 224 */
									BgL_typez00_bglt BgL_arg5601z00_2002;

									{
										BgL_variablez00_bglt BgL_auxz00_4887;

										BgL_auxz00_4887 =
											(BgL_variablez00_bglt) (
											(BgL_globalz00_bglt) (BgL_varz00_1987));
										BgL_arg5601z00_2002 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_4887))->
											BgL_typez00);
									}
									BgL_approxz00_1997 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5601z00_2002);
								}
								{	/* Cfa/setup.scm 225 */
									bool_t BgL_testz00_4892;

									{
										BgL_funz00_bglt BgL_auxz00_4893;

										BgL_auxz00_4893 = (BgL_funz00_bglt) (BgL_funz00_1986);
										BgL_testz00_4892 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_4893))->
											BgL_topzf3zf3);
									}
									if (BgL_testz00_4892)
										{	/* Cfa/setup.scm 225 */
											BGl_approxzd2setzd2topz12z12zzcfa_approxz00
												(BgL_approxz00_1997);
										}
									else
										{	/* Cfa/setup.scm 225 */
											BFALSE;
										}
								}
								{	/* Cfa/setup.scm 226 */
									BgL_sfunz00_bglt BgL_obj5222z00_1999;

									BgL_obj5222z00_1999 = ((BgL_sfunz00_bglt) BgL_funz00_1986);
									{	/* Cfa/setup.scm 226 */
										obj_t BgL_auxz00_4900;

										BgL_objectz00_bglt BgL_auxz00_4898;

										BgL_auxz00_4900 =
											BGl_wideningzd2externzd2sfunzf2Cinfozf2zzcfa_infoz00
											(BgL_approxz00_1997);
										BgL_auxz00_4898 =
											(BgL_objectz00_bglt) (BgL_obj5222z00_1999);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4898, BgL_auxz00_4900);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5222z00_1999),
										BGl_classzd2numzd2zz__objectz00
										(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00));
									BgL_auxz00_4861 = BgL_obj5222z00_1999;
								}
							}
						else
							{	/* Cfa/setup.scm 228 */
								BgL_sfunz00_bglt BgL_obj5223z00_2003;

								BgL_obj5223z00_2003 = ((BgL_sfunz00_bglt) BgL_funz00_1986);
								{	/* Cfa/setup.scm 229 */
									obj_t BgL_arg5602z00_2004;

									{	/* Cfa/setup.scm 229 */
										BgL_approxz00_bglt BgL_arg5603z00_2005;

										{	/* Cfa/setup.scm 229 */
											BgL_typez00_bglt BgL_arg5605z00_2007;

											{
												BgL_variablez00_bglt BgL_auxz00_4907;

												BgL_auxz00_4907 =
													(BgL_variablez00_bglt) (BgL_varz00_1987);
												BgL_arg5605z00_2007 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_4907))->
													BgL_typez00);
											}
											BgL_arg5603z00_2005 =
												BGl_makezd2typezd2approxz00zzcfa_approxz00
												(BgL_arg5605z00_2007);
										}
										BgL_arg5602z00_2004 =
											BGl_wideningzd2internzd2sfunzf2Cinfozf2zzcfa_infoz00
											(BgL_arg5603z00_2005, ((long) -1));
									}
									{	/* Cfa/setup.scm 228 */
										BgL_objectz00_bglt BgL_auxz00_4912;

										BgL_auxz00_4912 =
											(BgL_objectz00_bglt) (BgL_obj5223z00_2003);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_4912,
											BgL_arg5602z00_2004);
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj5223z00_2003),
									BGl_classzd2numzd2zz__objectz00
									(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00));
								BgL_auxz00_4861 = BgL_obj5223z00_2003;
					}}
					return (obj_t) (BgL_auxz00_4861);
				}
			}
		}
	}



/* node-setup!-app5328 */
	obj_t BGl_nodezd2setupz12zd2app5328z12zzcfa_setupz00(obj_t BgL_envz00_3541,
		obj_t BgL_nodez00_3542)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 202 */
			{
				BgL_appz00_bglt BgL_nodez00_1976;

				BgL_nodez00_1976 = (BgL_appz00_bglt) (BgL_nodez00_3542);
				{	/* Cfa/setup.scm 205 */
					obj_t BgL_arg5588z00_1980;

					BgL_arg5588z00_1980 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1976))->BgL_argsz00);
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5588z00_1980);
				}
				{	/* Cfa/setup.scm 206 */
					BgL_variablez00_bglt BgL_variablez00_1981;

					{	/* Cfa/setup.scm 206 */
						BgL_varz00_bglt BgL_obj2178z00_2665;

						BgL_obj2178z00_2665 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1976))->BgL_funz00);
						BgL_variablez00_1981 =
							(((BgL_varz00_bglt) CREF(BgL_obj2178z00_2665))->BgL_variablez00);
					}
					{	/* Cfa/setup.scm 207 */
						BgL_valuez00_bglt BgL_arg5589z00_1982;

						BgL_arg5589z00_1982 =
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_1981))->
							BgL_valuez00);
						{	/* Cfa/setup.scm 207 */
							BgL_funz00_bglt BgL_funz00_2667;

							BgL_funz00_2667 = (BgL_funz00_bglt) (BgL_arg5589z00_1982);
							{	/* Cfa/setup.scm 207 */
								obj_t BgL_method5330z00_2669;

								{	/* Cfa/setup.scm 207 */
									BgL_objectz00_bglt BgL_objz00_2670;

									BgL_objz00_2670 = (BgL_objectz00_bglt) (BgL_funz00_2667);
									{	/* Cfa/setup.scm 207 */
										long BgL_objzd2classzd2numz00_2671;

										BgL_objzd2classzd2numz00_2671 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2670);
										{	/* Cfa/setup.scm 207 */
											obj_t BgL_arg2643z00_2672;

											BgL_arg2643z00_2672 =
												PROCEDURE_REF(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
												(int) (((long) 1)));
											{	/* Cfa/setup.scm 207 */
												obj_t BgL_arrayz00_2674;

												int BgL_offsetz00_2675;

												BgL_arrayz00_2674 = BgL_arg2643z00_2672;
												BgL_offsetz00_2675 =
													(int) (BgL_objzd2classzd2numz00_2671);
												{	/* Cfa/setup.scm 207 */
													long BgL_offsetz00_2676;

													BgL_offsetz00_2676 =
														((long) (BgL_offsetz00_2675) - OBJECT_TYPE);
													{	/* Cfa/setup.scm 207 */
														long BgL_modz00_2677;

														{	/* Cfa/setup.scm 207 */
															int BgL_arg2645z00_2678;

															BgL_arg2645z00_2678 = (int) (((long) 16));
															{	/* Cfa/setup.scm 207 */
																long BgL_auxz00_4934;

																BgL_auxz00_4934 = (long) (BgL_arg2645z00_2678);
																BgL_modz00_2677 =
																	(BgL_offsetz00_2676 / BgL_auxz00_4934);
														}}
														{	/* Cfa/setup.scm 207 */
															long BgL_restz00_2679;

															{	/* Cfa/setup.scm 207 */
																int BgL_arg2644z00_2680;

																BgL_arg2644z00_2680 = (int) (((long) 16));
																{	/* Cfa/setup.scm 207 */
																	long BgL_auxz00_4938;

																	BgL_auxz00_4938 =
																		(long) (BgL_arg2644z00_2680);
																	BgL_restz00_2679 =
																		(BgL_offsetz00_2676 % BgL_auxz00_4938);
															}}
															{	/* Cfa/setup.scm 207 */

																BgL_method5330z00_2669 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2674,
																		(int) (BgL_modz00_2677)),
																	(int) (BgL_restz00_2679));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method5330z00_2669)
									(BgL_method5330z00_2669, (obj_t) (BgL_funz00_2667),
									(obj_t) (BgL_variablez00_1981), BEOA);
							}
						}
					}
				}
			}
		}
	}



/* node-setup!-sequence5326 */
	obj_t BGl_nodezd2setupz12zd2sequence5326z12zzcfa_setupz00(obj_t
		BgL_envz00_3543, obj_t BgL_nodez00_3544)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 195 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1969;

				BgL_nodez00_1969 = (BgL_sequencez00_bglt) (BgL_nodez00_3544);
				{	/* Cfa/setup.scm 196 */
					obj_t BgL_arg5586z00_2661;

					BgL_arg5586z00_2661 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1969))->BgL_nodesz00);
					return BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5586z00_2661);
				}
			}
		}
	}



/* node-setup!-closure5324 */
	obj_t BGl_nodezd2setupz12zd2closure5324z12zzcfa_setupz00(obj_t
		BgL_envz00_3545, obj_t BgL_nodez00_3546)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 189 */
			{
				BgL_closurez00_bglt BgL_nodez00_1961;

				BgL_nodez00_1961 = (BgL_closurez00_bglt) (BgL_nodez00_3546);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string5829z00zzcfa_setupz00, BGl_string5866z00zzcfa_setupz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1961)));
			}
		}
	}



/* variable-value-setup5322 */
	obj_t BGl_variablezd2valuezd2setup5322z00zzcfa_setupz00(obj_t BgL_envz00_3547,
		obj_t BgL_valuez00_3548, obj_t BgL_varz00_3549)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 180 */
			{
				BgL_cvarz00_bglt BgL_valuez00_1947;

				obj_t BgL_varz00_1948;

				BgL_valuez00_1947 = (BgL_cvarz00_bglt) (BgL_valuez00_3548);
				BgL_varz00_1948 = BgL_varz00_3549;
				{	/* Cfa/setup.scm 181 */
					BgL_cvarz00_bglt BgL_obj5215z00_1951;

					BgL_obj5215z00_1951 = ((BgL_cvarz00_bglt) BgL_valuez00_1947);
					{	/* Cfa/setup.scm 182 */
						obj_t BgL_arg5574z00_1952;

						{	/* Cfa/setup.scm 182 */
							BgL_approxz00_bglt BgL_arg5575z00_1953;

							{	/* Cfa/setup.scm 182 */
								BgL_typez00_bglt BgL_arg5576z00_1954;

								{
									BgL_variablez00_bglt BgL_auxz00_4958;

									BgL_auxz00_4958 = (BgL_variablez00_bglt) (BgL_varz00_1948);
									BgL_arg5576z00_1954 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_4958))->
										BgL_typez00);
								}
								BgL_arg5575z00_1953 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg5576z00_1954);
							}
							BgL_arg5574z00_1952 =
								BGl_wideningzd2cvarzf2Cinfoz20zzcfa_infoz00
								(BgL_arg5575z00_1953);
						}
						{	/* Cfa/setup.scm 181 */
							BgL_objectz00_bglt BgL_auxz00_4963;

							BgL_auxz00_4963 = (BgL_objectz00_bglt) (BgL_obj5215z00_1951);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4963, BgL_arg5574z00_1952);
						}
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj5215z00_1951),
						BGl_classzd2numzd2zz__objectz00(BGl_cvarzf2Cinfozf2zzcfa_infoz00));
					BgL_obj5215z00_1951;
				}
				{	/* Cfa/setup.scm 183 */
					bool_t BgL_testz00_4969;

					{	/* Cfa/setup.scm 183 */
						BgL_typez00_bglt BgL_auxz00_4970;

						{
							BgL_variablez00_bglt BgL_auxz00_4971;

							BgL_auxz00_4971 = (BgL_variablez00_bglt) (BgL_varz00_1948);
							BgL_auxz00_4970 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4971))->BgL_typez00);
						}
						BgL_testz00_4969 =
							BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_auxz00_4970);
					}
					if (BgL_testz00_4969)
						{	/* Cfa/setup.scm 184 */
							BgL_approxz00_bglt BgL_arg5579z00_1957;

							{	/* Cfa/setup.scm 184 */
								BgL_cvarzf2cinfozf2_bglt BgL_obj3554z00_2659;

								BgL_obj3554z00_2659 =
									(BgL_cvarzf2cinfozf2_bglt) (BgL_valuez00_1947);
								{
									obj_t BgL_auxz00_4976;

									{	/* Cfa/setup.scm 184 */
										BgL_objectz00_bglt BgL_auxz00_4977;

										BgL_auxz00_4977 =
											(BgL_objectz00_bglt) (BgL_obj3554z00_2659);
										BgL_auxz00_4976 = BGL_OBJECT_WIDENING(BgL_auxz00_4977);
									}
									BgL_arg5579z00_1957 =
										(((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_auxz00_4976))->
										BgL_approxz00);
								}
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
								(BgL_arg5579z00_1957);
						}
					else
						{	/* Cfa/setup.scm 183 */
							return BFALSE;
						}
				}
			}
		}
	}



/* variable-value-setup5320 */
	obj_t BGl_variablezd2valuezd2setup5320z00zzcfa_setupz00(obj_t BgL_envz00_3550,
		obj_t BgL_valuez00_3551, obj_t BgL_varz00_3552)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 158 */
			{
				BgL_scnstz00_bglt BgL_valuez00_1916;

				obj_t BgL_varz00_1917;

				BgL_valuez00_1916 = (BgL_scnstz00_bglt) (BgL_valuez00_3551);
				BgL_varz00_1917 = BgL_varz00_3552;
				if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1917,
						BGl_globalz00zzast_varz00))
					{	/* Cfa/setup.scm 162 */
						bool_t BgL_testz00_4985;

						{	/* Cfa/setup.scm 162 */
							bool_t BgL_testz00_4986;

							{	/* Cfa/setup.scm 162 */
								obj_t BgL_arg5568z00_1939;

								{
									BgL_globalz00_bglt BgL_auxz00_4987;

									BgL_auxz00_4987 = (BgL_globalz00_bglt) (BgL_varz00_1917);
									BgL_arg5568z00_1939 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_4987))->
										BgL_modulez00);
								}
								BgL_testz00_4986 =
									(BgL_arg5568z00_1939 ==
									BGl_za2moduleza2z00zzmodule_modulez00);
							}
							if (BgL_testz00_4986)
								{	/* Cfa/setup.scm 162 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
												(((BgL_scnstz00_bglt) CREF(BgL_valuez00_1916))->
													BgL_classz00), CNST_TABLE_REF(((long) 4)))))
										{	/* Cfa/setup.scm 164 */
											obj_t BgL_arg5565z00_1936;

											BgL_arg5565z00_1936 =
												(((BgL_scnstz00_bglt) CREF(BgL_valuez00_1916))->
												BgL_nodez00);
											BgL_testz00_4985 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg5565z00_1936,
												BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
										}
									else
										{	/* Cfa/setup.scm 163 */
											BgL_testz00_4985 = ((bool_t) 0);
										}
								}
							else
								{	/* Cfa/setup.scm 162 */
									BgL_testz00_4985 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_4985)
							{	/* Cfa/setup.scm 166 */
								obj_t BgL_nodez00_1922;

								BgL_nodez00_1922 =
									(((BgL_scnstz00_bglt) CREF(BgL_valuez00_1916))->BgL_nodez00);
								{	/* Cfa/setup.scm 168 */
									BgL_nodez00_bglt BgL_nodez00_2619;

									BgL_nodez00_2619 = (BgL_nodez00_bglt) (BgL_nodez00_1922);
									{	/* Cfa/setup.scm 168 */
										obj_t BgL_method5298z00_2620;

										{	/* Cfa/setup.scm 168 */
											BgL_objectz00_bglt BgL_objz00_2621;

											BgL_objz00_2621 = (BgL_objectz00_bglt) (BgL_nodez00_2619);
											{	/* Cfa/setup.scm 168 */
												long BgL_objzd2classzd2numz00_2622;

												BgL_objzd2classzd2numz00_2622 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2621);
												{	/* Cfa/setup.scm 168 */
													obj_t BgL_arg2643z00_2623;

													BgL_arg2643z00_2623 =
														PROCEDURE_REF
														(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
														(int) (((long) 1)));
													{	/* Cfa/setup.scm 168 */
														obj_t BgL_arrayz00_2625;

														int BgL_offsetz00_2626;

														BgL_arrayz00_2625 = BgL_arg2643z00_2623;
														BgL_offsetz00_2626 =
															(int) (BgL_objzd2classzd2numz00_2622);
														{	/* Cfa/setup.scm 168 */
															long BgL_offsetz00_2627;

															BgL_offsetz00_2627 =
																((long) (BgL_offsetz00_2626) - OBJECT_TYPE);
															{	/* Cfa/setup.scm 168 */
																long BgL_modz00_2628;

																{	/* Cfa/setup.scm 168 */
																	int BgL_arg2645z00_2629;

																	BgL_arg2645z00_2629 = (int) (((long) 16));
																	{	/* Cfa/setup.scm 168 */
																		long BgL_auxz00_5008;

																		BgL_auxz00_5008 =
																			(long) (BgL_arg2645z00_2629);
																		BgL_modz00_2628 =
																			(BgL_offsetz00_2627 / BgL_auxz00_5008);
																}}
																{	/* Cfa/setup.scm 168 */
																	long BgL_restz00_2630;

																	{	/* Cfa/setup.scm 168 */
																		int BgL_arg2644z00_2631;

																		BgL_arg2644z00_2631 = (int) (((long) 16));
																		{	/* Cfa/setup.scm 168 */
																			long BgL_auxz00_5012;

																			BgL_auxz00_5012 =
																				(long) (BgL_arg2644z00_2631);
																			BgL_restz00_2630 =
																				(BgL_offsetz00_2627 % BgL_auxz00_5012);
																	}}
																	{	/* Cfa/setup.scm 168 */

																		BgL_method5298z00_2620 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2625,
																				(int) (BgL_modz00_2628)),
																			(int) (BgL_restz00_2630));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2620)
											(BgL_method5298z00_2620, (obj_t) (BgL_nodez00_2619),
											BEOA);
								}}
								{	/* Cfa/setup.scm 169 */
									BgL_scnstz00_bglt BgL_obj5212z00_1923;

									BgL_obj5212z00_1923 = ((BgL_scnstz00_bglt) BgL_valuez00_1916);
									{	/* Cfa/setup.scm 170 */
										obj_t BgL_arg5555z00_1924;

										{	/* Cfa/setup.scm 170 */
											BgL_approxz00_bglt BgL_arg5556z00_1925;

											{	/* Cfa/setup.scm 170 */
												BgL_makezd2procedurezd2appz00_bglt BgL_obj4322z00_2645;

												BgL_obj4322z00_2645 =
													(BgL_makezd2procedurezd2appz00_bglt)
													(BgL_nodez00_1922);
												{
													obj_t BgL_auxz00_5024;

													{	/* Cfa/setup.scm 170 */
														BgL_objectz00_bglt BgL_auxz00_5025;

														BgL_auxz00_5025 =
															(BgL_objectz00_bglt) (BgL_obj4322z00_2645);
														BgL_auxz00_5024 =
															BGL_OBJECT_WIDENING(BgL_auxz00_5025);
													}
													BgL_arg5556z00_1925 =
														(((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_auxz00_5024))->BgL_approxz00);
											}}
											BgL_arg5555z00_1924 =
												BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00
												(BgL_arg5556z00_1925);
										}
										{	/* Cfa/setup.scm 169 */
											BgL_objectz00_bglt BgL_auxz00_5030;

											BgL_auxz00_5030 =
												(BgL_objectz00_bglt) (BgL_obj5212z00_1923);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5030,
												BgL_arg5555z00_1924);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5212z00_1923),
										BGl_classzd2numzd2zz__objectz00
										(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
									return (obj_t) (BgL_obj5212z00_1923);
								}
							}
						else
							{	/* Cfa/setup.scm 171 */
								BgL_scnstz00_bglt BgL_valuez00_1927;

								{	/* Cfa/setup.scm 171 */
									BgL_scnstz00_bglt BgL_obj5213z00_1929;

									BgL_obj5213z00_1929 = ((BgL_scnstz00_bglt) BgL_valuez00_1916);
									{	/* Cfa/setup.scm 172 */
										obj_t BgL_arg5559z00_1930;

										{	/* Cfa/setup.scm 172 */
											BgL_approxz00_bglt BgL_arg5560z00_1931;

											{	/* Cfa/setup.scm 172 */
												BgL_typez00_bglt BgL_arg5561z00_1932;

												{
													BgL_variablez00_bglt BgL_auxz00_5038;

													BgL_auxz00_5038 =
														(BgL_variablez00_bglt) (
														(BgL_globalz00_bglt) (BgL_varz00_1917));
													BgL_arg5561z00_1932 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_5038))->
														BgL_typez00);
												}
												BgL_arg5560z00_1931 =
													BGl_makezd2typezd2approxz00zzcfa_approxz00
													(BgL_arg5561z00_1932);
											}
											BgL_arg5559z00_1930 =
												BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00
												(BgL_arg5560z00_1931);
										}
										{	/* Cfa/setup.scm 171 */
											BgL_objectz00_bglt BgL_auxz00_5044;

											BgL_auxz00_5044 =
												(BgL_objectz00_bglt) (BgL_obj5213z00_1929);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_5044,
												BgL_arg5559z00_1930);
										}
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5213z00_1929),
										BGl_classzd2numzd2zz__objectz00
										(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
									BgL_valuez00_1927 = BgL_obj5213z00_1929;
								}
								{	/* Cfa/setup.scm 173 */
									BgL_approxz00_bglt BgL_arg5558z00_1928;

									{	/* Cfa/setup.scm 173 */
										BgL_scnstzf2cinfozf2_bglt BgL_obj3510z00_2651;

										BgL_obj3510z00_2651 =
											(BgL_scnstzf2cinfozf2_bglt) (BgL_valuez00_1927);
										{
											obj_t BgL_auxz00_5051;

											{	/* Cfa/setup.scm 173 */
												BgL_objectz00_bglt BgL_auxz00_5052;

												BgL_auxz00_5052 =
													(BgL_objectz00_bglt) (BgL_obj3510z00_2651);
												BgL_auxz00_5051 = BGL_OBJECT_WIDENING(BgL_auxz00_5052);
											}
											BgL_arg5558z00_1928 =
												(((BgL_scnstzf2cinfozf2_bglt) CREF(BgL_auxz00_5051))->
												BgL_approxz00);
										}
									}
									return
										BGl_approxzd2setzd2topz12z12zzcfa_approxz00
										(BgL_arg5558z00_1928);
								}
							}
					}
				else
					{	/* Cfa/setup.scm 174 */
						BgL_scnstz00_bglt BgL_obj5214z00_1940;

						BgL_obj5214z00_1940 = ((BgL_scnstz00_bglt) BgL_valuez00_1916);
						{	/* Cfa/setup.scm 175 */
							obj_t BgL_arg5569z00_1941;

							{	/* Cfa/setup.scm 175 */
								BgL_approxz00_bglt BgL_arg5570z00_1942;

								{	/* Cfa/setup.scm 175 */
									BgL_typez00_bglt BgL_arg5571z00_1943;

									{
										BgL_variablez00_bglt BgL_auxz00_5058;

										BgL_auxz00_5058 = (BgL_variablez00_bglt) (BgL_varz00_1917);
										BgL_arg5571z00_1943 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_5058))->
											BgL_typez00);
									}
									BgL_arg5570z00_1942 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5571z00_1943);
								}
								BgL_arg5569z00_1941 =
									BGl_wideningzd2scnstzf2Cinfoz20zzcfa_infoz00
									(BgL_arg5570z00_1942);
							}
							{	/* Cfa/setup.scm 174 */
								BgL_objectz00_bglt BgL_auxz00_5063;

								BgL_auxz00_5063 = (BgL_objectz00_bglt) (BgL_obj5214z00_1940);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5063, BgL_arg5569z00_1941);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5214z00_1940),
							BGl_classzd2numzd2zz__objectz00
							(BGl_scnstzf2Cinfozf2zzcfa_infoz00));
						return (obj_t) (BgL_obj5214z00_1940);
					}
			}
		}
	}



/* variable-value-setup5318 */
	obj_t BGl_variablezd2valuezd2setup5318z00zzcfa_setupz00(obj_t BgL_envz00_3553,
		obj_t BgL_valuez00_3554, obj_t BgL_varz00_3555)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 152 */
			{	/* Cfa/setup.scm 153 */
				obj_t BgL_res5871z00_3586;

				BgL_res5871z00_3586 = CNST_TABLE_REF(((long) 5));
				return BgL_res5871z00_3586;
			}
		}
	}



/* variable-value-setup5316 */
	obj_t BGl_variablezd2valuezd2setup5316z00zzcfa_setupz00(obj_t BgL_envz00_3556,
		obj_t BgL_valuez00_3557, obj_t BgL_varz00_3558)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 145 */
			{
				BgL_sexitz00_bglt BgL_valuez00_1899;

				obj_t BgL_varz00_1900;

				{	/* Cfa/setup.scm 146 */
					BgL_sexitz00_bglt BgL_auxz00_5072;

					BgL_valuez00_1899 = (BgL_sexitz00_bglt) (BgL_valuez00_3557);
					BgL_varz00_1900 = BgL_varz00_3558;
					{	/* Cfa/setup.scm 146 */
						BgL_sexitz00_bglt BgL_obj5211z00_1903;

						BgL_obj5211z00_1903 = ((BgL_sexitz00_bglt) BgL_valuez00_1899);
						{	/* Cfa/setup.scm 147 */
							obj_t BgL_arg5547z00_1904;

							{	/* Cfa/setup.scm 147 */
								BgL_approxz00_bglt BgL_arg5548z00_1905;

								{	/* Cfa/setup.scm 147 */
									BgL_typez00_bglt BgL_arg5549z00_1906;

									{
										BgL_variablez00_bglt BgL_auxz00_5074;

										BgL_auxz00_5074 = (BgL_variablez00_bglt) (BgL_varz00_1900);
										BgL_arg5549z00_1906 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_5074))->
											BgL_typez00);
									}
									BgL_arg5548z00_1905 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5549z00_1906);
								}
								BgL_arg5547z00_1904 =
									BGl_wideningzd2sexitzf2Cinfoz20zzcfa_infoz00
									(BgL_arg5548z00_1905);
							}
							{	/* Cfa/setup.scm 146 */
								BgL_objectz00_bglt BgL_auxz00_5079;

								BgL_auxz00_5079 = (BgL_objectz00_bglt) (BgL_obj5211z00_1903);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5079, BgL_arg5547z00_1904);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5211z00_1903),
							BGl_classzd2numzd2zz__objectz00
							(BGl_sexitzf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_5072 = BgL_obj5211z00_1903;
					}
					return (obj_t) (BgL_auxz00_5072);
				}
			}
		}
	}



/* variable-value-setup5314 */
	obj_t BGl_variablezd2valuezd2setup5314z00zzcfa_setupz00(obj_t BgL_envz00_3559,
		obj_t BgL_valuez00_3560, obj_t BgL_varz00_3561)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 137 */
			{
				BgL_prezd2clozd2envz00_bglt BgL_valuez00_1892;

				obj_t BgL_varz00_1893;

				BgL_valuez00_1892 = (BgL_prezd2clozd2envz00_bglt) (BgL_valuez00_3560);
				BgL_varz00_1893 = BgL_varz00_3561;
				{

					{	/* Cfa/setup.scm 137 */
						obj_t BgL_nextzd2method5313zd2_1897;

						BgL_nextzd2method5313zd2_1897 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_valuez00_1892),
							BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
							BGl_prezd2clozd2envz00zzcfa_infoz00);
						if (PROCEDUREP(BgL_nextzd2method5313zd2_1897))
							{	/* Cfa/setup.scm 137 */
								PROCEDURE_ENTRY(BgL_nextzd2method5313zd2_1897)
									(BgL_nextzd2method5313zd2_1897, (obj_t) (BgL_valuez00_1892),
									BgL_varz00_1893, BEOA);
							}
						else
							{	/* Cfa/setup.scm 137 */
								{	/* Cfa/setup.scm 137 */
									BgL_valuez00_bglt BgL_valuez00_2583;

									BgL_variablez00_bglt BgL_variablez00_2584;

									BgL_valuez00_2583 = (BgL_valuez00_bglt) (BgL_valuez00_1892);
									BgL_variablez00_2584 =
										(BgL_variablez00_bglt) (BgL_varz00_1893);
									{	/* Cfa/setup.scm 137 */
										obj_t BgL_method5308z00_2585;

										{	/* Cfa/setup.scm 137 */
											BgL_objectz00_bglt BgL_objz00_2586;

											BgL_objz00_2586 =
												(BgL_objectz00_bglt) (BgL_valuez00_2583);
											{	/* Cfa/setup.scm 137 */
												long BgL_objzd2classzd2numz00_2587;

												BgL_objzd2classzd2numz00_2587 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2586);
												{	/* Cfa/setup.scm 137 */
													obj_t BgL_arg2643z00_2588;

													BgL_arg2643z00_2588 =
														PROCEDURE_REF
														(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
														(int) (((long) 1)));
													{	/* Cfa/setup.scm 137 */
														obj_t BgL_arrayz00_2590;

														int BgL_offsetz00_2591;

														BgL_arrayz00_2590 = BgL_arg2643z00_2588;
														BgL_offsetz00_2591 =
															(int) (BgL_objzd2classzd2numz00_2587);
														{	/* Cfa/setup.scm 137 */
															long BgL_offsetz00_2592;

															BgL_offsetz00_2592 =
																((long) (BgL_offsetz00_2591) - OBJECT_TYPE);
															{	/* Cfa/setup.scm 137 */
																long BgL_modz00_2593;

																{	/* Cfa/setup.scm 137 */
																	int BgL_arg2645z00_2594;

																	BgL_arg2645z00_2594 = (int) (((long) 16));
																	{	/* Cfa/setup.scm 137 */
																		long BgL_auxz00_5104;

																		BgL_auxz00_5104 =
																			(long) (BgL_arg2645z00_2594);
																		BgL_modz00_2593 =
																			(BgL_offsetz00_2592 / BgL_auxz00_5104);
																}}
																{	/* Cfa/setup.scm 137 */
																	long BgL_restz00_2595;

																	{	/* Cfa/setup.scm 137 */
																		int BgL_arg2644z00_2596;

																		BgL_arg2644z00_2596 = (int) (((long) 16));
																		{	/* Cfa/setup.scm 137 */
																			long BgL_auxz00_5108;

																			BgL_auxz00_5108 =
																				(long) (BgL_arg2644z00_2596);
																			BgL_restz00_2595 =
																				(BgL_offsetz00_2592 % BgL_auxz00_5108);
																	}}
																	{	/* Cfa/setup.scm 137 */

																		BgL_method5308z00_2585 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2590,
																				(int) (BgL_modz00_2593)),
																			(int) (BgL_restz00_2595));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5308z00_2585)
											(BgL_method5308z00_2585, (obj_t) (BgL_valuez00_2583),
											(obj_t) (BgL_variablez00_2584), BEOA);
					}}}}
					{	/* Cfa/setup.scm 140 */
						BgL_valuez00_bglt BgL_arg5545z00_1896;

						{
							BgL_variablez00_bglt BgL_auxz00_5119;

							BgL_auxz00_5119 = (BgL_variablez00_bglt) (BgL_varz00_1893);
							BgL_arg5545z00_1896 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_5119))->BgL_valuez00);
						}
						{	/* Cfa/setup.scm 140 */
							BgL_svarzf2cinfozf2_bglt BgL_obj3541z00_2580;

							bool_t BgL_val3539z00_2581;

							BgL_obj3541z00_2580 =
								(BgL_svarzf2cinfozf2_bglt) (BgL_arg5545z00_1896);
							BgL_val3539z00_2581 = ((bool_t) 1);
							{
								obj_t BgL_auxz00_5123;

								{	/* Cfa/setup.scm 140 */
									BgL_objectz00_bglt BgL_auxz00_5124;

									BgL_auxz00_5124 = (BgL_objectz00_bglt) (BgL_obj3541z00_2580);
									BgL_auxz00_5123 = BGL_OBJECT_WIDENING(BgL_auxz00_5124);
								}
								return
									((((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_5123))->
										BgL_clozd2envzf3z21) =
									((bool_t) BgL_val3539z00_2581), BUNSPEC);
							}
						}
					}
				}
			}
		}
	}



/* variable-value-setup5312 */
	obj_t BGl_variablezd2valuezd2setup5312z00zzcfa_setupz00(obj_t BgL_envz00_3562,
		obj_t BgL_valuez00_3563, obj_t BgL_varz00_3564)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 124 */
			{
				BgL_svarz00_bglt BgL_valuez00_1870;

				BgL_variablez00_bglt BgL_varz00_1871;

				BgL_valuez00_1870 = (BgL_svarz00_bglt) (BgL_valuez00_3563);
				BgL_varz00_1871 = (BgL_variablez00_bglt) (BgL_varz00_3564);
				{	/* Cfa/setup.scm 125 */
					BgL_typez00_bglt BgL_typz00_1874;

					BgL_typz00_1874 =
						(((BgL_variablez00_bglt) CREF(BgL_varz00_1871))->BgL_typez00);
					{	/* Cfa/setup.scm 126 */
						bool_t BgL_testz00_5130;

						{	/* Cfa/setup.scm 126 */
							obj_t BgL_obj1773z00_2572;

							BgL_obj1773z00_2572 = (obj_t) (BgL_varz00_1871);
							BgL_testz00_5130 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1773z00_2572,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_5130)
							{	/* Cfa/setup.scm 127 */
								BgL_svarz00_bglt BgL_valuez00_1876;

								{	/* Cfa/setup.scm 127 */
									BgL_svarz00_bglt BgL_obj5209z00_1882;

									BgL_obj5209z00_1882 = ((BgL_svarz00_bglt) BgL_valuez00_1870);
									{	/* Cfa/setup.scm 127 */
										obj_t BgL_auxz00_5136;

										BgL_objectz00_bglt BgL_auxz00_5134;

										BgL_auxz00_5136 =
											BGl_wideningzd2svarzf2Cinfoz20zzcfa_infoz00
											(BGl_makezd2typezd2approxz00zzcfa_approxz00
											(BgL_typz00_1874), ((bool_t) 0));
										BgL_auxz00_5134 =
											(BgL_objectz00_bglt) (BgL_obj5209z00_1882);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5134, BgL_auxz00_5136);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5209z00_1882),
										BGl_classzd2numzd2zz__objectz00
										(BGl_svarzf2Cinfozf2zzcfa_infoz00));
									BgL_valuez00_1876 = BgL_obj5209z00_1882;
								}
								{	/* Cfa/setup.scm 129 */
									bool_t BgL_testz00_5143;

									{	/* Cfa/setup.scm 129 */
										bool_t BgL_testz00_5144;

										{	/* Cfa/setup.scm 129 */
											obj_t BgL_auxz00_5145;

											{
												BgL_globalz00_bglt BgL_auxz00_5146;

												BgL_auxz00_5146 =
													(BgL_globalz00_bglt) (BgL_varz00_1871);
												BgL_auxz00_5145 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_5146))->
													BgL_importz00);
											}
											BgL_testz00_5144 =
												(BgL_auxz00_5145 == CNST_TABLE_REF(((long) 6)));
										}
										if (BgL_testz00_5144)
											{	/* Cfa/setup.scm 129 */
												BgL_testz00_5143 = ((bool_t) 0);
											}
										else
											{	/* Cfa/setup.scm 129 */
												BgL_testz00_5143 =
													BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_typz00_1874);
											}
									}
									if (BgL_testz00_5143)
										{	/* Cfa/setup.scm 130 */
											BgL_approxz00_bglt BgL_arg5534z00_1878;

											{	/* Cfa/setup.scm 130 */
												BgL_svarzf2cinfozf2_bglt BgL_obj3537z00_2576;

												BgL_obj3537z00_2576 =
													(BgL_svarzf2cinfozf2_bglt) (BgL_valuez00_1876);
												{
													obj_t BgL_auxz00_5153;

													{	/* Cfa/setup.scm 130 */
														BgL_objectz00_bglt BgL_auxz00_5154;

														BgL_auxz00_5154 =
															(BgL_objectz00_bglt) (BgL_obj3537z00_2576);
														BgL_auxz00_5153 =
															BGL_OBJECT_WIDENING(BgL_auxz00_5154);
													}
													BgL_arg5534z00_1878 =
														(((BgL_svarzf2cinfozf2_bglt)
															CREF(BgL_auxz00_5153))->BgL_approxz00);
												}
											}
											return
												BGl_approxzd2setzd2topz12z12zzcfa_approxz00
												(BgL_arg5534z00_1878);
										}
									else
										{	/* Cfa/setup.scm 129 */
											return BFALSE;
										}
								}
							}
						else
							{	/* Cfa/setup.scm 131 */
								BgL_svarz00_bglt BgL_obj5210z00_1886;

								BgL_obj5210z00_1886 = ((BgL_svarz00_bglt) BgL_valuez00_1870);
								{	/* Cfa/setup.scm 131 */
									obj_t BgL_auxz00_5162;

									BgL_objectz00_bglt BgL_auxz00_5160;

									BgL_auxz00_5162 =
										BGl_wideningzd2svarzf2Cinfoz20zzcfa_infoz00
										(BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_typz00_1874), ((bool_t) 0));
									BgL_auxz00_5160 = (BgL_objectz00_bglt) (BgL_obj5210z00_1886);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_5160, BgL_auxz00_5162);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj5210z00_1886),
									BGl_classzd2numzd2zz__objectz00
									(BGl_svarzf2Cinfozf2zzcfa_infoz00));
								return (obj_t) (BgL_obj5210z00_1886);
							}
					}
				}
			}
		}
	}



/* variable-value-setup5310 */
	obj_t BGl_variablezd2valuezd2setup5310z00zzcfa_setupz00(obj_t BgL_envz00_3565,
		obj_t BgL_valuez00_3566, obj_t BgL_varz00_3567)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 116 */
			return BUNSPEC;
		}
	}



/* node-setup!-var5306 */
	obj_t BGl_nodezd2setupz12zd2var5306z12zzcfa_setupz00(obj_t BgL_envz00_3568,
		obj_t BgL_nodez00_3569)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 81 */
			{
				BgL_varz00_bglt BgL_nodez00_1839;

				BgL_nodez00_1839 = (BgL_varz00_bglt) (BgL_nodez00_3569);
				{	/* Cfa/setup.scm 83 */
					BgL_valuez00_bglt BgL_arg5513z00_1843;

					BgL_variablez00_bglt BgL_arg5514z00_1844;

					{	/* Cfa/setup.scm 83 */
						BgL_variablez00_bglt BgL_obj1631z00_2528;

						BgL_obj1631z00_2528 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->BgL_variablez00);
						BgL_arg5513z00_1843 =
							(((BgL_variablez00_bglt) CREF(BgL_obj1631z00_2528))->
							BgL_valuez00);
					}
					BgL_arg5514z00_1844 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->BgL_variablez00);
					{	/* Cfa/setup.scm 83 */
						obj_t BgL_method5308z00_2532;

						{	/* Cfa/setup.scm 83 */
							BgL_objectz00_bglt BgL_objz00_2533;

							BgL_objz00_2533 = (BgL_objectz00_bglt) (BgL_arg5513z00_1843);
							{	/* Cfa/setup.scm 83 */
								long BgL_objzd2classzd2numz00_2534;

								BgL_objzd2classzd2numz00_2534 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2533);
								{	/* Cfa/setup.scm 83 */
									obj_t BgL_arg2643z00_2535;

									BgL_arg2643z00_2535 =
										PROCEDURE_REF
										(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 83 */
										obj_t BgL_arrayz00_2537;

										int BgL_offsetz00_2538;

										BgL_arrayz00_2537 = BgL_arg2643z00_2535;
										BgL_offsetz00_2538 = (int) (BgL_objzd2classzd2numz00_2534);
										{	/* Cfa/setup.scm 83 */
											long BgL_offsetz00_2539;

											BgL_offsetz00_2539 =
												((long) (BgL_offsetz00_2538) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 83 */
												long BgL_modz00_2540;

												{	/* Cfa/setup.scm 83 */
													int BgL_arg2645z00_2541;

													BgL_arg2645z00_2541 = (int) (((long) 16));
													{	/* Cfa/setup.scm 83 */
														long BgL_auxz00_5183;

														BgL_auxz00_5183 = (long) (BgL_arg2645z00_2541);
														BgL_modz00_2540 =
															(BgL_offsetz00_2539 / BgL_auxz00_5183);
												}}
												{	/* Cfa/setup.scm 83 */
													long BgL_restz00_2542;

													{	/* Cfa/setup.scm 83 */
														int BgL_arg2644z00_2543;

														BgL_arg2644z00_2543 = (int) (((long) 16));
														{	/* Cfa/setup.scm 83 */
															long BgL_auxz00_5187;

															BgL_auxz00_5187 = (long) (BgL_arg2644z00_2543);
															BgL_restz00_2542 =
																(BgL_offsetz00_2539 % BgL_auxz00_5187);
													}}
													{	/* Cfa/setup.scm 83 */

														BgL_method5308z00_2532 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2537,
																(int) (BgL_modz00_2540)),
															(int) (BgL_restz00_2542));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5308z00_2532) (BgL_method5308z00_2532,
							(obj_t) (BgL_arg5513z00_1843),
							(obj_t) (BgL_arg5514z00_1844), BEOA);
				}}
				{	/* Cfa/setup.scm 86 */
					bool_t BgL_testz00_5198;

					{	/* Cfa/setup.scm 86 */
						bool_t BgL_testz00_5199;

						{	/* Cfa/setup.scm 86 */
							BgL_variablez00_bglt BgL_arg5529z00_1861;

							BgL_arg5529z00_1861 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->BgL_variablez00);
							{	/* Cfa/setup.scm 86 */
								obj_t BgL_obj1833z00_2558;

								BgL_obj1833z00_2558 = (obj_t) (BgL_arg5529z00_1861);
								BgL_testz00_5199 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1833z00_2558,
									BGl_localz00zzast_varz00);
						}}
						if (BgL_testz00_5199)
							{	/* Cfa/setup.scm 86 */
								bool_t BgL_testz00_5203;

								{	/* Cfa/setup.scm 86 */
									BgL_variablez00_bglt BgL_arg5528z00_1860;

									BgL_arg5528z00_1860 =
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->
										BgL_variablez00);
									{	/* Cfa/setup.scm 86 */
										obj_t BgL_obj3588z00_2560;

										BgL_obj3588z00_2560 = (obj_t) (BgL_arg5528z00_1860);
										BgL_testz00_5203 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3588z00_2560,
											BGl_reshapedzd2localzd2zzcfa_infoz00);
									}
								}
								if (BgL_testz00_5203)
									{	/* Cfa/setup.scm 86 */
										BgL_testz00_5198 = ((bool_t) 0);
									}
								else
									{	/* Cfa/setup.scm 86 */
										BgL_testz00_5198 = ((bool_t) 1);
									}
							}
						else
							{	/* Cfa/setup.scm 86 */
								BgL_testz00_5198 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_5198)
						{	/* Cfa/setup.scm 87 */
							BgL_localz00_bglt BgL_obj5207z00_1847;

							BgL_obj5207z00_1847 =
								((BgL_localz00_bglt)
								(BgL_localz00_bglt) (
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->
										BgL_variablez00)));
							{	/* Cfa/setup.scm 87 */
								obj_t BgL_auxz00_5212;

								BgL_objectz00_bglt BgL_auxz00_5210;

								BgL_auxz00_5212 =
									BGl_wideningzd2reshapedzd2localz00zzcfa_infoz00(BFALSE);
								BgL_auxz00_5210 = (BgL_objectz00_bglt) (BgL_obj5207z00_1847);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5210, BgL_auxz00_5212);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj5207z00_1847),
								BGl_classzd2numzd2zz__objectz00
								(BGl_reshapedzd2localzd2zzcfa_infoz00));
							return (obj_t) (BgL_obj5207z00_1847);
						}
					else
						{	/* Cfa/setup.scm 88 */
							bool_t BgL_testz00_5219;

							{	/* Cfa/setup.scm 88 */
								bool_t BgL_testz00_5220;

								{	/* Cfa/setup.scm 88 */
									BgL_variablez00_bglt BgL_arg5525z00_1857;

									BgL_arg5525z00_1857 =
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->
										BgL_variablez00);
									{	/* Cfa/setup.scm 88 */
										obj_t BgL_obj1773z00_2565;

										BgL_obj1773z00_2565 = (obj_t) (BgL_arg5525z00_1857);
										BgL_testz00_5220 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1773z00_2565,
											BGl_globalz00zzast_varz00);
									}
								}
								if (BgL_testz00_5220)
									{	/* Cfa/setup.scm 88 */
										bool_t BgL_testz00_5224;

										{	/* Cfa/setup.scm 88 */
											BgL_variablez00_bglt BgL_arg5524z00_1856;

											BgL_arg5524z00_1856 =
												(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->
												BgL_variablez00);
											{	/* Cfa/setup.scm 88 */
												obj_t BgL_obj3637z00_2567;

												BgL_obj3637z00_2567 = (obj_t) (BgL_arg5524z00_1856);
												BgL_testz00_5224 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3637z00_2567,
													BGl_reshapedzd2globalzd2zzcfa_infoz00);
											}
										}
										if (BgL_testz00_5224)
											{	/* Cfa/setup.scm 88 */
												BgL_testz00_5219 = ((bool_t) 0);
											}
										else
											{	/* Cfa/setup.scm 88 */
												BgL_testz00_5219 = ((bool_t) 1);
											}
									}
								else
									{	/* Cfa/setup.scm 88 */
										BgL_testz00_5219 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_5219)
								{	/* Cfa/setup.scm 89 */
									BgL_globalz00_bglt BgL_obj5208z00_1851;

									BgL_obj5208z00_1851 =
										((BgL_globalz00_bglt)
										(BgL_globalz00_bglt) (
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1839))->
												BgL_variablez00)));
									{	/* Cfa/setup.scm 89 */
										obj_t BgL_auxz00_5233;

										BgL_objectz00_bglt BgL_auxz00_5231;

										BgL_auxz00_5233 =
											BGl_wideningzd2reshapedzd2globalz00zzcfa_infoz00();
										BgL_auxz00_5231 =
											(BgL_objectz00_bglt) (BgL_obj5208z00_1851);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5231, BgL_auxz00_5233);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5208z00_1851),
										BGl_classzd2numzd2zz__objectz00
										(BGl_reshapedzd2globalzd2zzcfa_infoz00));
									return (obj_t) (BgL_obj5208z00_1851);
								}
							else
								{	/* Cfa/setup.scm 88 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* node-setup!-kwote/no5304 */
	obj_t BGl_nodezd2setupz12zd2kwotezf2no5304ze0zzcfa_setupz00(obj_t
		BgL_envz00_3570, obj_t BgL_kwotez00_3571)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 74 */
			{
				BgL_kwotezf2nodezf2_bglt BgL_kwotez00_1832;

				BgL_kwotez00_1832 = (BgL_kwotezf2nodezf2_bglt) (BgL_kwotez00_3571);
				{	/* Cfa/setup.scm 75 */
					BgL_nodez00_bglt BgL_arg5511z00_2499;

					{
						obj_t BgL_auxz00_5241;

						{	/* Cfa/setup.scm 75 */
							BgL_objectz00_bglt BgL_auxz00_5242;

							BgL_auxz00_5242 = (BgL_objectz00_bglt) (BgL_kwotez00_1832);
							BgL_auxz00_5241 = BGL_OBJECT_WIDENING(BgL_auxz00_5242);
						}
						BgL_arg5511z00_2499 =
							(((BgL_kwotezf2nodezf2_bglt) CREF(BgL_auxz00_5241))->BgL_nodez00);
					}
					{	/* Cfa/setup.scm 75 */
						obj_t BgL_method5298z00_2502;

						{	/* Cfa/setup.scm 75 */
							BgL_objectz00_bglt BgL_objz00_2503;

							BgL_objz00_2503 = (BgL_objectz00_bglt) (BgL_arg5511z00_2499);
							{	/* Cfa/setup.scm 75 */
								long BgL_objzd2classzd2numz00_2504;

								BgL_objzd2classzd2numz00_2504 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2503);
								{	/* Cfa/setup.scm 75 */
									obj_t BgL_arg2643z00_2505;

									BgL_arg2643z00_2505 =
										PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
										(int) (((long) 1)));
									{	/* Cfa/setup.scm 75 */
										obj_t BgL_arrayz00_2507;

										int BgL_offsetz00_2508;

										BgL_arrayz00_2507 = BgL_arg2643z00_2505;
										BgL_offsetz00_2508 = (int) (BgL_objzd2classzd2numz00_2504);
										{	/* Cfa/setup.scm 75 */
											long BgL_offsetz00_2509;

											BgL_offsetz00_2509 =
												((long) (BgL_offsetz00_2508) - OBJECT_TYPE);
											{	/* Cfa/setup.scm 75 */
												long BgL_modz00_2510;

												{	/* Cfa/setup.scm 75 */
													int BgL_arg2645z00_2511;

													BgL_arg2645z00_2511 = (int) (((long) 16));
													{	/* Cfa/setup.scm 75 */
														long BgL_auxz00_5254;

														BgL_auxz00_5254 = (long) (BgL_arg2645z00_2511);
														BgL_modz00_2510 =
															(BgL_offsetz00_2509 / BgL_auxz00_5254);
												}}
												{	/* Cfa/setup.scm 75 */
													long BgL_restz00_2512;

													{	/* Cfa/setup.scm 75 */
														int BgL_arg2644z00_2513;

														BgL_arg2644z00_2513 = (int) (((long) 16));
														{	/* Cfa/setup.scm 75 */
															long BgL_auxz00_5258;

															BgL_auxz00_5258 = (long) (BgL_arg2644z00_2513);
															BgL_restz00_2512 =
																(BgL_offsetz00_2509 % BgL_auxz00_5258);
													}}
													{	/* Cfa/setup.scm 75 */

														BgL_method5298z00_2502 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2507,
																(int) (BgL_modz00_2510)),
															(int) (BgL_restz00_2512));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2502) (BgL_method5298z00_2502,
							(obj_t) (BgL_arg5511z00_2499), BEOA);
					}
				}
			}
		}
	}



/* node-setup!-kwote5302 */
	obj_t BGl_nodezd2setupz12zd2kwote5302z12zzcfa_setupz00(obj_t BgL_envz00_3572,
		obj_t BgL_nodez00_3573)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 66 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1820;

				{	/* Cfa/setup.scm 67 */
					BgL_kwotez00_bglt BgL_auxz00_5269;

					BgL_nodez00_1820 = (BgL_kwotez00_bglt) (BgL_nodez00_3573);
					{	/* Cfa/setup.scm 68 */
						BgL_kwotez00_bglt BgL_obj5202z00_1824;

						BgL_obj5202z00_1824 = ((BgL_kwotez00_bglt) BgL_nodez00_1820);
						{	/* Cfa/setup.scm 69 */
							obj_t BgL_arg5505z00_1825;

							{	/* Cfa/setup.scm 69 */
								BgL_approxz00_bglt BgL_arg5506z00_1826;

								{	/* Cfa/setup.scm 69 */
									BgL_typez00_bglt BgL_arg5507z00_1827;

									{	/* Cfa/setup.scm 69 */
										obj_t BgL_arg5508z00_1828;

										BgL_arg5508z00_1828 =
											(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1820))->
											BgL_valuez00);
										BgL_arg5507z00_1827 =
											BGl_getzd2typezd2kwotez00zztype_typeofz00
											(BgL_arg5508z00_1828);
									}
									BgL_arg5506z00_1826 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5507z00_1827);
								}
								BgL_arg5505z00_1825 =
									BGl_wideningzd2kwotezf2Cinfoz20zzcfa_infoz00
									(BgL_arg5506z00_1826);
							}
							{	/* Cfa/setup.scm 68 */
								BgL_objectz00_bglt BgL_auxz00_5275;

								BgL_auxz00_5275 = (BgL_objectz00_bglt) (BgL_obj5202z00_1824);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5275, BgL_arg5505z00_1825);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5202z00_1824),
							BGl_classzd2numzd2zz__objectz00
							(BGl_kwotezf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_5269 = BgL_obj5202z00_1824;
					}
					return (obj_t) (BgL_auxz00_5269);
				}
			}
		}
	}



/* node-setup!-atom5300 */
	obj_t BGl_nodezd2setupz12zd2atom5300z12zzcfa_setupz00(obj_t BgL_envz00_3574,
		obj_t BgL_nodez00_3575)
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 58 */
			{
				BgL_atomz00_bglt BgL_nodez00_1808;

				{	/* Cfa/setup.scm 59 */
					BgL_atomz00_bglt BgL_auxz00_5283;

					BgL_nodez00_1808 = (BgL_atomz00_bglt) (BgL_nodez00_3575);
					{	/* Cfa/setup.scm 60 */
						BgL_atomz00_bglt BgL_obj5199z00_1812;

						BgL_obj5199z00_1812 = ((BgL_atomz00_bglt) BgL_nodez00_1808);
						{	/* Cfa/setup.scm 61 */
							obj_t BgL_arg5499z00_1813;

							{	/* Cfa/setup.scm 61 */
								BgL_approxz00_bglt BgL_arg5500z00_1814;

								{	/* Cfa/setup.scm 61 */
									BgL_typez00_bglt BgL_arg5501z00_1815;

									{	/* Cfa/setup.scm 61 */
										obj_t BgL_arg5502z00_1816;

										BgL_arg5502z00_1816 =
											(((BgL_atomz00_bglt) CREF(BgL_nodez00_1808))->
											BgL_valuez00);
										BgL_arg5501z00_1815 =
											BGl_getzd2typezd2atomz00zztype_typeofz00
											(BgL_arg5502z00_1816);
									}
									BgL_arg5500z00_1814 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5501z00_1815);
								}
								BgL_arg5499z00_1813 =
									BGl_wideningzd2atomzf2Cinfoz20zzcfa_infoz00
									(BgL_arg5500z00_1814);
							}
							{	/* Cfa/setup.scm 60 */
								BgL_objectz00_bglt BgL_auxz00_5289;

								BgL_auxz00_5289 = (BgL_objectz00_bglt) (BgL_obj5199z00_1812);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_5289, BgL_arg5499z00_1813);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5199z00_1812),
							BGl_classzd2numzd2zz__objectz00
							(BGl_atomzf2Cinfozf2zzcfa_infoz00));
						BgL_auxz00_5283 = BgL_obj5199z00_1812;
					}
					return (obj_t) (BgL_auxz00_5283);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_setupz00()
	{
		AN_OBJECT;
		{	/* Cfa/setup.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string5867z00zzcfa_setupz00));
		}
	}

#ifdef __cplusplus
}
#endif
