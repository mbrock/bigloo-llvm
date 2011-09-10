/*===========================================================================*/
/*   (Ast/venv.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/venv.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
	}               *BgL_isfunz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33467ze3z83zzast_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_restorezd2valuezd2typesz12z12zzast_envz00(BgL_valuez00_bglt);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_alreadyzd2restoredzf3z21zzast_envz00(obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_envz00();
	static obj_t BGl__addzd2genvz12zc0zzast_envz00(obj_t, obj_t);
	static obj_t BGl__restorezd2valuezd2typesz123456z12zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__alreadyzd2restoredzf3z21zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_warningzd2overridezd2globalz12z12zzast_envz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_hrtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_envz00();
	static obj_t BGl_za2Genvza2z00zzast_envz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t,
		obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_bindzd2globalz12zc0zzast_envz00(obj_t, obj_t, BgL_valuez00_bglt, obj_t,
		obj_t);
	static obj_t BGl__restorezd2globalz12zc0zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_warningzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2genvzd2zzast_envz00();
	static obj_t BGl__findzd2globalzd2zzast_envz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00();
	static obj_t BGl_methodzd2initzd2zzast_envz00();
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33610ze3z83zzast_envz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t);
	static obj_t BGl__getzd2genvzd2zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_envz00 = BUNSPEC;
	static obj_t BGl__forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_envz00();
	static obj_t BGl__restorezd2valuezd2typesz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_nodez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl__getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_envz00();
	static obj_t BGl__initializa7ezd2Genvz12z67zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_restorezd2globalz12zc0zzast_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00();
	static obj_t BGl__bindzd2globalz12zc0zzast_envz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__setzd2genvz12zc0zzast_envz00(obj_t, obj_t);
	static obj_t BGl__globalzd2bucketzd2positionz00zzast_envz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_za2restoredza2z00zzast_envz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_restorezd2valuezd2typesz123459z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_restorezd2valuezd2typesz123461z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_restorezd2valuezd2typesz123463z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_restorezd2valuezd2typesz123465z12zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl__findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	static obj_t BGl_errorzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_envz00();
	static obj_t __cnst[7];


	   
		 
		DEFINE_STRING(BGl_string3736z00zzast_envz00,
		BgL_bgl_string3736za700za7za7a3746za7, "restore-value-types(sfun)", 25);
	      DEFINE_STRING(BGl_string3737z00zzast_envz00,
		BgL_bgl_string3737za700za7za7a3747za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3738z00zzast_envz00,
		BgL_bgl_string3738za700za7za7a3748za7, "restore-value-types", 19);
	      DEFINE_STRING(BGl_string3740z00zzast_envz00,
		BgL_bgl_string3740za700za7za7a3749za7, "ast_env", 7);
	      DEFINE_STRING(BGl_string3739z00zzast_envz00,
		BgL_bgl_string3739za700za7za7a3750za7, "Illegal non pair argument", 25);
	      DEFINE_STRING(BGl_string3741z00zzast_envz00,
		BgL_bgl_string3741za700za7za7a3751za7,
		"eval now read @ get-global/module foreign the-global-environment ", 65);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_forzd2eachzd2globalz12zd2envzc0zzast_envz00,
		BgL_bgl__forza7d2eachza7d2gl3752z00, va_generic_entry,
		BGl__forzd2eachzd2globalz12z12zzast_envz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2globalzd2envz00zzast_envz00,
		BgL_bgl__findza7d2globalza7d3753z00, va_generic_entry,
		BGl__findzd2globalzd2zzast_envz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_initializa7ezd2Genvz12zd2envzb5zzast_envz00,
		BgL_bgl__initializa7a7eza7d23754z00,
		BGl__initializa7ezd2Genvz12z67zzast_envz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2bucketzd2positionzd2envzd2zzast_envz00,
		BgL_bgl__globalza7d2bucket3755za7,
		BGl__globalzd2bucketzd2positionz00zzast_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_alreadyzd2restoredzf3zd2envzf3zzast_envz00,
		BgL_bgl__alreadyza7d2resto3756za7,
		BGl__alreadyzd2restoredzf3z21zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2genvzd2envz00zzast_envz00,
		BgL_bgl__getza7d2genvza7d2za7za73757z00, BGl__getzd2genvzd2zzast_envz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unbindzd2globalz12zd2envz12zzast_envz00,
		BgL_bgl__unbindza7d2global3758za7, BGl__unbindzd2globalz12zc0zzast_envz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2globalzf2modulezd2envzf2zzast_envz00,
		BgL_bgl__getza7d2globalza7f23759z00,
		BGl__getzd2globalzf2modulez20zzast_envz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2genvz12zd2envz12zzast_envz00,
		BgL_bgl__addza7d2genvza712za7c3760za7, BGl__addzd2genvz12zc0zzast_envz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_restorezd2valuezd2typesz123456zd2envzc0zzast_envz00,
		BgL_bgl__restoreza7d2value3761za7,
		BGl__restorezd2valuezd2typesz123456z12zzast_envz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_restorezd2globalz12zd2envz12zzast_envz00,
		BgL_bgl__restoreza7d2globa3762za7, BGl__restorezd2globalz12zc0zzast_envz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2genvz12zd2envz12zzast_envz00,
		BgL_bgl__setza7d2genvza712za7c3763za7, BGl__setzd2genvz12zc0zzast_envz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_additionalzd2heapzd2restorezd2globalsz12zd2envz12zzast_envz00,
		BgL_bgl__additionalza7d2he3764za7,
		BGl__additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2globalzf2modulezd2envzf2zzast_envz00,
		BgL_bgl__findza7d2globalza7f3765z00,
		BGl__findzd2globalzf2modulez20zzast_envz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3723z00zzast_envz00,
		BgL_bgl_za7c3anonymousza7a333766z00,
		BGl_zc3anonymousza33467ze3z83zzast_envz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3732z00zzast_envz00,
		BgL_bgl_restoreza7d2valueza73767z00,
		BGl_restorezd2valuezd2typesz123459z12zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3733z00zzast_envz00,
		BgL_bgl_restoreza7d2valueza73768z00,
		BGl_restorezd2valuezd2typesz123461z12zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3734z00zzast_envz00,
		BgL_bgl_restoreza7d2valueza73769z00,
		BGl_restorezd2valuezd2typesz123463z12zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3735z00zzast_envz00,
		BgL_bgl_restoreza7d2valueza73770z00,
		BGl_restorezd2valuezd2typesz123465z12zzast_envz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
		BgL_bgl__restoreza7d2value3771za7,
		BGl__restorezd2valuezd2typesz12z12zzast_envz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bindzd2globalz12zd2envz12zzast_envz00,
		BgL_bgl__bindza7d2globalza713772z00, BGl__bindzd2globalz12zc0zzast_envz00,
		0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string3724z00zzast_envz00,
		BgL_bgl_string3724za700za7za7a3773za7, "~a::~a", 6);
	      DEFINE_STRING(BGl_string3725z00zzast_envz00,
		BgL_bgl_string3725za700za7za7a3774za7, "Cannot find global variable", 27);
	      DEFINE_STRING(BGl_string3726z00zzast_envz00,
		BgL_bgl_string3726za700za7za7a3775za7, "Variable overridden by", 22);
	      DEFINE_STRING(BGl_string3727z00zzast_envz00,
		BgL_bgl_string3727za700za7za7a3776za7, "Duplicate definition", 20);
	      DEFINE_STRING(BGl_string3728z00zzast_envz00,
		BgL_bgl_string3728za700za7za7a3777za7, "eval", 4);
	      DEFINE_STRING(BGl_string3730z00zzast_envz00,
		BgL_bgl_string3730za700za7za7a3778za7, "Can't find global", 17);
	      DEFINE_STRING(BGl_string3729z00zzast_envz00,
		BgL_bgl_string3729za700za7za7a3779za7, "unbind-global!", 14);
	      DEFINE_STRING(BGl_string3731z00zzast_envz00,
		BgL_bgl_string3731za700za7za7a3780za7, "restore-value-types!", 20);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long
		BgL_checksumz00_1952, char *BgL_fromz00_1953)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_envz00))
				{
					BGl_requirezd2initializa7ationz75zzast_envz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_envz00();
					BGl_cnstzd2initzd2zzast_envz00();
					BGl_importedzd2moduleszd2initz00zzast_envz00();
					BGl_genericzd2initzd2zzast_envz00();
					BGl_methodzd2initzd2zzast_envz00();
					BGl_toplevelzd2initzd2zzast_envz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_env");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_env");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			{	/* Ast/venv.scm 14 */
				obj_t BgL_cportz00_1943;

				BgL_cportz00_1943 =
					bgl_open_input_string(BGl_string3741z00zzast_envz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1944;

					BgL_iz00_1944 = ((long) 6);
				BgL_loopz00_1945:
					if ((BgL_iz00_1944 == ((long) -1)))
						{	/* Ast/venv.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/venv.scm 14 */
							{	/* Ast/venv.scm 14 */
								obj_t BgL_arg3745z00_1947;

								{	/* Ast/venv.scm 14 */

									{	/* Ast/venv.scm 14 */
										obj_t BgL_locationz00_1949;

										BgL_locationz00_1949 = BBOOL(((bool_t) 0));
										{	/* Ast/venv.scm 14 */

											BgL_arg3745z00_1947 =
												BGl_readz00zz__readerz00(BgL_cportz00_1943,
												BgL_locationz00_1949);
										}
									}
								}
								{	/* Ast/venv.scm 14 */
									int BgL_auxz00_1976;

									BgL_auxz00_1976 = (int) (BgL_iz00_1944);
									CNST_TABLE_SET(BgL_auxz00_1976, BgL_arg3745z00_1947);
							}}
							{	/* Ast/venv.scm 14 */
								int BgL_auxz00_1950;

								BgL_auxz00_1950 = (int) ((BgL_iz00_1944 - ((long) 1)));
								{
									long BgL_iz00_1981;

									BgL_iz00_1981 = (long) (BgL_auxz00_1950);
									BgL_iz00_1944 = BgL_iz00_1981;
									goto BgL_loopz00_1945;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			BGl_za2Genvza2z00zzast_envz00 = CNST_TABLE_REF(((long) 0));
			BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00 = BNIL;
			BGl_za2restoredza2z00zzast_envz00 = BNIL;
			return BUNSPEC;
		}
	}



/* set-genv! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t BgL_genvz00_1)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 54 */
			return (BGl_za2Genvza2z00zzast_envz00 = BgL_genvz00_1, BUNSPEC);
		}
	}



/* _set-genv! */
	obj_t BGl__setzd2genvz12zc0zzast_envz00(obj_t BgL_envz00_1883,
		obj_t BgL_genvz00_1884)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 54 */
			return BGl_setzd2genvz12zc0zzast_envz00(BgL_genvz00_1884);
		}
	}



/* add-genv! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t BgL_genvz00_2)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 63 */
			BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_genvz00_2,
				BGl_proc3723z00zzast_envz00);
			return (BGl_za2restoredza2z00zzast_envz00 = BNIL, BUNSPEC);
		}
	}



/* _add-genv! */
	obj_t BGl__addzd2genvz12zc0zzast_envz00(obj_t BgL_envz00_1886,
		obj_t BgL_genvz00_1887)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 63 */
			return BGl_addzd2genvz12zc0zzast_envz00(BgL_genvz00_1887);
		}
	}



/* <anonymous:3467> */
	obj_t BGl_zc3anonymousza33467ze3z83zzast_envz00(obj_t BgL_envz00_1888,
		obj_t BgL_kz00_1889, obj_t BgL_bucketz00_1890)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 66 */
			{
				obj_t BgL_kz00_913;

				obj_t BgL_bucketz00_914;

				{	/* Ast/venv.scm 67 */
					bool_t BgL_auxz00_1987;

					BgL_kz00_913 = BgL_kz00_1889;
					BgL_bucketz00_914 = BgL_bucketz00_1890;
					{	/* Ast/venv.scm 67 */
						obj_t BgL_g3450z00_916;

						BgL_g3450z00_916 = CDR(BgL_bucketz00_914);
						{
							obj_t BgL_l3448z00_918;

							BgL_l3448z00_918 = BgL_g3450z00_916;
						BgL_zc3anonymousza33468ze3z83_919:
							if (PAIRP(BgL_l3448z00_918))
								{	/* Ast/venv.scm 87 */
									{	/* Ast/venv.scm 86 */
										obj_t BgL_newz00_921;

										BgL_newz00_921 = CAR(BgL_l3448z00_918);
										BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00 =
											MAKE_PAIR(BgL_newz00_921,
											BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00);
										{	/* Ast/venv.scm 69 */
											obj_t BgL_modulez00_922;

											{
												BgL_globalz00_bglt BgL_auxz00_1993;

												BgL_auxz00_1993 = (BgL_globalz00_bglt) (BgL_newz00_921);
												BgL_modulez00_922 =
													(((BgL_globalz00_bglt) CREF(BgL_auxz00_1993))->
													BgL_modulez00);
											}
											{	/* Ast/venv.scm 69 */
												obj_t BgL_idz00_923;

												{
													BgL_variablez00_bglt BgL_auxz00_1996;

													BgL_auxz00_1996 =
														(BgL_variablez00_bglt) (BgL_newz00_921);
													BgL_idz00_923 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1996))->
														BgL_idz00);
												}
												{	/* Ast/venv.scm 70 */
													obj_t BgL_bucketz00_924;

													BgL_bucketz00_924 =
														BGl_hashtablezd2getzd2zz__hashz00
														(BGl_za2Genvza2z00zzast_envz00, BgL_idz00_923);
													{	/* Ast/venv.scm 71 */

														if (PAIRP(BgL_bucketz00_924))
															{	/* Ast/venv.scm 75 */
																bool_t BgL_testz00_2002;

																if (
																	(BgL_modulez00_922 ==
																		BGl_za2moduleza2z00zzmodule_modulez00))
																	{	/* Ast/venv.scm 75 */
																		BgL_testz00_2002 = ((bool_t) 1);
																	}
																else
																	{	/* Ast/venv.scm 76 */
																		bool_t BgL_testz00_2005;

																		{	/* Ast/venv.scm 77 */
																			obj_t BgL_arg3478z00_934;

																			{	/* Ast/venv.scm 77 */
																				BgL_globalz00_bglt BgL_obj1676z00_1599;

																				{	/* Ast/venv.scm 77 */
																					obj_t BgL_pairz00_1598;

																					BgL_pairz00_1598 =
																						CDR(BgL_bucketz00_924);
																					BgL_obj1676z00_1599 =
																						(BgL_globalz00_bglt) (CAR
																						(BgL_pairz00_1598));
																				}
																				BgL_arg3478z00_934 =
																					(((BgL_globalz00_bglt)
																						CREF(BgL_obj1676z00_1599))->
																					BgL_modulez00);
																			}
																			BgL_testz00_2005 =
																				(BGl_za2moduleza2z00zzmodule_modulez00
																				== BgL_arg3478z00_934);
																		}
																		if (BgL_testz00_2005)
																			{	/* Ast/venv.scm 76 */
																				BgL_testz00_2002 = ((bool_t) 0);
																			}
																		else
																			{	/* Ast/venv.scm 76 */
																				BgL_testz00_2002 = ((bool_t) 1);
																			}
																	}
																if (BgL_testz00_2002)
																	{	/* Ast/venv.scm 83 */
																		obj_t BgL_newzd2bucketzd2_927;

																		BgL_newzd2bucketzd2_927 =
																			MAKE_PAIR(BgL_newz00_921,
																			CDR(BgL_bucketz00_924));
																		SET_CDR(BgL_bucketz00_924,
																			BgL_newzd2bucketzd2_927);
																	}
																else
																	{	/* Ast/venv.scm 86 */
																		obj_t BgL_arg3473z00_929;

																		obj_t BgL_arg3474z00_930;

																		BgL_arg3473z00_929 = CDR(BgL_bucketz00_924);
																		BgL_arg3474z00_930 =
																			MAKE_PAIR(BgL_newz00_921,
																			CDR(CDR(BgL_bucketz00_924)));
																		SET_CDR(BgL_arg3473z00_929,
																			BgL_arg3474z00_930);
																	}
															}
														else
															{	/* Ast/venv.scm 74 */
																obj_t BgL_arg3480z00_936;

																{	/* Ast/venv.scm 74 */
																	obj_t BgL_list3481z00_937;

																	{	/* Ast/venv.scm 74 */
																		obj_t BgL_arg3482z00_938;

																		BgL_arg3482z00_938 =
																			MAKE_PAIR(BgL_newz00_921, BNIL);
																		BgL_list3481z00_937 =
																			MAKE_PAIR(BgL_idz00_923,
																			BgL_arg3482z00_938);
																	}
																	BgL_arg3480z00_936 = BgL_list3481z00_937;
																}
																BGl_hashtablezd2putz12zc0zz__hashz00
																	(BGl_za2Genvza2z00zzast_envz00, BgL_idz00_923,
																	BgL_arg3480z00_936);
															}
													}
												}
											}
										}
									}
									{
										obj_t BgL_l3448z00_2022;

										BgL_l3448z00_2022 = CDR(BgL_l3448z00_918);
										BgL_l3448z00_918 = BgL_l3448z00_2022;
										goto BgL_zc3anonymousza33468ze3z83_919;
									}
								}
							else
								{	/* Ast/venv.scm 87 */
									BgL_auxz00_1987 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_1987);
				}
			}
		}
	}



/* additional-heap-restore-globals! */
	BGL_EXPORTED_DEF obj_t
		BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 104 */
			{
				obj_t BgL_l3451z00_943;

				BgL_l3451z00_943 = BGl_za2delayedzd2restoredzd2globalza2z00zzast_envz00;
			BgL_zc3anonymousza33484ze3z83_944:
				if (PAIRP(BgL_l3451z00_943))
					{	/* Ast/venv.scm 105 */
						BGl_restorezd2globalz12zc0zzast_envz00(CAR(BgL_l3451z00_943));
						{
							obj_t BgL_l3451z00_2029;

							BgL_l3451z00_2029 = CDR(BgL_l3451z00_943);
							BgL_l3451z00_943 = BgL_l3451z00_2029;
							goto BgL_zc3anonymousza33484ze3z83_944;
						}
					}
				else
					{	/* Ast/venv.scm 105 */
						((bool_t) 1);
					}
			}
			return BTRUE;
		}
	}



/* _additional-heap-restore-globals! */
	obj_t BGl__additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00(obj_t
		BgL_envz00_1891)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 104 */
			return BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00();
		}
	}



/* restore-global! */
	BGL_EXPORTED_DEF obj_t BGl_restorezd2globalz12zc0zzast_envz00(obj_t
		BgL_newz00_4)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 111 */
			BGl_za2restoredza2z00zzast_envz00 =
				MAKE_PAIR(BgL_newz00_4, BGl_za2restoredza2z00zzast_envz00);
			{	/* Ast/venv.scm 114 */
				BgL_typez00_bglt BgL_typez00_950;

				{
					BgL_variablez00_bglt BgL_auxz00_2033;

					BgL_auxz00_2033 = (BgL_variablez00_bglt) (BgL_newz00_4);
					BgL_typez00_950 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2033))->BgL_typez00);
				}
				{	/* Ast/venv.scm 115 */
					BgL_valuez00_bglt BgL_valuez00_951;

					{
						BgL_variablez00_bglt BgL_auxz00_2036;

						BgL_auxz00_2036 = (BgL_variablez00_bglt) (BgL_newz00_4);
						BgL_valuez00_951 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2036))->BgL_valuez00);
					}
					{	/* Ast/venv.scm 116 */
						obj_t BgL_typezd2idzd2_952;

						BgL_typezd2idzd2_952 =
							(((BgL_typez00_bglt) CREF(BgL_typez00_950))->BgL_idz00);
						{	/* Ast/venv.scm 117 */

							{
								BgL_typez00_bglt BgL_auxz00_2042;

								BgL_variablez00_bglt BgL_auxz00_2040;

								BgL_auxz00_2042 =
									BGl_findzd2typezd2zztype_envz00(BgL_typezd2idzd2_952);
								BgL_auxz00_2040 = (BgL_variablez00_bglt) (BgL_newz00_4);
								((((BgL_variablez00_bglt) CREF(BgL_auxz00_2040))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_2042), BUNSPEC);
							}
							{	/* Ast/venv.scm 121 */
								obj_t BgL_method3457z00_1624;

								{	/* Ast/venv.scm 121 */
									BgL_objectz00_bglt BgL_objz00_1625;

									BgL_objz00_1625 = (BgL_objectz00_bglt) (BgL_valuez00_951);
									{	/* Ast/venv.scm 121 */
										long BgL_objzd2classzd2numz00_1626;

										BgL_objzd2classzd2numz00_1626 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1625);
										{	/* Ast/venv.scm 121 */
											obj_t BgL_arg2643z00_1627;

											BgL_arg2643z00_1627 =
												PROCEDURE_REF
												(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
												(int) (((long) 1)));
											{	/* Ast/venv.scm 121 */
												obj_t BgL_arrayz00_1629;

												int BgL_offsetz00_1630;

												BgL_arrayz00_1629 = BgL_arg2643z00_1627;
												BgL_offsetz00_1630 =
													(int) (BgL_objzd2classzd2numz00_1626);
												{	/* Ast/venv.scm 121 */
													long BgL_offsetz00_1631;

													BgL_offsetz00_1631 =
														((long) (BgL_offsetz00_1630) - OBJECT_TYPE);
													{	/* Ast/venv.scm 121 */
														long BgL_modz00_1632;

														{	/* Ast/venv.scm 121 */
															int BgL_arg2645z00_1633;

															BgL_arg2645z00_1633 = (int) (((long) 16));
															{	/* Ast/venv.scm 121 */
																long BgL_auxz00_2053;

																BgL_auxz00_2053 = (long) (BgL_arg2645z00_1633);
																BgL_modz00_1632 =
																	(BgL_offsetz00_1631 / BgL_auxz00_2053);
														}}
														{	/* Ast/venv.scm 121 */
															long BgL_restz00_1634;

															{	/* Ast/venv.scm 121 */
																int BgL_arg2644z00_1635;

																BgL_arg2644z00_1635 = (int) (((long) 16));
																{	/* Ast/venv.scm 121 */
																	long BgL_auxz00_2057;

																	BgL_auxz00_2057 =
																		(long) (BgL_arg2644z00_1635);
																	BgL_restz00_1634 =
																		(BgL_offsetz00_1631 % BgL_auxz00_2057);
															}}
															{	/* Ast/venv.scm 121 */

																BgL_method3457z00_1624 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1629,
																		(int) (BgL_modz00_1632)),
																	(int) (BgL_restz00_1634));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3457z00_1624) (BgL_method3457z00_1624,
									(obj_t) (BgL_valuez00_951), BEOA);
							}
							{	/* Ast/venv.scm 123 */
								bool_t BgL_testz00_2067;

								{	/* Ast/venv.scm 123 */
									bool_t BgL_testz00_2068;

									{	/* Ast/venv.scm 123 */
										obj_t BgL_arg3498z00_963;

										BgL_arg3498z00_963 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										{
											BgL_backendz00_bglt BgL_auxz00_2070;

											BgL_auxz00_2070 =
												(BgL_backendz00_bglt) (BgL_arg3498z00_963);
											BgL_testz00_2068 =
												(((BgL_backendz00_bglt) CREF(BgL_auxz00_2070))->
												BgL_qualifiedzd2typeszd2);
									}}
									if (BgL_testz00_2068)
										{	/* Ast/venv.scm 124 */
											bool_t BgL_testz00_2073;

											{	/* Ast/venv.scm 124 */
												obj_t BgL_auxz00_2074;

												{
													BgL_globalz00_bglt BgL_auxz00_2075;

													BgL_auxz00_2075 = (BgL_globalz00_bglt) (BgL_newz00_4);
													BgL_auxz00_2074 =
														(((BgL_globalz00_bglt) CREF(BgL_auxz00_2075))->
														BgL_modulez00);
												}
												BgL_testz00_2073 =
													(BgL_auxz00_2074 == CNST_TABLE_REF(((long) 1)));
											}
											if (BgL_testz00_2073)
												{	/* Ast/venv.scm 124 */
													BgL_testz00_2067 = ((bool_t) 0);
												}
											else
												{	/* Ast/venv.scm 124 */
													BgL_testz00_2067 = ((bool_t) 1);
												}
										}
									else
										{	/* Ast/venv.scm 123 */
											BgL_testz00_2067 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_2067)
									{	/* Ast/venv.scm 125 */
										obj_t BgL_arg3490z00_955;

										obj_t BgL_arg3491z00_956;

										obj_t BgL_arg3492z00_957;

										{
											BgL_globalz00_bglt BgL_auxz00_2080;

											BgL_auxz00_2080 = (BgL_globalz00_bglt) (BgL_newz00_4);
											BgL_arg3490z00_955 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_2080))->
												BgL_modulez00);
										}
										{
											BgL_globalz00_bglt BgL_auxz00_2083;

											BgL_auxz00_2083 = (BgL_globalz00_bglt) (BgL_newz00_4);
											BgL_arg3491z00_956 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_2083))->
												BgL_jvmzd2typezd2namez00);
										}
										BgL_arg3492z00_957 =
											BGl_shapez00zztools_shapez00(BgL_newz00_4);
										{	/* Ast/venv.scm 125 */
											obj_t BgL_list3493z00_958;

											BgL_list3493z00_958 = MAKE_PAIR(BgL_arg3492z00_957, BNIL);
											return
												BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
												(BgL_arg3490z00_955, BgL_arg3491z00_956,
												BgL_list3493z00_958);
										}
									}
								else
									{	/* Ast/venv.scm 123 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}
	}



/* _restore-global! */
	obj_t BGl__restorezd2globalz12zc0zzast_envz00(obj_t BgL_envz00_1892,
		obj_t BgL_newz00_1893)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 111 */
			return BGl_restorezd2globalz12zc0zzast_envz00(BgL_newz00_1893);
		}
	}



/* already-restored? */
	BGL_EXPORTED_DEF obj_t BGl_alreadyzd2restoredzf3z21zzast_envz00(obj_t
		BgL_funz00_6)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 146 */
			return
				BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_funz00_6,
				BGl_za2restoredza2z00zzast_envz00);
		}
	}



/* _already-restored? */
	obj_t BGl__alreadyzd2restoredzf3z21zzast_envz00(obj_t BgL_envz00_1896,
		obj_t BgL_funz00_1897)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 146 */
			return BGl_alreadyzd2restoredzf3z21zzast_envz00(BgL_funz00_1897);
		}
	}



/* get-genv */
	BGL_EXPORTED_DEF obj_t BGl_getzd2genvzd2zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 220 */
			return BGl_za2Genvza2z00zzast_envz00;
		}
	}



/* _get-genv */
	obj_t BGl__getzd2genvzd2zzast_envz00(obj_t BgL_envz00_1898)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 220 */
			return BGl_za2Genvza2z00zzast_envz00;
		}
	}



/* initialize-Genv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 226 */
			return (BGl_za2Genvza2z00zzast_envz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}
	}



/* _initialize-Genv! */
	obj_t BGl__initializa7ezd2Genvz12z67zzast_envz00(obj_t BgL_envz00_1899)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 226 */
			return BGl_initializa7ezd2Genvz12z67zzast_envz00();
		}
	}



/* find-global */
	BGL_EXPORTED_DEF obj_t BGl_findzd2globalzd2zzast_envz00(obj_t BgL_idz00_13,
		obj_t BgL_modulez00_14)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 232 */
			{	/* Ast/venv.scm 234 */
				obj_t BgL_bucketz00_965;

				obj_t BgL_modulez00_966;

				BgL_bucketz00_965 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
					BgL_idz00_13);
				if (NULLP(BgL_modulez00_14))
					{	/* Ast/venv.scm 235 */
						BgL_modulez00_966 = BNIL;
					}
				else
					{	/* Ast/venv.scm 235 */
						BgL_modulez00_966 = CAR(BgL_modulez00_14);
					}
				if (PAIRP(BgL_bucketz00_965))
					{	/* Ast/venv.scm 237 */
						if (NULLP(CDR(BgL_bucketz00_965)))
							{	/* Ast/venv.scm 239 */
								return BFALSE;
							}
						else
							{	/* Ast/venv.scm 239 */
								if (NULLP(BgL_modulez00_966))
									{	/* Ast/venv.scm 241 */
										return CAR(CDR(BgL_bucketz00_965));
									}
								else
									{
										obj_t BgL_globalsz00_972;

										BgL_globalsz00_972 = CDR(BgL_bucketz00_965);
									BgL_zc3anonymousza33503ze3z83_973:
										if (NULLP(BgL_globalsz00_972))
											{	/* Ast/venv.scm 246 */
												return BFALSE;
											}
										else
											{	/* Ast/venv.scm 248 */
												bool_t BgL_testz00_2109;

												{	/* Ast/venv.scm 248 */
													obj_t BgL_auxz00_2110;

													{	/* Ast/venv.scm 248 */
														BgL_globalz00_bglt BgL_obj1676z00_1666;

														{	/* Ast/venv.scm 248 */
															obj_t BgL_pairz00_1665;

															BgL_pairz00_1665 = BgL_globalsz00_972;
															BgL_obj1676z00_1666 =
																(BgL_globalz00_bglt) (CAR(BgL_pairz00_1665));
														}
														BgL_auxz00_2110 =
															(((BgL_globalz00_bglt)
																CREF(BgL_obj1676z00_1666))->BgL_modulez00);
													}
													BgL_testz00_2109 =
														(BgL_auxz00_2110 == BgL_modulez00_966);
												}
												if (BgL_testz00_2109)
													{	/* Ast/venv.scm 248 */
														return CAR(BgL_globalsz00_972);
													}
												else
													{
														obj_t BgL_globalsz00_2116;

														BgL_globalsz00_2116 = CDR(BgL_globalsz00_972);
														BgL_globalsz00_972 = BgL_globalsz00_2116;
														goto BgL_zc3anonymousza33503ze3z83_973;
													}
											}
									}
							}
					}
				else
					{	/* Ast/venv.scm 237 */
						return BFALSE;
					}
			}
		}
	}



/* _find-global */
	obj_t BGl__findzd2globalzd2zzast_envz00(obj_t BgL_envz00_1900,
		obj_t BgL_idz00_1901, obj_t BgL_modulez00_1902)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 232 */
			return
				BGl_findzd2globalzd2zzast_envz00(BgL_idz00_1901, BgL_modulez00_1902);
		}
	}



/* find-global/module */
	BGL_EXPORTED_DEF obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t
		BgL_idz00_15, obj_t BgL_modulez00_16)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 256 */
			{	/* Ast/venv.scm 257 */
				obj_t BgL_bucketz00_982;

				BgL_bucketz00_982 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
					BgL_idz00_15);
				if (PAIRP(BgL_bucketz00_982))
					{	/* Ast/venv.scm 259 */
						if (NULLP(CDR(BgL_bucketz00_982)))
							{	/* Ast/venv.scm 261 */
								return BFALSE;
							}
						else
							{
								obj_t BgL_globalsz00_988;

								BgL_globalsz00_988 = CDR(BgL_bucketz00_982);
							BgL_zc3anonymousza33514ze3z83_989:
								if (NULLP(BgL_globalsz00_988))
									{	/* Ast/venv.scm 268 */
										return BFALSE;
									}
								else
									{	/* Ast/venv.scm 270 */
										bool_t BgL_testz00_2128;

										{	/* Ast/venv.scm 270 */
											obj_t BgL_auxz00_2129;

											{	/* Ast/venv.scm 270 */
												BgL_globalz00_bglt BgL_obj1676z00_1680;

												{	/* Ast/venv.scm 270 */
													obj_t BgL_pairz00_1679;

													BgL_pairz00_1679 = BgL_globalsz00_988;
													BgL_obj1676z00_1680 =
														(BgL_globalz00_bglt) (CAR(BgL_pairz00_1679));
												}
												BgL_auxz00_2129 =
													(((BgL_globalz00_bglt) CREF(BgL_obj1676z00_1680))->
													BgL_modulez00);
											}
											BgL_testz00_2128 = (BgL_auxz00_2129 == BgL_modulez00_16);
										}
										if (BgL_testz00_2128)
											{	/* Ast/venv.scm 270 */
												return CAR(BgL_globalsz00_988);
											}
										else
											{
												obj_t BgL_globalsz00_2135;

												BgL_globalsz00_2135 = CDR(BgL_globalsz00_988);
												BgL_globalsz00_988 = BgL_globalsz00_2135;
												goto BgL_zc3anonymousza33514ze3z83_989;
											}
									}
							}
					}
				else
					{	/* Ast/venv.scm 259 */
						return BFALSE;
					}
			}
		}
	}



/* _find-global/module */
	obj_t BGl__findzd2globalzf2modulez20zzast_envz00(obj_t BgL_envz00_1903,
		obj_t BgL_idz00_1904, obj_t BgL_modulez00_1905)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 256 */
			return
				BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_1904,
				BgL_modulez00_1905);
		}
	}



/* get-global/module */
	BGL_EXPORTED_DEF obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t
		BgL_idz00_17, obj_t BgL_modulez00_18)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 278 */
			{	/* Ast/venv.scm 279 */
				obj_t BgL_globalz00_997;

				BgL_globalz00_997 =
					BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_17,
					BgL_modulez00_18);
				{	/* Ast/venv.scm 280 */
					bool_t BgL_testz00_2140;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_997,
							BGl_globalz00zzast_varz00))
						{	/* Ast/venv.scm 280 */
							BgL_testz00_2140 = ((bool_t) 0);
						}
					else
						{	/* Ast/venv.scm 280 */
							if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
								{	/* Ast/venv.scm 280 */
									BgL_testz00_2140 = ((bool_t) 0);
								}
							else
								{	/* Ast/venv.scm 280 */
									BgL_testz00_2140 = ((bool_t) 1);
								}
						}
					if (BgL_testz00_2140)
						{	/* Ast/venv.scm 281 */
							obj_t BgL_arg3522z00_999;

							obj_t BgL_arg3524z00_1001;

							BgL_arg3522z00_999 = CNST_TABLE_REF(((long) 2));
							{	/* Ast/venv.scm 283 */
								obj_t BgL_list3525z00_1002;

								{	/* Ast/venv.scm 283 */
									obj_t BgL_arg3526z00_1003;

									BgL_arg3526z00_1003 = MAKE_PAIR(BgL_modulez00_18, BNIL);
									BgL_list3525z00_1002 =
										MAKE_PAIR(BgL_idz00_17, BgL_arg3526z00_1003);
								}
								BgL_arg3524z00_1001 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string3724z00zzast_envz00, BgL_list3525z00_1002);
							}
							BGl_internalzd2errorzd2zztools_errorz00(BgL_arg3522z00_999,
								BGl_string3725z00zzast_envz00, BgL_arg3524z00_1001);
						}
					else
						{	/* Ast/venv.scm 280 */
							BFALSE;
						}
				}
				return BgL_globalz00_997;
			}
		}
	}



/* _get-global/module */
	obj_t BGl__getzd2globalzf2modulez20zzast_envz00(obj_t BgL_envz00_1906,
		obj_t BgL_idz00_1907, obj_t BgL_modulez00_1908)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 278 */
			return
				BGl_getzd2globalzf2modulez20zzast_envz00(BgL_idz00_1907,
				BgL_modulez00_1908);
		}
	}



/* warning-override-global! */
	obj_t BGl_warningzd2overridezd2globalz12z12zzast_envz00(obj_t BgL_nz00_19,
		obj_t BgL_oz00_20, obj_t BgL_msgz00_21)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 289 */
			{	/* Ast/venv.scm 290 */
				bool_t BgL_testz00_2151;

				{	/* Ast/venv.scm 290 */
					bool_t BgL_testz00_2152;

					{	/* Ast/venv.scm 290 */
						int BgL_arg3547z00_1028;

						BgL_arg3547z00_1028 = BGl_bigloozd2warningzd2zz__paramz00();
						BgL_testz00_2152 = ((long) (BgL_arg3547z00_1028) > ((long) 0));
					}
					if (BgL_testz00_2152)
						{	/* Ast/venv.scm 290 */
							BgL_testz00_2151 =
								CBOOL
								(BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00);
						}
					else
						{	/* Ast/venv.scm 290 */
							BgL_testz00_2151 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_2151)
					{	/* Ast/venv.scm 292 */
						obj_t BgL_locz00_1007;

						obj_t BgL_oldz00_1008;

						obj_t BgL_newz00_1009;

						obj_t BgL_msgz00_1010;

						{	/* Ast/venv.scm 292 */
							obj_t BgL_arg3529z00_1011;

							{
								BgL_globalz00_bglt BgL_auxz00_2157;

								BgL_auxz00_2157 = (BgL_globalz00_bglt) (BgL_oz00_20);
								BgL_arg3529z00_1011 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_2157))->BgL_srcz00);
							}
							BgL_locz00_1007 =
								BGl_findzd2locationzd2zztools_locationz00(BgL_arg3529z00_1011);
						}
						{	/* Ast/venv.scm 293 */
							obj_t BgL_arg3530z00_1012;

							obj_t BgL_arg3531z00_1013;

							BgL_arg3530z00_1012 = CNST_TABLE_REF(((long) 3));
							{	/* Ast/venv.scm 293 */
								obj_t BgL_arg3532z00_1014;

								obj_t BgL_arg3533z00_1015;

								{
									BgL_variablez00_bglt BgL_auxz00_2162;

									BgL_auxz00_2162 = (BgL_variablez00_bglt) (BgL_oz00_20);
									BgL_arg3532z00_1014 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2162))->BgL_idz00);
								}
								{
									BgL_globalz00_bglt BgL_auxz00_2165;

									BgL_auxz00_2165 = (BgL_globalz00_bglt) (BgL_oz00_20);
									BgL_arg3533z00_1015 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_2165))->
										BgL_modulez00);
								}
								{	/* Ast/venv.scm 293 */
									obj_t BgL_list3536z00_1017;

									{	/* Ast/venv.scm 293 */
										obj_t BgL_arg3537z00_1018;

										BgL_arg3537z00_1018 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3536z00_1017 =
											MAKE_PAIR(BgL_arg3533z00_1015, BgL_arg3537z00_1018);
									}
									BgL_arg3531z00_1013 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3532z00_1014, BgL_list3536z00_1017);
							}}
							BgL_oldz00_1008 =
								MAKE_PAIR(BgL_arg3530z00_1012, BgL_arg3531z00_1013);
						}
						{	/* Ast/venv.scm 294 */
							obj_t BgL_arg3538z00_1019;

							obj_t BgL_arg3539z00_1020;

							BgL_arg3538z00_1019 = CNST_TABLE_REF(((long) 3));
							{	/* Ast/venv.scm 294 */
								obj_t BgL_arg3540z00_1021;

								obj_t BgL_arg3541z00_1022;

								{
									BgL_variablez00_bglt BgL_auxz00_2173;

									BgL_auxz00_2173 = (BgL_variablez00_bglt) (BgL_nz00_19);
									BgL_arg3540z00_1021 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2173))->BgL_idz00);
								}
								{
									BgL_globalz00_bglt BgL_auxz00_2176;

									BgL_auxz00_2176 = (BgL_globalz00_bglt) (BgL_nz00_19);
									BgL_arg3541z00_1022 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_2176))->
										BgL_modulez00);
								}
								{	/* Ast/venv.scm 294 */
									obj_t BgL_list3543z00_1024;

									{	/* Ast/venv.scm 294 */
										obj_t BgL_arg3544z00_1025;

										BgL_arg3544z00_1025 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3543z00_1024 =
											MAKE_PAIR(BgL_arg3541z00_1022, BgL_arg3544z00_1025);
									}
									BgL_arg3539z00_1020 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3540z00_1021, BgL_list3543z00_1024);
							}}
							BgL_newz00_1009 =
								MAKE_PAIR(BgL_arg3538z00_1019, BgL_arg3539z00_1020);
						}
						if (PAIRP(BgL_msgz00_21))
							{	/* Ast/venv.scm 295 */
								BgL_msgz00_1010 = CAR(BgL_msgz00_21);
							}
						else
							{	/* Ast/venv.scm 295 */
								BgL_msgz00_1010 = BGl_string3726z00zzast_envz00;
							}
						if (CBOOL(BgL_locz00_1007))
							{	/* Ast/venv.scm 296 */
								return
									BGl_userzd2warningzf2locationz20zztools_errorz00
									(BgL_locz00_1007, BgL_oldz00_1008, BgL_msgz00_1010,
									BgL_newz00_1009);
							}
						else
							{	/* Ast/venv.scm 296 */
								return
									BGl_userzd2warningzd2zztools_errorz00(BgL_oldz00_1008,
									BgL_msgz00_1010, BgL_newz00_1009);
							}
					}
				else
					{	/* Ast/venv.scm 290 */
						return BFALSE;
					}
			}
		}
	}



/* error-rebind-global! */
	obj_t BGl_errorzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt
		BgL_oz00_22, obj_t BgL_srcz00_23)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 303 */
			{	/* Ast/venv.scm 305 */
				obj_t BgL_locz00_1031;

				BgL_locz00_1031 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_23);
				if (CBOOL(BgL_locz00_1031))
					{	/* Ast/venv.scm 308 */
						obj_t BgL_arg3549z00_1033;

						obj_t BgL_arg3550z00_1034;

						BgL_arg3549z00_1033 =
							(((BgL_globalz00_bglt) CREF(BgL_oz00_22))->BgL_modulez00);
						BgL_arg3550z00_1034 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_oz00_22));
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_1031,
							BgL_arg3549z00_1033, BGl_string3727z00zzast_envz00,
							BgL_arg3550z00_1034, BNIL);
					}
				else
					{	/* Ast/venv.scm 309 */
						obj_t BgL_arg3552z00_1036;

						obj_t BgL_arg3553z00_1037;

						BgL_arg3552z00_1036 =
							(((BgL_globalz00_bglt) CREF(BgL_oz00_22))->BgL_modulez00);
						BgL_arg3553z00_1037 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_oz00_22));
						return
							BGl_userzd2errorzd2zztools_errorz00(BgL_arg3552z00_1036,
							BGl_string3727z00zzast_envz00, BgL_arg3553z00_1037, BNIL);
					}
			}
		}
	}



/* warning-rebind-global! */
	obj_t BGl_warningzd2rebindzd2globalz12z12zzast_envz00(BgL_globalz00_bglt
		BgL_oz00_24, obj_t BgL_srcz00_25)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 314 */
			{	/* Ast/venv.scm 316 */
				obj_t BgL_locz00_1040;

				BgL_locz00_1040 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_25);
				if (CBOOL(BgL_locz00_1040))
					{	/* Ast/venv.scm 319 */
						obj_t BgL_arg3555z00_1042;

						obj_t BgL_arg3556z00_1043;

						BgL_arg3555z00_1042 =
							(((BgL_globalz00_bglt) CREF(BgL_oz00_24))->BgL_modulez00);
						BgL_arg3556z00_1043 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_oz00_24));
						return
							BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_1040,
							BgL_arg3555z00_1042, BGl_string3727z00zzast_envz00,
							BgL_arg3556z00_1043);
					}
				else
					{	/* Ast/venv.scm 320 */
						obj_t BgL_arg3557z00_1044;

						obj_t BgL_arg3558z00_1045;

						BgL_arg3557z00_1044 =
							(((BgL_globalz00_bglt) CREF(BgL_oz00_24))->BgL_modulez00);
						BgL_arg3558z00_1045 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_oz00_24));
						return
							BGl_userzd2warningzd2zztools_errorz00(BgL_arg3557z00_1044,
							BGl_string3727z00zzast_envz00, BgL_arg3558z00_1045);
					}
			}
		}
	}



/* bind-global! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_bindzd2globalz12zc0zzast_envz00(obj_t
		BgL_idz00_26, obj_t BgL_modulez00_27, BgL_valuez00_bglt BgL_valuez00_28,
		obj_t BgL_importz00_29, obj_t BgL_srcz00_30)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 337 */
			{	/* Ast/venv.scm 340 */
				obj_t BgL_oldz00_1046;

				{	/* Ast/venv.scm 340 */
					obj_t BgL_list3590z00_1083;

					BgL_list3590z00_1083 = MAKE_PAIR(BgL_modulez00_27, BNIL);
					BgL_oldz00_1046 =
						BGl_findzd2globalzd2zzast_envz00(BgL_idz00_26,
						BgL_list3590z00_1083);
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_oldz00_1046,
						BGl_globalz00zzast_varz00))
					{	/* Ast/venv.scm 341 */
						if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
							{	/* Ast/venv.scm 343 */
								return (BgL_globalz00_bglt) (BgL_oldz00_1046);
							}
						else
							{	/* Ast/venv.scm 345 */
								bool_t BgL_testz00_2219;

								{	/* Ast/venv.scm 345 */
									obj_t BgL_auxz00_2220;

									{
										BgL_globalz00_bglt BgL_auxz00_2221;

										BgL_auxz00_2221 = (BgL_globalz00_bglt) (BgL_oldz00_1046);
										BgL_auxz00_2220 =
											(((BgL_globalz00_bglt) CREF(BgL_auxz00_2221))->
											BgL_modulez00);
									}
									BgL_testz00_2219 = (BgL_modulez00_27 == BgL_auxz00_2220);
								}
								if (BgL_testz00_2219)
									{	/* Ast/venv.scm 345 */
										BGl_warningzd2rebindzd2globalz12z12zzast_envz00(
											(BgL_globalz00_bglt) (BgL_oldz00_1046), BgL_srcz00_30);
										return (BgL_globalz00_bglt) (BgL_oldz00_1046);
									}
								else
									{	/* Ast/venv.scm 345 */
										return
											(BgL_globalz00_bglt)
											(BGl_errorzd2rebindzd2globalz12z12zzast_envz00(
												(BgL_globalz00_bglt) (BgL_oldz00_1046), BgL_srcz00_30));
									}
							}
					}
				else
					{	/* Ast/venv.scm 350 */
						obj_t BgL_bucketz00_1050;

						BgL_globalz00_bglt BgL_newz00_1051;

						BgL_bucketz00_1050 =
							BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
							BgL_idz00_26);
						{	/* Ast/var.scm 32 */
							obj_t BgL_arg3584z00_1077;

							obj_t BgL_arg3585z00_1078;

							obj_t BgL_arg3588z00_1081;

							BgL_arg3584z00_1077 = CNST_TABLE_REF(((long) 4));
							BgL_arg3585z00_1078 = CNST_TABLE_REF(((long) 5));
							if ((BgL_importz00_29 == CNST_TABLE_REF(((long) 6))))
								{	/* Ast/venv.scm 353 */
									BgL_arg3588z00_1081 = BGl_string3728z00zzast_envz00;
								}
							else
								{	/* Ast/venv.scm 353 */
									BgL_arg3588z00_1081 =
										BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
										(BgL_modulez00_27);
								}
							BgL_newz00_1051 =
								BGl_makezd2globalzd2zzast_varz00(BgL_idz00_26, BFALSE,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
								BgL_valuez00_28, BgL_arg3584z00_1077, BUNSPEC,
								BgL_arg3585z00_1078, ((long) 0), BgL_modulez00_27,
								BgL_importz00_29, ((bool_t) 1), BFALSE, ((bool_t) 1), BNIL,
								BgL_srcz00_30, BgL_arg3588z00_1081);
						}
						{	/* Ast/venv.scm 361 */
							bool_t BgL_testz00_2240;

							if (PAIRP(BgL_bucketz00_1050))
								{	/* Ast/venv.scm 361 */
									BgL_testz00_2240 = NULLP(CDR(BgL_bucketz00_1050));
								}
							else
								{	/* Ast/venv.scm 361 */
									BgL_testz00_2240 = ((bool_t) 1);
								}
							if (BgL_testz00_2240)
								{	/* Ast/venv.scm 361 */
									{	/* Ast/venv.scm 363 */
										obj_t BgL_arg3563z00_1053;

										{	/* Ast/venv.scm 363 */
											obj_t BgL_list3564z00_1054;

											{	/* Ast/venv.scm 363 */
												obj_t BgL_arg3565z00_1055;

												BgL_arg3565z00_1055 =
													MAKE_PAIR((obj_t) (BgL_newz00_1051), BNIL);
												BgL_list3564z00_1054 =
													MAKE_PAIR(BgL_idz00_26, BgL_arg3565z00_1055);
											}
											BgL_arg3563z00_1053 = BgL_list3564z00_1054;
										}
										BGl_hashtablezd2putz12zc0zz__hashz00
											(BGl_za2Genvza2z00zzast_envz00, BgL_idz00_26,
											BgL_arg3563z00_1053);
									}
									return BgL_newz00_1051;
								}
							else
								{	/* Ast/venv.scm 366 */
									obj_t BgL_oldza2za2_1056;

									BgL_oldza2za2_1056 = CDR(BgL_bucketz00_1050);
									{	/* Ast/venv.scm 366 */
										obj_t BgL_midz00_1057;

										{	/* Ast/venv.scm 368 */
											obj_t BgL_arg3580z00_1073;

											{	/* Ast/venv.scm 368 */
												BgL_globalz00_bglt BgL_obj1676z00_1706;

												{	/* Ast/venv.scm 368 */
													obj_t BgL_pairz00_1705;

													BgL_pairz00_1705 = BgL_oldza2za2_1056;
													BgL_obj1676z00_1706 =
														(BgL_globalz00_bglt) (CAR(BgL_pairz00_1705));
												}
												BgL_arg3580z00_1073 =
													(((BgL_globalz00_bglt) CREF(BgL_obj1676z00_1706))->
													BgL_modulez00);
											}
											BgL_midz00_1057 =
												BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
												(BgL_arg3580z00_1073);
										}
										{	/* Ast/venv.scm 367 */

											{	/* Ast/venv.scm 370 */
												bool_t BgL_testz00_2254;

												{	/* Ast/venv.scm 370 */
													obj_t BgL_arg3578z00_1071;

													{	/* Ast/venv.scm 370 */
														BgL_globalz00_bglt BgL_obj1676z00_1708;

														{	/* Ast/venv.scm 370 */
															obj_t BgL_pairz00_1707;

															BgL_pairz00_1707 = BgL_oldza2za2_1056;
															BgL_obj1676z00_1708 =
																(BgL_globalz00_bglt) (CAR(BgL_pairz00_1707));
														}
														BgL_arg3578z00_1071 =
															(((BgL_globalz00_bglt)
																CREF(BgL_obj1676z00_1708))->BgL_modulez00);
													}
													BgL_testz00_2254 =
														(BgL_arg3578z00_1071 ==
														BGl_za2moduleza2z00zzmodule_modulez00);
												}
												if (BgL_testz00_2254)
													{	/* Ast/venv.scm 370 */
														{	/* Ast/venv.scm 372 */
															bool_t BgL_testz00_2259;

															if ((BgL_idz00_26 == BgL_midz00_1057))
																{	/* Ast/venv.scm 372 */
																	BgL_testz00_2259 = ((bool_t) 0);
																}
															else
																{	/* Ast/venv.scm 372 */
																	if (CBOOL
																		(BGl_za2libzd2modeza2zd2zzengine_paramz00))
																		{	/* Ast/venv.scm 372 */
																			BgL_testz00_2259 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/venv.scm 372 */
																			BgL_testz00_2259 = ((bool_t) 1);
																		}
																}
															if (BgL_testz00_2259)
																{	/* Ast/venv.scm 372 */
																	BGl_warningzd2overridezd2globalz12z12zzast_envz00
																		(CAR(BgL_oldza2za2_1056),
																		(obj_t) (BgL_newz00_1051), BNIL);
																}
															else
																{	/* Ast/venv.scm 372 */
																	BFALSE;
																}
														}
														{	/* Ast/venv.scm 374 */
															obj_t BgL_arg3571z00_1063;

															obj_t BgL_arg3572z00_1064;

															BgL_arg3571z00_1063 = CDR(BgL_bucketz00_1050);
															{	/* Ast/venv.scm 374 */
																obj_t BgL_arg3573z00_1065;

																{	/* Ast/venv.scm 374 */
																	obj_t BgL_pairz00_1711;

																	BgL_pairz00_1711 = BgL_bucketz00_1050;
																	BgL_arg3573z00_1065 =
																		CDR(CDR(BgL_pairz00_1711));
																}
																BgL_arg3572z00_1064 =
																	MAKE_PAIR(
																	(obj_t) (BgL_newz00_1051),
																	BgL_arg3573z00_1065);
															}
															SET_CDR(BgL_arg3571z00_1063, BgL_arg3572z00_1064);
														}
														return BgL_newz00_1051;
													}
												else
													{	/* Ast/venv.scm 377 */
														obj_t BgL_newza2za2_1066;

														BgL_newza2za2_1066 =
															MAKE_PAIR(
															(obj_t) (BgL_newz00_1051), BgL_oldza2za2_1056);
														{	/* Ast/venv.scm 378 */
															bool_t BgL_testz00_2275;

															if ((BgL_idz00_26 == BgL_midz00_1057))
																{	/* Ast/venv.scm 378 */
																	BgL_testz00_2275 = ((bool_t) 0);
																}
															else
																{	/* Ast/venv.scm 378 */
																	if (CBOOL
																		(BGl_za2libzd2modeza2zd2zzengine_paramz00))
																		{	/* Ast/venv.scm 378 */
																			BgL_testz00_2275 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/venv.scm 378 */
																			BgL_testz00_2275 = ((bool_t) 1);
																		}
																}
															if (BgL_testz00_2275)
																{	/* Ast/venv.scm 378 */
																	BGl_warningzd2overridezd2globalz12z12zzast_envz00
																		((obj_t) (BgL_newz00_1051),
																		CAR(BgL_oldza2za2_1056), BNIL);
																}
															else
																{	/* Ast/venv.scm 378 */
																	BFALSE;
																}
														}
														SET_CDR(BgL_bucketz00_1050, BgL_newza2za2_1066);
														return BgL_newz00_1051;
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



/* _bind-global! */
	obj_t BGl__bindzd2globalz12zc0zzast_envz00(obj_t BgL_envz00_1909,
		obj_t BgL_idz00_1910, obj_t BgL_modulez00_1911, obj_t BgL_valuez00_1912,
		obj_t BgL_importz00_1913, obj_t BgL_srcz00_1914)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 337 */
			return
				(obj_t) (BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_1910,
					BgL_modulez00_1911, (BgL_valuez00_bglt) (BgL_valuez00_1912),
					BgL_importz00_1913, BgL_srcz00_1914));
		}
	}



/* unbind-global! */
	BGL_EXPORTED_DEF obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t
		BgL_idz00_31, obj_t BgL_modulez00_32)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 386 */
			{	/* Ast/venv.scm 387 */
				obj_t BgL_globalz00_1084;

				{	/* Ast/venv.scm 387 */
					obj_t BgL_list3606z00_1106;

					BgL_list3606z00_1106 = MAKE_PAIR(BgL_modulez00_32, BNIL);
					BgL_globalz00_1084 =
						BGl_findzd2globalzd2zzast_envz00(BgL_idz00_31,
						BgL_list3606z00_1106);
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_1084,
						BGl_globalz00zzast_varz00))
					{	/* Ast/venv.scm 390 */
						obj_t BgL_bucketz00_1086;

						BgL_bucketz00_1086 =
							BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
							BgL_idz00_31);
						{	/* Ast/venv.scm 391 */
							obj_t BgL_g3446z00_1087;

							BgL_g3446z00_1087 = CDR(BgL_bucketz00_1086);
							{
								obj_t BgL_curz00_1089;

								obj_t BgL_prevz00_1090;

								BgL_curz00_1089 = BgL_g3446z00_1087;
								BgL_prevz00_1090 = BgL_bucketz00_1086;
							BgL_zc3anonymousza33592ze3z83_1091:
								if ((CAR(BgL_curz00_1089) == BgL_globalz00_1084))
									{	/* Ast/venv.scm 394 */
										obj_t BgL_auxz00_2296;

										BgL_auxz00_2296 = CDR(BgL_curz00_1089);
										return SET_CDR(BgL_prevz00_1090, BgL_auxz00_2296);
									}
								else
									{
										obj_t BgL_prevz00_2301;

										obj_t BgL_curz00_2299;

										BgL_curz00_2299 = CDR(BgL_curz00_1089);
										BgL_prevz00_2301 = CDR(BgL_prevz00_1090);
										BgL_prevz00_1090 = BgL_prevz00_2301;
										BgL_curz00_1089 = BgL_curz00_2299;
										goto BgL_zc3anonymousza33592ze3z83_1091;
									}
							}
						}
					}
				else
					{	/* Ast/venv.scm 389 */
						obj_t BgL_arg3600z00_1100;

						{	/* Ast/venv.scm 389 */
							obj_t BgL_arg3602z00_1102;

							obj_t BgL_arg3603z00_1103;

							BgL_arg3602z00_1102 = CNST_TABLE_REF(((long) 3));
							{	/* Ast/venv.scm 389 */
								obj_t BgL_list3604z00_1104;

								{	/* Ast/venv.scm 389 */
									obj_t BgL_arg3605z00_1105;

									BgL_arg3605z00_1105 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3604z00_1104 =
										MAKE_PAIR(BgL_modulez00_32, BgL_arg3605z00_1105);
								}
								BgL_arg3603z00_1103 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_31,
									BgL_list3604z00_1104);
							}
							BgL_arg3600z00_1100 =
								MAKE_PAIR(BgL_arg3602z00_1102, BgL_arg3603z00_1103);
						}
						return
							BGl_userzd2errorzd2zztools_errorz00(BGl_string3729z00zzast_envz00,
							BGl_string3730z00zzast_envz00, BgL_arg3600z00_1100, BNIL);
					}
			}
		}
	}



/* _unbind-global! */
	obj_t BGl__unbindzd2globalz12zc0zzast_envz00(obj_t BgL_envz00_1915,
		obj_t BgL_idz00_1916, obj_t BgL_modulez00_1917)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 386 */
			return
				BGl_unbindzd2globalz12zc0zzast_envz00(BgL_idz00_1916,
				BgL_modulez00_1917);
		}
	}



/* for-each-global! */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t
		BgL_procz00_33, obj_t BgL_envz00_34)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 400 */
			{	/* Ast/venv.scm 401 */
				obj_t BgL_arg3607z00_1107;

				if (NULLP(BgL_envz00_34))
					{	/* Ast/venv.scm 401 */
						BgL_arg3607z00_1107 = BGl_za2Genvza2z00zzast_envz00;
					}
				else
					{	/* Ast/venv.scm 401 */
						BgL_arg3607z00_1107 = CAR(BgL_envz00_34);
					}
				{	/* Ast/venv.scm 402 */
					obj_t BgL_zc3anonymousza33610ze3z83_1918;

					BgL_zc3anonymousza33610ze3z83_1918 =
						make_fx_procedure(BGl_zc3anonymousza33610ze3z83zzast_envz00,
						(int) (((long) 2)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza33610ze3z83_1918,
						(int) (((long) 0)), BgL_procz00_33);
					return
						BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_arg3607z00_1107,
						BgL_zc3anonymousza33610ze3z83_1918);
				}
			}
		}
	}



/* _for-each-global! */
	obj_t BGl__forzd2eachzd2globalz12z12zzast_envz00(obj_t BgL_envz00_1919,
		obj_t BgL_procz00_1920, obj_t BgL_envz00_1921)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 400 */
			return
				BGl_forzd2eachzd2globalz12z12zzast_envz00(BgL_procz00_1920,
				BgL_envz00_1921);
		}
	}



/* <anonymous:3610> */
	obj_t BGl_zc3anonymousza33610ze3z83zzast_envz00(obj_t BgL_envz00_1922,
		obj_t BgL_kz00_1924, obj_t BgL_bucketz00_1925)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 402 */
			{	/* Ast/venv.scm 402 */
				obj_t BgL_procz00_1923;

				BgL_procz00_1923 = PROCEDURE_REF(BgL_envz00_1922, (int) (((long) 0)));
				{
					obj_t BgL_kz00_1110;

					obj_t BgL_bucketz00_1111;

					{	/* Ast/venv.scm 402 */
						bool_t BgL_auxz00_2322;

						BgL_kz00_1110 = BgL_kz00_1924;
						BgL_bucketz00_1111 = BgL_bucketz00_1925;
						{	/* Ast/venv.scm 402 */
							obj_t BgL_g3455z00_1113;

							BgL_g3455z00_1113 = CDR(BgL_bucketz00_1111);
							{
								obj_t BgL_l3453z00_1115;

								BgL_l3453z00_1115 = BgL_g3455z00_1113;
							BgL_zc3anonymousza33611ze3z83_1116:
								if (PAIRP(BgL_l3453z00_1115))
									{	/* Ast/venv.scm 402 */
										{	/* Ast/venv.scm 402 */
											obj_t BgL_arg3613z00_1118;

											BgL_arg3613z00_1118 = CAR(BgL_l3453z00_1115);
											PROCEDURE_ENTRY(BgL_procz00_1923) (BgL_procz00_1923,
												BgL_arg3613z00_1118, BEOA);
										}
										{
											obj_t BgL_l3453z00_2329;

											BgL_l3453z00_2329 = CDR(BgL_l3453z00_1115);
											BgL_l3453z00_1115 = BgL_l3453z00_2329;
											goto BgL_zc3anonymousza33611ze3z83_1116;
										}
									}
								else
									{	/* Ast/venv.scm 402 */
										BgL_auxz00_2322 = ((bool_t) 1);
									}
							}
						}
						return BBOOL(BgL_auxz00_2322);
					}
				}
			}
		}
	}



/* global-bucket-position */
	BGL_EXPORTED_DEF obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t
		BgL_idz00_35, obj_t BgL_modulez00_36)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 407 */
			{	/* Ast/venv.scm 408 */
				obj_t BgL_bucketz00_1122;

				BgL_bucketz00_1122 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Genvza2z00zzast_envz00,
					BgL_idz00_35);
				if (PAIRP(BgL_bucketz00_1122))
					{
						obj_t BgL_globalsz00_1126;

						long BgL_posz00_1127;

						{	/* Ast/venv.scm 411 */
							long BgL_auxz00_2335;

							BgL_globalsz00_1126 = CDR(BgL_bucketz00_1122);
							BgL_posz00_1127 = ((long) 0);
						BgL_zc3anonymousza33616ze3z83_1128:
							if (NULLP(BgL_globalsz00_1126))
								{	/* Ast/venv.scm 414 */
									BgL_auxz00_2335 = ((long) -1);
								}
							else
								{	/* Ast/venv.scm 416 */
									bool_t BgL_testz00_2338;

									{	/* Ast/venv.scm 416 */
										obj_t BgL_auxz00_2339;

										{	/* Ast/venv.scm 416 */
											BgL_globalz00_bglt BgL_obj1676z00_1738;

											{	/* Ast/venv.scm 416 */
												obj_t BgL_pairz00_1737;

												BgL_pairz00_1737 = BgL_globalsz00_1126;
												BgL_obj1676z00_1738 =
													(BgL_globalz00_bglt) (CAR(BgL_pairz00_1737));
											}
											BgL_auxz00_2339 =
												(((BgL_globalz00_bglt) CREF(BgL_obj1676z00_1738))->
												BgL_modulez00);
										}
										BgL_testz00_2338 = (BgL_auxz00_2339 == BgL_modulez00_36);
									}
									if (BgL_testz00_2338)
										{	/* Ast/venv.scm 416 */
											BgL_auxz00_2335 = BgL_posz00_1127;
										}
									else
										{
											long BgL_posz00_2346;

											obj_t BgL_globalsz00_2344;

											BgL_globalsz00_2344 = CDR(BgL_globalsz00_1126);
											BgL_posz00_2346 = (BgL_posz00_1127 + ((long) 1));
											BgL_posz00_1127 = BgL_posz00_2346;
											BgL_globalsz00_1126 = BgL_globalsz00_2344;
											goto BgL_zc3anonymousza33616ze3z83_1128;
										}
								}
							return BINT(BgL_auxz00_2335);
						}
					}
				else
					{	/* Ast/venv.scm 409 */
						return BINT(((long) -1));
		}}}
	}



/* _global-bucket-position */
	obj_t BGl__globalzd2bucketzd2positionz00zzast_envz00(obj_t BgL_envz00_1926,
		obj_t BgL_idz00_1927, obj_t BgL_modulez00_1928)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 407 */
			return
				BGl_globalzd2bucketzd2positionz00zzast_envz00(BgL_idz00_1927,
				BgL_modulez00_1928);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_restorezd2valuezd2typesz123456zd2envzc0zzast_envz00,
				BGl_valuez00zzast_varz00, BGl_string3731z00zzast_envz00);
		}
	}



/* restore-value-types! */
	obj_t BGl_restorezd2valuezd2typesz12z12zzast_envz00(BgL_valuez00_bglt
		BgL_valuez00_7)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 152 */
			{	/* Ast/venv.scm 152 */
				obj_t BgL_method3457z00_1742;

				{	/* Ast/venv.scm 152 */
					BgL_objectz00_bglt BgL_objz00_1743;

					BgL_objz00_1743 = (BgL_objectz00_bglt) (BgL_valuez00_7);
					{	/* Ast/venv.scm 152 */
						long BgL_objzd2classzd2numz00_1744;

						BgL_objzd2classzd2numz00_1744 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1743);
						{	/* Ast/venv.scm 152 */
							obj_t BgL_arg2643z00_1745;

							BgL_arg2643z00_1745 =
								PROCEDURE_REF
								(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
								(int) (((long) 1)));
							{	/* Ast/venv.scm 152 */
								obj_t BgL_arrayz00_1747;

								int BgL_offsetz00_1748;

								BgL_arrayz00_1747 = BgL_arg2643z00_1745;
								BgL_offsetz00_1748 = (int) (BgL_objzd2classzd2numz00_1744);
								{	/* Ast/venv.scm 152 */
									long BgL_offsetz00_1749;

									BgL_offsetz00_1749 =
										((long) (BgL_offsetz00_1748) - OBJECT_TYPE);
									{	/* Ast/venv.scm 152 */
										long BgL_modz00_1750;

										{	/* Ast/venv.scm 152 */
											int BgL_arg2645z00_1751;

											BgL_arg2645z00_1751 = (int) (((long) 16));
											{	/* Ast/venv.scm 152 */
												long BgL_auxz00_2361;

												BgL_auxz00_2361 = (long) (BgL_arg2645z00_1751);
												BgL_modz00_1750 =
													(BgL_offsetz00_1749 / BgL_auxz00_2361);
										}}
										{	/* Ast/venv.scm 152 */
											long BgL_restz00_1752;

											{	/* Ast/venv.scm 152 */
												int BgL_arg2644z00_1753;

												BgL_arg2644z00_1753 = (int) (((long) 16));
												{	/* Ast/venv.scm 152 */
													long BgL_auxz00_2365;

													BgL_auxz00_2365 = (long) (BgL_arg2644z00_1753);
													BgL_restz00_1752 =
														(BgL_offsetz00_1749 % BgL_auxz00_2365);
											}}
											{	/* Ast/venv.scm 152 */

												BgL_method3457z00_1742 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1747,
														(int) (BgL_modz00_1750)), (int) (BgL_restz00_1752));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3457z00_1742) (BgL_method3457z00_1742,
					(obj_t) (BgL_valuez00_7), BEOA);
			}
		}
	}



/* _restore-value-types! */
	obj_t BGl__restorezd2valuezd2typesz12z12zzast_envz00(obj_t BgL_envz00_1894,
		obj_t BgL_valuez00_1895)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 152 */
			return
				BGl_restorezd2valuezd2typesz12z12zzast_envz00(
				(BgL_valuez00_bglt) (BgL_valuez00_1895));
		}
	}



/* _restore-value-types!3456 */
	obj_t BGl__restorezd2valuezd2typesz123456z12zzast_envz00(obj_t
		BgL_envz00_1929, obj_t BgL_valuez00_1930)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_funz00zzast_varz00, BGl_proc3732z00zzast_envz00,
				BGl_string3731z00zzast_envz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_sfunz00zzast_varz00, BGl_proc3733z00zzast_envz00,
				BGl_string3731z00zzast_envz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_isfunz00zzinline_inlinez00, BGl_proc3734z00zzast_envz00,
				BGl_string3731z00zzast_envz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
				BGl_cfunz00zzast_varz00, BGl_proc3735z00zzast_envz00,
				BGl_string3731z00zzast_envz00);
		}
	}



/* restore-value-types!3465 */
	obj_t BGl_restorezd2valuezd2typesz123465z12zzast_envz00(obj_t BgL_envz00_1935,
		obj_t BgL_valuez00_1936)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 208 */
			{
				BgL_cfunz00_bglt BgL_valuez00_1572;

				{	/* Ast/venv.scm 208 */
					bool_t BgL_auxz00_2381;

					BgL_valuez00_1572 = (BgL_cfunz00_bglt) (BgL_valuez00_1936);
					{

						{	/* Ast/venv.scm 208 */
							obj_t BgL_nextzd2method3464zd2_1586;

							BgL_nextzd2method3464zd2_1586 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_valuez00_1572),
								BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
								BGl_cfunz00zzast_varz00);
							if (PROCEDUREP(BgL_nextzd2method3464zd2_1586))
								{	/* Ast/venv.scm 208 */
									PROCEDURE_ENTRY(BgL_nextzd2method3464zd2_1586)
										(BgL_nextzd2method3464zd2_1586, (obj_t) (BgL_valuez00_1572),
										BEOA);
								}
							else
								{	/* Ast/venv.scm 208 */
									{	/* Ast/venv.scm 208 */
										BgL_valuez00_bglt BgL_valuez00_1857;

										BgL_valuez00_1857 = (BgL_valuez00_bglt) (BgL_valuez00_1572);
										{	/* Ast/venv.scm 208 */
											obj_t BgL_method3457z00_1858;

											{	/* Ast/venv.scm 208 */
												BgL_objectz00_bglt BgL_objz00_1859;

												BgL_objz00_1859 =
													(BgL_objectz00_bglt) (BgL_valuez00_1857);
												{	/* Ast/venv.scm 208 */
													long BgL_objzd2classzd2numz00_1860;

													BgL_objzd2classzd2numz00_1860 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1859);
													{	/* Ast/venv.scm 208 */
														obj_t BgL_arg2643z00_1861;

														BgL_arg2643z00_1861 =
															PROCEDURE_REF
															(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
															(int) (((long) 1)));
														{	/* Ast/venv.scm 208 */
															obj_t BgL_arrayz00_1863;

															int BgL_offsetz00_1864;

															BgL_arrayz00_1863 = BgL_arg2643z00_1861;
															BgL_offsetz00_1864 =
																(int) (BgL_objzd2classzd2numz00_1860);
															{	/* Ast/venv.scm 208 */
																long BgL_offsetz00_1865;

																BgL_offsetz00_1865 =
																	((long) (BgL_offsetz00_1864) - OBJECT_TYPE);
																{	/* Ast/venv.scm 208 */
																	long BgL_modz00_1866;

																	{	/* Ast/venv.scm 208 */
																		int BgL_arg2645z00_1867;

																		BgL_arg2645z00_1867 = (int) (((long) 16));
																		{	/* Ast/venv.scm 208 */
																			long BgL_auxz00_2398;

																			BgL_auxz00_2398 =
																				(long) (BgL_arg2645z00_1867);
																			BgL_modz00_1866 =
																				(BgL_offsetz00_1865 / BgL_auxz00_2398);
																	}}
																	{	/* Ast/venv.scm 208 */
																		long BgL_restz00_1868;

																		{	/* Ast/venv.scm 208 */
																			int BgL_arg2644z00_1869;

																			BgL_arg2644z00_1869 = (int) (((long) 16));
																			{	/* Ast/venv.scm 208 */
																				long BgL_auxz00_2402;

																				BgL_auxz00_2402 =
																					(long) (BgL_arg2644z00_1869);
																				BgL_restz00_1868 =
																					(BgL_offsetz00_1865 %
																					BgL_auxz00_2402);
																		}}
																		{	/* Ast/venv.scm 208 */

																			BgL_method3457z00_1858 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1863,
																					(int) (BgL_modz00_1866)),
																				(int) (BgL_restz00_1868));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3457z00_1858)
												(BgL_method3457z00_1858, (obj_t) (BgL_valuez00_1857),
												BEOA);
						}}}}
						{
							obj_t BgL_argsz00_1578;

							{	/* Ast/venv.scm 211 */
								obj_t BgL_arg3703z00_1577;

								BgL_arg3703z00_1577 =
									(((BgL_cfunz00_bglt) CREF(BgL_valuez00_1572))->
									BgL_argszd2typezd2);
								BgL_argsz00_1578 = BgL_arg3703z00_1577;
							BgL_zc3anonymousza33704ze3z83_1579:
								if (PAIRP(BgL_argsz00_1578))
									{	/* Ast/venv.scm 212 */
										{	/* Ast/venv.scm 214 */
											BgL_typez00_bglt BgL_arg3706z00_1581;

											{	/* Ast/venv.scm 214 */
												obj_t BgL_arg3707z00_1582;

												{
													BgL_typez00_bglt BgL_auxz00_2415;

													BgL_auxz00_2415 =
														(BgL_typez00_bglt) (CAR(BgL_argsz00_1578));
													BgL_arg3707z00_1582 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2415))->
														BgL_idz00);
												}
												BgL_arg3706z00_1581 =
													BGl_findzd2typezd2zztype_envz00(BgL_arg3707z00_1582);
											}
											{	/* Ast/venv.scm 214 */
												obj_t BgL_auxz00_2420;

												BgL_auxz00_2420 = (obj_t) (BgL_arg3706z00_1581);
												SET_CAR(BgL_argsz00_1578, BgL_auxz00_2420);
											}
										}
										{
											obj_t BgL_argsz00_2423;

											BgL_argsz00_2423 = CDR(BgL_argsz00_1578);
											BgL_argsz00_1578 = BgL_argsz00_2423;
											goto BgL_zc3anonymousza33704ze3z83_1579;
										}
									}
								else
									{	/* Ast/venv.scm 212 */
										BgL_auxz00_2381 = ((bool_t) 0);
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_2381);
				}
			}
		}
	}



/* restore-value-types!3463 */
	obj_t BGl_restorezd2valuezd2typesz123463z12zzast_envz00(obj_t BgL_envz00_1937,
		obj_t BgL_valuez00_1938)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 201 */
			{
				BgL_isfunz00_bglt BgL_valuez00_1566;

				BgL_valuez00_1566 = (BgL_isfunz00_bglt) (BgL_valuez00_1938);
				{

					{	/* Ast/venv.scm 201 */
						obj_t BgL_nextzd2method3462zd2_1570;

						BgL_nextzd2method3462zd2_1570 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_valuez00_1566),
							BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
							BGl_isfunz00zzinline_inlinez00);
						if (PROCEDUREP(BgL_nextzd2method3462zd2_1570))
							{	/* Ast/venv.scm 201 */
								PROCEDURE_ENTRY(BgL_nextzd2method3462zd2_1570)
									(BgL_nextzd2method3462zd2_1570, (obj_t) (BgL_valuez00_1566),
									BEOA);
							}
						else
							{	/* Ast/venv.scm 201 */
								{	/* Ast/venv.scm 201 */
									BgL_valuez00_bglt BgL_valuez00_1823;

									BgL_valuez00_1823 = (BgL_valuez00_bglt) (BgL_valuez00_1566);
									{	/* Ast/venv.scm 201 */
										obj_t BgL_method3457z00_1824;

										{	/* Ast/venv.scm 201 */
											BgL_objectz00_bglt BgL_objz00_1825;

											BgL_objz00_1825 =
												(BgL_objectz00_bglt) (BgL_valuez00_1823);
											{	/* Ast/venv.scm 201 */
												long BgL_objzd2classzd2numz00_1826;

												BgL_objzd2classzd2numz00_1826 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1825);
												{	/* Ast/venv.scm 201 */
													obj_t BgL_arg2643z00_1827;

													BgL_arg2643z00_1827 =
														PROCEDURE_REF
														(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
														(int) (((long) 1)));
													{	/* Ast/venv.scm 201 */
														obj_t BgL_arrayz00_1829;

														int BgL_offsetz00_1830;

														BgL_arrayz00_1829 = BgL_arg2643z00_1827;
														BgL_offsetz00_1830 =
															(int) (BgL_objzd2classzd2numz00_1826);
														{	/* Ast/venv.scm 201 */
															long BgL_offsetz00_1831;

															BgL_offsetz00_1831 =
																((long) (BgL_offsetz00_1830) - OBJECT_TYPE);
															{	/* Ast/venv.scm 201 */
																long BgL_modz00_1832;

																{	/* Ast/venv.scm 201 */
																	int BgL_arg2645z00_1833;

																	BgL_arg2645z00_1833 = (int) (((long) 16));
																	{	/* Ast/venv.scm 201 */
																		long BgL_auxz00_2443;

																		BgL_auxz00_2443 =
																			(long) (BgL_arg2645z00_1833);
																		BgL_modz00_1832 =
																			(BgL_offsetz00_1831 / BgL_auxz00_2443);
																}}
																{	/* Ast/venv.scm 201 */
																	long BgL_restz00_1834;

																	{	/* Ast/venv.scm 201 */
																		int BgL_arg2644z00_1835;

																		BgL_arg2644z00_1835 = (int) (((long) 16));
																		{	/* Ast/venv.scm 201 */
																			long BgL_auxz00_2447;

																			BgL_auxz00_2447 =
																				(long) (BgL_arg2644z00_1835);
																			BgL_restz00_1834 =
																				(BgL_offsetz00_1831 % BgL_auxz00_2447);
																	}}
																	{	/* Ast/venv.scm 201 */

																		BgL_method3457z00_1824 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1829,
																				(int) (BgL_modz00_1832)),
																			(int) (BgL_restz00_1834));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3457z00_1824)
											(BgL_method3457z00_1824, (obj_t) (BgL_valuez00_1823),
											BEOA);
					}}}}
					{	/* Ast/venv.scm 203 */
						BgL_nodez00_bglt BgL_arg3701z00_1569;

						{
							obj_t BgL_auxz00_2457;

							{	/* Ast/venv.scm 203 */
								BgL_objectz00_bglt BgL_auxz00_2458;

								BgL_auxz00_2458 = (BgL_objectz00_bglt) (BgL_valuez00_1566);
								BgL_auxz00_2457 = BGL_OBJECT_WIDENING(BgL_auxz00_2458);
							}
							BgL_arg3701z00_1569 =
								(((BgL_isfunz00_bglt) CREF(BgL_auxz00_2457))->
								BgL_originalzd2bodyzd2);
						}
						return BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_arg3701z00_1569);
					}
				}
			}
		}
	}



/* restore-value-types!3461 */
	obj_t BGl_restorezd2valuezd2typesz123461z12zzast_envz00(obj_t BgL_envz00_1939,
		obj_t BgL_valuez00_1940)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 166 */
			{
				BgL_sfunz00_bglt BgL_valuez00_1532;

				BgL_valuez00_1532 = (BgL_sfunz00_bglt) (BgL_valuez00_1940);
				{

					{	/* Ast/venv.scm 166 */
						obj_t BgL_nextzd2method3460zd2_1564;

						BgL_nextzd2method3460zd2_1564 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_valuez00_1532),
							BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
							BGl_sfunz00zzast_varz00);
						if (PROCEDUREP(BgL_nextzd2method3460zd2_1564))
							{	/* Ast/venv.scm 166 */
								PROCEDURE_ENTRY(BgL_nextzd2method3460zd2_1564)
									(BgL_nextzd2method3460zd2_1564, (obj_t) (BgL_valuez00_1532),
									BEOA);
							}
						else
							{	/* Ast/venv.scm 166 */
								{	/* Ast/venv.scm 166 */
									BgL_valuez00_bglt BgL_valuez00_1795;

									BgL_valuez00_1795 = (BgL_valuez00_bglt) (BgL_valuez00_1532);
									{	/* Ast/venv.scm 166 */
										obj_t BgL_method3457z00_1796;

										{	/* Ast/venv.scm 166 */
											BgL_objectz00_bglt BgL_objz00_1797;

											BgL_objz00_1797 =
												(BgL_objectz00_bglt) (BgL_valuez00_1795);
											{	/* Ast/venv.scm 166 */
												long BgL_objzd2classzd2numz00_1798;

												BgL_objzd2classzd2numz00_1798 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1797);
												{	/* Ast/venv.scm 166 */
													obj_t BgL_arg2643z00_1799;

													BgL_arg2643z00_1799 =
														PROCEDURE_REF
														(BGl_restorezd2valuezd2typesz12zd2envzc0zzast_envz00,
														(int) (((long) 1)));
													{	/* Ast/venv.scm 166 */
														obj_t BgL_arrayz00_1801;

														int BgL_offsetz00_1802;

														BgL_arrayz00_1801 = BgL_arg2643z00_1799;
														BgL_offsetz00_1802 =
															(int) (BgL_objzd2classzd2numz00_1798);
														{	/* Ast/venv.scm 166 */
															long BgL_offsetz00_1803;

															BgL_offsetz00_1803 =
																((long) (BgL_offsetz00_1802) - OBJECT_TYPE);
															{	/* Ast/venv.scm 166 */
																long BgL_modz00_1804;

																{	/* Ast/venv.scm 166 */
																	int BgL_arg2645z00_1805;

																	BgL_arg2645z00_1805 = (int) (((long) 16));
																	{	/* Ast/venv.scm 166 */
																		long BgL_auxz00_2480;

																		BgL_auxz00_2480 =
																			(long) (BgL_arg2645z00_1805);
																		BgL_modz00_1804 =
																			(BgL_offsetz00_1803 / BgL_auxz00_2480);
																}}
																{	/* Ast/venv.scm 166 */
																	long BgL_restz00_1806;

																	{	/* Ast/venv.scm 166 */
																		int BgL_arg2644z00_1807;

																		BgL_arg2644z00_1807 = (int) (((long) 16));
																		{	/* Ast/venv.scm 166 */
																			long BgL_auxz00_2484;

																			BgL_auxz00_2484 =
																				(long) (BgL_arg2644z00_1807);
																			BgL_restz00_1806 =
																				(BgL_offsetz00_1803 % BgL_auxz00_2484);
																	}}
																	{	/* Ast/venv.scm 166 */

																		BgL_method3457z00_1796 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1801,
																				(int) (BgL_modz00_1804)),
																			(int) (BgL_restz00_1806));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method3457z00_1796)
											(BgL_method3457z00_1796, (obj_t) (BgL_valuez00_1795),
											BEOA);
					}}}}
					{
						obj_t BgL_argsz00_1538;

						{	/* Ast/venv.scm 169 */
							obj_t BgL_arg3679z00_1537;

							BgL_arg3679z00_1537 =
								(((BgL_sfunz00_bglt) CREF(BgL_valuez00_1532))->BgL_argsz00);
							BgL_argsz00_1538 = BgL_arg3679z00_1537;
						BgL_zc3anonymousza33680ze3z83_1539:
							if (PAIRP(BgL_argsz00_1538))
								{	/* Ast/venv.scm 172 */
									obj_t BgL_argz00_1541;

									BgL_argz00_1541 = CAR(BgL_argsz00_1538);
									if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_1541,
											BGl_typez00zztype_typez00))
										{	/* Ast/venv.scm 175 */
											BgL_typez00_bglt BgL_arg3683z00_1543;

											{	/* Ast/venv.scm 175 */
												obj_t BgL_arg3684z00_1544;

												{
													BgL_typez00_bglt BgL_auxz00_2500;

													BgL_auxz00_2500 =
														(BgL_typez00_bglt) (BgL_argz00_1541);
													BgL_arg3684z00_1544 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_2500))->
														BgL_idz00);
												}
												BgL_arg3683z00_1543 =
													BGl_findzd2typezd2zztype_envz00(BgL_arg3684z00_1544);
											}
											{	/* Ast/venv.scm 175 */
												obj_t BgL_auxz00_2504;

												BgL_auxz00_2504 = (obj_t) (BgL_arg3683z00_1543);
												SET_CAR(BgL_argsz00_1538, BgL_auxz00_2504);
											}
										}
									else
										{	/* Ast/venv.scm 174 */
											if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_1541,
													BGl_localz00zzast_varz00))
												{	/* Ast/venv.scm 177 */
													BgL_typez00_bglt BgL_newzd2typezd2_1546;

													{	/* Ast/venv.scm 177 */
														obj_t BgL_arg3686z00_1547;

														{	/* Ast/venv.scm 177 */
															BgL_typez00_bglt BgL_obj1508z00_1782;

															{
																BgL_variablez00_bglt BgL_auxz00_2509;

																BgL_auxz00_2509 =
																	(BgL_variablez00_bglt) (
																	(BgL_localz00_bglt) (BgL_argz00_1541));
																BgL_obj1508z00_1782 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2509))->BgL_typez00);
															}
															BgL_arg3686z00_1547 =
																(((BgL_typez00_bglt)
																	CREF(BgL_obj1508z00_1782))->BgL_idz00);
														}
														BgL_newzd2typezd2_1546 =
															BGl_findzd2typezd2zztype_envz00
															(BgL_arg3686z00_1547);
													}
													{
														BgL_variablez00_bglt BgL_auxz00_2515;

														BgL_auxz00_2515 =
															(BgL_variablez00_bglt) (
															(BgL_localz00_bglt) (BgL_argz00_1541));
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_2515))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_newzd2typezd2_1546),
															BUNSPEC);
													}
												}
											else
												{	/* Ast/venv.scm 176 */
													BGl_errorz00zz__errorz00
														(BGl_string3736z00zzast_envz00,
														BGl_string3737z00zzast_envz00,
														BGl_shapez00zztools_shapez00(BgL_argz00_1541));
												}
										}
									{
										obj_t BgL_argsz00_2521;

										BgL_argsz00_2521 = CDR(BgL_argsz00_1538);
										BgL_argsz00_1538 = BgL_argsz00_2521;
										goto BgL_zc3anonymousza33680ze3z83_1539;
									}
								}
							else
								{	/* Ast/venv.scm 171 */
									if (NULLP(BgL_argsz00_1538))
										{	/* Ast/venv.scm 185 */
											obj_t BgL_bodyz00_1554;

											BgL_bodyz00_1554 =
												(((BgL_sfunz00_bglt) CREF(BgL_valuez00_1532))->
												BgL_bodyz00);
											if (BGl_iszd2azf3z21zz__objectz00(BgL_bodyz00_1554,
													BGl_nodez00zzast_nodez00))
												{	/* Ast/venv.scm 188 */
													BgL_typez00_bglt BgL_tresz00_1556;

													{
														BgL_nodez00_bglt BgL_auxz00_2528;

														BgL_auxz00_2528 =
															(BgL_nodez00_bglt) (BgL_bodyz00_1554);
														BgL_tresz00_1556 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_2528))->
															BgL_typez00);
													}
													BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
														(BgL_nodez00_bglt) (BgL_bodyz00_1554));
													{	/* Ast/venv.scm 190 */
														bool_t BgL_testz00_2533;

														{	/* Ast/venv.scm 190 */
															obj_t BgL_obj1599z00_1790;

															BgL_obj1599z00_1790 = (obj_t) (BgL_tresz00_1556);
															BgL_testz00_2533 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj1599z00_1790,
																BGl_typez00zztype_typez00);
														}
														if (BgL_testz00_2533)
															{	/* Ast/venv.scm 192 */
																BgL_typez00_bglt BgL_arg3695z00_1558;

																{	/* Ast/venv.scm 192 */
																	obj_t BgL_arg3696z00_1559;

																	BgL_arg3696z00_1559 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_tresz00_1556))->BgL_idz00);
																	BgL_arg3695z00_1558 =
																		BGl_findzd2typezd2zztype_envz00
																		(BgL_arg3696z00_1559);
																}
																{
																	BgL_nodez00_bglt BgL_auxz00_2538;

																	BgL_auxz00_2538 =
																		(BgL_nodez00_bglt) (BgL_bodyz00_1554);
																	return
																		((((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_2538))->BgL_typez00) =
																		((BgL_typez00_bglt) BgL_arg3695z00_1558),
																		BUNSPEC);
																}
															}
														else
															{	/* Ast/venv.scm 190 */
																return BFALSE;
															}
													}
												}
											else
												{	/* Ast/venv.scm 187 */
													return BFALSE;
												}
										}
									else
										{	/* Ast/venv.scm 184 */
											return
												BGl_errorz00zz__errorz00(BGl_string3738z00zzast_envz00,
												BGl_string3739z00zzast_envz00,
												BGl_shapez00zztools_shapez00(BgL_argsz00_1538));
										}
								}
						}
					}
				}
			}
		}
	}



/* restore-value-types!3459 */
	obj_t BGl_restorezd2valuezd2typesz123459z12zzast_envz00(obj_t BgL_envz00_1941,
		obj_t BgL_valuez00_1942)
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 158 */
			{
				BgL_funz00_bglt BgL_valuez00_1521;

				BgL_valuez00_1521 = (BgL_funz00_bglt) (BgL_valuez00_1942);
				{	/* Ast/venv.scm 160 */
					bool_t BgL_testz00_2544;

					{	/* Ast/venv.scm 160 */
						obj_t BgL_arg3677z00_1529;

						BgL_arg3677z00_1529 =
							(((BgL_funz00_bglt) CREF(BgL_valuez00_1521))->
							BgL_predicatezd2ofzd2);
						BgL_testz00_2544 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3677z00_1529,
							BGl_typez00zztype_typez00);
					}
					if (BgL_testz00_2544)
						{	/* Ast/venv.scm 161 */
							BgL_typez00_bglt BgL_arg3673z00_1526;

							{	/* Ast/venv.scm 161 */
								obj_t BgL_arg3674z00_1527;

								{	/* Ast/venv.scm 161 */
									BgL_typez00_bglt BgL_obj1508z00_1770;

									BgL_obj1508z00_1770 =
										(BgL_typez00_bglt) (
										(((BgL_funz00_bglt) CREF(BgL_valuez00_1521))->
											BgL_predicatezd2ofzd2));
									BgL_arg3674z00_1527 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1770))->BgL_idz00);
								}
								BgL_arg3673z00_1526 =
									BGl_findzd2typezd2zztype_envz00(BgL_arg3674z00_1527);
							}
							{
								obj_t BgL_auxz00_2551;

								BgL_auxz00_2551 = (obj_t) (BgL_arg3673z00_1526);
								return
									((((BgL_funz00_bglt) CREF(BgL_valuez00_1521))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_auxz00_2551), BUNSPEC);
							}
						}
					else
						{	/* Ast/venv.scm 160 */
							return BFALSE;
						}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_envz00()
	{
		AN_OBJECT;
		{	/* Ast/venv.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzast_hrtypez00(((long) 346346738),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string3740z00zzast_envz00));
		}
	}

#ifdef __cplusplus
}
#endif
