/*===========================================================================*/
/*   (Ast/check_init.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/check_init.scm)*/
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


	static obj_t
		BGl_checkzd2initzd2select3589z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t
		BGl_checkzd2initzd2app3573z00zzast_checkzd2globalzd2initz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_checkzd2initzd2sequence3571z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2initzd2funcall3577z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t
		BGl_checkzd2initzd2boxzd2setz123601zc0zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_checkzd2globalzd2initz00();
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	static obj_t
		BGl_checkzd2initzd2fail3587z00zzast_checkzd2globalzd2initz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_checkzd2globalzd2initz00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_nozd2warningzd2zztools_errorz00(obj_t);
	static obj_t
		BGl_checkzd2initzd2var3569z00zzast_checkzd2globalzd2initz00(obj_t, obj_t);
	static obj_t
		BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(BgL_nodez00_bglt);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_checkzd2initzd2makezd2box3599zd2zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_checkzd2globalzd2initz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_checkzd2initzd2jumpzd2exzd2i3597z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t
		BGl_checkzd2initzd2letzd2fun3591zd2zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl__checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00
		(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00 =
		BUNSPEC;
	static obj_t
		BGl_zc3anonymousza33615ze3z83zzast_checkzd2globalzd2initz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzast_checkzd2globalzd2initz00();
	static obj_t
		BGl_checkzd2initzd2letzd2var3593zd2zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl__checkzd2initzd2zzast_checkzd2globalzd2initz00(obj_t, obj_t);
	static obj_t
		BGl_checkzd2initzd2condition3585z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
	static obj_t BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00();
	static obj_t
		BGl_checkzd2initzd2extern3579z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_checkzd2initzd2appzd2ly3575zd2zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static bool_t BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(obj_t);
	static obj_t
		BGl_checkzd2initzd2cast3581z00zzast_checkzd2globalzd2initz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_checkzd2initzd2setzd2exzd2it3595z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2initzd2setq3583z00zzast_checkzd2globalzd2initz00(obj_t, obj_t);
	static obj_t
		BGl__checkzd2initzd2default3566z00zzast_checkzd2globalzd2initz00(obj_t,
		obj_t);
	extern obj_t BGl_getzd2objectzd2unitz00zzmodule_classz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string3818z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string3818za700za7za7a3843za7, "check-init", 10);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
		BgL_bgl__checkza7d2initza7d23844z00,
		BGl__checkzd2initzd2zzast_checkzd2globalzd2initz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3836z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string3836za700za7za7a3845za7, "Variable used before initialized",
		32);
	      DEFINE_STRING(BGl_string3837z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string3837za700za7za7a3846za7,
		"Illegal type for prematurely used variable", 42);
	      DEFINE_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string3838za700za7za7a3847za7, "ast_check-global-init", 21);
	      DEFINE_STRING(BGl_string3839z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_string3839za700za7za7a3848za7, "done unit -init ", 16);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_checkzd2initzd2default3566zd2envzd2zzast_checkzd2globalzd2initz00,
		BgL_bgl__checkza7d2initza7d23849z00,
		BGl__checkzd2initzd2default3566z00zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2globalzd2initializa7ationzd2envz75zzast_checkzd2globalzd2initz00,
		BgL_bgl__checkza7d2globalza73850z00,
		BGl__checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3820z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2s3851z00,
		BGl_checkzd2initzd2sequence3571z00zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3819z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2v3852z00,
		BGl_checkzd2initzd2var3569z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3821z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2a3853z00,
		BGl_checkzd2initzd2app3573z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3822z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2a3854z00,
		BGl_checkzd2initzd2appzd2ly3575zd2zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3823z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2f3855z00,
		BGl_checkzd2initzd2funcall3577z00zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3824z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2e3856z00,
		BGl_checkzd2initzd2extern3579z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3825z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2c3857z00,
		BGl_checkzd2initzd2cast3581z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3826z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2s3858z00,
		BGl_checkzd2initzd2setq3583z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3827z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2c3859z00,
		BGl_checkzd2initzd2condition3585z00zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3828z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2f3860z00,
		BGl_checkzd2initzd2fail3587z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3830z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2l3861z00,
		BGl_checkzd2initzd2letzd2fun3591zd2zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3829z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2s3862z00,
		BGl_checkzd2initzd2select3589z00zzast_checkzd2globalzd2initz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3831z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2l3863z00,
		BGl_checkzd2initzd2letzd2var3593zd2zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3832z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2s3864z00,
		BGl_checkzd2initzd2setzd2exzd2it3595z00zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3833z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2j3865z00,
		BGl_checkzd2initzd2jumpzd2exzd2i3597z00zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3834z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2m3866z00,
		BGl_checkzd2initzd2makezd2box3599zd2zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3835z00zzast_checkzd2globalzd2initz00,
		BgL_bgl_checkza7d2initza7d2b3867z00,
		BGl_checkzd2initzd2boxzd2setz123601zc0zzast_checkzd2globalzd2initz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(long
		BgL_checksumz00_2316, char *BgL_fromz00_2317)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00))
				{
					BGl_requirezd2initializa7ationz75zzast_checkzd2globalzd2initz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
					BGl_cnstzd2initzd2zzast_checkzd2globalzd2initz00();
					BGl_importedzd2moduleszd2initz00zzast_checkzd2globalzd2initz00();
					BGl_genericzd2initzd2zzast_checkzd2globalzd2initz00();
					BGl_methodzd2initzd2zzast_checkzd2globalzd2initz00();
					BGl_toplevelzd2initzd2zzast_checkzd2globalzd2initz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_check-global-init");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_check-global-init");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			{	/* Ast/check_init.scm 18 */
				obj_t BgL_cportz00_2306;

				BgL_cportz00_2306 =
					bgl_open_input_string(BGl_string3839z00zzast_checkzd2globalzd2initz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2307;

					BgL_iz00_2307 = ((long) 2);
				BgL_loopz00_2308:
					if ((BgL_iz00_2307 == ((long) -1)))
						{	/* Ast/check_init.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Ast/check_init.scm 18 */
							{	/* Ast/check_init.scm 18 */
								obj_t BgL_arg3841z00_2310;

								{	/* Ast/check_init.scm 18 */

									{	/* Ast/check_init.scm 18 */
										obj_t BgL_locationz00_2312;

										BgL_locationz00_2312 = BBOOL(((bool_t) 0));
										{	/* Ast/check_init.scm 18 */

											BgL_arg3841z00_2310 =
												BGl_readz00zz__readerz00(BgL_cportz00_2306,
												BgL_locationz00_2312);
										}
									}
								}
								{	/* Ast/check_init.scm 18 */
									int BgL_auxz00_2338;

									BgL_auxz00_2338 = (int) (BgL_iz00_2307);
									CNST_TABLE_SET(BgL_auxz00_2338, BgL_arg3841z00_2310);
							}}
							{	/* Ast/check_init.scm 18 */
								int BgL_auxz00_2313;

								BgL_auxz00_2313 = (int) ((BgL_iz00_2307 - ((long) 1)));
								{
									long BgL_iz00_2343;

									BgL_iz00_2343 = (long) (BgL_auxz00_2313);
									BgL_iz00_2307 = BgL_iz00_2343;
									goto BgL_loopz00_2308;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 = BNIL;
			return BUNSPEC;
		}
	}



/* check-global-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 35 */
			{	/* Ast/check_init.scm 36 */
				obj_t BgL_initzd2namezd2_887;

				{	/* Ast/check_init.scm 36 */
					obj_t BgL_arg3632z00_914;

					{	/* Ast/check_init.scm 36 */
						obj_t BgL_arg3633z00_915;

						obj_t BgL_arg3634z00_916;

						{	/* Ast/check_init.scm 36 */
							obj_t BgL_arg3637z00_919;

							BgL_arg3637z00_919 =
								STRUCT_REF(BGl_getzd2toplevelzd2unitz00zzmodule_includez00(),
								(int) (((long) 0)));
							{	/* Ast/check_init.scm 36 */
								obj_t BgL_res3763z00_1498;

								{	/* Ast/check_init.scm 36 */
									obj_t BgL_symbolz00_1496;

									BgL_symbolz00_1496 = BgL_arg3637z00_919;
									{	/* Ast/check_init.scm 36 */
										obj_t BgL_arg2063z00_1497;

										BgL_arg2063z00_1497 = SYMBOL_TO_STRING(BgL_symbolz00_1496);
										BgL_res3763z00_1498 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1497);
								}}
								BgL_arg3633z00_915 = BgL_res3763z00_1498;
						}}
						{	/* Ast/check_init.scm 36 */
							obj_t BgL_res3764z00_1501;

							{	/* Ast/check_init.scm 36 */
								obj_t BgL_symbolz00_1499;

								BgL_symbolz00_1499 = CNST_TABLE_REF(((long) 0));
								{	/* Ast/check_init.scm 36 */
									obj_t BgL_arg2063z00_1500;

									BgL_arg2063z00_1500 = SYMBOL_TO_STRING(BgL_symbolz00_1499);
									BgL_res3764z00_1501 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1500);
							}}
							BgL_arg3634z00_916 = BgL_res3764z00_1501;
						}
						{	/* Ast/check_init.scm 36 */
							obj_t BgL_list3635z00_917;

							{	/* Ast/check_init.scm 36 */
								obj_t BgL_arg3636z00_918;

								BgL_arg3636z00_918 = MAKE_PAIR(BgL_arg3634z00_916, BNIL);
								BgL_list3635z00_917 =
									MAKE_PAIR(BgL_arg3633z00_915, BgL_arg3636z00_918);
							}
							BgL_arg3632z00_914 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list3635z00_917);
					}}
					BgL_initzd2namezd2_887 =
						string_to_symbol(BSTRING_TO_STRING(BgL_arg3632z00_914));
				}
				{	/* Ast/check_init.scm 36 */
					obj_t BgL_globalz00_888;

					BgL_globalz00_888 =
						BGl_findzd2globalzd2zzast_envz00(BgL_initzd2namezd2_887, BNIL);
					{	/* Ast/check_init.scm 37 */

						{	/* Ast/check_init.scm 38 */
							bool_t BgL_testz00_2359;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_888,
									BGl_globalz00zzast_varz00))
								{	/* Ast/check_init.scm 38 */
									BgL_valuez00_bglt BgL_arg3630z00_912;

									{
										BgL_variablez00_bglt BgL_auxz00_2362;

										BgL_auxz00_2362 =
											(BgL_variablez00_bglt) (
											(BgL_globalz00_bglt) (BgL_globalz00_888));
										BgL_arg3630z00_912 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2362))->
											BgL_valuez00);
									}
									{	/* Ast/check_init.scm 38 */
										obj_t BgL_obj1864z00_1505;

										BgL_obj1864z00_1505 = (obj_t) (BgL_arg3630z00_912);
										BgL_testz00_2359 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1864z00_1505,
											BGl_sfunz00zzast_varz00);
									}
								}
							else
								{	/* Ast/check_init.scm 38 */
									BgL_testz00_2359 = ((bool_t) 0);
								}
							if (BgL_testz00_2359)
								{	/* Ast/check_init.scm 38 */
									BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 = BNIL;
									{	/* Ast/check_init.scm 42 */
										obj_t BgL_unitz00_890;

										BgL_unitz00_890 =
											BGl_getzd2objectzd2unitz00zzmodule_classz00();
										{	/* Ast/check_init.scm 43 */
											bool_t BgL_testz00_2369;

											if (STRUCTP(BgL_unitz00_890))
												{	/* Ast/check_init.scm 43 */
													BgL_testz00_2369 =
														(STRUCT_KEY(BgL_unitz00_890) ==
														CNST_TABLE_REF(((long) 1)));
												}
											else
												{	/* Ast/check_init.scm 43 */
													BgL_testz00_2369 = ((bool_t) 0);
												}
											if (BgL_testz00_2369)
												{	/* Ast/check_init.scm 44 */
													obj_t BgL_objzd2namezd2_892;

													{	/* Ast/check_init.scm 44 */
														obj_t BgL_arg3621z00_903;

														{	/* Ast/check_init.scm 44 */
															obj_t BgL_arg3622z00_904;

															obj_t BgL_arg3623z00_905;

															{	/* Ast/check_init.scm 44 */
																obj_t BgL_arg3626z00_908;

																BgL_arg3626z00_908 =
																	STRUCT_REF(BgL_unitz00_890,
																	(int) (((long) 0)));
																{	/* Ast/check_init.scm 44 */
																	obj_t BgL_res3766z00_1518;

																	{	/* Ast/check_init.scm 44 */
																		obj_t BgL_symbolz00_1516;

																		BgL_symbolz00_1516 = BgL_arg3626z00_908;
																		{	/* Ast/check_init.scm 44 */
																			obj_t BgL_arg2063z00_1517;

																			BgL_arg2063z00_1517 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1516);
																			BgL_res3766z00_1518 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_1517);
																	}}
																	BgL_arg3622z00_904 = BgL_res3766z00_1518;
															}}
															{	/* Ast/check_init.scm 44 */
																obj_t BgL_res3767z00_1521;

																{	/* Ast/check_init.scm 44 */
																	obj_t BgL_symbolz00_1519;

																	BgL_symbolz00_1519 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Ast/check_init.scm 44 */
																		obj_t BgL_arg2063z00_1520;

																		BgL_arg2063z00_1520 =
																			SYMBOL_TO_STRING(BgL_symbolz00_1519);
																		BgL_res3767z00_1521 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_1520);
																}}
																BgL_arg3623z00_905 = BgL_res3767z00_1521;
															}
															{	/* Ast/check_init.scm 44 */
																obj_t BgL_list3624z00_906;

																{	/* Ast/check_init.scm 44 */
																	obj_t BgL_arg3625z00_907;

																	BgL_arg3625z00_907 =
																		MAKE_PAIR(BgL_arg3623z00_905, BNIL);
																	BgL_list3624z00_906 =
																		MAKE_PAIR(BgL_arg3622z00_904,
																		BgL_arg3625z00_907);
																}
																BgL_arg3621z00_903 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list3624z00_906);
														}}
														BgL_objzd2namezd2_892 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg3621z00_903));
													}
													{	/* Ast/check_init.scm 44 */
														obj_t BgL_globalz00_893;

														BgL_globalz00_893 =
															BGl_findzd2globalzd2zzast_envz00
															(BgL_objzd2namezd2_892, BNIL);
														{	/* Ast/check_init.scm 45 */

															{	/* Ast/check_init.scm 46 */
																bool_t BgL_testz00_2388;

																if (BGl_iszd2azf3z21zz__objectz00
																	(BgL_globalz00_893,
																		BGl_globalz00zzast_varz00))
																	{	/* Ast/check_init.scm 46 */
																		BgL_valuez00_bglt BgL_arg3619z00_901;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2391;

																			BgL_auxz00_2391 =
																				(BgL_variablez00_bglt) (
																				(BgL_globalz00_bglt)
																				(BgL_globalz00_893));
																			BgL_arg3619z00_901 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2391))->BgL_valuez00);
																		}
																		{	/* Ast/check_init.scm 46 */
																			obj_t BgL_obj1864z00_1525;

																			BgL_obj1864z00_1525 =
																				(obj_t) (BgL_arg3619z00_901);
																			BgL_testz00_2388 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj1864z00_1525,
																				BGl_sfunz00zzast_varz00);
																		}
																	}
																else
																	{	/* Ast/check_init.scm 46 */
																		BgL_testz00_2388 = ((bool_t) 0);
																	}
																if (BgL_testz00_2388)
																	{	/* Ast/check_init.scm 54 */
																		obj_t BgL_zc3anonymousza33615ze3z83_2246;

																		BgL_zc3anonymousza33615ze3z83_2246 =
																			make_fx_procedure
																			(BGl_zc3anonymousza33615ze3z83zzast_checkzd2globalzd2initz00,
																			(int) (((long) 0)), (int) (((long) 1)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza33615ze3z83_2246,
																			(int) (((long) 0)), BgL_globalz00_893);
																		BGl_nozd2warningzd2zztools_errorz00
																			(BgL_zc3anonymousza33615ze3z83_2246);
																	}
																else
																	{	/* Ast/check_init.scm 46 */
																		BFALSE;
																	}
															}
														}
													}
												}
											else
												{	/* Ast/check_init.scm 43 */
													BFALSE;
												}
										}
									}
									{	/* Ast/check_init.scm 56 */
										obj_t BgL_arg3627z00_909;

										{	/* Ast/check_init.scm 56 */
											BgL_sfunz00_bglt BgL_obj1793z00_1555;

											{	/* Ast/check_init.scm 56 */
												BgL_variablez00_bglt BgL_obj1519z00_1554;

												BgL_obj1519z00_1554 =
													(BgL_variablez00_bglt) (
													(BgL_globalz00_bglt) (BgL_globalz00_888));
												BgL_obj1793z00_1555 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1519z00_1554))->
														BgL_valuez00));
											}
											BgL_arg3627z00_909 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1793z00_1555))->
												BgL_bodyz00);
										}
										{	/* Ast/check_init.scm 56 */
											BgL_nodez00_bglt BgL_nodez00_1556;

											BgL_nodez00_1556 =
												(BgL_nodez00_bglt) (BgL_arg3627z00_909);
											{	/* Ast/check_init.scm 56 */
												obj_t BgL_method3567z00_1557;

												{	/* Ast/check_init.scm 56 */
													BgL_objectz00_bglt BgL_objz00_1558;

													BgL_objz00_1558 =
														(BgL_objectz00_bglt) (BgL_nodez00_1556);
													{	/* Ast/check_init.scm 56 */
														long BgL_objzd2classzd2numz00_1559;

														BgL_objzd2classzd2numz00_1559 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1558);
														{	/* Ast/check_init.scm 56 */
															obj_t BgL_arg2643z00_1560;

															BgL_arg2643z00_1560 =
																PROCEDURE_REF
																(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
																(int) (((long) 1)));
															{	/* Ast/check_init.scm 56 */
																obj_t BgL_arrayz00_1562;

																int BgL_offsetz00_1563;

																BgL_arrayz00_1562 = BgL_arg2643z00_1560;
																BgL_offsetz00_1563 =
																	(int) (BgL_objzd2classzd2numz00_1559);
																{	/* Ast/check_init.scm 56 */
																	long BgL_offsetz00_1564;

																	BgL_offsetz00_1564 =
																		((long) (BgL_offsetz00_1563) - OBJECT_TYPE);
																	{	/* Ast/check_init.scm 56 */
																		long BgL_modz00_1565;

																		{	/* Ast/check_init.scm 56 */
																			int BgL_arg2645z00_1566;

																			BgL_arg2645z00_1566 = (int) (((long) 16));
																			{	/* Ast/check_init.scm 56 */
																				long BgL_auxz00_2417;

																				BgL_auxz00_2417 =
																					(long) (BgL_arg2645z00_1566);
																				BgL_modz00_1565 =
																					(BgL_offsetz00_1564 /
																					BgL_auxz00_2417);
																		}}
																		{	/* Ast/check_init.scm 56 */
																			long BgL_restz00_1567;

																			{	/* Ast/check_init.scm 56 */
																				int BgL_arg2644z00_1568;

																				BgL_arg2644z00_1568 =
																					(int) (((long) 16));
																				{	/* Ast/check_init.scm 56 */
																					long BgL_auxz00_2421;

																					BgL_auxz00_2421 =
																						(long) (BgL_arg2644z00_1568);
																					BgL_restz00_1567 =
																						(BgL_offsetz00_1564 %
																						BgL_auxz00_2421);
																			}}
																			{	/* Ast/check_init.scm 56 */

																				BgL_method3567z00_1557 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1562,
																						(int) (BgL_modz00_1565)),
																					(int) (BgL_restz00_1567));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3567z00_1557)
													(BgL_method3567z00_1557, (obj_t) (BgL_nodez00_1556),
													BEOA);
									}}}
									return (BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 =
										BNIL, BUNSPEC);
								}
							else
								{	/* Ast/check_init.scm 38 */
									return BFALSE;
								}
						}
					}
				}
			}
		}
	}



/* _check-global-initialization */
	obj_t
		BGl__checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00
		(obj_t BgL_envz00_2249)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 35 */
			return
				BGl_checkzd2globalzd2initializa7ationza7zzast_checkzd2globalzd2initz00
				();
		}
	}



/* <anonymous:3615> */
	obj_t BGl_zc3anonymousza33615ze3z83zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2250)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 52 */
			{	/* Ast/check_init.scm 54 */
				obj_t BgL_globalz00_2251;

				BgL_globalz00_2251 = PROCEDURE_REF(BgL_envz00_2250, (int) (((long) 0)));
				{

					{	/* Ast/check_init.scm 54 */
						obj_t BgL_arg3616z00_897;

						{	/* Ast/check_init.scm 54 */
							BgL_sfunz00_bglt BgL_obj1793z00_1527;

							{	/* Ast/check_init.scm 54 */
								BgL_variablez00_bglt BgL_obj1519z00_1526;

								BgL_obj1519z00_1526 =
									(BgL_variablez00_bglt) (BgL_globalz00_2251);
								BgL_obj1793z00_1527 =
									(BgL_sfunz00_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1519z00_1526))->
										BgL_valuez00));
							}
							BgL_arg3616z00_897 =
								(((BgL_sfunz00_bglt) CREF(BgL_obj1793z00_1527))->BgL_bodyz00);
						}
						{	/* Ast/check_init.scm 53 */
							BgL_nodez00_bglt BgL_nodez00_1528;

							BgL_nodez00_1528 = (BgL_nodez00_bglt) (BgL_arg3616z00_897);
							{	/* Ast/check_init.scm 53 */
								obj_t BgL_method3567z00_1529;

								{	/* Ast/check_init.scm 53 */
									BgL_objectz00_bglt BgL_objz00_1530;

									BgL_objz00_1530 = (BgL_objectz00_bglt) (BgL_nodez00_1528);
									{	/* Ast/check_init.scm 53 */
										long BgL_objzd2classzd2numz00_1531;

										BgL_objzd2classzd2numz00_1531 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1530);
										{	/* Ast/check_init.scm 53 */
											obj_t BgL_arg2643z00_1532;

											BgL_arg2643z00_1532 =
												PROCEDURE_REF
												(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
												(int) (((long) 1)));
											{	/* Ast/check_init.scm 53 */
												obj_t BgL_arrayz00_1534;

												int BgL_offsetz00_1535;

												BgL_arrayz00_1534 = BgL_arg2643z00_1532;
												BgL_offsetz00_1535 =
													(int) (BgL_objzd2classzd2numz00_1531);
												{	/* Ast/check_init.scm 53 */
													long BgL_offsetz00_1536;

													BgL_offsetz00_1536 =
														((long) (BgL_offsetz00_1535) - OBJECT_TYPE);
													{	/* Ast/check_init.scm 53 */
														long BgL_modz00_1537;

														{	/* Ast/check_init.scm 53 */
															int BgL_arg2645z00_1538;

															BgL_arg2645z00_1538 = (int) (((long) 16));
															{	/* Ast/check_init.scm 53 */
																long BgL_auxz00_2447;

																BgL_auxz00_2447 = (long) (BgL_arg2645z00_1538);
																BgL_modz00_1537 =
																	(BgL_offsetz00_1536 / BgL_auxz00_2447);
														}}
														{	/* Ast/check_init.scm 53 */
															long BgL_restz00_1539;

															{	/* Ast/check_init.scm 53 */
																int BgL_arg2644z00_1540;

																BgL_arg2644z00_1540 = (int) (((long) 16));
																{	/* Ast/check_init.scm 53 */
																	long BgL_auxz00_2451;

																	BgL_auxz00_2451 =
																		(long) (BgL_arg2644z00_1540);
																	BgL_restz00_1539 =
																		(BgL_offsetz00_1536 % BgL_auxz00_2451);
															}}
															{	/* Ast/check_init.scm 53 */

																BgL_method3567z00_1529 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1534,
																		(int) (BgL_modz00_1537)),
																	(int) (BgL_restz00_1539));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3567z00_1529)
									(BgL_method3567z00_1529, (obj_t) (BgL_nodez00_1528), BEOA);
							}
						}
					}
				}
			}
		}
	}



/* check-init* */
	bool_t BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00(obj_t
		BgL_nodeza2za2_44)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 242 */
			{
				obj_t BgL_l3564z00_922;

				BgL_l3564z00_922 = BgL_nodeza2za2_44;
			BgL_zc3anonymousza33639ze3z83_923:
				if (PAIRP(BgL_l3564z00_922))
					{	/* Ast/check_init.scm 243 */
						{	/* Ast/check_init.scm 243 */
							obj_t BgL_arg3641z00_925;

							BgL_arg3641z00_925 = CAR(BgL_l3564z00_922);
							{	/* Ast/check_init.scm 243 */
								BgL_nodez00_bglt BgL_nodez00_1584;

								BgL_nodez00_1584 = (BgL_nodez00_bglt) (BgL_arg3641z00_925);
								{	/* Ast/check_init.scm 243 */
									obj_t BgL_method3567z00_1585;

									{	/* Ast/check_init.scm 243 */
										BgL_objectz00_bglt BgL_objz00_1586;

										BgL_objz00_1586 = (BgL_objectz00_bglt) (BgL_nodez00_1584);
										{	/* Ast/check_init.scm 243 */
											long BgL_objzd2classzd2numz00_1587;

											BgL_objzd2classzd2numz00_1587 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1586);
											{	/* Ast/check_init.scm 243 */
												obj_t BgL_arg2643z00_1588;

												BgL_arg2643z00_1588 =
													PROCEDURE_REF
													(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
													(int) (((long) 1)));
												{	/* Ast/check_init.scm 243 */
													obj_t BgL_arrayz00_1590;

													int BgL_offsetz00_1591;

													BgL_arrayz00_1590 = BgL_arg2643z00_1588;
													BgL_offsetz00_1591 =
														(int) (BgL_objzd2classzd2numz00_1587);
													{	/* Ast/check_init.scm 243 */
														long BgL_offsetz00_1592;

														BgL_offsetz00_1592 =
															((long) (BgL_offsetz00_1591) - OBJECT_TYPE);
														{	/* Ast/check_init.scm 243 */
															long BgL_modz00_1593;

															{	/* Ast/check_init.scm 243 */
																int BgL_arg2645z00_1594;

																BgL_arg2645z00_1594 = (int) (((long) 16));
																{	/* Ast/check_init.scm 243 */
																	long BgL_auxz00_2473;

																	BgL_auxz00_2473 =
																		(long) (BgL_arg2645z00_1594);
																	BgL_modz00_1593 =
																		(BgL_offsetz00_1592 / BgL_auxz00_2473);
															}}
															{	/* Ast/check_init.scm 243 */
																long BgL_restz00_1595;

																{	/* Ast/check_init.scm 243 */
																	int BgL_arg2644z00_1596;

																	BgL_arg2644z00_1596 = (int) (((long) 16));
																	{	/* Ast/check_init.scm 243 */
																		long BgL_auxz00_2477;

																		BgL_auxz00_2477 =
																			(long) (BgL_arg2644z00_1596);
																		BgL_restz00_1595 =
																			(BgL_offsetz00_1592 % BgL_auxz00_2477);
																}}
																{	/* Ast/check_init.scm 243 */

																	BgL_method3567z00_1585 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1590,
																			(int) (BgL_modz00_1593)),
																		(int) (BgL_restz00_1595));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3567z00_1585)
										(BgL_method3567z00_1585, (obj_t) (BgL_nodez00_1584), BEOA);
						}}}
						{
							obj_t BgL_l3564z00_2487;

							BgL_l3564z00_2487 = CDR(BgL_l3564z00_922);
							BgL_l3564z00_922 = BgL_l3564z00_2487;
							goto BgL_zc3anonymousza33639ze3z83_923;
						}
					}
				else
					{	/* Ast/check_init.scm 243 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_checkzd2initzd2default3566zd2envzd2zzast_checkzd2globalzd2initz00,
				BGl_nodez00zzast_nodez00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
		}
	}



/* check-init */
	obj_t BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(BgL_nodez00_bglt
		BgL_nodez00_25)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 87 */
			{	/* Ast/check_init.scm 87 */
				obj_t BgL_method3567z00_1611;

				{	/* Ast/check_init.scm 87 */
					BgL_objectz00_bglt BgL_objz00_1612;

					BgL_objz00_1612 = (BgL_objectz00_bglt) (BgL_nodez00_25);
					{	/* Ast/check_init.scm 87 */
						long BgL_objzd2classzd2numz00_1613;

						BgL_objzd2classzd2numz00_1613 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1612);
						{	/* Ast/check_init.scm 87 */
							obj_t BgL_arg2643z00_1614;

							BgL_arg2643z00_1614 =
								PROCEDURE_REF
								(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
								(int) (((long) 1)));
							{	/* Ast/check_init.scm 87 */
								obj_t BgL_arrayz00_1616;

								int BgL_offsetz00_1617;

								BgL_arrayz00_1616 = BgL_arg2643z00_1614;
								BgL_offsetz00_1617 = (int) (BgL_objzd2classzd2numz00_1613);
								{	/* Ast/check_init.scm 87 */
									long BgL_offsetz00_1618;

									BgL_offsetz00_1618 =
										((long) (BgL_offsetz00_1617) - OBJECT_TYPE);
									{	/* Ast/check_init.scm 87 */
										long BgL_modz00_1619;

										{	/* Ast/check_init.scm 87 */
											int BgL_arg2645z00_1620;

											BgL_arg2645z00_1620 = (int) (((long) 16));
											{	/* Ast/check_init.scm 87 */
												long BgL_auxz00_2498;

												BgL_auxz00_2498 = (long) (BgL_arg2645z00_1620);
												BgL_modz00_1619 =
													(BgL_offsetz00_1618 / BgL_auxz00_2498);
										}}
										{	/* Ast/check_init.scm 87 */
											long BgL_restz00_1621;

											{	/* Ast/check_init.scm 87 */
												int BgL_arg2644z00_1622;

												BgL_arg2644z00_1622 = (int) (((long) 16));
												{	/* Ast/check_init.scm 87 */
													long BgL_auxz00_2502;

													BgL_auxz00_2502 = (long) (BgL_arg2644z00_1622);
													BgL_restz00_1621 =
														(BgL_offsetz00_1618 % BgL_auxz00_2502);
											}}
											{	/* Ast/check_init.scm 87 */

												BgL_method3567z00_1611 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1616,
														(int) (BgL_modz00_1619)), (int) (BgL_restz00_1621));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3567z00_1611) (BgL_method3567z00_1611,
					(obj_t) (BgL_nodez00_25), BEOA);
			}
		}
	}



/* _check-init */
	obj_t BGl__checkzd2initzd2zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2247, obj_t BgL_nodez00_2248)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 87 */
			return
				BGl_checkzd2initzd2zzast_checkzd2globalzd2initz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2248));
		}
	}



/* _check-init-default3566 */
	obj_t BGl__checkzd2initzd2default3566z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2252, obj_t BgL_nodez00_2253)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			{	/* Ast/check_init.scm 88 */
				obj_t BgL_res3842z00_2315;

				BgL_res3842z00_2315 = CNST_TABLE_REF(((long) 2));
				return BgL_res3842z00_2315;
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_varz00zzast_nodez00, BGl_proc3819z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_sequencez00zzast_nodez00,
				BGl_proc3820z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_appz00zzast_nodez00, BGl_proc3821z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3822z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_funcallz00zzast_nodez00,
				BGl_proc3823z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_externz00zzast_nodez00,
				BGl_proc3824z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_castz00zzast_nodez00, BGl_proc3825z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_setqz00zzast_nodez00, BGl_proc3826z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc3827z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_failz00zzast_nodez00, BGl_proc3828z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_selectz00zzast_nodez00,
				BGl_proc3829z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3830z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3831z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3832z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3833z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3834z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3835z00zzast_checkzd2globalzd2initz00,
				BGl_string3818z00zzast_checkzd2globalzd2initz00);
		}
	}



/* check-init-box-set!3601 */
	obj_t
		BGl_checkzd2initzd2boxzd2setz123601zc0zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2271, obj_t BgL_nodez00_2272)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 235 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1477;

				BgL_nodez00_1477 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2272);
				{	/* Ast/check_init.scm 236 */
					BgL_nodez00_bglt BgL_arg3759z00_2218;

					BgL_arg3759z00_2218 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1477))->BgL_valuez00);
					{	/* Ast/check_init.scm 236 */
						obj_t BgL_method3567z00_2221;

						{	/* Ast/check_init.scm 236 */
							BgL_objectz00_bglt BgL_objz00_2222;

							BgL_objz00_2222 = (BgL_objectz00_bglt) (BgL_arg3759z00_2218);
							{	/* Ast/check_init.scm 236 */
								long BgL_objzd2classzd2numz00_2223;

								BgL_objzd2classzd2numz00_2223 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2222);
								{	/* Ast/check_init.scm 236 */
									obj_t BgL_arg2643z00_2224;

									BgL_arg2643z00_2224 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 236 */
										obj_t BgL_arrayz00_2226;

										int BgL_offsetz00_2227;

										BgL_arrayz00_2226 = BgL_arg2643z00_2224;
										BgL_offsetz00_2227 = (int) (BgL_objzd2classzd2numz00_2223);
										{	/* Ast/check_init.scm 236 */
											long BgL_offsetz00_2228;

											BgL_offsetz00_2228 =
												((long) (BgL_offsetz00_2227) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 236 */
												long BgL_modz00_2229;

												{	/* Ast/check_init.scm 236 */
													int BgL_arg2645z00_2230;

													BgL_arg2645z00_2230 = (int) (((long) 16));
													{	/* Ast/check_init.scm 236 */
														long BgL_auxz00_2541;

														BgL_auxz00_2541 = (long) (BgL_arg2645z00_2230);
														BgL_modz00_2229 =
															(BgL_offsetz00_2228 / BgL_auxz00_2541);
												}}
												{	/* Ast/check_init.scm 236 */
													long BgL_restz00_2231;

													{	/* Ast/check_init.scm 236 */
														int BgL_arg2644z00_2232;

														BgL_arg2644z00_2232 = (int) (((long) 16));
														{	/* Ast/check_init.scm 236 */
															long BgL_auxz00_2545;

															BgL_auxz00_2545 = (long) (BgL_arg2644z00_2232);
															BgL_restz00_2231 =
																(BgL_offsetz00_2228 % BgL_auxz00_2545);
													}}
													{	/* Ast/check_init.scm 236 */

														BgL_method3567z00_2221 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2226,
																(int) (BgL_modz00_2229)),
															(int) (BgL_restz00_2231));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_2221) (BgL_method3567z00_2221,
							(obj_t) (BgL_arg3759z00_2218), BEOA);
					}
				}
			}
		}
	}



/* check-init-make-box3599 */
	obj_t BGl_checkzd2initzd2makezd2box3599zd2zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2273, obj_t BgL_nodez00_2274)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 229 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1471;

				BgL_nodez00_1471 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2274);
				{	/* Ast/check_init.scm 230 */
					BgL_nodez00_bglt BgL_arg3757z00_2189;

					BgL_arg3757z00_2189 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1471))->BgL_valuez00);
					{	/* Ast/check_init.scm 230 */
						obj_t BgL_method3567z00_2192;

						{	/* Ast/check_init.scm 230 */
							BgL_objectz00_bglt BgL_objz00_2193;

							BgL_objz00_2193 = (BgL_objectz00_bglt) (BgL_arg3757z00_2189);
							{	/* Ast/check_init.scm 230 */
								long BgL_objzd2classzd2numz00_2194;

								BgL_objzd2classzd2numz00_2194 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2193);
								{	/* Ast/check_init.scm 230 */
									obj_t BgL_arg2643z00_2195;

									BgL_arg2643z00_2195 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 230 */
										obj_t BgL_arrayz00_2197;

										int BgL_offsetz00_2198;

										BgL_arrayz00_2197 = BgL_arg2643z00_2195;
										BgL_offsetz00_2198 = (int) (BgL_objzd2classzd2numz00_2194);
										{	/* Ast/check_init.scm 230 */
											long BgL_offsetz00_2199;

											BgL_offsetz00_2199 =
												((long) (BgL_offsetz00_2198) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 230 */
												long BgL_modz00_2200;

												{	/* Ast/check_init.scm 230 */
													int BgL_arg2645z00_2201;

													BgL_arg2645z00_2201 = (int) (((long) 16));
													{	/* Ast/check_init.scm 230 */
														long BgL_auxz00_2565;

														BgL_auxz00_2565 = (long) (BgL_arg2645z00_2201);
														BgL_modz00_2200 =
															(BgL_offsetz00_2199 / BgL_auxz00_2565);
												}}
												{	/* Ast/check_init.scm 230 */
													long BgL_restz00_2202;

													{	/* Ast/check_init.scm 230 */
														int BgL_arg2644z00_2203;

														BgL_arg2644z00_2203 = (int) (((long) 16));
														{	/* Ast/check_init.scm 230 */
															long BgL_auxz00_2569;

															BgL_auxz00_2569 = (long) (BgL_arg2644z00_2203);
															BgL_restz00_2202 =
																(BgL_offsetz00_2199 % BgL_auxz00_2569);
													}}
													{	/* Ast/check_init.scm 230 */

														BgL_method3567z00_2192 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2197,
																(int) (BgL_modz00_2200)),
															(int) (BgL_restz00_2202));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_2192) (BgL_method3567z00_2192,
							(obj_t) (BgL_arg3757z00_2189), BEOA);
					}
				}
			}
		}
	}



/* check-init-jump-ex-i3597 */
	obj_t
		BGl_checkzd2initzd2jumpzd2exzd2i3597z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2275, obj_t BgL_nodez00_2276)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 221 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1464;

				BgL_nodez00_1464 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2276);
				{	/* Ast/check_init.scm 222 */
					BgL_nodez00_bglt BgL_arg3755z00_2135;

					BgL_arg3755z00_2135 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1464))->
						BgL_exitz00);
					{	/* Ast/check_init.scm 222 */
						obj_t BgL_method3567z00_2138;

						{	/* Ast/check_init.scm 222 */
							BgL_objectz00_bglt BgL_objz00_2139;

							BgL_objz00_2139 = (BgL_objectz00_bglt) (BgL_arg3755z00_2135);
							{	/* Ast/check_init.scm 222 */
								long BgL_objzd2classzd2numz00_2140;

								BgL_objzd2classzd2numz00_2140 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2139);
								{	/* Ast/check_init.scm 222 */
									obj_t BgL_arg2643z00_2141;

									BgL_arg2643z00_2141 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 222 */
										obj_t BgL_arrayz00_2143;

										int BgL_offsetz00_2144;

										BgL_arrayz00_2143 = BgL_arg2643z00_2141;
										BgL_offsetz00_2144 = (int) (BgL_objzd2classzd2numz00_2140);
										{	/* Ast/check_init.scm 222 */
											long BgL_offsetz00_2145;

											BgL_offsetz00_2145 =
												((long) (BgL_offsetz00_2144) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 222 */
												long BgL_modz00_2146;

												{	/* Ast/check_init.scm 222 */
													int BgL_arg2645z00_2147;

													BgL_arg2645z00_2147 = (int) (((long) 16));
													{	/* Ast/check_init.scm 222 */
														long BgL_auxz00_2589;

														BgL_auxz00_2589 = (long) (BgL_arg2645z00_2147);
														BgL_modz00_2146 =
															(BgL_offsetz00_2145 / BgL_auxz00_2589);
												}}
												{	/* Ast/check_init.scm 222 */
													long BgL_restz00_2148;

													{	/* Ast/check_init.scm 222 */
														int BgL_arg2644z00_2149;

														BgL_arg2644z00_2149 = (int) (((long) 16));
														{	/* Ast/check_init.scm 222 */
															long BgL_auxz00_2593;

															BgL_auxz00_2593 = (long) (BgL_arg2644z00_2149);
															BgL_restz00_2148 =
																(BgL_offsetz00_2145 % BgL_auxz00_2593);
													}}
													{	/* Ast/check_init.scm 222 */

														BgL_method3567z00_2138 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2143,
																(int) (BgL_modz00_2146)),
															(int) (BgL_restz00_2148));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3567z00_2138) (BgL_method3567z00_2138,
							(obj_t) (BgL_arg3755z00_2135), BEOA);
				}}
				{	/* Ast/check_init.scm 222 */
					BgL_nodez00_bglt BgL_nodez00_2163;

					BgL_nodez00_2163 = (BgL_nodez00_bglt) (BGl_valuez00zzast_varz00);
					{	/* Ast/check_init.scm 222 */
						obj_t BgL_method3567z00_2164;

						{	/* Ast/check_init.scm 222 */
							BgL_objectz00_bglt BgL_objz00_2165;

							BgL_objz00_2165 = (BgL_objectz00_bglt) (BgL_nodez00_2163);
							{	/* Ast/check_init.scm 222 */
								long BgL_objzd2classzd2numz00_2166;

								BgL_objzd2classzd2numz00_2166 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2165);
								{	/* Ast/check_init.scm 222 */
									obj_t BgL_arg2643z00_2167;

									BgL_arg2643z00_2167 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 222 */
										obj_t BgL_arrayz00_2169;

										int BgL_offsetz00_2170;

										BgL_arrayz00_2169 = BgL_arg2643z00_2167;
										BgL_offsetz00_2170 = (int) (BgL_objzd2classzd2numz00_2166);
										{	/* Ast/check_init.scm 222 */
											long BgL_offsetz00_2171;

											BgL_offsetz00_2171 =
												((long) (BgL_offsetz00_2170) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 222 */
												long BgL_modz00_2172;

												{	/* Ast/check_init.scm 222 */
													int BgL_arg2645z00_2173;

													BgL_arg2645z00_2173 = (int) (((long) 16));
													{	/* Ast/check_init.scm 222 */
														long BgL_auxz00_2612;

														BgL_auxz00_2612 = (long) (BgL_arg2645z00_2173);
														BgL_modz00_2172 =
															(BgL_offsetz00_2171 / BgL_auxz00_2612);
												}}
												{	/* Ast/check_init.scm 222 */
													long BgL_restz00_2174;

													{	/* Ast/check_init.scm 222 */
														int BgL_arg2644z00_2175;

														BgL_arg2644z00_2175 = (int) (((long) 16));
														{	/* Ast/check_init.scm 222 */
															long BgL_auxz00_2616;

															BgL_auxz00_2616 = (long) (BgL_arg2644z00_2175);
															BgL_restz00_2174 =
																(BgL_offsetz00_2171 % BgL_auxz00_2616);
													}}
													{	/* Ast/check_init.scm 222 */

														BgL_method3567z00_2164 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2169,
																(int) (BgL_modz00_2172)),
															(int) (BgL_restz00_2174));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_2164) (BgL_method3567z00_2164,
							(obj_t) (BgL_nodez00_2163), BEOA);
					}
				}
			}
		}
	}



/* check-init-set-ex-it3595 */
	obj_t
		BGl_checkzd2initzd2setzd2exzd2it3595z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2277, obj_t BgL_nodez00_2278)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 215 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1458;

				BgL_nodez00_1458 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2278);
				{	/* Ast/check_init.scm 216 */
					BgL_nodez00_bglt BgL_arg3753z00_2106;

					BgL_arg3753z00_2106 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1458))->BgL_bodyz00);
					{	/* Ast/check_init.scm 216 */
						obj_t BgL_method3567z00_2109;

						{	/* Ast/check_init.scm 216 */
							BgL_objectz00_bglt BgL_objz00_2110;

							BgL_objz00_2110 = (BgL_objectz00_bglt) (BgL_arg3753z00_2106);
							{	/* Ast/check_init.scm 216 */
								long BgL_objzd2classzd2numz00_2111;

								BgL_objzd2classzd2numz00_2111 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2110);
								{	/* Ast/check_init.scm 216 */
									obj_t BgL_arg2643z00_2112;

									BgL_arg2643z00_2112 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 216 */
										obj_t BgL_arrayz00_2114;

										int BgL_offsetz00_2115;

										BgL_arrayz00_2114 = BgL_arg2643z00_2112;
										BgL_offsetz00_2115 = (int) (BgL_objzd2classzd2numz00_2111);
										{	/* Ast/check_init.scm 216 */
											long BgL_offsetz00_2116;

											BgL_offsetz00_2116 =
												((long) (BgL_offsetz00_2115) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 216 */
												long BgL_modz00_2117;

												{	/* Ast/check_init.scm 216 */
													int BgL_arg2645z00_2118;

													BgL_arg2645z00_2118 = (int) (((long) 16));
													{	/* Ast/check_init.scm 216 */
														long BgL_auxz00_2636;

														BgL_auxz00_2636 = (long) (BgL_arg2645z00_2118);
														BgL_modz00_2117 =
															(BgL_offsetz00_2116 / BgL_auxz00_2636);
												}}
												{	/* Ast/check_init.scm 216 */
													long BgL_restz00_2119;

													{	/* Ast/check_init.scm 216 */
														int BgL_arg2644z00_2120;

														BgL_arg2644z00_2120 = (int) (((long) 16));
														{	/* Ast/check_init.scm 216 */
															long BgL_auxz00_2640;

															BgL_auxz00_2640 = (long) (BgL_arg2644z00_2120);
															BgL_restz00_2119 =
																(BgL_offsetz00_2116 % BgL_auxz00_2640);
													}}
													{	/* Ast/check_init.scm 216 */

														BgL_method3567z00_2109 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2114,
																(int) (BgL_modz00_2117)),
															(int) (BgL_restz00_2119));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_2109) (BgL_method3567z00_2109,
							(obj_t) (BgL_arg3753z00_2106), BEOA);
					}
				}
			}
		}
	}



/* check-init-let-var3593 */
	obj_t BGl_checkzd2initzd2letzd2var3593zd2zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2279, obj_t BgL_nodez00_2280)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 205 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1442;

				{	/* Ast/check_init.scm 206 */
					bool_t BgL_auxz00_2651;

					BgL_nodez00_1442 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2280);
					{	/* Ast/check_init.scm 207 */
						BgL_nodez00_bglt BgL_arg3747z00_1446;

						BgL_arg3747z00_1446 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1442))->BgL_bodyz00);
						{	/* Ast/check_init.scm 207 */
							obj_t BgL_method3567z00_2050;

							{	/* Ast/check_init.scm 207 */
								BgL_objectz00_bglt BgL_objz00_2051;

								BgL_objz00_2051 = (BgL_objectz00_bglt) (BgL_arg3747z00_1446);
								{	/* Ast/check_init.scm 207 */
									long BgL_objzd2classzd2numz00_2052;

									BgL_objzd2classzd2numz00_2052 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2051);
									{	/* Ast/check_init.scm 207 */
										obj_t BgL_arg2643z00_2053;

										BgL_arg2643z00_2053 =
											PROCEDURE_REF
											(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
											(int) (((long) 1)));
										{	/* Ast/check_init.scm 207 */
											obj_t BgL_arrayz00_2055;

											int BgL_offsetz00_2056;

											BgL_arrayz00_2055 = BgL_arg2643z00_2053;
											BgL_offsetz00_2056 =
												(int) (BgL_objzd2classzd2numz00_2052);
											{	/* Ast/check_init.scm 207 */
												long BgL_offsetz00_2057;

												BgL_offsetz00_2057 =
													((long) (BgL_offsetz00_2056) - OBJECT_TYPE);
												{	/* Ast/check_init.scm 207 */
													long BgL_modz00_2058;

													{	/* Ast/check_init.scm 207 */
														int BgL_arg2645z00_2059;

														BgL_arg2645z00_2059 = (int) (((long) 16));
														{	/* Ast/check_init.scm 207 */
															long BgL_auxz00_2661;

															BgL_auxz00_2661 = (long) (BgL_arg2645z00_2059);
															BgL_modz00_2058 =
																(BgL_offsetz00_2057 / BgL_auxz00_2661);
													}}
													{	/* Ast/check_init.scm 207 */
														long BgL_restz00_2060;

														{	/* Ast/check_init.scm 207 */
															int BgL_arg2644z00_2061;

															BgL_arg2644z00_2061 = (int) (((long) 16));
															{	/* Ast/check_init.scm 207 */
																long BgL_auxz00_2665;

																BgL_auxz00_2665 = (long) (BgL_arg2644z00_2061);
																BgL_restz00_2060 =
																	(BgL_offsetz00_2057 % BgL_auxz00_2665);
														}}
														{	/* Ast/check_init.scm 207 */

															BgL_method3567z00_2050 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2055,
																	(int) (BgL_modz00_2058)),
																(int) (BgL_restz00_2060));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3567z00_2050) (BgL_method3567z00_2050,
								(obj_t) (BgL_arg3747z00_1446), BEOA);
					}}
					{	/* Ast/check_init.scm 208 */
						obj_t BgL_g3563z00_1447;

						BgL_g3563z00_1447 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1442))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3561z00_1449;

							BgL_l3561z00_1449 = BgL_g3563z00_1447;
						BgL_zc3anonymousza33748ze3z83_1450:
							if (PAIRP(BgL_l3561z00_1449))
								{	/* Ast/check_init.scm 208 */
									{	/* Ast/check_init.scm 209 */
										obj_t BgL_bindingz00_1452;

										BgL_bindingz00_1452 = CAR(BgL_l3561z00_1449);
										{	/* Ast/check_init.scm 209 */
											obj_t BgL_arg3750z00_1453;

											BgL_arg3750z00_1453 = CDR(BgL_bindingz00_1452);
											{	/* Ast/check_init.scm 209 */
												BgL_nodez00_bglt BgL_nodez00_2079;

												BgL_nodez00_2079 =
													(BgL_nodez00_bglt) (BgL_arg3750z00_1453);
												{	/* Ast/check_init.scm 209 */
													obj_t BgL_method3567z00_2080;

													{	/* Ast/check_init.scm 209 */
														BgL_objectz00_bglt BgL_objz00_2081;

														BgL_objz00_2081 =
															(BgL_objectz00_bglt) (BgL_nodez00_2079);
														{	/* Ast/check_init.scm 209 */
															long BgL_objzd2classzd2numz00_2082;

															BgL_objzd2classzd2numz00_2082 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2081);
															{	/* Ast/check_init.scm 209 */
																obj_t BgL_arg2643z00_2083;

																BgL_arg2643z00_2083 =
																	PROCEDURE_REF
																	(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
																	(int) (((long) 1)));
																{	/* Ast/check_init.scm 209 */
																	obj_t BgL_arrayz00_2085;

																	int BgL_offsetz00_2086;

																	BgL_arrayz00_2085 = BgL_arg2643z00_2083;
																	BgL_offsetz00_2086 =
																		(int) (BgL_objzd2classzd2numz00_2082);
																	{	/* Ast/check_init.scm 209 */
																		long BgL_offsetz00_2087;

																		BgL_offsetz00_2087 =
																			(
																			(long) (BgL_offsetz00_2086) -
																			OBJECT_TYPE);
																		{	/* Ast/check_init.scm 209 */
																			long BgL_modz00_2088;

																			{	/* Ast/check_init.scm 209 */
																				int BgL_arg2645z00_2089;

																				BgL_arg2645z00_2089 =
																					(int) (((long) 16));
																				{	/* Ast/check_init.scm 209 */
																					long BgL_auxz00_2689;

																					BgL_auxz00_2689 =
																						(long) (BgL_arg2645z00_2089);
																					BgL_modz00_2088 =
																						(BgL_offsetz00_2087 /
																						BgL_auxz00_2689);
																			}}
																			{	/* Ast/check_init.scm 209 */
																				long BgL_restz00_2090;

																				{	/* Ast/check_init.scm 209 */
																					int BgL_arg2644z00_2091;

																					BgL_arg2644z00_2091 =
																						(int) (((long) 16));
																					{	/* Ast/check_init.scm 209 */
																						long BgL_auxz00_2693;

																						BgL_auxz00_2693 =
																							(long) (BgL_arg2644z00_2091);
																						BgL_restz00_2090 =
																							(BgL_offsetz00_2087 %
																							BgL_auxz00_2693);
																				}}
																				{	/* Ast/check_init.scm 209 */

																					BgL_method3567z00_2080 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2085,
																							(int) (BgL_modz00_2088)),
																						(int) (BgL_restz00_2090));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3567z00_2080)
														(BgL_method3567z00_2080, (obj_t) (BgL_nodez00_2079),
														BEOA);
									}}}}
									{
										obj_t BgL_l3561z00_2703;

										BgL_l3561z00_2703 = CDR(BgL_l3561z00_1449);
										BgL_l3561z00_1449 = BgL_l3561z00_2703;
										goto BgL_zc3anonymousza33748ze3z83_1450;
									}
								}
							else
								{	/* Ast/check_init.scm 208 */
									BgL_auxz00_2651 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2651);
				}
			}
		}
	}



/* check-init-let-fun3591 */
	obj_t BGl_checkzd2initzd2letzd2fun3591zd2zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2281, obj_t BgL_nodez00_2282)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 198 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1435;

				BgL_nodez00_1435 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2282);
				{	/* Ast/check_init.scm 199 */
					BgL_nodez00_bglt BgL_arg3745z00_2020;

					BgL_arg3745z00_2020 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1435))->BgL_bodyz00);
					{	/* Ast/check_init.scm 199 */
						obj_t BgL_method3567z00_2023;

						{	/* Ast/check_init.scm 199 */
							BgL_objectz00_bglt BgL_objz00_2024;

							BgL_objz00_2024 = (BgL_objectz00_bglt) (BgL_arg3745z00_2020);
							{	/* Ast/check_init.scm 199 */
								long BgL_objzd2classzd2numz00_2025;

								BgL_objzd2classzd2numz00_2025 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2024);
								{	/* Ast/check_init.scm 199 */
									obj_t BgL_arg2643z00_2026;

									BgL_arg2643z00_2026 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 199 */
										obj_t BgL_arrayz00_2028;

										int BgL_offsetz00_2029;

										BgL_arrayz00_2028 = BgL_arg2643z00_2026;
										BgL_offsetz00_2029 = (int) (BgL_objzd2classzd2numz00_2025);
										{	/* Ast/check_init.scm 199 */
											long BgL_offsetz00_2030;

											BgL_offsetz00_2030 =
												((long) (BgL_offsetz00_2029) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 199 */
												long BgL_modz00_2031;

												{	/* Ast/check_init.scm 199 */
													int BgL_arg2645z00_2032;

													BgL_arg2645z00_2032 = (int) (((long) 16));
													{	/* Ast/check_init.scm 199 */
														long BgL_auxz00_2716;

														BgL_auxz00_2716 = (long) (BgL_arg2645z00_2032);
														BgL_modz00_2031 =
															(BgL_offsetz00_2030 / BgL_auxz00_2716);
												}}
												{	/* Ast/check_init.scm 199 */
													long BgL_restz00_2033;

													{	/* Ast/check_init.scm 199 */
														int BgL_arg2644z00_2034;

														BgL_arg2644z00_2034 = (int) (((long) 16));
														{	/* Ast/check_init.scm 199 */
															long BgL_auxz00_2720;

															BgL_auxz00_2720 = (long) (BgL_arg2644z00_2034);
															BgL_restz00_2033 =
																(BgL_offsetz00_2030 % BgL_auxz00_2720);
													}}
													{	/* Ast/check_init.scm 199 */

														BgL_method3567z00_2023 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2028,
																(int) (BgL_modz00_2031)),
															(int) (BgL_restz00_2033));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_2023) (BgL_method3567z00_2023,
							(obj_t) (BgL_arg3745z00_2020), BEOA);
					}
				}
			}
		}
	}



/* check-init-select3589 */
	obj_t BGl_checkzd2initzd2select3589z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2283, obj_t BgL_nodez00_2284)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 185 */
			{
				BgL_selectz00_bglt BgL_nodez00_1419;

				{	/* Ast/check_init.scm 186 */
					bool_t BgL_auxz00_2731;

					BgL_nodez00_1419 = (BgL_selectz00_bglt) (BgL_nodez00_2284);
					{	/* Ast/check_init.scm 187 */
						BgL_nodez00_bglt BgL_arg3738z00_1423;

						BgL_arg3738z00_1423 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1419))->BgL_testz00);
						{	/* Ast/check_init.scm 187 */
							obj_t BgL_method3567z00_1963;

							{	/* Ast/check_init.scm 187 */
								BgL_objectz00_bglt BgL_objz00_1964;

								BgL_objz00_1964 = (BgL_objectz00_bglt) (BgL_arg3738z00_1423);
								{	/* Ast/check_init.scm 187 */
									long BgL_objzd2classzd2numz00_1965;

									BgL_objzd2classzd2numz00_1965 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1964);
									{	/* Ast/check_init.scm 187 */
										obj_t BgL_arg2643z00_1966;

										BgL_arg2643z00_1966 =
											PROCEDURE_REF
											(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
											(int) (((long) 1)));
										{	/* Ast/check_init.scm 187 */
											obj_t BgL_arrayz00_1968;

											int BgL_offsetz00_1969;

											BgL_arrayz00_1968 = BgL_arg2643z00_1966;
											BgL_offsetz00_1969 =
												(int) (BgL_objzd2classzd2numz00_1965);
											{	/* Ast/check_init.scm 187 */
												long BgL_offsetz00_1970;

												BgL_offsetz00_1970 =
													((long) (BgL_offsetz00_1969) - OBJECT_TYPE);
												{	/* Ast/check_init.scm 187 */
													long BgL_modz00_1971;

													{	/* Ast/check_init.scm 187 */
														int BgL_arg2645z00_1972;

														BgL_arg2645z00_1972 = (int) (((long) 16));
														{	/* Ast/check_init.scm 187 */
															long BgL_auxz00_2741;

															BgL_auxz00_2741 = (long) (BgL_arg2645z00_1972);
															BgL_modz00_1971 =
																(BgL_offsetz00_1970 / BgL_auxz00_2741);
													}}
													{	/* Ast/check_init.scm 187 */
														long BgL_restz00_1973;

														{	/* Ast/check_init.scm 187 */
															int BgL_arg2644z00_1974;

															BgL_arg2644z00_1974 = (int) (((long) 16));
															{	/* Ast/check_init.scm 187 */
																long BgL_auxz00_2745;

																BgL_auxz00_2745 = (long) (BgL_arg2644z00_1974);
																BgL_restz00_1973 =
																	(BgL_offsetz00_1970 % BgL_auxz00_2745);
														}}
														{	/* Ast/check_init.scm 187 */

															BgL_method3567z00_1963 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1968,
																	(int) (BgL_modz00_1971)),
																(int) (BgL_restz00_1973));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3567z00_1963) (BgL_method3567z00_1963,
								(obj_t) (BgL_arg3738z00_1423), BEOA);
					}}
					{	/* Ast/check_init.scm 188 */
						obj_t BgL_g3560z00_1424;

						BgL_g3560z00_1424 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1419))->BgL_clausesz00);
						{
							obj_t BgL_l3558z00_1426;

							BgL_l3558z00_1426 = BgL_g3560z00_1424;
						BgL_zc3anonymousza33739ze3z83_1427:
							if (PAIRP(BgL_l3558z00_1426))
								{	/* Ast/check_init.scm 188 */
									{	/* Ast/check_init.scm 189 */
										obj_t BgL_clausez00_1429;

										BgL_clausez00_1429 = CAR(BgL_l3558z00_1426);
										{	/* Ast/check_init.scm 189 */
											obj_t BgL_arg3741z00_1430;

											BgL_arg3741z00_1430 = CDR(BgL_clausez00_1429);
											{	/* Ast/check_init.scm 189 */
												BgL_nodez00_bglt BgL_nodez00_1992;

												BgL_nodez00_1992 =
													(BgL_nodez00_bglt) (BgL_arg3741z00_1430);
												{	/* Ast/check_init.scm 189 */
													obj_t BgL_method3567z00_1993;

													{	/* Ast/check_init.scm 189 */
														BgL_objectz00_bglt BgL_objz00_1994;

														BgL_objz00_1994 =
															(BgL_objectz00_bglt) (BgL_nodez00_1992);
														{	/* Ast/check_init.scm 189 */
															long BgL_objzd2classzd2numz00_1995;

															BgL_objzd2classzd2numz00_1995 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1994);
															{	/* Ast/check_init.scm 189 */
																obj_t BgL_arg2643z00_1996;

																BgL_arg2643z00_1996 =
																	PROCEDURE_REF
																	(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
																	(int) (((long) 1)));
																{	/* Ast/check_init.scm 189 */
																	obj_t BgL_arrayz00_1998;

																	int BgL_offsetz00_1999;

																	BgL_arrayz00_1998 = BgL_arg2643z00_1996;
																	BgL_offsetz00_1999 =
																		(int) (BgL_objzd2classzd2numz00_1995);
																	{	/* Ast/check_init.scm 189 */
																		long BgL_offsetz00_2000;

																		BgL_offsetz00_2000 =
																			(
																			(long) (BgL_offsetz00_1999) -
																			OBJECT_TYPE);
																		{	/* Ast/check_init.scm 189 */
																			long BgL_modz00_2001;

																			{	/* Ast/check_init.scm 189 */
																				int BgL_arg2645z00_2002;

																				BgL_arg2645z00_2002 =
																					(int) (((long) 16));
																				{	/* Ast/check_init.scm 189 */
																					long BgL_auxz00_2769;

																					BgL_auxz00_2769 =
																						(long) (BgL_arg2645z00_2002);
																					BgL_modz00_2001 =
																						(BgL_offsetz00_2000 /
																						BgL_auxz00_2769);
																			}}
																			{	/* Ast/check_init.scm 189 */
																				long BgL_restz00_2003;

																				{	/* Ast/check_init.scm 189 */
																					int BgL_arg2644z00_2004;

																					BgL_arg2644z00_2004 =
																						(int) (((long) 16));
																					{	/* Ast/check_init.scm 189 */
																						long BgL_auxz00_2773;

																						BgL_auxz00_2773 =
																							(long) (BgL_arg2644z00_2004);
																						BgL_restz00_2003 =
																							(BgL_offsetz00_2000 %
																							BgL_auxz00_2773);
																				}}
																				{	/* Ast/check_init.scm 189 */

																					BgL_method3567z00_1993 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1998,
																							(int) (BgL_modz00_2001)),
																						(int) (BgL_restz00_2003));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3567z00_1993)
														(BgL_method3567z00_1993, (obj_t) (BgL_nodez00_1992),
														BEOA);
									}}}}
									{
										obj_t BgL_l3558z00_2783;

										BgL_l3558z00_2783 = CDR(BgL_l3558z00_1426);
										BgL_l3558z00_1426 = BgL_l3558z00_2783;
										goto BgL_zc3anonymousza33739ze3z83_1427;
									}
								}
							else
								{	/* Ast/check_init.scm 188 */
									BgL_auxz00_2731 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2731);
				}
			}
		}
	}



/* check-init-fail3587 */
	obj_t BGl_checkzd2initzd2fail3587z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2285, obj_t BgL_nodez00_2286)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 176 */
			{
				BgL_failz00_bglt BgL_nodez00_1410;

				BgL_nodez00_1410 = (BgL_failz00_bglt) (BgL_nodez00_2286);
				{	/* Ast/check_init.scm 178 */
					BgL_nodez00_bglt BgL_arg3734z00_1414;

					BgL_arg3734z00_1414 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_procz00);
					{	/* Ast/check_init.scm 178 */
						obj_t BgL_method3567z00_1882;

						{	/* Ast/check_init.scm 178 */
							BgL_objectz00_bglt BgL_objz00_1883;

							BgL_objz00_1883 = (BgL_objectz00_bglt) (BgL_arg3734z00_1414);
							{	/* Ast/check_init.scm 178 */
								long BgL_objzd2classzd2numz00_1884;

								BgL_objzd2classzd2numz00_1884 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1883);
								{	/* Ast/check_init.scm 178 */
									obj_t BgL_arg2643z00_1885;

									BgL_arg2643z00_1885 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 178 */
										obj_t BgL_arrayz00_1887;

										int BgL_offsetz00_1888;

										BgL_arrayz00_1887 = BgL_arg2643z00_1885;
										BgL_offsetz00_1888 = (int) (BgL_objzd2classzd2numz00_1884);
										{	/* Ast/check_init.scm 178 */
											long BgL_offsetz00_1889;

											BgL_offsetz00_1889 =
												((long) (BgL_offsetz00_1888) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 178 */
												long BgL_modz00_1890;

												{	/* Ast/check_init.scm 178 */
													int BgL_arg2645z00_1891;

													BgL_arg2645z00_1891 = (int) (((long) 16));
													{	/* Ast/check_init.scm 178 */
														long BgL_auxz00_2796;

														BgL_auxz00_2796 = (long) (BgL_arg2645z00_1891);
														BgL_modz00_1890 =
															(BgL_offsetz00_1889 / BgL_auxz00_2796);
												}}
												{	/* Ast/check_init.scm 178 */
													long BgL_restz00_1892;

													{	/* Ast/check_init.scm 178 */
														int BgL_arg2644z00_1893;

														BgL_arg2644z00_1893 = (int) (((long) 16));
														{	/* Ast/check_init.scm 178 */
															long BgL_auxz00_2800;

															BgL_auxz00_2800 = (long) (BgL_arg2644z00_1893);
															BgL_restz00_1892 =
																(BgL_offsetz00_1889 % BgL_auxz00_2800);
													}}
													{	/* Ast/check_init.scm 178 */

														BgL_method3567z00_1882 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1887,
																(int) (BgL_modz00_1890)),
															(int) (BgL_restz00_1892));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3567z00_1882) (BgL_method3567z00_1882,
							(obj_t) (BgL_arg3734z00_1414), BEOA);
				}}
				{	/* Ast/check_init.scm 179 */
					BgL_nodez00_bglt BgL_arg3735z00_1415;

					BgL_arg3735z00_1415 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_msgz00);
					{	/* Ast/check_init.scm 179 */
						obj_t BgL_method3567z00_1909;

						{	/* Ast/check_init.scm 179 */
							BgL_objectz00_bglt BgL_objz00_1910;

							BgL_objz00_1910 = (BgL_objectz00_bglt) (BgL_arg3735z00_1415);
							{	/* Ast/check_init.scm 179 */
								long BgL_objzd2classzd2numz00_1911;

								BgL_objzd2classzd2numz00_1911 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1910);
								{	/* Ast/check_init.scm 179 */
									obj_t BgL_arg2643z00_1912;

									BgL_arg2643z00_1912 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 179 */
										obj_t BgL_arrayz00_1914;

										int BgL_offsetz00_1915;

										BgL_arrayz00_1914 = BgL_arg2643z00_1912;
										BgL_offsetz00_1915 = (int) (BgL_objzd2classzd2numz00_1911);
										{	/* Ast/check_init.scm 179 */
											long BgL_offsetz00_1916;

											BgL_offsetz00_1916 =
												((long) (BgL_offsetz00_1915) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 179 */
												long BgL_modz00_1917;

												{	/* Ast/check_init.scm 179 */
													int BgL_arg2645z00_1918;

													BgL_arg2645z00_1918 = (int) (((long) 16));
													{	/* Ast/check_init.scm 179 */
														long BgL_auxz00_2819;

														BgL_auxz00_2819 = (long) (BgL_arg2645z00_1918);
														BgL_modz00_1917 =
															(BgL_offsetz00_1916 / BgL_auxz00_2819);
												}}
												{	/* Ast/check_init.scm 179 */
													long BgL_restz00_1919;

													{	/* Ast/check_init.scm 179 */
														int BgL_arg2644z00_1920;

														BgL_arg2644z00_1920 = (int) (((long) 16));
														{	/* Ast/check_init.scm 179 */
															long BgL_auxz00_2823;

															BgL_auxz00_2823 = (long) (BgL_arg2644z00_1920);
															BgL_restz00_1919 =
																(BgL_offsetz00_1916 % BgL_auxz00_2823);
													}}
													{	/* Ast/check_init.scm 179 */

														BgL_method3567z00_1909 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1914,
																(int) (BgL_modz00_1917)),
															(int) (BgL_restz00_1919));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3567z00_1909) (BgL_method3567z00_1909,
							(obj_t) (BgL_arg3735z00_1415), BEOA);
				}}
				{	/* Ast/check_init.scm 180 */
					BgL_nodez00_bglt BgL_arg3736z00_1416;

					BgL_arg3736z00_1416 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_objz00);
					{	/* Ast/check_init.scm 180 */
						obj_t BgL_method3567z00_1936;

						{	/* Ast/check_init.scm 180 */
							BgL_objectz00_bglt BgL_objz00_1937;

							BgL_objz00_1937 = (BgL_objectz00_bglt) (BgL_arg3736z00_1416);
							{	/* Ast/check_init.scm 180 */
								long BgL_objzd2classzd2numz00_1938;

								BgL_objzd2classzd2numz00_1938 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1937);
								{	/* Ast/check_init.scm 180 */
									obj_t BgL_arg2643z00_1939;

									BgL_arg2643z00_1939 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 180 */
										obj_t BgL_arrayz00_1941;

										int BgL_offsetz00_1942;

										BgL_arrayz00_1941 = BgL_arg2643z00_1939;
										BgL_offsetz00_1942 = (int) (BgL_objzd2classzd2numz00_1938);
										{	/* Ast/check_init.scm 180 */
											long BgL_offsetz00_1943;

											BgL_offsetz00_1943 =
												((long) (BgL_offsetz00_1942) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 180 */
												long BgL_modz00_1944;

												{	/* Ast/check_init.scm 180 */
													int BgL_arg2645z00_1945;

													BgL_arg2645z00_1945 = (int) (((long) 16));
													{	/* Ast/check_init.scm 180 */
														long BgL_auxz00_2842;

														BgL_auxz00_2842 = (long) (BgL_arg2645z00_1945);
														BgL_modz00_1944 =
															(BgL_offsetz00_1943 / BgL_auxz00_2842);
												}}
												{	/* Ast/check_init.scm 180 */
													long BgL_restz00_1946;

													{	/* Ast/check_init.scm 180 */
														int BgL_arg2644z00_1947;

														BgL_arg2644z00_1947 = (int) (((long) 16));
														{	/* Ast/check_init.scm 180 */
															long BgL_auxz00_2846;

															BgL_auxz00_2846 = (long) (BgL_arg2644z00_1947);
															BgL_restz00_1946 =
																(BgL_offsetz00_1943 % BgL_auxz00_2846);
													}}
													{	/* Ast/check_init.scm 180 */

														BgL_method3567z00_1936 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1941,
																(int) (BgL_modz00_1944)),
															(int) (BgL_restz00_1946));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_1936) (BgL_method3567z00_1936,
							(obj_t) (BgL_arg3736z00_1416), BEOA);
					}
				}
			}
		}
	}



/* check-init-condition3585 */
	obj_t BGl_checkzd2initzd2condition3585z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2287, obj_t BgL_nodez00_2288)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 167 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1401;

				BgL_nodez00_1401 = (BgL_conditionalz00_bglt) (BgL_nodez00_2288);
				{	/* Ast/check_init.scm 169 */
					BgL_nodez00_bglt BgL_arg3730z00_1405;

					BgL_arg3730z00_1405 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1401))->BgL_testz00);
					{	/* Ast/check_init.scm 169 */
						obj_t BgL_method3567z00_1801;

						{	/* Ast/check_init.scm 169 */
							BgL_objectz00_bglt BgL_objz00_1802;

							BgL_objz00_1802 = (BgL_objectz00_bglt) (BgL_arg3730z00_1405);
							{	/* Ast/check_init.scm 169 */
								long BgL_objzd2classzd2numz00_1803;

								BgL_objzd2classzd2numz00_1803 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1802);
								{	/* Ast/check_init.scm 169 */
									obj_t BgL_arg2643z00_1804;

									BgL_arg2643z00_1804 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 169 */
										obj_t BgL_arrayz00_1806;

										int BgL_offsetz00_1807;

										BgL_arrayz00_1806 = BgL_arg2643z00_1804;
										BgL_offsetz00_1807 = (int) (BgL_objzd2classzd2numz00_1803);
										{	/* Ast/check_init.scm 169 */
											long BgL_offsetz00_1808;

											BgL_offsetz00_1808 =
												((long) (BgL_offsetz00_1807) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 169 */
												long BgL_modz00_1809;

												{	/* Ast/check_init.scm 169 */
													int BgL_arg2645z00_1810;

													BgL_arg2645z00_1810 = (int) (((long) 16));
													{	/* Ast/check_init.scm 169 */
														long BgL_auxz00_2866;

														BgL_auxz00_2866 = (long) (BgL_arg2645z00_1810);
														BgL_modz00_1809 =
															(BgL_offsetz00_1808 / BgL_auxz00_2866);
												}}
												{	/* Ast/check_init.scm 169 */
													long BgL_restz00_1811;

													{	/* Ast/check_init.scm 169 */
														int BgL_arg2644z00_1812;

														BgL_arg2644z00_1812 = (int) (((long) 16));
														{	/* Ast/check_init.scm 169 */
															long BgL_auxz00_2870;

															BgL_auxz00_2870 = (long) (BgL_arg2644z00_1812);
															BgL_restz00_1811 =
																(BgL_offsetz00_1808 % BgL_auxz00_2870);
													}}
													{	/* Ast/check_init.scm 169 */

														BgL_method3567z00_1801 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1806,
																(int) (BgL_modz00_1809)),
															(int) (BgL_restz00_1811));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3567z00_1801) (BgL_method3567z00_1801,
							(obj_t) (BgL_arg3730z00_1405), BEOA);
				}}
				{	/* Ast/check_init.scm 170 */
					BgL_nodez00_bglt BgL_arg3731z00_1406;

					BgL_arg3731z00_1406 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1401))->BgL_truez00);
					{	/* Ast/check_init.scm 170 */
						obj_t BgL_method3567z00_1828;

						{	/* Ast/check_init.scm 170 */
							BgL_objectz00_bglt BgL_objz00_1829;

							BgL_objz00_1829 = (BgL_objectz00_bglt) (BgL_arg3731z00_1406);
							{	/* Ast/check_init.scm 170 */
								long BgL_objzd2classzd2numz00_1830;

								BgL_objzd2classzd2numz00_1830 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1829);
								{	/* Ast/check_init.scm 170 */
									obj_t BgL_arg2643z00_1831;

									BgL_arg2643z00_1831 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 170 */
										obj_t BgL_arrayz00_1833;

										int BgL_offsetz00_1834;

										BgL_arrayz00_1833 = BgL_arg2643z00_1831;
										BgL_offsetz00_1834 = (int) (BgL_objzd2classzd2numz00_1830);
										{	/* Ast/check_init.scm 170 */
											long BgL_offsetz00_1835;

											BgL_offsetz00_1835 =
												((long) (BgL_offsetz00_1834) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 170 */
												long BgL_modz00_1836;

												{	/* Ast/check_init.scm 170 */
													int BgL_arg2645z00_1837;

													BgL_arg2645z00_1837 = (int) (((long) 16));
													{	/* Ast/check_init.scm 170 */
														long BgL_auxz00_2889;

														BgL_auxz00_2889 = (long) (BgL_arg2645z00_1837);
														BgL_modz00_1836 =
															(BgL_offsetz00_1835 / BgL_auxz00_2889);
												}}
												{	/* Ast/check_init.scm 170 */
													long BgL_restz00_1838;

													{	/* Ast/check_init.scm 170 */
														int BgL_arg2644z00_1839;

														BgL_arg2644z00_1839 = (int) (((long) 16));
														{	/* Ast/check_init.scm 170 */
															long BgL_auxz00_2893;

															BgL_auxz00_2893 = (long) (BgL_arg2644z00_1839);
															BgL_restz00_1838 =
																(BgL_offsetz00_1835 % BgL_auxz00_2893);
													}}
													{	/* Ast/check_init.scm 170 */

														BgL_method3567z00_1828 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1833,
																(int) (BgL_modz00_1836)),
															(int) (BgL_restz00_1838));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3567z00_1828) (BgL_method3567z00_1828,
							(obj_t) (BgL_arg3731z00_1406), BEOA);
				}}
				{	/* Ast/check_init.scm 171 */
					BgL_nodez00_bglt BgL_arg3732z00_1407;

					BgL_arg3732z00_1407 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1401))->BgL_falsez00);
					{	/* Ast/check_init.scm 171 */
						obj_t BgL_method3567z00_1855;

						{	/* Ast/check_init.scm 171 */
							BgL_objectz00_bglt BgL_objz00_1856;

							BgL_objz00_1856 = (BgL_objectz00_bglt) (BgL_arg3732z00_1407);
							{	/* Ast/check_init.scm 171 */
								long BgL_objzd2classzd2numz00_1857;

								BgL_objzd2classzd2numz00_1857 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1856);
								{	/* Ast/check_init.scm 171 */
									obj_t BgL_arg2643z00_1858;

									BgL_arg2643z00_1858 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 171 */
										obj_t BgL_arrayz00_1860;

										int BgL_offsetz00_1861;

										BgL_arrayz00_1860 = BgL_arg2643z00_1858;
										BgL_offsetz00_1861 = (int) (BgL_objzd2classzd2numz00_1857);
										{	/* Ast/check_init.scm 171 */
											long BgL_offsetz00_1862;

											BgL_offsetz00_1862 =
												((long) (BgL_offsetz00_1861) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 171 */
												long BgL_modz00_1863;

												{	/* Ast/check_init.scm 171 */
													int BgL_arg2645z00_1864;

													BgL_arg2645z00_1864 = (int) (((long) 16));
													{	/* Ast/check_init.scm 171 */
														long BgL_auxz00_2912;

														BgL_auxz00_2912 = (long) (BgL_arg2645z00_1864);
														BgL_modz00_1863 =
															(BgL_offsetz00_1862 / BgL_auxz00_2912);
												}}
												{	/* Ast/check_init.scm 171 */
													long BgL_restz00_1865;

													{	/* Ast/check_init.scm 171 */
														int BgL_arg2644z00_1866;

														BgL_arg2644z00_1866 = (int) (((long) 16));
														{	/* Ast/check_init.scm 171 */
															long BgL_auxz00_2916;

															BgL_auxz00_2916 = (long) (BgL_arg2644z00_1866);
															BgL_restz00_1865 =
																(BgL_offsetz00_1862 % BgL_auxz00_2916);
													}}
													{	/* Ast/check_init.scm 171 */

														BgL_method3567z00_1855 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1860,
																(int) (BgL_modz00_1863)),
															(int) (BgL_restz00_1865));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_1855) (BgL_method3567z00_1855,
							(obj_t) (BgL_arg3732z00_1407), BEOA);
					}
				}
			}
		}
	}



/* check-init-setq3583 */
	obj_t BGl_checkzd2initzd2setq3583z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2289, obj_t BgL_nodez00_2290)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 155 */
			{
				BgL_setqz00_bglt BgL_nodez00_1392;

				BgL_nodez00_1392 = (BgL_setqz00_bglt) (BgL_nodez00_2290);
				{	/* Ast/check_init.scm 159 */
					BgL_variablez00_bglt BgL_varz00_1395;

					{	/* Ast/check_init.scm 159 */
						BgL_varz00_bglt BgL_obj2066z00_1769;

						BgL_obj2066z00_1769 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1392))->BgL_varz00);
						BgL_varz00_1395 =
							(((BgL_varz00_bglt) CREF(BgL_obj2066z00_1769))->BgL_variablez00);
					}
					{	/* Ast/check_init.scm 160 */
						bool_t BgL_testz00_2929;

						{	/* Ast/check_init.scm 160 */
							obj_t BgL_obj1661z00_1770;

							BgL_obj1661z00_1770 = (obj_t) (BgL_varz00_1395);
							BgL_testz00_2929 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1661z00_1770,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_2929)
							{	/* Ast/check_init.scm 161 */
								BgL_globalz00_bglt BgL_globalz00_1771;

								BgL_globalz00_1771 = (BgL_globalz00_bglt) (BgL_varz00_1395);
								BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 =
									MAKE_PAIR(
									(obj_t) (BgL_globalz00_1771),
									BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00);
							}
						else
							{	/* Ast/check_init.scm 160 */
								BFALSE;
							}
					}
				}
				{	/* Ast/check_init.scm 162 */
					BgL_nodez00_bglt BgL_arg3728z00_1398;

					BgL_arg3728z00_1398 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1392))->BgL_valuez00);
					{	/* Ast/check_init.scm 162 */
						obj_t BgL_method3567z00_1774;

						{	/* Ast/check_init.scm 162 */
							BgL_objectz00_bglt BgL_objz00_1775;

							BgL_objz00_1775 = (BgL_objectz00_bglt) (BgL_arg3728z00_1398);
							{	/* Ast/check_init.scm 162 */
								long BgL_objzd2classzd2numz00_1776;

								BgL_objzd2classzd2numz00_1776 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1775);
								{	/* Ast/check_init.scm 162 */
									obj_t BgL_arg2643z00_1777;

									BgL_arg2643z00_1777 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 162 */
										obj_t BgL_arrayz00_1779;

										int BgL_offsetz00_1780;

										BgL_arrayz00_1779 = BgL_arg2643z00_1777;
										BgL_offsetz00_1780 = (int) (BgL_objzd2classzd2numz00_1776);
										{	/* Ast/check_init.scm 162 */
											long BgL_offsetz00_1781;

											BgL_offsetz00_1781 =
												((long) (BgL_offsetz00_1780) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 162 */
												long BgL_modz00_1782;

												{	/* Ast/check_init.scm 162 */
													int BgL_arg2645z00_1783;

													BgL_arg2645z00_1783 = (int) (((long) 16));
													{	/* Ast/check_init.scm 162 */
														long BgL_auxz00_2944;

														BgL_auxz00_2944 = (long) (BgL_arg2645z00_1783);
														BgL_modz00_1782 =
															(BgL_offsetz00_1781 / BgL_auxz00_2944);
												}}
												{	/* Ast/check_init.scm 162 */
													long BgL_restz00_1784;

													{	/* Ast/check_init.scm 162 */
														int BgL_arg2644z00_1785;

														BgL_arg2644z00_1785 = (int) (((long) 16));
														{	/* Ast/check_init.scm 162 */
															long BgL_auxz00_2948;

															BgL_auxz00_2948 = (long) (BgL_arg2644z00_1785);
															BgL_restz00_1784 =
																(BgL_offsetz00_1781 % BgL_auxz00_2948);
													}}
													{	/* Ast/check_init.scm 162 */

														BgL_method3567z00_1774 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1779,
																(int) (BgL_modz00_1782)),
															(int) (BgL_restz00_1784));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_1774) (BgL_method3567z00_1774,
							(obj_t) (BgL_arg3728z00_1398), BEOA);
					}
				}
			}
		}
	}



/* check-init-cast3581 */
	obj_t BGl_checkzd2initzd2cast3581z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2291, obj_t BgL_nodez00_2292)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 149 */
			{
				BgL_castz00_bglt BgL_nodez00_1386;

				BgL_nodez00_1386 = (BgL_castz00_bglt) (BgL_nodez00_2292);
				{	/* Ast/check_init.scm 150 */
					BgL_nodez00_bglt BgL_arg3724z00_1740;

					BgL_arg3724z00_1740 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1386))->BgL_argz00);
					{	/* Ast/check_init.scm 150 */
						obj_t BgL_method3567z00_1743;

						{	/* Ast/check_init.scm 150 */
							BgL_objectz00_bglt BgL_objz00_1744;

							BgL_objz00_1744 = (BgL_objectz00_bglt) (BgL_arg3724z00_1740);
							{	/* Ast/check_init.scm 150 */
								long BgL_objzd2classzd2numz00_1745;

								BgL_objzd2classzd2numz00_1745 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1744);
								{	/* Ast/check_init.scm 150 */
									obj_t BgL_arg2643z00_1746;

									BgL_arg2643z00_1746 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 150 */
										obj_t BgL_arrayz00_1748;

										int BgL_offsetz00_1749;

										BgL_arrayz00_1748 = BgL_arg2643z00_1746;
										BgL_offsetz00_1749 = (int) (BgL_objzd2classzd2numz00_1745);
										{	/* Ast/check_init.scm 150 */
											long BgL_offsetz00_1750;

											BgL_offsetz00_1750 =
												((long) (BgL_offsetz00_1749) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 150 */
												long BgL_modz00_1751;

												{	/* Ast/check_init.scm 150 */
													int BgL_arg2645z00_1752;

													BgL_arg2645z00_1752 = (int) (((long) 16));
													{	/* Ast/check_init.scm 150 */
														long BgL_auxz00_2968;

														BgL_auxz00_2968 = (long) (BgL_arg2645z00_1752);
														BgL_modz00_1751 =
															(BgL_offsetz00_1750 / BgL_auxz00_2968);
												}}
												{	/* Ast/check_init.scm 150 */
													long BgL_restz00_1753;

													{	/* Ast/check_init.scm 150 */
														int BgL_arg2644z00_1754;

														BgL_arg2644z00_1754 = (int) (((long) 16));
														{	/* Ast/check_init.scm 150 */
															long BgL_auxz00_2972;

															BgL_auxz00_2972 = (long) (BgL_arg2644z00_1754);
															BgL_restz00_1753 =
																(BgL_offsetz00_1750 % BgL_auxz00_2972);
													}}
													{	/* Ast/check_init.scm 150 */

														BgL_method3567z00_1743 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1748,
																(int) (BgL_modz00_1751)),
															(int) (BgL_restz00_1753));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_1743) (BgL_method3567z00_1743,
							(obj_t) (BgL_arg3724z00_1740), BEOA);
					}
				}
			}
		}
	}



/* check-init-extern3579 */
	obj_t BGl_checkzd2initzd2extern3579z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2293, obj_t BgL_nodez00_2294)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 143 */
			{
				BgL_externz00_bglt BgL_nodez00_1380;

				{	/* Ast/check_init.scm 144 */
					bool_t BgL_auxz00_2983;

					BgL_nodez00_1380 = (BgL_externz00_bglt) (BgL_nodez00_2294);
					{	/* Ast/check_init.scm 144 */
						obj_t BgL_arg3722z00_1738;

						BgL_arg3722z00_1738 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1380))->BgL_exprza2za2);
						BgL_auxz00_2983 =
							BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00
							(BgL_arg3722z00_1738);
					}
					return BBOOL(BgL_auxz00_2983);
				}
			}
		}
	}



/* check-init-funcall3577 */
	obj_t BGl_checkzd2initzd2funcall3577z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2295, obj_t BgL_nodez00_2296)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 135 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1372;

				{	/* Ast/check_init.scm 136 */
					bool_t BgL_auxz00_2988;

					BgL_nodez00_1372 = (BgL_funcallz00_bglt) (BgL_nodez00_2296);
					{	/* Ast/check_init.scm 137 */
						BgL_nodez00_bglt BgL_arg3719z00_1376;

						BgL_arg3719z00_1376 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1372))->BgL_funz00);
						{	/* Ast/check_init.scm 137 */
							obj_t BgL_method3567z00_1712;

							{	/* Ast/check_init.scm 137 */
								BgL_objectz00_bglt BgL_objz00_1713;

								BgL_objz00_1713 = (BgL_objectz00_bglt) (BgL_arg3719z00_1376);
								{	/* Ast/check_init.scm 137 */
									long BgL_objzd2classzd2numz00_1714;

									BgL_objzd2classzd2numz00_1714 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1713);
									{	/* Ast/check_init.scm 137 */
										obj_t BgL_arg2643z00_1715;

										BgL_arg2643z00_1715 =
											PROCEDURE_REF
											(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
											(int) (((long) 1)));
										{	/* Ast/check_init.scm 137 */
											obj_t BgL_arrayz00_1717;

											int BgL_offsetz00_1718;

											BgL_arrayz00_1717 = BgL_arg2643z00_1715;
											BgL_offsetz00_1718 =
												(int) (BgL_objzd2classzd2numz00_1714);
											{	/* Ast/check_init.scm 137 */
												long BgL_offsetz00_1719;

												BgL_offsetz00_1719 =
													((long) (BgL_offsetz00_1718) - OBJECT_TYPE);
												{	/* Ast/check_init.scm 137 */
													long BgL_modz00_1720;

													{	/* Ast/check_init.scm 137 */
														int BgL_arg2645z00_1721;

														BgL_arg2645z00_1721 = (int) (((long) 16));
														{	/* Ast/check_init.scm 137 */
															long BgL_auxz00_2998;

															BgL_auxz00_2998 = (long) (BgL_arg2645z00_1721);
															BgL_modz00_1720 =
																(BgL_offsetz00_1719 / BgL_auxz00_2998);
													}}
													{	/* Ast/check_init.scm 137 */
														long BgL_restz00_1722;

														{	/* Ast/check_init.scm 137 */
															int BgL_arg2644z00_1723;

															BgL_arg2644z00_1723 = (int) (((long) 16));
															{	/* Ast/check_init.scm 137 */
																long BgL_auxz00_3002;

																BgL_auxz00_3002 = (long) (BgL_arg2644z00_1723);
																BgL_restz00_1722 =
																	(BgL_offsetz00_1719 % BgL_auxz00_3002);
														}}
														{	/* Ast/check_init.scm 137 */

															BgL_method3567z00_1712 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1717,
																	(int) (BgL_modz00_1720)),
																(int) (BgL_restz00_1722));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3567z00_1712) (BgL_method3567z00_1712,
								(obj_t) (BgL_arg3719z00_1376), BEOA);
					}}
					{	/* Ast/check_init.scm 138 */
						obj_t BgL_arg3720z00_1377;

						BgL_arg3720z00_1377 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1372))->BgL_argsz00);
						BgL_auxz00_2988 =
							BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00
							(BgL_arg3720z00_1377);
					}
					return BBOOL(BgL_auxz00_2988);
				}
			}
		}
	}



/* check-init-app-ly3575 */
	obj_t BGl_checkzd2initzd2appzd2ly3575zd2zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2297, obj_t BgL_nodez00_2298)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 127 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1364;

				BgL_nodez00_1364 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2298);
				{	/* Ast/check_init.scm 129 */
					BgL_nodez00_bglt BgL_arg3716z00_1368;

					BgL_arg3716z00_1368 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1364))->BgL_funz00);
					{	/* Ast/check_init.scm 129 */
						obj_t BgL_method3567z00_1658;

						{	/* Ast/check_init.scm 129 */
							BgL_objectz00_bglt BgL_objz00_1659;

							BgL_objz00_1659 = (BgL_objectz00_bglt) (BgL_arg3716z00_1368);
							{	/* Ast/check_init.scm 129 */
								long BgL_objzd2classzd2numz00_1660;

								BgL_objzd2classzd2numz00_1660 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1659);
								{	/* Ast/check_init.scm 129 */
									obj_t BgL_arg2643z00_1661;

									BgL_arg2643z00_1661 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 129 */
										obj_t BgL_arrayz00_1663;

										int BgL_offsetz00_1664;

										BgL_arrayz00_1663 = BgL_arg2643z00_1661;
										BgL_offsetz00_1664 = (int) (BgL_objzd2classzd2numz00_1660);
										{	/* Ast/check_init.scm 129 */
											long BgL_offsetz00_1665;

											BgL_offsetz00_1665 =
												((long) (BgL_offsetz00_1664) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 129 */
												long BgL_modz00_1666;

												{	/* Ast/check_init.scm 129 */
													int BgL_arg2645z00_1667;

													BgL_arg2645z00_1667 = (int) (((long) 16));
													{	/* Ast/check_init.scm 129 */
														long BgL_auxz00_3025;

														BgL_auxz00_3025 = (long) (BgL_arg2645z00_1667);
														BgL_modz00_1666 =
															(BgL_offsetz00_1665 / BgL_auxz00_3025);
												}}
												{	/* Ast/check_init.scm 129 */
													long BgL_restz00_1668;

													{	/* Ast/check_init.scm 129 */
														int BgL_arg2644z00_1669;

														BgL_arg2644z00_1669 = (int) (((long) 16));
														{	/* Ast/check_init.scm 129 */
															long BgL_auxz00_3029;

															BgL_auxz00_3029 = (long) (BgL_arg2644z00_1669);
															BgL_restz00_1668 =
																(BgL_offsetz00_1665 % BgL_auxz00_3029);
													}}
													{	/* Ast/check_init.scm 129 */

														BgL_method3567z00_1658 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1663,
																(int) (BgL_modz00_1666)),
															(int) (BgL_restz00_1668));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3567z00_1658) (BgL_method3567z00_1658,
							(obj_t) (BgL_arg3716z00_1368), BEOA);
				}}
				{	/* Ast/check_init.scm 130 */
					BgL_nodez00_bglt BgL_arg3717z00_1369;

					BgL_arg3717z00_1369 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1364))->BgL_argz00);
					{	/* Ast/check_init.scm 130 */
						obj_t BgL_method3567z00_1685;

						{	/* Ast/check_init.scm 130 */
							BgL_objectz00_bglt BgL_objz00_1686;

							BgL_objz00_1686 = (BgL_objectz00_bglt) (BgL_arg3717z00_1369);
							{	/* Ast/check_init.scm 130 */
								long BgL_objzd2classzd2numz00_1687;

								BgL_objzd2classzd2numz00_1687 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1686);
								{	/* Ast/check_init.scm 130 */
									obj_t BgL_arg2643z00_1688;

									BgL_arg2643z00_1688 =
										PROCEDURE_REF
										(BGl_checkzd2initzd2envz00zzast_checkzd2globalzd2initz00,
										(int) (((long) 1)));
									{	/* Ast/check_init.scm 130 */
										obj_t BgL_arrayz00_1690;

										int BgL_offsetz00_1691;

										BgL_arrayz00_1690 = BgL_arg2643z00_1688;
										BgL_offsetz00_1691 = (int) (BgL_objzd2classzd2numz00_1687);
										{	/* Ast/check_init.scm 130 */
											long BgL_offsetz00_1692;

											BgL_offsetz00_1692 =
												((long) (BgL_offsetz00_1691) - OBJECT_TYPE);
											{	/* Ast/check_init.scm 130 */
												long BgL_modz00_1693;

												{	/* Ast/check_init.scm 130 */
													int BgL_arg2645z00_1694;

													BgL_arg2645z00_1694 = (int) (((long) 16));
													{	/* Ast/check_init.scm 130 */
														long BgL_auxz00_3048;

														BgL_auxz00_3048 = (long) (BgL_arg2645z00_1694);
														BgL_modz00_1693 =
															(BgL_offsetz00_1692 / BgL_auxz00_3048);
												}}
												{	/* Ast/check_init.scm 130 */
													long BgL_restz00_1695;

													{	/* Ast/check_init.scm 130 */
														int BgL_arg2644z00_1696;

														BgL_arg2644z00_1696 = (int) (((long) 16));
														{	/* Ast/check_init.scm 130 */
															long BgL_auxz00_3052;

															BgL_auxz00_3052 = (long) (BgL_arg2644z00_1696);
															BgL_restz00_1695 =
																(BgL_offsetz00_1692 % BgL_auxz00_3052);
													}}
													{	/* Ast/check_init.scm 130 */

														BgL_method3567z00_1685 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1690,
																(int) (BgL_modz00_1693)),
															(int) (BgL_restz00_1695));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3567z00_1685) (BgL_method3567z00_1685,
							(obj_t) (BgL_arg3717z00_1369), BEOA);
					}
				}
			}
		}
	}



/* check-init-app3573 */
	obj_t BGl_checkzd2initzd2app3573z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2299, obj_t BgL_nodez00_2300)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 120 */
			{
				BgL_appz00_bglt BgL_nodez00_1357;

				{	/* Ast/check_init.scm 121 */
					bool_t BgL_auxz00_3063;

					BgL_nodez00_1357 = (BgL_appz00_bglt) (BgL_nodez00_2300);
					{	/* Ast/check_init.scm 121 */
						obj_t BgL_arg3714z00_1654;

						BgL_arg3714z00_1654 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1357))->BgL_argsz00);
						BgL_auxz00_3063 =
							BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00
							(BgL_arg3714z00_1654);
					}
					return BBOOL(BgL_auxz00_3063);
				}
			}
		}
	}



/* check-init-sequence3571 */
	obj_t BGl_checkzd2initzd2sequence3571z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2301, obj_t BgL_nodez00_2302)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 114 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1351;

				{	/* Ast/check_init.scm 115 */
					bool_t BgL_auxz00_3068;

					BgL_nodez00_1351 = (BgL_sequencez00_bglt) (BgL_nodez00_2302);
					{	/* Ast/check_init.scm 115 */
						obj_t BgL_arg3712z00_1651;

						BgL_arg3712z00_1651 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1351))->BgL_nodesz00);
						BgL_auxz00_3068 =
							BGl_checkzd2initza2z70zzast_checkzd2globalzd2initz00
							(BgL_arg3712z00_1651);
					}
					return BBOOL(BgL_auxz00_3068);
				}
			}
		}
	}



/* check-init-var3569 */
	obj_t BGl_checkzd2initzd2var3569z00zzast_checkzd2globalzd2initz00(obj_t
		BgL_envz00_2303, obj_t BgL_nodez00_2304)
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 93 */
			{
				BgL_varz00_bglt BgL_nodez00_1329;

				BgL_nodez00_1329 = (BgL_varz00_bglt) (BgL_nodez00_2304);
				{	/* Ast/check_init.scm 94 */
					BgL_variablez00_bglt BgL_varz00_1332;

					BgL_varz00_1332 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1329))->BgL_variablez00);
					{	/* Ast/check_init.scm 95 */
						bool_t BgL_testz00_3074;

						{	/* Ast/check_init.scm 95 */
							bool_t BgL_testz00_3075;

							{	/* Ast/check_init.scm 95 */
								obj_t BgL_obj1661z00_1637;

								BgL_obj1661z00_1637 = (obj_t) (BgL_varz00_1332);
								BgL_testz00_3075 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1661z00_1637,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_3075)
								{	/* Ast/check_init.scm 96 */
									bool_t BgL_testz00_3078;

									{	/* Ast/check_init.scm 96 */
										BgL_valuez00_bglt BgL_arg3710z00_1348;

										BgL_arg3710z00_1348 =
											(((BgL_variablez00_bglt) CREF(BgL_varz00_1332))->
											BgL_valuez00);
										{	/* Ast/check_init.scm 96 */
											obj_t BgL_obj1766z00_1639;

											BgL_obj1766z00_1639 = (obj_t) (BgL_arg3710z00_1348);
											BgL_testz00_3078 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1766z00_1639,
												BGl_funz00zzast_varz00);
										}
									}
									if (BgL_testz00_3078)
										{	/* Ast/check_init.scm 96 */
											BgL_testz00_3074 = ((bool_t) 0);
										}
									else
										{	/* Ast/check_init.scm 97 */
											bool_t BgL_testz00_3082;

											{	/* Ast/check_init.scm 97 */
												BgL_globalz00_bglt BgL_globalz00_1640;

												BgL_globalz00_1640 =
													(BgL_globalz00_bglt) (BgL_varz00_1332);
												BgL_testz00_3082 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
														(obj_t) (BgL_globalz00_1640),
														BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00));
											}
											if (BgL_testz00_3082)
												{	/* Ast/check_init.scm 97 */
													BgL_testz00_3074 = ((bool_t) 0);
												}
											else
												{	/* Ast/check_init.scm 98 */
													obj_t BgL_arg3709z00_1347;

													{
														BgL_globalz00_bglt BgL_auxz00_3087;

														BgL_auxz00_3087 =
															(BgL_globalz00_bglt) (BgL_varz00_1332);
														BgL_arg3709z00_1347 =
															(((BgL_globalz00_bglt) CREF(BgL_auxz00_3087))->
															BgL_modulez00);
													}
													BgL_testz00_3074 =
														(BgL_arg3709z00_1347 ==
														BGl_za2moduleza2z00zzmodule_modulez00);
												}
										}
								}
							else
								{	/* Ast/check_init.scm 95 */
									BgL_testz00_3074 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3074)
							{	/* Ast/check_init.scm 95 */
								{	/* Ast/check_init.scm 100 */
									obj_t BgL_arg3696z00_1334;

									obj_t BgL_arg3699z00_1337;

									{
										BgL_nodez00_bglt BgL_auxz00_3091;

										BgL_auxz00_3091 = (BgL_nodez00_bglt) (BgL_nodez00_1329);
										BgL_arg3696z00_1334 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3091))->BgL_locz00);
									}
									BgL_arg3699z00_1337 =
										(((BgL_variablez00_bglt) CREF(BgL_varz00_1332))->BgL_idz00);
									BGl_userzd2warningzf2locationz20zztools_errorz00
										(BgL_arg3696z00_1334,
										BGl_string3818z00zzast_checkzd2globalzd2initz00,
										BGl_string3836z00zzast_checkzd2globalzd2initz00,
										BgL_arg3699z00_1337);
								}
								{	/* Ast/check_init.scm 104 */
									bool_t BgL_testz00_3096;

									{	/* Ast/check_init.scm 104 */
										BgL_typez00_bglt BgL_arg3705z00_1343;

										BgL_arg3705z00_1343 =
											(((BgL_variablez00_bglt) CREF(BgL_varz00_1332))->
											BgL_typez00);
										BgL_testz00_3096 =
											((obj_t) (BgL_arg3705z00_1343) ==
											BGl_za2_za2z00zztype_cachez00);
									}
									if (BgL_testz00_3096)
										{
											BgL_typez00_bglt BgL_auxz00_3100;

											BgL_auxz00_3100 =
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
											((((BgL_variablez00_bglt) CREF(BgL_varz00_1332))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_3100), BUNSPEC);
										}
									else
										{	/* Ast/check_init.scm 106 */
											obj_t BgL_arg3701z00_1339;

											obj_t BgL_arg3703z00_1341;

											{	/* Ast/check_init.scm 106 */
												BgL_typez00_bglt BgL_obj3163z00_1648;

												BgL_obj3163z00_1648 =
													(((BgL_variablez00_bglt) CREF(BgL_varz00_1332))->
													BgL_typez00);
												BgL_arg3701z00_1339 =
													(((BgL_typez00_bglt) CREF(BgL_obj3163z00_1648))->
													BgL_idz00);
											}
											BgL_arg3703z00_1341 =
												(((BgL_variablez00_bglt) CREF(BgL_varz00_1332))->
												BgL_idz00);
											BGl_errorz00zz__errorz00(BgL_arg3701z00_1339,
												BGl_string3837z00zzast_checkzd2globalzd2initz00,
												BgL_arg3703z00_1341);
										}
								}
								{	/* Ast/check_init.scm 109 */
									BgL_globalz00_bglt BgL_globalz00_1650;

									BgL_globalz00_1650 = (BgL_globalz00_bglt) (BgL_varz00_1332);
									return (BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00 =
										MAKE_PAIR(
											(obj_t) (BgL_globalz00_1650),
											BGl_za2globalsza2z00zzast_checkzd2globalzd2initz00),
										BUNSPEC);
								}
							}
						else
							{	/* Ast/check_init.scm 95 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_checkzd2globalzd2initz00()
	{
		AN_OBJECT;
		{	/* Ast/check_init.scm 18 */
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string3838z00zzast_checkzd2globalzd2initz00));
		}
	}

#ifdef __cplusplus
}
#endif
