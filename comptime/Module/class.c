/*===========================================================================*/
/*   (Module/class.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/class.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_classzd2finaliza7erz75zzmodule_classz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	extern BgL_typez00_bglt
		BGl_declarezd2classzd2typez12z12zzobject_classz00(obj_t, BgL_globalz00_bglt,
		obj_t, bool_t, bool_t, obj_t);
	extern obj_t BGl_za2reflectionzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl__getzd2methodzd2unitz00zzmodule_classz00(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl__declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza32551ze3z83zzmodule_classz00(obj_t);
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_classz00();
	static obj_t BGl_zc3anonymousza32560ze3z83zzmodule_classz00(obj_t);
	static obj_t BGl_za2genericzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_widezd2accesszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_plainzd2accesszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_classz00();
	static obj_t BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_forcezd2classzd2accessesz00zzmodule_classz00();
	BGL_EXPORTED_DECL obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static bool_t BGl_readzd2onlyzf3z21zzmodule_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2classzd2hashz00zzmodule_classz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t
		BGl__classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00(obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2exportzd2classz12z12zzmodule_classz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_classzd2predicatezd2zzobject_classz00(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_findzd2defaultzd2attributez00zzmodule_classz00(obj_t);
	static bool_t BGl_virtualzf3zf3zzmodule_classz00(obj_t);
	static obj_t BGl_za2methodzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzmodule_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00();
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2methodzd2unitz00zzmodule_classz00();
	static obj_t BGl_za2objectzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t BGl__getzd2objectzd2unitz00zzmodule_classz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_classz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzmodule_classz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2genericzd2unitz00zzmodule_classz00();
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl__classzd2finaliza7erz75zzmodule_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_classzd2makezd2zzobject_classz00(BgL_tclassz00_bglt);
	static BgL_typez00_bglt
		BGl_declarezd2importzd2classz12z12zzmodule_classz00(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_classz00();
	static obj_t BGl_makezd2classzd2fieldsz00zzmodule_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__delayzd2classzd2accessorsz12z12zzmodule_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl__getzd2classzd2hashz00zzmodule_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2infozd2attributez00zzmodule_classz00(obj_t);
	static obj_t BGl_makezd2addzd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_makezd2slotzd2fieldz00zzmodule_classz00(obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__getzd2genericzd2unitz00zzmodule_classz00(obj_t);
	extern obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2objectzd2unitz00zzmodule_classz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_classz00();
	static obj_t __cnst[40];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2finaliza7erzd2addzd2staticz12zd2envzb5zzmodule_classz00,
		BgL_bgl__classza7d2finaliza73162z00,
		BGl__classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2classz12zd2envz12zzmodule_classz00,
		BgL_bgl__declareza7d2class3163za7,
		BGl__declarezd2classz12zc0zzmodule_classz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2finaliza7erzd2envza7zzmodule_classz00,
		BgL_bgl__classza7d2finaliza73164z00,
		BGl__classzd2finaliza7erz75zzmodule_classz00, 0L, BUNSPEC, 0);
	extern obj_t
		BGl_importzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2;
	extern obj_t
		BGl_importzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2;
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2classzd2hashzd2envzd2zzmodule_classz00,
		BgL_bgl__getza7d2classza7d2h3165z00,
		BGl__getzd2classzd2hashz00zzmodule_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2widezd2classz12zd2envzc0zzmodule_classz00,
		BgL_bgl__declareza7d2wideza73166z00,
		BGl__declarezd2widezd2classz12z12zzmodule_classz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2genericzd2unitzd2envzd2zzmodule_classz00,
		BgL_bgl__getza7d2genericza7d3167z00,
		BGl__getzd2genericzd2unitz00zzmodule_classz00, 0L, BUNSPEC, 0);
	extern obj_t
		BGl_genzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2;
	      DEFINE_STRING(BGl_string3150z00zzmodule_classz00,
		BgL_bgl_string3150za700za7za7m3168za7, "make-add-class!", 15);
	      DEFINE_STRING(BGl_string3149z00zzmodule_classz00,
		BgL_bgl_string3149za700za7za7m3169za7,
		"Can't make instance of abstract classes", 39);
	      DEFINE_STRING(BGl_string3151z00zzmodule_classz00,
		BgL_bgl_string3151za700za7za7m3170za7, "make-class-id not a symbol", 26);
	      DEFINE_STRING(BGl_string3152z00zzmodule_classz00,
		BgL_bgl_string3152za700za7za7m3171za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string3153z00zzmodule_classz00,
		BgL_bgl_string3153za700za7za7m3172za7, "make-class-fields", 17);
	      DEFINE_STRING(BGl_string3154z00zzmodule_classz00,
		BgL_bgl_string3154za700za7za7m3173za7, "Illegal slot definition", 23);
	      DEFINE_STRING(BGl_string3155z00zzmodule_classz00,
		BgL_bgl_string3155za700za7za7m3174za7, "Illegal indexed slot", 20);
	      DEFINE_STRING(BGl_string3156z00zzmodule_classz00,
		BgL_bgl_string3156za700za7za7m3175za7, "bgl_init_module_debug_object(\"",
		30);
	      DEFINE_STRING(BGl_string3157z00zzmodule_classz00,
		BgL_bgl_string3157za700za7za7m3176za7, "\")", 2);
	      DEFINE_STRING(BGl_string3158z00zzmodule_classz00,
		BgL_bgl_string3158za700za7za7m3177za7, "module_class", 12);
	      DEFINE_STRING(BGl_string3159z00zzmodule_classz00,
		BgL_bgl_string3159za700za7za7m3178za7,
		"generic method unit (#unspecified) object pragma::void begin module void staged class-field-no-default-value -len -ref -set! - make-class-field ((@ class-field-no-default-value __object)) default info get read-only list * cons vector register-class! __object define -nil @ quote error x lambda %allocate- widening wide plain final (export static) ",
		347);
	extern obj_t
		BGl_genzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2;
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2objectzd2unitzd2envzd2zzmodule_classz00,
		BgL_bgl__getza7d2objectza7d23179z00,
		BGl__getzd2objectzd2unitz00zzmodule_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_delayzd2classzd2accessorsz12zd2envzc0zzmodule_classz00,
		BgL_bgl__delayza7d2classza7d3180z00,
		BGl__delayzd2classzd2accessorsz12z12zzmodule_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2methodzd2unitzd2envzd2zzmodule_classz00,
		BgL_bgl__getza7d2methodza7d23181z00,
		BGl__getzd2methodzd2unitz00zzmodule_classz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long
		BgL_checksumz00_1983, char *BgL_fromz00_1984)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_classz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_classz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_classz00();
					BGl_cnstzd2initzd2zzmodule_classz00();
					BGl_importedzd2moduleszd2initz00zzmodule_classz00();
					BGl_toplevelzd2initzd2zzmodule_classz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "module_class");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 15 */
			{	/* Module/class.scm 15 */
				obj_t BgL_cportz00_1975;

				BgL_cportz00_1975 =
					bgl_open_input_string(BGl_string3159z00zzmodule_classz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1976;

					BgL_iz00_1976 = ((long) 39);
				BgL_loopz00_1977:
					if ((BgL_iz00_1976 == ((long) -1)))
						{	/* Module/class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/class.scm 15 */
							{	/* Module/class.scm 15 */
								obj_t BgL_arg3161z00_1979;

								{	/* Module/class.scm 15 */

									{	/* Module/class.scm 15 */
										obj_t BgL_locationz00_1981;

										BgL_locationz00_1981 = BBOOL(((bool_t) 0));
										{	/* Module/class.scm 15 */

											BgL_arg3161z00_1979 =
												BGl_readz00zz__readerz00(BgL_cportz00_1975,
												BgL_locationz00_1981);
										}
									}
								}
								{	/* Module/class.scm 15 */
									int BgL_auxz00_2006;

									BgL_auxz00_2006 = (int) (BgL_iz00_1976);
									CNST_TABLE_SET(BgL_auxz00_2006, BgL_arg3161z00_1979);
							}}
							{	/* Module/class.scm 15 */
								int BgL_auxz00_1982;

								BgL_auxz00_1982 = (int) ((BgL_iz00_1976 - ((long) 1)));
								{
									long BgL_iz00_2011;

									BgL_iz00_2011 = (long) (BgL_auxz00_1982);
									BgL_iz00_1976 = BgL_iz00_2011;
									goto BgL_loopz00_1977;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 15 */
			BGl_za2objectzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
			BGl_za2methodzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
			BGl_za2genericzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
			BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BNIL;
			return (BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BNIL, BUNSPEC);
		}
	}



/* get-object-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2objectzd2unitz00zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 54 */
			return BGl_za2objectzd2unitza2zd2zzmodule_classz00;
		}
	}



/* _get-object-unit */
	obj_t BGl__getzd2objectzd2unitz00zzmodule_classz00(obj_t BgL_envz00_1912)
	{
		AN_OBJECT;
		{	/* Module/class.scm 54 */
			return BGl_za2objectzd2unitza2zd2zzmodule_classz00;
		}
	}



/* get-method-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2methodzd2unitz00zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 60 */
			return BGl_za2methodzd2unitza2zd2zzmodule_classz00;
		}
	}



/* _get-method-unit */
	obj_t BGl__getzd2methodzd2unitz00zzmodule_classz00(obj_t BgL_envz00_1913)
	{
		AN_OBJECT;
		{	/* Module/class.scm 60 */
			return BGl_za2methodzd2unitza2zd2zzmodule_classz00;
		}
	}



/* get-generic-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2genericzd2unitz00zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 66 */
			return BGl_za2genericzd2unitza2zd2zzmodule_classz00;
		}
	}



/* _get-generic-unit */
	obj_t BGl__getzd2genericzd2unitz00zzmodule_classz00(obj_t BgL_envz00_1914)
	{
		AN_OBJECT;
		{	/* Module/class.scm 66 */
			return BGl_za2genericzd2unitza2zd2zzmodule_classz00;
		}
	}



/* declare-class! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t
		BgL_classzd2defzd2_23, obj_t BgL_modulez00_24, obj_t BgL_importz00_25,
		bool_t BgL_finalzf3zf3_26, bool_t BgL_abstractzf3zf3_27,
		obj_t BgL_defzd2srczd2_28, obj_t BgL_declzd2srczd2_29)
	{
		AN_OBJECT;
		{	/* Module/class.scm 72 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_importz00_25,
						CNST_TABLE_REF(((long) 0)))))
				{	/* Module/class.scm 74 */
					obj_t BgL_arg2529z00_1412;

					if (BgL_finalzf3zf3_26)
						{	/* Module/class.scm 74 */
							BgL_arg2529z00_1412 = CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Module/class.scm 74 */
							BgL_arg2529z00_1412 = CNST_TABLE_REF(((long) 2));
						}
					return
						(obj_t) (BGl_declarezd2exportzd2classz12z12zzmodule_classz00
						(BGl_genzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2,
							BgL_classzd2defzd2_23, BgL_modulez00_24, BgL_arg2529z00_1412,
							BgL_abstractzf3zf3_27, BgL_defzd2srczd2_28, BgL_declzd2srczd2_29,
							BgL_importz00_25));
				}
			else
				{	/* Module/class.scm 74 */
					obj_t BgL_arg2531z00_1413;

					if (BgL_finalzf3zf3_26)
						{	/* Module/class.scm 74 */
							BgL_arg2531z00_1413 = CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Module/class.scm 74 */
							BgL_arg2531z00_1413 = CNST_TABLE_REF(((long) 2));
						}
					return
						(obj_t) (BGl_declarezd2importzd2classz12z12zzmodule_classz00
						(BGl_importzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2,
							BgL_classzd2defzd2_23, BgL_modulez00_24, BgL_arg2531z00_1413,
							BgL_abstractzf3zf3_27, BgL_defzd2srczd2_28,
							BgL_declzd2srczd2_29));
				}
		}
	}



/* _declare-class! */
	obj_t BGl__declarezd2classz12zc0zzmodule_classz00(obj_t BgL_envz00_1915,
		obj_t BgL_classzd2defzd2_1916, obj_t BgL_modulez00_1917,
		obj_t BgL_importz00_1918, obj_t BgL_finalzf3zf3_1919,
		obj_t BgL_abstractzf3zf3_1920, obj_t BgL_defzd2srczd2_1921,
		obj_t BgL_declzd2srczd2_1922)
	{
		AN_OBJECT;
		{	/* Module/class.scm 72 */
			return
				BGl_declarezd2classz12zc0zzmodule_classz00(BgL_classzd2defzd2_1916,
				BgL_modulez00_1917, BgL_importz00_1918, CBOOL(BgL_finalzf3zf3_1919),
				CBOOL(BgL_abstractzf3zf3_1920), BgL_defzd2srczd2_1921,
				BgL_declzd2srczd2_1922);
		}
	}



/* declare-wide-class! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t
		BgL_classzd2defzd2_30, obj_t BgL_modulez00_31, obj_t BgL_importz00_32,
		obj_t BgL_defzd2srczd2_33, obj_t BgL_declzd2srczd2_34)
	{
		AN_OBJECT;
		{	/* Module/class.scm 90 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_importz00_32,
						CNST_TABLE_REF(((long) 0)))))
				{	/* Module/class.scm 92 */
					return
						(obj_t) (BGl_declarezd2exportzd2classz12z12zzmodule_classz00
						(BGl_genzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2,
							BgL_classzd2defzd2_30, BgL_modulez00_31,
							CNST_TABLE_REF(((long) 3)), ((bool_t) 0), BgL_defzd2srczd2_33,
							BgL_declzd2srczd2_34, BgL_importz00_32));
				}
			else
				{	/* Module/class.scm 92 */
					return
						(obj_t) (BGl_declarezd2importzd2classz12z12zzmodule_classz00
						(BGl_importzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2,
							BgL_classzd2defzd2_30, BgL_modulez00_31,
							CNST_TABLE_REF(((long) 3)), ((bool_t) 0), BgL_defzd2srczd2_33,
							BgL_declzd2srczd2_34));
		}}
	}



/* _declare-wide-class! */
	obj_t BGl__declarezd2widezd2classz12z12zzmodule_classz00(obj_t
		BgL_envz00_1933, obj_t BgL_classzd2defzd2_1934, obj_t BgL_modulez00_1935,
		obj_t BgL_importz00_1936, obj_t BgL_defzd2srczd2_1937,
		obj_t BgL_declzd2srczd2_1938)
	{
		AN_OBJECT;
		{	/* Module/class.scm 90 */
			return
				BGl_declarezd2widezd2classz12z12zzmodule_classz00
				(BgL_classzd2defzd2_1934, BgL_modulez00_1935, BgL_importz00_1936,
				BgL_defzd2srczd2_1937, BgL_declzd2srczd2_1938);
		}
	}



/* declare-export-class! */
	BgL_typez00_bglt BGl_declarezd2exportzd2classz12z12zzmodule_classz00(obj_t
		BgL_genz00_35, obj_t BgL_cdefz00_36, obj_t BgL_modulez00_37,
		obj_t BgL_kindz00_38, bool_t BgL_abstractzf3zf3_39,
		obj_t BgL_srczd2defzd2_40, obj_t BgL_srczd2declzd2_41,
		obj_t BgL_importz00_42)
	{
		AN_OBJECT;
		{	/* Module/class.scm 104 */
			{	/* Module/class.scm 108 */
				obj_t BgL_locz00_591;

				BgL_locz00_591 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2defzd2_40);
				{	/* Module/class.scm 108 */
					obj_t BgL_classzd2varzd2_592;

					BgL_classzd2varzd2_592 = CAR(BgL_cdefz00_36);
					{	/* Module/class.scm 109 */
						obj_t BgL_classzd2idzd2_593;

						BgL_classzd2idzd2_593 =
							BGl_idzd2ofzd2idz00zzast_identz00(BgL_classzd2varzd2_592,
							BgL_locz00_591);
						{	/* Module/class.scm 110 */
							obj_t BgL_holderz00_594;

							{	/* Module/class.scm 112 */
								obj_t BgL_arg2554z00_606;

								{	/* Module/class.scm 112 */
									obj_t BgL_arg2555z00_607;

									{	/* Module/class.scm 112 */
										obj_t BgL_list2556z00_608;

										BgL_list2556z00_608 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2555z00_607 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_classzd2idzd2_593, BgL_list2556z00_608);
									}
									BgL_arg2554z00_606 =
										MAKE_PAIR(BgL_importz00_42, BgL_arg2555z00_607);
								}
								BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
									(BgL_arg2554z00_606);
							}
							BgL_holderz00_594 =
								BGl_findzd2globalzf2modulez20zzast_envz00(BgL_classzd2idzd2_593,
								BgL_modulez00_37);
							{	/* Module/class.scm 111 */
								bool_t BgL_finalzf3zf3_595;

								BgL_finalzf3zf3_595 =
									(BgL_kindz00_38 == CNST_TABLE_REF(((long) 1)));
								{	/* Module/class.scm 114 */
									obj_t BgL_widez00_596;

									if ((BgL_kindz00_38 == CNST_TABLE_REF(((long) 3))))
										{	/* Module/class.scm 115 */
											BgL_widez00_596 = CNST_TABLE_REF(((long) 4));
										}
									else
										{	/* Module/class.scm 115 */
											BgL_widez00_596 = BFALSE;
										}
									{	/* Module/class.scm 115 */
										BgL_typez00_bglt BgL_tclassz00_597;

										BgL_tclassz00_597 =
											BGl_declarezd2classzd2typez12z12zzobject_classz00
											(BgL_cdefz00_36, (BgL_globalz00_bglt) (BgL_holderz00_594),
											BgL_widez00_596, BgL_finalzf3zf3_595,
											BgL_abstractzf3zf3_39, BgL_srczd2defzd2_40);
										{	/* Module/class.scm 116 */

											{
												BgL_globalz00_bglt BgL_auxz00_2057;

												BgL_auxz00_2057 =
													(BgL_globalz00_bglt) (BgL_holderz00_594);
												((((BgL_globalz00_bglt) CREF(BgL_auxz00_2057))->
														BgL_srcz00) =
													((obj_t) BgL_srczd2defzd2_40), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_2060;

												BgL_auxz00_2060 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_srczd2declzd2_41, BgL_locz00_591);
												((((BgL_typez00_bglt) CREF(BgL_tclassz00_597))->
														BgL_importzd2locationzd2) =
													((obj_t) BgL_auxz00_2060), BUNSPEC);
											}
											{	/* Module/class.scm 130 */
												obj_t BgL_arg2544z00_599;

												{	/* Module/class.scm 130 */
													obj_t BgL_zc3anonymousza32551ze3z83_1949;

													BgL_zc3anonymousza32551ze3z83_1949 =
														make_fx_procedure
														(BGl_zc3anonymousza32551ze3z83zzmodule_classz00,
														(int) (((long) 0)), (int) (((long) 6)));
													PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_1949,
														(int) (((long) 0)), BgL_genz00_35);
													PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_1949,
														(int) (((long) 1)), BgL_cdefz00_36);
													PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_1949,
														(int) (((long) 2)), (obj_t) (BgL_tclassz00_597));
													PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_1949,
														(int) (((long) 3)), BgL_srczd2defzd2_40);
													PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_1949,
														(int) (((long) 4)), BgL_importz00_42);
													PROCEDURE_SET(BgL_zc3anonymousza32551ze3z83_1949,
														(int) (((long) 5)), BgL_holderz00_594);
													BgL_arg2544z00_599 =
														BGl_makezd2promisezd2zz__r4_control_features_6_9z00
														(BgL_zc3anonymousza32551ze3z83_1949);
												}
												{	/* Module/class.scm 127 */
													BgL_typez00_bglt BgL_res3121z00_1424;

													{	/* Module/class.scm 127 */
														obj_t BgL_arg2563z00_1423;

														BgL_arg2563z00_1423 =
															MAKE_PAIR(
															(obj_t) (BgL_tclassz00_597), BgL_arg2544z00_599);
														BGl_za2classzd2accessesza2zd2zzmodule_classz00 =
															MAKE_PAIR(BgL_arg2563z00_1423,
															BGl_za2classzd2accessesza2zd2zzmodule_classz00);
													}
													BgL_res3121z00_1424 = BgL_tclassz00_597;
													return BgL_res3121z00_1424;
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



/* <anonymous:2551> */
	obj_t BGl_zc3anonymousza32551ze3z83zzmodule_classz00(obj_t BgL_envz00_1950)
	{
		AN_OBJECT;
		{	/* Module/class.scm 129 */
			{	/* Module/class.scm 130 */
				obj_t BgL_genz00_1951;

				obj_t BgL_cdefz00_1952;

				obj_t BgL_tclassz00_1953;

				obj_t BgL_srczd2defzd2_1954;

				obj_t BgL_importz00_1955;

				obj_t BgL_holderz00_1956;

				BgL_genz00_1951 = PROCEDURE_REF(BgL_envz00_1950, (int) (((long) 0)));
				BgL_cdefz00_1952 = PROCEDURE_REF(BgL_envz00_1950, (int) (((long) 1)));
				BgL_tclassz00_1953 = PROCEDURE_REF(BgL_envz00_1950, (int) (((long) 2)));
				BgL_srczd2defzd2_1954 =
					PROCEDURE_REF(BgL_envz00_1950, (int) (((long) 3)));
				BgL_importz00_1955 = PROCEDURE_REF(BgL_envz00_1950, (int) (((long) 4)));
				BgL_holderz00_1956 = PROCEDURE_REF(BgL_envz00_1950, (int) (((long) 5)));
				{

					{	/* Module/class.scm 130 */
						obj_t BgL_concretesz00_602;

						BgL_concretesz00_602 =
							PROCEDURE_ENTRY(BgL_genz00_1951) (BgL_genz00_1951,
							BgL_cdefz00_1952, BgL_tclassz00_1953, BgL_srczd2defzd2_1954,
							BgL_importz00_1955, BEOA);
						{	/* Module/class.scm 140 */
							obj_t BgL_virtualsz00_603;

							{	/* Module/class.scm 140 */
								int BgL_auxz00_2097;

								BgL_auxz00_2097 = (int) (((long) 1));
								BgL_virtualsz00_603 = BGL_MVALUES_VAL(BgL_auxz00_2097);
							}
							BGl_makezd2addzd2classz12z12zzmodule_classz00(BgL_holderz00_1956,
								BgL_tclassz00_1953, BgL_srczd2defzd2_1954, BgL_virtualsz00_603);
							return BgL_concretesz00_602;
						}
					}
				}
			}
		}
	}



/* declare-import-class! */
	BgL_typez00_bglt BGl_declarezd2importzd2classz12z12zzmodule_classz00(obj_t
		BgL_genz00_43, obj_t BgL_cdefz00_44, obj_t BgL_modulez00_45,
		obj_t BgL_kindz00_46, bool_t BgL_abstractzf3zf3_47,
		obj_t BgL_srczd2defzd2_48, obj_t BgL_srczd2declzd2_49)
	{
		AN_OBJECT;
		{	/* Module/class.scm 145 */
			{	/* Module/class.scm 149 */
				obj_t BgL_locz00_609;

				BgL_locz00_609 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2defzd2_48);
				{	/* Module/class.scm 149 */
					obj_t BgL_classzd2varzd2_610;

					BgL_classzd2varzd2_610 = CAR(BgL_cdefz00_44);
					{	/* Module/class.scm 150 */
						obj_t BgL_classzd2idzd2_611;

						BgL_classzd2idzd2_611 =
							BGl_idzd2ofzd2idz00zzast_identz00(BgL_classzd2varzd2_610,
							BgL_locz00_609);
						{	/* Module/class.scm 151 */
							obj_t BgL_holderz00_612;

							BgL_holderz00_612 =
								BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_45,
								BgL_classzd2idzd2_611, BNIL);
							{	/* Module/class.scm 152 */
								bool_t BgL_finalzf3zf3_613;

								BgL_finalzf3zf3_613 =
									(BgL_kindz00_46 == CNST_TABLE_REF(((long) 1)));
								{	/* Module/class.scm 153 */
									obj_t BgL_widez00_614;

									if ((BgL_kindz00_46 == CNST_TABLE_REF(((long) 3))))
										{	/* Module/class.scm 154 */
											BgL_widez00_614 = CNST_TABLE_REF(((long) 4));
										}
									else
										{	/* Module/class.scm 154 */
											BgL_widez00_614 = BFALSE;
										}
									{	/* Module/class.scm 154 */
										BgL_typez00_bglt BgL_tclassz00_615;

										BgL_tclassz00_615 =
											BGl_declarezd2classzd2typez12z12zzobject_classz00
											(BgL_cdefz00_44, (BgL_globalz00_bglt) (BgL_holderz00_612),
											BgL_widez00_614, BgL_finalzf3zf3_613,
											BgL_abstractzf3zf3_47, BgL_srczd2defzd2_48);
										{	/* Module/class.scm 155 */

											{
												obj_t BgL_auxz00_2113;

												BgL_auxz00_2113 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_srczd2declzd2_49, BgL_locz00_609);
												((((BgL_typez00_bglt) CREF(BgL_tclassz00_615))->
														BgL_importzd2locationzd2) =
													((obj_t) BgL_auxz00_2113), BUNSPEC);
											}
											{	/* Module/class.scm 167 */
												obj_t BgL_arg2558z00_617;

												{	/* Module/class.scm 167 */
													obj_t BgL_zc3anonymousza32560ze3z83_1957;

													BgL_zc3anonymousza32560ze3z83_1957 =
														make_fx_procedure
														(BGl_zc3anonymousza32560ze3z83zzmodule_classz00,
														(int) (((long) 0)), (int) (((long) 5)));
													PROCEDURE_SET(BgL_zc3anonymousza32560ze3z83_1957,
														(int) (((long) 0)), BgL_genz00_43);
													PROCEDURE_SET(BgL_zc3anonymousza32560ze3z83_1957,
														(int) (((long) 1)), BgL_cdefz00_44);
													PROCEDURE_SET(BgL_zc3anonymousza32560ze3z83_1957,
														(int) (((long) 2)), (obj_t) (BgL_tclassz00_615));
													PROCEDURE_SET(BgL_zc3anonymousza32560ze3z83_1957,
														(int) (((long) 3)), BgL_srczd2defzd2_48);
													PROCEDURE_SET(BgL_zc3anonymousza32560ze3z83_1957,
														(int) (((long) 4)), BgL_modulez00_45);
													BgL_arg2558z00_617 =
														BGl_makezd2promisezd2zz__r4_control_features_6_9z00
														(BgL_zc3anonymousza32560ze3z83_1957);
												}
												{	/* Module/class.scm 164 */
													BgL_typez00_bglt BgL_res3122z00_1432;

													{	/* Module/class.scm 164 */
														obj_t BgL_arg2563z00_1431;

														BgL_arg2563z00_1431 =
															MAKE_PAIR(
															(obj_t) (BgL_tclassz00_615), BgL_arg2558z00_617);
														BGl_za2classzd2accessesza2zd2zzmodule_classz00 =
															MAKE_PAIR(BgL_arg2563z00_1431,
															BGl_za2classzd2accessesza2zd2zzmodule_classz00);
													}
													BgL_res3122z00_1432 = BgL_tclassz00_615;
													return BgL_res3122z00_1432;
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



/* <anonymous:2560> */
	obj_t BGl_zc3anonymousza32560ze3z83zzmodule_classz00(obj_t BgL_envz00_1958)
	{
		AN_OBJECT;
		{	/* Module/class.scm 166 */
			{	/* Module/class.scm 167 */
				obj_t BgL_genz00_1959;

				obj_t BgL_cdefz00_1960;

				obj_t BgL_tclassz00_1961;

				obj_t BgL_srczd2defzd2_1962;

				obj_t BgL_modulez00_1963;

				BgL_genz00_1959 = PROCEDURE_REF(BgL_envz00_1958, (int) (((long) 0)));
				BgL_cdefz00_1960 = PROCEDURE_REF(BgL_envz00_1958, (int) (((long) 1)));
				BgL_tclassz00_1961 = PROCEDURE_REF(BgL_envz00_1958, (int) (((long) 2)));
				BgL_srczd2defzd2_1962 =
					PROCEDURE_REF(BgL_envz00_1958, (int) (((long) 3)));
				BgL_modulez00_1963 = PROCEDURE_REF(BgL_envz00_1958, (int) (((long) 4)));
				{

					{	/* Module/class.scm 167 */
						obj_t BgL_concretesz00_620;

						BgL_concretesz00_620 =
							PROCEDURE_ENTRY(BgL_genz00_1959) (BgL_genz00_1959,
							BgL_cdefz00_1960, BgL_tclassz00_1961, BgL_srczd2defzd2_1962,
							BgL_modulez00_1963, BEOA);
						{	/* Module/class.scm 167 */
							obj_t BgL_virtualsz00_621;

							{	/* Module/class.scm 167 */
								int BgL_auxz00_2146;

								BgL_auxz00_2146 = (int) (((long) 1));
								BgL_virtualsz00_621 = BGL_MVALUES_VAL(BgL_auxz00_2146);
							}
							return BgL_concretesz00_620;
						}
					}
				}
			}
		}
	}



/* delay-class-accessors! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt
		BgL_typez00_50, obj_t BgL_delayedz00_51)
	{
		AN_OBJECT;
		{	/* Module/class.scm 174 */
			{	/* Module/class.scm 175 */
				obj_t BgL_arg2563z00_1433;

				BgL_arg2563z00_1433 =
					MAKE_PAIR((obj_t) (BgL_typez00_50), BgL_delayedz00_51);
				BGl_za2classzd2accessesza2zd2zzmodule_classz00 =
					MAKE_PAIR(BgL_arg2563z00_1433,
					BGl_za2classzd2accessesza2zd2zzmodule_classz00);
			}
			return BgL_typez00_50;
		}
	}



/* _delay-class-accessors! */
	obj_t BGl__delayzd2classzd2accessorsz12z12zzmodule_classz00(obj_t
		BgL_envz00_1964, obj_t BgL_typez00_1965, obj_t BgL_delayedz00_1966)
	{
		AN_OBJECT;
		{	/* Module/class.scm 174 */
			return
				(obj_t) (BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(
					(BgL_typez00_bglt) (BgL_typez00_1965), BgL_delayedz00_1966));
		}
	}



/* make-add-class! */
	obj_t BGl_makezd2addzd2classz12z12zzmodule_classz00(obj_t BgL_holderz00_52,
		obj_t BgL_classz00_53, obj_t BgL_srczd2defzd2_54, obj_t BgL_virtualsz00_55)
	{
		AN_OBJECT;
		{	/* Module/class.scm 191 */
			{	/* Module/class.scm 192 */
				obj_t BgL_superz00_626;

				{	/* Module/class.scm 192 */
					BgL_tclassz00_bglt BgL_obj2248z00_1434;

					BgL_obj2248z00_1434 = (BgL_tclassz00_bglt) (BgL_classz00_53);
					{
						obj_t BgL_auxz00_2156;

						{	/* Module/class.scm 192 */
							BgL_objectz00_bglt BgL_auxz00_2157;

							BgL_auxz00_2157 = (BgL_objectz00_bglt) (BgL_obj2248z00_1434);
							BgL_auxz00_2156 = BGL_OBJECT_WIDENING(BgL_auxz00_2157);
						}
						BgL_superz00_626 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2156))->
							BgL_itszd2superzd2);
					}
				}
				{	/* Module/class.scm 192 */
					obj_t BgL_holderzd2idzd2_627;

					{
						BgL_variablez00_bglt BgL_auxz00_2161;

						BgL_auxz00_2161 = (BgL_variablez00_bglt) (BgL_holderz00_52);
						BgL_holderzd2idzd2_627 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2161))->BgL_idz00);
					}
					{	/* Module/class.scm 193 */
						obj_t BgL_classzd2idzd2_628;

						{
							BgL_typez00_bglt BgL_auxz00_2164;

							BgL_auxz00_2164 = (BgL_typez00_bglt) (BgL_classz00_53);
							BgL_classzd2idzd2_628 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_2164))->BgL_idz00);
						}
						{	/* Module/class.scm 194 */
							obj_t BgL_classzd2modulezd2_629;

							{
								BgL_globalz00_bglt BgL_auxz00_2167;

								BgL_auxz00_2167 = (BgL_globalz00_bglt) (BgL_holderz00_52);
								BgL_classzd2modulezd2_629 =
									(((BgL_globalz00_bglt) CREF(BgL_auxz00_2167))->BgL_modulez00);
							}
							{	/* Module/class.scm 195 */
								obj_t BgL_classzd2makezd2idz00_630;

								BgL_classzd2makezd2idz00_630 =
									BGl_classzd2makezd2zzobject_classz00(
									(BgL_tclassz00_bglt) (BgL_classz00_53));
								{	/* Module/class.scm 196 */
									obj_t BgL_classzd2alloczd2idz00_631;

									{	/* Module/class.scm 197 */
										obj_t BgL_arg2758z00_780;

										{	/* Module/class.scm 197 */
											obj_t BgL_arg2759z00_781;

											obj_t BgL_arg2760z00_782;

											{	/* Module/class.scm 197 */
												obj_t BgL_res3123z00_1440;

												{	/* Module/class.scm 197 */
													obj_t BgL_symbolz00_1438;

													BgL_symbolz00_1438 = CNST_TABLE_REF(((long) 5));
													{	/* Module/class.scm 197 */
														obj_t BgL_arg2063z00_1439;

														BgL_arg2063z00_1439 =
															SYMBOL_TO_STRING(BgL_symbolz00_1438);
														BgL_res3123z00_1440 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1439);
												}}
												BgL_arg2759z00_781 = BgL_res3123z00_1440;
											}
											{	/* Module/class.scm 197 */
												obj_t BgL_res3124z00_1443;

												{	/* Module/class.scm 197 */
													obj_t BgL_arg2063z00_1442;

													BgL_arg2063z00_1442 =
														SYMBOL_TO_STRING(BgL_classzd2idzd2_628);
													BgL_res3124z00_1443 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1442);
												}
												BgL_arg2760z00_782 = BgL_res3124z00_1443;
											}
											{	/* Module/class.scm 197 */
												obj_t BgL_list2761z00_783;

												{	/* Module/class.scm 197 */
													obj_t BgL_arg2762z00_784;

													BgL_arg2762z00_784 =
														MAKE_PAIR(BgL_arg2760z00_782, BNIL);
													BgL_list2761z00_783 =
														MAKE_PAIR(BgL_arg2759z00_781, BgL_arg2762z00_784);
												}
												BgL_arg2758z00_780 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2761z00_783);
										}}
										BgL_classzd2alloczd2idz00_631 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2758z00_780));
									}
									{	/* Module/class.scm 197 */
										obj_t BgL_classzd2makezd2_632;

										{	/* Module/class.scm 199 */
											bool_t BgL_testz00_2182;

											{	/* Module/class.scm 199 */
												BgL_tclassz00_bglt BgL_obj2264z00_1445;

												BgL_obj2264z00_1445 =
													(BgL_tclassz00_bglt) (BgL_classz00_53);
												{
													obj_t BgL_auxz00_2184;

													{	/* Module/class.scm 199 */
														BgL_objectz00_bglt BgL_auxz00_2185;

														BgL_auxz00_2185 =
															(BgL_objectz00_bglt) (BgL_obj2264z00_1445);
														BgL_auxz00_2184 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2185);
													}
													BgL_testz00_2182 =
														(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2184))->
														BgL_abstractzf3zf3);
											}}
											if (BgL_testz00_2182)
												{	/* Module/class.scm 200 */
													obj_t BgL_arg2729z00_753;

													obj_t BgL_arg2730z00_754;

													BgL_arg2729z00_753 = CNST_TABLE_REF(((long) 6));
													{	/* Module/class.scm 200 */
														obj_t BgL_arg2731z00_755;

														obj_t BgL_arg2732z00_756;

														BgL_arg2731z00_755 =
															MAKE_PAIR(CNST_TABLE_REF(((long) 7)), BNIL);
														{	/* Module/class.scm 201 */
															obj_t BgL_arg2736z00_760;

															obj_t BgL_arg2737z00_761;

															BgL_arg2736z00_760 = CNST_TABLE_REF(((long) 8));
															{	/* Module/class.scm 202 */
																obj_t BgL_arg2738z00_762;

																obj_t BgL_arg2740z00_764;

																{	/* Module/class.scm 202 */
																	obj_t BgL_arg2746z00_769;

																	obj_t BgL_arg2747z00_770;

																	BgL_arg2746z00_769 =
																		CNST_TABLE_REF(((long) 9));
																	{	/* Module/class.scm 202 */
																		obj_t BgL_list2748z00_771;

																		BgL_list2748z00_771 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2747z00_770 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_classzd2idzd2_628,
																			BgL_list2748z00_771);
																	}
																	BgL_arg2738z00_762 =
																		MAKE_PAIR(BgL_arg2746z00_769,
																		BgL_arg2747z00_770);
																}
																{	/* Module/class.scm 204 */
																	obj_t BgL_arg2749z00_772;

																	obj_t BgL_arg2750z00_773;

																	BgL_arg2749z00_772 =
																		CNST_TABLE_REF(((long) 9));
																	{	/* Module/class.scm 204 */
																		obj_t BgL_list2751z00_774;

																		BgL_list2751z00_774 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2750z00_773 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_classzd2idzd2_628,
																			BgL_list2751z00_774);
																	}
																	BgL_arg2740z00_764 =
																		MAKE_PAIR(BgL_arg2749z00_772,
																		BgL_arg2750z00_773);
																}
																{	/* Module/class.scm 201 */
																	obj_t BgL_list2742z00_766;

																	{	/* Module/class.scm 201 */
																		obj_t BgL_arg2743z00_767;

																		{	/* Module/class.scm 201 */
																			obj_t BgL_arg2745z00_768;

																			BgL_arg2745z00_768 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2743z00_767 =
																				MAKE_PAIR(BgL_arg2740z00_764,
																				BgL_arg2745z00_768);
																		}
																		BgL_list2742z00_766 =
																			MAKE_PAIR
																			(BGl_string3149z00zzmodule_classz00,
																			BgL_arg2743z00_767);
																	}
																	BgL_arg2737z00_761 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2738z00_762, BgL_list2742z00_766);
															}}
															BgL_arg2732z00_756 =
																MAKE_PAIR(BgL_arg2736z00_760,
																BgL_arg2737z00_761);
														}
														{	/* Module/class.scm 200 */
															obj_t BgL_list2734z00_758;

															{	/* Module/class.scm 200 */
																obj_t BgL_arg2735z00_759;

																BgL_arg2735z00_759 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2734z00_758 =
																	MAKE_PAIR(BgL_arg2732z00_756,
																	BgL_arg2735z00_759);
															}
															BgL_arg2730z00_754 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2731z00_755, BgL_list2734z00_758);
													}}
													BgL_classzd2makezd2_632 =
														MAKE_PAIR(BgL_arg2729z00_753, BgL_arg2730z00_754);
												}
											else
												{	/* Module/class.scm 199 */
													if (CBOOL
														(BGl_za2reflectionzf3za2zf3zzengine_paramz00))
														{	/* Module/class.scm 205 */
															if (SYMBOLP(BgL_classzd2makezd2idz00_630))
																{	/* Module/class.scm 212 */
																	obj_t BgL_arg2753z00_776;

																	obj_t BgL_arg2754z00_777;

																	BgL_arg2753z00_776 =
																		CNST_TABLE_REF(((long) 10));
																	{	/* Module/class.scm 212 */
																		obj_t BgL_list2755z00_778;

																		{	/* Module/class.scm 212 */
																			obj_t BgL_arg2756z00_779;

																			BgL_arg2756z00_779 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2755z00_778 =
																				MAKE_PAIR(BgL_classzd2modulezd2_629,
																				BgL_arg2756z00_779);
																		}
																		BgL_arg2754z00_777 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_classzd2makezd2idz00_630,
																			BgL_list2755z00_778);
																	}
																	BgL_classzd2makezd2_632 =
																		MAKE_PAIR(BgL_arg2753z00_776,
																		BgL_arg2754z00_777);
																}
															else
																{	/* Module/class.scm 207 */
																	BgL_classzd2makezd2_632 =
																		BGl_internalzd2errorzd2zztools_errorz00
																		(BGl_string3150z00zzmodule_classz00,
																		BGl_string3151z00zzmodule_classz00,
																		BgL_classzd2makezd2idz00_630);
																}
														}
													else
														{	/* Module/class.scm 205 */
															BgL_classzd2makezd2_632 = BFALSE;
														}
												}
										}
										{	/* Module/class.scm 198 */
											obj_t BgL_classzd2nilzd2_633;

											{	/* Module/class.scm 213 */
												obj_t BgL_arg2722z00_747;

												{	/* Module/class.scm 213 */
													obj_t BgL_arg2724z00_748;

													obj_t BgL_arg2725z00_749;

													{	/* Module/class.scm 213 */
														obj_t BgL_res3125z00_1449;

														{	/* Module/class.scm 213 */
															obj_t BgL_arg2063z00_1448;

															BgL_arg2063z00_1448 =
																SYMBOL_TO_STRING(BgL_classzd2idzd2_628);
															BgL_res3125z00_1449 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_1448);
														}
														BgL_arg2724z00_748 = BgL_res3125z00_1449;
													}
													{	/* Module/class.scm 213 */
														obj_t BgL_res3126z00_1452;

														{	/* Module/class.scm 213 */
															obj_t BgL_symbolz00_1450;

															BgL_symbolz00_1450 = CNST_TABLE_REF(((long) 11));
															{	/* Module/class.scm 213 */
																obj_t BgL_arg2063z00_1451;

																BgL_arg2063z00_1451 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1450);
																BgL_res3126z00_1452 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1451);
														}}
														BgL_arg2725z00_749 = BgL_res3126z00_1452;
													}
													{	/* Module/class.scm 213 */
														obj_t BgL_list2726z00_750;

														{	/* Module/class.scm 213 */
															obj_t BgL_arg2727z00_751;

															BgL_arg2727z00_751 =
																MAKE_PAIR(BgL_arg2725z00_749, BNIL);
															BgL_list2726z00_750 =
																MAKE_PAIR(BgL_arg2724z00_748,
																BgL_arg2727z00_751);
														}
														BgL_arg2722z00_747 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2726z00_750);
												}}
												BgL_classzd2nilzd2_633 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2722z00_747));
											}
											{	/* Module/class.scm 213 */
												obj_t BgL_classzd2predzd2_634;

												BgL_classzd2predzd2_634 =
													BGl_classzd2predicatezd2zzobject_classz00(
													(BgL_tclassz00_bglt) (BgL_classz00_53));
												{	/* Module/class.scm 214 */
													obj_t BgL_classzd2alloczd2_635;

													{	/* Module/class.scm 215 */
														bool_t BgL_testz00_2232;

														{	/* Module/class.scm 215 */
															BgL_tclassz00_bglt BgL_obj2264z00_1454;

															BgL_obj2264z00_1454 =
																(BgL_tclassz00_bglt) (BgL_classz00_53);
															{
																obj_t BgL_auxz00_2234;

																{	/* Module/class.scm 215 */
																	BgL_objectz00_bglt BgL_auxz00_2235;

																	BgL_auxz00_2235 =
																		(BgL_objectz00_bglt) (BgL_obj2264z00_1454);
																	BgL_auxz00_2234 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2235);
																}
																BgL_testz00_2232 =
																	(((BgL_tclassz00_bglt)
																		CREF(BgL_auxz00_2234))->BgL_abstractzf3zf3);
														}}
														if (BgL_testz00_2232)
															{	/* Module/class.scm 216 */
																obj_t BgL_arg2695z00_721;

																obj_t BgL_arg2696z00_722;

																BgL_arg2695z00_721 = CNST_TABLE_REF(((long) 6));
																{	/* Module/class.scm 216 */
																	obj_t BgL_arg2697z00_723;

																	obj_t BgL_arg2698z00_724;

																	BgL_arg2697z00_723 =
																		MAKE_PAIR(CNST_TABLE_REF(((long) 7)), BNIL);
																	{	/* Module/class.scm 217 */
																		obj_t BgL_arg2702z00_728;

																		obj_t BgL_arg2703z00_729;

																		BgL_arg2702z00_728 =
																			CNST_TABLE_REF(((long) 8));
																		{	/* Module/class.scm 218 */
																			obj_t BgL_arg2704z00_730;

																			obj_t BgL_arg2706z00_732;

																			{	/* Module/class.scm 218 */
																				obj_t BgL_arg2711z00_737;

																				obj_t BgL_arg2712z00_738;

																				BgL_arg2711z00_737 =
																					CNST_TABLE_REF(((long) 9));
																				{	/* Module/class.scm 218 */
																					obj_t BgL_list2713z00_739;

																					BgL_list2713z00_739 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2712z00_738 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_classzd2alloczd2idz00_631,
																						BgL_list2713z00_739);
																				}
																				BgL_arg2704z00_730 =
																					MAKE_PAIR(BgL_arg2711z00_737,
																					BgL_arg2712z00_738);
																			}
																			{	/* Module/class.scm 220 */
																				obj_t BgL_arg2714z00_740;

																				obj_t BgL_arg2716z00_741;

																				BgL_arg2714z00_740 =
																					CNST_TABLE_REF(((long) 9));
																				{	/* Module/class.scm 220 */
																					obj_t BgL_list2717z00_742;

																					BgL_list2717z00_742 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2716z00_741 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_classzd2idzd2_628,
																						BgL_list2717z00_742);
																				}
																				BgL_arg2706z00_732 =
																					MAKE_PAIR(BgL_arg2714z00_740,
																					BgL_arg2716z00_741);
																			}
																			{	/* Module/class.scm 217 */
																				obj_t BgL_list2708z00_734;

																				{	/* Module/class.scm 217 */
																					obj_t BgL_arg2709z00_735;

																					{	/* Module/class.scm 217 */
																						obj_t BgL_arg2710z00_736;

																						BgL_arg2710z00_736 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2709z00_735 =
																							MAKE_PAIR(BgL_arg2706z00_732,
																							BgL_arg2710z00_736);
																					}
																					BgL_list2708z00_734 =
																						MAKE_PAIR
																						(BGl_string3152z00zzmodule_classz00,
																						BgL_arg2709z00_735);
																				}
																				BgL_arg2703z00_729 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2704z00_730,
																					BgL_list2708z00_734);
																		}}
																		BgL_arg2698z00_724 =
																			MAKE_PAIR(BgL_arg2702z00_728,
																			BgL_arg2703z00_729);
																	}
																	{	/* Module/class.scm 216 */
																		obj_t BgL_list2700z00_726;

																		{	/* Module/class.scm 216 */
																			obj_t BgL_arg2701z00_727;

																			BgL_arg2701z00_727 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2700z00_726 =
																				MAKE_PAIR(BgL_arg2698z00_724,
																				BgL_arg2701z00_727);
																		}
																		BgL_arg2696z00_722 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2697z00_723, BgL_list2700z00_726);
																}}
																BgL_classzd2alloczd2_635 =
																	MAKE_PAIR(BgL_arg2695z00_721,
																	BgL_arg2696z00_722);
															}
														else
															{	/* Module/class.scm 221 */
																obj_t BgL_arg2718z00_743;

																obj_t BgL_arg2719z00_744;

																BgL_arg2718z00_743 =
																	CNST_TABLE_REF(((long) 10));
																{	/* Module/class.scm 221 */
																	obj_t BgL_list2720z00_745;

																	{	/* Module/class.scm 221 */
																		obj_t BgL_arg2721z00_746;

																		BgL_arg2721z00_746 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2720z00_745 =
																			MAKE_PAIR(BgL_classzd2modulezd2_629,
																			BgL_arg2721z00_746);
																	}
																	BgL_arg2719z00_744 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_classzd2alloczd2idz00_631,
																		BgL_list2720z00_745);
																}
																BgL_classzd2alloczd2_635 =
																	MAKE_PAIR(BgL_arg2718z00_743,
																	BgL_arg2719z00_744);
													}}
													{	/* Module/class.scm 215 */
														obj_t BgL_hashz00_636;

														{	/* Module/class.scm 222 */
															obj_t BgL_arg2693z00_719;

															{	/* Module/class.scm 222 */
																obj_t BgL_pairz00_1455;

																BgL_pairz00_1455 = BgL_srczd2defzd2_54;
																BgL_arg2693z00_719 = CDR(CDR(BgL_pairz00_1455));
															}
															BgL_hashz00_636 =
																BGl_getzd2classzd2hashz00zzmodule_classz00
																(BgL_classzd2idzd2_628, BgL_arg2693z00_719);
														}
														{	/* Module/class.scm 222 */
															obj_t BgL_constrz00_637;

															{	/* Module/class.scm 223 */
																BgL_tclassz00_bglt BgL_obj2260z00_1459;

																BgL_obj2260z00_1459 =
																	(BgL_tclassz00_bglt) (BgL_classz00_53);
																{
																	obj_t BgL_auxz00_2269;

																	{	/* Module/class.scm 223 */
																		BgL_objectz00_bglt BgL_auxz00_2270;

																		BgL_auxz00_2270 =
																			(BgL_objectz00_bglt)
																			(BgL_obj2260z00_1459);
																		BgL_auxz00_2269 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_2270);
																	}
																	BgL_constrz00_637 =
																		(((BgL_tclassz00_bglt)
																			CREF(BgL_auxz00_2269))->
																		BgL_constructorz00);
															}}
															{	/* Module/class.scm 223 */
																obj_t BgL_locz00_638;

																BgL_locz00_638 =
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_srczd2defzd2_54);
																{	/* Module/class.scm 224 */
																	obj_t BgL_fieldsz00_639;

																	if (CBOOL
																		(BGl_za2reflectionzf3za2zf3zzengine_paramz00))
																		{	/* Module/class.scm 226 */
																			obj_t BgL_arg2692z00_718;

																			{	/* Module/class.scm 226 */
																				obj_t BgL_pairz00_1460;

																				BgL_pairz00_1460 = BgL_srczd2defzd2_54;
																				BgL_arg2692z00_718 =
																					CDR(CDR(BgL_pairz00_1460));
																			}
																			BgL_fieldsz00_639 =
																				BGl_makezd2classzd2fieldsz00zzmodule_classz00
																				(BgL_classzd2idzd2_628,
																				BgL_arg2692z00_718, BgL_locz00_638);
																		}
																	else
																		{	/* Module/class.scm 225 */
																			BgL_fieldsz00_639 = BFALSE;
																		}
																	{	/* Module/class.scm 225 */
																		obj_t BgL_superzd2classzd2_640;

																		if (BGl_iszd2azf3z21zz__objectz00
																			(BgL_superz00_626,
																				BGl_tclassz00zzobject_classz00))
																			{	/* Module/class.scm 230 */
																				BgL_globalz00_bglt BgL_sholderz00_711;

																				{	/* Module/class.scm 230 */
																					BgL_tclassz00_bglt
																						BgL_obj2254z00_1465;
																					BgL_obj2254z00_1465 =
																						(BgL_tclassz00_bglt)
																						(BgL_superz00_626);
																					{
																						obj_t BgL_auxz00_2283;

																						{	/* Module/class.scm 230 */
																							BgL_objectz00_bglt
																								BgL_auxz00_2284;
																							BgL_auxz00_2284 =
																								(BgL_objectz00_bglt)
																								(BgL_obj2254z00_1465);
																							BgL_auxz00_2283 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_2284);
																						}
																						BgL_sholderz00_711 =
																							(((BgL_tclassz00_bglt)
																								CREF(BgL_auxz00_2283))->
																							BgL_holderz00);
																					}
																				}
																				{	/* Module/class.scm 230 */
																					obj_t BgL_sholderzd2idzd2_712;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2288;
																						BgL_auxz00_2288 =
																							(BgL_variablez00_bglt)
																							(BgL_sholderz00_711);
																						BgL_sholderzd2idzd2_712 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_2288))->
																							BgL_idz00);
																					}
																					{	/* Module/class.scm 231 */
																						obj_t BgL_sholderzd2modulezd2_713;

																						BgL_sholderzd2modulezd2_713 =
																							(((BgL_globalz00_bglt)
																								CREF(BgL_sholderz00_711))->
																							BgL_modulez00);
																						{	/* Module/class.scm 232 */

																							{	/* Module/class.scm 233 */
																								obj_t BgL_arg2688z00_714;

																								obj_t BgL_arg2689z00_715;

																								BgL_arg2688z00_714 =
																									CNST_TABLE_REF(((long) 10));
																								{	/* Module/class.scm 233 */
																									obj_t BgL_list2690z00_716;

																									{	/* Module/class.scm 233 */
																										obj_t BgL_arg2691z00_717;

																										BgL_arg2691z00_717 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2690z00_716 =
																											MAKE_PAIR
																											(BgL_sholderzd2modulezd2_713,
																											BgL_arg2691z00_717);
																									}
																									BgL_arg2689z00_715 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_sholderzd2idzd2_712,
																										BgL_list2690z00_716);
																								}
																								BgL_superzd2classzd2_640 =
																									MAKE_PAIR(BgL_arg2688z00_714,
																									BgL_arg2689z00_715);
																			}}}}}
																		else
																			{	/* Module/class.scm 228 */
																				BgL_superzd2classzd2_640 = BFALSE;
																			}
																		{	/* Module/class.scm 228 */

																			{	/* Module/class.scm 235 */
																				obj_t BgL_declz00_641;

																				{	/* Module/class.scm 235 */
																					obj_t BgL_arg2572z00_647;

																					obj_t BgL_arg2576z00_648;

																					BgL_arg2572z00_647 =
																						CNST_TABLE_REF(((long) 12));
																					{	/* Module/class.scm 236 */
																						obj_t BgL_arg2586z00_649;

																						{	/* Module/class.scm 236 */
																							obj_t BgL_arg2590z00_653;

																							obj_t BgL_arg2594z00_654;

																							{	/* Module/class.scm 236 */
																								obj_t BgL_arg2595z00_655;

																								obj_t BgL_arg2602z00_656;

																								BgL_arg2595z00_655 =
																									CNST_TABLE_REF(((long) 10));
																								{	/* Module/class.scm 236 */
																									obj_t BgL_list2603z00_657;

																									{	/* Module/class.scm 236 */
																										obj_t BgL_arg2608z00_658;

																										obj_t BgL_arg2615z00_659;

																										BgL_arg2608z00_658 =
																											CNST_TABLE_REF(((long)
																												13));
																										BgL_arg2615z00_659 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2603z00_657 =
																											MAKE_PAIR
																											(BgL_arg2608z00_658,
																											BgL_arg2615z00_659);
																									}
																									BgL_arg2602z00_656 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												14)),
																										BgL_list2603z00_657);
																								}
																								BgL_arg2590z00_653 =
																									MAKE_PAIR(BgL_arg2595z00_655,
																									BgL_arg2602z00_656);
																							}
																							{	/* Module/class.scm 237 */
																								obj_t BgL_arg2621z00_660;

																								bool_t BgL_arg2628z00_661;

																								obj_t BgL_arg2629z00_662;

																								{	/* Module/class.scm 237 */
																									obj_t BgL_arg2659z00_675;

																									obj_t BgL_arg2660z00_676;

																									BgL_arg2659z00_675 =
																										CNST_TABLE_REF(((long) 9));
																									{	/* Module/class.scm 237 */
																										obj_t BgL_list2661z00_677;

																										BgL_list2661z00_677 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2660z00_676 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_classzd2idzd2_628,
																											BgL_list2661z00_677);
																									}
																									BgL_arg2621z00_660 =
																										MAKE_PAIR
																										(BgL_arg2659z00_675,
																										BgL_arg2660z00_676);
																								}
																								{	/* Module/class.scm 237 */
																									BgL_tclassz00_bglt
																										BgL_obj2264z00_1468;
																									BgL_obj2264z00_1468 =
																										(BgL_tclassz00_bglt)
																										(BgL_classz00_53);
																									{
																										obj_t BgL_auxz00_2310;

																										{	/* Module/class.scm 237 */
																											BgL_objectz00_bglt
																												BgL_auxz00_2311;
																											BgL_auxz00_2311 =
																												(BgL_objectz00_bglt)
																												(BgL_obj2264z00_1468);
																											BgL_auxz00_2310 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_2311);
																										}
																										BgL_arg2628z00_661 =
																											(((BgL_tclassz00_bglt)
																												CREF(BgL_auxz00_2310))->
																											BgL_abstractzf3zf3);
																								}}
																								{	/* Module/class.scm 240 */
																									obj_t BgL_arg2663z00_678;

																									obj_t BgL_arg2664z00_679;

																									BgL_arg2663z00_678 =
																										CNST_TABLE_REF(((long) 15));
																									{	/* Module/class.scm 240 */
																										obj_t BgL_arg2665z00_680;

																										if (NULLP
																											(BgL_virtualsz00_55))
																											{	/* Module/class.scm 240 */
																												BgL_arg2665z00_680 =
																													BNIL;
																											}
																										else
																											{	/* Module/class.scm 240 */
																												obj_t
																													BgL_head2468z00_684;
																												BgL_head2468z00_684 =
																													MAKE_PAIR(BNIL, BNIL);
																												{
																													obj_t
																														BgL_l2466z00_686;
																													obj_t
																														BgL_tail2469z00_687;
																													BgL_l2466z00_686 =
																														BgL_virtualsz00_55;
																													BgL_tail2469z00_687 =
																														BgL_head2468z00_684;
																												BgL_zc3anonymousza32668ze3z83_688:
																													if (NULLP
																														(BgL_l2466z00_686))
																														{	/* Module/class.scm 240 */
																															BgL_arg2665z00_680
																																=
																																CDR
																																(BgL_head2468z00_684);
																														}
																													else
																														{	/* Module/class.scm 240 */
																															obj_t
																																BgL_newtail2470z00_690;
																															{	/* Module/class.scm 240 */
																																obj_t
																																	BgL_arg2671z00_692;
																																{	/* Module/class.scm 240 */
																																	obj_t
																																		BgL_vz00_694;
																																	BgL_vz00_694 =
																																		CAR
																																		(BgL_l2466z00_686);
																																	{	/* Module/class.scm 241 */
																																		obj_t
																																			BgL_arg2673z00_695;
																																		obj_t
																																			BgL_arg2674z00_696;
																																		BgL_arg2673z00_695
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				16));
																																		{	/* Module/class.scm 241 */
																																			obj_t
																																				BgL_arg2675z00_697;
																																			obj_t
																																				BgL_arg2676z00_698;
																																			BgL_arg2675z00_697
																																				=
																																				CAR
																																				(BgL_vz00_694);
																																			{	/* Module/class.scm 242 */
																																				obj_t
																																					BgL_arg2680z00_702;
																																				obj_t
																																					BgL_arg2681z00_703;
																																				BgL_arg2680z00_702
																																					=
																																					CNST_TABLE_REF
																																					(((long) 16));
																																				{	/* Module/class.scm 242 */
																																					obj_t
																																						BgL_arg2682z00_704;
																																					obj_t
																																						BgL_arg2683z00_705;
																																					{	/* Module/class.scm 242 */
																																						obj_t
																																							BgL_pairz00_1476;
																																						BgL_pairz00_1476
																																							=
																																							BgL_vz00_694;
																																						BgL_arg2682z00_704
																																							=
																																							CAR
																																							(CDR
																																							(BgL_pairz00_1476));
																																					}
																																					{	/* Module/class.scm 243 */
																																						obj_t
																																							BgL_pairz00_1480;
																																						BgL_pairz00_1480
																																							=
																																							BgL_vz00_694;
																																						BgL_arg2683z00_705
																																							=
																																							CAR
																																							(CDR
																																							(CDR
																																								(BgL_pairz00_1480)));
																																					}
																																					{	/* Module/class.scm 242 */
																																						obj_t
																																							BgL_list2685z00_707;
																																						{	/* Module/class.scm 242 */
																																							obj_t
																																								BgL_arg2686z00_708;
																																							BgL_arg2686z00_708
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_list2685z00_707
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2683z00_705,
																																								BgL_arg2686z00_708);
																																						}
																																						BgL_arg2681z00_703
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_arg2682z00_704,
																																							BgL_list2685z00_707);
																																				}}
																																				BgL_arg2676z00_698
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2680z00_702,
																																					BgL_arg2681z00_703);
																																			}
																																			{	/* Module/class.scm 241 */
																																				obj_t
																																					BgL_list2678z00_700;
																																				{	/* Module/class.scm 241 */
																																					obj_t
																																						BgL_arg2679z00_701;
																																					BgL_arg2679z00_701
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list2678z00_700
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2676z00_698,
																																						BgL_arg2679z00_701);
																																				}
																																				BgL_arg2674z00_696
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg2675z00_697,
																																					BgL_list2678z00_700);
																																		}}
																																		BgL_arg2671z00_692
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2673z00_695,
																																			BgL_arg2674z00_696);
																																}}
																																BgL_newtail2470z00_690
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2671z00_692,
																																	BNIL);
																															}
																															SET_CDR
																																(BgL_tail2469z00_687,
																																BgL_newtail2470z00_690);
																															{
																																obj_t
																																	BgL_tail2469z00_2343;
																																obj_t
																																	BgL_l2466z00_2341;
																																BgL_l2466z00_2341
																																	=
																																	CDR
																																	(BgL_l2466z00_686);
																																BgL_tail2469z00_2343
																																	=
																																	BgL_newtail2470z00_690;
																																BgL_tail2469z00_687
																																	=
																																	BgL_tail2469z00_2343;
																																BgL_l2466z00_686
																																	=
																																	BgL_l2466z00_2341;
																																goto
																																	BgL_zc3anonymousza32668ze3z83_688;
																															}
																														}
																												}
																											}
																										BgL_arg2664z00_679 =
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2665z00_680,
																											BNIL);
																									}
																									BgL_arg2629z00_662 =
																										MAKE_PAIR
																										(BgL_arg2663z00_678,
																										BgL_arg2664z00_679);
																								}
																								{	/* Module/class.scm 236 */
																									obj_t BgL_list2631z00_664;

																									{	/* Module/class.scm 236 */
																										obj_t BgL_arg2642z00_665;

																										{	/* Module/class.scm 236 */
																											obj_t BgL_arg2648z00_666;

																											{	/* Module/class.scm 236 */
																												obj_t
																													BgL_arg2649z00_667;
																												{	/* Module/class.scm 236 */
																													obj_t
																														BgL_arg2650z00_668;
																													{	/* Module/class.scm 236 */
																														obj_t
																															BgL_arg2651z00_669;
																														{	/* Module/class.scm 236 */
																															obj_t
																																BgL_arg2652z00_670;
																															{	/* Module/class.scm 236 */
																																obj_t
																																	BgL_arg2655z00_671;
																																{	/* Module/class.scm 236 */
																																	obj_t
																																		BgL_arg2656z00_672;
																																	{	/* Module/class.scm 236 */
																																		obj_t
																																			BgL_arg2657z00_673;
																																		{	/* Module/class.scm 236 */
																																			obj_t
																																				BgL_arg2658z00_674;
																																			BgL_arg2658z00_674
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2657z00_673
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2629z00_662,
																																				BgL_arg2658z00_674);
																																		}
																																		BgL_arg2656z00_672
																																			=
																																			MAKE_PAIR
																																			(BgL_constrz00_637,
																																			BgL_arg2657z00_673);
																																	}
																																	BgL_arg2655z00_671
																																		=
																																		MAKE_PAIR
																																		(BgL_fieldsz00_639,
																																		BgL_arg2656z00_672);
																																}
																																BgL_arg2652z00_670
																																	=
																																	MAKE_PAIR
																																	(BgL_hashz00_636,
																																	BgL_arg2655z00_671);
																															}
																															BgL_arg2651z00_669
																																=
																																MAKE_PAIR
																																(BgL_classzd2predzd2_634,
																																BgL_arg2652z00_670);
																														}
																														BgL_arg2650z00_668 =
																															MAKE_PAIR
																															(BgL_classzd2nilzd2_633,
																															BgL_arg2651z00_669);
																													}
																													BgL_arg2649z00_667 =
																														MAKE_PAIR
																														(BgL_classzd2alloczd2_635,
																														BgL_arg2650z00_668);
																												}
																												BgL_arg2648z00_666 =
																													MAKE_PAIR
																													(BgL_classzd2makezd2_632,
																													BgL_arg2649z00_667);
																											}
																											BgL_arg2642z00_665 =
																												MAKE_PAIR(BBOOL
																												(BgL_arg2628z00_661),
																												BgL_arg2648z00_666);
																										}
																										BgL_list2631z00_664 =
																											MAKE_PAIR
																											(BgL_superzd2classzd2_640,
																											BgL_arg2642z00_665);
																									}
																									BgL_arg2594z00_654 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2621z00_660,
																										BgL_list2631z00_664);
																								}
																							}
																							BgL_arg2586z00_649 =
																								MAKE_PAIR(BgL_arg2590z00_653,
																								BgL_arg2594z00_654);
																						}
																						{	/* Module/class.scm 235 */
																							obj_t BgL_list2588z00_651;

																							{	/* Module/class.scm 235 */
																								obj_t BgL_arg2589z00_652;

																								BgL_arg2589z00_652 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2588z00_651 =
																									MAKE_PAIR(BgL_arg2586z00_649,
																									BgL_arg2589z00_652);
																							}
																							BgL_arg2576z00_648 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_holderzd2idzd2_627,
																								BgL_list2588z00_651);
																						}
																					}
																					BgL_declz00_641 =
																						MAKE_PAIR(BgL_arg2572z00_647,
																						BgL_arg2576z00_648);
																				}
																				{	/* Module/class.scm 246 */
																					obj_t BgL_loczd2declzd2_642;

																					if (EXTENDED_PAIRP
																						(BgL_srczd2defzd2_54))
																						{	/* Module/class.scm 247 */
																							obj_t BgL_arg2565z00_644;

																							obj_t BgL_arg2566z00_645;

																							obj_t BgL_arg2571z00_646;

																							BgL_arg2565z00_644 =
																								CAR(BgL_declz00_641);
																							BgL_arg2566z00_645 =
																								CDR(BgL_declz00_641);
																							BgL_arg2571z00_646 =
																								CER(BgL_srczd2defzd2_54);
																							{	/* Module/class.scm 247 */
																								obj_t BgL_res3127z00_1498;

																								BgL_res3127z00_1498 =
																									MAKE_EXTENDED_PAIR
																									(BgL_arg2565z00_644,
																									BgL_arg2566z00_645,
																									BgL_arg2571z00_646);
																								BgL_loczd2declzd2_642 =
																									BgL_res3127z00_1498;
																							}
																						}
																					else
																						{	/* Module/class.scm 246 */
																							BgL_loczd2declzd2_642 =
																								BgL_declz00_641;
																						}
																					return
																						(BGl_za2declaredzd2classesza2zd2zzmodule_classz00
																						=
																						MAKE_PAIR(BgL_loczd2declzd2_642,
																							BGl_za2declaredzd2classesza2zd2zzmodule_classz00),
																						BUNSPEC);
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
					}
				}
			}
		}
	}



/* get-class-hash */
	BGL_EXPORTED_DEF obj_t BGl_getzd2classzd2hashz00zzmodule_classz00(obj_t
		BgL_classzd2idzd2_56, obj_t BgL_fieldsz00_57)
	{
		AN_OBJECT;
		{	/* Module/class.scm 254 */
			{	/* Module/class.scm 255 */
				long BgL_g2462z00_785;

				BgL_g2462z00_785 =
					BGl_getzd2hashnumberzd2zz__hashz00(BgL_classzd2idzd2_56);
				{
					obj_t BgL_fieldsz00_787;

					long BgL_hashz00_788;

					BgL_fieldsz00_787 = BgL_fieldsz00_57;
					BgL_hashz00_788 = BgL_g2462z00_785;
				BgL_zc3anonymousza32763ze3z83_789:
					if (NULLP(BgL_fieldsz00_787))
						{	/* Module/class.scm 257 */
							return BINT(BgL_hashz00_788);
						}
					else
						{	/* Module/class.scm 259 */
							obj_t BgL_fieldz00_791;

							BgL_fieldz00_791 = CAR(BgL_fieldsz00_787);
							{

								if (PAIRP(BgL_fieldz00_791))
									{	/* Module/class.scm 260 */
										if (NULLP(CDR(BgL_fieldz00_791)))
											{	/* Module/class.scm 260 */
												{
													long BgL_hashz00_2383;

													obj_t BgL_fieldsz00_2381;

													BgL_fieldsz00_2381 = CDR(BgL_fieldsz00_787);
													BgL_hashz00_2383 = (BgL_hashz00_788 ^ ((long) 2344));
													BgL_hashz00_788 = BgL_hashz00_2383;
													BgL_fieldsz00_787 = BgL_fieldsz00_2381;
													goto BgL_zc3anonymousza32763ze3z83_789;
												}
											}
										else
											{	/* Module/class.scm 260 */
												obj_t BgL_cdrzd21663zd2_804;

												BgL_cdrzd21663zd2_804 = CDR(BgL_fieldz00_791);
												if (
													(CAR(BgL_fieldz00_791) ==
														CNST_TABLE_REF(((long) 17))))
													{	/* Module/class.scm 260 */
														if (PAIRP(BgL_cdrzd21663zd2_804))
															{	/* Module/class.scm 260 */
																obj_t BgL_carzd21666zd2_807;

																BgL_carzd21666zd2_807 =
																	CAR(BgL_cdrzd21663zd2_804);
																if (SYMBOLP(BgL_carzd21666zd2_807))
																	{	/* Module/class.scm 260 */
																		obj_t BgL_idz00_1511;

																		BgL_idz00_1511 = BgL_carzd21666zd2_807;
																		{
																			long BgL_hashz00_2397;

																			obj_t BgL_fieldsz00_2395;

																			BgL_fieldsz00_2395 =
																				CDR(BgL_fieldsz00_787);
																			BgL_hashz00_2397 =
																				(BgL_hashz00_788 ^
																				BGl_getzd2hashnumberzd2zz__hashz00
																				(BgL_idz00_1511));
																			BgL_hashz00_788 = BgL_hashz00_2397;
																			BgL_fieldsz00_787 = BgL_fieldsz00_2395;
																			goto BgL_zc3anonymousza32763ze3z83_789;
																		}
																	}
																else
																	{	/* Module/class.scm 260 */
																		obj_t BgL_carzd21675zd2_810;

																		BgL_carzd21675zd2_810 =
																			CAR(BgL_fieldz00_791);
																		if (SYMBOLP(BgL_carzd21675zd2_810))
																			{	/* Module/class.scm 260 */
																				obj_t BgL_idz00_1522;

																				BgL_idz00_1522 = BgL_carzd21675zd2_810;
																				{
																					long BgL_hashz00_2405;

																					obj_t BgL_fieldsz00_2403;

																					BgL_fieldsz00_2403 =
																						CDR(BgL_fieldsz00_787);
																					BgL_hashz00_2405 =
																						(BgL_hashz00_788 ^
																						BGl_getzd2hashnumberzd2zz__hashz00
																						(BgL_idz00_1522));
																					BgL_hashz00_788 = BgL_hashz00_2405;
																					BgL_fieldsz00_787 =
																						BgL_fieldsz00_2403;
																					goto
																						BgL_zc3anonymousza32763ze3z83_789;
																				}
																			}
																		else
																			{	/* Module/class.scm 260 */
																				return BFALSE;
																			}
																	}
															}
														else
															{	/* Module/class.scm 260 */
																obj_t BgL_carzd21684zd2_813;

																BgL_carzd21684zd2_813 = CAR(BgL_fieldz00_791);
																if (SYMBOLP(BgL_carzd21684zd2_813))
																	{	/* Module/class.scm 260 */
																		obj_t BgL_idz00_1533;

																		BgL_idz00_1533 = BgL_carzd21684zd2_813;
																		{
																			long BgL_hashz00_2413;

																			obj_t BgL_fieldsz00_2411;

																			BgL_fieldsz00_2411 =
																				CDR(BgL_fieldsz00_787);
																			BgL_hashz00_2413 =
																				(BgL_hashz00_788 ^
																				BGl_getzd2hashnumberzd2zz__hashz00
																				(BgL_idz00_1533));
																			BgL_hashz00_788 = BgL_hashz00_2413;
																			BgL_fieldsz00_787 = BgL_fieldsz00_2411;
																			goto BgL_zc3anonymousza32763ze3z83_789;
																		}
																	}
																else
																	{	/* Module/class.scm 260 */
																		return BFALSE;
																	}
															}
													}
												else
													{	/* Module/class.scm 260 */
														obj_t BgL_carzd21693zd2_816;

														BgL_carzd21693zd2_816 = CAR(BgL_fieldz00_791);
														if (SYMBOLP(BgL_carzd21693zd2_816))
															{	/* Module/class.scm 260 */
																obj_t BgL_idz00_1544;

																BgL_idz00_1544 = BgL_carzd21693zd2_816;
																{
																	long BgL_hashz00_2421;

																	obj_t BgL_fieldsz00_2419;

																	BgL_fieldsz00_2419 = CDR(BgL_fieldsz00_787);
																	BgL_hashz00_2421 =
																		(BgL_hashz00_788 ^
																		BGl_getzd2hashnumberzd2zz__hashz00
																		(BgL_idz00_1544));
																	BgL_hashz00_788 = BgL_hashz00_2421;
																	BgL_fieldsz00_787 = BgL_fieldsz00_2419;
																	goto BgL_zc3anonymousza32763ze3z83_789;
																}
															}
														else
															{	/* Module/class.scm 260 */
																return BFALSE;
															}
													}
											}
									}
								else
									{	/* Module/class.scm 260 */
										if (SYMBOLP(BgL_fieldz00_791))
											{	/* Module/class.scm 260 */
												{
													long BgL_hashz00_2428;

													obj_t BgL_fieldsz00_2426;

													BgL_fieldsz00_2426 = CDR(BgL_fieldsz00_787);
													BgL_hashz00_2428 =
														(BgL_hashz00_788 ^
														BGl_getzd2hashnumberzd2zz__hashz00
														(BgL_fieldz00_791));
													BgL_hashz00_788 = BgL_hashz00_2428;
													BgL_fieldsz00_787 = BgL_fieldsz00_2426;
													goto BgL_zc3anonymousza32763ze3z83_789;
												}
											}
										else
											{	/* Module/class.scm 260 */
												return BFALSE;
											}
									}
							}
						}
				}
			}
		}
	}



/* _get-class-hash */
	obj_t BGl__getzd2classzd2hashz00zzmodule_classz00(obj_t BgL_envz00_1967,
		obj_t BgL_classzd2idzd2_1968, obj_t BgL_fieldsz00_1969)
	{
		AN_OBJECT;
		{	/* Module/class.scm 254 */
			return
				BGl_getzd2classzd2hashz00zzmodule_classz00(BgL_classzd2idzd2_1968,
				BgL_fieldsz00_1969);
		}
	}



/* make-class-fields */
	obj_t BGl_makezd2classzd2fieldsz00zzmodule_classz00(obj_t
		BgL_classzd2idzd2_58, obj_t BgL_slotzd2defszd2_59, obj_t BgL_locz00_60)
	{
		AN_OBJECT;
		{	/* Module/class.scm 277 */
			{	/* Module/class.scm 357 */
				obj_t BgL_slotzd2defszd2_840;

				if (PAIRP(BgL_slotzd2defszd2_59))
					{	/* Module/class.scm 357 */
						obj_t BgL_carzd21786zd2_868;

						BgL_carzd21786zd2_868 = CAR(BgL_slotzd2defszd2_59);
						if (PAIRP(BgL_carzd21786zd2_868))
							{	/* Module/class.scm 357 */
								if (NULLP(CDR(BgL_carzd21786zd2_868)))
									{	/* Module/class.scm 357 */
										BgL_slotzd2defszd2_840 = CDR(BgL_slotzd2defszd2_59);
									}
								else
									{	/* Module/class.scm 357 */
										BgL_slotzd2defszd2_840 = BgL_slotzd2defszd2_59;
									}
							}
						else
							{	/* Module/class.scm 357 */
								BgL_slotzd2defszd2_840 = BgL_slotzd2defszd2_59;
							}
					}
				else
					{	/* Module/class.scm 357 */
						BgL_slotzd2defszd2_840 = BgL_slotzd2defszd2_59;
					}
				{	/* Module/class.scm 362 */
					obj_t BgL_arg2794z00_841;

					obj_t BgL_arg2795z00_842;

					BgL_arg2794z00_841 = CNST_TABLE_REF(((long) 18));
					{	/* Module/class.scm 362 */
						obj_t BgL_arg2796z00_843;

						if (NULLP(BgL_slotzd2defszd2_840))
							{	/* Module/class.scm 362 */
								BgL_arg2796z00_843 = BNIL;
							}
						else
							{	/* Module/class.scm 362 */
								obj_t BgL_head2475z00_847;

								BgL_head2475z00_847 =
									MAKE_PAIR(BGl_makezd2slotzd2fieldz00zzmodule_classz00
									(BgL_classzd2idzd2_58, BgL_locz00_60,
										CAR(BgL_slotzd2defszd2_840)), BNIL);
								{	/* Module/class.scm 362 */
									obj_t BgL_g2478z00_848;

									BgL_g2478z00_848 = CDR(BgL_slotzd2defszd2_840);
									{
										obj_t BgL_l2473z00_850;

										obj_t BgL_tail2476z00_851;

										BgL_l2473z00_850 = BgL_g2478z00_848;
										BgL_tail2476z00_851 = BgL_head2475z00_847;
									BgL_zc3anonymousza32799ze3z83_852:
										if (NULLP(BgL_l2473z00_850))
											{	/* Module/class.scm 362 */
												BgL_arg2796z00_843 = BgL_head2475z00_847;
											}
										else
											{	/* Module/class.scm 362 */
												obj_t BgL_newtail2477z00_854;

												BgL_newtail2477z00_854 =
													MAKE_PAIR(BGl_makezd2slotzd2fieldz00zzmodule_classz00
													(BgL_classzd2idzd2_58, BgL_locz00_60,
														CAR(BgL_l2473z00_850)), BNIL);
												SET_CDR(BgL_tail2476z00_851, BgL_newtail2477z00_854);
												{
													obj_t BgL_tail2476z00_2456;

													obj_t BgL_l2473z00_2454;

													BgL_l2473z00_2454 = CDR(BgL_l2473z00_850);
													BgL_tail2476z00_2456 = BgL_newtail2477z00_854;
													BgL_tail2476z00_851 = BgL_tail2476z00_2456;
													BgL_l2473z00_850 = BgL_l2473z00_2454;
													goto BgL_zc3anonymousza32799ze3z83_852;
												}
											}
									}
								}
							}
						BgL_arg2795z00_842 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg2796z00_843, BNIL);
					}
					return MAKE_PAIR(BgL_arg2794z00_841, BgL_arg2795z00_842);
				}
			}
		}
	}



/* read-only? */
	bool_t BGl_readzd2onlyzf3z21zzmodule_classz00(obj_t BgL_attrz00_873)
	{
		AN_OBJECT;
		{	/* Module/class.scm 286 */
			{
				obj_t BgL_attrz00_876;

				BgL_attrz00_876 = BgL_attrz00_873;
			BgL_zc3anonymousza32814ze3z83_877:
				if (NULLP(BgL_attrz00_876))
					{	/* Module/class.scm 281 */
						return ((bool_t) 0);
					}
				else
					{	/* Module/class.scm 281 */
						if ((CAR(BgL_attrz00_876) == CNST_TABLE_REF(((long) 19))))
							{	/* Module/class.scm 283 */
								return ((bool_t) 1);
							}
						else
							{
								obj_t BgL_attrz00_2465;

								BgL_attrz00_2465 = CDR(BgL_attrz00_876);
								BgL_attrz00_876 = BgL_attrz00_2465;
								goto BgL_zc3anonymousza32814ze3z83_877;
							}
					}
			}
		}
	}



/* virtual? */
	bool_t BGl_virtualzf3zf3zzmodule_classz00(obj_t BgL_attrz00_884)
	{
		AN_OBJECT;
		{	/* Module/class.scm 295 */
			{
				obj_t BgL_attrz00_887;

				BgL_attrz00_887 = BgL_attrz00_884;
			BgL_zc3anonymousza32822ze3z83_888:
				if (NULLP(BgL_attrz00_887))
					{	/* Module/class.scm 290 */
						return ((bool_t) 0);
					}
				else
					{	/* Module/class.scm 292 */
						bool_t BgL_testz00_2469;

						{	/* Module/class.scm 292 */
							bool_t BgL_testz00_2470;

							{	/* Module/class.scm 292 */
								obj_t BgL_auxz00_2471;

								BgL_auxz00_2471 = CAR(BgL_attrz00_887);
								BgL_testz00_2470 = PAIRP(BgL_auxz00_2471);
							}
							if (BgL_testz00_2470)
								{	/* Module/class.scm 292 */
									obj_t BgL_auxz00_2474;

									{	/* Module/class.scm 292 */
										obj_t BgL_pairz00_1596;

										BgL_pairz00_1596 = BgL_attrz00_887;
										BgL_auxz00_2474 = CAR(CAR(BgL_pairz00_1596));
									}
									BgL_testz00_2469 =
										(BgL_auxz00_2474 == CNST_TABLE_REF(((long) 20)));
								}
							else
								{	/* Module/class.scm 292 */
									BgL_testz00_2469 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2469)
							{	/* Module/class.scm 292 */
								return ((bool_t) 1);
							}
						else
							{
								obj_t BgL_attrz00_2479;

								BgL_attrz00_2479 = CDR(BgL_attrz00_887);
								BgL_attrz00_887 = BgL_attrz00_2479;
								goto BgL_zc3anonymousza32822ze3z83_888;
							}
					}
			}
		}
	}



/* find-info-attribute */
	obj_t BGl_findzd2infozd2attributez00zzmodule_classz00(obj_t BgL_attrz00_897)
	{
		AN_OBJECT;
		{	/* Module/class.scm 303 */
		BGl_findzd2infozd2attributez00zzmodule_classz00:
			if (PAIRP(BgL_attrz00_897))
				{

					{	/* Module/class.scm 299 */
						obj_t BgL_ezd21710zd2_903;

						BgL_ezd21710zd2_903 = CAR(BgL_attrz00_897);
						if (PAIRP(BgL_ezd21710zd2_903))
							{	/* Module/class.scm 299 */
								obj_t BgL_cdrzd21714zd2_905;

								BgL_cdrzd21714zd2_905 = CDR(BgL_ezd21710zd2_903);
								if ((CAR(BgL_ezd21710zd2_903) == CNST_TABLE_REF(((long) 21))))
									{	/* Module/class.scm 299 */
										if (PAIRP(BgL_cdrzd21714zd2_905))
											{	/* Module/class.scm 299 */
												if (NULLP(CDR(BgL_cdrzd21714zd2_905)))
													{	/* Module/class.scm 299 */
														return CAR(BgL_cdrzd21714zd2_905);
													}
												else
													{	/* Module/class.scm 299 */
													BgL_tagzd21709zd2_902:
														{
															obj_t BgL_attrz00_2497;

															BgL_attrz00_2497 = CDR(BgL_attrz00_897);
															BgL_attrz00_897 = BgL_attrz00_2497;
															goto
																BGl_findzd2infozd2attributez00zzmodule_classz00;
														}
													}
											}
										else
											{	/* Module/class.scm 299 */
												goto BgL_tagzd21709zd2_902;
											}
									}
								else
									{	/* Module/class.scm 299 */
										goto BgL_tagzd21709zd2_902;
									}
							}
						else
							{	/* Module/class.scm 299 */
								goto BgL_tagzd21709zd2_902;
							}
					}
				}
			else
				{	/* Module/class.scm 297 */
					return BFALSE;
				}
		}
	}



/* find-default-attribute */
	obj_t BGl_findzd2defaultzd2attributez00zzmodule_classz00(obj_t
		BgL_attrz00_914)
	{
		AN_OBJECT;
		{	/* Module/class.scm 311 */
		BGl_findzd2defaultzd2attributez00zzmodule_classz00:
			if (PAIRP(BgL_attrz00_914))
				{
					obj_t BgL_valuez00_917;

					{	/* Module/class.scm 307 */
						obj_t BgL_ezd21721zd2_920;

						BgL_ezd21721zd2_920 = CAR(BgL_attrz00_914);
						if (PAIRP(BgL_ezd21721zd2_920))
							{	/* Module/class.scm 307 */
								obj_t BgL_cdrzd21725zd2_922;

								BgL_cdrzd21725zd2_922 = CDR(BgL_ezd21721zd2_920);
								if ((CAR(BgL_ezd21721zd2_920) == CNST_TABLE_REF(((long) 22))))
									{	/* Module/class.scm 307 */
										if (PAIRP(BgL_cdrzd21725zd2_922))
											{	/* Module/class.scm 307 */
												if (NULLP(CDR(BgL_cdrzd21725zd2_922)))
													{	/* Module/class.scm 307 */
														BgL_valuez00_917 = CAR(BgL_cdrzd21725zd2_922);
														{	/* Module/class.scm 309 */
															obj_t BgL_arg2852z00_930;

															obj_t BgL_arg2854z00_931;

															BgL_arg2852z00_930 = CNST_TABLE_REF(((long) 9));
															{	/* Module/class.scm 309 */
																obj_t BgL_list2855z00_932;

																BgL_list2855z00_932 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2854z00_931 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_valuez00_917, BgL_list2855z00_932);
															}
															return
																MAKE_PAIR(BgL_arg2852z00_930,
																BgL_arg2854z00_931);
														}
													}
												else
													{	/* Module/class.scm 307 */
													BgL_tagzd21720zd2_919:
														{
															obj_t BgL_attrz00_2519;

															BgL_attrz00_2519 = CDR(BgL_attrz00_914);
															BgL_attrz00_914 = BgL_attrz00_2519;
															goto
																BGl_findzd2defaultzd2attributez00zzmodule_classz00;
														}
													}
											}
										else
											{	/* Module/class.scm 307 */
												goto BgL_tagzd21720zd2_919;
											}
									}
								else
									{	/* Module/class.scm 307 */
										goto BgL_tagzd21720zd2_919;
									}
							}
						else
							{	/* Module/class.scm 307 */
								goto BgL_tagzd21720zd2_919;
							}
					}
				}
			else
				{	/* Module/class.scm 305 */
					return CNST_TABLE_REF(((long) 23));
		}}
	}



/* make-slot-field */
	obj_t BGl_makezd2slotzd2fieldz00zzmodule_classz00(obj_t
		BgL_classzd2idzd2_1973, obj_t BgL_locz00_1972, obj_t BgL_slotz00_934)
	{
		AN_OBJECT;
		{	/* Module/class.scm 356 */
			{
				obj_t BgL_idz00_937;

				obj_t BgL_attz00_938;

				obj_t BgL_idz00_940;

				obj_t BgL_attz00_941;

				if (SYMBOLP(BgL_slotz00_934))
					{	/* Module/class.scm 356 */
						{	/* Module/class.scm 316 */
							obj_t BgL_idz00_964;

							BgL_idz00_964 =
								BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_slotz00_934,
								BgL_locz00_1972);
							{	/* Module/class.scm 317 */
								obj_t BgL_arg2872z00_965;

								obj_t BgL_arg2873z00_966;

								{	/* Module/class.scm 317 */
									obj_t BgL_arg2874z00_967;

									obj_t BgL_arg2875z00_968;

									BgL_arg2874z00_967 = CNST_TABLE_REF(((long) 10));
									{	/* Module/class.scm 317 */
										obj_t BgL_list2876z00_969;

										{	/* Module/class.scm 317 */
											obj_t BgL_arg2877z00_970;

											obj_t BgL_arg2878z00_971;

											BgL_arg2877z00_970 = CNST_TABLE_REF(((long) 13));
											BgL_arg2878z00_971 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2876z00_969 =
												MAKE_PAIR(BgL_arg2877z00_970, BgL_arg2878z00_971);
										}
										BgL_arg2875z00_968 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF
											(((long) 24)), BgL_list2876z00_969);
									}
									BgL_arg2872z00_965 =
										MAKE_PAIR(BgL_arg2874z00_967, BgL_arg2875z00_968);
								}
								{	/* Module/class.scm 318 */
									obj_t BgL_arg2879z00_972;

									obj_t BgL_arg2880z00_973;

									obj_t BgL_arg2881z00_974;

									obj_t BgL_arg2882z00_975;

									{	/* Module/class.scm 318 */
										obj_t BgL_arg2892z00_984;

										obj_t BgL_arg2893z00_985;

										BgL_arg2892z00_984 = CNST_TABLE_REF(((long) 9));
										{	/* Module/class.scm 318 */
											obj_t BgL_list2894z00_986;

											BgL_list2894z00_986 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2893z00_985 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_idz00_964, BgL_list2894z00_986);
										}
										BgL_arg2879z00_972 =
											MAKE_PAIR(BgL_arg2892z00_984, BgL_arg2893z00_985);
									}
									{	/* Module/class.scm 319 */
										obj_t BgL_list2895z00_987;

										{	/* Module/class.scm 319 */
											obj_t BgL_arg2896z00_988;

											{	/* Module/class.scm 319 */
												obj_t BgL_arg2897z00_989;

												obj_t BgL_arg2898z00_990;

												BgL_arg2897z00_989 = CNST_TABLE_REF(((long) 25));
												BgL_arg2898z00_990 = MAKE_PAIR(BgL_idz00_964, BNIL);
												BgL_arg2896z00_988 =
													MAKE_PAIR(BgL_arg2897z00_989, BgL_arg2898z00_990);
											}
											BgL_list2895z00_987 =
												MAKE_PAIR(BgL_classzd2idzd2_1973, BgL_arg2896z00_988);
										}
										BgL_arg2880z00_973 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2895z00_987);
									}
									{	/* Module/class.scm 320 */
										obj_t BgL_list2899z00_991;

										{	/* Module/class.scm 320 */
											obj_t BgL_arg2900z00_992;

											{	/* Module/class.scm 320 */
												obj_t BgL_arg2901z00_993;

												obj_t BgL_arg2902z00_994;

												BgL_arg2901z00_993 = CNST_TABLE_REF(((long) 25));
												{	/* Module/class.scm 320 */
													obj_t BgL_arg2903z00_995;

													BgL_arg2903z00_995 =
														MAKE_PAIR(CNST_TABLE_REF(((long) 26)), BNIL);
													BgL_arg2902z00_994 =
														MAKE_PAIR(BgL_idz00_964, BgL_arg2903z00_995);
												}
												BgL_arg2900z00_992 =
													MAKE_PAIR(BgL_arg2901z00_993, BgL_arg2902z00_994);
											}
											BgL_list2899z00_991 =
												MAKE_PAIR(BgL_classzd2idzd2_1973, BgL_arg2900z00_992);
										}
										BgL_arg2881z00_974 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2899z00_991);
									}
									{	/* Module/class.scm 324 */
										obj_t BgL_arg2904z00_996;

										{	/* Module/class.scm 324 */
											obj_t BgL_arg2906z00_998;

											obj_t BgL_arg2907z00_999;

											BgL_arg2906z00_998 = CNST_TABLE_REF(((long) 10));
											{	/* Module/class.scm 324 */
												obj_t BgL_list2908z00_1000;

												{	/* Module/class.scm 324 */
													obj_t BgL_arg2909z00_1001;

													obj_t BgL_arg2910z00_1002;

													BgL_arg2909z00_1001 = CNST_TABLE_REF(((long) 13));
													BgL_arg2910z00_1002 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2908z00_1000 =
														MAKE_PAIR(BgL_arg2909z00_1001, BgL_arg2910z00_1002);
												}
												BgL_arg2907z00_999 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 29)), BgL_list2908z00_1000);
											}
											BgL_arg2904z00_996 =
												MAKE_PAIR(BgL_arg2906z00_998, BgL_arg2907z00_999);
										}
										BgL_arg2882z00_975 = MAKE_PAIR(BgL_arg2904z00_996, BNIL);
									}
									{	/* Module/class.scm 317 */
										obj_t BgL_list2884z00_977;

										{	/* Module/class.scm 317 */
											obj_t BgL_arg2885z00_978;

											{	/* Module/class.scm 317 */
												obj_t BgL_arg2886z00_979;

												{	/* Module/class.scm 317 */
													obj_t BgL_arg2887z00_980;

													{	/* Module/class.scm 317 */
														obj_t BgL_arg2888z00_981;

														{	/* Module/class.scm 317 */
															obj_t BgL_arg2890z00_982;

															{	/* Module/class.scm 317 */
																obj_t BgL_arg2891z00_983;

																BgL_arg2891z00_983 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2890z00_982 =
																	MAKE_PAIR(BgL_arg2882z00_975,
																	BgL_arg2891z00_983);
															}
															BgL_arg2888z00_981 =
																MAKE_PAIR(BFALSE, BgL_arg2890z00_982);
														}
														BgL_arg2887z00_980 =
															MAKE_PAIR(BFALSE, BgL_arg2888z00_981);
													}
													BgL_arg2886z00_979 =
														MAKE_PAIR(BUNSPEC, BgL_arg2887z00_980);
												}
												BgL_arg2885z00_978 =
													MAKE_PAIR(BgL_arg2881z00_974, BgL_arg2886z00_979);
											}
											BgL_list2884z00_977 =
												MAKE_PAIR(BgL_arg2880z00_973, BgL_arg2885z00_978);
										}
										BgL_arg2873z00_966 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2879z00_972, BgL_list2884z00_977);
								}}
								return MAKE_PAIR(BgL_arg2872z00_965, BgL_arg2873z00_966);
							}
						}
					}
				else
					{	/* Module/class.scm 356 */
						if (PAIRP(BgL_slotz00_934))
							{	/* Module/class.scm 356 */
								obj_t BgL_cdrzd21742zd2_947;

								BgL_cdrzd21742zd2_947 = CDR(BgL_slotz00_934);
								if ((CAR(BgL_slotz00_934) == CNST_TABLE_REF(((long) 17))))
									{	/* Module/class.scm 356 */
										if (PAIRP(BgL_cdrzd21742zd2_947))
											{	/* Module/class.scm 356 */
												obj_t BgL_carzd21745zd2_950;

												BgL_carzd21745zd2_950 = CAR(BgL_cdrzd21742zd2_947);
												if (SYMBOLP(BgL_carzd21745zd2_950))
													{	/* Module/class.scm 356 */
														BgL_idz00_937 = BgL_carzd21745zd2_950;
														BgL_attz00_938 = CDR(BgL_cdrzd21742zd2_947);
														{	/* Module/class.scm 327 */
															bool_t BgL_testz00_2577;

															{
																obj_t BgL_l2471z00_1046;

																BgL_l2471z00_1046 = BgL_attz00_938;
															BgL_zc3anonymousza32952ze3z83_1047:
																if (NULLP(BgL_l2471z00_1046))
																	{	/* Module/class.scm 327 */
																		BgL_testz00_2577 = ((bool_t) 0);
																	}
																else
																	{	/* Module/class.scm 327 */
																		if (BGl_virtualzf3zf3zzmodule_classz00(CAR
																				(BgL_l2471z00_1046)))
																			{	/* Module/class.scm 327 */
																				BgL_testz00_2577 = ((bool_t) 1);
																			}
																		else
																			{
																				obj_t BgL_l2471z00_2583;

																				BgL_l2471z00_2583 =
																					CDR(BgL_l2471z00_1046);
																				BgL_l2471z00_1046 = BgL_l2471z00_2583;
																				goto BgL_zc3anonymousza32952ze3z83_1047;
																			}
																	}
															}
															if (BgL_testz00_2577)
																{	/* Module/class.scm 327 */
																	return
																		BGl_errorz00zz__errorz00(BgL_idz00_937,
																		BGl_string3155z00zzmodule_classz00,
																		BgL_slotz00_934);
																}
															else
																{	/* Module/class.scm 329 */
																	obj_t BgL_idz00_1004;

																	BgL_idz00_1004 =
																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																		(BgL_idz00_937, BgL_locz00_1972);
																	{	/* Module/class.scm 330 */
																		obj_t BgL_arg2912z00_1005;

																		obj_t BgL_arg2913z00_1006;

																		{	/* Module/class.scm 330 */
																			obj_t BgL_arg2914z00_1007;

																			obj_t BgL_arg2915z00_1008;

																			BgL_arg2914z00_1007 =
																				CNST_TABLE_REF(((long) 10));
																			{	/* Module/class.scm 330 */
																				obj_t BgL_list2916z00_1009;

																				{	/* Module/class.scm 330 */
																					obj_t BgL_arg2917z00_1010;

																					obj_t BgL_arg2918z00_1011;

																					BgL_arg2917z00_1010 =
																						CNST_TABLE_REF(((long) 13));
																					BgL_arg2918z00_1011 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2916z00_1009 =
																						MAKE_PAIR(BgL_arg2917z00_1010,
																						BgL_arg2918z00_1011);
																				}
																				BgL_arg2915z00_1008 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 24)),
																					BgL_list2916z00_1009);
																			}
																			BgL_arg2912z00_1005 =
																				MAKE_PAIR(BgL_arg2914z00_1007,
																				BgL_arg2915z00_1008);
																		}
																		{	/* Module/class.scm 331 */
																			obj_t BgL_arg2919z00_1012;

																			obj_t BgL_arg2920z00_1013;

																			obj_t BgL_arg2921z00_1014;

																			obj_t BgL_arg2922z00_1015;

																			obj_t BgL_arg2923z00_1016;

																			obj_t BgL_arg2924z00_1017;

																			{	/* Module/class.scm 331 */
																				obj_t BgL_arg2933z00_1026;

																				obj_t BgL_arg2934z00_1027;

																				BgL_arg2933z00_1026 =
																					CNST_TABLE_REF(((long) 9));
																				{	/* Module/class.scm 331 */
																					obj_t BgL_list2935z00_1028;

																					BgL_list2935z00_1028 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2934z00_1027 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_idz00_1004,
																						BgL_list2935z00_1028);
																				}
																				BgL_arg2919z00_1012 =
																					MAKE_PAIR(BgL_arg2933z00_1026,
																					BgL_arg2934z00_1027);
																			}
																			{	/* Module/class.scm 332 */
																				obj_t BgL_list2936z00_1029;

																				{	/* Module/class.scm 332 */
																					obj_t BgL_arg2937z00_1030;

																					{	/* Module/class.scm 332 */
																						obj_t BgL_arg2938z00_1031;

																						obj_t BgL_arg2939z00_1032;

																						BgL_arg2938z00_1031 =
																							CNST_TABLE_REF(((long) 25));
																						{	/* Module/class.scm 332 */
																							obj_t BgL_arg2940z00_1033;

																							BgL_arg2940z00_1033 =
																								MAKE_PAIR(CNST_TABLE_REF(((long)
																										27)), BNIL);
																							BgL_arg2939z00_1032 =
																								MAKE_PAIR(BgL_idz00_1004,
																								BgL_arg2940z00_1033);
																						}
																						BgL_arg2937z00_1030 =
																							MAKE_PAIR(BgL_arg2938z00_1031,
																							BgL_arg2939z00_1032);
																					}
																					BgL_list2936z00_1029 =
																						MAKE_PAIR(BgL_classzd2idzd2_1973,
																						BgL_arg2937z00_1030);
																				}
																				BgL_arg2920z00_1013 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list2936z00_1029);
																			}
																			if (BGl_readzd2onlyzf3z21zzmodule_classz00
																				(BgL_attz00_938))
																				{	/* Module/class.scm 333 */
																					BgL_arg2921z00_1014 = BUNSPEC;
																				}
																			else
																				{	/* Module/class.scm 334 */
																					obj_t BgL_list2942z00_1035;

																					{	/* Module/class.scm 334 */
																						obj_t BgL_arg2943z00_1036;

																						{	/* Module/class.scm 334 */
																							obj_t BgL_arg2944z00_1037;

																							obj_t BgL_arg2945z00_1038;

																							BgL_arg2944z00_1037 =
																								CNST_TABLE_REF(((long) 25));
																							{	/* Module/class.scm 334 */
																								obj_t BgL_arg2946z00_1039;

																								BgL_arg2946z00_1039 =
																									MAKE_PAIR(CNST_TABLE_REF((
																											(long) 26)), BNIL);
																								BgL_arg2945z00_1038 =
																									MAKE_PAIR(BgL_idz00_1004,
																									BgL_arg2946z00_1039);
																							}
																							BgL_arg2943z00_1036 =
																								MAKE_PAIR(BgL_arg2944z00_1037,
																								BgL_arg2945z00_1038);
																						}
																						BgL_list2942z00_1035 =
																							MAKE_PAIR(BgL_classzd2idzd2_1973,
																							BgL_arg2943z00_1036);
																					}
																					BgL_arg2921z00_1014 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list2942z00_1035);
																				}
																			{	/* Module/class.scm 336 */
																				obj_t BgL_list2947z00_1040;

																				{	/* Module/class.scm 336 */
																					obj_t BgL_arg2948z00_1041;

																					{	/* Module/class.scm 336 */
																						obj_t BgL_arg2949z00_1042;

																						obj_t BgL_arg2950z00_1043;

																						BgL_arg2949z00_1042 =
																							CNST_TABLE_REF(((long) 25));
																						{	/* Module/class.scm 336 */
																							obj_t BgL_arg2951z00_1044;

																							BgL_arg2951z00_1044 =
																								MAKE_PAIR(CNST_TABLE_REF(((long)
																										28)), BNIL);
																							BgL_arg2950z00_1043 =
																								MAKE_PAIR(BgL_idz00_1004,
																								BgL_arg2951z00_1044);
																						}
																						BgL_arg2948z00_1041 =
																							MAKE_PAIR(BgL_arg2949z00_1042,
																							BgL_arg2950z00_1043);
																					}
																					BgL_list2947z00_1040 =
																						MAKE_PAIR(BgL_classzd2idzd2_1973,
																						BgL_arg2948z00_1041);
																				}
																				BgL_arg2922z00_1015 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list2947z00_1040);
																			}
																			BgL_arg2923z00_1016 =
																				BGl_findzd2infozd2attributez00zzmodule_classz00
																				(BgL_slotz00_934);
																			BgL_arg2924z00_1017 =
																				BGl_findzd2defaultzd2attributez00zzmodule_classz00
																				(BgL_slotz00_934);
																			{	/* Module/class.scm 330 */
																				obj_t BgL_list2926z00_1019;

																				{	/* Module/class.scm 330 */
																					obj_t BgL_arg2927z00_1020;

																					{	/* Module/class.scm 330 */
																						obj_t BgL_arg2928z00_1021;

																						{	/* Module/class.scm 330 */
																							obj_t BgL_arg2929z00_1022;

																							{	/* Module/class.scm 330 */
																								obj_t BgL_arg2930z00_1023;

																								{	/* Module/class.scm 330 */
																									obj_t BgL_arg2931z00_1024;

																									{	/* Module/class.scm 330 */
																										obj_t BgL_arg2932z00_1025;

																										BgL_arg2932z00_1025 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2931z00_1024 =
																											MAKE_PAIR
																											(BgL_arg2924z00_1017,
																											BgL_arg2932z00_1025);
																									}
																									BgL_arg2930z00_1023 =
																										MAKE_PAIR
																										(BgL_arg2923z00_1016,
																										BgL_arg2931z00_1024);
																								}
																								BgL_arg2929z00_1022 =
																									MAKE_PAIR(BFALSE,
																									BgL_arg2930z00_1023);
																							}
																							BgL_arg2928z00_1021 =
																								MAKE_PAIR(BgL_arg2922z00_1015,
																								BgL_arg2929z00_1022);
																						}
																						BgL_arg2927z00_1020 =
																							MAKE_PAIR(BgL_arg2921z00_1014,
																							BgL_arg2928z00_1021);
																					}
																					BgL_list2926z00_1019 =
																						MAKE_PAIR(BgL_arg2920z00_1013,
																						BgL_arg2927z00_1020);
																				}
																				BgL_arg2913z00_1006 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2919z00_1012,
																					BgL_list2926z00_1019);
																		}}
																		return
																			MAKE_PAIR(BgL_arg2912z00_1005,
																			BgL_arg2913z00_1006);
																	}
																}
														}
													}
												else
													{	/* Module/class.scm 356 */
														obj_t BgL_carzd21754zd2_953;

														BgL_carzd21754zd2_953 = CAR(BgL_slotz00_934);
														if (SYMBOLP(BgL_carzd21754zd2_953))
															{	/* Module/class.scm 356 */
																BgL_idz00_940 = BgL_carzd21754zd2_953;
																BgL_attz00_941 = BgL_cdrzd21742zd2_947;
															BgL_tagzd21732zd2_942:
																{	/* Module/class.scm 342 */
																	obj_t BgL_idz00_1053;

																	BgL_idz00_1053 =
																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																		(BgL_idz00_940, BgL_locz00_1972);
																	{	/* Module/class.scm 343 */
																		obj_t BgL_arg2958z00_1054;

																		obj_t BgL_arg2959z00_1055;

																		{	/* Module/class.scm 343 */
																			obj_t BgL_arg2960z00_1056;

																			obj_t BgL_arg2961z00_1057;

																			BgL_arg2960z00_1056 =
																				CNST_TABLE_REF(((long) 10));
																			{	/* Module/class.scm 343 */
																				obj_t BgL_list2962z00_1058;

																				{	/* Module/class.scm 343 */
																					obj_t BgL_arg2963z00_1059;

																					obj_t BgL_arg2964z00_1060;

																					BgL_arg2963z00_1059 =
																						CNST_TABLE_REF(((long) 13));
																					BgL_arg2964z00_1060 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2962z00_1058 =
																						MAKE_PAIR(BgL_arg2963z00_1059,
																						BgL_arg2964z00_1060);
																				}
																				BgL_arg2961z00_1057 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 24)),
																					BgL_list2962z00_1058);
																			}
																			BgL_arg2958z00_1054 =
																				MAKE_PAIR(BgL_arg2960z00_1056,
																				BgL_arg2961z00_1057);
																		}
																		{	/* Module/class.scm 344 */
																			obj_t BgL_arg2965z00_1061;

																			obj_t BgL_arg2966z00_1062;

																			obj_t BgL_arg2967z00_1063;

																			bool_t BgL_arg2968z00_1064;

																			obj_t BgL_arg2969z00_1065;

																			obj_t BgL_arg2970z00_1066;

																			{	/* Module/class.scm 344 */
																				obj_t BgL_arg2979z00_1075;

																				obj_t BgL_arg2980z00_1076;

																				BgL_arg2979z00_1075 =
																					CNST_TABLE_REF(((long) 9));
																				{	/* Module/class.scm 344 */
																					obj_t BgL_list2981z00_1077;

																					BgL_list2981z00_1077 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2980z00_1076 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_idz00_1053,
																						BgL_list2981z00_1077);
																				}
																				BgL_arg2965z00_1061 =
																					MAKE_PAIR(BgL_arg2979z00_1075,
																					BgL_arg2980z00_1076);
																			}
																			{	/* Module/class.scm 345 */
																				obj_t BgL_list2982z00_1078;

																				{	/* Module/class.scm 345 */
																					obj_t BgL_arg2983z00_1079;

																					{	/* Module/class.scm 345 */
																						obj_t BgL_arg2984z00_1080;

																						obj_t BgL_arg2985z00_1081;

																						BgL_arg2984z00_1080 =
																							CNST_TABLE_REF(((long) 25));
																						BgL_arg2985z00_1081 =
																							MAKE_PAIR(BgL_idz00_1053, BNIL);
																						BgL_arg2983z00_1079 =
																							MAKE_PAIR(BgL_arg2984z00_1080,
																							BgL_arg2985z00_1081);
																					}
																					BgL_list2982z00_1078 =
																						MAKE_PAIR(BgL_classzd2idzd2_1973,
																						BgL_arg2983z00_1079);
																				}
																				BgL_arg2966z00_1062 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list2982z00_1078);
																			}
																			if (BGl_readzd2onlyzf3z21zzmodule_classz00
																				(BgL_attz00_941))
																				{	/* Module/class.scm 346 */
																					BgL_arg2967z00_1063 = BUNSPEC;
																				}
																			else
																				{	/* Module/class.scm 347 */
																					obj_t BgL_list2987z00_1083;

																					{	/* Module/class.scm 347 */
																						obj_t BgL_arg2988z00_1084;

																						{	/* Module/class.scm 347 */
																							obj_t BgL_arg2989z00_1085;

																							obj_t BgL_arg2990z00_1086;

																							BgL_arg2989z00_1085 =
																								CNST_TABLE_REF(((long) 25));
																							{	/* Module/class.scm 347 */
																								obj_t BgL_arg2991z00_1087;

																								BgL_arg2991z00_1087 =
																									MAKE_PAIR(CNST_TABLE_REF((
																											(long) 26)), BNIL);
																								BgL_arg2990z00_1086 =
																									MAKE_PAIR(BgL_idz00_1053,
																									BgL_arg2991z00_1087);
																							}
																							BgL_arg2988z00_1084 =
																								MAKE_PAIR(BgL_arg2989z00_1085,
																								BgL_arg2990z00_1086);
																						}
																						BgL_list2987z00_1083 =
																							MAKE_PAIR(BgL_classzd2idzd2_1973,
																							BgL_arg2988z00_1084);
																					}
																					BgL_arg2967z00_1063 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list2987z00_1083);
																				}
																			BgL_arg2968z00_1064 =
																				BGl_virtualzf3zf3zzmodule_classz00
																				(BgL_attz00_941);
																			BgL_arg2969z00_1065 =
																				BGl_findzd2infozd2attributez00zzmodule_classz00
																				(BgL_slotz00_934);
																			BgL_arg2970z00_1066 =
																				BGl_findzd2defaultzd2attributez00zzmodule_classz00
																				(BgL_slotz00_934);
																			{	/* Module/class.scm 343 */
																				obj_t BgL_list2972z00_1068;

																				{	/* Module/class.scm 343 */
																					obj_t BgL_arg2973z00_1069;

																					{	/* Module/class.scm 343 */
																						obj_t BgL_arg2974z00_1070;

																						{	/* Module/class.scm 343 */
																							obj_t BgL_arg2975z00_1071;

																							{	/* Module/class.scm 343 */
																								obj_t BgL_arg2976z00_1072;

																								{	/* Module/class.scm 343 */
																									obj_t BgL_arg2977z00_1073;

																									{	/* Module/class.scm 343 */
																										obj_t BgL_arg2978z00_1074;

																										BgL_arg2978z00_1074 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2977z00_1073 =
																											MAKE_PAIR
																											(BgL_arg2970z00_1066,
																											BgL_arg2978z00_1074);
																									}
																									BgL_arg2976z00_1072 =
																										MAKE_PAIR
																										(BgL_arg2969z00_1065,
																										BgL_arg2977z00_1073);
																								}
																								BgL_arg2975z00_1071 =
																									MAKE_PAIR(BBOOL
																									(BgL_arg2968z00_1064),
																									BgL_arg2976z00_1072);
																							}
																							BgL_arg2974z00_1070 =
																								MAKE_PAIR(BUNSPEC,
																								BgL_arg2975z00_1071);
																						}
																						BgL_arg2973z00_1069 =
																							MAKE_PAIR(BgL_arg2967z00_1063,
																							BgL_arg2974z00_1070);
																					}
																					BgL_list2972z00_1068 =
																						MAKE_PAIR(BgL_arg2966z00_1062,
																						BgL_arg2973z00_1069);
																				}
																				BgL_arg2959z00_1055 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2965z00_1061,
																					BgL_list2972z00_1068);
																		}}
																		return
																			MAKE_PAIR(BgL_arg2958z00_1054,
																			BgL_arg2959z00_1055);
																	}
																}
															}
														else
															{	/* Module/class.scm 356 */
															BgL_tagzd21733zd2_943:
																return
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_string3153z00zzmodule_classz00,
																	BGl_string3154z00zzmodule_classz00,
																	BgL_slotz00_934);
															}
													}
											}
										else
											{	/* Module/class.scm 356 */
												obj_t BgL_carzd21763zd2_956;

												BgL_carzd21763zd2_956 = CAR(BgL_slotz00_934);
												if (SYMBOLP(BgL_carzd21763zd2_956))
													{
														obj_t BgL_attz00_2680;

														obj_t BgL_idz00_2679;

														BgL_idz00_2679 = BgL_carzd21763zd2_956;
														BgL_attz00_2680 = BgL_cdrzd21742zd2_947;
														BgL_attz00_941 = BgL_attz00_2680;
														BgL_idz00_940 = BgL_idz00_2679;
														goto BgL_tagzd21732zd2_942;
													}
												else
													{	/* Module/class.scm 356 */
														goto BgL_tagzd21733zd2_943;
													}
											}
									}
								else
									{	/* Module/class.scm 356 */
										obj_t BgL_carzd21772zd2_959;

										BgL_carzd21772zd2_959 = CAR(BgL_slotz00_934);
										if (SYMBOLP(BgL_carzd21772zd2_959))
											{
												obj_t BgL_attz00_2685;

												obj_t BgL_idz00_2684;

												BgL_idz00_2684 = BgL_carzd21772zd2_959;
												BgL_attz00_2685 = BgL_cdrzd21742zd2_947;
												BgL_attz00_941 = BgL_attz00_2685;
												BgL_idz00_940 = BgL_idz00_2684;
												goto BgL_tagzd21732zd2_942;
											}
										else
											{	/* Module/class.scm 356 */
												goto BgL_tagzd21733zd2_943;
											}
									}
							}
						else
							{	/* Module/class.scm 356 */
								goto BgL_tagzd21733zd2_943;
							}
					}
			}
		}
	}



/* class-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_classzd2finaliza7erz75zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 369 */
			{	/* Module/class.scm 371 */
				bool_t BgL_testz00_2686;

				if (NULLP(BGl_za2classzd2accessesza2zd2zzmodule_classz00))
					{	/* Module/class.scm 371 */
						if (
							(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 30))))
							{	/* Module/class.scm 371 */
								BgL_testz00_2686 = ((bool_t) 0);
							}
						else
							{	/* Module/class.scm 371 */
								BgL_testz00_2686 = ((bool_t) 1);
							}
					}
				else
					{	/* Module/class.scm 371 */
						BgL_testz00_2686 = ((bool_t) 0);
					}
				if (BgL_testz00_2686)
					{	/* Module/class.scm 371 */
						return CNST_TABLE_REF(((long) 31));
					}
				else
					{	/* Module/class.scm 386 */
						obj_t BgL_bodyz00_1094;

						BgL_bodyz00_1094 =
							BGl_forcezd2classzd2accessesz00zzmodule_classz00();
						{	/* Module/class.scm 386 */
							obj_t BgL_bodyz00_1095;

							BgL_bodyz00_1095 =
								bgl_append2(bgl_reverse_bang
								(BGl_za2declaredzd2classesza2zd2zzmodule_classz00),
								BgL_bodyz00_1094);
							{	/* Module/class.scm 387 */
								obj_t BgL_bodyz00_1096;

								{	/* Module/class.scm 388 */
									bool_t BgL_testz00_2696;

									if (
										((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
											((long) 0)))
										{	/* Module/class.scm 389 */
											bool_t BgL_testz00_2700;

											{	/* Module/class.scm 389 */
												obj_t BgL_arg3028z00_1131;

												obj_t BgL_arg3029z00_1132;

												BgL_arg3028z00_1131 = CNST_TABLE_REF(((long) 32));
												{	/* Module/class.scm 390 */
													obj_t BgL_arg3030z00_1133;

													BgL_arg3030z00_1133 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_2703;

														BgL_auxz00_2703 =
															(BgL_backendz00_bglt) (BgL_arg3030z00_1133);
														BgL_arg3029z00_1132 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_2703))->
															BgL_debugzd2supportzd2);
												}}
												BgL_testz00_2700 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3028z00_1131, BgL_arg3029z00_1132));
											}
											if (BgL_testz00_2700)
												{	/* Module/class.scm 389 */
													BgL_testz00_2696 =
														PAIRP
														(BGl_za2declaredzd2classesza2zd2zzmodule_classz00);
												}
											else
												{	/* Module/class.scm 389 */
													BgL_testz00_2696 = ((bool_t) 0);
												}
										}
									else
										{	/* Module/class.scm 388 */
											BgL_testz00_2696 = ((bool_t) 0);
										}
									if (BgL_testz00_2696)
										{	/* Module/class.scm 392 */
											obj_t BgL_arg3011z00_1114;

											{	/* Module/class.scm 392 */
												obj_t BgL_arg3013z00_1116;

												obj_t BgL_arg3014z00_1117;

												BgL_arg3013z00_1116 = CNST_TABLE_REF(((long) 33));
												{	/* Module/class.scm 393 */
													obj_t BgL_arg3015z00_1118;

													obj_t BgL_arg3016z00_1119;

													{	/* Module/class.scm 393 */
														obj_t BgL_arg3018z00_1121;

														obj_t BgL_arg3019z00_1122;

														BgL_arg3018z00_1121 = CNST_TABLE_REF(((long) 34));
														{	/* Module/class.scm 394 */
															obj_t BgL_arg3020z00_1123;

															{	/* Module/class.scm 394 */
																obj_t BgL_arg3024z00_1127;

																{	/* Module/class.scm 395 */
																	obj_t BgL_res3128z00_1649;

																	{	/* Module/class.scm 395 */
																		obj_t BgL_symbolz00_1647;

																		BgL_symbolz00_1647 =
																			BGl_za2moduleza2z00zzmodule_modulez00;
																		{	/* Module/class.scm 395 */
																			obj_t BgL_arg2063z00_1648;

																			BgL_arg2063z00_1648 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1647);
																			BgL_res3128z00_1649 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_1648);
																	}}
																	BgL_arg3024z00_1127 = BgL_res3128z00_1649;
																}
																BgL_arg3020z00_1123 =
																	string_append_3
																	(BGl_string3156z00zzmodule_classz00,
																	BgL_arg3024z00_1127,
																	BGl_string3157z00zzmodule_classz00);
															}
															{	/* Module/class.scm 393 */
																obj_t BgL_list3022z00_1125;

																BgL_list3022z00_1125 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3019z00_1122 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3020z00_1123, BgL_list3022z00_1125);
														}}
														BgL_arg3015z00_1118 =
															MAKE_PAIR(BgL_arg3018z00_1121,
															BgL_arg3019z00_1122);
													}
													BgL_arg3016z00_1119 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_bodyz00_1095, BNIL);
													{	/* Module/class.scm 392 */
														obj_t BgL_list3017z00_1120;

														BgL_list3017z00_1120 =
															MAKE_PAIR(BgL_arg3016z00_1119, BNIL);
														BgL_arg3014z00_1117 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3015z00_1118, BgL_list3017z00_1120);
												}}
												BgL_arg3011z00_1114 =
													MAKE_PAIR(BgL_arg3013z00_1116, BgL_arg3014z00_1117);
											}
											BgL_bodyz00_1096 = MAKE_PAIR(BgL_arg3011z00_1114, BNIL);
										}
									else
										{	/* Module/class.scm 388 */
											BgL_bodyz00_1096 = BgL_bodyz00_1095;
										}
								}
								{	/* Module/class.scm 388 */

									{	/* Module/class.scm 399 */
										obj_t BgL_arg2993z00_1097;

										obj_t BgL_arg2995z00_1099;

										bool_t BgL_arg2996z00_1100;

										BgL_arg2993z00_1097 = CNST_TABLE_REF(((long) 35));
										if (PAIRP(BgL_bodyz00_1096))
											{	/* Module/class.scm 401 */
												BgL_arg2995z00_1099 = BgL_bodyz00_1096;
											}
										else
											{	/* Module/class.scm 401 */
												BgL_arg2995z00_1099 = CNST_TABLE_REF(((long) 36));
											}
										BgL_arg2996z00_1100 =
											(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 30)));
										{	/* Module/class.scm 399 */
											obj_t BgL_newz00_1656;

											BgL_newz00_1656 =
												create_struct(CNST_TABLE_REF(((long) 37)),
												(int) (((long) 5)));
											{	/* Module/class.scm 399 */
												obj_t BgL_auxz00_2733;

												int BgL_auxz00_2731;

												BgL_auxz00_2733 = BBOOL(BgL_arg2996z00_1100);
												BgL_auxz00_2731 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_1656, BgL_auxz00_2731,
													BgL_auxz00_2733);
											}
											{	/* Module/class.scm 399 */
												int BgL_auxz00_2736;

												BgL_auxz00_2736 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_1656, BgL_auxz00_2736, BTRUE);
											}
											{	/* Module/class.scm 399 */
												int BgL_auxz00_2739;

												BgL_auxz00_2739 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_1656, BgL_auxz00_2739,
													BgL_arg2995z00_1099);
											}
											{	/* Module/class.scm 399 */
												obj_t BgL_auxz00_2744;

												int BgL_auxz00_2742;

												BgL_auxz00_2744 = BINT(((long) 19));
												BgL_auxz00_2742 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_1656, BgL_auxz00_2742,
													BgL_auxz00_2744);
											}
											{	/* Module/class.scm 399 */
												int BgL_auxz00_2747;

												BgL_auxz00_2747 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_1656, BgL_auxz00_2747,
													BgL_arg2993z00_1097);
											}
											BGl_za2objectzd2unitza2zd2zzmodule_classz00 =
												BgL_newz00_1656;
									}}
									{	/* Module/class.scm 410 */
										obj_t BgL_arg2998z00_1102;

										obj_t BgL_arg3001z00_1104;

										bool_t BgL_arg3002z00_1105;

										BgL_arg2998z00_1102 = CNST_TABLE_REF(((long) 38));
										BgL_arg3001z00_1104 = CNST_TABLE_REF(((long) 36));
										BgL_arg3002z00_1105 =
											(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 30)));
										{	/* Module/class.scm 410 */
											obj_t BgL_newz00_1687;

											BgL_newz00_1687 =
												create_struct(CNST_TABLE_REF(((long) 37)),
												(int) (((long) 5)));
											{	/* Module/class.scm 410 */
												obj_t BgL_auxz00_2759;

												int BgL_auxz00_2757;

												BgL_auxz00_2759 = BBOOL(BgL_arg3002z00_1105);
												BgL_auxz00_2757 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_1687, BgL_auxz00_2757,
													BgL_auxz00_2759);
											}
											{	/* Module/class.scm 410 */
												int BgL_auxz00_2762;

												BgL_auxz00_2762 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_1687, BgL_auxz00_2762, BTRUE);
											}
											{	/* Module/class.scm 410 */
												int BgL_auxz00_2765;

												BgL_auxz00_2765 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_1687, BgL_auxz00_2765,
													BgL_arg3001z00_1104);
											}
											{	/* Module/class.scm 410 */
												obj_t BgL_auxz00_2770;

												int BgL_auxz00_2768;

												BgL_auxz00_2770 = BINT(((long) 21));
												BgL_auxz00_2768 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_1687, BgL_auxz00_2768,
													BgL_auxz00_2770);
											}
											{	/* Module/class.scm 410 */
												int BgL_auxz00_2773;

												BgL_auxz00_2773 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_1687, BgL_auxz00_2773,
													BgL_arg2998z00_1102);
											}
											BGl_za2methodzd2unitza2zd2zzmodule_classz00 =
												BgL_newz00_1687;
									}}
									{	/* Module/class.scm 417 */
										obj_t BgL_arg3003z00_1106;

										obj_t BgL_arg3005z00_1108;

										bool_t BgL_arg3006z00_1109;

										BgL_arg3003z00_1106 = CNST_TABLE_REF(((long) 39));
										BgL_arg3005z00_1108 = CNST_TABLE_REF(((long) 36));
										BgL_arg3006z00_1109 =
											(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 30)));
										{	/* Module/class.scm 417 */
											obj_t BgL_newz00_1718;

											BgL_newz00_1718 =
												create_struct(CNST_TABLE_REF(((long) 37)),
												(int) (((long) 5)));
											{	/* Module/class.scm 417 */
												obj_t BgL_auxz00_2785;

												int BgL_auxz00_2783;

												BgL_auxz00_2785 = BBOOL(BgL_arg3006z00_1109);
												BgL_auxz00_2783 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_1718, BgL_auxz00_2783,
													BgL_auxz00_2785);
											}
											{	/* Module/class.scm 417 */
												int BgL_auxz00_2788;

												BgL_auxz00_2788 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_1718, BgL_auxz00_2788, BTRUE);
											}
											{	/* Module/class.scm 417 */
												int BgL_auxz00_2791;

												BgL_auxz00_2791 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_1718, BgL_auxz00_2791,
													BgL_arg3005z00_1108);
											}
											{	/* Module/class.scm 417 */
												obj_t BgL_auxz00_2796;

												int BgL_auxz00_2794;

												BgL_auxz00_2796 = BINT(((long) 20));
												BgL_auxz00_2794 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_1718, BgL_auxz00_2794,
													BgL_auxz00_2796);
											}
											{	/* Module/class.scm 417 */
												int BgL_auxz00_2799;

												BgL_auxz00_2799 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_1718, BgL_auxz00_2799,
													BgL_arg3003z00_1106);
											}
											BGl_za2genericzd2unitza2zd2zzmodule_classz00 =
												BgL_newz00_1718;
									}}
									BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BNIL;
									BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BNIL;
									{	/* Module/class.scm 427 */
										obj_t BgL_list3007z00_1110;

										{	/* Module/class.scm 427 */
											obj_t BgL_arg3008z00_1111;

											{	/* Module/class.scm 427 */
												obj_t BgL_arg3009z00_1112;

												BgL_arg3009z00_1112 =
													MAKE_PAIR(BGl_za2methodzd2unitza2zd2zzmodule_classz00,
													BNIL);
												BgL_arg3008z00_1111 =
													MAKE_PAIR
													(BGl_za2genericzd2unitza2zd2zzmodule_classz00,
													BgL_arg3009z00_1112);
											}
											BgL_list3007z00_1110 =
												MAKE_PAIR(BGl_za2objectzd2unitza2zd2zzmodule_classz00,
												BgL_arg3008z00_1111);
										}
										return BgL_list3007z00_1110;
									}
								}
							}
						}
					}
			}
		}
	}



/* _class-finalizer */
	obj_t BGl__classzd2finaliza7erz75zzmodule_classz00(obj_t BgL_envz00_1970)
	{
		AN_OBJECT;
		{	/* Module/class.scm 369 */
			return BGl_classzd2finaliza7erz75zzmodule_classz00();
		}
	}



/* class-finalizer-add-static! */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 435 */
			{	/* Module/class.scm 436 */
				obj_t BgL_bodyz00_1137;

				BgL_bodyz00_1137 = BGl_forcezd2classzd2accessesz00zzmodule_classz00();
				{	/* Module/class.scm 436 */
					obj_t BgL_bodyz00_1138;

					BgL_bodyz00_1138 =
						bgl_append2(bgl_reverse_bang
						(BGl_za2declaredzd2classesza2zd2zzmodule_classz00),
						BgL_bodyz00_1137);
					{	/* Module/class.scm 437 */

						{	/* Module/class.scm 438 */
							bool_t BgL_testz00_2809;

							{	/* Module/class.scm 438 */
								obj_t BgL_oz00_1746;

								BgL_oz00_1746 = BGl_za2objectzd2unitza2zd2zzmodule_classz00;
								if (STRUCTP(BgL_oz00_1746))
									{	/* Module/class.scm 438 */
										BgL_testz00_2809 =
											(STRUCT_KEY(BgL_oz00_1746) ==
											CNST_TABLE_REF(((long) 37)));
									}
								else
									{	/* Module/class.scm 438 */
										BgL_testz00_2809 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_2809)
								{	/* Module/class.scm 440 */
									obj_t BgL_arg3035z00_1140;

									BgL_arg3035z00_1140 =
										bgl_append2(STRUCT_REF
										(BGl_za2objectzd2unitza2zd2zzmodule_classz00,
											(int) (((long) 2))), BgL_bodyz00_1138);
									{	/* Module/class.scm 439 */
										int BgL_auxz00_2818;

										BgL_auxz00_2818 = (int) (((long) 2));
										STRUCT_SET(BGl_za2objectzd2unitza2zd2zzmodule_classz00,
											BgL_auxz00_2818, BgL_arg3035z00_1140);
								}}
							else
								{	/* Module/class.scm 442 */
									obj_t BgL_arg3037z00_1142;

									obj_t BgL_arg3039z00_1144;

									bool_t BgL_arg3040z00_1145;

									BgL_arg3037z00_1142 = CNST_TABLE_REF(((long) 35));
									if (PAIRP(BgL_bodyz00_1138))
										{	/* Module/class.scm 444 */
											BgL_arg3039z00_1144 = BgL_bodyz00_1138;
										}
									else
										{	/* Module/class.scm 444 */
											BgL_arg3039z00_1144 = CNST_TABLE_REF(((long) 36));
										}
									BgL_arg3040z00_1145 =
										(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 30)));
									{	/* Module/class.scm 442 */
										obj_t BgL_newz00_1767;

										BgL_newz00_1767 =
											create_struct(CNST_TABLE_REF(((long) 37)),
											(int) (((long) 5)));
										{	/* Module/class.scm 442 */
											obj_t BgL_auxz00_2832;

											int BgL_auxz00_2830;

											BgL_auxz00_2832 = BBOOL(BgL_arg3040z00_1145);
											BgL_auxz00_2830 = (int) (((long) 4));
											STRUCT_SET(BgL_newz00_1767, BgL_auxz00_2830,
												BgL_auxz00_2832);
										}
										{	/* Module/class.scm 442 */
											int BgL_auxz00_2835;

											BgL_auxz00_2835 = (int) (((long) 3));
											STRUCT_SET(BgL_newz00_1767, BgL_auxz00_2835, BTRUE);
										}
										{	/* Module/class.scm 442 */
											int BgL_auxz00_2838;

											BgL_auxz00_2838 = (int) (((long) 2));
											STRUCT_SET(BgL_newz00_1767, BgL_auxz00_2838,
												BgL_arg3039z00_1144);
										}
										{	/* Module/class.scm 442 */
											obj_t BgL_auxz00_2843;

											int BgL_auxz00_2841;

											BgL_auxz00_2843 = BINT(((long) 19));
											BgL_auxz00_2841 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_1767, BgL_auxz00_2841,
												BgL_auxz00_2843);
										}
										{	/* Module/class.scm 442 */
											int BgL_auxz00_2846;

											BgL_auxz00_2846 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_1767, BgL_auxz00_2846,
												BgL_arg3037z00_1142);
										}
										BGl_za2objectzd2unitza2zd2zzmodule_classz00 =
											BgL_newz00_1767;
						}}}
						{	/* Module/class.scm 447 */
							bool_t BgL_testz00_2849;

							{	/* Module/class.scm 447 */
								obj_t BgL_oz00_1793;

								BgL_oz00_1793 = BGl_za2methodzd2unitza2zd2zzmodule_classz00;
								if (STRUCTP(BgL_oz00_1793))
									{	/* Module/class.scm 447 */
										BgL_testz00_2849 =
											(STRUCT_KEY(BgL_oz00_1793) ==
											CNST_TABLE_REF(((long) 37)));
									}
								else
									{	/* Module/class.scm 447 */
										BgL_testz00_2849 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_2849)
								{	/* Module/class.scm 447 */
									BFALSE;
								}
							else
								{	/* Module/class.scm 449 */
									obj_t BgL_arg3043z00_1148;

									obj_t BgL_arg3045z00_1150;

									bool_t BgL_arg3046z00_1151;

									BgL_arg3043z00_1148 = CNST_TABLE_REF(((long) 38));
									BgL_arg3045z00_1150 = CNST_TABLE_REF(((long) 36));
									BgL_arg3046z00_1151 =
										(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 30)));
									{	/* Module/class.scm 449 */
										obj_t BgL_newz00_1805;

										BgL_newz00_1805 =
											create_struct(CNST_TABLE_REF(((long) 37)),
											(int) (((long) 5)));
										{	/* Module/class.scm 449 */
											obj_t BgL_auxz00_2864;

											int BgL_auxz00_2862;

											BgL_auxz00_2864 = BBOOL(BgL_arg3046z00_1151);
											BgL_auxz00_2862 = (int) (((long) 4));
											STRUCT_SET(BgL_newz00_1805, BgL_auxz00_2862,
												BgL_auxz00_2864);
										}
										{	/* Module/class.scm 449 */
											int BgL_auxz00_2867;

											BgL_auxz00_2867 = (int) (((long) 3));
											STRUCT_SET(BgL_newz00_1805, BgL_auxz00_2867, BTRUE);
										}
										{	/* Module/class.scm 449 */
											int BgL_auxz00_2870;

											BgL_auxz00_2870 = (int) (((long) 2));
											STRUCT_SET(BgL_newz00_1805, BgL_auxz00_2870,
												BgL_arg3045z00_1150);
										}
										{	/* Module/class.scm 449 */
											obj_t BgL_auxz00_2875;

											int BgL_auxz00_2873;

											BgL_auxz00_2875 = BINT(((long) 21));
											BgL_auxz00_2873 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_1805, BgL_auxz00_2873,
												BgL_auxz00_2875);
										}
										{	/* Module/class.scm 449 */
											int BgL_auxz00_2878;

											BgL_auxz00_2878 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_1805, BgL_auxz00_2878,
												BgL_arg3043z00_1148);
										}
										BGl_za2methodzd2unitza2zd2zzmodule_classz00 =
											BgL_newz00_1805;
						}}}
						{	/* Module/class.scm 456 */
							bool_t BgL_testz00_2881;

							{	/* Module/class.scm 456 */
								obj_t BgL_oz00_1831;

								BgL_oz00_1831 = BGl_za2genericzd2unitza2zd2zzmodule_classz00;
								if (STRUCTP(BgL_oz00_1831))
									{	/* Module/class.scm 456 */
										BgL_testz00_2881 =
											(STRUCT_KEY(BgL_oz00_1831) ==
											CNST_TABLE_REF(((long) 37)));
									}
								else
									{	/* Module/class.scm 456 */
										BgL_testz00_2881 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_2881)
								{	/* Module/class.scm 456 */
									BFALSE;
								}
							else
								{	/* Module/class.scm 458 */
									obj_t BgL_arg3048z00_1153;

									obj_t BgL_arg3050z00_1155;

									bool_t BgL_arg3051z00_1156;

									BgL_arg3048z00_1153 = CNST_TABLE_REF(((long) 39));
									BgL_arg3050z00_1155 = CNST_TABLE_REF(((long) 36));
									BgL_arg3051z00_1156 =
										(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 30)));
									{	/* Module/class.scm 458 */
										obj_t BgL_newz00_1843;

										BgL_newz00_1843 =
											create_struct(CNST_TABLE_REF(((long) 37)),
											(int) (((long) 5)));
										{	/* Module/class.scm 458 */
											obj_t BgL_auxz00_2896;

											int BgL_auxz00_2894;

											BgL_auxz00_2896 = BBOOL(BgL_arg3051z00_1156);
											BgL_auxz00_2894 = (int) (((long) 4));
											STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2894,
												BgL_auxz00_2896);
										}
										{	/* Module/class.scm 458 */
											int BgL_auxz00_2899;

											BgL_auxz00_2899 = (int) (((long) 3));
											STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2899, BTRUE);
										}
										{	/* Module/class.scm 458 */
											int BgL_auxz00_2902;

											BgL_auxz00_2902 = (int) (((long) 2));
											STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2902,
												BgL_arg3050z00_1155);
										}
										{	/* Module/class.scm 458 */
											obj_t BgL_auxz00_2907;

											int BgL_auxz00_2905;

											BgL_auxz00_2907 = BINT(((long) 21));
											BgL_auxz00_2905 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2905,
												BgL_auxz00_2907);
										}
										{	/* Module/class.scm 458 */
											int BgL_auxz00_2910;

											BgL_auxz00_2910 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_1843, BgL_auxz00_2910,
												BgL_arg3048z00_1153);
										}
										BGl_za2genericzd2unitza2zd2zzmodule_classz00 =
											BgL_newz00_1843;
						}}}
						BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BNIL;
						BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BNIL;
						return BUNSPEC;
					}
				}
			}
		}
	}



/* _class-finalizer-add-static! */
	obj_t BGl__classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00(obj_t
		BgL_envz00_1971)
	{
		AN_OBJECT;
		{	/* Module/class.scm 435 */
			return BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00();
		}
	}



/* force-class-accesses */
	obj_t BGl_forcezd2classzd2accessesz00zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 476 */
			{	/* Module/class.scm 478 */
				obj_t BgL_g2463z00_1158;

				BgL_g2463z00_1158 =
					bgl_reverse_bang(BGl_za2classzd2accessesza2zd2zzmodule_classz00);
				{
					obj_t BgL_curz00_1162;

					obj_t BgL_nextz00_1163;

					obj_t BgL_accessz00_1164;

					BgL_curz00_1162 = BgL_g2463z00_1158;
					BgL_nextz00_1163 = BNIL;
					BgL_accessz00_1164 = BNIL;
				BgL_zc3anonymousza33053ze3z83_1165:
					if (NULLP(BgL_curz00_1162))
						{	/* Module/class.scm 481 */
							if (NULLP(BgL_nextz00_1163))
								{	/* Module/class.scm 482 */
									return BgL_accessz00_1164;
								}
							else
								{
									obj_t BgL_nextz00_2920;

									obj_t BgL_curz00_2919;

									BgL_curz00_2919 = BgL_nextz00_1163;
									BgL_nextz00_2920 = BNIL;
									BgL_nextz00_1163 = BgL_nextz00_2920;
									BgL_curz00_1162 = BgL_curz00_2919;
									goto BgL_zc3anonymousza33053ze3z83_1165;
								}
						}
					else
						{	/* Module/class.scm 485 */
							obj_t BgL_classz00_1168;

							BgL_classz00_1168 = CAR(CAR(BgL_curz00_1162));
							{	/* Module/class.scm 485 */
								obj_t BgL_superz00_1169;

								if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_1168,
										BGl_tclassz00zzobject_classz00))
									{	/* Module/class.scm 487 */
										BgL_tclassz00_bglt BgL_obj2248z00_1874;

										BgL_obj2248z00_1874 =
											(BgL_tclassz00_bglt) (BgL_classz00_1168);
										{
											obj_t BgL_auxz00_2926;

											{	/* Module/class.scm 487 */
												BgL_objectz00_bglt BgL_auxz00_2927;

												BgL_auxz00_2927 =
													(BgL_objectz00_bglt) (BgL_obj2248z00_1874);
												BgL_auxz00_2926 = BGL_OBJECT_WIDENING(BgL_auxz00_2927);
											}
											BgL_superz00_1169 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2926))->
												BgL_itszd2superzd2);
										}
									}
								else
									{	/* Module/class.scm 488 */
										BgL_jclassz00_bglt BgL_obj2340z00_1875;

										BgL_obj2340z00_1875 =
											(BgL_jclassz00_bglt) (BgL_classz00_1168);
										{
											obj_t BgL_auxz00_2932;

											{	/* Module/class.scm 488 */
												BgL_objectz00_bglt BgL_auxz00_2933;

												BgL_auxz00_2933 =
													(BgL_objectz00_bglt) (BgL_obj2340z00_1875);
												BgL_auxz00_2932 = BGL_OBJECT_WIDENING(BgL_auxz00_2933);
											}
											BgL_superz00_1169 =
												(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2932))->
												BgL_itszd2superzd2);
										}
									}
								{	/* Module/class.scm 486 */

									if ((BgL_superz00_1169 == BgL_classz00_1168))
										{	/* Module/class.scm 492 */
											obj_t BgL_arg3057z00_1171;

											obj_t BgL_arg3058z00_1172;

											BgL_arg3057z00_1171 = CDR(BgL_curz00_1162);
											{	/* Module/class.scm 494 */
												obj_t BgL_arg3059z00_1173;

												{	/* Module/class.scm 494 */
													obj_t BgL_arg3060z00_1174;

													BgL_arg3060z00_1174 = CDR(CAR(BgL_curz00_1162));
													BgL_arg3059z00_1173 =
														PROCEDURE_ENTRY(BgL_arg3060z00_1174)
														(BgL_arg3060z00_1174, BEOA);
												}
												BgL_arg3058z00_1172 =
													bgl_append2(BgL_arg3059z00_1173, BgL_accessz00_1164);
											}
											{
												obj_t BgL_accessz00_2946;

												obj_t BgL_curz00_2945;

												BgL_curz00_2945 = BgL_arg3057z00_1171;
												BgL_accessz00_2946 = BgL_arg3058z00_1172;
												BgL_accessz00_1164 = BgL_accessz00_2946;
												BgL_curz00_1162 = BgL_curz00_2945;
												goto BgL_zc3anonymousza33053ze3z83_1165;
											}
										}
									else
										{	/* Module/class.scm 496 */
											bool_t BgL_testz00_2947;

											if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_1168,
													BGl_tclassz00zzobject_classz00))
												{	/* Module/class.scm 496 */
													if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_1169,
															BGl_tclassz00zzobject_classz00))
														{	/* Module/class.scm 496 */
															BgL_testz00_2947 = ((bool_t) 0);
														}
													else
														{	/* Module/class.scm 496 */
															BgL_testz00_2947 = ((bool_t) 1);
														}
												}
											else
												{	/* Module/class.scm 496 */
													BgL_testz00_2947 = ((bool_t) 0);
												}
											if (BgL_testz00_2947)
												{	/* Module/class.scm 496 */
													if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_1169,
															BGl_typez00zztype_typez00))
														{	/* Module/class.scm 497 */
															{	/* Module/class.scm 501 */
																BgL_tclassz00_bglt BgL_obj2253z00_1883;

																obj_t BgL_val2252z00_1884;

																BgL_obj2253z00_1883 =
																	(BgL_tclassz00_bglt) (BgL_classz00_1168);
																BgL_val2252z00_1884 = BNIL;
																{
																	obj_t BgL_auxz00_2955;

																	{	/* Module/class.scm 501 */
																		BgL_objectz00_bglt BgL_auxz00_2956;

																		BgL_auxz00_2956 =
																			(BgL_objectz00_bglt)
																			(BgL_obj2253z00_1883);
																		BgL_auxz00_2955 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_2956);
																	}
																	((((BgL_tclassz00_bglt)
																				CREF(BgL_auxz00_2955))->BgL_slotsz00) =
																		((obj_t) BgL_val2252z00_1884), BUNSPEC);
																}
															}
															{
																obj_t BgL_curz00_2960;

																BgL_curz00_2960 = CDR(BgL_curz00_1162);
																BgL_curz00_1162 = BgL_curz00_2960;
																goto BgL_zc3anonymousza33053ze3z83_1165;
															}
														}
													else
														{	/* Module/class.scm 505 */
															obj_t BgL_arg3065z00_1179;

															obj_t BgL_arg3066z00_1180;

															BgL_arg3065z00_1179 = CDR(BgL_curz00_1162);
															{	/* Module/class.scm 507 */
																obj_t BgL_arg3067z00_1181;

																{	/* Module/class.scm 507 */
																	obj_t BgL_arg3068z00_1182;

																	BgL_arg3068z00_1182 =
																		CDR(CAR(BgL_curz00_1162));
																	BgL_arg3067z00_1181 =
																		PROCEDURE_ENTRY(BgL_arg3068z00_1182)
																		(BgL_arg3068z00_1182, BEOA);
																}
																BgL_arg3066z00_1180 =
																	bgl_append2(BgL_arg3067z00_1181,
																	BgL_accessz00_1164);
															}
															{
																obj_t BgL_accessz00_2969;

																obj_t BgL_curz00_2968;

																BgL_curz00_2968 = BgL_arg3065z00_1179;
																BgL_accessz00_2969 = BgL_arg3066z00_1180;
																BgL_accessz00_1164 = BgL_accessz00_2969;
																BgL_curz00_1162 = BgL_curz00_2968;
																goto BgL_zc3anonymousza33053ze3z83_1165;
															}
														}
												}
											else
												{	/* Module/class.scm 509 */
													bool_t BgL_testz00_2970;

													if (BGl_iszd2azf3z21zz__objectz00(BgL_classz00_1168,
															BGl_jclassz00zzobject_classz00))
														{	/* Module/class.scm 509 */
															if (BGl_iszd2azf3z21zz__objectz00
																(BgL_superz00_1169,
																	BGl_jclassz00zzobject_classz00))
																{	/* Module/class.scm 509 */
																	BgL_testz00_2970 = ((bool_t) 0);
																}
															else
																{	/* Module/class.scm 509 */
																	BgL_testz00_2970 = ((bool_t) 1);
																}
														}
													else
														{	/* Module/class.scm 509 */
															BgL_testz00_2970 = ((bool_t) 0);
														}
													if (BgL_testz00_2970)
														{	/* Module/class.scm 509 */
															if (BGl_iszd2azf3z21zz__objectz00
																(BgL_superz00_1169, BGl_typez00zztype_typez00))
																{	/* Module/class.scm 510 */
																	{	/* Module/class.scm 514 */
																		BgL_jclassz00_bglt BgL_obj2345z00_1893;

																		obj_t BgL_val2344z00_1894;

																		BgL_obj2345z00_1893 =
																			(BgL_jclassz00_bglt) (BgL_classz00_1168);
																		BgL_val2344z00_1894 = BNIL;
																		{
																			obj_t BgL_auxz00_2978;

																			{	/* Module/class.scm 514 */
																				BgL_objectz00_bglt BgL_auxz00_2979;

																				BgL_auxz00_2979 =
																					(BgL_objectz00_bglt)
																					(BgL_obj2345z00_1893);
																				BgL_auxz00_2978 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2979);
																			}
																			((((BgL_jclassz00_bglt)
																						CREF(BgL_auxz00_2978))->
																					BgL_slotsz00) =
																				((obj_t) BgL_val2344z00_1894), BUNSPEC);
																		}
																	}
																	{
																		obj_t BgL_curz00_2983;

																		BgL_curz00_2983 = CDR(BgL_curz00_1162);
																		BgL_curz00_1162 = BgL_curz00_2983;
																		goto BgL_zc3anonymousza33053ze3z83_1165;
																	}
																}
															else
																{	/* Module/class.scm 518 */
																	obj_t BgL_arg3073z00_1187;

																	obj_t BgL_arg3074z00_1188;

																	BgL_arg3073z00_1187 = CDR(BgL_curz00_1162);
																	{	/* Module/class.scm 520 */
																		obj_t BgL_arg3075z00_1189;

																		{	/* Module/class.scm 520 */
																			obj_t BgL_arg3076z00_1190;

																			BgL_arg3076z00_1190 =
																				CDR(CAR(BgL_curz00_1162));
																			BgL_arg3075z00_1189 =
																				PROCEDURE_ENTRY(BgL_arg3076z00_1190)
																				(BgL_arg3076z00_1190, BEOA);
																		}
																		BgL_arg3074z00_1188 =
																			bgl_append2(BgL_arg3075z00_1189,
																			BgL_accessz00_1164);
																	}
																	{
																		obj_t BgL_accessz00_2992;

																		obj_t BgL_curz00_2991;

																		BgL_curz00_2991 = BgL_arg3073z00_1187;
																		BgL_accessz00_2992 = BgL_arg3074z00_1188;
																		BgL_accessz00_1164 = BgL_accessz00_2992;
																		BgL_curz00_1162 = BgL_curz00_2991;
																		goto BgL_zc3anonymousza33053ze3z83_1165;
																	}
																}
														}
													else
														{	/* Module/class.scm 522 */
															bool_t BgL_testz00_2993;

															if (BGl_iszd2azf3z21zz__objectz00
																(BgL_classz00_1168,
																	BGl_tclassz00zzobject_classz00))
																{	/* Module/class.scm 522 */
																	obj_t BgL_auxz00_2996;

																	{	/* Module/class.scm 522 */
																		BgL_tclassz00_bglt BgL_obj2251z00_1901;

																		BgL_obj2251z00_1901 =
																			(BgL_tclassz00_bglt) (BgL_superz00_1169);
																		{
																			obj_t BgL_auxz00_2998;

																			{	/* Module/class.scm 522 */
																				BgL_objectz00_bglt BgL_auxz00_2999;

																				BgL_auxz00_2999 =
																					(BgL_objectz00_bglt)
																					(BgL_obj2251z00_1901);
																				BgL_auxz00_2998 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2999);
																			}
																			BgL_auxz00_2996 =
																				(((BgL_tclassz00_bglt)
																					CREF(BgL_auxz00_2998))->BgL_slotsz00);
																		}
																	}
																	BgL_testz00_2993 =
																		(BgL_auxz00_2996 == BUNSPEC);
																}
															else
																{	/* Module/class.scm 522 */
																	BgL_testz00_2993 = ((bool_t) 0);
																}
															if (BgL_testz00_2993)
																{	/* Module/class.scm 524 */
																	obj_t BgL_arg3079z00_1193;

																	obj_t BgL_arg3081z00_1194;

																	BgL_arg3079z00_1193 = CDR(BgL_curz00_1162);
																	BgL_arg3081z00_1194 =
																		MAKE_PAIR(CAR(BgL_curz00_1162),
																		BgL_nextz00_1163);
																	{
																		obj_t BgL_nextz00_3008;

																		obj_t BgL_curz00_3007;

																		BgL_curz00_3007 = BgL_arg3079z00_1193;
																		BgL_nextz00_3008 = BgL_arg3081z00_1194;
																		BgL_nextz00_1163 = BgL_nextz00_3008;
																		BgL_curz00_1162 = BgL_curz00_3007;
																		goto BgL_zc3anonymousza33053ze3z83_1165;
																	}
																}
															else
																{	/* Module/class.scm 527 */
																	bool_t BgL_testz00_3009;

																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_classz00_1168,
																			BGl_jclassz00zzobject_classz00))
																		{	/* Module/class.scm 527 */
																			obj_t BgL_auxz00_3012;

																			{	/* Module/class.scm 527 */
																				BgL_jclassz00_bglt BgL_obj2343z00_1905;

																				BgL_obj2343z00_1905 =
																					(BgL_jclassz00_bglt)
																					(BgL_superz00_1169);
																				{
																					obj_t BgL_auxz00_3014;

																					{	/* Module/class.scm 527 */
																						BgL_objectz00_bglt BgL_auxz00_3015;

																						BgL_auxz00_3015 =
																							(BgL_objectz00_bglt)
																							(BgL_obj2343z00_1905);
																						BgL_auxz00_3014 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_3015);
																					}
																					BgL_auxz00_3012 =
																						(((BgL_jclassz00_bglt)
																							CREF(BgL_auxz00_3014))->
																						BgL_slotsz00);
																				}
																			}
																			BgL_testz00_3009 =
																				(BgL_auxz00_3012 == BUNSPEC);
																		}
																	else
																		{	/* Module/class.scm 527 */
																			BgL_testz00_3009 = ((bool_t) 0);
																		}
																	if (BgL_testz00_3009)
																		{	/* Module/class.scm 529 */
																			obj_t BgL_arg3084z00_1197;

																			obj_t BgL_arg3085z00_1198;

																			BgL_arg3084z00_1197 =
																				CDR(BgL_curz00_1162);
																			BgL_arg3085z00_1198 =
																				MAKE_PAIR(CAR(BgL_curz00_1162),
																				BgL_nextz00_1163);
																			{
																				obj_t BgL_nextz00_3024;

																				obj_t BgL_curz00_3023;

																				BgL_curz00_3023 = BgL_arg3084z00_1197;
																				BgL_nextz00_3024 = BgL_arg3085z00_1198;
																				BgL_nextz00_1163 = BgL_nextz00_3024;
																				BgL_curz00_1162 = BgL_curz00_3023;
																				goto BgL_zc3anonymousza33053ze3z83_1165;
																			}
																		}
																	else
																		{	/* Module/class.scm 534 */
																			obj_t BgL_arg3087z00_1200;

																			obj_t BgL_arg3088z00_1201;

																			BgL_arg3087z00_1200 =
																				CDR(BgL_curz00_1162);
																			{	/* Module/class.scm 536 */
																				obj_t BgL_arg3089z00_1202;

																				{	/* Module/class.scm 536 */
																					obj_t BgL_arg3090z00_1203;

																					BgL_arg3090z00_1203 =
																						CDR(CAR(BgL_curz00_1162));
																					BgL_arg3089z00_1202 =
																						PROCEDURE_ENTRY(BgL_arg3090z00_1203)
																						(BgL_arg3090z00_1203, BEOA);
																				}
																				BgL_arg3088z00_1201 =
																					bgl_append2(BgL_arg3089z00_1202,
																					BgL_accessz00_1164);
																			}
																			{
																				obj_t BgL_accessz00_3032;

																				obj_t BgL_curz00_3031;

																				BgL_curz00_3031 = BgL_arg3087z00_1200;
																				BgL_accessz00_3032 =
																					BgL_arg3088z00_1201;
																				BgL_accessz00_1164 = BgL_accessz00_3032;
																				BgL_curz00_1162 = BgL_curz00_3031;
																				goto BgL_zc3anonymousza33053ze3z83_1165;
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_classz00()
	{
		AN_OBJECT;
		{	/* Module/class.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzobject_plainzd2accesszd2(((long)
					29596083), BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
			return BGl_modulezd2initializa7ationz75zzobject_widezd2accesszd2(((long)
					171489227), BSTRING_TO_STRING(BGl_string3158z00zzmodule_classz00));
		}
	}

#ifdef __cplusplus
}
#endif
