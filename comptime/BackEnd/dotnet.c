/*===========================================================================*/
/*   (BackEnd/dotnet.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/dotnet.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_dotnetz00_bgl
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
		obj_t BgL_outz00;
		obj_t BgL_qnamez00;
	}                *BgL_dotnetz00_bglt;


	static obj_t BGl_dotnetzd2externalzd2pnetzd2asmzd2zzbackend_dotnetz00(obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00;
	static BgL_dotnetz00_bglt
		BGl_buildzd2dotnetzd2backendz00zzbackend_dotnetz00();
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_dotnetz00 = BUNSPEC;
	extern obj_t BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	static obj_t BGl_zc3exitza32793ze3z83zzbackend_dotnetz00();
	static obj_t BGl__buildzd2dotnetzd2backendz00zzbackend_dotnetz00(obj_t);
	extern obj_t BGl_za2dotnetzd2externalzd2asmzd2styleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t BGl_genericzd2initzd2zzbackend_dotnetz00();
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_dotnetz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_backendzd2linkzd2objects2496z00zzbackend_dotnetz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_dotnetz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl__startzd2dotnetzd2emissionz12z12zzbackend_dotnetz00(obj_t);
	static obj_t BGl_startzd2dotnetzd2emissionz12z12zzbackend_dotnetz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_dotnetz00();
	BGL_IMPORT bool_t directoryp(char *);
	extern obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	extern BgL_dotnetz00_bglt BGl_makezd2dotnetzd2zzbackend_dotnet_classz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	extern obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t, obj_t);
	extern obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	extern obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	extern obj_t BGl_checkzd2msilzd2inlinesz00zzmsil_inlinez00();
	extern obj_t BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00;
	extern obj_t BGl_dotnetzd2ldzd2zzmsil_ldz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_dotnetz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_dotnetz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_emitz00zzbackend_dotnetz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_zc3anonymousza32736ze3z83zzbackend_dotnetz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_za2dotnetzd2usezd2externalzd2asmza2zd2zzengine_paramz00;
	static obj_t BGl_zc3anonymousza32739ze3z83zzbackend_dotnetz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_backendzd2compilezd2dotn2490z00zzbackend_dotnetz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_backendzd2linkzd2dotnet2492z00zzbackend_dotnetz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_dotnetzd2externalzd2asmz00zzbackend_dotnetz00(obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_msilzd2compilezd2zzmsil_compilez00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl__dotnetzd2externalzd2pnetzd2asmzd2zzbackend_dotnetz00(obj_t,
		obj_t);
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filezd2separatorzd2zz__osz00();
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_backendzd2checkzd2inline2498z00zzbackend_dotnetz00(obj_t,
		obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_dotnetz00();
	static obj_t BGl_backendzd2cnstzd2tablezd2n2494zd2zzbackend_dotnetz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2dotnetzd2externalzd2asmsza2z00zzbackend_dotnetz00 =
		BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzbackend_dotnetz00();
	extern obj_t BGl_dotnetz00zzbackend_dotnet_classz00;
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
	static obj_t BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00 = BUNSPEC;
	extern obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t, bool_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[17];


	extern obj_t BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2914z00zzbackend_dotnetz00,
		BgL_bgl_backendza7d2compil2946za7,
		BGl_backendzd2compilezd2dotn2490z00zzbackend_dotnetz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2916z00zzbackend_dotnetz00,
		BgL_bgl_backendza7d2linkza7d2947z00,
		BGl_backendzd2linkzd2dotnet2492z00zzbackend_dotnetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2918z00zzbackend_dotnetz00,
		BgL_bgl_backendza7d2cnstza7d2948z00,
		BGl_backendzd2cnstzd2tablezd2n2494zd2zzbackend_dotnetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2920z00zzbackend_dotnetz00,
		BgL_bgl_backendza7d2linkza7d2949z00,
		BGl_backendzd2linkzd2objects2496z00zzbackend_dotnetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2922z00zzbackend_dotnetz00,
		BgL_bgl_backendza7d2checkza72950z00,
		BGl_backendzd2checkzd2inline2498z00zzbackend_dotnetz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2940z00zzbackend_dotnetz00,
		BgL_bgl_za7c3anonymousza7a322951z00,
		BGl_zc3anonymousza32736ze3z83zzbackend_dotnetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2941z00zzbackend_dotnetz00,
		BgL_bgl_za7c3anonymousza7a322952z00,
		BGl_zc3anonymousza32739ze3z83zzbackend_dotnetz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2compilezd2envz00zzbackend_backendz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_startzd2dotnetzd2emissionz12zd2envzc0zzbackend_dotnetz00,
		BgL_bgl__startza7d2dotnetza72953z00,
		BGl__startzd2dotnetzd2emissionz12z12zzbackend_dotnetz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2900z00zzbackend_dotnetz00,
		BgL_bgl_string2900za700za7za7b2954za7, "jheap", 5);
	      DEFINE_STRING(BGl_string2901z00zzbackend_dotnetz00,
		BgL_bgl_string2901za700za7za7b2955za7, "", 0);
	      DEFINE_STRING(BGl_string2902z00zzbackend_dotnetz00,
		BgL_bgl_string2902za700za7za7b2956za7, "start-dotnet-emission!", 22);
	      DEFINE_STRING(BGl_string2903z00zzbackend_dotnetz00,
		BgL_bgl_string2903za700za7za7b2957za7,
		"Can't write dest file because directory doesn't exist", 53);
	      DEFINE_STRING(BGl_string2904z00zzbackend_dotnetz00,
		BgL_bgl_string2904za700za7za7b2958za7, " ", 1);
	      DEFINE_STRING(BGl_string2905z00zzbackend_dotnetz00,
		BgL_bgl_string2905za700za7za7b2959za7, "Unknown linker style, supported: ",
		33);
	      DEFINE_STRING(BGl_string2906z00zzbackend_dotnetz00,
		BgL_bgl_string2906za700za7za7b2960za7, "asm (dotnet)", 12);
	      DEFINE_STRING(BGl_string2907z00zzbackend_dotnetz00,
		BgL_bgl_string2907za700za7za7b2961za7, ".il", 3);
	      DEFINE_STRING(BGl_string2908z00zzbackend_dotnetz00,
		BgL_bgl_string2908za700za7za7b2962za7, ")", 1);
	      DEFINE_STRING(BGl_string2898z00zzbackend_dotnetz00,
		BgL_bgl_string2898za700za7za7b2963za7, ".", 1);
	      DEFINE_STRING(BGl_string2910z00zzbackend_dotnetz00,
		BgL_bgl_string2910za700za7za7b2964za7, "      [", 7);
	      DEFINE_STRING(BGl_string2909z00zzbackend_dotnetz00,
		BgL_bgl_string2909za700za7za7b2965za7, "   . ilasm (", 12);
	      DEFINE_STRING(BGl_string2899z00zzbackend_dotnetz00,
		BgL_bgl_string2899za700za7za7b2966za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2911z00zzbackend_dotnetz00,
		BgL_bgl_string2911za700za7za7b2967za7, "ilasm", 5);
	      DEFINE_STRING(BGl_string2912z00zzbackend_dotnetz00,
		BgL_bgl_string2912za700za7za7b2968za7, "dotnetmain", 10);
	      DEFINE_STRING(BGl_string2913z00zzbackend_dotnetz00,
		BgL_bgl_string2913za700za7za7b2969za7, ".bgl", 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_buildzd2dotnetzd2backendzd2envzd2zzbackend_dotnetz00,
		BgL_bgl__buildza7d2dotnetza72970z00,
		BGl__buildzd2dotnetzd2backendz00zzbackend_dotnetz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2915z00zzbackend_dotnetz00,
		BgL_bgl_string2915za700za7za7b2971za7, "backend-compile", 15);
	      DEFINE_STRING(BGl_string2917z00zzbackend_dotnetz00,
		BgL_bgl_string2917za700za7za7b2972za7, "backend-link", 12);
	      DEFINE_STRING(BGl_string2919z00zzbackend_dotnetz00,
		BgL_bgl_string2919za700za7za7b2973za7, "backend-cnst-table-name", 23);
	      DEFINE_STRING(BGl_string2921z00zzbackend_dotnetz00,
		BgL_bgl_string2921za700za7za7b2974za7, "backend-link-objects", 20);
	      DEFINE_STRING(BGl_string2923z00zzbackend_dotnetz00,
		BgL_bgl_string2923za700za7za7b2975za7, "backend-check-inlines", 21);
	      DEFINE_STRING(BGl_string2924z00zzbackend_dotnetz00,
		BgL_bgl_string2924za700za7za7b2976za7, " -- ", 4);
	      DEFINE_STRING(BGl_string2925z00zzbackend_dotnetz00,
		BgL_bgl_string2925za700za7za7b2977za7, "No source file found", 20);
	      DEFINE_STRING(BGl_string2926z00zzbackend_dotnetz00,
		BgL_bgl_string2926za700za7za7b2978za7, "link", 4);
	      DEFINE_STRING(BGl_string2927z00zzbackend_dotnetz00,
		BgL_bgl_string2927za700za7za7b2979za7, ".obj", 4);
	      DEFINE_STRING(BGl_string2928z00zzbackend_dotnetz00,
		BgL_bgl_string2928za700za7za7b2980za7, "\"", 1);
	      DEFINE_STRING(BGl_string2930z00zzbackend_dotnetz00,
		BgL_bgl_string2930za700za7za7b2981za7, "Redeclaration of the main (files ",
		33);
	      DEFINE_STRING(BGl_string2929z00zzbackend_dotnetz00,
		BgL_bgl_string2929za700za7za7b2982za7, " and ", 5);
	      DEFINE_STRING(BGl_string2931z00zzbackend_dotnetz00,
		BgL_bgl_string2931za700za7za7b2983za7, "Illegal file", 12);
	      DEFINE_STRING(BGl_string2932z00zzbackend_dotnetz00,
		BgL_bgl_string2932za700za7za7b2984za7, "__cnst", 6);
	      DEFINE_STRING(BGl_string2933z00zzbackend_dotnetz00,
		BgL_bgl_string2933za700za7za7b2985za7, ".Net (saw)", 10);
	      DEFINE_STRING(BGl_string2934z00zzbackend_dotnetz00,
		BgL_bgl_string2934za700za7za7b2986za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2935z00zzbackend_dotnetz00,
		BgL_bgl_string2935za700za7za7b2987za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2936z00zzbackend_dotnetz00,
		BgL_bgl_string2936za700za7za7b2988za7, "]", 1);
	      DEFINE_STRING(BGl_string2937z00zzbackend_dotnetz00,
		BgL_bgl_string2937za700za7za7b2989za7, " qualified type name: ", 22);
	      DEFINE_STRING(BGl_string2938z00zzbackend_dotnetz00,
		BgL_bgl_string2938za700za7za7b2990za7, "      [module: ", 15);
	      DEFINE_STRING(BGl_string2939z00zzbackend_dotnetz00,
		BgL_bgl_string2939za700za7za7b2991za7, "a.class", 7);
	      DEFINE_STRING(BGl_string2942z00zzbackend_dotnetz00,
		BgL_bgl_string2942za700za7za7b2992za7, "backend_dotnet", 14);
	      DEFINE_STRING(BGl_string2943z00zzbackend_dotnetz00,
		BgL_bgl_string2943za700za7za7b2993za7,
		"done ok cc il (ld distrib) pass-started (start-dotnet-emission!) main module library now ld (java) jvm bigloo-.net pnet .net ",
		125);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_dotnetzd2externalzd2pnetzd2asmzd2envz00zzbackend_dotnetz00,
		BgL_bgl__dotnetza7d2extern2994za7,
		BGl__dotnetzd2externalzd2pnetzd2asmzd2zzbackend_dotnetz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00;
	extern obj_t BGl_backendzd2linkzd2envz00zzbackend_backendz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_dotnetz00(long
		BgL_checksumz00_1259, char *BgL_fromz00_1260)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_dotnetz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_dotnetz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_dotnetz00();
					BGl_cnstzd2initzd2zzbackend_dotnetz00();
					BGl_importedzd2moduleszd2initz00zzbackend_dotnetz00();
					BGl_methodzd2initzd2zzbackend_dotnetz00();
					BGl_toplevelzd2initzd2zzbackend_dotnetz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 1 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0),
				"backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_dotnet");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_dotnet");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 1 */
			{	/* BackEnd/dotnet.scm 1 */
				obj_t BgL_cportz00_1247;

				BgL_cportz00_1247 =
					bgl_open_input_string(BGl_string2943z00zzbackend_dotnetz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1248;

					BgL_iz00_1248 = ((long) 16);
				BgL_loopz00_1249:
					if ((BgL_iz00_1248 == ((long) -1)))
						{	/* BackEnd/dotnet.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/dotnet.scm 1 */
							{	/* BackEnd/dotnet.scm 1 */
								obj_t BgL_arg2945z00_1251;

								{	/* BackEnd/dotnet.scm 1 */

									{	/* BackEnd/dotnet.scm 1 */
										obj_t BgL_locationz00_1253;

										BgL_locationz00_1253 = BBOOL(((bool_t) 0));
										{	/* BackEnd/dotnet.scm 1 */

											BgL_arg2945z00_1251 =
												BGl_readz00zz__readerz00(BgL_cportz00_1247,
												BgL_locationz00_1253);
										}
									}
								}
								{	/* BackEnd/dotnet.scm 1 */
									int BgL_auxz00_1283;

									BgL_auxz00_1283 = (int) (BgL_iz00_1248);
									CNST_TABLE_SET(BgL_auxz00_1283, BgL_arg2945z00_1251);
							}}
							{	/* BackEnd/dotnet.scm 1 */
								int BgL_auxz00_1254;

								BgL_auxz00_1254 = (int) ((BgL_iz00_1248 - ((long) 1)));
								{
									long BgL_iz00_1288;

									BgL_iz00_1288 = (long) (BgL_auxz00_1254);
									BgL_iz00_1248 = BgL_iz00_1288;
									goto BgL_loopz00_1249;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 1 */
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						0)), BGl_buildzd2dotnetzd2backendzd2envzd2zzbackend_dotnetz00);
			BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00 =
				BGl_string2898z00zzbackend_dotnetz00;
			{	/* BackEnd/dotnet.scm 121 */
				obj_t BgL_arg2503z00_518;

				BgL_arg2503z00_518 =
					MAKE_PAIR(CNST_TABLE_REF(((long) 1)),
					BGl_dotnetzd2externalzd2pnetzd2asmzd2envz00zzbackend_dotnetz00);
				{	/* BackEnd/dotnet.scm 121 */
					obj_t BgL_list2504z00_519;

					BgL_list2504z00_519 = MAKE_PAIR(BgL_arg2503z00_518, BNIL);
					BGl_za2dotnetzd2externalzd2asmsza2z00zzbackend_dotnetz00 =
						BgL_list2504z00_519;
			}}
			return BUNSPEC;
		}
	}



/* build-dotnet-backend */
	BgL_dotnetz00_bglt BGl_buildzd2dotnetzd2backendz00zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 32 */
			{	/* BackEnd/dotnet.scm 34 */
				obj_t BgL_arg2505z00_520;

				obj_t BgL_arg2523z00_521;

				obj_t BgL_arg2557z00_530;

				obj_t BgL_arg2558z00_531;

				obj_t BgL_arg2562z00_535;

				BgL_arg2505z00_520 = CNST_TABLE_REF(((long) 0));
				BgL_arg2523z00_521 = CNST_TABLE_REF(((long) 2));
				BgL_arg2557z00_530 = CNST_TABLE_REF(((long) 3));
				BgL_arg2558z00_531 = CNST_TABLE_REF(((long) 4));
				{	/* BackEnd/dotnet_class.scm 20 */

					{	/* BackEnd/dotnet_class.scm 20 */

						BgL_arg2562z00_535 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
				}}
				return
					BGl_makezd2dotnetzd2zzbackend_dotnet_classz00(BgL_arg2505z00_520,
					BgL_arg2523z00_521, BGl_string2899z00zzbackend_dotnetz00, BNIL, BNIL,
					BNIL, BNIL, BNIL, BNIL, ((bool_t) 0),
					BGl_string2900z00zzbackend_dotnetz00, BgL_arg2557z00_530,
					((bool_t) 1), ((bool_t) 0), ((bool_t) 0), ((bool_t) 0), ((bool_t) 1),
					((bool_t) 0), ((bool_t) 1), BgL_arg2558z00_531, BNIL, ((bool_t) 1),
					((bool_t) 1), ((bool_t) 0), BNIL, BNIL, ((bool_t) 1), ((bool_t) 1),
					BgL_arg2562z00_535, BGl_string2901z00zzbackend_dotnetz00);
			}
		}
	}



/* _build-dotnet-backend */
	obj_t BGl__buildzd2dotnetzd2backendz00zzbackend_dotnetz00(obj_t
		BgL_envz00_1207)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 32 */
			return (obj_t) (BGl_buildzd2dotnetzd2backendz00zzbackend_dotnetz00());
		}
	}



/* start-dotnet-emission! */
	obj_t BGl_startzd2dotnetzd2emissionz12z12zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 101 */
			if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
				{	/* BackEnd/dotnet.scm 104 */
					obj_t BgL_dnamez00_554;

					BgL_dnamez00_554 =
						BGl_dirnamez00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
					if (bigloo_strcmp(BgL_dnamez00_554,
							BGl_string2901z00zzbackend_dotnetz00))
						{	/* BackEnd/dotnet.scm 105 */
							BFALSE;
						}
					else
						{	/* BackEnd/dotnet.scm 105 */
							BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00 =
								BGl_dirnamez00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
						}
				}
			else
				{	/* BackEnd/dotnet.scm 103 */
					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 5))))
						{	/* BackEnd/dotnet.scm 107 */
							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/dotnet.scm 108 */
									BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00 =
										BGl_dirnamez00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								}
							else
								{	/* BackEnd/dotnet.scm 108 */
									BFALSE;
								}
						}
					else
						{	/* BackEnd/dotnet.scm 107 */
							BFALSE;
						}
				}
			{	/* BackEnd/dotnet.scm 110 */
				bool_t BgL_testz00_1316;

				if (fexists(BSTRING_TO_STRING
						(BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00)))
					{	/* BackEnd/dotnet.scm 110 */
						BgL_testz00_1316 =
							directoryp(BSTRING_TO_STRING
							(BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00));
					}
				else
					{	/* BackEnd/dotnet.scm 110 */
						BgL_testz00_1316 = ((bool_t) 0);
					}
				if (BgL_testz00_1316)
					{	/* BackEnd/dotnet.scm 110 */
						return BTRUE;
					}
				else
					{	/* BackEnd/dotnet.scm 110 */
						return
							BGl_errorz00zz__errorz00(BGl_string2902z00zzbackend_dotnetz00,
							BGl_string2903z00zzbackend_dotnetz00,
							BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00);
					}
			}
		}
	}



/* _start-dotnet-emission! */
	obj_t BGl__startzd2dotnetzd2emissionz12z12zzbackend_dotnetz00(obj_t
		BgL_envz00_1210)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 101 */
			return BGl_startzd2dotnetzd2emissionz12z12zzbackend_dotnetz00();
		}
	}



/* dotnet-external-asm */
	obj_t BGl_dotnetzd2externalzd2asmz00zzbackend_dotnetz00(obj_t BgL_namez00_4)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 126 */
			{	/* BackEnd/dotnet.scm 127 */
				obj_t BgL_idz00_561;

				BgL_idz00_561 =
					BGl_za2dotnetzd2externalzd2asmzd2styleza2zd2zzengine_paramz00;
				{	/* BackEnd/dotnet.scm 127 */
					obj_t BgL_cz00_562;

					BgL_cz00_562 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_561,
						BGl_za2dotnetzd2externalzd2asmsza2z00zzbackend_dotnetz00);
					{	/* BackEnd/dotnet.scm 128 */

						{	/* BackEnd/dotnet.scm 129 */
							bool_t BgL_testz00_1325;

							if (PAIRP(BgL_cz00_562))
								{	/* BackEnd/dotnet.scm 130 */
									bool_t BgL_testz00_1328;

									{	/* BackEnd/dotnet.scm 130 */
										obj_t BgL_auxz00_1329;

										BgL_auxz00_1329 = CDR(BgL_cz00_562);
										BgL_testz00_1328 = PROCEDUREP(BgL_auxz00_1329);
									}
									if (BgL_testz00_1328)
										{	/* BackEnd/dotnet.scm 130 */
											BgL_testz00_1325 =
												PROCEDURE_CORRECT_ARITYP(CDR(BgL_cz00_562),
												(int) (((long) 1)));
										}
									else
										{	/* BackEnd/dotnet.scm 130 */
											BgL_testz00_1325 = ((bool_t) 0);
										}
								}
							else
								{	/* BackEnd/dotnet.scm 129 */
									BgL_testz00_1325 = ((bool_t) 0);
								}
							if (BgL_testz00_1325)
								{	/* BackEnd/dotnet.scm 132 */
									obj_t BgL_fun2599z00_564;

									BgL_fun2599z00_564 = CDR(BgL_cz00_562);
									return
										PROCEDURE_ENTRY(BgL_fun2599z00_564) (BgL_fun2599z00_564,
										BgL_namez00_4, BEOA);
								}
							else
								{	/* BackEnd/dotnet.scm 133 */
									obj_t BgL_arg2608z00_566;

									{	/* BackEnd/dotnet.scm 134 */
										obj_t BgL_runner2653z00_590;

										{	/* BackEnd/dotnet.scm 134 */
											obj_t BgL_arg2621z00_568;

											{	/* BackEnd/dotnet.scm 136 */
												obj_t BgL_l2480z00_570;

												BgL_l2480z00_570 =
													BGl_za2dotnetzd2externalzd2asmsza2z00zzbackend_dotnetz00;
												if (NULLP(BgL_l2480z00_570))
													{	/* BackEnd/dotnet.scm 136 */
														BgL_arg2621z00_568 = BNIL;
													}
												else
													{	/* BackEnd/dotnet.scm 136 */
														obj_t BgL_head2482z00_572;

														BgL_head2482z00_572 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l2480z00_574;

															obj_t BgL_tail2483z00_575;

															BgL_l2480z00_574 = BgL_l2480z00_570;
															BgL_tail2483z00_575 = BgL_head2482z00_572;
														BgL_zc3anonymousza32624ze3z83_576:
															if (NULLP(BgL_l2480z00_574))
																{	/* BackEnd/dotnet.scm 136 */
																	BgL_arg2621z00_568 = CDR(BgL_head2482z00_572);
																}
															else
																{	/* BackEnd/dotnet.scm 136 */
																	obj_t BgL_newtail2484z00_578;

																	{	/* BackEnd/dotnet.scm 136 */
																		obj_t BgL_arg2629z00_580;

																		{	/* BackEnd/dotnet.scm 136 */
																			obj_t BgL_xz00_582;

																			BgL_xz00_582 = CAR(BgL_l2480z00_574);
																			{	/* BackEnd/dotnet.scm 137 */
																				bool_t BgL_testz00_1345;

																				if (PAIRP(BgL_xz00_582))
																					{	/* BackEnd/dotnet.scm 138 */
																						obj_t BgL_auxz00_1348;

																						BgL_auxz00_1348 = CAR(BgL_xz00_582);
																						BgL_testz00_1345 =
																							SYMBOLP(BgL_auxz00_1348);
																					}
																				else
																					{	/* BackEnd/dotnet.scm 137 */
																						BgL_testz00_1345 = ((bool_t) 0);
																					}
																				if (BgL_testz00_1345)
																					{	/* BackEnd/dotnet.scm 139 */
																						obj_t BgL_arg2642z00_584;

																						{	/* BackEnd/dotnet.scm 139 */
																							obj_t BgL_arg2649z00_586;

																							BgL_arg2649z00_586 =
																								CAR(BgL_xz00_582);
																							{	/* BackEnd/dotnet.scm 139 */
																								obj_t BgL_res2882z00_1069;

																								{	/* BackEnd/dotnet.scm 139 */
																									obj_t BgL_symbolz00_1067;

																									BgL_symbolz00_1067 =
																										BgL_arg2649z00_586;
																									{	/* BackEnd/dotnet.scm 139 */
																										obj_t BgL_arg2063z00_1068;

																										BgL_arg2063z00_1068 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_1067);
																										BgL_res2882z00_1069 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_1068);
																									}
																								}
																								BgL_arg2642z00_584 =
																									BgL_res2882z00_1069;
																							}
																						}
																						BgL_arg2629z00_580 =
																							string_append(BgL_arg2642z00_584,
																							BGl_string2904z00zzbackend_dotnetz00);
																					}
																				else
																					{	/* BackEnd/dotnet.scm 137 */
																						BgL_arg2629z00_580 =
																							BGl_string2901z00zzbackend_dotnetz00;
																					}
																			}
																		}
																		BgL_newtail2484z00_578 =
																			MAKE_PAIR(BgL_arg2629z00_580, BNIL);
																	}
																	SET_CDR(BgL_tail2483z00_575,
																		BgL_newtail2484z00_578);
																	{
																		obj_t BgL_tail2483z00_1359;

																		obj_t BgL_l2480z00_1357;

																		BgL_l2480z00_1357 = CDR(BgL_l2480z00_574);
																		BgL_tail2483z00_1359 =
																			BgL_newtail2484z00_578;
																		BgL_tail2483z00_575 = BgL_tail2483z00_1359;
																		BgL_l2480z00_574 = BgL_l2480z00_1357;
																		goto BgL_zc3anonymousza32624ze3z83_576;
																	}
																}
														}
													}
											}
											{	/* BackEnd/dotnet.scm 134 */
												obj_t BgL_list2622z00_569;

												BgL_list2622z00_569 =
													MAKE_PAIR(BgL_arg2621z00_568, BNIL);
												BgL_runner2653z00_590 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BGl_string2905z00zzbackend_dotnetz00,
													BgL_list2622z00_569);
											}
										}
										BgL_arg2608z00_566 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_runner2653z00_590);
									}
									return
										BGl_errorz00zz__errorz00
										(BGl_string2906z00zzbackend_dotnetz00, BgL_arg2608z00_566,
										BGl_za2dotnetzd2externalzd2asmzd2styleza2zd2zzengine_paramz00);
								}
						}
					}
				}
			}
		}
	}



/* dotnet-external-pnet-asm */
	obj_t BGl_dotnetzd2externalzd2pnetzd2asmzd2zzbackend_dotnetz00(obj_t
		BgL_namez00_5)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 148 */
			{	/* BackEnd/dotnet.scm 149 */
				obj_t BgL_ilz00_596;

				BgL_ilz00_596 =
					string_append(BGl_prefixz00zz__osz00(BgL_namez00_5),
					BGl_string2907z00zzbackend_dotnetz00);
				{	/* BackEnd/dotnet.scm 149 */
					obj_t BgL_cmdz00_597;

					BgL_cmdz00_597 =
						string_append_3
						(BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00,
						BGl_string2904z00zzbackend_dotnetz00, BgL_ilz00_596);
					{	/* BackEnd/dotnet.scm 150 */

						{	/* BackEnd/dotnet.scm 151 */
							obj_t BgL_list2659z00_598;

							{	/* BackEnd/dotnet.scm 151 */
								obj_t BgL_arg2661z00_600;

								{	/* BackEnd/dotnet.scm 151 */
									obj_t BgL_arg2663z00_601;

									{	/* BackEnd/dotnet.scm 151 */
										obj_t BgL_arg2665z00_603;

										BgL_arg2665z00_603 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
										BgL_arg2663z00_601 =
											MAKE_PAIR(BGl_string2908z00zzbackend_dotnetz00,
											BgL_arg2665z00_603);
									}
									BgL_arg2661z00_600 =
										MAKE_PAIR
										(BGl_za2dotnetzd2externalzd2asmza2z00zzengine_paramz00,
										BgL_arg2663z00_601);
								}
								BgL_list2659z00_598 =
									MAKE_PAIR(BGl_string2909z00zzbackend_dotnetz00,
									BgL_arg2661z00_600);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
								BgL_list2659z00_598);
						}
						{	/* BackEnd/dotnet.scm 152 */
							obj_t BgL_list2666z00_604;

							{	/* BackEnd/dotnet.scm 152 */
								obj_t BgL_arg2668z00_606;

								{	/* BackEnd/dotnet.scm 152 */
									obj_t BgL_arg2669z00_607;

									{	/* BackEnd/dotnet.scm 152 */
										obj_t BgL_arg2670z00_608;

										BgL_arg2670z00_608 =
											MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
										BgL_arg2669z00_607 =
											MAKE_PAIR(BCHAR(((unsigned char) ']')),
											BgL_arg2670z00_608);
									}
									BgL_arg2668z00_606 =
										MAKE_PAIR(BgL_cmdz00_597, BgL_arg2669z00_607);
								}
								BgL_list2666z00_604 =
									MAKE_PAIR(BGl_string2910z00zzbackend_dotnetz00,
									BgL_arg2668z00_606);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
								BgL_list2666z00_604);
						}
						{	/* BackEnd/dotnet.scm 153 */
							obj_t BgL_resz00_609;

							BgL_resz00_609 =
								BGl_execz00zzcc_execz00(BgL_cmdz00_597, ((bool_t) 1),
								BGl_string2911z00zzbackend_dotnetz00);
							if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
								{	/* BackEnd/dotnet.scm 154 */
									char *BgL_stringz00_1075;

									BgL_stringz00_1075 = BSTRING_TO_STRING(BgL_ilz00_596);
									if (unlink(BgL_stringz00_1075))
										{	/* BackEnd/dotnet.scm 154 */
											((bool_t) 0);
										}
									else
										{	/* BackEnd/dotnet.scm 154 */
											((bool_t) 1);
										}
								}
							else
								{	/* BackEnd/dotnet.scm 154 */
									((bool_t) 0);
								}
							return BgL_resz00_609;
						}
					}
				}
			}
		}
	}



/* _dotnet-external-pnet-asm */
	obj_t BGl__dotnetzd2externalzd2pnetzd2asmzd2zzbackend_dotnetz00(obj_t
		BgL_envz00_1208, obj_t BgL_namez00_1209)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 148 */
			return
				BGl_dotnetzd2externalzd2pnetzd2asmzd2zzbackend_dotnetz00
				(BgL_namez00_1209);
		}
	}



/* make-tmp-file-name */
	obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 185 */
			return
				string_append(BGl_string2912z00zzbackend_dotnetz00,
				BGl_string2913z00zzbackend_dotnetz00);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2914z00zzbackend_dotnetz00,
				BGl_string2915z00zzbackend_dotnetz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2916z00zzbackend_dotnetz00,
				BGl_string2917z00zzbackend_dotnetz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2918z00zzbackend_dotnetz00,
				BGl_string2919z00zzbackend_dotnetz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2920z00zzbackend_dotnetz00,
				BGl_string2921z00zzbackend_dotnetz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2922z00zzbackend_dotnetz00,
				BGl_string2923z00zzbackend_dotnetz00);
		}
	}



/* backend-check-inline2498 */
	obj_t BGl_backendzd2checkzd2inline2498z00zzbackend_dotnetz00(obj_t
		BgL_envz00_1218, obj_t BgL_mez00_1219)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 309 */
			{
				BgL_dotnetz00_bglt BgL_mez00_1038;

				BgL_mez00_1038 = (BgL_dotnetz00_bglt) (BgL_mez00_1219);
				if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
					{	/* BackEnd/dotnet.scm 310 */
						return BFALSE;
					}
				else
					{	/* BackEnd/dotnet.scm 310 */
						return BGl_checkzd2msilzd2inlinesz00zzmsil_inlinez00();
					}
			}
		}
	}



/* backend-link-objects2496 */
	obj_t BGl_backendzd2linkzd2objects2496z00zzbackend_dotnetz00(obj_t
		BgL_envz00_1220, obj_t BgL_mez00_1221, obj_t BgL_sourcesz00_1222)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 191 */
			{
				BgL_dotnetz00_bglt BgL_mez00_858;

				obj_t BgL_sourcesz00_859;

				BgL_mez00_858 = (BgL_dotnetz00_bglt) (BgL_mez00_1221);
				BgL_sourcesz00_859 = BgL_sourcesz00_1222;
				if (NULLP(BgL_sourcesz00_859))
					{	/* BackEnd/dotnet.scm 196 */
						obj_t BgL_firstz00_864;

						BgL_firstz00_864 =
							BGl_prefixz00zz__osz00(CAR
							(BGl_za2ozd2filesza2zd2zzengine_paramz00));
						{	/* BackEnd/dotnet.scm 197 */
							obj_t BgL_list2750z00_865;

							{	/* BackEnd/dotnet.scm 197 */
								obj_t BgL_arg2753z00_867;

								{	/* BackEnd/dotnet.scm 197 */
									obj_t BgL_arg2755z00_869;

									{	/* BackEnd/dotnet.scm 197 */
										obj_t BgL_arg2758z00_871;

										BgL_arg2758z00_871 =
											MAKE_PAIR(BGl_za2ozd2filesza2zd2zzengine_paramz00, BNIL);
										BgL_arg2755z00_869 =
											MAKE_PAIR(BGl_string2924z00zzbackend_dotnetz00,
											BgL_arg2758z00_871);
									}
									BgL_arg2753z00_867 =
										MAKE_PAIR(BGl_string2925z00zzbackend_dotnetz00,
										BgL_arg2755z00_869);
								}
								BgL_list2750z00_865 =
									MAKE_PAIR(BGl_string2926z00zzbackend_dotnetz00,
									BgL_arg2753z00_867);
							}
							BGl_warningz00zz__errorz00(BgL_list2750z00_865);
						}
						BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
						BGl_za2srczd2filesza2zd2zzengine_paramz00 = BNIL;
						return BGl_dotnetzd2ldzd2zzmsil_ldz00();
					}
				else
					{
						obj_t BgL_sourcesz00_876;

						obj_t BgL_clsz00_877;

						obj_t BgL_mainz00_878;

						obj_t BgL_fmainz00_879;

						obj_t BgL_librariesz00_880;

						BgL_sourcesz00_876 = BgL_sourcesz00_859;
						BgL_clsz00_877 = BNIL;
						BgL_mainz00_878 = BFALSE;
						BgL_fmainz00_879 = BGl_string2901z00zzbackend_dotnetz00;
						BgL_librariesz00_880 = BNIL;
					BgL_zc3anonymousza32760ze3z83_881:
						if (NULLP(BgL_sourcesz00_876))
							{	/* BackEnd/dotnet.scm 207 */
								if (CBOOL(BgL_mainz00_878))
									{	/* BackEnd/dotnet.scm 211 */
										obj_t BgL_firstz00_883;

										BgL_firstz00_883 =
											BGl_prefixz00zz__osz00(CAR
											(BGl_za2ozd2filesza2zd2zzengine_paramz00));
										{
											obj_t BgL_l2487z00_885;

											BgL_l2487z00_885 = BgL_librariesz00_880;
										BgL_zc3anonymousza32762ze3z83_886:
											if (PAIRP(BgL_l2487z00_885))
												{	/* BackEnd/dotnet.scm 214 */
													{	/* BackEnd/dotnet.scm 215 */
														obj_t BgL_libz00_888;

														BgL_libz00_888 = CAR(BgL_l2487z00_885);
														{
															obj_t BgL_libsz00_889;

															if (PAIRP(BgL_libz00_888))
																{	/* BackEnd/dotnet.scm 215 */
																	if (
																		(CAR(BgL_libz00_888) ==
																			CNST_TABLE_REF(((long) 7))))
																		{	/* BackEnd/dotnet.scm 215 */
																			BgL_libsz00_889 = CDR(BgL_libz00_888);
																			{
																				obj_t BgL_l2485z00_898;

																				BgL_l2485z00_898 = BgL_libsz00_889;
																			BgL_zc3anonymousza32769ze3z83_899:
																				if (PAIRP(BgL_l2485z00_898))
																					{	/* BackEnd/dotnet.scm 217 */
																						{	/* BackEnd/dotnet.scm 218 */
																							obj_t BgL_libz00_901;

																							BgL_libz00_901 =
																								CAR(BgL_l2485z00_898);
																							BGl_usezd2libraryz12zc0zzmodule_alibraryz00
																								(BgL_libz00_901,
																								CNST_TABLE_REF(((long) 6)));
																						}
																						{
																							obj_t BgL_l2485z00_1430;

																							BgL_l2485z00_1430 =
																								CDR(BgL_l2485z00_898);
																							BgL_l2485z00_898 =
																								BgL_l2485z00_1430;
																							goto
																								BgL_zc3anonymousza32769ze3z83_899;
																						}
																					}
																				else
																					{	/* BackEnd/dotnet.scm 217 */
																						((bool_t) 1);
																					}
																			}
																		}
																	else
																		{	/* BackEnd/dotnet.scm 215 */
																			((bool_t) 0);
																		}
																}
															else
																{	/* BackEnd/dotnet.scm 215 */
																	((bool_t) 0);
																}
														}
													}
													{
														obj_t BgL_l2487z00_1433;

														BgL_l2487z00_1433 = CDR(BgL_l2487z00_885);
														BgL_l2487z00_885 = BgL_l2487z00_1433;
														goto BgL_zc3anonymousza32762ze3z83_886;
													}
												}
											else
												{	/* BackEnd/dotnet.scm 214 */
													((bool_t) 1);
												}
										}
										BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
										{	/* BackEnd/dotnet.scm 223 */
											obj_t BgL_list2774z00_906;

											BgL_list2774z00_906 = MAKE_PAIR(BgL_fmainz00_879, BNIL);
											BGl_za2srczd2filesza2zd2zzengine_paramz00 =
												BgL_list2774z00_906;
										}
										BGl_za2srczd2filesza2zd2zzengine_paramz00 = BNIL;
										return BGl_dotnetzd2ldzd2zzmsil_ldz00();
									}
								else
									{	/* BackEnd/dotnet.scm 226 */
										obj_t BgL_tmpz00_908;

										BgL_tmpz00_908 =
											BGl_makezd2tmpzd2filezd2namezd2zzbackend_dotnetz00();
										BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_tmpz00_908,
											CBOOL(BgL_mainz00_878),
											string_to_symbol(BSTRING_TO_STRING
												(BGl_string2912z00zzbackend_dotnetz00)), BgL_clsz00_877,
											BgL_librariesz00_880);
										{	/* BackEnd/dotnet.scm 228 */
											obj_t BgL_list2777z00_910;

											BgL_list2777z00_910 = MAKE_PAIR(BgL_tmpz00_908, BNIL);
											BGl_za2srczd2filesza2zd2zzengine_paramz00 =
												BgL_list2777z00_910;
										}
										{
											obj_t BgL_raz00_913;

											obj_t BgL_resz00_914;

											BgL_raz00_913 = BGl_za2restzd2argsza2zd2zzengine_paramz00;
											BgL_resz00_914 = BNIL;
										BgL_zc3anonymousza32778ze3z83_915:
											if (NULLP(BgL_raz00_913))
												{	/* BackEnd/dotnet.scm 234 */
													BGl_za2restzd2argsza2zd2zzengine_paramz00 =
														bgl_reverse_bang(BgL_resz00_914);
												}
											else
												{	/* BackEnd/dotnet.scm 236 */
													bool_t BgL_testz00_1447;

													{	/* BackEnd/dotnet.scm 236 */
														obj_t BgL_arg2786z00_922;

														BgL_arg2786z00_922 =
															BGl_suffixz00zz__osz00(CAR(BgL_raz00_913));
														BgL_testz00_1447 =
															CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2786z00_922,
																BGl_za2mcozd2suffixza2zd2zzengine_paramz00));
													}
													if (BgL_testz00_1447)
														{
															obj_t BgL_raz00_1452;

															BgL_raz00_1452 = CDR(BgL_raz00_913);
															BgL_raz00_913 = BgL_raz00_1452;
															goto BgL_zc3anonymousza32778ze3z83_915;
														}
													else
														{	/* BackEnd/dotnet.scm 239 */
															obj_t BgL_arg2783z00_919;

															obj_t BgL_arg2784z00_920;

															BgL_arg2783z00_919 = CDR(BgL_raz00_913);
															BgL_arg2784z00_920 =
																MAKE_PAIR(CAR(BgL_raz00_913), BgL_resz00_914);
															{
																obj_t BgL_resz00_1458;

																obj_t BgL_raz00_1457;

																BgL_raz00_1457 = BgL_arg2783z00_919;
																BgL_resz00_1458 = BgL_arg2784z00_920;
																BgL_resz00_914 = BgL_resz00_1458;
																BgL_raz00_913 = BgL_raz00_1457;
																goto BgL_zc3anonymousza32778ze3z83_915;
															}
														}
												}
										}
										{	/* BackEnd/dotnet.scm 240 */
											obj_t BgL_val2477z00_925;

											BgL_val2477z00_925 =
												BGl_zc3exitza32793ze3z83zzbackend_dotnetz00();
											BGl_loadzd2libraryzd2initz00zzinit_setrcz00();
											{	/* BackEnd/dotnet.scm 244 */
												obj_t BgL_prez00_926;

												BgL_prez00_926 = BGl_prefixz00zz__osz00(BgL_tmpz00_908);
												{	/* BackEnd/dotnet.scm 244 */
													obj_t BgL_objzd2filezd2_927;

													BgL_objzd2filezd2_927 =
														string_append(BgL_prez00_926,
														BGl_string2927z00zzbackend_dotnetz00);
													{	/* BackEnd/dotnet.scm 245 */

														if (fexists(BSTRING_TO_STRING(BgL_tmpz00_908)))
															{	/* BackEnd/dotnet.scm 247 */
																char *BgL_stringz00_1130;

																BgL_stringz00_1130 =
																	BSTRING_TO_STRING(BgL_tmpz00_908);
																if (unlink(BgL_stringz00_1130))
																	{	/* BackEnd/dotnet.scm 247 */
																		((bool_t) 0);
																	}
																else
																	{	/* BackEnd/dotnet.scm 247 */
																		((bool_t) 1);
																	}
															}
														else
															{	/* BackEnd/dotnet.scm 246 */
																((bool_t) 0);
															}
														if (fexists(BSTRING_TO_STRING
																(BgL_objzd2filezd2_927)))
															{	/* BackEnd/dotnet.scm 249 */
																char *BgL_stringz00_1133;

																BgL_stringz00_1133 =
																	BSTRING_TO_STRING(BgL_objzd2filezd2_927);
																if (unlink(BgL_stringz00_1133))
																	{	/* BackEnd/dotnet.scm 249 */
																		((bool_t) 0);
																	}
																else
																	{	/* BackEnd/dotnet.scm 249 */
																		((bool_t) 1);
																	}
															}
														else
															{	/* BackEnd/dotnet.scm 248 */
																((bool_t) 0);
															}
													}
												}
											}
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val2477z00_925)))
												{	/* BackEnd/dotnet.scm 244 */
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
														(BgL_val2477z00_925), CDR(BgL_val2477z00_925));
												}
											else
												{	/* BackEnd/dotnet.scm 244 */
													BgL_val2477z00_925;
												}
										}
										return BINT(((long) 0));
							}}
						else
							{	/* BackEnd/dotnet.scm 251 */
								obj_t BgL_portz00_936;

								{	/* BackEnd/dotnet.scm 251 */
									obj_t BgL_arg2877z00_1029;

									{	/* BackEnd/dotnet.scm 251 */
										obj_t BgL_pairz00_1137;

										BgL_pairz00_1137 = BgL_sourcesz00_876;
										BgL_arg2877z00_1029 = CAR(CAR(BgL_pairz00_1137));
									}
									{	/* BackEnd/dotnet.scm 251 */

										BgL_portz00_936 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_arg2877z00_1029, BTRUE);
									}
								}
								if (INPUT_PORTP(BgL_portz00_936))
									{	/* BackEnd/dotnet.scm 254 */
										obj_t BgL_expz00_938;

										{	/* BackEnd/dotnet.scm 254 */
											obj_t BgL_list2873z00_1025;

											BgL_list2873z00_1025 = MAKE_PAIR(BgL_portz00_936, BNIL);
											BgL_expz00_938 =
												BGl_compilerzd2readzd2zzread_readerz00
												(BgL_list2873z00_1025);
										}
										bgl_close_input_port(BgL_portz00_936);
										{
											obj_t BgL_namez00_939;

											obj_t BgL_newzd2mainzd2_940;

											obj_t BgL_namez00_942;

											if (PAIRP(BgL_expz00_938))
												{	/* BackEnd/dotnet.scm 256 */
													obj_t BgL_cdrzd21454zd2_947;

													BgL_cdrzd21454zd2_947 = CDR(BgL_expz00_938);
													if (
														(CAR(BgL_expz00_938) == CNST_TABLE_REF(((long) 8))))
														{	/* BackEnd/dotnet.scm 256 */
															if (PAIRP(BgL_cdrzd21454zd2_947))
																{
																	obj_t BgL_gzd21461zd2_952;

																	BgL_gzd21461zd2_952 =
																		CDR(BgL_cdrzd21454zd2_947);
																BgL_zc3anonymousza32799ze3z83_953:
																	if (PAIRP(BgL_gzd21461zd2_952))
																		{	/* BackEnd/dotnet.scm 256 */
																			obj_t BgL_carzd21464zd2_955;

																			BgL_carzd21464zd2_955 =
																				CAR(BgL_gzd21461zd2_952);
																			if (PAIRP(BgL_carzd21464zd2_955))
																				{	/* BackEnd/dotnet.scm 256 */
																					obj_t BgL_cdrzd21468zd2_957;

																					BgL_cdrzd21468zd2_957 =
																						CDR(BgL_carzd21464zd2_955);
																					if (
																						(CAR(BgL_carzd21464zd2_955) ==
																							CNST_TABLE_REF(((long) 9))))
																						{	/* BackEnd/dotnet.scm 256 */
																							if (PAIRP(BgL_cdrzd21468zd2_957))
																								{	/* BackEnd/dotnet.scm 256 */
																									if (NULLP(CDR
																											(BgL_cdrzd21468zd2_957)))
																										{	/* BackEnd/dotnet.scm 256 */
																											BgL_namez00_939 =
																												CAR
																												(BgL_cdrzd21454zd2_947);
																											BgL_newzd2mainzd2_940 =
																												CAR
																												(BgL_cdrzd21468zd2_957);
																											{	/* BackEnd/dotnet.scm 261 */
																												obj_t
																													BgL_arg2819z00_975;
																												{	/* BackEnd/dotnet.scm 261 */
																													obj_t
																														BgL_arg2821z00_977;
																													obj_t
																														BgL_arg2822z00_978;
																													{	/* BackEnd/dotnet.scm 261 */
																														obj_t
																															BgL_arg2823z00_979;
																														{	/* BackEnd/dotnet.scm 261 */
																															obj_t
																																BgL_arg2825z00_980;
																															{	/* BackEnd/dotnet.scm 261 */
																																obj_t
																																	BgL_pairz00_1164;
																																BgL_pairz00_1164
																																	=
																																	BgL_sourcesz00_876;
																																BgL_arg2825z00_980
																																	=
																																	CDR(CAR
																																	(BgL_pairz00_1164));
																															}
																															BgL_arg2823z00_979
																																=
																																BGl_prefixz00zz__osz00
																																(BgL_arg2825z00_980);
																														}
																														BgL_arg2821z00_977 =
																															BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00
																															(BgL_arg2823z00_979);
																													}
																													BgL_arg2822z00_978 =
																														BGl_filezd2separatorzd2zz__osz00
																														();
																													BgL_arg2819z00_975 =
																														BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																														(BgL_arg2821z00_977,
																														CCHAR
																														(BgL_arg2822z00_978),
																														(char) (((unsigned
																																	char) '.')));
																												}
																												BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																													(BgL_namez00_939,
																													BgL_arg2819z00_975,
																													BNIL);
																											}
																											if (CBOOL
																												(BgL_mainz00_878))
																												{	/* BackEnd/dotnet.scm 265 */
																													obj_t
																														BgL_arg2827z00_982;
																													obj_t
																														BgL_arg2828z00_983;
																													{	/* BackEnd/dotnet.scm 266 */
																														obj_t
																															BgL_arg2831z00_986;
																														{	/* BackEnd/dotnet.scm 270 */
																															obj_t
																																BgL_pairz00_1168;
																															BgL_pairz00_1168 =
																																BgL_sourcesz00_876;
																															BgL_arg2831z00_986
																																=
																																CAR(CAR
																																(BgL_pairz00_1168));
																														}
																														{	/* BackEnd/dotnet.scm 266 */
																															obj_t
																																BgL_list2833z00_988;
																															{	/* BackEnd/dotnet.scm 266 */
																																obj_t
																																	BgL_arg2834z00_989;
																																{	/* BackEnd/dotnet.scm 266 */
																																	obj_t
																																		BgL_arg2835z00_990;
																																	{	/* BackEnd/dotnet.scm 266 */
																																		obj_t
																																			BgL_arg2836z00_991;
																																		{	/* BackEnd/dotnet.scm 266 */
																																			obj_t
																																				BgL_arg2837z00_992;
																																			BgL_arg2837z00_992
																																				=
																																				MAKE_PAIR
																																				(BGl_string2908z00zzbackend_dotnetz00,
																																				BNIL);
																																			BgL_arg2836z00_991
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2831z00_986,
																																				BgL_arg2837z00_992);
																																		}
																																		BgL_arg2835z00_990
																																			=
																																			MAKE_PAIR
																																			(BGl_string2929z00zzbackend_dotnetz00,
																																			BgL_arg2836z00_991);
																																	}
																																	BgL_arg2834z00_989
																																		=
																																		MAKE_PAIR
																																		(BgL_fmainz00_879,
																																		BgL_arg2835z00_990);
																																}
																																BgL_list2833z00_988
																																	=
																																	MAKE_PAIR
																																	(BGl_string2930z00zzbackend_dotnetz00,
																																	BgL_arg2834z00_989);
																															}
																															BgL_arg2827z00_982
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list2833z00_988);
																														}
																													}
																													BgL_arg2828z00_983 =
																														MAKE_PAIR
																														(BgL_mainz00_878,
																														BgL_newzd2mainzd2_940);
																													BGl_errorz00zz__errorz00
																														(BGl_string2901z00zzbackend_dotnetz00,
																														BgL_arg2827z00_982,
																														BgL_arg2828z00_983);
																												}
																											else
																												{	/* BackEnd/dotnet.scm 264 */
																													BFALSE;
																												}
																											{	/* BackEnd/dotnet.scm 272 */
																												obj_t
																													BgL_arg2838z00_993;
																												obj_t
																													BgL_arg2839z00_994;
																												obj_t
																													BgL_arg2841z00_995;
																												obj_t
																													BgL_arg2842z00_996;
																												BgL_arg2838z00_993 =
																													CDR
																													(BgL_sourcesz00_876);
																												{	/* BackEnd/dotnet.scm 274 */
																													obj_t
																														BgL_arg2843z00_997;
																													{	/* BackEnd/dotnet.scm 274 */
																														obj_t
																															BgL_arg2844z00_998;
																														{	/* BackEnd/dotnet.scm 274 */
																															obj_t
																																BgL_arg2848z00_1002;
																															{	/* BackEnd/dotnet.scm 275 */
																																obj_t
																																	BgL_pairz00_1173;
																																BgL_pairz00_1173
																																	=
																																	BgL_sourcesz00_876;
																																BgL_arg2848z00_1002
																																	=
																																	CAR(CAR
																																	(BgL_pairz00_1173));
																															}
																															BgL_arg2844z00_998
																																=
																																string_append_3
																																(BGl_string2928z00zzbackend_dotnetz00,
																																BgL_arg2848z00_1002,
																																BGl_string2928z00zzbackend_dotnetz00);
																														}
																														{	/* BackEnd/dotnet.scm 273 */
																															obj_t
																																BgL_list2845z00_999;
																															{	/* BackEnd/dotnet.scm 273 */
																																obj_t
																																	BgL_arg2846z00_1000;
																																BgL_arg2846z00_1000
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2844z00_998,
																																	BNIL);
																																BgL_list2845z00_999
																																	=
																																	MAKE_PAIR
																																	(BgL_namez00_939,
																																	BgL_arg2846z00_1000);
																															}
																															BgL_arg2843z00_997
																																=
																																BgL_list2845z00_999;
																														}
																													}
																													BgL_arg2839z00_994 =
																														MAKE_PAIR
																														(BgL_arg2843z00_997,
																														BgL_clsz00_877);
																												}
																												{	/* BackEnd/dotnet.scm 278 */
																													obj_t
																														BgL_pairz00_1179;
																													BgL_pairz00_1179 =
																														BgL_sourcesz00_876;
																													BgL_arg2841z00_995 =
																														CAR(CAR
																														(BgL_pairz00_1179));
																												}
																												{	/* BackEnd/dotnet.scm 279 */
																													obj_t
																														BgL_arg2850z00_1004;
																													{	/* BackEnd/dotnet.scm 279 */
																														obj_t
																															BgL_arg2851z00_1005;
																														{	/* BackEnd/dotnet.scm 279 */
																															obj_t
																																BgL_pairz00_1183;
																															BgL_pairz00_1183 =
																																BgL_expz00_938;
																															BgL_arg2851z00_1005
																																=
																																CDR(CDR
																																(BgL_pairz00_1183));
																														}
																														BgL_arg2850z00_1004
																															=
																															BGl_findzd2librarieszd2zzengine_linkz00
																															(BgL_arg2851z00_1005);
																													}
																													BgL_arg2842z00_996 =
																														bgl_append2
																														(BgL_arg2850z00_1004,
																														BgL_librariesz00_880);
																												}
																												{
																													obj_t
																														BgL_librariesz00_1552;
																													obj_t
																														BgL_fmainz00_1551;
																													obj_t
																														BgL_mainz00_1550;
																													obj_t BgL_clsz00_1549;

																													obj_t
																														BgL_sourcesz00_1548;
																													BgL_sourcesz00_1548 =
																														BgL_arg2838z00_993;
																													BgL_clsz00_1549 =
																														BgL_arg2839z00_994;
																													BgL_mainz00_1550 =
																														BgL_newzd2mainzd2_940;
																													BgL_fmainz00_1551 =
																														BgL_arg2841z00_995;
																													BgL_librariesz00_1552
																														=
																														BgL_arg2842z00_996;
																													BgL_librariesz00_880 =
																														BgL_librariesz00_1552;
																													BgL_fmainz00_879 =
																														BgL_fmainz00_1551;
																													BgL_mainz00_878 =
																														BgL_mainz00_1550;
																													BgL_clsz00_877 =
																														BgL_clsz00_1549;
																													BgL_sourcesz00_876 =
																														BgL_sourcesz00_1548;
																													goto
																														BgL_zc3anonymousza32760ze3z83_881;
																												}
																											}
																										}
																									else
																										{
																											obj_t
																												BgL_gzd21461zd2_1555;
																											BgL_gzd21461zd2_1555 =
																												CDR
																												(BgL_gzd21461zd2_952);
																											BgL_gzd21461zd2_952 =
																												BgL_gzd21461zd2_1555;
																											goto
																												BgL_zc3anonymousza32799ze3z83_953;
																										}
																								}
																							else
																								{
																									obj_t BgL_gzd21461zd2_1557;

																									BgL_gzd21461zd2_1557 =
																										CDR(BgL_gzd21461zd2_952);
																									BgL_gzd21461zd2_952 =
																										BgL_gzd21461zd2_1557;
																									goto
																										BgL_zc3anonymousza32799ze3z83_953;
																								}
																						}
																					else
																						{
																							obj_t BgL_gzd21461zd2_1559;

																							BgL_gzd21461zd2_1559 =
																								CDR(BgL_gzd21461zd2_952);
																							BgL_gzd21461zd2_952 =
																								BgL_gzd21461zd2_1559;
																							goto
																								BgL_zc3anonymousza32799ze3z83_953;
																						}
																				}
																			else
																				{
																					obj_t BgL_gzd21461zd2_1561;

																					BgL_gzd21461zd2_1561 =
																						CDR(BgL_gzd21461zd2_952);
																					BgL_gzd21461zd2_952 =
																						BgL_gzd21461zd2_1561;
																					goto
																						BgL_zc3anonymousza32799ze3z83_953;
																				}
																		}
																	else
																		{	/* BackEnd/dotnet.scm 256 */
																			BgL_namez00_942 =
																				CAR(CDR(BgL_expz00_938));
																			{	/* BackEnd/dotnet.scm 285 */
																				obj_t BgL_arg2852z00_1006;

																				{	/* BackEnd/dotnet.scm 285 */
																					obj_t BgL_arg2854z00_1008;

																					obj_t BgL_arg2856z00_1009;

																					{	/* BackEnd/dotnet.scm 285 */
																						obj_t BgL_arg2857z00_1010;

																						{	/* BackEnd/dotnet.scm 285 */
																							obj_t BgL_arg2858z00_1011;

																							{	/* BackEnd/dotnet.scm 285 */
																								obj_t BgL_pairz00_1187;

																								BgL_pairz00_1187 =
																									BgL_sourcesz00_876;
																								BgL_arg2858z00_1011 =
																									CDR(CAR(BgL_pairz00_1187));
																							}
																							BgL_arg2857z00_1010 =
																								BGl_prefixz00zz__osz00
																								(BgL_arg2858z00_1011);
																						}
																						BgL_arg2854z00_1008 =
																							BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00
																							(BgL_arg2857z00_1010);
																					}
																					BgL_arg2856z00_1009 =
																						BGl_filezd2separatorzd2zz__osz00();
																					BgL_arg2852z00_1006 =
																						BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																						(BgL_arg2854z00_1008,
																						CCHAR(BgL_arg2856z00_1009),
																						(char) (((unsigned char) '.')));
																				}
																				BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																					(BgL_namez00_942, BgL_arg2852z00_1006,
																					BNIL);
																			}
																			{	/* BackEnd/dotnet.scm 288 */
																				obj_t BgL_arg2859z00_1012;

																				obj_t BgL_arg2861z00_1013;

																				obj_t BgL_arg2862z00_1014;

																				BgL_arg2859z00_1012 =
																					CDR(BgL_sourcesz00_876);
																				{	/* BackEnd/dotnet.scm 290 */
																					obj_t BgL_arg2863z00_1015;

																					{	/* BackEnd/dotnet.scm 290 */
																						obj_t BgL_arg2864z00_1016;

																						{	/* BackEnd/dotnet.scm 290 */
																							obj_t BgL_arg2868z00_1020;

																							{	/* BackEnd/dotnet.scm 291 */
																								obj_t BgL_pairz00_1192;

																								BgL_pairz00_1192 =
																									BgL_sourcesz00_876;
																								BgL_arg2868z00_1020 =
																									CAR(CAR(BgL_pairz00_1192));
																							}
																							BgL_arg2864z00_1016 =
																								string_append_3
																								(BGl_string2928z00zzbackend_dotnetz00,
																								BgL_arg2868z00_1020,
																								BGl_string2928z00zzbackend_dotnetz00);
																						}
																						{	/* BackEnd/dotnet.scm 289 */
																							obj_t BgL_list2865z00_1017;

																							{	/* BackEnd/dotnet.scm 289 */
																								obj_t BgL_arg2866z00_1018;

																								BgL_arg2866z00_1018 =
																									MAKE_PAIR(BgL_arg2864z00_1016,
																									BNIL);
																								BgL_list2865z00_1017 =
																									MAKE_PAIR(BgL_namez00_942,
																									BgL_arg2866z00_1018);
																							}
																							BgL_arg2863z00_1015 =
																								BgL_list2865z00_1017;
																					}}
																					BgL_arg2861z00_1013 =
																						MAKE_PAIR(BgL_arg2863z00_1015,
																						BgL_clsz00_877);
																				}
																				{	/* BackEnd/dotnet.scm 295 */
																					obj_t BgL_arg2870z00_1022;

																					{	/* BackEnd/dotnet.scm 295 */
																						obj_t BgL_arg2871z00_1023;

																						{	/* BackEnd/dotnet.scm 295 */
																							obj_t BgL_pairz00_1198;

																							BgL_pairz00_1198 = BgL_expz00_938;
																							BgL_arg2871z00_1023 =
																								CDR(CDR(BgL_pairz00_1198));
																						}
																						BgL_arg2870z00_1022 =
																							BGl_findzd2librarieszd2zzengine_linkz00
																							(BgL_arg2871z00_1023);
																					}
																					BgL_arg2862z00_1014 =
																						bgl_append2(BgL_arg2870z00_1022,
																						BgL_librariesz00_880);
																				}
																				{
																					obj_t BgL_librariesz00_1585;

																					obj_t BgL_clsz00_1584;

																					obj_t BgL_sourcesz00_1583;

																					BgL_sourcesz00_1583 =
																						BgL_arg2859z00_1012;
																					BgL_clsz00_1584 = BgL_arg2861z00_1013;
																					BgL_librariesz00_1585 =
																						BgL_arg2862z00_1014;
																					BgL_librariesz00_880 =
																						BgL_librariesz00_1585;
																					BgL_clsz00_877 = BgL_clsz00_1584;
																					BgL_sourcesz00_876 =
																						BgL_sourcesz00_1583;
																					goto
																						BgL_zc3anonymousza32760ze3z83_881;
																				}
																			}
																		}
																}
															else
																{	/* BackEnd/dotnet.scm 256 */
																BgL_tagzd21445zd2_944:
																	{
																		obj_t BgL_sourcesz00_1589;

																		BgL_sourcesz00_1589 =
																			CDR(BgL_sourcesz00_876);
																		BgL_sourcesz00_876 = BgL_sourcesz00_1589;
																		goto BgL_zc3anonymousza32760ze3z83_881;
																	}
																}
														}
													else
														{	/* BackEnd/dotnet.scm 256 */
															goto BgL_tagzd21445zd2_944;
														}
												}
											else
												{	/* BackEnd/dotnet.scm 256 */
													goto BgL_tagzd21445zd2_944;
												}
										}
									}
								else
									{	/* BackEnd/dotnet.scm 253 */
										obj_t BgL_arg2876z00_1028;

										{	/* BackEnd/dotnet.scm 253 */
											obj_t BgL_pairz00_1203;

											BgL_pairz00_1203 = BgL_sourcesz00_876;
											BgL_arg2876z00_1028 = CAR(CAR(BgL_pairz00_1203));
										}
										return
											BGl_errorz00zz__errorz00
											(BGl_string2901z00zzbackend_dotnetz00,
											BGl_string2931z00zzbackend_dotnetz00,
											BgL_arg2876z00_1028);
									}
							}
					}
			}
		}
	}



/* <exit:2793> */
	obj_t BGl_zc3exitza32793ze3z83zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 243 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2478z00_934;

			if (SET_EXIT(BgL_an_exit2478z00_934))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2478z00_934 = (void *) jmpbuf;
					{	/* BackEnd/dotnet.scm 243 */

						PUSH_EXIT(BgL_an_exit2478z00_934, ((long) 0));
						{	/* BackEnd/dotnet.scm 241 */
							obj_t BgL_val2479z00_935;

							BgL_val2479z00_935 = BGl_compilerz00zzengine_compilerz00();
							POP_EXIT();
							return BgL_val2479z00_935;
						}
					}
				}
		}
	}



/* backend-cnst-table-n2494 */
	obj_t BGl_backendzd2cnstzd2tablezd2n2494zd2zzbackend_dotnetz00(obj_t
		BgL_envz00_1223, obj_t BgL_mez00_1224, obj_t BgL_offsetz00_1225)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 167 */
			return BGl_string2932z00zzbackend_dotnetz00;
		}
	}



/* backend-link-dotnet2492 */
	obj_t BGl_backendzd2linkzd2dotnet2492z00zzbackend_dotnetz00(obj_t
		BgL_envz00_1226, obj_t BgL_mez00_1227, obj_t BgL_resultz00_1228)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 160 */
			return BGl_dotnetzd2ldzd2zzmsil_ldz00();
		}
	}



/* backend-compile-dotn2490 */
	obj_t BGl_backendzd2compilezd2dotn2490z00zzbackend_dotnetz00(obj_t
		BgL_envz00_1229, obj_t BgL_mez00_1230)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 44 */
			{
				BgL_dotnetz00_bglt BgL_mez00_772;

				BgL_mez00_772 = (BgL_dotnetz00_bglt) (BgL_mez00_1230);
				{	/* BackEnd/dotnet.scm 46 */
					obj_t BgL_list2691z00_776;

					{	/* BackEnd/dotnet.scm 46 */
						obj_t BgL_arg2693z00_778;

						{	/* BackEnd/dotnet.scm 46 */
							obj_t BgL_arg2695z00_780;

							BgL_arg2695z00_780 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg2693z00_778 =
								MAKE_PAIR(BGl_string2933z00zzbackend_dotnetz00,
								BgL_arg2695z00_780);
						}
						BgL_list2691z00_776 =
							MAKE_PAIR(BGl_string2934z00zzbackend_dotnetz00,
							BgL_arg2693z00_778);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list2691z00_776);
				}
				BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
				BGl_za2currentzd2passza2zd2zzengine_passz00 =
					BGl_string2933z00zzbackend_dotnetz00;
				{	/* BackEnd/dotnet.scm 46 */
					obj_t BgL_g2472z00_781;

					obj_t BgL_g2473z00_782;

					{	/* BackEnd/dotnet.scm 46 */
						obj_t BgL_list2705z00_796;

						BgL_list2705z00_796 =
							MAKE_PAIR
							(BGl_startzd2dotnetzd2emissionz12zd2envzc0zzbackend_dotnetz00,
							BNIL);
						BgL_g2472z00_781 = BgL_list2705z00_796;
					}
					BgL_g2473z00_782 = CNST_TABLE_REF(((long) 10));
					{
						obj_t BgL_hooksz00_784;

						obj_t BgL_hnamesz00_785;

						BgL_hooksz00_784 = BgL_g2472z00_781;
						BgL_hnamesz00_785 = BgL_g2473z00_782;
					BgL_zc3anonymousza32696ze3z83_786:
						if (NULLP(BgL_hooksz00_784))
							{	/* BackEnd/dotnet.scm 46 */
								CNST_TABLE_REF(((long) 11));
							}
						else
							{	/* BackEnd/dotnet.scm 46 */
								bool_t BgL_testz00_1613;

								{	/* BackEnd/dotnet.scm 46 */
									obj_t BgL_fun2704z00_794;

									BgL_fun2704z00_794 = CAR(BgL_hooksz00_784);
									BgL_testz00_1613 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun2704z00_794)
										(BgL_fun2704z00_794, BEOA));
								}
								if (BgL_testz00_1613)
									{
										obj_t BgL_hnamesz00_1620;

										obj_t BgL_hooksz00_1618;

										BgL_hooksz00_1618 = CDR(BgL_hooksz00_784);
										BgL_hnamesz00_1620 = CDR(BgL_hnamesz00_785);
										BgL_hnamesz00_785 = BgL_hnamesz00_1620;
										BgL_hooksz00_784 = BgL_hooksz00_1618;
										goto BgL_zc3anonymousza32696ze3z83_786;
									}
								else
									{	/* BackEnd/dotnet.scm 46 */
										BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string2933z00zzbackend_dotnetz00,
											BGl_string2935z00zzbackend_dotnetz00,
											CAR(BgL_hnamesz00_785));
									}
							}
					}
				}
				{	/* BackEnd/dotnet.scm 47 */
					obj_t BgL_arg2709z00_800;

					BgL_arg2709z00_800 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_772))->BgL_qnamez00);
					{	/* BackEnd/dotnet.scm 47 */
						obj_t BgL_list2711z00_802;

						{	/* BackEnd/dotnet.scm 47 */
							obj_t BgL_arg2712z00_803;

							{	/* BackEnd/dotnet.scm 47 */
								obj_t BgL_arg2713z00_804;

								{	/* BackEnd/dotnet.scm 47 */
									obj_t BgL_arg2714z00_805;

									{	/* BackEnd/dotnet.scm 47 */
										obj_t BgL_arg2716z00_806;

										{	/* BackEnd/dotnet.scm 47 */
											obj_t BgL_arg2717z00_807;

											BgL_arg2717z00_807 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg2716z00_806 =
												MAKE_PAIR(BGl_string2936z00zzbackend_dotnetz00,
												BgL_arg2717z00_807);
										}
										BgL_arg2714z00_805 =
											MAKE_PAIR(BgL_arg2709z00_800, BgL_arg2716z00_806);
									}
									BgL_arg2713z00_804 =
										MAKE_PAIR(BGl_string2937z00zzbackend_dotnetz00,
										BgL_arg2714z00_805);
								}
								BgL_arg2712z00_803 =
									MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
									BgL_arg2713z00_804);
							}
							BgL_list2711z00_802 =
								MAKE_PAIR(BGl_string2938z00zzbackend_dotnetz00,
								BgL_arg2712z00_803);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
							BgL_list2711z00_802);
				}}
				{
					obj_t BgL_auxz00_1634;

					BgL_auxz00_1634 =
						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
						(BGl_za2moduleza2z00zzmodule_modulez00);
					((((BgL_dotnetz00_bglt) CREF(BgL_mez00_772))->BgL_qnamez00) =
						((obj_t) BgL_auxz00_1634), BUNSPEC);
				}
				{	/* BackEnd/dotnet.scm 53 */
					bool_t BgL_testz00_1637;

					if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
						{	/* BackEnd/dotnet.scm 53 */
							BgL_testz00_1637 = ((bool_t) 0);
						}
					else
						{	/* BackEnd/dotnet.scm 53 */
							BgL_testz00_1637 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BGl_za2passza2z00zzengine_paramz00,
									CNST_TABLE_REF(((long) 12))));
						}
					if (BgL_testz00_1637)
						{	/* BackEnd/dotnet.scm 53 */
							BGl_za2mainza2z00zzmodule_modulez00 =
								BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
						}
					else
						{	/* BackEnd/dotnet.scm 53 */
							BFALSE;
						}
				}
				{	/* BackEnd/dotnet.scm 64 */
					obj_t BgL_bnamez00_810;

					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 5))))
						{	/* BackEnd/dotnet.scm 65 */
							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/dotnet.scm 66 */
									BgL_bnamez00_810 =
										string_append(BGl_prefixz00zz__osz00
										(BGl_basenamez00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00))),
										BGl_string2907z00zzbackend_dotnetz00);
								}
							else
								{	/* BackEnd/dotnet.scm 66 */
									BgL_bnamez00_810 = BGl_string2939z00zzbackend_dotnetz00;
								}
						}
					else
						{	/* BackEnd/dotnet.scm 65 */
							if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
								{	/* BackEnd/dotnet.scm 69 */
									BgL_bnamez00_810 =
										string_append(BGl_prefixz00zz__osz00
										(BGl_basenamez00zz__osz00
											(BGl_za2destza2z00zzengine_paramz00)),
										BGl_string2907z00zzbackend_dotnetz00);
								}
							else
								{	/* BackEnd/dotnet.scm 69 */
									if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
										{	/* BackEnd/dotnet.scm 70 */
											BgL_bnamez00_810 =
												string_append(BGl_prefixz00zz__osz00
												(BGl_basenamez00zz__osz00(CAR
														(BGl_za2srczd2filesza2zd2zzengine_paramz00))),
												BGl_string2907z00zzbackend_dotnetz00);
										}
									else
										{	/* BackEnd/dotnet.scm 70 */
											BgL_bnamez00_810 = BFALSE;
										}
								}
						}
					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 13))))
						{	/* BackEnd/dotnet.scm 77 */
							BGl_emitz00zzbackend_dotnetz00(BgL_mez00_772, BgL_bnamez00_810);
						}
					else
						{	/* BackEnd/dotnet.scm 77 */
							if (CBOOL
								(BGl_za2dotnetzd2usezd2externalzd2asmza2zd2zzengine_paramz00))
								{	/* BackEnd/dotnet.scm 79 */
									BGl_emitz00zzbackend_dotnetz00(BgL_mez00_772,
										BgL_bnamez00_810);
									BGl_dotnetzd2externalzd2asmz00zzbackend_dotnetz00
										(BGl_makezd2filezd2namez00zz__osz00
										(BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00,
											BgL_bnamez00_810));
								}
							else
								{	/* BackEnd/dotnet.scm 79 */
									BUNSPEC;
								}
						}
				}
				{	/* BackEnd/dotnet.scm 84 */
					obj_t BgL_arg2734z00_825;

					BgL_arg2734z00_825 = CNST_TABLE_REF(((long) 13));
					BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg2734z00_825,
						BGl_proc2940z00zzbackend_dotnetz00);
				}
				{	/* BackEnd/dotnet.scm 85 */
					obj_t BgL_arg2737z00_829;

					BgL_arg2737z00_829 = CNST_TABLE_REF(((long) 14));
					BGl_stopzd2onzd2passz00zzengine_passz00(BgL_arg2737z00_829,
						BGl_proc2941z00zzbackend_dotnetz00);
				}
				return CNST_TABLE_REF(((long) 15));
		}}
	}



/* emit */
	obj_t BGl_emitz00zzbackend_dotnetz00(BgL_dotnetz00_bglt BgL_mez00_1246,
		obj_t BgL_destz00_833)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 63 */
			{	/* BackEnd/dotnet.scm 57 */
				obj_t BgL_dirz00_835;

				BgL_dirz00_835 = BGl_za2dotnetzd2dirzd2nameza2z00zzbackend_dotnetz00;
				{	/* BackEnd/dotnet.scm 58 */
					obj_t BgL_portz00_836;

					if (STRINGP(BgL_destz00_833))
						{	/* BackEnd/dotnet.scm 60 */
							obj_t BgL_arg2745z00_840;

							BgL_arg2745z00_840 =
								BGl_makezd2filezd2namez00zz__osz00(BgL_dirz00_835,
								BgL_destz00_833);
							{	/* BackEnd/dotnet.scm 60 */

								BgL_portz00_836 =
									BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_arg2745z00_840, BTRUE);
							}
						}
					else
						{	/* BackEnd/dotnet.scm 59 */
							obj_t BgL_res2884z00_1099;

							{	/* BackEnd/dotnet.scm 59 */
								obj_t BgL_auxz00_1683;

								BgL_auxz00_1683 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2884z00_1099 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1683);
							}
							BgL_portz00_836 = BgL_res2884z00_1099;
						}
					BGl_msilzd2compilezd2zzmsil_compilez00(BgL_mez00_1246,
						BgL_portz00_836);
					{	/* BackEnd/dotnet.scm 62 */
						bool_t BgL_testz00_1687;

						{	/* BackEnd/dotnet.scm 62 */
							obj_t BgL_arg2742z00_838;

							{	/* BackEnd/dotnet.scm 62 */
								obj_t BgL_res2885z00_1101;

								{	/* BackEnd/dotnet.scm 62 */
									obj_t BgL_auxz00_1688;

									BgL_auxz00_1688 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2885z00_1101 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1688);
								}
								BgL_arg2742z00_838 = BgL_res2885z00_1101;
							}
							BgL_testz00_1687 = (BgL_portz00_836 == BgL_arg2742z00_838);
						}
						if (BgL_testz00_1687)
							{	/* BackEnd/dotnet.scm 62 */
								return BFALSE;
							}
						else
							{	/* BackEnd/dotnet.scm 62 */
								return bgl_close_output_port(BgL_portz00_836);
							}
					}
				}
			}
		}
	}



/* <anonymous:2739> */
	obj_t BGl_zc3anonymousza32739ze3z83zzbackend_dotnetz00(obj_t BgL_envz00_1231)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 85 */
			{

				return CNST_TABLE_REF(((long) 16));
		}}
	}



/* <anonymous:2736> */
	obj_t BGl_zc3anonymousza32736ze3z83zzbackend_dotnetz00(obj_t BgL_envz00_1232)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 84 */
			{

				return CNST_TABLE_REF(((long) 16));
		}}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_dotnetz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet.scm 1 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 69061048),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 392051205),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 450629069),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 179083793),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzcc_execz00(((long) 209072610),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzmsil_compilez00(((long) 181915969),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzmsil_ldz00(((long) 129172181),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzmsil_inlinez00(((long) 124495278),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 385369337),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
			return
				BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string2942z00zzbackend_dotnetz00));
		}
	}

#ifdef __cplusplus
}
#endif
