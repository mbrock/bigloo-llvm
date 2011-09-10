/*===========================================================================*/
/*   (BackEnd/jvm.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/jvm.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;


	static obj_t BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 = BUNSPEC;
	extern obj_t BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2ppzd2caseza2zd2zz__ppz00;
	extern obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_addsuffixz00zzbackend_jvmz00(obj_t);
	extern obj_t BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_zc3exitza32809ze3z83zzbackend_jvmz00();
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl__startzd2jvmzd2emissionz12z12zzbackend_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_jvmz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT bool_t directoryp(char *);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2ppzd2widthza2zd2zz__ppz00;
	static obj_t BGl_jvmzd2filenamezd2zzbackend_jvmz00(obj_t);
	extern obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_jvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_jvmz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	extern obj_t BGl_readzd2jfilezd2zzread_jvmz00();
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_jvmzd2aszd2zzjas_asz00(obj_t, obj_t);
	static BgL_jvmz00_bglt BGl_buildzd2jvmzd2backendz00zzbackend_jvmz00();
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_backendzd2checkzd2inline2558z00zzbackend_jvmz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl__buildzd2jvmzd2backendz00zzbackend_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_jvmzd2checkzd2packagez00zzbackend_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_jvmz00();
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
	extern obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t, bool_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl_backendzd2linkzd2jvm2552z00zzbackend_jvmz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern BgL_jvmz00_bglt BGl_makezd2jvmzd2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_backendzd2compilezd2jvm2550z00zzbackend_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_jvmz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_jvmz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_startzd2jvmzd2emissionz12z12zzbackend_jvmz00();
	static obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_jvmz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_backendzd2linkzd2objects2556z00zzbackend_jvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvmz00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	extern obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32720ze3z83zzbackend_jvmz00(obj_t);
	extern obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32723ze3z83zzbackend_jvmz00(obj_t);
	static obj_t BGl_zc3anonymousza32726ze3z83zzbackend_jvmz00(obj_t);
	extern obj_t BGl_jvmz00zzbackend_jvm_classz00;
	static obj_t BGl_emitz00zzbackend_jvmz00(obj_t, obj_t);
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32760ze3z83zzbackend_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filezd2separatorzd2zz__osz00();
	static obj_t BGl_zc3exitza32751ze3z83zzbackend_jvmz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_jasnamez00zzbackend_jvmz00(obj_t);
	static obj_t BGl_zc3exitza32757ze3z83zzbackend_jvmz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32764ze3z83zzbackend_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_jvmasdumpz00zzbackend_jvmz00(obj_t, obj_t);
	extern obj_t BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvmz00();
	static obj_t BGl_jvmzd2dirnamezd2zzbackend_jvmz00(obj_t);
	static obj_t BGl_backendzd2cnstzd2tablezd2n2554zd2zzbackend_jvmz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[20];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_buildzd2jvmzd2backendzd2envzd2zzbackend_jvmz00,
		BgL_bgl__buildza7d2jvmza7d2b2969z00,
		BGl__buildzd2jvmzd2backendz00zzbackend_jvmz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_startzd2jvmzd2emissionz12zd2envzc0zzbackend_jvmz00,
		BgL_bgl__startza7d2jvmza7d2e2970z00,
		BGl__startzd2jvmzd2emissionz12z12zzbackend_jvmz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00;
	extern obj_t BGl_backendzd2linkzd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2930z00zzbackend_jvmz00,
		BgL_bgl_backendza7d2compil2971za7,
		BGl_backendzd2compilezd2jvm2550z00zzbackend_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2932z00zzbackend_jvmz00,
		BgL_bgl_backendza7d2linkza7d2972z00,
		BGl_backendzd2linkzd2jvm2552z00zzbackend_jvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2934z00zzbackend_jvmz00,
		BgL_bgl_backendza7d2cnstza7d2973z00,
		BGl_backendzd2cnstzd2tablezd2n2554zd2zzbackend_jvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2936z00zzbackend_jvmz00,
		BgL_bgl_backendza7d2linkza7d2974z00,
		BGl_backendzd2linkzd2objects2556z00zzbackend_jvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2938z00zzbackend_jvmz00,
		BgL_bgl_backendza7d2checkza72975z00,
		BGl_backendzd2checkzd2inline2558z00zzbackend_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2956z00zzbackend_jvmz00,
		BgL_bgl_za7c3anonymousza7a322976z00,
		BGl_zc3anonymousza32720ze3z83zzbackend_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2957z00zzbackend_jvmz00,
		BgL_bgl_za7c3anonymousza7a322977z00,
		BGl_zc3anonymousza32723ze3z83zzbackend_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2958z00zzbackend_jvmz00,
		BgL_bgl_za7c3anonymousza7a322978z00,
		BGl_zc3anonymousza32726ze3z83zzbackend_jvmz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2compilezd2envz00zzbackend_backendz00;
	   
		 
		DEFINE_STRING(BGl_string2914z00zzbackend_jvmz00,
		BgL_bgl_string2914za700za7za7b2979za7, ".", 1);
	      DEFINE_STRING(BGl_string2915z00zzbackend_jvmz00,
		BgL_bgl_string2915za700za7za7b2980za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2916z00zzbackend_jvmz00,
		BgL_bgl_string2916za700za7za7b2981za7, "jheap", 5);
	      DEFINE_STRING(BGl_string2917z00zzbackend_jvmz00,
		BgL_bgl_string2917za700za7za7b2982za7, "", 0);
	      DEFINE_STRING(BGl_string2918z00zzbackend_jvmz00,
		BgL_bgl_string2918za700za7za7b2983za7, "'.", 2);
	      DEFINE_STRING(BGl_string2919z00zzbackend_jvmz00,
		BgL_bgl_string2919za700za7za7b2984za7, "', class path is `", 18);
	      DEFINE_STRING(BGl_string2920z00zzbackend_jvmz00,
		BgL_bgl_string2920za700za7za7b2985za7, " is `", 5);
	      DEFINE_STRING(BGl_string2921z00zzbackend_jvmz00,
		BgL_bgl_string2921za700za7za7b2986za7, "Package name for module ", 24);
	      DEFINE_STRING(BGl_string2922z00zzbackend_jvmz00,
		BgL_bgl_string2922za700za7za7b2987za7,
		"Incompatible package name and class path.", 41);
	      DEFINE_STRING(BGl_string2923z00zzbackend_jvmz00,
		BgL_bgl_string2923za700za7za7b2988za7, ".jast", 5);
	      DEFINE_STRING(BGl_string2924z00zzbackend_jvmz00,
		BgL_bgl_string2924za700za7za7b2989za7, ".jas", 4);
	      DEFINE_STRING(BGl_string2925z00zzbackend_jvmz00,
		BgL_bgl_string2925za700za7za7b2990za7, ".class", 6);
	      DEFINE_STRING(BGl_string2926z00zzbackend_jvmz00,
		BgL_bgl_string2926za700za7za7b2991za7, "start-jvm-emission!", 19);
	      DEFINE_STRING(BGl_string2927z00zzbackend_jvmz00,
		BgL_bgl_string2927za700za7za7b2992za7,
		"Can't write dest file because directory doesn't exist", 53);
	      DEFINE_STRING(BGl_string2928z00zzbackend_jvmz00,
		BgL_bgl_string2928za700za7za7b2993za7, "JVMMAIN", 7);
	      DEFINE_STRING(BGl_string2929z00zzbackend_jvmz00,
		BgL_bgl_string2929za700za7za7b2994za7, ".bgl", 4);
	      DEFINE_STRING(BGl_string2931z00zzbackend_jvmz00,
		BgL_bgl_string2931za700za7za7b2995za7, "backend-compile", 15);
	      DEFINE_STRING(BGl_string2933z00zzbackend_jvmz00,
		BgL_bgl_string2933za700za7za7b2996za7, "backend-link", 12);
	      DEFINE_STRING(BGl_string2935z00zzbackend_jvmz00,
		BgL_bgl_string2935za700za7za7b2997za7, "backend-cnst-table-name", 23);
	      DEFINE_STRING(BGl_string2937z00zzbackend_jvmz00,
		BgL_bgl_string2937za700za7za7b2998za7, "backend-link-objects", 20);
	      DEFINE_STRING(BGl_string2940z00zzbackend_jvmz00,
		BgL_bgl_string2940za700za7za7b2999za7, " -- ", 4);
	      DEFINE_STRING(BGl_string2939z00zzbackend_jvmz00,
		BgL_bgl_string2939za700za7za7b3000za7, "backend-check-inlines", 21);
	      DEFINE_STRING(BGl_string2941z00zzbackend_jvmz00,
		BgL_bgl_string2941za700za7za7b3001za7, "No source file found", 20);
	      DEFINE_STRING(BGl_string2942z00zzbackend_jvmz00,
		BgL_bgl_string2942za700za7za7b3002za7, "link", 4);
	      DEFINE_STRING(BGl_string2943z00zzbackend_jvmz00,
		BgL_bgl_string2943za700za7za7b3003za7, "\"", 1);
	      DEFINE_STRING(BGl_string2944z00zzbackend_jvmz00,
		BgL_bgl_string2944za700za7za7b3004za7, ")", 1);
	      DEFINE_STRING(BGl_string2945z00zzbackend_jvmz00,
		BgL_bgl_string2945za700za7za7b3005za7, " and ", 5);
	      DEFINE_STRING(BGl_string2946z00zzbackend_jvmz00,
		BgL_bgl_string2946za700za7za7b3006za7, "Redeclaration of the main (files ",
		33);
	      DEFINE_STRING(BGl_string2947z00zzbackend_jvmz00,
		BgL_bgl_string2947za700za7za7b3007za7, "Illegal file", 12);
	      DEFINE_STRING(BGl_string2948z00zzbackend_jvmz00,
		BgL_bgl_string2948za700za7za7b3008za7, "__cnst", 6);
	      DEFINE_STRING(BGl_string2950z00zzbackend_jvmz00,
		BgL_bgl_string2950za700za7za7b3009za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2949z00zzbackend_jvmz00,
		BgL_bgl_string2949za700za7za7b3010za7, "Jvm", 3);
	      DEFINE_STRING(BGl_string2951z00zzbackend_jvmz00,
		BgL_bgl_string2951za700za7za7b3011za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2952z00zzbackend_jvmz00,
		BgL_bgl_string2952za700za7za7b3012za7, "]", 1);
	      DEFINE_STRING(BGl_string2953z00zzbackend_jvmz00,
		BgL_bgl_string2953za700za7za7b3013za7, " qualified type name: ", 22);
	      DEFINE_STRING(BGl_string2954z00zzbackend_jvmz00,
		BgL_bgl_string2954za700za7za7b3014za7, "      [module: ", 15);
	      DEFINE_STRING(BGl_string2955z00zzbackend_jvmz00,
		BgL_bgl_string2955za700za7za7b3015za7, "a.class", 7);
	      DEFINE_STRING(BGl_string2960z00zzbackend_jvmz00,
		BgL_bgl_string2960za700za7za7b3016za7, "/a.class", 8);
	      DEFINE_STRING(BGl_string2959z00zzbackend_jvmz00,
		BgL_bgl_string2959za700za7za7b3017za7, "/", 1);
	      DEFINE_STRING(BGl_string2961z00zzbackend_jvmz00,
		BgL_bgl_string2961za700za7za7b3018za7, "\n", 1);
	      DEFINE_STRING(BGl_string2962z00zzbackend_jvmz00,
		BgL_bgl_string2962za700za7za7b3019za7, "        class: ", 15);
	      DEFINE_STRING(BGl_string2963z00zzbackend_jvmz00,
		BgL_bgl_string2963za700za7za7b3020za7, "jvm-dump", 8);
	      DEFINE_STRING(BGl_string2964z00zzbackend_jvmz00,
		BgL_bgl_string2964za700za7za7b3021za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string2965z00zzbackend_jvmz00,
		BgL_bgl_string2965za700za7za7b3022za7, "backend_jvm", 11);
	      DEFINE_STRING(BGl_string2966z00zzbackend_jvmz00,
		BgL_bgl_string2966za700za7za7b3023za7,
		"done cc (ld distrib) pass-started (start-jvm-emission!) main module library now ld class jvmas jast lower unamed (jvm) (java) native bigloo-jvm jvm ",
		148);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_jvmz00(long
		BgL_checksumz00_1405, char *BgL_fromz00_1406)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_jvmz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_jvmz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_jvmz00();
					BGl_cnstzd2initzd2zzbackend_jvmz00();
					BGl_importedzd2moduleszd2initz00zzbackend_jvmz00();
					BGl_methodzd2initzd2zzbackend_jvmz00();
					BGl_toplevelzd2initzd2zzbackend_jvmz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 1 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_jvm");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "backend_jvm");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_jvm");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 1 */
			{	/* BackEnd/jvm.scm 1 */
				obj_t BgL_cportz00_1391;

				BgL_cportz00_1391 =
					bgl_open_input_string(BGl_string2966z00zzbackend_jvmz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1392;

					BgL_iz00_1392 = ((long) 19);
				BgL_loopz00_1393:
					if ((BgL_iz00_1392 == ((long) -1)))
						{	/* BackEnd/jvm.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/jvm.scm 1 */
							{	/* BackEnd/jvm.scm 1 */
								obj_t BgL_arg2968z00_1395;

								{	/* BackEnd/jvm.scm 1 */

									{	/* BackEnd/jvm.scm 1 */
										obj_t BgL_locationz00_1397;

										BgL_locationz00_1397 = BBOOL(((bool_t) 0));
										{	/* BackEnd/jvm.scm 1 */

											BgL_arg2968z00_1395 =
												BGl_readz00zz__readerz00(BgL_cportz00_1391,
												BgL_locationz00_1397);
										}
									}
								}
								{	/* BackEnd/jvm.scm 1 */
									int BgL_auxz00_1431;

									BgL_auxz00_1431 = (int) (BgL_iz00_1392);
									CNST_TABLE_SET(BgL_auxz00_1431, BgL_arg2968z00_1395);
							}}
							{	/* BackEnd/jvm.scm 1 */
								int BgL_auxz00_1398;

								BgL_auxz00_1398 = (int) ((BgL_iz00_1392 - ((long) 1)));
								{
									long BgL_iz00_1436;

									BgL_iz00_1436 = (long) (BgL_auxz00_1398);
									BgL_iz00_1392 = BgL_iz00_1436;
									goto BgL_loopz00_1393;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 1 */
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						0)), BGl_buildzd2jvmzd2backendzd2envzd2zzbackend_jvmz00);
			BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 =
				BGl_string2914z00zzbackend_jvmz00;
			return BUNSPEC;
		}
	}



/* build-jvm-backend */
	BgL_jvmz00_bglt BGl_buildzd2jvmzd2backendz00zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 27 */
			return
				BGl_makezd2jvmzd2zzbackend_jvm_classz00(CNST_TABLE_REF(((long) 0)),
				CNST_TABLE_REF(((long) 1)), BGl_string2915z00zzbackend_jvmz00, BNIL,
				BNIL, BNIL, BNIL, BNIL, BNIL, ((bool_t) 0),
				BGl_string2916z00zzbackend_jvmz00, CNST_TABLE_REF(((long) 2)),
				((bool_t) 1), ((bool_t) 0), ((bool_t) 0), ((bool_t) 0), ((bool_t) 1),
				((bool_t) 0), ((bool_t) 1), CNST_TABLE_REF(((long) 3)),
				CNST_TABLE_REF(((long) 4)), ((bool_t) 1), ((bool_t) 1), ((bool_t) 0),
				BNIL, BNIL, ((bool_t) 0), ((bool_t) 0), CNST_TABLE_REF(((long) 5)),
				BNIL, BFALSE, BNIL, BNIL, BNIL, BFALSE, BNIL, BTRUE);
		}
	}



/* _build-jvm-backend */
	obj_t BGl__buildzd2jvmzd2backendz00zzbackend_jvmz00(obj_t BgL_envz00_1337)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 27 */
			return (obj_t) (BGl_buildzd2jvmzd2backendz00zzbackend_jvmz00());
		}
	}



/* jvm-check-package */
	obj_t BGl_jvmzd2checkzd2packagez00zzbackend_jvmz00(obj_t BgL_modulez00_2,
		obj_t BgL_pathz00_3)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 100 */
			{
				obj_t BgL_basez00_570;

				obj_t BgL_pathz00_571;

				{	/* BackEnd/jvm.scm 117 */
					obj_t BgL_qtypez00_551;

					BgL_qtypez00_551 =
						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_modulez00_2);
					{	/* BackEnd/jvm.scm 117 */
						obj_t BgL_basez00_552;

						{	/* BackEnd/jvm.scm 118 */
							obj_t BgL_prez00_567;

							BgL_prez00_567 = BGl_prefixz00zz__osz00(BgL_qtypez00_551);
							if (bigloo_strcmp(BgL_prez00_567,
									BGl_string2917z00zzbackend_jvmz00))
								{	/* BackEnd/jvm.scm 120 */
									BgL_basez00_552 = BGl_string2914z00zzbackend_jvmz00;
								}
							else
								{	/* BackEnd/jvm.scm 120 */
									if (bigloo_strcmp(BgL_prez00_567, BgL_qtypez00_551))
										{	/* BackEnd/jvm.scm 122 */
											BgL_basez00_552 = BGl_string2914z00zzbackend_jvmz00;
										}
									else
										{	/* BackEnd/jvm.scm 122 */
											BgL_basez00_552 = BgL_prez00_567;
										}
								}
						}
						{	/* BackEnd/jvm.scm 118 */

							{	/* BackEnd/jvm.scm 126 */
								bool_t BgL_testz00_1455;

								BgL_basez00_570 =
									BGl_jvmzd2filenamezd2zzbackend_jvmz00(BgL_basez00_552);
								BgL_pathz00_571 = BgL_pathz00_3;
								{	/* BackEnd/jvm.scm 102 */
									long BgL_lbasez00_573;

									long BgL_lpathz00_574;

									BgL_lbasez00_573 = STRING_LENGTH(BgL_basez00_570);
									BgL_lpathz00_574 = STRING_LENGTH(BgL_pathz00_571);
									if ((BgL_lpathz00_574 < BgL_lbasez00_573))
										{	/* BackEnd/jvm.scm 104 */
											BgL_testz00_1455 = ((bool_t) 0);
										}
									else
										{
											long BgL_rpathz00_579;

											long BgL_rbasez00_580;

											BgL_rpathz00_579 = (BgL_lpathz00_574 - ((long) 1));
											BgL_rbasez00_580 = (BgL_lbasez00_573 - ((long) 1));
										BgL_zc3anonymousza32597ze3z83_581:
											if ((BgL_rbasez00_580 == ((long) -1)))
												{	/* BackEnd/jvm.scm 108 */
													BgL_testz00_1455 = ((bool_t) 1);
												}
											else
												{	/* BackEnd/jvm.scm 110 */
													unsigned char BgL_cbasez00_583;

													unsigned char BgL_cpathz00_584;

													BgL_cbasez00_583 =
														STRING_REF(BgL_basez00_570, BgL_rbasez00_580);
													BgL_cpathz00_584 =
														STRING_REF(BgL_pathz00_571, BgL_rpathz00_579);
													{	/* BackEnd/jvm.scm 112 */
														bool_t BgL_testz00_1464;

														if ((BgL_cbasez00_583 == BgL_cpathz00_584))
															{	/* BackEnd/jvm.scm 112 */
																BgL_testz00_1464 = ((bool_t) 1);
															}
														else
															{	/* BackEnd/jvm.scm 112 */
																if ((BgL_cpathz00_584 == ((unsigned char) '/')))
																	{	/* BackEnd/jvm.scm 113 */
																		BgL_testz00_1464 =
																			(BgL_cbasez00_583 ==
																			((unsigned char) '.'));
																	}
																else
																	{	/* BackEnd/jvm.scm 113 */
																		BgL_testz00_1464 = ((bool_t) 0);
																	}
															}
														if (BgL_testz00_1464)
															{
																long BgL_rbasez00_1472;

																long BgL_rpathz00_1470;

																BgL_rpathz00_1470 =
																	(BgL_rpathz00_579 - ((long) 1));
																BgL_rbasez00_1472 =
																	(BgL_rbasez00_580 - ((long) 1));
																BgL_rbasez00_580 = BgL_rbasez00_1472;
																BgL_rpathz00_579 = BgL_rpathz00_1470;
																goto BgL_zc3anonymousza32597ze3z83_581;
															}
														else
															{	/* BackEnd/jvm.scm 112 */
																BgL_testz00_1455 = ((bool_t) 0);
															}
													}
												}
										}
								}
								if (BgL_testz00_1455)
									{	/* BackEnd/jvm.scm 126 */
										return BFALSE;
									}
								else
									{	/* BackEnd/jvm.scm 127 */
										obj_t BgL_list2561z00_554;

										{	/* BackEnd/jvm.scm 127 */
											obj_t BgL_arg2563z00_556;

											{	/* BackEnd/jvm.scm 127 */
												obj_t BgL_arg2565z00_558;

												{	/* BackEnd/jvm.scm 127 */
													obj_t BgL_arg2566z00_559;

													{	/* BackEnd/jvm.scm 127 */
														obj_t BgL_arg2572z00_561;

														{	/* BackEnd/jvm.scm 127 */
															obj_t BgL_arg2576z00_562;

															{	/* BackEnd/jvm.scm 127 */
																obj_t BgL_arg2587z00_564;

																{	/* BackEnd/jvm.scm 127 */
																	obj_t BgL_arg2589z00_565;

																	BgL_arg2589z00_565 =
																		MAKE_PAIR(BGl_string2918z00zzbackend_jvmz00,
																		BNIL);
																	BgL_arg2587z00_564 =
																		MAKE_PAIR(BgL_pathz00_3,
																		BgL_arg2589z00_565);
																}
																BgL_arg2576z00_562 =
																	MAKE_PAIR(BGl_string2919z00zzbackend_jvmz00,
																	BgL_arg2587z00_564);
															}
															BgL_arg2572z00_561 =
																MAKE_PAIR(BgL_basez00_552, BgL_arg2576z00_562);
														}
														BgL_arg2566z00_559 =
															MAKE_PAIR(BGl_string2920z00zzbackend_jvmz00,
															BgL_arg2572z00_561);
													}
													BgL_arg2565z00_558 =
														MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
														BgL_arg2566z00_559);
												}
												BgL_arg2563z00_556 =
													MAKE_PAIR(BGl_string2921z00zzbackend_jvmz00,
													BgL_arg2565z00_558);
											}
											BgL_list2561z00_554 =
												MAKE_PAIR(BGl_string2922z00zzbackend_jvmz00,
												BgL_arg2563z00_556);
										}
										return BGl_warningz00zz__errorz00(BgL_list2561z00_554);
									}
							}
						}
					}
				}
			}
		}
	}



/* jvmasdump */
	obj_t BGl_jvmasdumpz00zzbackend_jvmz00(obj_t BgL_classfilez00_4,
		obj_t BgL_portz00_5)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 133 */
			{	/* BackEnd/jvm.scm 134 */
				obj_t BgL_owz00_592;

				obj_t BgL_ocz00_593;

				BgL_owz00_592 = BGl_za2ppzd2widthza2zd2zz__ppz00;
				BgL_ocz00_593 = BGl_za2ppzd2caseza2zd2zz__ppz00;
				BGl_za2ppzd2widthza2zd2zz__ppz00 = BINT(((long) 10240));
				BGl_za2ppzd2caseza2zd2zz__ppz00 = CNST_TABLE_REF(((long) 6));
				{	/* BackEnd/jvm.scm 137 */
					obj_t BgL_list2610z00_594;

					BgL_list2610z00_594 = MAKE_PAIR(BgL_portz00_5, BNIL);
					BGl_ppz00zz__ppz00(BgL_classfilez00_4, BgL_list2610z00_594);
				}
				BGl_za2ppzd2caseza2zd2zz__ppz00 = BgL_ocz00_593;
				return (BGl_za2ppzd2widthza2zd2zz__ppz00 = BgL_owz00_592, BUNSPEC);
			}
		}
	}



/* addsuffix */
	obj_t BGl_addsuffixz00zzbackend_jvmz00(obj_t BgL_namez00_6)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 141 */
			{	/* BackEnd/jvm.scm 143 */
				obj_t BgL_arg2615z00_595;

				{	/* BackEnd/jvm.scm 143 */
					obj_t BgL_casezd2valuezd2_596;

					BgL_casezd2valuezd2_596 = BGl_za2passza2z00zzengine_paramz00;
					if ((BgL_casezd2valuezd2_596 == CNST_TABLE_REF(((long) 7))))
						{	/* BackEnd/jvm.scm 143 */
							BgL_arg2615z00_595 = BGl_string2923z00zzbackend_jvmz00;
						}
					else
						{	/* BackEnd/jvm.scm 143 */
							if ((BgL_casezd2valuezd2_596 == CNST_TABLE_REF(((long) 8))))
								{	/* BackEnd/jvm.scm 143 */
									BgL_arg2615z00_595 = BGl_string2924z00zzbackend_jvmz00;
								}
							else
								{	/* BackEnd/jvm.scm 143 */
									BgL_arg2615z00_595 = BGl_string2925z00zzbackend_jvmz00;
								}
						}
				}
				return string_append(BgL_namez00_6, BgL_arg2615z00_595);
			}
		}
	}



/* jasname */
	obj_t BGl_jasnamez00zzbackend_jvmz00(obj_t BgL_cfz00_7)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 151 */
			if (PAIRP(BgL_cfz00_7))
				{	/* BackEnd/jvm.scm 152 */
					obj_t BgL_carzd21427zd2_603;

					BgL_carzd21427zd2_603 = CAR(BgL_cfz00_7);
					if (PAIRP(BgL_carzd21427zd2_603))
						{	/* BackEnd/jvm.scm 152 */
							obj_t BgL_cdrzd21431zd2_605;

							BgL_cdrzd21431zd2_605 = CDR(BgL_carzd21427zd2_603);
							if ((CAR(BgL_carzd21427zd2_603) == CNST_TABLE_REF(((long) 9))))
								{	/* BackEnd/jvm.scm 152 */
									if (PAIRP(BgL_cdrzd21431zd2_605))
										{	/* BackEnd/jvm.scm 152 */
											if (NULLP(CDR(BgL_cdrzd21431zd2_605)))
												{	/* BackEnd/jvm.scm 152 */
													obj_t BgL_arg2628z00_609;

													BgL_arg2628z00_609 = CAR(BgL_cdrzd21431zd2_605);
													{	/* BackEnd/jvm.scm 152 */
														obj_t BgL_arg2648z00_1165;

														{	/* BackEnd/jvm.scm 152 */
															obj_t BgL_res2897z00_1168;

															{	/* BackEnd/jvm.scm 152 */
																obj_t BgL_symbolz00_1166;

																BgL_symbolz00_1166 = BgL_arg2628z00_609;
																{	/* BackEnd/jvm.scm 152 */
																	obj_t BgL_arg2063z00_1167;

																	BgL_arg2063z00_1167 =
																		SYMBOL_TO_STRING(BgL_symbolz00_1166);
																	BgL_res2897z00_1168 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_1167);
																}
															}
															BgL_arg2648z00_1165 = BgL_res2897z00_1168;
														}
														return
															BGl_addsuffixz00zzbackend_jvmz00
															(BgL_arg2648z00_1165);
													}
												}
											else
												{	/* BackEnd/jvm.scm 152 */
													return BFALSE;
												}
										}
									else
										{	/* BackEnd/jvm.scm 152 */
											return BFALSE;
										}
								}
							else
								{	/* BackEnd/jvm.scm 152 */
									return BFALSE;
								}
						}
					else
						{	/* BackEnd/jvm.scm 152 */
							return BFALSE;
						}
				}
			else
				{	/* BackEnd/jvm.scm 152 */
					return BFALSE;
				}
		}
	}



/* jvm-filename */
	obj_t BGl_jvmzd2filenamezd2zzbackend_jvmz00(obj_t BgL_namez00_8)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 159 */
			if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
				{	/* BackEnd/jvm.scm 160 */
					if (bigloo_strcmp(BgL_namez00_8, BGl_string2914z00zzbackend_jvmz00))
						{	/* BackEnd/jvm.scm 161 */
							return BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
						}
					else
						{	/* BackEnd/jvm.scm 161 */
							return
								BGl_makezd2filezd2namez00zz__osz00
								(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00, BgL_namez00_8);
						}
				}
			else
				{	/* BackEnd/jvm.scm 160 */
					return BgL_namez00_8;
				}
		}
	}



/* jvm-dirname */
	obj_t BGl_jvmzd2dirnamezd2zzbackend_jvmz00(obj_t BgL_filez00_9)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 169 */
			{	/* BackEnd/jvm.scm 170 */
				obj_t BgL_dfilez00_616;

				BgL_dfilez00_616 = BGl_dirnamez00zz__osz00(BgL_filez00_9);
				{	/* BackEnd/jvm.scm 170 */
					obj_t BgL_dirz00_617;

					BgL_dirz00_617 =
						BGl_jvmzd2filenamezd2zzbackend_jvmz00(BgL_dfilez00_616);
					{	/* BackEnd/jvm.scm 171 */

						{	/* BackEnd/jvm.scm 172 */
							bool_t BgL_testz00_1523;

							if (bigloo_strcmp(BgL_dfilez00_616,
									BGl_string2917z00zzbackend_jvmz00))
								{	/* BackEnd/jvm.scm 172 */
									BgL_testz00_1523 = ((bool_t) 0);
								}
							else
								{	/* BackEnd/jvm.scm 172 */
									if (directoryp(BSTRING_TO_STRING(BgL_dfilez00_616)))
										{	/* BackEnd/jvm.scm 173 */
											BgL_testz00_1523 = ((bool_t) 0);
										}
									else
										{	/* BackEnd/jvm.scm 173 */
											if (fexists(BSTRING_TO_STRING(BgL_dfilez00_616)))
												{	/* BackEnd/jvm.scm 174 */
													BgL_testz00_1523 = ((bool_t) 0);
												}
											else
												{	/* BackEnd/jvm.scm 175 */
													bool_t BgL__ortest_2535z00_622;

													if (STRINGP
														(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
														{	/* BackEnd/jvm.scm 175 */
															BgL__ortest_2535z00_622 = ((bool_t) 0);
														}
													else
														{	/* BackEnd/jvm.scm 175 */
															BgL__ortest_2535z00_622 = ((bool_t) 1);
														}
													if (BgL__ortest_2535z00_622)
														{	/* BackEnd/jvm.scm 175 */
															BgL_testz00_1523 = BgL__ortest_2535z00_622;
														}
													else
														{	/* BackEnd/jvm.scm 175 */
															BgL_testz00_1523 =
																directoryp(BSTRING_TO_STRING
																(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00));
														}
												}
										}
								}
							if (BgL_testz00_1523)
								{	/* BackEnd/jvm.scm 172 */
									BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
										(BgL_dirz00_617);
								}
							else
								{	/* BackEnd/jvm.scm 172 */
									((bool_t) 0);
								}
						}
						return BgL_dirz00_617;
					}
				}
			}
		}
	}



/* start-jvm-emission! */
	obj_t BGl_startzd2jvmzd2emissionz12z12zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 184 */
			if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
				{	/* BackEnd/jvm.scm 187 */
					obj_t BgL_dnamez00_625;

					BgL_dnamez00_625 =
						BGl_dirnamez00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
					if (bigloo_strcmp(BgL_dnamez00_625,
							BGl_string2917z00zzbackend_jvmz00))
						{	/* BackEnd/jvm.scm 188 */
							BFALSE;
						}
					else
						{	/* BackEnd/jvm.scm 188 */
							BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 =
								BGl_jvmzd2dirnamezd2zzbackend_jvmz00
								(BGl_za2destza2z00zzengine_paramz00);
						}
				}
			else
				{	/* BackEnd/jvm.scm 186 */
					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 10))))
						{	/* BackEnd/jvm.scm 190 */
							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/jvm.scm 191 */
									BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00 =
										BGl_jvmzd2dirnamezd2zzbackend_jvmz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								}
							else
								{	/* BackEnd/jvm.scm 191 */
									BFALSE;
								}
						}
					else
						{	/* BackEnd/jvm.scm 190 */
							BFALSE;
						}
				}
			{	/* BackEnd/jvm.scm 193 */
				bool_t BgL_testz00_1551;

				if (fexists(BSTRING_TO_STRING
						(BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00)))
					{	/* BackEnd/jvm.scm 193 */
						BgL_testz00_1551 =
							directoryp(BSTRING_TO_STRING
							(BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00));
					}
				else
					{	/* BackEnd/jvm.scm 193 */
						BgL_testz00_1551 = ((bool_t) 0);
					}
				if (BgL_testz00_1551)
					{	/* BackEnd/jvm.scm 193 */
						return BTRUE;
					}
				else
					{	/* BackEnd/jvm.scm 193 */
						return
							BGl_errorz00zz__errorz00(BGl_string2926z00zzbackend_jvmz00,
							BGl_string2927z00zzbackend_jvmz00,
							BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00);
					}
			}
		}
	}



/* _start-jvm-emission! */
	obj_t BGl__startzd2jvmzd2emissionz12z12zzbackend_jvmz00(obj_t BgL_envz00_1338)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 184 */
			return BGl_startzd2jvmzd2emissionz12z12zzbackend_jvmz00();
		}
	}



/* make-tmp-file-name */
	obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 228 */
			return
				string_append(BGl_string2928z00zzbackend_jvmz00,
				BGl_string2929z00zzbackend_jvmz00);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2930z00zzbackend_jvmz00,
				BGl_string2931z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2932z00zzbackend_jvmz00,
				BGl_string2933z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2934z00zzbackend_jvmz00,
				BGl_string2935z00zzbackend_jvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2936z00zzbackend_jvmz00,
				BGl_string2937z00zzbackend_jvmz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2938z00zzbackend_jvmz00,
				BGl_string2939z00zzbackend_jvmz00);
		}
	}



/* backend-check-inline2558 */
	obj_t BGl_backendzd2checkzd2inline2558z00zzbackend_jvmz00(obj_t
		BgL_envz00_1348, obj_t BgL_mez00_1349)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 354 */
			{
				BgL_jvmz00_bglt BgL_mez00_1120;

				BgL_mez00_1120 = (BgL_jvmz00_bglt) (BgL_mez00_1349);
				if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
					{	/* BackEnd/jvm.scm 355 */
						return BFALSE;
					}
				else
					{	/* BackEnd/jvm.scm 355 */
						return BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
					}
			}
		}
	}



/* backend-link-objects2556 */
	obj_t BGl_backendzd2linkzd2objects2556z00zzbackend_jvmz00(obj_t
		BgL_envz00_1350, obj_t BgL_mez00_1351, obj_t BgL_sourcesz00_1352)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 234 */
			{
				BgL_jvmz00_bglt BgL_mez00_939;

				obj_t BgL_sourcesz00_940;

				BgL_mez00_939 = (BgL_jvmz00_bglt) (BgL_mez00_1351);
				BgL_sourcesz00_940 = BgL_sourcesz00_1352;
				if (NULLP(BgL_sourcesz00_940))
					{	/* BackEnd/jvm.scm 239 */
						obj_t BgL_firstz00_945;

						BgL_firstz00_945 =
							BGl_prefixz00zz__osz00(CAR
							(BGl_za2ozd2filesza2zd2zzengine_paramz00));
						{	/* BackEnd/jvm.scm 240 */
							obj_t BgL_list2770z00_946;

							{	/* BackEnd/jvm.scm 240 */
								obj_t BgL_arg2773z00_948;

								{	/* BackEnd/jvm.scm 240 */
									obj_t BgL_arg2775z00_950;

									{	/* BackEnd/jvm.scm 240 */
										obj_t BgL_arg2777z00_952;

										BgL_arg2777z00_952 =
											MAKE_PAIR(BGl_za2ozd2filesza2zd2zzengine_paramz00, BNIL);
										BgL_arg2775z00_950 =
											MAKE_PAIR(BGl_string2940z00zzbackend_jvmz00,
											BgL_arg2777z00_952);
									}
									BgL_arg2773z00_948 =
										MAKE_PAIR(BGl_string2941z00zzbackend_jvmz00,
										BgL_arg2775z00_950);
								}
								BgL_list2770z00_946 =
									MAKE_PAIR(BGl_string2942z00zzbackend_jvmz00,
									BgL_arg2773z00_948);
							}
							BGl_warningz00zz__errorz00(BgL_list2770z00_946);
						}
						BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
						BGl_readzd2jfilezd2zzread_jvmz00();
						return BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BFALSE);
					}
				else
					{
						obj_t BgL_sourcesz00_957;

						obj_t BgL_clsz00_958;

						obj_t BgL_mainzd2modulezd2_959;

						obj_t BgL_mainz00_960;

						obj_t BgL_fmainz00_961;

						obj_t BgL_librariesz00_962;

						BgL_sourcesz00_957 = BgL_sourcesz00_940;
						BgL_clsz00_958 = BNIL;
						BgL_mainzd2modulezd2_959 = BFALSE;
						BgL_mainz00_960 = BFALSE;
						BgL_fmainz00_961 = BGl_string2917z00zzbackend_jvmz00;
						BgL_librariesz00_962 = BNIL;
					BgL_zc3anonymousza32779ze3z83_963:
						if (NULLP(BgL_sourcesz00_957))
							{	/* BackEnd/jvm.scm 251 */
								if (CBOOL(BgL_mainz00_960))
									{	/* BackEnd/jvm.scm 255 */
										obj_t BgL_firstz00_965;

										BgL_firstz00_965 =
											BGl_prefixz00zz__osz00(CAR
											(BGl_za2ozd2filesza2zd2zzengine_paramz00));
										{
											obj_t BgL_l2547z00_967;

											BgL_l2547z00_967 = BgL_librariesz00_962;
										BgL_zc3anonymousza32781ze3z83_968:
											if (PAIRP(BgL_l2547z00_967))
												{	/* BackEnd/jvm.scm 258 */
													{	/* BackEnd/jvm.scm 259 */
														obj_t BgL_libz00_970;

														BgL_libz00_970 = CAR(BgL_l2547z00_967);
														{
															obj_t BgL_libsz00_971;

															if (PAIRP(BgL_libz00_970))
																{	/* BackEnd/jvm.scm 259 */
																	if (
																		(CAR(BgL_libz00_970) ==
																			CNST_TABLE_REF(((long) 12))))
																		{	/* BackEnd/jvm.scm 259 */
																			BgL_libsz00_971 = CDR(BgL_libz00_970);
																			{
																				obj_t BgL_l2545z00_980;

																				BgL_l2545z00_980 = BgL_libsz00_971;
																			BgL_zc3anonymousza32788ze3z83_981:
																				if (PAIRP(BgL_l2545z00_980))
																					{	/* BackEnd/jvm.scm 261 */
																						{	/* BackEnd/jvm.scm 262 */
																							obj_t BgL_libz00_983;

																							BgL_libz00_983 =
																								CAR(BgL_l2545z00_980);
																							BGl_usezd2libraryz12zc0zzmodule_alibraryz00
																								(BgL_libz00_983,
																								CNST_TABLE_REF(((long) 11)));
																						}
																						{
																							obj_t BgL_l2545z00_1601;

																							BgL_l2545z00_1601 =
																								CDR(BgL_l2545z00_980);
																							BgL_l2545z00_980 =
																								BgL_l2545z00_1601;
																							goto
																								BgL_zc3anonymousza32788ze3z83_981;
																						}
																					}
																				else
																					{	/* BackEnd/jvm.scm 261 */
																						((bool_t) 1);
																					}
																			}
																		}
																	else
																		{	/* BackEnd/jvm.scm 259 */
																			((bool_t) 0);
																		}
																}
															else
																{	/* BackEnd/jvm.scm 259 */
																	((bool_t) 0);
																}
														}
													}
													{
														obj_t BgL_l2547z00_1604;

														BgL_l2547z00_1604 = CDR(BgL_l2547z00_967);
														BgL_l2547z00_967 = BgL_l2547z00_1604;
														goto BgL_zc3anonymousza32781ze3z83_968;
													}
												}
											else
												{	/* BackEnd/jvm.scm 258 */
													((bool_t) 1);
												}
										}
										BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
										{	/* BackEnd/jvm.scm 267 */
											obj_t BgL_list2792z00_988;

											BgL_list2792z00_988 = MAKE_PAIR(BgL_fmainz00_961, BNIL);
											BGl_za2srczd2filesza2zd2zzengine_paramz00 =
												BgL_list2792z00_988;
										}
										BGl_readzd2jfilezd2zzread_jvmz00();
										return
											BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BgL_mainzd2modulezd2_959);
									}
								else
									{	/* BackEnd/jvm.scm 270 */
										obj_t BgL_tmpz00_990;

										BgL_tmpz00_990 =
											BGl_makezd2tmpzd2filezd2namezd2zzbackend_jvmz00();
										BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_tmpz00_990,
											CBOOL(BgL_mainz00_960),
											string_to_symbol(BSTRING_TO_STRING
												(BGl_string2928z00zzbackend_jvmz00)), BgL_clsz00_958,
											BgL_librariesz00_962);
										{	/* BackEnd/jvm.scm 272 */
											obj_t BgL_list2795z00_992;

											BgL_list2795z00_992 = MAKE_PAIR(BgL_tmpz00_990, BNIL);
											BGl_za2srczd2filesza2zd2zzengine_paramz00 =
												BgL_list2795z00_992;
										}
										{
											obj_t BgL_raz00_995;

											obj_t BgL_resz00_996;

											BgL_raz00_995 = BGl_za2restzd2argsza2zd2zzengine_paramz00;
											BgL_resz00_996 = BNIL;
										BgL_zc3anonymousza32796ze3z83_997:
											if (NULLP(BgL_raz00_995))
												{	/* BackEnd/jvm.scm 278 */
													BGl_za2restzd2argsza2zd2zzengine_paramz00 =
														bgl_reverse_bang(BgL_resz00_996);
												}
											else
												{	/* BackEnd/jvm.scm 280 */
													bool_t BgL_testz00_1619;

													{	/* BackEnd/jvm.scm 280 */
														obj_t BgL_arg2803z00_1004;

														BgL_arg2803z00_1004 =
															BGl_suffixz00zz__osz00(CAR(BgL_raz00_995));
														BgL_testz00_1619 =
															CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2803z00_1004,
																BGl_za2mcozd2suffixza2zd2zzengine_paramz00));
													}
													if (BgL_testz00_1619)
														{
															obj_t BgL_raz00_1624;

															BgL_raz00_1624 = CDR(BgL_raz00_995);
															BgL_raz00_995 = BgL_raz00_1624;
															goto BgL_zc3anonymousza32796ze3z83_997;
														}
													else
														{	/* BackEnd/jvm.scm 283 */
															obj_t BgL_arg2800z00_1001;

															obj_t BgL_arg2801z00_1002;

															BgL_arg2800z00_1001 = CDR(BgL_raz00_995);
															BgL_arg2801z00_1002 =
																MAKE_PAIR(CAR(BgL_raz00_995), BgL_resz00_996);
															{
																obj_t BgL_resz00_1630;

																obj_t BgL_raz00_1629;

																BgL_raz00_1629 = BgL_arg2800z00_1001;
																BgL_resz00_1630 = BgL_arg2801z00_1002;
																BgL_resz00_996 = BgL_resz00_1630;
																BgL_raz00_995 = BgL_raz00_1629;
																goto BgL_zc3anonymousza32796ze3z83_997;
															}
														}
												}
										}
										{	/* BackEnd/jvm.scm 284 */
											obj_t BgL_val2539z00_1007;

											BgL_val2539z00_1007 =
												BGl_zc3exitza32809ze3z83zzbackend_jvmz00();
											BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
											{	/* BackEnd/jvm.scm 288 */
												obj_t BgL_prez00_1008;

												BgL_prez00_1008 =
													BGl_prefixz00zz__osz00(BgL_tmpz00_990);
												{	/* BackEnd/jvm.scm 288 */
													obj_t BgL_classzd2filezd2_1009;

													BgL_classzd2filezd2_1009 =
														string_append(BgL_prez00_1008,
														BGl_string2925z00zzbackend_jvmz00);
													{	/* BackEnd/jvm.scm 289 */

														if (fexists(BSTRING_TO_STRING(BgL_tmpz00_990)))
															{	/* BackEnd/jvm.scm 291 */
																char *BgL_stringz00_1263;

																BgL_stringz00_1263 =
																	BSTRING_TO_STRING(BgL_tmpz00_990);
																if (unlink(BgL_stringz00_1263))
																	{	/* BackEnd/jvm.scm 291 */
																		((bool_t) 0);
																	}
																else
																	{	/* BackEnd/jvm.scm 291 */
																		((bool_t) 1);
																	}
															}
														else
															{	/* BackEnd/jvm.scm 290 */
																((bool_t) 0);
															}
													}
												}
											}
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val2539z00_1007)))
												{	/* BackEnd/jvm.scm 288 */
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
														(BgL_val2539z00_1007), CDR(BgL_val2539z00_1007));
												}
											else
												{	/* BackEnd/jvm.scm 288 */
													BgL_val2539z00_1007;
												}
										}
										return BINT(((long) 0));
							}}
						else
							{	/* BackEnd/jvm.scm 293 */
								obj_t BgL_portz00_1017;

								{	/* BackEnd/jvm.scm 293 */
									obj_t BgL_arg2893z00_1110;

									{	/* BackEnd/jvm.scm 293 */
										obj_t BgL_pairz00_1267;

										BgL_pairz00_1267 = BgL_sourcesz00_957;
										BgL_arg2893z00_1110 = CAR(CAR(BgL_pairz00_1267));
									}
									{	/* BackEnd/jvm.scm 293 */

										BgL_portz00_1017 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_arg2893z00_1110, BTRUE);
									}
								}
								if (INPUT_PORTP(BgL_portz00_1017))
									{	/* BackEnd/jvm.scm 296 */
										obj_t BgL_expz00_1019;

										{	/* BackEnd/jvm.scm 296 */
											obj_t BgL_list2889z00_1106;

											BgL_list2889z00_1106 = MAKE_PAIR(BgL_portz00_1017, BNIL);
											BgL_expz00_1019 =
												BGl_compilerzd2readzd2zzread_readerz00
												(BgL_list2889z00_1106);
										}
										bgl_close_input_port(BgL_portz00_1017);
										{
											obj_t BgL_namez00_1020;

											obj_t BgL_newzd2mainzd2_1021;

											obj_t BgL_namez00_1023;

											if (PAIRP(BgL_expz00_1019))
												{	/* BackEnd/jvm.scm 298 */
													obj_t BgL_cdrzd21454zd2_1028;

													BgL_cdrzd21454zd2_1028 = CDR(BgL_expz00_1019);
													if (
														(CAR(BgL_expz00_1019) ==
															CNST_TABLE_REF(((long) 13))))
														{	/* BackEnd/jvm.scm 298 */
															if (PAIRP(BgL_cdrzd21454zd2_1028))
																{
																	obj_t BgL_gzd21461zd2_1033;

																	BgL_gzd21461zd2_1033 =
																		CDR(BgL_cdrzd21454zd2_1028);
																BgL_zc3anonymousza32815ze3z83_1034:
																	if (PAIRP(BgL_gzd21461zd2_1033))
																		{	/* BackEnd/jvm.scm 298 */
																			obj_t BgL_carzd21464zd2_1036;

																			BgL_carzd21464zd2_1036 =
																				CAR(BgL_gzd21461zd2_1033);
																			if (PAIRP(BgL_carzd21464zd2_1036))
																				{	/* BackEnd/jvm.scm 298 */
																					obj_t BgL_cdrzd21468zd2_1038;

																					BgL_cdrzd21468zd2_1038 =
																						CDR(BgL_carzd21464zd2_1036);
																					if (
																						(CAR(BgL_carzd21464zd2_1036) ==
																							CNST_TABLE_REF(((long) 14))))
																						{	/* BackEnd/jvm.scm 298 */
																							if (PAIRP(BgL_cdrzd21468zd2_1038))
																								{	/* BackEnd/jvm.scm 298 */
																									if (NULLP(CDR
																											(BgL_cdrzd21468zd2_1038)))
																										{	/* BackEnd/jvm.scm 298 */
																											BgL_namez00_1020 =
																												CAR
																												(BgL_cdrzd21454zd2_1028);
																											BgL_newzd2mainzd2_1021 =
																												CAR
																												(BgL_cdrzd21468zd2_1038);
																											{	/* BackEnd/jvm.scm 303 */
																												obj_t
																													BgL_arg2835z00_1056;
																												{	/* BackEnd/jvm.scm 303 */
																													obj_t
																														BgL_arg2837z00_1058;
																													obj_t
																														BgL_arg2838z00_1059;
																													{	/* BackEnd/jvm.scm 303 */
																														obj_t
																															BgL_arg2839z00_1060;
																														{	/* BackEnd/jvm.scm 303 */
																															obj_t
																																BgL_arg2841z00_1061;
																															{	/* BackEnd/jvm.scm 303 */
																																obj_t
																																	BgL_pairz00_1294;
																																BgL_pairz00_1294
																																	=
																																	BgL_sourcesz00_957;
																																BgL_arg2841z00_1061
																																	=
																																	CDR(CAR
																																	(BgL_pairz00_1294));
																															}
																															BgL_arg2839z00_1060
																																=
																																BGl_prefixz00zz__osz00
																																(BgL_arg2841z00_1061);
																														}
																														BgL_arg2837z00_1058
																															=
																															BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00
																															(BgL_arg2839z00_1060);
																													}
																													BgL_arg2838z00_1059 =
																														BGl_filezd2separatorzd2zz__osz00
																														();
																													BgL_arg2835z00_1056 =
																														BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																														(BgL_arg2837z00_1058,
																														CCHAR
																														(BgL_arg2838z00_1059),
																														(char) (((unsigned
																																	char) '.')));
																												}
																												BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																													(BgL_namez00_1020,
																													BgL_arg2835z00_1056,
																													BNIL);
																											}
																											if (CBOOL
																												(BgL_mainz00_960))
																												{	/* BackEnd/jvm.scm 307 */
																													obj_t
																														BgL_arg2843z00_1063;
																													obj_t
																														BgL_arg2844z00_1064;
																													{	/* BackEnd/jvm.scm 308 */
																														obj_t
																															BgL_arg2847z00_1067;
																														{	/* BackEnd/jvm.scm 312 */
																															obj_t
																																BgL_pairz00_1298;
																															BgL_pairz00_1298 =
																																BgL_sourcesz00_957;
																															BgL_arg2847z00_1067
																																=
																																CAR(CAR
																																(BgL_pairz00_1298));
																														}
																														{	/* BackEnd/jvm.scm 308 */
																															obj_t
																																BgL_list2849z00_1069;
																															{	/* BackEnd/jvm.scm 308 */
																																obj_t
																																	BgL_arg2850z00_1070;
																																{	/* BackEnd/jvm.scm 308 */
																																	obj_t
																																		BgL_arg2851z00_1071;
																																	{	/* BackEnd/jvm.scm 308 */
																																		obj_t
																																			BgL_arg2852z00_1072;
																																		{	/* BackEnd/jvm.scm 308 */
																																			obj_t
																																				BgL_arg2854z00_1073;
																																			BgL_arg2854z00_1073
																																				=
																																				MAKE_PAIR
																																				(BGl_string2944z00zzbackend_jvmz00,
																																				BNIL);
																																			BgL_arg2852z00_1072
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2847z00_1067,
																																				BgL_arg2854z00_1073);
																																		}
																																		BgL_arg2851z00_1071
																																			=
																																			MAKE_PAIR
																																			(BGl_string2945z00zzbackend_jvmz00,
																																			BgL_arg2852z00_1072);
																																	}
																																	BgL_arg2850z00_1070
																																		=
																																		MAKE_PAIR
																																		(BgL_fmainz00_961,
																																		BgL_arg2851z00_1071);
																																}
																																BgL_list2849z00_1069
																																	=
																																	MAKE_PAIR
																																	(BGl_string2946z00zzbackend_jvmz00,
																																	BgL_arg2850z00_1070);
																															}
																															BgL_arg2843z00_1063
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list2849z00_1069);
																														}
																													}
																													BgL_arg2844z00_1064 =
																														MAKE_PAIR
																														(BgL_mainz00_960,
																														BgL_newzd2mainzd2_1021);
																													BGl_errorz00zz__errorz00
																														(BGl_string2917z00zzbackend_jvmz00,
																														BgL_arg2843z00_1063,
																														BgL_arg2844z00_1064);
																												}
																											else
																												{	/* BackEnd/jvm.scm 306 */
																													BFALSE;
																												}
																											{	/* BackEnd/jvm.scm 314 */
																												obj_t
																													BgL_arg2856z00_1074;
																												obj_t
																													BgL_arg2857z00_1075;
																												obj_t
																													BgL_arg2858z00_1076;
																												obj_t
																													BgL_arg2859z00_1077;
																												BgL_arg2856z00_1074 =
																													CDR
																													(BgL_sourcesz00_957);
																												{	/* BackEnd/jvm.scm 316 */
																													obj_t
																														BgL_arg2861z00_1078;
																													{	/* BackEnd/jvm.scm 316 */
																														obj_t
																															BgL_arg2862z00_1079;
																														{	/* BackEnd/jvm.scm 316 */
																															obj_t
																																BgL_arg2866z00_1083;
																															{	/* BackEnd/jvm.scm 317 */
																																obj_t
																																	BgL_pairz00_1303;
																																BgL_pairz00_1303
																																	=
																																	BgL_sourcesz00_957;
																																BgL_arg2866z00_1083
																																	=
																																	CAR(CAR
																																	(BgL_pairz00_1303));
																															}
																															BgL_arg2862z00_1079
																																=
																																string_append_3
																																(BGl_string2943z00zzbackend_jvmz00,
																																BgL_arg2866z00_1083,
																																BGl_string2943z00zzbackend_jvmz00);
																														}
																														{	/* BackEnd/jvm.scm 315 */
																															obj_t
																																BgL_list2863z00_1080;
																															{	/* BackEnd/jvm.scm 315 */
																																obj_t
																																	BgL_arg2864z00_1081;
																																BgL_arg2864z00_1081
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2862z00_1079,
																																	BNIL);
																																BgL_list2863z00_1080
																																	=
																																	MAKE_PAIR
																																	(BgL_namez00_1020,
																																	BgL_arg2864z00_1081);
																															}
																															BgL_arg2861z00_1078
																																=
																																BgL_list2863z00_1080;
																														}
																													}
																													BgL_arg2857z00_1075 =
																														MAKE_PAIR
																														(BgL_arg2861z00_1078,
																														BgL_clsz00_958);
																												}
																												{	/* BackEnd/jvm.scm 321 */
																													obj_t
																														BgL_pairz00_1309;
																													BgL_pairz00_1309 =
																														BgL_sourcesz00_957;
																													BgL_arg2858z00_1076 =
																														CAR(CAR
																														(BgL_pairz00_1309));
																												}
																												{	/* BackEnd/jvm.scm 322 */
																													obj_t
																														BgL_arg2868z00_1085;
																													{	/* BackEnd/jvm.scm 322 */
																														obj_t
																															BgL_arg2869z00_1086;
																														{	/* BackEnd/jvm.scm 322 */
																															obj_t
																																BgL_pairz00_1313;
																															BgL_pairz00_1313 =
																																BgL_expz00_1019;
																															BgL_arg2869z00_1086
																																=
																																CDR(CDR
																																(BgL_pairz00_1313));
																														}
																														BgL_arg2868z00_1085
																															=
																															BGl_findzd2librarieszd2zzengine_linkz00
																															(BgL_arg2869z00_1086);
																													}
																													BgL_arg2859z00_1077 =
																														bgl_append2
																														(BgL_arg2868z00_1085,
																														BgL_librariesz00_962);
																												}
																												{
																													obj_t
																														BgL_librariesz00_1719;
																													obj_t
																														BgL_fmainz00_1718;
																													obj_t
																														BgL_mainz00_1717;
																													obj_t
																														BgL_mainzd2modulezd2_1716;
																													obj_t BgL_clsz00_1715;

																													obj_t
																														BgL_sourcesz00_1714;
																													BgL_sourcesz00_1714 =
																														BgL_arg2856z00_1074;
																													BgL_clsz00_1715 =
																														BgL_arg2857z00_1075;
																													BgL_mainzd2modulezd2_1716
																														= BgL_namez00_1020;
																													BgL_mainz00_1717 =
																														BgL_newzd2mainzd2_1021;
																													BgL_fmainz00_1718 =
																														BgL_arg2858z00_1076;
																													BgL_librariesz00_1719
																														=
																														BgL_arg2859z00_1077;
																													BgL_librariesz00_962 =
																														BgL_librariesz00_1719;
																													BgL_fmainz00_961 =
																														BgL_fmainz00_1718;
																													BgL_mainz00_960 =
																														BgL_mainz00_1717;
																													BgL_mainzd2modulezd2_959
																														=
																														BgL_mainzd2modulezd2_1716;
																													BgL_clsz00_958 =
																														BgL_clsz00_1715;
																													BgL_sourcesz00_957 =
																														BgL_sourcesz00_1714;
																													goto
																														BgL_zc3anonymousza32779ze3z83_963;
																												}
																											}
																										}
																									else
																										{
																											obj_t
																												BgL_gzd21461zd2_1722;
																											BgL_gzd21461zd2_1722 =
																												CDR
																												(BgL_gzd21461zd2_1033);
																											BgL_gzd21461zd2_1033 =
																												BgL_gzd21461zd2_1722;
																											goto
																												BgL_zc3anonymousza32815ze3z83_1034;
																										}
																								}
																							else
																								{
																									obj_t BgL_gzd21461zd2_1724;

																									BgL_gzd21461zd2_1724 =
																										CDR(BgL_gzd21461zd2_1033);
																									BgL_gzd21461zd2_1033 =
																										BgL_gzd21461zd2_1724;
																									goto
																										BgL_zc3anonymousza32815ze3z83_1034;
																								}
																						}
																					else
																						{
																							obj_t BgL_gzd21461zd2_1726;

																							BgL_gzd21461zd2_1726 =
																								CDR(BgL_gzd21461zd2_1033);
																							BgL_gzd21461zd2_1033 =
																								BgL_gzd21461zd2_1726;
																							goto
																								BgL_zc3anonymousza32815ze3z83_1034;
																						}
																				}
																			else
																				{
																					obj_t BgL_gzd21461zd2_1728;

																					BgL_gzd21461zd2_1728 =
																						CDR(BgL_gzd21461zd2_1033);
																					BgL_gzd21461zd2_1033 =
																						BgL_gzd21461zd2_1728;
																					goto
																						BgL_zc3anonymousza32815ze3z83_1034;
																				}
																		}
																	else
																		{	/* BackEnd/jvm.scm 298 */
																			BgL_namez00_1023 =
																				CAR(CDR(BgL_expz00_1019));
																			{	/* BackEnd/jvm.scm 328 */
																				obj_t BgL_arg2870z00_1087;

																				{	/* BackEnd/jvm.scm 328 */
																					obj_t BgL_arg2872z00_1089;

																					obj_t BgL_arg2873z00_1090;

																					{	/* BackEnd/jvm.scm 328 */
																						obj_t BgL_arg2874z00_1091;

																						{	/* BackEnd/jvm.scm 328 */
																							obj_t BgL_arg2875z00_1092;

																							{	/* BackEnd/jvm.scm 328 */
																								obj_t BgL_pairz00_1317;

																								BgL_pairz00_1317 =
																									BgL_sourcesz00_957;
																								BgL_arg2875z00_1092 =
																									CDR(CAR(BgL_pairz00_1317));
																							}
																							BgL_arg2874z00_1091 =
																								BGl_prefixz00zz__osz00
																								(BgL_arg2875z00_1092);
																						}
																						BgL_arg2872z00_1089 =
																							BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00
																							(BgL_arg2874z00_1091);
																					}
																					BgL_arg2873z00_1090 =
																						BGl_filezd2separatorzd2zz__osz00();
																					BgL_arg2870z00_1087 =
																						BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																						(BgL_arg2872z00_1089,
																						CCHAR(BgL_arg2873z00_1090),
																						(char) (((unsigned char) '.')));
																				}
																				BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																					(BgL_namez00_1023,
																					BgL_arg2870z00_1087, BNIL);
																			}
																			{	/* BackEnd/jvm.scm 331 */
																				obj_t BgL_arg2876z00_1093;

																				obj_t BgL_arg2877z00_1094;

																				obj_t BgL_arg2878z00_1095;

																				BgL_arg2876z00_1093 =
																					CDR(BgL_sourcesz00_957);
																				{	/* BackEnd/jvm.scm 333 */
																					obj_t BgL_arg2879z00_1096;

																					{	/* BackEnd/jvm.scm 333 */
																						obj_t BgL_arg2880z00_1097;

																						{	/* BackEnd/jvm.scm 333 */
																							obj_t BgL_arg2884z00_1101;

																							{	/* BackEnd/jvm.scm 334 */
																								obj_t BgL_pairz00_1322;

																								BgL_pairz00_1322 =
																									BgL_sourcesz00_957;
																								BgL_arg2884z00_1101 =
																									CAR(CAR(BgL_pairz00_1322));
																							}
																							BgL_arg2880z00_1097 =
																								string_append_3
																								(BGl_string2943z00zzbackend_jvmz00,
																								BgL_arg2884z00_1101,
																								BGl_string2943z00zzbackend_jvmz00);
																						}
																						{	/* BackEnd/jvm.scm 332 */
																							obj_t BgL_list2881z00_1098;

																							{	/* BackEnd/jvm.scm 332 */
																								obj_t BgL_arg2882z00_1099;

																								BgL_arg2882z00_1099 =
																									MAKE_PAIR(BgL_arg2880z00_1097,
																									BNIL);
																								BgL_list2881z00_1098 =
																									MAKE_PAIR(BgL_namez00_1023,
																									BgL_arg2882z00_1099);
																							}
																							BgL_arg2879z00_1096 =
																								BgL_list2881z00_1098;
																					}}
																					BgL_arg2877z00_1094 =
																						MAKE_PAIR(BgL_arg2879z00_1096,
																						BgL_clsz00_958);
																				}
																				{	/* BackEnd/jvm.scm 339 */
																					obj_t BgL_arg2886z00_1103;

																					{	/* BackEnd/jvm.scm 339 */
																						obj_t BgL_arg2887z00_1104;

																						{	/* BackEnd/jvm.scm 339 */
																							obj_t BgL_pairz00_1328;

																							BgL_pairz00_1328 =
																								BgL_expz00_1019;
																							BgL_arg2887z00_1104 =
																								CDR(CDR(BgL_pairz00_1328));
																						}
																						BgL_arg2886z00_1103 =
																							BGl_findzd2librarieszd2zzengine_linkz00
																							(BgL_arg2887z00_1104);
																					}
																					BgL_arg2878z00_1095 =
																						bgl_append2(BgL_arg2886z00_1103,
																						BgL_librariesz00_962);
																				}
																				{
																					obj_t BgL_librariesz00_1752;

																					obj_t BgL_clsz00_1751;

																					obj_t BgL_sourcesz00_1750;

																					BgL_sourcesz00_1750 =
																						BgL_arg2876z00_1093;
																					BgL_clsz00_1751 = BgL_arg2877z00_1094;
																					BgL_librariesz00_1752 =
																						BgL_arg2878z00_1095;
																					BgL_librariesz00_962 =
																						BgL_librariesz00_1752;
																					BgL_clsz00_958 = BgL_clsz00_1751;
																					BgL_sourcesz00_957 =
																						BgL_sourcesz00_1750;
																					goto
																						BgL_zc3anonymousza32779ze3z83_963;
																				}
																			}
																		}
																}
															else
																{	/* BackEnd/jvm.scm 298 */
																BgL_tagzd21445zd2_1025:
																	{
																		obj_t BgL_sourcesz00_1756;

																		BgL_sourcesz00_1756 =
																			CDR(BgL_sourcesz00_957);
																		BgL_sourcesz00_957 = BgL_sourcesz00_1756;
																		goto BgL_zc3anonymousza32779ze3z83_963;
																	}
																}
														}
													else
														{	/* BackEnd/jvm.scm 298 */
															goto BgL_tagzd21445zd2_1025;
														}
												}
											else
												{	/* BackEnd/jvm.scm 298 */
													goto BgL_tagzd21445zd2_1025;
												}
										}
									}
								else
									{	/* BackEnd/jvm.scm 295 */
										obj_t BgL_arg2892z00_1109;

										{	/* BackEnd/jvm.scm 295 */
											obj_t BgL_pairz00_1333;

											BgL_pairz00_1333 = BgL_sourcesz00_957;
											BgL_arg2892z00_1109 = CAR(CAR(BgL_pairz00_1333));
										}
										return
											BGl_errorz00zz__errorz00
											(BGl_string2917z00zzbackend_jvmz00,
											BGl_string2947z00zzbackend_jvmz00, BgL_arg2892z00_1109);
									}
							}
					}
			}
		}
	}



/* <exit:2809> */
	obj_t BGl_zc3exitza32809ze3z83zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 287 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2540z00_1015;

			if (SET_EXIT(BgL_an_exit2540z00_1015))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2540z00_1015 = (void *) jmpbuf;
					{	/* BackEnd/jvm.scm 287 */

						PUSH_EXIT(BgL_an_exit2540z00_1015, ((long) 0));
						{	/* BackEnd/jvm.scm 285 */
							obj_t BgL_val2541z00_1016;

							BgL_val2541z00_1016 = BGl_compilerz00zzengine_compilerz00();
							POP_EXIT();
							return BgL_val2541z00_1016;
						}
					}
				}
		}
	}



/* backend-cnst-table-n2554 */
	obj_t BGl_backendzd2cnstzd2tablezd2n2554zd2zzbackend_jvmz00(obj_t
		BgL_envz00_1353, obj_t BgL_mez00_1354, obj_t BgL_offsetz00_1355)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 210 */
			return BGl_string2948z00zzbackend_jvmz00;
		}
	}



/* backend-link-jvm2552 */
	obj_t BGl_backendzd2linkzd2jvm2552z00zzbackend_jvmz00(obj_t BgL_envz00_1356,
		obj_t BgL_mez00_1357, obj_t BgL_resultz00_1358)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 203 */
			return BGl_jvmzd2ldzd2zzsaw_jvm_ldz00(BFALSE);
		}
	}



/* backend-compile-jvm2550 */
	obj_t BGl_backendzd2compilezd2jvm2550z00zzbackend_jvmz00(obj_t
		BgL_envz00_1359, obj_t BgL_mez00_1360)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 38 */
			{
				BgL_jvmz00_bglt BgL_mez00_799;

				BgL_mez00_799 = (BgL_jvmz00_bglt) (BgL_mez00_1360);
				{	/* BackEnd/jvm.scm 40 */
					obj_t BgL_list2684z00_803;

					{	/* BackEnd/jvm.scm 40 */
						obj_t BgL_arg2686z00_805;

						{	/* BackEnd/jvm.scm 40 */
							obj_t BgL_arg2688z00_807;

							BgL_arg2688z00_807 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg2686z00_805 =
								MAKE_PAIR(BGl_string2949z00zzbackend_jvmz00,
								BgL_arg2688z00_807);
						}
						BgL_list2684z00_803 =
							MAKE_PAIR(BGl_string2950z00zzbackend_jvmz00, BgL_arg2686z00_805);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2684z00_803);
				}
				BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
				BGl_za2currentzd2passza2zd2zzengine_passz00 =
					BGl_string2949z00zzbackend_jvmz00;
				{	/* BackEnd/jvm.scm 40 */
					obj_t BgL_g2517z00_808;

					obj_t BgL_g2518z00_809;

					{	/* BackEnd/jvm.scm 40 */
						obj_t BgL_list2698z00_823;

						BgL_list2698z00_823 =
							MAKE_PAIR(BGl_startzd2jvmzd2emissionz12zd2envzc0zzbackend_jvmz00,
							BNIL);
						BgL_g2517z00_808 = BgL_list2698z00_823;
					}
					BgL_g2518z00_809 = CNST_TABLE_REF(((long) 15));
					{
						obj_t BgL_hooksz00_811;

						obj_t BgL_hnamesz00_812;

						BgL_hooksz00_811 = BgL_g2517z00_808;
						BgL_hnamesz00_812 = BgL_g2518z00_809;
					BgL_zc3anonymousza32689ze3z83_813:
						if (NULLP(BgL_hooksz00_811))
							{	/* BackEnd/jvm.scm 40 */
								CNST_TABLE_REF(((long) 16));
							}
						else
							{	/* BackEnd/jvm.scm 40 */
								bool_t BgL_testz00_1780;

								{	/* BackEnd/jvm.scm 40 */
									obj_t BgL_fun2697z00_821;

									BgL_fun2697z00_821 = CAR(BgL_hooksz00_811);
									BgL_testz00_1780 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun2697z00_821)
										(BgL_fun2697z00_821, BEOA));
								}
								if (BgL_testz00_1780)
									{
										obj_t BgL_hnamesz00_1787;

										obj_t BgL_hooksz00_1785;

										BgL_hooksz00_1785 = CDR(BgL_hooksz00_811);
										BgL_hnamesz00_1787 = CDR(BgL_hnamesz00_812);
										BgL_hnamesz00_812 = BgL_hnamesz00_1787;
										BgL_hooksz00_811 = BgL_hooksz00_1785;
										goto BgL_zc3anonymousza32689ze3z83_813;
									}
								else
									{	/* BackEnd/jvm.scm 40 */
										BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string2949z00zzbackend_jvmz00,
											BGl_string2951z00zzbackend_jvmz00,
											CAR(BgL_hnamesz00_812));
									}
							}
					}
				}
				{	/* BackEnd/jvm.scm 41 */
					obj_t BgL_arg2702z00_827;

					BgL_arg2702z00_827 =
						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
						(BGl_za2moduleza2z00zzmodule_modulez00);
					{	/* BackEnd/jvm.scm 41 */
						obj_t BgL_list2704z00_829;

						{	/* BackEnd/jvm.scm 41 */
							obj_t BgL_arg2705z00_830;

							{	/* BackEnd/jvm.scm 41 */
								obj_t BgL_arg2706z00_831;

								{	/* BackEnd/jvm.scm 41 */
									obj_t BgL_arg2707z00_832;

									{	/* BackEnd/jvm.scm 41 */
										obj_t BgL_arg2708z00_833;

										{	/* BackEnd/jvm.scm 41 */
											obj_t BgL_arg2709z00_834;

											BgL_arg2709z00_834 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg2708z00_833 =
												MAKE_PAIR(BGl_string2952z00zzbackend_jvmz00,
												BgL_arg2709z00_834);
										}
										BgL_arg2707z00_832 =
											MAKE_PAIR(BgL_arg2702z00_827, BgL_arg2708z00_833);
									}
									BgL_arg2706z00_831 =
										MAKE_PAIR(BGl_string2953z00zzbackend_jvmz00,
										BgL_arg2707z00_832);
								}
								BgL_arg2705z00_830 =
									MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
									BgL_arg2706z00_831);
							}
							BgL_list2704z00_829 =
								MAKE_PAIR(BGl_string2954z00zzbackend_jvmz00,
								BgL_arg2705z00_830);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
							BgL_list2704z00_829);
				}}
				{	/* BackEnd/jvm.scm 44 */
					obj_t BgL_arg2710z00_835;

					{	/* BackEnd/jvm.scm 44 */
						obj_t BgL_arg2711z00_836;

						BgL_arg2711z00_836 =
							BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
							(BGl_za2moduleza2z00zzmodule_modulez00);
						BgL_arg2710z00_835 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2711z00_836));
					}
					((((BgL_jvmz00_bglt) CREF(BgL_mez00_799))->BgL_qnamez00) =
						((obj_t) BgL_arg2710z00_835), BUNSPEC);
				}
				{	/* BackEnd/jvm.scm 47 */
					bool_t BgL_testz00_1805;

					if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
						{	/* BackEnd/jvm.scm 47 */
							BgL_testz00_1805 = ((bool_t) 0);
						}
					else
						{	/* BackEnd/jvm.scm 47 */
							BgL_testz00_1805 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BGl_za2passza2z00zzengine_paramz00,
									CNST_TABLE_REF(((long) 17))));
						}
					if (BgL_testz00_1805)
						{	/* BackEnd/jvm.scm 47 */
							BGl_za2mainza2z00zzmodule_modulez00 =
								BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
						}
					else
						{	/* BackEnd/jvm.scm 47 */
							BFALSE;
						}
				}
				BGl_jvmzd2checkzd2packagez00zzbackend_jvmz00
					(BGl_za2moduleza2z00zzmodule_modulez00,
					BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00);
				{	/* BackEnd/jvm.scm 75 */
					obj_t BgL_lza2za2_838;

					obj_t BgL_bnamez00_839;

					BgL_lza2za2_838 =
						BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_mez00_799);
					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 10))))
						{	/* BackEnd/jvm.scm 77 */
							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/jvm.scm 78 */
									BgL_bnamez00_839 =
										BGl_addsuffixz00zzbackend_jvmz00(BGl_prefixz00zz__osz00
										(BGl_basenamez00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00))));
								}
							else
								{	/* BackEnd/jvm.scm 78 */
									BgL_bnamez00_839 = BGl_string2955z00zzbackend_jvmz00;
								}
						}
					else
						{	/* BackEnd/jvm.scm 77 */
							if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
								{	/* BackEnd/jvm.scm 81 */
									BgL_bnamez00_839 =
										BGl_addsuffixz00zzbackend_jvmz00(BGl_prefixz00zz__osz00
										(BGl_basenamez00zz__osz00
											(BGl_za2destza2z00zzengine_paramz00)));
								}
							else
								{	/* BackEnd/jvm.scm 81 */
									if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
										{	/* BackEnd/jvm.scm 82 */
											BgL_bnamez00_839 =
												BGl_addsuffixz00zzbackend_jvmz00(BGl_prefixz00zz__osz00
												(BGl_basenamez00zz__osz00(CAR
														(BGl_za2srczd2filesza2zd2zzengine_paramz00))));
										}
									else
										{	/* BackEnd/jvm.scm 82 */
											BgL_bnamez00_839 = BFALSE;
										}
								}
						}
					BGl_emitz00zzbackend_jvmz00(CAR(BgL_lza2za2_838), BgL_bnamez00_839);
					{	/* BackEnd/jvm.scm 88 */
						obj_t BgL_g2544z00_841;

						BgL_g2544z00_841 = CDR(BgL_lza2za2_838);
						{
							obj_t BgL_l2542z00_843;

							BgL_l2542z00_843 = BgL_g2544z00_841;
						BgL_zc3anonymousza32714ze3z83_844:
							if (PAIRP(BgL_l2542z00_843))
								{	/* BackEnd/jvm.scm 89 */
									{	/* BackEnd/jvm.scm 88 */
										obj_t BgL_cfz00_846;

										BgL_cfz00_846 = CAR(BgL_l2542z00_843);
										BGl_emitz00zzbackend_jvmz00(BgL_cfz00_846,
											BGl_jasnamez00zzbackend_jvmz00(BgL_cfz00_846));
									}
									{
										obj_t BgL_l2542z00_1842;

										BgL_l2542z00_1842 = CDR(BgL_l2542z00_843);
										BgL_l2542z00_843 = BgL_l2542z00_1842;
										goto BgL_zc3anonymousza32714ze3z83_844;
									}
								}
							else
								{	/* BackEnd/jvm.scm 89 */
									((bool_t) 1);
								}
						}
					}
					{	/* BackEnd/jvm.scm 90 */
						obj_t BgL_arg2718z00_850;

						BgL_arg2718z00_850 = CNST_TABLE_REF(((long) 18));
						BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg2718z00_850,
							BGl_proc2956z00zzbackend_jvmz00);
					}
					{	/* BackEnd/jvm.scm 91 */
						obj_t BgL_arg2721z00_854;

						BgL_arg2721z00_854 = CNST_TABLE_REF(((long) 8));
						BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg2721z00_854,
							BGl_proc2957z00zzbackend_jvmz00);
					}
					{	/* BackEnd/jvm.scm 92 */
						obj_t BgL_arg2724z00_858;

						BgL_arg2724z00_858 = CNST_TABLE_REF(((long) 7));
						return
							BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg2724z00_858,
							BGl_proc2958z00zzbackend_jvmz00);
					}
				}
			}
		}
	}



/* <exit:2751> */
	obj_t BGl_zc3exitza32751ze3z83zzbackend_jvmz00(obj_t BgL_cnamez00_1383,
		obj_t BgL_portz00_1382, obj_t BgL_classfilez00_1381)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 67 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2522z00_894;

			if (SET_EXIT(BgL_an_exit2522z00_894))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2522z00_894 = (void *) jmpbuf;
					{	/* BackEnd/jvm.scm 67 */

						PUSH_EXIT(BgL_an_exit2522z00_894, ((long) 1));
						{	/* BackEnd/jvm.scm 67 */
							obj_t BgL_an_exitd2523z00_895;

							BgL_an_exitd2523z00_895 = BGL_EXITD_TOP_AS_OBJ();
							{	/* BackEnd/jvm.scm 67 */
								obj_t BgL_res2525z00_898;

								{	/* BackEnd/jvm.scm 67 */
									obj_t BgL_err2520z00_899;

									obj_t BgL_ohs2519z00_900;

									BgL_err2520z00_899 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs2519z00_900 = BGL_ERROR_HANDLER_GET();
									{	/* BackEnd/jvm.scm 67 */
										obj_t BgL_val2526z00_901;

										BgL_val2526z00_901 =
											BGl_zc3exitza32757ze3z83zzbackend_jvmz00(BgL_portz00_1382,
											BgL_ohs2519z00_900, BgL_an_exitd2523z00_895,
											BgL_err2520z00_899, BgL_classfilez00_1381);
										BGL_ERROR_HANDLER_SET(BgL_ohs2519z00_900);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err2520z00_899)))
											{	/* BackEnd/jvm.scm 70 */
												obj_t BgL_arg2753z00_903;

												{	/* BackEnd/jvm.scm 70 */
													obj_t BgL_ez00_904;

													BgL_ez00_904 = CDR(BgL_err2520z00_899);
													{	/* BackEnd/jvm.scm 69 */
														char *BgL_stringz00_1229;

														BgL_stringz00_1229 =
															BSTRING_TO_STRING(BgL_cnamez00_1383);
														if (unlink(BgL_stringz00_1229))
															{	/* BackEnd/jvm.scm 69 */
																((bool_t) 0);
															}
														else
															{	/* BackEnd/jvm.scm 69 */
																((bool_t) 1);
															}
													}
													BgL_arg2753z00_903 =
														BGl_raisez00zz__errorz00(BgL_ez00_904);
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd2523z00_895, BgL_arg2753z00_903);
											}
										else
											{	/* BackEnd/jvm.scm 67 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val2526z00_901)))
											{	/* BackEnd/jvm.scm 67 */
												BgL_res2525z00_898 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val2526z00_901), CDR(BgL_val2526z00_901));
											}
										else
											{	/* BackEnd/jvm.scm 67 */
												BgL_res2525z00_898 = BgL_val2526z00_901;
											}
									}
								}
								POP_EXIT();
								return BgL_res2525z00_898;
							}
						}
					}
				}
		}
	}



/* <exit:2764> */
	obj_t BGl_zc3exitza32764ze3z83zzbackend_jvmz00(obj_t BgL_portz00_1385,
		obj_t BgL_classfilez00_1384)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 73 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2530z00_921;

			if (SET_EXIT(BgL_an_exit2530z00_921))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2530z00_921 = (void *) jmpbuf;
					{	/* BackEnd/jvm.scm 73 */

						PUSH_EXIT(BgL_an_exit2530z00_921, ((long) 0));
						{	/* BackEnd/jvm.scm 72 */
							obj_t BgL_val2531z00_922;

							BgL_val2531z00_922 =
								BGl_jvmzd2aszd2zzjas_asz00(BgL_classfilez00_1384,
								BgL_portz00_1385);
							POP_EXIT();
							return BgL_val2531z00_922;
						}
					}
				}
		}
	}



/* <exit:2757> */
	obj_t BGl_zc3exitza32757ze3z83zzbackend_jvmz00(obj_t BgL_portz00_1390,
		obj_t BgL_ohs2519z00_1389, obj_t BgL_an_exitd2523z00_1388,
		obj_t BgL_err2520z00_1387, obj_t BgL_classfilez00_1386)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 67 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2527z00_909;

			if (SET_EXIT(BgL_an_exit2527z00_909))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2527z00_909 = (void *) jmpbuf;
					{	/* BackEnd/jvm.scm 67 */

						PUSH_EXIT(BgL_an_exit2527z00_909, ((long) 0));
						{	/* BackEnd/jvm.scm 67 */
							obj_t BgL_val2528z00_910;

							{	/* BackEnd/jvm.scm 67 */
								obj_t BgL_arg2758z00_911;

								{	/* BackEnd/jvm.scm 67 */
									obj_t BgL_zc3anonymousza32760ze3z83_1346;

									BgL_zc3anonymousza32760ze3z83_1346 =
										make_fx_procedure
										(BGl_zc3anonymousza32760ze3z83zzbackend_jvmz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32760ze3z83_1346,
										(int) (((long) 0)), BgL_err2520z00_1387);
									PROCEDURE_SET(BgL_zc3anonymousza32760ze3z83_1346,
										(int) (((long) 1)), BgL_an_exitd2523z00_1388);
									BgL_arg2758z00_911 =
										MAKE_PAIR(BgL_zc3anonymousza32760ze3z83_1346,
										BgL_ohs2519z00_1389);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2758z00_911);
								BUNSPEC;
							}
							{	/* BackEnd/jvm.scm 71 */
								obj_t BgL_val2529z00_916;

								BgL_val2529z00_916 =
									BGl_zc3exitza32764ze3z83zzbackend_jvmz00(BgL_portz00_1390,
									BgL_classfilez00_1386);
								close_binary_port(BgL_portz00_1390);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val2529z00_916)))
									{	/* BackEnd/jvm.scm 73 */
										BgL_val2528z00_910 =
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val2529z00_916), CDR(BgL_val2529z00_916));
									}
								else
									{	/* BackEnd/jvm.scm 73 */
										BgL_val2528z00_910 = BgL_val2529z00_916;
									}
							}
							POP_EXIT();
							return BgL_val2528z00_910;
						}
					}
				}
		}
	}



/* emit */
	obj_t BGl_emitz00zzbackend_jvmz00(obj_t BgL_classfilez00_874,
		obj_t BgL_destz00_875)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 73 */
			{	/* BackEnd/jvm.scm 51 */
				obj_t BgL_dirz00_877;

				BgL_dirz00_877 = BGl_za2jvmzd2dirzd2nameza2z00zzbackend_jvmz00;
				if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 8))))
					{	/* BackEnd/jvm.scm 53 */
						obj_t BgL_portz00_879;

						if (STRINGP(BgL_destz00_875))
							{	/* BackEnd/jvm.scm 56 */
								obj_t BgL_arg2745z00_883;

								BgL_arg2745z00_883 =
									string_append_3(BgL_dirz00_877,
									BGl_string2959z00zzbackend_jvmz00, BgL_destz00_875);
								{	/* BackEnd/jvm.scm 55 */

									BgL_portz00_879 =
										BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_arg2745z00_883, BTRUE);
								}
							}
						else
							{	/* BackEnd/jvm.scm 54 */
								obj_t BgL_res2900z00_1213;

								{	/* BackEnd/jvm.scm 54 */
									obj_t BgL_auxz00_1908;

									BgL_auxz00_1908 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2900z00_1213 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1908);
								}
								BgL_portz00_879 = BgL_res2900z00_1213;
							}
						BGl_jvmasdumpz00zzbackend_jvmz00(BgL_classfilez00_874,
							BgL_portz00_879);
						{	/* BackEnd/jvm.scm 58 */
							bool_t BgL_testz00_1912;

							{	/* BackEnd/jvm.scm 58 */
								obj_t BgL_arg2742z00_881;

								{	/* BackEnd/jvm.scm 58 */
									obj_t BgL_res2901z00_1215;

									{	/* BackEnd/jvm.scm 58 */
										obj_t BgL_auxz00_1913;

										BgL_auxz00_1913 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2901z00_1215 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1913);
									}
									BgL_arg2742z00_881 = BgL_res2901z00_1215;
								}
								BgL_testz00_1912 = (BgL_portz00_879 == BgL_arg2742z00_881);
							}
							if (BgL_testz00_1912)
								{	/* BackEnd/jvm.scm 58 */
									return BFALSE;
								}
							else
								{	/* BackEnd/jvm.scm 58 */
									return bgl_close_output_port(BgL_portz00_879);
								}
						}
					}
				else
					{	/* BackEnd/jvm.scm 60 */
						obj_t BgL_cnamez00_886;

						if (STRINGP(BgL_destz00_875))
							{	/* BackEnd/jvm.scm 60 */
								BgL_cnamez00_886 =
									string_append_3(BgL_dirz00_877,
									BGl_string2959z00zzbackend_jvmz00, BgL_destz00_875);
							}
						else
							{	/* BackEnd/jvm.scm 60 */
								BgL_cnamez00_886 =
									string_append(BgL_dirz00_877,
									BGl_string2960z00zzbackend_jvmz00);
							}
						{	/* BackEnd/jvm.scm 60 */
							obj_t BgL_portz00_887;

							BgL_portz00_887 =
								BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00
								(BgL_cnamez00_886);
							{	/* BackEnd/jvm.scm 63 */

								{	/* BackEnd/jvm.scm 64 */
									obj_t BgL_list2746z00_888;

									{	/* BackEnd/jvm.scm 64 */
										obj_t BgL_arg2748z00_890;

										{	/* BackEnd/jvm.scm 64 */
											obj_t BgL_arg2749z00_891;

											BgL_arg2749z00_891 =
												MAKE_PAIR(BGl_string2961z00zzbackend_jvmz00, BNIL);
											BgL_arg2748z00_890 =
												MAKE_PAIR(BgL_cnamez00_886, BgL_arg2749z00_891);
										}
										BgL_list2746z00_888 =
											MAKE_PAIR(BGl_string2962z00zzbackend_jvmz00,
											BgL_arg2748z00_890);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list2746z00_888);
								}
								if (BINARY_PORTP(BgL_portz00_887))
									{	/* BackEnd/jvm.scm 65 */
										BFALSE;
									}
								else
									{	/* BackEnd/jvm.scm 65 */
										BGl_errorz00zz__errorz00(BGl_string2963z00zzbackend_jvmz00,
											BGl_string2964z00zzbackend_jvmz00, BgL_cnamez00_886);
									}
								return
									BGl_zc3exitza32751ze3z83zzbackend_jvmz00(BgL_cnamez00_886,
									BgL_portz00_887, BgL_classfilez00_874);
							}
						}
					}
			}
		}
	}



/* <anonymous:2726> */
	obj_t BGl_zc3anonymousza32726ze3z83zzbackend_jvmz00(obj_t BgL_envz00_1361)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 92 */
			{

				return CNST_TABLE_REF(((long) 19));
		}}
	}



/* <anonymous:2723> */
	obj_t BGl_zc3anonymousza32723ze3z83zzbackend_jvmz00(obj_t BgL_envz00_1362)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 91 */
			{

				return CNST_TABLE_REF(((long) 19));
		}}
	}



/* <anonymous:2720> */
	obj_t BGl_zc3anonymousza32720ze3z83zzbackend_jvmz00(obj_t BgL_envz00_1363)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 90 */
			{

				return CNST_TABLE_REF(((long) 19));
		}}
	}



/* <anonymous:2760> */
	obj_t BGl_zc3anonymousza32760ze3z83zzbackend_jvmz00(obj_t BgL_envz00_1364,
		obj_t BgL_ez00_1367)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 67 */
			{	/* BackEnd/jvm.scm 67 */
				obj_t BgL_err2520z00_1365;

				obj_t BgL_an_exitd2523z00_1366;

				BgL_err2520z00_1365 =
					PROCEDURE_REF(BgL_envz00_1364, (int) (((long) 0)));
				BgL_an_exitd2523z00_1366 =
					PROCEDURE_REF(BgL_envz00_1364, (int) (((long) 1)));
				{
					obj_t BgL_ez00_913;

					BgL_ez00_913 = BgL_ez00_1367;
					SET_CAR(BgL_err2520z00_1365, BTRUE);
					SET_CDR(BgL_err2520z00_1365, BgL_ez00_913);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2523z00_1366,
						BgL_ez00_913);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm.scm 1 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 392051205),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 450629069),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 69061048),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 179083793),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzjas_asz00(((long) 29862157),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzjas_peepz00(((long) 442782109),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(((long) 507437104),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_ldz00(((long) 499088871),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(((long) 293010567),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
			return
				BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string2965z00zzbackend_jvmz00));
		}
	}

#ifdef __cplusplus
}
#endif
