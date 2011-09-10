/*===========================================================================*/
/*   (Globalize/escape.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/escape.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl__escapez12zd2default3704zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_escapeza7();
	static obj_t BGl_escapezd2funz12zd2global3693z12zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_escapez12zd2letzd2fun3741z12zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_escapez12zd2setzd2exzd2it3745zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_escapez12zd2closure3714zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(BgL_variablez00_bglt);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_escapez12zd2letzd2var3743z12zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_escapez12zd2cast3728zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_escapez12zd2select3738zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_escapeza7();
	static obj_t
		BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(BgL_variablez00_bglt);
	static obj_t
		BGl__setzd2escapingzd2funz12zd2de3696zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__escapez12z12zzglobaliza7e_escapeza7(obj_t, obj_t, obj_t);
	static obj_t
		BGl__escapezd2funz12zd2default3690z12zzglobaliza7e_escapeza7(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_escapez12zd2setq3730zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl__setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__escapezd2funz12zc0zzglobaliza7e_escapeza7(obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_escapezd2funz12zd2local3695z12zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	static obj_t
		BGl_escapezd2funz12zd2default3690z12zzglobaliza7e_escapeza7
		(BgL_variablez00_bglt);
	static obj_t BGl_escapez12zd2sequence3717zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_escapeza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_escapez12zd2boxzd2setz123751z00zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7 =
		BUNSPEC;
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_escapeza7();
	static obj_t BGl_escapez12zd2app3719zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_escapez12zd2fail3735zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_escapez12zd2default3704zc0zzglobaliza7e_escapeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		bool_t, long, long);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		bool_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_escapez12zd2conditional3732zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_setzd2escapingzd2funz12zd2lo3703zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_escapeza7();
	static obj_t BGl_escapez12zd2funcall3723zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static bool_t BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		long, long, bool_t);
	extern obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_escapez12zd2makezd2box3749z12zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_escapez12zd2var3711zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t
		BGl_setzd2escapingzd2funz12zd2gl3701zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	static obj_t
		BGl_setzd2escapingzd2funz12zd2gl3699zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t);
	static obj_t BGl_escapez12zd2boxzd2ref3753z12zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_escapez12zd2kwote3709zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, long,
		obj_t, obj_t, obj_t, obj_t, long, long, obj_t, obj_t);
	static obj_t BGl_escapez12zd2extern3725zc0zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_escapez12zd2atom3707zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_escapeza7();
	static obj_t
		BGl_escapez12zd2jumpzd2exzd2it3747zc0zzglobaliza7e_escapeza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_setzd2escapingzd2funz12zd2de3696zc0zzglobaliza7e_escapeza7
		(BgL_variablez00_bglt);
	static obj_t BGl_escapez12zd2appzd2ly3721z12zzglobaliza7e_escapeza7(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3981z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza7d2funza712za74014za7,
		BGl_escapezd2funz12zd2global3693z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3982z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza7d2funza712za74015za7,
		BGl_escapezd2funz12zd2local3695z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3983z00zzglobaliza7e_escapeza7,
		BgL_bgl_setza7d2escapingza7d4016z00,
		BGl_setzd2escapingzd2funz12zd2gl3699zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3984z00zzglobaliza7e_escapeza7,
		BgL_bgl_setza7d2escapingza7d4017z00,
		BGl_setzd2escapingzd2funz12zd2gl3701zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3985z00zzglobaliza7e_escapeza7,
		BgL_bgl_setza7d2escapingza7d4018z00,
		BGl_setzd2escapingzd2funz12zd2lo3703zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3986z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2atom4019z00,
		BGl_escapez12zd2atom3707zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3987z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2kwot4020z00,
		BGl_escapez12zd2kwote3709zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3988z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2var34021z00,
		BGl_escapez12zd2var3711zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3990z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2sequ4022z00,
		BGl_escapez12zd2sequence3717zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3989z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2clos4023z00,
		BGl_escapez12zd2closure3714zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3991z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2app34024z00,
		BGl_escapez12zd2app3719zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3992z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2appza74025za7,
		BGl_escapez12zd2appzd2ly3721z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3993z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2func4026z00,
		BGl_escapez12zd2funcall3723zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3994z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2exte4027z00,
		BGl_escapez12zd2extern3725zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3995z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2cast4028z00,
		BGl_escapez12zd2cast3728zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3996z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2setq4029z00,
		BGl_escapez12zd2setq3730zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3997z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2cond4030z00,
		BGl_escapez12zd2conditional3732zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3998z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2fail4031z00,
		BGl_escapez12zd2fail3735zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3999z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2sele4032z00,
		BGl_escapez12zd2select3738zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4007z00zzglobaliza7e_escapeza7,
		BgL_bgl_string4007za700za7za7g4033za7, "globalize_escape", 16);
	      DEFINE_STRING(BGl_string4008z00zzglobaliza7e_escapeza7,
		BgL_bgl_string4008za700za7za7g4034za7, "export done escape!-default3704 ",
		32);
	      DEFINE_STRING(BGl_string3976z00zzglobaliza7e_escapeza7,
		BgL_bgl_string3976za700za7za7g4035za7, "escape-fun!", 11);
	      DEFINE_STRING(BGl_string3977z00zzglobaliza7e_escapeza7,
		BgL_bgl_string3977za700za7za7g4036za7, "set-escaping-fun!", 17);
	      DEFINE_STRING(BGl_string3978z00zzglobaliza7e_escapeza7,
		BgL_bgl_string3978za700za7za7g4037za7, "escape!", 7);
	      DEFINE_STRING(BGl_string3980z00zzglobaliza7e_escapeza7,
		BgL_bgl_string3980za700za7za7g4038za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3979z00zzglobaliza7e_escapeza7,
		BgL_bgl_string3979za700za7za7g4039za7, "Illegal variable", 16);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
		BgL_bgl__escapeza7d2funza7124040z00,
		BGl__escapezd2funz12zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_setzd2escapingzd2funz12zd2de3696zd2envz12zzglobaliza7e_escapeza7,
		BgL_bgl__setza7d2escapingza74041z00,
		BGl__setzd2escapingzd2funz12zd2de3696zc0zzglobaliza7e_escapeza7, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_escapez12zd2default3704zd2envz12zzglobaliza7e_escapeza7,
		BgL_bgl__escapeza712za7d2def4042z00,
		BGl__escapez12zd2default3704zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
		BgL_bgl__setza7d2escapingza74043z00,
		BGl__setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_escapezd2funz12zd2default3690zd2envzc0zzglobaliza7e_escapeza7,
		BgL_bgl__escapeza7d2funza7124044z00,
		BGl__escapezd2funz12zd2default3690z12zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
		BgL_bgl__escapeza712za712za7za7g4045z00,
		BGl__escapez12z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4000z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2letza74046za7,
		BGl_escapez12zd2letzd2fun3741z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4001z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2letza74047za7,
		BGl_escapez12zd2letzd2var3743z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4002z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2setza74048za7,
		BGl_escapez12zd2setzd2exzd2it3745zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4003z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2jump4049z00,
		BGl_escapez12zd2jumpzd2exzd2it3747zc0zzglobaliza7e_escapeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4004z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2make4050z00,
		BGl_escapez12zd2makezd2box3749z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4005z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2boxza74051za7,
		BGl_escapez12zd2boxzd2setz123751z00zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4006z00zzglobaliza7e_escapeza7,
		BgL_bgl_escapeza712za7d2boxza74052za7,
		BGl_escapez12zd2boxzd2ref3753z12zzglobaliza7e_escapeza7, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_escapeza7(long
		BgL_checksumz00_2757, char *BgL_fromz00_2758)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_escapeza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_escapeza7();
					BGl_cnstzd2initzd2zzglobaliza7e_escapeza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_escapeza7();
					BGl_genericzd2initzd2zzglobaliza7e_escapeza7();
					BGl_methodzd2initzd2zzglobaliza7e_escapeza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_escapeza7()
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_escape");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_escape");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_escapeza7()
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			{	/* Globalize/escape.scm 15 */
				obj_t BgL_cportz00_2738;

				BgL_cportz00_2738 =
					bgl_open_input_string(BGl_string4008z00zzglobaliza7e_escapeza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_2739;

					BgL_iz00_2739 = ((long) 2);
				BgL_loopz00_2740:
					if ((BgL_iz00_2739 == ((long) -1)))
						{	/* Globalize/escape.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/escape.scm 15 */
							{	/* Globalize/escape.scm 15 */
								obj_t BgL_arg4010z00_2742;

								{	/* Globalize/escape.scm 15 */

									{	/* Globalize/escape.scm 15 */
										obj_t BgL_locationz00_2744;

										BgL_locationz00_2744 = BBOOL(((bool_t) 0));
										{	/* Globalize/escape.scm 15 */

											BgL_arg4010z00_2742 =
												BGl_readz00zz__readerz00(BgL_cportz00_2738,
												BgL_locationz00_2744);
										}
									}
								}
								{	/* Globalize/escape.scm 15 */
									int BgL_auxz00_2776;

									BgL_auxz00_2776 = (int) (BgL_iz00_2739);
									CNST_TABLE_SET(BgL_auxz00_2776, BgL_arg4010z00_2742);
							}}
							{	/* Globalize/escape.scm 15 */
								int BgL_auxz00_2745;

								BgL_auxz00_2745 = (int) ((BgL_iz00_2739 - ((long) 1)));
								{
									long BgL_iz00_2781;

									BgL_iz00_2781 = (long) (BgL_auxz00_2745);
									BgL_iz00_2739 = BgL_iz00_2781;
									goto BgL_loopz00_2740;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_escapeza7()
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			return BUNSPEC;
		}
	}



/* escape*! */
	bool_t BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(obj_t BgL_nodeza2za2_56,
		obj_t BgL_oz00_57)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 260 */
			{
				obj_t BgL_l3688z00_969;

				BgL_l3688z00_969 = BgL_nodeza2za2_56;
			BgL_zc3anonymousza33754ze3z83_970:
				if (PAIRP(BgL_l3688z00_969))
					{	/* Globalize/escape.scm 261 */
						{	/* Globalize/escape.scm 261 */
							obj_t BgL_nz00_972;

							BgL_nz00_972 = CAR(BgL_l3688z00_969);
							{	/* Globalize/escape.scm 261 */
								BgL_nodez00_bglt BgL_nodez00_1682;

								BgL_variablez00_bglt BgL_oz00_1683;

								BgL_nodez00_1682 = (BgL_nodez00_bglt) (BgL_nz00_972);
								BgL_oz00_1683 = (BgL_variablez00_bglt) (BgL_oz00_57);
								{	/* Globalize/escape.scm 261 */
									obj_t BgL_method3705z00_1684;

									{	/* Globalize/escape.scm 261 */
										BgL_objectz00_bglt BgL_objz00_1685;

										BgL_objz00_1685 = (BgL_objectz00_bglt) (BgL_nodez00_1682);
										{	/* Globalize/escape.scm 261 */
											long BgL_objzd2classzd2numz00_1686;

											BgL_objzd2classzd2numz00_1686 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1685);
											{	/* Globalize/escape.scm 261 */
												obj_t BgL_arg2643z00_1687;

												BgL_arg2643z00_1687 =
													PROCEDURE_REF
													(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
													(int) (((long) 1)));
												{	/* Globalize/escape.scm 261 */
													obj_t BgL_arrayz00_1689;

													int BgL_offsetz00_1690;

													BgL_arrayz00_1689 = BgL_arg2643z00_1687;
													BgL_offsetz00_1690 =
														(int) (BgL_objzd2classzd2numz00_1686);
													{	/* Globalize/escape.scm 261 */
														long BgL_offsetz00_1691;

														BgL_offsetz00_1691 =
															((long) (BgL_offsetz00_1690) - OBJECT_TYPE);
														{	/* Globalize/escape.scm 261 */
															long BgL_modz00_1692;

															{	/* Globalize/escape.scm 261 */
																int BgL_arg2645z00_1693;

																BgL_arg2645z00_1693 = (int) (((long) 16));
																{	/* Globalize/escape.scm 261 */
																	long BgL_auxz00_2796;

																	BgL_auxz00_2796 =
																		(long) (BgL_arg2645z00_1693);
																	BgL_modz00_1692 =
																		(BgL_offsetz00_1691 / BgL_auxz00_2796);
															}}
															{	/* Globalize/escape.scm 261 */
																long BgL_restz00_1694;

																{	/* Globalize/escape.scm 261 */
																	int BgL_arg2644z00_1695;

																	BgL_arg2644z00_1695 = (int) (((long) 16));
																	{	/* Globalize/escape.scm 261 */
																		long BgL_auxz00_2800;

																		BgL_auxz00_2800 =
																			(long) (BgL_arg2644z00_1695);
																		BgL_restz00_1694 =
																			(BgL_offsetz00_1691 % BgL_auxz00_2800);
																}}
																{	/* Globalize/escape.scm 261 */

																	BgL_method3705z00_1684 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1689,
																			(int) (BgL_modz00_1692)),
																		(int) (BgL_restz00_1694));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3705z00_1684)
										(BgL_method3705z00_1684, (obj_t) (BgL_nodez00_1682),
										(obj_t) (BgL_oz00_1683), BEOA);
						}}}
						{
							obj_t BgL_l3688z00_2811;

							BgL_l3688z00_2811 = CDR(BgL_l3688z00_969);
							BgL_l3688z00_969 = BgL_l3688z00_2811;
							goto BgL_zc3anonymousza33754ze3z83_970;
						}
					}
				else
					{	/* Globalize/escape.scm 261 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_escapeza7()
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
				BGl_escapezd2funz12zd2default3690zd2envzc0zzglobaliza7e_escapeza7,
				BGl_variablez00zzast_varz00, BGl_string3976z00zzglobaliza7e_escapeza7);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_setzd2escapingzd2funz12zd2de3696zd2envz12zzglobaliza7e_escapeza7,
				BGl_variablez00zzast_varz00, BGl_string3977z00zzglobaliza7e_escapeza7);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_escapez12zd2default3704zd2envz12zzglobaliza7e_escapeza7,
				BGl_nodez00zzast_nodez00, BGl_string3978z00zzglobaliza7e_escapeza7);
		}
	}



/* escape-fun! */
	BGL_EXPORTED_DEF obj_t
		BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(BgL_variablez00_bglt
		BgL_variablez00_1)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 27 */
			{	/* Globalize/escape.scm 27 */
				obj_t BgL_method3691z00_1710;

				{	/* Globalize/escape.scm 27 */
					BgL_objectz00_bglt BgL_objz00_1711;

					BgL_objz00_1711 = (BgL_objectz00_bglt) (BgL_variablez00_1);
					{	/* Globalize/escape.scm 27 */
						long BgL_objzd2classzd2numz00_1712;

						BgL_objzd2classzd2numz00_1712 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1711);
						{	/* Globalize/escape.scm 27 */
							obj_t BgL_arg2643z00_1713;

							BgL_arg2643z00_1713 =
								PROCEDURE_REF
								(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
								(int) (((long) 1)));
							{	/* Globalize/escape.scm 27 */
								obj_t BgL_arrayz00_1715;

								int BgL_offsetz00_1716;

								BgL_arrayz00_1715 = BgL_arg2643z00_1713;
								BgL_offsetz00_1716 = (int) (BgL_objzd2classzd2numz00_1712);
								{	/* Globalize/escape.scm 27 */
									long BgL_offsetz00_1717;

									BgL_offsetz00_1717 =
										((long) (BgL_offsetz00_1716) - OBJECT_TYPE);
									{	/* Globalize/escape.scm 27 */
										long BgL_modz00_1718;

										{	/* Globalize/escape.scm 27 */
											int BgL_arg2645z00_1719;

											BgL_arg2645z00_1719 = (int) (((long) 16));
											{	/* Globalize/escape.scm 27 */
												long BgL_auxz00_2824;

												BgL_auxz00_2824 = (long) (BgL_arg2645z00_1719);
												BgL_modz00_1718 =
													(BgL_offsetz00_1717 / BgL_auxz00_2824);
										}}
										{	/* Globalize/escape.scm 27 */
											long BgL_restz00_1720;

											{	/* Globalize/escape.scm 27 */
												int BgL_arg2644z00_1721;

												BgL_arg2644z00_1721 = (int) (((long) 16));
												{	/* Globalize/escape.scm 27 */
													long BgL_auxz00_2828;

													BgL_auxz00_2828 = (long) (BgL_arg2644z00_1721);
													BgL_restz00_1720 =
														(BgL_offsetz00_1717 % BgL_auxz00_2828);
											}}
											{	/* Globalize/escape.scm 27 */

												BgL_method3691z00_1710 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1715,
														(int) (BgL_modz00_1718)), (int) (BgL_restz00_1720));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3691z00_1710) (BgL_method3691z00_1710,
					(obj_t) (BgL_variablez00_1), BEOA);
			}
		}
	}



/* _escape-fun! */
	obj_t BGl__escapezd2funz12zc0zzglobaliza7e_escapeza7(obj_t BgL_envz00_2628,
		obj_t BgL_variablez00_2629)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 27 */
			return
				BGl_escapezd2funz12zc0zzglobaliza7e_escapeza7(
				(BgL_variablez00_bglt) (BgL_variablez00_2629));
		}
	}



/* escape-fun!-default3690 */
	obj_t
		BGl_escapezd2funz12zd2default3690z12zzglobaliza7e_escapeza7
		(BgL_variablez00_bglt BgL_variablez00_2)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			{	/* Globalize/escape.scm 28 */
				BgL_valuez00_bglt BgL_funz00_1392;

				BgL_funz00_1392 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_2))->BgL_valuez00);
				{	/* Globalize/escape.scm 29 */
					obj_t BgL_g3672z00_1393;

					{
						BgL_sfunz00_bglt BgL_auxz00_2841;

						BgL_auxz00_2841 = (BgL_sfunz00_bglt) (BgL_funz00_1392);
						BgL_g3672z00_1393 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2841))->BgL_argsz00);
					}
					{
						obj_t BgL_l3670z00_1395;

						BgL_l3670z00_1395 = BgL_g3672z00_1393;
					BgL_zc3anonymousza33809ze3z83_1396:
						if (PAIRP(BgL_l3670z00_1395))
							{	/* Globalize/escape.scm 31 */
								{	/* Globalize/escape.scm 30 */
									obj_t BgL_localz00_1398;

									BgL_localz00_1398 = CAR(BgL_l3670z00_1395);
									{	/* Globalize/escape.scm 30 */
										BgL_svarz00_bglt BgL_obj3633z00_1399;

										{
											BgL_svarz00_bglt BgL_auxz00_2847;

											{	/* Globalize/escape.scm 30 */
												BgL_valuez00_bglt BgL_auxz00_2848;

												{
													BgL_variablez00_bglt BgL_auxz00_2849;

													BgL_auxz00_2849 =
														(BgL_variablez00_bglt) (BgL_localz00_1398);
													BgL_auxz00_2848 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2849))->
														BgL_valuez00);
												}
												BgL_auxz00_2847 = (BgL_svarz00_bglt) (BgL_auxz00_2848);
											}
											BgL_obj3633z00_1399 =
												((BgL_svarz00_bglt) BgL_auxz00_2847);
										}
										{	/* Globalize/escape.scm 30 */
											obj_t BgL_auxz00_2856;

											BgL_objectz00_bglt BgL_auxz00_2854;

											BgL_auxz00_2856 =
												BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7((
													(bool_t) 0), ((long) -10), ((long) -10),
												((bool_t) 0));
											BgL_auxz00_2854 =
												(BgL_objectz00_bglt) (BgL_obj3633z00_1399);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_2854, BgL_auxz00_2856);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3633z00_1399),
											BGl_classzd2numzd2zz__objectz00
											(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
										BgL_obj3633z00_1399;
								}}
								{
									obj_t BgL_l3670z00_2862;

									BgL_l3670z00_2862 = CDR(BgL_l3670z00_1395);
									BgL_l3670z00_1395 = BgL_l3670z00_2862;
									goto BgL_zc3anonymousza33809ze3z83_1396;
								}
							}
						else
							{	/* Globalize/escape.scm 31 */
								((bool_t) 1);
							}
					}
				}
				{	/* Globalize/escape.scm 32 */
					BgL_sfunz00_bglt BgL_obj3634z00_1404;

					BgL_obj3634z00_1404 =
						((BgL_sfunz00_bglt) (BgL_sfunz00_bglt) (BgL_funz00_1392));
					{	/* Globalize/escape.scm 32 */
						obj_t BgL_auxz00_2868;

						BgL_objectz00_bglt BgL_auxz00_2866;

						BgL_auxz00_2868 =
							BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7(((bool_t) 0),
							BNIL, BFALSE, BNIL, BFALSE, BNIL, BUNSPEC, BUNSPEC, BFALSE, BNIL,
							BNIL, ((long) -10), BNIL, BFALSE, BFALSE, BFALSE, ((long) -10),
							((long) -10), BUNSPEC, BNIL);
						BgL_auxz00_2866 = (BgL_objectz00_bglt) (BgL_obj3634z00_1404);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2866, BgL_auxz00_2868);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj3634z00_1404),
						BGl_classzd2numzd2zz__objectz00
						(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
					BgL_obj3634z00_1404;
				}
				{	/* Globalize/escape.scm 33 */
					obj_t BgL_arg3816z00_1407;

					{
						BgL_sfunz00_bglt BgL_auxz00_2874;

						BgL_auxz00_2874 = (BgL_sfunz00_bglt) (BgL_funz00_1392);
						BgL_arg3816z00_1407 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2874))->BgL_bodyz00);
					}
					{	/* Globalize/escape.scm 33 */
						BgL_nodez00_bglt BgL_nodez00_1746;

						BgL_nodez00_1746 = (BgL_nodez00_bglt) (BgL_arg3816z00_1407);
						{	/* Globalize/escape.scm 33 */
							obj_t BgL_method3705z00_1748;

							{	/* Globalize/escape.scm 33 */
								BgL_objectz00_bglt BgL_objz00_1749;

								BgL_objz00_1749 = (BgL_objectz00_bglt) (BgL_nodez00_1746);
								{	/* Globalize/escape.scm 33 */
									long BgL_objzd2classzd2numz00_1750;

									BgL_objzd2classzd2numz00_1750 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1749);
									{	/* Globalize/escape.scm 33 */
										obj_t BgL_arg2643z00_1751;

										BgL_arg2643z00_1751 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 33 */
											obj_t BgL_arrayz00_1753;

											int BgL_offsetz00_1754;

											BgL_arrayz00_1753 = BgL_arg2643z00_1751;
											BgL_offsetz00_1754 =
												(int) (BgL_objzd2classzd2numz00_1750);
											{	/* Globalize/escape.scm 33 */
												long BgL_offsetz00_1755;

												BgL_offsetz00_1755 =
													((long) (BgL_offsetz00_1754) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 33 */
													long BgL_modz00_1756;

													{	/* Globalize/escape.scm 33 */
														int BgL_arg2645z00_1757;

														BgL_arg2645z00_1757 = (int) (((long) 16));
														{	/* Globalize/escape.scm 33 */
															long BgL_auxz00_2886;

															BgL_auxz00_2886 = (long) (BgL_arg2645z00_1757);
															BgL_modz00_1756 =
																(BgL_offsetz00_1755 / BgL_auxz00_2886);
													}}
													{	/* Globalize/escape.scm 33 */
														long BgL_restz00_1758;

														{	/* Globalize/escape.scm 33 */
															int BgL_arg2644z00_1759;

															BgL_arg2644z00_1759 = (int) (((long) 16));
															{	/* Globalize/escape.scm 33 */
																long BgL_auxz00_2890;

																BgL_auxz00_2890 = (long) (BgL_arg2644z00_1759);
																BgL_restz00_1758 =
																	(BgL_offsetz00_1755 % BgL_auxz00_2890);
														}}
														{	/* Globalize/escape.scm 33 */

															BgL_method3705z00_1748 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1753,
																	(int) (BgL_modz00_1756)),
																(int) (BgL_restz00_1758));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_1748) (BgL_method3705z00_1748,
								(obj_t) (BgL_nodez00_1746), (obj_t) (BgL_variablez00_2), BEOA);
						}
					}
				}
			}
		}
	}



/* _escape-fun!-default3690 */
	obj_t BGl__escapezd2funz12zd2default3690z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2630, obj_t BgL_variablez00_2631)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			return
				BGl_escapezd2funz12zd2default3690z12zzglobaliza7e_escapeza7(
				(BgL_variablez00_bglt) (BgL_variablez00_2631));
		}
	}



/* set-escaping-fun! */
	obj_t
		BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(BgL_variablez00_bglt
		BgL_variablez00_5)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 55 */
			{	/* Globalize/escape.scm 55 */
				obj_t BgL_method3697z00_1773;

				{	/* Globalize/escape.scm 55 */
					BgL_objectz00_bglt BgL_objz00_1774;

					BgL_objz00_1774 = (BgL_objectz00_bglt) (BgL_variablez00_5);
					{	/* Globalize/escape.scm 55 */
						long BgL_objzd2classzd2numz00_1775;

						BgL_objzd2classzd2numz00_1775 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1774);
						{	/* Globalize/escape.scm 55 */
							obj_t BgL_arg2643z00_1776;

							BgL_arg2643z00_1776 =
								PROCEDURE_REF
								(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
								(int) (((long) 1)));
							{	/* Globalize/escape.scm 55 */
								obj_t BgL_arrayz00_1778;

								int BgL_offsetz00_1779;

								BgL_arrayz00_1778 = BgL_arg2643z00_1776;
								BgL_offsetz00_1779 = (int) (BgL_objzd2classzd2numz00_1775);
								{	/* Globalize/escape.scm 55 */
									long BgL_offsetz00_1780;

									BgL_offsetz00_1780 =
										((long) (BgL_offsetz00_1779) - OBJECT_TYPE);
									{	/* Globalize/escape.scm 55 */
										long BgL_modz00_1781;

										{	/* Globalize/escape.scm 55 */
											int BgL_arg2645z00_1782;

											BgL_arg2645z00_1782 = (int) (((long) 16));
											{	/* Globalize/escape.scm 55 */
												long BgL_auxz00_2911;

												BgL_auxz00_2911 = (long) (BgL_arg2645z00_1782);
												BgL_modz00_1781 =
													(BgL_offsetz00_1780 / BgL_auxz00_2911);
										}}
										{	/* Globalize/escape.scm 55 */
											long BgL_restz00_1783;

											{	/* Globalize/escape.scm 55 */
												int BgL_arg2644z00_1784;

												BgL_arg2644z00_1784 = (int) (((long) 16));
												{	/* Globalize/escape.scm 55 */
													long BgL_auxz00_2915;

													BgL_auxz00_2915 = (long) (BgL_arg2644z00_1784);
													BgL_restz00_1783 =
														(BgL_offsetz00_1780 % BgL_auxz00_2915);
											}}
											{	/* Globalize/escape.scm 55 */

												BgL_method3697z00_1773 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1778,
														(int) (BgL_modz00_1781)), (int) (BgL_restz00_1783));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3697z00_1773) (BgL_method3697z00_1773,
					(obj_t) (BgL_variablez00_5), BEOA);
			}
		}
	}



/* _set-escaping-fun! */
	obj_t BGl__setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2632, obj_t BgL_variablez00_2633)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 55 */
			return
				BGl_setzd2escapingzd2funz12z12zzglobaliza7e_escapeza7(
				(BgL_variablez00_bglt) (BgL_variablez00_2633));
		}
	}



/* set-escaping-fun!-de3696 */
	obj_t
		BGl_setzd2escapingzd2funz12zd2de3696zc0zzglobaliza7e_escapeza7
		(BgL_variablez00_bglt BgL_variablez00_6)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			{	/* Globalize/escape.scm 56 */
				obj_t BgL_arg3819z00_1411;

				BgL_arg3819z00_1411 =
					MAKE_PAIR(
					(obj_t) (BgL_variablez00_6),
					BGl_shapez00zztools_shapez00((obj_t) (BgL_variablez00_6)));
				return
					BGl_errorz00zz__errorz00(BGl_string3977z00zzglobaliza7e_escapeza7,
					BGl_string3979z00zzglobaliza7e_escapeza7, BgL_arg3819z00_1411);
			}
		}
	}



/* _set-escaping-fun!-de3696 */
	obj_t BGl__setzd2escapingzd2funz12zd2de3696zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2634, obj_t BgL_variablez00_2635)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			return
				BGl_setzd2escapingzd2funz12zd2de3696zc0zzglobaliza7e_escapeza7(
				(BgL_variablez00_bglt) (BgL_variablez00_2635));
		}
	}



/* escape! */
	obj_t BGl_escapez12z12zzglobaliza7e_escapeza7(BgL_nodez00_bglt BgL_nodez00_10,
		BgL_variablez00_bglt BgL_oz00_11)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 81 */
			{	/* Globalize/escape.scm 81 */
				obj_t BgL_method3705z00_1798;

				{	/* Globalize/escape.scm 81 */
					BgL_objectz00_bglt BgL_objz00_1799;

					BgL_objz00_1799 = (BgL_objectz00_bglt) (BgL_nodez00_10);
					{	/* Globalize/escape.scm 81 */
						long BgL_objzd2classzd2numz00_1800;

						BgL_objzd2classzd2numz00_1800 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1799);
						{	/* Globalize/escape.scm 81 */
							obj_t BgL_arg2643z00_1801;

							BgL_arg2643z00_1801 =
								PROCEDURE_REF(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
								(int) (((long) 1)));
							{	/* Globalize/escape.scm 81 */
								obj_t BgL_arrayz00_1803;

								int BgL_offsetz00_1804;

								BgL_arrayz00_1803 = BgL_arg2643z00_1801;
								BgL_offsetz00_1804 = (int) (BgL_objzd2classzd2numz00_1800);
								{	/* Globalize/escape.scm 81 */
									long BgL_offsetz00_1805;

									BgL_offsetz00_1805 =
										((long) (BgL_offsetz00_1804) - OBJECT_TYPE);
									{	/* Globalize/escape.scm 81 */
										long BgL_modz00_1806;

										{	/* Globalize/escape.scm 81 */
											int BgL_arg2645z00_1807;

											BgL_arg2645z00_1807 = (int) (((long) 16));
											{	/* Globalize/escape.scm 81 */
												long BgL_auxz00_2942;

												BgL_auxz00_2942 = (long) (BgL_arg2645z00_1807);
												BgL_modz00_1806 =
													(BgL_offsetz00_1805 / BgL_auxz00_2942);
										}}
										{	/* Globalize/escape.scm 81 */
											long BgL_restz00_1808;

											{	/* Globalize/escape.scm 81 */
												int BgL_arg2644z00_1809;

												BgL_arg2644z00_1809 = (int) (((long) 16));
												{	/* Globalize/escape.scm 81 */
													long BgL_auxz00_2946;

													BgL_auxz00_2946 = (long) (BgL_arg2644z00_1809);
													BgL_restz00_1808 =
														(BgL_offsetz00_1805 % BgL_auxz00_2946);
											}}
											{	/* Globalize/escape.scm 81 */

												BgL_method3705z00_1798 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1803,
														(int) (BgL_modz00_1806)), (int) (BgL_restz00_1808));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3705z00_1798) (BgL_method3705z00_1798,
					(obj_t) (BgL_nodez00_10), (obj_t) (BgL_oz00_11), BEOA);
			}
		}
	}



/* _escape! */
	obj_t BGl__escapez12z12zzglobaliza7e_escapeza7(obj_t BgL_envz00_2625,
		obj_t BgL_nodez00_2626, obj_t BgL_oz00_2627)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 81 */
			return
				BGl_escapez12z12zzglobaliza7e_escapeza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2626),
				(BgL_variablez00_bglt) (BgL_oz00_2627));
		}
	}



/* escape!-default3704 */
	obj_t BGl_escapez12zd2default3704zc0zzglobaliza7e_escapeza7(BgL_nodez00_bglt
		BgL_nodez00_12, BgL_variablez00_bglt BgL_oz00_13)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3980z00zzglobaliza7e_escapeza7, (obj_t) (BgL_nodez00_12));
		}
	}



/* _escape!-default3704 */
	obj_t BGl__escapez12zd2default3704zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2636, obj_t BgL_nodez00_2637, obj_t BgL_oz00_2638)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			return
				BGl_escapez12zd2default3704zc0zzglobaliza7e_escapeza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2637),
				(BgL_variablez00_bglt) (BgL_oz00_2638));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_escapeza7()
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
				BGl_globalz00zzast_varz00, BGl_proc3981z00zzglobaliza7e_escapeza7,
				BGl_string3976z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
				BGl_localz00zzast_varz00, BGl_proc3982z00zzglobaliza7e_escapeza7,
				BGl_string3976z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_globalz00zzast_varz00, BGl_proc3983z00zzglobaliza7e_escapeza7,
				BGl_string3977z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc3984z00zzglobaliza7e_escapeza7,
				BGl_string3977z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7,
				BGl_proc3985z00zzglobaliza7e_escapeza7,
				BGl_string3977z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_atomz00zzast_nodez00, BGl_proc3986z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_kwotez00zzast_nodez00, BGl_proc3987z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7, BGl_varz00zzast_nodez00,
				BGl_proc3988z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_closurez00zzast_nodez00, BGl_proc3989z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_sequencez00zzast_nodez00, BGl_proc3990z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7, BGl_appz00zzast_nodez00,
				BGl_proc3991z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3992z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_funcallz00zzast_nodez00, BGl_proc3993z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_externz00zzast_nodez00, BGl_proc3994z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_castz00zzast_nodez00, BGl_proc3995z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_setqz00zzast_nodez00, BGl_proc3996z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc3997z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_failz00zzast_nodez00, BGl_proc3998z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_selectz00zzast_nodez00, BGl_proc3999z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4000z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4001z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4002z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4003z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4004z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4005z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4006z00zzglobaliza7e_escapeza7,
				BGl_string3978z00zzglobaliza7e_escapeza7);
		}
	}



/* escape!-box-ref3753 */
	obj_t BGl_escapez12zd2boxzd2ref3753z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2665, obj_t BgL_nodez00_2666, obj_t BgL_oz00_2667)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 253 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1672;

				obj_t BgL_oz00_1673;

				BgL_nodez00_1672 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2666);
				BgL_oz00_1673 = BgL_oz00_2667;
				{	/* Globalize/escape.scm 254 */
					BgL_varz00_bglt BgL_arg3912z00_2596;

					BgL_arg3912z00_2596 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1672))->BgL_varz00);
					{	/* Globalize/escape.scm 254 */
						BgL_nodez00_bglt BgL_nodez00_2598;

						BgL_variablez00_bglt BgL_oz00_2599;

						BgL_nodez00_2598 = (BgL_nodez00_bglt) (BgL_arg3912z00_2596);
						BgL_oz00_2599 = (BgL_variablez00_bglt) (BgL_oz00_1673);
						{	/* Globalize/escape.scm 254 */
							obj_t BgL_method3705z00_2600;

							{	/* Globalize/escape.scm 254 */
								BgL_objectz00_bglt BgL_objz00_2601;

								BgL_objz00_2601 = (BgL_objectz00_bglt) (BgL_nodez00_2598);
								{	/* Globalize/escape.scm 254 */
									long BgL_objzd2classzd2numz00_2602;

									BgL_objzd2classzd2numz00_2602 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2601);
									{	/* Globalize/escape.scm 254 */
										obj_t BgL_arg2643z00_2603;

										BgL_arg2643z00_2603 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 254 */
											obj_t BgL_arrayz00_2605;

											int BgL_offsetz00_2606;

											BgL_arrayz00_2605 = BgL_arg2643z00_2603;
											BgL_offsetz00_2606 =
												(int) (BgL_objzd2classzd2numz00_2602);
											{	/* Globalize/escape.scm 254 */
												long BgL_offsetz00_2607;

												BgL_offsetz00_2607 =
													((long) (BgL_offsetz00_2606) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 254 */
													long BgL_modz00_2608;

													{	/* Globalize/escape.scm 254 */
														int BgL_arg2645z00_2609;

														BgL_arg2645z00_2609 = (int) (((long) 16));
														{	/* Globalize/escape.scm 254 */
															long BgL_auxz00_3003;

															BgL_auxz00_3003 = (long) (BgL_arg2645z00_2609);
															BgL_modz00_2608 =
																(BgL_offsetz00_2607 / BgL_auxz00_3003);
													}}
													{	/* Globalize/escape.scm 254 */
														long BgL_restz00_2610;

														{	/* Globalize/escape.scm 254 */
															int BgL_arg2644z00_2611;

															BgL_arg2644z00_2611 = (int) (((long) 16));
															{	/* Globalize/escape.scm 254 */
																long BgL_auxz00_3007;

																BgL_auxz00_3007 = (long) (BgL_arg2644z00_2611);
																BgL_restz00_2610 =
																	(BgL_offsetz00_2607 % BgL_auxz00_3007);
														}}
														{	/* Globalize/escape.scm 254 */

															BgL_method3705z00_2600 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2605,
																	(int) (BgL_modz00_2608)),
																(int) (BgL_restz00_2610));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2600) (BgL_method3705z00_2600,
								(obj_t) (BgL_nodez00_2598), (obj_t) (BgL_oz00_2599), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-box-set!3751 */
	obj_t BGl_escapez12zd2boxzd2setz123751z00zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2668, obj_t BgL_nodez00_2669, obj_t BgL_oz00_2670)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 246 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1664;

				obj_t BgL_oz00_1665;

				BgL_nodez00_1664 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2669);
				BgL_oz00_1665 = BgL_oz00_2670;
				{	/* Globalize/escape.scm 247 */
					BgL_nodez00_bglt BgL_arg3910z00_2566;

					BgL_arg3910z00_2566 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1664))->BgL_valuez00);
					{	/* Globalize/escape.scm 247 */
						BgL_variablez00_bglt BgL_oz00_2569;

						BgL_oz00_2569 = (BgL_variablez00_bglt) (BgL_oz00_1665);
						{	/* Globalize/escape.scm 247 */
							obj_t BgL_method3705z00_2570;

							{	/* Globalize/escape.scm 247 */
								BgL_objectz00_bglt BgL_objz00_2571;

								BgL_objz00_2571 = (BgL_objectz00_bglt) (BgL_arg3910z00_2566);
								{	/* Globalize/escape.scm 247 */
									long BgL_objzd2classzd2numz00_2572;

									BgL_objzd2classzd2numz00_2572 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2571);
									{	/* Globalize/escape.scm 247 */
										obj_t BgL_arg2643z00_2573;

										BgL_arg2643z00_2573 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 247 */
											obj_t BgL_arrayz00_2575;

											int BgL_offsetz00_2576;

											BgL_arrayz00_2575 = BgL_arg2643z00_2573;
											BgL_offsetz00_2576 =
												(int) (BgL_objzd2classzd2numz00_2572);
											{	/* Globalize/escape.scm 247 */
												long BgL_offsetz00_2577;

												BgL_offsetz00_2577 =
													((long) (BgL_offsetz00_2576) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 247 */
													long BgL_modz00_2578;

													{	/* Globalize/escape.scm 247 */
														int BgL_arg2645z00_2579;

														BgL_arg2645z00_2579 = (int) (((long) 16));
														{	/* Globalize/escape.scm 247 */
															long BgL_auxz00_3029;

															BgL_auxz00_3029 = (long) (BgL_arg2645z00_2579);
															BgL_modz00_2578 =
																(BgL_offsetz00_2577 / BgL_auxz00_3029);
													}}
													{	/* Globalize/escape.scm 247 */
														long BgL_restz00_2580;

														{	/* Globalize/escape.scm 247 */
															int BgL_arg2644z00_2581;

															BgL_arg2644z00_2581 = (int) (((long) 16));
															{	/* Globalize/escape.scm 247 */
																long BgL_auxz00_3033;

																BgL_auxz00_3033 = (long) (BgL_arg2644z00_2581);
																BgL_restz00_2580 =
																	(BgL_offsetz00_2577 % BgL_auxz00_3033);
														}}
														{	/* Globalize/escape.scm 247 */

															BgL_method3705z00_2570 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2575,
																	(int) (BgL_modz00_2578)),
																(int) (BgL_restz00_2580));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2570) (BgL_method3705z00_2570,
								(obj_t) (BgL_arg3910z00_2566), (obj_t) (BgL_oz00_2569), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-make-box3749 */
	obj_t BGl_escapez12zd2makezd2box3749z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2671, obj_t BgL_nodez00_2672, obj_t BgL_oz00_2673)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 240 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1657;

				obj_t BgL_oz00_1658;

				BgL_nodez00_1657 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2672);
				BgL_oz00_1658 = BgL_oz00_2673;
				{	/* Globalize/escape.scm 241 */
					BgL_nodez00_bglt BgL_arg3908z00_2536;

					BgL_arg3908z00_2536 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1657))->BgL_valuez00);
					{	/* Globalize/escape.scm 241 */
						BgL_variablez00_bglt BgL_oz00_2539;

						BgL_oz00_2539 = (BgL_variablez00_bglt) (BgL_oz00_1658);
						{	/* Globalize/escape.scm 241 */
							obj_t BgL_method3705z00_2540;

							{	/* Globalize/escape.scm 241 */
								BgL_objectz00_bglt BgL_objz00_2541;

								BgL_objz00_2541 = (BgL_objectz00_bglt) (BgL_arg3908z00_2536);
								{	/* Globalize/escape.scm 241 */
									long BgL_objzd2classzd2numz00_2542;

									BgL_objzd2classzd2numz00_2542 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2541);
									{	/* Globalize/escape.scm 241 */
										obj_t BgL_arg2643z00_2543;

										BgL_arg2643z00_2543 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 241 */
											obj_t BgL_arrayz00_2545;

											int BgL_offsetz00_2546;

											BgL_arrayz00_2545 = BgL_arg2643z00_2543;
											BgL_offsetz00_2546 =
												(int) (BgL_objzd2classzd2numz00_2542);
											{	/* Globalize/escape.scm 241 */
												long BgL_offsetz00_2547;

												BgL_offsetz00_2547 =
													((long) (BgL_offsetz00_2546) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 241 */
													long BgL_modz00_2548;

													{	/* Globalize/escape.scm 241 */
														int BgL_arg2645z00_2549;

														BgL_arg2645z00_2549 = (int) (((long) 16));
														{	/* Globalize/escape.scm 241 */
															long BgL_auxz00_3055;

															BgL_auxz00_3055 = (long) (BgL_arg2645z00_2549);
															BgL_modz00_2548 =
																(BgL_offsetz00_2547 / BgL_auxz00_3055);
													}}
													{	/* Globalize/escape.scm 241 */
														long BgL_restz00_2550;

														{	/* Globalize/escape.scm 241 */
															int BgL_arg2644z00_2551;

															BgL_arg2644z00_2551 = (int) (((long) 16));
															{	/* Globalize/escape.scm 241 */
																long BgL_auxz00_3059;

																BgL_auxz00_3059 = (long) (BgL_arg2644z00_2551);
																BgL_restz00_2550 =
																	(BgL_offsetz00_2547 % BgL_auxz00_3059);
														}}
														{	/* Globalize/escape.scm 241 */

															BgL_method3705z00_2540 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2545,
																	(int) (BgL_modz00_2548)),
																(int) (BgL_restz00_2550));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2540) (BgL_method3705z00_2540,
								(obj_t) (BgL_arg3908z00_2536), (obj_t) (BgL_oz00_2539), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-jump-ex-it3747 */
	obj_t BGl_escapez12zd2jumpzd2exzd2it3747zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2674, obj_t BgL_nodez00_2675, obj_t BgL_oz00_2676)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 232 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1648;

				obj_t BgL_oz00_1649;

				BgL_nodez00_1648 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2675);
				BgL_oz00_1649 = BgL_oz00_2676;
				{	/* Globalize/escape.scm 233 */
					BgL_nodez00_bglt BgL_arg3905z00_2478;

					BgL_arg3905z00_2478 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1648))->
						BgL_exitz00);
					{	/* Globalize/escape.scm 233 */
						BgL_variablez00_bglt BgL_oz00_2482;

						BgL_oz00_2482 = (BgL_variablez00_bglt) (BgL_oz00_1649);
						{	/* Globalize/escape.scm 233 */
							obj_t BgL_method3705z00_2483;

							{	/* Globalize/escape.scm 233 */
								BgL_objectz00_bglt BgL_objz00_2484;

								BgL_objz00_2484 = (BgL_objectz00_bglt) (BgL_arg3905z00_2478);
								{	/* Globalize/escape.scm 233 */
									long BgL_objzd2classzd2numz00_2485;

									BgL_objzd2classzd2numz00_2485 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2484);
									{	/* Globalize/escape.scm 233 */
										obj_t BgL_arg2643z00_2486;

										BgL_arg2643z00_2486 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 233 */
											obj_t BgL_arrayz00_2488;

											int BgL_offsetz00_2489;

											BgL_arrayz00_2488 = BgL_arg2643z00_2486;
											BgL_offsetz00_2489 =
												(int) (BgL_objzd2classzd2numz00_2485);
											{	/* Globalize/escape.scm 233 */
												long BgL_offsetz00_2490;

												BgL_offsetz00_2490 =
													((long) (BgL_offsetz00_2489) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 233 */
													long BgL_modz00_2491;

													{	/* Globalize/escape.scm 233 */
														int BgL_arg2645z00_2492;

														BgL_arg2645z00_2492 = (int) (((long) 16));
														{	/* Globalize/escape.scm 233 */
															long BgL_auxz00_3081;

															BgL_auxz00_3081 = (long) (BgL_arg2645z00_2492);
															BgL_modz00_2491 =
																(BgL_offsetz00_2490 / BgL_auxz00_3081);
													}}
													{	/* Globalize/escape.scm 233 */
														long BgL_restz00_2493;

														{	/* Globalize/escape.scm 233 */
															int BgL_arg2644z00_2494;

															BgL_arg2644z00_2494 = (int) (((long) 16));
															{	/* Globalize/escape.scm 233 */
																long BgL_auxz00_3085;

																BgL_auxz00_3085 = (long) (BgL_arg2644z00_2494);
																BgL_restz00_2493 =
																	(BgL_offsetz00_2490 % BgL_auxz00_3085);
														}}
														{	/* Globalize/escape.scm 233 */

															BgL_method3705z00_2483 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2488,
																	(int) (BgL_modz00_2491)),
																(int) (BgL_restz00_2493));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3705z00_2483) (BgL_method3705z00_2483,
								(obj_t) (BgL_arg3905z00_2478), (obj_t) (BgL_oz00_2482), BEOA);
				}}}
				{	/* Globalize/escape.scm 233 */
					BgL_nodez00_bglt BgL_arg3906z00_2479;

					BgL_arg3906z00_2479 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1648))->
						BgL_valuez00);
					{	/* Globalize/escape.scm 233 */
						BgL_variablez00_bglt BgL_oz00_2510;

						BgL_oz00_2510 = (BgL_variablez00_bglt) (BgL_oz00_1649);
						{	/* Globalize/escape.scm 233 */
							obj_t BgL_method3705z00_2511;

							{	/* Globalize/escape.scm 233 */
								BgL_objectz00_bglt BgL_objz00_2512;

								BgL_objz00_2512 = (BgL_objectz00_bglt) (BgL_arg3906z00_2479);
								{	/* Globalize/escape.scm 233 */
									long BgL_objzd2classzd2numz00_2513;

									BgL_objzd2classzd2numz00_2513 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2512);
									{	/* Globalize/escape.scm 233 */
										obj_t BgL_arg2643z00_2514;

										BgL_arg2643z00_2514 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 233 */
											obj_t BgL_arrayz00_2516;

											int BgL_offsetz00_2517;

											BgL_arrayz00_2516 = BgL_arg2643z00_2514;
											BgL_offsetz00_2517 =
												(int) (BgL_objzd2classzd2numz00_2513);
											{	/* Globalize/escape.scm 233 */
												long BgL_offsetz00_2518;

												BgL_offsetz00_2518 =
													((long) (BgL_offsetz00_2517) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 233 */
													long BgL_modz00_2519;

													{	/* Globalize/escape.scm 233 */
														int BgL_arg2645z00_2520;

														BgL_arg2645z00_2520 = (int) (((long) 16));
														{	/* Globalize/escape.scm 233 */
															long BgL_auxz00_3106;

															BgL_auxz00_3106 = (long) (BgL_arg2645z00_2520);
															BgL_modz00_2519 =
																(BgL_offsetz00_2518 / BgL_auxz00_3106);
													}}
													{	/* Globalize/escape.scm 233 */
														long BgL_restz00_2521;

														{	/* Globalize/escape.scm 233 */
															int BgL_arg2644z00_2522;

															BgL_arg2644z00_2522 = (int) (((long) 16));
															{	/* Globalize/escape.scm 233 */
																long BgL_auxz00_3110;

																BgL_auxz00_3110 = (long) (BgL_arg2644z00_2522);
																BgL_restz00_2521 =
																	(BgL_offsetz00_2518 % BgL_auxz00_3110);
														}}
														{	/* Globalize/escape.scm 233 */

															BgL_method3705z00_2511 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2516,
																	(int) (BgL_modz00_2519)),
																(int) (BgL_restz00_2521));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2511) (BgL_method3705z00_2511,
								(obj_t) (BgL_arg3906z00_2479), (obj_t) (BgL_oz00_2510), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-set-ex-it3745 */
	obj_t BGl_escapez12zd2setzd2exzd2it3745zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2677, obj_t BgL_nodez00_2678, obj_t BgL_oz00_2679)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 224 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1635;

				obj_t BgL_oz00_1636;

				BgL_nodez00_1635 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2678);
				BgL_oz00_1636 = BgL_oz00_2679;
				{	/* Globalize/escape.scm 226 */
					BgL_sexitz00_bglt BgL_obj3663z00_1640;

					{
						BgL_sexitz00_bglt BgL_auxz00_3122;

						{	/* Globalize/escape.scm 226 */
							BgL_variablez00_bglt BgL_arg3901z00_1643;

							{	/* Globalize/escape.scm 226 */
								BgL_varz00_bglt BgL_obj2155z00_2445;

								BgL_obj2155z00_2445 =
									(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1635))->
									BgL_varz00);
								BgL_arg3901z00_1643 =
									(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2445))->
									BgL_variablez00);
							}
							BgL_auxz00_3122 =
								(BgL_sexitz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_arg3901z00_1643))->
									BgL_valuez00));
						}
						BgL_obj3663z00_1640 = ((BgL_sexitz00_bglt) BgL_auxz00_3122);
					}
					{	/* Globalize/escape.scm 226 */
						obj_t BgL_auxz00_3130;

						BgL_objectz00_bglt BgL_auxz00_3128;

						BgL_auxz00_3130 =
							BGl_wideningzd2sexitzf2Ginfoz20zzglobaliza7e_ginfoza7(((bool_t)
								0), ((bool_t) 0), ((long) -10), ((long) -10));
						BgL_auxz00_3128 = (BgL_objectz00_bglt) (BgL_obj3663z00_1640);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3128, BgL_auxz00_3130);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj3663z00_1640),
						BGl_classzd2numzd2zz__objectz00
						(BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7));
					BgL_obj3663z00_1640;
				}
				{	/* Globalize/escape.scm 227 */
					BgL_nodez00_bglt BgL_arg3903z00_1645;

					BgL_arg3903z00_1645 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1635))->BgL_bodyz00);
					{	/* Globalize/escape.scm 227 */
						BgL_variablez00_bglt BgL_oz00_2451;

						BgL_oz00_2451 = (BgL_variablez00_bglt) (BgL_oz00_1636);
						{	/* Globalize/escape.scm 227 */
							obj_t BgL_method3705z00_2452;

							{	/* Globalize/escape.scm 227 */
								BgL_objectz00_bglt BgL_objz00_2453;

								BgL_objz00_2453 = (BgL_objectz00_bglt) (BgL_arg3903z00_1645);
								{	/* Globalize/escape.scm 227 */
									long BgL_objzd2classzd2numz00_2454;

									BgL_objzd2classzd2numz00_2454 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2453);
									{	/* Globalize/escape.scm 227 */
										obj_t BgL_arg2643z00_2455;

										BgL_arg2643z00_2455 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 227 */
											obj_t BgL_arrayz00_2457;

											int BgL_offsetz00_2458;

											BgL_arrayz00_2457 = BgL_arg2643z00_2455;
											BgL_offsetz00_2458 =
												(int) (BgL_objzd2classzd2numz00_2454);
											{	/* Globalize/escape.scm 227 */
												long BgL_offsetz00_2459;

												BgL_offsetz00_2459 =
													((long) (BgL_offsetz00_2458) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 227 */
													long BgL_modz00_2460;

													{	/* Globalize/escape.scm 227 */
														int BgL_arg2645z00_2461;

														BgL_arg2645z00_2461 = (int) (((long) 16));
														{	/* Globalize/escape.scm 227 */
															long BgL_auxz00_3146;

															BgL_auxz00_3146 = (long) (BgL_arg2645z00_2461);
															BgL_modz00_2460 =
																(BgL_offsetz00_2459 / BgL_auxz00_3146);
													}}
													{	/* Globalize/escape.scm 227 */
														long BgL_restz00_2462;

														{	/* Globalize/escape.scm 227 */
															int BgL_arg2644z00_2463;

															BgL_arg2644z00_2463 = (int) (((long) 16));
															{	/* Globalize/escape.scm 227 */
																long BgL_auxz00_3150;

																BgL_auxz00_3150 = (long) (BgL_arg2644z00_2463);
																BgL_restz00_2462 =
																	(BgL_offsetz00_2459 % BgL_auxz00_3150);
														}}
														{	/* Globalize/escape.scm 227 */

															BgL_method3705z00_2452 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2457,
																	(int) (BgL_modz00_2460)),
																(int) (BgL_restz00_2462));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2452) (BgL_method3705z00_2452,
								(obj_t) (BgL_arg3903z00_1645), (obj_t) (BgL_oz00_2451), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-let-var3743 */
	obj_t BGl_escapez12zd2letzd2var3743z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2680, obj_t BgL_nodez00_2681, obj_t BgL_oz00_2682)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 213 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1614;

				obj_t BgL_oz00_1615;

				{	/* Globalize/escape.scm 214 */
					bool_t BgL_auxz00_3162;

					BgL_nodez00_1614 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2681);
					BgL_oz00_1615 = BgL_oz00_2682;
					{	/* Globalize/escape.scm 215 */
						BgL_nodez00_bglt BgL_arg3890z00_1619;

						BgL_arg3890z00_1619 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1614))->BgL_bodyz00);
						{	/* Globalize/escape.scm 215 */
							BgL_variablez00_bglt BgL_oz00_2382;

							BgL_oz00_2382 = (BgL_variablez00_bglt) (BgL_oz00_1615);
							{	/* Globalize/escape.scm 215 */
								obj_t BgL_method3705z00_2383;

								{	/* Globalize/escape.scm 215 */
									BgL_objectz00_bglt BgL_objz00_2384;

									BgL_objz00_2384 = (BgL_objectz00_bglt) (BgL_arg3890z00_1619);
									{	/* Globalize/escape.scm 215 */
										long BgL_objzd2classzd2numz00_2385;

										BgL_objzd2classzd2numz00_2385 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2384);
										{	/* Globalize/escape.scm 215 */
											obj_t BgL_arg2643z00_2386;

											BgL_arg2643z00_2386 =
												PROCEDURE_REF
												(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
												(int) (((long) 1)));
											{	/* Globalize/escape.scm 215 */
												obj_t BgL_arrayz00_2388;

												int BgL_offsetz00_2389;

												BgL_arrayz00_2388 = BgL_arg2643z00_2386;
												BgL_offsetz00_2389 =
													(int) (BgL_objzd2classzd2numz00_2385);
												{	/* Globalize/escape.scm 215 */
													long BgL_offsetz00_2390;

													BgL_offsetz00_2390 =
														((long) (BgL_offsetz00_2389) - OBJECT_TYPE);
													{	/* Globalize/escape.scm 215 */
														long BgL_modz00_2391;

														{	/* Globalize/escape.scm 215 */
															int BgL_arg2645z00_2392;

															BgL_arg2645z00_2392 = (int) (((long) 16));
															{	/* Globalize/escape.scm 215 */
																long BgL_auxz00_3173;

																BgL_auxz00_3173 = (long) (BgL_arg2645z00_2392);
																BgL_modz00_2391 =
																	(BgL_offsetz00_2390 / BgL_auxz00_3173);
														}}
														{	/* Globalize/escape.scm 215 */
															long BgL_restz00_2393;

															{	/* Globalize/escape.scm 215 */
																int BgL_arg2644z00_2394;

																BgL_arg2644z00_2394 = (int) (((long) 16));
																{	/* Globalize/escape.scm 215 */
																	long BgL_auxz00_3177;

																	BgL_auxz00_3177 =
																		(long) (BgL_arg2644z00_2394);
																	BgL_restz00_2393 =
																		(BgL_offsetz00_2390 % BgL_auxz00_3177);
															}}
															{	/* Globalize/escape.scm 215 */

																BgL_method3705z00_2383 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2388,
																		(int) (BgL_modz00_2391)),
																	(int) (BgL_restz00_2393));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3705z00_2383) (BgL_method3705z00_2383,
									(obj_t) (BgL_arg3890z00_1619), (obj_t) (BgL_oz00_2382), BEOA);
					}}}
					{	/* Globalize/escape.scm 216 */
						obj_t BgL_g3687z00_1620;

						BgL_g3687z00_1620 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1614))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3685z00_1622;

							BgL_l3685z00_1622 = BgL_g3687z00_1620;
						BgL_zc3anonymousza33891ze3z83_1623:
							if (PAIRP(BgL_l3685z00_1622))
								{	/* Globalize/escape.scm 216 */
									{	/* Globalize/escape.scm 218 */
										obj_t BgL_bindingz00_1625;

										BgL_bindingz00_1625 = CAR(BgL_l3685z00_1622);
										{	/* Globalize/escape.scm 217 */
											BgL_svarz00_bglt BgL_obj3659z00_1626;

											{
												BgL_svarz00_bglt BgL_auxz00_3192;

												{	/* Globalize/escape.scm 217 */
													BgL_variablez00_bglt BgL_obj1611z00_2412;

													{	/* Globalize/escape.scm 217 */
														obj_t BgL_pairz00_2411;

														BgL_pairz00_2411 = BgL_bindingz00_1625;
														BgL_obj1611z00_2412 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_2411));
													}
													BgL_auxz00_3192 =
														(BgL_svarz00_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_2412))->BgL_valuez00));
												}
												BgL_obj3659z00_1626 =
													((BgL_svarz00_bglt) BgL_auxz00_3192);
											}
											{	/* Globalize/escape.scm 217 */
												obj_t BgL_auxz00_3200;

												BgL_objectz00_bglt BgL_auxz00_3198;

												BgL_auxz00_3200 =
													BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7((
														(bool_t) 0), ((long) -10), ((long) -10),
													((bool_t) 0));
												BgL_auxz00_3198 =
													(BgL_objectz00_bglt) (BgL_obj3659z00_1626);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_3198,
													BgL_auxz00_3200);
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_obj3659z00_1626),
												BGl_classzd2numzd2zz__objectz00
												(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
											BgL_obj3659z00_1626;
										}
										{	/* Globalize/escape.scm 218 */
											obj_t BgL_arg3896z00_1630;

											BgL_arg3896z00_1630 = CDR(BgL_bindingz00_1625);
											{	/* Globalize/escape.scm 218 */
												BgL_nodez00_bglt BgL_nodez00_2416;

												BgL_variablez00_bglt BgL_oz00_2417;

												BgL_nodez00_2416 =
													(BgL_nodez00_bglt) (BgL_arg3896z00_1630);
												BgL_oz00_2417 = (BgL_variablez00_bglt) (BgL_oz00_1615);
												{	/* Globalize/escape.scm 218 */
													obj_t BgL_method3705z00_2418;

													{	/* Globalize/escape.scm 218 */
														BgL_objectz00_bglt BgL_objz00_2419;

														BgL_objz00_2419 =
															(BgL_objectz00_bglt) (BgL_nodez00_2416);
														{	/* Globalize/escape.scm 218 */
															long BgL_objzd2classzd2numz00_2420;

															BgL_objzd2classzd2numz00_2420 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2419);
															{	/* Globalize/escape.scm 218 */
																obj_t BgL_arg2643z00_2421;

																BgL_arg2643z00_2421 =
																	PROCEDURE_REF
																	(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
																	(int) (((long) 1)));
																{	/* Globalize/escape.scm 218 */
																	obj_t BgL_arrayz00_2423;

																	int BgL_offsetz00_2424;

																	BgL_arrayz00_2423 = BgL_arg2643z00_2421;
																	BgL_offsetz00_2424 =
																		(int) (BgL_objzd2classzd2numz00_2420);
																	{	/* Globalize/escape.scm 218 */
																		long BgL_offsetz00_2425;

																		BgL_offsetz00_2425 =
																			(
																			(long) (BgL_offsetz00_2424) -
																			OBJECT_TYPE);
																		{	/* Globalize/escape.scm 218 */
																			long BgL_modz00_2426;

																			{	/* Globalize/escape.scm 218 */
																				int BgL_arg2645z00_2427;

																				BgL_arg2645z00_2427 =
																					(int) (((long) 16));
																				{	/* Globalize/escape.scm 218 */
																					long BgL_auxz00_3217;

																					BgL_auxz00_3217 =
																						(long) (BgL_arg2645z00_2427);
																					BgL_modz00_2426 =
																						(BgL_offsetz00_2425 /
																						BgL_auxz00_3217);
																			}}
																			{	/* Globalize/escape.scm 218 */
																				long BgL_restz00_2428;

																				{	/* Globalize/escape.scm 218 */
																					int BgL_arg2644z00_2429;

																					BgL_arg2644z00_2429 =
																						(int) (((long) 16));
																					{	/* Globalize/escape.scm 218 */
																						long BgL_auxz00_3221;

																						BgL_auxz00_3221 =
																							(long) (BgL_arg2644z00_2429);
																						BgL_restz00_2428 =
																							(BgL_offsetz00_2425 %
																							BgL_auxz00_3221);
																				}}
																				{	/* Globalize/escape.scm 218 */

																					BgL_method3705z00_2418 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2423,
																							(int) (BgL_modz00_2426)),
																						(int) (BgL_restz00_2428));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3705z00_2418)
														(BgL_method3705z00_2418, (obj_t) (BgL_nodez00_2416),
														(obj_t) (BgL_oz00_2417), BEOA);
									}}}}
									{
										obj_t BgL_l3685z00_3232;

										BgL_l3685z00_3232 = CDR(BgL_l3685z00_1622);
										BgL_l3685z00_1622 = BgL_l3685z00_3232;
										goto BgL_zc3anonymousza33891ze3z83_1623;
									}
								}
							else
								{	/* Globalize/escape.scm 216 */
									BgL_auxz00_3162 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3162);
				}
			}
		}
	}



/* escape!-let-fun3741 */
	obj_t BGl_escapez12zd2letzd2fun3741z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2683, obj_t BgL_nodez00_2684, obj_t BgL_oz00_2685)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 190 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1570;

				obj_t BgL_oz00_1571;

				BgL_nodez00_1570 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2684);
				BgL_oz00_1571 = BgL_oz00_2685;
				{	/* Globalize/escape.scm 193 */
					obj_t BgL_g3681z00_1575;

					BgL_g3681z00_1575 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1570))->BgL_localsz00);
					{
						obj_t BgL_l3679z00_1577;

						BgL_l3679z00_1577 = BgL_g3681z00_1575;
					BgL_zc3anonymousza33872ze3z83_1578:
						if (PAIRP(BgL_l3679z00_1577))
							{	/* Globalize/escape.scm 193 */
								{	/* Globalize/escape.scm 200 */
									obj_t BgL_localz00_1580;

									BgL_localz00_1580 = CAR(BgL_l3679z00_1577);
									{	/* Globalize/escape.scm 194 */
										BgL_localz00_bglt BgL_obj3654z00_1581;

										BgL_obj3654z00_1581 =
											((BgL_localz00_bglt)
											(BgL_localz00_bglt) (BgL_localz00_1580));
										{	/* Globalize/escape.scm 194 */
											obj_t BgL_auxz00_3244;

											BgL_objectz00_bglt BgL_auxz00_3242;

											BgL_auxz00_3244 =
												BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7((
													(bool_t) 0), ((bool_t) 0));
											BgL_auxz00_3242 =
												(BgL_objectz00_bglt) (BgL_obj3654z00_1581);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3242, BgL_auxz00_3244);
										}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3654z00_1581),
											BGl_classzd2numzd2zz__objectz00
											(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
										BgL_obj3654z00_1581;
									}
									{	/* Globalize/escape.scm 195 */
										BgL_valuez00_bglt BgL_funz00_1584;

										{
											BgL_variablez00_bglt BgL_auxz00_3250;

											BgL_auxz00_3250 =
												(BgL_variablez00_bglt) (BgL_localz00_1580);
											BgL_funz00_1584 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3250))->
												BgL_valuez00);
										}
										{	/* Globalize/escape.scm 196 */
											BgL_sfunz00_bglt BgL_obj3655z00_1585;

											BgL_obj3655z00_1585 =
												((BgL_sfunz00_bglt)
												(BgL_sfunz00_bglt) (BgL_funz00_1584));
											{	/* Globalize/escape.scm 196 */
												obj_t BgL_auxz00_3257;

												BgL_objectz00_bglt BgL_auxz00_3255;

												BgL_auxz00_3257 =
													BGl_wideningzd2sfunzf2Ginfoz20zzglobaliza7e_ginfoza7((
														(bool_t) 0), BNIL, BFALSE, BNIL, BFALSE, BNIL,
													BUNSPEC, BUNSPEC, BgL_oz00_1571, BNIL, BNIL,
													((long) -10), BNIL, BFALSE, BFALSE, BFALSE,
													((long) -10), ((long) -10), BUNSPEC, BNIL);
												BgL_auxz00_3255 =
													(BgL_objectz00_bglt) (BgL_obj3655z00_1585);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_3255,
													BgL_auxz00_3257);
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_obj3655z00_1585),
												BGl_classzd2numzd2zz__objectz00
												(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7));
											BgL_obj3655z00_1585;
										}
										{	/* Globalize/escape.scm 198 */
											obj_t BgL_g3678z00_1588;

											{
												BgL_sfunz00_bglt BgL_auxz00_3263;

												BgL_auxz00_3263 = (BgL_sfunz00_bglt) (BgL_funz00_1584);
												BgL_g3678z00_1588 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3263))->
													BgL_argsz00);
											}
											{
												obj_t BgL_l3676z00_1590;

												BgL_l3676z00_1590 = BgL_g3678z00_1588;
											BgL_zc3anonymousza33878ze3z83_1591:
												if (PAIRP(BgL_l3676z00_1590))
													{	/* Globalize/escape.scm 200 */
														{	/* Globalize/escape.scm 199 */
															obj_t BgL_localz00_1593;

															BgL_localz00_1593 = CAR(BgL_l3676z00_1590);
															{	/* Globalize/escape.scm 199 */
																BgL_svarz00_bglt BgL_obj3656z00_1594;

																{
																	BgL_svarz00_bglt BgL_auxz00_3269;

																	{	/* Globalize/escape.scm 199 */
																		BgL_valuez00_bglt BgL_auxz00_3270;

																		{
																			BgL_variablez00_bglt BgL_auxz00_3271;

																			BgL_auxz00_3271 =
																				(BgL_variablez00_bglt)
																				(BgL_localz00_1593);
																			BgL_auxz00_3270 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_3271))->BgL_valuez00);
																		}
																		BgL_auxz00_3269 =
																			(BgL_svarz00_bglt) (BgL_auxz00_3270);
																	}
																	BgL_obj3656z00_1594 =
																		((BgL_svarz00_bglt) BgL_auxz00_3269);
																}
																{	/* Globalize/escape.scm 199 */
																	obj_t BgL_auxz00_3278;

																	BgL_objectz00_bglt BgL_auxz00_3276;

																	BgL_auxz00_3278 =
																		BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
																		(((bool_t) 0), ((long) -10), ((long) -10),
																		((bool_t) 0));
																	BgL_auxz00_3276 =
																		(BgL_objectz00_bglt) (BgL_obj3656z00_1594);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_3276,
																		BgL_auxz00_3278);
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj3656z00_1594),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
																BgL_obj3656z00_1594;
														}}
														{
															obj_t BgL_l3676z00_3284;

															BgL_l3676z00_3284 = CDR(BgL_l3676z00_1590);
															BgL_l3676z00_1590 = BgL_l3676z00_3284;
															goto BgL_zc3anonymousza33878ze3z83_1591;
														}
													}
												else
													{	/* Globalize/escape.scm 200 */
														((bool_t) 1);
													}
											}
										}
									}
								}
								{
									obj_t BgL_l3679z00_3286;

									BgL_l3679z00_3286 = CDR(BgL_l3679z00_1577);
									BgL_l3679z00_1577 = BgL_l3679z00_3286;
									goto BgL_zc3anonymousza33872ze3z83_1578;
								}
							}
						else
							{	/* Globalize/escape.scm 193 */
								((bool_t) 1);
							}
					}
				}
				{	/* Globalize/escape.scm 203 */
					obj_t BgL_g3684z00_1601;

					BgL_g3684z00_1601 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1570))->BgL_localsz00);
					{
						obj_t BgL_l3682z00_1603;

						BgL_l3682z00_1603 = BgL_g3684z00_1601;
					BgL_zc3anonymousza33884ze3z83_1604:
						if (PAIRP(BgL_l3682z00_1603))
							{	/* Globalize/escape.scm 203 */
								{	/* Globalize/escape.scm 204 */
									obj_t BgL_localz00_1606;

									BgL_localz00_1606 = CAR(BgL_l3682z00_1603);
									{	/* Globalize/escape.scm 204 */
										BgL_valuez00_bglt BgL_funz00_1607;

										{
											BgL_variablez00_bglt BgL_auxz00_3292;

											BgL_auxz00_3292 =
												(BgL_variablez00_bglt) (BgL_localz00_1606);
											BgL_funz00_1607 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3292))->
												BgL_valuez00);
										}
										{	/* Globalize/escape.scm 205 */
											obj_t BgL_arg3886z00_1608;

											{
												BgL_sfunz00_bglt BgL_auxz00_3295;

												BgL_auxz00_3295 = (BgL_sfunz00_bglt) (BgL_funz00_1607);
												BgL_arg3886z00_1608 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3295))->
													BgL_bodyz00);
											}
											{	/* Globalize/escape.scm 205 */
												BgL_nodez00_bglt BgL_nodez00_2324;

												BgL_variablez00_bglt BgL_oz00_2325;

												BgL_nodez00_2324 =
													(BgL_nodez00_bglt) (BgL_arg3886z00_1608);
												BgL_oz00_2325 =
													(BgL_variablez00_bglt) (BgL_localz00_1606);
												{	/* Globalize/escape.scm 205 */
													obj_t BgL_method3705z00_2326;

													{	/* Globalize/escape.scm 205 */
														BgL_objectz00_bglt BgL_objz00_2327;

														BgL_objz00_2327 =
															(BgL_objectz00_bglt) (BgL_nodez00_2324);
														{	/* Globalize/escape.scm 205 */
															long BgL_objzd2classzd2numz00_2328;

															BgL_objzd2classzd2numz00_2328 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2327);
															{	/* Globalize/escape.scm 205 */
																obj_t BgL_arg2643z00_2329;

																BgL_arg2643z00_2329 =
																	PROCEDURE_REF
																	(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
																	(int) (((long) 1)));
																{	/* Globalize/escape.scm 205 */
																	obj_t BgL_arrayz00_2331;

																	int BgL_offsetz00_2332;

																	BgL_arrayz00_2331 = BgL_arg2643z00_2329;
																	BgL_offsetz00_2332 =
																		(int) (BgL_objzd2classzd2numz00_2328);
																	{	/* Globalize/escape.scm 205 */
																		long BgL_offsetz00_2333;

																		BgL_offsetz00_2333 =
																			(
																			(long) (BgL_offsetz00_2332) -
																			OBJECT_TYPE);
																		{	/* Globalize/escape.scm 205 */
																			long BgL_modz00_2334;

																			{	/* Globalize/escape.scm 205 */
																				int BgL_arg2645z00_2335;

																				BgL_arg2645z00_2335 =
																					(int) (((long) 16));
																				{	/* Globalize/escape.scm 205 */
																					long BgL_auxz00_3308;

																					BgL_auxz00_3308 =
																						(long) (BgL_arg2645z00_2335);
																					BgL_modz00_2334 =
																						(BgL_offsetz00_2333 /
																						BgL_auxz00_3308);
																			}}
																			{	/* Globalize/escape.scm 205 */
																				long BgL_restz00_2336;

																				{	/* Globalize/escape.scm 205 */
																					int BgL_arg2644z00_2337;

																					BgL_arg2644z00_2337 =
																						(int) (((long) 16));
																					{	/* Globalize/escape.scm 205 */
																						long BgL_auxz00_3312;

																						BgL_auxz00_3312 =
																							(long) (BgL_arg2644z00_2337);
																						BgL_restz00_2336 =
																							(BgL_offsetz00_2333 %
																							BgL_auxz00_3312);
																				}}
																				{	/* Globalize/escape.scm 205 */

																					BgL_method3705z00_2326 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2331,
																							(int) (BgL_modz00_2334)),
																						(int) (BgL_restz00_2336));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3705z00_2326)
														(BgL_method3705z00_2326, (obj_t) (BgL_nodez00_2324),
														(obj_t) (BgL_oz00_2325), BEOA);
								}}}}}
								{
									obj_t BgL_l3682z00_3323;

									BgL_l3682z00_3323 = CDR(BgL_l3682z00_1603);
									BgL_l3682z00_1603 = BgL_l3682z00_3323;
									goto BgL_zc3anonymousza33884ze3z83_1604;
								}
							}
						else
							{	/* Globalize/escape.scm 203 */
								((bool_t) 1);
							}
					}
				}
				{	/* Globalize/escape.scm 208 */
					BgL_nodez00_bglt BgL_arg3888z00_1611;

					BgL_arg3888z00_1611 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1570))->BgL_bodyz00);
					{	/* Globalize/escape.scm 208 */
						BgL_variablez00_bglt BgL_oz00_2354;

						BgL_oz00_2354 = (BgL_variablez00_bglt) (BgL_oz00_1571);
						{	/* Globalize/escape.scm 208 */
							obj_t BgL_method3705z00_2355;

							{	/* Globalize/escape.scm 208 */
								BgL_objectz00_bglt BgL_objz00_2356;

								BgL_objz00_2356 = (BgL_objectz00_bglt) (BgL_arg3888z00_1611);
								{	/* Globalize/escape.scm 208 */
									long BgL_objzd2classzd2numz00_2357;

									BgL_objzd2classzd2numz00_2357 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2356);
									{	/* Globalize/escape.scm 208 */
										obj_t BgL_arg2643z00_2358;

										BgL_arg2643z00_2358 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 208 */
											obj_t BgL_arrayz00_2360;

											int BgL_offsetz00_2361;

											BgL_arrayz00_2360 = BgL_arg2643z00_2358;
											BgL_offsetz00_2361 =
												(int) (BgL_objzd2classzd2numz00_2357);
											{	/* Globalize/escape.scm 208 */
												long BgL_offsetz00_2362;

												BgL_offsetz00_2362 =
													((long) (BgL_offsetz00_2361) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 208 */
													long BgL_modz00_2363;

													{	/* Globalize/escape.scm 208 */
														int BgL_arg2645z00_2364;

														BgL_arg2645z00_2364 = (int) (((long) 16));
														{	/* Globalize/escape.scm 208 */
															long BgL_auxz00_3335;

															BgL_auxz00_3335 = (long) (BgL_arg2645z00_2364);
															BgL_modz00_2363 =
																(BgL_offsetz00_2362 / BgL_auxz00_3335);
													}}
													{	/* Globalize/escape.scm 208 */
														long BgL_restz00_2365;

														{	/* Globalize/escape.scm 208 */
															int BgL_arg2644z00_2366;

															BgL_arg2644z00_2366 = (int) (((long) 16));
															{	/* Globalize/escape.scm 208 */
																long BgL_auxz00_3339;

																BgL_auxz00_3339 = (long) (BgL_arg2644z00_2366);
																BgL_restz00_2365 =
																	(BgL_offsetz00_2362 % BgL_auxz00_3339);
														}}
														{	/* Globalize/escape.scm 208 */

															BgL_method3705z00_2355 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2360,
																	(int) (BgL_modz00_2363)),
																(int) (BgL_restz00_2365));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2355) (BgL_method3705z00_2355,
								(obj_t) (BgL_arg3888z00_1611), (obj_t) (BgL_oz00_2354), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-select3738 */
	obj_t BGl_escapez12zd2select3738zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2686, obj_t BgL_nodez00_2687, obj_t BgL_oz00_2688)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 176 */
			{
				BgL_selectz00_bglt BgL_nodez00_1553;

				obj_t BgL_oz00_1554;

				{	/* Globalize/escape.scm 177 */
					bool_t BgL_auxz00_3351;

					BgL_nodez00_1553 = (BgL_selectz00_bglt) (BgL_nodez00_2687);
					BgL_oz00_1554 = BgL_oz00_2688;
					{	/* Globalize/escape.scm 178 */
						BgL_nodez00_bglt BgL_arg3866z00_1558;

						BgL_arg3866z00_1558 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1553))->BgL_testz00);
						{	/* Globalize/escape.scm 178 */
							BgL_variablez00_bglt BgL_oz00_2245;

							BgL_oz00_2245 = (BgL_variablez00_bglt) (BgL_oz00_1554);
							{	/* Globalize/escape.scm 178 */
								obj_t BgL_method3705z00_2246;

								{	/* Globalize/escape.scm 178 */
									BgL_objectz00_bglt BgL_objz00_2247;

									BgL_objz00_2247 = (BgL_objectz00_bglt) (BgL_arg3866z00_1558);
									{	/* Globalize/escape.scm 178 */
										long BgL_objzd2classzd2numz00_2248;

										BgL_objzd2classzd2numz00_2248 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2247);
										{	/* Globalize/escape.scm 178 */
											obj_t BgL_arg2643z00_2249;

											BgL_arg2643z00_2249 =
												PROCEDURE_REF
												(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
												(int) (((long) 1)));
											{	/* Globalize/escape.scm 178 */
												obj_t BgL_arrayz00_2251;

												int BgL_offsetz00_2252;

												BgL_arrayz00_2251 = BgL_arg2643z00_2249;
												BgL_offsetz00_2252 =
													(int) (BgL_objzd2classzd2numz00_2248);
												{	/* Globalize/escape.scm 178 */
													long BgL_offsetz00_2253;

													BgL_offsetz00_2253 =
														((long) (BgL_offsetz00_2252) - OBJECT_TYPE);
													{	/* Globalize/escape.scm 178 */
														long BgL_modz00_2254;

														{	/* Globalize/escape.scm 178 */
															int BgL_arg2645z00_2255;

															BgL_arg2645z00_2255 = (int) (((long) 16));
															{	/* Globalize/escape.scm 178 */
																long BgL_auxz00_3362;

																BgL_auxz00_3362 = (long) (BgL_arg2645z00_2255);
																BgL_modz00_2254 =
																	(BgL_offsetz00_2253 / BgL_auxz00_3362);
														}}
														{	/* Globalize/escape.scm 178 */
															long BgL_restz00_2256;

															{	/* Globalize/escape.scm 178 */
																int BgL_arg2644z00_2257;

																BgL_arg2644z00_2257 = (int) (((long) 16));
																{	/* Globalize/escape.scm 178 */
																	long BgL_auxz00_3366;

																	BgL_auxz00_3366 =
																		(long) (BgL_arg2644z00_2257);
																	BgL_restz00_2256 =
																		(BgL_offsetz00_2253 % BgL_auxz00_3366);
															}}
															{	/* Globalize/escape.scm 178 */

																BgL_method3705z00_2246 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2251,
																		(int) (BgL_modz00_2254)),
																	(int) (BgL_restz00_2256));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3705z00_2246) (BgL_method3705z00_2246,
									(obj_t) (BgL_arg3866z00_1558), (obj_t) (BgL_oz00_2245), BEOA);
					}}}
					{	/* Globalize/escape.scm 179 */
						obj_t BgL_g3675z00_1559;

						BgL_g3675z00_1559 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1553))->BgL_clausesz00);
						{
							obj_t BgL_l3673z00_1561;

							BgL_l3673z00_1561 = BgL_g3675z00_1559;
						BgL_zc3anonymousza33867ze3z83_1562:
							if (PAIRP(BgL_l3673z00_1561))
								{	/* Globalize/escape.scm 179 */
									{	/* Globalize/escape.scm 180 */
										obj_t BgL_clausez00_1564;

										BgL_clausez00_1564 = CAR(BgL_l3673z00_1561);
										{	/* Globalize/escape.scm 180 */
											obj_t BgL_arg3869z00_1565;

											BgL_arg3869z00_1565 = CDR(BgL_clausez00_1564);
											{	/* Globalize/escape.scm 180 */
												BgL_nodez00_bglt BgL_nodez00_2275;

												BgL_variablez00_bglt BgL_oz00_2276;

												BgL_nodez00_2275 =
													(BgL_nodez00_bglt) (BgL_arg3869z00_1565);
												BgL_oz00_2276 = (BgL_variablez00_bglt) (BgL_oz00_1554);
												{	/* Globalize/escape.scm 180 */
													obj_t BgL_method3705z00_2277;

													{	/* Globalize/escape.scm 180 */
														BgL_objectz00_bglt BgL_objz00_2278;

														BgL_objz00_2278 =
															(BgL_objectz00_bglt) (BgL_nodez00_2275);
														{	/* Globalize/escape.scm 180 */
															long BgL_objzd2classzd2numz00_2279;

															BgL_objzd2classzd2numz00_2279 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2278);
															{	/* Globalize/escape.scm 180 */
																obj_t BgL_arg2643z00_2280;

																BgL_arg2643z00_2280 =
																	PROCEDURE_REF
																	(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
																	(int) (((long) 1)));
																{	/* Globalize/escape.scm 180 */
																	obj_t BgL_arrayz00_2282;

																	int BgL_offsetz00_2283;

																	BgL_arrayz00_2282 = BgL_arg2643z00_2280;
																	BgL_offsetz00_2283 =
																		(int) (BgL_objzd2classzd2numz00_2279);
																	{	/* Globalize/escape.scm 180 */
																		long BgL_offsetz00_2284;

																		BgL_offsetz00_2284 =
																			(
																			(long) (BgL_offsetz00_2283) -
																			OBJECT_TYPE);
																		{	/* Globalize/escape.scm 180 */
																			long BgL_modz00_2285;

																			{	/* Globalize/escape.scm 180 */
																				int BgL_arg2645z00_2286;

																				BgL_arg2645z00_2286 =
																					(int) (((long) 16));
																				{	/* Globalize/escape.scm 180 */
																					long BgL_auxz00_3392;

																					BgL_auxz00_3392 =
																						(long) (BgL_arg2645z00_2286);
																					BgL_modz00_2285 =
																						(BgL_offsetz00_2284 /
																						BgL_auxz00_3392);
																			}}
																			{	/* Globalize/escape.scm 180 */
																				long BgL_restz00_2287;

																				{	/* Globalize/escape.scm 180 */
																					int BgL_arg2644z00_2288;

																					BgL_arg2644z00_2288 =
																						(int) (((long) 16));
																					{	/* Globalize/escape.scm 180 */
																						long BgL_auxz00_3396;

																						BgL_auxz00_3396 =
																							(long) (BgL_arg2644z00_2288);
																						BgL_restz00_2287 =
																							(BgL_offsetz00_2284 %
																							BgL_auxz00_3396);
																				}}
																				{	/* Globalize/escape.scm 180 */

																					BgL_method3705z00_2277 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2282,
																							(int) (BgL_modz00_2285)),
																						(int) (BgL_restz00_2287));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3705z00_2277)
														(BgL_method3705z00_2277, (obj_t) (BgL_nodez00_2275),
														(obj_t) (BgL_oz00_2276), BEOA);
									}}}}
									{
										obj_t BgL_l3673z00_3407;

										BgL_l3673z00_3407 = CDR(BgL_l3673z00_1561);
										BgL_l3673z00_1561 = BgL_l3673z00_3407;
										goto BgL_zc3anonymousza33867ze3z83_1562;
									}
								}
							else
								{	/* Globalize/escape.scm 179 */
									BgL_auxz00_3351 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3351);
				}
			}
		}
	}



/* escape!-fail3735 */
	obj_t BGl_escapez12zd2fail3735zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2689, obj_t BgL_nodez00_2690, obj_t BgL_oz00_2691)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 167 */
			{
				BgL_failz00_bglt BgL_nodez00_1543;

				obj_t BgL_oz00_1544;

				BgL_nodez00_1543 = (BgL_failz00_bglt) (BgL_nodez00_2690);
				BgL_oz00_1544 = BgL_oz00_2691;
				{	/* Globalize/escape.scm 169 */
					BgL_nodez00_bglt BgL_arg3862z00_1548;

					BgL_arg3862z00_1548 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1543))->BgL_procz00);
					{	/* Globalize/escape.scm 169 */
						BgL_variablez00_bglt BgL_oz00_2161;

						BgL_oz00_2161 = (BgL_variablez00_bglt) (BgL_oz00_1544);
						{	/* Globalize/escape.scm 169 */
							obj_t BgL_method3705z00_2162;

							{	/* Globalize/escape.scm 169 */
								BgL_objectz00_bglt BgL_objz00_2163;

								BgL_objz00_2163 = (BgL_objectz00_bglt) (BgL_arg3862z00_1548);
								{	/* Globalize/escape.scm 169 */
									long BgL_objzd2classzd2numz00_2164;

									BgL_objzd2classzd2numz00_2164 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2163);
									{	/* Globalize/escape.scm 169 */
										obj_t BgL_arg2643z00_2165;

										BgL_arg2643z00_2165 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 169 */
											obj_t BgL_arrayz00_2167;

											int BgL_offsetz00_2168;

											BgL_arrayz00_2167 = BgL_arg2643z00_2165;
											BgL_offsetz00_2168 =
												(int) (BgL_objzd2classzd2numz00_2164);
											{	/* Globalize/escape.scm 169 */
												long BgL_offsetz00_2169;

												BgL_offsetz00_2169 =
													((long) (BgL_offsetz00_2168) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 169 */
													long BgL_modz00_2170;

													{	/* Globalize/escape.scm 169 */
														int BgL_arg2645z00_2171;

														BgL_arg2645z00_2171 = (int) (((long) 16));
														{	/* Globalize/escape.scm 169 */
															long BgL_auxz00_3421;

															BgL_auxz00_3421 = (long) (BgL_arg2645z00_2171);
															BgL_modz00_2170 =
																(BgL_offsetz00_2169 / BgL_auxz00_3421);
													}}
													{	/* Globalize/escape.scm 169 */
														long BgL_restz00_2172;

														{	/* Globalize/escape.scm 169 */
															int BgL_arg2644z00_2173;

															BgL_arg2644z00_2173 = (int) (((long) 16));
															{	/* Globalize/escape.scm 169 */
																long BgL_auxz00_3425;

																BgL_auxz00_3425 = (long) (BgL_arg2644z00_2173);
																BgL_restz00_2172 =
																	(BgL_offsetz00_2169 % BgL_auxz00_3425);
														}}
														{	/* Globalize/escape.scm 169 */

															BgL_method3705z00_2162 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2167,
																	(int) (BgL_modz00_2170)),
																(int) (BgL_restz00_2172));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3705z00_2162) (BgL_method3705z00_2162,
								(obj_t) (BgL_arg3862z00_1548), (obj_t) (BgL_oz00_2161), BEOA);
				}}}
				{	/* Globalize/escape.scm 170 */
					BgL_nodez00_bglt BgL_arg3863z00_1549;

					BgL_arg3863z00_1549 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1543))->BgL_msgz00);
					{	/* Globalize/escape.scm 170 */
						BgL_variablez00_bglt BgL_oz00_2189;

						BgL_oz00_2189 = (BgL_variablez00_bglt) (BgL_oz00_1544);
						{	/* Globalize/escape.scm 170 */
							obj_t BgL_method3705z00_2190;

							{	/* Globalize/escape.scm 170 */
								BgL_objectz00_bglt BgL_objz00_2191;

								BgL_objz00_2191 = (BgL_objectz00_bglt) (BgL_arg3863z00_1549);
								{	/* Globalize/escape.scm 170 */
									long BgL_objzd2classzd2numz00_2192;

									BgL_objzd2classzd2numz00_2192 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2191);
									{	/* Globalize/escape.scm 170 */
										obj_t BgL_arg2643z00_2193;

										BgL_arg2643z00_2193 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 170 */
											obj_t BgL_arrayz00_2195;

											int BgL_offsetz00_2196;

											BgL_arrayz00_2195 = BgL_arg2643z00_2193;
											BgL_offsetz00_2196 =
												(int) (BgL_objzd2classzd2numz00_2192);
											{	/* Globalize/escape.scm 170 */
												long BgL_offsetz00_2197;

												BgL_offsetz00_2197 =
													((long) (BgL_offsetz00_2196) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 170 */
													long BgL_modz00_2198;

													{	/* Globalize/escape.scm 170 */
														int BgL_arg2645z00_2199;

														BgL_arg2645z00_2199 = (int) (((long) 16));
														{	/* Globalize/escape.scm 170 */
															long BgL_auxz00_3446;

															BgL_auxz00_3446 = (long) (BgL_arg2645z00_2199);
															BgL_modz00_2198 =
																(BgL_offsetz00_2197 / BgL_auxz00_3446);
													}}
													{	/* Globalize/escape.scm 170 */
														long BgL_restz00_2200;

														{	/* Globalize/escape.scm 170 */
															int BgL_arg2644z00_2201;

															BgL_arg2644z00_2201 = (int) (((long) 16));
															{	/* Globalize/escape.scm 170 */
																long BgL_auxz00_3450;

																BgL_auxz00_3450 = (long) (BgL_arg2644z00_2201);
																BgL_restz00_2200 =
																	(BgL_offsetz00_2197 % BgL_auxz00_3450);
														}}
														{	/* Globalize/escape.scm 170 */

															BgL_method3705z00_2190 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2195,
																	(int) (BgL_modz00_2198)),
																(int) (BgL_restz00_2200));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3705z00_2190) (BgL_method3705z00_2190,
								(obj_t) (BgL_arg3863z00_1549), (obj_t) (BgL_oz00_2189), BEOA);
				}}}
				{	/* Globalize/escape.scm 171 */
					BgL_nodez00_bglt BgL_arg3864z00_1550;

					BgL_arg3864z00_1550 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1543))->BgL_objz00);
					{	/* Globalize/escape.scm 171 */
						BgL_variablez00_bglt BgL_oz00_2217;

						BgL_oz00_2217 = (BgL_variablez00_bglt) (BgL_oz00_1544);
						{	/* Globalize/escape.scm 171 */
							obj_t BgL_method3705z00_2218;

							{	/* Globalize/escape.scm 171 */
								BgL_objectz00_bglt BgL_objz00_2219;

								BgL_objz00_2219 = (BgL_objectz00_bglt) (BgL_arg3864z00_1550);
								{	/* Globalize/escape.scm 171 */
									long BgL_objzd2classzd2numz00_2220;

									BgL_objzd2classzd2numz00_2220 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2219);
									{	/* Globalize/escape.scm 171 */
										obj_t BgL_arg2643z00_2221;

										BgL_arg2643z00_2221 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 171 */
											obj_t BgL_arrayz00_2223;

											int BgL_offsetz00_2224;

											BgL_arrayz00_2223 = BgL_arg2643z00_2221;
											BgL_offsetz00_2224 =
												(int) (BgL_objzd2classzd2numz00_2220);
											{	/* Globalize/escape.scm 171 */
												long BgL_offsetz00_2225;

												BgL_offsetz00_2225 =
													((long) (BgL_offsetz00_2224) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 171 */
													long BgL_modz00_2226;

													{	/* Globalize/escape.scm 171 */
														int BgL_arg2645z00_2227;

														BgL_arg2645z00_2227 = (int) (((long) 16));
														{	/* Globalize/escape.scm 171 */
															long BgL_auxz00_3471;

															BgL_auxz00_3471 = (long) (BgL_arg2645z00_2227);
															BgL_modz00_2226 =
																(BgL_offsetz00_2225 / BgL_auxz00_3471);
													}}
													{	/* Globalize/escape.scm 171 */
														long BgL_restz00_2228;

														{	/* Globalize/escape.scm 171 */
															int BgL_arg2644z00_2229;

															BgL_arg2644z00_2229 = (int) (((long) 16));
															{	/* Globalize/escape.scm 171 */
																long BgL_auxz00_3475;

																BgL_auxz00_3475 = (long) (BgL_arg2644z00_2229);
																BgL_restz00_2228 =
																	(BgL_offsetz00_2225 % BgL_auxz00_3475);
														}}
														{	/* Globalize/escape.scm 171 */

															BgL_method3705z00_2218 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2223,
																	(int) (BgL_modz00_2226)),
																(int) (BgL_restz00_2228));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2218) (BgL_method3705z00_2218,
								(obj_t) (BgL_arg3864z00_1550), (obj_t) (BgL_oz00_2217), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-conditional3732 */
	obj_t BGl_escapez12zd2conditional3732zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2692, obj_t BgL_nodez00_2693, obj_t BgL_oz00_2694)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 158 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1533;

				obj_t BgL_oz00_1534;

				BgL_nodez00_1533 = (BgL_conditionalz00_bglt) (BgL_nodez00_2693);
				BgL_oz00_1534 = BgL_oz00_2694;
				{	/* Globalize/escape.scm 160 */
					BgL_nodez00_bglt BgL_arg3858z00_1538;

					BgL_arg3858z00_1538 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1533))->BgL_testz00);
					{	/* Globalize/escape.scm 160 */
						BgL_variablez00_bglt BgL_oz00_2077;

						BgL_oz00_2077 = (BgL_variablez00_bglt) (BgL_oz00_1534);
						{	/* Globalize/escape.scm 160 */
							obj_t BgL_method3705z00_2078;

							{	/* Globalize/escape.scm 160 */
								BgL_objectz00_bglt BgL_objz00_2079;

								BgL_objz00_2079 = (BgL_objectz00_bglt) (BgL_arg3858z00_1538);
								{	/* Globalize/escape.scm 160 */
									long BgL_objzd2classzd2numz00_2080;

									BgL_objzd2classzd2numz00_2080 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2079);
									{	/* Globalize/escape.scm 160 */
										obj_t BgL_arg2643z00_2081;

										BgL_arg2643z00_2081 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 160 */
											obj_t BgL_arrayz00_2083;

											int BgL_offsetz00_2084;

											BgL_arrayz00_2083 = BgL_arg2643z00_2081;
											BgL_offsetz00_2084 =
												(int) (BgL_objzd2classzd2numz00_2080);
											{	/* Globalize/escape.scm 160 */
												long BgL_offsetz00_2085;

												BgL_offsetz00_2085 =
													((long) (BgL_offsetz00_2084) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 160 */
													long BgL_modz00_2086;

													{	/* Globalize/escape.scm 160 */
														int BgL_arg2645z00_2087;

														BgL_arg2645z00_2087 = (int) (((long) 16));
														{	/* Globalize/escape.scm 160 */
															long BgL_auxz00_3497;

															BgL_auxz00_3497 = (long) (BgL_arg2645z00_2087);
															BgL_modz00_2086 =
																(BgL_offsetz00_2085 / BgL_auxz00_3497);
													}}
													{	/* Globalize/escape.scm 160 */
														long BgL_restz00_2088;

														{	/* Globalize/escape.scm 160 */
															int BgL_arg2644z00_2089;

															BgL_arg2644z00_2089 = (int) (((long) 16));
															{	/* Globalize/escape.scm 160 */
																long BgL_auxz00_3501;

																BgL_auxz00_3501 = (long) (BgL_arg2644z00_2089);
																BgL_restz00_2088 =
																	(BgL_offsetz00_2085 % BgL_auxz00_3501);
														}}
														{	/* Globalize/escape.scm 160 */

															BgL_method3705z00_2078 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2083,
																	(int) (BgL_modz00_2086)),
																(int) (BgL_restz00_2088));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3705z00_2078) (BgL_method3705z00_2078,
								(obj_t) (BgL_arg3858z00_1538), (obj_t) (BgL_oz00_2077), BEOA);
				}}}
				{	/* Globalize/escape.scm 161 */
					BgL_nodez00_bglt BgL_arg3859z00_1539;

					BgL_arg3859z00_1539 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1533))->BgL_truez00);
					{	/* Globalize/escape.scm 161 */
						BgL_variablez00_bglt BgL_oz00_2105;

						BgL_oz00_2105 = (BgL_variablez00_bglt) (BgL_oz00_1534);
						{	/* Globalize/escape.scm 161 */
							obj_t BgL_method3705z00_2106;

							{	/* Globalize/escape.scm 161 */
								BgL_objectz00_bglt BgL_objz00_2107;

								BgL_objz00_2107 = (BgL_objectz00_bglt) (BgL_arg3859z00_1539);
								{	/* Globalize/escape.scm 161 */
									long BgL_objzd2classzd2numz00_2108;

									BgL_objzd2classzd2numz00_2108 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2107);
									{	/* Globalize/escape.scm 161 */
										obj_t BgL_arg2643z00_2109;

										BgL_arg2643z00_2109 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 161 */
											obj_t BgL_arrayz00_2111;

											int BgL_offsetz00_2112;

											BgL_arrayz00_2111 = BgL_arg2643z00_2109;
											BgL_offsetz00_2112 =
												(int) (BgL_objzd2classzd2numz00_2108);
											{	/* Globalize/escape.scm 161 */
												long BgL_offsetz00_2113;

												BgL_offsetz00_2113 =
													((long) (BgL_offsetz00_2112) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 161 */
													long BgL_modz00_2114;

													{	/* Globalize/escape.scm 161 */
														int BgL_arg2645z00_2115;

														BgL_arg2645z00_2115 = (int) (((long) 16));
														{	/* Globalize/escape.scm 161 */
															long BgL_auxz00_3522;

															BgL_auxz00_3522 = (long) (BgL_arg2645z00_2115);
															BgL_modz00_2114 =
																(BgL_offsetz00_2113 / BgL_auxz00_3522);
													}}
													{	/* Globalize/escape.scm 161 */
														long BgL_restz00_2116;

														{	/* Globalize/escape.scm 161 */
															int BgL_arg2644z00_2117;

															BgL_arg2644z00_2117 = (int) (((long) 16));
															{	/* Globalize/escape.scm 161 */
																long BgL_auxz00_3526;

																BgL_auxz00_3526 = (long) (BgL_arg2644z00_2117);
																BgL_restz00_2116 =
																	(BgL_offsetz00_2113 % BgL_auxz00_3526);
														}}
														{	/* Globalize/escape.scm 161 */

															BgL_method3705z00_2106 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2111,
																	(int) (BgL_modz00_2114)),
																(int) (BgL_restz00_2116));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3705z00_2106) (BgL_method3705z00_2106,
								(obj_t) (BgL_arg3859z00_1539), (obj_t) (BgL_oz00_2105), BEOA);
				}}}
				{	/* Globalize/escape.scm 162 */
					BgL_nodez00_bglt BgL_arg3860z00_1540;

					BgL_arg3860z00_1540 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1533))->BgL_falsez00);
					{	/* Globalize/escape.scm 162 */
						BgL_variablez00_bglt BgL_oz00_2133;

						BgL_oz00_2133 = (BgL_variablez00_bglt) (BgL_oz00_1534);
						{	/* Globalize/escape.scm 162 */
							obj_t BgL_method3705z00_2134;

							{	/* Globalize/escape.scm 162 */
								BgL_objectz00_bglt BgL_objz00_2135;

								BgL_objz00_2135 = (BgL_objectz00_bglt) (BgL_arg3860z00_1540);
								{	/* Globalize/escape.scm 162 */
									long BgL_objzd2classzd2numz00_2136;

									BgL_objzd2classzd2numz00_2136 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2135);
									{	/* Globalize/escape.scm 162 */
										obj_t BgL_arg2643z00_2137;

										BgL_arg2643z00_2137 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 162 */
											obj_t BgL_arrayz00_2139;

											int BgL_offsetz00_2140;

											BgL_arrayz00_2139 = BgL_arg2643z00_2137;
											BgL_offsetz00_2140 =
												(int) (BgL_objzd2classzd2numz00_2136);
											{	/* Globalize/escape.scm 162 */
												long BgL_offsetz00_2141;

												BgL_offsetz00_2141 =
													((long) (BgL_offsetz00_2140) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 162 */
													long BgL_modz00_2142;

													{	/* Globalize/escape.scm 162 */
														int BgL_arg2645z00_2143;

														BgL_arg2645z00_2143 = (int) (((long) 16));
														{	/* Globalize/escape.scm 162 */
															long BgL_auxz00_3547;

															BgL_auxz00_3547 = (long) (BgL_arg2645z00_2143);
															BgL_modz00_2142 =
																(BgL_offsetz00_2141 / BgL_auxz00_3547);
													}}
													{	/* Globalize/escape.scm 162 */
														long BgL_restz00_2144;

														{	/* Globalize/escape.scm 162 */
															int BgL_arg2644z00_2145;

															BgL_arg2644z00_2145 = (int) (((long) 16));
															{	/* Globalize/escape.scm 162 */
																long BgL_auxz00_3551;

																BgL_auxz00_3551 = (long) (BgL_arg2644z00_2145);
																BgL_restz00_2144 =
																	(BgL_offsetz00_2141 % BgL_auxz00_3551);
														}}
														{	/* Globalize/escape.scm 162 */

															BgL_method3705z00_2134 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2139,
																	(int) (BgL_modz00_2142)),
																(int) (BgL_restz00_2144));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2134) (BgL_method3705z00_2134,
								(obj_t) (BgL_arg3860z00_1540), (obj_t) (BgL_oz00_2133), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-setq3730 */
	obj_t BGl_escapez12zd2setq3730zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2695, obj_t BgL_nodez00_2696, obj_t BgL_oz00_2697)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 151 */
			{
				BgL_setqz00_bglt BgL_nodez00_1525;

				obj_t BgL_oz00_1526;

				BgL_nodez00_1525 = (BgL_setqz00_bglt) (BgL_nodez00_2696);
				BgL_oz00_1526 = BgL_oz00_2697;
				{	/* Globalize/escape.scm 152 */
					BgL_nodez00_bglt BgL_arg3856z00_2046;

					BgL_arg3856z00_2046 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1525))->BgL_valuez00);
					{	/* Globalize/escape.scm 152 */
						BgL_variablez00_bglt BgL_oz00_2049;

						BgL_oz00_2049 = (BgL_variablez00_bglt) (BgL_oz00_1526);
						{	/* Globalize/escape.scm 152 */
							obj_t BgL_method3705z00_2050;

							{	/* Globalize/escape.scm 152 */
								BgL_objectz00_bglt BgL_objz00_2051;

								BgL_objz00_2051 = (BgL_objectz00_bglt) (BgL_arg3856z00_2046);
								{	/* Globalize/escape.scm 152 */
									long BgL_objzd2classzd2numz00_2052;

									BgL_objzd2classzd2numz00_2052 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2051);
									{	/* Globalize/escape.scm 152 */
										obj_t BgL_arg2643z00_2053;

										BgL_arg2643z00_2053 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 152 */
											obj_t BgL_arrayz00_2055;

											int BgL_offsetz00_2056;

											BgL_arrayz00_2055 = BgL_arg2643z00_2053;
											BgL_offsetz00_2056 =
												(int) (BgL_objzd2classzd2numz00_2052);
											{	/* Globalize/escape.scm 152 */
												long BgL_offsetz00_2057;

												BgL_offsetz00_2057 =
													((long) (BgL_offsetz00_2056) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 152 */
													long BgL_modz00_2058;

													{	/* Globalize/escape.scm 152 */
														int BgL_arg2645z00_2059;

														BgL_arg2645z00_2059 = (int) (((long) 16));
														{	/* Globalize/escape.scm 152 */
															long BgL_auxz00_3573;

															BgL_auxz00_3573 = (long) (BgL_arg2645z00_2059);
															BgL_modz00_2058 =
																(BgL_offsetz00_2057 / BgL_auxz00_3573);
													}}
													{	/* Globalize/escape.scm 152 */
														long BgL_restz00_2060;

														{	/* Globalize/escape.scm 152 */
															int BgL_arg2644z00_2061;

															BgL_arg2644z00_2061 = (int) (((long) 16));
															{	/* Globalize/escape.scm 152 */
																long BgL_auxz00_3577;

																BgL_auxz00_3577 = (long) (BgL_arg2644z00_2061);
																BgL_restz00_2060 =
																	(BgL_offsetz00_2057 % BgL_auxz00_3577);
														}}
														{	/* Globalize/escape.scm 152 */

															BgL_method3705z00_2050 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2055,
																	(int) (BgL_modz00_2058)),
																(int) (BgL_restz00_2060));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2050) (BgL_method3705z00_2050,
								(obj_t) (BgL_arg3856z00_2046), (obj_t) (BgL_oz00_2049), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-cast3728 */
	obj_t BGl_escapez12zd2cast3728zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2698, obj_t BgL_nodez00_2699, obj_t BgL_oz00_2700)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 145 */
			{
				BgL_castz00_bglt BgL_nodez00_1518;

				obj_t BgL_oz00_1519;

				BgL_nodez00_1518 = (BgL_castz00_bglt) (BgL_nodez00_2699);
				BgL_oz00_1519 = BgL_oz00_2700;
				{	/* Globalize/escape.scm 146 */
					BgL_nodez00_bglt BgL_arg3854z00_2016;

					BgL_arg3854z00_2016 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1518))->BgL_argz00);
					{	/* Globalize/escape.scm 146 */
						BgL_variablez00_bglt BgL_oz00_2019;

						BgL_oz00_2019 = (BgL_variablez00_bglt) (BgL_oz00_1519);
						{	/* Globalize/escape.scm 146 */
							obj_t BgL_method3705z00_2020;

							{	/* Globalize/escape.scm 146 */
								BgL_objectz00_bglt BgL_objz00_2021;

								BgL_objz00_2021 = (BgL_objectz00_bglt) (BgL_arg3854z00_2016);
								{	/* Globalize/escape.scm 146 */
									long BgL_objzd2classzd2numz00_2022;

									BgL_objzd2classzd2numz00_2022 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2021);
									{	/* Globalize/escape.scm 146 */
										obj_t BgL_arg2643z00_2023;

										BgL_arg2643z00_2023 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 146 */
											obj_t BgL_arrayz00_2025;

											int BgL_offsetz00_2026;

											BgL_arrayz00_2025 = BgL_arg2643z00_2023;
											BgL_offsetz00_2026 =
												(int) (BgL_objzd2classzd2numz00_2022);
											{	/* Globalize/escape.scm 146 */
												long BgL_offsetz00_2027;

												BgL_offsetz00_2027 =
													((long) (BgL_offsetz00_2026) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 146 */
													long BgL_modz00_2028;

													{	/* Globalize/escape.scm 146 */
														int BgL_arg2645z00_2029;

														BgL_arg2645z00_2029 = (int) (((long) 16));
														{	/* Globalize/escape.scm 146 */
															long BgL_auxz00_3599;

															BgL_auxz00_3599 = (long) (BgL_arg2645z00_2029);
															BgL_modz00_2028 =
																(BgL_offsetz00_2027 / BgL_auxz00_3599);
													}}
													{	/* Globalize/escape.scm 146 */
														long BgL_restz00_2030;

														{	/* Globalize/escape.scm 146 */
															int BgL_arg2644z00_2031;

															BgL_arg2644z00_2031 = (int) (((long) 16));
															{	/* Globalize/escape.scm 146 */
																long BgL_auxz00_3603;

																BgL_auxz00_3603 = (long) (BgL_arg2644z00_2031);
																BgL_restz00_2030 =
																	(BgL_offsetz00_2027 % BgL_auxz00_3603);
														}}
														{	/* Globalize/escape.scm 146 */

															BgL_method3705z00_2020 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2025,
																	(int) (BgL_modz00_2028)),
																(int) (BgL_restz00_2030));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_2020) (BgL_method3705z00_2020,
								(obj_t) (BgL_arg3854z00_2016), (obj_t) (BgL_oz00_2019), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-extern3725 */
	obj_t BGl_escapez12zd2extern3725zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2701, obj_t BgL_nodez00_2702, obj_t BgL_oz00_2703)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 139 */
			{
				BgL_externz00_bglt BgL_nodez00_1511;

				obj_t BgL_oz00_1512;

				{	/* Globalize/escape.scm 140 */
					bool_t BgL_auxz00_3615;

					BgL_nodez00_1511 = (BgL_externz00_bglt) (BgL_nodez00_2702);
					BgL_oz00_1512 = BgL_oz00_2703;
					{	/* Globalize/escape.scm 140 */
						obj_t BgL_arg3852z00_2014;

						BgL_arg3852z00_2014 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1511))->BgL_exprza2za2);
						BgL_auxz00_3615 =
							BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(BgL_arg3852z00_2014,
							BgL_oz00_1512);
					}
					return BBOOL(BgL_auxz00_3615);
				}
			}
		}
	}



/* escape!-funcall3723 */
	obj_t BGl_escapez12zd2funcall3723zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2704, obj_t BgL_nodez00_2705, obj_t BgL_oz00_2706)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 131 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1502;

				obj_t BgL_oz00_1503;

				{	/* Globalize/escape.scm 132 */
					bool_t BgL_auxz00_3620;

					BgL_nodez00_1502 = (BgL_funcallz00_bglt) (BgL_nodez00_2705);
					BgL_oz00_1503 = BgL_oz00_2706;
					{	/* Globalize/escape.scm 132 */
						BgL_nodez00_bglt BgL_arg3849z00_1983;

						BgL_arg3849z00_1983 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1502))->BgL_funz00);
						{	/* Globalize/escape.scm 132 */
							BgL_variablez00_bglt BgL_oz00_1987;

							BgL_oz00_1987 = (BgL_variablez00_bglt) (BgL_oz00_1503);
							{	/* Globalize/escape.scm 132 */
								obj_t BgL_method3705z00_1988;

								{	/* Globalize/escape.scm 132 */
									BgL_objectz00_bglt BgL_objz00_1989;

									BgL_objz00_1989 = (BgL_objectz00_bglt) (BgL_arg3849z00_1983);
									{	/* Globalize/escape.scm 132 */
										long BgL_objzd2classzd2numz00_1990;

										BgL_objzd2classzd2numz00_1990 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1989);
										{	/* Globalize/escape.scm 132 */
											obj_t BgL_arg2643z00_1991;

											BgL_arg2643z00_1991 =
												PROCEDURE_REF
												(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
												(int) (((long) 1)));
											{	/* Globalize/escape.scm 132 */
												obj_t BgL_arrayz00_1993;

												int BgL_offsetz00_1994;

												BgL_arrayz00_1993 = BgL_arg2643z00_1991;
												BgL_offsetz00_1994 =
													(int) (BgL_objzd2classzd2numz00_1990);
												{	/* Globalize/escape.scm 132 */
													long BgL_offsetz00_1995;

													BgL_offsetz00_1995 =
														((long) (BgL_offsetz00_1994) - OBJECT_TYPE);
													{	/* Globalize/escape.scm 132 */
														long BgL_modz00_1996;

														{	/* Globalize/escape.scm 132 */
															int BgL_arg2645z00_1997;

															BgL_arg2645z00_1997 = (int) (((long) 16));
															{	/* Globalize/escape.scm 132 */
																long BgL_auxz00_3631;

																BgL_auxz00_3631 = (long) (BgL_arg2645z00_1997);
																BgL_modz00_1996 =
																	(BgL_offsetz00_1995 / BgL_auxz00_3631);
														}}
														{	/* Globalize/escape.scm 132 */
															long BgL_restz00_1998;

															{	/* Globalize/escape.scm 132 */
																int BgL_arg2644z00_1999;

																BgL_arg2644z00_1999 = (int) (((long) 16));
																{	/* Globalize/escape.scm 132 */
																	long BgL_auxz00_3635;

																	BgL_auxz00_3635 =
																		(long) (BgL_arg2644z00_1999);
																	BgL_restz00_1998 =
																		(BgL_offsetz00_1995 % BgL_auxz00_3635);
															}}
															{	/* Globalize/escape.scm 132 */

																BgL_method3705z00_1988 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1993,
																		(int) (BgL_modz00_1996)),
																	(int) (BgL_restz00_1998));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3705z00_1988) (BgL_method3705z00_1988,
									(obj_t) (BgL_arg3849z00_1983), (obj_t) (BgL_oz00_1987), BEOA);
					}}}
					{	/* Globalize/escape.scm 132 */
						obj_t BgL_arg3850z00_1984;

						BgL_arg3850z00_1984 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1502))->BgL_argsz00);
						BgL_auxz00_3620 =
							BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(BgL_arg3850z00_1984,
							BgL_oz00_1503);
					}
					return BBOOL(BgL_auxz00_3620);
				}
			}
		}
	}



/* escape!-app-ly3721 */
	obj_t BGl_escapez12zd2appzd2ly3721z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2707, obj_t BgL_nodez00_2708, obj_t BgL_oz00_2709)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 123 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1493;

				obj_t BgL_oz00_1494;

				BgL_nodez00_1493 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2708);
				BgL_oz00_1494 = BgL_oz00_2709;
				{	/* Globalize/escape.scm 124 */
					BgL_nodez00_bglt BgL_arg3846z00_1924;

					BgL_arg3846z00_1924 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1493))->BgL_funz00);
					{	/* Globalize/escape.scm 124 */
						BgL_variablez00_bglt BgL_oz00_1928;

						BgL_oz00_1928 = (BgL_variablez00_bglt) (BgL_oz00_1494);
						{	/* Globalize/escape.scm 124 */
							obj_t BgL_method3705z00_1929;

							{	/* Globalize/escape.scm 124 */
								BgL_objectz00_bglt BgL_objz00_1930;

								BgL_objz00_1930 = (BgL_objectz00_bglt) (BgL_arg3846z00_1924);
								{	/* Globalize/escape.scm 124 */
									long BgL_objzd2classzd2numz00_1931;

									BgL_objzd2classzd2numz00_1931 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1930);
									{	/* Globalize/escape.scm 124 */
										obj_t BgL_arg2643z00_1932;

										BgL_arg2643z00_1932 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 124 */
											obj_t BgL_arrayz00_1934;

											int BgL_offsetz00_1935;

											BgL_arrayz00_1934 = BgL_arg2643z00_1932;
											BgL_offsetz00_1935 =
												(int) (BgL_objzd2classzd2numz00_1931);
											{	/* Globalize/escape.scm 124 */
												long BgL_offsetz00_1936;

												BgL_offsetz00_1936 =
													((long) (BgL_offsetz00_1935) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 124 */
													long BgL_modz00_1937;

													{	/* Globalize/escape.scm 124 */
														int BgL_arg2645z00_1938;

														BgL_arg2645z00_1938 = (int) (((long) 16));
														{	/* Globalize/escape.scm 124 */
															long BgL_auxz00_3660;

															BgL_auxz00_3660 = (long) (BgL_arg2645z00_1938);
															BgL_modz00_1937 =
																(BgL_offsetz00_1936 / BgL_auxz00_3660);
													}}
													{	/* Globalize/escape.scm 124 */
														long BgL_restz00_1939;

														{	/* Globalize/escape.scm 124 */
															int BgL_arg2644z00_1940;

															BgL_arg2644z00_1940 = (int) (((long) 16));
															{	/* Globalize/escape.scm 124 */
																long BgL_auxz00_3664;

																BgL_auxz00_3664 = (long) (BgL_arg2644z00_1940);
																BgL_restz00_1939 =
																	(BgL_offsetz00_1936 % BgL_auxz00_3664);
														}}
														{	/* Globalize/escape.scm 124 */

															BgL_method3705z00_1929 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1934,
																	(int) (BgL_modz00_1937)),
																(int) (BgL_restz00_1939));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3705z00_1929) (BgL_method3705z00_1929,
								(obj_t) (BgL_arg3846z00_1924), (obj_t) (BgL_oz00_1928), BEOA);
				}}}
				{	/* Globalize/escape.scm 124 */
					BgL_nodez00_bglt BgL_arg3847z00_1925;

					BgL_arg3847z00_1925 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1493))->BgL_argz00);
					{	/* Globalize/escape.scm 124 */
						BgL_variablez00_bglt BgL_oz00_1956;

						BgL_oz00_1956 = (BgL_variablez00_bglt) (BgL_oz00_1494);
						{	/* Globalize/escape.scm 124 */
							obj_t BgL_method3705z00_1957;

							{	/* Globalize/escape.scm 124 */
								BgL_objectz00_bglt BgL_objz00_1958;

								BgL_objz00_1958 = (BgL_objectz00_bglt) (BgL_arg3847z00_1925);
								{	/* Globalize/escape.scm 124 */
									long BgL_objzd2classzd2numz00_1959;

									BgL_objzd2classzd2numz00_1959 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1958);
									{	/* Globalize/escape.scm 124 */
										obj_t BgL_arg2643z00_1960;

										BgL_arg2643z00_1960 =
											PROCEDURE_REF
											(BGl_escapez12zd2envzc0zzglobaliza7e_escapeza7,
											(int) (((long) 1)));
										{	/* Globalize/escape.scm 124 */
											obj_t BgL_arrayz00_1962;

											int BgL_offsetz00_1963;

											BgL_arrayz00_1962 = BgL_arg2643z00_1960;
											BgL_offsetz00_1963 =
												(int) (BgL_objzd2classzd2numz00_1959);
											{	/* Globalize/escape.scm 124 */
												long BgL_offsetz00_1964;

												BgL_offsetz00_1964 =
													((long) (BgL_offsetz00_1963) - OBJECT_TYPE);
												{	/* Globalize/escape.scm 124 */
													long BgL_modz00_1965;

													{	/* Globalize/escape.scm 124 */
														int BgL_arg2645z00_1966;

														BgL_arg2645z00_1966 = (int) (((long) 16));
														{	/* Globalize/escape.scm 124 */
															long BgL_auxz00_3685;

															BgL_auxz00_3685 = (long) (BgL_arg2645z00_1966);
															BgL_modz00_1965 =
																(BgL_offsetz00_1964 / BgL_auxz00_3685);
													}}
													{	/* Globalize/escape.scm 124 */
														long BgL_restz00_1967;

														{	/* Globalize/escape.scm 124 */
															int BgL_arg2644z00_1968;

															BgL_arg2644z00_1968 = (int) (((long) 16));
															{	/* Globalize/escape.scm 124 */
																long BgL_auxz00_3689;

																BgL_auxz00_3689 = (long) (BgL_arg2644z00_1968);
																BgL_restz00_1967 =
																	(BgL_offsetz00_1964 % BgL_auxz00_3689);
														}}
														{	/* Globalize/escape.scm 124 */

															BgL_method3705z00_1957 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1962,
																	(int) (BgL_modz00_1965)),
																(int) (BgL_restz00_1967));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3705z00_1957) (BgL_method3705z00_1957,
								(obj_t) (BgL_arg3847z00_1925), (obj_t) (BgL_oz00_1956), BEOA);
						}
					}
				}
			}
		}
	}



/* escape!-app3719 */
	obj_t BGl_escapez12zd2app3719zc0zzglobaliza7e_escapeza7(obj_t BgL_envz00_2710,
		obj_t BgL_nodez00_2711, obj_t BgL_oz00_2712)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 116 */
			{
				BgL_appz00_bglt BgL_nodez00_1485;

				obj_t BgL_oz00_1486;

				{	/* Globalize/escape.scm 117 */
					bool_t BgL_auxz00_3701;

					BgL_nodez00_1485 = (BgL_appz00_bglt) (BgL_nodez00_2711);
					BgL_oz00_1486 = BgL_oz00_2712;
					{	/* Globalize/escape.scm 117 */
						obj_t BgL_arg3844z00_1921;

						BgL_arg3844z00_1921 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1485))->BgL_argsz00);
						BgL_auxz00_3701 =
							BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(BgL_arg3844z00_1921,
							BgL_oz00_1486);
					}
					return BBOOL(BgL_auxz00_3701);
				}
			}
		}
	}



/* escape!-sequence3717 */
	obj_t BGl_escapez12zd2sequence3717zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2713, obj_t BgL_nodez00_2714, obj_t BgL_oz00_2715)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 110 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1478;

				obj_t BgL_oz00_1479;

				{	/* Globalize/escape.scm 111 */
					bool_t BgL_auxz00_3706;

					BgL_nodez00_1478 = (BgL_sequencez00_bglt) (BgL_nodez00_2714);
					BgL_oz00_1479 = BgL_oz00_2715;
					{	/* Globalize/escape.scm 111 */
						obj_t BgL_arg3842z00_1918;

						BgL_arg3842z00_1918 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1478))->BgL_nodesz00);
						BgL_auxz00_3706 =
							BGl_escapeza2z12zb0zzglobaliza7e_escapeza7(BgL_arg3842z00_1918,
							BgL_oz00_1479);
					}
					return BBOOL(BgL_auxz00_3706);
				}
			}
		}
	}



/* escape!-closure3714 */
	obj_t BGl_escapez12zd2closure3714zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2716, obj_t BgL_nodez00_2717, obj_t BgL_oz00_2718)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 104 */
			{
				BgL_closurez00_bglt BgL_nodez00_1471;

				obj_t BgL_oz00_1472;

				BgL_nodez00_1471 = (BgL_closurez00_bglt) (BgL_nodez00_2717);
				BgL_oz00_1472 = BgL_oz00_2718;
				{	/* Globalize/escape.scm 105 */
					BgL_variablez00_bglt BgL_arg3840z00_1890;

					{
						BgL_varz00_bglt BgL_auxz00_3711;

						BgL_auxz00_3711 = (BgL_varz00_bglt) (BgL_nodez00_1471);
						BgL_arg3840z00_1890 =
							(((BgL_varz00_bglt) CREF(BgL_auxz00_3711))->BgL_variablez00);
					}
					{	/* Globalize/escape.scm 105 */
						obj_t BgL_method3697z00_1893;

						{	/* Globalize/escape.scm 105 */
							BgL_objectz00_bglt BgL_objz00_1894;

							BgL_objz00_1894 = (BgL_objectz00_bglt) (BgL_arg3840z00_1890);
							{	/* Globalize/escape.scm 105 */
								long BgL_objzd2classzd2numz00_1895;

								BgL_objzd2classzd2numz00_1895 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1894);
								{	/* Globalize/escape.scm 105 */
									obj_t BgL_arg2643z00_1896;

									BgL_arg2643z00_1896 =
										PROCEDURE_REF
										(BGl_setzd2escapingzd2funz12zd2envzc0zzglobaliza7e_escapeza7,
										(int) (((long) 1)));
									{	/* Globalize/escape.scm 105 */
										obj_t BgL_arrayz00_1898;

										int BgL_offsetz00_1899;

										BgL_arrayz00_1898 = BgL_arg2643z00_1896;
										BgL_offsetz00_1899 = (int) (BgL_objzd2classzd2numz00_1895);
										{	/* Globalize/escape.scm 105 */
											long BgL_offsetz00_1900;

											BgL_offsetz00_1900 =
												((long) (BgL_offsetz00_1899) - OBJECT_TYPE);
											{	/* Globalize/escape.scm 105 */
												long BgL_modz00_1901;

												{	/* Globalize/escape.scm 105 */
													int BgL_arg2645z00_1902;

													BgL_arg2645z00_1902 = (int) (((long) 16));
													{	/* Globalize/escape.scm 105 */
														long BgL_auxz00_3722;

														BgL_auxz00_3722 = (long) (BgL_arg2645z00_1902);
														BgL_modz00_1901 =
															(BgL_offsetz00_1900 / BgL_auxz00_3722);
												}}
												{	/* Globalize/escape.scm 105 */
													long BgL_restz00_1903;

													{	/* Globalize/escape.scm 105 */
														int BgL_arg2644z00_1904;

														BgL_arg2644z00_1904 = (int) (((long) 16));
														{	/* Globalize/escape.scm 105 */
															long BgL_auxz00_3726;

															BgL_auxz00_3726 = (long) (BgL_arg2644z00_1904);
															BgL_restz00_1903 =
																(BgL_offsetz00_1900 % BgL_auxz00_3726);
													}}
													{	/* Globalize/escape.scm 105 */

														BgL_method3697z00_1893 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1898,
																(int) (BgL_modz00_1901)),
															(int) (BgL_restz00_1903));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3697z00_1893) (BgL_method3697z00_1893,
							(obj_t) (BgL_arg3840z00_1890), BEOA);
					}
				}
			}
		}
	}



/* escape!-var3711 */
	obj_t BGl_escapez12zd2var3711zc0zzglobaliza7e_escapeza7(obj_t BgL_envz00_2719,
		obj_t BgL_nodez00_2720, obj_t BgL_oz00_2721)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 98 */
			{	/* Globalize/escape.scm 99 */
				obj_t BgL_res4011z00_2750;

				BgL_res4011z00_2750 = CNST_TABLE_REF(((long) 1));
				return BgL_res4011z00_2750;
			}
		}
	}



/* escape!-kwote3709 */
	obj_t BGl_escapez12zd2kwote3709zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2722, obj_t BgL_nodez00_2723, obj_t BgL_oz00_2724)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 92 */
			{	/* Globalize/escape.scm 93 */
				obj_t BgL_res4012z00_2753;

				BgL_res4012z00_2753 = CNST_TABLE_REF(((long) 1));
				return BgL_res4012z00_2753;
			}
		}
	}



/* escape!-atom3707 */
	obj_t BGl_escapez12zd2atom3707zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2725, obj_t BgL_nodez00_2726, obj_t BgL_oz00_2727)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 86 */
			{	/* Globalize/escape.scm 87 */
				obj_t BgL_res4013z00_2756;

				BgL_res4013z00_2756 = CNST_TABLE_REF(((long) 1));
				return BgL_res4013z00_2756;
			}
		}
	}



/* set-escaping-fun!-lo3703 */
	obj_t BGl_setzd2escapingzd2funz12zd2lo3703zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2728, obj_t BgL_variablez00_2729)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 75 */
			{
				BgL_localzf2ginfozf2_bglt BgL_variablez00_1448;

				BgL_variablez00_1448 =
					(BgL_localzf2ginfozf2_bglt) (BgL_variablez00_2729);
				{
					obj_t BgL_auxz00_3740;

					{	/* Globalize/escape.scm 76 */
						BgL_objectz00_bglt BgL_auxz00_3741;

						BgL_auxz00_3741 = (BgL_objectz00_bglt) (BgL_variablez00_1448);
						BgL_auxz00_3740 = BGL_OBJECT_WIDENING(BgL_auxz00_3741);
					}
					return
						((((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_3740))->
							BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
			}
		}
	}



/* set-escaping-fun!-gl3701 */
	obj_t BGl_setzd2escapingzd2funz12zd2gl3701zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2730, obj_t BgL_variablez00_2731)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 69 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_variablez00_1443;

				BgL_variablez00_1443 =
					(BgL_globalzf2ginfozf2_bglt) (BgL_variablez00_2731);
				{
					obj_t BgL_auxz00_3746;

					{	/* Globalize/escape.scm 70 */
						BgL_objectz00_bglt BgL_auxz00_3747;

						BgL_auxz00_3747 = (BgL_objectz00_bglt) (BgL_variablez00_1443);
						BgL_auxz00_3746 = BGL_OBJECT_WIDENING(BgL_auxz00_3747);
					}
					return
						((((BgL_globalzf2ginfozf2_bglt) CREF(BgL_auxz00_3746))->
							BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
			}
		}
	}



/* set-escaping-fun!-gl3699 */
	obj_t BGl_setzd2escapingzd2funz12zd2gl3699zc0zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2732, obj_t BgL_variablez00_2733)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 63 */
			{
				BgL_globalz00_bglt BgL_variablez00_1435;

				{	/* Globalize/escape.scm 64 */
					BgL_globalz00_bglt BgL_auxz00_3752;

					BgL_variablez00_1435 = (BgL_globalz00_bglt) (BgL_variablez00_2733);
					{	/* Globalize/escape.scm 64 */
						BgL_globalz00_bglt BgL_obj3637z00_1438;

						BgL_obj3637z00_1438 = ((BgL_globalz00_bglt) BgL_variablez00_1435);
						{	/* Globalize/escape.scm 64 */
							obj_t BgL_auxz00_3756;

							BgL_objectz00_bglt BgL_auxz00_3754;

							BgL_auxz00_3756 =
								BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7(((bool_t)
									1), BFALSE);
							BgL_auxz00_3754 = (BgL_objectz00_bglt) (BgL_obj3637z00_1438);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3754, BgL_auxz00_3756);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj3637z00_1438),
							BGl_classzd2numzd2zz__objectz00
							(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
						BgL_auxz00_3752 = BgL_obj3637z00_1438;
					}
					return (obj_t) (BgL_auxz00_3752);
				}
			}
		}
	}



/* escape-fun!-local3695 */
	obj_t BGl_escapezd2funz12zd2local3695z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2734, obj_t BgL_variablez00_2735)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 47 */
			{
				BgL_localz00_bglt BgL_variablez00_1426;

				BgL_variablez00_1426 = (BgL_localz00_bglt) (BgL_variablez00_2735);
				{

					{	/* Globalize/escape.scm 48 */
						bool_t BgL_testz00_3764;

						{	/* Globalize/escape.scm 48 */
							obj_t BgL_obj3519z00_1854;

							BgL_obj3519z00_1854 = (obj_t) (BgL_variablez00_1426);
							BgL_testz00_3764 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3519z00_1854,
								BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
						}
						if (BgL_testz00_3764)
							{	/* Globalize/escape.scm 48 */
								BFALSE;
							}
						else
							{	/* Globalize/escape.scm 49 */
								BgL_localz00_bglt BgL_obj3636z00_1430;

								BgL_obj3636z00_1430 =
									((BgL_localz00_bglt) BgL_variablez00_1426);
								{	/* Globalize/escape.scm 49 */
									obj_t BgL_auxz00_3770;

									BgL_objectz00_bglt BgL_auxz00_3768;

									BgL_auxz00_3770 =
										BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7((
											(bool_t) 0), ((bool_t) 0));
									BgL_auxz00_3768 = (BgL_objectz00_bglt) (BgL_obj3636z00_1430);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_3768, BgL_auxz00_3770);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj3636z00_1430),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
								(obj_t) (BgL_obj3636z00_1430);
							}
					}
					{	/* Globalize/escape.scm 47 */
						obj_t BgL_nextzd2method3694zd2_1433;

						BgL_nextzd2method3694zd2_1433 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_variablez00_1426),
							BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
							BGl_localz00zzast_varz00);
						if (PROCEDUREP(BgL_nextzd2method3694zd2_1433))
							{	/* Globalize/escape.scm 47 */
								return
									PROCEDURE_ENTRY(BgL_nextzd2method3694zd2_1433)
									(BgL_nextzd2method3694zd2_1433,
									(obj_t) (BgL_variablez00_1426), BEOA);
							}
						else
							{	/* Globalize/escape.scm 47 */
								{	/* Globalize/escape.scm 47 */
									BgL_variablez00_bglt BgL_variablez00_1858;

									BgL_variablez00_1858 =
										(BgL_variablez00_bglt) (BgL_variablez00_1426);
									{	/* Globalize/escape.scm 47 */
										obj_t BgL_method3691z00_1859;

										{	/* Globalize/escape.scm 47 */
											BgL_objectz00_bglt BgL_objz00_1860;

											BgL_objz00_1860 =
												(BgL_objectz00_bglt) (BgL_variablez00_1858);
											{	/* Globalize/escape.scm 47 */
												long BgL_objzd2classzd2numz00_1861;

												BgL_objzd2classzd2numz00_1861 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1860);
												{	/* Globalize/escape.scm 47 */
													obj_t BgL_arg2643z00_1862;

													BgL_arg2643z00_1862 =
														PROCEDURE_REF
														(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
														(int) (((long) 1)));
													{	/* Globalize/escape.scm 47 */
														obj_t BgL_arrayz00_1864;

														int BgL_offsetz00_1865;

														BgL_arrayz00_1864 = BgL_arg2643z00_1862;
														BgL_offsetz00_1865 =
															(int) (BgL_objzd2classzd2numz00_1861);
														{	/* Globalize/escape.scm 47 */
															long BgL_offsetz00_1866;

															BgL_offsetz00_1866 =
																((long) (BgL_offsetz00_1865) - OBJECT_TYPE);
															{	/* Globalize/escape.scm 47 */
																long BgL_modz00_1867;

																{	/* Globalize/escape.scm 47 */
																	int BgL_arg2645z00_1868;

																	BgL_arg2645z00_1868 = (int) (((long) 16));
																	{	/* Globalize/escape.scm 47 */
																		long BgL_auxz00_3793;

																		BgL_auxz00_3793 =
																			(long) (BgL_arg2645z00_1868);
																		BgL_modz00_1867 =
																			(BgL_offsetz00_1866 / BgL_auxz00_3793);
																}}
																{	/* Globalize/escape.scm 47 */
																	long BgL_restz00_1869;

																	{	/* Globalize/escape.scm 47 */
																		int BgL_arg2644z00_1870;

																		BgL_arg2644z00_1870 = (int) (((long) 16));
																		{	/* Globalize/escape.scm 47 */
																			long BgL_auxz00_3797;

																			BgL_auxz00_3797 =
																				(long) (BgL_arg2644z00_1870);
																			BgL_restz00_1869 =
																				(BgL_offsetz00_1866 % BgL_auxz00_3797);
																	}}
																	{	/* Globalize/escape.scm 47 */

																		BgL_method3691z00_1859 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1864,
																				(int) (BgL_modz00_1867)),
																			(int) (BgL_restz00_1869));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3691z00_1859)
											(BgL_method3691z00_1859, (obj_t) (BgL_variablez00_1858),
											BEOA);
									}
								}
							}
					}
				}
			}
		}
	}



/* escape-fun!-global3693 */
	obj_t BGl_escapezd2funz12zd2global3693z12zzglobaliza7e_escapeza7(obj_t
		BgL_envz00_2736, obj_t BgL_variablez00_2737)
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 38 */
			{
				BgL_globalz00_bglt BgL_variablez00_1414;

				BgL_variablez00_1414 = (BgL_globalz00_bglt) (BgL_variablez00_2737);
				{

					{	/* Globalize/escape.scm 39 */
						bool_t BgL_testz00_3808;

						{	/* Globalize/escape.scm 39 */
							obj_t BgL_obj3578z00_1823;

							BgL_obj3578z00_1823 = (obj_t) (BgL_variablez00_1414);
							BgL_testz00_3808 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3578z00_1823,
								BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
						}
						if (BgL_testz00_3808)
							{	/* Globalize/escape.scm 39 */
								BFALSE;
							}
						else
							{	/* Globalize/escape.scm 40 */
								BgL_globalz00_bglt BgL_obj3635z00_1418;

								BgL_obj3635z00_1418 =
									((BgL_globalz00_bglt) BgL_variablez00_1414);
								{	/* Globalize/escape.scm 41 */
									obj_t BgL_arg3822z00_1419;

									{	/* Globalize/escape.scm 41 */
										bool_t BgL_arg3823z00_1420;

										BgL_arg3823z00_1420 =
											(
											(((BgL_globalz00_bglt) CREF(BgL_variablez00_1414))->
												BgL_importz00) == CNST_TABLE_REF(((long) 2)));
										BgL_arg3822z00_1419 =
											BGl_wideningzd2globalzf2Ginfoz20zzglobaliza7e_ginfoza7
											(BgL_arg3823z00_1420, BFALSE);
									}
									{	/* Globalize/escape.scm 40 */
										BgL_objectz00_bglt BgL_auxz00_3816;

										BgL_auxz00_3816 =
											(BgL_objectz00_bglt) (BgL_obj3635z00_1418);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3816,
											BgL_arg3822z00_1419);
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj3635z00_1418),
									BGl_classzd2numzd2zz__objectz00
									(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7));
								(obj_t) (BgL_obj3635z00_1418);
					}}
					{	/* Globalize/escape.scm 38 */
						obj_t BgL_nextzd2method3692zd2_1424;

						BgL_nextzd2method3692zd2_1424 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_variablez00_1414),
							BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
							BGl_globalz00zzast_varz00);
						if (PROCEDUREP(BgL_nextzd2method3692zd2_1424))
							{	/* Globalize/escape.scm 38 */
								return
									PROCEDURE_ENTRY(BgL_nextzd2method3692zd2_1424)
									(BgL_nextzd2method3692zd2_1424,
									(obj_t) (BgL_variablez00_1414), BEOA);
							}
						else
							{	/* Globalize/escape.scm 38 */
								{	/* Globalize/escape.scm 38 */
									BgL_variablez00_bglt BgL_variablez00_1828;

									BgL_variablez00_1828 =
										(BgL_variablez00_bglt) (BgL_variablez00_1414);
									{	/* Globalize/escape.scm 38 */
										obj_t BgL_method3691z00_1829;

										{	/* Globalize/escape.scm 38 */
											BgL_objectz00_bglt BgL_objz00_1830;

											BgL_objz00_1830 =
												(BgL_objectz00_bglt) (BgL_variablez00_1828);
											{	/* Globalize/escape.scm 38 */
												long BgL_objzd2classzd2numz00_1831;

												BgL_objzd2classzd2numz00_1831 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1830);
												{	/* Globalize/escape.scm 38 */
													obj_t BgL_arg2643z00_1832;

													BgL_arg2643z00_1832 =
														PROCEDURE_REF
														(BGl_escapezd2funz12zd2envz12zzglobaliza7e_escapeza7,
														(int) (((long) 1)));
													{	/* Globalize/escape.scm 38 */
														obj_t BgL_arrayz00_1834;

														int BgL_offsetz00_1835;

														BgL_arrayz00_1834 = BgL_arg2643z00_1832;
														BgL_offsetz00_1835 =
															(int) (BgL_objzd2classzd2numz00_1831);
														{	/* Globalize/escape.scm 38 */
															long BgL_offsetz00_1836;

															BgL_offsetz00_1836 =
																((long) (BgL_offsetz00_1835) - OBJECT_TYPE);
															{	/* Globalize/escape.scm 38 */
																long BgL_modz00_1837;

																{	/* Globalize/escape.scm 38 */
																	int BgL_arg2645z00_1838;

																	BgL_arg2645z00_1838 = (int) (((long) 16));
																	{	/* Globalize/escape.scm 38 */
																		long BgL_auxz00_3839;

																		BgL_auxz00_3839 =
																			(long) (BgL_arg2645z00_1838);
																		BgL_modz00_1837 =
																			(BgL_offsetz00_1836 / BgL_auxz00_3839);
																}}
																{	/* Globalize/escape.scm 38 */
																	long BgL_restz00_1839;

																	{	/* Globalize/escape.scm 38 */
																		int BgL_arg2644z00_1840;

																		BgL_arg2644z00_1840 = (int) (((long) 16));
																		{	/* Globalize/escape.scm 38 */
																			long BgL_auxz00_3843;

																			BgL_auxz00_3843 =
																				(long) (BgL_arg2644z00_1840);
																			BgL_restz00_1839 =
																				(BgL_offsetz00_1836 % BgL_auxz00_3843);
																	}}
																	{	/* Globalize/escape.scm 38 */

																		BgL_method3691z00_1829 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1834,
																				(int) (BgL_modz00_1837)),
																			(int) (BgL_restz00_1839));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3691z00_1829)
											(BgL_method3691z00_1829, (obj_t) (BgL_variablez00_1828),
											BEOA);
									}
								}
							}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_escapeza7()
	{
		AN_OBJECT;
		{	/* Globalize/escape.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4007z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4007z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4007z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4007z00zzglobaliza7e_escapeza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4007z00zzglobaliza7e_escapeza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string4007z00zzglobaliza7e_escapeza7));
		}
	}

#ifdef __cplusplus
}
#endif
