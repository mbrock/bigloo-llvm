/*===========================================================================*/
/*   (Module/java.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/java.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

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

	typedef struct BgL_jklassz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_srcz00;
		obj_t BgL_locz00;
		obj_t BgL_idz00;
		obj_t BgL_iddz00;
		obj_t BgL_jnamez00;
		obj_t BgL_packagez00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_constructorsz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_modulez00;
	}                *BgL_jklassz00_bglt;

	typedef struct BgL_jmethodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_srcz00;
		obj_t BgL_idz00;
		obj_t BgL_argsz00;
		obj_t BgL_jnamez00;
		obj_t BgL_modifiersz00;
	}                 *BgL_jmethodz00_bglt;

	typedef struct BgL_jconstructorz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_srcz00;
		obj_t BgL_idz00;
		obj_t BgL_argsz00;
		obj_t BgL_jnamez00;
		obj_t BgL_modifiersz00;
	}                      *BgL_jconstructorz00_bglt;


	static obj_t BGl_objectzd2ze3structzd2jmeth2811ze3zzmodule_javaz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2jklas2815ze3zzmodule_javaz00(obj_t,
		obj_t);
	extern obj_t BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_javazd2finaliza7erz75zzmodule_javaz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static bool_t BGl_argzd2listzf3z21zzmodule_javaz00(obj_t);
	static obj_t BGl__jklasszd2nilzd2zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_zc3anonymousza32830ze3z83zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32831ze3z83zzmodule_javaz00(obj_t, obj_t,
		obj_t);
	static BgL_jclassz00_bglt
		BGl_declarezd2javazd2classz12z12zzmodule_javaz00(BgL_jklassz00_bglt);
	static bool_t BGl_everyzf3zf3zzmodule_javaz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_za2jklassesza2z00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl__jklasszf3zf3zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_javaz00();
	static obj_t BGl_za2javazd2classesza2zd2zzmodule_javaz00 = BUNSPEC;
	static bool_t BGl_javazd2declarezd2classz00zzmodule_javaz00(obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t);
	static BgL_jclassz00_bglt
		BGl_declarezd2jklasszd2zzmodule_javaz00(BgL_jklassz00_bglt);
	static obj_t BGl_jconstructorz00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl__bindzd2jklassz12zc0zzmodule_javaz00(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_javaz00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2javazd2classz00zzmodule_javaz00(obj_t);
	extern bool_t BGl_typezd2identzf3z21zzast_identz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t
		BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t,
		obj_t, BgL_jclassz00_bglt, bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_javazd2declarezd2componentz00zzmodule_javaz00(obj_t,
		BgL_jklassz00_bglt, obj_t);
	static obj_t BGl_z52thezd2jklasszd2nilz52zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl_javazd2producerzd2zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl__jmethodzf3zf3zzmodule_javaz00(obj_t, obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_jmethodz00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl__makezd2javazd2compilerz00zzmodule_javaz00(obj_t);
	static obj_t BGl__javazd2finaliza7erz75zzmodule_javaz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_javaz00();
	static obj_t BGl_javazd2declarezd2arrayz00zzmodule_javaz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__jconstructorzf3zf3zzmodule_javaz00(obj_t, obj_t);
	static bool_t BGl_modifierzd2listzf3z21zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2javazd2compilerz00zzmodule_javaz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_javaz00 = BUNSPEC;
	static BgL_jconstructorz00_bglt BGl_jconstructorzd2nilzd2zzmodule_javaz00();
	static obj_t BGl__z52allocatezd2jklassz80zzmodule_javaz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_javaz00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	extern obj_t BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt
		BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t, obj_t, obj_t);
	static BgL_jmethodz00_bglt BGl_jmethodzd2nilzd2zzmodule_javaz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33060ze3z83zzmodule_javaz00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33071ze3z83zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_javazd2errorzd2zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33074ze3z83zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_za2jclassesza2z00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl_javazd2parsezd2classz00zzmodule_javaz00(obj_t, obj_t, obj_t,
		bool_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_javaz00();
	static obj_t BGl_z52thezd2jmethodzd2nilz52zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2jmethodz80zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t);
	extern BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_javazd2parserzd2zzmodule_javaz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__jmethodzd2nilzd2zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static BgL_jklassz00_bglt BGl_jklasszd2nilzd2zzmodule_javaz00();
	static obj_t BGl_bindzd2jklassz12zc0zzmodule_javaz00(BgL_jklassz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec2809z83zzmodule_javaz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2813z83zzmodule_javaz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2817z83zzmodule_javaz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__jconstructorzd2nilzd2zzmodule_javaz00(obj_t);
	static obj_t BGl__z52allocatezd2jconstructorz80zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_javazd2refinezd2classz00zzmodule_javaz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33134ze3z83zzmodule_javaz00(obj_t);
	extern BgL_typez00_bglt
		BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_objectzd2ze3structzd2jcons2807ze3zzmodule_javaz00(obj_t,
		obj_t);
	static obj_t BGl_jklassz00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl_z52thezd2jconstructorzd2nilz52zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl__findzd2javazd2classz00zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl__heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_javaz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_za2jexportedza2z00zzmodule_javaz00 = BUNSPEC;
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_javaz00();
	static obj_t __cnst[21];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2jconstructorzd2envz52zzmodule_javaz00,
		BgL_bgl__za752allocateza7d2j3339z00,
		BGl__z52allocatezd2jconstructorz80zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_jmethodzd2nilzd2envz00zzmodule_javaz00,
		BgL_bgl__jmethodza7d2nilza7d3340z00, BGl__jmethodzd2nilzd2zzmodule_javaz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_jklasszf3zd2envz21zzmodule_javaz00,
		BgL_bgl__jklassza7f3za7f3za7za7m3341z00, BGl__jklasszf3zf3zzmodule_javaz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_javazd2finaliza7erzd2envza7zzmodule_javaz00,
		BgL_bgl__javaza7d2finaliza7a3342z00,
		BGl__javazd2finaliza7erz75zzmodule_javaz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_jconstructorzf3zd2envz21zzmodule_javaz00,
		BgL_bgl__jconstructorza7f33343za7, BGl__jconstructorzf3zf3zzmodule_javaz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2javazd2compilerzd2envzd2zzmodule_javaz00,
		BgL_bgl__makeza7d2javaza7d2c3344z00,
		BGl__makezd2javazd2compilerz00zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_jklasszd2nilzd2envz00zzmodule_javaz00,
		BgL_bgl__jklassza7d2nilza7d23345z00, BGl__jklasszd2nilzd2zzmodule_javaz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2javazd2classzd2envzd2zzmodule_javaz00,
		BgL_bgl__findza7d2javaza7d2c3346z00,
		BGl__findzd2javazd2classz00zzmodule_javaz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2jmethodzd2envz52zzmodule_javaz00,
		BgL_bgl__za752allocateza7d2j3347z00,
		BGl__z52allocatezd2jmethodz80zzmodule_javaz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_bindzd2jklassz12zd2envz12zzmodule_javaz00,
		BgL_bgl__bindza7d2jklassza713348z00,
		BGl__bindzd2jklassz12zc0zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_jmethodzf3zd2envz21zzmodule_javaz00,
		BgL_bgl__jmethodza7f3za7f3za7za73349z00, BGl__jmethodzf3zf3zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3297z00zzmodule_javaz00,
		BgL_bgl_za7c3anonymousza7a323350z00,
		BGl_zc3anonymousza32831ze3z83zzmodule_javaz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3298z00zzmodule_javaz00,
		BgL_bgl_za7c3anonymousza7a323351z00,
		BGl_zc3anonymousza32830ze3z83zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3320z00zzmodule_javaz00,
		BgL_bgl_za7c3anonymousza7a333352z00,
		BGl_zc3anonymousza33074ze3z83zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3321z00zzmodule_javaz00,
		BgL_bgl_za7c3anonymousza7a333353z00,
		BGl_zc3anonymousza33071ze3z83zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3324z00zzmodule_javaz00,
		BgL_bgl_objectza7d2za7e3stru3354z00,
		BGl_objectzd2ze3structzd2jcons2807ze3zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3326z00zzmodule_javaz00,
		BgL_bgl_structza7b2objectza73355z00,
		BGl_structzb2objectzd2ze3objec2809z83zzmodule_javaz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3328z00zzmodule_javaz00,
		BgL_bgl_objectza7d2za7e3stru3356z00,
		BGl_objectzd2ze3structzd2jmeth2811ze3zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3330z00zzmodule_javaz00,
		BgL_bgl_objectza7d2za7e3stru3357z00,
		BGl_objectzd2ze3structzd2jklas2815ze3zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3329z00zzmodule_javaz00,
		BgL_bgl_structza7b2objectza73358z00,
		BGl_structzb2objectzd2ze3objec2813z83zzmodule_javaz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3331z00zzmodule_javaz00,
		BgL_bgl_structza7b2objectza73359z00,
		BGl_structzb2objectzd2ze3objec2817z83zzmodule_javaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2jklasszd2envz52zzmodule_javaz00,
		BgL_bgl__za752allocateza7d2j3360z00,
		BGl__z52allocatezd2jklassz80zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3300z00zzmodule_javaz00,
		BgL_bgl_string3300za700za7za7m3361za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string3301z00zzmodule_javaz00,
		BgL_bgl_string3301za700za7za7m3362za7, "Illegal `java' clause", 21);
	      DEFINE_STRING(BGl_string3302z00zzmodule_javaz00,
		BgL_bgl_string3302za700za7za7m3363za7, "Illegal java export form", 24);
	      DEFINE_STRING(BGl_string3303z00zzmodule_javaz00,
		BgL_bgl_string3303za700za7za7m3364za7, "Illegal foreign class definition",
		32);
	      DEFINE_STRING(BGl_string3304z00zzmodule_javaz00,
		BgL_bgl_string3304za700za7za7m3365za7, "", 0);
	      DEFINE_STRING(BGl_string3305z00zzmodule_javaz00,
		BgL_bgl_string3305za700za7za7m3366za7, "Can't find main class declaration",
		33);
	      DEFINE_STRING(BGl_string3306z00zzmodule_javaz00,
		BgL_bgl_string3306za700za7za7m3367za7, "Super class is not a Java class",
		31);
	      DEFINE_STRING(BGl_string3307z00zzmodule_javaz00,
		BgL_bgl_string3307za700za7za7m3368za7, "Java", 4);
	      DEFINE_STRING(BGl_string3308z00zzmodule_javaz00,
		BgL_bgl_string3308za700za7za7m3369za7,
		"Re-exportation of global variable (ignored)", 43);
	      DEFINE_STRING(BGl_string3310z00zzmodule_javaz00,
		BgL_bgl_string3310za700za7za7m3370za7, "Illegal java class", 18);
	      DEFINE_STRING(BGl_string3309z00zzmodule_javaz00,
		BgL_bgl_string3309za700za7za7m3371za7,
		"Unbound (or static) global variable", 35);
	      DEFINE_STRING(BGl_string3299z00zzmodule_javaz00,
		BgL_bgl_string3299za700za7za7m3372za7, "Illegal java variable", 21);
	      DEFINE_STRING(BGl_string3311z00zzmodule_javaz00,
		BgL_bgl_string3311za700za7za7m3373za7, "Illegal Java class redefinition",
		31);
	      DEFINE_STRING(BGl_string3312z00zzmodule_javaz00,
		BgL_bgl_string3312za700za7za7m3374za7, "Illegal class field", 19);
	      DEFINE_STRING(BGl_string3313z00zzmodule_javaz00,
		BgL_bgl_string3313za700za7za7m3375za7, "Illegal class field `", 21);
	      DEFINE_STRING(BGl_string3314z00zzmodule_javaz00,
		BgL_bgl_string3314za700za7za7m3376za7, "'", 1);
	      DEFINE_STRING(BGl_string3315z00zzmodule_javaz00,
		BgL_bgl_string3315za700za7za7m3377za7, "<init>", 6);
	      DEFINE_STRING(BGl_string3316z00zzmodule_javaz00,
		BgL_bgl_string3316za700za7za7m3378za7, "Illegal Java method", 19);
	      DEFINE_STRING(BGl_string3317z00zzmodule_javaz00,
		BgL_bgl_string3317za700za7za7m3379za7,
		"Illegal Java method (wrong modifiers)", 37);
	      DEFINE_STRING(BGl_string3318z00zzmodule_javaz00,
		BgL_bgl_string3318za700za7za7m3380za7, "Illegal Java field", 18);
	      DEFINE_STRING(BGl_string3319z00zzmodule_javaz00,
		BgL_bgl_string3319za700za7za7m3381za7,
		"Illegal Java field (wrong modifiers)", 36);
	      DEFINE_STRING(BGl_string3322z00zzmodule_javaz00,
		BgL_bgl_string3322za700za7za7m3382za7,
		"Illegal first argument of virtual method", 40);
	      DEFINE_STRING(BGl_string3323z00zzmodule_javaz00,
		BgL_bgl_string3323za700za7za7m3383za7, "Illegal array item type", 23);
	      DEFINE_STRING(BGl_string3325z00zzmodule_javaz00,
		BgL_bgl_string3325za700za7za7m3384za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3327z00zzmodule_javaz00,
		BgL_bgl_string3327za700za7za7m3385za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3332z00zzmodule_javaz00,
		BgL_bgl_string3332za700za7za7m3386za7, "module_java", 11);
	      DEFINE_STRING(BGl_string3333z00zzmodule_javaz00,
		BgL_bgl_string3333za700za7za7m3387za7,
		"_ jconstructor jmethod static (public private protected static final synchronized abstract) public constructor method field foreign abstract - %% make-heap make-add-heap jklass array abstract-class class export java ",
		216);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_jconstructorzd2nilzd2envz00zzmodule_javaz00,
		BgL_bgl__jconstructorza7d23388za7,
		BGl__jconstructorzd2nilzd2zzmodule_javaz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2addzd2jclassz12zd2envzc0zzmodule_javaz00,
		BgL_bgl__heapza7d2addza7d2jc3389z00,
		BGl__heapzd2addzd2jclassz12z12zzmodule_javaz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long
		BgL_checksumz00_2403, char *BgL_fromz00_2404)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_javaz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_javaz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_javaz00();
					BGl_cnstzd2initzd2zzmodule_javaz00();
					BGl_importedzd2moduleszd2initz00zzmodule_javaz00();
					BGl_objectzd2initzd2zzmodule_javaz00();
					BGl_methodzd2initzd2zzmodule_javaz00();
					BGl_toplevelzd2initzd2zzmodule_javaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_java");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_java");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_java");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			{	/* Module/java.scm 15 */
				obj_t BgL_cportz00_2375;

				BgL_cportz00_2375 =
					bgl_open_input_string(BGl_string3333z00zzmodule_javaz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2376;

					BgL_iz00_2376 = ((long) 20);
				BgL_loopz00_2377:
					if ((BgL_iz00_2376 == ((long) -1)))
						{	/* Module/java.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/java.scm 15 */
							{	/* Module/java.scm 15 */
								obj_t BgL_arg3335z00_2379;

								{	/* Module/java.scm 15 */

									{	/* Module/java.scm 15 */
										obj_t BgL_locationz00_2381;

										BgL_locationz00_2381 = BBOOL(((bool_t) 0));
										{	/* Module/java.scm 15 */

											BgL_arg3335z00_2379 =
												BGl_readz00zz__readerz00(BgL_cportz00_2375,
												BgL_locationz00_2381);
										}
									}
								}
								{	/* Module/java.scm 15 */
									int BgL_auxz00_2429;

									BgL_auxz00_2429 = (int) (BgL_iz00_2376);
									CNST_TABLE_SET(BgL_auxz00_2429, BgL_arg3335z00_2379);
							}}
							{	/* Module/java.scm 15 */
								int BgL_auxz00_2382;

								BgL_auxz00_2382 = (int) ((BgL_iz00_2376 - ((long) 1)));
								{
									long BgL_iz00_2434;

									BgL_iz00_2434 = (long) (BgL_auxz00_2382);
									BgL_iz00_2376 = BgL_iz00_2434;
									goto BgL_loopz00_2377;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			BGl_za2jklassesza2z00zzmodule_javaz00 = BNIL;
			BGl_za2jclassesza2z00zzmodule_javaz00 = BNIL;
			BGl_za2jexportedza2z00zzmodule_javaz00 = BNIL;
			return (BGl_za2javazd2classesza2zd2zzmodule_javaz00 = BNIL, BUNSPEC);
		}
	}



/* make-java-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2javazd2compilerz00zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 71 */
			{	/* Module/java.scm 72 */
				obj_t BgL_arg2827z00_682;

				BgL_arg2827z00_682 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2827z00_682,
						BGl_proc3298z00zzmodule_javaz00, BGl_proc3297z00zzmodule_javaz00,
						BGl_javazd2finaliza7erzd2envza7zzmodule_javaz00));
			}
		}
	}



/* _make-java-compiler */
	obj_t BGl__makezd2javazd2compilerz00zzmodule_javaz00(obj_t BgL_envz00_2310)
	{
		AN_OBJECT;
		{	/* Module/java.scm 71 */
			return BGl_makezd2javazd2compilerz00zzmodule_javaz00();
		}
	}



/* <anonymous:2831> */
	obj_t BGl_zc3anonymousza32831ze3z83zzmodule_javaz00(obj_t BgL_envz00_2311,
		obj_t BgL_mz00_2312, obj_t BgL_cz00_2313)
	{
		AN_OBJECT;
		{	/* Module/java.scm 74 */
			return
				BGl_javazd2producerzd2zzmodule_javaz00(BgL_mz00_2312, BgL_cz00_2313);
		}
	}



/* <anonymous:2830> */
	obj_t BGl_zc3anonymousza32830ze3z83zzmodule_javaz00(obj_t BgL_envz00_2314,
		obj_t BgL_cz00_2315)
	{
		AN_OBJECT;
		{	/* Module/java.scm 73 */
			{
				obj_t BgL_cz00_685;

				BgL_cz00_685 = BgL_cz00_2315;
				return
					BGl_javazd2producerzd2zzmodule_javaz00
					(BGl_za2moduleza2z00zzmodule_modulez00, BgL_cz00_685);
			}
		}
	}



/* java-error */
	obj_t BGl_javazd2errorzd2zzmodule_javaz00(obj_t BgL_javaz00_23,
		obj_t BgL_msgz00_24)
	{
		AN_OBJECT;
		{	/* Module/java.scm 80 */
			{	/* Module/java.scm 81 */
				obj_t BgL_arg2833z00_693;

				if (PAIRP(BgL_msgz00_24))
					{	/* Module/java.scm 82 */
						BgL_arg2833z00_693 = CAR(BgL_msgz00_24);
					}
				else
					{	/* Module/java.scm 82 */
						BgL_arg2833z00_693 = BGl_string3299z00zzmodule_javaz00;
					}
				{	/* Module/java.scm 81 */
					obj_t BgL_list2835z00_695;

					BgL_list2835z00_695 = MAKE_PAIR(BNIL, BNIL);
					return
						BGl_userzd2errorzd2zztools_errorz00
						(BGl_string3300z00zzmodule_javaz00, BgL_arg2833z00_693,
						BgL_javaz00_23, BgL_list2835z00_695);
				}
			}
		}
	}



/* java-producer */
	obj_t BGl_javazd2producerzd2zzmodule_javaz00(obj_t BgL_modulez00_25,
		obj_t BgL_clausez00_26)
	{
		AN_OBJECT;
		{	/* Module/java.scm 91 */
			{	/* Module/java.scm 92 */
				bool_t BgL_testz00_2447;

				{	/* Module/java.scm 92 */
					obj_t BgL_arg2844z00_712;

					obj_t BgL_arg2845z00_713;

					BgL_arg2844z00_712 = CNST_TABLE_REF(((long) 0));
					{	/* Module/java.scm 92 */
						obj_t BgL_arg2846z00_714;

						BgL_arg2846z00_714 = BGl_thezd2backendzd2zzbackend_backendz00();
						{
							BgL_backendz00_bglt BgL_auxz00_2450;

							BgL_auxz00_2450 = (BgL_backendz00_bglt) (BgL_arg2846z00_714);
							BgL_arg2845z00_713 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2450))->
								BgL_foreignzd2clausezd2supportz00);
					}}
					BgL_testz00_2447 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2844z00_712,
							BgL_arg2845z00_713));
				}
				if (BgL_testz00_2447)
					{
						obj_t BgL_protosz00_698;

						if (PAIRP(BgL_clausez00_26))
							{	/* Module/java.scm 93 */
								BgL_protosz00_698 = CDR(BgL_clausez00_26);
								{
									obj_t BgL_l2786z00_705;

									BgL_l2786z00_705 = BgL_protosz00_698;
								BgL_zc3anonymousza32840ze3z83_706:
									if (PAIRP(BgL_l2786z00_705))
										{	/* Module/java.scm 95 */
											BGl_javazd2parserzd2zzmodule_javaz00(CAR
												(BgL_l2786z00_705), BgL_modulez00_25);
											{
												obj_t BgL_l2786z00_2461;

												BgL_l2786z00_2461 = CDR(BgL_l2786z00_705);
												BgL_l2786z00_705 = BgL_l2786z00_2461;
												goto BgL_zc3anonymousza32840ze3z83_706;
											}
										}
									else
										{	/* Module/java.scm 95 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/java.scm 93 */
								{	/* Module/java.scm 98 */
									obj_t BgL_list2843z00_711;

									BgL_list2843z00_711 =
										MAKE_PAIR(BGl_string3301z00zzmodule_javaz00, BNIL);
									return
										BGl_javazd2errorzd2zzmodule_javaz00(BgL_clausez00_26,
										BgL_list2843z00_711);
								}
							}
					}
				else
					{	/* Module/java.scm 92 */
						return BNIL;
					}
			}
		}
	}



/* java-parser */
	obj_t BGl_javazd2parserzd2zzmodule_javaz00(obj_t BgL_javaz00_27,
		obj_t BgL_modulez00_28)
	{
		AN_OBJECT;
		{	/* Module/java.scm 104 */
			{

				if (PAIRP(BgL_javaz00_27))
					{	/* Module/java.scm 106 */
						obj_t BgL_cdrzd21670zd2_731;

						BgL_cdrzd21670zd2_731 = CDR(BgL_javaz00_27);
						if ((CAR(BgL_javaz00_27) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/java.scm 106 */
								if (PAIRP(BgL_cdrzd21670zd2_731))
									{	/* Module/java.scm 106 */
										obj_t BgL_carzd21673zd2_734;

										obj_t BgL_cdrzd21674zd2_735;

										BgL_carzd21673zd2_734 = CAR(BgL_cdrzd21670zd2_731);
										BgL_cdrzd21674zd2_735 = CDR(BgL_cdrzd21670zd2_731);
										if (SYMBOLP(BgL_carzd21673zd2_734))
											{	/* Module/java.scm 106 */
												if (PAIRP(BgL_cdrzd21674zd2_735))
													{	/* Module/java.scm 106 */
														obj_t BgL_carzd21679zd2_738;

														BgL_carzd21679zd2_738 = CAR(BgL_cdrzd21674zd2_735);
														if (STRINGP(BgL_carzd21679zd2_738))
															{	/* Module/java.scm 106 */
																if (NULLP(CDR(BgL_cdrzd21674zd2_735)))
																	{	/* Module/java.scm 106 */
																		obj_t BgL_arg2878z00_1531;

																		BgL_arg2878z00_1531 =
																			MAKE_PAIR(BgL_javaz00_27,
																			BgL_modulez00_28);
																		return
																			(BGl_za2jexportedza2z00zzmodule_javaz00 =
																			MAKE_PAIR(BgL_arg2878z00_1531,
																				BGl_za2jexportedza2z00zzmodule_javaz00),
																			BUNSPEC);
																	}
																else
																	{	/* Module/java.scm 106 */
																	BgL_tagzd21656zd2_718:
																		{	/* Module/java.scm 111 */
																			obj_t BgL_list2879z00_772;

																			BgL_list2879z00_772 =
																				MAKE_PAIR
																				(BGl_string3302z00zzmodule_javaz00,
																				BNIL);
																			return
																				BGl_javazd2errorzd2zzmodule_javaz00
																				(BgL_javaz00_27, BgL_list2879z00_772);
																		}
																	}
															}
														else
															{	/* Module/java.scm 106 */
																goto BgL_tagzd21656zd2_718;
															}
													}
												else
													{	/* Module/java.scm 106 */
														goto BgL_tagzd21656zd2_718;
													}
											}
										else
											{	/* Module/java.scm 106 */
												goto BgL_tagzd21656zd2_718;
											}
									}
								else
									{	/* Module/java.scm 106 */
										goto BgL_tagzd21656zd2_718;
									}
							}
						else
							{	/* Module/java.scm 106 */
								if ((CAR(BgL_javaz00_27) == CNST_TABLE_REF(((long) 2))))
									{	/* Module/java.scm 106 */
										if (PAIRP(BgL_cdrzd21670zd2_731))
											{	/* Module/java.scm 106 */
												return
													BGl_javazd2parsezd2classz00zzmodule_javaz00
													(BgL_javaz00_27, CAR(BgL_cdrzd21670zd2_731),
													CDR(BgL_cdrzd21670zd2_731), ((bool_t) 0),
													BgL_modulez00_28);
											}
										else
											{	/* Module/java.scm 106 */
											BgL_tagzd21660zd2_728:
												return
													BGl_javazd2errorzd2zzmodule_javaz00(BgL_javaz00_27,
													BNIL);
											}
									}
								else
									{	/* Module/java.scm 106 */
										obj_t BgL_cdrzd21730zd2_747;

										BgL_cdrzd21730zd2_747 = CDR(BgL_javaz00_27);
										if ((CAR(BgL_javaz00_27) == CNST_TABLE_REF(((long) 3))))
											{	/* Module/java.scm 106 */
												if (PAIRP(BgL_cdrzd21730zd2_747))
													{	/* Module/java.scm 106 */
														return
															BGl_javazd2parsezd2classz00zzmodule_javaz00
															(BgL_javaz00_27, CAR(BgL_cdrzd21730zd2_747),
															CDR(BgL_cdrzd21730zd2_747), ((bool_t) 1),
															BgL_modulez00_28);
													}
												else
													{	/* Module/java.scm 106 */
														goto BgL_tagzd21660zd2_728;
													}
											}
										else
											{	/* Module/java.scm 106 */
												if ((CAR(BgL_javaz00_27) == CNST_TABLE_REF(((long) 4))))
													{	/* Module/java.scm 106 */
														if (PAIRP(BgL_cdrzd21730zd2_747))
															{	/* Module/java.scm 106 */
																obj_t BgL_carzd21749zd2_755;

																obj_t BgL_cdrzd21750zd2_756;

																BgL_carzd21749zd2_755 =
																	CAR(BgL_cdrzd21730zd2_747);
																BgL_cdrzd21750zd2_756 =
																	CDR(BgL_cdrzd21730zd2_747);
																if (SYMBOLP(BgL_carzd21749zd2_755))
																	{	/* Module/java.scm 106 */
																		if (PAIRP(BgL_cdrzd21750zd2_756))
																			{	/* Module/java.scm 106 */
																				obj_t BgL_carzd21755zd2_759;

																				BgL_carzd21755zd2_759 =
																					CAR(BgL_cdrzd21750zd2_756);
																				if (SYMBOLP(BgL_carzd21755zd2_759))
																					{	/* Module/java.scm 106 */
																						if (NULLP(CDR
																								(BgL_cdrzd21750zd2_756)))
																							{	/* Module/java.scm 106 */
																								return
																									BGl_javazd2declarezd2arrayz00zzmodule_javaz00
																									(BgL_javaz00_27,
																									BgL_carzd21749zd2_755,
																									BgL_carzd21755zd2_759);
																							}
																						else
																							{	/* Module/java.scm 106 */
																								goto BgL_tagzd21660zd2_728;
																							}
																					}
																				else
																					{	/* Module/java.scm 106 */
																						goto BgL_tagzd21660zd2_728;
																					}
																			}
																		else
																			{	/* Module/java.scm 106 */
																				goto BgL_tagzd21660zd2_728;
																			}
																	}
																else
																	{	/* Module/java.scm 106 */
																		goto BgL_tagzd21660zd2_728;
																	}
															}
														else
															{	/* Module/java.scm 106 */
																goto BgL_tagzd21660zd2_728;
															}
													}
												else
													{	/* Module/java.scm 106 */
														goto BgL_tagzd21660zd2_728;
													}
											}
									}
							}
					}
				else
					{	/* Module/java.scm 106 */
						goto BgL_tagzd21660zd2_728;
					}
			}
		}
	}



/* bind-jklass! */
	obj_t BGl_bindzd2jklassz12zc0zzmodule_javaz00(BgL_jklassz00_bglt
		BgL_jklassz00_30)
	{
		AN_OBJECT;
		{	/* Module/java.scm 157 */
			{	/* Module/java.scm 158 */
				obj_t BgL_arg2881z00_774;

				obj_t BgL_arg2882z00_775;

				BgL_arg2881z00_774 =
					(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_30))->BgL_idz00);
				BgL_arg2882z00_775 = CNST_TABLE_REF(((long) 5));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg2881z00_774,
					BgL_arg2882z00_775, (obj_t) (BgL_jklassz00_30));
			}
			return (BGl_za2jklassesza2z00zzmodule_javaz00 =
				MAKE_PAIR(
					(obj_t) (BgL_jklassz00_30), BGl_za2jklassesza2z00zzmodule_javaz00),
				BUNSPEC);
		}
	}



/* _bind-jklass! */
	obj_t BGl__bindzd2jklassz12zc0zzmodule_javaz00(obj_t BgL_envz00_2317,
		obj_t BgL_jklassz00_2318)
	{
		AN_OBJECT;
		{	/* Module/java.scm 157 */
			return
				BGl_bindzd2jklassz12zc0zzmodule_javaz00(
				(BgL_jklassz00_bglt) (BgL_jklassz00_2318));
		}
	}



/* java-finalizer */
	obj_t BGl_javazd2finaliza7erz75zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 167 */
			{	/* Module/java.scm 171 */
				obj_t BgL_jklassz00_776;

				{	/* Module/java.scm 171 */
					obj_t BgL_identz00_1561;

					BgL_identz00_1561 =
						BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00;
					BgL_jklassz00_776 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_identz00_1561,
						CNST_TABLE_REF(((long) 5)));
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_jklassz00_776,
						BGl_jklassz00zzmodule_javaz00))
					{	/* Module/java.scm 173 */
						bool_t BgL_testz00_2542;

						{	/* Module/java.scm 173 */
							obj_t BgL_auxz00_2543;

							{
								BgL_jklassz00_bglt BgL_auxz00_2544;

								BgL_auxz00_2544 = (BgL_jklassz00_bglt) (BgL_jklassz00_776);
								BgL_auxz00_2543 =
									(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2544))->BgL_jnamez00);
							}
							BgL_testz00_2542 = STRINGP(BgL_auxz00_2543);
						}
						if (BgL_testz00_2542)
							{	/* Module/java.scm 177 */
								bool_t BgL_testz00_2548;

								{	/* Module/java.scm 177 */
									obj_t BgL_arg2890z00_783;

									{
										BgL_jklassz00_bglt BgL_auxz00_2549;

										BgL_auxz00_2549 = (BgL_jklassz00_bglt) (BgL_jklassz00_776);
										BgL_arg2890z00_783 =
											(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2549))->
											BgL_jnamez00);
									}
									BgL_testz00_2548 =
										(BgL_arg2890z00_783 ==
										BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00);
								}
								if (BgL_testz00_2548)
									{	/* Module/java.scm 177 */
										BFALSE;
									}
								else
									{	/* Module/java.scm 178 */
										obj_t BgL_arg2886z00_780;

										{
											BgL_jklassz00_bglt BgL_auxz00_2553;

											BgL_auxz00_2553 =
												(BgL_jklassz00_bglt) (BgL_jklassz00_776);
											BgL_arg2886z00_780 =
												(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2553))->
												BgL_srcz00);
										}
										{	/* Module/java.scm 178 */
											obj_t BgL_list2888z00_782;

											BgL_list2888z00_782 =
												MAKE_PAIR(BGl_string3303z00zzmodule_javaz00, BNIL);
											BGl_javazd2errorzd2zzmodule_javaz00(BgL_arg2886z00_780,
												BgL_list2888z00_782);
										}
									}
							}
						else
							{	/* Module/java.scm 173 */
								{
									BgL_jklassz00_bglt BgL_auxz00_2558;

									BgL_auxz00_2558 = (BgL_jklassz00_bglt) (BgL_jklassz00_776);
									((((BgL_jklassz00_bglt) CREF(BgL_auxz00_2558))->
											BgL_abstractzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
								}
								{
									BgL_jklassz00_bglt BgL_auxz00_2561;

									BgL_auxz00_2561 = (BgL_jklassz00_bglt) (BgL_jklassz00_776);
									((((BgL_jklassz00_bglt) CREF(BgL_auxz00_2561))->
											BgL_jnamez00) =
										((obj_t)
											BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00),
										BUNSPEC);
								}
							}
					}
				else
					{	/* Module/java.scm 172 */
						BFALSE;
					}
			}
			{
				obj_t BgL_l2788z00_786;

				BgL_l2788z00_786 = BGl_za2jklassesza2z00zzmodule_javaz00;
			BgL_zc3anonymousza32892ze3z83_787:
				if (PAIRP(BgL_l2788z00_786))
					{	/* Module/java.scm 181 */
						{	/* Module/java.scm 182 */
							obj_t BgL_jklassz00_789;

							BgL_jklassz00_789 = CAR(BgL_l2788z00_786);
							{	/* Module/java.scm 183 */
								obj_t BgL_arg2894z00_791;

								obj_t BgL_arg2896z00_792;

								{
									BgL_jklassz00_bglt BgL_auxz00_2567;

									BgL_auxz00_2567 = (BgL_jklassz00_bglt) (BgL_jklassz00_789);
									BgL_arg2894z00_791 =
										(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2567))->BgL_idz00);
								}
								BgL_arg2896z00_792 = CNST_TABLE_REF(((long) 5));
								BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_arg2894z00_791,
									BgL_arg2896z00_792);
							}
							{	/* Module/java.scm 184 */
								bool_t BgL_testz00_2572;

								{	/* Module/java.scm 184 */
									obj_t BgL_auxz00_2573;

									{
										BgL_jklassz00_bglt BgL_auxz00_2574;

										BgL_auxz00_2574 = (BgL_jklassz00_bglt) (BgL_jklassz00_789);
										BgL_auxz00_2573 =
											(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2574))->
											BgL_jnamez00);
									}
									BgL_testz00_2572 = STRINGP(BgL_auxz00_2573);
								}
								if (BgL_testz00_2572)
									{	/* Module/java.scm 188 */
										obj_t BgL_prefixz00_794;

										{	/* Module/java.scm 188 */
											obj_t BgL_arg2901z00_798;

											{
												BgL_jklassz00_bglt BgL_auxz00_2578;

												BgL_auxz00_2578 =
													(BgL_jklassz00_bglt) (BgL_jklassz00_789);
												BgL_arg2901z00_798 =
													(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2578))->
													BgL_jnamez00);
											}
											BgL_prefixz00_794 =
												BGl_prefixz00zz__osz00(BgL_arg2901z00_798);
										}
										{	/* Module/java.scm 189 */
											bool_t BgL_testz00_2582;

											{	/* Module/java.scm 189 */
												obj_t BgL_arg2899z00_796;

												{
													BgL_jklassz00_bglt BgL_auxz00_2583;

													BgL_auxz00_2583 =
														(BgL_jklassz00_bglt) (BgL_jklassz00_789);
													BgL_arg2899z00_796 =
														(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2583))->
														BgL_jnamez00);
												}
												BgL_testz00_2582 =
													bigloo_strcmp(BgL_prefixz00_794, BgL_arg2899z00_796);
											}
											if (BgL_testz00_2582)
												{
													BgL_jklassz00_bglt BgL_auxz00_2587;

													BgL_auxz00_2587 =
														(BgL_jklassz00_bglt) (BgL_jklassz00_789);
													((((BgL_jklassz00_bglt) CREF(BgL_auxz00_2587))->
															BgL_packagez00) =
														((obj_t) BGl_string3304z00zzmodule_javaz00),
														BUNSPEC);
												}
											else
												{
													BgL_jklassz00_bglt BgL_auxz00_2590;

													BgL_auxz00_2590 =
														(BgL_jklassz00_bglt) (BgL_jklassz00_789);
													((((BgL_jklassz00_bglt) CREF(BgL_auxz00_2590))->
															BgL_packagez00) =
														((obj_t) BgL_prefixz00_794), BUNSPEC);
												}
										}
										{	/* Module/java.scm 192 */
											BgL_jclassz00_bglt BgL_arg2900z00_797;

											BgL_arg2900z00_797 =
												BGl_declarezd2jklasszd2zzmodule_javaz00(
												(BgL_jklassz00_bglt) (BgL_jklassz00_789));
											BGl_za2jclassesza2z00zzmodule_javaz00 =
												MAKE_PAIR(
												(obj_t) (BgL_arg2900z00_797),
												BGl_za2jclassesza2z00zzmodule_javaz00);
										}
									}
								else
									{	/* Module/java.scm 184 */
										BGl_za2jclassesza2z00zzmodule_javaz00 = BNIL;
										{	/* Module/java.scm 187 */
											obj_t BgL_arg2902z00_799;

											{
												BgL_jklassz00_bglt BgL_auxz00_2597;

												BgL_auxz00_2597 =
													(BgL_jklassz00_bglt) (BgL_jklassz00_789);
												BgL_arg2902z00_799 =
													(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2597))->
													BgL_srcz00);
											}
											{	/* Module/java.scm 187 */
												obj_t BgL_list2904z00_801;

												BgL_list2904z00_801 =
													MAKE_PAIR(BGl_string3305z00zzmodule_javaz00, BNIL);
												BGl_javazd2errorzd2zzmodule_javaz00(BgL_arg2902z00_799,
													BgL_list2904z00_801);
											}
										}
									}
							}
						}
						{
							obj_t BgL_l2788z00_2602;

							BgL_l2788z00_2602 = CDR(BgL_l2788z00_786);
							BgL_l2788z00_786 = BgL_l2788z00_2602;
							goto BgL_zc3anonymousza32892ze3z83_787;
						}
					}
				else
					{	/* Module/java.scm 181 */
						((bool_t) 1);
					}
			}
			if (PAIRP(BGl_za2jclassesza2z00zzmodule_javaz00))
				{	/* Module/java.scm 197 */
					obj_t BgL_g2793z00_806;

					BgL_g2793z00_806 =
						bgl_reverse_bang(BGl_za2jclassesza2z00zzmodule_javaz00);
					{
						obj_t BgL_ll2790z00_808;

						obj_t BgL_ll2791z00_809;

						BgL_ll2790z00_808 = BGl_za2jklassesza2z00zzmodule_javaz00;
						BgL_ll2791z00_809 = BgL_g2793z00_806;
					BgL_zc3anonymousza32908ze3z83_810:
						if (NULLP(BgL_ll2790z00_808))
							{	/* Module/java.scm 197 */
								((bool_t) 1);
							}
						else
							{	/* Module/java.scm 197 */
								{	/* Module/java.scm 198 */
									obj_t BgL_jklassz00_812;

									obj_t BgL_jclassz00_813;

									BgL_jklassz00_812 = CAR(BgL_ll2790z00_808);
									BgL_jclassz00_813 = CAR(BgL_ll2791z00_809);
									{	/* Module/java.scm 199 */
										bool_t BgL_testz00_2611;

										{	/* Module/java.scm 199 */
											bool_t BgL_testz00_2612;

											{	/* Module/java.scm 199 */
												BgL_jclassz00_bglt BgL_obj1849z00_1590;

												BgL_obj1849z00_1590 =
													(BgL_jclassz00_bglt) (BgL_jclassz00_813);
												{	/* Module/java.scm 199 */
													obj_t BgL_auxz00_2614;

													{
														obj_t BgL_auxz00_2615;

														{	/* Module/java.scm 199 */
															BgL_objectz00_bglt BgL_auxz00_2616;

															BgL_auxz00_2616 =
																(BgL_objectz00_bglt) (BgL_obj1849z00_1590);
															BgL_auxz00_2615 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2616);
														}
														BgL_auxz00_2614 =
															(((BgL_jclassz00_bglt) CREF(BgL_auxz00_2615))->
															BgL_itszd2superzd2);
													}
													BgL_testz00_2612 = CBOOL(BgL_auxz00_2614);
												}
											}
											if (BgL_testz00_2612)
												{	/* Module/java.scm 199 */
													bool_t BgL_testz00_2621;

													{	/* Module/java.scm 199 */
														obj_t BgL_arg2916z00_821;

														{	/* Module/java.scm 199 */
															BgL_jclassz00_bglt BgL_obj1849z00_1591;

															BgL_obj1849z00_1591 =
																(BgL_jclassz00_bglt) (BgL_jclassz00_813);
															{
																obj_t BgL_auxz00_2623;

																{	/* Module/java.scm 199 */
																	BgL_objectz00_bglt BgL_auxz00_2624;

																	BgL_auxz00_2624 =
																		(BgL_objectz00_bglt) (BgL_obj1849z00_1591);
																	BgL_auxz00_2623 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2624);
																}
																BgL_arg2916z00_821 =
																	(((BgL_jclassz00_bglt)
																		CREF(BgL_auxz00_2623))->BgL_itszd2superzd2);
															}
														}
														BgL_testz00_2621 =
															BGl_iszd2azf3z21zz__objectz00(BgL_arg2916z00_821,
															BGl_jclassz00zzobject_classz00);
													}
													if (BgL_testz00_2621)
														{	/* Module/java.scm 199 */
															BgL_testz00_2611 = ((bool_t) 0);
														}
													else
														{	/* Module/java.scm 199 */
															BgL_testz00_2611 = ((bool_t) 1);
														}
												}
											else
												{	/* Module/java.scm 199 */
													BgL_testz00_2611 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_2611)
											{	/* Module/java.scm 201 */
												obj_t BgL_arg2911z00_816;

												{
													BgL_jklassz00_bglt BgL_auxz00_2629;

													BgL_auxz00_2629 =
														(BgL_jklassz00_bglt) (BgL_jklassz00_812);
													BgL_arg2911z00_816 =
														(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2629))->
														BgL_srcz00);
												}
												{	/* Module/java.scm 200 */
													obj_t BgL_list2913z00_818;

													BgL_list2913z00_818 =
														MAKE_PAIR(BGl_string3306z00zzmodule_javaz00, BNIL);
													BGl_javazd2errorzd2zzmodule_javaz00
														(BgL_arg2911z00_816, BgL_list2913z00_818);
												}
											}
										else
											{	/* Module/java.scm 199 */
												BFALSE;
											}
									}
								}
								{
									obj_t BgL_ll2791z00_2636;

									obj_t BgL_ll2790z00_2634;

									BgL_ll2790z00_2634 = CDR(BgL_ll2790z00_808);
									BgL_ll2791z00_2636 = CDR(BgL_ll2791z00_809);
									BgL_ll2791z00_809 = BgL_ll2791z00_2636;
									BgL_ll2790z00_808 = BgL_ll2790z00_2634;
									goto BgL_zc3anonymousza32908ze3z83_810;
								}
							}
					}
				}
			else
				{	/* Module/java.scm 196 */
					((bool_t) 0);
				}
			BGl_za2jclassesza2z00zzmodule_javaz00 = BNIL;
			{
				obj_t BgL_l2794z00_826;

				BgL_l2794z00_826 = BGl_za2jexportedza2z00zzmodule_javaz00;
			BgL_zc3anonymousza32919ze3z83_827:
				if (PAIRP(BgL_l2794z00_826))
					{	/* Module/java.scm 206 */
						{	/* Module/java.scm 207 */
							obj_t BgL_jmodz00_829;

							BgL_jmodz00_829 = CAR(BgL_l2794z00_826);
							{	/* Module/java.scm 207 */
								obj_t BgL_javaz00_830;

								BgL_javaz00_830 = CAR(BgL_jmodz00_829);
								{	/* Module/java.scm 207 */
									obj_t BgL_modulez00_831;

									BgL_modulez00_831 = CDR(BgL_jmodz00_829);
									{	/* Module/java.scm 208 */
										obj_t BgL_globalz00_832;

										{	/* Module/java.scm 209 */
											obj_t BgL_arg2928z00_841;

											{	/* Module/java.scm 209 */
												obj_t BgL_pairz00_1600;

												BgL_pairz00_1600 = BgL_javaz00_830;
												BgL_arg2928z00_841 = CAR(CDR(BgL_pairz00_1600));
											}
											BgL_globalz00_832 =
												BGl_findzd2globalzd2zzast_envz00(BgL_arg2928z00_841,
												BNIL);
										}
										{	/* Module/java.scm 209 */
											obj_t BgL_namez00_833;

											{	/* Module/java.scm 210 */
												obj_t BgL_pairz00_1604;

												BgL_pairz00_1604 = BgL_javaz00_830;
												BgL_namez00_833 = CAR(CDR(CDR(BgL_pairz00_1604)));
											}
											{	/* Module/java.scm 210 */

												if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_832,
														BGl_globalz00zzast_varz00))
													{	/* Module/java.scm 218 */
														bool_t BgL_testz00_2651;

														{	/* Module/java.scm 218 */
															obj_t BgL_auxz00_2652;

															{
																BgL_variablez00_bglt BgL_auxz00_2653;

																BgL_auxz00_2653 =
																	(BgL_variablez00_bglt) (
																	(BgL_globalz00_bglt) (BgL_globalz00_832));
																BgL_auxz00_2652 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2653))->BgL_namez00);
															}
															BgL_testz00_2651 = STRINGP(BgL_auxz00_2652);
														}
														if (BgL_testz00_2651)
															{	/* Module/java.scm 218 */
																BGl_userzd2warningzd2zztools_errorz00
																	(BGl_string3307z00zzmodule_javaz00,
																	BGl_string3308z00zzmodule_javaz00,
																	BgL_javaz00_830);
															}
														else
															{
																BgL_variablez00_bglt BgL_auxz00_2659;

																BgL_auxz00_2659 =
																	(BgL_variablez00_bglt) (
																	(BgL_globalz00_bglt) (BgL_globalz00_832));
																((((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_2659))->BgL_namez00) =
																	((obj_t) BgL_namez00_833), BUNSPEC);
															}
													}
												else
													{	/* Module/java.scm 213 */
														bool_t BgL_testz00_2663;

														{	/* Module/java.scm 213 */
															bool_t BgL_testz00_2664;

															if (
																(BGl_za2passza2z00zzengine_paramz00 ==
																	CNST_TABLE_REF(((long) 6))))
																{	/* Module/java.scm 213 */
																	BgL_testz00_2664 = ((bool_t) 1);
																}
															else
																{	/* Module/java.scm 213 */
																	BgL_testz00_2664 =
																		(BGl_za2passza2z00zzengine_paramz00 ==
																		CNST_TABLE_REF(((long) 7)));
																}
															if (BgL_testz00_2664)
																{	/* Module/java.scm 213 */
																	BgL_testz00_2663 = ((bool_t) 0);
																}
															else
																{	/* Module/java.scm 213 */
																	BgL_testz00_2663 =
																		(BgL_modulez00_831 ==
																		BGl_za2moduleza2z00zzmodule_modulez00);
																}
														}
														if (BgL_testz00_2663)
															{	/* Module/java.scm 216 */
																obj_t BgL_list2925z00_838;

																BgL_list2925z00_838 =
																	MAKE_PAIR(BGl_string3309z00zzmodule_javaz00,
																	BNIL);
																BGl_javazd2errorzd2zzmodule_javaz00
																	(BgL_javaz00_830, BgL_list2925z00_838);
															}
														else
															{	/* Module/java.scm 213 */
																BFALSE;
															}
													}
											}
										}
									}
								}
							}
						}
						{
							obj_t BgL_l2794z00_2673;

							BgL_l2794z00_2673 = CDR(BgL_l2794z00_826);
							BgL_l2794z00_826 = BgL_l2794z00_2673;
							goto BgL_zc3anonymousza32919ze3z83_827;
						}
					}
				else
					{	/* Module/java.scm 206 */
						((bool_t) 1);
					}
			}
			BGl_za2jexportedza2z00zzmodule_javaz00 = BNIL;
			return (BGl_za2jklassesza2z00zzmodule_javaz00 = BNIL, BUNSPEC);
		}
	}



/* _java-finalizer */
	obj_t BGl__javazd2finaliza7erz75zzmodule_javaz00(obj_t BgL_envz00_2316)
	{
		AN_OBJECT;
		{	/* Module/java.scm 167 */
			return BGl_javazd2finaliza7erz75zzmodule_javaz00();
		}
	}



/* java-parse-class */
	obj_t BGl_javazd2parsezd2classz00zzmodule_javaz00(obj_t BgL_javaz00_31,
		obj_t BgL_identz00_32, obj_t BgL_restz00_33, bool_t BgL_abstractzf3zf3_34,
		obj_t BgL_modulez00_35)
	{
		AN_OBJECT;
		{	/* Module/java.scm 233 */
			{	/* Module/java.scm 234 */
				obj_t BgL_tserz00_845;

				BgL_tserz00_845 = bgl_reverse(BgL_restz00_33);
				{	/* Module/java.scm 234 */
					obj_t BgL_jnamez00_846;

					if (PAIRP(BgL_tserz00_845))
						{	/* Module/java.scm 235 */
							BgL_jnamez00_846 = CAR(BgL_tserz00_845);
						}
					else
						{	/* Module/java.scm 235 */
							BgL_jnamez00_846 = BFALSE;
						}
					{	/* Module/java.scm 235 */

						if (SYMBOLP(BgL_identz00_32))
							{	/* Module/java.scm 239 */
								if (STRINGP(BgL_jnamez00_846))
									{	/* Module/java.scm 242 */
										obj_t BgL_arg2933z00_849;

										BgL_arg2933z00_849 = CDR(BgL_tserz00_845);
										return
											BBOOL(BGl_javazd2declarezd2classz00zzmodule_javaz00
											(BgL_javaz00_31, BgL_identz00_32, BgL_jnamez00_846,
												BgL_arg2933z00_849, BgL_abstractzf3zf3_34,
												BgL_modulez00_35));
									}
								else
									{	/* Module/java.scm 241 */
										return
											BBOOL(BGl_javazd2refinezd2classz00zzmodule_javaz00
											(BgL_javaz00_31, BgL_identz00_32, BgL_restz00_33,
												BgL_modulez00_35));
									}
							}
						else
							{	/* Module/java.scm 240 */
								obj_t BgL_list2934z00_850;

								BgL_list2934z00_850 =
									MAKE_PAIR(BGl_string3310z00zzmodule_javaz00, BNIL);
								return
									BGl_javazd2errorzd2zzmodule_javaz00(BgL_javaz00_31,
									BgL_list2934z00_850);
							}
					}
				}
			}
		}
	}



/* java-declare-class */
	bool_t BGl_javazd2declarezd2classz00zzmodule_javaz00(obj_t BgL_jz00_36,
		obj_t BgL_idz00_37, obj_t BgL_jnamez00_38, obj_t BgL_compz00_39,
		bool_t BgL_az00_40, obj_t BgL_modulez00_41)
	{
		AN_OBJECT;
		{	/* Module/java.scm 249 */
			{	/* Module/java.scm 251 */
				obj_t BgL_locz00_852;

				BgL_locz00_852 = BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_36);
				{	/* Module/java.scm 251 */
					obj_t BgL_jklassz00_853;

					{	/* Module/java.scm 252 */
						obj_t BgL_jklassz00_861;

						BgL_jklassz00_861 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_idz00_37,
							CNST_TABLE_REF(((long) 5)));
						if (BGl_iszd2azf3z21zz__objectz00(BgL_jklassz00_861,
								BGl_jklassz00zzmodule_javaz00))
							{	/* Module/java.scm 263 */
								bool_t BgL_testz00_2696;

								{	/* Module/java.scm 263 */
									obj_t BgL_auxz00_2697;

									{	/* Module/java.scm 263 */
										bool_t BgL_auxz00_2698;

										{
											BgL_jklassz00_bglt BgL_auxz00_2699;

											BgL_auxz00_2699 =
												(BgL_jklassz00_bglt) (BgL_jklassz00_861);
											BgL_auxz00_2698 =
												(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2699))->
												BgL_abstractzf3zf3);
										}
										BgL_auxz00_2697 = BBOOL(BgL_auxz00_2698);
									}
									BgL_testz00_2696 = (BgL_auxz00_2697 == BBOOL(BgL_az00_40));
								}
								if (BgL_testz00_2696)
									{	/* Module/java.scm 265 */
										bool_t BgL_testz00_2705;

										{	/* Module/java.scm 265 */
											obj_t BgL_auxz00_2706;

											{
												BgL_jklassz00_bglt BgL_auxz00_2707;

												BgL_auxz00_2707 =
													(BgL_jklassz00_bglt) (BgL_jklassz00_861);
												BgL_auxz00_2706 =
													(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2707))->
													BgL_jnamez00);
											}
											BgL_testz00_2705 = STRINGP(BgL_auxz00_2706);
										}
										if (BgL_testz00_2705)
											{	/* Module/java.scm 267 */
												bool_t BgL_testz00_2711;

												{	/* Module/java.scm 267 */
													obj_t BgL_arg2944z00_867;

													{
														BgL_jklassz00_bglt BgL_auxz00_2712;

														BgL_auxz00_2712 =
															(BgL_jklassz00_bglt) (BgL_jklassz00_861);
														BgL_arg2944z00_867 =
															(((BgL_jklassz00_bglt) CREF(BgL_auxz00_2712))->
															BgL_jnamez00);
													}
													BgL_testz00_2711 =
														bigloo_strcmp(BgL_arg2944z00_867, BgL_jnamez00_38);
												}
												if (BgL_testz00_2711)
													{	/* Module/java.scm 267 */
														BgL_jklassz00_853 = BgL_jklassz00_861;
													}
												else
													{	/* Module/java.scm 270 */
														obj_t BgL_list2943z00_866;

														BgL_list2943z00_866 =
															MAKE_PAIR(BGl_string3311z00zzmodule_javaz00,
															BNIL);
														BgL_jklassz00_853 =
															BGl_javazd2errorzd2zzmodule_javaz00(BgL_jz00_36,
															BgL_list2943z00_866);
													}
											}
										else
											{
												BgL_jklassz00_bglt BgL_auxz00_2718;

												BgL_auxz00_2718 =
													(BgL_jklassz00_bglt) (BgL_jklassz00_861);
												BgL_jklassz00_853 =
													((((BgL_jklassz00_bglt) CREF(BgL_auxz00_2718))->
														BgL_jnamez00) = ((obj_t) BgL_jnamez00_38), BUNSPEC);
											}
									}
								else
									{	/* Module/java.scm 264 */
										obj_t BgL_list2946z00_869;

										BgL_list2946z00_869 =
											MAKE_PAIR(BGl_string3311z00zzmodule_javaz00, BNIL);
										BgL_jklassz00_853 =
											BGl_javazd2errorzd2zzmodule_javaz00(BgL_jz00_36,
											BgL_list2946z00_869);
									}
							}
						else
							{	/* Module/java.scm 259 */
								obj_t BgL_arg2948z00_871;

								BgL_arg2948z00_871 =
									BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_37,
									BgL_locz00_852);
								{	/* Module/java.scm 255 */
									BgL_jklassz00_bglt BgL_res3270z00_1672;

									{	/* Module/java.scm 255 */
										obj_t BgL_src2549z00_1631;

										BgL_src2549z00_1631 = BgL_jz00_36;
										{	/* Module/java.scm 255 */
											BgL_jklassz00_bglt BgL_new2560z00_1642;

											{	/* Module/java.scm 255 */
												BgL_jklassz00_bglt BgL_res3268z00_1647;

												{	/* Module/java.scm 255 */
													BgL_jklassz00_bglt BgL_new2586z00_1643;

													BgL_new2586z00_1643 =
														((BgL_jklassz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_jklassz00_bgl))));
													BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
														(BgL_new2586z00_1643),
														BGl_classzd2numzd2zz__objectz00
														(BGl_jklassz00zzmodule_javaz00));
													{	/* Module/java.scm 255 */
														BgL_objectz00_bglt BgL_auxz00_2728;

														BgL_auxz00_2728 =
															(BgL_objectz00_bglt) (BgL_new2586z00_1643);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2728, BFALSE);
													}
													BgL_res3268z00_1647 = BgL_new2586z00_1643;
												}
												BgL_new2560z00_1642 = BgL_res3268z00_1647;
											}
											{	/* Module/java.scm 255 */
												BgL_jklassz00_bglt BgL_res3269z00_1671;

												{	/* Module/java.scm 255 */
													BgL_jklassz00_bglt BgL_new2573z00_1648;

													BgL_new2573z00_1648 = BgL_new2560z00_1642;
													{	/* Module/java.scm 255 */
														obj_t BgL_src2562z00_1660;

														obj_t BgL_loc2563z00_1661;

														obj_t BgL_id2564z00_1662;

														obj_t BgL_idd2565z00_1663;

														obj_t BgL_jname2566z00_1664;

														obj_t BgL_package2567z00_1665;

														obj_t BgL_fields2568z00_1666;

														obj_t BgL_methods2569z00_1667;

														obj_t BgL_constructors2570z00_1668;

														bool_t BgL_abstractzf32571zf3_1669;

														obj_t BgL_module2572z00_1670;

														BgL_src2562z00_1660 = BgL_src2549z00_1631;
														BgL_loc2563z00_1661 = BgL_locz00_852;
														BgL_id2564z00_1662 = BgL_idz00_37;
														BgL_idd2565z00_1663 = BgL_arg2948z00_871;
														BgL_jname2566z00_1664 = BgL_jnamez00_38;
														BgL_package2567z00_1665 = BUNSPEC;
														BgL_fields2568z00_1666 = BNIL;
														BgL_methods2569z00_1667 = BNIL;
														BgL_constructors2570z00_1668 = BNIL;
														BgL_abstractzf32571zf3_1669 = BgL_az00_40;
														BgL_module2572z00_1670 = BgL_modulez00_41;
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_srcz00) =
															((obj_t) BgL_src2562z00_1660), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_locz00) =
															((obj_t) BgL_loc2563z00_1661), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_idz00) =
															((obj_t) BgL_id2564z00_1662), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_iddz00) =
															((obj_t) BgL_idd2565z00_1663), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_jnamez00) =
															((obj_t) BgL_jname2566z00_1664), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_packagez00) =
															((obj_t) BgL_package2567z00_1665), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_fieldsz00) =
															((obj_t) BgL_fields2568z00_1666), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_methodsz00) =
															((obj_t) BgL_methods2569z00_1667), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_constructorsz00) =
															((obj_t) BgL_constructors2570z00_1668), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_abstractzf3zf3) =
															((bool_t) BgL_abstractzf32571zf3_1669), BUNSPEC);
														((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1648))->
																BgL_modulez00) =
															((obj_t) BgL_module2572z00_1670), BUNSPEC);
														BgL_res3269z00_1671 = BgL_new2573z00_1648;
												}} BgL_res3269z00_1671;
											}
											BGl_bindzd2jklassz12zc0zzmodule_javaz00
												(BgL_new2560z00_1642);
											BgL_res3270z00_1672 = BgL_new2560z00_1642;
									}}
									BgL_jklassz00_853 = (obj_t) (BgL_res3270z00_1672);
					}}}
					{	/* Module/java.scm 252 */

						{
							obj_t BgL_l2796z00_855;

							BgL_l2796z00_855 = BgL_compz00_39;
						BgL_zc3anonymousza32936ze3z83_856:
							if (PAIRP(BgL_l2796z00_855))
								{	/* Module/java.scm 271 */
									BGl_javazd2declarezd2componentz00zzmodule_javaz00(BgL_jz00_36,
										(BgL_jklassz00_bglt) (BgL_jklassz00_853),
										CAR(BgL_l2796z00_855));
									{
										obj_t BgL_l2796z00_2749;

										BgL_l2796z00_2749 = CDR(BgL_l2796z00_855);
										BgL_l2796z00_855 = BgL_l2796z00_2749;
										goto BgL_zc3anonymousza32936ze3z83_856;
									}
								}
							else
								{	/* Module/java.scm 271 */
									return ((bool_t) 1);
								}
						}
					}
				}
			}
		}
	}



/* java-refine-class */
	bool_t BGl_javazd2refinezd2classz00zzmodule_javaz00(obj_t BgL_jz00_42,
		obj_t BgL_identz00_43, obj_t BgL_compz00_44, obj_t BgL_modulez00_45)
	{
		AN_OBJECT;
		{	/* Module/java.scm 279 */
			{	/* Module/java.scm 280 */
				BgL_jklassz00_bglt BgL_jklassz00_875;

				{	/* Module/java.scm 280 */
					obj_t BgL_jklassz00_883;

					BgL_jklassz00_883 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_identz00_43,
						CNST_TABLE_REF(((long) 5)));
					if (BGl_iszd2azf3z21zz__objectz00(BgL_jklassz00_883,
							BGl_jklassz00zzmodule_javaz00))
						{	/* Module/java.scm 281 */
							BgL_jklassz00_875 = (BgL_jklassz00_bglt) (BgL_jklassz00_883);
						}
					else
						{	/* Module/java.scm 285 */
							obj_t BgL_arg2956z00_885;

							obj_t BgL_arg2958z00_886;

							BgL_arg2956z00_885 =
								BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_42);
							BgL_arg2958z00_886 =
								BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_identz00_43,
								BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_42));
							{	/* Module/java.scm 283 */
								BgL_jklassz00_bglt BgL_res3273z00_1719;

								{	/* Module/java.scm 283 */
									obj_t BgL_src2549z00_1678;

									BgL_src2549z00_1678 = BgL_jz00_42;
									{	/* Module/java.scm 283 */
										BgL_jklassz00_bglt BgL_new2560z00_1689;

										{	/* Module/java.scm 283 */
											BgL_jklassz00_bglt BgL_res3271z00_1694;

											{	/* Module/java.scm 283 */
												BgL_jklassz00_bglt BgL_new2586z00_1690;

												BgL_new2586z00_1690 =
													((BgL_jklassz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_jklassz00_bgl))));
												BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
													(BgL_new2586z00_1690),
													BGl_classzd2numzd2zz__objectz00
													(BGl_jklassz00zzmodule_javaz00));
												{	/* Module/java.scm 283 */
													BgL_objectz00_bglt BgL_auxz00_2763;

													BgL_auxz00_2763 =
														(BgL_objectz00_bglt) (BgL_new2586z00_1690);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_2763, BFALSE);
												}
												BgL_res3271z00_1694 = BgL_new2586z00_1690;
											}
											BgL_new2560z00_1689 = BgL_res3271z00_1694;
										}
										{	/* Module/java.scm 283 */
											BgL_jklassz00_bglt BgL_res3272z00_1718;

											{	/* Module/java.scm 283 */
												BgL_jklassz00_bglt BgL_new2573z00_1695;

												BgL_new2573z00_1695 = BgL_new2560z00_1689;
												{	/* Module/java.scm 283 */
													obj_t BgL_src2562z00_1707;

													obj_t BgL_loc2563z00_1708;

													obj_t BgL_id2564z00_1709;

													obj_t BgL_idd2565z00_1710;

													obj_t BgL_jname2566z00_1711;

													obj_t BgL_package2567z00_1712;

													obj_t BgL_fields2568z00_1713;

													obj_t BgL_methods2569z00_1714;

													obj_t BgL_constructors2570z00_1715;

													bool_t BgL_abstractzf32571zf3_1716;

													obj_t BgL_module2572z00_1717;

													BgL_src2562z00_1707 = BgL_src2549z00_1678;
													BgL_loc2563z00_1708 = BgL_arg2956z00_885;
													BgL_id2564z00_1709 = BgL_identz00_43;
													BgL_idd2565z00_1710 = BgL_arg2958z00_886;
													BgL_jname2566z00_1711 = BUNSPEC;
													BgL_package2567z00_1712 = BUNSPEC;
													BgL_fields2568z00_1713 = BNIL;
													BgL_methods2569z00_1714 = BNIL;
													BgL_constructors2570z00_1715 = BNIL;
													BgL_abstractzf32571zf3_1716 = ((bool_t) 0);
													BgL_module2572z00_1717 = BgL_modulez00_45;
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_srcz00) =
														((obj_t) BgL_src2562z00_1707), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_locz00) =
														((obj_t) BgL_loc2563z00_1708), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_idz00) =
														((obj_t) BgL_id2564z00_1709), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_iddz00) =
														((obj_t) BgL_idd2565z00_1710), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_jnamez00) =
														((obj_t) BgL_jname2566z00_1711), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_packagez00) =
														((obj_t) BgL_package2567z00_1712), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_fieldsz00) =
														((obj_t) BgL_fields2568z00_1713), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_methodsz00) =
														((obj_t) BgL_methods2569z00_1714), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_constructorsz00) =
														((obj_t) BgL_constructors2570z00_1715), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_abstractzf3zf3) =
														((bool_t) BgL_abstractzf32571zf3_1716), BUNSPEC);
													((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_1695))->
															BgL_modulez00) =
														((obj_t) BgL_module2572z00_1717), BUNSPEC);
													BgL_res3272z00_1718 = BgL_new2573z00_1695;
											}} BgL_res3272z00_1718;
										}
										BGl_bindzd2jklassz12zc0zzmodule_javaz00
											(BgL_new2560z00_1689);
										BgL_res3273z00_1719 = BgL_new2560z00_1689;
								}}
								BgL_jklassz00_875 = BgL_res3273z00_1719;
				}}}
				{
					obj_t BgL_l2798z00_877;

					BgL_l2798z00_877 = BgL_compz00_44;
				BgL_zc3anonymousza32952ze3z83_878:
					if (PAIRP(BgL_l2798z00_877))
						{	/* Module/java.scm 289 */
							BGl_javazd2declarezd2componentz00zzmodule_javaz00(BgL_jz00_42,
								BgL_jklassz00_875, CAR(BgL_l2798z00_877));
							{
								obj_t BgL_l2798z00_2782;

								BgL_l2798z00_2782 = CDR(BgL_l2798z00_877);
								BgL_l2798z00_877 = BgL_l2798z00_2782;
								goto BgL_zc3anonymousza32952ze3z83_878;
							}
						}
					else
						{	/* Module/java.scm 289 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* java-declare-component */
	obj_t BGl_javazd2declarezd2componentz00zzmodule_javaz00(obj_t BgL_jz00_46,
		BgL_jklassz00_bglt BgL_jklassz00_47, obj_t BgL_componentz00_48)
	{
		AN_OBJECT;
		{	/* Module/java.scm 294 */
			{
				obj_t BgL_restz00_894;

				obj_t BgL_restz00_896;

				obj_t BgL_idz00_898;

				obj_t BgL_argsz00_899;

				if (PAIRP(BgL_componentz00_48))
					{	/* Module/java.scm 315 */
						if ((CAR(BgL_componentz00_48) == CNST_TABLE_REF(((long) 12))))
							{	/* Module/java.scm 315 */
								BgL_restz00_894 = CDR(BgL_componentz00_48);
								{
									obj_t BgL_jnamez00_955;

									obj_t BgL_idz00_956;

									obj_t BgL_modz00_957;

									{	/* Module/java.scm 317 */
										obj_t BgL_ezd21905zd2_960;

										BgL_ezd21905zd2_960 = bgl_reverse(BgL_restz00_894);
										if (PAIRP(BgL_ezd21905zd2_960))
											{	/* Module/java.scm 315 */
												obj_t BgL_carzd21912zd2_962;

												obj_t BgL_cdrzd21913zd2_963;

												BgL_carzd21912zd2_962 = CAR(BgL_ezd21905zd2_960);
												BgL_cdrzd21913zd2_963 = CDR(BgL_ezd21905zd2_960);
												if (STRINGP(BgL_carzd21912zd2_962))
													{	/* Module/java.scm 315 */
														if (PAIRP(BgL_cdrzd21913zd2_963))
															{	/* Module/java.scm 315 */
																obj_t BgL_carzd21919zd2_966;

																BgL_carzd21919zd2_966 =
																	CAR(BgL_cdrzd21913zd2_963);
																if (SYMBOLP(BgL_carzd21919zd2_966))
																	{	/* Module/java.scm 315 */
																		BgL_jnamez00_955 = BgL_carzd21912zd2_962;
																		BgL_idz00_956 = BgL_carzd21919zd2_966;
																		BgL_modz00_957 = CDR(BgL_cdrzd21913zd2_963);
																		if (BGl_modifierzd2listzf3z21zzmodule_javaz00(BgL_modz00_957))
																			{	/* Module/java.scm 322 */
																				obj_t BgL_arg3004z00_971;

																				{	/* Module/java.scm 322 */
																					obj_t BgL_arg3005z00_972;

																					obj_t BgL_arg3006z00_973;

																					{	/* Module/java.scm 322 */
																						obj_t BgL_list3007z00_974;

																						{	/* Module/java.scm 322 */
																							obj_t BgL_arg3008z00_975;

																							{	/* Module/java.scm 322 */
																								obj_t BgL_arg3009z00_976;

																								{	/* Module/java.scm 322 */
																									obj_t BgL_arg3010z00_977;

																									BgL_arg3010z00_977 =
																										MAKE_PAIR(BgL_modz00_957,
																										BNIL);
																									BgL_arg3009z00_976 =
																										MAKE_PAIR(BgL_jnamez00_955,
																										BgL_arg3010z00_977);
																								}
																								BgL_arg3008z00_975 =
																									MAKE_PAIR(BgL_idz00_956,
																									BgL_arg3009z00_976);
																							}
																							BgL_list3007z00_974 =
																								MAKE_PAIR(BgL_componentz00_48,
																								BgL_arg3008z00_975);
																						}
																						BgL_arg3005z00_972 =
																							BgL_list3007z00_974;
																					}
																					BgL_arg3006z00_973 =
																						(((BgL_jklassz00_bglt)
																							CREF(BgL_jklassz00_47))->
																						BgL_fieldsz00);
																					BgL_arg3004z00_971 =
																						MAKE_PAIR(BgL_arg3005z00_972,
																						BgL_arg3006z00_973);
																				}
																				return
																					((((BgL_jklassz00_bglt)
																							CREF(BgL_jklassz00_47))->
																						BgL_fieldsz00) =
																					((obj_t) BgL_arg3004z00_971),
																					BUNSPEC);
																			}
																		else
																			{	/* Module/java.scm 320 */
																				obj_t BgL_list3011z00_978;

																				BgL_list3011z00_978 =
																					MAKE_PAIR
																					(BGl_string3319z00zzmodule_javaz00,
																					BNIL);
																				return
																					BGl_javazd2errorzd2zzmodule_javaz00
																					(BgL_componentz00_48,
																					BgL_list3011z00_978);
																			}
																	}
																else
																	{	/* Module/java.scm 315 */
																	BgL_tagzd21904zd2_959:
																		{	/* Module/java.scm 324 */
																			obj_t BgL_list3012z00_979;

																			BgL_list3012z00_979 =
																				MAKE_PAIR
																				(BGl_string3318z00zzmodule_javaz00,
																				BNIL);
																			return
																				BGl_javazd2errorzd2zzmodule_javaz00
																				(BgL_componentz00_48,
																				BgL_list3012z00_979);
																		}
																	}
															}
														else
															{	/* Module/java.scm 315 */
																goto BgL_tagzd21904zd2_959;
															}
													}
												else
													{	/* Module/java.scm 315 */
														goto BgL_tagzd21904zd2_959;
													}
											}
										else
											{	/* Module/java.scm 315 */
												goto BgL_tagzd21904zd2_959;
											}
									}
								}
							}
						else
							{	/* Module/java.scm 315 */
								if ((CAR(BgL_componentz00_48) == CNST_TABLE_REF(((long) 13))))
									{	/* Module/java.scm 315 */
										BgL_restz00_896 = CDR(BgL_componentz00_48);
										{
											obj_t BgL_jnamez00_980;

											obj_t BgL_argsz00_981;

											obj_t BgL_idz00_982;

											obj_t BgL_modz00_983;

											{	/* Module/java.scm 326 */
												obj_t BgL_ezd21927zd2_986;

												BgL_ezd21927zd2_986 = bgl_reverse(BgL_restz00_896);
												if (PAIRP(BgL_ezd21927zd2_986))
													{	/* Module/java.scm 315 */
														obj_t BgL_carzd21936zd2_988;

														obj_t BgL_cdrzd21937zd2_989;

														BgL_carzd21936zd2_988 = CAR(BgL_ezd21927zd2_986);
														BgL_cdrzd21937zd2_989 = CDR(BgL_ezd21927zd2_986);
														if (STRINGP(BgL_carzd21936zd2_988))
															{	/* Module/java.scm 315 */
																if (PAIRP(BgL_cdrzd21937zd2_989))
																	{	/* Module/java.scm 315 */
																		obj_t BgL_carzd21944zd2_992;

																		obj_t BgL_cdrzd21945zd2_993;

																		BgL_carzd21944zd2_992 =
																			CAR(BgL_cdrzd21937zd2_989);
																		BgL_cdrzd21945zd2_993 =
																			CDR(BgL_cdrzd21937zd2_989);
																		if (BGl_argzd2listzf3z21zzmodule_javaz00
																			(BgL_carzd21944zd2_992))
																			{	/* Module/java.scm 315 */
																				if (PAIRP(BgL_cdrzd21945zd2_993))
																					{	/* Module/java.scm 315 */
																						obj_t BgL_carzd21951zd2_996;

																						BgL_carzd21951zd2_996 =
																							CAR(BgL_cdrzd21945zd2_993);
																						if (SYMBOLP(BgL_carzd21951zd2_996))
																							{	/* Module/java.scm 315 */
																								BgL_jnamez00_980 =
																									BgL_carzd21936zd2_988;
																								BgL_argsz00_981 =
																									BgL_carzd21944zd2_992;
																								BgL_idz00_982 =
																									BgL_carzd21951zd2_996;
																								BgL_modz00_983 =
																									CDR(BgL_cdrzd21945zd2_993);
																								if (BGl_modifierzd2listzf3z21zzmodule_javaz00(BgL_modz00_983))
																									{	/* Module/java.scm 334 */
																										obj_t BgL_modz00_1001;

																										if (
																											(((BgL_jklassz00_bglt)
																													CREF
																													(BgL_jklassz00_47))->
																												BgL_abstractzf3zf3))
																											{	/* Module/java.scm 334 */
																												BgL_modz00_1001 =
																													MAKE_PAIR
																													(CNST_TABLE_REF((
																															(long) 10)),
																													BgL_modz00_983);
																											}
																										else
																											{	/* Module/java.scm 334 */
																												BgL_modz00_1001 =
																													BgL_modz00_983;
																											}
																										{	/* Module/java.scm 334 */
																											BgL_jmethodz00_bglt
																												BgL_jmetz00_1002;
																											{	/* Module/java.scm 337 */
																												obj_t
																													BgL_arg3023z00_1005;
																												if (((((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_iddz00) == CNST_TABLE_REF(((long) 11))))
																													{	/* Module/java.scm 337 */
																														BgL_arg3023z00_1005
																															= BgL_idz00_982;
																													}
																												else
																													{	/* Module/java.scm 339 */
																														obj_t
																															BgL_arg3025z00_1007;
																														obj_t
																															BgL_arg3026z00_1008;
																														BgL_arg3025z00_1007
																															=
																															(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_iddz00);
																														BgL_arg3026z00_1008
																															=
																															CNST_TABLE_REF((
																																(long) 9));
																														{	/* Module/java.scm 339 */
																															obj_t
																																BgL_list3027z00_1009;
																															{	/* Module/java.scm 339 */
																																obj_t
																																	BgL_arg3028z00_1010;
																																{	/* Module/java.scm 339 */
																																	obj_t
																																		BgL_arg3029z00_1011;
																																	BgL_arg3029z00_1011
																																		=
																																		MAKE_PAIR
																																		(BgL_idz00_982,
																																		BNIL);
																																	BgL_arg3028z00_1010
																																		=
																																		MAKE_PAIR
																																		(BgL_arg3026z00_1008,
																																		BgL_arg3029z00_1011);
																																}
																																BgL_list3027z00_1009
																																	=
																																	MAKE_PAIR
																																	(BgL_arg3025z00_1007,
																																	BgL_arg3028z00_1010);
																															}
																															BgL_arg3023z00_1005
																																=
																																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																(BgL_list3027z00_1009);
																													}}
																												{	/* Module/java.scm 335 */
																													BgL_jmethodz00_bglt
																														BgL_res3277z00_1813;
																													{	/* Module/java.scm 335 */
																														obj_t
																															BgL_src2639z00_1790;
																														obj_t
																															BgL_args2641z00_1792;
																														obj_t
																															BgL_modifiers2643z00_1794;
																														BgL_src2639z00_1790
																															=
																															BgL_componentz00_48;
																														BgL_args2641z00_1792
																															= BgL_argsz00_981;
																														BgL_modifiers2643z00_1794
																															= BgL_modz00_1001;
																														{	/* Module/java.scm 335 */
																															BgL_jmethodz00_bglt
																																BgL_new2644z00_1795;
																															{	/* Module/java.scm 335 */
																																BgL_jmethodz00_bglt
																																	BgL_res3275z00_1800;
																																{	/* Module/java.scm 335 */
																																	BgL_jmethodz00_bglt
																																		BgL_new2658z00_1796;
																																	BgL_new2658z00_1796
																																		=
																																		(
																																		(BgL_jmethodz00_bglt)
																																		BREF
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_jmethodz00_bgl))));
																																	BGL_OBJECT_CLASS_NUM_SET
																																		(
																																		(BgL_objectz00_bglt)
																																		(BgL_new2658z00_1796),
																																		BGl_classzd2numzd2zz__objectz00
																																		(BGl_jmethodz00zzmodule_javaz00));
																																	{	/* Module/java.scm 335 */
																																		BgL_objectz00_bglt
																																			BgL_auxz00_2859;
																																		BgL_auxz00_2859
																																			=
																																			(BgL_objectz00_bglt)
																																			(BgL_new2658z00_1796);
																																		BGL_OBJECT_WIDENING_SET
																																			(BgL_auxz00_2859,
																																			BFALSE);
																																	}
																																	BgL_res3275z00_1800
																																		=
																																		BgL_new2658z00_1796;
																																}
																																BgL_new2644z00_1795
																																	=
																																	BgL_res3275z00_1800;
																															}
																															{	/* Module/java.scm 335 */
																																BgL_jmethodz00_bglt
																																	BgL_res3276z00_1812;
																																{	/* Module/java.scm 335 */
																																	BgL_jmethodz00_bglt
																																		BgL_new2651z00_1801;
																																	BgL_new2651z00_1801
																																		=
																																		BgL_new2644z00_1795;
																																	{	/* Module/java.scm 335 */
																																		obj_t
																																			BgL_src2646z00_1807;
																																		obj_t
																																			BgL_id2647z00_1808;
																																		obj_t
																																			BgL_args2648z00_1809;
																																		obj_t
																																			BgL_jname2649z00_1810;
																																		obj_t
																																			BgL_modifiers2650z00_1811;
																																		BgL_src2646z00_1807
																																			=
																																			BgL_src2639z00_1790;
																																		BgL_id2647z00_1808
																																			=
																																			BgL_arg3023z00_1005;
																																		BgL_args2648z00_1809
																																			=
																																			BgL_args2641z00_1792;
																																		BgL_jname2649z00_1810
																																			=
																																			BgL_jnamez00_980;
																																		BgL_modifiers2650z00_1811
																																			=
																																			BgL_modifiers2643z00_1794;
																																		((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_1801))->BgL_srcz00) = ((obj_t) BgL_src2646z00_1807), BUNSPEC);
																																		((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_1801))->BgL_idz00) = ((obj_t) BgL_id2647z00_1808), BUNSPEC);
																																		((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_1801))->BgL_argsz00) = ((obj_t) BgL_args2648z00_1809), BUNSPEC);
																																		((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_1801))->BgL_jnamez00) = ((obj_t) BgL_jname2649z00_1810), BUNSPEC);
																																		((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_1801))->BgL_modifiersz00) = ((obj_t) BgL_modifiers2650z00_1811), BUNSPEC);
																																		BgL_res3276z00_1812
																																			=
																																			BgL_new2651z00_1801;
																																}} BgL_res3276z00_1812;
																															}
																															BgL_res3277z00_1813
																																=
																																BgL_new2644z00_1795;
																													}}
																													BgL_jmetz00_1002 =
																														BgL_res3277z00_1813;
																											}}
																											{	/* Module/java.scm 335 */

																												{	/* Module/java.scm 343 */
																													obj_t
																														BgL_arg3021z00_1003;
																													{	/* Module/java.scm 343 */
																														obj_t
																															BgL_arg3022z00_1004;
																														BgL_arg3022z00_1004
																															=
																															(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_methodsz00);
																														BgL_arg3021z00_1003
																															=
																															MAKE_PAIR((obj_t)
																															(BgL_jmetz00_1002),
																															BgL_arg3022z00_1004);
																													}
																													return
																														((((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_methodsz00) = ((obj_t) BgL_arg3021z00_1003), BUNSPEC);
																												}
																											}
																										}
																									}
																								else
																									{	/* Module/java.scm 332 */
																										obj_t BgL_list3033z00_1015;

																										BgL_list3033z00_1015 =
																											MAKE_PAIR
																											(BGl_string3317z00zzmodule_javaz00,
																											BNIL);
																										return
																											BGl_javazd2errorzd2zzmodule_javaz00
																											(BgL_componentz00_48,
																											BgL_list3033z00_1015);
																									}
																							}
																						else
																							{	/* Module/java.scm 315 */
																							BgL_tagzd21926zd2_985:
																								{	/* Module/java.scm 345 */
																									obj_t BgL_list3034z00_1016;

																									BgL_list3034z00_1016 =
																										MAKE_PAIR
																										(BGl_string3316z00zzmodule_javaz00,
																										BNIL);
																									return
																										BGl_javazd2errorzd2zzmodule_javaz00
																										(BgL_componentz00_48,
																										BgL_list3034z00_1016);
																								}
																							}
																					}
																				else
																					{	/* Module/java.scm 315 */
																						goto BgL_tagzd21926zd2_985;
																					}
																			}
																		else
																			{	/* Module/java.scm 315 */
																				goto BgL_tagzd21926zd2_985;
																			}
																	}
																else
																	{	/* Module/java.scm 315 */
																		goto BgL_tagzd21926zd2_985;
																	}
															}
														else
															{	/* Module/java.scm 315 */
																goto BgL_tagzd21926zd2_985;
															}
													}
												else
													{	/* Module/java.scm 315 */
														goto BgL_tagzd21926zd2_985;
													}
											}
										}
									}
								else
									{	/* Module/java.scm 315 */
										obj_t BgL_cdrzd21804zd2_908;

										BgL_cdrzd21804zd2_908 = CDR(BgL_componentz00_48);
										if (
											(CAR(BgL_componentz00_48) == CNST_TABLE_REF(((long) 14))))
											{	/* Module/java.scm 315 */
												if (PAIRP(BgL_cdrzd21804zd2_908))
													{	/* Module/java.scm 315 */
														obj_t BgL_cdrzd21808zd2_911;

														BgL_cdrzd21808zd2_911 = CDR(BgL_cdrzd21804zd2_908);
														if (
															(CAR(BgL_cdrzd21804zd2_908) ==
																CNST_TABLE_REF(((long) 15))))
															{	/* Module/java.scm 315 */
																if (PAIRP(BgL_cdrzd21808zd2_911))
																	{	/* Module/java.scm 315 */
																		obj_t BgL_carzd21811zd2_914;

																		obj_t BgL_cdrzd21812zd2_915;

																		BgL_carzd21811zd2_914 =
																			CAR(BgL_cdrzd21808zd2_911);
																		BgL_cdrzd21812zd2_915 =
																			CDR(BgL_cdrzd21808zd2_911);
																		if (SYMBOLP(BgL_carzd21811zd2_914))
																			{	/* Module/java.scm 315 */
																				if (PAIRP(BgL_cdrzd21812zd2_915))
																					{	/* Module/java.scm 315 */
																						obj_t BgL_carzd21817zd2_918;

																						BgL_carzd21817zd2_918 =
																							CAR(BgL_cdrzd21812zd2_915);
																						if (BGl_argzd2listzf3z21zzmodule_javaz00(BgL_carzd21817zd2_918))
																							{	/* Module/java.scm 315 */
																								if (NULLP(CDR
																										(BgL_cdrzd21812zd2_915)))
																									{	/* Module/java.scm 315 */
																										BgL_idz00_898 =
																											BgL_carzd21811zd2_914;
																										BgL_argsz00_899 =
																											BgL_carzd21817zd2_918;
																									BgL_tagzd21779zd2_900:
																										{	/* Module/java.scm 349 */
																											BgL_jconstructorz00_bglt
																												BgL_jconstrz00_1018;
																											{	/* Module/java.scm 351 */
																												obj_t
																													BgL_arg3040z00_1024;
																												{	/* Module/java.scm 351 */
																													obj_t
																														BgL_arg3043z00_1027;
																													obj_t
																														BgL_arg3044z00_1028;
																													{	/* Module/java.scm 351 */
																														obj_t
																															BgL_arg3045z00_1029;
																														obj_t
																															BgL_arg3046z00_1030;
																														obj_t
																															BgL_arg3047z00_1031;
																														BgL_arg3045z00_1029
																															=
																															CNST_TABLE_REF((
																																(long) 8));
																														BgL_arg3046z00_1030
																															=
																															(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_iddz00);
																														BgL_arg3047z00_1031
																															=
																															CNST_TABLE_REF((
																																(long) 9));
																														{	/* Module/java.scm 351 */
																															obj_t
																																BgL_list3048z00_1032;
																															{	/* Module/java.scm 351 */
																																obj_t
																																	BgL_arg3049z00_1033;
																																{	/* Module/java.scm 351 */
																																	obj_t
																																		BgL_arg3050z00_1034;
																																	{	/* Module/java.scm 351 */
																																		obj_t
																																			BgL_arg3051z00_1035;
																																		BgL_arg3051z00_1035
																																			=
																																			MAKE_PAIR
																																			(BgL_idz00_898,
																																			BNIL);
																																		BgL_arg3050z00_1034
																																			=
																																			MAKE_PAIR
																																			(BgL_arg3047z00_1031,
																																			BgL_arg3051z00_1035);
																																	}
																																	BgL_arg3049z00_1033
																																		=
																																		MAKE_PAIR
																																		(BgL_arg3046z00_1030,
																																		BgL_arg3050z00_1034);
																																}
																																BgL_list3048z00_1032
																																	=
																																	MAKE_PAIR
																																	(BgL_arg3045z00_1029,
																																	BgL_arg3049z00_1033);
																															}
																															BgL_arg3043z00_1027
																																=
																																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																(BgL_list3048z00_1032);
																													}}
																													BgL_arg3044z00_1028 =
																														(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_iddz00);
																													BgL_arg3040z00_1024 =
																														BGl_makezd2typedzd2identz00zzast_identz00
																														(BgL_arg3043z00_1027,
																														BgL_arg3044z00_1028);
																												}
																												{	/* Module/java.scm 349 */
																													BgL_jconstructorz00_bglt
																														BgL_res3280z00_1842;
																													{	/* Module/java.scm 349 */
																														obj_t
																															BgL_src2687z00_1819;
																														obj_t
																															BgL_args2689z00_1821;
																														BgL_src2687z00_1819
																															=
																															BgL_componentz00_48;
																														BgL_args2689z00_1821
																															= BgL_argsz00_899;
																														{	/* Module/java.scm 349 */
																															BgL_jconstructorz00_bglt
																																BgL_new2692z00_1824;
																															{	/* Module/java.scm 349 */
																																BgL_jconstructorz00_bglt
																																	BgL_res3278z00_1829;
																																{	/* Module/java.scm 349 */
																																	BgL_jconstructorz00_bglt
																																		BgL_new2706z00_1825;
																																	BgL_new2706z00_1825
																																		=
																																		(
																																		(BgL_jconstructorz00_bglt)
																																		BREF
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_jconstructorz00_bgl))));
																																	BGL_OBJECT_CLASS_NUM_SET
																																		(
																																		(BgL_objectz00_bglt)
																																		(BgL_new2706z00_1825),
																																		BGl_classzd2numzd2zz__objectz00
																																		(BGl_jconstructorz00zzmodule_javaz00));
																																	{	/* Module/java.scm 349 */
																																		BgL_objectz00_bglt
																																			BgL_auxz00_2917;
																																		BgL_auxz00_2917
																																			=
																																			(BgL_objectz00_bglt)
																																			(BgL_new2706z00_1825);
																																		BGL_OBJECT_WIDENING_SET
																																			(BgL_auxz00_2917,
																																			BFALSE);
																																	}
																																	BgL_res3278z00_1829
																																		=
																																		BgL_new2706z00_1825;
																																}
																																BgL_new2692z00_1824
																																	=
																																	BgL_res3278z00_1829;
																															}
																															{	/* Module/java.scm 349 */
																																BgL_jconstructorz00_bglt
																																	BgL_res3279z00_1841;
																																{	/* Module/java.scm 349 */
																																	BgL_jconstructorz00_bglt
																																		BgL_new2699z00_1830;
																																	BgL_new2699z00_1830
																																		=
																																		BgL_new2692z00_1824;
																																	{	/* Module/java.scm 349 */
																																		obj_t
																																			BgL_src2694z00_1836;
																																		obj_t
																																			BgL_id2695z00_1837;
																																		obj_t
																																			BgL_args2696z00_1838;
																																		obj_t
																																			BgL_jname2697z00_1839;
																																		obj_t
																																			BgL_modifiers2698z00_1840;
																																		BgL_src2694z00_1836
																																			=
																																			BgL_src2687z00_1819;
																																		BgL_id2695z00_1837
																																			=
																																			BgL_arg3040z00_1024;
																																		BgL_args2696z00_1838
																																			=
																																			BgL_args2689z00_1821;
																																		BgL_jname2697z00_1839
																																			=
																																			BGl_string3315z00zzmodule_javaz00;
																																		BgL_modifiers2698z00_1840
																																			= BNIL;
																																		((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_1830))->BgL_srcz00) = ((obj_t) BgL_src2694z00_1836), BUNSPEC);
																																		((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_1830))->BgL_idz00) = ((obj_t) BgL_id2695z00_1837), BUNSPEC);
																																		((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_1830))->BgL_argsz00) = ((obj_t) BgL_args2696z00_1838), BUNSPEC);
																																		((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_1830))->BgL_jnamez00) = ((obj_t) BgL_jname2697z00_1839), BUNSPEC);
																																		((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_1830))->BgL_modifiersz00) = ((obj_t) BgL_modifiers2698z00_1840), BUNSPEC);
																																		BgL_res3279z00_1841
																																			=
																																			BgL_new2699z00_1830;
																																}} BgL_res3279z00_1841;
																															}
																															BgL_res3280z00_1842
																																=
																																BgL_new2692z00_1824;
																													}}
																													BgL_jconstrz00_1018 =
																														BgL_res3280z00_1842;
																											}}
																											{	/* Module/java.scm 355 */
																												obj_t
																													BgL_arg3035z00_1019;
																												{	/* Module/java.scm 355 */
																													obj_t
																														BgL_arg3036z00_1020;
																													BgL_arg3036z00_1020 =
																														(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_methodsz00);
																													BgL_arg3035z00_1019 =
																														MAKE_PAIR((obj_t)
																														(BgL_jconstrz00_1018),
																														BgL_arg3036z00_1020);
																												}
																												((((BgL_jklassz00_bglt)
																															CREF
																															(BgL_jklassz00_47))->
																														BgL_methodsz00) =
																													((obj_t)
																														BgL_arg3035z00_1019),
																													BUNSPEC);
																											}
																											{	/* Module/java.scm 356 */
																												obj_t
																													BgL_arg3037z00_1021;
																												{	/* Module/java.scm 356 */
																													obj_t
																														BgL_arg3038z00_1022;
																													obj_t
																														BgL_arg3039z00_1023;
																													BgL_arg3038z00_1022 =
																														MAKE_PAIR
																														(BgL_idz00_898,
																														BgL_argsz00_899);
																													BgL_arg3039z00_1023 =
																														(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_constructorsz00);
																													BgL_arg3037z00_1021 =
																														MAKE_PAIR
																														(BgL_arg3038z00_1022,
																														BgL_arg3039z00_1023);
																												}
																												return
																													((((BgL_jklassz00_bglt) CREF(BgL_jklassz00_47))->BgL_constructorsz00) = ((obj_t) BgL_arg3037z00_1021), BUNSPEC);
																											}
																										}
																									}
																								else
																									{	/* Module/java.scm 315 */
																									BgL_tagzd21780zd2_901:
																										if (PAIRP
																											(BgL_componentz00_48))
																											{	/* Module/java.scm 359 */
																												obj_t
																													BgL_list3053z00_1037;
																												BgL_list3053z00_1037 =
																													MAKE_PAIR
																													(BGl_string3312z00zzmodule_javaz00,
																													BNIL);
																												return
																													BGl_javazd2errorzd2zzmodule_javaz00
																													(BgL_componentz00_48,
																													BgL_list3053z00_1037);
																											}
																										else
																											{	/* Module/java.scm 360 */
																												obj_t
																													BgL_arg3054z00_1038;
																												{	/* Module/java.scm 360 */
																													obj_t
																														BgL_arg3057z00_1041;
																													{	/* Module/java.scm 363 */
																														obj_t
																															BgL_zc3anonymousza33060ze3z83_2319;
																														BgL_zc3anonymousza33060ze3z83_2319
																															=
																															make_fx_procedure
																															(BGl_zc3anonymousza33060ze3z83zzmodule_javaz00,
																															(int) (((long)
																																	0)),
																															(int) (((long)
																																	1)));
																														PROCEDURE_SET
																															(BgL_zc3anonymousza33060ze3z83_2319,
																															(int) (((long)
																																	0)),
																															BgL_componentz00_48);
																														BgL_arg3057z00_1041
																															=
																															BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
																															(BgL_zc3anonymousza33060ze3z83_2319);
																													}
																													BgL_arg3054z00_1038 =
																														string_append_3
																														(BGl_string3313z00zzmodule_javaz00,
																														BgL_arg3057z00_1041,
																														BGl_string3314z00zzmodule_javaz00);
																												}
																												{	/* Module/java.scm 360 */
																													obj_t
																														BgL_list3055z00_1039;
																													BgL_list3055z00_1039 =
																														MAKE_PAIR
																														(BgL_arg3054z00_1038,
																														BNIL);
																													return
																														BGl_javazd2errorzd2zzmodule_javaz00
																														(BgL_jz00_46,
																														BgL_list3055z00_1039);
																												}
																											}
																									}
																							}
																						else
																							{	/* Module/java.scm 315 */
																								goto BgL_tagzd21780zd2_901;
																							}
																					}
																				else
																					{	/* Module/java.scm 315 */
																						obj_t BgL_carzd21836zd2_923;

																						obj_t BgL_cdrzd21837zd2_924;

																						BgL_carzd21836zd2_923 =
																							CAR(BgL_cdrzd21804zd2_908);
																						BgL_cdrzd21837zd2_924 =
																							CDR(BgL_cdrzd21804zd2_908);
																						if (SYMBOLP(BgL_carzd21836zd2_923))
																							{	/* Module/java.scm 315 */
																								obj_t BgL_carzd21843zd2_926;

																								BgL_carzd21843zd2_926 =
																									CAR(BgL_cdrzd21837zd2_924);
																								if (BGl_argzd2listzf3z21zzmodule_javaz00(BgL_carzd21843zd2_926))
																									{	/* Module/java.scm 315 */
																										if (NULLP(CDR
																												(BgL_cdrzd21837zd2_924)))
																											{
																												obj_t BgL_argsz00_2957;

																												obj_t BgL_idz00_2956;

																												BgL_idz00_2956 =
																													BgL_carzd21836zd2_923;
																												BgL_argsz00_2957 =
																													BgL_carzd21843zd2_926;
																												BgL_argsz00_899 =
																													BgL_argsz00_2957;
																												BgL_idz00_898 =
																													BgL_idz00_2956;
																												goto
																													BgL_tagzd21779zd2_900;
																											}
																										else
																											{	/* Module/java.scm 315 */
																												goto
																													BgL_tagzd21780zd2_901;
																											}
																									}
																								else
																									{	/* Module/java.scm 315 */
																										goto BgL_tagzd21780zd2_901;
																									}
																							}
																						else
																							{	/* Module/java.scm 315 */
																								goto BgL_tagzd21780zd2_901;
																							}
																					}
																			}
																		else
																			{	/* Module/java.scm 315 */
																				obj_t BgL_carzd21856zd2_931;

																				obj_t BgL_cdrzd21857zd2_932;

																				BgL_carzd21856zd2_931 =
																					CAR(BgL_cdrzd21804zd2_908);
																				BgL_cdrzd21857zd2_932 =
																					CDR(BgL_cdrzd21804zd2_908);
																				if (SYMBOLP(BgL_carzd21856zd2_931))
																					{	/* Module/java.scm 315 */
																						obj_t BgL_carzd21862zd2_934;

																						BgL_carzd21862zd2_934 =
																							CAR(BgL_cdrzd21857zd2_932);
																						if (BGl_argzd2listzf3z21zzmodule_javaz00(BgL_carzd21862zd2_934))
																							{	/* Module/java.scm 315 */
																								if (NULLP(CDR
																										(BgL_cdrzd21857zd2_932)))
																									{
																										obj_t BgL_argsz00_2969;

																										obj_t BgL_idz00_2968;

																										BgL_idz00_2968 =
																											BgL_carzd21856zd2_931;
																										BgL_argsz00_2969 =
																											BgL_carzd21862zd2_934;
																										BgL_argsz00_899 =
																											BgL_argsz00_2969;
																										BgL_idz00_898 =
																											BgL_idz00_2968;
																										goto BgL_tagzd21779zd2_900;
																									}
																								else
																									{	/* Module/java.scm 315 */
																										goto BgL_tagzd21780zd2_901;
																									}
																							}
																						else
																							{	/* Module/java.scm 315 */
																								goto BgL_tagzd21780zd2_901;
																							}
																					}
																				else
																					{	/* Module/java.scm 315 */
																						goto BgL_tagzd21780zd2_901;
																					}
																			}
																	}
																else
																	{	/* Module/java.scm 315 */
																		goto BgL_tagzd21780zd2_901;
																	}
															}
														else
															{	/* Module/java.scm 315 */
																obj_t BgL_carzd21875zd2_939;

																obj_t BgL_cdrzd21876zd2_940;

																BgL_carzd21875zd2_939 =
																	CAR(BgL_cdrzd21804zd2_908);
																BgL_cdrzd21876zd2_940 =
																	CDR(BgL_cdrzd21804zd2_908);
																if (SYMBOLP(BgL_carzd21875zd2_939))
																	{	/* Module/java.scm 315 */
																		if (PAIRP(BgL_cdrzd21876zd2_940))
																			{	/* Module/java.scm 315 */
																				obj_t BgL_carzd21881zd2_943;

																				BgL_carzd21881zd2_943 =
																					CAR(BgL_cdrzd21876zd2_940);
																				if (BGl_argzd2listzf3z21zzmodule_javaz00
																					(BgL_carzd21881zd2_943))
																					{	/* Module/java.scm 315 */
																						if (NULLP(CDR
																								(BgL_cdrzd21876zd2_940)))
																							{
																								obj_t BgL_argsz00_2983;

																								obj_t BgL_idz00_2982;

																								BgL_idz00_2982 =
																									BgL_carzd21875zd2_939;
																								BgL_argsz00_2983 =
																									BgL_carzd21881zd2_943;
																								BgL_argsz00_899 =
																									BgL_argsz00_2983;
																								BgL_idz00_898 = BgL_idz00_2982;
																								goto BgL_tagzd21779zd2_900;
																							}
																						else
																							{	/* Module/java.scm 315 */
																								goto BgL_tagzd21780zd2_901;
																							}
																					}
																				else
																					{	/* Module/java.scm 315 */
																						goto BgL_tagzd21780zd2_901;
																					}
																			}
																		else
																			{	/* Module/java.scm 315 */
																				goto BgL_tagzd21780zd2_901;
																			}
																	}
																else
																	{	/* Module/java.scm 315 */
																		goto BgL_tagzd21780zd2_901;
																	}
															}
													}
												else
													{	/* Module/java.scm 315 */
														goto BgL_tagzd21780zd2_901;
													}
											}
										else
											{	/* Module/java.scm 315 */
												goto BgL_tagzd21780zd2_901;
											}
									}
							}
					}
				else
					{	/* Module/java.scm 315 */
						goto BgL_tagzd21780zd2_901;
					}
			}
		}
	}



/* every? */
	bool_t BGl_everyzf3zf3zzmodule_javaz00(obj_t BgL_predzf3zf3_1047,
		obj_t BgL_lstz00_1048)
	{
		AN_OBJECT;
		{	/* Module/java.scm 305 */
			{
				obj_t BgL_lstz00_1051;

				BgL_lstz00_1051 = BgL_lstz00_1048;
			BgL_zc3anonymousza33063ze3z83_1052:
				if (NULLP(BgL_lstz00_1051))
					{	/* Module/java.scm 298 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/java.scm 298 */
						if (PAIRP(BgL_lstz00_1051))
							{	/* Module/java.scm 302 */
								bool_t BgL_testz00_2988;

								{	/* Module/java.scm 302 */
									obj_t BgL_arg3068z00_1057;

									BgL_arg3068z00_1057 = CAR(BgL_lstz00_1051);
									BgL_testz00_2988 =
										CBOOL(PROCEDURE_ENTRY(BgL_predzf3zf3_1047)
										(BgL_predzf3zf3_1047, BgL_arg3068z00_1057, BEOA));
								}
								if (BgL_testz00_2988)
									{
										obj_t BgL_lstz00_2993;

										BgL_lstz00_2993 = CDR(BgL_lstz00_1051);
										BgL_lstz00_1051 = BgL_lstz00_2993;
										goto BgL_zc3anonymousza33063ze3z83_1052;
									}
								else
									{	/* Module/java.scm 302 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Module/java.scm 300 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* modifier-list? */
	bool_t BGl_modifierzd2listzf3z21zzmodule_javaz00(obj_t BgL_lstz00_1066)
	{
		AN_OBJECT;
		{	/* Module/java.scm 314 */
			return
				BGl_everyzf3zf3zzmodule_javaz00(BGl_proc3320z00zzmodule_javaz00,
				BgL_lstz00_1066);
		}
	}



/* arg-list? */
	bool_t BGl_argzd2listzf3z21zzmodule_javaz00(obj_t BgL_lstz00_1059)
	{
		AN_OBJECT;
		{	/* Module/java.scm 307 */
			return
				BGl_everyzf3zf3zzmodule_javaz00(BGl_proc3321z00zzmodule_javaz00,
				BgL_lstz00_1059);
		}
	}



/* <anonymous:3060> */
	obj_t BGl_zc3anonymousza33060ze3z83zzmodule_javaz00(obj_t BgL_envz00_2322)
	{
		AN_OBJECT;
		{	/* Module/java.scm 362 */
			{	/* Module/java.scm 363 */
				obj_t BgL_componentz00_2323;

				BgL_componentz00_2323 =
					PROCEDURE_REF(BgL_envz00_2322, (int) (((long) 0)));
				{

					return
						BGl_writez00zz__r4_output_6_10_3z00(BgL_componentz00_2323, BNIL);
				}
			}
		}
	}



/* <anonymous:3074> */
	obj_t BGl_zc3anonymousza33074ze3z83zzmodule_javaz00(obj_t BgL_envz00_2324,
		obj_t BgL_sz00_2325)
	{
		AN_OBJECT;
		{	/* Module/java.scm 309 */
			{
				obj_t BgL_sz00_1069;

				BgL_sz00_1069 = BgL_sz00_2325;
				if (SYMBOLP(BgL_sz00_1069))
					{	/* Module/java.scm 310 */
						return
							BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_sz00_1069,
							CNST_TABLE_REF(((long) 16)));
					}
				else
					{	/* Module/java.scm 310 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:3071> */
	obj_t BGl_zc3anonymousza33071ze3z83zzmodule_javaz00(obj_t BgL_envz00_2326,
		obj_t BgL_sz00_2327)
	{
		AN_OBJECT;
		{	/* Module/java.scm 307 */
			{
				obj_t BgL_sz00_1062;

				{	/* Module/java.scm 307 */
					bool_t BgL_auxz00_3004;

					BgL_sz00_1062 = BgL_sz00_2327;
					if (SYMBOLP(BgL_sz00_1062))
						{	/* Module/java.scm 307 */
							BgL_auxz00_3004 =
								BGl_typezd2identzf3z21zzast_identz00(BgL_sz00_1062);
						}
					else
						{	/* Module/java.scm 307 */
							BgL_auxz00_3004 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_3004);
				}
			}
		}
	}



/* declare-jklass */
	BgL_jclassz00_bglt BGl_declarezd2jklasszd2zzmodule_javaz00(BgL_jklassz00_bglt
		BgL_jklassz00_49)
	{
		AN_OBJECT;
		{	/* Module/java.scm 371 */
			{
				BgL_jmethodz00_bglt BgL_jmetz00_1139;

				BgL_jmethodz00_bglt BgL_jmetz00_1115;

				BgL_jmethodz00_bglt BgL_jmetz00_1105;

				{	/* Module/java.scm 397 */
					obj_t BgL_arg3075z00_1080;

					obj_t BgL_arg3076z00_1081;

					BgL_arg3075z00_1080 =
						(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->BgL_idz00);
					BgL_arg3076z00_1081 =
						(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->BgL_jnamez00);
					BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg3075z00_1080,
						BgL_arg3076z00_1081, BNIL);
				}
				{	/* Module/java.scm 398 */
					obj_t BgL_arg3078z00_1083;

					obj_t BgL_arg3079z00_1084;

					{	/* Module/java.scm 398 */
						obj_t BgL_arg3081z00_1086;

						obj_t BgL_arg3082z00_1087;

						BgL_arg3081z00_1086 =
							(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->BgL_idz00);
						BgL_arg3082z00_1087 =
							(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->BgL_locz00);
						BgL_arg3078z00_1083 =
							BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_arg3081z00_1086,
							BgL_arg3082z00_1087);
					}
					BgL_arg3079z00_1084 =
						(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->BgL_jnamez00);
					BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg3078z00_1083,
						BgL_arg3079z00_1084, BNIL);
				}
				{	/* Module/java.scm 399 */
					obj_t BgL_g2802z00_1088;

					BgL_g2802z00_1088 =
						(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->BgL_methodsz00);
					{
						obj_t BgL_l2800z00_1090;

						BgL_l2800z00_1090 = BgL_g2802z00_1088;
					BgL_zc3anonymousza33083ze3z83_1091:
						if (PAIRP(BgL_l2800z00_1090))
							{	/* Module/java.scm 399 */
								{	/* Module/java.scm 399 */
									obj_t BgL_arg3085z00_1093;

									BgL_arg3085z00_1093 = CAR(BgL_l2800z00_1090);
									BgL_jmetz00_1139 =
										(BgL_jmethodz00_bglt) (BgL_arg3085z00_1093);
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 17)),
												(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1139))->
													BgL_modifiersz00))))
										{	/* Module/java.scm 393 */
											BgL_globalz00_bglt BgL_auxz00_3026;

											BgL_jmetz00_1105 = BgL_jmetz00_1139;
											{	/* Module/java.scm 375 */
												obj_t BgL_arg3094z00_1108;

												obj_t BgL_arg3095z00_1109;

												obj_t BgL_arg3096z00_1110;

												obj_t BgL_arg3097z00_1111;

												obj_t BgL_arg3098z00_1112;

												obj_t BgL_arg3099z00_1113;

												obj_t BgL_arg3100z00_1114;

												BgL_arg3094z00_1108 =
													(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1105))->
													BgL_idz00);
												BgL_arg3095z00_1109 =
													(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->
													BgL_idz00);
												BgL_arg3096z00_1110 =
													(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1105))->
													BgL_jnamez00);
												BgL_arg3097z00_1111 =
													(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1105))->
													BgL_argsz00);
												BgL_arg3098z00_1112 =
													(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1105))->
													BgL_modifiersz00);
												BgL_arg3099z00_1113 =
													(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->
													BgL_jnamez00);
												BgL_arg3100z00_1114 =
													(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1105))->
													BgL_srcz00);
												{	/* Module/java.scm 375 */
													obj_t BgL_pidz00_1890;

													BgL_pidz00_1890 =
														BGl_parsezd2idzd2zzast_identz00(BgL_arg3094z00_1108,
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_arg3100z00_1114));
													{	/* Module/java.scm 375 */
														obj_t BgL_lnz00_1892;

														BgL_lnz00_1892 = CAR(BgL_pidz00_1890);
														{	/* Module/java.scm 375 */
															obj_t BgL_tidz00_1893;

															{
																BgL_typez00_bglt BgL_auxz00_3037;

																BgL_auxz00_3037 =
																	(BgL_typez00_bglt) (CDR(BgL_pidz00_1890));
																BgL_tidz00_1893 =
																	(((BgL_typez00_bglt) CREF(BgL_auxz00_3037))->
																	BgL_idz00);
															}
															{	/* Module/java.scm 375 */

																{	/* Module/java.scm 375 */
																	BgL_globalz00_bglt BgL_gz00_1895;

																	BgL_gz00_1895 =
																		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																		(BgL_lnz00_1892, BgL_arg3095z00_1109,
																		BgL_arg3096z00_1110, BgL_tidz00_1893,
																		BgL_arg3097z00_1111, ((bool_t) 0),
																		((bool_t) 0), BgL_arg3100z00_1114, BFALSE);
																	{	/* Module/java.scm 375 */
																		BgL_valuez00_bglt BgL_arg3127z00_1896;

																		{
																			BgL_variablez00_bglt BgL_auxz00_3042;

																			BgL_auxz00_3042 =
																				(BgL_variablez00_bglt) (BgL_gz00_1895);
																			BgL_arg3127z00_1896 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_3042))->BgL_valuez00);
																		}
																		{
																			BgL_cfunz00_bglt BgL_auxz00_3045;

																			BgL_auxz00_3045 =
																				(BgL_cfunz00_bglt)
																				(BgL_arg3127z00_1896);
																			((((BgL_cfunz00_bglt)
																						CREF(BgL_auxz00_3045))->
																					BgL_methodz00) =
																				((obj_t) BgL_arg3098z00_1112), BUNSPEC);
																	}}
																	((((BgL_globalz00_bglt) CREF(BgL_gz00_1895))->
																			BgL_jvmzd2typezd2namez00) =
																		((obj_t) BgL_arg3099z00_1113), BUNSPEC);
																	BgL_auxz00_3026 = BgL_gz00_1895;
											}}}}}}
											(obj_t) (BgL_auxz00_3026);
										}
									else
										{	/* Module/java.scm 392 */
											BgL_jmetz00_1115 = BgL_jmetz00_1139;
											{	/* Module/java.scm 381 */
												bool_t BgL_testz00_3050;

												{	/* Module/java.scm 381 */
													bool_t BgL_testz00_3051;

													{	/* Module/java.scm 381 */
														obj_t BgL_obj2729z00_1905;

														BgL_obj2729z00_1905 = (obj_t) (BgL_jmetz00_1115);
														BgL_testz00_3051 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj2729z00_1905,
															BGl_jconstructorz00zzmodule_javaz00);
													}
													if (BgL_testz00_3051)
														{	/* Module/java.scm 381 */
															BgL_testz00_3050 = ((bool_t) 0);
														}
													else
														{	/* Module/java.scm 382 */
															bool_t BgL_testz00_3054;

															{	/* Module/java.scm 382 */
																bool_t BgL_testz00_3055;

																{	/* Module/java.scm 382 */
																	obj_t BgL_auxz00_3056;

																	BgL_auxz00_3056 =
																		(((BgL_jmethodz00_bglt)
																			CREF(BgL_jmetz00_1115))->BgL_argsz00);
																	BgL_testz00_3055 = PAIRP(BgL_auxz00_3056);
																}
																if (BgL_testz00_3055)
																	{	/* Module/java.scm 383 */
																		obj_t BgL_arg3116z00_1132;

																		obj_t BgL_arg3117z00_1133;

																		{	/* Module/java.scm 383 */
																			BgL_typez00_bglt BgL_arg3118z00_1134;

																			{	/* Module/java.scm 383 */
																				obj_t BgL_arg3119z00_1135;

																				obj_t BgL_arg3120z00_1136;

																				{	/* Module/java.scm 383 */
																					obj_t BgL_pairz00_1909;

																					BgL_pairz00_1909 =
																						(((BgL_jmethodz00_bglt)
																							CREF(BgL_jmetz00_1115))->
																						BgL_argsz00);
																					BgL_arg3119z00_1135 =
																						CAR(BgL_pairz00_1909);
																				}
																				BgL_arg3120z00_1136 =
																					(((BgL_jklassz00_bglt)
																						CREF(BgL_jklassz00_49))->
																					BgL_locz00);
																				BgL_arg3118z00_1134 =
																					BGl_typezd2ofzd2idz00zzast_identz00
																					(BgL_arg3119z00_1135,
																					BgL_arg3120z00_1136);
																			}
																			BgL_arg3116z00_1132 =
																				(((BgL_typez00_bglt)
																					CREF(BgL_arg3118z00_1134))->
																				BgL_idz00);
																		}
																		BgL_arg3117z00_1133 =
																			(((BgL_jklassz00_bglt)
																				CREF(BgL_jklassz00_49))->BgL_iddz00);
																		BgL_testz00_3054 =
																			(BgL_arg3116z00_1132 ==
																			BgL_arg3117z00_1133);
																	}
																else
																	{	/* Module/java.scm 382 */
																		BgL_testz00_3054 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_3054)
																{	/* Module/java.scm 382 */
																	BgL_testz00_3050 = ((bool_t) 0);
																}
															else
																{	/* Module/java.scm 382 */
																	BgL_testz00_3050 = ((bool_t) 1);
																}
														}
												}
												if (BgL_testz00_3050)
													{	/* Module/java.scm 385 */
														obj_t BgL_arg3103z00_1119;

														BgL_arg3103z00_1119 =
															(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1115))->
															BgL_srcz00);
														{	/* Module/java.scm 385 */
															obj_t BgL_list3105z00_1121;

															BgL_list3105z00_1121 =
																MAKE_PAIR(BGl_string3322z00zzmodule_javaz00,
																BNIL);
															BGl_javazd2errorzd2zzmodule_javaz00
																(BgL_arg3103z00_1119, BgL_list3105z00_1121);
														}
													}
												else
													{	/* Module/java.scm 386 */
														obj_t BgL_arg3106z00_1122;

														obj_t BgL_arg3107z00_1123;

														obj_t BgL_arg3108z00_1124;

														obj_t BgL_arg3109z00_1125;

														obj_t BgL_arg3110z00_1126;

														obj_t BgL_arg3111z00_1127;

														obj_t BgL_arg3112z00_1128;

														BgL_arg3106z00_1122 =
															(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1115))->
															BgL_idz00);
														BgL_arg3107z00_1123 =
															(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->
															BgL_idz00);
														BgL_arg3108z00_1124 =
															(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1115))->
															BgL_jnamez00);
														BgL_arg3109z00_1125 =
															(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1115))->
															BgL_argsz00);
														BgL_arg3110z00_1126 =
															(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1115))->
															BgL_modifiersz00);
														BgL_arg3111z00_1127 =
															(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_49))->
															BgL_jnamez00);
														BgL_arg3112z00_1128 =
															(((BgL_jmethodz00_bglt) CREF(BgL_jmetz00_1115))->
															BgL_srcz00);
														{	/* Module/java.scm 386 */
															obj_t BgL_pidz00_1928;

															BgL_pidz00_1928 =
																BGl_parsezd2idzd2zzast_identz00
																(BgL_arg3106z00_1122,
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_arg3112z00_1128));
															{	/* Module/java.scm 386 */
																obj_t BgL_lnz00_1930;

																BgL_lnz00_1930 = CAR(BgL_pidz00_1928);
																{	/* Module/java.scm 386 */
																	obj_t BgL_tidz00_1931;

																	{
																		BgL_typez00_bglt BgL_auxz00_3079;

																		BgL_auxz00_3079 =
																			(BgL_typez00_bglt) (CDR(BgL_pidz00_1928));
																		BgL_tidz00_1931 =
																			(((BgL_typez00_bglt)
																				CREF(BgL_auxz00_3079))->BgL_idz00);
																	}
																	{	/* Module/java.scm 386 */

																		{	/* Module/java.scm 386 */
																			BgL_globalz00_bglt BgL_gz00_1933;

																			BgL_gz00_1933 =
																				BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																				(BgL_lnz00_1930, BgL_arg3107z00_1123,
																				BgL_arg3108z00_1124, BgL_tidz00_1931,
																				BgL_arg3109z00_1125, ((bool_t) 0),
																				((bool_t) 0), BgL_arg3112z00_1128,
																				BFALSE);
																			{	/* Module/java.scm 386 */
																				BgL_valuez00_bglt BgL_arg3127z00_1934;

																				{
																					BgL_variablez00_bglt BgL_auxz00_3084;

																					BgL_auxz00_3084 =
																						(BgL_variablez00_bglt)
																						(BgL_gz00_1933);
																					BgL_arg3127z00_1934 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_3084))->
																						BgL_valuez00);
																				}
																				{
																					BgL_cfunz00_bglt BgL_auxz00_3087;

																					BgL_auxz00_3087 =
																						(BgL_cfunz00_bglt)
																						(BgL_arg3127z00_1934);
																					((((BgL_cfunz00_bglt)
																								CREF(BgL_auxz00_3087))->
																							BgL_methodz00) =
																						((obj_t) BgL_arg3110z00_1126),
																						BUNSPEC);
																				}
																			}
																			((((BgL_globalz00_bglt)
																						CREF(BgL_gz00_1933))->
																					BgL_jvmzd2typezd2namez00) =
																				((obj_t) BgL_arg3111z00_1127), BUNSPEC);
																			(obj_t) (BgL_gz00_1933);
																		}
																	}
																}
															}
														}
													}
											}
										}
								}
								{
									obj_t BgL_l2800z00_3093;

									BgL_l2800z00_3093 = CDR(BgL_l2800z00_1090);
									BgL_l2800z00_1090 = BgL_l2800z00_3093;
									goto BgL_zc3anonymousza33083ze3z83_1091;
								}
							}
						else
							{	/* Module/java.scm 399 */
								((bool_t) 1);
							}
					}
				}
				{	/* Module/java.scm 400 */
					BgL_jclassz00_bglt BgL_jclassz00_1096;

					BgL_jclassz00_1096 =
						BGl_declarezd2javazd2classz12z12zzmodule_javaz00(BgL_jklassz00_49);
					{	/* Module/java.scm 402 */
						bool_t BgL_testz00_3096;

						{	/* Module/java.scm 402 */
							obj_t BgL_auxz00_3097;

							{
								obj_t BgL_auxz00_3098;

								{	/* Module/java.scm 402 */
									BgL_objectz00_bglt BgL_auxz00_3099;

									BgL_auxz00_3099 = (BgL_objectz00_bglt) (BgL_jclassz00_1096);
									BgL_auxz00_3098 = BGL_OBJECT_WIDENING(BgL_auxz00_3099);
								}
								BgL_auxz00_3097 =
									(((BgL_jclassz00_bglt) CREF(BgL_auxz00_3098))->
									BgL_itszd2superzd2);
							}
							BgL_testz00_3096 = CBOOL(BgL_auxz00_3097);
						}
						if (BgL_testz00_3096)
							{	/* Module/java.scm 403 */
								obj_t BgL_typez00_1099;

								{	/* Module/java.scm 404 */
									bool_t BgL_testz00_3104;

									{	/* Module/java.scm 404 */
										obj_t BgL_arg3092z00_1104;

										{
											obj_t BgL_auxz00_3105;

											{	/* Module/java.scm 404 */
												BgL_objectz00_bglt BgL_auxz00_3106;

												BgL_auxz00_3106 =
													(BgL_objectz00_bglt) (BgL_jclassz00_1096);
												BgL_auxz00_3105 = BGL_OBJECT_WIDENING(BgL_auxz00_3106);
											}
											BgL_arg3092z00_1104 =
												(((BgL_jclassz00_bglt) CREF(BgL_auxz00_3105))->
												BgL_itszd2superzd2);
										}
										BgL_testz00_3104 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3092z00_1104,
											BGl_jclassz00zzobject_classz00);
									}
									if (BgL_testz00_3104)
										{
											obj_t BgL_auxz00_3111;

											{	/* Module/java.scm 404 */
												BgL_objectz00_bglt BgL_auxz00_3112;

												BgL_auxz00_3112 =
													(BgL_objectz00_bglt) (BgL_jclassz00_1096);
												BgL_auxz00_3111 = BGL_OBJECT_WIDENING(BgL_auxz00_3112);
											}
											BgL_typez00_1099 =
												(((BgL_jclassz00_bglt) CREF(BgL_auxz00_3111))->
												BgL_itszd2superzd2);
										}
									else
										{	/* Module/java.scm 406 */
											bool_t BgL_testz00_3116;

											{	/* Module/java.scm 406 */
												obj_t BgL_arg3091z00_1103;

												{
													obj_t BgL_auxz00_3117;

													{	/* Module/java.scm 406 */
														BgL_objectz00_bglt BgL_auxz00_3118;

														BgL_auxz00_3118 =
															(BgL_objectz00_bglt) (BgL_jclassz00_1096);
														BgL_auxz00_3117 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3118);
													}
													BgL_arg3091z00_1103 =
														(((BgL_jclassz00_bglt) CREF(BgL_auxz00_3117))->
														BgL_itszd2superzd2);
												}
												BgL_testz00_3116 =
													BGl_iszd2azf3z21zz__objectz00(BgL_arg3091z00_1103,
													BGl_typez00zztype_typez00);
											}
											if (BgL_testz00_3116)
												{
													obj_t BgL_auxz00_3123;

													{	/* Module/java.scm 406 */
														BgL_objectz00_bglt BgL_auxz00_3124;

														BgL_auxz00_3124 =
															(BgL_objectz00_bglt) (BgL_jclassz00_1096);
														BgL_auxz00_3123 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3124);
													}
													BgL_typez00_1099 =
														(((BgL_jclassz00_bglt) CREF(BgL_auxz00_3123))->
														BgL_itszd2superzd2);
												}
											else
												{	/* Module/java.scm 409 */
													obj_t BgL_arg3090z00_1102;

													{
														obj_t BgL_auxz00_3128;

														{	/* Module/java.scm 409 */
															BgL_objectz00_bglt BgL_auxz00_3129;

															BgL_auxz00_3129 =
																(BgL_objectz00_bglt) (BgL_jclassz00_1096);
															BgL_auxz00_3128 =
																BGL_OBJECT_WIDENING(BgL_auxz00_3129);
														}
														BgL_arg3090z00_1102 =
															(((BgL_jclassz00_bglt) CREF(BgL_auxz00_3128))->
															BgL_itszd2superzd2);
													}
													BgL_typez00_1099 =
														(obj_t) (BGl_findzd2typezd2zztype_envz00
														(BgL_arg3090z00_1102));
												}
										}
								}
								{
									obj_t BgL_auxz00_3135;

									{	/* Module/java.scm 410 */
										BgL_objectz00_bglt BgL_auxz00_3136;

										BgL_auxz00_3136 = (BgL_objectz00_bglt) (BgL_jclassz00_1096);
										BgL_auxz00_3135 = BGL_OBJECT_WIDENING(BgL_auxz00_3136);
									}
									((((BgL_jclassz00_bglt) CREF(BgL_auxz00_3135))->
											BgL_itszd2superzd2) =
										((obj_t) BgL_typez00_1099), BUNSPEC);
								}
							}
						else
							{	/* Module/java.scm 402 */
								BFALSE;
							}
					}
					return BgL_jclassz00_1096;
				}
			}
		}
	}



/* declare-java-class! */
	BgL_jclassz00_bglt
		BGl_declarezd2javazd2classz12z12zzmodule_javaz00(BgL_jklassz00_bglt
		BgL_jklassz00_57)
	{
		AN_OBJECT;
		{	/* Module/java.scm 428 */
			{	/* Module/java.scm 433 */
				obj_t BgL_pidz00_1156;

				{	/* Module/java.scm 433 */
					obj_t BgL_arg3143z00_1174;

					obj_t BgL_arg3144z00_1175;

					BgL_arg3143z00_1174 =
						(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->BgL_idz00);
					BgL_arg3144z00_1175 =
						(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->BgL_locz00);
					BgL_pidz00_1156 =
						BGl_parsezd2idzd2zzast_identz00(BgL_arg3143z00_1174,
						BgL_arg3144z00_1175);
				}
				{	/* Module/java.scm 433 */
					obj_t BgL_jidz00_1157;

					BgL_jidz00_1157 = CAR(BgL_pidz00_1156);
					{	/* Module/java.scm 434 */
						obj_t BgL_superz00_1158;

						BgL_superz00_1158 = CDR(BgL_pidz00_1156);
						{	/* Module/java.scm 435 */

							{	/* Module/java.scm 436 */
								obj_t BgL_arg3130z00_1159;

								BgL_arg3130z00_1159 =
									(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->BgL_jnamez00);
								{	/* Module/java.scm 436 */
									obj_t BgL_classz00_1964;

									obj_t BgL_qualifiedzd2namezd2_1965;

									BgL_classz00_1964 = BgL_jidz00_1157;
									BgL_qualifiedzd2namezd2_1965 = BgL_arg3130z00_1159;
									{	/* Module/java.scm 436 */
										obj_t BgL_arg3145z00_1966;

										BgL_arg3145z00_1966 =
											MAKE_PAIR(BgL_classz00_1964,
											BgL_qualifiedzd2namezd2_1965);
										BGl_za2javazd2classesza2zd2zzmodule_javaz00 =
											MAKE_PAIR(BgL_arg3145z00_1966,
											BGl_za2javazd2classesza2zd2zzmodule_javaz00);
									}
								}
							}
							{	/* Module/java.scm 439 */
								BgL_typez00_bglt BgL_jclassz00_1160;

								{	/* Module/java.scm 439 */
									obj_t BgL_arg3140z00_1171;

									obj_t BgL_arg3141z00_1172;

									obj_t BgL_arg3142z00_1173;

									BgL_arg3140z00_1171 =
										(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->
										BgL_jnamez00);
									BgL_arg3141z00_1172 =
										(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->
										BgL_packagez00);
									BgL_arg3142z00_1173 =
										(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->BgL_srcz00);
									BgL_jclassz00_1160 =
										BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00
										(BgL_jidz00_1157, BgL_superz00_1158, BgL_arg3140z00_1171,
										BgL_arg3141z00_1172, BgL_arg3142z00_1173);
								}
								{	/* Module/java.scm 444 */
									obj_t BgL_arg3131z00_1161;

									BgL_arg3131z00_1161 =
										(((BgL_jklassz00_bglt) CREF(BgL_jklassz00_57))->BgL_locz00);
									((((BgL_typez00_bglt) CREF(BgL_jclassz00_1160))->
											BgL_importzd2locationzd2) =
										((obj_t) BgL_arg3131z00_1161), BUNSPEC);
								}
								{	/* Module/java.scm 448 */
									obj_t BgL_arg3132z00_1162;

									{	/* Module/java.scm 448 */
										obj_t BgL_zc3anonymousza33134ze3z83_2328;

										BgL_zc3anonymousza33134ze3z83_2328 =
											make_fx_procedure
											(BGl_zc3anonymousza33134ze3z83zzmodule_javaz00,
											(int) (((long) 0)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3anonymousza33134ze3z83_2328,
											(int) (((long) 0)), (obj_t) (BgL_jklassz00_57));
										PROCEDURE_SET(BgL_zc3anonymousza33134ze3z83_2328,
											(int) (((long) 1)), (obj_t) (BgL_jclassz00_1160));
										BgL_arg3132z00_1162 =
											BGl_makezd2promisezd2zz__r4_control_features_6_9z00
											(BgL_zc3anonymousza33134ze3z83_2328);
									}
									BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00
										(BgL_jclassz00_1160, BgL_arg3132z00_1162);
								}
								return (BgL_jclassz00_bglt) (BgL_jclassz00_1160);
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:3134> */
	obj_t BGl_zc3anonymousza33134ze3z83zzmodule_javaz00(obj_t BgL_envz00_2329)
	{
		AN_OBJECT;
		{	/* Module/java.scm 448 */
			{	/* Module/java.scm 448 */
				obj_t BgL_instance2784z00_2330;

				obj_t BgL_jclassz00_2331;

				BgL_instance2784z00_2330 =
					PROCEDURE_REF(BgL_envz00_2329, (int) (((long) 0)));
				BgL_jclassz00_2331 = PROCEDURE_REF(BgL_envz00_2329, (int) (((long) 1)));
				{

					{	/* Module/java.scm 448 */
						obj_t BgL_arg3135z00_1165;

						obj_t BgL_arg3136z00_1166;

						bool_t BgL_arg3137z00_1167;

						obj_t BgL_arg3138z00_1168;

						obj_t BgL_arg3139z00_1169;

						{
							BgL_jklassz00_bglt BgL_auxz00_3170;

							BgL_auxz00_3170 = (BgL_jklassz00_bglt) (BgL_instance2784z00_2330);
							BgL_arg3135z00_1165 =
								(((BgL_jklassz00_bglt) CREF(BgL_auxz00_3170))->BgL_fieldsz00);
						}
						{
							BgL_jklassz00_bglt BgL_auxz00_3173;

							BgL_auxz00_3173 = (BgL_jklassz00_bglt) (BgL_instance2784z00_2330);
							BgL_arg3136z00_1166 =
								(((BgL_jklassz00_bglt) CREF(BgL_auxz00_3173))->
								BgL_constructorsz00);
						}
						{
							BgL_jklassz00_bglt BgL_auxz00_3176;

							BgL_auxz00_3176 = (BgL_jklassz00_bglt) (BgL_instance2784z00_2330);
							BgL_arg3137z00_1167 =
								(((BgL_jklassz00_bglt) CREF(BgL_auxz00_3176))->
								BgL_abstractzf3zf3);
						}
						{
							BgL_jklassz00_bglt BgL_auxz00_3179;

							BgL_auxz00_3179 = (BgL_jklassz00_bglt) (BgL_instance2784z00_2330);
							BgL_arg3138z00_1168 =
								(((BgL_jklassz00_bglt) CREF(BgL_auxz00_3179))->BgL_modulez00);
						}
						{
							BgL_jklassz00_bglt BgL_auxz00_3182;

							BgL_auxz00_3182 = (BgL_jklassz00_bglt) (BgL_instance2784z00_2330);
							BgL_arg3139z00_1169 =
								(((BgL_jklassz00_bglt) CREF(BgL_auxz00_3182))->BgL_srcz00);
						}
						return
							BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2
							(BgL_arg3135z00_1165, BgL_arg3136z00_1166,
							(BgL_jclassz00_bglt) (BgL_jclassz00_2331), BgL_arg3137z00_1167,
							BgL_arg3138z00_1168, BgL_arg3139z00_1169);
					}
				}
			}
		}
	}



/* heap-add-jclass! */
	BGL_EXPORTED_DEF obj_t BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t
		BgL_newz00_60)
	{
		AN_OBJECT;
		{	/* Module/java.scm 472 */
			{	/* Module/java.scm 474 */
				obj_t BgL_arg3146z00_1979;

				obj_t BgL_arg3147z00_1980;

				{
					BgL_typez00_bglt BgL_auxz00_3187;

					BgL_auxz00_3187 = (BgL_typez00_bglt) (BgL_newz00_60);
					BgL_arg3146z00_1979 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_3187))->BgL_idz00);
				}
				{
					BgL_typez00_bglt BgL_auxz00_3190;

					BgL_auxz00_3190 = (BgL_typez00_bglt) (BgL_newz00_60);
					BgL_arg3147z00_1980 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_3190))->BgL_namez00);
				}
				{	/* Module/java.scm 474 */
					obj_t BgL_qualifiedzd2namezd2_1984;

					BgL_qualifiedzd2namezd2_1984 = BgL_arg3147z00_1980;
					{	/* Module/java.scm 474 */
						obj_t BgL_arg3145z00_1985;

						BgL_arg3145z00_1985 =
							MAKE_PAIR(BgL_arg3146z00_1979, BgL_qualifiedzd2namezd2_1984);
						return (BGl_za2javazd2classesza2zd2zzmodule_javaz00 =
							MAKE_PAIR(BgL_arg3145z00_1985,
								BGl_za2javazd2classesza2zd2zzmodule_javaz00), BUNSPEC);
					}
				}
			}
		}
	}



/* _heap-add-jclass! */
	obj_t BGl__heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t BgL_envz00_2332,
		obj_t BgL_newz00_2333)
	{
		AN_OBJECT;
		{	/* Module/java.scm 472 */
			return BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(BgL_newz00_2333);
		}
	}



/* find-java-class */
	BGL_EXPORTED_DEF obj_t BGl_findzd2javazd2classz00zzmodule_javaz00(obj_t
		BgL_classz00_61)
	{
		AN_OBJECT;
		{	/* Module/java.scm 479 */
			{	/* Module/java.scm 480 */
				obj_t BgL_cellz00_1179;

				BgL_cellz00_1179 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_classz00_61,
					BGl_za2javazd2classesza2zd2zzmodule_javaz00);
				if (PAIRP(BgL_cellz00_1179))
					{	/* Module/java.scm 481 */
						return CDR(BgL_cellz00_1179);
					}
				else
					{	/* Module/java.scm 481 */
						return BFALSE;
					}
			}
		}
	}



/* _find-java-class */
	obj_t BGl__findzd2javazd2classz00zzmodule_javaz00(obj_t BgL_envz00_2334,
		obj_t BgL_classz00_2335)
	{
		AN_OBJECT;
		{	/* Module/java.scm 479 */
			return BGl_findzd2javazd2classz00zzmodule_javaz00(BgL_classz00_2335);
		}
	}



/* java-declare-array */
	obj_t BGl_javazd2declarezd2arrayz00zzmodule_javaz00(obj_t BgL_jz00_62,
		obj_t BgL_idz00_63, obj_t BgL_ofz00_64)
	{
		AN_OBJECT;
		{	/* Module/java.scm 488 */
			if (BGl_typezd2identzf3z21zzast_identz00(BgL_ofz00_64))
				{	/* Module/java.scm 493 */
					obj_t BgL_sofz00_1182;

					{	/* Module/java.scm 493 */
						obj_t BgL_res3281z00_1990;

						{	/* Module/java.scm 493 */
							obj_t BgL_arg2063z00_1989;

							BgL_arg2063z00_1989 = SYMBOL_TO_STRING(BgL_ofz00_64);
							BgL_res3281z00_1990 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_1989);
						}
						BgL_sofz00_1182 = BgL_res3281z00_1990;
					}
					{	/* Module/java.scm 493 */
						obj_t BgL_tofz00_1183;

						{	/* Module/java.scm 494 */
							obj_t BgL_arg3152z00_1187;

							BgL_arg3152z00_1187 =
								c_substring(BgL_sofz00_1182, ((long) 2),
								STRING_LENGTH(BgL_sofz00_1182));
							BgL_tofz00_1183 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg3152z00_1187));
						}
						{	/* Module/java.scm 494 */
							BgL_typez00_bglt BgL_jtypez00_1184;

							BgL_jtypez00_1184 =
								BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(BgL_idz00_63,
								BgL_tofz00_1183, BgL_jz00_62);
							{	/* Module/java.scm 495 */

								return
									BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00
									(BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00
									(BgL_jtypez00_1184, BgL_jtypez00_1184,
										BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_62)));
							}
						}
					}
				}
			else
				{	/* Module/java.scm 492 */
					obj_t BgL_list3155z00_1190;

					BgL_list3155z00_1190 =
						MAKE_PAIR(BGl_string3323z00zzmodule_javaz00, BNIL);
					return
						BGl_javazd2errorzd2zzmodule_javaz00(BgL_jz00_62,
						BgL_list3155z00_1190);
				}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			{	/* Module/java.scm 47 */
				obj_t BgL_arg3157z00_1191;

				obj_t BgL_arg3158z00_1192;

				obj_t BgL_arg3161z00_1195;

				BgL_arg3157z00_1191 = CNST_TABLE_REF(((long) 5));
				BgL_arg3158z00_1192 = BGl_objectz00zz__objectz00;
				{	/* Module/java.scm 47 */
					obj_t BgL_v2803z00_1196;

					BgL_v2803z00_1196 = create_vector((int) (((long) 0)));
					BgL_arg3161z00_1195 = BgL_v2803z00_1196;
				}
				BGl_jklassz00zzmodule_javaz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3157z00_1191,
					BgL_arg3158z00_1192, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jklasszd2envz52zzmodule_javaz00,
					BGl_jklasszd2nilzd2envz00zzmodule_javaz00,
					BGl_jklasszf3zd2envz21zzmodule_javaz00, ((long) 525425062), BFALSE,
					BGl_bindzd2jklassz12zd2envz12zzmodule_javaz00, BgL_arg3161z00_1195);
			}
			{	/* Module/java.scm 60 */
				obj_t BgL_arg3162z00_1197;

				obj_t BgL_arg3163z00_1198;

				obj_t BgL_arg3168z00_1201;

				BgL_arg3162z00_1197 = CNST_TABLE_REF(((long) 18));
				BgL_arg3163z00_1198 = BGl_objectz00zz__objectz00;
				{	/* Module/java.scm 60 */
					obj_t BgL_v2804z00_1202;

					BgL_v2804z00_1202 = create_vector((int) (((long) 0)));
					BgL_arg3168z00_1201 = BgL_v2804z00_1202;
				}
				BGl_jmethodz00zzmodule_javaz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3162z00_1197,
					BgL_arg3163z00_1198, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jmethodzd2envz52zzmodule_javaz00,
					BGl_jmethodzd2nilzd2envz00zzmodule_javaz00,
					BGl_jmethodzf3zd2envz21zzmodule_javaz00, ((long) 462663601), BFALSE,
					BFALSE, BgL_arg3168z00_1201);
			}
			{	/* Module/java.scm 66 */
				obj_t BgL_arg3169z00_1203;

				obj_t BgL_arg3170z00_1204;

				obj_t BgL_arg3173z00_1207;

				BgL_arg3169z00_1203 = CNST_TABLE_REF(((long) 19));
				BgL_arg3170z00_1204 = BGl_jmethodz00zzmodule_javaz00;
				{	/* Module/java.scm 66 */
					obj_t BgL_v2805z00_1208;

					BgL_v2805z00_1208 = create_vector((int) (((long) 0)));
					BgL_arg3173z00_1207 = BgL_v2805z00_1208;
				}
				BGl_jconstructorz00zzmodule_javaz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3169z00_1203,
					BgL_arg3170z00_1204, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jconstructorzd2envz52zzmodule_javaz00,
					BGl_jconstructorzd2nilzd2envz00zzmodule_javaz00,
					BGl_jconstructorzf3zd2envz21zzmodule_javaz00, ((long) 500380001),
					BFALSE, BFALSE, BgL_arg3173z00_1207);
			}
			BGl_z52thezd2jconstructorzd2nilz52zzmodule_javaz00 = BUNSPEC;
			BGl_z52thezd2jmethodzd2nilz52zzmodule_javaz00 = BUNSPEC;
			return (BGl_z52thezd2jklasszd2nilz52zzmodule_javaz00 = BUNSPEC, BUNSPEC);
		}
	}



/* _jconstructor? */
	obj_t BGl__jconstructorzf3zf3zzmodule_javaz00(obj_t BgL_envz00_2346,
		obj_t BgL_obj2729z00_2347)
	{
		AN_OBJECT;
		{	/* Module/java.scm 66 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2729z00_2347,
					BGl_jconstructorz00zzmodule_javaz00));
		}
	}



/* _%allocate-jconstructor */
	obj_t BGl__z52allocatezd2jconstructorz80zzmodule_javaz00(obj_t
		BgL_envz00_2344)
	{
		AN_OBJECT;
		{	/* Module/java.scm 66 */
			{	/* Module/java.scm 66 */
				BgL_jconstructorz00_bglt BgL_auxz00_3229;

				{	/* Module/java.scm 66 */
					BgL_jconstructorz00_bglt BgL_res3336z00_2390;

					{	/* Module/java.scm 66 */
						BgL_jconstructorz00_bglt BgL_new2706z00_2388;

						BgL_new2706z00_2388 =
							((BgL_jconstructorz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jconstructorz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2706z00_2388),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jconstructorz00zzmodule_javaz00));
						{	/* Module/java.scm 66 */
							BgL_objectz00_bglt BgL_auxz00_3234;

							BgL_auxz00_3234 = (BgL_objectz00_bglt) (BgL_new2706z00_2388);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3234, BFALSE);
						}
						BgL_res3336z00_2390 = BgL_new2706z00_2388;
					}
					BgL_auxz00_3229 = BgL_res3336z00_2390;
				}
				return (obj_t) (BgL_auxz00_3229);
			}
		}
	}



/* jconstructor-nil */
	BgL_jconstructorz00_bglt BGl_jconstructorzd2nilzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 66 */
			if ((BGl_z52thezd2jconstructorzd2nilz52zzmodule_javaz00 == BUNSPEC))
				{	/* Module/java.scm 66 */
					{	/* Module/java.scm 66 */
						BgL_jconstructorz00_bglt BgL_res3284z00_2027;

						{	/* Module/java.scm 66 */
							BgL_jconstructorz00_bglt BgL_new2706z00_2023;

							BgL_new2706z00_2023 =
								((BgL_jconstructorz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jconstructorz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2706z00_2023),
								BGl_classzd2numzd2zz__objectz00
								(BGl_jconstructorz00zzmodule_javaz00));
							{	/* Module/java.scm 66 */
								BgL_objectz00_bglt BgL_auxz00_3244;

								BgL_auxz00_3244 = (BgL_objectz00_bglt) (BgL_new2706z00_2023);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3244, BFALSE);
							}
							BgL_res3284z00_2027 = BgL_new2706z00_2023;
						}
						BGl_z52thezd2jconstructorzd2nilz52zzmodule_javaz00 =
							(obj_t) (BgL_res3284z00_2027);
					}
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3176z00_1218;

						obj_t BgL_arg3177z00_1219;

						BgL_arg3176z00_1218 = MAKE_PAIR(BFALSE, BFALSE);
						BgL_arg3177z00_1219 = CNST_TABLE_REF(((long) 20));
						{	/* Module/java.scm 66 */
							BgL_jconstructorz00_bglt BgL_res3285z00_2039;

							{	/* Module/java.scm 66 */
								BgL_jconstructorz00_bglt BgL_new2699z00_2028;

								BgL_new2699z00_2028 =
									(BgL_jconstructorz00_bglt)
									(BGl_z52thezd2jconstructorzd2nilz52zzmodule_javaz00);
								{	/* Module/java.scm 66 */
									obj_t BgL_src2694z00_2034;

									obj_t BgL_id2695z00_2035;

									obj_t BgL_args2696z00_2036;

									obj_t BgL_jname2697z00_2037;

									obj_t BgL_modifiers2698z00_2038;

									BgL_src2694z00_2034 = BgL_arg3176z00_1218;
									BgL_id2695z00_2035 = BgL_arg3177z00_1219;
									BgL_args2696z00_2036 = BNIL;
									BgL_jname2697z00_2037 = BGl_string3304z00zzmodule_javaz00;
									BgL_modifiers2698z00_2038 = BNIL;
									((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_2028))->
											BgL_srcz00) = ((obj_t) BgL_src2694z00_2034), BUNSPEC);
									((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_2028))->
											BgL_idz00) = ((obj_t) BgL_id2695z00_2035), BUNSPEC);
									((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_2028))->
											BgL_argsz00) = ((obj_t) BgL_args2696z00_2036), BUNSPEC);
									((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_2028))->
											BgL_jnamez00) = ((obj_t) BgL_jname2697z00_2037), BUNSPEC);
									((((BgL_jconstructorz00_bglt) CREF(BgL_new2699z00_2028))->
											BgL_modifiersz00) =
										((obj_t) BgL_modifiers2698z00_2038), BUNSPEC);
									BgL_res3285z00_2039 = BgL_new2699z00_2028;
							}}
							(obj_t) (BgL_res3285z00_2039);
				}}}
			else
				{	/* Module/java.scm 66 */
					BFALSE;
				}
			return
				(BgL_jconstructorz00_bglt)
				(BGl_z52thezd2jconstructorzd2nilz52zzmodule_javaz00);
		}
	}



/* _jconstructor-nil */
	obj_t BGl__jconstructorzd2nilzd2zzmodule_javaz00(obj_t BgL_envz00_2345)
	{
		AN_OBJECT;
		{	/* Module/java.scm 66 */
			return (obj_t) (BGl_jconstructorzd2nilzd2zzmodule_javaz00());
		}
	}



/* _jmethod? */
	obj_t BGl__jmethodzf3zf3zzmodule_javaz00(obj_t BgL_envz00_2342,
		obj_t BgL_obj2681z00_2343)
	{
		AN_OBJECT;
		{	/* Module/java.scm 60 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2681z00_2343,
					BGl_jmethodz00zzmodule_javaz00));
		}
	}



/* _%allocate-jmethod */
	obj_t BGl__z52allocatezd2jmethodz80zzmodule_javaz00(obj_t BgL_envz00_2340)
	{
		AN_OBJECT;
		{	/* Module/java.scm 60 */
			{	/* Module/java.scm 60 */
				BgL_jmethodz00_bglt BgL_auxz00_3262;

				{	/* Module/java.scm 60 */
					BgL_jmethodz00_bglt BgL_res3337z00_2396;

					{	/* Module/java.scm 60 */
						BgL_jmethodz00_bglt BgL_new2658z00_2394;

						BgL_new2658z00_2394 =
							((BgL_jmethodz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jmethodz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2658z00_2394),
							BGl_classzd2numzd2zz__objectz00(BGl_jmethodz00zzmodule_javaz00));
						{	/* Module/java.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_3267;

							BgL_auxz00_3267 = (BgL_objectz00_bglt) (BgL_new2658z00_2394);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3267, BFALSE);
						}
						BgL_res3337z00_2396 = BgL_new2658z00_2394;
					}
					BgL_auxz00_3262 = BgL_res3337z00_2396;
				}
				return (obj_t) (BgL_auxz00_3262);
			}
		}
	}



/* jmethod-nil */
	BgL_jmethodz00_bglt BGl_jmethodzd2nilzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 60 */
			if ((BGl_z52thezd2jmethodzd2nilz52zzmodule_javaz00 == BUNSPEC))
				{	/* Module/java.scm 60 */
					{	/* Module/java.scm 60 */
						BgL_jmethodz00_bglt BgL_res3288z00_2071;

						{	/* Module/java.scm 60 */
							BgL_jmethodz00_bglt BgL_new2658z00_2067;

							BgL_new2658z00_2067 =
								((BgL_jmethodz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jmethodz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2658z00_2067),
								BGl_classzd2numzd2zz__objectz00
								(BGl_jmethodz00zzmodule_javaz00));
							{	/* Module/java.scm 60 */
								BgL_objectz00_bglt BgL_auxz00_3277;

								BgL_auxz00_3277 = (BgL_objectz00_bglt) (BgL_new2658z00_2067);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3277, BFALSE);
							}
							BgL_res3288z00_2071 = BgL_new2658z00_2067;
						}
						BGl_z52thezd2jmethodzd2nilz52zzmodule_javaz00 =
							(obj_t) (BgL_res3288z00_2071);
					}
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3183z00_1232;

						obj_t BgL_arg3184z00_1233;

						BgL_arg3183z00_1232 = MAKE_PAIR(BFALSE, BFALSE);
						BgL_arg3184z00_1233 = CNST_TABLE_REF(((long) 20));
						{	/* Module/java.scm 60 */
							BgL_jmethodz00_bglt BgL_res3289z00_2083;

							{	/* Module/java.scm 60 */
								BgL_jmethodz00_bglt BgL_new2651z00_2072;

								BgL_new2651z00_2072 =
									(BgL_jmethodz00_bglt)
									(BGl_z52thezd2jmethodzd2nilz52zzmodule_javaz00);
								{	/* Module/java.scm 60 */
									obj_t BgL_src2646z00_2078;

									obj_t BgL_id2647z00_2079;

									obj_t BgL_args2648z00_2080;

									obj_t BgL_jname2649z00_2081;

									obj_t BgL_modifiers2650z00_2082;

									BgL_src2646z00_2078 = BgL_arg3183z00_1232;
									BgL_id2647z00_2079 = BgL_arg3184z00_1233;
									BgL_args2648z00_2080 = BNIL;
									BgL_jname2649z00_2081 = BGl_string3304z00zzmodule_javaz00;
									BgL_modifiers2650z00_2082 = BNIL;
									((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_2072))->
											BgL_srcz00) = ((obj_t) BgL_src2646z00_2078), BUNSPEC);
									((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_2072))->
											BgL_idz00) = ((obj_t) BgL_id2647z00_2079), BUNSPEC);
									((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_2072))->
											BgL_argsz00) = ((obj_t) BgL_args2648z00_2080), BUNSPEC);
									((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_2072))->
											BgL_jnamez00) = ((obj_t) BgL_jname2649z00_2081), BUNSPEC);
									((((BgL_jmethodz00_bglt) CREF(BgL_new2651z00_2072))->
											BgL_modifiersz00) =
										((obj_t) BgL_modifiers2650z00_2082), BUNSPEC);
									BgL_res3289z00_2083 = BgL_new2651z00_2072;
							}}
							(obj_t) (BgL_res3289z00_2083);
				}}}
			else
				{	/* Module/java.scm 60 */
					BFALSE;
				}
			return
				(BgL_jmethodz00_bglt) (BGl_z52thezd2jmethodzd2nilz52zzmodule_javaz00);
		}
	}



/* _jmethod-nil */
	obj_t BGl__jmethodzd2nilzd2zzmodule_javaz00(obj_t BgL_envz00_2341)
	{
		AN_OBJECT;
		{	/* Module/java.scm 60 */
			return (obj_t) (BGl_jmethodzd2nilzd2zzmodule_javaz00());
		}
	}



/* _jklass? */
	obj_t BGl__jklasszf3zf3zzmodule_javaz00(obj_t BgL_envz00_2338,
		obj_t BgL_obj2633z00_2339)
	{
		AN_OBJECT;
		{	/* Module/java.scm 47 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2633z00_2339,
					BGl_jklassz00zzmodule_javaz00));
		}
	}



/* _%allocate-jklass */
	obj_t BGl__z52allocatezd2jklassz80zzmodule_javaz00(obj_t BgL_envz00_2336)
	{
		AN_OBJECT;
		{	/* Module/java.scm 47 */
			{	/* Module/java.scm 47 */
				BgL_jklassz00_bglt BgL_auxz00_3295;

				{	/* Module/java.scm 47 */
					BgL_jklassz00_bglt BgL_res3338z00_2402;

					{	/* Module/java.scm 47 */
						BgL_jklassz00_bglt BgL_new2586z00_2400;

						BgL_new2586z00_2400 =
							((BgL_jklassz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jklassz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2586z00_2400),
							BGl_classzd2numzd2zz__objectz00(BGl_jklassz00zzmodule_javaz00));
						{	/* Module/java.scm 47 */
							BgL_objectz00_bglt BgL_auxz00_3300;

							BgL_auxz00_3300 = (BgL_objectz00_bglt) (BgL_new2586z00_2400);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3300, BFALSE);
						}
						BgL_res3338z00_2402 = BgL_new2586z00_2400;
					}
					BgL_auxz00_3295 = BgL_res3338z00_2402;
				}
				return (obj_t) (BgL_auxz00_3295);
			}
		}
	}



/* jklass-nil */
	BgL_jklassz00_bglt BGl_jklasszd2nilzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 47 */
			if ((BGl_z52thezd2jklasszd2nilz52zzmodule_javaz00 == BUNSPEC))
				{	/* Module/java.scm 47 */
					{	/* Module/java.scm 47 */
						BgL_jklassz00_bglt BgL_res3292z00_2133;

						{	/* Module/java.scm 47 */
							BgL_jklassz00_bglt BgL_new2586z00_2129;

							BgL_new2586z00_2129 =
								((BgL_jklassz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jklassz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2586z00_2129),
								BGl_classzd2numzd2zz__objectz00(BGl_jklassz00zzmodule_javaz00));
							{	/* Module/java.scm 47 */
								BgL_objectz00_bglt BgL_auxz00_3310;

								BgL_auxz00_3310 = (BgL_objectz00_bglt) (BgL_new2586z00_2129);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3310, BFALSE);
							}
							BgL_res3292z00_2133 = BgL_new2586z00_2129;
						}
						BGl_z52thezd2jklasszd2nilz52zzmodule_javaz00 =
							(obj_t) (BgL_res3292z00_2133);
					}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3191z00_1252;

						obj_t BgL_arg3192z00_1253;

						obj_t BgL_arg3193z00_1254;

						BgL_arg3191z00_1252 = MAKE_PAIR(BFALSE, BFALSE);
						BgL_arg3192z00_1253 = CNST_TABLE_REF(((long) 20));
						BgL_arg3193z00_1254 = CNST_TABLE_REF(((long) 20));
						{	/* Module/java.scm 47 */
							BgL_jklassz00_bglt BgL_res3293z00_2157;

							{	/* Module/java.scm 47 */
								BgL_jklassz00_bglt BgL_new2573z00_2134;

								BgL_new2573z00_2134 =
									(BgL_jklassz00_bglt)
									(BGl_z52thezd2jklasszd2nilz52zzmodule_javaz00);
								{	/* Module/java.scm 47 */
									obj_t BgL_src2562z00_2146;

									obj_t BgL_loc2563z00_2147;

									obj_t BgL_id2564z00_2148;

									obj_t BgL_idd2565z00_2149;

									obj_t BgL_jname2566z00_2150;

									obj_t BgL_package2567z00_2151;

									obj_t BgL_fields2568z00_2152;

									obj_t BgL_methods2569z00_2153;

									obj_t BgL_constructors2570z00_2154;

									bool_t BgL_abstractzf32571zf3_2155;

									obj_t BgL_module2572z00_2156;

									BgL_src2562z00_2146 = BgL_arg3191z00_1252;
									BgL_loc2563z00_2147 = BUNSPEC;
									BgL_id2564z00_2148 = BgL_arg3192z00_1253;
									BgL_idd2565z00_2149 = BgL_arg3193z00_1254;
									BgL_jname2566z00_2150 = BUNSPEC;
									BgL_package2567z00_2151 = BUNSPEC;
									BgL_fields2568z00_2152 = BNIL;
									BgL_methods2569z00_2153 = BNIL;
									BgL_constructors2570z00_2154 = BNIL;
									BgL_abstractzf32571zf3_2155 = ((bool_t) 0);
									BgL_module2572z00_2156 = BUNSPEC;
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_srcz00) = ((obj_t) BgL_src2562z00_2146), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_locz00) = ((obj_t) BgL_loc2563z00_2147), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_idz00) = ((obj_t) BgL_id2564z00_2148), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_iddz00) = ((obj_t) BgL_idd2565z00_2149), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_jnamez00) = ((obj_t) BgL_jname2566z00_2150), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_packagez00) =
										((obj_t) BgL_package2567z00_2151), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_fieldsz00) =
										((obj_t) BgL_fields2568z00_2152), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_methodsz00) =
										((obj_t) BgL_methods2569z00_2153), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_constructorsz00) =
										((obj_t) BgL_constructors2570z00_2154), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_abstractzf3zf3) =
										((bool_t) BgL_abstractzf32571zf3_2155), BUNSPEC);
									((((BgL_jklassz00_bglt) CREF(BgL_new2573z00_2134))->
											BgL_modulez00) =
										((obj_t) BgL_module2572z00_2156), BUNSPEC);
									BgL_res3293z00_2157 = BgL_new2573z00_2134;
							}}
							(obj_t) (BgL_res3293z00_2157);
				}}}
			else
				{	/* Module/java.scm 47 */
					BFALSE;
				}
			return
				(BgL_jklassz00_bglt) (BGl_z52thezd2jklasszd2nilz52zzmodule_javaz00);
		}
	}



/* _jklass-nil */
	obj_t BGl__jklasszd2nilzd2zzmodule_javaz00(obj_t BgL_envz00_2337)
	{
		AN_OBJECT;
		{	/* Module/java.scm 47 */
			return (obj_t) (BGl_jklasszd2nilzd2zzmodule_javaz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jconstructorz00zzmodule_javaz00, BGl_proc3324z00zzmodule_javaz00,
				BGl_string3325z00zzmodule_javaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jconstructorz00zzmodule_javaz00, BGl_proc3326z00zzmodule_javaz00,
				BGl_string3327z00zzmodule_javaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jmethodz00zzmodule_javaz00, BGl_proc3328z00zzmodule_javaz00,
				BGl_string3325z00zzmodule_javaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jmethodz00zzmodule_javaz00, BGl_proc3329z00zzmodule_javaz00,
				BGl_string3327z00zzmodule_javaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jklassz00zzmodule_javaz00, BGl_proc3330z00zzmodule_javaz00,
				BGl_string3325z00zzmodule_javaz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jklassz00zzmodule_javaz00, BGl_proc3331z00zzmodule_javaz00,
				BGl_string3327z00zzmodule_javaz00);
		}
	}



/* struct+object->objec2817 */
	obj_t BGl_structzb2objectzd2ze3objec2817z83zzmodule_javaz00(obj_t
		BgL_envz00_2354, obj_t BgL_oz00_2355, obj_t BgL_sz00_2356)
	{
		AN_OBJECT;
		{	/* Module/java.scm 47 */
			{
				BgL_jklassz00_bglt BgL_oz00_1490;

				obj_t BgL_sz00_1491;

				{	/* Module/java.scm 47 */
					BgL_jklassz00_bglt BgL_auxz00_3339;

					BgL_oz00_1490 = (BgL_jklassz00_bglt) (BgL_oz00_2355);
					BgL_sz00_1491 = BgL_sz00_2356;
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3265z00_1494;

						BgL_arg3265z00_1494 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 0)));
						{	/* Module/java.scm 47 */
							BgL_objectz00_bglt BgL_auxz00_3342;

							BgL_auxz00_3342 = (BgL_objectz00_bglt) (BgL_oz00_1490);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3342, BgL_arg3265z00_1494);
					}}
					{
						obj_t BgL_auxz00_3345;

						BgL_auxz00_3345 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 1)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_srcz00) =
							((obj_t) BgL_auxz00_3345), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3349;

						BgL_auxz00_3349 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 2)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_locz00) =
							((obj_t) BgL_auxz00_3349), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3353;

						BgL_auxz00_3353 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 3)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_idz00) =
							((obj_t) BgL_auxz00_3353), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3357;

						BgL_auxz00_3357 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 4)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_iddz00) =
							((obj_t) BgL_auxz00_3357), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3361;

						BgL_auxz00_3361 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 5)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_jnamez00) =
							((obj_t) BgL_auxz00_3361), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3365;

						BgL_auxz00_3365 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 6)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_packagez00) =
							((obj_t) BgL_auxz00_3365), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3369;

						BgL_auxz00_3369 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 7)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_fieldsz00) =
							((obj_t) BgL_auxz00_3369), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3373;

						BgL_auxz00_3373 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 8)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_methodsz00) =
							((obj_t) BgL_auxz00_3373), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3377;

						BgL_auxz00_3377 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 9)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_constructorsz00) =
							((obj_t) BgL_auxz00_3377), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_3381;

						BgL_auxz00_3381 =
							CBOOL(STRUCT_REF(BgL_sz00_1491, (int) (((long) 10))));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_abstractzf3zf3) =
							((bool_t) BgL_auxz00_3381), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3386;

						BgL_auxz00_3386 = STRUCT_REF(BgL_sz00_1491, (int) (((long) 11)));
						((((BgL_jklassz00_bglt) CREF(BgL_oz00_1490))->BgL_modulez00) =
							((obj_t) BgL_auxz00_3386), BUNSPEC);
					}
					BgL_auxz00_3339 = BgL_oz00_1490;
					return (obj_t) (BgL_auxz00_3339);
				}
			}
		}
	}



/* object->struct-jklas2815 */
	obj_t BGl_objectzd2ze3structzd2jklas2815ze3zzmodule_javaz00(obj_t
		BgL_envz00_2357, obj_t BgL_obj2587z00_2358)
	{
		AN_OBJECT;
		{	/* Module/java.scm 47 */
			{
				BgL_jklassz00_bglt BgL_obj2587z00_1462;

				BgL_obj2587z00_1462 = (BgL_jklassz00_bglt) (BgL_obj2587z00_2358);
				{	/* Module/java.scm 47 */
					obj_t BgL_res2588z00_1465;

					{	/* Module/java.scm 47 */
						obj_t BgL_keyz00_2234;

						BgL_keyz00_2234 = CNST_TABLE_REF(((long) 5));
						BgL_res2588z00_1465 =
							make_struct(BgL_keyz00_2234, (int) (((long) 12)), BUNSPEC);
					}
					{	/* Module/java.scm 47 */
						int BgL_auxz00_3395;

						BgL_auxz00_3395 = (int) (((long) 0));
						STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3395, BFALSE);
					}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3243z00_1467;

						BgL_arg3243z00_1467 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_srcz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3399;

							BgL_auxz00_3399 = (int) (((long) 1));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3399,
								BgL_arg3243z00_1467);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3245z00_1469;

						BgL_arg3245z00_1469 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_locz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3403;

							BgL_auxz00_3403 = (int) (((long) 2));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3403,
								BgL_arg3245z00_1469);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3247z00_1471;

						BgL_arg3247z00_1471 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_idz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3407;

							BgL_auxz00_3407 = (int) (((long) 3));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3407,
								BgL_arg3247z00_1471);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3249z00_1473;

						BgL_arg3249z00_1473 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_iddz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3411;

							BgL_auxz00_3411 = (int) (((long) 4));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3411,
								BgL_arg3249z00_1473);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3251z00_1475;

						BgL_arg3251z00_1475 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_jnamez00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3415;

							BgL_auxz00_3415 = (int) (((long) 5));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3415,
								BgL_arg3251z00_1475);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3253z00_1477;

						BgL_arg3253z00_1477 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->
							BgL_packagez00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3419;

							BgL_auxz00_3419 = (int) (((long) 6));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3419,
								BgL_arg3253z00_1477);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3255z00_1479;

						BgL_arg3255z00_1479 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_fieldsz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3423;

							BgL_auxz00_3423 = (int) (((long) 7));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3423,
								BgL_arg3255z00_1479);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3257z00_1481;

						BgL_arg3257z00_1481 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->
							BgL_methodsz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3427;

							BgL_auxz00_3427 = (int) (((long) 8));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3427,
								BgL_arg3257z00_1481);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3259z00_1483;

						BgL_arg3259z00_1483 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->
							BgL_constructorsz00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3431;

							BgL_auxz00_3431 = (int) (((long) 9));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3431,
								BgL_arg3259z00_1483);
					}}
					{	/* Module/java.scm 47 */
						bool_t BgL_arg3261z00_1485;

						BgL_arg3261z00_1485 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->
							BgL_abstractzf3zf3);
						{	/* Module/java.scm 47 */
							obj_t BgL_auxz00_3437;

							int BgL_auxz00_3435;

							BgL_auxz00_3437 = BBOOL(BgL_arg3261z00_1485);
							BgL_auxz00_3435 = (int) (((long) 10));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3435, BgL_auxz00_3437);
					}}
					{	/* Module/java.scm 47 */
						obj_t BgL_arg3263z00_1487;

						BgL_arg3263z00_1487 =
							(((BgL_jklassz00_bglt) CREF(BgL_obj2587z00_1462))->BgL_modulez00);
						{	/* Module/java.scm 47 */
							int BgL_auxz00_3441;

							BgL_auxz00_3441 = (int) (((long) 11));
							STRUCT_SET(BgL_res2588z00_1465, BgL_auxz00_3441,
								BgL_arg3263z00_1487);
					}}
					return BgL_res2588z00_1465;
				}
			}
		}
	}



/* struct+object->objec2813 */
	obj_t BGl_structzb2objectzd2ze3objec2813z83zzmodule_javaz00(obj_t
		BgL_envz00_2359, obj_t BgL_oz00_2360, obj_t BgL_sz00_2361)
	{
		AN_OBJECT;
		{	/* Module/java.scm 60 */
			{
				BgL_jmethodz00_bglt BgL_oz00_1450;

				obj_t BgL_sz00_1451;

				{	/* Module/java.scm 60 */
					BgL_jmethodz00_bglt BgL_auxz00_3445;

					BgL_oz00_1450 = (BgL_jmethodz00_bglt) (BgL_oz00_2360);
					BgL_sz00_1451 = BgL_sz00_2361;
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3240z00_1454;

						BgL_arg3240z00_1454 = STRUCT_REF(BgL_sz00_1451, (int) (((long) 0)));
						{	/* Module/java.scm 60 */
							BgL_objectz00_bglt BgL_auxz00_3448;

							BgL_auxz00_3448 = (BgL_objectz00_bglt) (BgL_oz00_1450);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3448, BgL_arg3240z00_1454);
					}}
					{
						obj_t BgL_auxz00_3451;

						BgL_auxz00_3451 = STRUCT_REF(BgL_sz00_1451, (int) (((long) 1)));
						((((BgL_jmethodz00_bglt) CREF(BgL_oz00_1450))->BgL_srcz00) =
							((obj_t) BgL_auxz00_3451), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3455;

						BgL_auxz00_3455 = STRUCT_REF(BgL_sz00_1451, (int) (((long) 2)));
						((((BgL_jmethodz00_bglt) CREF(BgL_oz00_1450))->BgL_idz00) =
							((obj_t) BgL_auxz00_3455), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3459;

						BgL_auxz00_3459 = STRUCT_REF(BgL_sz00_1451, (int) (((long) 3)));
						((((BgL_jmethodz00_bglt) CREF(BgL_oz00_1450))->BgL_argsz00) =
							((obj_t) BgL_auxz00_3459), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3463;

						BgL_auxz00_3463 = STRUCT_REF(BgL_sz00_1451, (int) (((long) 4)));
						((((BgL_jmethodz00_bglt) CREF(BgL_oz00_1450))->BgL_jnamez00) =
							((obj_t) BgL_auxz00_3463), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3467;

						BgL_auxz00_3467 = STRUCT_REF(BgL_sz00_1451, (int) (((long) 5)));
						((((BgL_jmethodz00_bglt) CREF(BgL_oz00_1450))->BgL_modifiersz00) =
							((obj_t) BgL_auxz00_3467), BUNSPEC);
					}
					BgL_auxz00_3445 = BgL_oz00_1450;
					return (obj_t) (BgL_auxz00_3445);
				}
			}
		}
	}



/* object->struct-jmeth2811 */
	obj_t BGl_objectzd2ze3structzd2jmeth2811ze3zzmodule_javaz00(obj_t
		BgL_envz00_2362, obj_t BgL_obj2659z00_2363)
	{
		AN_OBJECT;
		{	/* Module/java.scm 60 */
			{
				BgL_jmethodz00_bglt BgL_obj2659z00_1434;

				BgL_obj2659z00_1434 = (BgL_jmethodz00_bglt) (BgL_obj2659z00_2363);
				{	/* Module/java.scm 60 */
					obj_t BgL_res2660z00_1437;

					{	/* Module/java.scm 60 */
						obj_t BgL_keyz00_2196;

						BgL_keyz00_2196 = CNST_TABLE_REF(((long) 18));
						BgL_res2660z00_1437 =
							make_struct(BgL_keyz00_2196, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Module/java.scm 60 */
						int BgL_auxz00_3476;

						BgL_auxz00_3476 = (int) (((long) 0));
						STRUCT_SET(BgL_res2660z00_1437, BgL_auxz00_3476, BFALSE);
					}
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3230z00_1439;

						BgL_arg3230z00_1439 =
							(((BgL_jmethodz00_bglt) CREF(BgL_obj2659z00_1434))->BgL_srcz00);
						{	/* Module/java.scm 60 */
							int BgL_auxz00_3480;

							BgL_auxz00_3480 = (int) (((long) 1));
							STRUCT_SET(BgL_res2660z00_1437, BgL_auxz00_3480,
								BgL_arg3230z00_1439);
					}}
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3232z00_1441;

						BgL_arg3232z00_1441 =
							(((BgL_jmethodz00_bglt) CREF(BgL_obj2659z00_1434))->BgL_idz00);
						{	/* Module/java.scm 60 */
							int BgL_auxz00_3484;

							BgL_auxz00_3484 = (int) (((long) 2));
							STRUCT_SET(BgL_res2660z00_1437, BgL_auxz00_3484,
								BgL_arg3232z00_1441);
					}}
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3234z00_1443;

						BgL_arg3234z00_1443 =
							(((BgL_jmethodz00_bglt) CREF(BgL_obj2659z00_1434))->BgL_argsz00);
						{	/* Module/java.scm 60 */
							int BgL_auxz00_3488;

							BgL_auxz00_3488 = (int) (((long) 3));
							STRUCT_SET(BgL_res2660z00_1437, BgL_auxz00_3488,
								BgL_arg3234z00_1443);
					}}
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3236z00_1445;

						BgL_arg3236z00_1445 =
							(((BgL_jmethodz00_bglt) CREF(BgL_obj2659z00_1434))->BgL_jnamez00);
						{	/* Module/java.scm 60 */
							int BgL_auxz00_3492;

							BgL_auxz00_3492 = (int) (((long) 4));
							STRUCT_SET(BgL_res2660z00_1437, BgL_auxz00_3492,
								BgL_arg3236z00_1445);
					}}
					{	/* Module/java.scm 60 */
						obj_t BgL_arg3238z00_1447;

						BgL_arg3238z00_1447 =
							(((BgL_jmethodz00_bglt) CREF(BgL_obj2659z00_1434))->
							BgL_modifiersz00);
						{	/* Module/java.scm 60 */
							int BgL_auxz00_3496;

							BgL_auxz00_3496 = (int) (((long) 5));
							STRUCT_SET(BgL_res2660z00_1437, BgL_auxz00_3496,
								BgL_arg3238z00_1447);
					}}
					return BgL_res2660z00_1437;
				}
			}
		}
	}



/* struct+object->objec2809 */
	obj_t BGl_structzb2objectzd2ze3objec2809z83zzmodule_javaz00(obj_t
		BgL_envz00_2364, obj_t BgL_oz00_2365, obj_t BgL_sz00_2366)
	{
		AN_OBJECT;
		{	/* Module/java.scm 66 */
			{
				BgL_jconstructorz00_bglt BgL_oz00_1422;

				obj_t BgL_sz00_1423;

				{	/* Module/java.scm 66 */
					BgL_jconstructorz00_bglt BgL_auxz00_3500;

					BgL_oz00_1422 = (BgL_jconstructorz00_bglt) (BgL_oz00_2365);
					BgL_sz00_1423 = BgL_sz00_2366;
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3227z00_1426;

						BgL_arg3227z00_1426 = STRUCT_REF(BgL_sz00_1423, (int) (((long) 0)));
						{	/* Module/java.scm 66 */
							BgL_objectz00_bglt BgL_auxz00_3503;

							BgL_auxz00_3503 = (BgL_objectz00_bglt) (BgL_oz00_1422);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3503, BgL_arg3227z00_1426);
					}}
					{
						obj_t BgL_auxz00_3506;

						BgL_auxz00_3506 = STRUCT_REF(BgL_sz00_1423, (int) (((long) 1)));
						((((BgL_jconstructorz00_bglt) CREF(BgL_oz00_1422))->BgL_srcz00) =
							((obj_t) BgL_auxz00_3506), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3510;

						BgL_auxz00_3510 = STRUCT_REF(BgL_sz00_1423, (int) (((long) 2)));
						((((BgL_jconstructorz00_bglt) CREF(BgL_oz00_1422))->BgL_idz00) =
							((obj_t) BgL_auxz00_3510), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3514;

						BgL_auxz00_3514 = STRUCT_REF(BgL_sz00_1423, (int) (((long) 3)));
						((((BgL_jconstructorz00_bglt) CREF(BgL_oz00_1422))->BgL_argsz00) =
							((obj_t) BgL_auxz00_3514), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3518;

						BgL_auxz00_3518 = STRUCT_REF(BgL_sz00_1423, (int) (((long) 4)));
						((((BgL_jconstructorz00_bglt) CREF(BgL_oz00_1422))->BgL_jnamez00) =
							((obj_t) BgL_auxz00_3518), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3522;

						BgL_auxz00_3522 = STRUCT_REF(BgL_sz00_1423, (int) (((long) 5)));
						((((BgL_jconstructorz00_bglt) CREF(BgL_oz00_1422))->
								BgL_modifiersz00) = ((obj_t) BgL_auxz00_3522), BUNSPEC);
					}
					BgL_auxz00_3500 = BgL_oz00_1422;
					return (obj_t) (BgL_auxz00_3500);
				}
			}
		}
	}



/* object->struct-jcons2807 */
	obj_t BGl_objectzd2ze3structzd2jcons2807ze3zzmodule_javaz00(obj_t
		BgL_envz00_2367, obj_t BgL_obj2707z00_2368)
	{
		AN_OBJECT;
		{	/* Module/java.scm 66 */
			{
				BgL_jconstructorz00_bglt BgL_obj2707z00_1406;

				BgL_obj2707z00_1406 = (BgL_jconstructorz00_bglt) (BgL_obj2707z00_2368);
				{	/* Module/java.scm 66 */
					obj_t BgL_res2708z00_1409;

					{	/* Module/java.scm 66 */
						obj_t BgL_keyz00_2158;

						BgL_keyz00_2158 = CNST_TABLE_REF(((long) 19));
						BgL_res2708z00_1409 =
							make_struct(BgL_keyz00_2158, (int) (((long) 6)), BUNSPEC);
					}
					{	/* Module/java.scm 66 */
						int BgL_auxz00_3531;

						BgL_auxz00_3531 = (int) (((long) 0));
						STRUCT_SET(BgL_res2708z00_1409, BgL_auxz00_3531, BFALSE);
					}
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3216z00_1411;

						{
							BgL_jmethodz00_bglt BgL_auxz00_3534;

							BgL_auxz00_3534 = (BgL_jmethodz00_bglt) (BgL_obj2707z00_1406);
							BgL_arg3216z00_1411 =
								(((BgL_jmethodz00_bglt) CREF(BgL_auxz00_3534))->BgL_srcz00);
						}
						{	/* Module/java.scm 66 */
							int BgL_auxz00_3537;

							BgL_auxz00_3537 = (int) (((long) 1));
							STRUCT_SET(BgL_res2708z00_1409, BgL_auxz00_3537,
								BgL_arg3216z00_1411);
					}}
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3218z00_1413;

						{
							BgL_jmethodz00_bglt BgL_auxz00_3540;

							BgL_auxz00_3540 = (BgL_jmethodz00_bglt) (BgL_obj2707z00_1406);
							BgL_arg3218z00_1413 =
								(((BgL_jmethodz00_bglt) CREF(BgL_auxz00_3540))->BgL_idz00);
						}
						{	/* Module/java.scm 66 */
							int BgL_auxz00_3543;

							BgL_auxz00_3543 = (int) (((long) 2));
							STRUCT_SET(BgL_res2708z00_1409, BgL_auxz00_3543,
								BgL_arg3218z00_1413);
					}}
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3220z00_1415;

						{
							BgL_jmethodz00_bglt BgL_auxz00_3546;

							BgL_auxz00_3546 = (BgL_jmethodz00_bglt) (BgL_obj2707z00_1406);
							BgL_arg3220z00_1415 =
								(((BgL_jmethodz00_bglt) CREF(BgL_auxz00_3546))->BgL_argsz00);
						}
						{	/* Module/java.scm 66 */
							int BgL_auxz00_3549;

							BgL_auxz00_3549 = (int) (((long) 3));
							STRUCT_SET(BgL_res2708z00_1409, BgL_auxz00_3549,
								BgL_arg3220z00_1415);
					}}
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3222z00_1417;

						{
							BgL_jmethodz00_bglt BgL_auxz00_3552;

							BgL_auxz00_3552 = (BgL_jmethodz00_bglt) (BgL_obj2707z00_1406);
							BgL_arg3222z00_1417 =
								(((BgL_jmethodz00_bglt) CREF(BgL_auxz00_3552))->BgL_jnamez00);
						}
						{	/* Module/java.scm 66 */
							int BgL_auxz00_3555;

							BgL_auxz00_3555 = (int) (((long) 4));
							STRUCT_SET(BgL_res2708z00_1409, BgL_auxz00_3555,
								BgL_arg3222z00_1417);
					}}
					{	/* Module/java.scm 66 */
						obj_t BgL_arg3224z00_1419;

						{
							BgL_jmethodz00_bglt BgL_auxz00_3558;

							BgL_auxz00_3558 = (BgL_jmethodz00_bglt) (BgL_obj2707z00_1406);
							BgL_arg3224z00_1419 =
								(((BgL_jmethodz00_bglt) CREF(BgL_auxz00_3558))->
								BgL_modifiersz00);
						}
						{	/* Module/java.scm 66 */
							int BgL_auxz00_3561;

							BgL_auxz00_3561 = (int) (((long) 5));
							STRUCT_SET(BgL_res2708z00_1409, BgL_auxz00_3561,
								BgL_arg3224z00_1419);
					}}
					return BgL_res2708z00_1409;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_javaz00()
	{
		AN_OBJECT;
		{	/* Module/java.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 27432102),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 280176011),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_foreignz00(((long) 117332816),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(((long)
					146241040), BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 302809955),
				BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
			return BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long)
					477377954), BSTRING_TO_STRING(BGl_string3332z00zzmodule_javaz00));
		}
	}

#ifdef __cplusplus
}
#endif
