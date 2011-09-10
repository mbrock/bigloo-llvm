/*===========================================================================*/
/*   (Globalize/new_body.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/new_body.scm)*/
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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t
		BGl__setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_remz12zd2var3693zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_nodez00_bglt, obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_remz12zd2select3714zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_remz12zd2conditional3709zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_remz12zd2cast3705zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_remz12zd2kwote3691zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_newzd2bodyz75();
	static obj_t BGl_zc3anonymousza33776ze3z83zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_remz12zd2default3686zc0zzglobaliza7e_newzd2bodyz75(BgL_nodez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_newzd2bodyz75();
	static obj_t BGl_remz12zd2funcall3701zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_remz12zd2setq3707zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__remz12zd2default3686zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	static obj_t BGl__remz12z12zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_newzd2bodyz75();
	static obj_t BGl_remz12zd2fail3711zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_remz12zd2boxzd2ref3728z12zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_remz12zd2setzd2exzd2it3721zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(BgL_globalz00_bglt, obj_t);
	static bool_t BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_newzd2bodyz75();
	static obj_t BGl_remz12zd2sequence3695zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static long BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t
		BGl_remz12zd2boxzd2setz123730z00zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
	static obj_t
		BGl_setzd2globaliza7edzd2newzd2bodyz12z67zzglobaliza7e_newzd2bodyz75(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_remz12zd2letzd2fun3717z12zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_remz12zd2app3697zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_remz12zd2jumpzd2exzd2it3723zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_remz12zd2extern3703zc0zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_remz12zd2letzd2var3719z12zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_remz12zd2appzd2ly3699z12zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_remz12zd2atom3689zc0zzglobaliza7e_newzd2bodyz75(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_remz12zd2makezd2box3725z12zzglobaliza7e_newzd2bodyz75(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4046z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2atom3684070z00,
		BGl_remz12zd2atom3689zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4047z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2kwote364071z00,
		BGl_remz12zd2kwote3691zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4048z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2var36934072z00,
		BGl_remz12zd2var3693zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4050z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2app36974073z00,
		BGl_remz12zd2app3697zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4049z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2sequenc4074z00,
		BGl_remz12zd2sequence3695zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4051z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2appza7d2l4075za7,
		BGl_remz12zd2appzd2ly3699z12zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4052z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2funcall4076z00,
		BGl_remz12zd2funcall3701zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4053z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2extern34077z00,
		BGl_remz12zd2extern3703zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4054z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2cast3704078z00,
		BGl_remz12zd2cast3705zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4055z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2setq3704079z00,
		BGl_remz12zd2setq3707zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4056z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2conditi4080z00,
		BGl_remz12zd2conditional3709zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4057z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2fail3714081z00,
		BGl_remz12zd2fail3711zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4058z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2select34082z00,
		BGl_remz12zd2select3714zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4060z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2letza7d2v4083za7,
		BGl_remz12zd2letzd2var3719z12zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4059z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2letza7d2f4084za7,
		BGl_remz12zd2letzd2fun3717z12zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4061z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2setza7d2e4085za7,
		BGl_remz12zd2setzd2exzd2it3721zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4062z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2jumpza7d24086za7,
		BGl_remz12zd2jumpzd2exzd2it3723zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4063z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2makeza7d24087za7,
		BGl_remz12zd2makezd2box3725z12zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4064z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2boxza7d2r4088za7,
		BGl_remz12zd2boxzd2ref3728z12zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4065z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_remza712za7d2boxza7d2s4089za7,
		BGl_remz12zd2boxzd2setz123730z00zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string4044z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string4044za700za7za7g4090za7, "rem!", 4);
	      DEFINE_STRING(BGl_string4045z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string4045za700za7za7g4091za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string4066za700za7za7g4092za7, "globalize_new-body", 18);
	      DEFINE_STRING(BGl_string4067z00zzglobaliza7e_newzd2bodyz75,
		BgL_bgl_string4067za700za7za7g4093za7, "rem!-default3686 done ", 22);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
		BgL_bgl__remza712za712za7za7glob4094z00,
		BGl__remz12z12zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_remz12zd2default3686zd2envz12zzglobaliza7e_newzd2bodyz75,
		BgL_bgl__remza712za7d2defaul4095z00,
		BGl__remz12zd2default3686zc0zzglobaliza7e_newzd2bodyz75, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2globaliza7edzd2newzd2bodiesz12zd2envzb5zzglobaliza7e_newzd2bodyz75,
		BgL_bgl__setza7d2globaliza7a4096z00,
		BGl__setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(long
		BgL_checksumz00_2961, char *BgL_fromz00_2962)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
					BGl_cnstzd2initzd2zzglobaliza7e_newzd2bodyz75();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75();
					BGl_genericzd2initzd2zzglobaliza7e_newzd2bodyz75();
					BGl_methodzd2initzd2zzglobaliza7e_newzd2bodyz75();
					BGl_toplevelzd2initzd2zzglobaliza7e_newzd2bodyz75();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75()
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_new-body");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"globalize_new-body");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			{	/* Globalize/new_body.scm 15 */
				obj_t BgL_cportz00_2944;

				BgL_cportz00_2944 =
					bgl_open_input_string(BGl_string4067z00zzglobaliza7e_newzd2bodyz75,
					(int) (((long) 0)));
				{
					long BgL_iz00_2945;

					BgL_iz00_2945 = ((long) 1);
				BgL_loopz00_2946:
					if ((BgL_iz00_2945 == ((long) -1)))
						{	/* Globalize/new_body.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/new_body.scm 15 */
							{	/* Globalize/new_body.scm 15 */
								obj_t BgL_arg4069z00_2948;

								{	/* Globalize/new_body.scm 15 */

									{	/* Globalize/new_body.scm 15 */
										obj_t BgL_locationz00_2950;

										BgL_locationz00_2950 = BBOOL(((bool_t) 0));
										{	/* Globalize/new_body.scm 15 */

											BgL_arg4069z00_2948 =
												BGl_readz00zz__readerz00(BgL_cportz00_2944,
												BgL_locationz00_2950);
										}
									}
								}
								{	/* Globalize/new_body.scm 15 */
									int BgL_auxz00_2983;

									BgL_auxz00_2983 = (int) (BgL_iz00_2945);
									CNST_TABLE_SET(BgL_auxz00_2983, BgL_arg4069z00_2948);
							}}
							{	/* Globalize/new_body.scm 15 */
								int BgL_auxz00_2951;

								BgL_auxz00_2951 = (int) ((BgL_iz00_2945 - ((long) 1)));
								{
									long BgL_iz00_2988;

									BgL_iz00_2988 = (long) (BgL_auxz00_2951);
									BgL_iz00_2945 = BgL_iz00_2988;
									goto BgL_loopz00_2946;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 = ((long) 0);
			return BUNSPEC;
		}
	}



/* set-globalized-new-bodies! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(BgL_globalz00_bglt BgL_globalz00_1, obj_t BgL_localsz00_2)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 31 */
			BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 =
				(BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 + ((long) 1));
			{	/* Globalize/new_body.scm 34 */
				BgL_valuez00_bglt BgL_funz00_985;

				{
					BgL_variablez00_bglt BgL_auxz00_2991;

					BgL_auxz00_2991 = (BgL_variablez00_bglt) (BgL_globalz00_1);
					BgL_funz00_985 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2991))->BgL_valuez00);
				}
				{	/* Globalize/new_body.scm 35 */
					BgL_nodez00_bglt BgL_arg3731z00_986;

					{	/* Globalize/new_body.scm 35 */
						obj_t BgL_arg3732z00_987;

						{
							BgL_sfunz00_bglt BgL_auxz00_2994;

							BgL_auxz00_2994 = (BgL_sfunz00_bglt) (BgL_funz00_985);
							BgL_arg3732z00_987 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2994))->BgL_bodyz00);
						}
						{	/* Globalize/new_body.scm 35 */
							BgL_nodez00_bglt BgL_res3957z00_1793;

							{	/* Globalize/new_body.scm 35 */
								BgL_nodez00_bglt BgL_nodez00_1765;

								BgL_nodez00_1765 = (BgL_nodez00_bglt) (BgL_arg3732z00_987);
								{	/* Globalize/new_body.scm 35 */
									obj_t BgL_method3687z00_1768;

									{	/* Globalize/new_body.scm 35 */
										BgL_objectz00_bglt BgL_objz00_1769;

										BgL_objz00_1769 = (BgL_objectz00_bglt) (BgL_nodez00_1765);
										{	/* Globalize/new_body.scm 35 */
											long BgL_objzd2classzd2numz00_1770;

											BgL_objzd2classzd2numz00_1770 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1769);
											{	/* Globalize/new_body.scm 35 */
												obj_t BgL_arg2643z00_1771;

												BgL_arg2643z00_1771 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 35 */
													obj_t BgL_arrayz00_1773;

													int BgL_offsetz00_1774;

													BgL_arrayz00_1773 = BgL_arg2643z00_1771;
													BgL_offsetz00_1774 =
														(int) (BgL_objzd2classzd2numz00_1770);
													{	/* Globalize/new_body.scm 35 */
														long BgL_offsetz00_1775;

														BgL_offsetz00_1775 =
															((long) (BgL_offsetz00_1774) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 35 */
															long BgL_modz00_1776;

															{	/* Globalize/new_body.scm 35 */
																int BgL_arg2645z00_1777;

																BgL_arg2645z00_1777 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 35 */
																	long BgL_auxz00_3006;

																	BgL_auxz00_3006 =
																		(long) (BgL_arg2645z00_1777);
																	BgL_modz00_1776 =
																		(BgL_offsetz00_1775 / BgL_auxz00_3006);
															}}
															{	/* Globalize/new_body.scm 35 */
																long BgL_restz00_1778;

																{	/* Globalize/new_body.scm 35 */
																	int BgL_arg2644z00_1779;

																	BgL_arg2644z00_1779 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 35 */
																		long BgL_auxz00_3010;

																		BgL_auxz00_3010 =
																			(long) (BgL_arg2644z00_1779);
																		BgL_restz00_1778 =
																			(BgL_offsetz00_1775 % BgL_auxz00_3010);
																}}
																{	/* Globalize/new_body.scm 35 */

																	BgL_method3687z00_1768 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1773,
																			(int) (BgL_modz00_1776)),
																		(int) (BgL_restz00_1778));
									}}}}}}}}
									BgL_res3957z00_1793 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_1768)
										(BgL_method3687z00_1768, (obj_t) (BgL_nodez00_1765),
											(obj_t) (BgL_globalz00_1), (obj_t) (BgL_globalz00_1),
											BEOA));
							}}
							BgL_arg3731z00_986 = BgL_res3957z00_1793;
					}}
					{
						obj_t BgL_auxz00_3025;

						BgL_sfunz00_bglt BgL_auxz00_3023;

						BgL_auxz00_3025 = (obj_t) (BgL_arg3731z00_986);
						BgL_auxz00_3023 = (BgL_sfunz00_bglt) (BgL_funz00_985);
						((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3023))->BgL_bodyz00) =
							((obj_t) BgL_auxz00_3025), BUNSPEC);
			}}}
			{
				obj_t BgL_l3676z00_989;

				{	/* Globalize/new_body.scm 37 */
					bool_t BgL_auxz00_3028;

					BgL_l3676z00_989 = BgL_localsz00_2;
				BgL_zc3anonymousza33733ze3z83_990:
					if (PAIRP(BgL_l3676z00_989))
						{	/* Globalize/new_body.scm 37 */
							BGl_setzd2globaliza7edzd2newzd2bodyz12z67zzglobaliza7e_newzd2bodyz75
								(CAR(BgL_l3676z00_989));
							{
								obj_t BgL_l3676z00_3033;

								BgL_l3676z00_3033 = CDR(BgL_l3676z00_989);
								BgL_l3676z00_989 = BgL_l3676z00_3033;
								goto BgL_zc3anonymousza33733ze3z83_990;
							}
						}
					else
						{	/* Globalize/new_body.scm 37 */
							BgL_auxz00_3028 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3028);
				}
			}
		}
	}



/* _set-globalized-new-bodies! */
	obj_t
		BGl__setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(obj_t BgL_envz00_2829, obj_t BgL_globalz00_2830, obj_t BgL_localsz00_2831)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 31 */
			return
				BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75(
				(BgL_globalz00_bglt) (BgL_globalz00_2830), BgL_localsz00_2831);
		}
	}



/* set-globalized-new-body! */
	obj_t
		BGl_setzd2globaliza7edzd2newzd2bodyz12z67zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_localz00_3)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 42 */
			BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 =
				(BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75 + ((long) 1));
			{	/* Globalize/new_body.scm 50 */
				BgL_valuez00_bglt BgL_funz00_995;

				{
					BgL_variablez00_bglt BgL_auxz00_3039;

					BgL_auxz00_3039 = (BgL_variablez00_bglt) (BgL_localz00_3);
					BgL_funz00_995 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3039))->BgL_valuez00);
				}
				{	/* Globalize/new_body.scm 51 */
					obj_t BgL_oldzd2bodyzd2_997;

					{
						BgL_sfunz00_bglt BgL_auxz00_3042;

						BgL_auxz00_3042 = (BgL_sfunz00_bglt) (BgL_funz00_995);
						BgL_oldzd2bodyzd2_997 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3042))->BgL_bodyz00);
					}
					{	/* Globalize/new_body.scm 52 */
						obj_t BgL_obindingsz00_998;

						{	/* Globalize/new_body.scm 53 */
							obj_t BgL_arg3775z00_1059;

							{	/* Globalize/new_body.scm 56 */
								BgL_sfunzf2ginfozf2_bglt BgL_obj3352z00_1804;

								BgL_obj3352z00_1804 =
									(BgL_sfunzf2ginfozf2_bglt) (BgL_funz00_995);
								{
									obj_t BgL_auxz00_3046;

									{	/* Globalize/new_body.scm 56 */
										BgL_objectz00_bglt BgL_auxz00_3047;

										BgL_auxz00_3047 =
											(BgL_objectz00_bglt) (BgL_obj3352z00_1804);
										BgL_auxz00_3046 = BGL_OBJECT_WIDENING(BgL_auxz00_3047);
									}
									BgL_arg3775z00_1059 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3046))->
										BgL_integratedz00);
							}}
							{	/* Globalize/new_body.scm 54 */
								obj_t BgL_zc3anonymousza33776ze3z83_2836;

								BgL_zc3anonymousza33776ze3z83_2836 =
									make_fx_procedure
									(BGl_zc3anonymousza33776ze3z83zzglobaliza7e_newzd2bodyz75,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza33776ze3z83_2836,
									(int) (((long) 0)), BgL_localz00_3);
								BgL_obindingsz00_998 =
									BGl_filterz00zz__r4_control_features_6_9z00
									(BgL_zc3anonymousza33776ze3z83_2836, BgL_arg3775z00_1059);
						}}
						{	/* Globalize/new_body.scm 53 */
							BgL_nodez00_bglt BgL_newzd2bodyzd2_999;

							{	/* Globalize/new_body.scm 57 */
								BgL_nodez00_bglt BgL_res3960z00_1835;

								{	/* Globalize/new_body.scm 57 */
									BgL_nodez00_bglt BgL_nodez00_1807;

									BgL_nodez00_1807 = (BgL_nodez00_bglt) (BgL_oldzd2bodyzd2_997);
									{	/* Globalize/new_body.scm 57 */
										obj_t BgL_method3687z00_1810;

										{	/* Globalize/new_body.scm 57 */
											BgL_objectz00_bglt BgL_objz00_1811;

											BgL_objz00_1811 = (BgL_objectz00_bglt) (BgL_nodez00_1807);
											{	/* Globalize/new_body.scm 57 */
												long BgL_objzd2classzd2numz00_1812;

												BgL_objzd2classzd2numz00_1812 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1811);
												{	/* Globalize/new_body.scm 57 */
													obj_t BgL_arg2643z00_1813;

													BgL_arg2643z00_1813 =
														PROCEDURE_REF
														(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
														(int) (((long) 1)));
													{	/* Globalize/new_body.scm 57 */
														obj_t BgL_arrayz00_1815;

														int BgL_offsetz00_1816;

														BgL_arrayz00_1815 = BgL_arg2643z00_1813;
														BgL_offsetz00_1816 =
															(int) (BgL_objzd2classzd2numz00_1812);
														{	/* Globalize/new_body.scm 57 */
															long BgL_offsetz00_1817;

															BgL_offsetz00_1817 =
																((long) (BgL_offsetz00_1816) - OBJECT_TYPE);
															{	/* Globalize/new_body.scm 57 */
																long BgL_modz00_1818;

																{	/* Globalize/new_body.scm 57 */
																	int BgL_arg2645z00_1819;

																	BgL_arg2645z00_1819 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 57 */
																		long BgL_auxz00_3066;

																		BgL_auxz00_3066 =
																			(long) (BgL_arg2645z00_1819);
																		BgL_modz00_1818 =
																			(BgL_offsetz00_1817 / BgL_auxz00_3066);
																}}
																{	/* Globalize/new_body.scm 57 */
																	long BgL_restz00_1820;

																	{	/* Globalize/new_body.scm 57 */
																		int BgL_arg2644z00_1821;

																		BgL_arg2644z00_1821 = (int) (((long) 16));
																		{	/* Globalize/new_body.scm 57 */
																			long BgL_auxz00_3070;

																			BgL_auxz00_3070 =
																				(long) (BgL_arg2644z00_1821);
																			BgL_restz00_1820 =
																				(BgL_offsetz00_1817 % BgL_auxz00_3070);
																	}}
																	{	/* Globalize/new_body.scm 57 */

																		BgL_method3687z00_1810 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1815,
																				(int) (BgL_modz00_1818)),
																			(int) (BgL_restz00_1820));
										}}}}}}}}
										BgL_res3960z00_1835 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3687z00_1810) (BgL_method3687z00_1810,
												(obj_t) (BgL_nodez00_1807), BgL_localz00_3,
												BgL_localz00_3, BEOA));
								}}
								BgL_newzd2bodyzd2_999 = BgL_res3960z00_1835;
							}
							{	/* Globalize/new_body.scm 57 */

								{
									obj_t BgL_l3678z00_1001;

									BgL_l3678z00_1001 = BgL_obindingsz00_998;
								BgL_zc3anonymousza33737ze3z83_1002:
									if (PAIRP(BgL_l3678z00_1001))
										{	/* Globalize/new_body.scm 61 */
											{	/* Globalize/new_body.scm 66 */
												obj_t BgL_fz00_1004;

												BgL_fz00_1004 = CAR(BgL_l3678z00_1001);
												{	/* Globalize/new_body.scm 63 */
													bool_t BgL_testz00_3084;

													{	/* Globalize/new_body.scm 63 */
														long BgL_arg3741z00_1009;

														{	/* Globalize/new_body.scm 63 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3373z00_1839;

															{	/* Globalize/new_body.scm 63 */
																BgL_variablez00_bglt BgL_obj1611z00_1838;

																BgL_obj1611z00_1838 =
																	(BgL_variablez00_bglt) (BgL_fz00_1004);
																BgL_obj3373z00_1839 =
																	(BgL_sfunzf2ginfozf2_bglt) (
																	(((BgL_variablez00_bglt)
																			CREF(BgL_obj1611z00_1838))->
																		BgL_valuez00));
															}
															{
																obj_t BgL_auxz00_3088;

																{	/* Globalize/new_body.scm 63 */
																	BgL_objectz00_bglt BgL_auxz00_3089;

																	BgL_auxz00_3089 =
																		(BgL_objectz00_bglt) (BgL_obj3373z00_1839);
																	BgL_auxz00_3088 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3089);
																}
																BgL_arg3741z00_1009 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_3088))->BgL_bmarkz00);
														}}
														BgL_testz00_3084 =
															(BgL_arg3741z00_1009 ==
															BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75);
													}
													if (BgL_testz00_3084)
														{	/* Globalize/new_body.scm 63 */
															BFALSE;
														}
													else
														{	/* Globalize/new_body.scm 64 */
															BgL_valuez00_bglt BgL_funz00_1006;

															{
																BgL_variablez00_bglt BgL_auxz00_3094;

																BgL_auxz00_3094 =
																	(BgL_variablez00_bglt) (BgL_fz00_1004);
																BgL_funz00_1006 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3094))->BgL_valuez00);
															}
															{	/* Globalize/new_body.scm 64 */
																obj_t BgL_bodyz00_1007;

																{
																	BgL_sfunz00_bglt BgL_auxz00_3097;

																	BgL_auxz00_3097 =
																		(BgL_sfunz00_bglt) (BgL_funz00_1006);
																	BgL_bodyz00_1007 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_3097))->BgL_bodyz00);
																}
																{	/* Globalize/new_body.scm 65 */

																	{	/* Globalize/new_body.scm 66 */
																		BgL_nodez00_bglt BgL_arg3740z00_1008;

																		{	/* Globalize/new_body.scm 66 */
																			BgL_nodez00_bglt BgL_res3963z00_1872;

																			{	/* Globalize/new_body.scm 66 */
																				BgL_nodez00_bglt BgL_nodez00_1844;

																				BgL_nodez00_1844 =
																					(BgL_nodez00_bglt) (BgL_bodyz00_1007);
																				{	/* Globalize/new_body.scm 66 */
																					obj_t BgL_method3687z00_1847;

																					{	/* Globalize/new_body.scm 66 */
																						BgL_objectz00_bglt BgL_objz00_1848;

																						BgL_objz00_1848 =
																							(BgL_objectz00_bglt)
																							(BgL_nodez00_1844);
																						{	/* Globalize/new_body.scm 66 */
																							long
																								BgL_objzd2classzd2numz00_1849;
																							BgL_objzd2classzd2numz00_1849 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_1848);
																							{	/* Globalize/new_body.scm 66 */
																								obj_t BgL_arg2643z00_1850;

																								BgL_arg2643z00_1850 =
																									PROCEDURE_REF
																									(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
																									(int) (((long) 1)));
																								{	/* Globalize/new_body.scm 66 */
																									obj_t BgL_arrayz00_1852;

																									int BgL_offsetz00_1853;

																									BgL_arrayz00_1852 =
																										BgL_arg2643z00_1850;
																									BgL_offsetz00_1853 =
																										(int)
																										(BgL_objzd2classzd2numz00_1849);
																									{	/* Globalize/new_body.scm 66 */
																										long BgL_offsetz00_1854;

																										BgL_offsetz00_1854 =
																											(
																											(long)
																											(BgL_offsetz00_1853) -
																											OBJECT_TYPE);
																										{	/* Globalize/new_body.scm 66 */
																											long BgL_modz00_1855;

																											{	/* Globalize/new_body.scm 66 */
																												int BgL_arg2645z00_1856;

																												BgL_arg2645z00_1856 =
																													(int) (((long) 16));
																												{	/* Globalize/new_body.scm 66 */
																													long BgL_auxz00_3109;

																													BgL_auxz00_3109 =
																														(long)
																														(BgL_arg2645z00_1856);
																													BgL_modz00_1855 =
																														(BgL_offsetz00_1854
																														/ BgL_auxz00_3109);
																											}}
																											{	/* Globalize/new_body.scm 66 */
																												long BgL_restz00_1857;

																												{	/* Globalize/new_body.scm 66 */
																													int
																														BgL_arg2644z00_1858;
																													BgL_arg2644z00_1858 =
																														(int) (((long) 16));
																													{	/* Globalize/new_body.scm 66 */
																														long
																															BgL_auxz00_3113;
																														BgL_auxz00_3113 =
																															(long)
																															(BgL_arg2644z00_1858);
																														BgL_restz00_1857 =
																															(BgL_offsetz00_1854
																															%
																															BgL_auxz00_3113);
																												}}
																												{	/* Globalize/new_body.scm 66 */

																													BgL_method3687z00_1847
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_1852,
																															(int)
																															(BgL_modz00_1855)),
																														(int)
																														(BgL_restz00_1857));
																					}}}}}}}}
																					BgL_res3963z00_1872 =
																						(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																						(BgL_method3687z00_1847)
																						(BgL_method3687z00_1847,
																							(obj_t) (BgL_nodez00_1844),
																							BgL_localz00_3, BgL_fz00_1004,
																							BEOA));
																			}}
																			BgL_arg3740z00_1008 = BgL_res3963z00_1872;
																		}
																		{
																			obj_t BgL_auxz00_3126;

																			BgL_sfunz00_bglt BgL_auxz00_3124;

																			BgL_auxz00_3126 =
																				(obj_t) (BgL_arg3740z00_1008);
																			BgL_auxz00_3124 =
																				(BgL_sfunz00_bglt) (BgL_funz00_1006);
																			((((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_3124))->
																					BgL_bodyz00) =
																				((obj_t) BgL_auxz00_3126), BUNSPEC);
											}}}}}}}
											{
												obj_t BgL_l3678z00_3129;

												BgL_l3678z00_3129 = CDR(BgL_l3678z00_1001);
												BgL_l3678z00_1001 = BgL_l3678z00_3129;
												goto BgL_zc3anonymousza33737ze3z83_1002;
											}
										}
									else
										{	/* Globalize/new_body.scm 61 */
											((bool_t) 1);
										}
								}
								{	/* Globalize/new_body.scm 69 */
									obj_t BgL_nbindingsz00_1013;

									{
										obj_t BgL_nbdingsz00_1045;

										obj_t BgL_obdingsz00_1046;

										BgL_nbdingsz00_1045 = BNIL;
										BgL_obdingsz00_1046 = BgL_obindingsz00_998;
									BgL_zc3anonymousza33764ze3z83_1047:
										if (NULLP(BgL_obdingsz00_1046))
											{	/* Globalize/new_body.scm 72 */
												BgL_nbindingsz00_1013 = BgL_nbdingsz00_1045;
											}
										else
											{	/* Globalize/new_body.scm 74 */
												bool_t BgL_testz00_3133;

												{	/* Globalize/new_body.scm 75 */
													long BgL_arg3771z00_1054;

													{	/* Globalize/new_body.scm 74 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3373z00_1879;

														{	/* Globalize/new_body.scm 75 */
															BgL_valuez00_bglt BgL_auxz00_3134;

															{	/* Globalize/new_body.scm 74 */
																BgL_variablez00_bglt BgL_obj1611z00_1878;

																{	/* Globalize/new_body.scm 75 */
																	obj_t BgL_pairz00_1877;

																	BgL_pairz00_1877 = BgL_obdingsz00_1046;
																	BgL_obj1611z00_1878 =
																		(BgL_variablez00_bglt) (CAR
																		(BgL_pairz00_1877));
																}
																BgL_auxz00_3134 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_1878))->BgL_valuez00);
															}
															BgL_obj3373z00_1879 =
																(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_3134);
														}
														{
															obj_t BgL_auxz00_3139;

															{	/* Globalize/new_body.scm 74 */
																BgL_objectz00_bglt BgL_auxz00_3140;

																BgL_auxz00_3140 =
																	(BgL_objectz00_bglt) (BgL_obj3373z00_1879);
																BgL_auxz00_3139 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_3140);
															}
															BgL_arg3771z00_1054 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_3139))->BgL_bmarkz00);
													}}
													BgL_testz00_3133 =
														(BgL_arg3771z00_1054 ==
														BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75);
												}
												if (BgL_testz00_3133)
													{
														obj_t BgL_obdingsz00_3145;

														BgL_obdingsz00_3145 = CDR(BgL_obdingsz00_1046);
														BgL_obdingsz00_1046 = BgL_obdingsz00_3145;
														goto BgL_zc3anonymousza33764ze3z83_1047;
													}
												else
													{	/* Globalize/new_body.scm 80 */
														obj_t BgL_arg3768z00_1051;

														obj_t BgL_arg3769z00_1052;

														BgL_arg3768z00_1051 =
															MAKE_PAIR(CAR(BgL_obdingsz00_1046),
															BgL_nbdingsz00_1045);
														BgL_arg3769z00_1052 = CDR(BgL_obdingsz00_1046);
														{
															obj_t BgL_obdingsz00_3151;

															obj_t BgL_nbdingsz00_3150;

															BgL_nbdingsz00_3150 = BgL_arg3768z00_1051;
															BgL_obdingsz00_3151 = BgL_arg3769z00_1052;
															BgL_obdingsz00_1046 = BgL_obdingsz00_3151;
															BgL_nbdingsz00_1045 = BgL_nbdingsz00_3150;
															goto BgL_zc3anonymousza33764ze3z83_1047;
														}
													}
											}
									}
									{	/* Globalize/new_body.scm 82 */
										obj_t BgL_new2zd2bodyzd2_1014;

										if (NULLP(BgL_nbindingsz00_1013))
											{	/* Globalize/new_body.scm 82 */
												BgL_new2zd2bodyzd2_1014 =
													(obj_t) (BgL_newzd2bodyzd2_999);
											}
										else
											{	/* Globalize/new_body.scm 85 */
												obj_t BgL_arg3761z00_1040;

												BgL_typez00_bglt BgL_arg3762z00_1041;

												{
													BgL_nodez00_bglt BgL_auxz00_3155;

													BgL_auxz00_3155 =
														(BgL_nodez00_bglt) (BgL_oldzd2bodyzd2_997);
													BgL_arg3761z00_1040 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3155))->
														BgL_locz00);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_3158;

													BgL_auxz00_3158 =
														(BgL_nodez00_bglt) (BgL_oldzd2bodyzd2_997);
													BgL_arg3762z00_1041 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3158))->
														BgL_typez00);
												}
												BgL_new2zd2bodyzd2_1014 =
													(obj_t) (BGl_makezd2letzd2funz00zzast_nodez00
													(BgL_arg3761z00_1040, BgL_arg3762z00_1041, BUNSPEC,
														BINT(((long) -1)), BgL_nbindingsz00_1013,
														BgL_newzd2bodyzd2_999));
											}
										{	/* Globalize/new_body.scm 92 */
											obj_t BgL_g3639z00_1015;

											{	/* Globalize/new_body.scm 92 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1888;

												BgL_obj3333z00_1888 =
													(BgL_sfunzf2ginfozf2_bglt) (BgL_funz00_995);
												{
													obj_t BgL_auxz00_3165;

													{	/* Globalize/new_body.scm 92 */
														BgL_objectz00_bglt BgL_auxz00_3166;

														BgL_auxz00_3166 =
															(BgL_objectz00_bglt) (BgL_obj3333z00_1888);
														BgL_auxz00_3165 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3166);
													}
													BgL_g3639z00_1015 =
														(((BgL_sfunzf2ginfozf2_bglt)
															CREF(BgL_auxz00_3165))->BgL_ctoz00);
											}}
											{
												obj_t BgL_nctoz00_1017;

												obj_t BgL_nbindingsz00_1018;

												BgL_nctoz00_1017 = BgL_g3639z00_1015;
												BgL_nbindingsz00_1018 = BgL_nbindingsz00_1013;
											BgL_zc3anonymousza33746ze3z83_1019:
												if (NULLP(BgL_nbindingsz00_1018))
													{	/* Globalize/new_body.scm 95 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3335z00_1890;

														obj_t BgL_val3334z00_1891;

														BgL_obj3335z00_1890 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_funz00_995);
														BgL_val3334z00_1891 = BgL_nctoz00_1017;
														{
															obj_t BgL_auxz00_3173;

															{	/* Globalize/new_body.scm 95 */
																BgL_objectz00_bglt BgL_auxz00_3174;

																BgL_auxz00_3174 =
																	(BgL_objectz00_bglt) (BgL_obj3335z00_1890);
																BgL_auxz00_3173 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_3174);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_3173))->BgL_ctoz00) =
																((obj_t) BgL_val3334z00_1891), BUNSPEC);
														}
													}
												else
													{	/* Globalize/new_body.scm 96 */
														obj_t BgL_g3640z00_1021;

														{	/* Globalize/new_body.scm 97 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1894;

															{	/* Globalize/new_body.scm 98 */
																BgL_valuez00_bglt BgL_auxz00_3178;

																{	/* Globalize/new_body.scm 97 */
																	BgL_variablez00_bglt BgL_obj1611z00_1893;

																	{	/* Globalize/new_body.scm 98 */
																		obj_t BgL_pairz00_1892;

																		BgL_pairz00_1892 = BgL_nbindingsz00_1018;
																		BgL_obj1611z00_1893 =
																			(BgL_variablez00_bglt) (CAR
																			(BgL_pairz00_1892));
																	}
																	BgL_auxz00_3178 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_obj1611z00_1893))->BgL_valuez00);
																}
																BgL_obj3333z00_1894 =
																	(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_3178);
															}
															{
																obj_t BgL_auxz00_3183;

																{	/* Globalize/new_body.scm 97 */
																	BgL_objectz00_bglt BgL_auxz00_3184;

																	BgL_auxz00_3184 =
																		(BgL_objectz00_bglt) (BgL_obj3333z00_1894);
																	BgL_auxz00_3183 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3184);
																}
																BgL_g3640z00_1021 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_3183))->BgL_ctoz00);
															}
														}
														{
															obj_t BgL_nctoz00_1023;

															obj_t BgL_lctoz00_1024;

															BgL_nctoz00_1023 = BgL_nctoz00_1017;
															BgL_lctoz00_1024 = BgL_g3640z00_1021;
														BgL_zc3anonymousza33748ze3z83_1025:
															if (NULLP(BgL_lctoz00_1024))
																{
																	obj_t BgL_nbindingsz00_3191;

																	obj_t BgL_nctoz00_3190;

																	BgL_nctoz00_3190 = BgL_nctoz00_1023;
																	BgL_nbindingsz00_3191 =
																		CDR(BgL_nbindingsz00_1018);
																	BgL_nbindingsz00_1018 = BgL_nbindingsz00_3191;
																	BgL_nctoz00_1017 = BgL_nctoz00_3190;
																	goto BgL_zc3anonymousza33746ze3z83_1019;
																}
															else
																{	/* Globalize/new_body.scm 100 */
																	if (CBOOL
																		(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(CAR(BgL_lctoz00_1024),
																				BgL_nctoz00_1023)))
																		{
																			obj_t BgL_lctoz00_3197;

																			BgL_lctoz00_3197 = CDR(BgL_lctoz00_1024);
																			BgL_lctoz00_1024 = BgL_lctoz00_3197;
																			goto BgL_zc3anonymousza33748ze3z83_1025;
																		}
																	else
																		{	/* Globalize/new_body.scm 105 */
																			obj_t BgL_arg3753z00_1030;

																			obj_t BgL_arg3754z00_1031;

																			BgL_arg3753z00_1030 =
																				MAKE_PAIR(CAR(BgL_lctoz00_1024),
																				BgL_nctoz00_1023);
																			BgL_arg3754z00_1031 =
																				CDR(BgL_lctoz00_1024);
																			{
																				obj_t BgL_lctoz00_3203;

																				obj_t BgL_nctoz00_3202;

																				BgL_nctoz00_3202 = BgL_arg3753z00_1030;
																				BgL_lctoz00_3203 = BgL_arg3754z00_1031;
																				BgL_lctoz00_1024 = BgL_lctoz00_3203;
																				BgL_nctoz00_1023 = BgL_nctoz00_3202;
																				goto BgL_zc3anonymousza33748ze3z83_1025;
																			}
																		}
																}
														}
													}
											}
										}
										{	/* Globalize/new_body.scm 116 */
											BgL_nodez00_bglt BgL_arg3759z00_1038;

											{	/* Globalize/new_body.scm 116 */
												BgL_nodez00_bglt BgL_res3966z00_1929;

												{	/* Globalize/new_body.scm 116 */
													BgL_nodez00_bglt BgL_nodez00_1901;

													BgL_nodez00_1901 =
														(BgL_nodez00_bglt) (BgL_new2zd2bodyzd2_1014);
													{	/* Globalize/new_body.scm 116 */
														obj_t BgL_method3687z00_1904;

														{	/* Globalize/new_body.scm 116 */
															BgL_objectz00_bglt BgL_objz00_1905;

															BgL_objz00_1905 =
																(BgL_objectz00_bglt) (BgL_nodez00_1901);
															{	/* Globalize/new_body.scm 116 */
																long BgL_objzd2classzd2numz00_1906;

																BgL_objzd2classzd2numz00_1906 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1905);
																{	/* Globalize/new_body.scm 116 */
																	obj_t BgL_arg2643z00_1907;

																	BgL_arg2643z00_1907 =
																		PROCEDURE_REF
																		(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
																		(int) (((long) 1)));
																	{	/* Globalize/new_body.scm 116 */
																		obj_t BgL_arrayz00_1909;

																		int BgL_offsetz00_1910;

																		BgL_arrayz00_1909 = BgL_arg2643z00_1907;
																		BgL_offsetz00_1910 =
																			(int) (BgL_objzd2classzd2numz00_1906);
																		{	/* Globalize/new_body.scm 116 */
																			long BgL_offsetz00_1911;

																			BgL_offsetz00_1911 =
																				(
																				(long) (BgL_offsetz00_1910) -
																				OBJECT_TYPE);
																			{	/* Globalize/new_body.scm 116 */
																				long BgL_modz00_1912;

																				{	/* Globalize/new_body.scm 116 */
																					int BgL_arg2645z00_1913;

																					BgL_arg2645z00_1913 =
																						(int) (((long) 16));
																					{	/* Globalize/new_body.scm 116 */
																						long BgL_auxz00_3213;

																						BgL_auxz00_3213 =
																							(long) (BgL_arg2645z00_1913);
																						BgL_modz00_1912 =
																							(BgL_offsetz00_1911 /
																							BgL_auxz00_3213);
																				}}
																				{	/* Globalize/new_body.scm 116 */
																					long BgL_restz00_1914;

																					{	/* Globalize/new_body.scm 116 */
																						int BgL_arg2644z00_1915;

																						BgL_arg2644z00_1915 =
																							(int) (((long) 16));
																						{	/* Globalize/new_body.scm 116 */
																							long BgL_auxz00_3217;

																							BgL_auxz00_3217 =
																								(long) (BgL_arg2644z00_1915);
																							BgL_restz00_1914 =
																								(BgL_offsetz00_1911 %
																								BgL_auxz00_3217);
																					}}
																					{	/* Globalize/new_body.scm 116 */

																						BgL_method3687z00_1904 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1909,
																								(int) (BgL_modz00_1912)),
																							(int) (BgL_restz00_1914));
														}}}}}}}}
														BgL_res3966z00_1929 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3687z00_1904) (BgL_method3687z00_1904,
																(obj_t) (BgL_nodez00_1901), BgL_localz00_3,
																BgL_localz00_3, BEOA));
												}}
												BgL_arg3759z00_1038 = BgL_res3966z00_1929;
											}
											{	/* Globalize/new_body.scm 116 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3372z00_1930;

												obj_t BgL_val3371z00_1931;

												BgL_obj3372z00_1930 =
													(BgL_sfunzf2ginfozf2_bglt) (BgL_funz00_995);
												BgL_val3371z00_1931 = (obj_t) (BgL_arg3759z00_1038);
												{
													obj_t BgL_auxz00_3230;

													{	/* Globalize/new_body.scm 116 */
														BgL_objectz00_bglt BgL_auxz00_3231;

														BgL_auxz00_3231 =
															(BgL_objectz00_bglt) (BgL_obj3372z00_1930);
														BgL_auxz00_3230 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3231);
													}
													return
														((((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_3230))->BgL_newzd2bodyzd2) =
														((obj_t) BgL_val3371z00_1931), BUNSPEC);
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



/* <anonymous:3776> */
	obj_t BGl_zc3anonymousza33776ze3z83zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2837, obj_t BgL_gz00_2839)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 53 */
			{	/* Globalize/new_body.scm 54 */
				obj_t BgL_localz00_2838;

				BgL_localz00_2838 = PROCEDURE_REF(BgL_envz00_2837, (int) (((long) 0)));
				{
					obj_t BgL_gz00_1060;

					{	/* Globalize/new_body.scm 54 */
						bool_t BgL_auxz00_3237;

						BgL_gz00_1060 = BgL_gz00_2839;
						{	/* Globalize/new_body.scm 54 */
							bool_t BgL_testz00_3238;

							{	/* Globalize/new_body.scm 54 */
								obj_t BgL_auxz00_3239;

								{	/* Globalize/new_body.scm 54 */
									BgL_sfunzf2ginfozf2_bglt BgL_obj3348z00_1806;

									{	/* Globalize/new_body.scm 54 */
										BgL_variablez00_bglt BgL_obj1611z00_1805;

										BgL_obj1611z00_1805 =
											(BgL_variablez00_bglt) (BgL_gz00_1060);
										BgL_obj3348z00_1806 =
											(BgL_sfunzf2ginfozf2_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1805))->
												BgL_valuez00));
									}
									{
										obj_t BgL_auxz00_3243;

										{	/* Globalize/new_body.scm 54 */
											BgL_objectz00_bglt BgL_auxz00_3244;

											BgL_auxz00_3244 =
												(BgL_objectz00_bglt) (BgL_obj3348z00_1806);
											BgL_auxz00_3243 = BGL_OBJECT_WIDENING(BgL_auxz00_3244);
										}
										BgL_auxz00_3239 =
											(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3243))->
											BgL_ownerz00);
								}}
								BgL_testz00_3238 = (BgL_auxz00_3239 == BgL_localz00_2838);
							}
							if (BgL_testz00_3238)
								{	/* Globalize/new_body.scm 54 */
									BgL_auxz00_3237 = ((bool_t) 0);
								}
							else
								{	/* Globalize/new_body.scm 54 */
									BgL_auxz00_3237 = ((bool_t) 1);
								}
						}
						return BBOOL(BgL_auxz00_3237);
					}
				}
			}
		}
	}



/* is-in? */
	bool_t BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75(obj_t BgL_f1z00_4,
		obj_t BgL_f2z00_5)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 123 */
			{	/* Globalize/new_body.scm 124 */
				BgL_valuez00_bglt BgL_infoz00_1066;

				{
					BgL_variablez00_bglt BgL_auxz00_3250;

					BgL_auxz00_3250 = (BgL_variablez00_bglt) (BgL_f1z00_4);
					BgL_infoz00_1066 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3250))->BgL_valuez00);
				}
				{	/* Globalize/new_body.scm 126 */
					bool_t BgL_testz00_3253;

					{	/* Globalize/new_body.scm 126 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_1933;

						BgL_obj3323z00_1933 = (BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1066);
						{
							obj_t BgL_auxz00_3255;

							{	/* Globalize/new_body.scm 126 */
								BgL_objectz00_bglt BgL_auxz00_3256;

								BgL_auxz00_3256 = (BgL_objectz00_bglt) (BgL_obj3323z00_1933);
								BgL_auxz00_3255 = BGL_OBJECT_WIDENING(BgL_auxz00_3256);
							}
							BgL_testz00_3253 =
								(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3255))->
								BgL_gzf3zf3);
						}
					}
					if (BgL_testz00_3253)
						{	/* Globalize/new_body.scm 126 */
							return ((bool_t) 0);
						}
					else
						{	/* Globalize/new_body.scm 128 */
							bool_t BgL_testz00_3260;

							{	/* Globalize/new_body.scm 128 */
								obj_t BgL_arg3786z00_1073;

								{	/* Globalize/new_body.scm 128 */
									BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1934;

									BgL_obj3342z00_1934 =
										(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1066);
									{
										obj_t BgL_auxz00_3262;

										{	/* Globalize/new_body.scm 128 */
											BgL_objectz00_bglt BgL_auxz00_3263;

											BgL_auxz00_3263 =
												(BgL_objectz00_bglt) (BgL_obj3342z00_1934);
											BgL_auxz00_3262 = BGL_OBJECT_WIDENING(BgL_auxz00_3263);
										}
										BgL_arg3786z00_1073 =
											(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3262))->
											BgL_integratorz00);
									}
								}
								BgL_testz00_3260 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg3786z00_1073,
									BGl_localz00zzast_varz00);
							}
							if (BgL_testz00_3260)
								{	/* Globalize/new_body.scm 130 */
									bool_t BgL_testz00_3268;

									{	/* Globalize/new_body.scm 130 */
										obj_t BgL_auxz00_3269;

										{	/* Globalize/new_body.scm 130 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1936;

											BgL_obj3342z00_1936 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1066);
											{
												obj_t BgL_auxz00_3271;

												{	/* Globalize/new_body.scm 130 */
													BgL_objectz00_bglt BgL_auxz00_3272;

													BgL_auxz00_3272 =
														(BgL_objectz00_bglt) (BgL_obj3342z00_1936);
													BgL_auxz00_3271 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3272);
												}
												BgL_auxz00_3269 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3271))->
													BgL_integratorz00);
											}
										}
										BgL_testz00_3268 = (BgL_auxz00_3269 == BgL_f2z00_5);
									}
									if (BgL_testz00_3268)
										{	/* Globalize/new_body.scm 130 */
											return ((bool_t) 1);
										}
									else
										{	/* Globalize/new_body.scm 132 */
											bool_t BgL_testz00_3277;

											{	/* Globalize/new_body.scm 132 */
												obj_t BgL_auxz00_3278;

												{	/* Globalize/new_body.scm 132 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1937;

													BgL_obj3342z00_1937 =
														(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1066);
													{
														obj_t BgL_auxz00_3280;

														{	/* Globalize/new_body.scm 132 */
															BgL_objectz00_bglt BgL_auxz00_3281;

															BgL_auxz00_3281 =
																(BgL_objectz00_bglt) (BgL_obj3342z00_1937);
															BgL_auxz00_3280 =
																BGL_OBJECT_WIDENING(BgL_auxz00_3281);
														}
														BgL_auxz00_3278 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_3280))->BgL_integratorz00);
													}
												}
												BgL_testz00_3277 =
													BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75
													(BgL_auxz00_3278, BgL_f2z00_5);
											}
											if (BgL_testz00_3277)
												{	/* Globalize/new_body.scm 132 */
													return ((bool_t) 1);
												}
											else
												{	/* Globalize/new_body.scm 132 */
													return ((bool_t) 0);
												}
										}
								}
							else
								{	/* Globalize/new_body.scm 128 */
									return ((bool_t) 1);
								}
						}
				}
			}
		}
	}



/* rem*! */
	obj_t BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(obj_t BgL_nodeza2za2_72,
		obj_t BgL_ownerz00_73, obj_t BgL_currentz00_74)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 364 */
			{
				obj_t BgL_nodeza2za2_1075;

				BgL_nodeza2za2_1075 = BgL_nodeza2za2_72;
			BgL_zc3anonymousza33787ze3z83_1076:
				if (NULLP(BgL_nodeza2za2_1075))
					{	/* Globalize/new_body.scm 366 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/new_body.scm 366 */
						{	/* Globalize/new_body.scm 369 */
							BgL_nodez00_bglt BgL_arg3789z00_1078;

							{	/* Globalize/new_body.scm 369 */
								obj_t BgL_arg3790z00_1079;

								BgL_arg3790z00_1079 = CAR(BgL_nodeza2za2_1075);
								{	/* Globalize/new_body.scm 369 */
									BgL_nodez00_bglt BgL_res3969z00_1968;

									{	/* Globalize/new_body.scm 369 */
										BgL_nodez00_bglt BgL_nodez00_1940;

										BgL_nodez00_1940 = (BgL_nodez00_bglt) (BgL_arg3790z00_1079);
										{	/* Globalize/new_body.scm 369 */
											obj_t BgL_method3687z00_1943;

											{	/* Globalize/new_body.scm 369 */
												BgL_objectz00_bglt BgL_objz00_1944;

												BgL_objz00_1944 =
													(BgL_objectz00_bglt) (BgL_nodez00_1940);
												{	/* Globalize/new_body.scm 369 */
													long BgL_objzd2classzd2numz00_1945;

													BgL_objzd2classzd2numz00_1945 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1944);
													{	/* Globalize/new_body.scm 369 */
														obj_t BgL_arg2643z00_1946;

														BgL_arg2643z00_1946 =
															PROCEDURE_REF
															(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
															(int) (((long) 1)));
														{	/* Globalize/new_body.scm 369 */
															obj_t BgL_arrayz00_1948;

															int BgL_offsetz00_1949;

															BgL_arrayz00_1948 = BgL_arg2643z00_1946;
															BgL_offsetz00_1949 =
																(int) (BgL_objzd2classzd2numz00_1945);
															{	/* Globalize/new_body.scm 369 */
																long BgL_offsetz00_1950;

																BgL_offsetz00_1950 =
																	((long) (BgL_offsetz00_1949) - OBJECT_TYPE);
																{	/* Globalize/new_body.scm 369 */
																	long BgL_modz00_1951;

																	{	/* Globalize/new_body.scm 369 */
																		int BgL_arg2645z00_1952;

																		BgL_arg2645z00_1952 = (int) (((long) 16));
																		{	/* Globalize/new_body.scm 369 */
																			long BgL_auxz00_3299;

																			BgL_auxz00_3299 =
																				(long) (BgL_arg2645z00_1952);
																			BgL_modz00_1951 =
																				(BgL_offsetz00_1950 / BgL_auxz00_3299);
																	}}
																	{	/* Globalize/new_body.scm 369 */
																		long BgL_restz00_1953;

																		{	/* Globalize/new_body.scm 369 */
																			int BgL_arg2644z00_1954;

																			BgL_arg2644z00_1954 = (int) (((long) 16));
																			{	/* Globalize/new_body.scm 369 */
																				long BgL_auxz00_3303;

																				BgL_auxz00_3303 =
																					(long) (BgL_arg2644z00_1954);
																				BgL_restz00_1953 =
																					(BgL_offsetz00_1950 %
																					BgL_auxz00_3303);
																		}}
																		{	/* Globalize/new_body.scm 369 */

																			BgL_method3687z00_1943 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1948,
																					(int) (BgL_modz00_1951)),
																				(int) (BgL_restz00_1953));
											}}}}}}}}
											BgL_res3969z00_1968 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3687z00_1943) (BgL_method3687z00_1943,
													(obj_t) (BgL_nodez00_1940), BgL_ownerz00_73,
													BgL_currentz00_74, BEOA));
									}}
									BgL_arg3789z00_1078 = BgL_res3969z00_1968;
							}}
							{	/* Globalize/new_body.scm 369 */
								obj_t BgL_auxz00_3314;

								BgL_auxz00_3314 = (obj_t) (BgL_arg3789z00_1078);
								SET_CAR(BgL_nodeza2za2_1075, BgL_auxz00_3314);
						}}
						{
							obj_t BgL_nodeza2za2_3317;

							BgL_nodeza2za2_3317 = CDR(BgL_nodeza2za2_1075);
							BgL_nodeza2za2_1075 = BgL_nodeza2za2_3317;
							goto BgL_zc3anonymousza33787ze3z83_1076;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_remz12zd2default3686zd2envz12zzglobaliza7e_newzd2bodyz75,
				BGl_nodez00zzast_nodez00, BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
		}
	}



/* rem! */
	BgL_nodez00_bglt BGl_remz12z12zzglobaliza7e_newzd2bodyz75(BgL_nodez00_bglt
		BgL_nodez00_6, obj_t BgL_ownerz00_7, obj_t BgL_currentz00_8)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 145 */
			{	/* Globalize/new_body.scm 145 */
				obj_t BgL_method3687z00_1972;

				{	/* Globalize/new_body.scm 145 */
					BgL_objectz00_bglt BgL_objz00_1973;

					BgL_objz00_1973 = (BgL_objectz00_bglt) (BgL_nodez00_6);
					{	/* Globalize/new_body.scm 145 */
						long BgL_objzd2classzd2numz00_1974;

						BgL_objzd2classzd2numz00_1974 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1973);
						{	/* Globalize/new_body.scm 145 */
							obj_t BgL_arg2643z00_1975;

							BgL_arg2643z00_1975 =
								PROCEDURE_REF(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
								(int) (((long) 1)));
							{	/* Globalize/new_body.scm 145 */
								obj_t BgL_arrayz00_1977;

								int BgL_offsetz00_1978;

								BgL_arrayz00_1977 = BgL_arg2643z00_1975;
								BgL_offsetz00_1978 = (int) (BgL_objzd2classzd2numz00_1974);
								{	/* Globalize/new_body.scm 145 */
									long BgL_offsetz00_1979;

									BgL_offsetz00_1979 =
										((long) (BgL_offsetz00_1978) - OBJECT_TYPE);
									{	/* Globalize/new_body.scm 145 */
										long BgL_modz00_1980;

										{	/* Globalize/new_body.scm 145 */
											int BgL_arg2645z00_1981;

											BgL_arg2645z00_1981 = (int) (((long) 16));
											{	/* Globalize/new_body.scm 145 */
												long BgL_auxz00_3328;

												BgL_auxz00_3328 = (long) (BgL_arg2645z00_1981);
												BgL_modz00_1980 =
													(BgL_offsetz00_1979 / BgL_auxz00_3328);
										}}
										{	/* Globalize/new_body.scm 145 */
											long BgL_restz00_1982;

											{	/* Globalize/new_body.scm 145 */
												int BgL_arg2644z00_1983;

												BgL_arg2644z00_1983 = (int) (((long) 16));
												{	/* Globalize/new_body.scm 145 */
													long BgL_auxz00_3332;

													BgL_auxz00_3332 = (long) (BgL_arg2644z00_1983);
													BgL_restz00_1982 =
														(BgL_offsetz00_1979 % BgL_auxz00_3332);
											}}
											{	/* Globalize/new_body.scm 145 */

												BgL_method3687z00_1972 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1977,
														(int) (BgL_modz00_1980)), (int) (BgL_restz00_1982));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_1972)
					(BgL_method3687z00_1972, (obj_t) (BgL_nodez00_6), BgL_ownerz00_7,
						BgL_currentz00_8, BEOA));
			}
		}
	}



/* _rem! */
	obj_t BGl__remz12z12zzglobaliza7e_newzd2bodyz75(obj_t BgL_envz00_2832,
		obj_t BgL_nodez00_2833, obj_t BgL_ownerz00_2834, obj_t BgL_currentz00_2835)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 145 */
			return
				(obj_t) (BGl_remz12z12zzglobaliza7e_newzd2bodyz75(
					(BgL_nodez00_bglt) (BgL_nodez00_2833), BgL_ownerz00_2834,
					BgL_currentz00_2835));
		}
	}



/* rem!-default3686 */
	BgL_nodez00_bglt
		BGl_remz12zd2default3686zc0zzglobaliza7e_newzd2bodyz75(BgL_nodez00_bglt
		BgL_nodez00_9, obj_t BgL_ownerz00_10, obj_t BgL_currentz00_11)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string4045z00zzglobaliza7e_newzd2bodyz75,
					(obj_t) (BgL_nodez00_9)));
		}
	}



/* _rem!-default3686 */
	obj_t BGl__remz12zd2default3686zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2840, obj_t BgL_nodez00_2841, obj_t BgL_ownerz00_2842,
		obj_t BgL_currentz00_2843)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			return
				(obj_t) (BGl_remz12zd2default3686zc0zzglobaliza7e_newzd2bodyz75(
					(BgL_nodez00_bglt) (BgL_nodez00_2841), BgL_ownerz00_2842,
					BgL_currentz00_2843));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_newzd2bodyz75()
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_atomz00zzast_nodez00, BGl_proc4046z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_kwotez00zzast_nodez00, BGl_proc4047z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_varz00zzast_nodez00, BGl_proc4048z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_sequencez00zzast_nodez00,
				BGl_proc4049z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_appz00zzast_nodez00, BGl_proc4050z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4051z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_funcallz00zzast_nodez00, BGl_proc4052z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_externz00zzast_nodez00, BGl_proc4053z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_castz00zzast_nodez00, BGl_proc4054z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_setqz00zzast_nodez00, BGl_proc4055z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc4056z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_failz00zzast_nodez00, BGl_proc4057z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_selectz00zzast_nodez00, BGl_proc4058z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4059z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4060z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc4061z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4062z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4063z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4064z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc4065z00zzglobaliza7e_newzd2bodyz75,
				BGl_string4044z00zzglobaliza7e_newzd2bodyz75);
		}
	}



/* rem!-box-set!3730 */
	obj_t BGl_remz12zd2boxzd2setz123730z00zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2864, obj_t BgL_nodez00_2865, obj_t BgL_ownerz00_2866,
		obj_t BgL_currentz00_2867)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 355 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1749;

				obj_t BgL_ownerz00_1750;

				obj_t BgL_currentz00_1751;

				{	/* Globalize/new_body.scm 356 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3373;

					BgL_nodez00_1749 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2865);
					BgL_ownerz00_1750 = BgL_ownerz00_2866;
					BgL_currentz00_1751 = BgL_currentz00_2867;
					{	/* Globalize/new_body.scm 357 */
						BgL_nodez00_bglt BgL_arg3949z00_1755;

						{	/* Globalize/new_body.scm 357 */
							BgL_varz00_bglt BgL_arg3950z00_1756;

							BgL_arg3950z00_1756 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1749))->
								BgL_varz00);
							{	/* Globalize/new_body.scm 357 */
								BgL_nodez00_bglt BgL_res4040z00_2794;

								{	/* Globalize/new_body.scm 357 */
									BgL_nodez00_bglt BgL_nodez00_2766;

									BgL_nodez00_2766 = (BgL_nodez00_bglt) (BgL_arg3950z00_1756);
									{	/* Globalize/new_body.scm 357 */
										obj_t BgL_method3687z00_2769;

										{	/* Globalize/new_body.scm 357 */
											BgL_objectz00_bglt BgL_objz00_2770;

											BgL_objz00_2770 = (BgL_objectz00_bglt) (BgL_nodez00_2766);
											{	/* Globalize/new_body.scm 357 */
												long BgL_objzd2classzd2numz00_2771;

												BgL_objzd2classzd2numz00_2771 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2770);
												{	/* Globalize/new_body.scm 357 */
													obj_t BgL_arg2643z00_2772;

													BgL_arg2643z00_2772 =
														PROCEDURE_REF
														(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
														(int) (((long) 1)));
													{	/* Globalize/new_body.scm 357 */
														obj_t BgL_arrayz00_2774;

														int BgL_offsetz00_2775;

														BgL_arrayz00_2774 = BgL_arg2643z00_2772;
														BgL_offsetz00_2775 =
															(int) (BgL_objzd2classzd2numz00_2771);
														{	/* Globalize/new_body.scm 357 */
															long BgL_offsetz00_2776;

															BgL_offsetz00_2776 =
																((long) (BgL_offsetz00_2775) - OBJECT_TYPE);
															{	/* Globalize/new_body.scm 357 */
																long BgL_modz00_2777;

																{	/* Globalize/new_body.scm 357 */
																	int BgL_arg2645z00_2778;

																	BgL_arg2645z00_2778 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 357 */
																		long BgL_auxz00_3384;

																		BgL_auxz00_3384 =
																			(long) (BgL_arg2645z00_2778);
																		BgL_modz00_2777 =
																			(BgL_offsetz00_2776 / BgL_auxz00_3384);
																}}
																{	/* Globalize/new_body.scm 357 */
																	long BgL_restz00_2779;

																	{	/* Globalize/new_body.scm 357 */
																		int BgL_arg2644z00_2780;

																		BgL_arg2644z00_2780 = (int) (((long) 16));
																		{	/* Globalize/new_body.scm 357 */
																			long BgL_auxz00_3388;

																			BgL_auxz00_3388 =
																				(long) (BgL_arg2644z00_2780);
																			BgL_restz00_2779 =
																				(BgL_offsetz00_2776 % BgL_auxz00_3388);
																	}}
																	{	/* Globalize/new_body.scm 357 */

																		BgL_method3687z00_2769 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2774,
																				(int) (BgL_modz00_2777)),
																			(int) (BgL_restz00_2779));
										}}}}}}}}
										BgL_res4040z00_2794 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3687z00_2769) (BgL_method3687z00_2769,
												(obj_t) (BgL_nodez00_2766), BgL_ownerz00_1750,
												BgL_currentz00_1751, BEOA));
								}}
								BgL_arg3949z00_1755 = BgL_res4040z00_2794;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3399;

							BgL_auxz00_3399 = (BgL_varz00_bglt) (BgL_arg3949z00_1755);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1749))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3399), BUNSPEC);
					}}
					{	/* Globalize/new_body.scm 358 */
						BgL_nodez00_bglt BgL_arg3951z00_1757;

						{	/* Globalize/new_body.scm 358 */
							BgL_nodez00_bglt BgL_arg3953z00_1758;

							BgL_arg3953z00_1758 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1749))->
								BgL_valuez00);
							{	/* Globalize/new_body.scm 358 */
								BgL_nodez00_bglt BgL_res4043z00_2826;

								{	/* Globalize/new_body.scm 358 */
									obj_t BgL_method3687z00_2801;

									{	/* Globalize/new_body.scm 358 */
										BgL_objectz00_bglt BgL_objz00_2802;

										BgL_objz00_2802 =
											(BgL_objectz00_bglt) (BgL_arg3953z00_1758);
										{	/* Globalize/new_body.scm 358 */
											long BgL_objzd2classzd2numz00_2803;

											BgL_objzd2classzd2numz00_2803 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2802);
											{	/* Globalize/new_body.scm 358 */
												obj_t BgL_arg2643z00_2804;

												BgL_arg2643z00_2804 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 358 */
													obj_t BgL_arrayz00_2806;

													int BgL_offsetz00_2807;

													BgL_arrayz00_2806 = BgL_arg2643z00_2804;
													BgL_offsetz00_2807 =
														(int) (BgL_objzd2classzd2numz00_2803);
													{	/* Globalize/new_body.scm 358 */
														long BgL_offsetz00_2808;

														BgL_offsetz00_2808 =
															((long) (BgL_offsetz00_2807) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 358 */
															long BgL_modz00_2809;

															{	/* Globalize/new_body.scm 358 */
																int BgL_arg2645z00_2810;

																BgL_arg2645z00_2810 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 358 */
																	long BgL_auxz00_3411;

																	BgL_auxz00_3411 =
																		(long) (BgL_arg2645z00_2810);
																	BgL_modz00_2809 =
																		(BgL_offsetz00_2808 / BgL_auxz00_3411);
															}}
															{	/* Globalize/new_body.scm 358 */
																long BgL_restz00_2811;

																{	/* Globalize/new_body.scm 358 */
																	int BgL_arg2644z00_2812;

																	BgL_arg2644z00_2812 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 358 */
																		long BgL_auxz00_3415;

																		BgL_auxz00_3415 =
																			(long) (BgL_arg2644z00_2812);
																		BgL_restz00_2811 =
																			(BgL_offsetz00_2808 % BgL_auxz00_3415);
																}}
																{	/* Globalize/new_body.scm 358 */

																	BgL_method3687z00_2801 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2806,
																			(int) (BgL_modz00_2809)),
																		(int) (BgL_restz00_2811));
									}}}}}}}}
									BgL_res4043z00_2826 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2801)
										(BgL_method3687z00_2801, (obj_t) (BgL_arg3953z00_1758),
											BgL_ownerz00_1750, BgL_currentz00_1751, BEOA));
								}
								BgL_arg3951z00_1757 = BgL_res4043z00_2826;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1749))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3951z00_1757), BUNSPEC);
					}
					BgL_auxz00_3373 = BgL_nodez00_1749;
					return (obj_t) (BgL_auxz00_3373);
				}
			}
		}
	}



/* rem!-box-ref3728 */
	obj_t BGl_remz12zd2boxzd2ref3728z12zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2868, obj_t BgL_nodez00_2869, obj_t BgL_ownerz00_2870,
		obj_t BgL_currentz00_2871)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 347 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1739;

				obj_t BgL_ownerz00_1740;

				obj_t BgL_currentz00_1741;

				{	/* Globalize/new_body.scm 348 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3429;

					BgL_nodez00_1739 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2869);
					BgL_ownerz00_1740 = BgL_ownerz00_2870;
					BgL_currentz00_1741 = BgL_currentz00_2871;
					{	/* Globalize/new_body.scm 348 */
						BgL_nodez00_bglt BgL_arg3946z00_2731;

						{	/* Globalize/new_body.scm 348 */
							BgL_varz00_bglt BgL_arg3947z00_2732;

							BgL_arg3947z00_2732 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1739))->BgL_varz00);
							{	/* Globalize/new_body.scm 348 */
								BgL_nodez00_bglt BgL_res4037z00_2762;

								{	/* Globalize/new_body.scm 348 */
									BgL_nodez00_bglt BgL_nodez00_2734;

									BgL_nodez00_2734 = (BgL_nodez00_bglt) (BgL_arg3947z00_2732);
									{	/* Globalize/new_body.scm 348 */
										obj_t BgL_method3687z00_2737;

										{	/* Globalize/new_body.scm 348 */
											BgL_objectz00_bglt BgL_objz00_2738;

											BgL_objz00_2738 = (BgL_objectz00_bglt) (BgL_nodez00_2734);
											{	/* Globalize/new_body.scm 348 */
												long BgL_objzd2classzd2numz00_2739;

												BgL_objzd2classzd2numz00_2739 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2738);
												{	/* Globalize/new_body.scm 348 */
													obj_t BgL_arg2643z00_2740;

													BgL_arg2643z00_2740 =
														PROCEDURE_REF
														(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
														(int) (((long) 1)));
													{	/* Globalize/new_body.scm 348 */
														obj_t BgL_arrayz00_2742;

														int BgL_offsetz00_2743;

														BgL_arrayz00_2742 = BgL_arg2643z00_2740;
														BgL_offsetz00_2743 =
															(int) (BgL_objzd2classzd2numz00_2739);
														{	/* Globalize/new_body.scm 348 */
															long BgL_offsetz00_2744;

															BgL_offsetz00_2744 =
																((long) (BgL_offsetz00_2743) - OBJECT_TYPE);
															{	/* Globalize/new_body.scm 348 */
																long BgL_modz00_2745;

																{	/* Globalize/new_body.scm 348 */
																	int BgL_arg2645z00_2746;

																	BgL_arg2645z00_2746 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 348 */
																		long BgL_auxz00_3440;

																		BgL_auxz00_3440 =
																			(long) (BgL_arg2645z00_2746);
																		BgL_modz00_2745 =
																			(BgL_offsetz00_2744 / BgL_auxz00_3440);
																}}
																{	/* Globalize/new_body.scm 348 */
																	long BgL_restz00_2747;

																	{	/* Globalize/new_body.scm 348 */
																		int BgL_arg2644z00_2748;

																		BgL_arg2644z00_2748 = (int) (((long) 16));
																		{	/* Globalize/new_body.scm 348 */
																			long BgL_auxz00_3444;

																			BgL_auxz00_3444 =
																				(long) (BgL_arg2644z00_2748);
																			BgL_restz00_2747 =
																				(BgL_offsetz00_2744 % BgL_auxz00_3444);
																	}}
																	{	/* Globalize/new_body.scm 348 */

																		BgL_method3687z00_2737 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2742,
																				(int) (BgL_modz00_2745)),
																			(int) (BgL_restz00_2747));
										}}}}}}}}
										BgL_res4037z00_2762 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3687z00_2737) (BgL_method3687z00_2737,
												(obj_t) (BgL_nodez00_2734), BgL_ownerz00_1740,
												BgL_currentz00_1741, BEOA));
								}}
								BgL_arg3946z00_2731 = BgL_res4037z00_2762;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3455;

							BgL_auxz00_3455 = (BgL_varz00_bglt) (BgL_arg3946z00_2731);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1739))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3455), BUNSPEC);
					}}
					BgL_auxz00_3429 = BgL_nodez00_1739;
					return (obj_t) (BgL_auxz00_3429);
				}
			}
		}
	}



/* rem!-make-box3725 */
	obj_t BGl_remz12zd2makezd2box3725z12zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2872, obj_t BgL_nodez00_2873, obj_t BgL_ownerz00_2874,
		obj_t BgL_currentz00_2875)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 339 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1729;

				obj_t BgL_ownerz00_1730;

				obj_t BgL_currentz00_1731;

				{	/* Globalize/new_body.scm 340 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3460;

					BgL_nodez00_1729 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2873);
					BgL_ownerz00_1730 = BgL_ownerz00_2874;
					BgL_currentz00_1731 = BgL_currentz00_2875;
					{	/* Globalize/new_body.scm 340 */
						BgL_nodez00_bglt BgL_arg3943z00_2696;

						{	/* Globalize/new_body.scm 340 */
							BgL_nodez00_bglt BgL_arg3944z00_2697;

							BgL_arg3944z00_2697 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1729))->
								BgL_valuez00);
							{	/* Globalize/new_body.scm 340 */
								BgL_nodez00_bglt BgL_res4034z00_2727;

								{	/* Globalize/new_body.scm 340 */
									obj_t BgL_method3687z00_2702;

									{	/* Globalize/new_body.scm 340 */
										BgL_objectz00_bglt BgL_objz00_2703;

										BgL_objz00_2703 =
											(BgL_objectz00_bglt) (BgL_arg3944z00_2697);
										{	/* Globalize/new_body.scm 340 */
											long BgL_objzd2classzd2numz00_2704;

											BgL_objzd2classzd2numz00_2704 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2703);
											{	/* Globalize/new_body.scm 340 */
												obj_t BgL_arg2643z00_2705;

												BgL_arg2643z00_2705 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 340 */
													obj_t BgL_arrayz00_2707;

													int BgL_offsetz00_2708;

													BgL_arrayz00_2707 = BgL_arg2643z00_2705;
													BgL_offsetz00_2708 =
														(int) (BgL_objzd2classzd2numz00_2704);
													{	/* Globalize/new_body.scm 340 */
														long BgL_offsetz00_2709;

														BgL_offsetz00_2709 =
															((long) (BgL_offsetz00_2708) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 340 */
															long BgL_modz00_2710;

															{	/* Globalize/new_body.scm 340 */
																int BgL_arg2645z00_2711;

																BgL_arg2645z00_2711 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 340 */
																	long BgL_auxz00_3470;

																	BgL_auxz00_3470 =
																		(long) (BgL_arg2645z00_2711);
																	BgL_modz00_2710 =
																		(BgL_offsetz00_2709 / BgL_auxz00_3470);
															}}
															{	/* Globalize/new_body.scm 340 */
																long BgL_restz00_2712;

																{	/* Globalize/new_body.scm 340 */
																	int BgL_arg2644z00_2713;

																	BgL_arg2644z00_2713 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 340 */
																		long BgL_auxz00_3474;

																		BgL_auxz00_3474 =
																			(long) (BgL_arg2644z00_2713);
																		BgL_restz00_2712 =
																			(BgL_offsetz00_2709 % BgL_auxz00_3474);
																}}
																{	/* Globalize/new_body.scm 340 */

																	BgL_method3687z00_2702 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2707,
																			(int) (BgL_modz00_2710)),
																		(int) (BgL_restz00_2712));
									}}}}}}}}
									BgL_res4034z00_2727 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2702)
										(BgL_method3687z00_2702, (obj_t) (BgL_arg3944z00_2697),
											BgL_ownerz00_1730, BgL_currentz00_1731, BEOA));
								}
								BgL_arg3943z00_2696 = BgL_res4034z00_2727;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1729))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3943z00_2696), BUNSPEC);
					}
					BgL_auxz00_3460 = BgL_nodez00_1729;
					return (obj_t) (BgL_auxz00_3460);
				}
			}
		}
	}



/* rem!-jump-ex-it3723 */
	obj_t BGl_remz12zd2jumpzd2exzd2it3723zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2876, obj_t BgL_nodez00_2877, obj_t BgL_ownerz00_2878,
		obj_t BgL_currentz00_2879)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 330 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1717;

				obj_t BgL_ownerz00_1718;

				obj_t BgL_currentz00_1719;

				{	/* Globalize/new_body.scm 331 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3488;

					BgL_nodez00_1717 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2877);
					BgL_ownerz00_1718 = BgL_ownerz00_2878;
					BgL_currentz00_1719 = BgL_currentz00_2879;
					{	/* Globalize/new_body.scm 332 */
						BgL_nodez00_bglt BgL_arg3938z00_1723;

						{	/* Globalize/new_body.scm 332 */
							BgL_nodez00_bglt BgL_arg3939z00_1724;

							BgL_arg3939z00_1724 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1717))->
								BgL_exitz00);
							{	/* Globalize/new_body.scm 332 */
								BgL_nodez00_bglt BgL_res4028z00_2660;

								{	/* Globalize/new_body.scm 332 */
									obj_t BgL_method3687z00_2635;

									{	/* Globalize/new_body.scm 332 */
										BgL_objectz00_bglt BgL_objz00_2636;

										BgL_objz00_2636 =
											(BgL_objectz00_bglt) (BgL_arg3939z00_1724);
										{	/* Globalize/new_body.scm 332 */
											long BgL_objzd2classzd2numz00_2637;

											BgL_objzd2classzd2numz00_2637 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2636);
											{	/* Globalize/new_body.scm 332 */
												obj_t BgL_arg2643z00_2638;

												BgL_arg2643z00_2638 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 332 */
													obj_t BgL_arrayz00_2640;

													int BgL_offsetz00_2641;

													BgL_arrayz00_2640 = BgL_arg2643z00_2638;
													BgL_offsetz00_2641 =
														(int) (BgL_objzd2classzd2numz00_2637);
													{	/* Globalize/new_body.scm 332 */
														long BgL_offsetz00_2642;

														BgL_offsetz00_2642 =
															((long) (BgL_offsetz00_2641) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 332 */
															long BgL_modz00_2643;

															{	/* Globalize/new_body.scm 332 */
																int BgL_arg2645z00_2644;

																BgL_arg2645z00_2644 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 332 */
																	long BgL_auxz00_3498;

																	BgL_auxz00_3498 =
																		(long) (BgL_arg2645z00_2644);
																	BgL_modz00_2643 =
																		(BgL_offsetz00_2642 / BgL_auxz00_3498);
															}}
															{	/* Globalize/new_body.scm 332 */
																long BgL_restz00_2645;

																{	/* Globalize/new_body.scm 332 */
																	int BgL_arg2644z00_2646;

																	BgL_arg2644z00_2646 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 332 */
																		long BgL_auxz00_3502;

																		BgL_auxz00_3502 =
																			(long) (BgL_arg2644z00_2646);
																		BgL_restz00_2645 =
																			(BgL_offsetz00_2642 % BgL_auxz00_3502);
																}}
																{	/* Globalize/new_body.scm 332 */

																	BgL_method3687z00_2635 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2640,
																			(int) (BgL_modz00_2643)),
																		(int) (BgL_restz00_2645));
									}}}}}}}}
									BgL_res4028z00_2660 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2635)
										(BgL_method3687z00_2635, (obj_t) (BgL_arg3939z00_1724),
											BgL_ownerz00_1718, BgL_currentz00_1719, BEOA));
								}
								BgL_arg3938z00_1723 = BgL_res4028z00_2660;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1717))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3938z00_1723), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 333 */
						BgL_nodez00_bglt BgL_arg3940z00_1725;

						{	/* Globalize/new_body.scm 333 */
							BgL_nodez00_bglt BgL_arg3941z00_1726;

							BgL_arg3941z00_1726 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1717))->
								BgL_valuez00);
							{	/* Globalize/new_body.scm 333 */
								BgL_nodez00_bglt BgL_res4031z00_2692;

								{	/* Globalize/new_body.scm 333 */
									obj_t BgL_method3687z00_2667;

									{	/* Globalize/new_body.scm 333 */
										BgL_objectz00_bglt BgL_objz00_2668;

										BgL_objz00_2668 =
											(BgL_objectz00_bglt) (BgL_arg3941z00_1726);
										{	/* Globalize/new_body.scm 333 */
											long BgL_objzd2classzd2numz00_2669;

											BgL_objzd2classzd2numz00_2669 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2668);
											{	/* Globalize/new_body.scm 333 */
												obj_t BgL_arg2643z00_2670;

												BgL_arg2643z00_2670 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 333 */
													obj_t BgL_arrayz00_2672;

													int BgL_offsetz00_2673;

													BgL_arrayz00_2672 = BgL_arg2643z00_2670;
													BgL_offsetz00_2673 =
														(int) (BgL_objzd2classzd2numz00_2669);
													{	/* Globalize/new_body.scm 333 */
														long BgL_offsetz00_2674;

														BgL_offsetz00_2674 =
															((long) (BgL_offsetz00_2673) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 333 */
															long BgL_modz00_2675;

															{	/* Globalize/new_body.scm 333 */
																int BgL_arg2645z00_2676;

																BgL_arg2645z00_2676 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 333 */
																	long BgL_auxz00_3523;

																	BgL_auxz00_3523 =
																		(long) (BgL_arg2645z00_2676);
																	BgL_modz00_2675 =
																		(BgL_offsetz00_2674 / BgL_auxz00_3523);
															}}
															{	/* Globalize/new_body.scm 333 */
																long BgL_restz00_2677;

																{	/* Globalize/new_body.scm 333 */
																	int BgL_arg2644z00_2678;

																	BgL_arg2644z00_2678 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 333 */
																		long BgL_auxz00_3527;

																		BgL_auxz00_3527 =
																			(long) (BgL_arg2644z00_2678);
																		BgL_restz00_2677 =
																			(BgL_offsetz00_2674 % BgL_auxz00_3527);
																}}
																{	/* Globalize/new_body.scm 333 */

																	BgL_method3687z00_2667 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2672,
																			(int) (BgL_modz00_2675)),
																		(int) (BgL_restz00_2677));
									}}}}}}}}
									BgL_res4031z00_2692 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2667)
										(BgL_method3687z00_2667, (obj_t) (BgL_arg3941z00_1726),
											BgL_ownerz00_1718, BgL_currentz00_1719, BEOA));
								}
								BgL_arg3940z00_1725 = BgL_res4031z00_2692;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1717))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3940z00_1725), BUNSPEC);
					}
					BgL_auxz00_3488 = BgL_nodez00_1717;
					return (obj_t) (BgL_auxz00_3488);
				}
			}
		}
	}



/* rem!-set-ex-it3721 */
	obj_t BGl_remz12zd2setzd2exzd2it3721zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2880, obj_t BgL_nodez00_2881, obj_t BgL_ownerz00_2882,
		obj_t BgL_currentz00_2883)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 322 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1707;

				obj_t BgL_ownerz00_1708;

				obj_t BgL_currentz00_1709;

				{	/* Globalize/new_body.scm 323 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3541;

					BgL_nodez00_1707 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2881);
					BgL_ownerz00_1708 = BgL_ownerz00_2882;
					BgL_currentz00_1709 = BgL_currentz00_2883;
					{	/* Globalize/new_body.scm 323 */
						BgL_nodez00_bglt BgL_arg3935z00_2597;

						{	/* Globalize/new_body.scm 323 */
							BgL_nodez00_bglt BgL_arg3936z00_2598;

							BgL_arg3936z00_2598 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1707))->
								BgL_bodyz00);
							{	/* Globalize/new_body.scm 323 */
								BgL_nodez00_bglt BgL_res4025z00_2628;

								{	/* Globalize/new_body.scm 323 */
									obj_t BgL_method3687z00_2603;

									{	/* Globalize/new_body.scm 323 */
										BgL_objectz00_bglt BgL_objz00_2604;

										BgL_objz00_2604 =
											(BgL_objectz00_bglt) (BgL_arg3936z00_2598);
										{	/* Globalize/new_body.scm 323 */
											long BgL_objzd2classzd2numz00_2605;

											BgL_objzd2classzd2numz00_2605 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2604);
											{	/* Globalize/new_body.scm 323 */
												obj_t BgL_arg2643z00_2606;

												BgL_arg2643z00_2606 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 323 */
													obj_t BgL_arrayz00_2608;

													int BgL_offsetz00_2609;

													BgL_arrayz00_2608 = BgL_arg2643z00_2606;
													BgL_offsetz00_2609 =
														(int) (BgL_objzd2classzd2numz00_2605);
													{	/* Globalize/new_body.scm 323 */
														long BgL_offsetz00_2610;

														BgL_offsetz00_2610 =
															((long) (BgL_offsetz00_2609) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 323 */
															long BgL_modz00_2611;

															{	/* Globalize/new_body.scm 323 */
																int BgL_arg2645z00_2612;

																BgL_arg2645z00_2612 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 323 */
																	long BgL_auxz00_3551;

																	BgL_auxz00_3551 =
																		(long) (BgL_arg2645z00_2612);
																	BgL_modz00_2611 =
																		(BgL_offsetz00_2610 / BgL_auxz00_3551);
															}}
															{	/* Globalize/new_body.scm 323 */
																long BgL_restz00_2613;

																{	/* Globalize/new_body.scm 323 */
																	int BgL_arg2644z00_2614;

																	BgL_arg2644z00_2614 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 323 */
																		long BgL_auxz00_3555;

																		BgL_auxz00_3555 =
																			(long) (BgL_arg2644z00_2614);
																		BgL_restz00_2613 =
																			(BgL_offsetz00_2610 % BgL_auxz00_3555);
																}}
																{	/* Globalize/new_body.scm 323 */

																	BgL_method3687z00_2603 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2608,
																			(int) (BgL_modz00_2611)),
																		(int) (BgL_restz00_2613));
									}}}}}}}}
									BgL_res4025z00_2628 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2603)
										(BgL_method3687z00_2603, (obj_t) (BgL_arg3936z00_2598),
											BgL_ownerz00_1708, BgL_currentz00_1709, BEOA));
								}
								BgL_arg3935z00_2597 = BgL_res4025z00_2628;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1707))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3935z00_2597), BUNSPEC);
					}
					BgL_auxz00_3541 = BgL_nodez00_1707;
					return (obj_t) (BgL_auxz00_3541);
				}
			}
		}
	}



/* rem!-let-var3719 */
	obj_t BGl_remz12zd2letzd2var3719z12zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2884, obj_t BgL_nodez00_2885, obj_t BgL_ownerz00_2886,
		obj_t BgL_currentz00_2887)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 311 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1687;

				obj_t BgL_ownerz00_1688;

				obj_t BgL_currentz00_1689;

				{	/* Globalize/new_body.scm 312 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3569;

					BgL_nodez00_1687 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2885);
					BgL_ownerz00_1688 = BgL_ownerz00_2886;
					BgL_currentz00_1689 = BgL_currentz00_2887;
					{	/* Globalize/new_body.scm 313 */
						BgL_nodez00_bglt BgL_arg3927z00_1693;

						{	/* Globalize/new_body.scm 313 */
							BgL_nodez00_bglt BgL_arg3928z00_1694;

							BgL_arg3928z00_1694 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1687))->BgL_bodyz00);
							{	/* Globalize/new_body.scm 313 */
								BgL_nodez00_bglt BgL_res4019z00_2557;

								{	/* Globalize/new_body.scm 313 */
									obj_t BgL_method3687z00_2532;

									{	/* Globalize/new_body.scm 313 */
										BgL_objectz00_bglt BgL_objz00_2533;

										BgL_objz00_2533 =
											(BgL_objectz00_bglt) (BgL_arg3928z00_1694);
										{	/* Globalize/new_body.scm 313 */
											long BgL_objzd2classzd2numz00_2534;

											BgL_objzd2classzd2numz00_2534 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2533);
											{	/* Globalize/new_body.scm 313 */
												obj_t BgL_arg2643z00_2535;

												BgL_arg2643z00_2535 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 313 */
													obj_t BgL_arrayz00_2537;

													int BgL_offsetz00_2538;

													BgL_arrayz00_2537 = BgL_arg2643z00_2535;
													BgL_offsetz00_2538 =
														(int) (BgL_objzd2classzd2numz00_2534);
													{	/* Globalize/new_body.scm 313 */
														long BgL_offsetz00_2539;

														BgL_offsetz00_2539 =
															((long) (BgL_offsetz00_2538) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 313 */
															long BgL_modz00_2540;

															{	/* Globalize/new_body.scm 313 */
																int BgL_arg2645z00_2541;

																BgL_arg2645z00_2541 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 313 */
																	long BgL_auxz00_3579;

																	BgL_auxz00_3579 =
																		(long) (BgL_arg2645z00_2541);
																	BgL_modz00_2540 =
																		(BgL_offsetz00_2539 / BgL_auxz00_3579);
															}}
															{	/* Globalize/new_body.scm 313 */
																long BgL_restz00_2542;

																{	/* Globalize/new_body.scm 313 */
																	int BgL_arg2644z00_2543;

																	BgL_arg2644z00_2543 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 313 */
																		long BgL_auxz00_3583;

																		BgL_auxz00_3583 =
																			(long) (BgL_arg2644z00_2543);
																		BgL_restz00_2542 =
																			(BgL_offsetz00_2539 % BgL_auxz00_3583);
																}}
																{	/* Globalize/new_body.scm 313 */

																	BgL_method3687z00_2532 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2537,
																			(int) (BgL_modz00_2540)),
																		(int) (BgL_restz00_2542));
									}}}}}}}}
									BgL_res4019z00_2557 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2532)
										(BgL_method3687z00_2532, (obj_t) (BgL_arg3928z00_1694),
											BgL_ownerz00_1688, BgL_currentz00_1689, BEOA));
								}
								BgL_arg3927z00_1693 = BgL_res4019z00_2557;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1687))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3927z00_1693), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 314 */
						obj_t BgL_g3685z00_1695;

						BgL_g3685z00_1695 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1687))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3683z00_1697;

							BgL_l3683z00_1697 = BgL_g3685z00_1695;
						BgL_zc3anonymousza33929ze3z83_1698:
							if (PAIRP(BgL_l3683z00_1697))
								{	/* Globalize/new_body.scm 314 */
									{	/* Globalize/new_body.scm 315 */
										obj_t BgL_bindingz00_1700;

										BgL_bindingz00_1700 = CAR(BgL_l3683z00_1697);
										{	/* Globalize/new_body.scm 315 */
											BgL_nodez00_bglt BgL_arg3931z00_1701;

											{	/* Globalize/new_body.scm 315 */
												obj_t BgL_arg3932z00_1702;

												BgL_arg3932z00_1702 = CDR(BgL_bindingz00_1700);
												{	/* Globalize/new_body.scm 315 */
													BgL_nodez00_bglt BgL_res4022z00_2592;

													{	/* Globalize/new_body.scm 315 */
														BgL_nodez00_bglt BgL_nodez00_2564;

														BgL_nodez00_2564 =
															(BgL_nodez00_bglt) (BgL_arg3932z00_1702);
														{	/* Globalize/new_body.scm 315 */
															obj_t BgL_method3687z00_2567;

															{	/* Globalize/new_body.scm 315 */
																BgL_objectz00_bglt BgL_objz00_2568;

																BgL_objz00_2568 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2564);
																{	/* Globalize/new_body.scm 315 */
																	long BgL_objzd2classzd2numz00_2569;

																	BgL_objzd2classzd2numz00_2569 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2568);
																	{	/* Globalize/new_body.scm 315 */
																		obj_t BgL_arg2643z00_2570;

																		BgL_arg2643z00_2570 =
																			PROCEDURE_REF
																			(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
																			(int) (((long) 1)));
																		{	/* Globalize/new_body.scm 315 */
																			obj_t BgL_arrayz00_2572;

																			int BgL_offsetz00_2573;

																			BgL_arrayz00_2572 = BgL_arg2643z00_2570;
																			BgL_offsetz00_2573 =
																				(int) (BgL_objzd2classzd2numz00_2569);
																			{	/* Globalize/new_body.scm 315 */
																				long BgL_offsetz00_2574;

																				BgL_offsetz00_2574 =
																					(
																					(long) (BgL_offsetz00_2573) -
																					OBJECT_TYPE);
																				{	/* Globalize/new_body.scm 315 */
																					long BgL_modz00_2575;

																					{	/* Globalize/new_body.scm 315 */
																						int BgL_arg2645z00_2576;

																						BgL_arg2645z00_2576 =
																							(int) (((long) 16));
																						{	/* Globalize/new_body.scm 315 */
																							long BgL_auxz00_3609;

																							BgL_auxz00_3609 =
																								(long) (BgL_arg2645z00_2576);
																							BgL_modz00_2575 =
																								(BgL_offsetz00_2574 /
																								BgL_auxz00_3609);
																					}}
																					{	/* Globalize/new_body.scm 315 */
																						long BgL_restz00_2577;

																						{	/* Globalize/new_body.scm 315 */
																							int BgL_arg2644z00_2578;

																							BgL_arg2644z00_2578 =
																								(int) (((long) 16));
																							{	/* Globalize/new_body.scm 315 */
																								long BgL_auxz00_3613;

																								BgL_auxz00_3613 =
																									(long) (BgL_arg2644z00_2578);
																								BgL_restz00_2577 =
																									(BgL_offsetz00_2574 %
																									BgL_auxz00_3613);
																						}}
																						{	/* Globalize/new_body.scm 315 */

																							BgL_method3687z00_2567 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2572,
																									(int) (BgL_modz00_2575)),
																								(int) (BgL_restz00_2577));
															}}}}}}}}
															BgL_res4022z00_2592 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3687z00_2567)
																(BgL_method3687z00_2567,
																	(obj_t) (BgL_nodez00_2564), BgL_ownerz00_1688,
																	BgL_currentz00_1689, BEOA));
													}}
													BgL_arg3931z00_1701 = BgL_res4022z00_2592;
											}}
											{	/* Globalize/new_body.scm 315 */
												obj_t BgL_auxz00_3624;

												BgL_auxz00_3624 = (obj_t) (BgL_arg3931z00_1701);
												SET_CDR(BgL_bindingz00_1700, BgL_auxz00_3624);
									}}}
									{
										obj_t BgL_l3683z00_3627;

										BgL_l3683z00_3627 = CDR(BgL_l3683z00_1697);
										BgL_l3683z00_1697 = BgL_l3683z00_3627;
										goto BgL_zc3anonymousza33929ze3z83_1698;
									}
								}
							else
								{	/* Globalize/new_body.scm 314 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3569 = BgL_nodez00_1687;
					return (obj_t) (BgL_auxz00_3569);
				}
			}
		}
	}



/* rem!-let-fun3717 */
	obj_t BGl_remz12zd2letzd2fun3717z12zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2888, obj_t BgL_nodez00_2889, obj_t BgL_ownerz00_2890,
		obj_t BgL_currentz00_2891)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 257 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1637;

				obj_t BgL_ownerz00_1638;

				obj_t BgL_currentz00_1639;

				{	/* Globalize/new_body.scm 258 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3631;

					BgL_nodez00_1637 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2889);
					BgL_ownerz00_1638 = BgL_ownerz00_2890;
					BgL_currentz00_1639 = BgL_currentz00_2891;
					{	/* Globalize/new_body.scm 259 */
						BgL_nodez00_bglt BgL_arg3889z00_1643;

						{	/* Globalize/new_body.scm 259 */
							BgL_nodez00_bglt BgL_arg3890z00_1644;

							BgL_arg3890z00_1644 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1637))->BgL_bodyz00);
							{	/* Globalize/new_body.scm 259 */
								BgL_nodez00_bglt BgL_res4013z00_2459;

								{	/* Globalize/new_body.scm 259 */
									obj_t BgL_method3687z00_2434;

									{	/* Globalize/new_body.scm 259 */
										BgL_objectz00_bglt BgL_objz00_2435;

										BgL_objz00_2435 =
											(BgL_objectz00_bglt) (BgL_arg3890z00_1644);
										{	/* Globalize/new_body.scm 259 */
											long BgL_objzd2classzd2numz00_2436;

											BgL_objzd2classzd2numz00_2436 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2435);
											{	/* Globalize/new_body.scm 259 */
												obj_t BgL_arg2643z00_2437;

												BgL_arg2643z00_2437 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 259 */
													obj_t BgL_arrayz00_2439;

													int BgL_offsetz00_2440;

													BgL_arrayz00_2439 = BgL_arg2643z00_2437;
													BgL_offsetz00_2440 =
														(int) (BgL_objzd2classzd2numz00_2436);
													{	/* Globalize/new_body.scm 259 */
														long BgL_offsetz00_2441;

														BgL_offsetz00_2441 =
															((long) (BgL_offsetz00_2440) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 259 */
															long BgL_modz00_2442;

															{	/* Globalize/new_body.scm 259 */
																int BgL_arg2645z00_2443;

																BgL_arg2645z00_2443 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 259 */
																	long BgL_auxz00_3641;

																	BgL_auxz00_3641 =
																		(long) (BgL_arg2645z00_2443);
																	BgL_modz00_2442 =
																		(BgL_offsetz00_2441 / BgL_auxz00_3641);
															}}
															{	/* Globalize/new_body.scm 259 */
																long BgL_restz00_2444;

																{	/* Globalize/new_body.scm 259 */
																	int BgL_arg2644z00_2445;

																	BgL_arg2644z00_2445 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 259 */
																		long BgL_auxz00_3645;

																		BgL_auxz00_3645 =
																			(long) (BgL_arg2644z00_2445);
																		BgL_restz00_2444 =
																			(BgL_offsetz00_2441 % BgL_auxz00_3645);
																}}
																{	/* Globalize/new_body.scm 259 */

																	BgL_method3687z00_2434 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2439,
																			(int) (BgL_modz00_2442)),
																		(int) (BgL_restz00_2444));
									}}}}}}}}
									BgL_res4013z00_2459 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2434)
										(BgL_method3687z00_2434, (obj_t) (BgL_arg3890z00_1644),
											BgL_ownerz00_1638, BgL_currentz00_1639, BEOA));
								}
								BgL_arg3889z00_1643 = BgL_res4013z00_2459;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1637))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3889z00_1643), BUNSPEC);
					}
					{
						obj_t BgL_obindingsz00_1648;

						obj_t BgL_nbindingsz00_1649;

						{	/* Globalize/new_body.scm 260 */
							obj_t BgL_arg3891z00_1647;

							BgL_arg3891z00_1647 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1637))->
								BgL_localsz00);
							BgL_obindingsz00_1648 = BgL_arg3891z00_1647;
							BgL_nbindingsz00_1649 = BNIL;
						BgL_zc3anonymousza33892ze3z83_1650:
							if (NULLP(BgL_obindingsz00_1648))
								{	/* Globalize/new_body.scm 263 */
									((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1637))->
											BgL_localsz00) =
										((obj_t) BgL_nbindingsz00_1649), BUNSPEC);
									BgL_auxz00_3631 = BgL_nodez00_1637;
								}
							else
								{	/* Globalize/new_body.scm 266 */
									bool_t BgL_testz00_3661;

									{	/* Globalize/new_body.scm 266 */
										long BgL_arg3923z00_1681;

										{	/* Globalize/new_body.scm 266 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3373z00_2468;

											{	/* Globalize/new_body.scm 266 */
												BgL_valuez00_bglt BgL_auxz00_3662;

												{	/* Globalize/new_body.scm 266 */
													BgL_variablez00_bglt BgL_obj1611z00_2467;

													{	/* Globalize/new_body.scm 266 */
														obj_t BgL_pairz00_2466;

														BgL_pairz00_2466 = BgL_obindingsz00_1648;
														BgL_obj1611z00_2467 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_2466));
													}
													BgL_auxz00_3662 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1611z00_2467))->BgL_valuez00);
												}
												BgL_obj3373z00_2468 =
													(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_3662);
											}
											{
												obj_t BgL_auxz00_3667;

												{	/* Globalize/new_body.scm 266 */
													BgL_objectz00_bglt BgL_auxz00_3668;

													BgL_auxz00_3668 =
														(BgL_objectz00_bglt) (BgL_obj3373z00_2468);
													BgL_auxz00_3667 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3668);
												}
												BgL_arg3923z00_1681 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3667))->
													BgL_bmarkz00);
										}}
										BgL_testz00_3661 =
											(BgL_arg3923z00_1681 ==
											BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75);
									}
									if (BgL_testz00_3661)
										{	/* Globalize/new_body.scm 266 */
											{	/* Globalize/new_body.scm 273 */
												bool_t BgL_testz00_3673;

												{	/* Globalize/new_body.scm 273 */
													obj_t BgL_auxz00_3674;

													{	/* Globalize/new_body.scm 274 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3355z00_2473;

														{	/* Globalize/new_body.scm 274 */
															BgL_valuez00_bglt BgL_auxz00_3675;

															{	/* Globalize/new_body.scm 274 */
																BgL_variablez00_bglt BgL_obj1611z00_2472;

																{	/* Globalize/new_body.scm 274 */
																	obj_t BgL_pairz00_2471;

																	BgL_pairz00_2471 = BgL_obindingsz00_1648;
																	BgL_obj1611z00_2472 =
																		(BgL_variablez00_bglt) (CAR
																		(BgL_pairz00_2471));
																}
																BgL_auxz00_3675 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_2472))->BgL_valuez00);
															}
															BgL_obj3355z00_2473 =
																(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_3675);
														}
														{
															obj_t BgL_auxz00_3680;

															{	/* Globalize/new_body.scm 274 */
																BgL_objectz00_bglt BgL_auxz00_3681;

																BgL_auxz00_3681 =
																	(BgL_objectz00_bglt) (BgL_obj3355z00_2473);
																BgL_auxz00_3680 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_3681);
															}
															BgL_auxz00_3674 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_3680))->BgL_pluggedzd2inzd2);
														}
													}
													BgL_testz00_3673 =
														(BgL_currentz00_1639 == BgL_auxz00_3674);
												}
												if (BgL_testz00_3673)
													{	/* Globalize/new_body.scm 276 */
														obj_t BgL_arg3896z00_1654;

														obj_t BgL_arg3897z00_1655;

														BgL_arg3896z00_1654 = CDR(BgL_obindingsz00_1648);
														BgL_arg3897z00_1655 =
															MAKE_PAIR(CAR(BgL_obindingsz00_1648),
															BgL_nbindingsz00_1649);
														{
															obj_t BgL_nbindingsz00_3690;

															obj_t BgL_obindingsz00_3689;

															BgL_obindingsz00_3689 = BgL_arg3896z00_1654;
															BgL_nbindingsz00_3690 = BgL_arg3897z00_1655;
															BgL_nbindingsz00_1649 = BgL_nbindingsz00_3690;
															BgL_obindingsz00_1648 = BgL_obindingsz00_3689;
															goto BgL_zc3anonymousza33892ze3z83_1650;
														}
													}
												else
													{
														obj_t BgL_obindingsz00_3691;

														BgL_obindingsz00_3691 = CDR(BgL_obindingsz00_1648);
														BgL_obindingsz00_1648 = BgL_obindingsz00_3691;
														goto BgL_zc3anonymousza33892ze3z83_1650;
													}
											}
										}
									else
										{	/* Globalize/new_body.scm 266 */
											if (BGl_iszd2inzf3z21zzglobaliza7e_newzd2bodyz75(CAR
													(BgL_obindingsz00_1648), BgL_ownerz00_1638))
												{	/* Globalize/new_body.scm 280 */
													{	/* Globalize/new_body.scm 286 */
														BgL_valuez00_bglt BgL_arg3904z00_1662;

														{	/* Globalize/new_body.scm 286 */
															BgL_variablez00_bglt BgL_obj1611z00_2479;

															{	/* Globalize/new_body.scm 286 */
																obj_t BgL_pairz00_2478;

																BgL_pairz00_2478 = BgL_obindingsz00_1648;
																BgL_obj1611z00_2479 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_2478));
															}
															BgL_arg3904z00_1662 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_2479))->BgL_valuez00);
														}
														{	/* Globalize/new_body.scm 286 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3375z00_2480;

															long BgL_val3374z00_2481;

															BgL_obj3375z00_2480 =
																(BgL_sfunzf2ginfozf2_bglt)
																(BgL_arg3904z00_1662);
															BgL_val3374z00_2481 =
																BGl_za2roundza2z00zzglobaliza7e_newzd2bodyz75;
															{
																obj_t BgL_auxz00_3700;

																{	/* Globalize/new_body.scm 286 */
																	BgL_objectz00_bglt BgL_auxz00_3701;

																	BgL_auxz00_3701 =
																		(BgL_objectz00_bglt) (BgL_obj3375z00_2480);
																	BgL_auxz00_3700 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3701);
																}
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_3700))->BgL_bmarkz00) =
																	((long) BgL_val3374z00_2481), BUNSPEC);
													}}}
													{	/* Globalize/new_body.scm 288 */
														BgL_valuez00_bglt BgL_arg3906z00_1664;

														{	/* Globalize/new_body.scm 288 */
															BgL_variablez00_bglt BgL_obj1611z00_2483;

															{	/* Globalize/new_body.scm 288 */
																obj_t BgL_pairz00_2482;

																BgL_pairz00_2482 = BgL_obindingsz00_1648;
																BgL_obj1611z00_2483 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_2482));
															}
															BgL_arg3906z00_1664 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_2483))->BgL_valuez00);
														}
														{	/* Globalize/new_body.scm 288 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3357z00_2484;

															obj_t BgL_val3356z00_2485;

															BgL_obj3357z00_2484 =
																(BgL_sfunzf2ginfozf2_bglt)
																(BgL_arg3906z00_1664);
															BgL_val3356z00_2485 = BgL_currentz00_1639;
															{
																obj_t BgL_auxz00_3709;

																{	/* Globalize/new_body.scm 288 */
																	BgL_objectz00_bglt BgL_auxz00_3710;

																	BgL_auxz00_3710 =
																		(BgL_objectz00_bglt) (BgL_obj3357z00_2484);
																	BgL_auxz00_3709 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3710);
																}
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_3709))->
																		BgL_pluggedzd2inzd2) =
																	((obj_t) BgL_val3356z00_2485), BUNSPEC);
													}}}
													{	/* Globalize/new_body.scm 290 */
														BgL_valuez00_bglt BgL_funz00_1666;

														{	/* Globalize/new_body.scm 290 */
															BgL_variablez00_bglt BgL_obj1611z00_2487;

															{	/* Globalize/new_body.scm 290 */
																obj_t BgL_pairz00_2486;

																BgL_pairz00_2486 = BgL_obindingsz00_1648;
																BgL_obj1611z00_2487 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_2486));
															}
															BgL_funz00_1666 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_2487))->BgL_valuez00);
														}
														{	/* Globalize/new_body.scm 290 */
															obj_t BgL_bodz00_1667;

															{
																BgL_sfunz00_bglt BgL_auxz00_3717;

																BgL_auxz00_3717 =
																	(BgL_sfunz00_bglt) (BgL_funz00_1666);
																BgL_bodz00_1667 =
																	(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3717))->
																	BgL_bodyz00);
															}
															{	/* Globalize/new_body.scm 291 */

																{	/* Globalize/new_body.scm 292 */
																	BgL_nodez00_bglt BgL_arg3909z00_1668;

																	{	/* Globalize/new_body.scm 292 */
																		obj_t BgL_arg3910z00_1669;

																		BgL_arg3910z00_1669 =
																			CAR(BgL_obindingsz00_1648);
																		{	/* Globalize/new_body.scm 292 */
																			BgL_nodez00_bglt BgL_res4016z00_2518;

																			{	/* Globalize/new_body.scm 292 */
																				BgL_nodez00_bglt BgL_nodez00_2490;

																				BgL_nodez00_2490 =
																					(BgL_nodez00_bglt) (BgL_bodz00_1667);
																				{	/* Globalize/new_body.scm 292 */
																					obj_t BgL_method3687z00_2493;

																					{	/* Globalize/new_body.scm 292 */
																						BgL_objectz00_bglt BgL_objz00_2494;

																						BgL_objz00_2494 =
																							(BgL_objectz00_bglt)
																							(BgL_nodez00_2490);
																						{	/* Globalize/new_body.scm 292 */
																							long
																								BgL_objzd2classzd2numz00_2495;
																							BgL_objzd2classzd2numz00_2495 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_2494);
																							{	/* Globalize/new_body.scm 292 */
																								obj_t BgL_arg2643z00_2496;

																								BgL_arg2643z00_2496 =
																									PROCEDURE_REF
																									(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
																									(int) (((long) 1)));
																								{	/* Globalize/new_body.scm 292 */
																									obj_t BgL_arrayz00_2498;

																									int BgL_offsetz00_2499;

																									BgL_arrayz00_2498 =
																										BgL_arg2643z00_2496;
																									BgL_offsetz00_2499 =
																										(int)
																										(BgL_objzd2classzd2numz00_2495);
																									{	/* Globalize/new_body.scm 292 */
																										long BgL_offsetz00_2500;

																										BgL_offsetz00_2500 =
																											(
																											(long)
																											(BgL_offsetz00_2499) -
																											OBJECT_TYPE);
																										{	/* Globalize/new_body.scm 292 */
																											long BgL_modz00_2501;

																											{	/* Globalize/new_body.scm 292 */
																												int BgL_arg2645z00_2502;

																												BgL_arg2645z00_2502 =
																													(int) (((long) 16));
																												{	/* Globalize/new_body.scm 292 */
																													long BgL_auxz00_3730;

																													BgL_auxz00_3730 =
																														(long)
																														(BgL_arg2645z00_2502);
																													BgL_modz00_2501 =
																														(BgL_offsetz00_2500
																														/ BgL_auxz00_3730);
																											}}
																											{	/* Globalize/new_body.scm 292 */
																												long BgL_restz00_2503;

																												{	/* Globalize/new_body.scm 292 */
																													int
																														BgL_arg2644z00_2504;
																													BgL_arg2644z00_2504 =
																														(int) (((long) 16));
																													{	/* Globalize/new_body.scm 292 */
																														long
																															BgL_auxz00_3734;
																														BgL_auxz00_3734 =
																															(long)
																															(BgL_arg2644z00_2504);
																														BgL_restz00_2503 =
																															(BgL_offsetz00_2500
																															%
																															BgL_auxz00_3734);
																												}}
																												{	/* Globalize/new_body.scm 292 */

																													BgL_method3687z00_2493
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_2498,
																															(int)
																															(BgL_modz00_2501)),
																														(int)
																														(BgL_restz00_2503));
																					}}}}}}}}
																					BgL_res4016z00_2518 =
																						(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																						(BgL_method3687z00_2493)
																						(BgL_method3687z00_2493,
																							(obj_t) (BgL_nodez00_2490),
																							BgL_ownerz00_1638,
																							BgL_arg3910z00_1669, BEOA));
																			}}
																			BgL_arg3909z00_1668 = BgL_res4016z00_2518;
																	}}
																	{
																		obj_t BgL_auxz00_3747;

																		BgL_sfunz00_bglt BgL_auxz00_3745;

																		BgL_auxz00_3747 =
																			(obj_t) (BgL_arg3909z00_1668);
																		BgL_auxz00_3745 =
																			(BgL_sfunz00_bglt) (BgL_funz00_1666);
																		((((BgL_sfunz00_bglt)
																					CREF(BgL_auxz00_3745))->BgL_bodyz00) =
																			((obj_t) BgL_auxz00_3747), BUNSPEC);
																}}
																{	/* Globalize/new_body.scm 293 */
																	obj_t BgL_arg3911z00_1670;

																	obj_t BgL_arg3912z00_1671;

																	BgL_arg3911z00_1670 =
																		CDR(BgL_obindingsz00_1648);
																	BgL_arg3912z00_1671 =
																		MAKE_PAIR(CAR(BgL_obindingsz00_1648),
																		BgL_nbindingsz00_1649);
																	{
																		obj_t BgL_nbindingsz00_3754;

																		obj_t BgL_obindingsz00_3753;

																		BgL_obindingsz00_3753 = BgL_arg3911z00_1670;
																		BgL_nbindingsz00_3754 = BgL_arg3912z00_1671;
																		BgL_nbindingsz00_1649 =
																			BgL_nbindingsz00_3754;
																		BgL_obindingsz00_1648 =
																			BgL_obindingsz00_3753;
																		goto BgL_zc3anonymousza33892ze3z83_1650;
																	}
																}
															}
														}
													}
												}
											else
												{	/* Globalize/new_body.scm 295 */
													bool_t BgL_testz00_3755;

													{	/* Globalize/new_body.scm 295 */
														BgL_localzf2ginfozf2_bglt BgL_obj3520z00_2524;

														{	/* Globalize/new_body.scm 295 */
															obj_t BgL_pairz00_2523;

															BgL_pairz00_2523 = BgL_obindingsz00_1648;
															BgL_obj3520z00_2524 =
																(BgL_localzf2ginfozf2_bglt) (CAR
																(BgL_pairz00_2523));
														}
														{
															obj_t BgL_auxz00_3758;

															{	/* Globalize/new_body.scm 295 */
																BgL_objectz00_bglt BgL_auxz00_3759;

																BgL_auxz00_3759 =
																	(BgL_objectz00_bglt) (BgL_obj3520z00_2524);
																BgL_auxz00_3758 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_3759);
															}
															BgL_testz00_3755 =
																(((BgL_localzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_3758))->BgL_escapezf3zf3);
														}
													}
													if (BgL_testz00_3755)
														{	/* Globalize/new_body.scm 295 */
															{	/* Globalize/new_body.scm 299 */
																obj_t BgL_arg3916z00_1675;

																obj_t BgL_arg3917z00_1676;

																BgL_arg3916z00_1675 =
																	CDR(BgL_obindingsz00_1648);
																BgL_arg3917z00_1676 =
																	MAKE_PAIR(CAR(BgL_obindingsz00_1648),
																	BgL_nbindingsz00_1649);
																{
																	obj_t BgL_nbindingsz00_3767;

																	obj_t BgL_obindingsz00_3766;

																	BgL_obindingsz00_3766 = BgL_arg3916z00_1675;
																	BgL_nbindingsz00_3767 = BgL_arg3917z00_1676;
																	BgL_nbindingsz00_1649 = BgL_nbindingsz00_3767;
																	BgL_obindingsz00_1648 = BgL_obindingsz00_3766;
																	goto BgL_zc3anonymousza33892ze3z83_1650;
																}
															}
														}
													else
														{	/* Globalize/new_body.scm 295 */
															{
																obj_t BgL_obindingsz00_3768;

																BgL_obindingsz00_3768 =
																	CDR(BgL_obindingsz00_1648);
																BgL_obindingsz00_1648 = BgL_obindingsz00_3768;
																goto BgL_zc3anonymousza33892ze3z83_1650;
															}
														}
												}
										}
								}
						}
					}
					return (obj_t) (BgL_auxz00_3631);
				}
			}
		}
	}



/* rem!-select3714 */
	obj_t BGl_remz12zd2select3714zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2892, obj_t BgL_nodez00_2893, obj_t BgL_ownerz00_2894,
		obj_t BgL_currentz00_2895)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 246 */
			{
				BgL_selectz00_bglt BgL_nodez00_1617;

				obj_t BgL_ownerz00_1618;

				obj_t BgL_currentz00_1619;

				{	/* Globalize/new_body.scm 247 */
					BgL_selectz00_bglt BgL_auxz00_3772;

					BgL_nodez00_1617 = (BgL_selectz00_bglt) (BgL_nodez00_2893);
					BgL_ownerz00_1618 = BgL_ownerz00_2894;
					BgL_currentz00_1619 = BgL_currentz00_2895;
					{	/* Globalize/new_body.scm 248 */
						BgL_nodez00_bglt BgL_arg3881z00_1623;

						{	/* Globalize/new_body.scm 248 */
							BgL_nodez00_bglt BgL_arg3882z00_1624;

							BgL_arg3882z00_1624 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1617))->BgL_testz00);
							{	/* Globalize/new_body.scm 248 */
								BgL_nodez00_bglt BgL_res4007z00_2391;

								{	/* Globalize/new_body.scm 248 */
									obj_t BgL_method3687z00_2366;

									{	/* Globalize/new_body.scm 248 */
										BgL_objectz00_bglt BgL_objz00_2367;

										BgL_objz00_2367 =
											(BgL_objectz00_bglt) (BgL_arg3882z00_1624);
										{	/* Globalize/new_body.scm 248 */
											long BgL_objzd2classzd2numz00_2368;

											BgL_objzd2classzd2numz00_2368 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2367);
											{	/* Globalize/new_body.scm 248 */
												obj_t BgL_arg2643z00_2369;

												BgL_arg2643z00_2369 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 248 */
													obj_t BgL_arrayz00_2371;

													int BgL_offsetz00_2372;

													BgL_arrayz00_2371 = BgL_arg2643z00_2369;
													BgL_offsetz00_2372 =
														(int) (BgL_objzd2classzd2numz00_2368);
													{	/* Globalize/new_body.scm 248 */
														long BgL_offsetz00_2373;

														BgL_offsetz00_2373 =
															((long) (BgL_offsetz00_2372) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 248 */
															long BgL_modz00_2374;

															{	/* Globalize/new_body.scm 248 */
																int BgL_arg2645z00_2375;

																BgL_arg2645z00_2375 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 248 */
																	long BgL_auxz00_3782;

																	BgL_auxz00_3782 =
																		(long) (BgL_arg2645z00_2375);
																	BgL_modz00_2374 =
																		(BgL_offsetz00_2373 / BgL_auxz00_3782);
															}}
															{	/* Globalize/new_body.scm 248 */
																long BgL_restz00_2376;

																{	/* Globalize/new_body.scm 248 */
																	int BgL_arg2644z00_2377;

																	BgL_arg2644z00_2377 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 248 */
																		long BgL_auxz00_3786;

																		BgL_auxz00_3786 =
																			(long) (BgL_arg2644z00_2377);
																		BgL_restz00_2376 =
																			(BgL_offsetz00_2373 % BgL_auxz00_3786);
																}}
																{	/* Globalize/new_body.scm 248 */

																	BgL_method3687z00_2366 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2371,
																			(int) (BgL_modz00_2374)),
																		(int) (BgL_restz00_2376));
									}}}}}}}}
									BgL_res4007z00_2391 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2366)
										(BgL_method3687z00_2366, (obj_t) (BgL_arg3882z00_1624),
											BgL_ownerz00_1618, BgL_currentz00_1619, BEOA));
								}
								BgL_arg3881z00_1623 = BgL_res4007z00_2391;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1617))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3881z00_1623), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 249 */
						obj_t BgL_g3682z00_1625;

						BgL_g3682z00_1625 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1617))->BgL_clausesz00);
						{
							obj_t BgL_l3680z00_1627;

							BgL_l3680z00_1627 = BgL_g3682z00_1625;
						BgL_zc3anonymousza33883ze3z83_1628:
							if (PAIRP(BgL_l3680z00_1627))
								{	/* Globalize/new_body.scm 249 */
									{	/* Globalize/new_body.scm 250 */
										obj_t BgL_clausez00_1630;

										BgL_clausez00_1630 = CAR(BgL_l3680z00_1627);
										{	/* Globalize/new_body.scm 250 */
											BgL_nodez00_bglt BgL_arg3885z00_1631;

											{	/* Globalize/new_body.scm 250 */
												obj_t BgL_arg3886z00_1632;

												BgL_arg3886z00_1632 = CDR(BgL_clausez00_1630);
												{	/* Globalize/new_body.scm 250 */
													BgL_nodez00_bglt BgL_res4010z00_2426;

													{	/* Globalize/new_body.scm 250 */
														BgL_nodez00_bglt BgL_nodez00_2398;

														BgL_nodez00_2398 =
															(BgL_nodez00_bglt) (BgL_arg3886z00_1632);
														{	/* Globalize/new_body.scm 250 */
															obj_t BgL_method3687z00_2401;

															{	/* Globalize/new_body.scm 250 */
																BgL_objectz00_bglt BgL_objz00_2402;

																BgL_objz00_2402 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2398);
																{	/* Globalize/new_body.scm 250 */
																	long BgL_objzd2classzd2numz00_2403;

																	BgL_objzd2classzd2numz00_2403 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2402);
																	{	/* Globalize/new_body.scm 250 */
																		obj_t BgL_arg2643z00_2404;

																		BgL_arg2643z00_2404 =
																			PROCEDURE_REF
																			(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
																			(int) (((long) 1)));
																		{	/* Globalize/new_body.scm 250 */
																			obj_t BgL_arrayz00_2406;

																			int BgL_offsetz00_2407;

																			BgL_arrayz00_2406 = BgL_arg2643z00_2404;
																			BgL_offsetz00_2407 =
																				(int) (BgL_objzd2classzd2numz00_2403);
																			{	/* Globalize/new_body.scm 250 */
																				long BgL_offsetz00_2408;

																				BgL_offsetz00_2408 =
																					(
																					(long) (BgL_offsetz00_2407) -
																					OBJECT_TYPE);
																				{	/* Globalize/new_body.scm 250 */
																					long BgL_modz00_2409;

																					{	/* Globalize/new_body.scm 250 */
																						int BgL_arg2645z00_2410;

																						BgL_arg2645z00_2410 =
																							(int) (((long) 16));
																						{	/* Globalize/new_body.scm 250 */
																							long BgL_auxz00_3812;

																							BgL_auxz00_3812 =
																								(long) (BgL_arg2645z00_2410);
																							BgL_modz00_2409 =
																								(BgL_offsetz00_2408 /
																								BgL_auxz00_3812);
																					}}
																					{	/* Globalize/new_body.scm 250 */
																						long BgL_restz00_2411;

																						{	/* Globalize/new_body.scm 250 */
																							int BgL_arg2644z00_2412;

																							BgL_arg2644z00_2412 =
																								(int) (((long) 16));
																							{	/* Globalize/new_body.scm 250 */
																								long BgL_auxz00_3816;

																								BgL_auxz00_3816 =
																									(long) (BgL_arg2644z00_2412);
																								BgL_restz00_2411 =
																									(BgL_offsetz00_2408 %
																									BgL_auxz00_3816);
																						}}
																						{	/* Globalize/new_body.scm 250 */

																							BgL_method3687z00_2401 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2406,
																									(int) (BgL_modz00_2409)),
																								(int) (BgL_restz00_2411));
															}}}}}}}}
															BgL_res4010z00_2426 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3687z00_2401)
																(BgL_method3687z00_2401,
																	(obj_t) (BgL_nodez00_2398), BgL_ownerz00_1618,
																	BgL_currentz00_1619, BEOA));
													}}
													BgL_arg3885z00_1631 = BgL_res4010z00_2426;
											}}
											{	/* Globalize/new_body.scm 250 */
												obj_t BgL_auxz00_3827;

												BgL_auxz00_3827 = (obj_t) (BgL_arg3885z00_1631);
												SET_CDR(BgL_clausez00_1630, BgL_auxz00_3827);
									}}}
									{
										obj_t BgL_l3680z00_3830;

										BgL_l3680z00_3830 = CDR(BgL_l3680z00_1627);
										BgL_l3680z00_1627 = BgL_l3680z00_3830;
										goto BgL_zc3anonymousza33883ze3z83_1628;
									}
								}
							else
								{	/* Globalize/new_body.scm 249 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3772 = BgL_nodez00_1617;
					return (obj_t) (BgL_auxz00_3772);
				}
			}
		}
	}



/* rem!-fail3711 */
	obj_t BGl_remz12zd2fail3711zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2896, obj_t BgL_nodez00_2897, obj_t BgL_ownerz00_2898,
		obj_t BgL_currentz00_2899)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 236 */
			{
				BgL_failz00_bglt BgL_nodez00_1603;

				obj_t BgL_ownerz00_1604;

				obj_t BgL_currentz00_1605;

				{	/* Globalize/new_body.scm 237 */
					BgL_failz00_bglt BgL_auxz00_3834;

					BgL_nodez00_1603 = (BgL_failz00_bglt) (BgL_nodez00_2897);
					BgL_ownerz00_1604 = BgL_ownerz00_2898;
					BgL_currentz00_1605 = BgL_currentz00_2899;
					{	/* Globalize/new_body.scm 238 */
						BgL_nodez00_bglt BgL_arg3874z00_1609;

						{	/* Globalize/new_body.scm 238 */
							BgL_nodez00_bglt BgL_arg3875z00_1610;

							BgL_arg3875z00_1610 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1603))->BgL_procz00);
							{	/* Globalize/new_body.scm 238 */
								BgL_nodez00_bglt BgL_res3998z00_2295;

								{	/* Globalize/new_body.scm 238 */
									obj_t BgL_method3687z00_2270;

									{	/* Globalize/new_body.scm 238 */
										BgL_objectz00_bglt BgL_objz00_2271;

										BgL_objz00_2271 =
											(BgL_objectz00_bglt) (BgL_arg3875z00_1610);
										{	/* Globalize/new_body.scm 238 */
											long BgL_objzd2classzd2numz00_2272;

											BgL_objzd2classzd2numz00_2272 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2271);
											{	/* Globalize/new_body.scm 238 */
												obj_t BgL_arg2643z00_2273;

												BgL_arg2643z00_2273 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 238 */
													obj_t BgL_arrayz00_2275;

													int BgL_offsetz00_2276;

													BgL_arrayz00_2275 = BgL_arg2643z00_2273;
													BgL_offsetz00_2276 =
														(int) (BgL_objzd2classzd2numz00_2272);
													{	/* Globalize/new_body.scm 238 */
														long BgL_offsetz00_2277;

														BgL_offsetz00_2277 =
															((long) (BgL_offsetz00_2276) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 238 */
															long BgL_modz00_2278;

															{	/* Globalize/new_body.scm 238 */
																int BgL_arg2645z00_2279;

																BgL_arg2645z00_2279 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 238 */
																	long BgL_auxz00_3844;

																	BgL_auxz00_3844 =
																		(long) (BgL_arg2645z00_2279);
																	BgL_modz00_2278 =
																		(BgL_offsetz00_2277 / BgL_auxz00_3844);
															}}
															{	/* Globalize/new_body.scm 238 */
																long BgL_restz00_2280;

																{	/* Globalize/new_body.scm 238 */
																	int BgL_arg2644z00_2281;

																	BgL_arg2644z00_2281 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 238 */
																		long BgL_auxz00_3848;

																		BgL_auxz00_3848 =
																			(long) (BgL_arg2644z00_2281);
																		BgL_restz00_2280 =
																			(BgL_offsetz00_2277 % BgL_auxz00_3848);
																}}
																{	/* Globalize/new_body.scm 238 */

																	BgL_method3687z00_2270 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2275,
																			(int) (BgL_modz00_2278)),
																		(int) (BgL_restz00_2280));
									}}}}}}}}
									BgL_res3998z00_2295 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2270)
										(BgL_method3687z00_2270, (obj_t) (BgL_arg3875z00_1610),
											BgL_ownerz00_1604, BgL_currentz00_1605, BEOA));
								}
								BgL_arg3874z00_1609 = BgL_res3998z00_2295;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1603))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3874z00_1609), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 239 */
						BgL_nodez00_bglt BgL_arg3876z00_1611;

						{	/* Globalize/new_body.scm 239 */
							BgL_nodez00_bglt BgL_arg3877z00_1612;

							BgL_arg3877z00_1612 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1603))->BgL_msgz00);
							{	/* Globalize/new_body.scm 239 */
								BgL_nodez00_bglt BgL_res4001z00_2327;

								{	/* Globalize/new_body.scm 239 */
									obj_t BgL_method3687z00_2302;

									{	/* Globalize/new_body.scm 239 */
										BgL_objectz00_bglt BgL_objz00_2303;

										BgL_objz00_2303 =
											(BgL_objectz00_bglt) (BgL_arg3877z00_1612);
										{	/* Globalize/new_body.scm 239 */
											long BgL_objzd2classzd2numz00_2304;

											BgL_objzd2classzd2numz00_2304 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2303);
											{	/* Globalize/new_body.scm 239 */
												obj_t BgL_arg2643z00_2305;

												BgL_arg2643z00_2305 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 239 */
													obj_t BgL_arrayz00_2307;

													int BgL_offsetz00_2308;

													BgL_arrayz00_2307 = BgL_arg2643z00_2305;
													BgL_offsetz00_2308 =
														(int) (BgL_objzd2classzd2numz00_2304);
													{	/* Globalize/new_body.scm 239 */
														long BgL_offsetz00_2309;

														BgL_offsetz00_2309 =
															((long) (BgL_offsetz00_2308) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 239 */
															long BgL_modz00_2310;

															{	/* Globalize/new_body.scm 239 */
																int BgL_arg2645z00_2311;

																BgL_arg2645z00_2311 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 239 */
																	long BgL_auxz00_3869;

																	BgL_auxz00_3869 =
																		(long) (BgL_arg2645z00_2311);
																	BgL_modz00_2310 =
																		(BgL_offsetz00_2309 / BgL_auxz00_3869);
															}}
															{	/* Globalize/new_body.scm 239 */
																long BgL_restz00_2312;

																{	/* Globalize/new_body.scm 239 */
																	int BgL_arg2644z00_2313;

																	BgL_arg2644z00_2313 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 239 */
																		long BgL_auxz00_3873;

																		BgL_auxz00_3873 =
																			(long) (BgL_arg2644z00_2313);
																		BgL_restz00_2312 =
																			(BgL_offsetz00_2309 % BgL_auxz00_3873);
																}}
																{	/* Globalize/new_body.scm 239 */

																	BgL_method3687z00_2302 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2307,
																			(int) (BgL_modz00_2310)),
																		(int) (BgL_restz00_2312));
									}}}}}}}}
									BgL_res4001z00_2327 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2302)
										(BgL_method3687z00_2302, (obj_t) (BgL_arg3877z00_1612),
											BgL_ownerz00_1604, BgL_currentz00_1605, BEOA));
								}
								BgL_arg3876z00_1611 = BgL_res4001z00_2327;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1603))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3876z00_1611), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 240 */
						BgL_nodez00_bglt BgL_arg3878z00_1613;

						{	/* Globalize/new_body.scm 240 */
							BgL_nodez00_bglt BgL_arg3879z00_1614;

							BgL_arg3879z00_1614 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1603))->BgL_objz00);
							{	/* Globalize/new_body.scm 240 */
								BgL_nodez00_bglt BgL_res4004z00_2359;

								{	/* Globalize/new_body.scm 240 */
									obj_t BgL_method3687z00_2334;

									{	/* Globalize/new_body.scm 240 */
										BgL_objectz00_bglt BgL_objz00_2335;

										BgL_objz00_2335 =
											(BgL_objectz00_bglt) (BgL_arg3879z00_1614);
										{	/* Globalize/new_body.scm 240 */
											long BgL_objzd2classzd2numz00_2336;

											BgL_objzd2classzd2numz00_2336 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2335);
											{	/* Globalize/new_body.scm 240 */
												obj_t BgL_arg2643z00_2337;

												BgL_arg2643z00_2337 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 240 */
													obj_t BgL_arrayz00_2339;

													int BgL_offsetz00_2340;

													BgL_arrayz00_2339 = BgL_arg2643z00_2337;
													BgL_offsetz00_2340 =
														(int) (BgL_objzd2classzd2numz00_2336);
													{	/* Globalize/new_body.scm 240 */
														long BgL_offsetz00_2341;

														BgL_offsetz00_2341 =
															((long) (BgL_offsetz00_2340) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 240 */
															long BgL_modz00_2342;

															{	/* Globalize/new_body.scm 240 */
																int BgL_arg2645z00_2343;

																BgL_arg2645z00_2343 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 240 */
																	long BgL_auxz00_3894;

																	BgL_auxz00_3894 =
																		(long) (BgL_arg2645z00_2343);
																	BgL_modz00_2342 =
																		(BgL_offsetz00_2341 / BgL_auxz00_3894);
															}}
															{	/* Globalize/new_body.scm 240 */
																long BgL_restz00_2344;

																{	/* Globalize/new_body.scm 240 */
																	int BgL_arg2644z00_2345;

																	BgL_arg2644z00_2345 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 240 */
																		long BgL_auxz00_3898;

																		BgL_auxz00_3898 =
																			(long) (BgL_arg2644z00_2345);
																		BgL_restz00_2344 =
																			(BgL_offsetz00_2341 % BgL_auxz00_3898);
																}}
																{	/* Globalize/new_body.scm 240 */

																	BgL_method3687z00_2334 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2339,
																			(int) (BgL_modz00_2342)),
																		(int) (BgL_restz00_2344));
									}}}}}}}}
									BgL_res4004z00_2359 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2334)
										(BgL_method3687z00_2334, (obj_t) (BgL_arg3879z00_1614),
											BgL_ownerz00_1604, BgL_currentz00_1605, BEOA));
								}
								BgL_arg3878z00_1613 = BgL_res4004z00_2359;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1603))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3878z00_1613), BUNSPEC);
					}
					BgL_auxz00_3834 = BgL_nodez00_1603;
					return (obj_t) (BgL_auxz00_3834);
				}
			}
		}
	}



/* rem!-conditional3709 */
	obj_t BGl_remz12zd2conditional3709zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2900, obj_t BgL_nodez00_2901, obj_t BgL_ownerz00_2902,
		obj_t BgL_currentz00_2903)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 226 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1589;

				obj_t BgL_ownerz00_1590;

				obj_t BgL_currentz00_1591;

				{	/* Globalize/new_body.scm 227 */
					BgL_conditionalz00_bglt BgL_auxz00_3912;

					BgL_nodez00_1589 = (BgL_conditionalz00_bglt) (BgL_nodez00_2901);
					BgL_ownerz00_1590 = BgL_ownerz00_2902;
					BgL_currentz00_1591 = BgL_currentz00_2903;
					{	/* Globalize/new_body.scm 228 */
						BgL_nodez00_bglt BgL_arg3867z00_1595;

						{	/* Globalize/new_body.scm 228 */
							BgL_nodez00_bglt BgL_arg3868z00_1596;

							BgL_arg3868z00_1596 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1589))->
								BgL_testz00);
							{	/* Globalize/new_body.scm 228 */
								BgL_nodez00_bglt BgL_res3989z00_2199;

								{	/* Globalize/new_body.scm 228 */
									obj_t BgL_method3687z00_2174;

									{	/* Globalize/new_body.scm 228 */
										BgL_objectz00_bglt BgL_objz00_2175;

										BgL_objz00_2175 =
											(BgL_objectz00_bglt) (BgL_arg3868z00_1596);
										{	/* Globalize/new_body.scm 228 */
											long BgL_objzd2classzd2numz00_2176;

											BgL_objzd2classzd2numz00_2176 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2175);
											{	/* Globalize/new_body.scm 228 */
												obj_t BgL_arg2643z00_2177;

												BgL_arg2643z00_2177 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 228 */
													obj_t BgL_arrayz00_2179;

													int BgL_offsetz00_2180;

													BgL_arrayz00_2179 = BgL_arg2643z00_2177;
													BgL_offsetz00_2180 =
														(int) (BgL_objzd2classzd2numz00_2176);
													{	/* Globalize/new_body.scm 228 */
														long BgL_offsetz00_2181;

														BgL_offsetz00_2181 =
															((long) (BgL_offsetz00_2180) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 228 */
															long BgL_modz00_2182;

															{	/* Globalize/new_body.scm 228 */
																int BgL_arg2645z00_2183;

																BgL_arg2645z00_2183 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 228 */
																	long BgL_auxz00_3922;

																	BgL_auxz00_3922 =
																		(long) (BgL_arg2645z00_2183);
																	BgL_modz00_2182 =
																		(BgL_offsetz00_2181 / BgL_auxz00_3922);
															}}
															{	/* Globalize/new_body.scm 228 */
																long BgL_restz00_2184;

																{	/* Globalize/new_body.scm 228 */
																	int BgL_arg2644z00_2185;

																	BgL_arg2644z00_2185 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 228 */
																		long BgL_auxz00_3926;

																		BgL_auxz00_3926 =
																			(long) (BgL_arg2644z00_2185);
																		BgL_restz00_2184 =
																			(BgL_offsetz00_2181 % BgL_auxz00_3926);
																}}
																{	/* Globalize/new_body.scm 228 */

																	BgL_method3687z00_2174 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2179,
																			(int) (BgL_modz00_2182)),
																		(int) (BgL_restz00_2184));
									}}}}}}}}
									BgL_res3989z00_2199 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2174)
										(BgL_method3687z00_2174, (obj_t) (BgL_arg3868z00_1596),
											BgL_ownerz00_1590, BgL_currentz00_1591, BEOA));
								}
								BgL_arg3867z00_1595 = BgL_res3989z00_2199;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1589))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3867z00_1595), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 229 */
						BgL_nodez00_bglt BgL_arg3869z00_1597;

						{	/* Globalize/new_body.scm 229 */
							BgL_nodez00_bglt BgL_arg3870z00_1598;

							BgL_arg3870z00_1598 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1589))->
								BgL_truez00);
							{	/* Globalize/new_body.scm 229 */
								BgL_nodez00_bglt BgL_res3992z00_2231;

								{	/* Globalize/new_body.scm 229 */
									obj_t BgL_method3687z00_2206;

									{	/* Globalize/new_body.scm 229 */
										BgL_objectz00_bglt BgL_objz00_2207;

										BgL_objz00_2207 =
											(BgL_objectz00_bglt) (BgL_arg3870z00_1598);
										{	/* Globalize/new_body.scm 229 */
											long BgL_objzd2classzd2numz00_2208;

											BgL_objzd2classzd2numz00_2208 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2207);
											{	/* Globalize/new_body.scm 229 */
												obj_t BgL_arg2643z00_2209;

												BgL_arg2643z00_2209 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 229 */
													obj_t BgL_arrayz00_2211;

													int BgL_offsetz00_2212;

													BgL_arrayz00_2211 = BgL_arg2643z00_2209;
													BgL_offsetz00_2212 =
														(int) (BgL_objzd2classzd2numz00_2208);
													{	/* Globalize/new_body.scm 229 */
														long BgL_offsetz00_2213;

														BgL_offsetz00_2213 =
															((long) (BgL_offsetz00_2212) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 229 */
															long BgL_modz00_2214;

															{	/* Globalize/new_body.scm 229 */
																int BgL_arg2645z00_2215;

																BgL_arg2645z00_2215 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 229 */
																	long BgL_auxz00_3947;

																	BgL_auxz00_3947 =
																		(long) (BgL_arg2645z00_2215);
																	BgL_modz00_2214 =
																		(BgL_offsetz00_2213 / BgL_auxz00_3947);
															}}
															{	/* Globalize/new_body.scm 229 */
																long BgL_restz00_2216;

																{	/* Globalize/new_body.scm 229 */
																	int BgL_arg2644z00_2217;

																	BgL_arg2644z00_2217 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 229 */
																		long BgL_auxz00_3951;

																		BgL_auxz00_3951 =
																			(long) (BgL_arg2644z00_2217);
																		BgL_restz00_2216 =
																			(BgL_offsetz00_2213 % BgL_auxz00_3951);
																}}
																{	/* Globalize/new_body.scm 229 */

																	BgL_method3687z00_2206 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2211,
																			(int) (BgL_modz00_2214)),
																		(int) (BgL_restz00_2216));
									}}}}}}}}
									BgL_res3992z00_2231 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2206)
										(BgL_method3687z00_2206, (obj_t) (BgL_arg3870z00_1598),
											BgL_ownerz00_1590, BgL_currentz00_1591, BEOA));
								}
								BgL_arg3869z00_1597 = BgL_res3992z00_2231;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1589))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3869z00_1597), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 230 */
						BgL_nodez00_bglt BgL_arg3871z00_1599;

						{	/* Globalize/new_body.scm 230 */
							BgL_nodez00_bglt BgL_arg3872z00_1600;

							BgL_arg3872z00_1600 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1589))->
								BgL_falsez00);
							{	/* Globalize/new_body.scm 230 */
								BgL_nodez00_bglt BgL_res3995z00_2263;

								{	/* Globalize/new_body.scm 230 */
									obj_t BgL_method3687z00_2238;

									{	/* Globalize/new_body.scm 230 */
										BgL_objectz00_bglt BgL_objz00_2239;

										BgL_objz00_2239 =
											(BgL_objectz00_bglt) (BgL_arg3872z00_1600);
										{	/* Globalize/new_body.scm 230 */
											long BgL_objzd2classzd2numz00_2240;

											BgL_objzd2classzd2numz00_2240 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2239);
											{	/* Globalize/new_body.scm 230 */
												obj_t BgL_arg2643z00_2241;

												BgL_arg2643z00_2241 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 230 */
													obj_t BgL_arrayz00_2243;

													int BgL_offsetz00_2244;

													BgL_arrayz00_2243 = BgL_arg2643z00_2241;
													BgL_offsetz00_2244 =
														(int) (BgL_objzd2classzd2numz00_2240);
													{	/* Globalize/new_body.scm 230 */
														long BgL_offsetz00_2245;

														BgL_offsetz00_2245 =
															((long) (BgL_offsetz00_2244) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 230 */
															long BgL_modz00_2246;

															{	/* Globalize/new_body.scm 230 */
																int BgL_arg2645z00_2247;

																BgL_arg2645z00_2247 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 230 */
																	long BgL_auxz00_3972;

																	BgL_auxz00_3972 =
																		(long) (BgL_arg2645z00_2247);
																	BgL_modz00_2246 =
																		(BgL_offsetz00_2245 / BgL_auxz00_3972);
															}}
															{	/* Globalize/new_body.scm 230 */
																long BgL_restz00_2248;

																{	/* Globalize/new_body.scm 230 */
																	int BgL_arg2644z00_2249;

																	BgL_arg2644z00_2249 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 230 */
																		long BgL_auxz00_3976;

																		BgL_auxz00_3976 =
																			(long) (BgL_arg2644z00_2249);
																		BgL_restz00_2248 =
																			(BgL_offsetz00_2245 % BgL_auxz00_3976);
																}}
																{	/* Globalize/new_body.scm 230 */

																	BgL_method3687z00_2238 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2243,
																			(int) (BgL_modz00_2246)),
																		(int) (BgL_restz00_2248));
									}}}}}}}}
									BgL_res3995z00_2263 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2238)
										(BgL_method3687z00_2238, (obj_t) (BgL_arg3872z00_1600),
											BgL_ownerz00_1590, BgL_currentz00_1591, BEOA));
								}
								BgL_arg3871z00_1599 = BgL_res3995z00_2263;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1589))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3871z00_1599), BUNSPEC);
					}
					BgL_auxz00_3912 = BgL_nodez00_1589;
					return (obj_t) (BgL_auxz00_3912);
				}
			}
		}
	}



/* rem!-setq3707 */
	obj_t BGl_remz12zd2setq3707zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2904, obj_t BgL_nodez00_2905, obj_t BgL_ownerz00_2906,
		obj_t BgL_currentz00_2907)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 218 */
			{
				BgL_setqz00_bglt BgL_nodez00_1579;

				obj_t BgL_ownerz00_1580;

				obj_t BgL_currentz00_1581;

				{	/* Globalize/new_body.scm 219 */
					BgL_setqz00_bglt BgL_auxz00_3990;

					BgL_nodez00_1579 = (BgL_setqz00_bglt) (BgL_nodez00_2905);
					BgL_ownerz00_1580 = BgL_ownerz00_2906;
					BgL_currentz00_1581 = BgL_currentz00_2907;
					{	/* Globalize/new_body.scm 219 */
						BgL_nodez00_bglt BgL_arg3864z00_2136;

						{	/* Globalize/new_body.scm 219 */
							BgL_nodez00_bglt BgL_arg3865z00_2137;

							BgL_arg3865z00_2137 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1579))->BgL_valuez00);
							{	/* Globalize/new_body.scm 219 */
								BgL_nodez00_bglt BgL_res3986z00_2167;

								{	/* Globalize/new_body.scm 219 */
									obj_t BgL_method3687z00_2142;

									{	/* Globalize/new_body.scm 219 */
										BgL_objectz00_bglt BgL_objz00_2143;

										BgL_objz00_2143 =
											(BgL_objectz00_bglt) (BgL_arg3865z00_2137);
										{	/* Globalize/new_body.scm 219 */
											long BgL_objzd2classzd2numz00_2144;

											BgL_objzd2classzd2numz00_2144 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2143);
											{	/* Globalize/new_body.scm 219 */
												obj_t BgL_arg2643z00_2145;

												BgL_arg2643z00_2145 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 219 */
													obj_t BgL_arrayz00_2147;

													int BgL_offsetz00_2148;

													BgL_arrayz00_2147 = BgL_arg2643z00_2145;
													BgL_offsetz00_2148 =
														(int) (BgL_objzd2classzd2numz00_2144);
													{	/* Globalize/new_body.scm 219 */
														long BgL_offsetz00_2149;

														BgL_offsetz00_2149 =
															((long) (BgL_offsetz00_2148) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 219 */
															long BgL_modz00_2150;

															{	/* Globalize/new_body.scm 219 */
																int BgL_arg2645z00_2151;

																BgL_arg2645z00_2151 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 219 */
																	long BgL_auxz00_4000;

																	BgL_auxz00_4000 =
																		(long) (BgL_arg2645z00_2151);
																	BgL_modz00_2150 =
																		(BgL_offsetz00_2149 / BgL_auxz00_4000);
															}}
															{	/* Globalize/new_body.scm 219 */
																long BgL_restz00_2152;

																{	/* Globalize/new_body.scm 219 */
																	int BgL_arg2644z00_2153;

																	BgL_arg2644z00_2153 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 219 */
																		long BgL_auxz00_4004;

																		BgL_auxz00_4004 =
																			(long) (BgL_arg2644z00_2153);
																		BgL_restz00_2152 =
																			(BgL_offsetz00_2149 % BgL_auxz00_4004);
																}}
																{	/* Globalize/new_body.scm 219 */

																	BgL_method3687z00_2142 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2147,
																			(int) (BgL_modz00_2150)),
																		(int) (BgL_restz00_2152));
									}}}}}}}}
									BgL_res3986z00_2167 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2142)
										(BgL_method3687z00_2142, (obj_t) (BgL_arg3865z00_2137),
											BgL_ownerz00_1580, BgL_currentz00_1581, BEOA));
								}
								BgL_arg3864z00_2136 = BgL_res3986z00_2167;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1579))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3864z00_2136), BUNSPEC);
					}
					BgL_auxz00_3990 = BgL_nodez00_1579;
					return (obj_t) (BgL_auxz00_3990);
				}
			}
		}
	}



/* rem!-cast3705 */
	obj_t BGl_remz12zd2cast3705zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2908, obj_t BgL_nodez00_2909, obj_t BgL_ownerz00_2910,
		obj_t BgL_currentz00_2911)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 210 */
			{
				BgL_castz00_bglt BgL_nodez00_1570;

				obj_t BgL_ownerz00_1571;

				obj_t BgL_currentz00_1572;

				{	/* Globalize/new_body.scm 211 */
					BgL_castz00_bglt BgL_auxz00_4018;

					BgL_nodez00_1570 = (BgL_castz00_bglt) (BgL_nodez00_2909);
					BgL_ownerz00_1571 = BgL_ownerz00_2910;
					BgL_currentz00_1572 = BgL_currentz00_2911;
					{	/* Globalize/new_body.scm 211 */
						BgL_nodez00_bglt BgL_arg3862z00_2104;

						BgL_arg3862z00_2104 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1570))->BgL_argz00);
						{	/* Globalize/new_body.scm 211 */
							BgL_nodez00_bglt BgL_res3983z00_2134;

							{	/* Globalize/new_body.scm 211 */
								obj_t BgL_method3687z00_2109;

								{	/* Globalize/new_body.scm 211 */
									BgL_objectz00_bglt BgL_objz00_2110;

									BgL_objz00_2110 = (BgL_objectz00_bglt) (BgL_arg3862z00_2104);
									{	/* Globalize/new_body.scm 211 */
										long BgL_objzd2classzd2numz00_2111;

										BgL_objzd2classzd2numz00_2111 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2110);
										{	/* Globalize/new_body.scm 211 */
											obj_t BgL_arg2643z00_2112;

											BgL_arg2643z00_2112 =
												PROCEDURE_REF
												(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
												(int) (((long) 1)));
											{	/* Globalize/new_body.scm 211 */
												obj_t BgL_arrayz00_2114;

												int BgL_offsetz00_2115;

												BgL_arrayz00_2114 = BgL_arg2643z00_2112;
												BgL_offsetz00_2115 =
													(int) (BgL_objzd2classzd2numz00_2111);
												{	/* Globalize/new_body.scm 211 */
													long BgL_offsetz00_2116;

													BgL_offsetz00_2116 =
														((long) (BgL_offsetz00_2115) - OBJECT_TYPE);
													{	/* Globalize/new_body.scm 211 */
														long BgL_modz00_2117;

														{	/* Globalize/new_body.scm 211 */
															int BgL_arg2645z00_2118;

															BgL_arg2645z00_2118 = (int) (((long) 16));
															{	/* Globalize/new_body.scm 211 */
																long BgL_auxz00_4028;

																BgL_auxz00_4028 = (long) (BgL_arg2645z00_2118);
																BgL_modz00_2117 =
																	(BgL_offsetz00_2116 / BgL_auxz00_4028);
														}}
														{	/* Globalize/new_body.scm 211 */
															long BgL_restz00_2119;

															{	/* Globalize/new_body.scm 211 */
																int BgL_arg2644z00_2120;

																BgL_arg2644z00_2120 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 211 */
																	long BgL_auxz00_4032;

																	BgL_auxz00_4032 =
																		(long) (BgL_arg2644z00_2120);
																	BgL_restz00_2119 =
																		(BgL_offsetz00_2116 % BgL_auxz00_4032);
															}}
															{	/* Globalize/new_body.scm 211 */

																BgL_method3687z00_2109 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2114,
																		(int) (BgL_modz00_2117)),
																	(int) (BgL_restz00_2119));
								}}}}}}}}
								BgL_res3983z00_2134 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2109)
									(BgL_method3687z00_2109, (obj_t) (BgL_arg3862z00_2104),
										BgL_ownerz00_1571, BgL_currentz00_1572, BEOA));
							} BgL_res3983z00_2134;
					}}
					BgL_auxz00_4018 = BgL_nodez00_1570;
					return (obj_t) (BgL_auxz00_4018);
				}
			}
		}
	}



/* rem!-extern3703 */
	obj_t BGl_remz12zd2extern3703zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2912, obj_t BgL_nodez00_2913, obj_t BgL_ownerz00_2914,
		obj_t BgL_currentz00_2915)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 202 */
			{
				BgL_externz00_bglt BgL_nodez00_1561;

				obj_t BgL_ownerz00_1562;

				obj_t BgL_currentz00_1563;

				{	/* Globalize/new_body.scm 203 */
					BgL_externz00_bglt BgL_auxz00_4045;

					BgL_nodez00_1561 = (BgL_externz00_bglt) (BgL_nodez00_2913);
					BgL_ownerz00_1562 = BgL_ownerz00_2914;
					BgL_currentz00_1563 = BgL_currentz00_2915;
					{	/* Globalize/new_body.scm 203 */
						obj_t BgL_arg3860z00_2101;

						BgL_arg3860z00_2101 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1561))->BgL_exprza2za2);
						BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(BgL_arg3860z00_2101,
							BgL_ownerz00_1562, BgL_currentz00_1563);
					}
					BgL_auxz00_4045 = BgL_nodez00_1561;
					return (obj_t) (BgL_auxz00_4045);
				}
			}
		}
	}



/* rem!-funcall3701 */
	obj_t BGl_remz12zd2funcall3701zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2916, obj_t BgL_nodez00_2917, obj_t BgL_ownerz00_2918,
		obj_t BgL_currentz00_2919)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 193 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1550;

				obj_t BgL_ownerz00_1551;

				obj_t BgL_currentz00_1552;

				{	/* Globalize/new_body.scm 194 */
					BgL_funcallz00_bglt BgL_auxz00_4050;

					BgL_nodez00_1550 = (BgL_funcallz00_bglt) (BgL_nodez00_2917);
					BgL_ownerz00_1551 = BgL_ownerz00_2918;
					BgL_currentz00_1552 = BgL_currentz00_2919;
					{	/* Globalize/new_body.scm 195 */
						BgL_nodez00_bglt BgL_arg3856z00_1556;

						{	/* Globalize/new_body.scm 195 */
							BgL_nodez00_bglt BgL_arg3857z00_1557;

							BgL_arg3857z00_1557 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1550))->BgL_funz00);
							{	/* Globalize/new_body.scm 195 */
								BgL_nodez00_bglt BgL_res3980z00_2096;

								{	/* Globalize/new_body.scm 195 */
									obj_t BgL_method3687z00_2071;

									{	/* Globalize/new_body.scm 195 */
										BgL_objectz00_bglt BgL_objz00_2072;

										BgL_objz00_2072 =
											(BgL_objectz00_bglt) (BgL_arg3857z00_1557);
										{	/* Globalize/new_body.scm 195 */
											long BgL_objzd2classzd2numz00_2073;

											BgL_objzd2classzd2numz00_2073 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2072);
											{	/* Globalize/new_body.scm 195 */
												obj_t BgL_arg2643z00_2074;

												BgL_arg2643z00_2074 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 195 */
													obj_t BgL_arrayz00_2076;

													int BgL_offsetz00_2077;

													BgL_arrayz00_2076 = BgL_arg2643z00_2074;
													BgL_offsetz00_2077 =
														(int) (BgL_objzd2classzd2numz00_2073);
													{	/* Globalize/new_body.scm 195 */
														long BgL_offsetz00_2078;

														BgL_offsetz00_2078 =
															((long) (BgL_offsetz00_2077) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 195 */
															long BgL_modz00_2079;

															{	/* Globalize/new_body.scm 195 */
																int BgL_arg2645z00_2080;

																BgL_arg2645z00_2080 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 195 */
																	long BgL_auxz00_4060;

																	BgL_auxz00_4060 =
																		(long) (BgL_arg2645z00_2080);
																	BgL_modz00_2079 =
																		(BgL_offsetz00_2078 / BgL_auxz00_4060);
															}}
															{	/* Globalize/new_body.scm 195 */
																long BgL_restz00_2081;

																{	/* Globalize/new_body.scm 195 */
																	int BgL_arg2644z00_2082;

																	BgL_arg2644z00_2082 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 195 */
																		long BgL_auxz00_4064;

																		BgL_auxz00_4064 =
																			(long) (BgL_arg2644z00_2082);
																		BgL_restz00_2081 =
																			(BgL_offsetz00_2078 % BgL_auxz00_4064);
																}}
																{	/* Globalize/new_body.scm 195 */

																	BgL_method3687z00_2071 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2076,
																			(int) (BgL_modz00_2079)),
																		(int) (BgL_restz00_2081));
									}}}}}}}}
									BgL_res3980z00_2096 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2071)
										(BgL_method3687z00_2071, (obj_t) (BgL_arg3857z00_1557),
											BgL_ownerz00_1551, BgL_currentz00_1552, BEOA));
								}
								BgL_arg3856z00_1556 = BgL_res3980z00_2096;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1550))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3856z00_1556), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 196 */
						obj_t BgL_arg3858z00_1558;

						BgL_arg3858z00_1558 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1550))->BgL_argsz00);
						BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(BgL_arg3858z00_1558,
							BgL_ownerz00_1551, BgL_currentz00_1552);
					}
					BgL_auxz00_4050 = BgL_nodez00_1550;
					return (obj_t) (BgL_auxz00_4050);
				}
			}
		}
	}



/* rem!-app-ly3699 */
	obj_t BGl_remz12zd2appzd2ly3699z12zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2920, obj_t BgL_nodez00_2921, obj_t BgL_ownerz00_2922,
		obj_t BgL_currentz00_2923)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 184 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1538;

				obj_t BgL_ownerz00_1539;

				obj_t BgL_currentz00_1540;

				{	/* Globalize/new_body.scm 185 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4080;

					BgL_nodez00_1538 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2921);
					BgL_ownerz00_1539 = BgL_ownerz00_2922;
					BgL_currentz00_1540 = BgL_currentz00_2923;
					{	/* Globalize/new_body.scm 186 */
						BgL_nodez00_bglt BgL_arg3851z00_1544;

						{	/* Globalize/new_body.scm 186 */
							BgL_nodez00_bglt BgL_arg3852z00_1545;

							BgL_arg3852z00_1545 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1538))->BgL_funz00);
							{	/* Globalize/new_body.scm 186 */
								BgL_nodez00_bglt BgL_res3974z00_2032;

								{	/* Globalize/new_body.scm 186 */
									obj_t BgL_method3687z00_2007;

									{	/* Globalize/new_body.scm 186 */
										BgL_objectz00_bglt BgL_objz00_2008;

										BgL_objz00_2008 =
											(BgL_objectz00_bglt) (BgL_arg3852z00_1545);
										{	/* Globalize/new_body.scm 186 */
											long BgL_objzd2classzd2numz00_2009;

											BgL_objzd2classzd2numz00_2009 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2008);
											{	/* Globalize/new_body.scm 186 */
												obj_t BgL_arg2643z00_2010;

												BgL_arg2643z00_2010 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 186 */
													obj_t BgL_arrayz00_2012;

													int BgL_offsetz00_2013;

													BgL_arrayz00_2012 = BgL_arg2643z00_2010;
													BgL_offsetz00_2013 =
														(int) (BgL_objzd2classzd2numz00_2009);
													{	/* Globalize/new_body.scm 186 */
														long BgL_offsetz00_2014;

														BgL_offsetz00_2014 =
															((long) (BgL_offsetz00_2013) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 186 */
															long BgL_modz00_2015;

															{	/* Globalize/new_body.scm 186 */
																int BgL_arg2645z00_2016;

																BgL_arg2645z00_2016 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 186 */
																	long BgL_auxz00_4090;

																	BgL_auxz00_4090 =
																		(long) (BgL_arg2645z00_2016);
																	BgL_modz00_2015 =
																		(BgL_offsetz00_2014 / BgL_auxz00_4090);
															}}
															{	/* Globalize/new_body.scm 186 */
																long BgL_restz00_2017;

																{	/* Globalize/new_body.scm 186 */
																	int BgL_arg2644z00_2018;

																	BgL_arg2644z00_2018 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 186 */
																		long BgL_auxz00_4094;

																		BgL_auxz00_4094 =
																			(long) (BgL_arg2644z00_2018);
																		BgL_restz00_2017 =
																			(BgL_offsetz00_2014 % BgL_auxz00_4094);
																}}
																{	/* Globalize/new_body.scm 186 */

																	BgL_method3687z00_2007 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2012,
																			(int) (BgL_modz00_2015)),
																		(int) (BgL_restz00_2017));
									}}}}}}}}
									BgL_res3974z00_2032 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2007)
										(BgL_method3687z00_2007, (obj_t) (BgL_arg3852z00_1545),
											BgL_ownerz00_1539, BgL_currentz00_1540, BEOA));
								}
								BgL_arg3851z00_1544 = BgL_res3974z00_2032;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1538))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3851z00_1544), BUNSPEC);
					}
					{	/* Globalize/new_body.scm 187 */
						BgL_nodez00_bglt BgL_arg3853z00_1546;

						{	/* Globalize/new_body.scm 187 */
							BgL_nodez00_bglt BgL_arg3854z00_1547;

							BgL_arg3854z00_1547 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1538))->BgL_argz00);
							{	/* Globalize/new_body.scm 187 */
								BgL_nodez00_bglt BgL_res3977z00_2064;

								{	/* Globalize/new_body.scm 187 */
									obj_t BgL_method3687z00_2039;

									{	/* Globalize/new_body.scm 187 */
										BgL_objectz00_bglt BgL_objz00_2040;

										BgL_objz00_2040 =
											(BgL_objectz00_bglt) (BgL_arg3854z00_1547);
										{	/* Globalize/new_body.scm 187 */
											long BgL_objzd2classzd2numz00_2041;

											BgL_objzd2classzd2numz00_2041 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2040);
											{	/* Globalize/new_body.scm 187 */
												obj_t BgL_arg2643z00_2042;

												BgL_arg2643z00_2042 =
													PROCEDURE_REF
													(BGl_remz12zd2envzc0zzglobaliza7e_newzd2bodyz75,
													(int) (((long) 1)));
												{	/* Globalize/new_body.scm 187 */
													obj_t BgL_arrayz00_2044;

													int BgL_offsetz00_2045;

													BgL_arrayz00_2044 = BgL_arg2643z00_2042;
													BgL_offsetz00_2045 =
														(int) (BgL_objzd2classzd2numz00_2041);
													{	/* Globalize/new_body.scm 187 */
														long BgL_offsetz00_2046;

														BgL_offsetz00_2046 =
															((long) (BgL_offsetz00_2045) - OBJECT_TYPE);
														{	/* Globalize/new_body.scm 187 */
															long BgL_modz00_2047;

															{	/* Globalize/new_body.scm 187 */
																int BgL_arg2645z00_2048;

																BgL_arg2645z00_2048 = (int) (((long) 16));
																{	/* Globalize/new_body.scm 187 */
																	long BgL_auxz00_4115;

																	BgL_auxz00_4115 =
																		(long) (BgL_arg2645z00_2048);
																	BgL_modz00_2047 =
																		(BgL_offsetz00_2046 / BgL_auxz00_4115);
															}}
															{	/* Globalize/new_body.scm 187 */
																long BgL_restz00_2049;

																{	/* Globalize/new_body.scm 187 */
																	int BgL_arg2644z00_2050;

																	BgL_arg2644z00_2050 = (int) (((long) 16));
																	{	/* Globalize/new_body.scm 187 */
																		long BgL_auxz00_4119;

																		BgL_auxz00_4119 =
																			(long) (BgL_arg2644z00_2050);
																		BgL_restz00_2049 =
																			(BgL_offsetz00_2046 % BgL_auxz00_4119);
																}}
																{	/* Globalize/new_body.scm 187 */

																	BgL_method3687z00_2039 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2044,
																			(int) (BgL_modz00_2047)),
																		(int) (BgL_restz00_2049));
									}}}}}}}}
									BgL_res3977z00_2064 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3687z00_2039)
										(BgL_method3687z00_2039, (obj_t) (BgL_arg3854z00_1547),
											BgL_ownerz00_1539, BgL_currentz00_1540, BEOA));
								}
								BgL_arg3853z00_1546 = BgL_res3977z00_2064;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1538))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3853z00_1546), BUNSPEC);
					}
					BgL_auxz00_4080 = BgL_nodez00_1538;
					return (obj_t) (BgL_auxz00_4080);
				}
			}
		}
	}



/* rem!-app3697 */
	obj_t BGl_remz12zd2app3697zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2924, obj_t BgL_nodez00_2925, obj_t BgL_ownerz00_2926,
		obj_t BgL_currentz00_2927)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 176 */
			{
				BgL_appz00_bglt BgL_nodez00_1529;

				obj_t BgL_ownerz00_1530;

				obj_t BgL_currentz00_1531;

				{	/* Globalize/new_body.scm 177 */
					BgL_appz00_bglt BgL_auxz00_4133;

					BgL_nodez00_1529 = (BgL_appz00_bglt) (BgL_nodez00_2925);
					BgL_ownerz00_1530 = BgL_ownerz00_2926;
					BgL_currentz00_1531 = BgL_currentz00_2927;
					{	/* Globalize/new_body.scm 177 */
						obj_t BgL_arg3849z00_2001;

						BgL_arg3849z00_2001 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1529))->BgL_argsz00);
						BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(BgL_arg3849z00_2001,
							BgL_ownerz00_1530, BgL_currentz00_1531);
					}
					BgL_auxz00_4133 = BgL_nodez00_1529;
					return (obj_t) (BgL_auxz00_4133);
				}
			}
		}
	}



/* rem!-sequence3695 */
	obj_t BGl_remz12zd2sequence3695zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2928, obj_t BgL_nodez00_2929, obj_t BgL_ownerz00_2930,
		obj_t BgL_currentz00_2931)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 168 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1520;

				obj_t BgL_ownerz00_1521;

				obj_t BgL_currentz00_1522;

				{	/* Globalize/new_body.scm 169 */
					BgL_sequencez00_bglt BgL_auxz00_4138;

					BgL_nodez00_1520 = (BgL_sequencez00_bglt) (BgL_nodez00_2929);
					BgL_ownerz00_1521 = BgL_ownerz00_2930;
					BgL_currentz00_1522 = BgL_currentz00_2931;
					{	/* Globalize/new_body.scm 169 */
						obj_t BgL_arg3847z00_1998;

						BgL_arg3847z00_1998 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1520))->BgL_nodesz00);
						BGl_remza2z12zb0zzglobaliza7e_newzd2bodyz75(BgL_arg3847z00_1998,
							BgL_ownerz00_1521, BgL_currentz00_1522);
					}
					BgL_auxz00_4138 = BgL_nodez00_1520;
					return (obj_t) (BgL_auxz00_4138);
				}
			}
		}
	}



/* rem!-var3693 */
	obj_t BGl_remz12zd2var3693zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2932, obj_t BgL_nodez00_2933, obj_t BgL_ownerz00_2934,
		obj_t BgL_currentz00_2935)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 162 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_2933));
		}
	}



/* rem!-kwote3691 */
	obj_t BGl_remz12zd2kwote3691zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2936, obj_t BgL_nodez00_2937, obj_t BgL_ownerz00_2938,
		obj_t BgL_currentz00_2939)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 156 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2937));
		}
	}



/* rem!-atom3689 */
	obj_t BGl_remz12zd2atom3689zc0zzglobaliza7e_newzd2bodyz75(obj_t
		BgL_envz00_2940, obj_t BgL_nodez00_2941, obj_t BgL_ownerz00_2942,
		obj_t BgL_currentz00_2943)
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 150 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2941));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_newzd2bodyz75()
	{
		AN_OBJECT;
		{	/* Globalize/new_body.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long)
					157543843),
				BSTRING_TO_STRING(BGl_string4066z00zzglobaliza7e_newzd2bodyz75));
		}
	}

#ifdef __cplusplus
}
#endif
