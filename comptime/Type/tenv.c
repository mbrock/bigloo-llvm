/*===========================================================================*/
/*   (Type/tenv.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/tenv.scm)*/
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


	static obj_t BGl__typezd2existszf3z21zztype_envz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_bindzd2typez12zc0zztype_envz00(obj_t, bool_t,
		obj_t);
	extern bool_t BGl_ctypezf3zf3zzforeign_ctypez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2tenvzd2zztype_envz00();
	extern obj_t BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl__usezd2typez12zc0zztype_envz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00();
	static obj_t BGl_cnstzd2initzd2zztype_envz00();
	static obj_t BGl__getzd2tenvzd2zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2typeszd2zztype_envz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_creatorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_predicatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_plainzd2accesszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_widezd2accesszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztype_envz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t
		BGl_heapzd2addzd2classz12z12zzobject_classz00(BgL_tclassz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t
		BGl_heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
		(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__forzd2eachzd2typez12z12zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__checkzd2typeszd2zztype_envz00(obj_t);
	static obj_t BGl__initializa7ezd2Tenvz12z67zztype_envz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_zc3anonymousza33012ze3z83zztype_envz00(obj_t);
	static obj_t BGl_zc3anonymousza33016ze3z83zztype_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl__setzd2tenvz12zc0zztype_envz00(obj_t, obj_t);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_uninitializa7edzd2typesz75zztype_envz00();
	static obj_t BGl_methodzd2initzd2zztype_envz00();
	extern BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	extern obj_t BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_addzd2tenvz12zc0zztype_envz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_envz00 = BUNSPEC;
	static obj_t BGl__findzd2typezd2zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_usezd2foreignzd2typez12z12zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl__declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztype_envz00();
	extern obj_t BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00;
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl__usezd2foreignzd2typez12z12zztype_envz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__subzd2typezf3z21zztype_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl__findzd2typezf2locationz20zztype_envz00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_envz00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2
		(BgL_tclassz00_bglt);
	static obj_t BGl_zc3anonymousza32984ze3z83zztype_envz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t);
	static obj_t BGl__declarezd2aliastypez12zc0zztype_envz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_delayzd2tvectorz12zc0zzmodule_typez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33100ze3z83zztype_envz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_zc3anonymousza32991ze3z83zztype_envz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_findzd2typezf2locationz20zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33098ze3z83zztype_envz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33109ze3z83zztype_envz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2aliastypez12zc0zztype_envz00(obj_t, obj_t, obj_t,
		BgL_typez00_bglt);
	BGL_IMPORT bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	static obj_t BGl__addzd2tenvz12zc0zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza33126ze3z83zztype_envz00(obj_t);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl__declarezd2typez12zc0zztype_envz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2Tenvza2z00zztype_envz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t
		BGl__usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00;
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_envz00();
	static obj_t __cnst[8];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_subzd2typezf3zd2envzf3zztype_envz00,
		BgL_bgl__subza7d2typeza7f3za723183za7, BGl__subzd2typezf3z21zztype_envz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2existszf3zd2envzf3zztype_envz00,
		BgL_bgl__typeza7d2existsza7f3184z00, BGl__typezd2existszf3z21zztype_envz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2aliastypez12zd2envz12zztype_envz00,
		BgL_bgl__declareza7d2alias3185za7,
		BGl__declarezd2aliastypez12zc0zztype_envz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2tenvz12zd2envz12zztype_envz00,
		BgL_bgl__addza7d2tenvza712za7c3186za7, BGl__addzd2tenvz12zc0zztype_envz00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2envz00zz__errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2typezf2locationzd2envzf2zztype_envz00,
		BgL_bgl__findza7d2typeza7f2l3187z00,
		BGl__findzd2typezf2locationz20zztype_envz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2tenvz12zd2envz12zztype_envz00,
		BgL_bgl__setza7d2tenvza712za7c3188za7, BGl__setzd2tenvz12zc0zztype_envz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2foreignzd2typezf2importzd2locz12zd2envze0zztype_envz00,
		BgL_bgl__useza7d2foreignza7d3189z00,
		BGl__usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2typezf2importzd2locz12zd2envz32zztype_envz00,
		BgL_bgl__useza7d2typeza7f2im3190z00,
		BGl__usezd2typezf2importzd2locz12ze0zztype_envz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2foreignzd2typez12zd2envzc0zztype_envz00,
		BgL_bgl__useza7d2foreignza7d3191z00,
		BGl__usezd2foreignzd2typez12z12zztype_envz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2subtypez12zd2envz12zztype_envz00,
		BgL_bgl__declareza7d2subty3192za7,
		BGl__declarezd2subtypez12zc0zztype_envz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3165z00zztype_envz00,
		BgL_bgl_za7c3anonymousza7a323193z00,
		BGl_zc3anonymousza32991ze3z83zztype_envz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3167z00zztype_envz00,
		BgL_bgl_za7c3anonymousza7a333194z00,
		BGl_zc3anonymousza33016ze3z83zztype_envz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2typezd2envz00zztype_envz00,
		BgL_bgl__findza7d2typeza7d2za73195za7, BGl__findzd2typezd2zztype_envz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2typez12zd2envz12zztype_envz00,
		BgL_bgl__declareza7d2typeza73196z00, BGl__declarezd2typez12zc0zztype_envz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_usezd2typez12zd2envz12zztype_envz00,
		BgL_bgl__useza7d2typeza712za7c3197za7, BGl__usezd2typez12zc0zztype_envz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3166z00zztype_envz00,
		BgL_bgl_string3166za700za7za7t3198za7, "Can't find super class of", 25);
	      DEFINE_STRING(BGl_string3168z00zztype_envz00,
		BgL_bgl_string3168za700za7za7t3199za7, "add-Tenv!", 9);
	      DEFINE_STRING(BGl_string3170z00zztype_envz00,
		BgL_bgl_string3170za700za7za7t3200za7, "Can't find type", 15);
	      DEFINE_STRING(BGl_string3169z00zztype_envz00,
		BgL_bgl_string3169za700za7za7t3201za7, "Illegal type heap redefinition",
		30);
	      DEFINE_STRING(BGl_string3171z00zztype_envz00,
		BgL_bgl_string3171za700za7za7t3202za7, "Type redefinition", 17);
	      DEFINE_STRING(BGl_string3172z00zztype_envz00,
		BgL_bgl_string3172za700za7za7t3203za7, "declare-type!", 13);
	      DEFINE_STRING(BGl_string3173z00zztype_envz00,
		BgL_bgl_string3173za700za7za7t3204za7, "Illegal type class", 18);
	      DEFINE_STRING(BGl_string3174z00zztype_envz00,
		BgL_bgl_string3174za700za7za7t3205za7, " type(s) used but not defined.",
		30);
	      DEFINE_STRING(BGl_string3175z00zztype_envz00,
		BgL_bgl_string3175za700za7za7t3206za7, "Stopping compilation...", 23);
	      DEFINE_STRING(BGl_string3176z00zztype_envz00,
		BgL_bgl_string3176za700za7za7t3207za7,
		"Undefined type used in export clause", 36);
	      DEFINE_STRING(BGl_string3177z00zztype_envz00,
		BgL_bgl_string3177za700za7za7t3208za7, "Undefined used type", 19);
	      DEFINE_STRING(BGl_string3178z00zztype_envz00,
		BgL_bgl_string3178za700za7za7t3209za7, "Undefined type", 14);
	      DEFINE_STRING(BGl_string3180z00zztype_envz00,
		BgL_bgl_string3180za700za7za7t3210za7,
		"(bigloo C _ java) use-type! bigloo bind-type! find-type heap add-Tenv the-global-environment ",
		93);
	      DEFINE_STRING(BGl_string3179z00zztype_envz00,
		BgL_bgl_string3179za700za7za7t3211za7, "type_env", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_forzd2eachzd2typez12zd2envzc0zztype_envz00,
		BgL_bgl__forza7d2eachza7d2ty3212z00,
		BGl__forzd2eachzd2typez12z12zztype_envz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2Tenvz12zd2envzb5zztype_envz00,
		BgL_bgl__initializa7a7eza7d23213z00,
		BGl__initializa7ezd2Tenvz12z67zztype_envz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2tenvzd2envz00zztype_envz00,
		BgL_bgl__getza7d2tenvza7d2za7za73214z00, BGl__getzd2tenvzd2zztype_envz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2typeszd2envz00zztype_envz00,
		BgL_bgl__checkza7d2typesza7d3215z00, BGl__checkzd2typeszd2zztype_envz00, 0L,
		BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long
		BgL_checksumz00_1256, char *BgL_fromz00_1257)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_envz00))
				{
					BGl_requirezd2initializa7ationz75zztype_envz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_envz00();
					BGl_cnstzd2initzd2zztype_envz00();
					BGl_importedzd2moduleszd2initz00zztype_envz00();
					BGl_toplevelzd2initzd2zztype_envz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_env");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_env");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"type_env");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 15 */
			{	/* Type/tenv.scm 15 */
				obj_t BgL_cportz00_1248;

				BgL_cportz00_1248 =
					bgl_open_input_string(BGl_string3180z00zztype_envz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1249;

					BgL_iz00_1249 = ((long) 7);
				BgL_loopz00_1250:
					if ((BgL_iz00_1249 == ((long) -1)))
						{	/* Type/tenv.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/tenv.scm 15 */
							{	/* Type/tenv.scm 15 */
								obj_t BgL_arg3182z00_1252;

								{	/* Type/tenv.scm 15 */

									{	/* Type/tenv.scm 15 */
										obj_t BgL_locationz00_1254;

										BgL_locationz00_1254 = BBOOL(((bool_t) 0));
										{	/* Type/tenv.scm 15 */

											BgL_arg3182z00_1252 =
												BGl_readz00zz__readerz00(BgL_cportz00_1248,
												BgL_locationz00_1254);
										}
									}
								}
								{	/* Type/tenv.scm 15 */
									int BgL_auxz00_1278;

									BgL_auxz00_1278 = (int) (BgL_iz00_1249);
									CNST_TABLE_SET(BgL_auxz00_1278, BgL_arg3182z00_1252);
							}}
							{	/* Type/tenv.scm 15 */
								int BgL_auxz00_1255;

								BgL_auxz00_1255 = (int) ((BgL_iz00_1249 - ((long) 1)));
								{
									long BgL_iz00_1283;

									BgL_iz00_1283 = (long) (BgL_auxz00_1255);
									BgL_iz00_1249 = BgL_iz00_1283;
									goto BgL_loopz00_1250;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 15 */
			BGl_za2Tenvza2z00zztype_envz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00 =
				((bool_t) 0), BUNSPEC);
		}
	}



/* initialize-Tenv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 76 */
			if (BGl_hashtablezf3zf3zz__hashz00(BGl_za2Tenvza2z00zztype_envz00))
				{	/* Type/tenv.scm 78 */
					return BFALSE;
				}
			else
				{	/* Type/tenv.scm 78 */
					return (BGl_za2Tenvza2z00zztype_envz00 =
						BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
				}
		}
	}



/* _initialize-Tenv! */
	obj_t BGl__initializa7ezd2Tenvz12z67zztype_envz00(obj_t BgL_envz00_1163)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 76 */
			return BGl_initializa7ezd2Tenvz12z67zztype_envz00();
		}
	}



/* get-tenv */
	BGL_EXPORTED_DEF obj_t BGl_getzd2tenvzd2zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 84 */
			return BGl_za2Tenvza2z00zztype_envz00;
		}
	}



/* _get-tenv */
	obj_t BGl__getzd2tenvzd2zztype_envz00(obj_t BgL_envz00_1164)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 84 */
			return BGl_za2Tenvza2z00zztype_envz00;
		}
	}



/* set-tenv! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t BgL_tenvz00_19)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 90 */
			BGl_initializa7ezd2Tenvz12z67zztype_envz00();
			return BGl_addzd2tenvz12zc0zztype_envz00(BgL_tenvz00_19);
		}
	}



/* _set-tenv! */
	obj_t BGl__setzd2tenvz12zc0zztype_envz00(obj_t BgL_envz00_1165,
		obj_t BgL_tenvz00_1166)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 90 */
			return BGl_setzd2tenvz12zc0zztype_envz00(BgL_tenvz00_1166);
		}
	}



/* add-tenv! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2tenvz12zc0zztype_envz00(obj_t BgL_tenvz00_20)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 102 */
			{	/* Type/tenv.scm 142 */
				obj_t BgL_rememberzd2listzd2_552;

				obj_t BgL_tvectorzd2listzd2_553;

				BgL_rememberzd2listzd2_552 = MAKE_CELL(BNIL);
				BgL_tvectorzd2listzd2_553 = MAKE_CELL(BNIL);
				{	/* Type/tenv.scm 154 */
					obj_t BgL_zc3anonymousza32984ze3z83_1170;

					BgL_zc3anonymousza32984ze3z83_1170 =
						make_fx_procedure(BGl_zc3anonymousza32984ze3z83zztype_envz00,
						(int) (((long) 2)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza32984ze3z83_1170,
						(int) (((long) 0)), BgL_rememberzd2listzd2_552);
					PROCEDURE_SET(BgL_zc3anonymousza32984ze3z83_1170,
						(int) (((long) 1)), BgL_tvectorzd2listzd2_553);
					BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_tenvz00_20,
						BgL_zc3anonymousza32984ze3z83_1170);
				}
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_tenvz00_20,
					BGl_proc3165z00zztype_envz00);
				{
					obj_t BgL_l2958z00_577;

					BgL_l2958z00_577 = CELL_REF(BgL_rememberzd2listzd2_552);
				BgL_zc3anonymousza32994ze3z83_578:
					if (PAIRP(BgL_l2958z00_577))
						{	/* Type/tenv.scm 187 */
							{	/* Type/tenv.scm 188 */
								obj_t BgL_newz00_580;

								BgL_newz00_580 = CAR(BgL_l2958z00_577);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_newz00_580,
										BGl_tclassz00zzobject_classz00))
									{	/* Type/tenv.scm 189 */
										obj_t BgL_superz00_582;

										{	/* Type/tenv.scm 189 */
											BgL_tclassz00_bglt BgL_obj2666z00_1004;

											BgL_obj2666z00_1004 =
												(BgL_tclassz00_bglt) (BgL_newz00_580);
											{
												obj_t BgL_auxz00_1308;

												{	/* Type/tenv.scm 189 */
													BgL_objectz00_bglt BgL_auxz00_1309;

													BgL_auxz00_1309 =
														(BgL_objectz00_bglt) (BgL_obj2666z00_1004);
													BgL_auxz00_1308 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1309);
												}
												BgL_superz00_582 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1308))->
													BgL_itszd2superzd2);
											}
										}
										if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_582,
												BGl_tclassz00zzobject_classz00))
											{	/* Type/tenv.scm 191 */
												obj_t BgL_superzd2idzd2_584;

												{
													BgL_typez00_bglt BgL_auxz00_1315;

													BgL_auxz00_1315 =
														(BgL_typez00_bglt) (
														(BgL_tclassz00_bglt) (BgL_superz00_582));
													BgL_superzd2idzd2_584 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_1315))->
														BgL_idz00);
												}
												{	/* Type/tenv.scm 191 */
													BgL_typez00_bglt BgL_oldzd2szd2_585;

													BgL_oldzd2szd2_585 =
														BGl_findzd2typezd2zztype_envz00
														(BgL_superzd2idzd2_584);
													{	/* Type/tenv.scm 192 */

														{	/* Type/tenv.scm 193 */
															bool_t BgL_testz00_1320;

															{	/* Type/tenv.scm 193 */
																obj_t BgL_obj2665z00_1007;

																BgL_obj2665z00_1007 =
																	(obj_t) (BgL_oldzd2szd2_585);
																BgL_testz00_1320 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj2665z00_1007,
																	BGl_tclassz00zzobject_classz00);
															}
															if (BgL_testz00_1320)
																{	/* Type/tenv.scm 197 */
																	BgL_tclassz00_bglt BgL_obj2668z00_1008;

																	obj_t BgL_val2667z00_1009;

																	BgL_obj2668z00_1008 =
																		(BgL_tclassz00_bglt) (BgL_newz00_580);
																	BgL_val2667z00_1009 =
																		(obj_t) (
																		(BgL_tclassz00_bglt) (BgL_oldzd2szd2_585));
																	{
																		obj_t BgL_auxz00_1326;

																		{	/* Type/tenv.scm 197 */
																			BgL_objectz00_bglt BgL_auxz00_1327;

																			BgL_auxz00_1327 =
																				(BgL_objectz00_bglt)
																				(BgL_obj2668z00_1008);
																			BgL_auxz00_1326 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1327);
																		}
																		((((BgL_tclassz00_bglt)
																					CREF(BgL_auxz00_1326))->
																				BgL_itszd2superzd2) =
																			((obj_t) BgL_val2667z00_1009), BUNSPEC);
																	}
																}
															else
																{	/* Type/tenv.scm 194 */
																	obj_t BgL_arg3000z00_587;

																	obj_t BgL_arg3002z00_589;

																	BgL_arg3000z00_587 =
																		CNST_TABLE_REF(((long) 1));
																	{
																		BgL_typez00_bglt BgL_auxz00_1332;

																		BgL_auxz00_1332 =
																			(BgL_typez00_bglt) (
																			(BgL_tclassz00_bglt) (BgL_newz00_580));
																		BgL_arg3002z00_589 =
																			(((BgL_typez00_bglt)
																				CREF(BgL_auxz00_1332))->BgL_namez00);
																	}
																	BGl_errorz00zz__errorz00(BgL_arg3000z00_587,
																		BGl_string3166z00zztype_envz00,
																		BgL_arg3002z00_589);
											}}}}}
										else
											{	/* Type/tenv.scm 190 */
												BFALSE;
											}
									}
								else
									{	/* Type/tenv.scm 188 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l2958z00_1337;

								BgL_l2958z00_1337 = CDR(BgL_l2958z00_577);
								BgL_l2958z00_577 = BgL_l2958z00_1337;
								goto BgL_zc3anonymousza32994ze3z83_578;
							}
						}
					else
						{	/* Type/tenv.scm 187 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_l2960z00_593;

					BgL_l2960z00_593 = CELL_REF(BgL_tvectorzd2listzd2_553);
				BgL_zc3anonymousza33004ze3z83_594:
					if (PAIRP(BgL_l2960z00_593))
						{	/* Type/tenv.scm 200 */
							{	/* Type/tenv.scm 201 */
								obj_t BgL_newz00_596;

								BgL_newz00_596 = CAR(BgL_l2960z00_593);
								BGl_delayzd2tvectorz12zc0zzmodule_typez00(BgL_newz00_596,
									CNST_TABLE_REF(((long) 2)));
							}
							{
								obj_t BgL_l2960z00_1344;

								BgL_l2960z00_1344 = CDR(BgL_l2960z00_593);
								BgL_l2960z00_593 = BgL_l2960z00_1344;
								goto BgL_zc3anonymousza33004ze3z83_594;
							}
						}
					else
						{	/* Type/tenv.scm 200 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_l2962z00_600;

					BgL_l2962z00_600 = CELL_REF(BgL_rememberzd2listzd2_552);
				BgL_zc3anonymousza33007ze3z83_601:
					if (PAIRP(BgL_l2962z00_600))
						{	/* Type/tenv.scm 211 */
							{	/* Type/tenv.scm 212 */
								obj_t BgL_nz00_603;

								BgL_nz00_603 = CAR(BgL_l2962z00_600);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_nz00_603,
										BGl_tclassz00zzobject_classz00))
									{	/* Type/tenv.scm 216 */
										obj_t BgL_arg3010z00_605;

										{	/* Type/tenv.scm 216 */
											obj_t BgL_zc3anonymousza33012ze3z83_1168;

											BgL_zc3anonymousza33012ze3z83_1168 =
												make_fx_procedure
												(BGl_zc3anonymousza33012ze3z83zztype_envz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza33012ze3z83_1168,
												(int) (((long) 0)), BgL_nz00_603);
											BgL_arg3010z00_605 =
												BGl_makezd2promisezd2zz__r4_control_features_6_9z00
												(BgL_zc3anonymousza33012ze3z83_1168);
										}
										(obj_t)
											(BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(
												(BgL_typez00_bglt) ((BgL_tclassz00_bglt)
													(BgL_nz00_603)), BgL_arg3010z00_605));
									}
								else
									{	/* Type/tenv.scm 212 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l2962z00_1361;

								BgL_l2962z00_1361 = CDR(BgL_l2962z00_600);
								BgL_l2962z00_600 = BgL_l2962z00_1361;
								goto BgL_zc3anonymousza33007ze3z83_601;
							}
						}
					else
						{	/* Type/tenv.scm 211 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
				BGl_proc3167z00zztype_envz00);
		}
	}



/* _add-tenv! */
	obj_t BGl__addzd2tenvz12zc0zztype_envz00(obj_t BgL_envz00_1171,
		obj_t BgL_tenvz00_1172)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 102 */
			return BGl_addzd2tenvz12zc0zztype_envz00(BgL_tenvz00_1172);
		}
	}



/* <anonymous:3016> */
	obj_t BGl_zc3anonymousza33016ze3z83zztype_envz00(obj_t BgL_envz00_1173,
		obj_t BgL_kz00_1174, obj_t BgL_newz00_1175)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 227 */
			{
				obj_t BgL_kz00_613;

				obj_t BgL_newz00_614;

				{	/* Type/tenv.scm 228 */
					bool_t BgL_auxz00_1365;

					BgL_kz00_613 = BgL_kz00_1174;
					BgL_newz00_614 = BgL_newz00_1175;
					{
						obj_t BgL_typez00_617;

						BgL_typez00_617 = BgL_newz00_614;
						{	/* Type/tenv.scm 105 */
							bool_t BgL_testz00_1366;

							{	/* Type/tenv.scm 105 */
								obj_t BgL_arg3022z00_623;

								{
									BgL_typez00_bglt BgL_auxz00_1367;

									BgL_auxz00_1367 = (BgL_typez00_bglt) (BgL_typez00_617);
									BgL_arg3022z00_623 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_1367))->BgL_aliasz00);
								}
								BgL_testz00_1366 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg3022z00_623,
									BGl_typez00zztype_typez00);
							}
							if (BgL_testz00_1366)
								{	/* Type/tenv.scm 106 */
									BgL_typez00_bglt BgL_arg3019z00_620;

									{	/* Type/tenv.scm 106 */
										obj_t BgL_arg3020z00_621;

										{	/* Type/tenv.scm 106 */
											BgL_typez00_bglt BgL_obj2022z00_1023;

											{	/* Type/tenv.scm 106 */
												BgL_typez00_bglt BgL_obj2047z00_1022;

												BgL_obj2047z00_1022 =
													(BgL_typez00_bglt) (BgL_typez00_617);
												BgL_obj2022z00_1023 =
													(BgL_typez00_bglt) (
													(((BgL_typez00_bglt) CREF(BgL_obj2047z00_1022))->
														BgL_aliasz00));
											}
											BgL_arg3020z00_621 =
												(((BgL_typez00_bglt) CREF(BgL_obj2022z00_1023))->
												BgL_idz00);
										}
										BgL_arg3019z00_620 =
											BGl_findzd2typezd2zztype_envz00(BgL_arg3020z00_621);
									}
									{
										obj_t BgL_auxz00_1378;

										BgL_typez00_bglt BgL_auxz00_1376;

										BgL_auxz00_1378 = (obj_t) (BgL_arg3019z00_620);
										BgL_auxz00_1376 = (BgL_typez00_bglt) (BgL_typez00_617);
										((((BgL_typez00_bglt) CREF(BgL_auxz00_1376))->
												BgL_aliasz00) = ((obj_t) BgL_auxz00_1378), BUNSPEC);
									}
								}
							else
								{	/* Type/tenv.scm 105 */
									BFALSE;
								}
						}
						{	/* Type/tenv.scm 109 */
							obj_t BgL_arg3023z00_624;

							{	/* Type/tenv.scm 109 */
								obj_t BgL_l2947z00_625;

								{
									BgL_typez00_bglt BgL_auxz00_1381;

									BgL_auxz00_1381 = (BgL_typez00_bglt) (BgL_typez00_617);
									BgL_l2947z00_625 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_1381))->
										BgL_parentsz00);
								}
								if (NULLP(BgL_l2947z00_625))
									{	/* Type/tenv.scm 109 */
										BgL_arg3023z00_624 = BNIL;
									}
								else
									{	/* Type/tenv.scm 109 */
										obj_t BgL_head2949z00_627;

										BgL_head2949z00_627 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l2947z00_629;

											obj_t BgL_tail2950z00_630;

											BgL_l2947z00_629 = BgL_l2947z00_625;
											BgL_tail2950z00_630 = BgL_head2949z00_627;
										BgL_zc3anonymousza33025ze3z83_631:
											if (NULLP(BgL_l2947z00_629))
												{	/* Type/tenv.scm 109 */
													BgL_arg3023z00_624 = CDR(BgL_head2949z00_627);
												}
											else
												{	/* Type/tenv.scm 109 */
													obj_t BgL_newtail2951z00_633;

													{	/* Type/tenv.scm 109 */
														BgL_typez00_bglt BgL_arg3028z00_635;

														{	/* Type/tenv.scm 109 */
															obj_t BgL_parentz00_637;

															BgL_parentz00_637 = CAR(BgL_l2947z00_629);
															{	/* Type/tenv.scm 110 */
																obj_t BgL_arg3030z00_638;

																{
																	BgL_typez00_bglt BgL_auxz00_1391;

																	BgL_auxz00_1391 =
																		(BgL_typez00_bglt) (BgL_parentz00_637);
																	BgL_arg3030z00_638 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_auxz00_1391))->BgL_idz00);
																}
																BgL_arg3028z00_635 =
																	BGl_findzd2typezd2zztype_envz00
																	(BgL_arg3030z00_638);
															}
														}
														BgL_newtail2951z00_633 =
															MAKE_PAIR((obj_t) (BgL_arg3028z00_635), BNIL);
													}
													SET_CDR(BgL_tail2950z00_630, BgL_newtail2951z00_633);
													{
														obj_t BgL_tail2950z00_1400;

														obj_t BgL_l2947z00_1398;

														BgL_l2947z00_1398 = CDR(BgL_l2947z00_629);
														BgL_tail2950z00_1400 = BgL_newtail2951z00_633;
														BgL_tail2950z00_630 = BgL_tail2950z00_1400;
														BgL_l2947z00_629 = BgL_l2947z00_1398;
														goto BgL_zc3anonymousza33025ze3z83_631;
													}
												}
										}
									}
							}
							{
								BgL_typez00_bglt BgL_auxz00_1401;

								BgL_auxz00_1401 = (BgL_typez00_bglt) (BgL_typez00_617);
								((((BgL_typez00_bglt) CREF(BgL_auxz00_1401))->BgL_parentsz00) =
									((obj_t) BgL_arg3023z00_624), BUNSPEC);
							}
						}
						{	/* Type/tenv.scm 113 */
							obj_t BgL_g2954z00_640;

							{
								BgL_typez00_bglt BgL_auxz00_1404;

								BgL_auxz00_1404 = (BgL_typez00_bglt) (BgL_typez00_617);
								BgL_g2954z00_640 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_1404))->
									BgL_coercezd2tozd2);
							}
							{
								obj_t BgL_l2952z00_642;

								BgL_l2952z00_642 = BgL_g2954z00_640;
							BgL_zc3anonymousza33031ze3z83_643:
								if (PAIRP(BgL_l2952z00_642))
									{	/* Type/tenv.scm 118 */
										{	/* Type/tenv.scm 114 */
											obj_t BgL_coercerz00_645;

											BgL_coercerz00_645 = CAR(BgL_l2952z00_642);
											{	/* Type/tenv.scm 114 */
												obj_t BgL_fromz00_646;

												obj_t BgL_toz00_647;

												BgL_fromz00_646 =
													STRUCT_REF(BgL_coercerz00_645, (int) (((long) 0)));
												BgL_toz00_647 =
													STRUCT_REF(BgL_coercerz00_645, (int) (((long) 1)));
												{	/* Type/tenv.scm 116 */
													BgL_typez00_bglt BgL_arg3033z00_648;

													{	/* Type/tenv.scm 116 */
														obj_t BgL_arg3034z00_649;

														{
															BgL_typez00_bglt BgL_auxz00_1414;

															BgL_auxz00_1414 =
																(BgL_typez00_bglt) (BgL_fromz00_646);
															BgL_arg3034z00_649 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1414))->
																BgL_idz00);
														}
														BgL_arg3033z00_648 =
															BGl_findzd2typezd2zztype_envz00
															(BgL_arg3034z00_649);
													}
													{	/* Type/tenv.scm 116 */
														obj_t BgL_auxz00_1420;

														int BgL_auxz00_1418;

														BgL_auxz00_1420 = (obj_t) (BgL_arg3033z00_648);
														BgL_auxz00_1418 = (int) (((long) 0));
														STRUCT_SET(BgL_coercerz00_645, BgL_auxz00_1418,
															BgL_auxz00_1420);
												}}
												{	/* Type/tenv.scm 117 */
													BgL_typez00_bglt BgL_arg3035z00_650;

													{	/* Type/tenv.scm 117 */
														obj_t BgL_arg3036z00_651;

														{
															BgL_typez00_bglt BgL_auxz00_1423;

															BgL_auxz00_1423 =
																(BgL_typez00_bglt) (BgL_toz00_647);
															BgL_arg3036z00_651 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1423))->
																BgL_idz00);
														}
														BgL_arg3035z00_650 =
															BGl_findzd2typezd2zztype_envz00
															(BgL_arg3036z00_651);
													}
													{	/* Type/tenv.scm 117 */
														obj_t BgL_auxz00_1429;

														int BgL_auxz00_1427;

														BgL_auxz00_1429 = (obj_t) (BgL_arg3035z00_650);
														BgL_auxz00_1427 = (int) (((long) 1));
														STRUCT_SET(BgL_coercerz00_645, BgL_auxz00_1427,
															BgL_auxz00_1429);
										}}}}
										{
											obj_t BgL_l2952z00_1432;

											BgL_l2952z00_1432 = CDR(BgL_l2952z00_642);
											BgL_l2952z00_642 = BgL_l2952z00_1432;
											goto BgL_zc3anonymousza33031ze3z83_643;
										}
									}
								else
									{	/* Type/tenv.scm 118 */
										BgL_auxz00_1365 = ((bool_t) 1);
									}
							}
						}
					}
					return BBOOL(BgL_auxz00_1365);
				}
			}
		}
	}



/* <anonymous:3012> */
	obj_t BGl_zc3anonymousza33012ze3z83zztype_envz00(obj_t BgL_envz00_1176)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 215 */
			{	/* Type/tenv.scm 216 */
				obj_t BgL_nz00_1177;

				BgL_nz00_1177 = PROCEDURE_REF(BgL_envz00_1176, (int) (((long) 0)));
				{

					{	/* Type/tenv.scm 216 */
						bool_t BgL_testz00_1437;

						{	/* Type/tenv.scm 216 */
							BgL_tclassz00_bglt BgL_obj2673z00_1018;

							BgL_obj2673z00_1018 = (BgL_tclassz00_bglt) (BgL_nz00_1177);
							{	/* Type/tenv.scm 216 */
								obj_t BgL_auxz00_1439;

								{
									obj_t BgL_auxz00_1440;

									{	/* Type/tenv.scm 216 */
										BgL_objectz00_bglt BgL_auxz00_1441;

										BgL_auxz00_1441 =
											(BgL_objectz00_bglt) (BgL_obj2673z00_1018);
										BgL_auxz00_1440 = BGL_OBJECT_WIDENING(BgL_auxz00_1441);
									}
									BgL_auxz00_1439 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1440))->
										BgL_wideningz00);
								}
								BgL_testz00_1437 = CBOOL(BgL_auxz00_1439);
						}}
						if (BgL_testz00_1437)
							{	/* Type/tenv.scm 216 */
								return
									BGl_heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2
									((BgL_tclassz00_bglt) (BgL_nz00_1177));
							}
						else
							{	/* Type/tenv.scm 216 */
								return
									BGl_heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
									((BgL_tclassz00_bglt) (BgL_nz00_1177));
							}
					}
				}
			}
		}
	}



/* <anonymous:2991> */
	obj_t BGl_zc3anonymousza32991ze3z83zztype_envz00(obj_t BgL_envz00_1178,
		obj_t BgL_kz00_1179, obj_t BgL_newz00_1180)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 178 */
			{
				obj_t BgL_kz00_567;

				obj_t BgL_newz00_568;

				BgL_kz00_567 = BgL_kz00_1179;
				BgL_newz00_568 = BgL_newz00_1180;
				{	/* Type/tenv.scm 179 */
					obj_t BgL_idz00_570;

					{
						BgL_typez00_bglt BgL_auxz00_1450;

						BgL_auxz00_1450 = (BgL_typez00_bglt) (BgL_newz00_568);
						BgL_idz00_570 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1450))->BgL_idz00);
					}
					{	/* Type/tenv.scm 179 */
						obj_t BgL_oldz00_571;

						BgL_oldz00_571 =
							BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
							BgL_idz00_570);
						{	/* Type/tenv.scm 180 */

							if (BGl_ctypezf3zf3zzforeign_ctypez00(BgL_oldz00_571))
								{	/* Type/tenv.scm 182 */
									obj_t BgL_lz00_573;

									{
										BgL_typez00_bglt BgL_auxz00_1456;

										BgL_auxz00_1456 = (BgL_typez00_bglt) (BgL_oldz00_571);
										BgL_lz00_573 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_1456))->
											BgL_locationz00);
									}
									return
										BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00
										(BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(
											(BgL_typez00_bglt) (BgL_oldz00_571),
											(BgL_typez00_bglt) (BgL_oldz00_571), BgL_lz00_573));
								}
							else
								{	/* Type/tenv.scm 181 */
									return BFALSE;
								}
						}
					}
				}
			}
		}
	}



/* <anonymous:2984> */
	obj_t BGl_zc3anonymousza32984ze3z83zztype_envz00(obj_t BgL_envz00_1181,
		obj_t BgL_kz00_1184, obj_t BgL_newz00_1185)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 153 */
			{	/* Type/tenv.scm 154 */
				obj_t BgL_rememberzd2listzd2_1182;

				obj_t BgL_tvectorzd2listzd2_1183;

				BgL_rememberzd2listzd2_1182 =
					PROCEDURE_REF(BgL_envz00_1181, (int) (((long) 0)));
				BgL_tvectorzd2listzd2_1183 =
					PROCEDURE_REF(BgL_envz00_1181, (int) (((long) 1)));
				{
					obj_t BgL_kz00_555;

					obj_t BgL_newz00_556;

					BgL_kz00_555 = BgL_kz00_1184;
					BgL_newz00_556 = BgL_newz00_1185;
					{
						BgL_typez00_bglt BgL_oldz00_667;

						obj_t BgL_newz00_668;

						BgL_typez00_bglt BgL_fromz00_654;

						BgL_typez00_bglt BgL_toz00_655;

						{	/* Type/tenv.scm 154 */
							obj_t BgL_idz00_558;

							{
								BgL_typez00_bglt BgL_auxz00_1467;

								BgL_auxz00_1467 = (BgL_typez00_bglt) (BgL_newz00_556);
								BgL_idz00_558 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_1467))->BgL_idz00);
							}
							{	/* Type/tenv.scm 154 */
								obj_t BgL_oldz00_559;

								BgL_oldz00_559 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2Tenvza2z00zztype_envz00, BgL_idz00_558);
								{	/* Type/tenv.scm 155 */

									if (BGl_iszd2azf3z21zz__objectz00(BgL_oldz00_559,
											BGl_typez00zztype_typez00))
										{	/* Type/tenv.scm 168 */
											bool_t BgL_testz00_1473;

											{
												BgL_typez00_bglt BgL_auxz00_1474;

												BgL_auxz00_1474 = (BgL_typez00_bglt) (BgL_oldz00_559);
												BgL_testz00_1473 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_1474))->
													BgL_initzf3zf3);
											}
											if (BgL_testz00_1473)
												{	/* Type/tenv.scm 176 */
													bool_t BgL_auxz00_1477;

													BgL_oldz00_667 = (BgL_typez00_bglt) (BgL_oldz00_559);
													BgL_newz00_668 = BgL_newz00_556;
													{	/* Type/tenv.scm 129 */
														obj_t BgL_g2957z00_670;

														{
															BgL_typez00_bglt BgL_auxz00_1478;

															BgL_auxz00_1478 =
																(BgL_typez00_bglt) (BgL_newz00_668);
															BgL_g2957z00_670 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1478))->
																BgL_coercezd2tozd2);
														}
														{
															obj_t BgL_l2955z00_672;

															BgL_l2955z00_672 = BgL_g2957z00_670;
														BgL_zc3anonymousza33046ze3z83_673:
															if (PAIRP(BgL_l2955z00_672))
																{	/* Type/tenv.scm 139 */
																	{	/* Type/tenv.scm 130 */
																		obj_t BgL_coercerz00_675;

																		BgL_coercerz00_675 = CAR(BgL_l2955z00_672);
																		{	/* Type/tenv.scm 130 */
																			obj_t BgL_toz00_677;

																			BgL_toz00_677 =
																				STRUCT_REF(BgL_coercerz00_675,
																				(int) (((long) 1)));
																			{	/* Type/tenv.scm 131 */
																				obj_t BgL_tidz00_678;

																				{
																					BgL_typez00_bglt BgL_auxz00_1486;

																					BgL_auxz00_1486 =
																						(BgL_typez00_bglt) (BgL_toz00_677);
																					BgL_tidz00_678 =
																						(((BgL_typez00_bglt)
																							CREF(BgL_auxz00_1486))->
																						BgL_idz00);
																				}
																				{	/* Type/tenv.scm 132 */
																					bool_t BgL_tidzd2existszf3z21_679;

																					BgL_tidzd2existszf3z21_679 =
																						BGl_typezd2existszf3z21zztype_envz00
																						(BgL_tidz00_678);
																					{	/* Type/tenv.scm 133 */

																						{	/* Type/tenv.scm 134 */
																							bool_t BgL_testz00_1490;

																							if (BgL_tidzd2existszf3z21_679)
																								{	/* Type/tenv.scm 135 */
																									bool_t BgL_testz00_1492;

																									{	/* Type/tenv.scm 135 */
																										BgL_typez00_bglt
																											BgL_arg3052z00_684;
																										BgL_arg3052z00_684 =
																											BGl_findzd2typezd2zztype_envz00
																											(BgL_tidz00_678);
																										{	/* Type/tenv.scm 135 */
																											obj_t BgL_auxz00_1494;

																											BgL_fromz00_654 =
																												BgL_oldz00_667;
																											BgL_toz00_655 =
																												BgL_arg3052z00_684;
																											{
																												obj_t
																													BgL_coercerz00_659;
																												BgL_coercerz00_659 =
																													(((BgL_typez00_bglt)
																														CREF
																														(BgL_fromz00_654))->
																													BgL_coercezd2tozd2);
																											BgL_zc3anonymousza33039ze3z83_660:
																												if (NULLP
																													(BgL_coercerz00_659))
																													{	/* Type/tenv.scm 122 */
																														BgL_auxz00_1494 =
																															BFALSE;
																													}
																												else
																													{	/* Type/tenv.scm 122 */
																														if (
																															(STRUCT_REF(CAR
																																	(BgL_coercerz00_659),
																																	(int) (((long)
																																			1))) ==
																																(obj_t)
																																(BgL_toz00_655)))
																															{	/* Type/tenv.scm 124 */
																																BgL_auxz00_1494
																																	=
																																	CAR
																																	(BgL_coercerz00_659);
																															}
																														else
																															{
																																obj_t
																																	BgL_coercerz00_1504;
																																BgL_coercerz00_1504
																																	=
																																	CDR
																																	(BgL_coercerz00_659);
																																BgL_coercerz00_659
																																	=
																																	BgL_coercerz00_1504;
																																goto
																																	BgL_zc3anonymousza33039ze3z83_660;
																															}
																													}
																											}
																											BgL_testz00_1492 =
																												CBOOL(BgL_auxz00_1494);
																										}
																									}
																									if (BgL_testz00_1492)
																										{	/* Type/tenv.scm 135 */
																											BgL_testz00_1490 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Type/tenv.scm 135 */
																											BgL_testz00_1490 =
																												((bool_t) 1);
																										}
																								}
																							else
																								{	/* Type/tenv.scm 134 */
																									BgL_testz00_1490 =
																										((bool_t) 1);
																								}
																							if (BgL_testz00_1490)
																								{	/* Type/tenv.scm 138 */
																									obj_t BgL_arg3049z00_681;

																									{	/* Type/tenv.scm 138 */
																										obj_t BgL_arg3050z00_682;

																										BgL_arg3050z00_682 =
																											(((BgL_typez00_bglt)
																												CREF(BgL_oldz00_667))->
																											BgL_coercezd2tozd2);
																										BgL_arg3049z00_681 =
																											MAKE_PAIR
																											(BgL_coercerz00_675,
																											BgL_arg3050z00_682);
																									}
																									((((BgL_typez00_bglt)
																												CREF(BgL_oldz00_667))->
																											BgL_coercezd2tozd2) =
																										((obj_t)
																											BgL_arg3049z00_681),
																										BUNSPEC);
																								}
																							else
																								{	/* Type/tenv.scm 134 */
																									BFALSE;
																								}
																						}
																					}
																				}
																			}
																		}
																	}
																	{
																		obj_t BgL_l2955z00_1511;

																		BgL_l2955z00_1511 = CDR(BgL_l2955z00_672);
																		BgL_l2955z00_672 = BgL_l2955z00_1511;
																		goto BgL_zc3anonymousza33046ze3z83_673;
																	}
																}
															else
																{	/* Type/tenv.scm 139 */
																	BgL_auxz00_1477 = ((bool_t) 1);
																}
														}
													}
													return BBOOL(BgL_auxz00_1477);
												}
											else
												{	/* Type/tenv.scm 168 */
													BGl_errorz00zz__errorz00
														(BGl_string3168z00zztype_envz00,
														BGl_string3169z00zztype_envz00, BgL_idz00_558);
													return
														BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long)
																55)));
										}}
									else
										{	/* Type/tenv.scm 157 */
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2Tenvza2z00zztype_envz00, BgL_idz00_558,
												BgL_newz00_556);
											if (BGl_iszd2azf3z21zz__objectz00(BgL_newz00_556,
													BGl_tclassz00zzobject_classz00))
												{	/* Type/tenv.scm 159 */
													BGl_heapzd2addzd2classz12z12zzobject_classz00(
														(BgL_tclassz00_bglt) (BgL_newz00_556));
													{	/* Type/tenv.scm 161 */
														obj_t BgL_auxz00_1186;

														BgL_auxz00_1186 =
															MAKE_PAIR(BgL_newz00_556,
															CELL_REF(BgL_rememberzd2listzd2_1182));
														CELL_SET(BgL_rememberzd2listzd2_1182,
															BgL_auxz00_1186);
													}
												}
											else
												{	/* Type/tenv.scm 159 */
													BFALSE;
												}
											if (BGl_iszd2azf3z21zz__objectz00(BgL_newz00_556,
													BGl_jclassz00zzobject_classz00))
												{	/* Type/tenv.scm 163 */
													BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00
														(BgL_newz00_556);
												}
											else
												{	/* Type/tenv.scm 163 */
													BFALSE;
												}
											if (BGl_iszd2azf3z21zz__objectz00(BgL_newz00_556,
													BGl_tvecz00zztvector_tvectorz00))
												{	/* Type/tenv.scm 166 */
													obj_t BgL_auxz00_1187;

													BgL_auxz00_1187 =
														MAKE_PAIR(BgL_newz00_556,
														CELL_REF(BgL_tvectorzd2listzd2_1183));
													return
														CELL_SET(BgL_tvectorzd2listzd2_1183,
														BgL_auxz00_1187);
												}
											else
												{	/* Type/tenv.scm 165 */
													return BFALSE;
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



/* find-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t
		BgL_idz00_21)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 233 */
			{	/* Type/tenv.scm 234 */
				obj_t BgL_typez00_690;

				BgL_typez00_690 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_21);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_690,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 235 */
						return (BgL_typez00_bglt) (BgL_typez00_690);
					}
				else
					{	/* Type/tenv.scm 235 */
						return
							(BgL_typez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF((
										(long) 3)), BGl_string3170z00zztype_envz00, BgL_idz00_21));
		}}}
	}



/* _find-type */
	obj_t BGl__findzd2typezd2zztype_envz00(obj_t BgL_envz00_1188,
		obj_t BgL_idz00_1189)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 233 */
			return (obj_t) (BGl_findzd2typezd2zztype_envz00(BgL_idz00_1189));
		}
	}



/* find-type/location */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_findzd2typezf2locationz20zztype_envz00(obj_t BgL_idz00_22,
		obj_t BgL_locz00_23)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 242 */
			{	/* Type/tenv.scm 243 */
				obj_t BgL_typez00_692;

				BgL_typez00_692 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_22);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_692,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 244 */
						return (BgL_typez00_bglt) (BgL_typez00_692);
					}
				else
					{	/* Type/tenv.scm 244 */
						return
							(BgL_typez00_bglt) (BGl_userzd2errorzf2locationz20zztools_errorz00
							(BgL_locz00_23, CNST_TABLE_REF(((long) 3)),
								BGl_string3170z00zztype_envz00, BgL_idz00_22, BNIL));
		}}}
	}



/* _find-type/location */
	obj_t BGl__findzd2typezf2locationz20zztype_envz00(obj_t BgL_envz00_1190,
		obj_t BgL_idz00_1191, obj_t BgL_locz00_1192)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 242 */
			return
				(obj_t) (BGl_findzd2typezf2locationz20zztype_envz00(BgL_idz00_1191,
					BgL_locz00_1192));
		}
	}



/* type-exists? */
	BGL_EXPORTED_DEF bool_t BGl_typezd2existszf3z21zztype_envz00(obj_t
		BgL_idz00_24)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 253 */
			{	/* Type/tenv.scm 254 */
				obj_t BgL_typez00_695;

				BgL_typez00_695 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_24);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_695,
						BGl_typez00zztype_typez00))
					{
						BgL_typez00_bglt BgL_auxz00_1551;

						BgL_auxz00_1551 = (BgL_typez00_bglt) (BgL_typez00_695);
						return (((BgL_typez00_bglt) CREF(BgL_auxz00_1551))->BgL_initzf3zf3);
					}
				else
					{	/* Type/tenv.scm 255 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _type-exists? */
	obj_t BGl__typezd2existszf3z21zztype_envz00(obj_t BgL_envz00_1193,
		obj_t BgL_idz00_1194)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 253 */
			return BBOOL(BGl_typezd2existszf3z21zztype_envz00(BgL_idz00_1194));
		}
	}



/* bind-type! */
	BgL_typez00_bglt BGl_bindzd2typez12zc0zztype_envz00(obj_t BgL_idz00_25,
		bool_t BgL_initzf3zf3_26, obj_t BgL_locz00_27)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 262 */
			{	/* Type/tenv.scm 263 */
				obj_t BgL_typez00_697;

				BgL_typez00_697 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_25);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_697,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 265 */
						bool_t BgL_testz00_1559;

						if (CBOOL
							(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00))
							{	/* Type/tenv.scm 265 */
								BgL_testz00_1559 = ((bool_t) 0);
							}
						else
							{	/* Type/tenv.scm 265 */
								if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
									{	/* Type/tenv.scm 266 */
										BgL_testz00_1559 = ((bool_t) 0);
									}
								else
									{
										BgL_typez00_bglt BgL_auxz00_1564;

										BgL_auxz00_1564 = (BgL_typez00_bglt) (BgL_typez00_697);
										BgL_testz00_1559 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_1564))->
											BgL_initzf3zf3);
									}
							}
						if (BgL_testz00_1559)
							{	/* Type/tenv.scm 268 */
								obj_t BgL_arg3060z00_700;

								obj_t BgL_arg3063z00_702;

								BgL_arg3060z00_700 = CNST_TABLE_REF(((long) 4));
								BgL_arg3063z00_702 =
									BGl_shapez00zztools_shapez00(BgL_typez00_697);
								return
									(BgL_typez00_bglt) (BGl_userzd2errorzd2zztools_errorz00
									(BgL_arg3060z00_700, BGl_string3171z00zztype_envz00,
										BgL_arg3063z00_702, BNIL));
							}
						else
							{	/* Type/tenv.scm 265 */
								{	/* Type/tenv.scm 270 */
									bool_t BgL_testz00_1571;

									if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_697,
											BGl_typez00zztype_typez00))
										{	/* Type/tenv.scm 270 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Type/tenv.scm 271 */
													BgL_testz00_1571 = ((bool_t) 0);
												}
											else
												{
													BgL_typez00_bglt BgL_auxz00_1576;

													BgL_auxz00_1576 =
														(BgL_typez00_bglt) (BgL_typez00_697);
													BgL_testz00_1571 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_1576))->
														BgL_initzf3zf3);
												}
										}
									else
										{	/* Type/tenv.scm 270 */
											BgL_testz00_1571 = ((bool_t) 0);
										}
									if (BgL_testz00_1571)
										{	/* Type/tenv.scm 270 */
											if (CBOOL
												(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00))
												{	/* Type/tenv.scm 273 */
													BFALSE;
												}
											else
												{	/* Type/tenv.scm 274 */
													obj_t BgL_arg3066z00_705;

													obj_t BgL_arg3068z00_707;

													BgL_arg3066z00_705 = CNST_TABLE_REF(((long) 4));
													BgL_arg3068z00_707 =
														BGl_shapez00zztools_shapez00(BgL_typez00_697);
													BGl_userzd2warningzd2zztools_errorz00
														(BgL_arg3066z00_705, BGl_string3171z00zztype_envz00,
														BgL_arg3068z00_707);
										}}
									else
										{	/* Type/tenv.scm 270 */
											BFALSE;
										}
								}
								if (BgL_initzf3zf3_26)
									{
										BgL_typez00_bglt BgL_auxz00_1585;

										BgL_auxz00_1585 = (BgL_typez00_bglt) (BgL_typez00_697);
										((((BgL_typez00_bglt) CREF(BgL_auxz00_1585))->
												BgL_initzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
								else
									{	/* Type/tenv.scm 279 */
										BFALSE;
									}
								return (BgL_typez00_bglt) (BgL_typez00_697);
							}
					}
				else
					{	/* Type/tenv.scm 282 */
						BgL_typez00_bglt BgL_newz00_709;

						BgL_newz00_709 =
							BGl_makezd2typezd2zztype_typez00(BgL_idz00_25, BUNSPEC, BUNSPEC,
							CNST_TABLE_REF(((long) 5)), BNIL, BNIL, BgL_initzf3zf3_26,
							((bool_t) 0), BTRUE, BFALSE, BFALSE, BUNSPEC, BgL_locz00_27,
							BFALSE, (int) (((long) 0)));
						BGl_hashtablezd2putz12zc0zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
							BgL_idz00_25, (obj_t) (BgL_newz00_709));
						return BgL_newz00_709;
					}
			}
		}
	}



/* use-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t
		BgL_idz00_28, obj_t BgL_locz00_29)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 289 */
			{	/* Type/tenv.scm 291 */
				obj_t BgL_typez00_710;

				BgL_typez00_710 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_28);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_710,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 293 */
						return (BgL_typez00_bglt) (BgL_typez00_710);
					}
				else
					{	/* Type/tenv.scm 293 */
						if (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00)
							{	/* Type/tenv.scm 295 */
								return
									(BgL_typez00_bglt)
									(BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_29,
										CNST_TABLE_REF(((long) 6)), BGl_string3170z00zztype_envz00,
										BgL_idz00_28, BNIL));
							}
						else
							{	/* Type/tenv.scm 295 */
								return
									BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_28, ((bool_t) 0),
									BgL_locz00_29);
							}
					}
			}
		}
	}



/* _use-type! */
	obj_t BGl__usezd2typez12zc0zztype_envz00(obj_t BgL_envz00_1195,
		obj_t BgL_idz00_1196, obj_t BgL_locz00_1197)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 289 */
			return
				(obj_t) (BGl_usezd2typez12zc0zztype_envz00(BgL_idz00_1196,
					BgL_locz00_1197));
		}
	}



/* use-type/import-loc! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t BgL_idz00_30,
		obj_t BgL_locz00_31, obj_t BgL_lociz00_32)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 304 */
			{	/* Type/tenv.scm 306 */
				obj_t BgL_typez00_713;

				BgL_typez00_713 =
					BGl_hashtablezd2getzd2zz__hashz00(BGl_za2Tenvza2z00zztype_envz00,
					BgL_idz00_30);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_713,
						BGl_typez00zztype_typez00))
					{	/* Type/tenv.scm 308 */
						return (BgL_typez00_bglt) (BgL_typez00_713);
					}
				else
					{	/* Type/tenv.scm 308 */
						if (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00)
							{	/* Type/tenv.scm 310 */
								return
									(BgL_typez00_bglt)
									(BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_31,
										CNST_TABLE_REF(((long) 6)), BGl_string3170z00zztype_envz00,
										BgL_idz00_30, BNIL));
							}
						else
							{	/* Type/tenv.scm 310 */
								{	/* Type/tenv.scm 314 */
									BgL_typez00_bglt BgL_typez00_716;

									BgL_typez00_716 =
										BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_30,
										((bool_t) 0), BgL_locz00_31);
									((((BgL_typez00_bglt) CREF(BgL_typez00_716))->
											BgL_importzd2locationzd2) =
										((obj_t) BgL_lociz00_32), BUNSPEC);
									return BgL_typez00_716;
								}
							}
					}
			}
		}
	}



/* _use-type/import-loc! */
	obj_t BGl__usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t BgL_envz00_1198,
		obj_t BgL_idz00_1199, obj_t BgL_locz00_1200, obj_t BgL_lociz00_1201)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 304 */
			return
				(obj_t) (BGl_usezd2typezf2importzd2locz12ze0zztype_envz00
				(BgL_idz00_1199, BgL_locz00_1200, BgL_lociz00_1201));
		}
	}



/* use-foreign-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_usezd2foreignzd2typez12z12zztype_envz00(obj_t BgL_idz00_33,
		obj_t BgL_locz00_34)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 327 */
			{	/* Type/tenv.scm 329 */
				obj_t BgL_tidz00_717;

				BgL_tidz00_717 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_33, BgL_locz00_34);
				{	/* Type/tenv.scm 334 */
					bool_t BgL_testz00_1618;

					{	/* Type/tenv.scm 334 */
						obj_t BgL_arg3076z00_720;

						BgL_typez00_bglt BgL_arg3077z00_721;

						BgL_arg3076z00_720 = CDR(BgL_tidz00_717);
						BgL_arg3077z00_721 = BGl_getzd2defaultzd2typez00zztype_cachez00();
						BgL_testz00_1618 =
							(BgL_arg3076z00_720 == (obj_t) (BgL_arg3077z00_721));
					}
					if (BgL_testz00_1618)
						{	/* Type/tenv.scm 334 */
							return
								BGl_usezd2typez12zc0zztype_envz00(CAR(BgL_tidz00_717),
								BgL_locz00_34);
						}
					else
						{	/* Type/tenv.scm 334 */
							return (BgL_typez00_bglt) (CDR(BgL_tidz00_717));
						}
				}
			}
		}
	}



/* _use-foreign-type! */
	obj_t BGl__usezd2foreignzd2typez12z12zztype_envz00(obj_t BgL_envz00_1202,
		obj_t BgL_idz00_1203, obj_t BgL_locz00_1204)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 327 */
			return
				(obj_t) (BGl_usezd2foreignzd2typez12z12zztype_envz00(BgL_idz00_1203,
					BgL_locz00_1204));
		}
	}



/* use-foreign-type/import-loc! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t
		BgL_idz00_35, obj_t BgL_locz00_36, obj_t BgL_lociz00_37)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 349 */
			{	/* Type/tenv.scm 351 */
				obj_t BgL_tidz00_722;

				BgL_tidz00_722 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_35, BgL_locz00_36);
				{	/* Type/tenv.scm 356 */
					bool_t BgL_testz00_1630;

					{	/* Type/tenv.scm 356 */
						obj_t BgL_arg3081z00_725;

						BgL_typez00_bglt BgL_arg3082z00_726;

						BgL_arg3081z00_725 = CDR(BgL_tidz00_722);
						BgL_arg3082z00_726 = BGl_getzd2defaultzd2typez00zztype_cachez00();
						BgL_testz00_1630 =
							(BgL_arg3081z00_725 == (obj_t) (BgL_arg3082z00_726));
					}
					if (BgL_testz00_1630)
						{	/* Type/tenv.scm 356 */
							return
								BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(CAR
								(BgL_tidz00_722), BgL_locz00_36, BgL_lociz00_37);
						}
					else
						{	/* Type/tenv.scm 356 */
							return (BgL_typez00_bglt) (CDR(BgL_tidz00_722));
						}
				}
			}
		}
	}



/* _use-foreign-type/import-loc! */
	obj_t BGl__usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t
		BgL_envz00_1205, obj_t BgL_idz00_1206, obj_t BgL_locz00_1207,
		obj_t BgL_lociz00_1208)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 349 */
			return
				(obj_t) (BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
				(BgL_idz00_1206, BgL_locz00_1207, BgL_lociz00_1208));
		}
	}



/* declare-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t
		BgL_idz00_38, obj_t BgL_namez00_39, obj_t BgL_classz00_40)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 365 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_classz00_40,
						CNST_TABLE_REF(((long) 7)))))
				{	/* Type/tenv.scm 371 */
					BgL_typez00_bglt BgL_typez00_728;

					BgL_typez00_728 =
						BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_38, ((bool_t) 1),
						BUNSPEC);
					((((BgL_typez00_bglt) CREF(BgL_typez00_728))->BgL_namez00) =
						((obj_t) BgL_namez00_39), BUNSPEC);
					{
						obj_t BgL_auxz00_1647;

						BgL_auxz00_1647 =
							BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(BgL_namez00_39);
						((((BgL_typez00_bglt) CREF(BgL_typez00_728))->BgL_z42z42) =
							((obj_t) BgL_auxz00_1647), BUNSPEC);
					}
					((((BgL_typez00_bglt) CREF(BgL_typez00_728))->BgL_classz00) =
						((obj_t) BgL_classz00_40), BUNSPEC);
					return BgL_typez00_728;
				}
			else
				{	/* Type/tenv.scm 367 */
					return
						(BgL_typez00_bglt) (BGl_userzd2errorzd2zztools_errorz00
						(BGl_string3172z00zztype_envz00, BGl_string3173z00zztype_envz00,
							BgL_classz00_40, BNIL));
				}
		}
	}



/* _declare-type! */
	obj_t BGl__declarezd2typez12zc0zztype_envz00(obj_t BgL_envz00_1209,
		obj_t BgL_idz00_1210, obj_t BgL_namez00_1211, obj_t BgL_classz00_1212)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 365 */
			return
				(obj_t) (BGl_declarezd2typez12zc0zztype_envz00(BgL_idz00_1210,
					BgL_namez00_1211, BgL_classz00_1212));
		}
	}



/* declare-subtype! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2subtypez12zc0zztype_envz00(obj_t BgL_idz00_41,
		obj_t BgL_namez00_42, obj_t BgL_parentsz00_43, obj_t BgL_classz00_44)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 382 */
			{	/* Type/tenv.scm 385 */
				BgL_typez00_bglt BgL_typez00_731;

				obj_t BgL_parentsz00_732;

				BgL_typez00_731 =
					BGl_bindzd2typez12zc0zztype_envz00(BgL_idz00_41, ((bool_t) 1),
					BUNSPEC);
				if (NULLP(BgL_parentsz00_43))
					{	/* Type/tenv.scm 386 */
						BgL_parentsz00_732 = BNIL;
					}
				else
					{	/* Type/tenv.scm 386 */
						obj_t BgL_head2966z00_736;

						{	/* Type/tenv.scm 386 */
							BgL_typez00_bglt BgL_arg3094z00_749;

							BgL_arg3094z00_749 =
								BGl_findzd2typezd2zztype_envz00(CAR(BgL_parentsz00_43));
							BgL_head2966z00_736 =
								MAKE_PAIR((obj_t) (BgL_arg3094z00_749), BNIL);
						}
						{	/* Type/tenv.scm 386 */
							obj_t BgL_g2969z00_737;

							BgL_g2969z00_737 = CDR(BgL_parentsz00_43);
							{
								obj_t BgL_l2964z00_739;

								obj_t BgL_tail2967z00_740;

								BgL_l2964z00_739 = BgL_g2969z00_737;
								BgL_tail2967z00_740 = BgL_head2966z00_736;
							BgL_zc3anonymousza33088ze3z83_741:
								if (NULLP(BgL_l2964z00_739))
									{	/* Type/tenv.scm 386 */
										BgL_parentsz00_732 = BgL_head2966z00_736;
									}
								else
									{	/* Type/tenv.scm 386 */
										obj_t BgL_newtail2968z00_743;

										{	/* Type/tenv.scm 386 */
											BgL_typez00_bglt BgL_arg3091z00_745;

											BgL_arg3091z00_745 =
												BGl_findzd2typezd2zztype_envz00(CAR(BgL_l2964z00_739));
											BgL_newtail2968z00_743 =
												MAKE_PAIR((obj_t) (BgL_arg3091z00_745), BNIL);
										}
										SET_CDR(BgL_tail2967z00_740, BgL_newtail2968z00_743);
										{
											obj_t BgL_tail2967z00_1672;

											obj_t BgL_l2964z00_1670;

											BgL_l2964z00_1670 = CDR(BgL_l2964z00_739);
											BgL_tail2967z00_1672 = BgL_newtail2968z00_743;
											BgL_tail2967z00_740 = BgL_tail2967z00_1672;
											BgL_l2964z00_739 = BgL_l2964z00_1670;
											goto BgL_zc3anonymousza33088ze3z83_741;
										}
									}
							}
						}
					}
				((((BgL_typez00_bglt) CREF(BgL_typez00_731))->BgL_namez00) =
					((obj_t) BgL_namez00_42), BUNSPEC);
				{
					obj_t BgL_auxz00_1674;

					BgL_auxz00_1674 =
						BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(BgL_namez00_42);
					((((BgL_typez00_bglt) CREF(BgL_typez00_731))->BgL_z42z42) =
						((obj_t) BgL_auxz00_1674), BUNSPEC);
				}
				((((BgL_typez00_bglt) CREF(BgL_typez00_731))->BgL_classz00) =
					((obj_t) BgL_classz00_44), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_typez00_731))->BgL_parentsz00) =
					((obj_t) BgL_parentsz00_732), BUNSPEC);
				return BgL_typez00_731;
			}
		}
	}



/* _declare-subtype! */
	obj_t BGl__declarezd2subtypez12zc0zztype_envz00(obj_t BgL_envz00_1213,
		obj_t BgL_idz00_1214, obj_t BgL_namez00_1215, obj_t BgL_parentsz00_1216,
		obj_t BgL_classz00_1217)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 382 */
			return
				(obj_t) (BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_1214,
					BgL_namez00_1215, BgL_parentsz00_1216, BgL_classz00_1217));
		}
	}



/* declare-aliastype! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2aliastypez12zc0zztype_envz00(obj_t BgL_idz00_45,
		obj_t BgL_namez00_46, obj_t BgL_classz00_47,
		BgL_typez00_bglt BgL_aliasz00_48)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 396 */
			{	/* Type/tenv.scm 398 */
				BgL_typez00_bglt BgL_typez00_1131;

				BgL_typez00_1131 =
					BGl_declarezd2typez12zc0zztype_envz00(BgL_idz00_45, BgL_namez00_46,
					BgL_classz00_47);
				{
					obj_t BgL_auxz00_1682;

					BgL_auxz00_1682 = (obj_t) (BgL_aliasz00_48);
					((((BgL_typez00_bglt) CREF(BgL_typez00_1131))->BgL_aliasz00) =
						((obj_t) BgL_auxz00_1682), BUNSPEC);
				}
				return BgL_typez00_1131;
			}
		}
	}



/* _declare-aliastype! */
	obj_t BGl__declarezd2aliastypez12zc0zztype_envz00(obj_t BgL_envz00_1218,
		obj_t BgL_idz00_1219, obj_t BgL_namez00_1220, obj_t BgL_classz00_1221,
		obj_t BgL_aliasz00_1222)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 396 */
			return
				(obj_t) (BGl_declarezd2aliastypez12zc0zztype_envz00(BgL_idz00_1219,
					BgL_namez00_1220, BgL_classz00_1221,
					(BgL_typez00_bglt) (BgL_aliasz00_1222)));
		}
	}



/* for-each-type! */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t
		BgL_procz00_49)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 405 */
			{	/* Type/tenv.scm 406 */
				obj_t BgL_zc3anonymousza33098ze3z83_1223;

				BgL_zc3anonymousza33098ze3z83_1223 =
					make_fx_procedure(BGl_zc3anonymousza33098ze3z83zztype_envz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza33098ze3z83_1223,
					(int) (((long) 0)), BgL_procz00_49);
				return
					BGl_hashtablezd2forzd2eachz00zz__hashz00
					(BGl_za2Tenvza2z00zztype_envz00, BgL_zc3anonymousza33098ze3z83_1223);
			}
		}
	}



/* _for-each-type! */
	obj_t BGl__forzd2eachzd2typez12z12zztype_envz00(obj_t BgL_envz00_1224,
		obj_t BgL_procz00_1225)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 405 */
			return BGl_forzd2eachzd2typez12z12zztype_envz00(BgL_procz00_1225);
		}
	}



/* <anonymous:3098> */
	obj_t BGl_zc3anonymousza33098ze3z83zztype_envz00(obj_t BgL_envz00_1226,
		obj_t BgL_kz00_1228, obj_t BgL_xz00_1229)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 406 */
			{	/* Type/tenv.scm 406 */
				obj_t BgL_procz00_1227;

				BgL_procz00_1227 = PROCEDURE_REF(BgL_envz00_1226, (int) (((long) 0)));
				{
					obj_t BgL_kz00_754;

					obj_t BgL_xz00_755;

					BgL_kz00_754 = BgL_kz00_1228;
					BgL_xz00_755 = BgL_xz00_1229;
					return
						PROCEDURE_ENTRY(BgL_procz00_1227) (BgL_procz00_1227, BgL_xz00_755,
						BEOA);
				}
			}
		}
	}



/* uninitialized-types */
	obj_t BGl_uninitializa7edzd2typesz75zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 413 */
			{	/* Type/tenv.scm 414 */
				obj_t BgL_uninitz00_758;

				BgL_uninitz00_758 = MAKE_CELL(BNIL);
				{	/* Type/tenv.scm 416 */
					obj_t BgL_zc3anonymousza33100ze3z83_1230;

					BgL_zc3anonymousza33100ze3z83_1230 =
						make_fx_procedure(BGl_zc3anonymousza33100ze3z83zztype_envz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza33100ze3z83_1230,
						(int) (((long) 0)), BgL_uninitz00_758);
					BGl_forzd2eachzd2typez12z12zztype_envz00
						(BgL_zc3anonymousza33100ze3z83_1230);
				}
				return CELL_REF(BgL_uninitz00_758);
			}
		}
	}



/* <anonymous:3100> */
	obj_t BGl_zc3anonymousza33100ze3z83zztype_envz00(obj_t BgL_envz00_1231,
		obj_t BgL_tz00_1233)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 415 */
			{	/* Type/tenv.scm 416 */
				obj_t BgL_uninitz00_1232;

				BgL_uninitz00_1232 = PROCEDURE_REF(BgL_envz00_1231, (int) (((long) 0)));
				{
					obj_t BgL_tz00_760;

					BgL_tz00_760 = BgL_tz00_1233;
					{	/* Type/tenv.scm 416 */
						bool_t BgL_testz00_1707;

						{
							BgL_typez00_bglt BgL_auxz00_1708;

							BgL_auxz00_1708 = (BgL_typez00_bglt) (BgL_tz00_760);
							BgL_testz00_1707 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_1708))->BgL_initzf3zf3);
						}
						if (BgL_testz00_1707)
							{	/* Type/tenv.scm 416 */
								return BFALSE;
							}
						else
							{	/* Type/tenv.scm 417 */
								obj_t BgL_auxz00_1234;

								BgL_auxz00_1234 =
									MAKE_PAIR(BgL_tz00_760, CELL_REF(BgL_uninitz00_1232));
								return CELL_SET(BgL_uninitz00_1232, BgL_auxz00_1234);
							}
					}
				}
			}
		}
	}



/* check-types */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2typeszd2zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 434 */
			{	/* Type/tenv.scm 435 */
				obj_t BgL_utz00_764;

				BgL_utz00_764 = BGl_uninitializa7edzd2typesz75zztype_envz00();
				if (PAIRP(BgL_utz00_764))
					{	/* Type/tenv.scm 436 */
						{	/* Type/tenv.scm 437 */
							obj_t BgL_arg3103z00_766;

							{	/* Type/tenv.scm 437 */
								obj_t BgL_res3161z00_1137;

								{	/* Type/tenv.scm 437 */
									obj_t BgL_auxz00_1715;

									BgL_auxz00_1715 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3161z00_1137 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1715);
								}
								BgL_arg3103z00_766 = BgL_res3161z00_1137;
							}
							bgl_display_char(((unsigned char) '\n'), BgL_arg3103z00_766);
						}
						{	/* Type/tenv.scm 438 */
							obj_t BgL_port2970z00_767;

							{	/* Type/tenv.scm 438 */
								obj_t BgL_res3162z00_1140;

								{	/* Type/tenv.scm 438 */
									obj_t BgL_auxz00_1719;

									BgL_auxz00_1719 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3162z00_1140 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1719);
								}
								BgL_port2970z00_767 = BgL_res3162z00_1140;
							}
							{	/* Type/tenv.scm 439 */
								long BgL_arg3104z00_768;

								BgL_arg3104z00_768 = bgl_list_length(BgL_utz00_764);
								bgl_display_obj(BINT(BgL_arg3104z00_768), BgL_port2970z00_767);
							}
							bgl_display_string(BGl_string3174z00zztype_envz00,
								BgL_port2970z00_767);
							bgl_display_char(((unsigned char) '\n'), BgL_port2970z00_767);
						}
						{
							obj_t BgL_utz00_770;

							BgL_utz00_770 = BgL_utz00_764;
						BgL_zc3anonymousza33105ze3z83_771:
							if (NULLP(BgL_utz00_770))
								{	/* Type/tenv.scm 442 */
									{	/* Type/tenv.scm 443 */
										obj_t BgL_port2971z00_773;

										{	/* Type/tenv.scm 443 */
											obj_t BgL_res3163z00_1146;

											{	/* Type/tenv.scm 443 */
												obj_t BgL_auxz00_1729;

												BgL_auxz00_1729 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res3163z00_1146 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1729);
											}
											BgL_port2971z00_773 = BgL_res3163z00_1146;
										}
										bgl_display_string(BGl_string3175z00zztype_envz00,
											BgL_port2971z00_773);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port2971z00_773);
									}
									BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 56)));
								}
							else
								{	/* Type/tenv.scm 445 */
									bool_t BgL_testz00_1736;

									{	/* Type/tenv.scm 445 */
										obj_t BgL_arg3130z00_799;

										BgL_arg3130z00_799 = CAR(BgL_utz00_770);
										BgL_testz00_1736 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3130z00_799,
											BGl_typez00zztype_typez00);
									}
									if (BgL_testz00_1736)
										{	/* Type/tenv.scm 445 */
											{	/* Type/tenv.scm 449 */
												obj_t BgL_zc3anonymousza33109ze3z83_1235;

												BgL_zc3anonymousza33109ze3z83_1235 =
													make_fx_procedure
													(BGl_zc3anonymousza33109ze3z83zztype_envz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza33109ze3z83_1235,
													(int) (((long) 0)), BgL_utz00_770);
												BGl_withzd2exceptionzd2handlerz00zz__errorz00
													(BGl_errorzd2notifyzd2envz00zz__errorz00,
													BgL_zc3anonymousza33109ze3z83_1235);
											}
											{
												obj_t BgL_utz00_1745;

												BgL_utz00_1745 = CDR(BgL_utz00_770);
												BgL_utz00_770 = BgL_utz00_1745;
												goto BgL_zc3anonymousza33105ze3z83_771;
											}
										}
									else
										{	/* Type/tenv.scm 463 */
											obj_t BgL_zc3anonymousza33126ze3z83_1236;

											BgL_zc3anonymousza33126ze3z83_1236 =
												make_fx_procedure
												(BGl_zc3anonymousza33126ze3z83zztype_envz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza33126ze3z83_1236,
												(int) (((long) 0)), BgL_utz00_770);
											BGl_withzd2exceptionzd2handlerz00zz__errorz00
												(BGl_errorzd2notifyzd2envz00zz__errorz00,
												BgL_zc3anonymousza33126ze3z83_1236);
					}}}}
				else
					{	/* Type/tenv.scm 436 */
						BFALSE;
					}
				return (BGl_za2typeszd2alreadyzd2checkedzf3za2zf3zztype_envz00 =
					((bool_t) 1), BUNSPEC);
			}
		}
	}



/* _check-types */
	obj_t BGl__checkzd2typeszd2zztype_envz00(obj_t BgL_envz00_1237)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 434 */
			return BGl_checkzd2typeszd2zztype_envz00();
		}
	}



/* <anonymous:3109> */
	obj_t BGl_zc3anonymousza33109ze3z83zztype_envz00(obj_t BgL_envz00_1238)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 448 */
			{	/* Type/tenv.scm 449 */
				obj_t BgL_utz00_1239;

				BgL_utz00_1239 = PROCEDURE_REF(BgL_envz00_1238, (int) (((long) 0)));
				{

					{	/* Type/tenv.scm 449 */
						bool_t BgL_testz00_1756;

						{	/* Type/tenv.scm 449 */
							BgL_typez00_bglt BgL_obj2059z00_1153;

							{	/* Type/tenv.scm 449 */
								obj_t BgL_pairz00_1152;

								BgL_pairz00_1152 = BgL_utz00_1239;
								BgL_obj2059z00_1153 =
									(BgL_typez00_bglt) (CAR(BgL_pairz00_1152));
							}
							BgL_testz00_1756 =
								CBOOL(
								(((BgL_typez00_bglt) CREF(BgL_obj2059z00_1153))->
									BgL_importzd2locationzd2));
						}
						if (BgL_testz00_1756)
							{	/* Type/tenv.scm 450 */
								obj_t BgL_arg3111z00_778;

								obj_t BgL_arg3113z00_780;

								{	/* Type/tenv.scm 450 */
									BgL_typez00_bglt BgL_obj2059z00_1155;

									{	/* Type/tenv.scm 450 */
										obj_t BgL_pairz00_1154;

										BgL_pairz00_1154 = BgL_utz00_1239;
										BgL_obj2059z00_1155 =
											(BgL_typez00_bglt) (CAR(BgL_pairz00_1154));
									}
									BgL_arg3111z00_778 =
										(((BgL_typez00_bglt) CREF(BgL_obj2059z00_1155))->
										BgL_importzd2locationzd2);
								}
								BgL_arg3113z00_780 =
									BGl_shapez00zztools_shapez00(CAR(BgL_utz00_1239));
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg3111z00_778, BGl_za2moduleza2z00zzmodule_modulez00,
									BGl_string3176z00zztype_envz00, BgL_arg3113z00_780, BNIL);
							}
						else
							{	/* Type/tenv.scm 454 */
								obj_t BgL_arg3117z00_784;

								obj_t BgL_arg3119z00_786;

								{	/* Type/tenv.scm 454 */
									BgL_typez00_bglt BgL_obj2056z00_1158;

									{	/* Type/tenv.scm 454 */
										obj_t BgL_pairz00_1157;

										BgL_pairz00_1157 = BgL_utz00_1239;
										BgL_obj2056z00_1158 =
											(BgL_typez00_bglt) (CAR(BgL_pairz00_1157));
									}
									BgL_arg3117z00_784 =
										(((BgL_typez00_bglt) CREF(BgL_obj2056z00_1158))->
										BgL_locationz00);
								}
								BgL_arg3119z00_786 =
									BGl_shapez00zztools_shapez00(CAR(BgL_utz00_1239));
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg3117z00_784, BGl_za2moduleza2z00zzmodule_modulez00,
									BGl_string3177z00zztype_envz00, BgL_arg3119z00_786, BNIL);
							}
					}
				}
			}
		}
	}



/* <anonymous:3126> */
	obj_t BGl_zc3anonymousza33126ze3z83zztype_envz00(obj_t BgL_envz00_1240)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 462 */
			{	/* Type/tenv.scm 463 */
				obj_t BgL_utz00_1241;

				BgL_utz00_1241 = PROCEDURE_REF(BgL_envz00_1240, (int) (((long) 0)));
				{

					{	/* Type/tenv.scm 463 */
						obj_t BgL_arg3128z00_796;

						BgL_arg3128z00_796 =
							BGl_shapez00zztools_shapez00(CAR(BgL_utz00_1241));
						return
							BGl_errorz00zz__errorz00(BGl_za2moduleza2z00zzmodule_modulez00,
							BGl_string3178z00zztype_envz00, BgL_arg3128z00_796);
					}
				}
			}
		}
	}



/* sub-type? */
	BGL_EXPORTED_DEF bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt
		BgL_minorz00_50, BgL_typez00_bglt BgL_majorz00_51)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 471 */
			if (((obj_t) (BgL_minorz00_50) == (obj_t) (BgL_majorz00_51)))
				{	/* Type/tenv.scm 473 */
					return ((bool_t) 1);
				}
			else
				{	/* Type/tenv.scm 473 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
								(obj_t) (BgL_majorz00_51),
								(((BgL_typez00_bglt) CREF(BgL_minorz00_50))->BgL_parentsz00))))
						{	/* Type/tenv.scm 475 */
							return ((bool_t) 1);
						}
					else
						{	/* Type/tenv.scm 475 */
							return ((bool_t) 0);
						}
				}
		}
	}



/* _sub-type? */
	obj_t BGl__subzd2typezf3z21zztype_envz00(obj_t BgL_envz00_1244,
		obj_t BgL_minorz00_1245, obj_t BgL_majorz00_1246)
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 471 */
			return
				BBOOL(BGl_subzd2typezf3z21zztype_envz00(
					(BgL_typez00_bglt) (BgL_minorz00_1245),
					(BgL_typez00_bglt) (BgL_majorz00_1246)));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_envz00()
	{
		AN_OBJECT;
		{	/* Type/tenv.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_widezd2accesszd2(((long)
					171489227), BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_plainzd2accesszd2(((long)
					29596083), BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_predicatez00(((long) 444447869),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzobject_creatorz00(((long) 371328867),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_foreignz00(((long) 117332816),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_javaz00(((long) 198447312),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			BGl_modulezd2initializa7ationz75zzmodule_typez00(((long) 450116231),
				BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
			return BGl_modulezd2initializa7ationz75zztvector_accessz00(((long)
					457342318), BSTRING_TO_STRING(BGl_string3179z00zztype_envz00));
		}
	}

#ifdef __cplusplus
}
#endif
