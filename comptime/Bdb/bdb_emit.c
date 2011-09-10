/*===========================================================================*/
/*   (Bdb/bdb_emit.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/bdb_emit.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;


	static obj_t BGl_zc3anonymousza33741ze3z83zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_bdbz12zd2conditional3683zc0zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_bdbz12zd2funcall3703zc0zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbdb_emitz00();
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	static obj_t BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(obj_t);
	extern obj_t BGl_unitzd2initializa7erzd2idza7zzast_unitz00(obj_t);
	static obj_t BGl__bdbz12zd2default3672zc0zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_bdbz12zd2extern3677zc0zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_bdbzd2globalzd2svarz12z12zzbdb_emitz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_bdbz12zd2appzd2ly3701z12zzbdb_emitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbdb_emitz00();
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	static bool_t BGl_bdbzd2localzd2variablezf3zf3zzbdb_emitz00(obj_t);
	static obj_t BGl_bdbz12z12zzbdb_emitz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_bdbzd2globalzd2sfunz12z12zzbdb_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_bdbz12zd2app3705zc0zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t, obj_t, obj_t);
	static bool_t BGl_emitzd2bdbzd2classzd2typeszd2zzbdb_emitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	static obj_t BGl_bdbz12zd2cast3679zc0zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbdb_emitz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_bdbz12zd2select3687zc0zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	static obj_t BGl_bdbz12zd2letzd2fun3689z12zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_emitz00 = BUNSPEC;
	static obj_t BGl_bdbz12zd2letzd2var3691z12zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbdb_emitz00();
	static obj_t BGl_bdbz12zd2setq3681zc0zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl_bdbz12zd2setzd2exzd2it3693zc0zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_bdbz12zd2sequence3675zc0zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_bdbza2z12zb0zzbdb_emitz00(obj_t);
	static obj_t BGl__bdbz12z12zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_bdbz12zd2boxzd2setz123699z00zzbdb_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_emitz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_bdbz12zd2fail3685zc0zzbdb_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_za2czd2portza2zd2zzbdb_emitz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_valuez00_bglt);
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	static obj_t BGl_bdbz12zd2jumpzd2exzd2it3695zc0zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_bdbz12zd2makezd2box3697z12zzbdb_emitz00(obj_t, obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_emitz00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3969z00zzbdb_emitz00,
		BgL_bgl_za7c3anonymousza7a334002z00,
		BGl_zc3anonymousza33741ze3z83zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3982z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2sequenc4003z00,
		BGl_bdbz12zd2sequence3675zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3983z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2extern34004z00,
		BGl_bdbz12zd2extern3677zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3984z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2cast3674005z00, BGl_bdbz12zd2cast3679zc0zzbdb_emitz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3985z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2setq3684006z00, BGl_bdbz12zd2setq3681zc0zzbdb_emitz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3986z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2conditi4007z00,
		BGl_bdbz12zd2conditional3683zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3987z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2fail3684008z00, BGl_bdbz12zd2fail3685zc0zzbdb_emitz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3988z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2select34009z00,
		BGl_bdbz12zd2select3687zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3990z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2letza7d2v4010za7,
		BGl_bdbz12zd2letzd2var3691z12zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3989z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2letza7d2f4011za7,
		BGl_bdbz12zd2letzd2fun3689z12zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3991z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2setza7d2e4012za7,
		BGl_bdbz12zd2setzd2exzd2it3693zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3992z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2jumpza7d24013za7,
		BGl_bdbz12zd2jumpzd2exzd2it3695zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3993z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2makeza7d24014za7,
		BGl_bdbz12zd2makezd2box3697z12zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3994z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2boxza7d2s4015za7,
		BGl_bdbz12zd2boxzd2setz123699z00zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3995z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2appza7d2l4016za7,
		BGl_bdbz12zd2appzd2ly3701z12zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3996z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2funcall4017z00,
		BGl_bdbz12zd2funcall3703zc0zzbdb_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3997z00zzbdb_emitz00,
		BgL_bgl_bdbza712za7d2app37054018z00, BGl_bdbz12zd2app3705zc0zzbdb_emitz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3950z00zzbdb_emitz00,
		BgL_bgl_string3950za700za7za7b4019za7, "static struct bdb_fun_info {\n",
		29);
	      DEFINE_STRING(BGl_string3949z00zzbdb_emitz00,
		BgL_bgl_string3949za700za7za7b4020za7, "/* bdb association table */", 27);
	      DEFINE_STRING(BGl_string3951z00zzbdb_emitz00,
		BgL_bgl_string3951za700za7za7b4021za7, "   char *sname, *cname;\n", 24);
	      DEFINE_STRING(BGl_string3952z00zzbdb_emitz00,
		BgL_bgl_string3952za700za7za7b4022za7, "} ", 2);
	      DEFINE_STRING(BGl_string3953z00zzbdb_emitz00,
		BgL_bgl_string3953za700za7za7b4023za7, "__bdb_info", 10);
	      DEFINE_STRING(BGl_string3954z00zzbdb_emitz00,
		BgL_bgl_string3954za700za7za7b4024za7, "[] = { ", 7);
	      DEFINE_STRING(BGl_string3955z00zzbdb_emitz00,
		BgL_bgl_string3955za700za7za7b4025za7,
		"   /* Magic number to ensure comp/dbg compatibility */", 54);
	      DEFINE_STRING(BGl_string3956z00zzbdb_emitz00,
		BgL_bgl_string3956za700za7za7b4026za7, "   {(char *)", 12);
	      DEFINE_STRING(BGl_string3957z00zzbdb_emitz00,
		BgL_bgl_string3957za700za7za7b4027za7, ", (char *)", 10);
	      DEFINE_STRING(BGl_string3958z00zzbdb_emitz00,
		BgL_bgl_string3958za700za7za7b4028za7, "},", 2);
	      DEFINE_STRING(BGl_string3960z00zzbdb_emitz00,
		BgL_bgl_string3960za700za7za7b4029za7, "   {\"", 5);
	      DEFINE_STRING(BGl_string3959z00zzbdb_emitz00,
		BgL_bgl_string3959za700za7za7b4030za7,
		"   /* Module and source file identification */", 46);
	      DEFINE_STRING(BGl_string3961z00zzbdb_emitz00,
		BgL_bgl_string3961za700za7za7b4031za7, "\", \"", 4);
	      DEFINE_STRING(BGl_string3962z00zzbdb_emitz00,
		BgL_bgl_string3962za700za7za7b4032za7, "\" },", 4);
	      DEFINE_STRING(BGl_string3963z00zzbdb_emitz00,
		BgL_bgl_string3963za700za7za7b4033za7, "\", 0 },", 7);
	      DEFINE_STRING(BGl_string3964z00zzbdb_emitz00,
		BgL_bgl_string3964za700za7za7b4034za7, "   { 0, (char *)", 16);
	      DEFINE_STRING(BGl_string3965z00zzbdb_emitz00,
		BgL_bgl_string3965za700za7za7b4035za7, "0", 1);
	      DEFINE_STRING(BGl_string3966z00zzbdb_emitz00,
		BgL_bgl_string3966za700za7za7b4036za7, " },", 3);
	      DEFINE_STRING(BGl_string3967z00zzbdb_emitz00,
		BgL_bgl_string3967za700za7za7b4037za7, "   /* Global functions */", 25);
	      DEFINE_STRING(BGl_string3968z00zzbdb_emitz00,
		BgL_bgl_string3968za700za7za7b4038za7, "   /* Global variables */", 25);
	      DEFINE_STRING(BGl_string3970z00zzbdb_emitz00,
		BgL_bgl_string3970za700za7za7b4039za7, "   {0, 0},", 10);
	      DEFINE_STRING(BGl_string3971z00zzbdb_emitz00,
		BgL_bgl_string3971za700za7za7b4040za7, "   0};\n", 7);
	      DEFINE_STRING(BGl_string3972z00zzbdb_emitz00,
		BgL_bgl_string3972za700za7za7b4041za7, "   /* Bigloo classes */", 23);
	      DEFINE_STRING(BGl_string3973z00zzbdb_emitz00,
		BgL_bgl_string3973za700za7za7b4042za7, " *\", 0 },", 9);
	      DEFINE_STRING(BGl_string3974z00zzbdb_emitz00,
		BgL_bgl_string3974za700za7za7b4043za7, "\", (char *)", 11);
	      DEFINE_STRING(BGl_string3975z00zzbdb_emitz00,
		BgL_bgl_string3975za700za7za7b4044za7, "\", 0},", 6);
	      DEFINE_STRING(BGl_string3976z00zzbdb_emitz00,
		BgL_bgl_string3976za700za7za7b4045za7, "   {", 4);
	      DEFINE_STRING(BGl_string3977z00zzbdb_emitz00,
		BgL_bgl_string3977za700za7za7b4046za7, ", \"", 3);
	      DEFINE_STRING(BGl_string3978z00zzbdb_emitz00,
		BgL_bgl_string3978za700za7za7b4047za7, "\"},", 3);
	      DEFINE_STRING(BGl_string3980z00zzbdb_emitz00,
		BgL_bgl_string3980za700za7za7b4048za7, "     {\"", 7);
	      DEFINE_STRING(BGl_string3979z00zzbdb_emitz00,
		BgL_bgl_string3979za700za7za7b4049za7, "     {0, 0},", 12);
	      DEFINE_STRING(BGl_string3981z00zzbdb_emitz00,
		BgL_bgl_string3981za700za7za7b4050za7, "bdb!", 4);
	      DEFINE_STRING(BGl_string3998z00zzbdb_emitz00,
		BgL_bgl_string3998za700za7za7b4051za7, "bdb_emit", 8);
	      DEFINE_STRING(BGl_string3999z00zzbdb_emitz00,
		BgL_bgl_string3999za700za7za7b4052za7,
		"done bigloo @ TOPLEVEL-INIT export location ", 44);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2bdbzd2infozd2envzd2zzbdb_emitz00,
		BgL_bgl__emitza7d2bdbza7d2in4053z00, BGl__emitzd2bdbzd2infoz00zzbdb_emitz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_bdbz12zd2envzc0zzbdb_emitz00,
		BgL_bgl__bdbza712za712za7za7bdb_4054z00, BGl__bdbz12z12zzbdb_emitz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_bdbz12zd2default3672zd2envz12zzbdb_emitz00,
		BgL_bgl__bdbza712za7d2defaul4055z00,
		BGl__bdbz12zd2default3672zc0zzbdb_emitz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long
		BgL_checksumz00_2624, char *BgL_fromz00_2625)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_emitz00))
				{
					BGl_requirezd2initializa7ationz75zzbdb_emitz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbdb_emitz00();
					BGl_cnstzd2initzd2zzbdb_emitz00();
					BGl_importedzd2moduleszd2initz00zzbdb_emitz00();
					BGl_genericzd2initzd2zzbdb_emitz00();
					BGl_methodzd2initzd2zzbdb_emitz00();
					BGl_toplevelzd2initzd2zzbdb_emitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_emitz00()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"bdb_emit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "bdb_emit");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"bdb_emit");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_emitz00()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			{	/* Bdb/bdb_emit.scm 15 */
				obj_t BgL_cportz00_2615;

				BgL_cportz00_2615 =
					bgl_open_input_string(BGl_string3999z00zzbdb_emitz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2616;

					BgL_iz00_2616 = ((long) 5);
				BgL_loopz00_2617:
					if ((BgL_iz00_2616 == ((long) -1)))
						{	/* Bdb/bdb_emit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/bdb_emit.scm 15 */
							{	/* Bdb/bdb_emit.scm 15 */
								obj_t BgL_arg4001z00_2619;

								{	/* Bdb/bdb_emit.scm 15 */

									{	/* Bdb/bdb_emit.scm 15 */
										obj_t BgL_locationz00_2621;

										BgL_locationz00_2621 = BBOOL(((bool_t) 0));
										{	/* Bdb/bdb_emit.scm 15 */

											BgL_arg4001z00_2619 =
												BGl_readz00zz__readerz00(BgL_cportz00_2615,
												BgL_locationz00_2621);
										}
									}
								}
								{	/* Bdb/bdb_emit.scm 15 */
									int BgL_auxz00_2647;

									BgL_auxz00_2647 = (int) (BgL_iz00_2616);
									CNST_TABLE_SET(BgL_auxz00_2647, BgL_arg4001z00_2619);
							}}
							{	/* Bdb/bdb_emit.scm 15 */
								int BgL_auxz00_2622;

								BgL_auxz00_2622 = (int) ((BgL_iz00_2616 - ((long) 1)));
								{
									long BgL_iz00_2652;

									BgL_iz00_2652 = (long) (BgL_auxz00_2622);
									BgL_iz00_2616 = BgL_iz00_2652;
									goto BgL_loopz00_2617;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_emitz00()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_za2czd2portza2zd2zzbdb_emitz00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* emit-bdb-info */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t
		BgL_globalsz00_37, obj_t BgL_portz00_38)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 43 */
			BGl_za2czd2portza2zd2zzbdb_emitz00 = BgL_portz00_38;
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3949z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3950z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_string(BGl_string3951z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_string(BGl_string3952z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_obj(BGl_string3953z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_string(BGl_string3954z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3955z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3956z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_obj(BINT(BDB_LIBRARY_MAGIC_NUMBER), BgL_portz00_38);
			bgl_display_string(BGl_string3957z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_obj(BINT(BDB_LIBRARY_MAGIC_NUMBER), BgL_portz00_38);
			bgl_display_string(BGl_string3958z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3959z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3960z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_obj(BGl_za2moduleza2z00zzmodule_modulez00, BgL_portz00_38);
			bgl_display_string(BGl_string3961z00zzbdb_emitz00, BgL_portz00_38);
			{	/* Bdb/bdb_emit.scm 66 */
				obj_t BgL_arg3724z00_955;

				{	/* Bdb/bdb_emit.scm 66 */
					obj_t BgL_arg3725z00_956;

					obj_t BgL_arg3726z00_957;

					{	/* Bdb/bdb_emit.scm 66 */
						obj_t BgL_arg3727z00_958;

						BgL_arg3727z00_958 =
							BGl_unitzd2initializa7erzd2idza7zzast_unitz00(STRUCT_REF
							(BGl_getzd2toplevelzd2unitz00zzmodule_includez00(),
								(int) (((long) 0))));
						{	/* Bdb/bdb_emit.scm 64 */
							obj_t BgL_res3894z00_1699;

							{	/* Bdb/bdb_emit.scm 64 */
								obj_t BgL_symbolz00_1697;

								BgL_symbolz00_1697 = BgL_arg3727z00_958;
								{	/* Bdb/bdb_emit.scm 64 */
									obj_t BgL_arg2063z00_1698;

									BgL_arg2063z00_1698 = SYMBOL_TO_STRING(BgL_symbolz00_1697);
									BgL_res3894z00_1699 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1698);
							}}
							BgL_arg3725z00_956 = BgL_res3894z00_1699;
					}}
					{	/* Bdb/bdb_emit.scm 67 */
						obj_t BgL_res3895z00_1702;

						{	/* Bdb/bdb_emit.scm 67 */
							obj_t BgL_symbolz00_1700;

							BgL_symbolz00_1700 = BGl_za2moduleza2z00zzmodule_modulez00;
							{	/* Bdb/bdb_emit.scm 67 */
								obj_t BgL_arg2063z00_1701;

								BgL_arg2063z00_1701 = SYMBOL_TO_STRING(BgL_symbolz00_1700);
								BgL_res3895z00_1702 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1701);
						}}
						BgL_arg3726z00_957 = BgL_res3895z00_1702;
					}
					BgL_arg3724z00_955 =
						bigloo_module_mangle(BgL_arg3725z00_956, BgL_arg3726z00_957);
				}
				bgl_display_obj(BgL_arg3724z00_955, BgL_portz00_38);
			}
			bgl_display_string(BGl_string3962z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			{
				obj_t BgL_l3638z00_962;

				BgL_l3638z00_962 = BGl_za2srczd2filesza2zd2zzengine_paramz00;
			BgL_zc3anonymousza33730ze3z83_963:
				if (PAIRP(BgL_l3638z00_962))
					{	/* Bdb/bdb_emit.scm 69 */
						{	/* Bdb/bdb_emit.scm 70 */
							obj_t BgL_srcz00_965;

							BgL_srcz00_965 = CAR(BgL_l3638z00_962);
							bgl_display_string(BGl_string3960z00zzbdb_emitz00,
								BgL_portz00_38);
							bgl_display_obj(BgL_srcz00_965, BgL_portz00_38);
							bgl_display_string(BGl_string3963z00zzbdb_emitz00,
								BgL_portz00_38);
							bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
						}
						{
							obj_t BgL_l3638z00_2698;

							BgL_l3638z00_2698 = CDR(BgL_l3638z00_962);
							BgL_l3638z00_962 = BgL_l3638z00_2698;
							goto BgL_zc3anonymousza33730ze3z83_963;
						}
					}
				else
					{	/* Bdb/bdb_emit.scm 69 */
						((bool_t) 1);
					}
			}
			bgl_display_string(BGl_string3964z00zzbdb_emitz00, BgL_portz00_38);
			{	/* Bdb/bdb_emit.scm 74 */
				obj_t BgL_arg3733z00_970;

				{	/* Bdb/bdb_emit.scm 74 */
					obj_t BgL_locz00_971;

					BgL_locz00_971 =
						BGl_findzd2locationzd2zztools_locationz00
						(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
					{	/* Bdb/bdb_emit.scm 75 */
						bool_t BgL_testz00_2702;

						if (STRUCTP(BgL_locz00_971))
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_testz00_2702 =
									(STRUCT_KEY(BgL_locz00_971) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_testz00_2702 = ((bool_t) 0);
							}
						if (BgL_testz00_2702)
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_arg3733z00_970 =
									STRUCT_REF(BgL_locz00_971, (int) (((long) 2)));
							}
						else
							{	/* Bdb/bdb_emit.scm 75 */
								BgL_arg3733z00_970 = BGl_string3965z00zzbdb_emitz00;
							}
					}
				}
				bgl_display_obj(BgL_arg3733z00_970, BgL_portz00_38);
			}
			bgl_display_string(BGl_string3966z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3967z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			{
				obj_t BgL_l3642z00_975;

				BgL_l3642z00_975 = BgL_globalsz00_37;
			BgL_zc3anonymousza33735ze3z83_976:
				if (PAIRP(BgL_l3642z00_975))
					{	/* Bdb/bdb_emit.scm 81 */
						{	/* Bdb/bdb_emit.scm 84 */
							obj_t BgL_globalz00_978;

							BgL_globalz00_978 = CAR(BgL_l3642z00_975);
							{	/* Bdb/bdb_emit.scm 82 */
								obj_t BgL_arg3737z00_979;

								{
									BgL_variablez00_bglt BgL_auxz00_2718;

									BgL_auxz00_2718 = (BgL_variablez00_bglt) (BgL_globalz00_978);
									BgL_arg3737z00_979 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2718))->BgL_idz00);
								}
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3737z00_979);
							}
							BGl_bdbzd2globalzd2sfunz12z12zzbdb_emitz00(BgL_globalz00_978);
							BGl_leavezd2functionzd2zztools_errorz00();
						}
						{
							obj_t BgL_l3642z00_2724;

							BgL_l3642z00_2724 = CDR(BgL_l3642z00_975);
							BgL_l3642z00_975 = BgL_l3642z00_2724;
							goto BgL_zc3anonymousza33735ze3z83_976;
						}
					}
				else
					{	/* Bdb/bdb_emit.scm 81 */
						((bool_t) 1);
					}
			}
			bgl_display_string(BGl_string3968z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc3969z00zzbdb_emitz00,
				BNIL);
			bgl_display_string(BGl_string3970z00zzbdb_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			BGl_emitzd2bdbzd2classzd2typeszd2zzbdb_emitz00(BgL_portz00_38);
			bgl_display_string(BGl_string3971z00zzbdb_emitz00, BgL_portz00_38);
			return bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
		}
	}



/* _emit-bdb-info */
	obj_t BGl__emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t BgL_envz00_2556,
		obj_t BgL_globalsz00_2557, obj_t BgL_portz00_2558)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 43 */
			return
				BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(BgL_globalsz00_2557,
				BgL_portz00_2558);
		}
	}



/* <anonymous:3741> */
	obj_t BGl_zc3anonymousza33741ze3z83zzbdb_emitz00(obj_t BgL_envz00_2559,
		obj_t BgL_globalz00_2560)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 88 */
			{
				obj_t BgL_globalz00_985;

				BgL_globalz00_985 = BgL_globalz00_2560;
				{	/* Bdb/bdb_emit.scm 89 */
					bool_t BgL_testz00_2735;

					{	/* Bdb/bdb_emit.scm 89 */
						bool_t BgL_testz00_2736;

						{	/* Bdb/bdb_emit.scm 89 */
							bool_t BgL_testz00_2737;

							{	/* Bdb/bdb_emit.scm 89 */
								bool_t BgL_testz00_2738;

								{	/* Bdb/bdb_emit.scm 89 */
									obj_t BgL_arg3752z00_996;

									{
										BgL_globalz00_bglt BgL_auxz00_2739;

										BgL_auxz00_2739 = (BgL_globalz00_bglt) (BgL_globalz00_985);
										BgL_arg3752z00_996 =
											(((BgL_globalz00_bglt) CREF(BgL_auxz00_2739))->
											BgL_modulez00);
									}
									BgL_testz00_2738 =
										(BgL_arg3752z00_996 ==
										BGl_za2moduleza2z00zzmodule_modulez00);
								}
								if (BgL_testz00_2738)
									{	/* Bdb/bdb_emit.scm 90 */
										obj_t BgL_auxz00_2743;

										{
											BgL_globalz00_bglt BgL_auxz00_2744;

											BgL_auxz00_2744 =
												(BgL_globalz00_bglt) (BgL_globalz00_985);
											BgL_auxz00_2743 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_2744))->
												BgL_importz00);
										}
										BgL_testz00_2737 =
											(BgL_auxz00_2743 == CNST_TABLE_REF(((long) 1)));
									}
								else
									{	/* Bdb/bdb_emit.scm 89 */
										BgL_testz00_2737 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_2737)
								{	/* Bdb/bdb_emit.scm 89 */
									BgL_testz00_2736 = ((bool_t) 1);
								}
							else
								{	/* Bdb/bdb_emit.scm 91 */
									long BgL_auxz00_2749;

									{
										BgL_variablez00_bglt BgL_auxz00_2750;

										BgL_auxz00_2750 =
											(BgL_variablez00_bglt) (BgL_globalz00_985);
										BgL_auxz00_2749 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2750))->
											BgL_occurrencez00);
									}
									BgL_testz00_2736 = (BgL_auxz00_2749 > ((long) 0));
						}}
						if (BgL_testz00_2736)
							{	/* Bdb/bdb_emit.scm 92 */
								BgL_valuez00_bglt BgL_arg3745z00_989;

								{
									BgL_variablez00_bglt BgL_auxz00_2754;

									BgL_auxz00_2754 = (BgL_variablez00_bglt) (BgL_globalz00_985);
									BgL_arg3745z00_989 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2754))->
										BgL_valuez00);
								}
								{	/* Bdb/bdb_emit.scm 92 */
									obj_t BgL_obj2029z00_1745;

									BgL_obj2029z00_1745 = (obj_t) (BgL_arg3745z00_989);
									BgL_testz00_2735 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2029z00_1745,
										BGl_svarz00zzast_varz00);
								}
							}
						else
							{	/* Bdb/bdb_emit.scm 89 */
								BgL_testz00_2735 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_2735)
						{	/* Bdb/bdb_emit.scm 89 */
							return
								BGl_bdbzd2globalzd2svarz12z12zzbdb_emitz00(BgL_globalz00_985);
						}
					else
						{	/* Bdb/bdb_emit.scm 89 */
							return BFALSE;
						}
				}
			}
		}
	}



/* emit-bdb-class-types */
	bool_t BGl_emitzd2bdbzd2classzd2typeszd2zzbdb_emitz00(obj_t BgL_oportz00_39)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 102 */
			{	/* Bdb/bdb_emit.scm 103 */
				bool_t BgL_testz00_2760;

				{	/* Bdb/bdb_emit.scm 103 */
					obj_t BgL_auxz00_2761;

					BgL_auxz00_2761 = BGl_getzd2classzd2listz00zzobject_classz00();
					BgL_testz00_2760 = PAIRP(BgL_auxz00_2761);
				}
				if (BgL_testz00_2760)
					{	/* Bdb/bdb_emit.scm 103 */
						bgl_display_string(BGl_string3972z00zzbdb_emitz00, BgL_oportz00_39);
						bgl_display_char(((unsigned char) '\n'), BgL_oportz00_39);
					}
				else
					{	/* Bdb/bdb_emit.scm 103 */
						BFALSE;
					}
			}
			{	/* Bdb/bdb_emit.scm 105 */
				obj_t BgL_g3651z00_1003;

				BgL_g3651z00_1003 = BGl_getzd2classzd2listz00zzobject_classz00();
				{
					obj_t BgL_l3649z00_1005;

					BgL_l3649z00_1005 = BgL_g3651z00_1003;
				BgL_zc3anonymousza33755ze3z83_1006:
					if (PAIRP(BgL_l3649z00_1005))
						{	/* Bdb/bdb_emit.scm 111 */
							{	/* Bdb/bdb_emit.scm 106 */
								obj_t BgL_classz00_1008;

								BgL_classz00_1008 = CAR(BgL_l3649z00_1005);
								{	/* Bdb/bdb_emit.scm 107 */
									bool_t BgL_testz00_2770;

									{	/* Bdb/bdb_emit.scm 107 */
										obj_t BgL_arg3759z00_1013;

										{	/* Bdb/bdb_emit.scm 107 */
											BgL_globalz00_bglt BgL_obj1676z00_1759;

											{	/* Bdb/bdb_emit.scm 107 */
												BgL_tclassz00_bglt BgL_obj3297z00_1758;

												BgL_obj3297z00_1758 =
													(BgL_tclassz00_bglt) (BgL_classz00_1008);
												{
													obj_t BgL_auxz00_2772;

													{	/* Bdb/bdb_emit.scm 107 */
														BgL_objectz00_bglt BgL_auxz00_2773;

														BgL_auxz00_2773 =
															(BgL_objectz00_bglt) (BgL_obj3297z00_1758);
														BgL_auxz00_2772 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2773);
													}
													BgL_obj1676z00_1759 =
														(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2772))->
														BgL_holderz00);
												}
											}
											BgL_arg3759z00_1013 =
												(((BgL_globalz00_bglt) CREF(BgL_obj1676z00_1759))->
												BgL_modulez00);
										}
										BgL_testz00_2770 =
											(BgL_arg3759z00_1013 ==
											BGl_za2moduleza2z00zzmodule_modulez00);
									}
									if (BgL_testz00_2770)
										{	/* Bdb/bdb_emit.scm 107 */
											bgl_display_string(BGl_string3960z00zzbdb_emitz00,
												BgL_oportz00_39);
											{	/* Bdb/bdb_emit.scm 109 */
												obj_t BgL_arg3758z00_1012;

												{
													BgL_typez00_bglt BgL_auxz00_2780;

													BgL_auxz00_2780 =
														(BgL_typez00_bglt) (BgL_classz00_1008);
													BgL_arg3758z00_1012 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2780))->
														BgL_siza7eza7);
												}
												bgl_display_obj(BgL_arg3758z00_1012, BgL_oportz00_39);
											}
											bgl_display_string(BGl_string3973z00zzbdb_emitz00,
												BgL_oportz00_39);
											bgl_display_char(((unsigned char) '\n'), BgL_oportz00_39);
										}
									else
										{	/* Bdb/bdb_emit.scm 107 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l3649z00_2786;

								BgL_l3649z00_2786 = CDR(BgL_l3649z00_1005);
								BgL_l3649z00_1005 = BgL_l3649z00_2786;
								goto BgL_zc3anonymousza33755ze3z83_1006;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 111 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* bdb-global-sfun! */
	obj_t BGl_bdbzd2globalzd2sfunz12z12zzbdb_emitz00(obj_t BgL_globalz00_40)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 116 */
			{	/* Bdb/bdb_emit.scm 117 */
				BgL_valuez00_bglt BgL_sfunz00_1017;

				{
					BgL_variablez00_bglt BgL_auxz00_2788;

					BgL_auxz00_2788 = (BgL_variablez00_bglt) (BgL_globalz00_40);
					BgL_sfunz00_1017 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2788))->BgL_valuez00);
				}
				{	/* Bdb/bdb_emit.scm 117 */
					obj_t BgL_sfunzd2loczd2_1018;

					{
						BgL_sfunz00_bglt BgL_auxz00_2791;

						BgL_auxz00_2791 = (BgL_sfunz00_bglt) (BgL_sfunz00_1017);
						BgL_sfunzd2loczd2_1018 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2791))->BgL_locz00);
					}
					{	/* Bdb/bdb_emit.scm 118 */
						obj_t BgL_cloz00_1019;

						{
							BgL_funz00_bglt BgL_auxz00_2794;

							BgL_auxz00_2794 = (BgL_funz00_bglt) (BgL_sfunz00_1017);
							BgL_cloz00_1019 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_2794))->
								BgL_thezd2closurezd2);
						}
						{	/* Bdb/bdb_emit.scm 119 */

							{	/* Bdb/bdb_emit.scm 120 */
								bool_t BgL_testz00_2797;

								{	/* Bdb/bdb_emit.scm 120 */
									bool_t BgL_testz00_2798;

									if (STRUCTP(BgL_sfunzd2loczd2_1018))
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_testz00_2798 =
												(STRUCT_KEY(BgL_sfunzd2loczd2_1018) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_testz00_2798 = ((bool_t) 0);
										}
									if (BgL_testz00_2798)
										{
											BgL_globalz00_bglt BgL_auxz00_2804;

											BgL_auxz00_2804 = (BgL_globalz00_bglt) (BgL_globalz00_40);
											BgL_testz00_2797 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_2804))->
												BgL_userzf3zf3);
										}
									else
										{	/* Bdb/bdb_emit.scm 120 */
											BgL_testz00_2797 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_2797)
									{	/* Bdb/bdb_emit.scm 120 */
										BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
											(BgL_variablez00_bglt) (BgL_globalz00_40));
										{	/* Bdb/bdb_emit.scm 124 */
											obj_t BgL_fnamez00_1021;

											obj_t BgL_lnumz00_1022;

											obj_t BgL_idz00_1023;

											obj_t BgL_valzd2namezd2_1024;

											obj_t BgL_bpzd2namezd2_1025;

											BgL_fnamez00_1021 =
												STRUCT_REF(BgL_sfunzd2loczd2_1018, (int) (((long) 0)));
											BgL_lnumz00_1022 =
												STRUCT_REF(BgL_sfunzd2loczd2_1018, (int) (((long) 2)));
											{	/* Bdb/bdb_emit.scm 126 */
												obj_t BgL_idz00_1032;

												{
													BgL_variablez00_bglt BgL_auxz00_2813;

													BgL_auxz00_2813 =
														(BgL_variablez00_bglt) (BgL_globalz00_40);
													BgL_idz00_1032 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2813))->
														BgL_idz00);
												}
												if ((BgL_idz00_1032 == CNST_TABLE_REF(((long) 2))))
													{	/* Bdb/bdb_emit.scm 128 */
														obj_t BgL_arg3765z00_1034;

														{	/* Bdb/bdb_emit.scm 128 */
															obj_t BgL_arg3766z00_1035;

															obj_t BgL_arg3767z00_1036;

															{	/* Bdb/bdb_emit.scm 128 */
																obj_t BgL_res3898z00_1787;

																{	/* Bdb/bdb_emit.scm 128 */
																	obj_t BgL_symbolz00_1785;

																	BgL_symbolz00_1785 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Bdb/bdb_emit.scm 128 */
																		obj_t BgL_arg2063z00_1786;

																		BgL_arg2063z00_1786 =
																			SYMBOL_TO_STRING(BgL_symbolz00_1785);
																		BgL_res3898z00_1787 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_1786);
																}}
																BgL_arg3766z00_1035 = BgL_res3898z00_1787;
															}
															{	/* Bdb/bdb_emit.scm 128 */
																obj_t BgL_arg3770z00_1039;

																{
																	BgL_globalz00_bglt BgL_auxz00_2822;

																	BgL_auxz00_2822 =
																		(BgL_globalz00_bglt) (BgL_globalz00_40);
																	BgL_arg3770z00_1039 =
																		(((BgL_globalz00_bglt)
																			CREF(BgL_auxz00_2822))->BgL_modulez00);
																}
																{	/* Bdb/bdb_emit.scm 128 */
																	obj_t BgL_res3899z00_1791;

																	{	/* Bdb/bdb_emit.scm 128 */
																		obj_t BgL_arg2063z00_1790;

																		BgL_arg2063z00_1790 =
																			SYMBOL_TO_STRING(BgL_arg3770z00_1039);
																		BgL_res3899z00_1791 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_1790);
																	}
																	BgL_arg3767z00_1036 = BgL_res3899z00_1791;
															}}
															{	/* Bdb/bdb_emit.scm 128 */
																obj_t BgL_list3768z00_1037;

																{	/* Bdb/bdb_emit.scm 128 */
																	obj_t BgL_arg3769z00_1038;

																	BgL_arg3769z00_1038 =
																		MAKE_PAIR(BgL_arg3767z00_1036, BNIL);
																	BgL_list3768z00_1037 =
																		MAKE_PAIR(BgL_arg3766z00_1035,
																		BgL_arg3769z00_1038);
																}
																BgL_arg3765z00_1034 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list3768z00_1037);
														}}
														BgL_idz00_1023 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg3765z00_1034));
													}
												else
													{	/* Bdb/bdb_emit.scm 127 */
														BgL_idz00_1023 = BgL_idz00_1032;
													}
											}
											if (BGl_iszd2azf3z21zz__objectz00(BgL_cloz00_1019,
													BGl_globalz00zzast_varz00))
												{
													BgL_variablez00_bglt BgL_auxz00_2834;

													BgL_auxz00_2834 =
														(BgL_variablez00_bglt) (
														(BgL_globalz00_bglt) (BgL_cloz00_1019));
													BgL_valzd2namezd2_1024 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2834))->
														BgL_namez00);
												}
											else
												{	/* Bdb/bdb_emit.scm 130 */
													BgL_valzd2namezd2_1024 = BINT(((long) 0));
												}
											{
												BgL_variablez00_bglt BgL_auxz00_2839;

												BgL_auxz00_2839 =
													(BgL_variablez00_bglt) (BgL_globalz00_40);
												BgL_bpzd2namezd2_1025 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2839))->
													BgL_namez00);
											}
											{	/* Bdb/bdb_emit.scm 134 */
												obj_t BgL_port3652z00_1026;

												BgL_port3652z00_1026 =
													BGl_za2czd2portza2zd2zzbdb_emitz00;
												bgl_display_string(BGl_string3960z00zzbdb_emitz00,
													BgL_port3652z00_1026);
												bgl_display_obj(BgL_fnamez00_1021,
													BgL_port3652z00_1026);
												bgl_display_string(BGl_string3974z00zzbdb_emitz00,
													BgL_port3652z00_1026);
												bgl_display_obj(BgL_lnumz00_1022, BgL_port3652z00_1026);
												bgl_display_string(BGl_string3966z00zzbdb_emitz00,
													BgL_port3652z00_1026);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port3652z00_1026);
											}
											{	/* Bdb/bdb_emit.scm 135 */
												obj_t BgL_port3653z00_1027;

												BgL_port3653z00_1027 =
													BGl_za2czd2portza2zd2zzbdb_emitz00;
												bgl_display_string(BGl_string3960z00zzbdb_emitz00,
													BgL_port3653z00_1027);
												bgl_display_obj(BgL_idz00_1023, BgL_port3653z00_1027);
												bgl_display_string(BGl_string3975z00zzbdb_emitz00,
													BgL_port3653z00_1027);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port3653z00_1027);
											}
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
												(BgL_valzd2namezd2_1024))
												{	/* Bdb/bdb_emit.scm 138 */
													obj_t BgL_port3655z00_1029;

													BgL_port3655z00_1029 =
														BGl_za2czd2portza2zd2zzbdb_emitz00;
													bgl_display_string(BGl_string3976z00zzbdb_emitz00,
														BgL_port3655z00_1029);
													bgl_display_obj(BgL_valzd2namezd2_1024,
														BgL_port3655z00_1029);
													bgl_display_string(BGl_string3977z00zzbdb_emitz00,
														BgL_port3655z00_1029);
													bgl_display_obj(BgL_bpzd2namezd2_1025,
														BgL_port3655z00_1029);
													bgl_display_string(BGl_string3978z00zzbdb_emitz00,
														BgL_port3655z00_1029);
													bgl_display_char(((unsigned char) '\n'),
														BgL_port3655z00_1029);
												}
											else
												{	/* Bdb/bdb_emit.scm 137 */
													obj_t BgL_port3654z00_1030;

													BgL_port3654z00_1030 =
														BGl_za2czd2portza2zd2zzbdb_emitz00;
													bgl_display_string(BGl_string3960z00zzbdb_emitz00,
														BgL_port3654z00_1030);
													bgl_display_obj(BgL_valzd2namezd2_1024,
														BgL_port3654z00_1030);
													bgl_display_string(BGl_string3961z00zzbdb_emitz00,
														BgL_port3654z00_1030);
													bgl_display_obj(BgL_bpzd2namezd2_1025,
														BgL_port3654z00_1030);
													bgl_display_string(BGl_string3978z00zzbdb_emitz00,
														BgL_port3654z00_1030);
													bgl_display_char(((unsigned char) '\n'),
														BgL_port3654z00_1030);
												}
											BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_sfunz00_1017);
											{	/* Bdb/bdb_emit.scm 140 */
												obj_t BgL_port3656z00_1031;

												BgL_port3656z00_1031 =
													BGl_za2czd2portza2zd2zzbdb_emitz00;
												bgl_display_string(BGl_string3979z00zzbdb_emitz00,
													BgL_port3656z00_1031);
												return bgl_display_char(((unsigned char) '\n'),
													BgL_port3656z00_1031);
									}}}
								else
									{	/* Bdb/bdb_emit.scm 120 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}
	}



/* bdb-global-svar! */
	obj_t BGl_bdbzd2globalzd2svarz12z12zzbdb_emitz00(obj_t BgL_globalz00_41)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 145 */
			{	/* Bdb/bdb_emit.scm 146 */
				BgL_valuez00_bglt BgL_svarz00_1042;

				{
					BgL_variablez00_bglt BgL_auxz00_2869;

					BgL_auxz00_2869 = (BgL_variablez00_bglt) (BgL_globalz00_41);
					BgL_svarz00_1042 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2869))->BgL_valuez00);
				}
				{	/* Bdb/bdb_emit.scm 146 */
					obj_t BgL_svarzd2loczd2_1043;

					{
						BgL_svarz00_bglt BgL_auxz00_2872;

						BgL_auxz00_2872 = (BgL_svarz00_bglt) (BgL_svarz00_1042);
						BgL_svarzd2loczd2_1043 =
							(((BgL_svarz00_bglt) CREF(BgL_auxz00_2872))->BgL_locz00);
					}
					{	/* Bdb/bdb_emit.scm 147 */

						{	/* Bdb/bdb_emit.scm 148 */
							bool_t BgL_testz00_2875;

							if (STRUCTP(BgL_svarzd2loczd2_1043))
								{	/* Bdb/bdb_emit.scm 148 */
									BgL_testz00_2875 =
										(STRUCT_KEY(BgL_svarzd2loczd2_1043) ==
										CNST_TABLE_REF(((long) 0)));
								}
							else
								{	/* Bdb/bdb_emit.scm 148 */
									BgL_testz00_2875 = ((bool_t) 0);
								}
							if (BgL_testz00_2875)
								{	/* Bdb/bdb_emit.scm 148 */
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
										(BgL_variablez00_bglt) (BgL_globalz00_41));
									{	/* Bdb/bdb_emit.scm 151 */
										obj_t BgL_fnamez00_1045;

										obj_t BgL_lnumz00_1046;

										obj_t BgL_idz00_1047;

										obj_t BgL_namez00_1048;

										BgL_fnamez00_1045 =
											STRUCT_REF(BgL_svarzd2loczd2_1043, (int) (((long) 0)));
										BgL_lnumz00_1046 =
											STRUCT_REF(BgL_svarzd2loczd2_1043, (int) (((long) 2)));
										{
											BgL_variablez00_bglt BgL_auxz00_2887;

											BgL_auxz00_2887 =
												(BgL_variablez00_bglt) (BgL_globalz00_41);
											BgL_idz00_1047 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2887))->
												BgL_idz00);
										}
										{
											BgL_variablez00_bglt BgL_auxz00_2890;

											BgL_auxz00_2890 =
												(BgL_variablez00_bglt) (BgL_globalz00_41);
											BgL_namez00_1048 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2890))->
												BgL_namez00);
										}
										{	/* Bdb/bdb_emit.scm 155 */
											obj_t BgL_port3657z00_1049;

											BgL_port3657z00_1049 = BGl_za2czd2portza2zd2zzbdb_emitz00;
											bgl_display_string(BGl_string3960z00zzbdb_emitz00,
												BgL_port3657z00_1049);
											bgl_display_obj(BgL_fnamez00_1045, BgL_port3657z00_1049);
											bgl_display_string(BGl_string3974z00zzbdb_emitz00,
												BgL_port3657z00_1049);
											bgl_display_obj(BgL_lnumz00_1046, BgL_port3657z00_1049);
											bgl_display_string(BGl_string3966z00zzbdb_emitz00,
												BgL_port3657z00_1049);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port3657z00_1049);
										}
										{	/* Bdb/bdb_emit.scm 156 */
											obj_t BgL_port3658z00_1050;

											BgL_port3658z00_1050 = BGl_za2czd2portza2zd2zzbdb_emitz00;
											bgl_display_string(BGl_string3960z00zzbdb_emitz00,
												BgL_port3658z00_1050);
											bgl_display_obj(BgL_idz00_1047, BgL_port3658z00_1050);
											bgl_display_string(BGl_string3961z00zzbdb_emitz00,
												BgL_port3658z00_1050);
											bgl_display_obj(BgL_namez00_1048, BgL_port3658z00_1050);
											bgl_display_string(BGl_string3978z00zzbdb_emitz00,
												BgL_port3658z00_1050);
											return bgl_display_char(((unsigned char) '\n'),
												BgL_port3658z00_1050);
								}}}
							else
								{	/* Bdb/bdb_emit.scm 148 */
									return BFALSE;
								}
						}
					}
				}
			}
		}
	}



/* bdb-sfun! */
	obj_t BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_valuez00_bglt BgL_sfunz00_42)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 161 */
			{	/* Bdb/bdb_emit.scm 163 */
				obj_t BgL_g3661z00_1052;

				{
					BgL_sfunz00_bglt BgL_auxz00_2905;

					BgL_auxz00_2905 = (BgL_sfunz00_bglt) (BgL_sfunz00_42);
					BgL_g3661z00_1052 =
						(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2905))->BgL_argsz00);
				}
				{
					obj_t BgL_l3659z00_1054;

					BgL_l3659z00_1054 = BgL_g3661z00_1052;
				BgL_zc3anonymousza33774ze3z83_1055:
					if (PAIRP(BgL_l3659z00_1054))
						{	/* Bdb/bdb_emit.scm 163 */
							BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(CAR
								(BgL_l3659z00_1054));
							{
								obj_t BgL_l3659z00_2912;

								BgL_l3659z00_2912 = CDR(BgL_l3659z00_1054);
								BgL_l3659z00_1054 = BgL_l3659z00_2912;
								goto BgL_zc3anonymousza33774ze3z83_1055;
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 163 */
							((bool_t) 1);
						}
				}
			}
			{	/* Bdb/bdb_emit.scm 164 */
				obj_t BgL_arg3778z00_1060;

				{
					BgL_sfunz00_bglt BgL_auxz00_2914;

					BgL_auxz00_2914 = (BgL_sfunz00_bglt) (BgL_sfunz00_42);
					BgL_arg3778z00_1060 =
						(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2914))->BgL_bodyz00);
				}
				{	/* Bdb/bdb_emit.scm 164 */
					BgL_nodez00_bglt BgL_nodez00_1861;

					BgL_nodez00_1861 = (BgL_nodez00_bglt) (BgL_arg3778z00_1060);
					{	/* Bdb/bdb_emit.scm 164 */
						obj_t BgL_method3673z00_1862;

						{	/* Bdb/bdb_emit.scm 164 */
							BgL_objectz00_bglt BgL_objz00_1863;

							BgL_objz00_1863 = (BgL_objectz00_bglt) (BgL_nodez00_1861);
							{	/* Bdb/bdb_emit.scm 164 */
								long BgL_objzd2classzd2numz00_1864;

								BgL_objzd2classzd2numz00_1864 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1863);
								{	/* Bdb/bdb_emit.scm 164 */
									obj_t BgL_arg2643z00_1865;

									BgL_arg2643z00_1865 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 164 */
										obj_t BgL_arrayz00_1867;

										int BgL_offsetz00_1868;

										BgL_arrayz00_1867 = BgL_arg2643z00_1865;
										BgL_offsetz00_1868 = (int) (BgL_objzd2classzd2numz00_1864);
										{	/* Bdb/bdb_emit.scm 164 */
											long BgL_offsetz00_1869;

											BgL_offsetz00_1869 =
												((long) (BgL_offsetz00_1868) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 164 */
												long BgL_modz00_1870;

												{	/* Bdb/bdb_emit.scm 164 */
													int BgL_arg2645z00_1871;

													BgL_arg2645z00_1871 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 164 */
														long BgL_auxz00_2926;

														BgL_auxz00_2926 = (long) (BgL_arg2645z00_1871);
														BgL_modz00_1870 =
															(BgL_offsetz00_1869 / BgL_auxz00_2926);
												}}
												{	/* Bdb/bdb_emit.scm 164 */
													long BgL_restz00_1872;

													{	/* Bdb/bdb_emit.scm 164 */
														int BgL_arg2644z00_1873;

														BgL_arg2644z00_1873 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 164 */
															long BgL_auxz00_2930;

															BgL_auxz00_2930 = (long) (BgL_arg2644z00_1873);
															BgL_restz00_1872 =
																(BgL_offsetz00_1869 % BgL_auxz00_2930);
													}}
													{	/* Bdb/bdb_emit.scm 164 */

														BgL_method3673z00_1862 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1867,
																(int) (BgL_modz00_1870)),
															(int) (BgL_restz00_1872));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_1862) (BgL_method3673z00_1862,
							(obj_t) (BgL_nodez00_1861), BEOA);
					}
				}
			}
		}
	}



/* bdb-local-variable? */
	bool_t BGl_bdbzd2localzd2variablezf3zf3zzbdb_emitz00(obj_t BgL_localz00_43)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 176 */
			{
				obj_t BgL_localz00_1063;

				{	/* Bdb/bdb_emit.scm 190 */
					bool_t BgL_testz00_2940;

					{
						BgL_localz00_bglt BgL_auxz00_2941;

						BgL_auxz00_2941 = (BgL_localz00_bglt) (BgL_localz00_43);
						BgL_testz00_2940 =
							(((BgL_localz00_bglt) CREF(BgL_auxz00_2941))->BgL_userzf3zf3);
					}
					if (BgL_testz00_2940)
						{	/* Bdb/bdb_emit.scm 190 */
							BgL_localz00_1063 = BgL_localz00_43;
							{	/* Bdb/bdb_emit.scm 180 */
								BgL_typez00_bglt BgL_tz00_1065;

								{
									BgL_variablez00_bglt BgL_auxz00_2944;

									BgL_auxz00_2944 = (BgL_variablez00_bglt) (BgL_localz00_1063);
									BgL_tz00_1065 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2944))->
										BgL_typez00);
								}
								{	/* Bdb/bdb_emit.scm 181 */
									bool_t BgL__ortest_3592z00_1066;

									BgL__ortest_3592z00_1066 =
										(
										(((BgL_typez00_bglt) CREF(BgL_tz00_1065))->BgL_classz00) ==
										CNST_TABLE_REF(((long) 4)));
									if (BgL__ortest_3592z00_1066)
										{	/* Bdb/bdb_emit.scm 181 */
											return BgL__ortest_3592z00_1066;
										}
									else
										{	/* Bdb/bdb_emit.scm 182 */
											bool_t BgL__ortest_3593z00_1067;

											BgL__ortest_3593z00_1067 =
												(
												(obj_t) (BgL_tz00_1065) ==
												BGl_za2intza2z00zztype_cachez00);
											if (BgL__ortest_3593z00_1067)
												{	/* Bdb/bdb_emit.scm 182 */
													return BgL__ortest_3593z00_1067;
												}
											else
												{	/* Bdb/bdb_emit.scm 183 */
													bool_t BgL__ortest_3594z00_1068;

													BgL__ortest_3594z00_1068 =
														(
														(obj_t) (BgL_tz00_1065) ==
														BGl_za2longza2z00zztype_cachez00);
													if (BgL__ortest_3594z00_1068)
														{	/* Bdb/bdb_emit.scm 183 */
															return BgL__ortest_3594z00_1068;
														}
													else
														{	/* Bdb/bdb_emit.scm 184 */
															bool_t BgL__ortest_3595z00_1069;

															BgL__ortest_3595z00_1069 =
																(
																(obj_t) (BgL_tz00_1065) ==
																BGl_za2boolza2z00zztype_cachez00);
															if (BgL__ortest_3595z00_1069)
																{	/* Bdb/bdb_emit.scm 184 */
																	return BgL__ortest_3595z00_1069;
																}
															else
																{	/* Bdb/bdb_emit.scm 185 */
																	bool_t BgL__ortest_3596z00_1070;

																	BgL__ortest_3596z00_1070 =
																		(
																		(obj_t) (BgL_tz00_1065) ==
																		BGl_za2realza2z00zztype_cachez00);
																	if (BgL__ortest_3596z00_1070)
																		{	/* Bdb/bdb_emit.scm 185 */
																			return BgL__ortest_3596z00_1070;
																		}
																	else
																		{	/* Bdb/bdb_emit.scm 186 */
																			bool_t BgL__ortest_3597z00_1071;

																			BgL__ortest_3597z00_1071 =
																				(
																				(obj_t) (BgL_tz00_1065) ==
																				BGl_za2charza2z00zztype_cachez00);
																			if (BgL__ortest_3597z00_1071)
																				{	/* Bdb/bdb_emit.scm 186 */
																					return BgL__ortest_3597z00_1071;
																				}
																			else
																				{	/* Bdb/bdb_emit.scm 186 */
																					return
																						(
																						(obj_t) (BgL_tz00_1065) ==
																						BGl_za2stringza2z00zztype_cachez00);
																				}
																		}
																}
														}
												}
										}
								}
							}
						}
					else
						{	/* Bdb/bdb_emit.scm 190 */
							return ((bool_t) 0);
						}
				}
			}
		}
	}



/* bdb-emit-local-info! */
	obj_t BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(obj_t BgL_localz00_44)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 195 */
			if (BGl_bdbzd2localzd2variablezf3zf3zzbdb_emitz00(BgL_localz00_44))
				{	/* Bdb/bdb_emit.scm 196 */
					BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
						(BgL_variablez00_bglt) (BgL_localz00_44));
					{	/* Bdb/bdb_emit.scm 199 */
						obj_t BgL_idz00_1076;

						obj_t BgL_namez00_1077;

						{
							BgL_variablez00_bglt BgL_auxz00_2972;

							BgL_auxz00_2972 = (BgL_variablez00_bglt) (BgL_localz00_44);
							BgL_idz00_1076 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_2972))->BgL_idz00);
						}
						{
							BgL_variablez00_bglt BgL_auxz00_2975;

							BgL_auxz00_2975 = (BgL_variablez00_bglt) (BgL_localz00_44);
							BgL_namez00_1077 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_2975))->BgL_namez00);
						}
						{	/* Bdb/bdb_emit.scm 201 */
							obj_t BgL_port3662z00_1078;

							BgL_port3662z00_1078 = BGl_za2czd2portza2zd2zzbdb_emitz00;
							bgl_display_string(BGl_string3980z00zzbdb_emitz00,
								BgL_port3662z00_1078);
							bgl_display_obj(BgL_idz00_1076, BgL_port3662z00_1078);
							bgl_display_string(BGl_string3961z00zzbdb_emitz00,
								BgL_port3662z00_1078);
							bgl_display_obj(BgL_namez00_1077, BgL_port3662z00_1078);
							bgl_display_string(BGl_string3978z00zzbdb_emitz00,
								BgL_port3662z00_1078);
							return bgl_display_char(((unsigned char) '\n'),
								BgL_port3662z00_1078);
				}}}
			else
				{	/* Bdb/bdb_emit.scm 196 */
					return BFALSE;
				}
		}
	}



/* bdb*! */
	obj_t BGl_bdbza2z12zb0zzbdb_emitz00(obj_t BgL_nodesz00_62)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 333 */
			{
				obj_t BgL_hookz00_1080;

				BgL_hookz00_1080 = BgL_nodesz00_62;
			BgL_zc3anonymousza33783ze3z83_1081:
				if (NULLP(BgL_hookz00_1080))
					{	/* Bdb/bdb_emit.scm 335 */
						return CNST_TABLE_REF(((long) 5));
					}
				else
					{	/* Bdb/bdb_emit.scm 335 */
						{	/* Bdb/bdb_emit.scm 338 */
							obj_t BgL_arg3785z00_1083;

							BgL_arg3785z00_1083 = CAR(BgL_hookz00_1080);
							{	/* Bdb/bdb_emit.scm 338 */
								BgL_nodez00_bglt BgL_nodez00_1901;

								BgL_nodez00_1901 = (BgL_nodez00_bglt) (BgL_arg3785z00_1083);
								{	/* Bdb/bdb_emit.scm 338 */
									obj_t BgL_method3673z00_1902;

									{	/* Bdb/bdb_emit.scm 338 */
										BgL_objectz00_bglt BgL_objz00_1903;

										BgL_objz00_1903 = (BgL_objectz00_bglt) (BgL_nodez00_1901);
										{	/* Bdb/bdb_emit.scm 338 */
											long BgL_objzd2classzd2numz00_1904;

											BgL_objzd2classzd2numz00_1904 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1903);
											{	/* Bdb/bdb_emit.scm 338 */
												obj_t BgL_arg2643z00_1905;

												BgL_arg2643z00_1905 =
													PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
													(int) (((long) 1)));
												{	/* Bdb/bdb_emit.scm 338 */
													obj_t BgL_arrayz00_1907;

													int BgL_offsetz00_1908;

													BgL_arrayz00_1907 = BgL_arg2643z00_1905;
													BgL_offsetz00_1908 =
														(int) (BgL_objzd2classzd2numz00_1904);
													{	/* Bdb/bdb_emit.scm 338 */
														long BgL_offsetz00_1909;

														BgL_offsetz00_1909 =
															((long) (BgL_offsetz00_1908) - OBJECT_TYPE);
														{	/* Bdb/bdb_emit.scm 338 */
															long BgL_modz00_1910;

															{	/* Bdb/bdb_emit.scm 338 */
																int BgL_arg2645z00_1911;

																BgL_arg2645z00_1911 = (int) (((long) 16));
																{	/* Bdb/bdb_emit.scm 338 */
																	long BgL_auxz00_2997;

																	BgL_auxz00_2997 =
																		(long) (BgL_arg2645z00_1911);
																	BgL_modz00_1910 =
																		(BgL_offsetz00_1909 / BgL_auxz00_2997);
															}}
															{	/* Bdb/bdb_emit.scm 338 */
																long BgL_restz00_1912;

																{	/* Bdb/bdb_emit.scm 338 */
																	int BgL_arg2644z00_1913;

																	BgL_arg2644z00_1913 = (int) (((long) 16));
																	{	/* Bdb/bdb_emit.scm 338 */
																		long BgL_auxz00_3001;

																		BgL_auxz00_3001 =
																			(long) (BgL_arg2644z00_1913);
																		BgL_restz00_1912 =
																			(BgL_offsetz00_1909 % BgL_auxz00_3001);
																}}
																{	/* Bdb/bdb_emit.scm 338 */

																	BgL_method3673z00_1902 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1907,
																			(int) (BgL_modz00_1910)),
																		(int) (BgL_restz00_1912));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3673z00_1902)
										(BgL_method3673z00_1902, (obj_t) (BgL_nodez00_1901), BEOA);
						}}}
						{
							obj_t BgL_hookz00_3011;

							BgL_hookz00_3011 = CDR(BgL_hookz00_1080);
							BgL_hookz00_1080 = BgL_hookz00_3011;
							goto BgL_zc3anonymousza33783ze3z83_1081;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_emitz00()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00,
				BGl_bdbz12zd2default3672zd2envz12zzbdb_emitz00,
				BGl_nodez00zzast_nodez00, BGl_string3981z00zzbdb_emitz00);
		}
	}



/* bdb! */
	obj_t BGl_bdbz12z12zzbdb_emitz00(BgL_nodez00_bglt BgL_nodez00_45)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 206 */
			{	/* Bdb/bdb_emit.scm 206 */
				obj_t BgL_method3673z00_1928;

				{	/* Bdb/bdb_emit.scm 206 */
					BgL_objectz00_bglt BgL_objz00_1929;

					BgL_objz00_1929 = (BgL_objectz00_bglt) (BgL_nodez00_45);
					{	/* Bdb/bdb_emit.scm 206 */
						long BgL_objzd2classzd2numz00_1930;

						BgL_objzd2classzd2numz00_1930 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1929);
						{	/* Bdb/bdb_emit.scm 206 */
							obj_t BgL_arg2643z00_1931;

							BgL_arg2643z00_1931 =
								PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
								(int) (((long) 1)));
							{	/* Bdb/bdb_emit.scm 206 */
								obj_t BgL_arrayz00_1933;

								int BgL_offsetz00_1934;

								BgL_arrayz00_1933 = BgL_arg2643z00_1931;
								BgL_offsetz00_1934 = (int) (BgL_objzd2classzd2numz00_1930);
								{	/* Bdb/bdb_emit.scm 206 */
									long BgL_offsetz00_1935;

									BgL_offsetz00_1935 =
										((long) (BgL_offsetz00_1934) - OBJECT_TYPE);
									{	/* Bdb/bdb_emit.scm 206 */
										long BgL_modz00_1936;

										{	/* Bdb/bdb_emit.scm 206 */
											int BgL_arg2645z00_1937;

											BgL_arg2645z00_1937 = (int) (((long) 16));
											{	/* Bdb/bdb_emit.scm 206 */
												long BgL_auxz00_3022;

												BgL_auxz00_3022 = (long) (BgL_arg2645z00_1937);
												BgL_modz00_1936 =
													(BgL_offsetz00_1935 / BgL_auxz00_3022);
										}}
										{	/* Bdb/bdb_emit.scm 206 */
											long BgL_restz00_1938;

											{	/* Bdb/bdb_emit.scm 206 */
												int BgL_arg2644z00_1939;

												BgL_arg2644z00_1939 = (int) (((long) 16));
												{	/* Bdb/bdb_emit.scm 206 */
													long BgL_auxz00_3026;

													BgL_auxz00_3026 = (long) (BgL_arg2644z00_1939);
													BgL_restz00_1938 =
														(BgL_offsetz00_1935 % BgL_auxz00_3026);
											}}
											{	/* Bdb/bdb_emit.scm 206 */

												BgL_method3673z00_1928 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1933,
														(int) (BgL_modz00_1936)), (int) (BgL_restz00_1938));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3673z00_1928) (BgL_method3673z00_1928,
					(obj_t) (BgL_nodez00_45), BEOA);
			}
		}
	}



/* _bdb! */
	obj_t BGl__bdbz12z12zzbdb_emitz00(obj_t BgL_envz00_2561,
		obj_t BgL_nodez00_2562)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 206 */
			return BGl_bdbz12z12zzbdb_emitz00((BgL_nodez00_bglt) (BgL_nodez00_2562));
		}
	}



/* _bdb!-default3672 */
	obj_t BGl__bdbz12zd2default3672zc0zzbdb_emitz00(obj_t BgL_envz00_2563,
		obj_t BgL_nodez00_2564)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_emitz00()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3982z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_externz00zzast_nodez00,
				BGl_proc3983z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_castz00zzast_nodez00,
				BGl_proc3984z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_setqz00zzast_nodez00,
				BGl_proc3985z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc3986z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_failz00zzast_nodez00,
				BGl_proc3987z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_selectz00zzast_nodez00,
				BGl_proc3988z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3989z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3990z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3991z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3992z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3993z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3994z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3995z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3996z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bdbz12zd2envzc0zzbdb_emitz00, BGl_appz00zzast_nodez00,
				BGl_proc3997z00zzbdb_emitz00, BGl_string3981z00zzbdb_emitz00);
		}
	}



/* bdb!-app3705 */
	obj_t BGl_bdbz12zd2app3705zc0zzbdb_emitz00(obj_t BgL_envz00_2581,
		obj_t BgL_nodez00_2582)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 344 */
			{
				BgL_appz00_bglt BgL_nodez00_1642;

				BgL_nodez00_1642 = (BgL_appz00_bglt) (BgL_nodez00_2582);
				{	/* Bdb/bdb_emit.scm 345 */
					obj_t BgL_arg3889z00_2553;

					BgL_arg3889z00_2553 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1642))->BgL_argsz00);
					return BGl_bdbza2z12zb0zzbdb_emitz00(BgL_arg3889z00_2553);
				}
			}
		}
	}



/* bdb!-funcall3703 */
	obj_t BGl_bdbz12zd2funcall3703zc0zzbdb_emitz00(obj_t BgL_envz00_2583,
		obj_t BgL_nodez00_2584)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 325 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1634;

				BgL_nodez00_1634 = (BgL_funcallz00_bglt) (BgL_nodez00_2584);
				{	/* Bdb/bdb_emit.scm 327 */
					BgL_nodez00_bglt BgL_arg3886z00_1638;

					BgL_arg3886z00_1638 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1634))->BgL_funz00);
					{	/* Bdb/bdb_emit.scm 327 */
						obj_t BgL_method3673z00_2526;

						{	/* Bdb/bdb_emit.scm 327 */
							BgL_objectz00_bglt BgL_objz00_2527;

							BgL_objz00_2527 = (BgL_objectz00_bglt) (BgL_arg3886z00_1638);
							{	/* Bdb/bdb_emit.scm 327 */
								long BgL_objzd2classzd2numz00_2528;

								BgL_objzd2classzd2numz00_2528 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2527);
								{	/* Bdb/bdb_emit.scm 327 */
									obj_t BgL_arg2643z00_2529;

									BgL_arg2643z00_2529 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 327 */
										obj_t BgL_arrayz00_2531;

										int BgL_offsetz00_2532;

										BgL_arrayz00_2531 = BgL_arg2643z00_2529;
										BgL_offsetz00_2532 = (int) (BgL_objzd2classzd2numz00_2528);
										{	/* Bdb/bdb_emit.scm 327 */
											long BgL_offsetz00_2533;

											BgL_offsetz00_2533 =
												((long) (BgL_offsetz00_2532) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 327 */
												long BgL_modz00_2534;

												{	/* Bdb/bdb_emit.scm 327 */
													int BgL_arg2645z00_2535;

													BgL_arg2645z00_2535 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 327 */
														long BgL_auxz00_3066;

														BgL_auxz00_3066 = (long) (BgL_arg2645z00_2535);
														BgL_modz00_2534 =
															(BgL_offsetz00_2533 / BgL_auxz00_3066);
												}}
												{	/* Bdb/bdb_emit.scm 327 */
													long BgL_restz00_2536;

													{	/* Bdb/bdb_emit.scm 327 */
														int BgL_arg2644z00_2537;

														BgL_arg2644z00_2537 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 327 */
															long BgL_auxz00_3070;

															BgL_auxz00_3070 = (long) (BgL_arg2644z00_2537);
															BgL_restz00_2536 =
																(BgL_offsetz00_2533 % BgL_auxz00_3070);
													}}
													{	/* Bdb/bdb_emit.scm 327 */

														BgL_method3673z00_2526 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2531,
																(int) (BgL_modz00_2534)),
															(int) (BgL_restz00_2536));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2526) (BgL_method3673z00_2526,
							(obj_t) (BgL_arg3886z00_1638), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 328 */
					obj_t BgL_arg3887z00_1639;

					BgL_arg3887z00_1639 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1634))->BgL_argsz00);
					return BGl_bdbza2z12zb0zzbdb_emitz00(BgL_arg3887z00_1639);
				}
			}
		}
	}



/* bdb!-app-ly3701 */
	obj_t BGl_bdbz12zd2appzd2ly3701z12zzbdb_emitz00(obj_t BgL_envz00_2585,
		obj_t BgL_nodez00_2586)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 317 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1626;

				BgL_nodez00_1626 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2586);
				{	/* Bdb/bdb_emit.scm 319 */
					BgL_nodez00_bglt BgL_arg3883z00_1630;

					BgL_arg3883z00_1630 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1626))->BgL_funz00);
					{	/* Bdb/bdb_emit.scm 319 */
						obj_t BgL_method3673z00_2472;

						{	/* Bdb/bdb_emit.scm 319 */
							BgL_objectz00_bglt BgL_objz00_2473;

							BgL_objz00_2473 = (BgL_objectz00_bglt) (BgL_arg3883z00_1630);
							{	/* Bdb/bdb_emit.scm 319 */
								long BgL_objzd2classzd2numz00_2474;

								BgL_objzd2classzd2numz00_2474 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2473);
								{	/* Bdb/bdb_emit.scm 319 */
									obj_t BgL_arg2643z00_2475;

									BgL_arg2643z00_2475 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 319 */
										obj_t BgL_arrayz00_2477;

										int BgL_offsetz00_2478;

										BgL_arrayz00_2477 = BgL_arg2643z00_2475;
										BgL_offsetz00_2478 = (int) (BgL_objzd2classzd2numz00_2474);
										{	/* Bdb/bdb_emit.scm 319 */
											long BgL_offsetz00_2479;

											BgL_offsetz00_2479 =
												((long) (BgL_offsetz00_2478) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 319 */
												long BgL_modz00_2480;

												{	/* Bdb/bdb_emit.scm 319 */
													int BgL_arg2645z00_2481;

													BgL_arg2645z00_2481 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 319 */
														long BgL_auxz00_3092;

														BgL_auxz00_3092 = (long) (BgL_arg2645z00_2481);
														BgL_modz00_2480 =
															(BgL_offsetz00_2479 / BgL_auxz00_3092);
												}}
												{	/* Bdb/bdb_emit.scm 319 */
													long BgL_restz00_2482;

													{	/* Bdb/bdb_emit.scm 319 */
														int BgL_arg2644z00_2483;

														BgL_arg2644z00_2483 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 319 */
															long BgL_auxz00_3096;

															BgL_auxz00_3096 = (long) (BgL_arg2644z00_2483);
															BgL_restz00_2482 =
																(BgL_offsetz00_2479 % BgL_auxz00_3096);
													}}
													{	/* Bdb/bdb_emit.scm 319 */

														BgL_method3673z00_2472 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2477,
																(int) (BgL_modz00_2480)),
															(int) (BgL_restz00_2482));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2472) (BgL_method3673z00_2472,
							(obj_t) (BgL_arg3883z00_1630), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 320 */
					BgL_nodez00_bglt BgL_arg3884z00_1631;

					BgL_arg3884z00_1631 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1626))->BgL_argz00);
					{	/* Bdb/bdb_emit.scm 320 */
						obj_t BgL_method3673z00_2499;

						{	/* Bdb/bdb_emit.scm 320 */
							BgL_objectz00_bglt BgL_objz00_2500;

							BgL_objz00_2500 = (BgL_objectz00_bglt) (BgL_arg3884z00_1631);
							{	/* Bdb/bdb_emit.scm 320 */
								long BgL_objzd2classzd2numz00_2501;

								BgL_objzd2classzd2numz00_2501 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2500);
								{	/* Bdb/bdb_emit.scm 320 */
									obj_t BgL_arg2643z00_2502;

									BgL_arg2643z00_2502 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 320 */
										obj_t BgL_arrayz00_2504;

										int BgL_offsetz00_2505;

										BgL_arrayz00_2504 = BgL_arg2643z00_2502;
										BgL_offsetz00_2505 = (int) (BgL_objzd2classzd2numz00_2501);
										{	/* Bdb/bdb_emit.scm 320 */
											long BgL_offsetz00_2506;

											BgL_offsetz00_2506 =
												((long) (BgL_offsetz00_2505) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 320 */
												long BgL_modz00_2507;

												{	/* Bdb/bdb_emit.scm 320 */
													int BgL_arg2645z00_2508;

													BgL_arg2645z00_2508 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 320 */
														long BgL_auxz00_3115;

														BgL_auxz00_3115 = (long) (BgL_arg2645z00_2508);
														BgL_modz00_2507 =
															(BgL_offsetz00_2506 / BgL_auxz00_3115);
												}}
												{	/* Bdb/bdb_emit.scm 320 */
													long BgL_restz00_2509;

													{	/* Bdb/bdb_emit.scm 320 */
														int BgL_arg2644z00_2510;

														BgL_arg2644z00_2510 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 320 */
															long BgL_auxz00_3119;

															BgL_auxz00_3119 = (long) (BgL_arg2644z00_2510);
															BgL_restz00_2509 =
																(BgL_offsetz00_2506 % BgL_auxz00_3119);
													}}
													{	/* Bdb/bdb_emit.scm 320 */

														BgL_method3673z00_2499 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2504,
																(int) (BgL_modz00_2507)),
															(int) (BgL_restz00_2509));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2499) (BgL_method3673z00_2499,
							(obj_t) (BgL_arg3884z00_1631), BEOA);
					}
				}
			}
		}
	}



/* bdb!-box-set!3699 */
	obj_t BGl_bdbz12zd2boxzd2setz123699z00zzbdb_emitz00(obj_t BgL_envz00_2587,
		obj_t BgL_nodez00_2588)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 310 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1619;

				BgL_nodez00_1619 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2588);
				{	/* Bdb/bdb_emit.scm 311 */
					BgL_nodez00_bglt BgL_arg3881z00_2442;

					BgL_arg3881z00_2442 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1619))->BgL_valuez00);
					{	/* Bdb/bdb_emit.scm 311 */
						obj_t BgL_method3673z00_2445;

						{	/* Bdb/bdb_emit.scm 311 */
							BgL_objectz00_bglt BgL_objz00_2446;

							BgL_objz00_2446 = (BgL_objectz00_bglt) (BgL_arg3881z00_2442);
							{	/* Bdb/bdb_emit.scm 311 */
								long BgL_objzd2classzd2numz00_2447;

								BgL_objzd2classzd2numz00_2447 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2446);
								{	/* Bdb/bdb_emit.scm 311 */
									obj_t BgL_arg2643z00_2448;

									BgL_arg2643z00_2448 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 311 */
										obj_t BgL_arrayz00_2450;

										int BgL_offsetz00_2451;

										BgL_arrayz00_2450 = BgL_arg2643z00_2448;
										BgL_offsetz00_2451 = (int) (BgL_objzd2classzd2numz00_2447);
										{	/* Bdb/bdb_emit.scm 311 */
											long BgL_offsetz00_2452;

											BgL_offsetz00_2452 =
												((long) (BgL_offsetz00_2451) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 311 */
												long BgL_modz00_2453;

												{	/* Bdb/bdb_emit.scm 311 */
													int BgL_arg2645z00_2454;

													BgL_arg2645z00_2454 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 311 */
														long BgL_auxz00_3139;

														BgL_auxz00_3139 = (long) (BgL_arg2645z00_2454);
														BgL_modz00_2453 =
															(BgL_offsetz00_2452 / BgL_auxz00_3139);
												}}
												{	/* Bdb/bdb_emit.scm 311 */
													long BgL_restz00_2455;

													{	/* Bdb/bdb_emit.scm 311 */
														int BgL_arg2644z00_2456;

														BgL_arg2644z00_2456 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 311 */
															long BgL_auxz00_3143;

															BgL_auxz00_3143 = (long) (BgL_arg2644z00_2456);
															BgL_restz00_2455 =
																(BgL_offsetz00_2452 % BgL_auxz00_3143);
													}}
													{	/* Bdb/bdb_emit.scm 311 */

														BgL_method3673z00_2445 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2450,
																(int) (BgL_modz00_2453)),
															(int) (BgL_restz00_2455));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2445) (BgL_method3673z00_2445,
							(obj_t) (BgL_arg3881z00_2442), BEOA);
					}
				}
			}
		}
	}



/* bdb!-make-box3697 */
	obj_t BGl_bdbz12zd2makezd2box3697z12zzbdb_emitz00(obj_t BgL_envz00_2589,
		obj_t BgL_nodez00_2590)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 303 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1612;

				BgL_nodez00_1612 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2590);
				{	/* Bdb/bdb_emit.scm 304 */
					BgL_nodez00_bglt BgL_arg3879z00_2413;

					BgL_arg3879z00_2413 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1612))->BgL_valuez00);
					{	/* Bdb/bdb_emit.scm 304 */
						obj_t BgL_method3673z00_2416;

						{	/* Bdb/bdb_emit.scm 304 */
							BgL_objectz00_bglt BgL_objz00_2417;

							BgL_objz00_2417 = (BgL_objectz00_bglt) (BgL_arg3879z00_2413);
							{	/* Bdb/bdb_emit.scm 304 */
								long BgL_objzd2classzd2numz00_2418;

								BgL_objzd2classzd2numz00_2418 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2417);
								{	/* Bdb/bdb_emit.scm 304 */
									obj_t BgL_arg2643z00_2419;

									BgL_arg2643z00_2419 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 304 */
										obj_t BgL_arrayz00_2421;

										int BgL_offsetz00_2422;

										BgL_arrayz00_2421 = BgL_arg2643z00_2419;
										BgL_offsetz00_2422 = (int) (BgL_objzd2classzd2numz00_2418);
										{	/* Bdb/bdb_emit.scm 304 */
											long BgL_offsetz00_2423;

											BgL_offsetz00_2423 =
												((long) (BgL_offsetz00_2422) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 304 */
												long BgL_modz00_2424;

												{	/* Bdb/bdb_emit.scm 304 */
													int BgL_arg2645z00_2425;

													BgL_arg2645z00_2425 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 304 */
														long BgL_auxz00_3163;

														BgL_auxz00_3163 = (long) (BgL_arg2645z00_2425);
														BgL_modz00_2424 =
															(BgL_offsetz00_2423 / BgL_auxz00_3163);
												}}
												{	/* Bdb/bdb_emit.scm 304 */
													long BgL_restz00_2426;

													{	/* Bdb/bdb_emit.scm 304 */
														int BgL_arg2644z00_2427;

														BgL_arg2644z00_2427 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 304 */
															long BgL_auxz00_3167;

															BgL_auxz00_3167 = (long) (BgL_arg2644z00_2427);
															BgL_restz00_2426 =
																(BgL_offsetz00_2423 % BgL_auxz00_3167);
													}}
													{	/* Bdb/bdb_emit.scm 304 */

														BgL_method3673z00_2416 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2421,
																(int) (BgL_modz00_2424)),
															(int) (BgL_restz00_2426));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2416) (BgL_method3673z00_2416,
							(obj_t) (BgL_arg3879z00_2413), BEOA);
					}
				}
			}
		}
	}



/* bdb!-jump-ex-it3695 */
	obj_t BGl_bdbz12zd2jumpzd2exzd2it3695zc0zzbdb_emitz00(obj_t BgL_envz00_2591,
		obj_t BgL_nodez00_2592)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 295 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1604;

				BgL_nodez00_1604 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2592);
				{	/* Bdb/bdb_emit.scm 297 */
					BgL_nodez00_bglt BgL_arg3876z00_1608;

					BgL_arg3876z00_1608 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1604))->
						BgL_exitz00);
					{	/* Bdb/bdb_emit.scm 297 */
						obj_t BgL_method3673z00_2360;

						{	/* Bdb/bdb_emit.scm 297 */
							BgL_objectz00_bglt BgL_objz00_2361;

							BgL_objz00_2361 = (BgL_objectz00_bglt) (BgL_arg3876z00_1608);
							{	/* Bdb/bdb_emit.scm 297 */
								long BgL_objzd2classzd2numz00_2362;

								BgL_objzd2classzd2numz00_2362 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2361);
								{	/* Bdb/bdb_emit.scm 297 */
									obj_t BgL_arg2643z00_2363;

									BgL_arg2643z00_2363 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 297 */
										obj_t BgL_arrayz00_2365;

										int BgL_offsetz00_2366;

										BgL_arrayz00_2365 = BgL_arg2643z00_2363;
										BgL_offsetz00_2366 = (int) (BgL_objzd2classzd2numz00_2362);
										{	/* Bdb/bdb_emit.scm 297 */
											long BgL_offsetz00_2367;

											BgL_offsetz00_2367 =
												((long) (BgL_offsetz00_2366) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 297 */
												long BgL_modz00_2368;

												{	/* Bdb/bdb_emit.scm 297 */
													int BgL_arg2645z00_2369;

													BgL_arg2645z00_2369 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 297 */
														long BgL_auxz00_3187;

														BgL_auxz00_3187 = (long) (BgL_arg2645z00_2369);
														BgL_modz00_2368 =
															(BgL_offsetz00_2367 / BgL_auxz00_3187);
												}}
												{	/* Bdb/bdb_emit.scm 297 */
													long BgL_restz00_2370;

													{	/* Bdb/bdb_emit.scm 297 */
														int BgL_arg2644z00_2371;

														BgL_arg2644z00_2371 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 297 */
															long BgL_auxz00_3191;

															BgL_auxz00_3191 = (long) (BgL_arg2644z00_2371);
															BgL_restz00_2370 =
																(BgL_offsetz00_2367 % BgL_auxz00_3191);
													}}
													{	/* Bdb/bdb_emit.scm 297 */

														BgL_method3673z00_2360 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2365,
																(int) (BgL_modz00_2368)),
															(int) (BgL_restz00_2370));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2360) (BgL_method3673z00_2360,
							(obj_t) (BgL_arg3876z00_1608), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 298 */
					BgL_nodez00_bglt BgL_arg3877z00_1609;

					BgL_arg3877z00_1609 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1604))->
						BgL_valuez00);
					{	/* Bdb/bdb_emit.scm 298 */
						obj_t BgL_method3673z00_2387;

						{	/* Bdb/bdb_emit.scm 298 */
							BgL_objectz00_bglt BgL_objz00_2388;

							BgL_objz00_2388 = (BgL_objectz00_bglt) (BgL_arg3877z00_1609);
							{	/* Bdb/bdb_emit.scm 298 */
								long BgL_objzd2classzd2numz00_2389;

								BgL_objzd2classzd2numz00_2389 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2388);
								{	/* Bdb/bdb_emit.scm 298 */
									obj_t BgL_arg2643z00_2390;

									BgL_arg2643z00_2390 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 298 */
										obj_t BgL_arrayz00_2392;

										int BgL_offsetz00_2393;

										BgL_arrayz00_2392 = BgL_arg2643z00_2390;
										BgL_offsetz00_2393 = (int) (BgL_objzd2classzd2numz00_2389);
										{	/* Bdb/bdb_emit.scm 298 */
											long BgL_offsetz00_2394;

											BgL_offsetz00_2394 =
												((long) (BgL_offsetz00_2393) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 298 */
												long BgL_modz00_2395;

												{	/* Bdb/bdb_emit.scm 298 */
													int BgL_arg2645z00_2396;

													BgL_arg2645z00_2396 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 298 */
														long BgL_auxz00_3210;

														BgL_auxz00_3210 = (long) (BgL_arg2645z00_2396);
														BgL_modz00_2395 =
															(BgL_offsetz00_2394 / BgL_auxz00_3210);
												}}
												{	/* Bdb/bdb_emit.scm 298 */
													long BgL_restz00_2397;

													{	/* Bdb/bdb_emit.scm 298 */
														int BgL_arg2644z00_2398;

														BgL_arg2644z00_2398 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 298 */
															long BgL_auxz00_3214;

															BgL_auxz00_3214 = (long) (BgL_arg2644z00_2398);
															BgL_restz00_2397 =
																(BgL_offsetz00_2394 % BgL_auxz00_3214);
													}}
													{	/* Bdb/bdb_emit.scm 298 */

														BgL_method3673z00_2387 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2392,
																(int) (BgL_modz00_2395)),
															(int) (BgL_restz00_2397));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2387) (BgL_method3673z00_2387,
							(obj_t) (BgL_arg3877z00_1609), BEOA);
					}
				}
			}
		}
	}



/* bdb!-set-ex-it3693 */
	obj_t BGl_bdbz12zd2setzd2exzd2it3693zc0zzbdb_emitz00(obj_t BgL_envz00_2593,
		obj_t BgL_nodez00_2594)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 288 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1597;

				BgL_nodez00_1597 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2594);
				{	/* Bdb/bdb_emit.scm 289 */
					BgL_nodez00_bglt BgL_arg3874z00_2330;

					BgL_arg3874z00_2330 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1597))->BgL_bodyz00);
					{	/* Bdb/bdb_emit.scm 289 */
						obj_t BgL_method3673z00_2333;

						{	/* Bdb/bdb_emit.scm 289 */
							BgL_objectz00_bglt BgL_objz00_2334;

							BgL_objz00_2334 = (BgL_objectz00_bglt) (BgL_arg3874z00_2330);
							{	/* Bdb/bdb_emit.scm 289 */
								long BgL_objzd2classzd2numz00_2335;

								BgL_objzd2classzd2numz00_2335 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2334);
								{	/* Bdb/bdb_emit.scm 289 */
									obj_t BgL_arg2643z00_2336;

									BgL_arg2643z00_2336 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 289 */
										obj_t BgL_arrayz00_2338;

										int BgL_offsetz00_2339;

										BgL_arrayz00_2338 = BgL_arg2643z00_2336;
										BgL_offsetz00_2339 = (int) (BgL_objzd2classzd2numz00_2335);
										{	/* Bdb/bdb_emit.scm 289 */
											long BgL_offsetz00_2340;

											BgL_offsetz00_2340 =
												((long) (BgL_offsetz00_2339) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 289 */
												long BgL_modz00_2341;

												{	/* Bdb/bdb_emit.scm 289 */
													int BgL_arg2645z00_2342;

													BgL_arg2645z00_2342 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 289 */
														long BgL_auxz00_3234;

														BgL_auxz00_3234 = (long) (BgL_arg2645z00_2342);
														BgL_modz00_2341 =
															(BgL_offsetz00_2340 / BgL_auxz00_3234);
												}}
												{	/* Bdb/bdb_emit.scm 289 */
													long BgL_restz00_2343;

													{	/* Bdb/bdb_emit.scm 289 */
														int BgL_arg2644z00_2344;

														BgL_arg2644z00_2344 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 289 */
															long BgL_auxz00_3238;

															BgL_auxz00_3238 = (long) (BgL_arg2644z00_2344);
															BgL_restz00_2343 =
																(BgL_offsetz00_2340 % BgL_auxz00_3238);
													}}
													{	/* Bdb/bdb_emit.scm 289 */

														BgL_method3673z00_2333 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2338,
																(int) (BgL_modz00_2341)),
															(int) (BgL_restz00_2343));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2333) (BgL_method3673z00_2333,
							(obj_t) (BgL_arg3874z00_2330), BEOA);
					}
				}
			}
		}
	}



/* bdb!-let-var3691 */
	obj_t BGl_bdbz12zd2letzd2var3691z12zzbdb_emitz00(obj_t BgL_envz00_2595,
		obj_t BgL_nodez00_2596)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 276 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1579;

				BgL_nodez00_1579 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2596);
				{	/* Bdb/bdb_emit.scm 278 */
					obj_t BgL_g3671z00_1583;

					BgL_g3671z00_1583 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1579))->BgL_bindingsz00);
					{
						obj_t BgL_l3669z00_1585;

						BgL_l3669z00_1585 = BgL_g3671z00_1583;
					BgL_zc3anonymousza33867ze3z83_1586:
						if (PAIRP(BgL_l3669z00_1585))
							{	/* Bdb/bdb_emit.scm 278 */
								{	/* Bdb/bdb_emit.scm 279 */
									obj_t BgL_bindingz00_1588;

									BgL_bindingz00_1588 = CAR(BgL_l3669z00_1585);
									{	/* Bdb/bdb_emit.scm 280 */
										obj_t BgL_arg3869z00_1590;

										BgL_arg3869z00_1590 = CDR(BgL_bindingz00_1588);
										{	/* Bdb/bdb_emit.scm 280 */
											BgL_nodez00_bglt BgL_nodez00_2274;

											BgL_nodez00_2274 =
												(BgL_nodez00_bglt) (BgL_arg3869z00_1590);
											{	/* Bdb/bdb_emit.scm 280 */
												obj_t BgL_method3673z00_2275;

												{	/* Bdb/bdb_emit.scm 280 */
													BgL_objectz00_bglt BgL_objz00_2276;

													BgL_objz00_2276 =
														(BgL_objectz00_bglt) (BgL_nodez00_2274);
													{	/* Bdb/bdb_emit.scm 280 */
														long BgL_objzd2classzd2numz00_2277;

														BgL_objzd2classzd2numz00_2277 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2276);
														{	/* Bdb/bdb_emit.scm 280 */
															obj_t BgL_arg2643z00_2278;

															BgL_arg2643z00_2278 =
																PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
																(int) (((long) 1)));
															{	/* Bdb/bdb_emit.scm 280 */
																obj_t BgL_arrayz00_2280;

																int BgL_offsetz00_2281;

																BgL_arrayz00_2280 = BgL_arg2643z00_2278;
																BgL_offsetz00_2281 =
																	(int) (BgL_objzd2classzd2numz00_2277);
																{	/* Bdb/bdb_emit.scm 280 */
																	long BgL_offsetz00_2282;

																	BgL_offsetz00_2282 =
																		((long) (BgL_offsetz00_2281) - OBJECT_TYPE);
																	{	/* Bdb/bdb_emit.scm 280 */
																		long BgL_modz00_2283;

																		{	/* Bdb/bdb_emit.scm 280 */
																			int BgL_arg2645z00_2284;

																			BgL_arg2645z00_2284 = (int) (((long) 16));
																			{	/* Bdb/bdb_emit.scm 280 */
																				long BgL_auxz00_3263;

																				BgL_auxz00_3263 =
																					(long) (BgL_arg2645z00_2284);
																				BgL_modz00_2283 =
																					(BgL_offsetz00_2282 /
																					BgL_auxz00_3263);
																		}}
																		{	/* Bdb/bdb_emit.scm 280 */
																			long BgL_restz00_2285;

																			{	/* Bdb/bdb_emit.scm 280 */
																				int BgL_arg2644z00_2286;

																				BgL_arg2644z00_2286 =
																					(int) (((long) 16));
																				{	/* Bdb/bdb_emit.scm 280 */
																					long BgL_auxz00_3267;

																					BgL_auxz00_3267 =
																						(long) (BgL_arg2644z00_2286);
																					BgL_restz00_2285 =
																						(BgL_offsetz00_2282 %
																						BgL_auxz00_3267);
																			}}
																			{	/* Bdb/bdb_emit.scm 280 */

																				BgL_method3673z00_2275 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2280,
																						(int) (BgL_modz00_2283)),
																					(int) (BgL_restz00_2285));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3673z00_2275)
													(BgL_method3673z00_2275, (obj_t) (BgL_nodez00_2274),
													BEOA);
									}}}
									BGl_bdbzd2emitzd2localzd2infoz12zc0zzbdb_emitz00(CAR
										(BgL_bindingz00_1588));
								}
								{
									obj_t BgL_l3669z00_3279;

									BgL_l3669z00_3279 = CDR(BgL_l3669z00_1585);
									BgL_l3669z00_1585 = BgL_l3669z00_3279;
									goto BgL_zc3anonymousza33867ze3z83_1586;
								}
							}
						else
							{	/* Bdb/bdb_emit.scm 278 */
								((bool_t) 1);
							}
					}
				}
				{	/* Bdb/bdb_emit.scm 283 */
					BgL_nodez00_bglt BgL_arg3872z00_1594;

					BgL_arg3872z00_1594 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1579))->BgL_bodyz00);
					{	/* Bdb/bdb_emit.scm 283 */
						obj_t BgL_method3673z00_2304;

						{	/* Bdb/bdb_emit.scm 283 */
							BgL_objectz00_bglt BgL_objz00_2305;

							BgL_objz00_2305 = (BgL_objectz00_bglt) (BgL_arg3872z00_1594);
							{	/* Bdb/bdb_emit.scm 283 */
								long BgL_objzd2classzd2numz00_2306;

								BgL_objzd2classzd2numz00_2306 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2305);
								{	/* Bdb/bdb_emit.scm 283 */
									obj_t BgL_arg2643z00_2307;

									BgL_arg2643z00_2307 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 283 */
										obj_t BgL_arrayz00_2309;

										int BgL_offsetz00_2310;

										BgL_arrayz00_2309 = BgL_arg2643z00_2307;
										BgL_offsetz00_2310 = (int) (BgL_objzd2classzd2numz00_2306);
										{	/* Bdb/bdb_emit.scm 283 */
											long BgL_offsetz00_2311;

											BgL_offsetz00_2311 =
												((long) (BgL_offsetz00_2310) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 283 */
												long BgL_modz00_2312;

												{	/* Bdb/bdb_emit.scm 283 */
													int BgL_arg2645z00_2313;

													BgL_arg2645z00_2313 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 283 */
														long BgL_auxz00_3290;

														BgL_auxz00_3290 = (long) (BgL_arg2645z00_2313);
														BgL_modz00_2312 =
															(BgL_offsetz00_2311 / BgL_auxz00_3290);
												}}
												{	/* Bdb/bdb_emit.scm 283 */
													long BgL_restz00_2314;

													{	/* Bdb/bdb_emit.scm 283 */
														int BgL_arg2644z00_2315;

														BgL_arg2644z00_2315 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 283 */
															long BgL_auxz00_3294;

															BgL_auxz00_3294 = (long) (BgL_arg2644z00_2315);
															BgL_restz00_2314 =
																(BgL_offsetz00_2311 % BgL_auxz00_3294);
													}}
													{	/* Bdb/bdb_emit.scm 283 */

														BgL_method3673z00_2304 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2309,
																(int) (BgL_modz00_2312)),
															(int) (BgL_restz00_2314));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2304) (BgL_method3673z00_2304,
							(obj_t) (BgL_arg3872z00_1594), BEOA);
					}
				}
			}
		}
	}



/* bdb!-let-fun3689 */
	obj_t BGl_bdbz12zd2letzd2fun3689z12zzbdb_emitz00(obj_t BgL_envz00_2597,
		obj_t BgL_nodez00_2598)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 266 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1563;

				BgL_nodez00_1563 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2598);
				{	/* Bdb/bdb_emit.scm 268 */
					obj_t BgL_g3668z00_1567;

					BgL_g3668z00_1567 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1563))->BgL_localsz00);
					{
						obj_t BgL_l3666z00_1569;

						BgL_l3666z00_1569 = BgL_g3668z00_1567;
					BgL_zc3anonymousza33861ze3z83_1570:
						if (PAIRP(BgL_l3666z00_1569))
							{	/* Bdb/bdb_emit.scm 268 */
								{	/* Bdb/bdb_emit.scm 269 */
									obj_t BgL_localz00_1572;

									BgL_localz00_1572 = CAR(BgL_l3666z00_1569);
									{	/* Bdb/bdb_emit.scm 269 */
										BgL_valuez00_bglt BgL_arg3863z00_1573;

										{
											BgL_variablez00_bglt BgL_auxz00_3309;

											BgL_auxz00_3309 =
												(BgL_variablez00_bglt) (BgL_localz00_1572);
											BgL_arg3863z00_1573 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3309))->
												BgL_valuez00);
										}
										BGl_bdbzd2sfunz12zc0zzbdb_emitz00(BgL_arg3863z00_1573);
									}
								}
								{
									obj_t BgL_l3666z00_3313;

									BgL_l3666z00_3313 = CDR(BgL_l3666z00_1569);
									BgL_l3666z00_1569 = BgL_l3666z00_3313;
									goto BgL_zc3anonymousza33861ze3z83_1570;
								}
							}
						else
							{	/* Bdb/bdb_emit.scm 268 */
								((bool_t) 1);
							}
					}
				}
				{	/* Bdb/bdb_emit.scm 271 */
					BgL_nodez00_bglt BgL_arg3865z00_1576;

					BgL_arg3865z00_1576 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1563))->BgL_bodyz00);
					{	/* Bdb/bdb_emit.scm 271 */
						obj_t BgL_method3673z00_2244;

						{	/* Bdb/bdb_emit.scm 271 */
							BgL_objectz00_bglt BgL_objz00_2245;

							BgL_objz00_2245 = (BgL_objectz00_bglt) (BgL_arg3865z00_1576);
							{	/* Bdb/bdb_emit.scm 271 */
								long BgL_objzd2classzd2numz00_2246;

								BgL_objzd2classzd2numz00_2246 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2245);
								{	/* Bdb/bdb_emit.scm 271 */
									obj_t BgL_arg2643z00_2247;

									BgL_arg2643z00_2247 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 271 */
										obj_t BgL_arrayz00_2249;

										int BgL_offsetz00_2250;

										BgL_arrayz00_2249 = BgL_arg2643z00_2247;
										BgL_offsetz00_2250 = (int) (BgL_objzd2classzd2numz00_2246);
										{	/* Bdb/bdb_emit.scm 271 */
											long BgL_offsetz00_2251;

											BgL_offsetz00_2251 =
												((long) (BgL_offsetz00_2250) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 271 */
												long BgL_modz00_2252;

												{	/* Bdb/bdb_emit.scm 271 */
													int BgL_arg2645z00_2253;

													BgL_arg2645z00_2253 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 271 */
														long BgL_auxz00_3324;

														BgL_auxz00_3324 = (long) (BgL_arg2645z00_2253);
														BgL_modz00_2252 =
															(BgL_offsetz00_2251 / BgL_auxz00_3324);
												}}
												{	/* Bdb/bdb_emit.scm 271 */
													long BgL_restz00_2254;

													{	/* Bdb/bdb_emit.scm 271 */
														int BgL_arg2644z00_2255;

														BgL_arg2644z00_2255 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 271 */
															long BgL_auxz00_3328;

															BgL_auxz00_3328 = (long) (BgL_arg2644z00_2255);
															BgL_restz00_2254 =
																(BgL_offsetz00_2251 % BgL_auxz00_3328);
													}}
													{	/* Bdb/bdb_emit.scm 271 */

														BgL_method3673z00_2244 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2249,
																(int) (BgL_modz00_2252)),
															(int) (BgL_restz00_2254));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2244) (BgL_method3673z00_2244,
							(obj_t) (BgL_arg3865z00_1576), BEOA);
					}
				}
			}
		}
	}



/* bdb!-select3687 */
	obj_t BGl_bdbz12zd2select3687zc0zzbdb_emitz00(obj_t BgL_envz00_2599,
		obj_t BgL_nodez00_2600)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 258 */
			{
				BgL_selectz00_bglt BgL_nodez00_1547;

				{	/* Bdb/bdb_emit.scm 259 */
					bool_t BgL_auxz00_3339;

					BgL_nodez00_1547 = (BgL_selectz00_bglt) (BgL_nodez00_2600);
					{	/* Bdb/bdb_emit.scm 260 */
						BgL_nodez00_bglt BgL_arg3855z00_1551;

						BgL_arg3855z00_1551 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1547))->BgL_testz00);
						{	/* Bdb/bdb_emit.scm 260 */
							obj_t BgL_method3673z00_2181;

							{	/* Bdb/bdb_emit.scm 260 */
								BgL_objectz00_bglt BgL_objz00_2182;

								BgL_objz00_2182 = (BgL_objectz00_bglt) (BgL_arg3855z00_1551);
								{	/* Bdb/bdb_emit.scm 260 */
									long BgL_objzd2classzd2numz00_2183;

									BgL_objzd2classzd2numz00_2183 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2182);
									{	/* Bdb/bdb_emit.scm 260 */
										obj_t BgL_arg2643z00_2184;

										BgL_arg2643z00_2184 =
											PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
											(int) (((long) 1)));
										{	/* Bdb/bdb_emit.scm 260 */
											obj_t BgL_arrayz00_2186;

											int BgL_offsetz00_2187;

											BgL_arrayz00_2186 = BgL_arg2643z00_2184;
											BgL_offsetz00_2187 =
												(int) (BgL_objzd2classzd2numz00_2183);
											{	/* Bdb/bdb_emit.scm 260 */
												long BgL_offsetz00_2188;

												BgL_offsetz00_2188 =
													((long) (BgL_offsetz00_2187) - OBJECT_TYPE);
												{	/* Bdb/bdb_emit.scm 260 */
													long BgL_modz00_2189;

													{	/* Bdb/bdb_emit.scm 260 */
														int BgL_arg2645z00_2190;

														BgL_arg2645z00_2190 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 260 */
															long BgL_auxz00_3349;

															BgL_auxz00_3349 = (long) (BgL_arg2645z00_2190);
															BgL_modz00_2189 =
																(BgL_offsetz00_2188 / BgL_auxz00_3349);
													}}
													{	/* Bdb/bdb_emit.scm 260 */
														long BgL_restz00_2191;

														{	/* Bdb/bdb_emit.scm 260 */
															int BgL_arg2644z00_2192;

															BgL_arg2644z00_2192 = (int) (((long) 16));
															{	/* Bdb/bdb_emit.scm 260 */
																long BgL_auxz00_3353;

																BgL_auxz00_3353 = (long) (BgL_arg2644z00_2192);
																BgL_restz00_2191 =
																	(BgL_offsetz00_2188 % BgL_auxz00_3353);
														}}
														{	/* Bdb/bdb_emit.scm 260 */

															BgL_method3673z00_2181 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2186,
																	(int) (BgL_modz00_2189)),
																(int) (BgL_restz00_2191));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3673z00_2181) (BgL_method3673z00_2181,
								(obj_t) (BgL_arg3855z00_1551), BEOA);
					}}
					{	/* Bdb/bdb_emit.scm 261 */
						obj_t BgL_g3665z00_1552;

						BgL_g3665z00_1552 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1547))->BgL_clausesz00);
						{
							obj_t BgL_l3663z00_1554;

							BgL_l3663z00_1554 = BgL_g3665z00_1552;
						BgL_zc3anonymousza33856ze3z83_1555:
							if (PAIRP(BgL_l3663z00_1554))
								{	/* Bdb/bdb_emit.scm 261 */
									{	/* Bdb/bdb_emit.scm 261 */
										obj_t BgL_clausez00_1557;

										BgL_clausez00_1557 = CAR(BgL_l3663z00_1554);
										{	/* Bdb/bdb_emit.scm 261 */
											obj_t BgL_arg3858z00_1558;

											BgL_arg3858z00_1558 = CDR(BgL_clausez00_1557);
											{	/* Bdb/bdb_emit.scm 261 */
												BgL_nodez00_bglt BgL_nodez00_2210;

												BgL_nodez00_2210 =
													(BgL_nodez00_bglt) (BgL_arg3858z00_1558);
												{	/* Bdb/bdb_emit.scm 261 */
													obj_t BgL_method3673z00_2211;

													{	/* Bdb/bdb_emit.scm 261 */
														BgL_objectz00_bglt BgL_objz00_2212;

														BgL_objz00_2212 =
															(BgL_objectz00_bglt) (BgL_nodez00_2210);
														{	/* Bdb/bdb_emit.scm 261 */
															long BgL_objzd2classzd2numz00_2213;

															BgL_objzd2classzd2numz00_2213 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2212);
															{	/* Bdb/bdb_emit.scm 261 */
																obj_t BgL_arg2643z00_2214;

																BgL_arg2643z00_2214 =
																	PROCEDURE_REF
																	(BGl_bdbz12zd2envzc0zzbdb_emitz00,
																	(int) (((long) 1)));
																{	/* Bdb/bdb_emit.scm 261 */
																	obj_t BgL_arrayz00_2216;

																	int BgL_offsetz00_2217;

																	BgL_arrayz00_2216 = BgL_arg2643z00_2214;
																	BgL_offsetz00_2217 =
																		(int) (BgL_objzd2classzd2numz00_2213);
																	{	/* Bdb/bdb_emit.scm 261 */
																		long BgL_offsetz00_2218;

																		BgL_offsetz00_2218 =
																			(
																			(long) (BgL_offsetz00_2217) -
																			OBJECT_TYPE);
																		{	/* Bdb/bdb_emit.scm 261 */
																			long BgL_modz00_2219;

																			{	/* Bdb/bdb_emit.scm 261 */
																				int BgL_arg2645z00_2220;

																				BgL_arg2645z00_2220 =
																					(int) (((long) 16));
																				{	/* Bdb/bdb_emit.scm 261 */
																					long BgL_auxz00_3377;

																					BgL_auxz00_3377 =
																						(long) (BgL_arg2645z00_2220);
																					BgL_modz00_2219 =
																						(BgL_offsetz00_2218 /
																						BgL_auxz00_3377);
																			}}
																			{	/* Bdb/bdb_emit.scm 261 */
																				long BgL_restz00_2221;

																				{	/* Bdb/bdb_emit.scm 261 */
																					int BgL_arg2644z00_2222;

																					BgL_arg2644z00_2222 =
																						(int) (((long) 16));
																					{	/* Bdb/bdb_emit.scm 261 */
																						long BgL_auxz00_3381;

																						BgL_auxz00_3381 =
																							(long) (BgL_arg2644z00_2222);
																						BgL_restz00_2221 =
																							(BgL_offsetz00_2218 %
																							BgL_auxz00_3381);
																				}}
																				{	/* Bdb/bdb_emit.scm 261 */

																					BgL_method3673z00_2211 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2216,
																							(int) (BgL_modz00_2219)),
																						(int) (BgL_restz00_2221));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3673z00_2211)
														(BgL_method3673z00_2211, (obj_t) (BgL_nodez00_2210),
														BEOA);
									}}}}
									{
										obj_t BgL_l3663z00_3391;

										BgL_l3663z00_3391 = CDR(BgL_l3663z00_1554);
										BgL_l3663z00_1554 = BgL_l3663z00_3391;
										goto BgL_zc3anonymousza33856ze3z83_1555;
									}
								}
							else
								{	/* Bdb/bdb_emit.scm 261 */
									BgL_auxz00_3339 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3339);
				}
			}
		}
	}



/* bdb!-fail3685 */
	obj_t BGl_bdbz12zd2fail3685zc0zzbdb_emitz00(obj_t BgL_envz00_2601,
		obj_t BgL_nodez00_2602)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 249 */
			{
				BgL_failz00_bglt BgL_nodez00_1538;

				BgL_nodez00_1538 = (BgL_failz00_bglt) (BgL_nodez00_2602);
				{	/* Bdb/bdb_emit.scm 251 */
					BgL_nodez00_bglt BgL_arg3851z00_1542;

					BgL_arg3851z00_1542 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1538))->BgL_procz00);
					{	/* Bdb/bdb_emit.scm 251 */
						obj_t BgL_method3673z00_2100;

						{	/* Bdb/bdb_emit.scm 251 */
							BgL_objectz00_bglt BgL_objz00_2101;

							BgL_objz00_2101 = (BgL_objectz00_bglt) (BgL_arg3851z00_1542);
							{	/* Bdb/bdb_emit.scm 251 */
								long BgL_objzd2classzd2numz00_2102;

								BgL_objzd2classzd2numz00_2102 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2101);
								{	/* Bdb/bdb_emit.scm 251 */
									obj_t BgL_arg2643z00_2103;

									BgL_arg2643z00_2103 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 251 */
										obj_t BgL_arrayz00_2105;

										int BgL_offsetz00_2106;

										BgL_arrayz00_2105 = BgL_arg2643z00_2103;
										BgL_offsetz00_2106 = (int) (BgL_objzd2classzd2numz00_2102);
										{	/* Bdb/bdb_emit.scm 251 */
											long BgL_offsetz00_2107;

											BgL_offsetz00_2107 =
												((long) (BgL_offsetz00_2106) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 251 */
												long BgL_modz00_2108;

												{	/* Bdb/bdb_emit.scm 251 */
													int BgL_arg2645z00_2109;

													BgL_arg2645z00_2109 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 251 */
														long BgL_auxz00_3404;

														BgL_auxz00_3404 = (long) (BgL_arg2645z00_2109);
														BgL_modz00_2108 =
															(BgL_offsetz00_2107 / BgL_auxz00_3404);
												}}
												{	/* Bdb/bdb_emit.scm 251 */
													long BgL_restz00_2110;

													{	/* Bdb/bdb_emit.scm 251 */
														int BgL_arg2644z00_2111;

														BgL_arg2644z00_2111 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 251 */
															long BgL_auxz00_3408;

															BgL_auxz00_3408 = (long) (BgL_arg2644z00_2111);
															BgL_restz00_2110 =
																(BgL_offsetz00_2107 % BgL_auxz00_3408);
													}}
													{	/* Bdb/bdb_emit.scm 251 */

														BgL_method3673z00_2100 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2105,
																(int) (BgL_modz00_2108)),
															(int) (BgL_restz00_2110));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2100) (BgL_method3673z00_2100,
							(obj_t) (BgL_arg3851z00_1542), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 252 */
					BgL_nodez00_bglt BgL_arg3852z00_1543;

					BgL_arg3852z00_1543 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1538))->BgL_msgz00);
					{	/* Bdb/bdb_emit.scm 252 */
						obj_t BgL_method3673z00_2127;

						{	/* Bdb/bdb_emit.scm 252 */
							BgL_objectz00_bglt BgL_objz00_2128;

							BgL_objz00_2128 = (BgL_objectz00_bglt) (BgL_arg3852z00_1543);
							{	/* Bdb/bdb_emit.scm 252 */
								long BgL_objzd2classzd2numz00_2129;

								BgL_objzd2classzd2numz00_2129 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2128);
								{	/* Bdb/bdb_emit.scm 252 */
									obj_t BgL_arg2643z00_2130;

									BgL_arg2643z00_2130 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 252 */
										obj_t BgL_arrayz00_2132;

										int BgL_offsetz00_2133;

										BgL_arrayz00_2132 = BgL_arg2643z00_2130;
										BgL_offsetz00_2133 = (int) (BgL_objzd2classzd2numz00_2129);
										{	/* Bdb/bdb_emit.scm 252 */
											long BgL_offsetz00_2134;

											BgL_offsetz00_2134 =
												((long) (BgL_offsetz00_2133) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 252 */
												long BgL_modz00_2135;

												{	/* Bdb/bdb_emit.scm 252 */
													int BgL_arg2645z00_2136;

													BgL_arg2645z00_2136 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 252 */
														long BgL_auxz00_3427;

														BgL_auxz00_3427 = (long) (BgL_arg2645z00_2136);
														BgL_modz00_2135 =
															(BgL_offsetz00_2134 / BgL_auxz00_3427);
												}}
												{	/* Bdb/bdb_emit.scm 252 */
													long BgL_restz00_2137;

													{	/* Bdb/bdb_emit.scm 252 */
														int BgL_arg2644z00_2138;

														BgL_arg2644z00_2138 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 252 */
															long BgL_auxz00_3431;

															BgL_auxz00_3431 = (long) (BgL_arg2644z00_2138);
															BgL_restz00_2137 =
																(BgL_offsetz00_2134 % BgL_auxz00_3431);
													}}
													{	/* Bdb/bdb_emit.scm 252 */

														BgL_method3673z00_2127 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2132,
																(int) (BgL_modz00_2135)),
															(int) (BgL_restz00_2137));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2127) (BgL_method3673z00_2127,
							(obj_t) (BgL_arg3852z00_1543), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 253 */
					BgL_nodez00_bglt BgL_arg3853z00_1544;

					BgL_arg3853z00_1544 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1538))->BgL_objz00);
					{	/* Bdb/bdb_emit.scm 253 */
						obj_t BgL_method3673z00_2154;

						{	/* Bdb/bdb_emit.scm 253 */
							BgL_objectz00_bglt BgL_objz00_2155;

							BgL_objz00_2155 = (BgL_objectz00_bglt) (BgL_arg3853z00_1544);
							{	/* Bdb/bdb_emit.scm 253 */
								long BgL_objzd2classzd2numz00_2156;

								BgL_objzd2classzd2numz00_2156 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2155);
								{	/* Bdb/bdb_emit.scm 253 */
									obj_t BgL_arg2643z00_2157;

									BgL_arg2643z00_2157 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 253 */
										obj_t BgL_arrayz00_2159;

										int BgL_offsetz00_2160;

										BgL_arrayz00_2159 = BgL_arg2643z00_2157;
										BgL_offsetz00_2160 = (int) (BgL_objzd2classzd2numz00_2156);
										{	/* Bdb/bdb_emit.scm 253 */
											long BgL_offsetz00_2161;

											BgL_offsetz00_2161 =
												((long) (BgL_offsetz00_2160) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 253 */
												long BgL_modz00_2162;

												{	/* Bdb/bdb_emit.scm 253 */
													int BgL_arg2645z00_2163;

													BgL_arg2645z00_2163 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 253 */
														long BgL_auxz00_3450;

														BgL_auxz00_3450 = (long) (BgL_arg2645z00_2163);
														BgL_modz00_2162 =
															(BgL_offsetz00_2161 / BgL_auxz00_3450);
												}}
												{	/* Bdb/bdb_emit.scm 253 */
													long BgL_restz00_2164;

													{	/* Bdb/bdb_emit.scm 253 */
														int BgL_arg2644z00_2165;

														BgL_arg2644z00_2165 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 253 */
															long BgL_auxz00_3454;

															BgL_auxz00_3454 = (long) (BgL_arg2644z00_2165);
															BgL_restz00_2164 =
																(BgL_offsetz00_2161 % BgL_auxz00_3454);
													}}
													{	/* Bdb/bdb_emit.scm 253 */

														BgL_method3673z00_2154 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2159,
																(int) (BgL_modz00_2162)),
															(int) (BgL_restz00_2164));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2154) (BgL_method3673z00_2154,
							(obj_t) (BgL_arg3853z00_1544), BEOA);
					}
				}
			}
		}
	}



/* bdb!-conditional3683 */
	obj_t BGl_bdbz12zd2conditional3683zc0zzbdb_emitz00(obj_t BgL_envz00_2603,
		obj_t BgL_nodez00_2604)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 240 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1529;

				BgL_nodez00_1529 = (BgL_conditionalz00_bglt) (BgL_nodez00_2604);
				{	/* Bdb/bdb_emit.scm 242 */
					BgL_nodez00_bglt BgL_arg3847z00_1533;

					BgL_arg3847z00_1533 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1529))->BgL_testz00);
					{	/* Bdb/bdb_emit.scm 242 */
						obj_t BgL_method3673z00_2019;

						{	/* Bdb/bdb_emit.scm 242 */
							BgL_objectz00_bglt BgL_objz00_2020;

							BgL_objz00_2020 = (BgL_objectz00_bglt) (BgL_arg3847z00_1533);
							{	/* Bdb/bdb_emit.scm 242 */
								long BgL_objzd2classzd2numz00_2021;

								BgL_objzd2classzd2numz00_2021 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2020);
								{	/* Bdb/bdb_emit.scm 242 */
									obj_t BgL_arg2643z00_2022;

									BgL_arg2643z00_2022 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 242 */
										obj_t BgL_arrayz00_2024;

										int BgL_offsetz00_2025;

										BgL_arrayz00_2024 = BgL_arg2643z00_2022;
										BgL_offsetz00_2025 = (int) (BgL_objzd2classzd2numz00_2021);
										{	/* Bdb/bdb_emit.scm 242 */
											long BgL_offsetz00_2026;

											BgL_offsetz00_2026 =
												((long) (BgL_offsetz00_2025) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 242 */
												long BgL_modz00_2027;

												{	/* Bdb/bdb_emit.scm 242 */
													int BgL_arg2645z00_2028;

													BgL_arg2645z00_2028 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 242 */
														long BgL_auxz00_3474;

														BgL_auxz00_3474 = (long) (BgL_arg2645z00_2028);
														BgL_modz00_2027 =
															(BgL_offsetz00_2026 / BgL_auxz00_3474);
												}}
												{	/* Bdb/bdb_emit.scm 242 */
													long BgL_restz00_2029;

													{	/* Bdb/bdb_emit.scm 242 */
														int BgL_arg2644z00_2030;

														BgL_arg2644z00_2030 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 242 */
															long BgL_auxz00_3478;

															BgL_auxz00_3478 = (long) (BgL_arg2644z00_2030);
															BgL_restz00_2029 =
																(BgL_offsetz00_2026 % BgL_auxz00_3478);
													}}
													{	/* Bdb/bdb_emit.scm 242 */

														BgL_method3673z00_2019 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2024,
																(int) (BgL_modz00_2027)),
															(int) (BgL_restz00_2029));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2019) (BgL_method3673z00_2019,
							(obj_t) (BgL_arg3847z00_1533), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 243 */
					BgL_nodez00_bglt BgL_arg3848z00_1534;

					BgL_arg3848z00_1534 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1529))->BgL_truez00);
					{	/* Bdb/bdb_emit.scm 243 */
						obj_t BgL_method3673z00_2046;

						{	/* Bdb/bdb_emit.scm 243 */
							BgL_objectz00_bglt BgL_objz00_2047;

							BgL_objz00_2047 = (BgL_objectz00_bglt) (BgL_arg3848z00_1534);
							{	/* Bdb/bdb_emit.scm 243 */
								long BgL_objzd2classzd2numz00_2048;

								BgL_objzd2classzd2numz00_2048 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2047);
								{	/* Bdb/bdb_emit.scm 243 */
									obj_t BgL_arg2643z00_2049;

									BgL_arg2643z00_2049 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 243 */
										obj_t BgL_arrayz00_2051;

										int BgL_offsetz00_2052;

										BgL_arrayz00_2051 = BgL_arg2643z00_2049;
										BgL_offsetz00_2052 = (int) (BgL_objzd2classzd2numz00_2048);
										{	/* Bdb/bdb_emit.scm 243 */
											long BgL_offsetz00_2053;

											BgL_offsetz00_2053 =
												((long) (BgL_offsetz00_2052) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 243 */
												long BgL_modz00_2054;

												{	/* Bdb/bdb_emit.scm 243 */
													int BgL_arg2645z00_2055;

													BgL_arg2645z00_2055 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 243 */
														long BgL_auxz00_3497;

														BgL_auxz00_3497 = (long) (BgL_arg2645z00_2055);
														BgL_modz00_2054 =
															(BgL_offsetz00_2053 / BgL_auxz00_3497);
												}}
												{	/* Bdb/bdb_emit.scm 243 */
													long BgL_restz00_2056;

													{	/* Bdb/bdb_emit.scm 243 */
														int BgL_arg2644z00_2057;

														BgL_arg2644z00_2057 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 243 */
															long BgL_auxz00_3501;

															BgL_auxz00_3501 = (long) (BgL_arg2644z00_2057);
															BgL_restz00_2056 =
																(BgL_offsetz00_2053 % BgL_auxz00_3501);
													}}
													{	/* Bdb/bdb_emit.scm 243 */

														BgL_method3673z00_2046 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2051,
																(int) (BgL_modz00_2054)),
															(int) (BgL_restz00_2056));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3673z00_2046) (BgL_method3673z00_2046,
							(obj_t) (BgL_arg3848z00_1534), BEOA);
				}}
				{	/* Bdb/bdb_emit.scm 244 */
					BgL_nodez00_bglt BgL_arg3849z00_1535;

					BgL_arg3849z00_1535 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1529))->BgL_falsez00);
					{	/* Bdb/bdb_emit.scm 244 */
						obj_t BgL_method3673z00_2073;

						{	/* Bdb/bdb_emit.scm 244 */
							BgL_objectz00_bglt BgL_objz00_2074;

							BgL_objz00_2074 = (BgL_objectz00_bglt) (BgL_arg3849z00_1535);
							{	/* Bdb/bdb_emit.scm 244 */
								long BgL_objzd2classzd2numz00_2075;

								BgL_objzd2classzd2numz00_2075 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2074);
								{	/* Bdb/bdb_emit.scm 244 */
									obj_t BgL_arg2643z00_2076;

									BgL_arg2643z00_2076 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 244 */
										obj_t BgL_arrayz00_2078;

										int BgL_offsetz00_2079;

										BgL_arrayz00_2078 = BgL_arg2643z00_2076;
										BgL_offsetz00_2079 = (int) (BgL_objzd2classzd2numz00_2075);
										{	/* Bdb/bdb_emit.scm 244 */
											long BgL_offsetz00_2080;

											BgL_offsetz00_2080 =
												((long) (BgL_offsetz00_2079) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 244 */
												long BgL_modz00_2081;

												{	/* Bdb/bdb_emit.scm 244 */
													int BgL_arg2645z00_2082;

													BgL_arg2645z00_2082 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 244 */
														long BgL_auxz00_3520;

														BgL_auxz00_3520 = (long) (BgL_arg2645z00_2082);
														BgL_modz00_2081 =
															(BgL_offsetz00_2080 / BgL_auxz00_3520);
												}}
												{	/* Bdb/bdb_emit.scm 244 */
													long BgL_restz00_2083;

													{	/* Bdb/bdb_emit.scm 244 */
														int BgL_arg2644z00_2084;

														BgL_arg2644z00_2084 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 244 */
															long BgL_auxz00_3524;

															BgL_auxz00_3524 = (long) (BgL_arg2644z00_2084);
															BgL_restz00_2083 =
																(BgL_offsetz00_2080 % BgL_auxz00_3524);
													}}
													{	/* Bdb/bdb_emit.scm 244 */

														BgL_method3673z00_2073 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2078,
																(int) (BgL_modz00_2081)),
															(int) (BgL_restz00_2083));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_2073) (BgL_method3673z00_2073,
							(obj_t) (BgL_arg3849z00_1535), BEOA);
					}
				}
			}
		}
	}



/* bdb!-setq3681 */
	obj_t BGl_bdbz12zd2setq3681zc0zzbdb_emitz00(obj_t BgL_envz00_2605,
		obj_t BgL_nodez00_2606)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 233 */
			{
				BgL_setqz00_bglt BgL_nodez00_1522;

				BgL_nodez00_1522 = (BgL_setqz00_bglt) (BgL_nodez00_2606);
				{	/* Bdb/bdb_emit.scm 234 */
					BgL_nodez00_bglt BgL_arg3845z00_1989;

					BgL_arg3845z00_1989 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1522))->BgL_valuez00);
					{	/* Bdb/bdb_emit.scm 234 */
						obj_t BgL_method3673z00_1992;

						{	/* Bdb/bdb_emit.scm 234 */
							BgL_objectz00_bglt BgL_objz00_1993;

							BgL_objz00_1993 = (BgL_objectz00_bglt) (BgL_arg3845z00_1989);
							{	/* Bdb/bdb_emit.scm 234 */
								long BgL_objzd2classzd2numz00_1994;

								BgL_objzd2classzd2numz00_1994 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1993);
								{	/* Bdb/bdb_emit.scm 234 */
									obj_t BgL_arg2643z00_1995;

									BgL_arg2643z00_1995 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 234 */
										obj_t BgL_arrayz00_1997;

										int BgL_offsetz00_1998;

										BgL_arrayz00_1997 = BgL_arg2643z00_1995;
										BgL_offsetz00_1998 = (int) (BgL_objzd2classzd2numz00_1994);
										{	/* Bdb/bdb_emit.scm 234 */
											long BgL_offsetz00_1999;

											BgL_offsetz00_1999 =
												((long) (BgL_offsetz00_1998) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 234 */
												long BgL_modz00_2000;

												{	/* Bdb/bdb_emit.scm 234 */
													int BgL_arg2645z00_2001;

													BgL_arg2645z00_2001 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 234 */
														long BgL_auxz00_3544;

														BgL_auxz00_3544 = (long) (BgL_arg2645z00_2001);
														BgL_modz00_2000 =
															(BgL_offsetz00_1999 / BgL_auxz00_3544);
												}}
												{	/* Bdb/bdb_emit.scm 234 */
													long BgL_restz00_2002;

													{	/* Bdb/bdb_emit.scm 234 */
														int BgL_arg2644z00_2003;

														BgL_arg2644z00_2003 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 234 */
															long BgL_auxz00_3548;

															BgL_auxz00_3548 = (long) (BgL_arg2644z00_2003);
															BgL_restz00_2002 =
																(BgL_offsetz00_1999 % BgL_auxz00_3548);
													}}
													{	/* Bdb/bdb_emit.scm 234 */

														BgL_method3673z00_1992 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1997,
																(int) (BgL_modz00_2000)),
															(int) (BgL_restz00_2002));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_1992) (BgL_method3673z00_1992,
							(obj_t) (BgL_arg3845z00_1989), BEOA);
					}
				}
			}
		}
	}



/* bdb!-cast3679 */
	obj_t BGl_bdbz12zd2cast3679zc0zzbdb_emitz00(obj_t BgL_envz00_2607,
		obj_t BgL_nodez00_2608)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 226 */
			{
				BgL_castz00_bglt BgL_nodez00_1515;

				BgL_nodez00_1515 = (BgL_castz00_bglt) (BgL_nodez00_2608);
				{	/* Bdb/bdb_emit.scm 227 */
					BgL_nodez00_bglt BgL_arg3843z00_1960;

					BgL_arg3843z00_1960 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1515))->BgL_argz00);
					{	/* Bdb/bdb_emit.scm 227 */
						obj_t BgL_method3673z00_1963;

						{	/* Bdb/bdb_emit.scm 227 */
							BgL_objectz00_bglt BgL_objz00_1964;

							BgL_objz00_1964 = (BgL_objectz00_bglt) (BgL_arg3843z00_1960);
							{	/* Bdb/bdb_emit.scm 227 */
								long BgL_objzd2classzd2numz00_1965;

								BgL_objzd2classzd2numz00_1965 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1964);
								{	/* Bdb/bdb_emit.scm 227 */
									obj_t BgL_arg2643z00_1966;

									BgL_arg2643z00_1966 =
										PROCEDURE_REF(BGl_bdbz12zd2envzc0zzbdb_emitz00,
										(int) (((long) 1)));
									{	/* Bdb/bdb_emit.scm 227 */
										obj_t BgL_arrayz00_1968;

										int BgL_offsetz00_1969;

										BgL_arrayz00_1968 = BgL_arg2643z00_1966;
										BgL_offsetz00_1969 = (int) (BgL_objzd2classzd2numz00_1965);
										{	/* Bdb/bdb_emit.scm 227 */
											long BgL_offsetz00_1970;

											BgL_offsetz00_1970 =
												((long) (BgL_offsetz00_1969) - OBJECT_TYPE);
											{	/* Bdb/bdb_emit.scm 227 */
												long BgL_modz00_1971;

												{	/* Bdb/bdb_emit.scm 227 */
													int BgL_arg2645z00_1972;

													BgL_arg2645z00_1972 = (int) (((long) 16));
													{	/* Bdb/bdb_emit.scm 227 */
														long BgL_auxz00_3568;

														BgL_auxz00_3568 = (long) (BgL_arg2645z00_1972);
														BgL_modz00_1971 =
															(BgL_offsetz00_1970 / BgL_auxz00_3568);
												}}
												{	/* Bdb/bdb_emit.scm 227 */
													long BgL_restz00_1973;

													{	/* Bdb/bdb_emit.scm 227 */
														int BgL_arg2644z00_1974;

														BgL_arg2644z00_1974 = (int) (((long) 16));
														{	/* Bdb/bdb_emit.scm 227 */
															long BgL_auxz00_3572;

															BgL_auxz00_3572 = (long) (BgL_arg2644z00_1974);
															BgL_restz00_1973 =
																(BgL_offsetz00_1970 % BgL_auxz00_3572);
													}}
													{	/* Bdb/bdb_emit.scm 227 */

														BgL_method3673z00_1963 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1968,
																(int) (BgL_modz00_1971)),
															(int) (BgL_restz00_1973));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3673z00_1963) (BgL_method3673z00_1963,
							(obj_t) (BgL_arg3843z00_1960), BEOA);
					}
				}
			}
		}
	}



/* bdb!-extern3677 */
	obj_t BGl_bdbz12zd2extern3677zc0zzbdb_emitz00(obj_t BgL_envz00_2609,
		obj_t BgL_nodez00_2610)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 219 */
			{
				BgL_externz00_bglt BgL_nodez00_1508;

				BgL_nodez00_1508 = (BgL_externz00_bglt) (BgL_nodez00_2610);
				{	/* Bdb/bdb_emit.scm 220 */
					obj_t BgL_arg3841z00_1957;

					BgL_arg3841z00_1957 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1508))->BgL_exprza2za2);
					return BGl_bdbza2z12zb0zzbdb_emitz00(BgL_arg3841z00_1957);
				}
			}
		}
	}



/* bdb!-sequence3675 */
	obj_t BGl_bdbz12zd2sequence3675zc0zzbdb_emitz00(obj_t BgL_envz00_2611,
		obj_t BgL_nodez00_2612)
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 212 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1501;

				BgL_nodez00_1501 = (BgL_sequencez00_bglt) (BgL_nodez00_2612);
				{	/* Bdb/bdb_emit.scm 213 */
					obj_t BgL_arg3839z00_1954;

					BgL_arg3839z00_1954 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1501))->BgL_nodesz00);
					return BGl_bdbza2z12zb0zzbdb_emitz00(BgL_arg3839z00_1954);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_emitz00()
	{
		AN_OBJECT;
		{	/* Bdb/bdb_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 96794353),
				BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					254412896), BSTRING_TO_STRING(BGl_string3998z00zzbdb_emitz00));
		}
	}

#ifdef __cplusplus
}
#endif
