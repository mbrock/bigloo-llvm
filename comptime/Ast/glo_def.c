/*===========================================================================*/
/*   (Ast/glo_def.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/glo_def.scm)*/
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;

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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static bool_t BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(bool_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_glozd2defzd2();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t
		BGl__defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_checkzd2svarzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl__checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_glozd2defzd2();
	static obj_t BGl__defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_glozd2defzd2 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzast_glozd2defzd2();
	static obj_t BGl__defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	extern bool_t BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	extern obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	static BgL_globalz00_bglt
		BGl_checkzd2sfunzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2defzd2();
	static obj_t BGl__defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t,
		BgL_variablez00_bglt);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static BgL_globalz00_bglt
		BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_globalz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2defzd2();
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string3836z00zzast_glozd2defzd2,
		BgL_bgl_string3836za700za7za7a3856za7, "check-method-definition", 23);
	      DEFINE_STRING(BGl_string3837z00zzast_glozd2defzd2,
		BgL_bgl_string3837za700za7za7a3857za7, "unexpected generic arg", 22);
	      DEFINE_STRING(BGl_string3838z00zzast_glozd2defzd2,
		BgL_bgl_string3838za700za7za7a3858za7,
		"(incompatible DSSSL #!optional prototype)", 41);
	      DEFINE_STRING(BGl_string3840z00zzast_glozd2defzd2,
		BgL_bgl_string3840za700za7za7a3859za7, "(incompatible Dsssl prototype)",
		30);
	      DEFINE_STRING(BGl_string3839z00zzast_glozd2defzd2,
		BgL_bgl_string3839za700za7za7a3860za7,
		"(incompatible DSSSL #!key prototype)", 36);
	      DEFINE_STRING(BGl_string3841z00zzast_glozd2defzd2,
		BgL_bgl_string3841za700za7za7a3861za7,
		"(incompatible function type result)", 35);
	      DEFINE_STRING(BGl_string3842z00zzast_glozd2defzd2,
		BgL_bgl_string3842za700za7za7a3862za7, "(arity differs)", 15);
	      DEFINE_STRING(BGl_string3843z00zzast_glozd2defzd2,
		BgL_bgl_string3843za700za7za7a3863za7,
		"(declared as function of another class)", 39);
	      DEFINE_STRING(BGl_string3844z00zzast_glozd2defzd2,
		BgL_bgl_string3844za700za7za7a3864za7, "(not declared as function)", 26);
	      DEFINE_STRING(BGl_string3845z00zzast_glozd2defzd2,
		BgL_bgl_string3845za700za7za7a3865za7, "(incompatible formal type)", 26);
	      DEFINE_STRING(BGl_string3846z00zzast_glozd2defzd2,
		BgL_bgl_string3846za700za7za7a3866za7, "Illegal type for global variable",
		32);
	      DEFINE_STRING(BGl_string3847z00zzast_glozd2defzd2,
		BgL_bgl_string3847za700za7za7a3867za7, "(incompatible variable type)", 28);
	      DEFINE_STRING(BGl_string3848z00zzast_glozd2defzd2,
		BgL_bgl_string3848za700za7za7a3868za7, "(not declared as a variable)", 28);
	      DEFINE_STRING(BGl_string3850z00zzast_glozd2defzd2,
		BgL_bgl_string3850za700za7za7a3869za7, " ", 1);
	      DEFINE_STRING(BGl_string3849z00zzast_glozd2defzd2,
		BgL_bgl_string3849za700za7za7a3870za7,
		"Prototype and definition don't match", 36);
	      DEFINE_STRING(BGl_string3851z00zzast_glozd2defzd2,
		BgL_bgl_string3851za700za7za7a3871za7, "(generic not found for method)",
		30);
	      DEFINE_STRING(BGl_string3852z00zzast_glozd2defzd2,
		BgL_bgl_string3852za700za7za7a3872za7, "ast_glo-def", 11);
	      DEFINE_STRING(BGl_string3853z00zzast_glozd2defzd2,
		BgL_bgl_string3853za700za7za7a3873za7,
		"bigloo now sgfun static export bdb ", 35);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2sfunz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl__defza7d2globalza7d23874z00,
		BGl__defzd2globalzd2sfunz12z12zzast_glozd2defzd2, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2sfunzd2nozd2warningz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl__defza7d2globalza7d23875z00,
		BGl__defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2methodzd2definitionzd2envzd2zzast_glozd2defzd2,
		BgL_bgl__checkza7d2methodza73876z00,
		BGl__checkzd2methodzd2definitionz00zzast_glozd2defzd2, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2svarz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl__defza7d2globalza7d23877z00,
		BGl__defzd2globalzd2svarz12z12zzast_glozd2defzd2, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2scnstz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl__defza7d2globalza7d23878z00,
		BGl__defzd2globalzd2scnstz12z12zzast_glozd2defzd2, 0L, BUNSPEC, 5);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long
		BgL_checksumz00_1778, char *BgL_fromz00_1779)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_glozd2defzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_glozd2defzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_glozd2defzd2();
					BGl_cnstzd2initzd2zzast_glozd2defzd2();
					BGl_importedzd2moduleszd2initz00zzast_glozd2defzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2defzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_glo-def");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_glozd2defzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 15 */
			{	/* Ast/glo_def.scm 15 */
				obj_t BgL_cportz00_1770;

				BgL_cportz00_1770 =
					bgl_open_input_string(BGl_string3853z00zzast_glozd2defzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_1771;

					BgL_iz00_1771 = ((long) 5);
				BgL_loopz00_1772:
					if ((BgL_iz00_1771 == ((long) -1)))
						{	/* Ast/glo_def.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/glo_def.scm 15 */
							{	/* Ast/glo_def.scm 15 */
								obj_t BgL_arg3855z00_1774;

								{	/* Ast/glo_def.scm 15 */

									{	/* Ast/glo_def.scm 15 */
										obj_t BgL_locationz00_1776;

										BgL_locationz00_1776 = BBOOL(((bool_t) 0));
										{	/* Ast/glo_def.scm 15 */

											BgL_arg3855z00_1774 =
												BGl_readz00zz__readerz00(BgL_cportz00_1770,
												BgL_locationz00_1776);
										}
									}
								}
								{	/* Ast/glo_def.scm 15 */
									int BgL_auxz00_1797;

									BgL_auxz00_1797 = (int) (BgL_iz00_1771);
									CNST_TABLE_SET(BgL_auxz00_1797, BgL_arg3855z00_1774);
							}}
							{	/* Ast/glo_def.scm 15 */
								int BgL_auxz00_1777;

								BgL_auxz00_1777 = (int) ((BgL_iz00_1771 - ((long) 1)));
								{
									long BgL_iz00_1802;

									BgL_iz00_1802 = (long) (BgL_auxz00_1777);
									BgL_iz00_1771 = BgL_iz00_1802;
									goto BgL_loopz00_1772;
								}
							}
						}
				}
			}
		}
	}



/* def-global-sfun-no-warning! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t
		BgL_idz00_1, obj_t BgL_argsz00_2, obj_t BgL_locz00_3, obj_t BgL_modz00_4,
		obj_t BgL_classz00_5, obj_t BgL_srczd2expzd2_6, obj_t BgL_remz00_7,
		obj_t BgL_nodez00_8)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 67 */
			{	/* Ast/glo_def.scm 68 */
				int BgL_warningz00_1577;

				BgL_warningz00_1577 = BGl_bigloozd2warningzd2zz__paramz00();
				BGl_bigloozd2warningzd2setz12z12zz__paramz00((int) (((long) 0)));
				{	/* Ast/glo_def.scm 68 */
					BgL_globalz00_bglt BgL_funz00_1578;

					BgL_funz00_1578 =
						BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_1,
						BgL_argsz00_2, BgL_locz00_3, BgL_modz00_4, BgL_classz00_5,
						BgL_srczd2expzd2_6, BgL_remz00_7, BgL_nodez00_8);
					BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_warningz00_1577);
					return BgL_funz00_1578;
				}
			}
		}
	}



/* _def-global-sfun-no-warning! */
	obj_t BGl__defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t
		BgL_envz00_1736, obj_t BgL_idz00_1737, obj_t BgL_argsz00_1738,
		obj_t BgL_locz00_1739, obj_t BgL_modz00_1740, obj_t BgL_classz00_1741,
		obj_t BgL_srczd2expzd2_1742, obj_t BgL_remz00_1743, obj_t BgL_nodez00_1744)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 67 */
			return
				(obj_t) (BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
				(BgL_idz00_1737, BgL_argsz00_1738, BgL_locz00_1739, BgL_modz00_1740,
					BgL_classz00_1741, BgL_srczd2expzd2_1742, BgL_remz00_1743,
					BgL_nodez00_1744));
		}
	}



/* def-global-sfun! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t BgL_idz00_9,
		obj_t BgL_argsz00_10, obj_t BgL_localsz00_11, obj_t BgL_modulez00_12,
		obj_t BgL_classz00_13, obj_t BgL_srczd2expzd2_14, obj_t BgL_remz00_15,
		obj_t BgL_nodez00_16)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 80 */
			BGl_enterzd2functionzd2zztools_errorz00(BgL_idz00_9);
			{	/* Ast/glo_def.scm 86 */
				obj_t BgL_locz00_956;

				BgL_locz00_956 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2expzd2_14);
				{	/* Ast/glo_def.scm 86 */
					obj_t BgL_idze2typeze2_957;

					BgL_idze2typeze2_957 =
						BGl_parsezd2idzd2zzast_identz00(BgL_idz00_9, BgL_locz00_956);
					{	/* Ast/glo_def.scm 87 */
						obj_t BgL_typezd2reszd2_958;

						BgL_typezd2reszd2_958 = CDR(BgL_idze2typeze2_957);
						{	/* Ast/glo_def.scm 88 */
							obj_t BgL_idz00_959;

							BgL_idz00_959 = CAR(BgL_idze2typeze2_957);
							{	/* Ast/glo_def.scm 89 */
								obj_t BgL_importz00_960;

								{	/* Ast/glo_def.scm 90 */
									bool_t BgL_testz00_1816;

									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 3)))
										{	/* Ast/glo_def.scm 91 */
											obj_t BgL_arg3665z00_1008;

											obj_t BgL_arg3666z00_1009;

											BgL_arg3665z00_1008 = CNST_TABLE_REF(((long) 0));
											{	/* Ast/glo_def.scm 91 */
												obj_t BgL_arg3667z00_1010;

												BgL_arg3667z00_1010 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_1822;

													BgL_auxz00_1822 =
														(BgL_backendz00_bglt) (BgL_arg3667z00_1010);
													BgL_arg3666z00_1009 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_1822))->
														BgL_debugzd2supportzd2);
											}}
											BgL_testz00_1816 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3665z00_1008, BgL_arg3666z00_1009));
										}
									else
										{	/* Ast/glo_def.scm 90 */
											BgL_testz00_1816 = ((bool_t) 0);
										}
									if (BgL_testz00_1816)
										{	/* Ast/glo_def.scm 90 */
											BgL_importz00_960 = CNST_TABLE_REF(((long) 1));
										}
									else
										{	/* Ast/glo_def.scm 90 */
											BgL_importz00_960 = CNST_TABLE_REF(((long) 2));
								}}
								{	/* Ast/glo_def.scm 90 */
									obj_t BgL_oldzd2globalzd2_961;

									BgL_oldzd2globalzd2_961 =
										BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_959,
										BgL_modulez00_12);
									{	/* Ast/glo_def.scm 94 */
										BgL_globalz00_bglt BgL_globalz00_962;

										if (BGl_iszd2azf3z21zz__objectz00(BgL_oldzd2globalzd2_961,
												BGl_globalz00zzast_varz00))
											{	/* Ast/glo_def.scm 96 */
												BgL_globalz00_962 =
													BGl_checkzd2sfunzd2definitionz00zzast_glozd2defzd2(
													(BgL_globalz00_bglt) (BgL_oldzd2globalzd2_961),
													BgL_typezd2reszd2_958, BgL_argsz00_10,
													BgL_localsz00_11, BgL_classz00_13,
													BgL_srczd2expzd2_14);
											}
										else
											{	/* Ast/glo_def.scm 96 */
												BgL_globalz00_962 =
													BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
													(BgL_idz00_959, BgL_argsz00_10, BgL_modulez00_12,
													BgL_importz00_960, BgL_classz00_13,
													BgL_srczd2expzd2_14, BFALSE);
											}
										{	/* Ast/glo_def.scm 95 */
											obj_t BgL_defzd2loczd2_963;

											BgL_defzd2loczd2_963 =
												BGl_findzd2locationzd2zztools_locationz00
												(BgL_srczd2expzd2_14);
											{	/* Ast/glo_def.scm 111 */

												{	/* Ast/glo_def.scm 112 */
													bool_t BgL_testz00_1836;

													{	/* Ast/glo_def.scm 112 */
														BgL_valuez00_bglt BgL_arg3661z00_1004;

														{
															BgL_variablez00_bglt BgL_auxz00_1837;

															BgL_auxz00_1837 =
																(BgL_variablez00_bglt) (BgL_globalz00_962);
															BgL_arg3661z00_1004 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_1837))->BgL_valuez00);
														}
														{	/* Ast/glo_def.scm 112 */
															obj_t BgL_obj2044z00_1586;

															BgL_obj2044z00_1586 =
																(obj_t) (BgL_arg3661z00_1004);
															BgL_testz00_1836 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2044z00_1586, BGl_sfunz00zzast_varz00);
														}
													}
													if (BgL_testz00_1836)
														{	/* Ast/glo_def.scm 112 */
															{	/* Ast/glo_def.scm 119 */
																BgL_variablez00_bglt BgL_varz00_1587;

																BgL_typez00_bglt BgL_newzd2typezd2_1588;

																BgL_varz00_1587 =
																	(BgL_variablez00_bglt) (BgL_globalz00_962);
																BgL_newzd2typezd2_1588 =
																	(BgL_typez00_bglt) (BgL_typezd2reszd2_958);
																{	/* Ast/glo_def.scm 119 */
																	BgL_typez00_bglt BgL_oldzd2typezd2_1589;

																	BgL_oldzd2typezd2_1589 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_varz00_1587))->BgL_typez00);
																	if (((obj_t) (BgL_oldzd2typezd2_1589) ==
																			BGl_za2_za2z00zztype_cachez00))
																		{	/* Ast/glo_def.scm 119 */
																			((((BgL_variablez00_bglt)
																						CREF(BgL_varz00_1587))->
																					BgL_typez00) =
																				((BgL_typez00_bglt)
																					BgL_newzd2typezd2_1588), BUNSPEC);
																		}
																	else
																		{	/* Ast/glo_def.scm 119 */
																			BFALSE;
																		}
																}
															}
															{	/* Ast/glo_def.scm 121 */
																bool_t BgL_testz00_1849;

																{	/* Ast/glo_def.scm 121 */
																	long BgL_auxz00_1850;

																	{	/* Ast/glo_def.scm 122 */
																		obj_t BgL_auxz00_1852;

																		{	/* Ast/glo_def.scm 122 */
																			BgL_sfunz00_bglt BgL_obj1969z00_1595;

																			{	/* Ast/glo_def.scm 122 */
																				BgL_variablez00_bglt
																					BgL_obj1699z00_1594;
																				BgL_obj1699z00_1594 =
																					(BgL_variablez00_bglt)
																					(BgL_globalz00_962);
																				BgL_obj1969z00_1595 =
																					(BgL_sfunz00_bglt) (((
																							(BgL_variablez00_bglt)
																							CREF(BgL_obj1699z00_1594))->
																						BgL_valuez00));
																			}
																			BgL_auxz00_1852 =
																				(((BgL_sfunz00_bglt)
																					CREF(BgL_obj1969z00_1595))->
																				BgL_argsz00);
																		}
																		BgL_auxz00_1850 =
																			bgl_list_length(BgL_auxz00_1852);
																	}
																	BgL_testz00_1849 =
																		(bgl_list_length(BgL_localsz00_11) ==
																		BgL_auxz00_1850);
																}
																if (BgL_testz00_1849)
																	{	/* Ast/glo_def.scm 123 */
																		obj_t BgL_typesz00_966;

																		{	/* Ast/glo_def.scm 123 */
																			obj_t BgL_l3616z00_977;

																			{	/* Ast/glo_def.scm 134 */
																				BgL_sfunz00_bglt BgL_obj1969z00_1599;

																				{	/* Ast/glo_def.scm 134 */
																					BgL_variablez00_bglt
																						BgL_obj1699z00_1598;
																					BgL_obj1699z00_1598 =
																						(BgL_variablez00_bglt)
																						(BgL_globalz00_962);
																					BgL_obj1969z00_1599 =
																						(BgL_sfunz00_bglt) (((
																								(BgL_variablez00_bglt)
																								CREF(BgL_obj1699z00_1598))->
																							BgL_valuez00));
																				}
																				BgL_l3616z00_977 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_obj1969z00_1599))->
																					BgL_argsz00);
																			}
																			if (NULLP(BgL_l3616z00_977))
																				{	/* Ast/glo_def.scm 123 */
																					BgL_typesz00_966 = BNIL;
																				}
																			else
																				{	/* Ast/glo_def.scm 123 */
																					obj_t BgL_head3618z00_979;

																					BgL_head3618z00_979 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l3616z00_981;

																						obj_t BgL_tail3619z00_982;

																						BgL_l3616z00_981 = BgL_l3616z00_977;
																						BgL_tail3619z00_982 =
																							BgL_head3618z00_979;
																					BgL_zc3anonymousza33643ze3z83_983:
																						if (NULLP(BgL_l3616z00_981))
																							{	/* Ast/glo_def.scm 123 */
																								BgL_typesz00_966 =
																									CDR(BgL_head3618z00_979);
																							}
																						else
																							{	/* Ast/glo_def.scm 123 */
																								obj_t BgL_newtail3620z00_985;

																								{	/* Ast/glo_def.scm 123 */
																									obj_t BgL_arg3646z00_987;

																									{	/* Ast/glo_def.scm 123 */
																										obj_t BgL_az00_989;

																										BgL_az00_989 =
																											CAR(BgL_l3616z00_981);
																										if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_989, BGl_localz00zzast_varz00))
																											{	/* Ast/glo_def.scm 126 */
																												BgL_variablez00_bglt
																													BgL_obj1696z00_1607;
																												BgL_obj1696z00_1607 =
																													(BgL_variablez00_bglt)
																													((BgL_localz00_bglt)
																													(BgL_az00_989));
																												BgL_arg3646z00_987 =
																													(obj_t) (((
																															(BgL_variablez00_bglt)
																															CREF
																															(BgL_obj1696z00_1607))->
																														BgL_typez00));
																											}
																										else
																											{	/* Ast/glo_def.scm 125 */
																												if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_989, BGl_typez00zztype_typez00))
																													{	/* Ast/glo_def.scm 127 */
																														BgL_arg3646z00_987 =
																															BgL_az00_989;
																													}
																												else
																													{	/* Ast/glo_def.scm 127 */
																														BgL_arg3646z00_987 =
																															BGl_internalzd2errorzd2zztools_errorz00
																															(BGl_string3836z00zzast_glozd2defzd2,
																															BGl_string3837z00zzast_glozd2defzd2,
																															BGl_shapez00zztools_shapez00
																															(BgL_az00_989));
																													}
																											}
																									}
																									BgL_newtail3620z00_985 =
																										MAKE_PAIR
																										(BgL_arg3646z00_987, BNIL);
																								}
																								SET_CDR(BgL_tail3619z00_982,
																									BgL_newtail3620z00_985);
																								{
																									obj_t BgL_tail3619z00_1884;

																									obj_t BgL_l3616z00_1882;

																									BgL_l3616z00_1882 =
																										CDR(BgL_l3616z00_981);
																									BgL_tail3619z00_1884 =
																										BgL_newtail3620z00_985;
																									BgL_tail3619z00_982 =
																										BgL_tail3619z00_1884;
																									BgL_l3616z00_981 =
																										BgL_l3616z00_1882;
																									goto
																										BgL_zc3anonymousza33643ze3z83_983;
																								}
																							}
																					}
																				}
																		}
																		{
																			obj_t BgL_ll3621z00_968;

																			obj_t BgL_ll3622z00_969;

																			BgL_ll3621z00_968 = BgL_localsz00_11;
																			BgL_ll3622z00_969 = BgL_typesz00_966;
																		BgL_zc3anonymousza33636ze3z83_970:
																			if (NULLP(BgL_ll3621z00_968))
																				{	/* Ast/glo_def.scm 135 */
																					((bool_t) 1);
																				}
																			else
																				{	/* Ast/glo_def.scm 135 */
																					{	/* Ast/glo_def.scm 135 */
																						obj_t BgL_arg3638z00_972;

																						obj_t BgL_arg3639z00_973;

																						BgL_arg3638z00_972 =
																							CAR(BgL_ll3621z00_968);
																						BgL_arg3639z00_973 =
																							CAR(BgL_ll3622z00_969);
																						{	/* Ast/glo_def.scm 135 */
																							BgL_variablez00_bglt
																								BgL_varz00_1617;
																							BgL_typez00_bglt
																								BgL_newzd2typezd2_1618;
																							BgL_varz00_1617 =
																								(BgL_variablez00_bglt)
																								(BgL_arg3638z00_972);
																							BgL_newzd2typezd2_1618 =
																								(BgL_typez00_bglt)
																								(BgL_arg3639z00_973);
																							{	/* Ast/glo_def.scm 135 */
																								BgL_typez00_bglt
																									BgL_oldzd2typezd2_1619;
																								BgL_oldzd2typezd2_1619 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_varz00_1617))->
																									BgL_typez00);
																								if (((obj_t)
																										(BgL_oldzd2typezd2_1619) ==
																										BGl_za2_za2z00zztype_cachez00))
																									{	/* Ast/glo_def.scm 135 */
																										((((BgL_variablez00_bglt)
																													CREF
																													(BgL_varz00_1617))->
																												BgL_typez00) =
																											((BgL_typez00_bglt)
																												BgL_newzd2typezd2_1618),
																											BUNSPEC);
																									}
																								else
																									{	/* Ast/glo_def.scm 135 */
																										BFALSE;
																									}
																							}
																						}
																					}
																					{
																						obj_t BgL_ll3622z00_1898;

																						obj_t BgL_ll3621z00_1896;

																						BgL_ll3621z00_1896 =
																							CDR(BgL_ll3621z00_968);
																						BgL_ll3622z00_1898 =
																							CDR(BgL_ll3622z00_969);
																						BgL_ll3622z00_969 =
																							BgL_ll3622z00_1898;
																						BgL_ll3621z00_968 =
																							BgL_ll3621z00_1896;
																						goto
																							BgL_zc3anonymousza33636ze3z83_970;
																					}
																				}
																		}
																	}
																else
																	{	/* Ast/glo_def.scm 121 */
																		((bool_t) 0);
																	}
															}
															BGl_removezd2varzd2fromz12z12zzast_removez00
																(BgL_remz00_15,
																(BgL_variablez00_bglt) (BgL_globalz00_962));
															{	/* Ast/glo_def.scm 139 */
																BgL_valuez00_bglt BgL_arg3658z00_1001;

																{
																	BgL_variablez00_bglt BgL_auxz00_1902;

																	BgL_auxz00_1902 =
																		(BgL_variablez00_bglt) (BgL_globalz00_962);
																	BgL_arg3658z00_1001 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_1902))->BgL_valuez00);
																}
																{
																	BgL_sfunz00_bglt BgL_auxz00_1905;

																	BgL_auxz00_1905 =
																		(BgL_sfunz00_bglt) (BgL_arg3658z00_1001);
																	((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1905))->
																			BgL_bodyz00) =
																		((obj_t) BgL_nodez00_16), BUNSPEC);
																}
															}
															{	/* Ast/glo_def.scm 141 */
																BgL_valuez00_bglt BgL_arg3659z00_1002;

																{
																	BgL_variablez00_bglt BgL_auxz00_1908;

																	BgL_auxz00_1908 =
																		(BgL_variablez00_bglt) (BgL_globalz00_962);
																	BgL_arg3659z00_1002 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_1908))->BgL_valuez00);
																}
																{
																	BgL_sfunz00_bglt BgL_auxz00_1911;

																	BgL_auxz00_1911 =
																		(BgL_sfunz00_bglt) (BgL_arg3659z00_1002);
																	((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1911))->
																			BgL_argsz00) =
																		((obj_t) BgL_localsz00_11), BUNSPEC);
																}
															}
															{	/* Ast/glo_def.scm 143 */
																BgL_valuez00_bglt BgL_arg3660z00_1003;

																{
																	BgL_variablez00_bglt BgL_auxz00_1914;

																	BgL_auxz00_1914 =
																		(BgL_variablez00_bglt) (BgL_globalz00_962);
																	BgL_arg3660z00_1003 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_1914))->BgL_valuez00);
																}
																{
																	BgL_sfunz00_bglt BgL_auxz00_1917;

																	BgL_auxz00_1917 =
																		(BgL_sfunz00_bglt) (BgL_arg3660z00_1003);
																	((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1917))->
																			BgL_locz00) =
																		((obj_t) BgL_defzd2loczd2_963), BUNSPEC);
																}
															}
															BGl_leavezd2functionzd2zztools_errorz00();
														}
													else
														{	/* Ast/glo_def.scm 112 */
															BFALSE;
														}
												}
												return BgL_globalz00_962;
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



/* _def-global-sfun! */
	obj_t BGl__defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t BgL_envz00_1745,
		obj_t BgL_idz00_1746, obj_t BgL_argsz00_1747, obj_t BgL_localsz00_1748,
		obj_t BgL_modulez00_1749, obj_t BgL_classz00_1750,
		obj_t BgL_srczd2expzd2_1751, obj_t BgL_remz00_1752, obj_t BgL_nodez00_1753)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 80 */
			return
				(obj_t) (BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_1746,
					BgL_argsz00_1747, BgL_localsz00_1748, BgL_modulez00_1749,
					BgL_classz00_1750, BgL_srczd2expzd2_1751, BgL_remz00_1752,
					BgL_nodez00_1753));
		}
	}



/* check-sfun-definition */
	BgL_globalz00_bglt
		BGl_checkzd2sfunzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt
		BgL_oldz00_17, obj_t BgL_typezd2reszd2_18, obj_t BgL_argsz00_19,
		obj_t BgL_localsz00_20, obj_t BgL_classz00_21, obj_t BgL_srczd2expzd2_22)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 151 */
			{	/* Ast/glo_def.scm 154 */
				BgL_valuez00_bglt BgL_oldzd2valuezd2_1011;

				{
					BgL_variablez00_bglt BgL_auxz00_1923;

					BgL_auxz00_1923 = (BgL_variablez00_bglt) (BgL_oldz00_17);
					BgL_oldzd2valuezd2_1011 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1923))->BgL_valuez00);
				}
				{	/* Ast/glo_def.scm 156 */
					bool_t BgL_testz00_1926;

					{	/* Ast/glo_def.scm 156 */
						obj_t BgL_obj2044z00_1636;

						BgL_obj2044z00_1636 = (obj_t) (BgL_oldzd2valuezd2_1011);
						BgL_testz00_1926 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2044z00_1636,
							BGl_sfunz00zzast_varz00);
					}
					if (BgL_testz00_1926)
						{	/* Ast/glo_def.scm 158 */
							bool_t BgL_testz00_1929;

							{	/* Ast/glo_def.scm 158 */
								obj_t BgL_auxz00_1930;

								{
									BgL_sfunz00_bglt BgL_auxz00_1931;

									BgL_auxz00_1931 =
										(BgL_sfunz00_bglt) (BgL_oldzd2valuezd2_1011);
									BgL_auxz00_1930 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1931))->BgL_classz00);
								}
								BgL_testz00_1929 = (BgL_auxz00_1930 == BgL_classz00_21);
							}
							if (BgL_testz00_1929)
								{	/* Ast/glo_def.scm 160 */
									bool_t BgL_testz00_1935;

									{	/* Ast/glo_def.scm 160 */
										long BgL_arg3692z00_1035;

										long BgL_arg3693z00_1036;

										{
											BgL_funz00_bglt BgL_auxz00_1936;

											BgL_auxz00_1936 =
												(BgL_funz00_bglt) (
												(BgL_sfunz00_bglt) (BgL_oldzd2valuezd2_1011));
											BgL_arg3692z00_1035 =
												(((BgL_funz00_bglt) CREF(BgL_auxz00_1936))->
												BgL_arityz00);
										}
										BgL_arg3693z00_1036 =
											BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_19);
										BgL_testz00_1935 =
											(BgL_arg3692z00_1035 == BgL_arg3693z00_1036);
									}
									if (BgL_testz00_1935)
										{	/* Ast/glo_def.scm 162 */
											bool_t BgL_testz00_1942;

											{	/* Ast/glo_def.scm 162 */
												bool_t BgL_arg3689z00_1032;

												BgL_typez00_bglt BgL_arg3690z00_1033;

												BgL_arg3689z00_1032 =
													(CNST_TABLE_REF(((long) 3)) == BgL_classz00_21);
												{
													BgL_variablez00_bglt BgL_auxz00_1945;

													BgL_auxz00_1945 =
														(BgL_variablez00_bglt) (BgL_oldz00_17);
													BgL_arg3690z00_1033 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1945))->
														BgL_typez00);
												}
												BgL_testz00_1942 =
													BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
													(BgL_arg3689z00_1032,
													(BgL_typez00_bglt) (BgL_typezd2reszd2_18),
													BgL_arg3690z00_1033);
											}
											if (BgL_testz00_1942)
												{	/* Ast/glo_def.scm 162 */
													if (BGl_dssslzd2prototypezf3z21zztools_dssslz00
														(BgL_argsz00_19))
														{	/* Ast/glo_def.scm 168 */
															if (BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_19))
																{	/* Ast/glo_def.scm 171 */
																	bool_t BgL_testz00_1954;

																	{	/* Ast/glo_def.scm 171 */
																		obj_t BgL_arg3677z00_1020;

																		obj_t BgL_arg3678z00_1021;

																		BgL_arg3677z00_1020 =
																			BGl_dssslzd2optionalszd2zztools_dssslz00
																			(BgL_argsz00_19);
																		{
																			BgL_sfunz00_bglt BgL_auxz00_1956;

																			BgL_auxz00_1956 =
																				(BgL_sfunz00_bglt)
																				(BgL_oldzd2valuezd2_1011);
																			BgL_arg3678z00_1021 =
																				(((BgL_sfunz00_bglt)
																					CREF(BgL_auxz00_1956))->
																				BgL_optionalsz00);
																		}
																		BgL_testz00_1954 =
																			BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																			(BgL_arg3677z00_1020,
																			BgL_arg3678z00_1021);
																	}
																	if (BgL_testz00_1954)
																		{	/* Ast/glo_def.scm 171 */
																			(obj_t) (BgL_oldz00_17);
																		}
																	else
																		{	/* Ast/glo_def.scm 173 */
																			obj_t BgL_list3675z00_1019;

																			BgL_list3675z00_1019 =
																				MAKE_PAIR
																				(BGl_string3838z00zzast_glozd2defzd2,
																				BNIL);
																			(obj_t)
																				(BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																				(BgL_oldz00_17, BgL_srczd2expzd2_22,
																					BgL_list3675z00_1019));
																		}
																}
															else
																{	/* Ast/glo_def.scm 170 */
																	if (BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_19))
																		{	/* Ast/glo_def.scm 177 */
																			bool_t BgL_testz00_1966;

																			{	/* Ast/glo_def.scm 177 */
																				obj_t BgL_arg3682z00_1025;

																				obj_t BgL_arg3683z00_1026;

																				BgL_arg3682z00_1025 =
																					BGl_dssslzd2keyszd2zztools_dssslz00
																					(BgL_argsz00_19);
																				{
																					BgL_sfunz00_bglt BgL_auxz00_1968;

																					BgL_auxz00_1968 =
																						(BgL_sfunz00_bglt)
																						(BgL_oldzd2valuezd2_1011);
																					BgL_arg3683z00_1026 =
																						(((BgL_sfunz00_bglt)
																							CREF(BgL_auxz00_1968))->
																						BgL_keysz00);
																				}
																				BgL_testz00_1966 =
																					BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																					(BgL_arg3682z00_1025,
																					BgL_arg3683z00_1026);
																			}
																			if (BgL_testz00_1966)
																				{	/* Ast/glo_def.scm 177 */
																					(obj_t) (BgL_oldz00_17);
																				}
																			else
																				{	/* Ast/glo_def.scm 179 */
																					obj_t BgL_list3681z00_1024;

																					BgL_list3681z00_1024 =
																						MAKE_PAIR
																						(BGl_string3839z00zzast_glozd2defzd2,
																						BNIL);
																					(obj_t)
																						(BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																						(BgL_oldz00_17, BgL_srczd2expzd2_22,
																							BgL_list3681z00_1024));
																				}
																		}
																	else
																		{	/* Ast/glo_def.scm 182 */
																			bool_t BgL_testz00_1976;

																			{	/* Ast/glo_def.scm 182 */
																				obj_t BgL_arg3686z00_1029;

																				obj_t BgL_arg3687z00_1030;

																				{
																					BgL_sfunz00_bglt BgL_auxz00_1977;

																					BgL_auxz00_1977 =
																						(BgL_sfunz00_bglt)
																						(BgL_oldzd2valuezd2_1011);
																					BgL_arg3686z00_1029 =
																						(((BgL_sfunz00_bglt)
																							CREF(BgL_auxz00_1977))->
																						BgL_dssslzd2keywordszd2);
																				}
																				BgL_arg3687z00_1030 =
																					BGl_dssslzd2formalszd2zztools_dssslz00
																					(BgL_argsz00_19);
																				BgL_testz00_1976 =
																					BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																					(BgL_arg3686z00_1029,
																					BgL_arg3687z00_1030);
																			}
																			if (BgL_testz00_1976)
																				{	/* Ast/glo_def.scm 182 */
																					BFALSE;
																				}
																			else
																				{	/* Ast/glo_def.scm 184 */
																					obj_t BgL_list3685z00_1028;

																					BgL_list3685z00_1028 =
																						MAKE_PAIR
																						(BGl_string3840z00zzast_glozd2defzd2,
																						BNIL);
																					(obj_t)
																						(BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																						(BgL_oldz00_17, BgL_srczd2expzd2_22,
																							BgL_list3685z00_1028));
																				}
																		}
																}
														}
													else
														{	/* Ast/glo_def.scm 168 */
															BFALSE;
														}
												}
											else
												{	/* Ast/glo_def.scm 165 */
													obj_t BgL_list3688z00_1031;

													BgL_list3688z00_1031 =
														MAKE_PAIR(BGl_string3841z00zzast_glozd2defzd2,
														BNIL);
													(obj_t) (BGl_mismatchzd2errorzd2zzast_glozd2defzd2
														(BgL_oldz00_17, BgL_srczd2expzd2_22,
															BgL_list3688z00_1031));
												}
										}
									else
										{	/* Ast/glo_def.scm 161 */
											obj_t BgL_list3691z00_1034;

											BgL_list3691z00_1034 =
												MAKE_PAIR(BGl_string3842z00zzast_glozd2defzd2, BNIL);
											(obj_t) (BGl_mismatchzd2errorzd2zzast_glozd2defzd2
												(BgL_oldz00_17, BgL_srczd2expzd2_22,
													BgL_list3691z00_1034));
										}
								}
							else
								{	/* Ast/glo_def.scm 159 */
									obj_t BgL_list3694z00_1037;

									BgL_list3694z00_1037 =
										MAKE_PAIR(BGl_string3843z00zzast_glozd2defzd2, BNIL);
									(obj_t) (BGl_mismatchzd2errorzd2zzast_glozd2defzd2
										(BgL_oldz00_17, BgL_srczd2expzd2_22, BgL_list3694z00_1037));
								}
						}
					else
						{	/* Ast/glo_def.scm 157 */
							obj_t BgL_list3696z00_1039;

							BgL_list3696z00_1039 =
								MAKE_PAIR(BGl_string3844z00zzast_glozd2defzd2, BNIL);
							(obj_t) (BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_17,
									BgL_srczd2expzd2_22, BgL_list3696z00_1039));
						}
				}
				{	/* Ast/glo_def.scm 185 */
					obj_t BgL_g3608z00_1040;

					{	/* Ast/glo_def.scm 186 */
						obj_t BgL_l3624z00_1058;

						{
							BgL_sfunz00_bglt BgL_auxz00_1997;

							BgL_auxz00_1997 = (BgL_sfunz00_bglt) (BgL_oldzd2valuezd2_1011);
							BgL_l3624z00_1058 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1997))->BgL_argsz00);
						}
						if (NULLP(BgL_l3624z00_1058))
							{	/* Ast/glo_def.scm 186 */
								BgL_g3608z00_1040 = BNIL;
							}
						else
							{	/* Ast/glo_def.scm 186 */
								obj_t BgL_head3626z00_1060;

								BgL_head3626z00_1060 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3624z00_1062;

									obj_t BgL_tail3627z00_1063;

									BgL_l3624z00_1062 = BgL_l3624z00_1058;
									BgL_tail3627z00_1063 = BgL_head3626z00_1060;
								BgL_zc3anonymousza33711ze3z83_1064:
									if (NULLP(BgL_l3624z00_1062))
										{	/* Ast/glo_def.scm 186 */
											BgL_g3608z00_1040 = CDR(BgL_head3626z00_1060);
										}
									else
										{	/* Ast/glo_def.scm 186 */
											obj_t BgL_newtail3628z00_1066;

											{	/* Ast/glo_def.scm 186 */
												obj_t BgL_arg3714z00_1068;

												{	/* Ast/glo_def.scm 186 */
													obj_t BgL_az00_1070;

													BgL_az00_1070 = CAR(BgL_l3624z00_1062);
													if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1070,
															BGl_localz00zzast_varz00))
														{	/* Ast/glo_def.scm 189 */
															BgL_variablez00_bglt BgL_obj1696z00_1653;

															BgL_obj1696z00_1653 =
																(BgL_variablez00_bglt) (
																(BgL_localz00_bglt) (BgL_az00_1070));
															BgL_arg3714z00_1068 =
																(obj_t) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1696z00_1653))->BgL_typez00));
														}
													else
														{	/* Ast/glo_def.scm 188 */
															if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1070,
																	BGl_typez00zztype_typez00))
																{	/* Ast/glo_def.scm 190 */
																	BgL_arg3714z00_1068 = BgL_az00_1070;
																}
															else
																{	/* Ast/glo_def.scm 190 */
																	BgL_arg3714z00_1068 =
																		BGl_internalzd2errorzd2zztools_errorz00
																		(BGl_string3836z00zzast_glozd2defzd2,
																		BGl_string3837z00zzast_glozd2defzd2,
																		BGl_shapez00zztools_shapez00
																		(BgL_az00_1070));
																}
														}
												}
												BgL_newtail3628z00_1066 =
													MAKE_PAIR(BgL_arg3714z00_1068, BNIL);
											}
											SET_CDR(BgL_tail3627z00_1063, BgL_newtail3628z00_1066);
											{
												obj_t BgL_tail3627z00_2021;

												obj_t BgL_l3624z00_2019;

												BgL_l3624z00_2019 = CDR(BgL_l3624z00_1062);
												BgL_tail3627z00_2021 = BgL_newtail3628z00_1066;
												BgL_tail3627z00_1063 = BgL_tail3627z00_2021;
												BgL_l3624z00_1062 = BgL_l3624z00_2019;
												goto BgL_zc3anonymousza33711ze3z83_1064;
											}
										}
								}
							}
					}
					{
						obj_t BgL_localsz00_1042;

						obj_t BgL_typesz00_1043;

						BgL_localsz00_1042 = BgL_localsz00_20;
						BgL_typesz00_1043 = BgL_g3608z00_1040;
					BgL_zc3anonymousza33697ze3z83_1044:
						if (NULLP(BgL_localsz00_1042))
							{	/* Ast/glo_def.scm 198 */
								if (NULLP(BgL_typesz00_1043))
									{	/* Ast/glo_def.scm 201 */
										((((BgL_globalz00_bglt) CREF(BgL_oldz00_17))->BgL_srcz00) =
											((obj_t) BgL_srczd2expzd2_22), BUNSPEC);
										return BgL_oldz00_17;
									}
								else
									{	/* Ast/glo_def.scm 205 */
										obj_t BgL_list3700z00_1047;

										BgL_list3700z00_1047 =
											MAKE_PAIR(BGl_string3842z00zzast_glozd2defzd2, BNIL);
										return
											BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_17,
											BgL_srczd2expzd2_22, BgL_list3700z00_1047);
									}
							}
						else
							{	/* Ast/glo_def.scm 206 */
								bool_t BgL_testz00_2029;

								if (NULLP(BgL_typesz00_1043))
									{	/* Ast/glo_def.scm 206 */
										BgL_testz00_2029 = ((bool_t) 1);
									}
								else
									{	/* Ast/glo_def.scm 207 */
										bool_t BgL_testz00_2032;

										{	/* Ast/glo_def.scm 208 */
											BgL_typez00_bglt BgL_arg3707z00_1054;

											obj_t BgL_arg3708z00_1055;

											{	/* Ast/glo_def.scm 208 */
												BgL_variablez00_bglt BgL_obj1696z00_1666;

												{	/* Ast/glo_def.scm 208 */
													obj_t BgL_pairz00_1665;

													BgL_pairz00_1665 = BgL_localsz00_1042;
													BgL_obj1696z00_1666 =
														(BgL_variablez00_bglt) (CAR(BgL_pairz00_1665));
												}
												BgL_arg3707z00_1054 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1696z00_1666))->
													BgL_typez00);
											}
											BgL_arg3708z00_1055 = CAR(BgL_typesz00_1043);
											BgL_testz00_2032 =
												BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(((bool_t)
													0), BgL_arg3707z00_1054,
												(BgL_typez00_bglt) (BgL_arg3708z00_1055));
										}
										if (BgL_testz00_2032)
											{	/* Ast/glo_def.scm 207 */
												BgL_testz00_2029 = ((bool_t) 0);
											}
										else
											{	/* Ast/glo_def.scm 207 */
												BgL_testz00_2029 = ((bool_t) 1);
											}
									}
								if (BgL_testz00_2029)
									{	/* Ast/glo_def.scm 210 */
										obj_t BgL_list3702z00_1049;

										BgL_list3702z00_1049 =
											MAKE_PAIR(BGl_string3845z00zzast_glozd2defzd2, BNIL);
										return
											BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_17,
											BgL_srczd2expzd2_22, BgL_list3702z00_1049);
									}
								else
									{
										obj_t BgL_typesz00_2043;

										obj_t BgL_localsz00_2041;

										BgL_localsz00_2041 = CDR(BgL_localsz00_1042);
										BgL_typesz00_2043 = CDR(BgL_typesz00_1043);
										BgL_typesz00_1043 = BgL_typesz00_2043;
										BgL_localsz00_1042 = BgL_localsz00_2041;
										goto BgL_zc3anonymousza33697ze3z83_1044;
									}
							}
					}
				}
			}
		}
	}



/* def-global-scnst! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t BgL_idz00_23,
		obj_t BgL_modulez00_24, obj_t BgL_nodez00_25, obj_t BgL_classz00_26,
		obj_t BgL_locz00_27)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 217 */
			BGl_enterzd2functionzd2zztools_errorz00(BgL_idz00_23);
			{	/* Ast/glo_def.scm 219 */
				obj_t BgL_idze2typeze2_1670;

				BgL_idze2typeze2_1670 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_23, BgL_locz00_27);
				{	/* Ast/glo_def.scm 219 */
					obj_t BgL_idze2idze2_1671;

					BgL_idze2idze2_1671 = CAR(BgL_idze2typeze2_1670);
					{	/* Ast/glo_def.scm 219 */
						obj_t BgL_oldzd2globalzd2_1672;

						BgL_oldzd2globalzd2_1672 =
							BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idze2idze2_1671,
							BgL_modulez00_24);
						{	/* Ast/glo_def.scm 219 */
							BgL_globalz00_bglt BgL_globalz00_1673;

							BgL_globalz00_1673 =
								BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2
								(BgL_idz00_23, BgL_modulez00_24, CNST_TABLE_REF(((long) 2)),
								BgL_nodez00_25, BgL_classz00_26, BgL_locz00_27);
							{	/* Ast/glo_def.scm 219 */

								BGl_removezd2varzd2fromz12z12zzast_removez00(CNST_TABLE_REF((
											(long) 4)), (BgL_variablez00_bglt) (BgL_globalz00_1673));
								BGl_leavezd2functionzd2zztools_errorz00();
								return BgL_globalz00_1673;
							}
						}
					}
				}
			}
		}
	}



/* _def-global-scnst! */
	obj_t BGl__defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t BgL_envz00_1754,
		obj_t BgL_idz00_1755, obj_t BgL_modulez00_1756, obj_t BgL_nodez00_1757,
		obj_t BgL_classz00_1758, obj_t BgL_locz00_1759)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 217 */
			return
				(obj_t) (BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
				(BgL_idz00_1755, BgL_modulez00_1756, BgL_nodez00_1757,
					BgL_classz00_1758, BgL_locz00_1759));
		}
	}



/* def-global-svar! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t BgL_idz00_28,
		obj_t BgL_modulez00_29, obj_t BgL_srczd2expzd2_30, obj_t BgL_remz00_31)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 237 */
			{	/* Ast/glo_def.scm 238 */
				obj_t BgL_locz00_1081;

				BgL_locz00_1081 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2expzd2_30);
				{	/* Ast/glo_def.scm 238 */
					obj_t BgL_idze2typeze2_1082;

					BgL_idze2typeze2_1082 =
						BGl_parsezd2idzd2zzast_identz00(BgL_idz00_28, BgL_locz00_1081);
					{	/* Ast/glo_def.scm 239 */
						obj_t BgL_idze2idze2_1083;

						BgL_idze2idze2_1083 = CAR(BgL_idze2typeze2_1082);
						{	/* Ast/glo_def.scm 240 */
							obj_t BgL_oldzd2globalzd2_1084;

							BgL_oldzd2globalzd2_1084 =
								BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idze2idze2_1083,
								BgL_modulez00_29);
							{	/* Ast/glo_def.scm 241 */
								obj_t BgL_importz00_1085;

								{	/* Ast/glo_def.scm 242 */
									bool_t BgL_testz00_2061;

									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 3)))
										{	/* Ast/glo_def.scm 243 */
											obj_t BgL_arg3733z00_1102;

											obj_t BgL_arg3734z00_1103;

											BgL_arg3733z00_1102 = CNST_TABLE_REF(((long) 0));
											{	/* Ast/glo_def.scm 243 */
												obj_t BgL_arg3735z00_1104;

												BgL_arg3735z00_1104 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_2067;

													BgL_auxz00_2067 =
														(BgL_backendz00_bglt) (BgL_arg3735z00_1104);
													BgL_arg3734z00_1103 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_2067))->
														BgL_debugzd2supportzd2);
											}}
											BgL_testz00_2061 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3733z00_1102, BgL_arg3734z00_1103));
										}
									else
										{	/* Ast/glo_def.scm 242 */
											BgL_testz00_2061 = ((bool_t) 0);
										}
									if (BgL_testz00_2061)
										{	/* Ast/glo_def.scm 242 */
											BgL_importz00_1085 = CNST_TABLE_REF(((long) 1));
										}
									else
										{	/* Ast/glo_def.scm 242 */
											BgL_importz00_1085 = CNST_TABLE_REF(((long) 2));
								}}
								{	/* Ast/glo_def.scm 242 */
									obj_t BgL_typez00_1086;

									{	/* Ast/glo_def.scm 246 */
										obj_t BgL_typez00_1093;

										BgL_typez00_1093 = CDR(BgL_idze2typeze2_1082);
										{	/* Ast/glo_def.scm 249 */
											bool_t BgL_testz00_2075;

											{	/* Ast/glo_def.scm 249 */
												obj_t BgL_auxz00_2076;

												{
													BgL_typez00_bglt BgL_auxz00_2077;

													BgL_auxz00_2077 =
														(BgL_typez00_bglt) (BgL_typez00_1093);
													BgL_auxz00_2076 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2077))->
														BgL_classz00);
												}
												BgL_testz00_2075 =
													(BgL_auxz00_2076 == CNST_TABLE_REF(((long) 5)));
											}
											if (BgL_testz00_2075)
												{	/* Ast/glo_def.scm 249 */
													BgL_typez00_1086 = BgL_typez00_1093;
												}
											else
												{	/* Ast/glo_def.scm 249 */
													BgL_typez00_1086 =
														BGl_userzd2errorzd2zztools_errorz00
														(BgL_idze2idze2_1083,
														BGl_string3846z00zzast_glozd2defzd2,
														BGl_shapez00zztools_shapez00(BgL_typez00_1093),
														BNIL);
												}
										}
									}
									{	/* Ast/glo_def.scm 246 */
										BgL_globalz00_bglt BgL_globalz00_1087;

										if (BGl_iszd2azf3z21zz__objectz00(BgL_oldzd2globalzd2_1084,
												BGl_globalz00zzast_varz00))
											{	/* Ast/glo_def.scm 255 */
												BgL_globalz00_1087 =
													BGl_checkzd2svarzd2definitionz00zzast_glozd2defzd2(
													(BgL_globalz00_bglt) (BgL_oldzd2globalzd2_1084),
													BgL_typez00_1086, BgL_srczd2expzd2_30);
											}
										else
											{	/* Ast/glo_def.scm 255 */
												BgL_globalz00_1087 =
													BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
													(BgL_idz00_28, BgL_modulez00_29, BgL_importz00_1085,
													BgL_srczd2expzd2_30, BFALSE);
											}
										{	/* Ast/glo_def.scm 254 */
											obj_t BgL_defzd2loczd2_1088;

											BgL_defzd2loczd2_1088 =
												BGl_findzd2locationzd2zztools_locationz00
												(BgL_srczd2expzd2_30);
											{	/* Ast/glo_def.scm 265 */

												{	/* Ast/glo_def.scm 267 */
													BgL_variablez00_bglt BgL_varz00_1682;

													BgL_typez00_bglt BgL_newzd2typezd2_1683;

													BgL_varz00_1682 =
														(BgL_variablez00_bglt) (BgL_globalz00_1087);
													BgL_newzd2typezd2_1683 =
														(BgL_typez00_bglt) (BgL_typez00_1086);
													{	/* Ast/glo_def.scm 267 */
														BgL_typez00_bglt BgL_oldzd2typezd2_1684;

														BgL_oldzd2typezd2_1684 =
															(((BgL_variablez00_bglt) CREF(BgL_varz00_1682))->
															BgL_typez00);
														if (((obj_t) (BgL_oldzd2typezd2_1684) ==
																BGl_za2_za2z00zztype_cachez00))
															{	/* Ast/glo_def.scm 267 */
																((((BgL_variablez00_bglt)
																			CREF(BgL_varz00_1682))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_newzd2typezd2_1683),
																	BUNSPEC);
															}
														else
															{	/* Ast/glo_def.scm 267 */
																BFALSE;
															}
													}
												}
												{	/* Ast/glo_def.scm 269 */
													bool_t BgL_testz00_2097;

													{	/* Ast/glo_def.scm 269 */
														BgL_valuez00_bglt BgL_arg3723z00_1091;

														{
															BgL_variablez00_bglt BgL_auxz00_2098;

															BgL_auxz00_2098 =
																(BgL_variablez00_bglt) (BgL_globalz00_1087);
															BgL_arg3723z00_1091 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2098))->BgL_valuez00);
														}
														{	/* Ast/glo_def.scm 269 */
															obj_t BgL_obj2118z00_1690;

															BgL_obj2118z00_1690 =
																(obj_t) (BgL_arg3723z00_1091);
															BgL_testz00_2097 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2118z00_1690, BGl_svarz00zzast_varz00);
														}
													}
													if (BgL_testz00_2097)
														{	/* Ast/glo_def.scm 271 */
															BgL_valuez00_bglt BgL_arg3722z00_1090;

															{
																BgL_variablez00_bglt BgL_auxz00_2103;

																BgL_auxz00_2103 =
																	(BgL_variablez00_bglt) (BgL_globalz00_1087);
																BgL_arg3722z00_1090 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2103))->BgL_valuez00);
															}
															{
																BgL_svarz00_bglt BgL_auxz00_2106;

																BgL_auxz00_2106 =
																	(BgL_svarz00_bglt) (BgL_arg3722z00_1090);
																((((BgL_svarz00_bglt) CREF(BgL_auxz00_2106))->
																		BgL_locz00) =
																	((obj_t) BgL_defzd2loczd2_1088), BUNSPEC);
															}
														}
													else
														{	/* Ast/glo_def.scm 269 */
															BFALSE;
														}
												}
												BGl_removezd2varzd2fromz12z12zzast_removez00
													(BgL_remz00_31,
													(BgL_variablez00_bglt) (BgL_globalz00_1087));
												return BgL_globalz00_1087;
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



/* _def-global-svar! */
	obj_t BGl__defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t BgL_envz00_1760,
		obj_t BgL_idz00_1761, obj_t BgL_modulez00_1762, obj_t BgL_srczd2expzd2_1763,
		obj_t BgL_remz00_1764)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 237 */
			return
				(obj_t) (BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(BgL_idz00_1761,
					BgL_modulez00_1762, BgL_srczd2expzd2_1763, BgL_remz00_1764));
		}
	}



/* check-svar-definition */
	BgL_globalz00_bglt
		BGl_checkzd2svarzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt
		BgL_oldz00_32, obj_t BgL_typez00_33, obj_t BgL_srczd2expzd2_34)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 279 */
			{	/* Ast/glo_def.scm 280 */
				BgL_valuez00_bglt BgL_oldzd2valuezd2_1105;

				{
					BgL_variablez00_bglt BgL_auxz00_2113;

					BgL_auxz00_2113 = (BgL_variablez00_bglt) (BgL_oldz00_32);
					BgL_oldzd2valuezd2_1105 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2113))->BgL_valuez00);
				}
				{	/* Ast/glo_def.scm 282 */
					bool_t BgL_testz00_2116;

					{	/* Ast/glo_def.scm 282 */
						obj_t BgL_obj2118z00_1695;

						BgL_obj2118z00_1695 = (obj_t) (BgL_oldzd2valuezd2_1105);
						BgL_testz00_2116 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2118z00_1695,
							BGl_svarz00zzast_varz00);
					}
					if (BgL_testz00_2116)
						{	/* Ast/glo_def.scm 284 */
							bool_t BgL_testz00_2119;

							{	/* Ast/glo_def.scm 284 */
								BgL_typez00_bglt BgL_arg3739z00_1109;

								{
									BgL_variablez00_bglt BgL_auxz00_2120;

									BgL_auxz00_2120 = (BgL_variablez00_bglt) (BgL_oldz00_32);
									BgL_arg3739z00_1109 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2120))->
										BgL_typez00);
								}
								BgL_testz00_2119 =
									BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(((bool_t) 0),
									(BgL_typez00_bglt) (BgL_typez00_33), BgL_arg3739z00_1109);
							}
							if (BgL_testz00_2119)
								{	/* Ast/glo_def.scm 284 */
									return BgL_oldz00_32;
								}
							else
								{	/* Ast/glo_def.scm 285 */
									obj_t BgL_list3738z00_1108;

									BgL_list3738z00_1108 =
										MAKE_PAIR(BGl_string3847z00zzast_glozd2defzd2, BNIL);
									return
										BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_32,
										BgL_srczd2expzd2_34, BgL_list3738z00_1108);
								}
						}
					else
						{	/* Ast/glo_def.scm 283 */
							obj_t BgL_list3740z00_1110;

							BgL_list3740z00_1110 =
								MAKE_PAIR(BGl_string3848z00zzast_glozd2defzd2, BNIL);
							return
								BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_32,
								BgL_srczd2expzd2_34, BgL_list3740z00_1110);
						}
				}
			}
		}
	}



/* compatible-type? */
	bool_t BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(bool_t BgL_subzf3zf3_35,
		BgL_typez00_bglt BgL_newz00_36, BgL_typez00_bglt BgL_oldz00_37)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 292 */
			{	/* Ast/glo_def.scm 293 */
				bool_t BgL__ortest_3609z00_1111;

				BgL__ortest_3609z00_1111 =
					((obj_t) (BgL_newz00_36) == BGl_za2_za2z00zztype_cachez00);
				if (BgL__ortest_3609z00_1111)
					{	/* Ast/glo_def.scm 293 */
						return BgL__ortest_3609z00_1111;
					}
				else
					{	/* Ast/glo_def.scm 294 */
						bool_t BgL__ortest_3610z00_1112;

						BgL__ortest_3610z00_1112 =
							((obj_t) (BgL_oldz00_37) == (obj_t) (BgL_newz00_36));
						if (BgL__ortest_3610z00_1112)
							{	/* Ast/glo_def.scm 294 */
								return BgL__ortest_3610z00_1112;
							}
						else
							{	/* Ast/glo_def.scm 294 */
								if (BgL_subzf3zf3_35)
									{	/* Ast/glo_def.scm 296 */
										bool_t BgL__ortest_3612z00_1114;

										BgL__ortest_3612z00_1114 =
											BGl_typezd2subclasszf3z21zzobject_classz00(BgL_newz00_36,
											BgL_oldz00_37);
										if (BgL__ortest_3612z00_1114)
											{	/* Ast/glo_def.scm 296 */
												return BgL__ortest_3612z00_1114;
											}
										else
											{	/* Ast/glo_def.scm 297 */
												bool_t BgL_testz00_2139;

												{	/* Ast/glo_def.scm 297 */
													obj_t BgL_obj3387z00_1697;

													BgL_obj3387z00_1697 = (obj_t) (BgL_newz00_36);
													BgL_testz00_2139 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj3387z00_1697,
														BGl_tclassz00zzobject_classz00);
												}
												if (BgL_testz00_2139)
													{	/* Ast/glo_def.scm 297 */
														return
															(
															(obj_t) (BgL_oldz00_37) ==
															BGl_za2objza2z00zztype_cachez00);
													}
												else
													{	/* Ast/glo_def.scm 297 */
														return ((bool_t) 0);
													}
											}
									}
								else
									{	/* Ast/glo_def.scm 295 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* mismatch-error */
	BgL_globalz00_bglt
		BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_globalz00_bglt
		BgL_globalz00_38, obj_t BgL_srczd2expzd2_39, obj_t BgL_addzd2msgzd2_40)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 302 */
			{	/* Ast/glo_def.scm 304 */
				obj_t BgL_arg3741z00_1117;

				obj_t BgL_arg3742z00_1118;

				if (PAIRP(BgL_addzd2msgzd2_40))
					{	/* Ast/glo_def.scm 304 */
						BgL_arg3741z00_1117 =
							string_append_3(BGl_string3849z00zzast_glozd2defzd2,
							BGl_string3850z00zzast_glozd2defzd2, CAR(BgL_addzd2msgzd2_40));
					}
				else
					{	/* Ast/glo_def.scm 304 */
						BgL_arg3741z00_1117 = BGl_string3849z00zzast_glozd2defzd2;
					}
				{	/* Ast/glo_def.scm 307 */
					obj_t BgL_arg3747z00_1123;

					BgL_arg3747z00_1123 =
						(((BgL_globalz00_bglt) CREF(BgL_globalz00_38))->BgL_srcz00);
					BgL_arg3742z00_1118 =
						BGl_shapez00zztools_shapez00(BgL_arg3747z00_1123);
				}
				{	/* Ast/glo_def.scm 304 */
					obj_t BgL_list3743z00_1119;

					BgL_list3743z00_1119 = MAKE_PAIR((obj_t) (BgL_globalz00_38), BNIL);
					return
						(BgL_globalz00_bglt) (BGl_userzd2errorzd2zztools_errorz00
						(BgL_arg3741z00_1117, BgL_arg3742z00_1118, BgL_srczd2expzd2_39,
							BgL_list3743z00_1119));
				}
			}
		}
	}



/* check-method-definition */
	BGL_EXPORTED_DEF bool_t
		BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t BgL_idz00_43,
		obj_t BgL_argsz00_44, obj_t BgL_localsz00_45, obj_t BgL_srcz00_46)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 322 */
			{	/* Ast/glo_def.scm 323 */
				obj_t BgL_locz00_1126;

				BgL_locz00_1126 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_46);
				{	/* Ast/glo_def.scm 323 */
					BgL_typez00_bglt BgL_typezd2reszd2_1127;

					BgL_typezd2reszd2_1127 =
						BGl_typezd2ofzd2idz00zzast_identz00(BgL_idz00_43, BgL_locz00_1126);
					{	/* Ast/glo_def.scm 324 */
						obj_t BgL_methodzd2idzd2_1128;

						BgL_methodzd2idzd2_1128 =
							BGl_idzd2ofzd2idz00zzast_identz00(BgL_idz00_43, BgL_locz00_1126);
						{	/* Ast/glo_def.scm 325 */
							obj_t BgL_genericz00_1129;

							BgL_genericz00_1129 =
								BGl_findzd2globalzd2zzast_envz00(BgL_idz00_43, BNIL);
							{	/* Ast/glo_def.scm 326 */

								if (BGl_iszd2azf3z21zz__objectz00(BgL_genericz00_1129,
										BGl_globalz00zzast_varz00))
									{	/* Ast/glo_def.scm 331 */
										BgL_valuez00_bglt BgL_genericzd2valuezd2_1131;

										{
											BgL_variablez00_bglt BgL_auxz00_2160;

											BgL_auxz00_2160 =
												(BgL_variablez00_bglt) (
												(BgL_globalz00_bglt) (BgL_genericz00_1129));
											BgL_genericzd2valuezd2_1131 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2160))->
												BgL_valuez00);
										}
										{	/* Ast/glo_def.scm 333 */
											bool_t BgL_testz00_2164;

											{	/* Ast/glo_def.scm 333 */
												obj_t BgL_obj2044z00_1708;

												BgL_obj2044z00_1708 =
													(obj_t) (BgL_genericzd2valuezd2_1131);
												BgL_testz00_2164 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2044z00_1708,
													BGl_sfunz00zzast_varz00);
											}
											if (BgL_testz00_2164)
												{	/* Ast/glo_def.scm 336 */
													bool_t BgL_testz00_2167;

													{	/* Ast/glo_def.scm 336 */
														obj_t BgL_auxz00_2168;

														{
															BgL_sfunz00_bglt BgL_auxz00_2169;

															BgL_auxz00_2169 =
																(BgL_sfunz00_bglt)
																(BgL_genericzd2valuezd2_1131);
															BgL_auxz00_2168 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2169))->
																BgL_classz00);
														}
														BgL_testz00_2167 =
															(BgL_auxz00_2168 == CNST_TABLE_REF(((long) 3)));
													}
													if (BgL_testz00_2167)
														{	/* Ast/glo_def.scm 339 */
															bool_t BgL_testz00_2174;

															{	/* Ast/glo_def.scm 339 */
																long BgL_arg3779z00_1176;

																long BgL_arg3780z00_1177;

																{
																	BgL_funz00_bglt BgL_auxz00_2175;

																	BgL_auxz00_2175 =
																		(BgL_funz00_bglt) (
																		(BgL_sfunz00_bglt)
																		(BgL_genericzd2valuezd2_1131));
																	BgL_arg3779z00_1176 =
																		(((BgL_funz00_bglt) CREF(BgL_auxz00_2175))->
																		BgL_arityz00);
																}
																BgL_arg3780z00_1177 =
																	BGl_globalzd2arityzd2zztools_argsz00
																	(BgL_argsz00_44);
																BgL_testz00_2174 =
																	(BgL_arg3779z00_1176 == BgL_arg3780z00_1177);
															}
															if (BgL_testz00_2174)
																{	/* Ast/glo_def.scm 342 */
																	bool_t BgL_testz00_2181;

																	{	/* Ast/glo_def.scm 342 */
																		BgL_typez00_bglt BgL_arg3777z00_1174;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2182;

																			BgL_auxz00_2182 =
																				(BgL_variablez00_bglt) (
																				(BgL_globalz00_bglt)
																				(BgL_genericz00_1129));
																			BgL_arg3777z00_1174 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2182))->BgL_typez00);
																		}
																		BgL_testz00_2181 =
																			BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
																			(((bool_t) 1), BgL_typezd2reszd2_1127,
																			BgL_arg3777z00_1174);
																	}
																	if (BgL_testz00_2181)
																		{	/* Ast/glo_def.scm 347 */
																			obj_t BgL__ortest_3614z00_1136;

																			{	/* Ast/glo_def.scm 347 */
																				obj_t BgL_g3615z00_1137;

																				{	/* Ast/glo_def.scm 348 */
																					obj_t BgL_l3629z00_1154;

																					{
																						BgL_sfunz00_bglt BgL_auxz00_2187;

																						BgL_auxz00_2187 =
																							(BgL_sfunz00_bglt)
																							(BgL_genericzd2valuezd2_1131);
																						BgL_l3629z00_1154 =
																							(((BgL_sfunz00_bglt)
																								CREF(BgL_auxz00_2187))->
																							BgL_argsz00);
																					}
																					if (NULLP(BgL_l3629z00_1154))
																						{	/* Ast/glo_def.scm 348 */
																							BgL_g3615z00_1137 = BNIL;
																						}
																					else
																						{	/* Ast/glo_def.scm 348 */
																							obj_t BgL_head3631z00_1156;

																							BgL_head3631z00_1156 =
																								MAKE_PAIR(BNIL, BNIL);
																							{
																								obj_t BgL_l3629z00_1158;

																								obj_t BgL_tail3632z00_1159;

																								BgL_l3629z00_1158 =
																									BgL_l3629z00_1154;
																								BgL_tail3632z00_1159 =
																									BgL_head3631z00_1156;
																							BgL_zc3anonymousza33766ze3z83_1160:
																								if (NULLP
																									(BgL_l3629z00_1158))
																									{	/* Ast/glo_def.scm 348 */
																										BgL_g3615z00_1137 =
																											CDR(BgL_head3631z00_1156);
																									}
																								else
																									{	/* Ast/glo_def.scm 348 */
																										obj_t
																											BgL_newtail3633z00_1162;
																										{	/* Ast/glo_def.scm 348 */
																											obj_t BgL_arg3769z00_1164;

																											{	/* Ast/glo_def.scm 348 */
																												obj_t BgL_az00_1166;

																												BgL_az00_1166 =
																													CAR
																													(BgL_l3629z00_1158);
																												if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1166, BGl_localz00zzast_varz00))
																													{	/* Ast/glo_def.scm 351 */
																														BgL_variablez00_bglt
																															BgL_obj1696z00_1722;
																														BgL_obj1696z00_1722
																															=
																															(BgL_variablez00_bglt)
																															(
																															(BgL_localz00_bglt)
																															(BgL_az00_1166));
																														BgL_arg3769z00_1164
																															=
																															(obj_t) (((
																																	(BgL_variablez00_bglt)
																																	CREF
																																	(BgL_obj1696z00_1722))->
																																BgL_typez00));
																													}
																												else
																													{	/* Ast/glo_def.scm 350 */
																														if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1166, BGl_typez00zztype_typez00))
																															{	/* Ast/glo_def.scm 352 */
																																BgL_arg3769z00_1164
																																	=
																																	BgL_az00_1166;
																															}
																														else
																															{	/* Ast/glo_def.scm 352 */
																																BgL_arg3769z00_1164
																																	=
																																	BGl_internalzd2errorzd2zztools_errorz00
																																	(BGl_string3836z00zzast_glozd2defzd2,
																																	BGl_string3837z00zzast_glozd2defzd2,
																																	BGl_shapez00zztools_shapez00
																																	(BgL_az00_1166));
																															}
																													}
																											}
																											BgL_newtail3633z00_1162 =
																												MAKE_PAIR
																												(BgL_arg3769z00_1164,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail3632z00_1159,
																											BgL_newtail3633z00_1162);
																										{
																											obj_t
																												BgL_tail3632z00_2211;
																											obj_t BgL_l3629z00_2209;

																											BgL_l3629z00_2209 =
																												CDR(BgL_l3629z00_1158);
																											BgL_tail3632z00_2211 =
																												BgL_newtail3633z00_1162;
																											BgL_tail3632z00_1159 =
																												BgL_tail3632z00_2211;
																											BgL_l3629z00_1158 =
																												BgL_l3629z00_2209;
																											goto
																												BgL_zc3anonymousza33766ze3z83_1160;
																										}
																									}
																							}
																						}
																				}
																				{
																					obj_t BgL_localsz00_1139;

																					obj_t BgL_typesz00_1140;

																					bool_t BgL_subzf3zf3_1141;

																					BgL_localsz00_1139 = BgL_localsz00_45;
																					BgL_typesz00_1140 = BgL_g3615z00_1137;
																					BgL_subzf3zf3_1141 = ((bool_t) 1);
																				BgL_zc3anonymousza33754ze3z83_1142:
																					if (NULLP(BgL_localsz00_1139))
																						{	/* Ast/glo_def.scm 362 */
																							BgL__ortest_3614z00_1136 = BTRUE;
																						}
																					else
																						{	/* Ast/glo_def.scm 362 */
																							if (NULLP(BgL_typesz00_1140))
																								{	/* Ast/glo_def.scm 365 */
																									obj_t BgL_list3757z00_1145;

																									BgL_list3757z00_1145 =
																										MAKE_PAIR
																										(BGl_string3845z00zzast_glozd2defzd2,
																										BNIL);
																									BgL__ortest_3614z00_1136 =
																										(obj_t)
																										(BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																										((BgL_globalz00_bglt)
																											(BgL_genericz00_1129),
																											BgL_srcz00_46,
																											BgL_list3757z00_1145));
																								}
																							else
																								{	/* Ast/glo_def.scm 368 */
																									bool_t BgL_testz00_2220;

																									{	/* Ast/glo_def.scm 369 */
																										BgL_typez00_bglt
																											BgL_arg3762z00_1150;
																										obj_t BgL_arg3763z00_1151;

																										{	/* Ast/glo_def.scm 369 */
																											BgL_variablez00_bglt
																												BgL_obj1696z00_1732;
																											{	/* Ast/glo_def.scm 369 */
																												obj_t BgL_pairz00_1731;

																												BgL_pairz00_1731 =
																													BgL_localsz00_1139;
																												BgL_obj1696z00_1732 =
																													(BgL_variablez00_bglt)
																													(CAR
																													(BgL_pairz00_1731));
																											}
																											BgL_arg3762z00_1150 =
																												(((BgL_variablez00_bglt)
																													CREF
																													(BgL_obj1696z00_1732))->
																												BgL_typez00);
																										}
																										BgL_arg3763z00_1151 =
																											CAR(BgL_typesz00_1140);
																										BgL_testz00_2220 =
																											BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
																											(BgL_subzf3zf3_1141,
																											BgL_arg3762z00_1150,
																											(BgL_typez00_bglt)
																											(BgL_arg3763z00_1151));
																									}
																									if (BgL_testz00_2220)
																										{
																											bool_t BgL_subzf3zf3_2231;

																											obj_t BgL_typesz00_2229;

																											obj_t BgL_localsz00_2227;

																											BgL_localsz00_2227 =
																												CDR(BgL_localsz00_1139);
																											BgL_typesz00_2229 =
																												CDR(BgL_typesz00_1140);
																											BgL_subzf3zf3_2231 =
																												((bool_t) 0);
																											BgL_subzf3zf3_1141 =
																												BgL_subzf3zf3_2231;
																											BgL_typesz00_1140 =
																												BgL_typesz00_2229;
																											BgL_localsz00_1139 =
																												BgL_localsz00_2227;
																											goto
																												BgL_zc3anonymousza33754ze3z83_1142;
																										}
																									else
																										{	/* Ast/glo_def.scm 368 */
																											{	/* Ast/glo_def.scm 371 */
																												obj_t
																													BgL_list3761z00_1149;
																												BgL_list3761z00_1149 =
																													MAKE_PAIR
																													(BGl_string3845z00zzast_glozd2defzd2,
																													BNIL);
																												BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																													((BgL_globalz00_bglt)
																													(BgL_genericz00_1129),
																													BgL_srcz00_46,
																													BgL_list3761z00_1149);
																											}
																											BgL__ortest_3614z00_1136 =
																												BFALSE;
																										}
																								}
																						}
																				}
																			}
																			if (CBOOL(BgL__ortest_3614z00_1136))
																				{	/* Ast/glo_def.scm 347 */
																					return
																						CBOOL(BgL__ortest_3614z00_1136);
																				}
																			else
																				{	/* Ast/glo_def.scm 347 */
																					return ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Ast/glo_def.scm 342 */
																			{	/* Ast/glo_def.scm 343 */
																				obj_t BgL_list3776z00_1173;

																				BgL_list3776z00_1173 =
																					MAKE_PAIR
																					(BGl_string3841z00zzast_glozd2defzd2,
																					BNIL);
																				BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																					((BgL_globalz00_bglt)
																					(BgL_genericz00_1129), BgL_srcz00_46,
																					BgL_list3776z00_1173);
																			}
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Ast/glo_def.scm 339 */
																	{	/* Ast/glo_def.scm 340 */
																		obj_t BgL_list3778z00_1175;

																		BgL_list3778z00_1175 =
																			MAKE_PAIR
																			(BGl_string3842z00zzast_glozd2defzd2,
																			BNIL);
																		BGl_mismatchzd2errorzd2zzast_glozd2defzd2(
																			(BgL_globalz00_bglt)
																			(BgL_genericz00_1129), BgL_srcz00_46,
																			BgL_list3778z00_1175);
																	}
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Ast/glo_def.scm 336 */
															{	/* Ast/glo_def.scm 337 */
																obj_t BgL_list3781z00_1178;

																BgL_list3781z00_1178 =
																	MAKE_PAIR(BGl_string3851z00zzast_glozd2defzd2,
																	BNIL);
																BGl_mismatchzd2errorzd2zzast_glozd2defzd2(
																	(BgL_globalz00_bglt) (BgL_genericz00_1129),
																	BgL_srcz00_46, BgL_list3781z00_1178);
															}
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ast/glo_def.scm 333 */
													{	/* Ast/glo_def.scm 334 */
														obj_t BgL_list3784z00_1181;

														BgL_list3784z00_1181 =
															MAKE_PAIR(BGl_string3851z00zzast_glozd2defzd2,
															BNIL);
														BGl_mismatchzd2errorzd2zzast_glozd2defzd2(
															(BgL_globalz00_bglt) (BgL_genericz00_1129),
															BgL_srcz00_46, BgL_list3784z00_1181);
													}
													return ((bool_t) 0);
												}
										}
									}
								else
									{	/* Ast/glo_def.scm 327 */
										return ((bool_t) 1);
									}
							}
						}
					}
				}
			}
		}
	}



/* _check-method-definition */
	obj_t BGl__checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t
		BgL_envz00_1765, obj_t BgL_idz00_1766, obj_t BgL_argsz00_1767,
		obj_t BgL_localsz00_1768, obj_t BgL_srcz00_1769)
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 322 */
			return
				BBOOL(BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2
				(BgL_idz00_1766, BgL_argsz00_1767, BgL_localsz00_1768,
					BgL_srcz00_1769));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_glozd2defzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_glozd2defzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2defzd2()
	{
		AN_OBJECT;
		{	/* Ast/glo_def.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3852z00zzast_glozd2defzd2));
		}
	}

#ifdef __cplusplus
}
#endif
