/*===========================================================================*/
/*   (Object/slots.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/slots.scm)*/
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

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_indexedz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;


	static obj_t BGl_findzd2infozd2attrz00zzobject_slotsz00(obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl__makezd2classzd2slotsz00zzobject_slotsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2slot2562ze3zzobject_slotsz00(obj_t,
		obj_t);
	static obj_t BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_wideningzd2tveczd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_slotz00_bglt BGl_slotzd2nilzd2zzobject_slotsz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_slotsz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_slotz00_bglt
		BGl_z52allocatezd2slotz80zzobject_slotsz00();
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_slotsz00();
	static obj_t BGl__makezd2javazd2classzd2slotszd2zzobject_slotsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_shapezd2slot2560zd2zzobject_slotsz00(obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__slotzd2defaultzf3z21zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_findzd2defaultzd2attrz00zzobject_slotsz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t
		BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_slotsz00();
	BGL_EXPORTED_DECL BgL_slotz00_bglt BGl_makezd2slotzd2zzobject_slotsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl__slotzd2nilzd2zzobject_slotsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_slotsz00();
	static obj_t BGl_structzb2objectzd2ze3objec2564z83zzobject_slotsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2virtualzd2attrz00zzobject_slotsz00(obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00;
	static obj_t BGl__makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2slotzd2typez00zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DEF obj_t BGl_slotz00zzobject_slotsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzobject_slotsz00();
	static obj_t BGl__fillzd2slotz12zc0zzobject_slotsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl__slotzd2virtualzf3z21zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_tclassz00_bglt, obj_t,
		obj_t, int, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	BGL_EXPORTED_DECL bool_t BGl_slotzf3zf3zzobject_slotsz00(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(BgL_jclassz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2nozd2defaultzd2valuezd2markz00zzobject_slotsz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_tclassz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t
		BGl__slotzd2nozd2defaultzd2valuezd2markz00zzobject_slotsz00(obj_t);
	extern obj_t BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00;
	static obj_t BGl__slotzf3zf3zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t
		BGl__getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z52thezd2slotzd2nilz52zzobject_slotsz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2slotzd2zzobject_slotsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_slotz00_bglt
		BGl_fillzd2slotz12zc0zzobject_slotsz00(BgL_slotz00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t
		BGl__makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00
		= BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzobject_slotsz00();
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	static obj_t BGl__z52allocatezd2slotz80zzobject_slotsz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_slotsz00();
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_slotsz00();
	static obj_t __cnst[17];


	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2slotzd2envz00zzobject_slotsz00,
		BgL_bgl__makeza7d2slotza7d2za73110za7, BGl__makezd2slotzd2zzobject_slotsz00,
		0L, BUNSPEC, 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3092z00zzobject_slotsz00,
		BgL_bgl_shapeza7d2slot25603111za7, BGl_shapezd2slot2560zd2zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3094z00zzobject_slotsz00,
		BgL_bgl_objectza7d2za7e3stru3112z00,
		BGl_objectzd2ze3structzd2slot2562ze3zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3096z00zzobject_slotsz00,
		BgL_bgl_structza7b2objectza73113z00,
		BGl_structzb2objectzd2ze3objec2564z83zzobject_slotsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2localzd2virtualzd2slotszd2numberzd2envzd2zzobject_slotsz00,
		BgL_bgl__getza7d2localza7d2v3114z00,
		BGl__getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2slotzd2envz52zzobject_slotsz00,
		BgL_bgl__za752allocateza7d2s3115z00,
		BGl__z52allocatezd2slotz80zzobject_slotsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2defaultzf3zd2envzf3zzobject_slotsz00,
		BgL_bgl__slotza7d2defaultza73116z00,
		BGl__slotzd2defaultzf3z21zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2makezd2typedzd2formalszd2envzd2zzobject_slotsz00,
		BgL_bgl__makeza7d2classza7d23117z00,
		BGl__makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2nozd2defaultzd2valuezd2markzd2envzd2zzobject_slotsz00,
		BgL_bgl__slotza7d2noza7d2def3118z00,
		BGl__slotzd2nozd2defaultzd2valuezd2markz00zzobject_slotsz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2makezd2formalszd2envz00zzobject_slotsz00,
		BgL_bgl__makeza7d2classza7d23119z00,
		BGl__makezd2classzd2makezd2formalszd2zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3082z00zzobject_slotsz00,
		BgL_bgl_string3082za700za7za7o3120za7, "Can't find type definition", 26);
	      DEFINE_STRING(BGl_string3083z00zzobject_slotsz00,
		BgL_bgl_string3083za700za7za7o3121za7,
		"slot already defined in super class", 35);
	      DEFINE_STRING(BGl_string3084z00zzobject_slotsz00,
		BgL_bgl_string3084za700za7za7o3122za7,
		"Illegal virtual slot (missing getter)", 37);
	      DEFINE_STRING(BGl_string3085z00zzobject_slotsz00,
		BgL_bgl_string3085za700za7za7o3123za7, "Illegal virtual slot (read-only)",
		32);
	      DEFINE_STRING(BGl_string3086z00zzobject_slotsz00,
		BgL_bgl_string3086za700za7za7o3124za7,
		"Illegal virtual slot (missing setter)", 37);
	      DEFINE_STRING(BGl_string3087z00zzobject_slotsz00,
		BgL_bgl_string3087za700za7za7o3125za7, "virtual slot can't be indexed", 29);
	      DEFINE_STRING(BGl_string3088z00zzobject_slotsz00,
		BgL_bgl_string3088za700za7za7o3126za7, "Illegal duplicated virtual slot",
		31);
	      DEFINE_STRING(BGl_string3100z00zzobject_slotsz00,
		BgL_bgl_string3100za700za7za7o3127za7, " owner=", 7);
	      DEFINE_STRING(BGl_string3090z00zzobject_slotsz00,
		BgL_bgl_string3090za700za7za7o3128za7, "Illegal slot", 12);
	      DEFINE_STRING(BGl_string3089z00zzobject_slotsz00,
		BgL_bgl_string3089za700za7za7o3129za7,
		"Overriden virtual slot of class \"~a\"", 36);
	      DEFINE_STRING(BGl_string3101z00zzobject_slotsz00,
		BgL_bgl_string3101za700za7za7o3130za7, ")", 1);
	      DEFINE_STRING(BGl_string3091z00zzobject_slotsz00,
		BgL_bgl_string3091za700za7za7o3131za7, "", 0);
	      DEFINE_STRING(BGl_string3102z00zzobject_slotsz00,
		BgL_bgl_string3102za700za7za7o3132za7, "(", 1);
	      DEFINE_STRING(BGl_string3103z00zzobject_slotsz00,
		BgL_bgl_string3103za700za7za7o3133za7, "<", 1);
	      DEFINE_STRING(BGl_string3093z00zzobject_slotsz00,
		BgL_bgl_string3093za700za7za7o3134za7, "shape", 5);
	      DEFINE_STRING(BGl_string3104z00zzobject_slotsz00,
		BgL_bgl_string3104za700za7za7o3135za7, "object_slots", 12);
	      DEFINE_STRING(BGl_string3105z00zzobject_slotsz00,
		BgL_bgl_string3105za700za7za7o3136za7,
		"_ slot static final - foreign set get info default id * -len bigloo obj read-only slot-no-default-value__17_5_1996 ",
		115);
	      DEFINE_STRING(BGl_string3095z00zzobject_slotsz00,
		BgL_bgl_string3095za700za7za7o3137za7, "object->struct::struct", 22);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2nilzd2envz00zzobject_slotsz00,
		BgL_bgl__slotza7d2nilza7d2za7za73138z00,
		BGl__slotzd2nilzd2zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3097z00zzobject_slotsz00,
		BgL_bgl_string3097za700za7za7o3139za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3098z00zzobject_slotsz00,
		BgL_bgl_string3098za700za7za7o3140za7, ">", 1);
	      DEFINE_STRING(BGl_string3099z00zzobject_slotsz00,
		BgL_bgl_string3099za700za7za7o3141za7, " type=", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2slotz12zd2envz12zzobject_slotsz00,
		BgL_bgl__fillza7d2slotza712za73142za7,
		BGl__fillzd2slotz12zc0zzobject_slotsz00, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2virtualzf3zd2envzf3zzobject_slotsz00,
		BgL_bgl__slotza7d2virtualza73143z00,
		BGl__slotzd2virtualzf3z21zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzf3zd2envz21zzobject_slotsz00,
		BgL_bgl__slotza7f3za7f3za7za7obj3144z00, BGl__slotzf3zf3zzobject_slotsz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2slotszd2envzd2zzobject_slotsz00,
		BgL_bgl__makeza7d2classza7d23145z00,
		BGl__makezd2classzd2slotsz00zzobject_slotsz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2javazd2classzd2slotszd2envz00zzobject_slotsz00,
		BgL_bgl__makeza7d2javaza7d2c3146z00,
		BGl__makezd2javazd2classzd2slotszd2zzobject_slotsz00, 0L, BUNSPEC, 4);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long
		BgL_checksumz00_2107, char *BgL_fromz00_2108)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_slotsz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_slotsz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_slotsz00();
					BGl_cnstzd2initzd2zzobject_slotsz00();
					BGl_importedzd2moduleszd2initz00zzobject_slotsz00();
					BGl_objectzd2initzd2zzobject_slotsz00();
					BGl_methodzd2initzd2zzobject_slotsz00();
					BGl_toplevelzd2initzd2zzobject_slotsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_slots");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			{	/* Object/slots.scm 15 */
				obj_t BgL_cportz00_2053;

				BgL_cportz00_2053 =
					bgl_open_input_string(BGl_string3105z00zzobject_slotsz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2054;

					BgL_iz00_2054 = ((long) 16);
				BgL_loopz00_2055:
					if ((BgL_iz00_2054 == ((long) -1)))
						{	/* Object/slots.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/slots.scm 15 */
							{	/* Object/slots.scm 15 */
								obj_t BgL_arg3107z00_2057;

								{	/* Object/slots.scm 15 */

									{	/* Object/slots.scm 15 */
										obj_t BgL_locationz00_2059;

										BgL_locationz00_2059 = BBOOL(((bool_t) 0));
										{	/* Object/slots.scm 15 */

											BgL_arg3107z00_2057 =
												BGl_readz00zz__readerz00(BgL_cportz00_2053,
												BgL_locationz00_2059);
										}
									}
								}
								{	/* Object/slots.scm 15 */
									int BgL_auxz00_2132;

									BgL_auxz00_2132 = (int) (BgL_iz00_2054);
									CNST_TABLE_SET(BgL_auxz00_2132, BgL_arg3107z00_2057);
							}}
							{	/* Object/slots.scm 15 */
								int BgL_auxz00_2060;

								BgL_auxz00_2060 = (int) ((BgL_iz00_2054 - ((long) 1)));
								{
									long BgL_iz00_2137;

									BgL_iz00_2137 = (long) (BgL_auxz00_2060);
									BgL_iz00_2054 = BgL_iz00_2137;
									goto BgL_loopz00_2055;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			return (BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* slot-no-default-value-mark */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2nozd2defaultzd2valuezd2markz00zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 86 */
			return BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
		}
	}



/* _slot-no-default-value-mark */
	obj_t BGl__slotzd2nozd2defaultzd2valuezd2markz00zzobject_slotsz00(obj_t
		BgL_envz00_1981)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 86 */
			return BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
		}
	}



/* slot-default? */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt BgL_slotz00_2)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 92 */
			{	/* Object/slots.scm 93 */
				bool_t BgL_testz00_2140;

				{	/* Object/slots.scm 93 */
					obj_t BgL_arg2572z00_497;

					BgL_arg2572z00_497 =
						BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
					BgL_testz00_2140 =
						((((BgL_slotz00_bglt) CREF(BgL_slotz00_2))->
							BgL_defaultzd2valuezd2) == BgL_arg2572z00_497);
				}
				if (BgL_testz00_2140)
					{	/* Object/slots.scm 93 */
						return ((bool_t) 0);
					}
				else
					{	/* Object/slots.scm 93 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* _slot-default? */
	obj_t BGl__slotzd2defaultzf3z21zzobject_slotsz00(obj_t BgL_envz00_1982,
		obj_t BgL_slotz00_1983)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 92 */
			return
				BBOOL(BGl_slotzd2defaultzf3z21zzobject_slotsz00(
					(BgL_slotz00_bglt) (BgL_slotz00_1983)));
		}
	}



/* slot-virtual? */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt BgL_slotz00_3)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 98 */
			return
				(
				(long) CINT(
					(((BgL_slotz00_bglt) CREF(BgL_slotz00_3))->BgL_virtualzd2numzd2)) >=
				((long) 0));
		}
	}



/* _slot-virtual? */
	obj_t BGl__slotzd2virtualzf3z21zzobject_slotsz00(obj_t BgL_envz00_1984,
		obj_t BgL_slotz00_1985)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 98 */
			return
				BBOOL(BGl_slotzd2virtualzf3z21zzobject_slotsz00(
					(BgL_slotz00_bglt) (BgL_slotz00_1985)));
		}
	}



/* ensure-type-defined! */
	obj_t BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00(BgL_typez00_bglt
		BgL_typez00_4, obj_t BgL_srcz00_5)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 104 */
			if ((((BgL_typez00_bglt) CREF(BgL_typez00_4))->BgL_initzf3zf3))
				{	/* Object/slots.scm 105 */
					return BFALSE;
				}
			else
				{	/* Object/slots.scm 106 */
					obj_t BgL_arg2590z00_502;

					BgL_arg2590z00_502 =
						(((BgL_typez00_bglt) CREF(BgL_typez00_4))->BgL_idz00);
					return
						BGl_userzd2errorzd2zztools_errorz00
						(BGl_string3082z00zzobject_slotsz00, BgL_arg2590z00_502,
						BgL_srcz00_5, BNIL);
				}
		}
	}



/* make-class-slots */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_tclassz00_bglt
		BgL_classz00_6, obj_t BgL_slotsz00_7, obj_t BgL_superz00_8,
		int BgL_vnumz00_9, obj_t BgL_srcz00_10)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 111 */
			{
				obj_t BgL_slotz00_718;

				obj_t BgL_slotzd2listzd2_719;

				obj_t BgL_slotsz00_731;

				obj_t BgL_sz00_779;

				obj_t BgL_slotzd2idzd2_780;

				obj_t BgL_attrz00_781;

				obj_t BgL_sz00_824;

				obj_t BgL_slotzd2idzd2_825;

				obj_t BgL_attrz00_826;

				obj_t BgL_vgetz00_827;

				obj_t BgL_vsetz00_828;

				obj_t BgL_vnumz00_829;

				obj_t BgL_nslotz00_860;

				obj_t BgL_sslotsz00_861;

				BgL_tclassz00_bglt BgL_classz00_862;

				obj_t BgL_nslotsz00_881;

				obj_t BgL_sslotsz00_882;

				BgL_tclassz00_bglt BgL_classz00_883;

				obj_t BgL_slotzd2idzd2_892;

				{
					obj_t BgL_slotsz00_516;

					obj_t BgL_nslotsz00_517;

					obj_t BgL_vnumz00_518;

					BgL_slotsz00_516 = BgL_slotsz00_7;
					BgL_nslotsz00_517 = BNIL;
					BgL_vnumz00_518 = BINT(BgL_vnumz00_9);
				BgL_zc3anonymousza32592ze3z83_519:
					if (NULLP(BgL_slotsz00_516))
						{	/* Object/slots.scm 303 */
							obj_t BgL_sslotsz00_521;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_8,
									BGl_typez00zztype_typez00))
								{	/* Object/slots.scm 304 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_8,
											BGl_tclassz00zzobject_classz00))
										{	/* Object/slots.scm 309 */
											BgL_tclassz00_bglt BgL_obj1719z00_1279;

											BgL_obj1719z00_1279 =
												(BgL_tclassz00_bglt) (BgL_superz00_8);
											{
												obj_t BgL_auxz00_2163;

												{	/* Object/slots.scm 309 */
													BgL_objectz00_bglt BgL_auxz00_2164;

													BgL_auxz00_2164 =
														(BgL_objectz00_bglt) (BgL_obj1719z00_1279);
													BgL_auxz00_2163 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2164);
												}
												BgL_sslotsz00_521 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2163))->
													BgL_slotsz00);
											}
										}
									else
										{	/* Object/slots.scm 306 */
											BgL_sslotsz00_521 = BNIL;
										}
								}
							else
								{	/* Object/slots.scm 304 */
									BgL_sslotsz00_521 = BNIL;
								}
							BgL_nslotsz00_881 = BgL_nslotsz00_517;
							BgL_sslotsz00_882 = BgL_sslotsz00_521;
							BgL_classz00_883 = BgL_classz00_6;
							{
								obj_t BgL_l2556z00_886;

								BgL_l2556z00_886 = BgL_nslotsz00_881;
							BgL_zc3anonymousza32893ze3z83_887:
								if (PAIRP(BgL_l2556z00_886))
									{	/* Object/slots.scm 285 */
										BgL_nslotz00_860 = CAR(BgL_l2556z00_886);
										BgL_sslotsz00_861 = BgL_sslotsz00_882;
										BgL_classz00_862 = BgL_classz00_883;
										{	/* Object/slots.scm 276 */
											bool_t BgL_testz00_2170;

											{	/* Object/slots.scm 276 */
												BgL_slotz00_bglt BgL_slotz00_1618;

												BgL_slotz00_1618 =
													(BgL_slotz00_bglt) (BgL_nslotz00_860);
												BgL_testz00_2170 =
													(
													(long) CINT(
														(((BgL_slotz00_bglt) CREF(BgL_slotz00_1618))->
															BgL_virtualzd2numzd2)) >= ((long) 0));
											}
											if (BgL_testz00_2170)
												{	/* Object/slots.scm 276 */
													BFALSE;
												}
											else
												{	/* Object/slots.scm 277 */
													obj_t BgL_idz00_865;

													{
														BgL_slotz00_bglt BgL_auxz00_2175;

														BgL_auxz00_2175 =
															(BgL_slotz00_bglt) (BgL_nslotz00_860);
														BgL_idz00_865 =
															(((BgL_slotz00_bglt) CREF(BgL_auxz00_2175))->
															BgL_idz00);
													}
													{	/* Object/slots.scm 278 */
														bool_t BgL_testz00_2178;

														{
															obj_t BgL_l2554z00_873;

															BgL_l2554z00_873 = BgL_sslotsz00_861;
														BgL_zc3anonymousza32886ze3z83_874:
															if (NULLP(BgL_l2554z00_873))
																{	/* Object/slots.scm 278 */
																	BgL_testz00_2178 = ((bool_t) 0);
																}
															else
																{	/* Object/slots.scm 278 */
																	bool_t BgL_testz00_2181;

																	{	/* Object/slots.scm 278 */
																		obj_t BgL_auxz00_2182;

																		{
																			BgL_slotz00_bglt BgL_auxz00_2183;

																			BgL_auxz00_2183 =
																				(BgL_slotz00_bglt) (CAR
																				(BgL_l2554z00_873));
																			BgL_auxz00_2182 =
																				(((BgL_slotz00_bglt)
																					CREF(BgL_auxz00_2183))->BgL_idz00);
																		}
																		BgL_testz00_2181 =
																			(BgL_auxz00_2182 == BgL_idz00_865);
																	}
																	if (BgL_testz00_2181)
																		{	/* Object/slots.scm 278 */
																			BgL_testz00_2178 = ((bool_t) 1);
																		}
																	else
																		{
																			obj_t BgL_l2554z00_2188;

																			BgL_l2554z00_2188 = CDR(BgL_l2554z00_873);
																			BgL_l2554z00_873 = BgL_l2554z00_2188;
																			goto BgL_zc3anonymousza32886ze3z83_874;
																		}
																}
														}
														if (BgL_testz00_2178)
															{	/* Object/slots.scm 279 */
																obj_t BgL_arg2881z00_867;

																obj_t BgL_arg2882z00_868;

																{	/* Object/slots.scm 279 */
																	obj_t BgL_arg2885z00_871;

																	{
																		BgL_slotz00_bglt BgL_auxz00_2190;

																		BgL_auxz00_2190 =
																			(BgL_slotz00_bglt) (BgL_nslotz00_860);
																		BgL_arg2885z00_871 =
																			(((BgL_slotz00_bglt)
																				CREF(BgL_auxz00_2190))->BgL_srcz00);
																	}
																	BgL_arg2881z00_867 =
																		BGl_findzd2locationzd2zztools_locationz00
																		(BgL_arg2885z00_871);
																}
																{
																	BgL_typez00_bglt BgL_auxz00_2194;

																	BgL_auxz00_2194 =
																		(BgL_typez00_bglt) (BgL_classz00_862);
																	BgL_arg2882z00_868 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_auxz00_2194))->BgL_idz00);
																}
																BGl_userzd2errorzf2locationz20zztools_errorz00
																	(BgL_arg2881z00_867, BgL_arg2882z00_868,
																	BGl_string3083z00zzobject_slotsz00,
																	BgL_idz00_865, BNIL);
															}
														else
															{	/* Object/slots.scm 278 */
																BFALSE;
															}
													}
												}
										}
										{
											obj_t BgL_l2556z00_2199;

											BgL_l2556z00_2199 = CDR(BgL_l2556z00_886);
											BgL_l2556z00_886 = BgL_l2556z00_2199;
											goto BgL_zc3anonymousza32893ze3z83_887;
										}
									}
								else
									{	/* Object/slots.scm 285 */
										((bool_t) 1);
									}
							}
							BgL_slotsz00_731 =
								bgl_append2(BgL_nslotsz00_517, bgl_reverse(BgL_sslotsz00_521));
							{
								obj_t BgL_slotsz00_735;

								obj_t BgL_resz00_736;

								BgL_slotsz00_735 = BgL_slotsz00_731;
								BgL_resz00_736 = BNIL;
							BgL_zc3anonymousza32776ze3z83_737:
								if (NULLP(BgL_slotsz00_735))
									{	/* Object/slots.scm 166 */
										return BgL_resz00_736;
									}
								else
									{	/* Object/slots.scm 166 */
										if (NULLP(CAR(BgL_slotsz00_735)))
											{
												obj_t BgL_resz00_2208;

												obj_t BgL_slotsz00_2206;

												BgL_slotsz00_2206 = CDR(BgL_slotsz00_735);
												BgL_resz00_2208 = BNIL;
												BgL_resz00_736 = BgL_resz00_2208;
												BgL_slotsz00_735 = BgL_slotsz00_2206;
												goto BgL_zc3anonymousza32776ze3z83_737;
											}
										else
											{	/* Object/slots.scm 172 */
												bool_t BgL_testz00_2209;

												{	/* Object/slots.scm 172 */
													BgL_slotz00_bglt BgL_slotz00_1422;

													{	/* Object/slots.scm 172 */
														obj_t BgL_pairz00_1421;

														BgL_pairz00_1421 = BgL_slotsz00_735;
														BgL_slotz00_1422 =
															(BgL_slotz00_bglt) (CAR(BgL_pairz00_1421));
													}
													BgL_testz00_2209 =
														(
														(long) CINT(
															(((BgL_slotz00_bglt) CREF(BgL_slotz00_1422))->
																BgL_virtualzd2numzd2)) >= ((long) 0));
												}
												if (BgL_testz00_2209)
													{	/* Object/slots.scm 173 */
														obj_t BgL_otherz00_743;

														BgL_slotz00_718 = CAR(BgL_slotsz00_735);
														BgL_slotzd2listzd2_719 = BgL_resz00_736;
														{	/* Object/slots.scm 151 */
															obj_t BgL_idz00_721;

															{
																BgL_slotz00_bglt BgL_auxz00_2215;

																BgL_auxz00_2215 =
																	(BgL_slotz00_bglt) (BgL_slotz00_718);
																BgL_idz00_721 =
																	(((BgL_slotz00_bglt) CREF(BgL_auxz00_2215))->
																	BgL_idz00);
															}
															{
																obj_t BgL_slotzd2listzd2_723;

																BgL_slotzd2listzd2_723 = BgL_slotzd2listzd2_719;
															BgL_zc3anonymousza32768ze3z83_724:
																if (NULLP(BgL_slotzd2listzd2_723))
																	{	/* Object/slots.scm 154 */
																		BgL_otherz00_743 = BFALSE;
																	}
																else
																	{	/* Object/slots.scm 156 */
																		bool_t BgL_testz00_2220;

																		{	/* Object/slots.scm 156 */
																			obj_t BgL_auxz00_2221;

																			{	/* Object/slots.scm 156 */
																				BgL_slotz00_bglt BgL_obj2423z00_1414;

																				{	/* Object/slots.scm 156 */
																					obj_t BgL_pairz00_1413;

																					BgL_pairz00_1413 =
																						BgL_slotzd2listzd2_723;
																					BgL_obj2423z00_1414 =
																						(BgL_slotz00_bglt) (CAR
																						(BgL_pairz00_1413));
																				}
																				BgL_auxz00_2221 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_obj2423z00_1414))->
																					BgL_idz00);
																			}
																			BgL_testz00_2220 =
																				(BgL_auxz00_2221 == BgL_idz00_721);
																		}
																		if (BgL_testz00_2220)
																			{	/* Object/slots.scm 156 */
																				BgL_otherz00_743 =
																					CAR(BgL_slotzd2listzd2_723);
																			}
																		else
																			{
																				obj_t BgL_slotzd2listzd2_2227;

																				BgL_slotzd2listzd2_2227 =
																					CDR(BgL_slotzd2listzd2_723);
																				BgL_slotzd2listzd2_723 =
																					BgL_slotzd2listzd2_2227;
																				goto BgL_zc3anonymousza32768ze3z83_724;
																			}
																	}
															}
														}
														if (BGl_iszd2azf3z21zz__objectz00(BgL_otherz00_743,
																BGl_slotz00zzobject_slotsz00))
															{	/* Object/slots.scm 175 */
																obj_t BgL_locz00_745;

																obj_t BgL_idz00_746;

																BgL_locz00_745 =
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_srcz00_10);
																{	/* Object/slots.scm 176 */
																	BgL_slotz00_bglt BgL_obj2423z00_1432;

																	{	/* Object/slots.scm 176 */
																		obj_t BgL_pairz00_1431;

																		BgL_pairz00_1431 = BgL_slotsz00_735;
																		BgL_obj2423z00_1432 =
																			(BgL_slotz00_bglt) (CAR
																			(BgL_pairz00_1431));
																	}
																	BgL_idz00_746 =
																		(((BgL_slotz00_bglt)
																			CREF(BgL_obj2423z00_1432))->BgL_idz00);
																}
																{	/* Object/slots.scm 177 */
																	bool_t BgL_testz00_2236;

																	{	/* Object/slots.scm 177 */
																		obj_t BgL_auxz00_2241;

																		obj_t BgL_auxz00_2237;

																		{
																			BgL_slotz00_bglt BgL_auxz00_2242;

																			BgL_auxz00_2242 =
																				(BgL_slotz00_bglt) (BgL_otherz00_743);
																			BgL_auxz00_2241 =
																				(((BgL_slotz00_bglt)
																					CREF(BgL_auxz00_2242))->
																				BgL_classzd2ownerzd2);
																		}
																		{	/* Object/slots.scm 177 */
																			BgL_slotz00_bglt BgL_obj2426z00_1434;

																			{	/* Object/slots.scm 177 */
																				obj_t BgL_pairz00_1433;

																				BgL_pairz00_1433 = BgL_slotsz00_735;
																				BgL_obj2426z00_1434 =
																					(BgL_slotz00_bglt) (CAR
																					(BgL_pairz00_1433));
																			}
																			BgL_auxz00_2237 =
																				(((BgL_slotz00_bglt)
																					CREF(BgL_obj2426z00_1434))->
																				BgL_classzd2ownerzd2);
																		}
																		BgL_testz00_2236 =
																			(BgL_auxz00_2237 == BgL_auxz00_2241);
																	}
																	if (BgL_testz00_2236)
																		{	/* Object/slots.scm 181 */
																			obj_t BgL_arg2784z00_748;

																			{
																				BgL_typez00_bglt BgL_auxz00_2246;

																				BgL_auxz00_2246 =
																					(BgL_typez00_bglt) (BgL_classz00_6);
																				BgL_arg2784z00_748 =
																					(((BgL_typez00_bglt)
																						CREF(BgL_auxz00_2246))->BgL_idz00);
																			}
																			return
																				BGl_userzd2errorzf2locationz20zztools_errorz00
																				(BgL_locz00_745, BgL_arg2784z00_748,
																				BGl_string3088z00zzobject_slotsz00,
																				BgL_idz00_746, BNIL);
																		}
																	else
																		{	/* Object/slots.scm 184 */
																			obj_t BgL_newzd2numzd2_751;

																			{	/* Object/slots.scm 184 */
																				BgL_slotz00_bglt BgL_obj2430z00_1438;

																				{	/* Object/slots.scm 184 */
																					obj_t BgL_pairz00_1437;

																					BgL_pairz00_1437 = BgL_slotsz00_735;
																					BgL_obj2430z00_1438 =
																						(BgL_slotz00_bglt) (CAR
																						(BgL_pairz00_1437));
																				}
																				BgL_newzd2numzd2_751 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_obj2430z00_1438))->
																					BgL_virtualzd2numzd2);
																			}
																			{
																				BgL_slotz00_bglt BgL_auxz00_2253;

																				BgL_auxz00_2253 =
																					(BgL_slotz00_bglt) (BgL_otherz00_743);
																				((((BgL_slotz00_bglt)
																							CREF(BgL_auxz00_2253))->
																						BgL_virtualzd2numzd2) =
																					((obj_t) BgL_newzd2numzd2_751),
																					BUNSPEC);
																			}
																			{	/* Object/slots.scm 189 */
																				bool_t BgL_testz00_2256;

																				{	/* Object/slots.scm 189 */
																					bool_t BgL_testz00_2257;

																					{	/* Object/slots.scm 189 */
																						int BgL_arg2797z00_761;

																						BgL_arg2797z00_761 =
																							BGl_bigloozd2warningzd2zz__paramz00
																							();
																						BgL_testz00_2257 =
																							((long) (BgL_arg2797z00_761) >=
																							((long) 2));
																					}
																					if (BgL_testz00_2257)
																						{	/* Object/slots.scm 189 */
																							BgL_testz00_2256 =
																								CBOOL
																								(BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00);
																						}
																					else
																						{	/* Object/slots.scm 189 */
																							BgL_testz00_2256 = ((bool_t) 0);
																						}
																				}
																				if (BgL_testz00_2256)
																					{	/* Object/slots.scm 193 */
																						obj_t BgL_arg2789z00_753;

																						obj_t BgL_arg2790z00_754;

																						{
																							BgL_typez00_bglt BgL_auxz00_2262;

																							BgL_auxz00_2262 =
																								(BgL_typez00_bglt)
																								(BgL_classz00_6);
																							BgL_arg2789z00_753 =
																								(((BgL_typez00_bglt)
																									CREF(BgL_auxz00_2262))->
																								BgL_idz00);
																						}
																						{	/* Object/slots.scm 194 */
																							obj_t BgL_arg2792z00_756;

																							{	/* Object/slots.scm 194 */
																								BgL_typez00_bglt
																									BgL_obj1508z00_1444;
																								{	/* Object/slots.scm 194 */
																									obj_t BgL_auxz00_2265;

																									{	/* Object/slots.scm 194 */
																										BgL_slotz00_bglt
																											BgL_obj2426z00_1443;
																										{	/* Object/slots.scm 194 */
																											obj_t BgL_pairz00_1442;

																											BgL_pairz00_1442 =
																												BgL_slotsz00_735;
																											BgL_obj2426z00_1443 =
																												(BgL_slotz00_bglt) (CAR
																												(BgL_pairz00_1442));
																										}
																										BgL_auxz00_2265 =
																											(((BgL_slotz00_bglt)
																												CREF
																												(BgL_obj2426z00_1443))->
																											BgL_classzd2ownerzd2);
																									}
																									BgL_obj1508z00_1444 =
																										(BgL_typez00_bglt)
																										(BgL_auxz00_2265);
																								}
																								BgL_arg2792z00_756 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_obj1508z00_1444))->
																									BgL_idz00);
																							}
																							{	/* Object/slots.scm 194 */
																								obj_t BgL_list2793z00_757;

																								BgL_list2793z00_757 =
																									MAKE_PAIR(BgL_arg2792z00_756,
																									BNIL);
																								BgL_arg2790z00_754 =
																									BGl_formatz00zz__r4_output_6_10_3z00
																									(BGl_string3089z00zzobject_slotsz00,
																									BgL_list2793z00_757);
																							}
																						}
																						BGl_userzd2warningzf2locationz20zztools_errorz00
																							(BgL_locz00_745,
																							BgL_arg2789z00_753,
																							BgL_arg2790z00_754,
																							BgL_idz00_746);
																					}
																				else
																					{	/* Object/slots.scm 189 */
																						BFALSE;
																					}
																			}
																			{
																				obj_t BgL_slotsz00_2274;

																				BgL_slotsz00_2274 =
																					CDR(BgL_slotsz00_735);
																				BgL_slotsz00_735 = BgL_slotsz00_2274;
																				goto BgL_zc3anonymousza32776ze3z83_737;
																			}
																		}
																}
															}
														else
															{	/* Object/slots.scm 197 */
																obj_t BgL_arg2805z00_769;

																obj_t BgL_arg2806z00_770;

																BgL_arg2805z00_769 = CDR(BgL_slotsz00_735);
																BgL_arg2806z00_770 =
																	MAKE_PAIR(CAR(BgL_slotsz00_735),
																	BgL_resz00_736);
																{
																	obj_t BgL_resz00_2280;

																	obj_t BgL_slotsz00_2279;

																	BgL_slotsz00_2279 = BgL_arg2805z00_769;
																	BgL_resz00_2280 = BgL_arg2806z00_770;
																	BgL_resz00_736 = BgL_resz00_2280;
																	BgL_slotsz00_735 = BgL_slotsz00_2279;
																	goto BgL_zc3anonymousza32776ze3z83_737;
																}
															}
													}
												else
													{	/* Object/slots.scm 199 */
														obj_t BgL_arg2809z00_773;

														obj_t BgL_arg2810z00_774;

														BgL_arg2809z00_773 = CDR(BgL_slotsz00_735);
														BgL_arg2810z00_774 =
															MAKE_PAIR(CAR(BgL_slotsz00_735), BgL_resz00_736);
														{
															obj_t BgL_resz00_2285;

															obj_t BgL_slotsz00_2284;

															BgL_slotsz00_2284 = BgL_arg2809z00_773;
															BgL_resz00_2285 = BgL_arg2810z00_774;
															BgL_resz00_736 = BgL_resz00_2285;
															BgL_slotsz00_735 = BgL_slotsz00_2284;
															goto BgL_zc3anonymousza32776ze3z83_737;
														}
													}
											}
									}
							}
						}
					else
						{	/* Object/slots.scm 317 */
							obj_t BgL_sz00_526;

							BgL_sz00_526 = CAR(BgL_slotsz00_516);
							{
								obj_t BgL_idz00_527;

								obj_t BgL_attrz00_528;

								obj_t BgL_idz00_530;

								obj_t BgL_attrz00_531;

								obj_t BgL_idz00_533;

								if (PAIRP(BgL_sz00_526))
									{	/* Object/slots.scm 318 */
										obj_t BgL_cdrzd21702zd2_538;

										BgL_cdrzd21702zd2_538 = CDR(BgL_sz00_526);
										if ((CAR(BgL_sz00_526) == CNST_TABLE_REF(((long) 5))))
											{	/* Object/slots.scm 318 */
												if (PAIRP(BgL_cdrzd21702zd2_538))
													{	/* Object/slots.scm 318 */
														obj_t BgL_carzd21705zd2_541;

														BgL_carzd21705zd2_541 = CAR(BgL_cdrzd21702zd2_538);
														if (PAIRP(BgL_carzd21705zd2_541))
															{	/* Object/slots.scm 318 */
																obj_t BgL_cdrzd21709zd2_543;

																BgL_cdrzd21709zd2_543 =
																	CDR(BgL_carzd21705zd2_541);
																if (
																	(CAR(BgL_carzd21705zd2_541) ==
																		CNST_TABLE_REF(((long) 6))))
																	{	/* Object/slots.scm 318 */
																		if (PAIRP(BgL_cdrzd21709zd2_543))
																			{	/* Object/slots.scm 318 */
																				if (NULLP(CDR(BgL_cdrzd21709zd2_543)))
																					{	/* Object/slots.scm 318 */
																						BgL_idz00_527 =
																							CAR(BgL_cdrzd21709zd2_543);
																						BgL_attrz00_528 =
																							CDR(BgL_cdrzd21702zd2_538);
																						{	/* Object/slots.scm 320 */
																							BgL_slotz00_bglt BgL_svalz00_628;

																							BgL_sz00_779 = BgL_sz00_526;
																							BgL_slotzd2idzd2_780 =
																								BgL_idz00_527;
																							BgL_attrz00_781 = BgL_attrz00_528;
																							{	/* Object/slots.scm 203 */
																								obj_t BgL_vgetz00_783;

																								BgL_vgetz00_783 =
																									BGl_findzd2virtualzd2attrz00zzobject_slotsz00
																									(BgL_attrz00_781);
																								{	/* Object/slots.scm 205 */
																									obj_t BgL_vsetz00_784;

																									{	/* Object/slots.scm 205 */
																										int BgL_auxz00_2312;

																										BgL_auxz00_2312 =
																											(int) (((long) 1));
																										BgL_vsetz00_784 =
																											BGL_MVALUES_VAL
																											(BgL_auxz00_2312);
																									}
																									{	/* Object/slots.scm 205 */
																										bool_t BgL_testz00_2315;

																										if (CBOOL(BgL_vgetz00_783))
																											{	/* Object/slots.scm 205 */
																												BgL_testz00_2315 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Object/slots.scm 205 */
																												BgL_testz00_2315 =
																													CBOOL
																													(BgL_vsetz00_784);
																											}
																										if (BgL_testz00_2315)
																											{	/* Object/slots.scm 206 */
																												obj_t
																													BgL_arg2816z00_786;
																												obj_t
																													BgL_arg2819z00_788;
																												{
																													BgL_typez00_bglt
																														BgL_auxz00_2319;
																													BgL_auxz00_2319 =
																														(BgL_typez00_bglt)
																														(BgL_classz00_6);
																													BgL_arg2816z00_786 =
																														(((BgL_typez00_bglt)
																															CREF
																															(BgL_auxz00_2319))->
																														BgL_idz00);
																												}
																												BgL_arg2819z00_788 =
																													CAR
																													(BgL_slotzd2idzd2_780);
																												BGl_userzd2errorzf2locationz20zztools_errorz00
																													(BgL_arg2816z00_786,
																													BGl_string3087z00zzobject_slotsz00,
																													BgL_arg2819z00_788,
																													BNIL, BNIL);
																											}
																										else
																											{	/* Object/slots.scm 205 */
																												BFALSE;
																											}
																									}
																								}
																							}
																							{	/* Object/slots.scm 210 */
																								obj_t BgL_ftypez00_791;

																								BgL_ftypez00_791 =
																									BGl_findzd2slotzd2typez00zzobject_slotsz00
																									(BgL_slotzd2idzd2_780,
																									BgL_srcz00_10);
																								{	/* Object/slots.scm 210 */
																									obj_t BgL_iidz00_792;

																									{	/* Object/slots.scm 211 */

																										{	/* Object/slots.scm 211 */

																											BgL_iidz00_792 =
																												BGl_gensymz00zz__r4_symbols_6_4z00
																												(BFALSE);
																										}
																									}
																									{	/* Object/slots.scm 211 */
																										BgL_typez00_bglt
																											BgL_itypez00_793;
																										{	/* Object/slots.scm 213 */
																											obj_t BgL_arg2843z00_819;

																											obj_t BgL_arg2844z00_820;

																											obj_t BgL_arg2845z00_821;

																											{	/* Object/slots.scm 213 */
																												obj_t
																													BgL_res3050z00_1455;
																												{	/* Object/slots.scm 213 */
																													obj_t
																														BgL_symbolz00_1453;
																													BgL_symbolz00_1453 =
																														BgL_iidz00_792;
																													{	/* Object/slots.scm 213 */
																														obj_t
																															BgL_arg2063z00_1454;
																														BgL_arg2063z00_1454
																															=
																															SYMBOL_TO_STRING
																															(BgL_symbolz00_1453);
																														BgL_res3050z00_1455
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg2063z00_1454);
																													}
																												}
																												BgL_arg2843z00_819 =
																													BgL_res3050z00_1455;
																											}
																											{	/* Object/slots.scm 214 */
																												obj_t
																													BgL_list2846z00_822;
																												BgL_list2846z00_822 =
																													MAKE_PAIR
																													(CNST_TABLE_REF((
																															(long) 2)), BNIL);
																												BgL_arg2844z00_820 =
																													BgL_list2846z00_822;
																											}
																											BgL_arg2845z00_821 =
																												CNST_TABLE_REF(((long)
																													3));
																											BgL_itypez00_793 =
																												BGl_declarezd2subtypez12zc0zztype_envz00
																												(BgL_iidz00_792,
																												BgL_arg2843z00_819,
																												BgL_arg2844z00_820,
																												BgL_arg2845z00_821);
																										}
																										{	/* Object/slots.scm 212 */
																											BgL_slotz00_bglt
																												BgL_svalz00_794;
																											{	/* Object/slots.scm 217 */
																												obj_t
																													BgL_arg2832z00_808;
																												obj_t
																													BgL_arg2833z00_809;
																												obj_t
																													BgL_arg2834z00_810;
																												obj_t
																													BgL_arg2835z00_811;
																												BgL_typez00_bglt
																													BgL_arg2837z00_813;
																												obj_t
																													BgL_arg2838z00_814;
																												BgL_arg2832z00_808 =
																													CAR
																													(BgL_slotzd2idzd2_780);
																												BgL_arg2833z00_809 =
																													BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00
																													(CAR
																													(BgL_slotzd2idzd2_780));
																												BgL_arg2834z00_810 =
																													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 1)),
																													BgL_attrz00_781);
																												BgL_arg2835z00_811 =
																													BGl_findzd2defaultzd2attrz00zzobject_slotsz00
																													(BgL_attrz00_781);
																												{	/* Object/slots.scm 224 */
																													BgL_typez00_bglt
																														BgL_obj2541z00_816;
																													BgL_obj2541z00_816 =
																														((BgL_typez00_bglt)
																														BgL_itypez00_793);
																													{	/* Object/slots.scm 224 */
																														obj_t
																															BgL_auxz00_2341;
																														BgL_objectz00_bglt
																															BgL_auxz00_2339;
																														BgL_auxz00_2341 =
																															BGl_wideningzd2tveczd2zztvector_tvectorz00
																															(
																															(BgL_typez00_bglt)
																															(BgL_ftypez00_791));
																														BgL_auxz00_2339 =
																															(BgL_objectz00_bglt)
																															(BgL_obj2541z00_816);
																														BGL_OBJECT_WIDENING_SET
																															(BgL_auxz00_2339,
																															BgL_auxz00_2341);
																													}
																													BGL_OBJECT_CLASS_NUM_SET
																														(
																														(BgL_objectz00_bglt)
																														(BgL_obj2541z00_816),
																														BGl_classzd2numzd2zz__objectz00
																														(BGl_tvecz00zztvector_tvectorz00));
																													BgL_arg2837z00_813 =
																														BgL_obj2541z00_816;
																												}
																												BgL_arg2838z00_814 =
																													BGl_findzd2infozd2attrz00zzobject_slotsz00
																													(BgL_attrz00_781);
																												{	/* Object/slots.scm 216 */
																													BgL_slotz00_bglt
																														BgL_res3054z00_1506;
																													{	/* Object/slots.scm 216 */
																														obj_t
																															BgL_id2441z00_1462;
																														obj_t
																															BgL_classzd2owner2444zd2_1465;
																														bool_t
																															BgL_readzd2onlyzf32446z21_1467;
																														obj_t
																															BgL_virtualzd2num2448zd2_1469;
																														obj_t
																															BgL_indexed2451z00_1472;
																														BgL_id2441z00_1462 =
																															BgL_arg2832z00_808;
																														BgL_classzd2owner2444zd2_1465
																															=
																															(obj_t)
																															(BgL_classz00_6);
																														BgL_readzd2onlyzf32446z21_1467
																															=
																															CBOOL
																															(BgL_arg2834z00_810);
																														BgL_virtualzd2num2448zd2_1469
																															=
																															BINT(((long) -1));
																														BgL_indexed2451z00_1472
																															=
																															(obj_t)
																															(BgL_arg2837z00_813);
																														{	/* Object/slots.scm 216 */
																															BgL_slotz00_bglt
																																BgL_new2453z00_1474;
																															{	/* Object/slots.scm 216 */
																																BgL_slotz00_bglt
																																	BgL_res3052z00_1479;
																																{	/* Object/slots.scm 216 */
																																	BgL_slotz00_bglt
																																		BgL_new2481z00_1475;
																																	BgL_new2481z00_1475
																																		=
																																		(
																																		(BgL_slotz00_bglt)
																																		BREF
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_slotz00_bgl))));
																																	BGL_OBJECT_CLASS_NUM_SET
																																		(
																																		(BgL_objectz00_bglt)
																																		(BgL_new2481z00_1475),
																																		BGl_classzd2numzd2zz__objectz00
																																		(BGl_slotz00zzobject_slotsz00));
																																	{	/* Object/slots.scm 216 */
																																		BgL_objectz00_bglt
																																			BgL_auxz00_2357;
																																		BgL_auxz00_2357
																																			=
																																			(BgL_objectz00_bglt)
																																			(BgL_new2481z00_1475);
																																		BGL_OBJECT_WIDENING_SET
																																			(BgL_auxz00_2357,
																																			BFALSE);
																																	}
																																	BgL_res3052z00_1479
																																		=
																																		BgL_new2481z00_1475;
																																}
																																BgL_new2453z00_1474
																																	=
																																	BgL_res3052z00_1479;
																															}
																															{	/* Object/slots.scm 216 */
																																BgL_slotz00_bglt
																																	BgL_res3053z00_1505;
																																{	/* Object/slots.scm 216 */
																																	BgL_slotz00_bglt
																																		BgL_new2467z00_1480;
																																	BgL_new2467z00_1480
																																		=
																																		BgL_new2453z00_1474;
																																	{	/* Object/slots.scm 216 */
																																		obj_t
																																			BgL_id2455z00_1493;
																																		obj_t
																																			BgL_name2456z00_1494;
																																		obj_t
																																			BgL_src2457z00_1495;
																																		obj_t
																																			BgL_classzd2owner2458zd2_1496;
																																		obj_t
																																			BgL_type2459z00_1497;
																																		bool_t
																																			BgL_readzd2onlyzf32460z21_1498;
																																		obj_t
																																			BgL_defaultzd2value2461zd2_1499;
																																		obj_t
																																			BgL_virtualzd2num2462zd2_1500;
																																		obj_t
																																			BgL_getter2463z00_1501;
																																		obj_t
																																			BgL_setter2464z00_1502;
																																		obj_t
																																			BgL_indexed2465z00_1503;
																																		obj_t
																																			BgL_userzd2info2466zd2_1504;
																																		BgL_id2455z00_1493
																																			=
																																			BgL_id2441z00_1462;
																																		BgL_name2456z00_1494
																																			=
																																			BgL_arg2833z00_809;
																																		BgL_src2457z00_1495
																																			=
																																			BgL_sz00_779;
																																		BgL_classzd2owner2458zd2_1496
																																			=
																																			BgL_classzd2owner2444zd2_1465;
																																		BgL_type2459z00_1497
																																			=
																																			BgL_ftypez00_791;
																																		BgL_readzd2onlyzf32460z21_1498
																																			=
																																			BgL_readzd2onlyzf32446z21_1467;
																																		BgL_defaultzd2value2461zd2_1499
																																			=
																																			BgL_arg2835z00_811;
																																		BgL_virtualzd2num2462zd2_1500
																																			=
																																			BgL_virtualzd2num2448zd2_1469;
																																		BgL_getter2463z00_1501
																																			= BFALSE;
																																		BgL_setter2464z00_1502
																																			= BFALSE;
																																		BgL_indexed2465z00_1503
																																			=
																																			BgL_indexed2451z00_1472;
																																		BgL_userzd2info2466zd2_1504
																																			=
																																			BgL_arg2838z00_814;
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_idz00) = ((obj_t) BgL_id2455z00_1493), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_namez00) = ((obj_t) BgL_name2456z00_1494), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_srcz00) = ((obj_t) BgL_src2457z00_1495), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_classzd2ownerzd2) = ((obj_t) BgL_classzd2owner2458zd2_1496), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_typez00) = ((obj_t) BgL_type2459z00_1497), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_readzd2onlyzf3z21) = ((bool_t) BgL_readzd2onlyzf32460z21_1498), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_defaultzd2valuezd2) = ((obj_t) BgL_defaultzd2value2461zd2_1499), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_virtualzd2numzd2) = ((obj_t) BgL_virtualzd2num2462zd2_1500), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_getterz00) = ((obj_t) BgL_getter2463z00_1501), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_setterz00) = ((obj_t) BgL_setter2464z00_1502), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_indexedz00) = ((obj_t) BgL_indexed2465z00_1503), BUNSPEC);
																																		((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1480))->BgL_userzd2infozd2) = ((obj_t) BgL_userzd2info2466zd2_1504), BUNSPEC);
																																		BgL_res3053z00_1505
																																			=
																																			BgL_new2467z00_1480;
																																}} BgL_res3053z00_1505;
																															}
																															BgL_res3054z00_1506
																																=
																																BgL_new2453z00_1474;
																													}}
																													BgL_svalz00_794 =
																														BgL_res3054z00_1506;
																											}}
																											{	/* Object/slots.scm 216 */
																												BgL_slotz00_bglt
																													BgL_slenz00_795;
																												{	/* Object/slots.scm 227 */
																													obj_t
																														BgL_lenzd2idzd2_798;
																													{	/* Object/slots.scm 227 */
																														obj_t
																															BgL_arg2826z00_802;
																														{	/* Object/slots.scm 227 */
																															obj_t
																																BgL_arg2827z00_803;
																															obj_t
																																BgL_arg2828z00_804;
																															{	/* Object/slots.scm 227 */
																																obj_t
																																	BgL_arg2831z00_807;
																																BgL_arg2831z00_807
																																	=
																																	CAR
																																	(BgL_slotzd2idzd2_780);
																																{	/* Object/slots.scm 227 */
																																	obj_t
																																		BgL_res3055z00_1510;
																																	{	/* Object/slots.scm 227 */
																																		obj_t
																																			BgL_symbolz00_1508;
																																		BgL_symbolz00_1508
																																			=
																																			BgL_arg2831z00_807;
																																		{	/* Object/slots.scm 227 */
																																			obj_t
																																				BgL_arg2063z00_1509;
																																			BgL_arg2063z00_1509
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_symbolz00_1508);
																																			BgL_res3055z00_1510
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2063z00_1509);
																																	}}
																																	BgL_arg2827z00_803
																																		=
																																		BgL_res3055z00_1510;
																															}}
																															{	/* Object/slots.scm 227 */
																																obj_t
																																	BgL_res3056z00_1513;
																																{	/* Object/slots.scm 227 */
																																	obj_t
																																		BgL_symbolz00_1511;
																																	BgL_symbolz00_1511
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			4));
																																	{	/* Object/slots.scm 227 */
																																		obj_t
																																			BgL_arg2063z00_1512;
																																		BgL_arg2063z00_1512
																																			=
																																			SYMBOL_TO_STRING
																																			(BgL_symbolz00_1511);
																																		BgL_res3056z00_1513
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg2063z00_1512);
																																}}
																																BgL_arg2828z00_804
																																	=
																																	BgL_res3056z00_1513;
																															}
																															{	/* Object/slots.scm 227 */
																																obj_t
																																	BgL_list2829z00_805;
																																{	/* Object/slots.scm 227 */
																																	obj_t
																																		BgL_arg2830z00_806;
																																	BgL_arg2830z00_806
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2828z00_804,
																																		BNIL);
																																	BgL_list2829z00_805
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2827z00_803,
																																		BgL_arg2830z00_806);
																																}
																																BgL_arg2826z00_802
																																	=
																																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																	(BgL_list2829z00_805);
																														}}
																														BgL_lenzd2idzd2_798
																															=
																															string_to_symbol
																															(BSTRING_TO_STRING
																															(BgL_arg2826z00_802));
																													}
																													{	/* Object/slots.scm 230 */
																														obj_t
																															BgL_arg2822z00_799;
																														obj_t
																															BgL_arg2823z00_800;
																														BgL_arg2822z00_799 =
																															BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00
																															(BgL_lenzd2idzd2_798);
																														BgL_arg2823z00_800 =
																															BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
																														{	/* Object/slots.scm 228 */
																															BgL_slotz00_bglt
																																BgL_res3059z00_1559;
																															{	/* Object/slots.scm 228 */
																																obj_t
																																	BgL_classzd2owner2444zd2_1518;
																																obj_t
																																	BgL_type2445z00_1519;
																																obj_t
																																	BgL_virtualzd2num2448zd2_1522;
																																BgL_classzd2owner2444zd2_1518
																																	=
																																	(obj_t)
																																	(BgL_classz00_6);
																																BgL_type2445z00_1519
																																	=
																																	BGl_za2longza2z00zztype_cachez00;
																																BgL_virtualzd2num2448zd2_1522
																																	=
																																	BINT(((long)
																																		-1));
																																{	/* Object/slots.scm 228 */
																																	BgL_slotz00_bglt
																																		BgL_new2453z00_1527;
																																	{	/* Object/slots.scm 228 */
																																		BgL_slotz00_bglt
																																			BgL_res3057z00_1532;
																																		{	/* Object/slots.scm 228 */
																																			BgL_slotz00_bglt
																																				BgL_new2481z00_1528;
																																			BgL_new2481z00_1528
																																				=
																																				(
																																				(BgL_slotz00_bglt)
																																				BREF
																																				(GC_MALLOC
																																					(sizeof
																																						(struct
																																							BgL_slotz00_bgl))));
																																			BGL_OBJECT_CLASS_NUM_SET
																																				(
																																				(BgL_objectz00_bglt)
																																				(BgL_new2481z00_1528),
																																				BGl_classzd2numzd2zz__objectz00
																																				(BGl_slotz00zzobject_slotsz00));
																																			{	/* Object/slots.scm 228 */
																																				BgL_objectz00_bglt
																																					BgL_auxz00_2390;
																																				BgL_auxz00_2390
																																					=
																																					(BgL_objectz00_bglt)
																																					(BgL_new2481z00_1528);
																																				BGL_OBJECT_WIDENING_SET
																																					(BgL_auxz00_2390,
																																					BFALSE);
																																			}
																																			BgL_res3057z00_1532
																																				=
																																				BgL_new2481z00_1528;
																																		}
																																		BgL_new2453z00_1527
																																			=
																																			BgL_res3057z00_1532;
																																	}
																																	{	/* Object/slots.scm 228 */
																																		BgL_slotz00_bglt
																																			BgL_res3058z00_1558;
																																		{	/* Object/slots.scm 228 */
																																			BgL_slotz00_bglt
																																				BgL_new2467z00_1533;
																																			BgL_new2467z00_1533
																																				=
																																				BgL_new2453z00_1527;
																																			{	/* Object/slots.scm 228 */
																																				obj_t
																																					BgL_id2455z00_1546;
																																				obj_t
																																					BgL_name2456z00_1547;
																																				obj_t
																																					BgL_src2457z00_1548;
																																				obj_t
																																					BgL_classzd2owner2458zd2_1549;
																																				obj_t
																																					BgL_type2459z00_1550;
																																				bool_t
																																					BgL_readzd2onlyzf32460z21_1551;
																																				obj_t
																																					BgL_defaultzd2value2461zd2_1552;
																																				obj_t
																																					BgL_virtualzd2num2462zd2_1553;
																																				obj_t
																																					BgL_getter2463z00_1554;
																																				obj_t
																																					BgL_setter2464z00_1555;
																																				obj_t
																																					BgL_indexed2465z00_1556;
																																				obj_t
																																					BgL_userzd2info2466zd2_1557;
																																				BgL_id2455z00_1546
																																					=
																																					BgL_lenzd2idzd2_798;
																																				BgL_name2456z00_1547
																																					=
																																					BgL_arg2822z00_799;
																																				BgL_src2457z00_1548
																																					=
																																					BgL_sz00_779;
																																				BgL_classzd2owner2458zd2_1549
																																					=
																																					BgL_classzd2owner2444zd2_1518;
																																				BgL_type2459z00_1550
																																					=
																																					BgL_type2445z00_1519;
																																				BgL_readzd2onlyzf32460z21_1551
																																					=
																																					(
																																					(bool_t)
																																					1);
																																				BgL_defaultzd2value2461zd2_1552
																																					=
																																					BgL_arg2823z00_800;
																																				BgL_virtualzd2num2462zd2_1553
																																					=
																																					BgL_virtualzd2num2448zd2_1522;
																																				BgL_getter2463z00_1554
																																					=
																																					BFALSE;
																																				BgL_setter2464z00_1555
																																					=
																																					BFALSE;
																																				BgL_indexed2465z00_1556
																																					=
																																					BFALSE;
																																				BgL_userzd2info2466zd2_1557
																																					=
																																					BUNSPEC;
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_idz00) = ((obj_t) BgL_id2455z00_1546), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_namez00) = ((obj_t) BgL_name2456z00_1547), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_srcz00) = ((obj_t) BgL_src2457z00_1548), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_classzd2ownerzd2) = ((obj_t) BgL_classzd2owner2458zd2_1549), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_typez00) = ((obj_t) BgL_type2459z00_1550), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_readzd2onlyzf3z21) = ((bool_t) BgL_readzd2onlyzf32460z21_1551), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_defaultzd2valuezd2) = ((obj_t) BgL_defaultzd2value2461zd2_1552), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_virtualzd2numzd2) = ((obj_t) BgL_virtualzd2num2462zd2_1553), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_getterz00) = ((obj_t) BgL_getter2463z00_1554), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_setterz00) = ((obj_t) BgL_setter2464z00_1555), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_indexedz00) = ((obj_t) BgL_indexed2465z00_1556), BUNSPEC);
																																				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1533))->BgL_userzd2infozd2) = ((obj_t) BgL_userzd2info2466zd2_1557), BUNSPEC);
																																				BgL_res3058z00_1558
																																					=
																																					BgL_new2467z00_1533;
																																		}} BgL_res3058z00_1558;
																																	}
																																	BgL_res3059z00_1559
																																		=
																																		BgL_new2453z00_1527;
																															}}
																															BgL_slenz00_795 =
																																BgL_res3059z00_1559;
																												}}}
																												{	/* Object/slots.scm 227 */

																													((((BgL_typez00_bglt)
																																CREF
																																(BgL_itypez00_793))->
																															BgL_initzf3zf3) =
																														((bool_t) ((bool_t)
																																1)), BUNSPEC);
																													{	/* Object/slots.scm 236 */
																														int BgL_auxz00_2406;

																														BgL_auxz00_2406 =
																															(int) (((long)
																																2));
																														BGL_MVALUES_NUMBER_SET
																															(BgL_auxz00_2406);
																													}
																													{	/* Object/slots.scm 236 */
																														obj_t
																															BgL_auxz00_2411;
																														int BgL_auxz00_2409;

																														BgL_auxz00_2411 =
																															(obj_t)
																															(BgL_slenz00_795);
																														BgL_auxz00_2409 =
																															(int) (((long)
																																1));
																														BGL_MVALUES_VAL_SET
																															(BgL_auxz00_2409,
																															BgL_auxz00_2411);
																													}
																													BgL_svalz00_628 =
																														BgL_svalz00_794;
																							}}}}}}
																							{	/* Object/slots.scm 322 */
																								obj_t BgL_slenz00_629;

																								{	/* Object/slots.scm 322 */
																									int BgL_auxz00_2414;

																									BgL_auxz00_2414 =
																										(int) (((long) 1));
																									BgL_slenz00_629 =
																										BGL_MVALUES_VAL
																										(BgL_auxz00_2414);
																								}
																								{	/* Object/slots.scm 322 */
																									obj_t BgL_arg2707z00_630;

																									obj_t BgL_arg2708z00_631;

																									BgL_arg2707z00_630 =
																										CDR(BgL_slotsz00_516);
																									{	/* Object/slots.scm 323 */
																										obj_t BgL_arg2709z00_632;

																										{	/* Object/slots.scm 323 */
																											obj_t BgL_list2710z00_633;

																											BgL_list2710z00_633 =
																												MAKE_PAIR
																												(BgL_nslotsz00_517,
																												BNIL);
																											BgL_arg2709z00_632 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_slenz00_629,
																												BgL_list2710z00_633);
																										}
																										BgL_arg2708z00_631 =
																											MAKE_PAIR(
																											(obj_t) (BgL_svalz00_628),
																											BgL_arg2709z00_632);
																									}
																									{
																										obj_t BgL_nslotsz00_2423;

																										obj_t BgL_slotsz00_2422;

																										BgL_slotsz00_2422 =
																											BgL_arg2707z00_630;
																										BgL_nslotsz00_2423 =
																											BgL_arg2708z00_631;
																										BgL_nslotsz00_517 =
																											BgL_nslotsz00_2423;
																										BgL_slotsz00_516 =
																											BgL_slotsz00_2422;
																										goto
																											BgL_zc3anonymousza32592ze3z83_519;
																									}
																								}
																							}
																						}
																					}
																				else
																					{	/* Object/slots.scm 318 */
																						obj_t BgL_carzd21719zd2_549;

																						BgL_carzd21719zd2_549 =
																							CAR(BgL_sz00_526);
																						if (PAIRP(BgL_carzd21719zd2_549))
																							{	/* Object/slots.scm 318 */
																								obj_t BgL_cdrzd21723zd2_551;

																								BgL_cdrzd21723zd2_551 =
																									CDR(BgL_carzd21719zd2_549);
																								if (
																									(CAR(BgL_carzd21719zd2_549) ==
																										CNST_TABLE_REF(((long) 6))))
																									{	/* Object/slots.scm 318 */
																										if (PAIRP
																											(BgL_cdrzd21723zd2_551))
																											{	/* Object/slots.scm 318 */
																												if (NULLP(CDR
																														(BgL_cdrzd21723zd2_551)))
																													{	/* Object/slots.scm 318 */
																														BgL_idz00_530 =
																															CAR
																															(BgL_cdrzd21723zd2_551);
																														BgL_attrz00_531 =
																															BgL_cdrzd21702zd2_538;
																													BgL_tagzd21693zd2_532:
																														{	/* Object/slots.scm 326 */
																															obj_t
																																BgL_vgetz00_634;
																															BgL_vgetz00_634 =
																																BGl_findzd2virtualzd2attrz00zzobject_slotsz00
																																(BgL_attrz00_531);
																															{	/* Object/slots.scm 328 */
																																obj_t
																																	BgL_vsetz00_635;
																																{	/* Object/slots.scm 328 */
																																	int
																																		BgL_auxz00_2440;
																																	BgL_auxz00_2440
																																		=
																																		(int) ((
																																			(long)
																																			1));
																																	BgL_vsetz00_635
																																		=
																																		BGL_MVALUES_VAL
																																		(BgL_auxz00_2440);
																																}
																																{	/* Object/slots.scm 328 */
																																	obj_t
																																		BgL_arg2711z00_636;
																																	obj_t
																																		BgL_arg2712z00_637;
																																	obj_t
																																		BgL_arg2713z00_638;
																																	BgL_arg2711z00_636
																																		=
																																		CDR
																																		(BgL_slotsz00_516);
																																	{	/* Object/slots.scm 329 */
																																		obj_t
																																			BgL_auxz00_2444;
																																		BgL_sz00_824
																																			=
																																			BgL_sz00_526;
																																		BgL_slotzd2idzd2_825
																																			=
																																			BgL_idz00_530;
																																		BgL_attrz00_826
																																			=
																																			BgL_attrz00_531;
																																		BgL_vgetz00_827
																																			=
																																			BgL_vgetz00_634;
																																		BgL_vsetz00_828
																																			=
																																			BgL_vsetz00_635;
																																		BgL_vnumz00_829
																																			=
																																			BgL_vnumz00_518;
																																		{	/* Object/slots.scm 241 */
																																			obj_t
																																				BgL_readozf3zf3_831;
																																			BgL_readozf3zf3_831
																																				=
																																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																				(CNST_TABLE_REF
																																				(((long)
																																						1)),
																																				BgL_attrz00_826);
																																			{	/* Object/slots.scm 243 */
																																				bool_t
																																					BgL_testz00_2447;
																																				if (CBOOL(BgL_vsetz00_828))
																																					{	/* Object/slots.scm 243 */
																																						if (CBOOL(BgL_vgetz00_827))
																																							{	/* Object/slots.scm 243 */
																																								BgL_testz00_2447
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						else
																																							{	/* Object/slots.scm 243 */
																																								BgL_testz00_2447
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																					}
																																				else
																																					{	/* Object/slots.scm 243 */
																																						BgL_testz00_2447
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_testz00_2447)
																																					{	/* Object/slots.scm 244 */
																																						obj_t
																																							BgL_arg2849z00_833;
																																						obj_t
																																							BgL_arg2850z00_834;
																																						obj_t
																																							BgL_arg2852z00_836;
																																						BgL_arg2849z00_833
																																							=
																																							BGl_findzd2locationzd2zztools_locationz00
																																							(BgL_sz00_824);
																																						{
																																							BgL_typez00_bglt
																																								BgL_auxz00_2453;
																																							BgL_auxz00_2453
																																								=
																																								(BgL_typez00_bglt)
																																								(BgL_classz00_6);
																																							BgL_arg2850z00_834
																																								=
																																								(
																																								((BgL_typez00_bglt) CREF(BgL_auxz00_2453))->BgL_idz00);
																																						}
																																						BgL_arg2852z00_836
																																							=
																																							CAR
																																							(BgL_slotzd2idzd2_825);
																																						{	/* Object/slots.scm 244 */
																																							obj_t
																																								BgL_list2855z00_838;
																																							BgL_list2855z00_838
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_auxz00_2444
																																								=
																																								BGl_userzd2errorzf2locationz20zztools_errorz00
																																								(BgL_arg2849z00_833,
																																								BgL_arg2850z00_834,
																																								BGl_string3084z00zzobject_slotsz00,
																																								BgL_arg2852z00_836,
																																								BgL_list2855z00_838);
																																						}
																																					}
																																				else
																																					{	/* Object/slots.scm 249 */
																																						bool_t
																																							BgL_testz00_2459;
																																						if (CBOOL(BgL_vsetz00_828))
																																							{	/* Object/slots.scm 249 */
																																								BgL_testz00_2459
																																									=
																																									CBOOL
																																									(BgL_readozf3zf3_831);
																																							}
																																						else
																																							{	/* Object/slots.scm 249 */
																																								BgL_testz00_2459
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						if (BgL_testz00_2459)
																																							{	/* Object/slots.scm 250 */
																																								obj_t
																																									BgL_arg2857z00_840;
																																								obj_t
																																									BgL_arg2858z00_841;
																																								obj_t
																																									BgL_arg2861z00_843;
																																								BgL_arg2857z00_840
																																									=
																																									BGl_findzd2locationzd2zztools_locationz00
																																									(BgL_sz00_824);
																																								{
																																									BgL_typez00_bglt
																																										BgL_auxz00_2464;
																																									BgL_auxz00_2464
																																										=
																																										(BgL_typez00_bglt)
																																										(BgL_classz00_6);
																																									BgL_arg2858z00_841
																																										=
																																										(
																																										((BgL_typez00_bglt) CREF(BgL_auxz00_2464))->BgL_idz00);
																																								}
																																								BgL_arg2861z00_843
																																									=
																																									CAR
																																									(BgL_slotzd2idzd2_825);
																																								{	/* Object/slots.scm 250 */
																																									obj_t
																																										BgL_list2863z00_845;
																																									BgL_list2863z00_845
																																										=
																																										MAKE_PAIR
																																										(BNIL,
																																										BNIL);
																																									BgL_auxz00_2444
																																										=
																																										BGl_userzd2errorzf2locationz20zztools_errorz00
																																										(BgL_arg2857z00_840,
																																										BgL_arg2858z00_841,
																																										BGl_string3085z00zzobject_slotsz00,
																																										BgL_arg2861z00_843,
																																										BgL_list2863z00_845);
																																								}
																																							}
																																						else
																																							{	/* Object/slots.scm 255 */
																																								bool_t
																																									BgL_testz00_2470;
																																								if (CBOOL(BgL_vgetz00_827))
																																									{	/* Object/slots.scm 255 */
																																										if (CBOOL(BgL_vsetz00_828))
																																											{	/* Object/slots.scm 255 */
																																												BgL_testz00_2470
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										else
																																											{	/* Object/slots.scm 255 */
																																												if (CBOOL(BgL_readozf3zf3_831))
																																													{	/* Object/slots.scm 255 */
																																														BgL_testz00_2470
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												else
																																													{	/* Object/slots.scm 255 */
																																														BgL_testz00_2470
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																											}
																																									}
																																								else
																																									{	/* Object/slots.scm 255 */
																																										BgL_testz00_2470
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																								if (BgL_testz00_2470)
																																									{	/* Object/slots.scm 256 */
																																										obj_t
																																											BgL_arg2865z00_847;
																																										obj_t
																																											BgL_arg2866z00_848;
																																										obj_t
																																											BgL_arg2868z00_850;
																																										BgL_arg2865z00_847
																																											=
																																											BGl_findzd2locationzd2zztools_locationz00
																																											(BgL_sz00_824);
																																										{
																																											BgL_typez00_bglt
																																												BgL_auxz00_2478;
																																											BgL_auxz00_2478
																																												=
																																												(BgL_typez00_bglt)
																																												(BgL_classz00_6);
																																											BgL_arg2866z00_848
																																												=
																																												(
																																												((BgL_typez00_bglt) CREF(BgL_auxz00_2478))->BgL_idz00);
																																										}
																																										BgL_arg2868z00_850
																																											=
																																											CAR
																																											(BgL_slotzd2idzd2_825);
																																										{	/* Object/slots.scm 256 */
																																											obj_t
																																												BgL_list2870z00_852;
																																											BgL_list2870z00_852
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_auxz00_2444
																																												=
																																												BGl_userzd2errorzf2locationz20zztools_errorz00
																																												(BgL_arg2865z00_847,
																																												BgL_arg2866z00_848,
																																												BGl_string3086z00zzobject_slotsz00,
																																												BgL_arg2868z00_850,
																																												BgL_list2870z00_852);
																																										}
																																									}
																																								else
																																									{	/* Object/slots.scm 263 */
																																										obj_t
																																											BgL_arg2871z00_853;
																																										obj_t
																																											BgL_arg2872z00_854;
																																										obj_t
																																											BgL_arg2873z00_855;
																																										obj_t
																																											BgL_arg2874z00_856;
																																										obj_t
																																											BgL_arg2875z00_857;
																																										obj_t
																																											BgL_arg2876z00_858;
																																										BgL_arg2871z00_853
																																											=
																																											CAR
																																											(BgL_slotzd2idzd2_825);
																																										BgL_arg2872z00_854
																																											=
																																											BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00
																																											(CAR
																																											(BgL_slotzd2idzd2_825));
																																										BgL_arg2873z00_855
																																											=
																																											BGl_findzd2slotzd2typez00zzobject_slotsz00
																																											(BgL_slotzd2idzd2_825,
																																											BgL_sz00_824);
																																										BgL_arg2874z00_856
																																											=
																																											BGl_findzd2defaultzd2attrz00zzobject_slotsz00
																																											(BgL_attrz00_826);
																																										if (CBOOL(BgL_vgetz00_827))
																																											{	/* Object/slots.scm 270 */
																																												BgL_arg2875z00_857
																																													=
																																													BgL_vnumz00_829;
																																											}
																																										else
																																											{	/* Object/slots.scm 270 */
																																												BgL_arg2875z00_857
																																													=
																																													BINT
																																													(
																																													((long) -1));
																																											}
																																										BgL_arg2876z00_858
																																											=
																																											BGl_findzd2infozd2attrz00zzobject_slotsz00
																																											(BgL_attrz00_826);
																																										{	/* Object/slots.scm 262 */
																																											BgL_slotz00_bglt
																																												BgL_res3062z00_1617;
																																											{	/* Object/slots.scm 262 */
																																												obj_t
																																													BgL_id2441z00_1573;
																																												obj_t
																																													BgL_classzd2owner2444zd2_1576;
																																												bool_t
																																													BgL_readzd2onlyzf32446z21_1578;
																																												BgL_id2441z00_1573
																																													=
																																													BgL_arg2871z00_853;
																																												BgL_classzd2owner2444zd2_1576
																																													=
																																													(obj_t)
																																													(BgL_classz00_6);
																																												BgL_readzd2onlyzf32446z21_1578
																																													=
																																													CBOOL
																																													(BgL_readozf3zf3_831);
																																												{	/* Object/slots.scm 262 */
																																													BgL_slotz00_bglt
																																														BgL_new2453z00_1585;
																																													{	/* Object/slots.scm 262 */
																																														BgL_slotz00_bglt
																																															BgL_res3060z00_1590;
																																														{	/* Object/slots.scm 262 */
																																															BgL_slotz00_bglt
																																																BgL_new2481z00_1586;
																																															BgL_new2481z00_1586
																																																=
																																																(
																																																(BgL_slotz00_bglt)
																																																BREF
																																																(GC_MALLOC
																																																	(sizeof
																																																		(struct
																																																			BgL_slotz00_bgl))));
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																(BgL_objectz00_bglt)
																																																(BgL_new2481z00_1586),
																																																BGl_classzd2numzd2zz__objectz00
																																																(BGl_slotz00zzobject_slotsz00));
																																															{	/* Object/slots.scm 262 */
																																																BgL_objectz00_bglt
																																																	BgL_auxz00_2499;
																																																BgL_auxz00_2499
																																																	=
																																																	(BgL_objectz00_bglt)
																																																	(BgL_new2481z00_1586);
																																																BGL_OBJECT_WIDENING_SET
																																																	(BgL_auxz00_2499,
																																																	BFALSE);
																																															}
																																															BgL_res3060z00_1590
																																																=
																																																BgL_new2481z00_1586;
																																														}
																																														BgL_new2453z00_1585
																																															=
																																															BgL_res3060z00_1590;
																																													}
																																													{	/* Object/slots.scm 262 */
																																														BgL_slotz00_bglt
																																															BgL_res3061z00_1616;
																																														{	/* Object/slots.scm 262 */
																																															BgL_slotz00_bglt
																																																BgL_new2467z00_1591;
																																															BgL_new2467z00_1591
																																																=
																																																BgL_new2453z00_1585;
																																															{	/* Object/slots.scm 262 */
																																																obj_t
																																																	BgL_id2455z00_1604;
																																																obj_t
																																																	BgL_name2456z00_1605;
																																																obj_t
																																																	BgL_src2457z00_1606;
																																																obj_t
																																																	BgL_classzd2owner2458zd2_1607;
																																																obj_t
																																																	BgL_type2459z00_1608;
																																																bool_t
																																																	BgL_readzd2onlyzf32460z21_1609;
																																																obj_t
																																																	BgL_defaultzd2value2461zd2_1610;
																																																obj_t
																																																	BgL_virtualzd2num2462zd2_1611;
																																																obj_t
																																																	BgL_getter2463z00_1612;
																																																obj_t
																																																	BgL_setter2464z00_1613;
																																																obj_t
																																																	BgL_indexed2465z00_1614;
																																																obj_t
																																																	BgL_userzd2info2466zd2_1615;
																																																BgL_id2455z00_1604
																																																	=
																																																	BgL_id2441z00_1573;
																																																BgL_name2456z00_1605
																																																	=
																																																	BgL_arg2872z00_854;
																																																BgL_src2457z00_1606
																																																	=
																																																	BgL_sz00_824;
																																																BgL_classzd2owner2458zd2_1607
																																																	=
																																																	BgL_classzd2owner2444zd2_1576;
																																																BgL_type2459z00_1608
																																																	=
																																																	BgL_arg2873z00_855;
																																																BgL_readzd2onlyzf32460z21_1609
																																																	=
																																																	BgL_readzd2onlyzf32446z21_1578;
																																																BgL_defaultzd2value2461zd2_1610
																																																	=
																																																	BgL_arg2874z00_856;
																																																BgL_virtualzd2num2462zd2_1611
																																																	=
																																																	BgL_arg2875z00_857;
																																																BgL_getter2463z00_1612
																																																	=
																																																	BgL_vgetz00_827;
																																																BgL_setter2464z00_1613
																																																	=
																																																	BgL_vsetz00_828;
																																																BgL_indexed2465z00_1614
																																																	=
																																																	BFALSE;
																																																BgL_userzd2info2466zd2_1615
																																																	=
																																																	BgL_arg2876z00_858;
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_idz00) = ((obj_t) BgL_id2455z00_1604), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_namez00) = ((obj_t) BgL_name2456z00_1605), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_srcz00) = ((obj_t) BgL_src2457z00_1606), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_classzd2ownerzd2) = ((obj_t) BgL_classzd2owner2458zd2_1607), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_typez00) = ((obj_t) BgL_type2459z00_1608), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_readzd2onlyzf3z21) = ((bool_t) BgL_readzd2onlyzf32460z21_1609), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_defaultzd2valuezd2) = ((obj_t) BgL_defaultzd2value2461zd2_1610), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_virtualzd2numzd2) = ((obj_t) BgL_virtualzd2num2462zd2_1611), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_getterz00) = ((obj_t) BgL_getter2463z00_1612), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_setterz00) = ((obj_t) BgL_setter2464z00_1613), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_indexedz00) = ((obj_t) BgL_indexed2465z00_1614), BUNSPEC);
																																																((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1591))->BgL_userzd2infozd2) = ((obj_t) BgL_userzd2info2466zd2_1615), BUNSPEC);
																																																BgL_res3061z00_1616
																																																	=
																																																	BgL_new2467z00_1591;
																																														}} BgL_res3061z00_1616;
																																													}
																																													BgL_res3062z00_1617
																																														=
																																														BgL_new2453z00_1585;
																																											}}
																																											BgL_auxz00_2444
																																												=
																																												(obj_t)
																																												(BgL_res3062z00_1617);
																																		}}}}}}
																																		BgL_arg2712z00_637
																																			=
																																			MAKE_PAIR
																																			(BgL_auxz00_2444,
																																			BgL_nslotsz00_517);
																																	}
																																	{	/* Object/slots.scm 331 */
																																		bool_t
																																			BgL_testz00_2516;
																																		if (CBOOL
																																			(BgL_vgetz00_634))
																																			{	/* Object/slots.scm 331 */
																																				BgL_testz00_2516
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Object/slots.scm 331 */
																																				BgL_testz00_2516
																																					=
																																					CBOOL
																																					(BgL_vsetz00_635);
																																			}
																																		if (BgL_testz00_2516)
																																			{	/* Object/slots.scm 331 */
																																				BgL_arg2713z00_638
																																					=
																																					BGl_2zb2zb2zz__r4_numbers_6_5z00
																																					(BgL_vnumz00_518,
																																					BINT((
																																							(long)
																																							1)));
																																			}
																																		else
																																			{	/* Object/slots.scm 331 */
																																				BgL_arg2713z00_638
																																					=
																																					BgL_vnumz00_518;
																																			}
																																	}
																																	{
																																		obj_t
																																			BgL_vnumz00_2524;
																																		obj_t
																																			BgL_nslotsz00_2523;
																																		obj_t
																																			BgL_slotsz00_2522;
																																		BgL_slotsz00_2522
																																			=
																																			BgL_arg2711z00_636;
																																		BgL_nslotsz00_2523
																																			=
																																			BgL_arg2712z00_637;
																																		BgL_vnumz00_2524
																																			=
																																			BgL_arg2713z00_638;
																																		BgL_vnumz00_518
																																			=
																																			BgL_vnumz00_2524;
																																		BgL_nslotsz00_517
																																			=
																																			BgL_nslotsz00_2523;
																																		BgL_slotsz00_516
																																			=
																																			BgL_slotsz00_2522;
																																		goto
																																			BgL_zc3anonymousza32592ze3z83_519;
																																	}
																																}
																															}
																														}
																													}
																												else
																													{	/* Object/slots.scm 318 */
																													BgL_tagzd21695zd2_535:
																														{	/* Object/slots.scm 337 */
																															obj_t
																																BgL_arg2719z00_644;
																															obj_t
																																BgL_arg2720z00_645;
																															BgL_arg2719z00_644
																																=
																																BGl_findzd2locationzd2zztools_locationz00
																																(BgL_sz00_526);
																															{
																																BgL_typez00_bglt
																																	BgL_auxz00_2527;
																																BgL_auxz00_2527
																																	=
																																	(BgL_typez00_bglt)
																																	(BgL_classz00_6);
																																BgL_arg2720z00_645
																																	=
																																	(((BgL_typez00_bglt) CREF(BgL_auxz00_2527))->BgL_idz00);
																															}
																															return
																																BGl_userzd2errorzf2locationz20zztools_errorz00
																																(BgL_arg2719z00_644,
																																BgL_arg2720z00_645,
																																BGl_string3090z00zzobject_slotsz00,
																																BgL_sz00_526,
																																BNIL);
																														}
																													}
																											}
																										else
																											{	/* Object/slots.scm 318 */
																												goto
																													BgL_tagzd21695zd2_535;
																											}
																									}
																								else
																									{	/* Object/slots.scm 318 */
																										goto BgL_tagzd21695zd2_535;
																									}
																							}
																						else
																							{	/* Object/slots.scm 318 */
																								goto BgL_tagzd21695zd2_535;
																							}
																					}
																			}
																		else
																			{	/* Object/slots.scm 318 */
																				obj_t BgL_carzd21741zd2_561;

																				BgL_carzd21741zd2_561 =
																					CAR(BgL_sz00_526);
																				if (PAIRP(BgL_carzd21741zd2_561))
																					{	/* Object/slots.scm 318 */
																						obj_t BgL_cdrzd21745zd2_563;

																						BgL_cdrzd21745zd2_563 =
																							CDR(BgL_carzd21741zd2_561);
																						if (
																							(CAR(BgL_carzd21741zd2_561) ==
																								CNST_TABLE_REF(((long) 6))))
																							{	/* Object/slots.scm 318 */
																								if (PAIRP
																									(BgL_cdrzd21745zd2_563))
																									{	/* Object/slots.scm 318 */
																										if (NULLP(CDR
																												(BgL_cdrzd21745zd2_563)))
																											{
																												obj_t BgL_attrz00_2546;

																												obj_t BgL_idz00_2544;

																												BgL_idz00_2544 =
																													CAR
																													(BgL_cdrzd21745zd2_563);
																												BgL_attrz00_2546 =
																													BgL_cdrzd21702zd2_538;
																												BgL_attrz00_531 =
																													BgL_attrz00_2546;
																												BgL_idz00_530 =
																													BgL_idz00_2544;
																												goto
																													BgL_tagzd21693zd2_532;
																											}
																										else
																											{	/* Object/slots.scm 318 */
																												goto
																													BgL_tagzd21695zd2_535;
																											}
																									}
																								else
																									{	/* Object/slots.scm 318 */
																										goto BgL_tagzd21695zd2_535;
																									}
																							}
																						else
																							{	/* Object/slots.scm 318 */
																								goto BgL_tagzd21695zd2_535;
																							}
																					}
																				else
																					{	/* Object/slots.scm 318 */
																						goto BgL_tagzd21695zd2_535;
																					}
																			}
																	}
																else
																	{	/* Object/slots.scm 318 */
																		obj_t BgL_carzd21763zd2_572;

																		BgL_carzd21763zd2_572 = CAR(BgL_sz00_526);
																		if (PAIRP(BgL_carzd21763zd2_572))
																			{	/* Object/slots.scm 318 */
																				obj_t BgL_cdrzd21767zd2_574;

																				BgL_cdrzd21767zd2_574 =
																					CDR(BgL_carzd21763zd2_572);
																				if (
																					(CAR(BgL_carzd21763zd2_572) ==
																						CNST_TABLE_REF(((long) 6))))
																					{	/* Object/slots.scm 318 */
																						if (PAIRP(BgL_cdrzd21767zd2_574))
																							{	/* Object/slots.scm 318 */
																								if (NULLP(CDR
																										(BgL_cdrzd21767zd2_574)))
																									{
																										obj_t BgL_attrz00_2562;

																										obj_t BgL_idz00_2560;

																										BgL_idz00_2560 =
																											CAR
																											(BgL_cdrzd21767zd2_574);
																										BgL_attrz00_2562 =
																											BgL_cdrzd21702zd2_538;
																										BgL_attrz00_531 =
																											BgL_attrz00_2562;
																										BgL_idz00_530 =
																											BgL_idz00_2560;
																										goto BgL_tagzd21693zd2_532;
																									}
																								else
																									{	/* Object/slots.scm 318 */
																										goto BgL_tagzd21695zd2_535;
																									}
																							}
																						else
																							{	/* Object/slots.scm 318 */
																								goto BgL_tagzd21695zd2_535;
																							}
																					}
																				else
																					{	/* Object/slots.scm 318 */
																						goto BgL_tagzd21695zd2_535;
																					}
																			}
																		else
																			{	/* Object/slots.scm 318 */
																				goto BgL_tagzd21695zd2_535;
																			}
																	}
															}
														else
															{	/* Object/slots.scm 318 */
																obj_t BgL_carzd21785zd2_585;

																BgL_carzd21785zd2_585 = CAR(BgL_sz00_526);
																if (PAIRP(BgL_carzd21785zd2_585))
																	{	/* Object/slots.scm 318 */
																		obj_t BgL_cdrzd21789zd2_587;

																		BgL_cdrzd21789zd2_587 =
																			CDR(BgL_carzd21785zd2_585);
																		if (
																			(CAR(BgL_carzd21785zd2_585) ==
																				CNST_TABLE_REF(((long) 6))))
																			{	/* Object/slots.scm 318 */
																				if (PAIRP(BgL_cdrzd21789zd2_587))
																					{	/* Object/slots.scm 318 */
																						if (NULLP(CDR
																								(BgL_cdrzd21789zd2_587)))
																							{
																								obj_t BgL_attrz00_2578;

																								obj_t BgL_idz00_2576;

																								BgL_idz00_2576 =
																									CAR(BgL_cdrzd21789zd2_587);
																								BgL_attrz00_2578 =
																									BgL_cdrzd21702zd2_538;
																								BgL_attrz00_531 =
																									BgL_attrz00_2578;
																								BgL_idz00_530 = BgL_idz00_2576;
																								goto BgL_tagzd21693zd2_532;
																							}
																						else
																							{	/* Object/slots.scm 318 */
																								goto BgL_tagzd21695zd2_535;
																							}
																					}
																				else
																					{	/* Object/slots.scm 318 */
																						goto BgL_tagzd21695zd2_535;
																					}
																			}
																		else
																			{	/* Object/slots.scm 318 */
																				goto BgL_tagzd21695zd2_535;
																			}
																	}
																else
																	{	/* Object/slots.scm 318 */
																		goto BgL_tagzd21695zd2_535;
																	}
															}
													}
												else
													{	/* Object/slots.scm 318 */
														obj_t BgL_carzd21807zd2_596;

														BgL_carzd21807zd2_596 = CAR(BgL_sz00_526);
														if (PAIRP(BgL_carzd21807zd2_596))
															{	/* Object/slots.scm 318 */
																obj_t BgL_cdrzd21811zd2_598;

																BgL_cdrzd21811zd2_598 =
																	CDR(BgL_carzd21807zd2_596);
																if (
																	(CAR(BgL_carzd21807zd2_596) ==
																		CNST_TABLE_REF(((long) 6))))
																	{	/* Object/slots.scm 318 */
																		if (PAIRP(BgL_cdrzd21811zd2_598))
																			{	/* Object/slots.scm 318 */
																				if (NULLP(CDR(BgL_cdrzd21811zd2_598)))
																					{
																						obj_t BgL_attrz00_2594;

																						obj_t BgL_idz00_2592;

																						BgL_idz00_2592 =
																							CAR(BgL_cdrzd21811zd2_598);
																						BgL_attrz00_2594 =
																							BgL_cdrzd21702zd2_538;
																						BgL_attrz00_531 = BgL_attrz00_2594;
																						BgL_idz00_530 = BgL_idz00_2592;
																						goto BgL_tagzd21693zd2_532;
																					}
																				else
																					{	/* Object/slots.scm 318 */
																						goto BgL_tagzd21695zd2_535;
																					}
																			}
																		else
																			{	/* Object/slots.scm 318 */
																				goto BgL_tagzd21695zd2_535;
																			}
																	}
																else
																	{	/* Object/slots.scm 318 */
																		goto BgL_tagzd21695zd2_535;
																	}
															}
														else
															{	/* Object/slots.scm 318 */
																goto BgL_tagzd21695zd2_535;
															}
													}
											}
										else
											{	/* Object/slots.scm 318 */
												obj_t BgL_carzd21829zd2_607;

												BgL_carzd21829zd2_607 = CAR(BgL_sz00_526);
												if (PAIRP(BgL_carzd21829zd2_607))
													{	/* Object/slots.scm 318 */
														obj_t BgL_cdrzd21833zd2_609;

														BgL_cdrzd21833zd2_609 = CDR(BgL_carzd21829zd2_607);
														if (
															(CAR(BgL_carzd21829zd2_607) ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Object/slots.scm 318 */
																if (PAIRP(BgL_cdrzd21833zd2_609))
																	{	/* Object/slots.scm 318 */
																		if (NULLP(CDR(BgL_cdrzd21833zd2_609)))
																			{
																				obj_t BgL_attrz00_2610;

																				obj_t BgL_idz00_2608;

																				BgL_idz00_2608 =
																					CAR(BgL_cdrzd21833zd2_609);
																				BgL_attrz00_2610 =
																					BgL_cdrzd21702zd2_538;
																				BgL_attrz00_531 = BgL_attrz00_2610;
																				BgL_idz00_530 = BgL_idz00_2608;
																				goto BgL_tagzd21693zd2_532;
																			}
																		else
																			{	/* Object/slots.scm 318 */
																				goto BgL_tagzd21695zd2_535;
																			}
																	}
																else
																	{	/* Object/slots.scm 318 */
																		goto BgL_tagzd21695zd2_535;
																	}
															}
														else
															{	/* Object/slots.scm 318 */
																goto BgL_tagzd21695zd2_535;
															}
													}
												else
													{	/* Object/slots.scm 318 */
														if (
															(BgL_carzd21829zd2_607 ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Object/slots.scm 318 */
																if (PAIRP(BgL_cdrzd21702zd2_538))
																	{	/* Object/slots.scm 318 */
																		if (NULLP(CDR(BgL_cdrzd21702zd2_538)))
																			{	/* Object/slots.scm 318 */
																				BgL_idz00_533 =
																					CAR(BgL_cdrzd21702zd2_538);
																				{	/* Object/slots.scm 333 */
																					obj_t BgL_arg2716z00_641;

																					obj_t BgL_arg2717z00_642;

																					BgL_arg2716z00_641 =
																						CDR(BgL_slotsz00_516);
																					{	/* Object/slots.scm 334 */
																						BgL_slotz00_bglt BgL_arg2718z00_643;

																						BgL_slotzd2idzd2_892 =
																							BgL_idz00_533;
																						{	/* Object/slots.scm 292 */
																							obj_t BgL_arg2898z00_894;

																							obj_t BgL_arg2899z00_895;

																							obj_t BgL_arg2900z00_896;

																							obj_t BgL_arg2901z00_897;

																							BgL_arg2898z00_894 =
																								CAR(BgL_slotzd2idzd2_892);
																							BgL_arg2899z00_895 =
																								BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00
																								(CAR(BgL_slotzd2idzd2_892));
																							BgL_arg2900z00_896 =
																								BGl_findzd2slotzd2typez00zzobject_slotsz00
																								(BgL_slotzd2idzd2_892,
																								BgL_srcz00_10);
																							BgL_arg2901z00_897 =
																								BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
																							{	/* Object/slots.scm 291 */
																								BgL_slotz00_bglt
																									BgL_res3066z00_1681;
																								{	/* Object/slots.scm 291 */
																									obj_t BgL_id2441z00_1637;

																									obj_t
																										BgL_classzd2owner2444zd2_1640;
																									obj_t
																										BgL_virtualzd2num2448zd2_1644;
																									BgL_id2441z00_1637 =
																										BgL_arg2898z00_894;
																									BgL_classzd2owner2444zd2_1640
																										= (obj_t) (BgL_classz00_6);
																									BgL_virtualzd2num2448zd2_1644
																										= BINT(((long) -1));
																									{	/* Object/slots.scm 291 */
																										BgL_slotz00_bglt
																											BgL_new2453z00_1649;
																										{	/* Object/slots.scm 291 */
																											BgL_slotz00_bglt
																												BgL_res3064z00_1654;
																											{	/* Object/slots.scm 291 */
																												BgL_slotz00_bglt
																													BgL_new2481z00_1650;
																												BgL_new2481z00_1650 =
																													((BgL_slotz00_bglt)
																													BREF(GC_MALLOC(sizeof
																															(struct
																																BgL_slotz00_bgl))));
																												BGL_OBJECT_CLASS_NUM_SET
																													((BgL_objectz00_bglt)
																													(BgL_new2481z00_1650),
																													BGl_classzd2numzd2zz__objectz00
																													(BGl_slotz00zzobject_slotsz00));
																												{	/* Object/slots.scm 291 */
																													BgL_objectz00_bglt
																														BgL_auxz00_2630;
																													BgL_auxz00_2630 =
																														(BgL_objectz00_bglt)
																														(BgL_new2481z00_1650);
																													BGL_OBJECT_WIDENING_SET
																														(BgL_auxz00_2630,
																														BFALSE);
																												}
																												BgL_res3064z00_1654 =
																													BgL_new2481z00_1650;
																											}
																											BgL_new2453z00_1649 =
																												BgL_res3064z00_1654;
																										}
																										{	/* Object/slots.scm 291 */
																											BgL_slotz00_bglt
																												BgL_res3065z00_1680;
																											{	/* Object/slots.scm 291 */
																												BgL_slotz00_bglt
																													BgL_new2467z00_1655;
																												BgL_new2467z00_1655 =
																													BgL_new2453z00_1649;
																												{	/* Object/slots.scm 291 */
																													obj_t
																														BgL_id2455z00_1668;
																													obj_t
																														BgL_name2456z00_1669;
																													obj_t
																														BgL_src2457z00_1670;
																													obj_t
																														BgL_classzd2owner2458zd2_1671;
																													obj_t
																														BgL_type2459z00_1672;
																													bool_t
																														BgL_readzd2onlyzf32460z21_1673;
																													obj_t
																														BgL_defaultzd2value2461zd2_1674;
																													obj_t
																														BgL_virtualzd2num2462zd2_1675;
																													obj_t
																														BgL_getter2463z00_1676;
																													obj_t
																														BgL_setter2464z00_1677;
																													obj_t
																														BgL_indexed2465z00_1678;
																													obj_t
																														BgL_userzd2info2466zd2_1679;
																													BgL_id2455z00_1668 =
																														BgL_id2441z00_1637;
																													BgL_name2456z00_1669 =
																														BgL_arg2899z00_895;
																													BgL_src2457z00_1670 =
																														BgL_slotzd2idzd2_892;
																													BgL_classzd2owner2458zd2_1671
																														=
																														BgL_classzd2owner2444zd2_1640;
																													BgL_type2459z00_1672 =
																														BgL_arg2900z00_896;
																													BgL_readzd2onlyzf32460z21_1673
																														= ((bool_t) 0);
																													BgL_defaultzd2value2461zd2_1674
																														=
																														BgL_arg2901z00_897;
																													BgL_virtualzd2num2462zd2_1675
																														=
																														BgL_virtualzd2num2448zd2_1644;
																													BgL_getter2463z00_1676
																														= BFALSE;
																													BgL_setter2464z00_1677
																														= BFALSE;
																													BgL_indexed2465z00_1678
																														= BFALSE;
																													BgL_userzd2info2466zd2_1679
																														= BUNSPEC;
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_idz00) =
																														((obj_t)
																															BgL_id2455z00_1668),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_namez00) =
																														((obj_t)
																															BgL_name2456z00_1669),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_srcz00) =
																														((obj_t)
																															BgL_src2457z00_1670),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_classzd2ownerzd2)
																														=
																														((obj_t)
																															BgL_classzd2owner2458zd2_1671),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_typez00) =
																														((obj_t)
																															BgL_type2459z00_1672),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_readzd2onlyzf3z21)
																														=
																														((bool_t)
																															BgL_readzd2onlyzf32460z21_1673),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_defaultzd2valuezd2)
																														=
																														((obj_t)
																															BgL_defaultzd2value2461zd2_1674),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_virtualzd2numzd2)
																														=
																														((obj_t)
																															BgL_virtualzd2num2462zd2_1675),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_getterz00) =
																														((obj_t)
																															BgL_getter2463z00_1676),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_setterz00) =
																														((obj_t)
																															BgL_setter2464z00_1677),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_indexedz00) =
																														((obj_t)
																															BgL_indexed2465z00_1678),
																														BUNSPEC);
																													((((BgL_slotz00_bglt)
																																CREF
																																(BgL_new2467z00_1655))->
																															BgL_userzd2infozd2)
																														=
																														((obj_t)
																															BgL_userzd2info2466zd2_1679),
																														BUNSPEC);
																													BgL_res3065z00_1680 =
																														BgL_new2467z00_1655;
																											}} BgL_res3065z00_1680;
																										}
																										BgL_res3066z00_1681 =
																											BgL_new2453z00_1649;
																								}}
																								BgL_arg2718z00_643 =
																									BgL_res3066z00_1681;
																						}}
																						BgL_arg2717z00_642 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg2718z00_643),
																							BgL_nslotsz00_517);
																					}
																					{
																						obj_t BgL_nslotsz00_2648;

																						obj_t BgL_slotsz00_2647;

																						BgL_slotsz00_2647 =
																							BgL_arg2716z00_641;
																						BgL_nslotsz00_2648 =
																							BgL_arg2717z00_642;
																						BgL_nslotsz00_517 =
																							BgL_nslotsz00_2648;
																						BgL_slotsz00_516 =
																							BgL_slotsz00_2647;
																						goto
																							BgL_zc3anonymousza32592ze3z83_519;
																					}
																				}
																			}
																		else
																			{	/* Object/slots.scm 318 */
																				goto BgL_tagzd21695zd2_535;
																			}
																	}
																else
																	{	/* Object/slots.scm 318 */
																		goto BgL_tagzd21695zd2_535;
																	}
															}
														else
															{	/* Object/slots.scm 318 */
																goto BgL_tagzd21695zd2_535;
															}
													}
											}
									}
								else
									{	/* Object/slots.scm 318 */
										goto BgL_tagzd21695zd2_535;
									}
							}
						}
				}
			}
		}
	}



/* find-default-attr */
	obj_t BGl_findzd2defaultzd2attrz00zzobject_slotsz00(obj_t BgL_attrz00_649)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 121 */
		BGl_findzd2defaultzd2attrz00zzobject_slotsz00:
			if (PAIRP(BgL_attrz00_649))
				{

					{	/* Object/slots.scm 117 */
						obj_t BgL_ezd21649zd2_655;

						BgL_ezd21649zd2_655 = CAR(BgL_attrz00_649);
						if (PAIRP(BgL_ezd21649zd2_655))
							{	/* Object/slots.scm 117 */
								obj_t BgL_cdrzd21653zd2_657;

								BgL_cdrzd21653zd2_657 = CDR(BgL_ezd21649zd2_655);
								if ((CAR(BgL_ezd21649zd2_655) == CNST_TABLE_REF(((long) 7))))
									{	/* Object/slots.scm 117 */
										if (PAIRP(BgL_cdrzd21653zd2_657))
											{	/* Object/slots.scm 117 */
												if (NULLP(CDR(BgL_cdrzd21653zd2_657)))
													{	/* Object/slots.scm 117 */
														return CAR(BgL_cdrzd21653zd2_657);
													}
												else
													{	/* Object/slots.scm 117 */
													BgL_tagzd21648zd2_654:
														{
															obj_t BgL_attrz00_2667;

															BgL_attrz00_2667 = CDR(BgL_attrz00_649);
															BgL_attrz00_649 = BgL_attrz00_2667;
															goto
																BGl_findzd2defaultzd2attrz00zzobject_slotsz00;
														}
													}
											}
										else
											{	/* Object/slots.scm 117 */
												goto BgL_tagzd21648zd2_654;
											}
									}
								else
									{	/* Object/slots.scm 117 */
										goto BgL_tagzd21648zd2_654;
									}
							}
						else
							{	/* Object/slots.scm 117 */
								goto BgL_tagzd21648zd2_654;
							}
					}
				}
			else
				{	/* Object/slots.scm 115 */
					return
						BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
				}
		}
	}



/* find-info-attr */
	obj_t BGl_findzd2infozd2attrz00zzobject_slotsz00(obj_t BgL_attrz00_666)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 131 */
		BGl_findzd2infozd2attrz00zzobject_slotsz00:
			if (PAIRP(BgL_attrz00_666))
				{

					{	/* Object/slots.scm 127 */
						obj_t BgL_ezd21660zd2_671;

						BgL_ezd21660zd2_671 = CAR(BgL_attrz00_666);
						if (PAIRP(BgL_ezd21660zd2_671))
							{	/* Object/slots.scm 127 */
								obj_t BgL_cdrzd21662zd2_673;

								BgL_cdrzd21662zd2_673 = CDR(BgL_ezd21660zd2_671);
								if ((CAR(BgL_ezd21660zd2_671) == CNST_TABLE_REF(((long) 8))))
									{	/* Object/slots.scm 127 */
										if (PAIRP(BgL_cdrzd21662zd2_673))
											{	/* Object/slots.scm 127 */
												if (NULLP(CDR(BgL_cdrzd21662zd2_673)))
													{	/* Object/slots.scm 127 */
														return BgL_ezd21660zd2_671;
													}
												else
													{	/* Object/slots.scm 127 */
													BgL_tagzd21659zd2_670:
														{
															obj_t BgL_attrz00_2684;

															BgL_attrz00_2684 = CDR(BgL_attrz00_666);
															BgL_attrz00_666 = BgL_attrz00_2684;
															goto BGl_findzd2infozd2attrz00zzobject_slotsz00;
														}
													}
											}
										else
											{	/* Object/slots.scm 127 */
												goto BgL_tagzd21659zd2_670;
											}
									}
								else
									{	/* Object/slots.scm 127 */
										goto BgL_tagzd21659zd2_670;
									}
							}
						else
							{	/* Object/slots.scm 127 */
								goto BgL_tagzd21659zd2_670;
							}
					}
				}
			else
				{	/* Object/slots.scm 125 */
					return BFALSE;
				}
		}
	}



/* find-virtual-attr */
	obj_t BGl_findzd2virtualzd2attrz00zzobject_slotsz00(obj_t BgL_attrz00_681)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 146 */
			{
				obj_t BgL_attrz00_684;

				obj_t BgL_getz00_685;

				obj_t BgL_setz00_686;

				BgL_attrz00_684 = BgL_attrz00_681;
				BgL_getz00_685 = BFALSE;
				BgL_setz00_686 = BFALSE;
			BgL_zc3anonymousza32745ze3z83_687:
				if (PAIRP(BgL_attrz00_684))
					{

						{	/* Object/slots.scm 140 */
							obj_t BgL_ezd21668zd2_694;

							BgL_ezd21668zd2_694 = CAR(BgL_attrz00_684);
							if (PAIRP(BgL_ezd21668zd2_694))
								{	/* Object/slots.scm 140 */
									obj_t BgL_cdrzd21673zd2_696;

									BgL_cdrzd21673zd2_696 = CDR(BgL_ezd21668zd2_694);
									if ((CAR(BgL_ezd21668zd2_694) == CNST_TABLE_REF(((long) 9))))
										{	/* Object/slots.scm 140 */
											if (PAIRP(BgL_cdrzd21673zd2_696))
												{	/* Object/slots.scm 140 */
													if (NULLP(CDR(BgL_cdrzd21673zd2_696)))
														{
															obj_t BgL_getz00_2703;

															obj_t BgL_attrz00_2701;

															BgL_attrz00_2701 = CDR(BgL_attrz00_684);
															BgL_getz00_2703 = CAR(BgL_cdrzd21673zd2_696);
															BgL_getz00_685 = BgL_getz00_2703;
															BgL_attrz00_684 = BgL_attrz00_2701;
															goto BgL_zc3anonymousza32745ze3z83_687;
														}
													else
														{	/* Object/slots.scm 140 */
														BgL_tagzd21667zd2_693:
															{
																obj_t BgL_attrz00_2705;

																BgL_attrz00_2705 = CDR(BgL_attrz00_684);
																BgL_attrz00_684 = BgL_attrz00_2705;
																goto BgL_zc3anonymousza32745ze3z83_687;
															}
														}
												}
											else
												{	/* Object/slots.scm 140 */
													goto BgL_tagzd21667zd2_693;
												}
										}
									else
										{	/* Object/slots.scm 140 */
											if (
												(CAR(BgL_ezd21668zd2_694) ==
													CNST_TABLE_REF(((long) 10))))
												{	/* Object/slots.scm 140 */
													if (PAIRP(BgL_cdrzd21673zd2_696))
														{	/* Object/slots.scm 140 */
															if (NULLP(CDR(BgL_cdrzd21673zd2_696)))
																{
																	obj_t BgL_setz00_2718;

																	obj_t BgL_attrz00_2716;

																	BgL_attrz00_2716 = CDR(BgL_attrz00_684);
																	BgL_setz00_2718 = CAR(BgL_cdrzd21673zd2_696);
																	BgL_setz00_686 = BgL_setz00_2718;
																	BgL_attrz00_684 = BgL_attrz00_2716;
																	goto BgL_zc3anonymousza32745ze3z83_687;
																}
															else
																{	/* Object/slots.scm 140 */
																	goto BgL_tagzd21667zd2_693;
																}
														}
													else
														{	/* Object/slots.scm 140 */
															goto BgL_tagzd21667zd2_693;
														}
												}
											else
												{	/* Object/slots.scm 140 */
													goto BgL_tagzd21667zd2_693;
												}
										}
								}
							else
								{	/* Object/slots.scm 140 */
									goto BgL_tagzd21667zd2_693;
								}
						}
					}
				else
					{	/* Object/slots.scm 138 */
						{	/* Object/slots.scm 139 */
							int BgL_auxz00_2720;

							BgL_auxz00_2720 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_2720);
						}
						{	/* Object/slots.scm 139 */
							int BgL_auxz00_2723;

							BgL_auxz00_2723 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_2723, BgL_setz00_686);
						}
						return BgL_getz00_685;
					}
			}
		}
	}



/* _make-class-slots */
	obj_t BGl__makezd2classzd2slotsz00zzobject_slotsz00(obj_t BgL_envz00_1986,
		obj_t BgL_classz00_1987, obj_t BgL_slotsz00_1988, obj_t BgL_superz00_1989,
		obj_t BgL_vnumz00_1990, obj_t BgL_srcz00_1991)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 111 */
			return
				BGl_makezd2classzd2slotsz00zzobject_slotsz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1987), BgL_slotsz00_1988,
				BgL_superz00_1989, CINT(BgL_vnumz00_1990), BgL_srcz00_1991);
		}
	}



/* make-java-class-slots */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(BgL_jclassz00_bglt
		BgL_classz00_11, obj_t BgL_slotsz00_12, obj_t BgL_superz00_13,
		obj_t BgL_srcz00_14)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 345 */
			{	/* Object/slots.scm 347 */
				obj_t BgL_locz00_910;

				BgL_locz00_910 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_14);
				{
					obj_t BgL_idz00_945;

					obj_t BgL_jnamez00_946;

					obj_t BgL_readozf3zf3_947;

					obj_t BgL_srcz00_948;

					obj_t BgL_identz00_934;

					obj_t BgL_jnamez00_935;

					obj_t BgL_readozf3zf3_936;

					obj_t BgL_sz00_937;

					{	/* Object/slots.scm 374 */
						obj_t BgL_g2547z00_913;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_13,
								BGl_typez00zztype_typez00))
							{	/* Object/slots.scm 376 */
								if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_13,
										BGl_jclassz00zzobject_classz00))
									{	/* Object/slots.scm 381 */
										obj_t BgL_auxz00_2734;

										{	/* Object/slots.scm 381 */
											BgL_jclassz00_bglt BgL_obj1813z00_1684;

											BgL_obj1813z00_1684 =
												(BgL_jclassz00_bglt) (BgL_superz00_13);
											{
												obj_t BgL_auxz00_2736;

												{	/* Object/slots.scm 381 */
													BgL_objectz00_bglt BgL_auxz00_2737;

													BgL_auxz00_2737 =
														(BgL_objectz00_bglt) (BgL_obj1813z00_1684);
													BgL_auxz00_2736 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2737);
												}
												BgL_auxz00_2734 =
													(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2736))->
													BgL_slotsz00);
											}
										}
										BgL_g2547z00_913 = bgl_reverse(BgL_auxz00_2734);
									}
								else
									{	/* Object/slots.scm 378 */
										BgL_g2547z00_913 = BNIL;
									}
							}
						else
							{	/* Object/slots.scm 376 */
								BgL_g2547z00_913 = BNIL;
							}
						{
							obj_t BgL_slotsz00_915;

							obj_t BgL_resz00_916;

							BgL_slotsz00_915 = BgL_slotsz00_12;
							BgL_resz00_916 = BgL_g2547z00_913;
						BgL_zc3anonymousza32904ze3z83_917:
							if (NULLP(BgL_slotsz00_915))
								{	/* Object/slots.scm 382 */
									return BgL_resz00_916;
								}
							else
								{	/* Object/slots.scm 388 */
									obj_t BgL_sz00_919;

									BgL_sz00_919 = CAR(BgL_slotsz00_915);
									{	/* Object/slots.scm 388 */
										obj_t BgL_srcz00_920;

										BgL_srcz00_920 = CAR(BgL_sz00_919);
										{	/* Object/slots.scm 389 */
											obj_t BgL_idz00_921;

											{	/* Object/slots.scm 390 */
												obj_t BgL_pairz00_1688;

												BgL_pairz00_1688 = BgL_sz00_919;
												BgL_idz00_921 = CAR(CDR(BgL_pairz00_1688));
											}
											{	/* Object/slots.scm 390 */
												obj_t BgL_jnamez00_922;

												{	/* Object/slots.scm 391 */
													obj_t BgL_pairz00_1692;

													BgL_pairz00_1692 = BgL_sz00_919;
													BgL_jnamez00_922 = CAR(CDR(CDR(BgL_pairz00_1692)));
												}
												{	/* Object/slots.scm 391 */
													obj_t BgL_modz00_923;

													{	/* Object/slots.scm 392 */
														obj_t BgL_pairz00_1698;

														BgL_pairz00_1698 = BgL_sz00_919;
														BgL_modz00_923 =
															CAR(CDR(CDR(CDR(BgL_pairz00_1698))));
													}
													{	/* Object/slots.scm 392 */
														obj_t BgL_readozf3zf3_924;

														BgL_readozf3zf3_924 =
															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 13)), BgL_modz00_923);
														{	/* Object/slots.scm 393 */

															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 14)),
																		BgL_modz00_923)))
																{	/* Object/slots.scm 394 */
																	BgL_idz00_945 = BgL_idz00_921;
																	BgL_jnamez00_946 = BgL_jnamez00_922;
																	BgL_readozf3zf3_947 = BgL_readozf3zf3_924;
																	BgL_srcz00_948 = BgL_srcz00_920;
																	{	/* Object/slots.scm 359 */
																		obj_t BgL_locz00_950;

																		BgL_locz00_950 =
																			BGl_findzd2locationzf2locz20zztools_locationz00
																			(BgL_srcz00_948, BgL_locz00_910);
																		{	/* Object/slots.scm 359 */
																			obj_t BgL_slotzd2idzd2_951;

																			BgL_slotzd2idzd2_951 =
																				BGl_parsezd2idzd2zzast_identz00
																				(BgL_idz00_945, BgL_locz00_950);
																			{	/* Object/slots.scm 360 */
																				obj_t BgL_lzd2idzd2_952;

																				{	/* Object/slots.scm 361 */
																					bool_t BgL_testz00_2763;

																					{	/* Object/slots.scm 361 */
																						obj_t BgL_auxz00_2764;

																						{
																							BgL_typez00_bglt BgL_auxz00_2765;

																							BgL_auxz00_2765 =
																								(BgL_typez00_bglt)
																								(BgL_classz00_11);
																							BgL_auxz00_2764 =
																								(((BgL_typez00_bglt)
																									CREF(BgL_auxz00_2765))->
																								BgL_idz00);
																						}
																						BgL_testz00_2763 =
																							(BgL_auxz00_2764 ==
																							CNST_TABLE_REF(((long) 11)));
																					}
																					if (BgL_testz00_2763)
																						{	/* Object/slots.scm 361 */
																							BgL_lzd2idzd2_952 =
																								CAR(BgL_slotzd2idzd2_951);
																						}
																					else
																						{	/* Object/slots.scm 363 */
																							obj_t BgL_arg2926z00_962;

																							obj_t BgL_arg2927z00_963;

																							obj_t BgL_arg2928z00_964;

																							{
																								BgL_typez00_bglt
																									BgL_auxz00_2771;
																								BgL_auxz00_2771 =
																									(BgL_typez00_bglt)
																									(BgL_classz00_11);
																								BgL_arg2926z00_962 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_auxz00_2771))->
																									BgL_idz00);
																							}
																							BgL_arg2927z00_963 =
																								CNST_TABLE_REF(((long) 12));
																							BgL_arg2928z00_964 =
																								CAR(BgL_slotzd2idzd2_951);
																							{	/* Object/slots.scm 363 */
																								obj_t BgL_list2929z00_965;

																								{	/* Object/slots.scm 363 */
																									obj_t BgL_arg2930z00_966;

																									{	/* Object/slots.scm 363 */
																										obj_t BgL_arg2931z00_967;

																										BgL_arg2931z00_967 =
																											MAKE_PAIR
																											(BgL_arg2928z00_964,
																											BNIL);
																										BgL_arg2930z00_966 =
																											MAKE_PAIR
																											(BgL_arg2927z00_963,
																											BgL_arg2931z00_967);
																									}
																									BgL_list2929z00_965 =
																										MAKE_PAIR
																										(BgL_arg2926z00_962,
																										BgL_arg2930z00_966);
																								}
																								BgL_lzd2idzd2_952 =
																									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																									(BgL_list2929z00_965);
																				}}}
																				{	/* Object/slots.scm 361 */
																					obj_t BgL_tzd2idzd2_953;

																					{	/* Object/slots.scm 364 */
																						bool_t BgL_testz00_2780;

																						{	/* Object/slots.scm 364 */
																							obj_t BgL_arg2924z00_960;

																							BgL_arg2924z00_960 =
																								CDR(BgL_slotzd2idzd2_951);
																							BgL_testz00_2780 =
																								(BgL_arg2924z00_960 ==
																								BGl_za2_za2z00zztype_cachez00);
																						}
																						if (BgL_testz00_2780)
																							{	/* Object/slots.scm 364 */
																								BgL_tzd2idzd2_953 =
																									BGl_za2objza2z00zztype_cachez00;
																							}
																						else
																							{	/* Object/slots.scm 364 */
																								BgL_tzd2idzd2_953 =
																									CDR(BgL_slotzd2idzd2_951);
																							}
																					}
																					{	/* Object/slots.scm 367 */

																						BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00
																							((BgL_typez00_bglt)
																							(BgL_tzd2idzd2_953),
																							BgL_srcz00_948);
																						{	/* Object/slots.scm 369 */
																							BgL_globalz00_bglt BgL_gz00_955;

																							{	/* Object/slots.scm 370 */
																								obj_t BgL_arg2922z00_958;

																								{
																									BgL_typez00_bglt
																										BgL_auxz00_2786;
																									BgL_auxz00_2786 =
																										(BgL_typez00_bglt)
																										(BgL_tzd2idzd2_953);
																									BgL_arg2922z00_958 =
																										(((BgL_typez00_bglt)
																											CREF(BgL_auxz00_2786))->
																										BgL_idz00);
																								}
																								BgL_gz00_955 =
																									BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																									(BgL_lzd2idzd2_952,
																									BgL_jnamez00_946,
																									BgL_arg2922z00_958,
																									CBOOL(BgL_readozf3zf3_947),
																									BgL_srcz00_948, BFALSE);
																							}
																							{	/* Object/slots.scm 371 */
																								obj_t BgL_arg2920z00_956;

																								{
																									BgL_typez00_bglt
																										BgL_auxz00_2791;
																									BgL_auxz00_2791 =
																										(BgL_typez00_bglt)
																										(BgL_classz00_11);
																									BgL_arg2920z00_956 =
																										(((BgL_typez00_bglt)
																											CREF(BgL_auxz00_2791))->
																										BgL_idz00);
																								}
																								((((BgL_globalz00_bglt)
																											CREF(BgL_gz00_955))->
																										BgL_modulez00) =
																									((obj_t) BgL_arg2920z00_956),
																									BUNSPEC);
																							}
																							{	/* Object/slots.scm 372 */
																								obj_t BgL_arg2921z00_957;

																								{
																									BgL_typez00_bglt
																										BgL_auxz00_2795;
																									BgL_auxz00_2795 =
																										(BgL_typez00_bglt)
																										(BgL_classz00_11);
																									BgL_arg2921z00_957 =
																										(((BgL_typez00_bglt)
																											CREF(BgL_auxz00_2795))->
																										BgL_namez00);
																								}
																								((((BgL_globalz00_bglt)
																											CREF(BgL_gz00_955))->
																										BgL_jvmzd2typezd2namez00) =
																									((obj_t) BgL_arg2921z00_957),
																									BUNSPEC);
																							}
																							BgL_gz00_955;
																						}
																					}
																				}
																			}
																		}
																	}
																	{
																		obj_t BgL_slotsz00_2799;

																		BgL_slotsz00_2799 = CDR(BgL_slotsz00_915);
																		BgL_slotsz00_915 = BgL_slotsz00_2799;
																		goto BgL_zc3anonymousza32904ze3z83_917;
																	}
																}
															else
																{	/* Object/slots.scm 398 */
																	obj_t BgL_arg2908z00_927;

																	obj_t BgL_arg2909z00_928;

																	BgL_arg2908z00_927 = CDR(BgL_slotsz00_915);
																	{	/* Object/slots.scm 399 */
																		BgL_slotz00_bglt BgL_arg2910z00_929;

																		BgL_identz00_934 = BgL_idz00_921;
																		BgL_jnamez00_935 = BgL_jnamez00_922;
																		BgL_readozf3zf3_936 = BgL_readozf3zf3_924;
																		BgL_sz00_937 = BgL_srcz00_920;
																		{	/* Object/slots.scm 349 */
																			obj_t BgL_locz00_939;

																			BgL_locz00_939 =
																				BGl_findzd2locationzf2locz20zztools_locationz00
																				(BgL_sz00_937, BgL_locz00_910);
																			{	/* Object/slots.scm 349 */
																				obj_t BgL_slotzd2idzd2_940;

																				BgL_slotzd2idzd2_940 =
																					BGl_parsezd2idzd2zzast_identz00
																					(BgL_identz00_934, BgL_locz00_939);
																				{	/* Object/slots.scm 350 */

																					{	/* Object/slots.scm 352 */
																						obj_t BgL_arg2915z00_941;

																						obj_t BgL_arg2916z00_942;

																						obj_t BgL_arg2917z00_943;

																						BgL_arg2915z00_941 =
																							CAR(BgL_slotzd2idzd2_940);
																						BgL_arg2916z00_942 =
																							BGl_findzd2slotzd2typez00zzobject_slotsz00
																							(BgL_slotzd2idzd2_940,
																							BgL_srcz00_14);
																						BgL_arg2917z00_943 =
																							BGl_za2slotzd2nozd2defaultzd2valuezd2markza2z00zzobject_slotsz00;
																						{	/* Object/slots.scm 351 */
																							BgL_slotz00_bglt
																								BgL_res3069z00_1753;
																							{	/* Object/slots.scm 351 */
																								obj_t BgL_id2441z00_1709;

																								obj_t BgL_name2442z00_1710;

																								obj_t
																									BgL_classzd2owner2444zd2_1712;
																								bool_t
																									BgL_readzd2onlyzf32446z21_1714;
																								obj_t
																									BgL_virtualzd2num2448zd2_1716;
																								BgL_id2441z00_1709 =
																									BgL_arg2915z00_941;
																								BgL_name2442z00_1710 =
																									BgL_jnamez00_935;
																								BgL_classzd2owner2444zd2_1712 =
																									(obj_t) (BgL_classz00_11);
																								BgL_readzd2onlyzf32446z21_1714 =
																									CBOOL(BgL_readozf3zf3_936);
																								BgL_virtualzd2num2448zd2_1716 =
																									BINT(((long) -1));
																								{	/* Object/slots.scm 351 */
																									BgL_slotz00_bglt
																										BgL_new2453z00_1721;
																									{	/* Object/slots.scm 351 */
																										BgL_slotz00_bglt
																											BgL_res3067z00_1726;
																										{	/* Object/slots.scm 351 */
																											BgL_slotz00_bglt
																												BgL_new2481z00_1722;
																											BgL_new2481z00_1722 =
																												((BgL_slotz00_bglt)
																												BREF(GC_MALLOC(sizeof
																														(struct
																															BgL_slotz00_bgl))));
																											BGL_OBJECT_CLASS_NUM_SET(
																												(BgL_objectz00_bglt)
																												(BgL_new2481z00_1722),
																												BGl_classzd2numzd2zz__objectz00
																												(BGl_slotz00zzobject_slotsz00));
																											{	/* Object/slots.scm 351 */
																												BgL_objectz00_bglt
																													BgL_auxz00_2813;
																												BgL_auxz00_2813 =
																													(BgL_objectz00_bglt)
																													(BgL_new2481z00_1722);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_auxz00_2813,
																													BFALSE);
																											}
																											BgL_res3067z00_1726 =
																												BgL_new2481z00_1722;
																										}
																										BgL_new2453z00_1721 =
																											BgL_res3067z00_1726;
																									}
																									{	/* Object/slots.scm 351 */
																										BgL_slotz00_bglt
																											BgL_res3068z00_1752;
																										{	/* Object/slots.scm 351 */
																											BgL_slotz00_bglt
																												BgL_new2467z00_1727;
																											BgL_new2467z00_1727 =
																												BgL_new2453z00_1721;
																											{	/* Object/slots.scm 351 */
																												obj_t
																													BgL_id2455z00_1740;
																												obj_t
																													BgL_name2456z00_1741;
																												obj_t
																													BgL_src2457z00_1742;
																												obj_t
																													BgL_classzd2owner2458zd2_1743;
																												obj_t
																													BgL_type2459z00_1744;
																												bool_t
																													BgL_readzd2onlyzf32460z21_1745;
																												obj_t
																													BgL_defaultzd2value2461zd2_1746;
																												obj_t
																													BgL_virtualzd2num2462zd2_1747;
																												obj_t
																													BgL_getter2463z00_1748;
																												obj_t
																													BgL_setter2464z00_1749;
																												obj_t
																													BgL_indexed2465z00_1750;
																												obj_t
																													BgL_userzd2info2466zd2_1751;
																												BgL_id2455z00_1740 =
																													BgL_id2441z00_1709;
																												BgL_name2456z00_1741 =
																													BgL_name2442z00_1710;
																												BgL_src2457z00_1742 =
																													BgL_sz00_937;
																												BgL_classzd2owner2458zd2_1743
																													=
																													BgL_classzd2owner2444zd2_1712;
																												BgL_type2459z00_1744 =
																													BgL_arg2916z00_942;
																												BgL_readzd2onlyzf32460z21_1745
																													=
																													BgL_readzd2onlyzf32446z21_1714;
																												BgL_defaultzd2value2461zd2_1746
																													= BgL_arg2917z00_943;
																												BgL_virtualzd2num2462zd2_1747
																													=
																													BgL_virtualzd2num2448zd2_1716;
																												BgL_getter2463z00_1748 =
																													BFALSE;
																												BgL_setter2464z00_1749 =
																													BFALSE;
																												BgL_indexed2465z00_1750
																													= BFALSE;
																												BgL_userzd2info2466zd2_1751
																													= BUNSPEC;
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_idz00) =
																													((obj_t)
																														BgL_id2455z00_1740),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_namez00) =
																													((obj_t)
																														BgL_name2456z00_1741),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_srcz00) =
																													((obj_t)
																														BgL_src2457z00_1742),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_classzd2ownerzd2)
																													=
																													((obj_t)
																														BgL_classzd2owner2458zd2_1743),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_typez00) =
																													((obj_t)
																														BgL_type2459z00_1744),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_readzd2onlyzf3z21)
																													=
																													((bool_t)
																														BgL_readzd2onlyzf32460z21_1745),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_defaultzd2valuezd2)
																													=
																													((obj_t)
																														BgL_defaultzd2value2461zd2_1746),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_virtualzd2numzd2)
																													=
																													((obj_t)
																														BgL_virtualzd2num2462zd2_1747),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_getterz00) =
																													((obj_t)
																														BgL_getter2463z00_1748),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_setterz00) =
																													((obj_t)
																														BgL_setter2464z00_1749),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_indexedz00) =
																													((obj_t)
																														BgL_indexed2465z00_1750),
																													BUNSPEC);
																												((((BgL_slotz00_bglt)
																															CREF
																															(BgL_new2467z00_1727))->
																														BgL_userzd2infozd2)
																													=
																													((obj_t)
																														BgL_userzd2info2466zd2_1751),
																													BUNSPEC);
																												BgL_res3068z00_1752 =
																													BgL_new2467z00_1727;
																										}} BgL_res3068z00_1752;
																									}
																									BgL_res3069z00_1753 =
																										BgL_new2453z00_1721;
																							}}
																							BgL_arg2910z00_929 =
																								BgL_res3069z00_1753;
																		}}}}}
																		BgL_arg2909z00_928 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg2910z00_929),
																			BgL_resz00_916);
																	}
																	{
																		obj_t BgL_resz00_2831;

																		obj_t BgL_slotsz00_2830;

																		BgL_slotsz00_2830 = BgL_arg2908z00_927;
																		BgL_resz00_2831 = BgL_arg2909z00_928;
																		BgL_resz00_916 = BgL_resz00_2831;
																		BgL_slotsz00_915 = BgL_slotsz00_2830;
																		goto BgL_zc3anonymousza32904ze3z83_917;
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
			}
		}
	}



/* _make-java-class-slots */
	obj_t BGl__makezd2javazd2classzd2slotszd2zzobject_slotsz00(obj_t
		BgL_envz00_1992, obj_t BgL_classz00_1993, obj_t BgL_slotsz00_1994,
		obj_t BgL_superz00_1995, obj_t BgL_srcz00_1996)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 345 */
			return
				BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(
				(BgL_jclassz00_bglt) (BgL_classz00_1993), BgL_slotsz00_1994,
				BgL_superz00_1995, BgL_srcz00_1996);
		}
	}



/* find-slot-type */
	obj_t BGl_findzd2slotzd2typez00zzobject_slotsz00(obj_t BgL_slotzd2idzd2_15,
		obj_t BgL_srcz00_16)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 405 */
			{	/* Object/slots.scm 406 */
				obj_t BgL_tz00_972;

				{	/* Object/slots.scm 406 */
					bool_t BgL_testz00_2834;

					{	/* Object/slots.scm 406 */
						obj_t BgL_arg2935z00_974;

						BgL_arg2935z00_974 = CDR(BgL_slotzd2idzd2_15);
						BgL_testz00_2834 =
							(BgL_arg2935z00_974 == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_testz00_2834)
						{	/* Object/slots.scm 406 */
							BgL_tz00_972 = BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Object/slots.scm 406 */
							BgL_tz00_972 = CDR(BgL_slotzd2idzd2_15);
						}
				}
				BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00(
					(BgL_typez00_bglt) (BgL_tz00_972), BgL_srcz00_16);
				return BgL_tz00_972;
			}
		}
	}



/* scheme-symbol->c-string */
	obj_t BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00(obj_t
		BgL_symbolz00_17)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 413 */
			if (CBOOL(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
				{	/* Object/slots.scm 414 */
					return BGl_idzd2ze3namez31zzast_identz00(BgL_symbolz00_17);
				}
			else
				{	/* Object/slots.scm 414 */
					return
						BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
						(BGl_idzd2ze3namez31zzast_identz00(BgL_symbolz00_17));
				}
		}
	}



/* get-local-virtual-slots-number */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_tclassz00_bglt BgL_classz00_18, obj_t BgL_slotsz00_19)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 430 */
			{
				obj_t BgL_slotsz00_977;

				obj_t BgL_numz00_978;

				{	/* Object/slots.scm 431 */
					long BgL_auxz00_2845;

					BgL_slotsz00_977 = BgL_slotsz00_19;
					BgL_numz00_978 = BINT(((long) -1));
				BgL_zc3anonymousza32937ze3z83_979:
					if (NULLP(BgL_slotsz00_977))
						{	/* Object/slots.scm 434 */
							BgL_auxz00_2845 = ((long) CINT(BgL_numz00_978) + ((long) 1));
						}
					else
						{	/* Object/slots.scm 436 */
							bool_t BgL_testz00_2850;

							{	/* Object/slots.scm 436 */
								BgL_slotz00_bglt BgL_slotz00_1773;

								{	/* Object/slots.scm 436 */
									obj_t BgL_pairz00_1772;

									BgL_pairz00_1772 = BgL_slotsz00_977;
									BgL_slotz00_1773 = (BgL_slotz00_bglt) (CAR(BgL_pairz00_1772));
								}
								BgL_testz00_2850 =
									(
									(long) CINT(
										(((BgL_slotz00_bglt) CREF(BgL_slotz00_1773))->
											BgL_virtualzd2numzd2)) >= ((long) 0));
							}
							if (BgL_testz00_2850)
								{	/* Object/slots.scm 437 */
									obj_t BgL_lnumz00_982;

									{	/* Object/slots.scm 437 */
										BgL_slotz00_bglt BgL_obj2430z00_1781;

										{	/* Object/slots.scm 437 */
											obj_t BgL_pairz00_1780;

											BgL_pairz00_1780 = BgL_slotsz00_977;
											BgL_obj2430z00_1781 =
												(BgL_slotz00_bglt) (CAR(BgL_pairz00_1780));
										}
										BgL_lnumz00_982 =
											(((BgL_slotz00_bglt) CREF(BgL_obj2430z00_1781))->
											BgL_virtualzd2numzd2);
									}
									{
										obj_t BgL_numz00_2861;

										obj_t BgL_slotsz00_2859;

										BgL_slotsz00_2859 = CDR(BgL_slotsz00_977);
										if (
											((long) CINT(BgL_lnumz00_982) >
												(long) CINT(BgL_numz00_978)))
											{	/* Object/slots.scm 439 */
												BgL_numz00_2861 = BgL_lnumz00_982;
											}
										else
											{	/* Object/slots.scm 439 */
												BgL_numz00_2861 = BgL_numz00_978;
											}
										BgL_numz00_978 = BgL_numz00_2861;
										BgL_slotsz00_977 = BgL_slotsz00_2859;
										goto BgL_zc3anonymousza32937ze3z83_979;
									}
								}
							else
								{
									obj_t BgL_slotsz00_2866;

									BgL_slotsz00_2866 = CDR(BgL_slotsz00_977);
									BgL_slotsz00_977 = BgL_slotsz00_2866;
									goto BgL_zc3anonymousza32937ze3z83_979;
								}
						}
					return BINT(BgL_auxz00_2845);
				}
			}
		}
	}



/* _get-local-virtual-slots-number */
	obj_t BGl__getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00(obj_t
		BgL_envz00_1997, obj_t BgL_classz00_1998, obj_t BgL_slotsz00_1999)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 430 */
			return
				BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1998), BgL_slotsz00_1999);
		}
	}



/* make-class-make-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t BgL_slotsz00_20)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 448 */
			{
				obj_t BgL_slotsz00_992;

				obj_t BgL_formalsz00_993;

				BgL_slotsz00_992 = BgL_slotsz00_20;
				BgL_formalsz00_993 = BNIL;
			BgL_zc3anonymousza32947ze3z83_994:
				if (NULLP(BgL_slotsz00_992))
					{	/* Object/slots.scm 452 */
						return bgl_reverse_bang(BgL_formalsz00_993);
					}
				else
					{	/* Object/slots.scm 454 */
						bool_t BgL_testz00_2875;

						{	/* Object/slots.scm 454 */
							BgL_slotz00_bglt BgL_slotz00_1788;

							{	/* Object/slots.scm 454 */
								obj_t BgL_pairz00_1787;

								BgL_pairz00_1787 = BgL_slotsz00_992;
								BgL_slotz00_1788 = (BgL_slotz00_bglt) (CAR(BgL_pairz00_1787));
							}
							BgL_testz00_2875 =
								(
								(long) CINT(
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_1788))->
										BgL_virtualzd2numzd2)) >= ((long) 0));
						}
						if (BgL_testz00_2875)
							{
								obj_t BgL_slotsz00_2881;

								BgL_slotsz00_2881 = CDR(BgL_slotsz00_992);
								BgL_slotsz00_992 = BgL_slotsz00_2881;
								goto BgL_zc3anonymousza32947ze3z83_994;
							}
						else
							{	/* Object/slots.scm 457 */
								obj_t BgL_arg2951z00_998;

								obj_t BgL_arg2952z00_999;

								BgL_arg2951z00_998 = CDR(BgL_slotsz00_992);
								{	/* Object/slots.scm 458 */
									obj_t BgL_arg2953z00_1000;

									{	/* Object/slots.scm 458 */
										obj_t BgL_arg2954z00_1001;

										{	/* Object/slots.scm 458 */
											obj_t BgL_arg2955z00_1002;

											{	/* Object/slots.scm 458 */
												BgL_slotz00_bglt BgL_obj2423z00_1798;

												{	/* Object/slots.scm 458 */
													obj_t BgL_pairz00_1797;

													BgL_pairz00_1797 = BgL_slotsz00_992;
													BgL_obj2423z00_1798 =
														(BgL_slotz00_bglt) (CAR(BgL_pairz00_1797));
												}
												BgL_arg2955z00_1002 =
													(((BgL_slotz00_bglt) CREF(BgL_obj2423z00_1798))->
													BgL_idz00);
											}
											BgL_arg2954z00_1001 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg2955z00_1002);
										}
										BgL_arg2953z00_1000 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BgL_arg2954z00_1001);
									}
									BgL_arg2952z00_999 =
										MAKE_PAIR(BgL_arg2953z00_1000, BgL_formalsz00_993);
								}
								{
									obj_t BgL_formalsz00_2891;

									obj_t BgL_slotsz00_2890;

									BgL_slotsz00_2890 = BgL_arg2951z00_998;
									BgL_formalsz00_2891 = BgL_arg2952z00_999;
									BgL_formalsz00_993 = BgL_formalsz00_2891;
									BgL_slotsz00_992 = BgL_slotsz00_2890;
									goto BgL_zc3anonymousza32947ze3z83_994;
								}
							}
					}
			}
		}
	}



/* _make-class-make-formals */
	obj_t BGl__makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t
		BgL_envz00_2000, obj_t BgL_slotsz00_2001)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 448 */
			return
				BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
				(BgL_slotsz00_2001);
		}
	}



/* make-class-make-typed-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t
		BgL_idsz00_21, obj_t BgL_slotsz00_22)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 464 */
			{
				obj_t BgL_slotsz00_1008;

				obj_t BgL_idsz00_1009;

				obj_t BgL_formalsz00_1010;

				BgL_slotsz00_1008 = BgL_slotsz00_22;
				BgL_idsz00_1009 = BgL_idsz00_21;
				BgL_formalsz00_1010 = BNIL;
			BgL_zc3anonymousza32959ze3z83_1011:
				if (NULLP(BgL_slotsz00_1008))
					{	/* Object/slots.scm 469 */
						return bgl_reverse_bang(BgL_formalsz00_1010);
					}
				else
					{	/* Object/slots.scm 471 */
						bool_t BgL_testz00_2896;

						{	/* Object/slots.scm 471 */
							BgL_slotz00_bglt BgL_slotz00_1801;

							{	/* Object/slots.scm 471 */
								obj_t BgL_pairz00_1800;

								BgL_pairz00_1800 = BgL_slotsz00_1008;
								BgL_slotz00_1801 = (BgL_slotz00_bglt) (CAR(BgL_pairz00_1800));
							}
							BgL_testz00_2896 =
								(
								(long) CINT(
									(((BgL_slotz00_bglt) CREF(BgL_slotz00_1801))->
										BgL_virtualzd2numzd2)) >= ((long) 0));
						}
						if (BgL_testz00_2896)
							{
								obj_t BgL_slotsz00_2902;

								BgL_slotsz00_2902 = CDR(BgL_slotsz00_1008);
								BgL_slotsz00_1008 = BgL_slotsz00_2902;
								goto BgL_zc3anonymousza32959ze3z83_1011;
							}
						else
							{	/* Object/slots.scm 474 */
								obj_t BgL_arg2963z00_1015;

								obj_t BgL_arg2964z00_1016;

								obj_t BgL_arg2965z00_1017;

								BgL_arg2963z00_1015 = CDR(BgL_slotsz00_1008);
								BgL_arg2964z00_1016 = CDR(BgL_idsz00_1009);
								{	/* Object/slots.scm 476 */
									obj_t BgL_arg2966z00_1018;

									{	/* Object/slots.scm 476 */
										obj_t BgL_arg2967z00_1019;

										obj_t BgL_arg2968z00_1020;

										BgL_arg2967z00_1019 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(CAR
											(BgL_idsz00_1009));
										{	/* Object/slots.scm 477 */
											BgL_typez00_bglt BgL_obj1508z00_1814;

											{	/* Object/slots.scm 477 */
												obj_t BgL_auxz00_2908;

												{	/* Object/slots.scm 477 */
													BgL_slotz00_bglt BgL_obj2427z00_1813;

													{	/* Object/slots.scm 477 */
														obj_t BgL_pairz00_1812;

														BgL_pairz00_1812 = BgL_slotsz00_1008;
														BgL_obj2427z00_1813 =
															(BgL_slotz00_bglt) (CAR(BgL_pairz00_1812));
													}
													BgL_auxz00_2908 =
														(((BgL_slotz00_bglt) CREF(BgL_obj2427z00_1813))->
														BgL_typez00);
												}
												BgL_obj1508z00_1814 =
													(BgL_typez00_bglt) (BgL_auxz00_2908);
											}
											BgL_arg2968z00_1020 =
												(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1814))->
												BgL_idz00);
										}
										BgL_arg2966z00_1018 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg2967z00_1019, BgL_arg2968z00_1020);
									}
									BgL_arg2965z00_1017 =
										MAKE_PAIR(BgL_arg2966z00_1018, BgL_formalsz00_1010);
								}
								{
									obj_t BgL_formalsz00_2918;

									obj_t BgL_idsz00_2917;

									obj_t BgL_slotsz00_2916;

									BgL_slotsz00_2916 = BgL_arg2963z00_1015;
									BgL_idsz00_2917 = BgL_arg2964z00_1016;
									BgL_formalsz00_2918 = BgL_arg2965z00_1017;
									BgL_formalsz00_1010 = BgL_formalsz00_2918;
									BgL_idsz00_1009 = BgL_idsz00_2917;
									BgL_slotsz00_1008 = BgL_slotsz00_2916;
									goto BgL_zc3anonymousza32959ze3z83_1011;
								}
							}
					}
			}
		}
	}



/* _make-class-make-typed-formals */
	obj_t BGl__makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t
		BgL_envz00_2002, obj_t BgL_idsz00_2003, obj_t BgL_slotsz00_2004)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 464 */
			return
				BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
				(BgL_idsz00_2003, BgL_slotsz00_2004);
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			{	/* Object/slots.scm 32 */
				obj_t BgL_arg2973z00_1026;

				obj_t BgL_arg2974z00_1027;

				obj_t BgL_arg2977z00_1030;

				BgL_arg2973z00_1026 = CNST_TABLE_REF(((long) 15));
				BgL_arg2974z00_1027 = BGl_objectz00zz__objectz00;
				{	/* Object/slots.scm 32 */
					obj_t BgL_v2558z00_1031;

					BgL_v2558z00_1031 = create_vector((int) (((long) 0)));
					BgL_arg2977z00_1030 = BgL_v2558z00_1031;
				}
				BGl_slotz00zzobject_slotsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2973z00_1026,
					BgL_arg2974z00_1027, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2slotzd2envz52zzobject_slotsz00,
					BGl_slotzd2nilzd2envz00zzobject_slotsz00,
					BGl_slotzf3zd2envz21zzobject_slotsz00, ((long) 235199104), BFALSE,
					BFALSE, BgL_arg2977z00_1030);
			}
			return (BGl_z52thezd2slotzd2nilz52zzobject_slotsz00 = BUNSPEC, BUNSPEC);
		}
	}



/* slot? */
	BGL_EXPORTED_DEF bool_t BGl_slotzf3zf3zzobject_slotsz00(obj_t
		BgL_obj2532z00_23)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2532z00_23,
				BGl_slotz00zzobject_slotsz00);
		}
	}



/* _slot? */
	obj_t BGl__slotzf3zf3zzobject_slotsz00(obj_t BgL_envz00_2007,
		obj_t BgL_obj2532z00_2008)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2532z00_2008,
					BGl_slotz00zzobject_slotsz00));
		}
	}



/* make-slot */
	BGL_EXPORTED_DEF BgL_slotz00_bglt BGl_makezd2slotzd2zzobject_slotsz00(obj_t
		BgL_id2441z00_27, obj_t BgL_name2442z00_28, obj_t BgL_src2443z00_29,
		obj_t BgL_classzd2owner2444zd2_30, obj_t BgL_type2445z00_31,
		bool_t BgL_readzd2onlyzf32446z21_32, obj_t BgL_defaultzd2value2447zd2_33,
		obj_t BgL_virtualzd2num2448zd2_34, obj_t BgL_getter2449z00_35,
		obj_t BgL_setter2450z00_36, obj_t BgL_indexed2451z00_37,
		obj_t BgL_userzd2info2452zd2_38)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{	/* Object/slots.scm 32 */
				BgL_slotz00_bglt BgL_new2453z00_1815;

				{	/* Object/slots.scm 32 */
					BgL_slotz00_bglt BgL_res3073z00_1820;

					{	/* Object/slots.scm 32 */
						BgL_slotz00_bglt BgL_new2481z00_1816;

						BgL_new2481z00_1816 =
							((BgL_slotz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_slotz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2481z00_1816),
							BGl_classzd2numzd2zz__objectz00(BGl_slotz00zzobject_slotsz00));
						{	/* Object/slots.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_2931;

							BgL_auxz00_2931 = (BgL_objectz00_bglt) (BgL_new2481z00_1816);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2931, BFALSE);
						}
						BgL_res3073z00_1820 = BgL_new2481z00_1816;
					}
					BgL_new2453z00_1815 = BgL_res3073z00_1820;
				}
				{	/* Object/slots.scm 32 */
					BgL_slotz00_bglt BgL_res3074z00_1846;

					{	/* Object/slots.scm 32 */
						BgL_slotz00_bglt BgL_new2467z00_1821;

						BgL_new2467z00_1821 = BgL_new2453z00_1815;
						{	/* Object/slots.scm 32 */
							obj_t BgL_id2455z00_1834;

							obj_t BgL_name2456z00_1835;

							obj_t BgL_src2457z00_1836;

							obj_t BgL_classzd2owner2458zd2_1837;

							obj_t BgL_type2459z00_1838;

							bool_t BgL_readzd2onlyzf32460z21_1839;

							obj_t BgL_defaultzd2value2461zd2_1840;

							obj_t BgL_virtualzd2num2462zd2_1841;

							obj_t BgL_getter2463z00_1842;

							obj_t BgL_setter2464z00_1843;

							obj_t BgL_indexed2465z00_1844;

							obj_t BgL_userzd2info2466zd2_1845;

							BgL_id2455z00_1834 = BgL_id2441z00_27;
							BgL_name2456z00_1835 = BgL_name2442z00_28;
							BgL_src2457z00_1836 = BgL_src2443z00_29;
							BgL_classzd2owner2458zd2_1837 = BgL_classzd2owner2444zd2_30;
							BgL_type2459z00_1838 = BgL_type2445z00_31;
							BgL_readzd2onlyzf32460z21_1839 = BgL_readzd2onlyzf32446z21_32;
							BgL_defaultzd2value2461zd2_1840 = BgL_defaultzd2value2447zd2_33;
							BgL_virtualzd2num2462zd2_1841 = BgL_virtualzd2num2448zd2_34;
							BgL_getter2463z00_1842 = BgL_getter2449z00_35;
							BgL_setter2464z00_1843 = BgL_setter2450z00_36;
							BgL_indexed2465z00_1844 = BgL_indexed2451z00_37;
							BgL_userzd2info2466zd2_1845 = BgL_userzd2info2452zd2_38;
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->BgL_idz00) =
								((obj_t) BgL_id2455z00_1834), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->BgL_namez00) =
								((obj_t) BgL_name2456z00_1835), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->BgL_srcz00) =
								((obj_t) BgL_src2457z00_1836), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->
									BgL_classzd2ownerzd2) =
								((obj_t) BgL_classzd2owner2458zd2_1837), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->BgL_typez00) =
								((obj_t) BgL_type2459z00_1838), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->
									BgL_readzd2onlyzf3z21) =
								((bool_t) BgL_readzd2onlyzf32460z21_1839), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->
									BgL_defaultzd2valuezd2) =
								((obj_t) BgL_defaultzd2value2461zd2_1840), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->
									BgL_virtualzd2numzd2) =
								((obj_t) BgL_virtualzd2num2462zd2_1841), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->BgL_getterz00) =
								((obj_t) BgL_getter2463z00_1842), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->BgL_setterz00) =
								((obj_t) BgL_setter2464z00_1843), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->
									BgL_indexedz00) = ((obj_t) BgL_indexed2465z00_1844), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1821))->
									BgL_userzd2infozd2) =
								((obj_t) BgL_userzd2info2466zd2_1845), BUNSPEC);
							BgL_res3074z00_1846 = BgL_new2467z00_1821;
					}} BgL_res3074z00_1846;
				}
				return BgL_new2453z00_1815;
			}
		}
	}



/* _make-slot */
	obj_t BGl__makezd2slotzd2zzobject_slotsz00(obj_t BgL_envz00_2009,
		obj_t BgL_id2441z00_2010, obj_t BgL_name2442z00_2011,
		obj_t BgL_src2443z00_2012, obj_t BgL_classzd2owner2444zd2_2013,
		obj_t BgL_type2445z00_2014, obj_t BgL_readzd2onlyzf32446z21_2015,
		obj_t BgL_defaultzd2value2447zd2_2016, obj_t BgL_virtualzd2num2448zd2_2017,
		obj_t BgL_getter2449z00_2018, obj_t BgL_setter2450z00_2019,
		obj_t BgL_indexed2451z00_2020, obj_t BgL_userzd2info2452zd2_2021)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			return
				(obj_t) (BGl_makezd2slotzd2zzobject_slotsz00(BgL_id2441z00_2010,
					BgL_name2442z00_2011, BgL_src2443z00_2012,
					BgL_classzd2owner2444zd2_2013, BgL_type2445z00_2014,
					CBOOL(BgL_readzd2onlyzf32446z21_2015),
					BgL_defaultzd2value2447zd2_2016, BgL_virtualzd2num2448zd2_2017,
					BgL_getter2449z00_2018, BgL_setter2450z00_2019,
					BgL_indexed2451z00_2020, BgL_userzd2info2452zd2_2021));
		}
	}



/* fill-slot! */
	BGL_EXPORTED_DEF BgL_slotz00_bglt
		BGl_fillzd2slotz12zc0zzobject_slotsz00(BgL_slotz00_bglt BgL_new2467z00_39,
		obj_t BgL_id2455z00_40, obj_t BgL_name2456z00_41, obj_t BgL_src2457z00_42,
		obj_t BgL_classzd2owner2458zd2_43, obj_t BgL_type2459z00_44,
		bool_t BgL_readzd2onlyzf32460z21_45, obj_t BgL_defaultzd2value2461zd2_46,
		obj_t BgL_virtualzd2num2462zd2_47, obj_t BgL_getter2463z00_48,
		obj_t BgL_setter2464z00_49, obj_t BgL_indexed2465z00_50,
		obj_t BgL_userzd2info2466zd2_51)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{	/* Object/slots.scm 32 */
				obj_t BgL_id2455z00_2064;

				obj_t BgL_name2456z00_2065;

				obj_t BgL_src2457z00_2066;

				obj_t BgL_classzd2owner2458zd2_2067;

				obj_t BgL_type2459z00_2068;

				bool_t BgL_readzd2onlyzf32460z21_2069;

				obj_t BgL_defaultzd2value2461zd2_2070;

				obj_t BgL_virtualzd2num2462zd2_2071;

				obj_t BgL_getter2463z00_2072;

				obj_t BgL_setter2464z00_2073;

				obj_t BgL_indexed2465z00_2074;

				obj_t BgL_userzd2info2466zd2_2075;

				BgL_id2455z00_2064 = BgL_id2455z00_40;
				BgL_name2456z00_2065 = BgL_name2456z00_41;
				BgL_src2457z00_2066 = BgL_src2457z00_42;
				BgL_classzd2owner2458zd2_2067 = BgL_classzd2owner2458zd2_43;
				BgL_type2459z00_2068 = BgL_type2459z00_44;
				BgL_readzd2onlyzf32460z21_2069 = BgL_readzd2onlyzf32460z21_45;
				BgL_defaultzd2value2461zd2_2070 = BgL_defaultzd2value2461zd2_46;
				BgL_virtualzd2num2462zd2_2071 = BgL_virtualzd2num2462zd2_47;
				BgL_getter2463z00_2072 = BgL_getter2463z00_48;
				BgL_setter2464z00_2073 = BgL_setter2464z00_49;
				BgL_indexed2465z00_2074 = BgL_indexed2465z00_50;
				BgL_userzd2info2466zd2_2075 = BgL_userzd2info2466zd2_51;
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_idz00) =
					((obj_t) BgL_id2455z00_2064), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_namez00) =
					((obj_t) BgL_name2456z00_2065), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_srcz00) =
					((obj_t) BgL_src2457z00_2066), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_classzd2ownerzd2) =
					((obj_t) BgL_classzd2owner2458zd2_2067), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_typez00) =
					((obj_t) BgL_type2459z00_2068), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_readzd2onlyzf3z21) =
					((bool_t) BgL_readzd2onlyzf32460z21_2069), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->
						BgL_defaultzd2valuezd2) =
					((obj_t) BgL_defaultzd2value2461zd2_2070), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_virtualzd2numzd2) =
					((obj_t) BgL_virtualzd2num2462zd2_2071), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_getterz00) =
					((obj_t) BgL_getter2463z00_2072), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_setterz00) =
					((obj_t) BgL_setter2464z00_2073), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_indexedz00) =
					((obj_t) BgL_indexed2465z00_2074), BUNSPEC);
				((((BgL_slotz00_bglt) CREF(BgL_new2467z00_39))->BgL_userzd2infozd2) =
					((obj_t) BgL_userzd2info2466zd2_2075), BUNSPEC);
				return BgL_new2467z00_39;
			}
		}
	}



/* _fill-slot! */
	obj_t BGl__fillzd2slotz12zc0zzobject_slotsz00(obj_t BgL_envz00_2022,
		obj_t BgL_new2467z00_2023, obj_t BgL_id2455z00_2024,
		obj_t BgL_name2456z00_2025, obj_t BgL_src2457z00_2026,
		obj_t BgL_classzd2owner2458zd2_2027, obj_t BgL_type2459z00_2028,
		obj_t BgL_readzd2onlyzf32460z21_2029, obj_t BgL_defaultzd2value2461zd2_2030,
		obj_t BgL_virtualzd2num2462zd2_2031, obj_t BgL_getter2463z00_2032,
		obj_t BgL_setter2464z00_2033, obj_t BgL_indexed2465z00_2034,
		obj_t BgL_userzd2info2466zd2_2035)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{	/* Object/slots.scm 32 */
				BgL_slotz00_bglt BgL_auxz00_2961;

				{	/* Object/slots.scm 32 */
					BgL_slotz00_bglt BgL_res3108z00_2101;

					{	/* Object/slots.scm 32 */
						BgL_slotz00_bglt BgL_new2467z00_2076;

						obj_t BgL_id2455z00_2077;

						obj_t BgL_name2456z00_2078;

						bool_t BgL_readzd2onlyzf32460z21_2082;

						BgL_new2467z00_2076 = (BgL_slotz00_bglt) (BgL_new2467z00_2023);
						BgL_id2455z00_2077 = BgL_id2455z00_2024;
						BgL_name2456z00_2078 = BgL_name2456z00_2025;
						BgL_readzd2onlyzf32460z21_2082 =
							CBOOL(BgL_readzd2onlyzf32460z21_2029);
						{	/* Object/slots.scm 32 */
							obj_t BgL_id2455z00_2089;

							obj_t BgL_name2456z00_2090;

							obj_t BgL_src2457z00_2091;

							obj_t BgL_classzd2owner2458zd2_2092;

							obj_t BgL_type2459z00_2093;

							bool_t BgL_readzd2onlyzf32460z21_2094;

							obj_t BgL_defaultzd2value2461zd2_2095;

							obj_t BgL_virtualzd2num2462zd2_2096;

							obj_t BgL_getter2463z00_2097;

							obj_t BgL_setter2464z00_2098;

							obj_t BgL_indexed2465z00_2099;

							obj_t BgL_userzd2info2466zd2_2100;

							BgL_id2455z00_2089 = BgL_id2455z00_2077;
							BgL_name2456z00_2090 = BgL_name2456z00_2078;
							BgL_src2457z00_2091 = BgL_src2457z00_2026;
							BgL_classzd2owner2458zd2_2092 = BgL_classzd2owner2458zd2_2027;
							BgL_type2459z00_2093 = BgL_type2459z00_2028;
							BgL_readzd2onlyzf32460z21_2094 = BgL_readzd2onlyzf32460z21_2082;
							BgL_defaultzd2value2461zd2_2095 = BgL_defaultzd2value2461zd2_2030;
							BgL_virtualzd2num2462zd2_2096 = BgL_virtualzd2num2462zd2_2031;
							BgL_getter2463z00_2097 = BgL_getter2463z00_2032;
							BgL_setter2464z00_2098 = BgL_setter2464z00_2033;
							BgL_indexed2465z00_2099 = BgL_indexed2465z00_2034;
							BgL_userzd2info2466zd2_2100 = BgL_userzd2info2466zd2_2035;
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->BgL_idz00) =
								((obj_t) BgL_id2455z00_2089), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->BgL_namez00) =
								((obj_t) BgL_name2456z00_2090), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->BgL_srcz00) =
								((obj_t) BgL_src2457z00_2091), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->
									BgL_classzd2ownerzd2) =
								((obj_t) BgL_classzd2owner2458zd2_2092), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->BgL_typez00) =
								((obj_t) BgL_type2459z00_2093), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->
									BgL_readzd2onlyzf3z21) =
								((bool_t) BgL_readzd2onlyzf32460z21_2094), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->
									BgL_defaultzd2valuezd2) =
								((obj_t) BgL_defaultzd2value2461zd2_2095), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->
									BgL_virtualzd2numzd2) =
								((obj_t) BgL_virtualzd2num2462zd2_2096), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->BgL_getterz00) =
								((obj_t) BgL_getter2463z00_2097), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->BgL_setterz00) =
								((obj_t) BgL_setter2464z00_2098), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->
									BgL_indexedz00) = ((obj_t) BgL_indexed2465z00_2099), BUNSPEC);
							((((BgL_slotz00_bglt) CREF(BgL_new2467z00_2076))->
									BgL_userzd2infozd2) =
								((obj_t) BgL_userzd2info2466zd2_2100), BUNSPEC);
							BgL_res3108z00_2101 = BgL_new2467z00_2076;
						}
					}
					BgL_auxz00_2961 = BgL_res3108z00_2101;
				}
				return (obj_t) (BgL_auxz00_2961);
			}
		}
	}



/* %allocate-slot */
	BGL_EXPORTED_DEF BgL_slotz00_bglt BGl_z52allocatezd2slotz80zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{	/* Object/slots.scm 32 */
				BgL_slotz00_bglt BgL_new2481z00_2102;

				BgL_new2481z00_2102 =
					((BgL_slotz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_slotz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2481z00_2102),
					BGl_classzd2numzd2zz__objectz00(BGl_slotz00zzobject_slotsz00));
				{	/* Object/slots.scm 32 */
					BgL_objectz00_bglt BgL_auxz00_2981;

					BgL_auxz00_2981 = (BgL_objectz00_bglt) (BgL_new2481z00_2102);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2981, BFALSE);
				}
				return BgL_new2481z00_2102;
			}
		}
	}



/* _%allocate-slot */
	obj_t BGl__z52allocatezd2slotz80zzobject_slotsz00(obj_t BgL_envz00_2005)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{	/* Object/slots.scm 32 */
				BgL_slotz00_bglt BgL_auxz00_2984;

				{	/* Object/slots.scm 32 */
					BgL_slotz00_bglt BgL_res3109z00_2106;

					{	/* Object/slots.scm 32 */
						BgL_slotz00_bglt BgL_new2481z00_2104;

						BgL_new2481z00_2104 =
							((BgL_slotz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_slotz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2481z00_2104),
							BGl_classzd2numzd2zz__objectz00(BGl_slotz00zzobject_slotsz00));
						{	/* Object/slots.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_2989;

							BgL_auxz00_2989 = (BgL_objectz00_bglt) (BgL_new2481z00_2104);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2989, BFALSE);
						}
						BgL_res3109z00_2106 = BgL_new2481z00_2104;
					}
					BgL_auxz00_2984 = BgL_res3109z00_2106;
				}
				return (obj_t) (BgL_auxz00_2984);
			}
		}
	}



/* slot-nil */
	BGL_EXPORTED_DEF BgL_slotz00_bglt BGl_slotzd2nilzd2zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			if ((BGl_z52thezd2slotzd2nilz52zzobject_slotsz00 == BUNSPEC))
				{	/* Object/slots.scm 32 */
					{	/* Object/slots.scm 32 */
						BgL_slotz00_bglt BgL_res3075z00_1867;

						{	/* Object/slots.scm 32 */
							BgL_slotz00_bglt BgL_new2481z00_1863;

							BgL_new2481z00_1863 =
								((BgL_slotz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_slotz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2481z00_1863),
								BGl_classzd2numzd2zz__objectz00(BGl_slotz00zzobject_slotsz00));
							{	/* Object/slots.scm 32 */
								BgL_objectz00_bglt BgL_auxz00_2999;

								BgL_auxz00_2999 = (BgL_objectz00_bglt) (BgL_new2481z00_1863);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2999, BFALSE);
							}
							BgL_res3075z00_1867 = BgL_new2481z00_1863;
						}
						BGl_z52thezd2slotzd2nilz52zzobject_slotsz00 =
							(obj_t) (BgL_res3075z00_1867);
					}
					{	/* Object/slots.scm 32 */
						BgL_slotz00_bglt BgL_res3076z00_1893;

						{	/* Object/slots.scm 32 */
							BgL_slotz00_bglt BgL_new2467z00_1868;

							obj_t BgL_id2455z00_1869;

							BgL_new2467z00_1868 =
								(BgL_slotz00_bglt)
								(BGl_z52thezd2slotzd2nilz52zzobject_slotsz00);
							BgL_id2455z00_1869 = CNST_TABLE_REF(((long) 16));
							{	/* Object/slots.scm 32 */
								obj_t BgL_id2455z00_1881;

								obj_t BgL_name2456z00_1882;

								obj_t BgL_src2457z00_1883;

								obj_t BgL_classzd2owner2458zd2_1884;

								obj_t BgL_type2459z00_1885;

								bool_t BgL_readzd2onlyzf32460z21_1886;

								obj_t BgL_defaultzd2value2461zd2_1887;

								obj_t BgL_virtualzd2num2462zd2_1888;

								obj_t BgL_getter2463z00_1889;

								obj_t BgL_setter2464z00_1890;

								obj_t BgL_indexed2465z00_1891;

								obj_t BgL_userzd2info2466zd2_1892;

								BgL_id2455z00_1881 = BgL_id2455z00_1869;
								BgL_name2456z00_1882 = BGl_string3091z00zzobject_slotsz00;
								BgL_src2457z00_1883 = BUNSPEC;
								BgL_classzd2owner2458zd2_1884 = BUNSPEC;
								BgL_type2459z00_1885 = BUNSPEC;
								BgL_readzd2onlyzf32460z21_1886 = ((bool_t) 0);
								BgL_defaultzd2value2461zd2_1887 = BUNSPEC;
								BgL_virtualzd2num2462zd2_1888 = BUNSPEC;
								BgL_getter2463z00_1889 = BUNSPEC;
								BgL_setter2464z00_1890 = BUNSPEC;
								BgL_indexed2465z00_1891 = BUNSPEC;
								BgL_userzd2info2466zd2_1892 = BUNSPEC;
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->BgL_idz00) =
									((obj_t) BgL_id2455z00_1881), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->BgL_namez00) =
									((obj_t) BgL_name2456z00_1882), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->BgL_srcz00) =
									((obj_t) BgL_src2457z00_1883), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_classzd2ownerzd2) =
									((obj_t) BgL_classzd2owner2458zd2_1884), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->BgL_typez00) =
									((obj_t) BgL_type2459z00_1885), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_readzd2onlyzf3z21) =
									((bool_t) BgL_readzd2onlyzf32460z21_1886), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_defaultzd2valuezd2) =
									((obj_t) BgL_defaultzd2value2461zd2_1887), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_virtualzd2numzd2) =
									((obj_t) BgL_virtualzd2num2462zd2_1888), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_getterz00) = ((obj_t) BgL_getter2463z00_1889), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_setterz00) = ((obj_t) BgL_setter2464z00_1890), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_indexedz00) =
									((obj_t) BgL_indexed2465z00_1891), BUNSPEC);
								((((BgL_slotz00_bglt) CREF(BgL_new2467z00_1868))->
										BgL_userzd2infozd2) =
									((obj_t) BgL_userzd2info2466zd2_1892), BUNSPEC);
								BgL_res3076z00_1893 = BgL_new2467z00_1868;
						}}
						(obj_t) (BgL_res3076z00_1893);
				}}
			else
				{	/* Object/slots.scm 32 */
					BFALSE;
				}
			return (BgL_slotz00_bglt) (BGl_z52thezd2slotzd2nilz52zzobject_slotsz00);
		}
	}



/* _slot-nil */
	obj_t BGl__slotzd2nilzd2zzobject_slotsz00(obj_t BgL_envz00_2006)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			return (obj_t) (BGl_slotzd2nilzd2zzobject_slotsz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_slotz00zzobject_slotsz00,
				BGl_proc3092z00zzobject_slotsz00, BGl_string3093z00zzobject_slotsz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_slotz00zzobject_slotsz00, BGl_proc3094z00zzobject_slotsz00,
				BGl_string3095z00zzobject_slotsz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_slotz00zzobject_slotsz00, BGl_proc3096z00zzobject_slotsz00,
				BGl_string3097z00zzobject_slotsz00);
		}
	}



/* struct+object->objec2564 */
	obj_t BGl_structzb2objectzd2ze3objec2564z83zzobject_slotsz00(obj_t
		BgL_envz00_2039, obj_t BgL_oz00_2040, obj_t BgL_sz00_2041)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{
				BgL_slotz00_bglt BgL_oz00_1249;

				obj_t BgL_sz00_1250;

				{	/* Object/slots.scm 32 */
					BgL_slotz00_bglt BgL_auxz00_3024;

					BgL_oz00_1249 = (BgL_slotz00_bglt) (BgL_oz00_2040);
					BgL_sz00_1250 = BgL_sz00_2041;
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3047z00_1253;

						BgL_arg3047z00_1253 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 0)));
						{	/* Object/slots.scm 32 */
							BgL_objectz00_bglt BgL_auxz00_3027;

							BgL_auxz00_3027 = (BgL_objectz00_bglt) (BgL_oz00_1249);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3027, BgL_arg3047z00_1253);
					}}
					{
						obj_t BgL_auxz00_3030;

						BgL_auxz00_3030 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 1)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_idz00) =
							((obj_t) BgL_auxz00_3030), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3034;

						BgL_auxz00_3034 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 2)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_namez00) =
							((obj_t) BgL_auxz00_3034), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3038;

						BgL_auxz00_3038 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 3)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_srcz00) =
							((obj_t) BgL_auxz00_3038), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3042;

						BgL_auxz00_3042 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 4)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_classzd2ownerzd2) =
							((obj_t) BgL_auxz00_3042), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3046;

						BgL_auxz00_3046 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 5)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_typez00) =
							((obj_t) BgL_auxz00_3046), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_3050;

						BgL_auxz00_3050 =
							CBOOL(STRUCT_REF(BgL_sz00_1250, (int) (((long) 6))));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_readzd2onlyzf3z21) =
							((bool_t) BgL_auxz00_3050), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3055;

						BgL_auxz00_3055 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 7)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->
								BgL_defaultzd2valuezd2) = ((obj_t) BgL_auxz00_3055), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3059;

						BgL_auxz00_3059 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 8)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_virtualzd2numzd2) =
							((obj_t) BgL_auxz00_3059), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3063;

						BgL_auxz00_3063 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 9)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_getterz00) =
							((obj_t) BgL_auxz00_3063), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3067;

						BgL_auxz00_3067 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 10)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_setterz00) =
							((obj_t) BgL_auxz00_3067), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3071;

						BgL_auxz00_3071 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 11)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_indexedz00) =
							((obj_t) BgL_auxz00_3071), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3075;

						BgL_auxz00_3075 = STRUCT_REF(BgL_sz00_1250, (int) (((long) 12)));
						((((BgL_slotz00_bglt) CREF(BgL_oz00_1249))->BgL_userzd2infozd2) =
							((obj_t) BgL_auxz00_3075), BUNSPEC);
					}
					BgL_auxz00_3024 = BgL_oz00_1249;
					return (obj_t) (BgL_auxz00_3024);
				}
			}
		}
	}



/* object->struct-slot2562 */
	obj_t BGl_objectzd2ze3structzd2slot2562ze3zzobject_slotsz00(obj_t
		BgL_envz00_2042, obj_t BgL_obj2482z00_2043)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 32 */
			{
				BgL_slotz00_bglt BgL_obj2482z00_1219;

				BgL_obj2482z00_1219 = (BgL_slotz00_bglt) (BgL_obj2482z00_2043);
				{	/* Object/slots.scm 32 */
					obj_t BgL_res2483z00_1222;

					{	/* Object/slots.scm 32 */
						obj_t BgL_keyz00_1901;

						BgL_keyz00_1901 = CNST_TABLE_REF(((long) 15));
						BgL_res2483z00_1222 =
							make_struct(BgL_keyz00_1901, (int) (((long) 13)), BUNSPEC);
					}
					{	/* Object/slots.scm 32 */
						int BgL_auxz00_3084;

						BgL_auxz00_3084 = (int) (((long) 0));
						STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3084, BFALSE);
					}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3023z00_1224;

						BgL_arg3023z00_1224 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_idz00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3088;

							BgL_auxz00_3088 = (int) (((long) 1));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3088,
								BgL_arg3023z00_1224);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3025z00_1226;

						BgL_arg3025z00_1226 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_namez00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3092;

							BgL_auxz00_3092 = (int) (((long) 2));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3092,
								BgL_arg3025z00_1226);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3027z00_1228;

						BgL_arg3027z00_1228 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_srcz00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3096;

							BgL_auxz00_3096 = (int) (((long) 3));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3096,
								BgL_arg3027z00_1228);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3029z00_1230;

						BgL_arg3029z00_1230 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->
							BgL_classzd2ownerzd2);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3100;

							BgL_auxz00_3100 = (int) (((long) 4));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3100,
								BgL_arg3029z00_1230);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3031z00_1232;

						BgL_arg3031z00_1232 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_typez00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3104;

							BgL_auxz00_3104 = (int) (((long) 5));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3104,
								BgL_arg3031z00_1232);
					}}
					{	/* Object/slots.scm 32 */
						bool_t BgL_arg3033z00_1234;

						BgL_arg3033z00_1234 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->
							BgL_readzd2onlyzf3z21);
						{	/* Object/slots.scm 32 */
							obj_t BgL_auxz00_3110;

							int BgL_auxz00_3108;

							BgL_auxz00_3110 = BBOOL(BgL_arg3033z00_1234);
							BgL_auxz00_3108 = (int) (((long) 6));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3108, BgL_auxz00_3110);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3035z00_1236;

						BgL_arg3035z00_1236 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->
							BgL_defaultzd2valuezd2);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3114;

							BgL_auxz00_3114 = (int) (((long) 7));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3114,
								BgL_arg3035z00_1236);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3037z00_1238;

						BgL_arg3037z00_1238 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->
							BgL_virtualzd2numzd2);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3118;

							BgL_auxz00_3118 = (int) (((long) 8));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3118,
								BgL_arg3037z00_1238);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3039z00_1240;

						BgL_arg3039z00_1240 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_getterz00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3122;

							BgL_auxz00_3122 = (int) (((long) 9));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3122,
								BgL_arg3039z00_1240);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3041z00_1242;

						BgL_arg3041z00_1242 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_setterz00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3126;

							BgL_auxz00_3126 = (int) (((long) 10));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3126,
								BgL_arg3041z00_1242);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3043z00_1244;

						BgL_arg3043z00_1244 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->BgL_indexedz00);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3130;

							BgL_auxz00_3130 = (int) (((long) 11));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3130,
								BgL_arg3043z00_1244);
					}}
					{	/* Object/slots.scm 32 */
						obj_t BgL_arg3045z00_1246;

						BgL_arg3045z00_1246 =
							(((BgL_slotz00_bglt) CREF(BgL_obj2482z00_1219))->
							BgL_userzd2infozd2);
						{	/* Object/slots.scm 32 */
							int BgL_auxz00_3134;

							BgL_auxz00_3134 = (int) (((long) 12));
							STRUCT_SET(BgL_res2483z00_1222, BgL_auxz00_3134,
								BgL_arg3045z00_1246);
					}}
					return BgL_res2483z00_1222;
				}
			}
		}
	}



/* shape-slot2560 */
	obj_t BGl_shapezd2slot2560zd2zzobject_slotsz00(obj_t BgL_envz00_2044,
		obj_t BgL_sz00_2045)
	{
		AN_OBJECT;
		{	/* Object/slots.scm 70 */
			{
				BgL_slotz00_bglt BgL_sz00_1190;

				BgL_sz00_1190 = (BgL_slotz00_bglt) (BgL_sz00_2045);
				{	/* Object/slots.scm 72 */
					obj_t BgL_arg2998z00_1195;

					obj_t BgL_arg3001z00_1197;

					obj_t BgL_arg3004z00_1200;

					obj_t BgL_arg3006z00_1202;

					{	/* Object/slots.scm 72 */
						obj_t BgL_arg3018z00_1214;

						BgL_arg3018z00_1214 =
							(((BgL_slotz00_bglt) CREF(BgL_sz00_1190))->BgL_idz00);
						{	/* Object/slots.scm 72 */
							obj_t BgL_res3077z00_1897;

							{	/* Object/slots.scm 72 */
								obj_t BgL_arg2063z00_1896;

								BgL_arg2063z00_1896 = SYMBOL_TO_STRING(BgL_arg3018z00_1214);
								BgL_res3077z00_1897 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1896);
							}
							BgL_arg2998z00_1195 = BgL_res3077z00_1897;
						}
					}
					BgL_arg3001z00_1197 =
						(((BgL_slotz00_bglt) CREF(BgL_sz00_1190))->BgL_namez00);
					{	/* Object/slots.scm 73 */
						obj_t BgL_arg3019z00_1215;

						BgL_arg3019z00_1215 =
							(((BgL_slotz00_bglt) CREF(BgL_sz00_1190))->BgL_classzd2ownerzd2);
						BgL_arg3004z00_1200 =
							BGl_shapez00zztools_shapez00(BgL_arg3019z00_1215);
					}
					{	/* Object/slots.scm 74 */
						obj_t BgL_arg3020z00_1216;

						BgL_arg3020z00_1216 =
							(((BgL_slotz00_bglt) CREF(BgL_sz00_1190))->BgL_typez00);
						BgL_arg3006z00_1202 =
							BGl_shapez00zztools_shapez00(BgL_arg3020z00_1216);
					}
					{	/* Object/slots.scm 72 */
						obj_t BgL_list3008z00_1204;

						{	/* Object/slots.scm 72 */
							obj_t BgL_arg3009z00_1205;

							{	/* Object/slots.scm 72 */
								obj_t BgL_arg3010z00_1206;

								{	/* Object/slots.scm 72 */
									obj_t BgL_arg3011z00_1207;

									{	/* Object/slots.scm 72 */
										obj_t BgL_arg3012z00_1208;

										{	/* Object/slots.scm 72 */
											obj_t BgL_arg3013z00_1209;

											{	/* Object/slots.scm 72 */
												obj_t BgL_arg3014z00_1210;

												{	/* Object/slots.scm 72 */
													obj_t BgL_arg3015z00_1211;

													{	/* Object/slots.scm 72 */
														obj_t BgL_arg3016z00_1212;

														{	/* Object/slots.scm 72 */
															obj_t BgL_arg3017z00_1213;

															BgL_arg3017z00_1213 =
																MAKE_PAIR(BGl_string3098z00zzobject_slotsz00,
																BNIL);
															BgL_arg3016z00_1212 =
																MAKE_PAIR(BgL_arg3006z00_1202,
																BgL_arg3017z00_1213);
														}
														BgL_arg3015z00_1211 =
															MAKE_PAIR(BGl_string3099z00zzobject_slotsz00,
															BgL_arg3016z00_1212);
													}
													BgL_arg3014z00_1210 =
														MAKE_PAIR(BgL_arg3004z00_1200, BgL_arg3015z00_1211);
												}
												BgL_arg3013z00_1209 =
													MAKE_PAIR(BGl_string3100z00zzobject_slotsz00,
													BgL_arg3014z00_1210);
											}
											BgL_arg3012z00_1208 =
												MAKE_PAIR(BGl_string3101z00zzobject_slotsz00,
												BgL_arg3013z00_1209);
										}
										BgL_arg3011z00_1207 =
											MAKE_PAIR(BgL_arg3001z00_1197, BgL_arg3012z00_1208);
									}
									BgL_arg3010z00_1206 =
										MAKE_PAIR(BGl_string3102z00zzobject_slotsz00,
										BgL_arg3011z00_1207);
								}
								BgL_arg3009z00_1205 =
									MAKE_PAIR(BgL_arg2998z00_1195, BgL_arg3010z00_1206);
							}
							BgL_list3008z00_1204 =
								MAKE_PAIR(BGl_string3103z00zzobject_slotsz00,
								BgL_arg3009z00_1205);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3008z00_1204);
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_slotsz00()
	{
		AN_OBJECT;
		{	/* Object/slots.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
			return
				BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string3104z00zzobject_slotsz00));
		}
	}

#ifdef __cplusplus
}
#endif
